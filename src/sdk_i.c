/* Small library functions (batch i): Kamui context and DMA helpers, the system config, vmsfs and fiber setup, ADX/SJ
   stream helpers. */

extern char g_8c462180[];
extern char g_8c464598[];

void *memset(void *p, int c, unsigned int n);
void kmiMemCopy4(int *d, int *s, unsigned int n);
int kmiFBSortQueue(void);
int kmiFBGarbageCollect(void);
int kmiWriteRegister(int off, int v);
int kmiQueryFinishDMA(int ch);
int vmsfs_read_retry(int drive, int a, int b);
int vmsfs_write_retry(int drive, int a, int b);
void mwRnaStop(void *r);
void mwRnaDestroy(void *r);
void ADXB_Init(void);
void adxsjd_clear(char *p);
void adxsjd_decode_exec(char *p);
void adxsjd_decode_prep(char *p);
void ADXPD_Init(void);
void buFbrInit(void);
int buFbrCreateServer(int n);
int buFbrCreateFiber(int server, int a, int b, int c);
void memcpy2(short *d, short *s, int n);
int nlsndStreamGetParam(int a, int b, int c);
int memcmp(void *a, void *b, int n);
void ADX_GetCoefficient(int a, int b, void *c, void *d);
void ADXRNA_SetOutVol(int rna, int vol);

#define FIBER_SERVER    (*(int *)0x0C2FA53C)

void nlMvInitParam(void)
{
    int *a = (int *)0x0C2B76A4, *b = (int *)0x0C2B76AC;

    a[0] = 0x81000000;
    a[1] = 0;
    b[0] = 0x81000040;
    b[1] = 0x20000000;
}

int _fmtout_outerr(int *p)
{
    if (p[0] == 1)
        return 0;
    return ((signed char *)p[1])[16] & 64;
}

int kmSetGlobalClipping(int x, int y)
{
    *(int *)0x0C2EA848 = 1;
    *(int *)0x0C2EA84C = x;
    *(int *)0x0C2EA850 = y;
    *(int *)0x0C2EA840 = 3;
    return 0;
}

/* Vertex buffer i's write pointer: its start plus off words. */
int kmChangeVertexOffset(int i, int off)
{
    (*(int **)0x0C2B8CBC)[i] = ((int *)0x0C2B8D08)[i] + off * 4;
    return 0;
}

void gdFsLockDir(int *p)
{
    if (p && p[0] >= 2)
        p[15] = p[4];
}

int syCfgInit(void *work)
{
    if (!work)
        return -1;
    *(void **)0x0C177AC8 = work;
    return 0;
}

int kmiBGPlanePutWord(unsigned int flags, int n, int v)
{
    if (flags & 0x01000000) {
        ((int *)0x0C2EA724)[n] = v;
        n++;
    }
    return n;
}

/* Pushes node on the list at *head (node[1] the link). */
void VQEnQueueTop(int **head, int *node)
{
    node[1] = *head ? (int)*head : 0;
    *head = node;
}

int kmiCopyToPVRMemory(int off, int *src, unsigned int n)
{
    kmiMemCopy4((int *)(off + 0xA5000000), src, n);
    return 1;
}

int kmiCopyFromPVRMemory(int *dst, int off, unsigned int n)
{
    kmiMemCopy4(dst, (int *)(off + 0xA5000000), n);
    return 1;
}

int kmGarbageCollectTexture(void)
{
    kmiFBSortQueue();
    return kmiFBGarbageCollect();
}

/* The colour type (bits 4-5) of the current context word. */
int kmChangeContextColorType(int type)
{
    int v = (*(int *)0x0C2EAB9C & ~0x30) | (type << 4);

    *(int *)0x0C2EAB9C = v;
    *(int *)0x0C178304 = v;
    return 0;
}

int kmiResetTA(void)
{
    kmiWriteRegister(8, 1);
    return kmiWriteRegister(8, 0);
}

/* toupper for a-z. */
int gdFsToUpper(int c)
{
    signed char s = c;

    if (s >= 97 && s <= 122)
        c -= 32;
    return c;
}

int vmsfs_c_exit(void)
{
    memset(g_8c462180, 0, 1024);
    return 0;
}

int read_sys(int drive)
{
    char *e = g_8c464598 + drive * 328;

    return vmsfs_read_retry(drive, *(int *)(*(char **)(e + 28) + 8), *(int *)(e + 32));
}

int write_sys(int drive)
{
    char *e = g_8c464598 + drive * 328;

    return vmsfs_write_retry(drive, *(int *)(*(char **)(e + 28) + 8), *(int *)(e + 32));
}

void ADXRNA_Destroy(void *rna)
{
    mwRnaStop(rna);
    mwRnaDestroy(rna);
}

void ADXSJD_Init(void)
{
    ADXB_Init();
    memset((void *)0x0C2F4F1C, 0, 1216);
}

void ADXSJD_Start(char *sjd)
{
    adxsjd_clear(sjd);
    sjd[1] = 1;
}

void ADXSJD_ExecHndl(char *sjd)
{
    if (sjd[1] == 2) {
        adxsjd_decode_exec(sjd);
        return;
    }
    if (sjd[1] == 1)
        adxsjd_decode_prep(sjd);
}

int ADXSTM_Init(void)
{
    memset((void *)0x0C2F53DC, 0, 3200);
    return 1;
}

void ADXB_Init(void)
{
    ADXPD_Init();
    memset((void *)0x0C2FA5B4, 0, 1376);
}

void vmsfb_init(void)
{
    buFbrInit();
    FIBER_SERVER = buFbrCreateServer(8);
}

int vmsfb_create(int a, int b, int c)
{
    return buFbrCreateFiber(FIBER_SERVER, a, b, c);
}

void fmMngClearBuf(char *p, int n)
{
    while (n > 0) {
        n--;
        *p++ = -1;
    }
}

void memcpy2(short *d, short *s, int n)
{
    while (n > 0) {
        *d++ = *s++;
        n--;
    }
}

int mwlSbGetStreamParam(char *s, int b, int c)
{
    return nlsndStreamGetParam(((int *)*(int *)(s + 28))[1], b, c);
}

/* Byte-swaps n words in place. */
int mpdrv_swaplong(unsigned int *p, int n)
{
    unsigned int v;

    do {
        v = *p;
        *p++ = (v >> 24) | ((v >> 8) & 0xFF00) | ((v << 8) & 0xFF0000) | (v << 24);
    } while (--n);
    return 0;
}

int ADXB_CheckSpsd(void *p)
{
    return memcmp(p, (void *)0x0C177210, 4) == 0;
}

void ADXPD_Start(int *pd)
{
    if (pd[3] == 0) {
        pd[4] = 0;
        pd[3] = 1;
    }
}

void ADXPD_Stop(int *pd)
{
    pd[3] = 0;
    memset((char *)pd + 40, 0, 8);
}

void ADXB_CopyExtraBufMono(short *buf, int pos, int unused, int n)
{
    memcpy2(buf, buf + pos, n);
}

void ADXPD_SetCoef(char *pd, int b, int a)
{
    ADX_GetCoefficient(a, b, pd + 48, pd + 50);
}

void ADXT_SetOutVol(char *adxt, int vol)
{
    *(short *)(adxt + 64) = vol;
    ADXRNA_SetOutVol(((int *)adxt)[3], vol);
}

int kmiWaitForFinishDMA(int ch)
{
    while (kmiQueryFinishDMA(ch) != 1)
        ;
    return 1;
}
