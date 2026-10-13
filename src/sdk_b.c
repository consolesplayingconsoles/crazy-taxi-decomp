/* Small SDK (nl library) functions: texture surface tables, triangle/object put attributes, matrix helpers,
   sprite and sound stream setup, memset. */

extern int *g_0c2b29c0;
extern int g_0c2b29c4;
extern int g_0c2b317c;
extern int g_0c2b3184;
extern int g_0c2af364;
extern int g_0c14a7b8;
extern char g_0c2b3390[];
extern float g_0c14a910;
extern float g_0c2b316c;
extern void (*g_0c14a9a8[])(int);
extern float g_0c2b76cc[2];
extern float g_0c2b76d4[2];
extern char g_0c0d68d9[];
extern int g_0c2b783c[];
extern char g_0c14aadc[];
extern char *g_0c2b7bd8;

extern int nlPushMatrix(void *m);
extern void nlUnitMatrix();
extern void nlPopMatrix(int n);
extern float nlFloor(float x);
extern float nlLog(float x);
extern float nlScalor(float *v);
extern void FUN_0c0771b0(int a, int b);
extern void nlstripSetVertexContext(void *ctx);
extern void FUN_0c080ae0(int a, int b, int c);
extern void kmRender();
extern void kmFlipFrameBuffer();
extern void kmSetFogDensity(int w);

void nlInitTextureSurface(int *tbl, int n)
{
    int i;

    g_0c2b29c0 = tbl;
    g_0c2b29c4 = n;
    g_0c2b317c = 0;
    g_0c2b3184 = 0;
    for (i = 0; i < n; i++) {
        tbl[10] = -1;
        tbl[11] = 0;
        tbl[14] = -1;
        tbl += 15;
    }
}

int nlGetPaletteID(int id)
{
    return *(short *)(g_0c2b7bd8 + id * 8);
}

void frameFlip(void)
{
    g_0c2af364 = 1;
    kmRender();
    g_0c2af364 = 0;
    kmFlipFrameBuffer();
}

float nlCeil(float x)
{
    return -nlFloor(-x);
}

float nlLog10(float x)
{
    return nlLog(x) / 2.3025849f;
}

void nlPrintMonitorMode(int mode)
{
    g_0c14a7b8 = mode;
}

void njSetRenderWidth(int w)
{
    kmSetFogDensity(w);
}

int nlPushUnitMatrix(void)
{
    int m = nlPushMatrix(0);

    nlUnitMatrix();
    return m;
}

void nlScaleUnitVector(float *dst, float *src, float s)
{
    float k = s / nlScalor(src);

    dst[0] = src[0] * k;
    dst[1] = src[1] * k;
    dst[2] = src[2] * k;
}

void nlProjectScreen3D(int a, int b)
{
    nlPushMatrix(g_0c2b3390);
    FUN_0c0771b0(a, b);
    nlPopMatrix(1);
}

void nlTriPutSetAttribBiliner(char *p, int on)
{
    unsigned int *q = (unsigned int *)(p + 24);

    q[2] &= 0xFFFF9FFFu;
    if (on)
        q[2] |= 0x2000u;
}

void nlTriPutSetAttribTranslucent(char *p, float a)
{
    unsigned int *q = (unsigned int *)(p + 24);

    *(float *)((char *)q + 44) = a;
    q[2] &= 0xFFEFFFFFu;
    if (a < 1.0f) {
        q[0] |= 0x02000000u;
        q[2] = (q[2] & 0x1FFFFFFFu) | 0x80000000u | 0x14000000u | 0xC0u | 0x100000u;
    }
}

void nlTriPutSetClipping(char *p, float x0, float y0, float x1, float y1)
{
    float *q = (float *)(p + 24);

    q[4] = x0;
    q[5] = y0;
    q[6] = x1;
    q[7] = y1;
    ((float *)p)[2] = x0;
    ((float *)p)[3] = y0;
    ((float *)p)[4] = x1;
    ((float *)p)[5] = y1;
}

void nlObjPutSetGlobalAmbience(float a)
{
    g_0c14a910 = a;
    g_0c2b316c = a;
}

void nlIntrClearEvent(int n)
{
    if (n < 6)
        g_0c14a9a8[n](n);
}

void nlSpriteSetImaginaryScreenSize(float w, float h)
{
    g_0c2b76cc[0] = 1.0f / w;
    g_0c2b76cc[1] = 1.0f / h;
    g_0c2b76d4[0] = w;
    g_0c2b76d4[1] = h;
}

void nlsndStreamGenerateHdInfo(char *dst)
{
    int i;

    for (i = 0; i < 64; i++)
        dst[i] = g_0c0d68d9[i];
}

int *nlsndG2DmaHandleOpen(void)
{
    int i;
    int *p = g_0c2b783c;

    for (i = 0; i < 16; i++) {
        if (p[0] == 0) {
            p[0] = 1;
            return p;
        }
        p += 4;
    }
    return 0;
}

void nlDispStripTrnsl(int a, int b)
{
    nlstripSetVertexContext(g_0c14aadc);
    FUN_0c080ae0(a, 0, b);
}

void *memset(void *dst, int val, unsigned int n)
{
    unsigned int i;
    char *p = (char *)dst;

    for (i = 0; i < n; i++)
        *p++ = (char)val;
    return dst;
}
