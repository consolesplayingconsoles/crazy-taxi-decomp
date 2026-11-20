/* files.c: the game's files, read from a folder of the disc's files (--data DIR, tools/10-port/extract_disc.py makes
   one). The game opens files by name and the entries of AFS archives by number through CRI's ADXF (its loader
   fileLoadStart / fileLoadStartAfs / fileLoadSync); these host functions take the place of ADXF's, so neither ADXF's
   own C nor the GD-ROM file system below it runs. A read completes at once.

   AFS: "AFS\0", the number of files, then each file's offset and size in bytes (32-bit little-endian). */
#define _GNU_SOURCE
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#include "port.h"

const char *port_data_dir = "data";

/* the path of name in the data folder, matched without regard to case (the disc's names are upper case) and without
   the directory part (the game's are like "\\PACK0.BIN") */
int port_data_path(const char *name, char *out, size_t size)
{
    const char *base = name;
    for (const char *p = name; *p; p++)
        if (*p == '/' || *p == '\\')
            base = p + 1;
    DIR *d = opendir(port_data_dir);
    struct dirent *e;
    if (!d)
        return 0;
    while ((e = readdir(d)))
        if (!strcasecmp(e->d_name, base)) {
            snprintf(out, size, "%s/%s", port_data_dir, e->d_name);
            closedir(d);
            return 1;
        }
    closedir(d);
    return 0;
}

static int files_debug;

/* --- AFS partitions (ADXF_LoadPartition) ----------------------------------------------------------------------------- */

#define PARTITIONS 32
static struct partition {
    char path[1024];
    uint32_t files;
    uint32_t *offset, *size;
} parts[PARTITIONS];

static int load_partition(int id, const char *name)
{
    if (id < 0 || id >= PARTITIONS)
        return -1;
    struct partition *p = &parts[id];
    if (!port_data_path(name, p->path, sizeof p->path)) {
        fprintf(stderr, PORT_NAME ": %s is not in the data folder %s\n", name, port_data_dir);
        return -1;
    }
    FILE *f = fopen(p->path, "rb");
    uint32_t head[2];
    if (!f || fread(head, 4, 2, f) != 2 || memcmp(head, "AFS", 4)) {
        fprintf(stderr, PORT_NAME ": %s is not an AFS archive\n", p->path);
        if (f)
            fclose(f);
        return -1;
    }
    free(p->offset);
    free(p->size);
    p->files = head[1];
    p->offset = calloc(p->files ? p->files : 1, 4);
    p->size = calloc(p->files ? p->files : 1, 4);
    for (uint32_t i = 0; i < p->files; i++) {
        uint32_t e[2] = {0, 0};
        if (fread(e, 4, 2, f) != 2)
            break;
        p->offset[i] = e[0];
        p->size[i] = e[1];
    }
    fclose(f);
    if (files_debug)
        fprintf(stderr, "files: partition %d = %s, %u files\n", id, p->path, p->files);
    return 0;
}

/* the AFS entry's file, offset and size, for the ADX player (adx.c) */
int port_afs_entry(int id, int file, const char **path, uint32_t *offset, uint32_t *size)
{
    if (id < 0 || id >= PARTITIONS || !parts[id].files || file < 0 || (uint32_t)file >= parts[id].files)
        return 0;
    *path = parts[id].path;
    *offset = parts[id].offset[file];
    *size = parts[id].size[file];
    return 1;
}

/* ADXF_LoadPartition(id, file name, its directory, the partition's information buffer): 0 when done */
int32_t adxf_load_partition(int32_t id, uint32_t name, uint32_t dir, uint32_t info) __asm__("ADXF_LoadPartition");
int32_t adxf_load_partition(int32_t id, uint32_t name, uint32_t dir, uint32_t info)
{
    (void)dir;
    (void)info;
    return load_partition(id, (const char *)(uintptr_t)name);
}

/* ADXF_AddPartition(id, file name, its directory, information, the base partition, the entry) */
int32_t adxf_add_partition(int32_t id, uint32_t name, uint32_t dir, uint32_t info) __asm__("ADXF_AddPartition");
int32_t adxf_add_partition(int32_t id, uint32_t name, uint32_t dir, uint32_t info)
{
    return adxf_load_partition(id, name, dir, info);
}

/* ADXF_GetPtinfoSize(files): the bytes the game sets aside for a partition's information */
int32_t adxf_get_ptinfo_size(int32_t n) __asm__("ADXF_GetPtinfoSize");
int32_t adxf_get_ptinfo_size(int32_t n) { return 2 * n + 22; }

/* --- handles ----------------------------------------------------------------------------------------------------- */

#define ADXF_STAT_STOP 1
#define ADXF_STAT_READING 2
#define ADXF_STAT_READEND 3
#define ADXF_STAT_ERROR 4
#define HANDLES 16

struct adxf {
    int used;
    FILE *f;
    uint32_t base, size;   /* the file's bytes in f */
    uint32_t pos;          /* the next sector */
    uint32_t req, done;    /* the last read's sectors: asked, read */
    int stat;
    char name[64];
};
static struct adxf handles[HANDLES];

static struct adxf *handle(uint32_t h)
{
    struct adxf *a = (struct adxf *)(uintptr_t)h;
    return a >= handles && a < handles + HANDLES && a->used ? a : 0;
}

static uint32_t open_range(const char *path, uint32_t base, uint32_t size, const char *what)
{
    for (int i = 0; i < HANDLES; i++)
        if (!handles[i].used) {
            struct adxf *a = &handles[i];
            a->f = fopen(path, "rb");
            if (!a->f)
                return 0;
            if (size == (uint32_t)-1) {
                fseek(a->f, 0, SEEK_END);
                size = (uint32_t)ftell(a->f);
            }
            a->base = base;
            a->size = size;
            a->pos = a->req = a->done = 0;
            a->used = 1;
            a->stat = ADXF_STAT_STOP;
            snprintf(a->name, sizeof a->name, "%s", what);
            if (files_debug)
                fprintf(stderr, "files: open %s (%u bytes)\n", what, size);
            return (uint32_t)(uintptr_t)a;
        }
    fprintf(stderr, PORT_NAME ": no free file handle for %s\n", what);
    return 0;
}

/* ADXF_Open(name, attribute): a handle, or 0 where the data folder has no such file */
uint32_t adxf_open(uint32_t name, uint32_t atr) __asm__("ADXF_Open");
uint32_t adxf_open(uint32_t name, uint32_t atr)
{
    const char *n = (const char *)(uintptr_t)name;
    char path[1024];
    (void)atr;
    if (!port_data_path(n, path, sizeof path)) {
        fprintf(stderr, PORT_NAME ": %s is not in the data folder %s\n", n, port_data_dir);
        return 0;
    }
    return open_range(path, 0, (uint32_t)-1, n);
}

/* ADXF_OpenAfs(partition, file) */
uint32_t adxf_open_afs(int32_t id, int32_t file) __asm__("ADXF_OpenAfs");
uint32_t adxf_open_afs(int32_t id, int32_t file)
{
    const char *path;
    uint32_t off, size;
    char what[64];
    if (!port_afs_entry(id, file, &path, &off, &size)) {
        fprintf(stderr, PORT_NAME ": no AFS entry %d of partition %d\n", file, id);
        return 0;
    }
    snprintf(what, sizeof what, "AFS %d:%d", id, file);
    return open_range(path, off, size, what);
}

void adxf_close(uint32_t h) __asm__("ADXF_Close");
void adxf_close(uint32_t h)
{
    struct adxf *a = handle(h);
    if (a) {
        fclose(a->f);
        a->used = 0;
    }
}

/* ADXF_ReadNw32(handle, sectors, buffer): read from the current sector on; done at once */
int32_t adxf_read_nw32(uint32_t h, int32_t sectors, uint32_t buf) __asm__("ADXF_ReadNw32");
int32_t adxf_read_nw32(uint32_t h, int32_t sectors, uint32_t buf)
{
    struct adxf *a = handle(h);
    if (!a || sectors <= 0)
        return 0;
    uint64_t at = (uint64_t)a->pos * 2048;
    size_t want = (size_t)sectors * 2048, have = at < a->size ? a->size - at : 0, n = want < have ? want : have;
    fseek(a->f, (long)(a->base + at), SEEK_SET);
    size_t got = n ? fread((void *)(uintptr_t)buf, 1, n, a->f) : 0;
    if (got < want && (got & 2047)) /* the last sector's tail: zeros, as the disc's padding */
        memset((char *)(uintptr_t)buf + got, 0, 2048 - (got & 2047));
    a->req = (uint32_t)sectors;
    a->done = (uint32_t)((got + 2047) / 2048);
    a->pos += a->done;
    a->stat = ADXF_STAT_READEND;
    if (files_debug)
        fprintf(stderr, "files: read %s, %d sectors to %08X\n", a->name, sectors, buf);
    return sectors;
}

int32_t adxf_stop(uint32_t h) __asm__("ADXF_Stop");
int32_t adxf_stop(uint32_t h)
{
    struct adxf *a = handle(h);
    if (a)
        a->stat = ADXF_STAT_STOP;
    return 0;
}

/* ADXF_Seek(handle, sector, from: 0 the start, 1 here, 2 the end) */
int32_t adxf_seek(uint32_t h, int32_t pos, int32_t type) __asm__("ADXF_Seek");
int32_t adxf_seek(uint32_t h, int32_t pos, int32_t type)
{
    struct adxf *a = handle(h);
    if (!a)
        return -1;
    int32_t end = (int32_t)((a->size + 2047) / 2048);
    int32_t p = type == 1 ? (int32_t)a->pos + pos : type == 2 ? end + pos : pos;
    a->pos = (uint32_t)(p < 0 ? 0 : p > end ? end : p);
    return (int32_t)a->pos;
}

int32_t adxf_tell(uint32_t h) __asm__("ADXF_Tell");
int32_t adxf_tell(uint32_t h)
{
    struct adxf *a = handle(h);
    return a ? (int32_t)a->pos : 0;
}

int32_t adxf_get_fsize_sct(uint32_t h) __asm__("ADXF_GetFsizeSct");
int32_t adxf_get_fsize_sct(uint32_t h)
{
    struct adxf *a = handle(h);
    return a ? (int32_t)((a->size + 2047) / 2048) : 0;
}

int32_t adxf_get_fsize_byte(uint32_t h) __asm__("ADXF_GetFsizeByte");
int32_t adxf_get_fsize_byte(uint32_t h)
{
    struct adxf *a = handle(h);
    return a ? (int32_t)a->size : 0;
}

int32_t adxf_get_num_req_sct(uint32_t h, uint32_t out) __asm__("ADXF_GetNumReqSct");
int32_t adxf_get_num_req_sct(uint32_t h, uint32_t out)
{
    struct adxf *a = handle(h);
    if (out)
        *(int32_t *)(uintptr_t)out = a ? (int32_t)a->pos - (int32_t)a->done : 0;
    return a ? (int32_t)a->req : 0;
}

int32_t adxf_get_num_read_sct(uint32_t h) __asm__("ADXF_GetNumReadSct");
int32_t adxf_get_num_read_sct(uint32_t h)
{
    struct adxf *a = handle(h);
    return a ? (int32_t)a->done : 0;
}

int32_t adxf_get_stat(uint32_t h) __asm__("ADXF_GetStat");
int32_t adxf_get_stat(uint32_t h)
{
    struct adxf *a = handle(h);
    return a ? a->stat : ADXF_STAT_ERROR;
}

#define NOOP(sym, fn)                                                                                                  \
    int32_t fn(void) __asm__(sym);                                                                                     \
    int32_t fn(void) { return 0; }
NOOP("ADXF_Init", adxf_init)
NOOP("ADXF_Finish", adxf_finish)
NOOP("ADXF_ExecServer", adxf_exec_server)

/* --- the GD-ROM file system: nothing to do without a drive (the game's own calls: init, the error callback, the
   drive's state) ------------------------------------------------------------------------------------------------------ */

int32_t gdfs_init(void) __asm__("gdFsInit");
int32_t gdfs_init(void) { return 0; }
int32_t gdfs_finish(void) __asm__("gdFsFinish");
int32_t gdfs_finish(void) { return 0; }
int32_t gdfs_entry_err(uint32_t fn, uint32_t obj) __asm__("gdFsEntryErrFuncAll");
int32_t gdfs_entry_err(uint32_t fn, uint32_t obj) { (void)fn; (void)obj; return 0; }
/* gdFsReqDrvStat: the request; gdFsGetDrvStat: 1 (paused: a disc in, idle) */
int32_t gdfs_req_drv_stat(void) __asm__("gdFsReqDrvStat");
int32_t gdfs_req_drv_stat(void) { return 0; }
int32_t gdfs_get_drv_stat(void) __asm__("gdFsGetDrvStat");
int32_t gdfs_get_drv_stat(void) { return 1; }

void port_files_init(void) { files_debug = getenv("PORT_DEBUG_FILES") != 0; }
