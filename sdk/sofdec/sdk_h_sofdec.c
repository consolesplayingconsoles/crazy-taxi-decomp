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


/* A language character ('0'...) to its number. */

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


/* Copies n bytes (whole words) from s to d. */


