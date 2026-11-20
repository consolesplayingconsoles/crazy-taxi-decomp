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


/* Pushes node on the list at *head (node[1] the link). */


/* The colour type (bits 4-5) of the current context word. */


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


