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


/* Vertex buffer i's write pointer: its start plus off words. */


/* Pushes node on the list at *head (node[1] the link). */


/* The colour type (bits 4-5) of the current context word. */


/* toupper for a-z. */


/* Byte-swaps n words in place. */


