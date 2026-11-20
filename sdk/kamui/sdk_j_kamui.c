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
