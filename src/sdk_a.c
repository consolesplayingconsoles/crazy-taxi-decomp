/* NAOMI library and Katana glue, small functions (batch a). */

extern float _builtin_sqrtf(float);

extern void kmGetFreeTextureMem(int *a, int *b);
extern void nlInitPalette(int a, int b);
extern void kmSetPaletteMode(int m);
extern void nlFogTableSet(float *t);   /* the NAOMI library's stub that jumps to kmSetFogTable */
extern void nlPushMatrix(int a);
extern void nlInvLightVector(int a);
extern void nlMultiMatrixRevOrder8(void *a);
extern void nlobjput_sub(void *a);
extern int nlSpriteFreeTextureOnce_Sub(void *a, int b, int c, int d);
extern void nlstripSetVertexContext(void *a);
extern void nldispstripSub(void *a, int b, void *c);
extern int nlstripSetVertexContextTex(void *a, void *b);
extern void nldispstripTexOfsSub(void *a, void *b);

extern char gPaletteMode;
extern int gPaletteModeTable[];
extern short g_0c2b7bc4;
extern int g_0c2b7bd8;
extern unsigned int g_0c2af118;
extern char g_0c2b34a8[];
extern int g_0c2b75b8[];
extern char g_0c14aab4[];
extern char g_0c14ab2c[];

int texFreeMem(void)
{
    int v[2];

    kmGetFreeTextureMem(&v[0], &v[1]);
    return v[0];
}

void nlFreePaletteAll(void)
{
    nlInitPalette(g_0c2b7bd8, g_0c2b7bc4);
}

void paletteSetMode(int mode)
{
    gPaletteMode = (char)mode;
    kmSetPaletteMode(gPaletteModeTable[mode]);
}

float nlAbsSqrt(float x)
{
    if (0.0f > x)
        return -_builtin_sqrtf(-x);
    return _builtin_sqrtf(x);
}

float nlInvertSqrt(float x)
{
    if (x == 0.0f)
        return 3.4028234663852886e+38f;
    return 1.0f / _builtin_sqrtf(x);
}

void nlPrintTileClipMode(int mode)
{
    g_0c2af118 = (g_0c2af118 & 0xfffcffff) | (mode << 16);
}

void nlFogTableOff(void)
{
    float t[128];
    int i;

    for (i = 0; i < 128; i++)
        t[i] = 0.0f;
    nlFogTableSet(t);
}

void nlOuterProduct(float *a, float *b, float *out)
{
    out[2] = a[0] * b[1] - a[1] * b[0];
    out[1] = a[2] * b[0] - a[0] * b[2];
    out[0] = a[1] * b[2] - a[2] * b[1];
}

void nlTriPutSetAttribBlendingMode(unsigned int *p, int src, int dst)
{
    unsigned int *q = p + 6;

    q[2] = q[2] & 0x03ffffff;
    q[2] = q[2] | ((src & 7) << 29) | ((dst & 7) << 26);
}

void nlTriPutSetAttribSetTexAlpha(unsigned int *p, int on)
{
    unsigned int *q = p + 6;

    q[2] = q[2] | 0x00080000;
    if (on) {
        q[0] = q[0] | 0x02000000;
        q[2] = (((q[2] & 0x1fffffff) | 0x80000000) | 0x14000000 | 0xc0) & 0xfff7ffff;
    }
}

void nlTriPutSetAttribShading(int *p, int v)
{
    p[15] = v;
}

void nlObjPut(int *obj)
{
    if (!(obj[1] & 2))
        nlInvLightVector(obj[1]);
    nlPushMatrix(0);
    nlMultiMatrixRevOrder8(g_0c2b34a8);
    nlobjput_sub(obj);
}

int nlGetIntrFunction(int n, int *out)
{
    if (n >= 13) {
        *out = 0;
        return 0;
    }
    *out = g_0c2b75b8[n];
    return 1;
}

int nlSpriteFreeTexture(char *p, int x)
{
    int i;
    int acc = 0;

    for (i = 0; *(int *)(p + 16 * i + 4) != -1; i++)
        acc |= nlSpriteFreeTextureOnce_Sub(p, x, i, 0);
    return acc;
}

char *nlsndStreamGetHdInfo(char *p, int *out)
{
    *out = (unsigned char)p[7] << 4;
    return p;
}

void nlsndStreamSetHdGain(char *p, int g)
{
    int i;

    for (i = 0; i < 4; i++)
        p[48 + 4 * i] = (char)g;
}

void nlDispStrip(void *a, void *b)
{
    nlstripSetVertexContext(g_0c14aab4);
    nldispstripSub(a, 0, b);
}

void nlDispStripTexOfs(void *a, void *b, void *c)
{
    if (nlstripSetVertexContextTex(g_0c14ab2c, c) == 0)
        nldispstripTexOfsSub(a, b);
}
