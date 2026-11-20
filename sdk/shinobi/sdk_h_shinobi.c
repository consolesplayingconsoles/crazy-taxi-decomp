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


/* A stream's pitch word: the octave in bits 11-15, the frequency number below. */


void _INITLIBH(void)
{
    ovMdlEntryTbl(*(int *)0x0C174B44);
}

void _FINISHLIBH(void)
{
    ovMdlDeleteTbl(*(int *)0x0C174B44);
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


/* Copies n bytes (whole words) from s to d. */


