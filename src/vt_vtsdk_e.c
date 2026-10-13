/* Ported from virtua-tennis-decomp (src/vtsdk_e.c) by scripts/port_equiv.py: only the functions the destination has. */
/* Small SDK functions, batch e (VT pilot). Behaviour-checked only. */

extern float nlArcTan(float x);
extern int nlsndG2Read(int addr);
extern int kdGetDeviceInfo(int dev);
extern int kdDevGetVibrationInfo(void *out, int info);
extern int syG2Write(void *src, unsigned int dst, int n, int a, int b, int c);
extern int vmsfs_c_getstate(int a);
extern int vmsfs_getinfo(int a, int b);
extern int vmsfs_diskfree(int a, int b);
extern int mpdrv_set_dreq(int a);
extern void kdRecvFrame(void);
extern int gdFsGetStat(int h);
extern int kmiWriteRegister(int reg, int val);
extern int setjmp(void *jb);
extern void longjmp(void *jb, int v);

typedef struct { char used; char busy; char pad[14]; int handle; char rest[8]; } SndStream;
extern SndStream g_8c454cf4[];
extern char *g_8c47317c;
extern void (*g_8c45eef0)(void *s);
extern char *g_8c4762c8;
typedef struct { char pad[36]; int (*fn)(int a); } GdFsObj;
extern GdFsObj *g_8c20c210;


int gdFsLoadDirFast(int a)
{
    GdFsObj *o = g_8c20c210;
    if (o == 0)
        return 0;
    return o->fn(a);
}


int pdGetPeripheralInfo(int dev)
{
    return kdGetDeviceInfo(dev);
}


int gdFsCheckEof(char *h, int *out)
{
    if (h == 0 || *(short *)(h + 76) == 0)
        return -10;
    if (*(int *)(h + 20) >= *(int *)(h + 16))
        *out = 1;
    else
        *out = 0;
    return 0;
}


int pdVibGetInfo(int dev, char *out)
{
    struct { int a; char b; } v;
    int info = kdGetDeviceInfo(dev);
    if (kdDevGetVibrationInfo(&v, info) < 0)
        return -2;
    out[0] = v.a;
    out[1] = v.b;
    return 0;
}


int ADXSTM_GetBufSize(char *p, int *a, int *b)
{
    *a = *(int *)(p + 28);
    *b = *(int *)(p + 24);
    return 1;
}


void ADXSTM_GetGdfsStat(char *p, int *out)
{
    *out = gdFsGetStat(*(int *)(p + 8));
}


char *mpdrv_get_device(int n)
{
    return g_8c47317c + 40 + n * 44;
}


void ADXB_Start(char *p)
{
    if (*(int *)(p + 4) == 0)
        *(int *)(p + 4) = 1;
}
