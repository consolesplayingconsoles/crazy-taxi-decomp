/* Ported from virtua-tennis-decomp (src/vtsdk_c.c) by scripts/port_equiv.py: only the functions the destination has. */
/* Virtua Tennis SDK library, small functions (batch c). */

extern int nlsndG2Write(int a, int *b);
extern int nlsndG2Read(int addr);
extern int vmsfs_c_getstate(int a);
extern int vmsfs_xcreate(int a, int b, int c, int d);
extern int ADXRNA_DiscardData(int a);
extern void FUN_8c1e16cc(void);
extern void *memset(void *d, int c, int n);
extern void vmsio_exit(void);
extern void ADXB_Destroy(int a);
extern void ADXCRS_Lock(void);
extern void ADXCRS_Unlock(void);
extern int mwRnaErrCallFunc(int a, ...);
extern void FUN_8c1e28e0(int a, int b, int c);
extern void kmiWriteRegister(int reg, int val);

extern int g_8c454cbc;
extern int *g_8c20c204;
extern char g_8c464598[];
extern char g_8c46ad24[];
extern int g_8c20c89c;
extern int g_8c20c8a0;
extern char g_8c20ac30[];
extern unsigned int g_8c45ee4c;
extern int g_8c45eee4;
extern int g_8c45eee8;
extern char *g_8c47317c;



unsigned int gdFsGetLE4(unsigned char *p)
{
    return p[0] | (p[1] << 8) | (p[2] << 16) | (p[3] << 24);
}



int gdFsSetGlobalErrG(int e)
{
    g_8c20c204[12] = e;
    return 1;
}



int vmsfs_exit(void)
{
    memset(g_8c464598, 0, 2624);
    vmsio_exit();
    return 0;
}



int str_len(char *s)
{
    int i;
    int n = 0;
    for (i = 0; i < 12; i++) {
        if (s[i] == 0)
            break;
        n++;
    }
    return n;
}



void ADXSJD_Destroy(int *p)
{
    if (p != 0) {
        if (p[1] != 0)
            ADXB_Destroy(p[1]);
        ADXCRS_Lock();
        memset(p, 0, 152);
        ADXCRS_Unlock();
    }
}



int mwRnaGetAutoSw(unsigned char *p)
{
    if (p == 0) {
        mwRnaErrCallFunc(0, g_8c20ac30);
        return -1;
    }
    return (p[1] & 4) >> 2;
}



void buFbrWakeupFiber(char *base, int idx)
{
    char *p = base + 528 + idx * 292;
    if (*(int *)(p + 12) != 0)
        *(int *)(p + 20) = *(int *)(base + 516);
}



unsigned int kmyConvertAddress64to32(unsigned int a)
{
    unsigned int r = ((a & 0xfffffff8) >> 1) + (a & 3);
    if (a & 4)
        r += 0x400000;
    if (a >= 0x800000)
        r += 0x400000;
    return r;
}
