/* Small SDK (nl*, km glue, libc) functions, batch e. */

extern float nlAbsSqrt(float x);
extern int FUN_0c085dfc(void *buf, char *fmt, void *args);
extern int nlPuts(void *buf);
extern int FUN_0c077b50(void *m);
extern int FUN_0c077290(int n, void *m);
extern int nlSpriteLoadTextureOnce_Sub(void *p, void *name, int i, int z);
extern int FUN_0c080990(void *a, int b);
extern int FUN_0c080c50(int a, int b);
extern int kmSetPaletteData(void *p);
extern int kmDiscardVertexBuffer(void *p);

extern char gPaletteDirty[];
extern char gPaletteData[];
extern short g_0c2aecc8[];
extern char g_0c2af368[];
extern float g_0c14a7bc;
extern char g_0c2b31dc[];
extern float g_0c14a958[];
extern int g_0c2b356c;
extern int g_0c2b77dc[];
extern int g_0c2b76fc;
extern int g_0c2b7940;
extern char g_0c14ab18[];

void nlInitPalette(char *table, int count)
{
    char *p;
    short *q;
    unsigned int n;

    *(char **)(gPaletteDirty + 24) = table;
    *(short *)(gPaletteDirty + 4) = count;
    p = table;
    n = count;
    while (n != 0) {
        *(short *)(p + 6) = -1;
        *(short *)p = -1;
        *(char *)(p + 2) = -1;
        *(short *)(p + 4) = 0;
        *(char *)(p + 3) = 0;
        p += 8;
        n--;
    }
    for (q = g_0c2aecc8; q < g_0c2aecc8 + 4; q++)
        *q = 0;
}

void paletteUpload(void)
{
    if (gPaletteDirty[0] != 0) {
        gPaletteDirty[0] = 0;
        kmSetPaletteData(gPaletteData);
    }
}

int discardVertexBuffer(void)
{
    return kmDiscardVertexBuffer(g_0c2af368);
}

float nlInvertAbsSqrt(float x)
{
    if (x == 0.0f)
        return 3.4028234663852886e+38f;
    return 1.0f / nlAbsSqrt(x);
}

void nlPrintSetZ(float z)
{
    g_0c14a7bc = 1.0f / z;
}

int nlGetPushedMatrix(int n)
{
    char *m;

    m = *(char **)(g_0c2b31dc + 8) - 64;
    if (n == 0)
        return FUN_0c077b50(m);
    return FUN_0c077290(n, m);
}

void nlGetAverageVector(float *a, float *b, float *out, float w1, float w2)
{
    float x, y, z;

    x = a[0] * w1;
    y = a[1] * w1;
    z = a[2] * w1;
    out[0] = x + w2 * b[0];
    out[1] = y + w2 * b[1];
    out[2] = z + w2 * b[2];
}

void nlTriPutSetPaletteIndex(char *p, int index)
{
    **(int **)(p + 84) = index;
}

void nlTriPutSetAttribFaceColor(char *p, float r, float g, float b)
{
    *(float *)(p + 72) = r;
    *(float *)(p + 76) = g;
    *(float *)(p + 80) = b;
}

void nlObjPutMvSetMode(int mode)
{
    if (mode != 2)
        mode = 1;
    g_0c2b356c = mode << 29;
}

void nlObjPutSetFadeColorOffset(float r, float g, float b)
{
    g_0c14a958[0] = r;
    g_0c14a958[1] = g;
    g_0c14a958[2] = b;
}

int nlObjPutSetReplaceTextureDirName(char *p, void *name)
{
    int i, acc;
    char *e;

    acc = 0;
    i = 0;
    for (e = p; *(int *)(e + 4) != -1; e += 16) {
        acc |= nlSpriteLoadTextureOnce_Sub(p, name, i, 0);
        i++;
    }
    return acc;
}

int nlsndCheckPackFreeError(int n)
{
    if (n < 0 || n >= 8)
        return -1;
    if (g_0c2b77dc[n * 3] == -1)
        return -2;
    if (g_0c2b76fc != 0)
        return -3;
    return 0;
}

void nlsndStreamSetHdFx(char *p, short a, short b)
{
    int i, v;

    v = (a << 4) | b;
    for (i = 0; i < 4; i++)
        p[51 + i * 4] = v;
}

void nlDispStripSetPalette(int pal)
{
    g_0c2b7940 = pal;
}

int nlDispStripTexTrnsl(int a, int b, int c)
{
    int r;

    r = FUN_0c080990(g_0c14ab18, c);
    if (r == 0)
        return FUN_0c080c50(a, b);
    return r;
}

char *strncpy(char *dst, char *src, unsigned int n)
{
    char *d;
    unsigned int i;

    d = dst;
    i = 0;
    while (i < n && *src != 0) {
        *d++ = *src++;
        i++;
    }
    while (i < n) {
        *d++ = 0;
        i++;
    }
    return dst;
}
