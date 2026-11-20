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
void nlRotateRX(float a)
{
    float c = nlCosf(a);

    nlRotateXSC(nlSinf(a), c);
}

/* A translation by minus the vector v. */
void nlTranslateNV(float *v)
{
    nlTranslate(-v[0], -v[1], -v[2]);
}

void nlMvSendQuad(int a, int b, int c, int d)
{
    nlMvSendTriangle(a, b, c);
    nlMvSendTriangle(a, c, d);
}

/* 0 when the vertex buffer's flush (DMA) is done, 13 while it runs. */

/* Vertex buffer i's write pointer from its start, in words. */


/* How many vertex-table words a PCW's flags take (Kamui's table at 0C2EA724). */


/* 1 when the n bytes at p are all 0. */
