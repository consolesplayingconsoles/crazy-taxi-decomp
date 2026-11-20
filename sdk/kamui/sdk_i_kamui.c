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


/* Byte-swaps n words in place. */


int kmiWaitForFinishDMA(int ch)
{
    while (kmiQueryFinishDMA(ch) != 1)
        ;
    return 1;
}
