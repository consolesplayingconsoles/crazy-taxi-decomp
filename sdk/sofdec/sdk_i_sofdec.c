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


/* Vertex buffer i's write pointer: its start plus off words. */


/* Pushes node on the list at *head (node[1] the link). */


/* The colour type (bits 4-5) of the current context word. */


/* toupper for a-z. */


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

