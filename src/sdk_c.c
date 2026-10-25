/* Small NAOMI library (nl*) and runtime functions: texture and palette loading, trig helpers, object/triangle
   put attributes, interrupt priority, sound stream and DMA handles, strlen. */

extern float _builtin_sqrtf(float);
/* the 12-byte struct copy in nlObjPutSetFadeColor compiles to a call of this runtime helper */
extern void _quick_odd_mvn(void);

typedef struct { float x, y, z; } Vec3;
typedef struct { short w, h; int data; int pal; } DummyTex;

extern DummyTex g_0c0d6264;
extern char g_0c2aec8c[];
extern char *g_0c2b7bd8;
extern unsigned int g_0c2af0bc;
extern int g_0c2b31bc[3];
extern Vec3 g_0c14a948;
extern Vec3 g_0c14a958;
extern signed char g_0c14a9c0[][4];
extern float g_0c2b76d4[2];
extern char g_0c14aaf0[];

void kmCreateTextureSurface(void *s, int w, int h, int fmt);
void kmLoadTexture(void *s, int data, int a, int b);
void nlCreateTextureParamA(void *s);
void kmSetBorderColor(unsigned int c, int a5, int a6, int a7, unsigned int stack_c);
float nlSin(int a);
float nlLog(float x);
void nlSetPaletteData(int a, int b, int c);
void nlUnitVector(float *v);
void nlRotateAxe(float *v, int a);
int nlObjPutLoadTextureOnce_Sub(int a, int b, int i, int *pi, int z);
void kmSetCheapShadowMode(void);
void nlObjPutMvSetMode(int mode);
void nlObjPutMvSetClosingMode(int a);
void nlstripSetVertexContext(void *a);
void nldispstripSub(int a, int b, int c);

void nlLoadDummyTexture(void)
{
    kmCreateTextureSurface(g_0c2aec8c, g_0c0d6264.w, g_0c0d6264.h, g_0c0d6264.data);
    kmLoadTexture(g_0c2aec8c, g_0c0d6264.pal, 0, 0);
    nlCreateTextureParamA(g_0c2aec8c);
}

void nlReloadPalette(int idx, int b)
{
    char *e = g_0c2b7bd8 + idx * 8;

    if (*(short *)(e + 4)) {
        nlSetPaletteData(*(short *)e << 4, b, *(unsigned char *)(e + 3) << 4);
    }
}

void setBorderColor(unsigned int c)
{
    /* the colour is the callee's fifth (stack) argument; r4 carries it too, as in the original */
    kmSetBorderColor(c | 0xFF000000, 0, 0, 0, c | 0xFF000000);
}

float nlCosec(int a)
{
    a = a & 0xFFFF;
    if (a == 0 || a == 0x8000)
        return 3.4028235e38f;
    return 1.0f / nlSin(a);
}

float nlLog2(float x)
{
    return nlLog(x) / 0.693147123f;
}

void nlPrnIndentOn(void)
{
    g_0c2af0bc |= 1;
}

void nlRenderTextureInit(int size, int count)
{
    int *p = (int *)((size + 31) & -32);

    g_0c2b31bc[0] = (int)p;
    if (count < 0)
        count = 0;
    g_0c2b31bc[1] = count;
    g_0c2b31bc[2] = -1;
    for (; count > 0; count--) {
        p[0] = -1;
        p[1] = -1;
        p += 4;
    }
}

void nlRotate(float *v, int ang)
{
    struct { int a; float v[3]; } t;

    t.a = ang;
    t.v[0] = v[0];
    t.v[1] = v[1];
    t.v[2] = v[2];
    nlUnitVector(t.v);
    nlRotateAxe(t.v, t.a);
}

float nlScalor(float *v)
{
    return _builtin_sqrtf(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);
}

int nlObjPutLoadTexture(int a, int b)
{
    int i = 0;
    int r = 0;

    do {
        r |= nlObjPutLoadTextureOnce_Sub(a, b, i, &i, 0);
    } while (i);
    return r;
}

void nlTriPutSetAttribUV(char *p, int u, int v)
{
    unsigned int *w = (unsigned int *)(p + 24);

    w[2] &= 0xFFF9FFFF;
    if (u)
        w[2] |= 0x40000;
    if (v)
        w[2] |= 0x20000;
}

void nlTriPutSetAttribAmbient(char *p, float a)
{
    *(float *)(p + 24 + 40) = a;
}

void nlObjPutMvInit(void)
{
    kmSetCheapShadowMode();
    nlObjPutMvSetMode(1);
    nlObjPutMvSetClosingMode(1);
}

void nlObjPutSetFadeColor(float r, float g, float b)
{
    g_0c14a948.x = r;
    g_0c14a948.y = g;
    g_0c14a948.z = b;
    g_0c14a958 = g_0c14a948;
}

int nlGetIntrPriority(int n, int *out)
{
    unsigned short v;

    if (n > 12)
        return 0;
    v = *(unsigned short *)(0xFFD00004 + g_0c14a9c0[n][0]);
    *out = (v >> g_0c14a9c0[n][1]) & 15;
    return 1;
}

void nlSpriteGetImaginaryScreenSize(float *w, float *h)
{
    *w = g_0c2b76d4[0];
    *h = g_0c2b76d4[1];
}

void nlsndStreamSetHdChs(char *p, short n)
{
    p += 9;
    if (n == 1)
        *p = *p & 128;
    else if (n == 2)
        *p = (*p & 128) | 1;
    else if (n == 4)
        *p = (*p & 128) | 2;
}

int nlsndG2DmaHandleClose(int *h)
{
    if (*h == 1) {
        *h = 0;
        return 0;
    }
    return -1;
}

void nlDispStripTrnslX(int a, int b, int c)
{
    nlstripSetVertexContext(g_0c14aaf0);
    nldispstripSub(a, b, c);
}

int strlen(const char *s)
{
    int n = 0;

    while (*s++)
        n++;
    return n;
}
