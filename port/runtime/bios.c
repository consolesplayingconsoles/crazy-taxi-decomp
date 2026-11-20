/* bios.c: the Dreamcast boot ROM's system calls, as the game's library reaches them. The library calls through the
   vectors the ROM leaves in RAM (0x8C0000B0 system information, 0x8C0000B4 the ROM font, 0x8C0000B8 the flash memory,
   0x8C0000BC the GD-ROM, 0x8C0000E0 the system's own: disc check, exit to the menu), with the arguments in r4-r6 and
   the function number in r7: on the host, four int arguments. port_bios_install points each vector at an address
   no function uses, and the dispatch table sends a call there to these port_entry_ functions.

   The flash: 128 KB with the console's partitions; erased (0xFF) except the factory partition's region bytes, so the
   system configuration (syCfg) finds no record and takes its defaults. Writes go to the copy in memory.

   The GD-ROM: the game reads its files through the port's ADXF (files.c), not through the drive. The drive answers as
   an idle drive with a GD-ROM in it; commands complete at once. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "port.h"

#define U32(a) (*(volatile uint32_t *)(uintptr_t)(a))
#define PTR(a) ((void *)(uintptr_t)(uint32_t)(a))

static int bios_debug;

static void trace(const char *what, int r4, int r5, int r6, int r7)
{
    if (bios_debug)
        fprintf(stderr, "bios: %s(%#x, %#x, %#x, %d)\n", what, r4, r5, r6, r7);
}

/* --- system information (0x8C0000B0) ---------------------------------------------------------------------------------
   0: init (the ID block copied to 0x8C000068), 3: the ID block's address. The block: an 8-byte console ID, then the
   factory partition's 5 region bytes: area, ..., [3] the default language (syCfgGetDefaultLanguage reads it when the
   system settings hold none: '0' Japanese, '1' English), [4] the broadcast standard ('0' NTSC) */
#define SYSINFO 0x8C000068u

static void sysinfo_fill(void)
{
    static const unsigned char id[8] = {0x12, 0x34, 0x56, 0x78, 0x9A, 0xBC, 0xDE, 0xF0};
    memcpy(PTR(SYSINFO), id, 8);
    memcpy(PTR(SYSINFO + 8), "11010", 5);   /* area 1 (America), English, NTSC */
}

int32_t bios_sysinfo(int r4, int r5, int r6, int r7)
{
    trace("sysinfo", r4, r5, r6, r7);
    switch (r7) {
    case 0:
        sysinfo_fill();
        return 0;
    case 3:
        return (int32_t)SYSINFO;
    default:
        return 0;
    }
}

/* --- the ROM font (0x8C0000B4): 1 returns the font's address, 2 and 3 lock and unlock it ------------------------------ */
static uint32_t font_addr;

int32_t bios_font(int r4, int r5, int r6, int r7)
{
    trace("font", r4, r5, r6, r7);
    return r7 == 0 ? (int32_t)font_addr : 0;  /* no game code calls it */
}

/* --- the flash (0x8C0000B8): 0 info(partition, out[2] offset and size), 1 read(offset, buffer, size),
   2 write(offset, buffer, size), 3 erase(offset) ---------------------------------------------------------------------- */
#define FLASH_SIZE 0x20000
static unsigned char flash[FLASH_SIZE];
static const uint32_t flash_part[5][2] = {
    {0x1A000, 0x02000}, /* factory: the region bytes */
    {0x18000, 0x02000}, /* reserved */
    {0x1C000, 0x04000}, /* the system's settings (block records) */
    {0x10000, 0x08000}, /* the game's (block records) */
    {0x00000, 0x10000}, /* other */
};

static void flash_init(void)
{
    memset(flash, 0xFF, sizeof flash);
    memcpy(flash + 0x1A000, "11010", 5);
    memcpy(flash + 0x1A005, "Dreamcast  ", 11);
}

int32_t bios_flash(int r4, int r5, int r6, int r7)
{
    trace("flash", r4, r5, r6, r7);
    uint32_t off = (uint32_t)r4;
    switch (r7) {
    case 0:
        if (r4 < 0 || r4 > 4)
            return -1;
        U32((uint32_t)r5) = flash_part[r4][0];
        U32((uint32_t)r5 + 4) = flash_part[r4][1];
        return 0;
    case 1:
        if (off >= FLASH_SIZE || (uint32_t)r6 > FLASH_SIZE - off)
            return -1;
        memcpy(PTR(r5), flash + off, (size_t)r6);
        return r6;
    case 2:
        if (off >= FLASH_SIZE || (uint32_t)r6 > FLASH_SIZE - off)
            return -1;
        for (int i = 0; i < r6; i++) /* flash bits only clear on a write */
            flash[off + (uint32_t)i] &= ((unsigned char *)PTR(r5))[i];
        return r6;
    case 3:
        for (int p = 0; p < 5; p++)
            if (off >= flash_part[p][0] && off < flash_part[p][0] + flash_part[p][1]) {
                memset(flash + flash_part[p][0], 0xFF, flash_part[p][1]);
                return 0;
            }
        return -1;
    default:
        return -1;
    }
}

/* --- the GD-ROM (0x8C0000BC): 0 request a command (cmd, params) -> request id, 1 its status (id, out[4]),
   2 run the drive, 3 init, 4 the drive's status (out[2]), 5 the G1 DMA end, 6 request a DMA transfer,
   7 its check, 8 abort, 9 reset ------------------------------------------------------------------------------------ */
static int gd_next_id = 1;

int32_t bios_gd(int r4, int r5, int r6, int r7)
{
    trace("gd", r4, r5, r6, r7);
    switch (r7) {
    case 0:                                       /* the command completes at once */
        if (bios_debug)
            fprintf(stderr, "bios: gd command %d\n", r4);
        return gd_next_id++;
    case 1:                                       /* complete: status 2, no error */
        if (r5)
            memset(PTR(r5), 0, 16);
        return 2;
    case 4:                                       /* the drive: paused (1), a GD-ROM (0x80) */
        if (r4)
            U32((uint32_t)r4) = 1, U32((uint32_t)r4 + 4) = 0x80;
        return 0;
    case 7:
        if (r5)
            U32((uint32_t)r5) = 0;
        return 0;
    default:
        return 0;
    }
}

/* --- the system's own (0x8C0000E0): r4 1 exit to the console's menu, 2 the disc check, 0 the soft reset ----------------- */
int32_t bios_system(int r4, int r5, int r6, int r7)
{
    trace("system", r4, r5, r6, r7);
    if (r4 == 1 || r4 == -1 || r4 == 0) {
        fprintf(stderr, PORT_NAME ": the game left for the console's menu\n");
        exit(0);
    }
    return 0;
}

/* the vectors: each points at an address below the image, where the dispatch table finds the port_entry_ below */
#define V_SYSINFO 0x8C000F00u
#define V_FONT 0x8C000F10u
#define V_FLASH 0x8C000F20u
#define V_GD 0x8C000F30u
#define V_SYSTEM 0x8C000F40u

int32_t port_entry_8c000f00(int r4, int r5, int r6, int r7) { return bios_sysinfo(r4, r5, r6, r7); }
int32_t port_entry_8c000f10(int r4, int r5, int r6, int r7) { return bios_font(r4, r5, r6, r7); }
int32_t port_entry_8c000f20(int r4, int r5, int r6, int r7) { return bios_flash(r4, r5, r6, r7); }
int32_t port_entry_8c000f30(int r4, int r5, int r6, int r7) { return bios_gd(r4, r5, r6, r7); }
int32_t port_entry_8c000f40(int r4, int r5, int r6, int r7) { return bios_system(r4, r5, r6, r7); }

void port_bios_install(void)
{
    bios_debug = getenv("PORT_DEBUG_BIOS") != 0;
    flash_init();
    sysinfo_fill();
    font_addr = 0x8C001000u;                      /* 0x8C001000-0x8C00C000: zeros stand for the ROM's font */
    U32(0x8C0000B0u) = V_SYSINFO;
    U32(0x8C0000B4u) = V_FONT;
    U32(0x8C0000B8u) = V_FLASH;
    U32(0x8C0000BCu) = V_GD;
    U32(0x8C0000E0u) = V_SYSTEM;
}
