/* Small SDK (nl library) functions: texture and font settings, tri-put attributes, vector helpers, string compare. */

extern int g_0c2aec8c[];
extern int g_0c14a7c0;
extern int g_0c2af0c8;
extern int g_0c2af0cc;
extern float g_0c14a948[];
extern unsigned int g_0c14aa70;
extern unsigned int *g_0c2b76c4;
extern int g_0c14a834[];
extern int g_0c14a644;
extern short g_0c2b7bc4;
extern char g_0c2aedd8[];
extern char g_0c14ab04[];

void nlReloadPalette(int index);
int kmfGetInternalSystemMetrics(char *p);
float nlSinf(float x);
void nlRenderTextureSet_Sub(int a, int b, int c, int d, int e);
void nlTranslate(float x, float y, float z);
void nlObjPutLoadTexture(int *p, int tex);
void kmSetCheapShadowMode(int mode);
void nlFreePalette(int index);
int nlstripSetVertexContextTex(char *a, int b);
void nldispstripTexSub(int a, int b);
int _slow_strcmp1(char *a, char *b);

void nlSetDummyTextureParameter(int *p)
{
    p[2] = (p[2] & -64) | g_0c2aec8c[12];
    p[3] = (p[3] & 0xF8000000) | g_0c2aec8c[13];
}

void nlReloadPalette8888(int index)
{
    nlReloadPalette(index);
}

int getSystemMetrics(void)
{
    return kmfGetInternalSystemMetrics(g_0c2aedd8);
}

float nlCosf(float x)
{
    float a = x;
    if (a < 0.0f)
        a = -a;
    return nlSinf(1.5707963f - a);
}

void nlInitFont(int v)
{
    g_0c14a7c0 = v;
}

void nlSetFontSize(int w, int h)
{
    g_0c2af0c8 = w;
    g_0c2af0cc = h;
}

void nlRenderTextureSet(int a, int b, int c, int d)
{
    nlRenderTextureSet_Sub(a, b, c, d, 1);
}

void nlTranslateV(float *v)
{
    nlTranslate(v[0], v[1], v[2]);
}

void nlSubVector(float *a, float *b)
{
    a[0] = a[0] - b[0];
    a[1] = a[1] - b[1];
    a[2] = a[2] - b[2];
}

void nlTriPutTextureInit(int *p, int v, int tex)
{
    int i;
    for (i = 0; i < 54; i++)
        p[i] = g_0c14a834[i];
    p[14] = v;
    nlObjPutLoadTexture(p, tex);
}

void nlTriPutSetAttribOffsetColor(char *p, float r, float g, float b)
{
    *(float *)(p + 88) = r;
    *(float *)(p + 92) = g;
    *(float *)(p + 96) = b;
}

void nlObjPutMvSetIntensity(int mode)
{
    kmSetCheapShadowMode(mode);
}

void nlObjPutSetFadeColorBase(float r, float g, float b)
{
    g_0c14a948[0] = r;
    g_0c14a948[1] = g;
    g_0c14a948[2] = b;
}

void nlLineBlendFunc(unsigned int src, unsigned int dst)
{
    g_0c14aa70 &= 0x1FFFFFFF;
    g_0c14aa70 &= 0xE3FFFFFF;
    g_0c14aa70 |= ((src & 7) << 29) | ((dst & 7) << 26);
}

void nlSpriteClearSpriteIndex(int i)
{
    g_0c2b76c4[i >> 5] &= ~(1 << (i & 31));
}

void nlsndStreamSetHdBitSize(char *p, short bits)
{
    if (bits == 4)
        p[8] = 3;
    else if (bits == 8)
        p[8] = 1;
    else if (bits == 16)
        p[8] = 0;
}

void nlDispStripFreePalette(int i)
{
    if (g_0c14a644 == 0 && i < g_0c2b7bc4)
        nlFreePalette(i);
}

void nlDispStripTex(int a, int b, int c)
{
    if (nlstripSetVertexContextTex(g_0c14ab04, c) == 0)
        nldispstripTexSub(a, b);
}

int strcmp(char *a, char *b)
{
    return _slow_strcmp1(a, b);
}
