/* vmu.c: the memory card (VMU) as a folder of files, after the Power Stone port's (which serves the same Katana backup
   library to another game). The game uses the backup library (bu*) over the VMU file system (vmsfs_*), whose
   Maple driver has no C: these host functions take the library's place for one card in port A's first socket
   (drive 0). Its files live in --vmu DIR (default $XDG_DATA_HOME/<game>/vmu or ~/.local/share/<game>/vmu, <game> = PORT_NAME), one
   host file per card file, its bytes as the card holds them (the game builds the VMS header itself, with
   buMakeBackupFileImage).

   The game polls (buStat until it is not -1, then buGetLastError) and is told of the card through the callback it
   registers (buSetCompleteCallback): (drive, operation, result), operation 1 the card mounted, 2 removed, others the
   end of a load (11), save (12) or delete (13). An operation completes at once; its event reaches the game at the next
   frame end, from the game's thread, as the library's server would deliver it. */
#define _GNU_SOURCE
#include <dirent.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>

#include "port.h"

#define BUD_ERR_OK 0
#define BUD_ERR_GENERIC ((int32_t)0xFFFFFF00)
#define BUD_ERR_NO_DISK ((int32_t)0xFFFFFF01)
#define BUD_ERR_FILE_NOT_FOUND ((int32_t)0xFFFFFF05)
#define BUD_ERR_DISK_FULL ((int32_t)0xFFFFFF06)
#define BLOCK 512
#define USER_BLOCKS 200
#define DRIVE 0

#define U8(a) (*(volatile uint8_t *)(uintptr_t)(a))
#define U16(a) (*(volatile uint16_t *)(uintptr_t)(a))
#define U32(a) (*(volatile uint32_t *)(uintptr_t)(a))

const char *port_vmu_dir;
static char dir[1024];
static uint32_t complete_cb;  /* the game's: (drive, operation, result) */
static int ready, last_error;

static struct { int32_t drive, op, stat; } events[32];
static int nevents;

static int debug = -1;
#define LOG(...) do { if (debug < 0) debug = getenv("PORT_DEBUG_VMU") != 0; if (debug) fprintf(stderr, PORT_NAME ": vmu: " __VA_ARGS__); } while (0)

static void post(int32_t drive, int32_t op, int32_t stat)
{
    LOG("event: drive %d operation %d result %d\n", drive, op, stat);
    if (nevents < 32)
        events[nevents++] = (typeof(events[0])){drive, op, stat};
}

/* the events waiting for the game (port_frame_end) */
void port_vmu_deliver(void)
{
    int n = nevents;
    nevents = 0;
    for (int i = 0; i < n; i++) {
        const struct port_entry *e = complete_cb ? port_lookup(0x8C000000u | (complete_cb & 0x00FFFFFFu)) : 0;
        if (e)
            ((int32_t (*)(int32_t, int32_t, int32_t, int32_t))e->fn)(events[i].drive, events[i].op, events[i].stat, 0);
    }
}

static int mkdirs(const char *p)
{
    char tmp[1024];
    snprintf(tmp, sizeof tmp, "%s", p);
    for (char *s = tmp + 1; *s; s++)
        if (*s == '/') {
            *s = 0;
            mkdir(tmp, 0755);
            *s = '/';
        }
    return mkdir(tmp, 0755) == 0 || errno == EEXIST;
}

static void set_dir(void)
{
    if (port_vmu_dir)
        snprintf(dir, sizeof dir, "%s", port_vmu_dir);
    else if (getenv("XDG_DATA_HOME"))
        snprintf(dir, sizeof dir, "%s/" PORT_NAME "/vmu", getenv("XDG_DATA_HOME"));
    else
        snprintf(dir, sizeof dir, "%s/.local/share/" PORT_NAME "/vmu", getenv("HOME") ? getenv("HOME") : ".");
    if (!mkdirs(dir))
        fprintf(stderr, PORT_NAME ": the memory card's folder %s: %s\n", dir, strerror(errno));
}

/* a card file's host path; 0 for a name that is no card file name (1-12 characters) */
static int path_of(uint32_t name, char *out, size_t size)
{
    const char *n = (const char *)(uintptr_t)name;
    size_t len = strnlen(n, 13);
    if (!len || len > 12 || strchr(n, '/'))
        return 0;
    snprintf(out, size, "%s/%.12s", dir, n);
    return 1;
}

static long file_bytes(uint32_t name)
{
    char p[1100];
    struct stat st;
    if (!path_of(name, p, sizeof p) || stat(p, &st) != 0)
        return -1;
    return (long)st.st_size;
}

static int used_blocks(void)
{
    DIR *d = opendir(dir);
    struct dirent *e;
    int used = 0;
    if (!d)
        return 0;
    while ((e = readdir(d))) {
        char p[1400];
        struct stat st;
        snprintf(p, sizeof p, "%s/%s", dir, e->d_name);
        if (e->d_name[0] != '.' && stat(p, &st) == 0 && S_ISREG(st.st_mode))
            used += (int)((st.st_size + BLOCK - 1) / BLOCK);
    }
    closedir(d);
    return used;
}

/* BUS_TIME: year (16 bits), month, day, hour, minute, second, day of the week */
static void put_time(uint32_t at, time_t t)
{
    struct tm tm;
    localtime_r(&t, &tm);
    U16(at) = (uint16_t)(tm.tm_year + 1900);
    U8(at + 2) = (uint8_t)(tm.tm_mon + 1);
    U8(at + 3) = (uint8_t)tm.tm_mday;
    U8(at + 4) = (uint8_t)tm.tm_hour;
    U8(at + 5) = (uint8_t)tm.tm_min;
    U8(at + 6) = (uint8_t)tm.tm_sec;
    U8(at + 7) = (uint8_t)tm.tm_wday;
}

static int ours(int32_t drive) { return drive == DRIVE && ready; }

/* buInit(capacity, drives, work, callback): the library ready; then the callback that registers the game's callbacks
   (FUN_8c0dfc08); the card mounts at the next frame */
int32_t bu_init(int32_t capacity, int32_t drives, uint32_t work, uint32_t cb) __asm__("buInit");
int32_t bu_init(int32_t capacity, int32_t drives, uint32_t work, uint32_t cb)
{
    (void)capacity;
    (void)drives;
    (void)work;
    set_dir();
    ready = 1;
    LOG("init, the card's files in %s\n", dir);
    if (cb) {
        const struct port_entry *e = port_lookup(0x8C000000u | (cb & 0x00FFFFFFu));
        if (e)
            ((int32_t (*)(void))e->fn)();
    }
    post(DRIVE, 1, BUD_ERR_OK);
    return 0;
}

int32_t bu_exit(void) __asm__("buExit");
int32_t bu_exit(void) { ready = 0; return 0; }

int32_t bu_set_complete(uint32_t fn) __asm__("buSetCompleteCallback");
int32_t bu_set_complete(uint32_t fn) { complete_cb = fn; return 0; }
int32_t bu_set_progress(uint32_t fn) __asm__("buSetProgressCallback");
int32_t bu_set_progress(uint32_t fn) { (void)fn; return 0; }

/* buStat(drive): -1 while an operation runs (never here), 0 idle */
int32_t bu_stat(int32_t drive) __asm__("buStat");
int32_t bu_stat(int32_t drive) { (void)drive; return 0; }

/* buIsReady(drive), buIsFormat(drive): 1 for the card once the library is up, else 0. Crazy Taxi asks them before each
   load or save (its "LOAD failed" when not ready); the library's own C would ask the Maple driver, which has none. The
   file system's vmsio_isready / vmsio_ismount, which the game's card code also asks, say the same */
int32_t bu_is_ready(int32_t drive) __asm__("buIsReady");
int32_t bu_is_ready(int32_t drive) { return ours(drive) ? 1 : 0; }
int32_t bu_is_format(int32_t drive) __asm__("buIsFormat");
int32_t bu_is_format(int32_t drive) { return ours(drive) ? 1 : 0; }
int32_t vmsio_is_ready(int32_t drive) __asm__("vmsio_isready");
int32_t vmsio_is_ready(int32_t drive) { return ours(drive) ? 1 : 0; }
int32_t vmsio_is_mount(int32_t drive) __asm__("vmsio_ismount");
int32_t vmsio_is_mount(int32_t drive) { return ours(drive) ? 1 : 0; }

int32_t bu_last_error(int32_t drive) __asm__("buGetLastError");
int32_t bu_last_error(int32_t drive) { return ours(drive) ? last_error : BUD_ERR_NO_DISK; }

/* buGetDiskInfo(drive, info): the volume label (32 bytes), capacity at +0x20, the block size's word at +0x22, free
   blocks at +0x24 and +0x26, the user blocks at +0x28, free at +0x2A, ... the time at +0x30 */
int32_t bu_disk_info(int32_t drive, uint32_t info) __asm__("buGetDiskInfo");
int32_t bu_disk_info(int32_t drive, uint32_t info)
{
    if (!ours(drive))
        return BUD_ERR_NO_DISK;
    int free_blocks = USER_BLOCKS - used_blocks();
    if (free_blocks < 0)
        free_blocks = 0;
    memset((void *)(uintptr_t)info, 0, 0x38);
    U16(info + 0x20) = 256;
    U16(info + 0x22) = 255;
    U16(info + 0x24) = (uint16_t)free_blocks;
    U16(info + 0x26) = (uint16_t)free_blocks;
    U16(info + 0x28) = USER_BLOCKS;
    U16(info + 0x2A) = (uint16_t)free_blocks;
    U16(info + 0x2C) = BLOCK;
    U16(info + 0x2E) = 0;
    put_time(info + 0x30, time(0));
    return BUD_ERR_OK;
}

/* buGetFileInfo(drive, name, info): bytes at +0, blocks at +4, executable at +6, the header's block at +8, the time at
   +0xA */
int32_t bu_file_info(int32_t drive, uint32_t name, uint32_t info) __asm__("buGetFileInfo");
int32_t bu_file_info(int32_t drive, uint32_t name, uint32_t info)
{
    char p[1100];
    struct stat st;
    if (!ours(drive))
        return BUD_ERR_NO_DISK;
    if (!path_of(name, p, sizeof p) || stat(p, &st) != 0)
        return BUD_ERR_FILE_NOT_FOUND;
    uint32_t blocks = (uint32_t)((st.st_size + BLOCK - 1) / BLOCK);
    U32(info) = blocks * BLOCK;
    U16(info + 4) = (uint16_t)blocks;
    U8(info + 6) = 0;
    U8(info + 7) = 0;
    U16(info + 8) = 0;
    put_time(info + 0xA, st.st_mtime);
    return BUD_ERR_OK;
}

int32_t bu_exists(int32_t drive, uint32_t name) __asm__("buIsExistFile");
int32_t bu_exists(int32_t drive, uint32_t name)
{
    int32_t r = !ours(drive) ? BUD_ERR_NO_DISK : file_bytes(name) >= 0 ? BUD_ERR_OK : BUD_ERR_FILE_NOT_FOUND;
    LOG("exists %.12s, drive %d: %d\n", (const char *)(uintptr_t)name, drive, r);
    return r;
}

/* buGetFileSize(drive, name): in blocks */
int32_t bu_file_size(int32_t drive, uint32_t name) __asm__("buGetFileSize");
int32_t bu_file_size(int32_t drive, uint32_t name)
{
    long n = ours(drive) ? file_bytes(name) : -1;
    int32_t r = !ours(drive) ? BUD_ERR_NO_DISK : n < 0 ? BUD_ERR_FILE_NOT_FOUND : (int32_t)((n + BLOCK - 1) / BLOCK);
    LOG("size %.12s, drive %d: %d\n", (const char *)(uintptr_t)name, drive, r);
    return r;
}

/* buLoadFile(drive, name, buffer, blocks) */
int32_t bu_load(int32_t drive, uint32_t name, uint32_t buf, int32_t blocks) __asm__("buLoadFile");
int32_t bu_load(int32_t drive, uint32_t name, uint32_t buf, int32_t blocks)
{
    char p[1100];
    if (!ours(drive))
        return -1;
    FILE *f = path_of(name, p, sizeof p) ? fopen(p, "rb") : 0;
    if (!f)
        last_error = BUD_ERR_FILE_NOT_FOUND;
    else {
        size_t want = (size_t)(blocks > 0 ? blocks : 0) * BLOCK, got = fread((void *)(uintptr_t)buf, 1, want, f);
        if (got < want)
            memset((char *)(uintptr_t)buf + got, 0, want - got);
        fclose(f);
        last_error = BUD_ERR_OK;
    }
    LOG("load %.12s, %d blocks: %d\n", (const char *)(uintptr_t)name, blocks, last_error);
    post(drive, 11, last_error);
    return 0;
}

/* buSaveFile(drive, name, buffer, blocks, time, flags) */
int32_t bu_save(int32_t drive, uint32_t name, uint32_t buf, int32_t blocks, uint32_t tm, int32_t flags) __asm__("buSaveFile");
int32_t bu_save(int32_t drive, uint32_t name, uint32_t buf, int32_t blocks, uint32_t tm, int32_t flags)
{
    char p[1100], tmp[1200];
    (void)tm;
    (void)flags;
    if (!ours(drive))
        return -1;
    long had = file_bytes(name);
    int have_blocks = had < 0 ? 0 : (int)((had + BLOCK - 1) / BLOCK);
    if (!path_of(name, p, sizeof p))
        last_error = BUD_ERR_GENERIC;
    else if (blocks - have_blocks > USER_BLOCKS - used_blocks())
        last_error = BUD_ERR_DISK_FULL;
    else {
        snprintf(tmp, sizeof tmp, "%s.tmp", p);
        FILE *f = fopen(tmp, "wb");
        int ok = f && fwrite((const void *)(uintptr_t)buf, BLOCK, (size_t)blocks, f) == (size_t)blocks;
        if (f && fclose(f) != 0)
            ok = 0;
        last_error = ok && rename(tmp, p) == 0 ? BUD_ERR_OK : BUD_ERR_GENERIC;
    }
    LOG("save %.12s, %d blocks: %d\n", (const char *)(uintptr_t)name, blocks, last_error);
    post(drive, 12, last_error);
    return 0;
}

int32_t bu_delete(int32_t drive, uint32_t name) __asm__("buDeleteFile");
int32_t bu_delete(int32_t drive, uint32_t name)
{
    char p[1100];
    if (!ours(drive))
        return -1;
    last_error = path_of(name, p, sizeof p) && unlink(p) == 0 ? BUD_ERR_OK : BUD_ERR_FILE_NOT_FOUND;
    post(drive, 13, last_error);
    return 0;
}
