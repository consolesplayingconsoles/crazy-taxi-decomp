/* Small functions in the gaps between proven ones: empty bodies and constants. */

void ADXRNA_ClearBuf(void)
{
}

void ADXRNA_SetPcmType(void)
{
}

void ADXRNA_SetTotalNumSmpl(void)
{
}

void ADXRNA_SetWavFname(void)
{
}

void ADXSTM_Finish(void)
{
}

void mwlRnaSetSvrInt(void)
{
}

void mwRnaInitCs(void)
{
}

void adxt_stat_playend(void)
{
}

void kmiInitRenderer(void)
{
}

void mwlRnaClearBuf(void)
{
}

int kmiEnableVSyncInterrupt(void)
{
    return 1;
}

int kmiEnableHSyncInterrupt(void)
{
    return 1;
}

int mwRnaDiscardData(void)
{
    return 0;
}

int mwlSbGetWorkTbl(void)
{
    return 0x0C17872C;
}

void Psg_SetPosPtr(int a, float *v);
int GetCollision2D(int a, float b);
void FUN_0c070aa6(void);

void Psg_SetPosVal(int a, float x, float y, float z)
{
    float v[3];

    v[0] = x;
    v[1] = y;
    v[2] = z;
    Psg_SetPosPtr(a, v);
}

float _app_coss(float x)
{
    float *t;
    float x2;
    float p;
    int i;

    t = (float *)0xC0DAC08;
    x2 = x * x;
    p = t[0];
    for (i = 1; i <= 6; i++) {
        p = x2 * p + t[i];
    }
    return p;
}

float _app_sins(float x)
{
    float *t;
    float x2;
    float p;
    int i;

    t = (float *)0xC0DAC28;
    x2 = x * x;
    p = t[0];
    for (i = 1; i <= 6; i++) {
        p = x2 * p + t[i];
    }
    return x * p;
}

int CheckClippingProject3D(float *v, float k)
{
    float a;

    a = v[0] < 0.0f ? -v[0] : v[0];
    return (k * *(float *)0xC13EEC0 - v[2]) > a * *(float *)0xC13EEC4;
}

void exec_GameSystem(void)
{
    void (*f)(void);

    f = ((void (**)(void))0xC08AF88)[*(int *)0xC1EE7EC % 3];
    if (f != 0) {
        f();
    }
}

void syChainMasterHandler(int a)
{
    int *n;

    n = ((int **)0xC2EBC10)[(short)a >> 4];
    while (n != 0) {
        ((void (*)(int))n[0])(n[2]);
        n = (int *)n[1];
    }
}

int nlsndStreamGetFreq(int a)
{
    int e;

    e = 0xC2B771C + (short)a * 24;
    if (*(signed char *)e == 1) {
        return *(int *)(e + 12);
    }
    return 0;
}

int nlsndStreamGetBitSize(int a)
{
    int e;

    e = 0xC2B771C + (short)a * 24;
    if (*(signed char *)e == 1) {
        return *(short *)(e + 2);
    }
    return 0;
}

int pedCarNotInSubway(void)
{
    int *hit;

    hit = (int *)GetCollision2D(0xC1790CC + 120, 20.0f);
    return hit[7] != 21;
}

typedef struct {
    int a;
    int b;
    int c;
} Vec12;

typedef struct {
    short a;
    short b;
    short c;
} Angles6;

int CheckSetDrive(void);

int BupProgressCallback(int a, int b, int c, int d)
{
    int *e;

    e = (int *)(0xC291E50 + (short)((short)a * 76));
    e[2] = c;
    e[3] = d;
    e[4] = b;
    if (b == 1) {
        CheckSetDrive();
    }
    return 0;
}

void camSave(void)
{
    *(int *)0xC2AD550 = *(int *)0xC179860;
    *(Vec12 *)0xC2AD554 = *(Vec12 *)0xC179840;
    *(Vec12 *)0xC2AD560 = *(Vec12 *)0xC17984C;
    *(Angles6 *)0xC2AD56C = *(Angles6 *)0xC179858;
}

typedef struct {
    int v[2];
} Words2;

typedef struct {
    int v[7];
} Words7;

void KyaCamera(int a)
{
    Words2 t;

    t = *(Words2 *)0xC0D5278;
    ((void (*)(int, int *))t.v[a])(a, t.v);
}

void psgCallEnter(int a, int b, int c)
{
    Words7 t;

    t = *(Words7 *)0xC0D5A98;
    ((void (*)(int, int, int *))t.v[b])(a, c, t.v);
}
