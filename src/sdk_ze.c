/* Fiber server teardown, the MMU table clear and ADX amplifier start. */

extern void _destructFiber(char *srv, char *fbr);
extern void buFbrKillFiber(char *srv, int i);
extern void *memset(void *p, int c, unsigned int n);
extern void syMmuDeleteEntry(int e);

/* Destroy every live fiber (292-byte records from +528; count at +520), then clear the server. */
void buFbrDestroyServer(char *srv)
{
    char *f = srv + 528;
    int i;

    for (i = 0; i < *(int *)(srv + 520); i++) {
        if (*(int *)(f + 12)) {
            _destructFiber(srv, f);
        }
        f += 292;
    }
    memset(srv, 0, 3452);
}

/* Kill every live fiber at or below the given level (+16). */
void buFbrKillFiberLevel(char *srv, int level)
{
    char *f = srv + 528;
    int i;

    for (i = 0; i < *(int *)(srv + 520); i++) {
        if (*(int *)(f + 12) && !(*(int *)(f + 16) > level)) {
            buFbrKillFiber(srv, i);
        }
        f += 292;
    }
}

/* Delete the 16 + 8 + 1 MMU entries listed at 0C2EBF10. */
void sySqFinish(void)
{
    int *p;

    for (p = (int *)0x0C2EBF10; p < (int *)0x0C2EBF50; p++) {
        syMmuDeleteEntry(*p);
    }
    for (p = (int *)0x0C2EBF50; p < (int *)0x0C2EBF70; p++) {
        syMmuDeleteEntry(*p);
    }
    syMmuDeleteEntry(*(int *)0x0C2EBF70);
}

/* Clear the channel levels (one word per channel at +20; channel count in byte +2), the peak (+44),
   and mark it started (byte +1 = 2). */
void ADXAMP_Start(signed char *amp)
{
    int i;

    for (i = 0; i < amp[2]; i++) {
        ((int *)(amp + 20))[i] = 0;
    }
    *(int *)(amp + 44) = 0;
    amp[1] = 2;
}

extern void mwRnaSetStmHdInfo(int h, int info, int *out);
extern void syRtcGetDate(void *date);
extern void syRtcDateToCount(void *date, int *count);
extern void ADXT_GetTime(int h, int *t, int *f);
extern int gdFsGetDirInfo(int dir, int *info);

/* Hand the stream header to the RNA and return what it reports back. */
int ADXRNA_SetStmHdInfo(int h, int info)
{
    int out;

    mwRnaSetStmHdInfo(h, info, &out);
    return out;
}

/* Seconds since the clock's epoch: read the date, convert it to a count. */
int rtcGetSeconds(void)
{
    int count;
    char date[12];

    syRtcGetDate(date);
    syRtcDateToCount(date, &count);
    return count;
}

/* Playing time in hundredths of a second (samples / rate * 100). */
int ADXT_GetTimeReal(int h)
{
    int t;
    int f;

    ADXT_GetTime(h, &t, &f);
    return (int)((float)t / (float)f * 100.0f);
}

/* A file's size in 2048-byte sectors (rounded up) through gdFsGetDirInfo; returns its result. */
int ADXSTM_GetFsizeSct(int dir, int *sct)
{
    int info[3];
    int r;

    r = gdFsGetDirInfo(dir, info);
    *sct = (info[1] + 2047) / 2048;
    return r;
}

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
void ADXSTMF_Destroy(void *h)
{
    memset(h, 0, 100);
}

/* Clear a 72-byte file handle. */
void close_file_handle(void *h)
{
    memset(h, 0, 72);
}

int gdFsChangeDir(int dir)
{
    return gdFsLoadDir(dir, 0);
}

/* Does the port's device report state s (+32)? */
int mpdrv_stat(int port, int s)
{
    return mpdrv_get_device(port)[8] == s;
}

/* Set a drive's 8-byte time stamp (+108 of its 128-byte record). */
void vmsfs_c_settime(int drive, void *time)
{
    memmove((char *)0x0C2EC578 + drive * 128 + 108, time, 8);
}

/* First init only: count it and clear the 32 SJMEM records. */
void SJMEM_Init(void)
{
    if (*(int *)0x0C178684 <= 0) {
        (*(int *)0x0C178684)++;
        memset((void *)0x0C2F7524, 0, 1152);
    }
}

/* First init only: clear the 64 SJRBF records. */
void SJRBF_Init(void)
{
    if (*(int *)0x0C1786BC <= 0) {
        (*(int *)0x0C1786BC)++;
        memset((void *)0x0C2F79A4, 0, 3072);
    }
}

/* First init only: clear the 64 SJUNI records. */
void SJUNI_Init(void)
{
    if (*(int *)0x0C1786F0 <= 0) {
        (*(int *)0x0C1786F0)++;
        memset((void *)0x0C2F85A4, 0, 3072);
    }
}

/* Clear an amplifier inside the ADX critical section. */
void ADXAMP_Destroy(void *amp)
{
    if (amp) {
        ADXCRS_Lock();
        memset(amp, 0, 48);
        ADXCRS_Unlock();
    }
}

typedef struct {
    int ptr;
    int len;
} Chunk;

/* Set (or with a null function, clear) the RNA error callback and its argument; clear the message
   buffer. */
void mwRnaErrEntryFunc(int func, int arg)
{
    if (func == 0) {
        *(int *)0x0C178724 = 0;
        *(int *)0x0C178728 = 0;
    } else {
        *(int *)0x0C178724 = func;
        *(int *)0x0C178728 = arg;
    }
    memset((void *)0x0C2FAB14, 0, 256);
}

/* Split a chunk: the first n bytes (at most) into a, the rest into b. */
void SJ_SplitChunk(Chunk *src, int n, Chunk *a, Chunk *b)
{
    *a = *src;
    b->len = a->len;
    if (a->len > n) {
        a->len = n;
    }
    b->ptr = a->ptr + a->len;
    b->len -= a->len;
}

extern int syBtCfgSet(int item, int value);
extern int kmiFBgetfreemem(int *a, int *b, int *c, int *d);

/* Sound mode 0 (stereo) or 1 (mono) into the system config; -1 on a bad mode, no config, or a failed
   write. */
int syCfgSetSoundMode(int mode)
{
    if (*(int *)0x0C177AC8 == 0) {
        return -1;
    }
    if (mode != 0 && mode != 1) {
        return -1;
    }
    *(char *)0x8C00007E = mode;
    if (syBtCfgSet(2, *(int *)0x0C177AC8) == -1) {
        return -1;
    }
    return 0;
}

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
int syRtcMakeDayOfWeek(int year, int month, int day)
{
    unsigned short y;

    if ((unsigned char)month <= 2) {
        month += 12;
        year--;
    }
    y = year;
    return ((y >> 2) + ((unsigned char)month * 13 + 8) / 5 + y + (unsigned char)day - 15) % 7;
}

extern void kmSetFogDensity(int d);
extern void kmiMemCopy8(int a, int *v, int n);
extern int buSaveFile(int a, int b, int c, int d, void *date, int flags);
extern void syRtcGetDate(void *date);

typedef struct {
    int w[2];
} Date8;

/* Fog density as the kit's 8.8 form: the float's mantissa top byte (with the hidden bit) and its
   exponent, denormalised for values under 1. Returns the value set. */
int nlFogDensityF(float d)
{
    int bits = *(int *)&d;
    int e = (bits >> 23) - 127;
    int m = (unsigned char)((short)((unsigned int)bits >> 16) | 128);
    int v;

    if (e < 0) {
        m >>= -e;
        e = 0;
    }
    v = (m << 8) | (unsigned char)e;
    kmSetFogDensity(v);
    return v;
}

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
int BupSave(int a, int b, int c, int d)
{
    Date8 date;
    Date8 copy;

    syRtcGetDate(&date);
    copy = date;
    return buSaveFile(a, b, c, d, &copy, 0x80000000);
}

extern int kmytex_ABSalloc(int big, int size, int a, int *b, int e, int f);

/* Age of the moon in days: seconds since a known new moon (count 0x5CB417D1) modulo the synodic
   month (2551423 s), counted back for earlier dates. */
unsigned int syRtcMakeAgeOfMoon(void *date)
{
    unsigned int c;
    unsigned int r;

    syRtcDateToCount(date, (int *)&c);
    if (c >= 0x5CB417D1) {
        r = (c + 0xA34BE82F) % 0x26EE7F;
    } else {
        r = 0x26EE7F - (0x5CB417D1 - c) % 0x26EE7F;
    }
    return r / 86400;
}

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
void mwRnaStop(int *h, int b, int c, int d)
{
    int cs;

    if (!h) {
        mwRnaErrCallFunc(h, b, c, d, (char *)0x0C176680);
        return;
    }
    if (((unsigned char *)h)[1]) {
        mwRnaLockCs(&cs);
        mwRnaSetPlaySw(h, 0);
        mwRnaSetTransSw(h, 0);
        mwlRnaClearBuf(h);
        ((unsigned char *)h)[7] = 0;
        ((unsigned char *)h)[1] = 0;
        mwRnaUnlockCs(&cs);
    }
}

/* Store a triangle point (eight floats; the first and last with bit 0 set) in slot i of +112. */
void nlTriPutSetPoint(char *t, int i, float a, float b, float c, float d, float e, float f, float g, float h)
{
    int *r = (int *)(t + 112 + i * 32);

    r[0] = *(int *)&a | 1;
    ((float *)r)[1] = b;
    ((float *)r)[2] = c;
    ((float *)r)[3] = d;
    ((float *)r)[4] = e;
    ((float *)r)[5] = f;
    ((float *)r)[6] = g;
    r[7] = *(int *)&h | 1;
}

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
int syRtcSetDate(void *date)
{
    unsigned int c;
    unsigned int g;
    int r;

    syRtcDateToCount(date, (int *)&c);
    r = syRtcAicaSetWriteFlag();
    if (r) {
        return r;
    }
    r = syRtcAicaSetDateLo((unsigned short)c);
    if (r) {
        return r;
    }
    r = syRtcAicaSetDateHi((unsigned short)(c >> 16));
    if (r) {
        return r;
    }
    g = syRtcGetCountForce();
    if (g == c || g == c + 1) {
        *(unsigned int *)0x0C2B9368 = g;
        return 0;
    }
    return -1;
}

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
int buLoadFile(int drive, char *name, int buf, int size)
{
    if (vmsfs_c_getstate(drive)) {
        return -1;
    }
    vmsfs_c_setfunc(drive, 11);
    vmsfs_c_setparam(drive, drive, (int)name, buf, size, 0, 0);
    vmsfs_c_setfname(drive, name, name);
    return 0;
}

/* Queue a partial VMU load (operation 14): as buLoadFile with a start offset. */
int buLoadFileEx(int drive, char *name, int buf, int size, int start)
{
    if (vmsfs_c_getstate(drive)) {
        return -1;
    }
    vmsfs_c_setfunc(drive, 14);
    vmsfs_c_setparam(drive, drive, (int)name, buf, size, start, 0);
    vmsfs_c_setfname(drive, name, name);
    return 0;
}

extern void adxf_SetCmdHstry(int cmd, int when, void *h, int a, int b);
extern int ADXF_Stop(signed char *h);
extern int syG2Read(unsigned int src, void *dst, int size, int n, int e, int f);
extern void syRtcDbgWriteLog(int v);

/* Queue a VMU executable rewrite (operation 20), arguments as buLoadFileEx. */
int buRewriteExecFile(int drive, char *name, int buf, int size, int start)
{
    if (vmsfs_c_getstate(drive)) {
        return -1;
    }
    vmsfs_c_setfunc(drive, 20);
    vmsfs_c_setparam(drive, drive, (int)name, buf, size, start, 0);
    vmsfs_c_setfname(drive, name, name);
    return 0;
}

/* Close an ADX file handle (stopping a read in progress) inside the critical section, logged before
   and after. */
void ADXF_Close(signed char *h)
{
    adxf_SetCmdHstry(3, 0, h, -1, -1);
    if (h) {
        ADXCRS_Lock();
        if (h[1] == 2) {
            ADXF_Stop(h);
        }
        memset(h, 0, 48);
        ADXCRS_Unlock();
        adxf_SetCmdHstry(3, 1, h, -1, -1);
    }
}

/* Clear the two BSS sections and copy the two initialised data sections (bounds at 0C089F34.. and
   0C174B54..). */
void _INITSCT(void)
{
    unsigned int *p;
    unsigned char *d;
    unsigned char *s;

    for (p = *(unsigned int **)0x0C089F4C; p < *(unsigned int **)0x0C089F58; p++) {
        *p = 0;
    }
    for (d = *(unsigned char **)0x0C089F3C, s = *(unsigned char **)0x0C089F34; d < *(unsigned char **)0x0C089F48;) {
        *d++ = *s++;
    }
    for (d = *(unsigned char **)0x0C174B6C; d < *(unsigned char **)0x0C174B78;) {
        *d++ = 0;
    }
    for (d = *(unsigned char **)0x0C174B5C, s = *(unsigned char **)0x0C174B54; d < *(unsigned char **)0x0C174B68;) {
        *d++ = *s++;
    }
}

/* Read the AICA clock (two 16-bit halves) into *count; -1 when the read fails. */
int syRtcAicaGetCount(unsigned int *count)
{
    int w[2];

    if (syG2Read(0xA0710000, w, 4, 2, 1, 1)) {
        return -1;
    }
    *count = ((w[0] << 16) & 0xFFFF0000) | (unsigned short)w[1];
    syRtcDbgWriteLog(w[0]);
    syRtcDbgWriteLog(w[1]);
    return 0;
}

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
int ovMdlEntryTbl(char *ov)
{
    char *e;
    int i;

    if (memcmp(ov + 48, (void *)0x0C174DC8, 16)) {
        return -1;
    }
    for (i = 1;; i++) {
        e = ov + 32 + i * 32;
        if (!memcmp(e + 16, (void *)0x0C174DD8, 16)) {
            return 0;
        }
        ovLibEntryTbl(e);
    }
}

/* Check the current 64-byte VMU block (+12, index +40): -6 when busy (+2), 0 for an unused block
   (0xFFFF) or a good CRC (+62), -4 for a bad one. */
int fmMngReadData(char *v)
{
    char *b;
    unsigned int crc;

    if (*(short *)(v + 2) != 0) {
        return -6;
    }
    b = *(char **)(v + 12) + (*(int *)(v + 40) + 1) * 64;
    fmMngMcpy(b + 2, *(void **)(v + 48), 60);
    if (*(unsigned short *)b == 0xFFFF) {
        return 0;
    }
    crc = fmcalccrc(62, (unsigned char *)b);
    if ((unsigned short)crc == *(unsigned short *)(b + 62)) {
        return 0;
    }
    return -4;
}

/* Read items 7 and 8 of a stream header: the first as is, the second as a level in dB (3 per step
   under 15, -45 for none); both into out and the handle (+72, +76). */
void mwlSbGetFx(char *h, int *a, int *db)
{
    int x = mwlSbGetStreamParam(h, 7, 0);
    int y = mwlSbGetStreamParam(h, 8, 0);

    if (y <= 0) {
        *db = -45;
    } else if (y >= 15) {
        *db = 0;
    } else {
        *db = (y - 15) * 3;
    }
    *a = x;
    *(int *)(h + 72) = x;
    *(int *)(h + 76) = *db;
}

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
int buSetFileAttr(int drive, char *name, unsigned short copy, unsigned char attr)
{
    if (vmsfs_c_getstate(drive)) {
        return -1;
    }
    vmsfs_c_setfunc(drive, 10);
    vmsfs_c_setparam(drive, drive, (int)name, copy, attr, 0, 0);
    vmsfs_c_setfname(drive, name, name);
    return 0;
}

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
int kdGetDriverMode(int mode, int b, int c, int d)
{
    switch (mode) {
    case 1:
        return mpdrv_get_nopcount(mode, b, c, d);
    case 2:
        return mpdrv_get_timeout(mode, b, c, d);
    case 4:
        return mpdrv_get_dreqcount(mode, b, c, d);
    case 3:
        return mpdrv_get_speed(mode, b, c, d);
    case 6:
        return mpdrv_get_debugmode(mode, b, c, d);
    case 5:
        return mpdrv_get_swapmode(mode, b, c, d);
    case 0:
        return mpdrv_get_optimize(mode, b, c, d);
    case 7:
        return mpdrv_get_rootplay(mode, b, c, d);
    case 8:
        return mpdrv_get_gunmode(mode, b, c, d);
    case 9:
        return mpdrv_get_autoflash(mode, b, c, d);
    }
    return -1;
}

/* Sanity-check a drive's FAT: every used block's link must stay inside its area (the system area
   below the save-area start, the save area below the block count + 1). -1 on a bad link. */
int check_fat_all(int drive)
{
    char *rec = (char *)0x0C2EE990 + drive * 328;
    int i;
    int f;

    for (i = 0; i < **(int **)(rec + 28) + 1; i++) {
        f = (unsigned short)get_fat(drive, i);
        if (f == 0xFFFC || f == 0xFFFF || f == 0xFFFA) {
            continue;
        }
        if (i < (*(int **)(rec + 28))[12]) {
            if (f >= (*(int **)(rec + 28))[12]) {
                return -1;
            }
        } else if (f >= **(int **)(rec + 28) + 1) {
            return -1;
        }
    }
    return 0;
}

/* Index + 1 of a name in a GD directory (44-byte entries from +16, count at +0), matched first by
   its hash byte (+9) and then by name (mode 1 exact); 0 when absent. */
int gdFsSearchName(char *name, int *dir, int mode)
{
    int n = dir[0];
    char *e = (char *)dir + 16;
    int h = gdFsGetSearchID(name);
    int i;

    for (i = 0; i < n; i++) {
        if (((unsigned char *)e)[9] == (unsigned char)h) {
            if (mode == 1) {
                if (gdFsStrcmp(name, e + 10) == 1) {
                    return i + 1;
                }
            } else if (gdFsStrcmpi(name, e + 10) == 1) {
                return i + 1;
            }
        }
        e += 44;
    }
    return 0;
}

extern unsigned char DECtoBCD(int v);

/* A date in VMU form: century, year, month, day, hour, minute, second as BCD, then the weekday
   through the table at 0C176414. */
void set_vmstime(unsigned char *out, unsigned char *t)
{
    out[0] = DECtoBCD(*(unsigned short *)t / 100);
    out[1] = DECtoBCD(*(unsigned short *)t % 100);
    out[2] = DECtoBCD(t[2]);
    out[3] = DECtoBCD(t[3]);
    out[4] = DECtoBCD(t[4]);
    out[5] = DECtoBCD(t[5]);
    out[6] = DECtoBCD(t[6]);
    out[7] = ((unsigned char *)0x0C176414)[t[7] & 7];
}

extern void kmProcessVertexRenderState(int *s);
extern void kmSetVertexRenderState(int *s);

/* Fill a vertex render state with the defaults (opaque, no texture, colours 1.0) and apply it. */
void nlSysInitStripContextVtx(int *s)
{
    float *f = (float *)s;
    int i;

    s[0] = 0x03F3FFFF;
    s[1] = 0;
    s[2] = 0;
    s[3] = 1;
    s[16] = 0;
    s[4] = 0;
    s[5] = 4;
    s[6] = 0;
    s[7] = 0;
    s[8] = 1;
    s[9] = 0;
    s[10] = 0;
    s[11] = 8;
    s[12] = 6;
    s[13] = 0;
    s[14] = 0;
    s[15] = 2;
    s[16] = 0;
    s[17] = 0;
    s[18] = 0;
    s[19] = 0;
    s[20] = 0;
    s[21] = 0;
    s[22] = 0;
    s[23] = 4;
    s[24] = 3;
    s[27] = 0;
    s[25] = 0;
    s[26] = 0;
    for (i = 28; i < 36; i++) {
        f[i] = 1.0f;
    }
    kmProcessVertexRenderState(s);
    kmSetVertexRenderState(s);
}

extern int vmsio_isready(int drive);
extern void vmsfs_unmount(int drive);
extern int vmsio_ismount(int drive);
extern int buIsFormat(int drive);
extern int check_isopen(int drive, char *name);
extern int search_dir(int drive, char *name, int *info);

/* Size of a VMU file in blocks: -255 when the drive is not ready (it is unmounted if it went away),
   -253 unformatted, -245 when the file is open, -251 when it is missing. */
int vmsfs_fgetsize(int drive, char *name)
{
    int info[11];

    if (*((char *)0x0C2EE992 + drive * 328) == 0) {
        return -255;
    }
    if (vmsio_isready(drive) == 0) {
        vmsfs_unmount(drive);
        return -255;
    }
    if (vmsio_ismount(drive) == 0 || *((char *)0x0C2EE998 + drive * 328) == 0) {
        return -255;
    }
    if (buIsFormat(drive) < 0) {
        return -253;
    }
    if (check_isopen(drive, name) < 0) {
        return -245;
    }
    if (search_dir(drive, name, info) < 0) {
        return -251;
    }
    return info[10];
}

extern int syChainAddHandler(int event, void *func, int pri, int arg);
extern void kdVbInHandler(void);
extern void kdDmaEndHandler0(void);
extern void kdDmaEndHandler1(void);
extern void kdVbOverHandler(void);

/* Peripheral driver start: chain its four interrupt handlers (priorities from 0C1762FC) and clear
   its state, including the light gun's. */
void init_sub(void)
{
    int *pri = (int *)0x0C1762FC;
    int *h = (int *)0x0C2EBF84;

    h[0] = syChainAddHandler(0x900, (void *)kdVbInHandler, pri[0], 0);
    h[1] = syChainAddHandler(0xA00, (void *)kdDmaEndHandler0, pri[1], 0);
    h[2] = syChainAddHandler(0xA00, (void *)kdDmaEndHandler1, pri[2], 0);
    h[3] = syChainAddHandler(0xA20, (void *)kdVbOverHandler, pri[3], 0);
    *(int *)0x0C2EC28C = 0;
    *(int *)0x0C2EC4D8 = 0;
    *(int *)0x0C2EC4DC = 0;
    *(int *)0x0C2EC4E0 = 0;
    *(int *)0x0C2EC4E4 = 0;
    *(int *)0x0C2EC4EC = 0;
    *(int *)0x0C2EC4E8 = -1;
    *(int *)0x0C2EC500 = 0;
    *(int *)0x0C2EC504 = 0;
    *(int *)0x0C2EC508 = 0;
    memset((void *)0x0C2EC254, 0, 56);
    memset((void *)0x0C2EC014, 0, 576);
    memset((void *)0x0C2EC294, 0, 576);
    memset((void *)0x0C2EBF94, 0, 128);
}

extern void kdInitSystem(int a, int b);
extern int kdGetDeviceInfo(int port);
extern void _pd_peripheral_set_null(void *slot);

/* Peripheral library start: clear the 24 slot records (52 bytes at 0C2B8DA8), start the driver when
   both of its arguments are given, and attach each slot's device info. */
void pdInitPeripheral(int mode, int a, int b)
{
    char *s;
    int i;

    *(int *)0x0C2B92E8 = mode;
    *(int *)0x0C2B8DA0 = 0;
    *(int *)0x0C2B8D9C = 1;
    *(int *)0x0C2B8DA4 = 0;
    memset((void *)0x0C2B8DA8, 0, 1248);
    if (b && a) {
        *(int *)0x0C2B8DA0 = 1;
        kdInitSystem(a, b);
    }
    for (i = 0; i < 24; i++) {
        s = (char *)0x0C2B8DA8 + i * 52;
        *(int *)(s + 48) = kdGetDeviceInfo(i);
        _pd_peripheral_set_null(s);
        ((int *)0x0C2B9288)[i] = 0;
        ((char *)0x0C2B92EE)[i] = 0;
        ((char *)0x0C2B9306)[i] = 0;
    }
    *(unsigned char *)0x0C2B92EC = 0xC0;
    *(unsigned char *)0x0C2B92ED = 0xA0;
}

extern int kmSetBackGroundRenderState(int *s);

/* The background vertex render state defaults (colour white 1.0, flags as nlSysInitStripContextVtx but state 11
   and 1), applied through kmProcessVertexRenderState, then as the background state. */
void nlSysInitStripContextBG(int *s)
{
    float *f = (float *)s;
    int i;

    s[0] = 0x03F3FFFF;
    s[1] = 0;
    s[2] = 0;
    s[3] = 0;
    s[16] = 0;
    s[4] = 0;
    s[5] = 4;
    s[6] = 0;
    s[7] = 0;
    s[8] = 1;
    s[9] = 0;
    s[10] = 0;
    s[11] = 10;
    s[12] = 11;
    s[13] = 0;
    s[14] = 0;
    s[15] = 2;
    s[16] = 0;
    s[17] = 0;
    s[18] = 1;
    s[19] = 0;
    s[20] = 0;
    s[21] = 0;
    s[22] = 0;
    s[23] = 4;
    s[24] = 1;
    s[27] = 0;
    s[25] = 0;
    s[26] = 0;
    for (i = 28; i < 36; i++) {
        f[i] = 1.0f;
    }
    kmProcessVertexRenderState(s);
    kmSetBackGroundRenderState(s);
}

/* Read a VMU's 32-byte volume label (from the drive's info at +32, +16): -255 when the drive is not
   ready (unmounted if it went away), -253 unformatted. */
int vmsfs_getvolume(int drive, char *out)
{
    char *rec = (char *)0x0C2EE990 + drive * 328;
    char *src;
    int i;

    if (rec[2] == 0) {
        return -255;
    }
    if (vmsio_isready(drive) == 0) {
        vmsfs_unmount(drive);
        return -255;
    }
    if (vmsio_ismount(drive) == 0 || rec[8] == 0) {
        return -255;
    }
    if (buIsFormat(drive) < 0) {
        return -253;
    }
    src = *(char **)(rec + 32) + 16;
    for (i = 0; i < 32; i++) {
        out[i] = *src++;
    }
    return 0;
}

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
int ADXF_Stop(signed char *h)
{
    int ofs;

    adxf_SetCmdHstry(5, 0, h, -1, -1);
    if (!h) {
        ADXERR_CallErrFunc((char *)0x0C175988);
        return -3;
    }
    if (h[1] != 1) {
        if (h[1] == 3) {
            h[1] = 1;
        } else {
            if (*(int *)(h + 4) == 0) {
                ADXERR_CallErrFunc((char *)0x0C1759B0);
                return -1;
            }
            ADXCRS_Lock();
            ADXSTM_Stop(*(int *)(h + 4));
            ADXSTM_GetCurOfst(*(int *)(h + 4), &ofs);
            *(int *)(h + 36) = ofs;
            adxf_CloseSjStm(h);
            h[1] = 1;
            ADXCRS_Unlock();
            adxf_SetCmdHstry(5, 1, h, -1, -1);
        }
    }
    return *(int *)(h + 24);
}

/* Seek an ADX file handle: mode 0 absolute, 1 from the current position, 2 from the size (+16, so
   negative offsets seek back); the result is kept inside 0..size. -3 for a null handle or a bad
   mode. A reading handle is stopped first. */
int ADXF_Seek(signed char *h, int off, int mode)
{
    adxf_SetCmdHstry(6, 0, h, off, mode);
    if (!h) {
        ADXERR_CallErrFunc((char *)0x0C1759DC);
        return -3;
    }
    if (h[1] == 2) {
        ADXF_Stop(h);
    }
    if (mode == 0) {
        *(int *)(h + 24) = off;
    } else if (mode == 1) {
        *(int *)(h + 24) = *(int *)(h + 24) + off;
    } else if (mode == 2) {
        *(int *)(h + 24) = *(int *)(h + 16) + off;
    } else {
        ADXERR_CallErrFunc((char *)0x0C175A04);
        return -3;
    }
    if (*(int *)(h + 24) < 0) {
        *(int *)(h + 24) = 0;
    } else if (*(int *)(h + 24) > *(int *)(h + 16)) {
        *(int *)(h + 24) = *(int *)(h + 16);
    }
    adxf_SetCmdHstry(6, 1, h, off, mode);
    return *(int *)(h + 24);
}

extern int syBtFlDeleteSct(int a);
extern int syBtFlWrite(int a, char *b, int n);
extern void fmMngClearBuf(int a, int b);
extern int fmMngReadSctAllData(char *st);

/* Format the memory-card file system (mode 0 or 1): -11 not initialised, -6 bad mode, -3 when
   syBtFlDeleteSct refuses, -2 when the 18-byte header write is short; else the result of the final
   fmMngReadSctAllData (0 on success). The header at state+52 is the 16-byte template, the mode and the
   state's first byte. */
int fmMngFormat(int mode)
{
    char **g = (char **)0x0C178720;
    char *st;
    char *hdr;
    int r;

    if (*g == 0) {
        return -11;
    }
    if (mode != 0 && mode != 1) {
        return -6;
    }
    if (syBtFlDeleteSct(*(int *)(*g + 4)) != 0) {
        return -3;
    }
    hdr = *g + 52;
    fmMngMcpy((void *)0x0C17696C, hdr, 16);
    *(short *)(*g + 2) = mode;
    hdr[17] = mode;
    hdr[16] = **g;
    if (syBtFlWrite(*(int *)(*g + 4), hdr, 18) != 18) {
        return -2;
    }
    fmMngClearBuf(*(int *)(*g + 12), *(int *)(*g + 8));
    r = fmMngReadSctAllData(*g);
    if (r != 0) {
        return r;
    }
    return 0;
}

/* Edge detection for one controller port's byte: p[0] is the current value, p[1] the previous one,
   p[2] the bits newly set and p[3] the bits just cleared. A value of -1 or 0xFFFFFF00 means no data:
   the miss counter p+4 grows and, past the limit at +0x10DC, the port reads as 0 and gives -1.
   Otherwise the byte is taken from the polled word (byte 1 or 2, by the mode at +0x10C4). */
int mpdrv_check_port(int port)
{
    char *g = *(char **)0x0C2FA538;
    signed char *p = (signed char *)(g + 4 + port * 8);
    int k = *(int *)(g + 0x10B4);
    int idx = ((int *)0x0C176930)[port];
    int *q = *(int **)(g + 0xFE8 + 96 * (1 - k) + idx * 4);
    int val = *q;
    signed char cur;
    int rv;

    if (val == -1 || val == -256) {
        *(int *)(p + 4) = *(int *)(p + 4) + 1;
        if ((unsigned int)*(int *)(p + 4) <= (unsigned int)*(int *)(g + 0x10DC)) {
            return 0;
        }
        cur = 0;
        rv = -1;
    } else {
        if (*(int *)(g + 0x10C4) == 1) {
            cur = ((signed char *)&val)[1];
        } else {
            cur = ((signed char *)&val)[2];
        }
        *(int *)(p + 4) = 0;
        rv = 0;
    }
    p[1] = p[0];
    p[0] = cur;
    p[2] = (p[1] ^ p[0]) & p[0];
    p[3] = (p[1] ^ p[0]) & ~p[0];
    return rv;
}

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
