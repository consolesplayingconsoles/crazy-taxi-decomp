/* Small library functions (batch t): vmsfs slot accessors, SJ/ADX field setters and resets, G2 DMA state flags, small
   wrappers. Globals are addressed directly where the decomp has no name for them yet. */

void *memset(void *p, int c, unsigned int n);
int FUN_0c16766c(int a, int b);
int FUN_0c1676f8(void);
int FUN_0c167694(void);
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

void FUN_0c167c4c(void)
{
    *(int *)0x0C178628 = 0;
}

void njSetConstantAttr(int a, int b)
{
    *(int *)0x0C178630 = a;
    *(int *)0x0C178634 = b;
}

void ADXSJD_SetOutSj(char *p, int i, int v)
{
    *(int *)(p + 12 + i * 4) = v;
}

void FUN_0c168808(char *p, int a, int b)
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
void FUN_0c1701c4(int *d, int *s, unsigned int n)
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

int FUN_0c17277c(int *p)
{
    *p = (*(volatile int *)0xA05F688C & 1) == 0;
    return 0;
}

int FUN_0c1727d0(int *p)
{
    *p = (*(volatile int *)0xA05F688C & 0x10) == 0;
    return 0;
}

int syG2DmaResume(int *p)
{
    *(int *)(G2DMA_BASE + *p * 32 + 28) = 0;
    return 0;
}

int FUN_0c1727b0(int *p)
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

int FUN_0c15f818(void)
{
    return FUN_0c16766c(24, 0);
}

int FUN_0c15f868(void)
{
    return FUN_0c1676f8();
}

int FUN_0c15f8ba(void)
{
    return FUN_0c16766c(22, 0);
}

int FUN_0c15f926(void)
{
    FUN_0c167694();
    return 1;
}

int FUN_0c1614de(void)
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

void FUN_0c171db0(int *h, int x)
{
    nlsndStreamSetHdBitSize(((int *)h[7])[1], x);
    h[4] = x;
}
