/* Small library functions (batch m): matrix setup sequences, model parameter walks, a 24-byte entry table, byte and
   halfword splitting, memcmp, palette and print-state setup. */

void FUN_0c077470(void *m);
void FUN_0c077f60(void);
void nlPushMatrix(void *m);
void nlMultiMatrix(void *m);
void nlMultiMatrix8(void *m);
void nlGetMatrix(void *m);
void nlPopMatrix(int n);
void FUN_0c079ed0(void *m);
void FUN_0c077b50(void *m);
void FUN_0c0781a0(int n);
void nlPrintSetGarbagedTexture(void);
int kmiWriteRegister(int off, int v);

#define ENTRIES         ((char *)0x0C2B771C)            /* 24-byte entries: byte 0 in use (1), byte 1 locked, word 4 a pointer */

void FUN_0c078fa0(void)
{
    nlPushMatrix(*(void **)(0x0C2B3200 + 8));
    FUN_0c077f60();
    FUN_0c077470((void *)0x0C2B33D0);
    nlPopMatrix(1);
}

void FUN_0c078ff0(void)
{
    nlPushMatrix(*(void **)(0x0C2B31F4 + 8));
    FUN_0c077f60();
    nlGetMatrix((void *)0x0C2B3390);
    nlPopMatrix(1);
}

void FUN_0c079e70(void)
{
    nlPushMatrix((void *)0x0C2B3410);
    nlMultiMatrix(*(void **)(0x0C2B3200 + 8));
    nlMultiMatrix(*(void **)(0x0C2B31F4 + 8));
    FUN_0c077f60();
    FUN_0c0781a0(1);
}

void FUN_0c079f10(void)
{
    FUN_0c077470((void *)0x0C2B3528);
    FUN_0c079ed0((void *)0x0C2B3410);
    nlMultiMatrix8((void *)0x0C2B3528);
    FUN_0c077470((void *)0x0C2B34A8);
    FUN_0c077470((void *)0x0C2B34E8);
    FUN_0c077b50((void *)0x0C2B3528);
}

/* The print state's defaults: a parameter block at 0C2AF118 (control, background, TSP words), the garbaged-texture set-up,
   then the colour index and flag. */
void FUN_0c076670(void)
{
    int *g = (int *)0x0C2AF118;

    g[0] = 0xA2000009;
    g[1] = 0x80000000;
    g[2] = 0x949004C7;
    nlPrintSetGarbagedTexture();
    g[4] = -1;
    g[5] = 0;
}

/* The value the entry points to, when the entry is in use and locked; else 0. */
int FUN_0c07fc10(short i)
{
    char *e = ENTRIES + i * 24;

    if (e[0] != 1)
        return 0;
    if (e[1])
        return **(int **)(e + 16);
    return 0;
}

/* Frees an entry in use and not locked. */
void FUN_0c07fd00(short i)
{
    char *e = ENTRIES + i * 24;

    if (e[0] == 1 && !e[1])
        e[0] = 0;
}

/* For every record of a model from p on (records of 80 bytes plus the length at +76): sets the bits of mask to val in
   the first word unless the mask is already all set. */
void FUN_0c07d620(char *p, int mask, int val)
{
    do {
        int *w = (int *)p;

        if ((*w & mask) != mask)
            *w = (*w & ~mask) | val;
        p += 80 + *(int *)(p + 76);
    } while (*(int *)p);
}

int nlMvSetShadowObjPutPol(int *m)
{
    if (m[0] >= 0 && m[6])
        FUN_0c07d620((char *)m + 24, 192, 128);
}

int FUN_0c07d5f0(int *m)
{
    if (m[0] >= 0 && m[6])
        FUN_0c07d620((char *)m + 24, 192, 0);
}

/* A word split into 4 bytes, most significant first. */
void FUN_0c0897f8(char *dst, int *src)
{
    int i, w = *src;

    for (i = 0; i < 4; i++)
        *dst++ = w >> (24 - 8 * i);
}

/* A halfword split into 2 bytes, most significant first. */
void FUN_0c089cc8(char *dst, unsigned short *src)
{
    int i, h = *src;

    for (i = 0; i < 2; i++)
        *dst++ = h >> (8 - 8 * i);
}

int FUN_0c0813e0(unsigned char *a, unsigned char *b, unsigned int n)
{
    unsigned int i;

    if (!n)
        return 0;
    for (i = 0; i < n; i++)
        if (*a++ != *b++)
            break;
    return a[-1] - b[-1];
}

int FUN_0c0893b8(unsigned char *a, unsigned char *b, unsigned int n)
{
    unsigned int i;

    if (!n)
        return 0;
    for (i = 0; i < n; i++)
        if (*a++ != *b++)
            break;
    return a[-1] - b[-1];
}

/* The 1024 palette words to the palette RAM registers (0x1000 on). */
int kmSetPaletteData(int *p)
{
    int i;

    for (i = 0; i < 1024; i++)
        kmiWriteRegister(0x1000 + i * 4, p[i]);
    return 0;
}
