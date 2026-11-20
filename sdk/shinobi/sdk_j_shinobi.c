/* Small library functions (batch j): matrix and line helpers, Kamui vertex buffer and callback setters, the backup and
   system config queries, ADX getters. */

float nlCosf(float a);
float nlSinf(float a);
void nlRotateXSC(float s, float c);
void nlTranslate(float x, float y, float z);
void nlMvSendTriangle(int a, int b, int c);
int kmiQueryFinishDMA(int ch);
int kmiWriteRegister(int off, int v);
void kmiUnloadDevice(void);
void kmiRegisterCallback(int dev, int kind, void *f, void *p);
int vmsfs_c_getstate(int drive);
int kbCfgIni(int a);
int kbCfgGetId(int);
int ADXSJD_GetTotalNumSmpl(int sjd);
int ADXSJD_GetSfreq(int sjd);
int ADXSJD_GetNumChan(int sjd);
void ADXERR_CallErrFunc(char *msg);

#define KM_DEVICE       (*(int *)0x0C178268)
#define VTX_TABLE       ((int *)0x0C2EA724)

/* A turn about y by a (radians, as nlCosf/nlSinf take it). */

/* A translation by minus the vector v. */


/* 0 when the vertex buffer's flush (DMA) is done, 13 while it runs. */

/* Vertex buffer i's write pointer from its start, in words. */

int buStat(int drive)
{
    if (vmsfs_c_getstate(drive))
        return -1;
    return 0;
}

int syCfgGetIDAddress(void)
{
    if (kbCfgIni(0))
        return 0;
    return kbCfgGetId(0);
}


/* How many vertex-table words a PCW's flags take (Kamui's table at 0C2EA724). */


/* 1 when the n bytes at p are all 0. */
