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


/* A language character ('0'...) to its number. */


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
