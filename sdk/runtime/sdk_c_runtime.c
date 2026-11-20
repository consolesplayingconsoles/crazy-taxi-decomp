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


int strlen(const char *s)
{
    int n = 0;

    while (*s++)
        n++;
    return n;
}
