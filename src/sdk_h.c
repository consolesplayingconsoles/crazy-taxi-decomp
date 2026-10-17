/* Small library functions (batch h): NAOMI library setters and stubs, Kamui's register access and system config flags,
   the backup library's jumps into vmsfs, ADX getters and setters. */

extern int *g_8c46c264[];

int FUN_0c07ba90(int a, int b, int c, int d);
int FUN_0c07bc00(int a, int b);
void FUN_0c14ceee(int a);
void FUN_0c14cf46(int a);
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
void FUN_0c07aad0(int v)
{
    if (v != -1)
        v = 1;
    *(int *)0x0C2B3570 = v;
}

int FUN_0c07b710(void)
{
    return 0;
}

void nlObjPutLoadTextureCallBack(int v)
{
    *(int *)0x0C175060 = 0x80000000;
    *(int *)0x0C177A9C = v;
}

int FUN_0c07b970(int a, int b, int c)
{
    return FUN_0c07ba90(a, b, c, 0);
}

int FUN_0c07b980(int a, int b, int c)
{
    return FUN_0c07ba90(a, b, c, 2);
}

int FUN_0c07b9d0(int a)
{
    return FUN_0c07bc00(a, 1);
}

int FUN_0c07b9e0(int a)
{
    return FUN_0c07bc00(a, 3);
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

void FUN_0c07ff20(char *s, short i, char v)
{
    s[i * 4 + 49] = v;
}

int FUN_0c0813d0(int x)
{
    if (x > 0)
        return x;
    return -x;
}

void FUN_0c081650(void)
{
}

void FUN_0c087e1a(int *p)
{
    if (p[0] == 1)
        *(char *)p[1] = 0;
}

void FUN_0c14ab88(void)
{
    FUN_0c14ceee(*(int *)0x0C174B44);
}

void FUN_0c14ab90(void)
{
    FUN_0c14cf46(*(int *)0x0C174B44);
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

void FUN_0c14f59e(void)
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

void FUN_0c152292(char *p, short v)
{
    *(short *)(p + 62) = v;
}

void FUN_0c152330(char *p, char v)
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
void FUN_0c15887e(int *d, int *s, unsigned int n)
{
    n >>= 2;
    do
        *d++ = *s++;
    while (--n);
}

void FUN_0c159ae0(void)
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
