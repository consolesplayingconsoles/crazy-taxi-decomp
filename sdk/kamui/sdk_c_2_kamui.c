/* SDK library, small functions (batch c). */

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
extern void mwRnaErrCallFunc(char *fmt, ...);
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


unsigned int kmyConvertAddress64to32(unsigned int a)
{
    unsigned int r = ((a & 0xfffffff8) >> 1) + (a & 3);
    if (a & 4)
        r += 0x400000;
    if (a >= 0x800000)
        r += 0x400000;
    return r;
}
