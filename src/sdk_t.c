/* Small library functions (batch t): vmsfs slot accessors, SJ/ADX field setters and resets, G2 DMA state flags, small
   wrappers. Globals are addressed directly where the decomp has no name for them yet. */

void *memset(void *p, int c, unsigned int n);
int gdGdcReqCmd(int a, int b);
int gdGdcCheckDmaTrans(void);
int gdGdcExecServer(void);
void nlsndStreamSetHdBitSize(int a, int b);

#define VMS_SLOTS       ((char *)0x0C2EC578)            /* 128-byte slots a drive */
#define G2DMA_BASE      (**(char ***)0x0C178700)

int vmsfs_setretry(int n)
{
    *(int *)0x0C2EC554 = n;
    return n;
}

int vmsfs_c_getstate(int d)
{
    return *(int *)(VMS_SLOTS + d * 128 + 4);
}

void vmsfs_c_setfunc(int d, int f)
{
    *(int *)(VMS_SLOTS + d * 128 + 8) = f;
}

void ADXCRS_Init(void)
{
    *(int *)0x0C178628 = 0;
}

void ADXERR_EntryErrFunc(int a, int b)
{
    *(int *)0x0C178630 = a;
    *(int *)0x0C178634 = b;
}

void ADXSJD_SetOutSj(char *p, int i, int v)
{
    *(int *)(p + 12 + i * 4) = v;
}

void ADXSJD_EntryTrapFunc(char *p, int a, int b)
{
    *(int *)(p + 72) = a;
    *(int *)(p + 76) = b;
}

void adxstm_sj_internal_error(void)
{
    (*(int *)0x0C17863C)++;
}

int ADXSTM_SetBufSize(char *h, int a, int b)
{
    *(int *)(h + 28) = a;
    *(int *)(h + 24) = b;
    return 1;
}

void SJMEM_Reset(int *h)
{
    h[3] = h[6];
    h[4] = 0;
}

void SJRBF_Reset(int *h)
{
    h[3] = 0;
    h[4] = h[8];
    h[5] = 0;
    h[6] = 0;
}

void vmsio_init(void)
{
    *(int *)0x0C17871C = 0;
}

void mpdrv_init_memory(void)
{
    *(int *)(*(char **)0x0C2FA538 + 0x10F4) = 0xA05F6C00;
}

/* Copies n bytes (a multiple of 4, at least 4) word by word. */
void vmsfs_memcpyl(int *d, int *s, unsigned int n)
{
    n >>= 2;
    do
        *d++ = *s++;
    while (--n);
}

void ADXB_EntryGetWrFunc(char *b, int f, int p)
{
    *(int *)(b + 136) = f;
    *(int *)(b + 140) = p;
}

void ADXB_EntryAddWrFunc(char *b, int f, int p)
{
    *(int *)(b + 144) = f;
    *(int *)(b + 148) = p;
}

int syG2AicaFifoIsEmpty(int *p)
{
    *p = (*(volatile int *)0xA05F688C & 1) == 0;
    return 0;
}

int syG2FifoIsEmpty(int *p)
{
    *p = (*(volatile int *)0xA05F688C & 0x10) == 0;
    return 0;
}

int syG2DmaResume(int *p)
{
    *(int *)(G2DMA_BASE + *p * 32 + 28) = 0;
    return 0;
}

int syG2DmaSuspend(int *p)
{
    *(int *)(G2DMA_BASE + *p * 32 + 28) = 1;
    return 0;
}

int ADXPD_EntryMono(int *pd, int a, int b, int c)
{
    if (pd[3])
        return 0;
    pd[5] = 1;
    pd[6] = a;
    pd[7] = b;
    pd[8] = c;
    pd[9] = 0;
    return 1;
}

int ADXPD_Reset(int *pd)
{
    int v = pd[3];

    if (v == 3)
        pd[3] = 0;
    return v;
}

void adxpd_error(void)
{
    *(int *)0x0C1789AC = 1;
}

int gdDcfReset_(void)
{
    return gdGdcReqCmd(24, 0);
}

int gdDcfChkDmaTrans_(void)
{
    return gdGdcCheckDmaTrans();
}

int gdDcfDaPause_(void)
{
    return gdGdcReqCmd(22, 0);
}

int gdDcfSvr_(void)
{
    gdGdcExecServer();
    return 1;
}

int syTmrGetCount(void)
{
    return -1 - *(volatile int *)0xFFD8000C;
}

int SJUNI_GetNumChunk(char *h, int i)
{
    int *p = *(int **)(h + 24 + i * 4);
    int n = 0;

    while (p) {
        p = (int *)*p;
        n++;
    }
    return n;
}

int SJUNI_GetNumChainPool(int *h)
{
    int *p = (int *)h[5];
    int n = 0;

    while (p) {
        p = (int *)*p;
        n++;
    }
    return n;
}

int vmsfs_memcmp(char *a, char *b)
{
    int i, r = 0;

    for (i = 0; i < 512; i++)
        if (a[i] != b[i])
            r = -1;
    return r;
}

void mwlSbGetPitch(char *sb, int *p1, int *p2)
{
    *p1 = *(int *)(sb + 80);
    *p2 = *(int *)(sb + 84);
}

void mwSbSetBitPerSmpl(int *h, int x)
{
    nlsndStreamSetHdBitSize(((int *)h[7])[1], x);
    h[4] = x;
}

int ADX_DecodeMonoFloat(int a, int b, int c, int *d, int e, int f);
int ADX_DecodeSteFloat(int a, int b, int c, int *d, int e, int *f, short g, short h);

/* Run one ADX decode step of a player handle: a handle in state 1 goes to 2; in state 2 the
   mono (h+20 is 1) or stereo decoder runs on the handle's buffers and its result is kept at +16,
   an odd non-negative result raises adxpd_error, and the state moves to 3. */
void ADXPD_ExecHndl(int *h)
{
    int r;

    if (h[3] == 1) {
        h[3] = 2;
    }
    if (h[3] == 2) {
        if (h[5] == 1) {
            h[4] = ADX_DecodeMonoFloat(h[6], h[7], h[8], h + 10, *(short *)((char *)h + 48), *(short *)((char *)h + 50));
        } else {
            r = ADX_DecodeSteFloat(h[6], h[7], h[8], h + 10, h[9], h + 11, *(short *)((char *)h + 48), *(short *)((char *)h + 50));
            h[4] = r;
            if (r >= 0 && (r & 1) == 1) {
                adxpd_error();
            }
        }
        h[3] = 3;
    }
}
