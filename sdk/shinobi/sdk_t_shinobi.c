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


int vmsfs_memcmp(char *a, char *b)
{
    int i, r = 0;

    for (i = 0; i < 512; i++)
        if (a[i] != b[i])
            r = -1;
    return r;
}


int ADX_DecodeMonoFloat(int a, int b, int c, int *d, int e, int f);
int ADX_DecodeSteFloat(int a, int b, int c, int *d, int e, int *f, short g, short h);

/* Run one ADX decode step of a player handle: a handle in state 1 goes to 2; in state 2 the
   mono (h+20 is 1) or stereo decoder runs on the handle's buffers and its result is kept at +16,
   an odd non-negative result raises adxpd_error, and the state moves to 3. */
