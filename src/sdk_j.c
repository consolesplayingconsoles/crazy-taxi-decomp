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
int kbCfgGetId(void);
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
int kmQueryFinishFlushVertexBuffer(void)
{
    if (kmiQueryFinishDMA(*(int *)0x0C2EAAA8) == 1)
        return 0;
    return 13;
}

/* Vertex buffer i's write pointer from its start, in words. */
int kmGetCurrentVertexOffset(int i)
{
    return ((*(int **)0x0C2B8CBC)[i] - ((int *)0x0C2B8D08)[i]) / 4;
}

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
    return kbCfgGetId();
}

int ADXT_GetNumSmpl(signed char *adxt)
{
    if (adxt[1] >= 2)
        return ADXSJD_GetTotalNumSmpl(((int *)adxt)[1]);
    return 0;
}

int ADXT_GetSfreq(signed char *adxt)
{
    if (adxt[1] >= 2)
        return ADXSJD_GetSfreq(((int *)adxt)[1]);
    return 0;
}

int ADXT_GetNumChan(signed char *adxt)
{
    if (adxt[1] >= 2)
        return ADXSJD_GetNumChan(((int *)adxt)[1]);
    return 0;
}

int ADXF_Tell(int *adxf)
{
    if (!adxf) {
        ADXERR_CallErrFunc((char *)0x0C175A2C);
        return -3;
    }
    return adxf[6];
}

int ADXF_GetFsizeSct(int *adxf)
{
    if (!adxf) {
        ADXERR_CallErrFunc((char *)0x0C175A54);
        return -3;
    }
    return adxf[4];
}

int ADXF_GetFsizeByte(int *adxf)
{
    if (!adxf) {
        ADXERR_CallErrFunc((char *)0x0C175A80);
        return -3;
    }
    return adxf[5];
}

int ADXF_GetNumReadSct(int *adxf)
{
    if (!adxf) {
        ADXERR_CallErrFunc((char *)0x0C175AE0);
        return -3;
    }
    return adxf[9];
}

int ADXF_GetStat(int *adxf)
{
    if (!adxf) {
        ADXERR_CallErrFunc((char *)0x0C175B10);
        return -3;
    }
    return ((signed char *)adxf)[1];
}

/* How many vertex-table words a PCW's flags take (Kamui's table at 0C2EA724). */
int kmiBGPlaneCountWords(unsigned int flags)
{
    int n = 1;

    if (flags & 0x02000000) {
        n = 2;
        if (flags & 0x01000000)
            n = 3;
        if (!(flags & 0x00400000))
            n++;
    }
    return n;
}

int kmiBGPlanePutColor2(unsigned int flags, int n, int a, int b)
{
    if (flags & 0x02000000) {
        VTX_TABLE[n++] = a;
        VTX_TABLE[n++] = b;
    }
    return n;
}

int kmiResetBoard(void)
{
    kmiWriteRegister(8, 3);
    kmiWriteRegister(0, 0);
    return kmiWriteRegister(8, 0);
}

void kmiReleaseHardware(void)
{
    if (KM_DEVICE) {
        kmiUnloadDevice();
        KM_DEVICE = 0;
    }
}

int kmSetEORCallback(void *f, void *p)
{
    kmiRegisterCallback(KM_DEVICE, 0, f, p);
    return 0;
}

int kmSetTexOverflowCallback(void *f, void *p)
{
    kmiRegisterCallback(KM_DEVICE, 3, f, p);
    return 0;
}

/* 1 when the n bytes at p are all 0. */
int _allzero(char *p, int n)
{
    int i;

    for (i = 0; i < n; i++, p++)
        if (*p)
            return 0;
    return 1;
}
