extern int Exec_Balloon_Event();
/* Single functions between proven ones: empty bodies, constants and one-line stores. */

extern int g_0c14a644;

typedef struct {
    int a;
    int b;
    int c;
} Triple;


extern void _builtin_prefetch(void *);

/* prefetch(p): pref @r4, the store queue's flush on a store-queue address */
void prefetch(void *p)
{
    _builtin_prefetch(p);
}


float nlScalor2(float *v)
{
    return v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
}


int gdc_StopStreamVoice(int a);
int nlSysMetricsCpuPowerGet(void);
int buFbrWakeupFiber(int a, int b);
int nlGetMatrix(int a);


int set_event(int a, int b);
int Init_Balloon_Obj(int a, int b);

void nlLineClipPoint(float *a, float *b, float *c)
{
    float g;
    float t;

    g = *(float *)0xC2B7BDC;
    t = (g - a[2]) / (b[2] - a[2]);
    c[2] = g;
    c[0] = a[0] + t * (b[0] - a[0]);
    c[1] = a[1] + t * (b[1] - a[1]);
}


int ADXT_GetStat(int a);
int ADXT_GetNumSmpl(int a);
int nlArcTan2(float a, float b);


void nlPrintSetGarbagedTexture(void)
{
    unsigned int *s;
    unsigned int f;

    s = (unsigned int *)0xC2AF130;
    f = s[6];
    ((unsigned int *)0xC2AF118)[3] = ((f & 1) << 31) | ((f & 8) << 27) | (s[2] & 0x38000000)
                                     | ((~f & 4) << 24) | ((f & 16) << 21) | (s[7] >> 3);
}


float nlRoundUp(float x)
{
    float a;
    int n;

    a = x < 0.0f ? -x : x;
    if (!(8388608.0f > a)) {
        return x;
    }
    n = (int)a;
    if (a - (float)n == 0.0f) {
        return x;
    }
    if (x > 0.0f) {
        return (float)(n + 1);
    }
    return (float)(-1 - n);
}


int ADXF_GetFileRange(int a, int b, int *start, int *count);
int syG2FifoIsEmpty(int *r);


typedef void (*Release)(int);

int ADXSTM_Close(int a);
int ADXF_Ocbi(int a, int b);


int abs(int a);
int nlCommonTextureConvertUVnum(int a);


void nlCreateTextureParamA(unsigned int *p)
{
    unsigned int f;
    unsigned int hi;

    hi = (nlCommonTextureConvertUVnum(p[3]) << 3) & 0xFFFFFFF8;
    p[12] = hi | nlCommonTextureConvertUVnum(p[4]);
    f = p[6];
    p[13] = ((f & 1) << 31) | ((f & 8) << 27) | (p[2] & 0x38000000) | ((~f & 4) << 24) | ((f & 16) << 21)
            | (p[7] >> 3);
}

