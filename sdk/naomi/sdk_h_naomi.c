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


void nlObjPutLoadTextureCallBack(void)
{
}


/* A language character ('0'...) to its number. */


/* Copies n bytes (whole words) from s to d. */


