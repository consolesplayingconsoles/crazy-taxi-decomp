/* Small library functions (batch h): NAOMI library setters and stubs, Kamui's register access and system config flags,
   the backup library's jumps into vmsfs, ADX getters and setters. */

extern int *g_8c46c264[];

int nlSingleLineSub(int a, int b, int c, int d);
int nlMultiLineSub(int a, int b);
void ovMdlEntryTbl(int a);
void ovMdlDeleteTbl(int a);
int buExecServer(void);
int buMount(int drive);
int vmsfs_c_setcompletecallback(void *f);
int vmsfs_c_setprogresscallback(void *f);
int vmsfs_c_setcallbackparam(void *p);
int vmsfs_ismount(int drive);
int vmsfs_isformat(int drive);
int vmsfs_setretry(int n);

#define KM_SYS_CONFIG   (*(unsigned int *)0x0C177A84)
#define HOLLY_REG(off)  (*(volatile int *)(0xA05F8000 + (off)))

/* -1 kept, any other value stored as 1. */
void nlObjPutMvSetClosingMode(int v)
{
    if (v != -1)
        v = 1;
    *(int *)0x0C2B3570 = v;
}

int nlIntrDefaultFunction(void)
{
    return 0;
}

void nlSetIntrStack(int v)
{
    *(int *)0x0C175060 = 0x80000000;
    *(int *)0x0C177A9C = v;
}

int nlSingleLine(int a, int b, int c)
{
    return nlSingleLineSub(a, b, c, 0);
}

int nlSingleLineUseViewMatrix(int a, int b, int c)
{
    return nlSingleLineSub(a, b, c, 2);
}

int nlMultiLineTrnsl(int a)
{
    return nlMultiLineSub(a, 1);
}

int nlMultiLineUseViewMatrixTrnsl(int a)
{
    return nlMultiLineSub(a, 3);
}

void nlLineSetDiv(float d)
{
    *(float *)0x0C14A9F0 = d;
}

void nlLineSetThickness(float t)
{
    *(float *)0x0C14A9F4 = t;
}

/* A stream's pitch word: the octave in bits 11-15, the frequency number below. */
void nlsndStreamSetHdOctFns(char *s, short oct, int fns)
{
    *(short *)(s + 34) = (oct << 11) | fns;
}

void nlsndStreamSetHdVol(char *s, short i, char v)
{
    s[i * 4 + 49] = v;
}

int abs(int x)
{
    if (x > 0)
        return x;
    return -x;
}

void nlObjPutLoadTextureCallBack(void)
{
}

void _fmtout_endstr(int *p)
{
    if (p[0] == 1)
        *(char *)p[1] = 0;
}

void _INITLIBH(void)
{
    ovMdlEntryTbl(*(int *)0x0C174B44);
}

void _FINISHLIBH(void)
{
    ovMdlDeleteTbl(*(int *)0x0C174B44);
}

int kmSetWaitVsyncCount(int n)
{
    *(int *)0x0C2EA864 = n - 1;
    return 0;
}

unsigned int kmiAddSysConfigFlag(unsigned int f)
{
    unsigned int v = KM_SYS_CONFIG | f;

    KM_SYS_CONFIG = v;
    return v;
}

unsigned int kmiSetSysConfigFlag(unsigned int f)
{
    KM_SYS_CONFIG = f;
    return f;
}

unsigned int kmiGetSysConfigFlag(void)
{
    return KM_SYS_CONFIG;
}

void syMallocFinish(void)
{
}

int buInterruptHandler(void)
{
    return buExecServer();
}

int buSetCompleteCallback(void *f)
{
    return vmsfs_c_setcompletecallback(f);
}

int buSetProgressCallback(void *f)
{
    return vmsfs_c_setprogresscallback(f);
}

int buSetCallbackParam(void *p)
{
    return vmsfs_c_setcallbackparam(p);
}

int buGetVersion(void)
{
    return *(int *)0x0C177AA0;
}

int buIsReady(int drive)
{
    return vmsfs_ismount(drive);
}

int buRemount(int drive)
{
    return buMount(drive);
}

int buIsFormat(int drive)
{
    return vmsfs_isformat(drive);
}

void buSetPrintFunc(void *f)
{
    *(void **)0x0C1784BC = f;
}

int buSetRetryCount(int n)
{
    return vmsfs_setretry(n);
}

int syCfgExit(void)
{
    *(int *)0x0C177AC8 = 0;
    return 0;
}

/* A language character ('0'...) to its number. */
int syCfgConvLang(int c)
{
    return c - 48;
}

int ADXT_GetStat(signed char *adxt)
{
    return adxt[1];
}

int ADXT_GetOutPan(char *adxt, int ch)
{
    return ((short *)(adxt + 66))[ch];
}

void ADXT_SetReloadSct(char *p, short v)
{
    *(short *)(p + 62) = v;
}

void ADXT_SetAutoRcvr(char *p, char v)
{
    p[109] = v;
}

int ADXF_GetPtinfoSize(int ptid)
{
    return g_8c46c264[ptid][1];
}

void kmiCheckRenderer(void)
{
}

void kmiUnloadDevice(void)
{
}

/* Copies n bytes (whole words) from s to d. */
void kmiMemCopy4(int *d, int *s, unsigned int n)
{
    n >>= 2;
    do
        *d++ = *s++;
    while (--n);
}

void kmiModuleInitialize(void)
{
}

int kmiWriteRegister(int off, int v)
{
    HOLLY_REG(off) = v;
    return 1;
}

int kmiReadRegister(int off)
{
    return HOLLY_REG(off);
}
