/* Fiber server teardown, the MMU table clear and ADX amplifier start. */

extern void _destructFiber(char *srv, char *fbr);
extern void buFbrKillFiber(char *srv, int i);
extern void *memset(void *p, int c, unsigned int n);
extern void syMmuDeleteEntry(int e);

/* Destroy every live fiber (292-byte records from +528; count at +520), then clear the server. */

/* Kill every live fiber at or below the given level (+16). */

/* Delete the 16 + 8 + 1 MMU entries listed at 0C2EBF10. */

/* Clear the channel levels (one word per channel at +20; channel count in byte +2), the peak (+44),
   and mark it started (byte +1 = 2). */

extern void mwRnaSetStmHdInfo(int h, int info, int *out);
extern void syRtcGetDate(void *date);
extern void syRtcDateToCount(void *date, int *count);
extern void ADXT_GetTime(int h, int *t, int *f);
extern int gdFsGetDirInfo(int dir, int *info);

/* Hand the stream header to the RNA and return what it reports back. */

/* Seconds since the clock's epoch: read the date, convert it to a count. */

/* Playing time in hundredths of a second (samples / rate * 100). */

/* A file's size in 2048-byte sectors (rounded up) through gdFsGetDirInfo; returns its result. */

/* Switch the sort mode when asked for the current one: 0C2EA840 = 3, mode 1 becomes 0, any other 1. */
void kmSetAutoSortMode(int mode)
{
    if (*(int *)0x0C2EA844 == mode) {
        *(int *)0x0C2EA840 = 3;
        *(int *)0x0C2EA844 = (mode == 1) ? 0 : 1;
    }
}

extern int gdFsLoadDir(int dir, int buf);
extern int *mpdrv_get_device(int port);
extern void *memmove(void *d, void *s, unsigned int n);
extern void ADXCRS_Lock(void);
extern void ADXCRS_Unlock(void);

/* Clear a 100-byte handle. */

/* Clear a 72-byte file handle. */


/* Does the port's device report state s (+32)? */

/* Set a drive's 8-byte time stamp (+108 of its 128-byte record). */

/* First init only: count it and clear the 32 SJMEM records. */

/* First init only: clear the 64 SJRBF records. */

/* First init only: clear the 64 SJUNI records. */

/* Clear an amplifier inside the ADX critical section. */

typedef struct {
    int ptr;
    int len;
} Chunk;

/* Set (or with a null function, clear) the RNA error callback and its argument; clear the message
   buffer. */

/* Split a chunk: the first n bytes (at most) into a, the rest into b. */

extern int syBtCfgSet(int item, int value);
extern int kmiFBgetfreemem(int *a, int *b, int *c, int *d);

/* Sound mode 0 (stereo) or 1 (mono) into the system config; -1 on a bad mode, no config, or a failed
   write. */

/* Free texture memory: the three free areas summed into total, the largest block into largest. */
int kmGetFreeTextureMem(int *total, int *largest)
{
    int v[4];
    int r;

    r = kmiFBgetfreemem(&v[0], &v[1], &v[2], &v[3]);
    *total = v[0] + v[1] + v[2];
    *largest = v[3];
    return r;
}

/* Day of the week (0 = Sunday) by Zeller's rule; January and February count as months 13 and 14 of
   the year before. */

extern void kmSetFogDensity(int d);
extern void kmiMemCopy8(int a, int *v, int n);
extern int buSaveFile(int a, int b, int c, int d, void *date, int flags);
extern void syRtcGetDate(void *date);

typedef struct {
    int w[2];
} Date8;

/* Fog density as the kit's 8.8 form: the float's mantissa top byte (with the hidden bit) and its
   exponent, denormalised for values under 1. Returns the value set. */

/* Texture filter mode (table at 0C175FC4) into bits 13-14 of the context word (0C2EABB0), mirrored at
   0C17830C. */
int kmChangeContextFilterMode(int mode)
{
    int *ctx = (int *)0x0C2EAB9C;

    ctx[5] = (ctx[5] & 0xFFFF9FFF) | (((int *)0x0C175FC4)[mode] << 13);
    *(int *)0x0C17830C = ctx[5];
    return 0;
}

/* Patch vertex parameter i (table at *0C2B8CBC) with v and step its pointer by n words. */
int kmChangeVertexPCW(int i, int v, int n)
{
    int *e = (int *)(*(int *)0x0C2B8CBC + i * 4);

    *(int **)0x0C2B8CC0 = e;
    kmiMemCopy8(*e, &v, 4);
    **(int **)0x0C2B8CC0 += n * 4;
    return 0;
}

/* Save a VMU file stamped with today's date. */

extern int kmytex_ABSalloc(int big, int size, int a, int *b, int e, int f);

/* Age of the moon in days: seconds since a known new moon (count 0x5CB417D1) modulo the synodic
   month (2551423 s), counted back for earlier dates. */

/* Allocate from the absolute area: big requests (b[7] at or over the limit at 0C177FB4) take the
   other pool. */
int kmiABSalloc(int a, int *b)
{
    if (b[7] >= *(int *)0x0C177FB4) {
        return kmytex_ABSalloc(1, b[7], a, b, 0, 1);
    }
    return kmytex_ABSalloc(0, b[7], a, b, 0, 1);
}

extern void mwRnaLockCs(int *cs);
extern void mwRnaSetPlaySw(int *h, int on);
extern void mwRnaSetTransSw(int *h, int on);
extern void mwlRnaClearBuf(int *h);
extern void mwRnaUnlockCs(int *cs);
extern void mwRnaErrCallFunc(int *h, int b, int c, int d, char *msg);

/* Stop a playing stream inside the RNA critical section: play and transfer off, buffer cleared,
   both state bytes (+1, +7) cleared. */

/* Store a triangle point (eight floats; the first and last with bit 0 set) in slot i of +112. */

extern int syRtcAicaSetWriteFlag(void);
extern int syRtcAicaSetDateLo(int lo);
extern int syRtcAicaSetDateHi(int hi);
extern unsigned int syRtcGetCountForce(void);
extern void kmiFBgetfreememEx(int *a, int *b);
extern int kmytex_TXalloc(int big, int a, int b);
extern int vmsfs_c_getstate(int drive);
extern void vmsfs_c_setfunc(int drive, int func);
extern void vmsfs_c_setparam(int drive, int a, int b, int c, int d, int e, int f);
extern void vmsfs_c_setfname(int drive, char *name, char *ext);

/* Set the clock: write the count's low and high halves, read it back; 0 when it took (or ticked
   once meanwhile), -1 otherwise, or the first write's error. */

/* Texture memory: with the split pool on (flag 4 of 0C2EA684), the upper pool unless it has less free
   than the lower one. */
int kmiTXalloc(int a, int b)
{
    int f[2];

    if (*(int *)0x0C2EA684 & 4) {
        kmiFBgetfreememEx(&f[0], &f[1]);
        return kmytex_TXalloc((f[0] >= f[1]) ? 0 : 1, a, b);
    }
    return kmytex_TXalloc(1, a, b);
}

/* Queue a VMU load (operation 11): file name, buffer and size; -1 while the drive is busy. */

/* Queue a partial VMU load (operation 14): as buLoadFile with a start offset. */

extern void adxf_SetCmdHstry(int cmd, int when, void *h, int a, int b);
extern int ADXF_Stop(signed char *h);
extern int syG2Read(unsigned int src, void *dst, int size, int n, int e, int f);
extern void syRtcDbgWriteLog(int v);

/* Queue a VMU executable rewrite (operation 20), arguments as buLoadFileEx. */

/* Close an ADX file handle (stopping a read in progress) inside the critical section, logged before
   and after. */

/* Clear the two BSS sections and copy the two initialised data sections (bounds at 0C089F34.. and
   0C174B54..). */

/* Read the AICA clock (two 16-bit halves) into *count; -1 when the read fails. */

extern int memcmp(void *a, void *b, int n);
extern void ovLibEntryTbl(void *e);
extern void fmMngMcpy(void *d, void *s, int n);
extern unsigned int fmcalccrc(int n, unsigned char *p);
extern int mwlSbGetStreamParam(void *h, int item, int x);
extern int kbCfgIni_sub(void);
extern int syBtFlRead(int addr, unsigned char *buf, int n);
extern void syCacheOCWB(void *p, int n);

/* Register an overlay's libraries: its header id (+48) must match 0C174DC8; then each 32-byte entry
   after it whose id (+16) matches 0C174DD8 is entered. -1 for a foreign overlay. */

/* Check the current 64-byte VMU block (+12, index +40): -6 when busy (+2), 0 for an unused block
   (0xFFFF) or a good CRC (+62), -4 for a bad one. */

/* Read items 7 and 8 of a stream header: the first as is, the second as a level in dB (3 per step
   under 15, -45 for none); both into out and the handle (+72, +76). */

/* Keyboard config: two bytes at 0x1A05E of the flash, copied to the system area (0x8C000070) unless
   blank. Returns kbCfgIni_sub's value. */
int kbCfgIni(void)
{
    int r = kbCfgIni_sub();
    unsigned char b[2];

    if (syBtFlRead(0x1A05E, b, 2) == 0) {
        if (!(b[0] == 0xFF && b[1] == 0xFF)) {
            *(unsigned char *)0x8C000070 = b[0];
            *(unsigned char *)0x8C000071 = b[1];
            syCacheOCWB((void *)0x8C000070, 2);
        }
    }
    return r;
}

/* Queue a VMU attribute change (operation 10): copy flags and the 8-bit attribute. */

extern int mpdrv_get_nopcount(int a, int b, int c, int d);
extern int mpdrv_get_timeout(int a, int b, int c, int d);
extern int mpdrv_get_dreqcount(int a, int b, int c, int d);
extern int mpdrv_get_speed(int a, int b, int c, int d);
extern int mpdrv_get_debugmode(int a, int b, int c, int d);
extern int mpdrv_get_swapmode(int a, int b, int c, int d);
extern int mpdrv_get_optimize(int a, int b, int c, int d);
extern int mpdrv_get_rootplay(int a, int b, int c, int d);
extern int mpdrv_get_gunmode(int a, int b, int c, int d);
extern int mpdrv_get_autoflash(int a, int b, int c, int d);
extern int gdFsGetSearchID(char *name);
extern int gdFsStrcmp(char *name, char *entry);
extern int gdFsStrcmpi(char *name, char *entry);

/* Read a peripheral driver setting by number; -1 for an unknown one. */

/* Sanity-check a drive's FAT: every used block's link must stay inside its area (the system area
   below the save-area start, the save area below the block count + 1). -1 on a bad link. */

/* Index + 1 of a name in a GD directory (44-byte entries from +16, count at +0), matched first by
   its hash byte (+9) and then by name (mode 1 exact); 0 when absent. */

extern unsigned char DECtoBCD(int v);

/* A date in VMU form: century, year, month, day, hour, minute, second as BCD, then the weekday
   through the table at 0C176414. */

extern void kmProcessVertexRenderState(int *s);
extern void kmSetVertexRenderState(int *s);

/* Fill a vertex render state with the defaults (opaque, no texture, colours 1.0) and apply it. */

extern int vmsio_isready(int drive);
extern void vmsfs_unmount(int drive);
extern int vmsio_ismount(int drive);
extern int buIsFormat(int drive);
extern int check_isopen(int drive, char *name);
extern int search_dir(int drive, char *name, int *info);

/* Size of a VMU file in blocks: -255 when the drive is not ready (it is unmounted if it went away),
   -253 unformatted, -245 when the file is open, -251 when it is missing. */

extern int syChainAddHandler(int event, void *func, int pri, int arg);
extern void kdVbInHandler(void);
extern void kdDmaEndHandler0(void);
extern void kdDmaEndHandler1(void);
extern void kdVbOverHandler(void);

/* Peripheral driver start: chain its four interrupt handlers (priorities from 0C1762FC) and clear
   its state, including the light gun's. */

extern void kdInitSystem(int a, int b);
extern int kdGetDeviceInfo(int port);
extern void _pd_peripheral_set_null(void *slot);

/* Peripheral library start: clear the 24 slot records (52 bytes at 0C2B8DA8), start the driver when
   both of its arguments are given, and attach each slot's device info. */

extern int kmSetBackGroundRenderState(int *s);

/* The background vertex render state defaults (colour white 1.0, flags as nlSysInitStripContextVtx but state 11
   and 1), applied through kmProcessVertexRenderState, then as the background state. */

/* Read a VMU's 32-byte volume label (from the drive's info at +32, +16): -255 when the drive is not
   ready (unmounted if it went away), -253 unformatted. */

/* Background colour and fog registers: the two colour quads at +112 / +128 (four floats each, 0.0-1.0)
   as packed ARGB bytes (x 255) into 0C2EA838 / 0C2EA83C, and three words from +148 copied to
   0C2EA820..28. Returns 0. */
int kmSetBackGroundRenderState(int *s)
{
    float *f = (float *)s;
    float sc = 255.0f;
    int a;
    int b;
    int c;
    int d;

    a = (int)(f[28] * sc);
    b = (int)(f[29] * sc);
    c = (int)(f[30] * sc);
    d = (int)(f[31] * sc);
    *(int *)0x0C2EA838 = (a << 24) | (b << 16) | (c << 8) | d;
    a = (int)(f[32] * sc);
    b = (int)(f[33] * sc);
    c = (int)(f[34] * sc);
    d = (int)(f[35] * sc);
    *(int *)0x0C2EA83C = (a << 24) | (b << 16) | (c << 8) | d;
    *(int *)0x0C2EA820 = s[37];
    *(int *)0x0C2EA824 = s[38];
    *(int *)0x0C2EA828 = s[39];
    return 0;
}

extern void ADXERR_CallErrFunc(char *msg);
extern void ADXSTM_Stop(int h);
extern void ADXSTM_GetCurOfst(int h, int *ofs);
extern void adxf_CloseSjStm(signed char *h);

/* Stop an ADX file read: -3 for a null handle, -1 when it has no stream, a stopped (state 3) handle
   just goes back to 1, a reading one is stopped, its position kept (+36) and its stream closed
   inside the critical section. Returns the handle's size (+24). */

/* Seek an ADX file handle: mode 0 absolute, 1 from the current position, 2 from the size (+16, so
   negative offsets seek back); the result is kept inside 0..size. -3 for a null handle or a bad
   mode. A reading handle is stopped first. */

extern int syBtFlDeleteSct(int a);
extern int syBtFlWrite(int a, char *b, int n);
extern void fmMngClearBuf(int a, int b);
extern int fmMngReadSctAllData(char *st);

/* Format the memory-card file system (mode 0 or 1): -11 not initialised, -6 bad mode, -3 when
   syBtFlDeleteSct refuses, -2 when the 18-byte header write is short; else the result of the final
   fmMngReadSctAllData (0 on success). The header at state+52 is the 16-byte template, the mode and the
   state's first byte. */

/* Edge detection for one controller port's byte: p[0] is the current value, p[1] the previous one,
   p[2] the bits newly set and p[3] the bits just cleared. A value of -1 or 0xFFFFFF00 means no data:
   the miss counter p+4 grows and, past the limit at +0x10DC, the port reads as 0 and gives -1.
   Otherwise the byte is taken from the polled word (byte 1 or 2, by the mode at +0x10C4). */

extern int kmtex_GetTextureLevel(int a, int b);
extern int kmiCopyFromFrameBuffer(char *dst, int off, int n);
extern int kmiCopyToFrameBuffer(int off, char *src, int n);
extern void kmiPurgeCache(void *p);

/* Write a small texture level into the frame buffer: levels 1 and 2 (e) patch 1 or 4 bytes into an
   8-byte block read back from it (st+28), run kmiPurgeCache on it and put it back; larger levels copy
   the source straight to the level's offset (table 0C175F04) with its length (table 0C175F30). */
int kmtex_ReloadPalettized8MM(char *st, char *src, int e)
{
    int lvl = kmtex_GetTextureLevel(e, e);
    char buf[8];
    char *d;
    char *s;

    if (e <= 2) {
        kmiCopyFromFrameBuffer(buf, *(int *)(st + 28), 8);
        if (e == 1) {
            buf[3] = src[0];
        } else {
            d = buf + 4;
            s = src;
            do {
                *d = *s;
                d++;
                s++;
            } while (d < buf + 8);
        }
        kmiPurgeCache(buf);
        kmiPurgeCache(buf + 32);
        kmiCopyToFrameBuffer(*(int *)(st + 28), buf, 8);
    } else {
        kmiCopyToFrameBuffer(*(int *)(0x0C175F04 + lvl * 4) + *(int *)(st + 28), src, *(int *)(0x0C175F30 + lvl * 4));
    }
    return 0;
}

/* Same as kmtex_ReloadPalettized8MM for a 16-byte block: level 1 patches 2 bytes at +6, level 2 patches 8 bytes at
   +8 (tables 0C175DFC offsets, 0C175E28 lengths for the larger levels). */
int kmtex_ReloadTwiddledMM(char *st, char *src, int e)
{
    int lvl = kmtex_GetTextureLevel(e, e);
    char buf[16];
    char *d;
    char *s;

    if (e <= 2) {
        kmiCopyFromFrameBuffer(buf, *(int *)(st + 28), 16);
        if (e == 1) {
            d = buf + 6;
            s = src;
            do {
                *d = *s;
                d++;
                s++;
            } while (d < buf + 8);
        } else {
            d = buf + 8;
            s = src;
            do {
                *d = *s;
                d++;
                s++;
            } while (d < buf + 16);
        }
        kmiPurgeCache(buf);
        kmiPurgeCache(buf + 32);
        kmiCopyToFrameBuffer(*(int *)(st + 28), buf, 16);
    } else {
        kmiCopyToFrameBuffer(*(int *)(0x0C175DFC + lvl * 4) + *(int *)(st + 28), src, *(int *)(0x0C175E28 + lvl * 4));
    }
    return 0;
}

extern int *SearchUsed(int pos, int *out);

/* Find, in chain a (a halfword index, 20 bytes a slot at 0C177FBC), the entry with the lowest value
   at +16 that is at least lim and below the best so far (0C177FA8): the flags (halfword at +0) must
   have bit 2 clear, bit 1 set and one of 0x180 set, and SearchUsed of its position (+12, moved by
   0C177FB0 up for a == 0, down otherwise) must name an object whose +20 -> +24 equals h+24. */
int kmiMIPallocSub(short a, int lim, int *h)
{
    int *node = *(int **)(0x0C177FBC + a * 20);
    int best = *(int *)0x0C177FA8;
    int *found = 0;
    int out[3];
    int *p;
    int x;
    unsigned int u;

    while (node) {
        u = *(unsigned short *)node;
        if (!(u & 4) && (u & 2) && (u & 0x180)) {
            if (node[4] >= lim && node[4] < best) {
                if (a == 0) {
                    x = node[3] + *(int *)0x0C177FB0;
                } else {
                    x = node[3] - *(int *)0x0C177FB0;
                }
                p = SearchUsed(x, out);
                if (p && *(int *)(*(int *)(p + 5) + 24) == h[6]) {
                    best = node[4];
                    found = node;
                }
            }
        }
        node = (int *)node[2];
    }
    return (int)found;
}

extern int kmiCopyFromPVRMemory(int a, int off, int n);
extern int kmtex_ConvertSmallVQFromMem(int a, int off, int b, int c);
extern int kmtex_CopyTextureFromMem(int a, int off, int b);

/* Read a texture back from video memory into a: by the texture's type (word 0): low bits 1, a copy from
   PVR memory; type 3, kmtex_ConvertSmallVQFromMem; otherwise by its format flags (+24): flag 4 and 1 set and 8 and 32 clear
   give kmtex_CopyTextureFromMem, anything else a frame buffer copy. Always 0. */
int kmGetTexture(int a, int *t)
{
    int fl;

    if ((t[0] & 3) == 1) {
        kmiCopyFromPVRMemory(a, t[7], t[5]);
    } else if ((unsigned short)t[0] == 3) {
        kmtex_ConvertSmallVQFromMem(a, t[7], t[3], t[6]);
    } else {
        fl = t[6];
        if ((fl & 4) && (fl & 1) && !(fl & 8) && !(fl & 32)) {
            kmtex_CopyTextureFromMem(a, t[7], t[3]);
        } else {
            kmiCopyFromFrameBuffer((char *)a, t[7], t[5]);
        }
    }
    return 0;
}
