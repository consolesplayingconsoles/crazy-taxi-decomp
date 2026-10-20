/* Small SDK functions (batch b): nl fraction, sound wait/pan, backup-unit file wrappers, ADX/mw error
   checks, GD filesystem accessors, FAT helpers, mpdrv, kmy/kmi helpers. */

extern char g_8c20a1e0[];
extern char g_8c20a218[];
extern char g_8c20ac30[];
extern char g_8c20ca48[];
extern char g_8c20ca4c[];
extern int g_8c20b040;
extern int g_8c20b044;
extern int *g_8c46c264[];
extern char g_8c464598[];
extern int (**g_8c464594)(int a, int b);
extern int g_8c4607e8;
extern char g_8c45f964[];
extern char *g_8c47317c;
extern char g_8c473758[];

extern int nlsndG2Write(int v, int addr);
extern int nlsndG2Read(int addr);
extern int vmsfs_c_getstate(int a);
extern int vmsfs_findnext(int a, int b);
extern int vmsfs_fgetsize(int a, int b);
extern int ADXERR_CallErrFunc(char *fmt);
extern void mwRnaErrCallFunc(char *fmt, ...);
extern int FUN_8c1e2de4(int a, int *out);
extern int FUN_8c1e2e1c(int a, int b);
extern void kmWaitVBlank(void);
extern int kmiWriteRegister(int reg, int val);
extern void ADXB_ExecOneWav4(char *o);
extern void ADXB_ExecOneWav8(char *o);
extern void ADXB_ExecOneWav16(char *o);
extern void *memset(void *dst, int val, unsigned int n);


void nlsndStreamSetHdPan(char *p, short i, char v)
{
    p[50 + i * 4] = v;
}


int adxf_ChkPrmGfr(int a, int b)
{
    char *p;

    if (a < 0 || a >= 256) {
        ADXERR_CallErrFunc(g_8c20a1e0);
        return -3;
    }
    p = (char *)g_8c46c264[a];
    if (b < 0 || b >= *(int *)(p + 12)) {
        ADXERR_CallErrFunc(g_8c20a218);
        return -3;
    }
    return 0;
}


int gdFsSetTmode(char *p, short v)
{
    if (p == 0 || *(short *)(p + 76) == 0)
        return -10;
    *(short *)(p + 78) = v;
    return 0;
}


int gdFsGetTransStat(char *p)
{
    if (p == 0 || *(short *)(p + 76) == 0)
        return -10;
    return *(short *)(p + 74);
}


char *direntry(int a, int b)
{
    return *(char **)(g_8c464598 + a * 328 + 40) + b * 32;
}


int BCDtoDEC(unsigned int x)
{
    return (x >> 4) * 10 + (x & 15);
}


void mwRnaSetSfreq(char *o, int f)
{
    int **p;

    if (o == 0) {
        mwRnaErrCallFunc(g_8c20ac30);
        return;
    }
    p = *(int ***)(o + 56);
    ((void (*)(int **, int))(*p)[9])(p, f);
    *(int *)(o + 12) = f;
}


void ADXB_ExecOneWav(char *o)
{
    if (*(short *)(o + 170) == 2)
        ADXB_ExecOneWav4(o);
    else if (*(short *)(o + 170) == 1)
        ADXB_ExecOneWav8(o);
    else if (*(short *)(o + 170) == 0)
        ADXB_ExecOneWav16(o);
}


void ADXPD_Destroy(int *p)
{
    if (p) {
        *p = 0;
        memset(p, 0, 52);
    }
}
