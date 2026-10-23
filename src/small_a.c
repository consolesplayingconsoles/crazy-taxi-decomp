extern int Exec_Balloon_Event();
/* Single functions between proven ones: empty bodies, constants and one-line stores. */

extern int g_0c14a644;

typedef struct {
    int a;
    int b;
    int c;
} Triple;

void ShotLandmarkStub(void)
{
}

void nd_StartWait_Stub(void)
{
}

void Chat_Init(void)
{
}

void ADXSTM_EntryErrFunc(void)
{
}

void prefetch(void *p)
{
}

void nlPaletteDirectMode(int a)
{
    g_0c14a644 = a;
}

int gdFsGetGdDcf(void)
{
    return 0x0C1761D4;
}

int syTmrDiffCount(int a, int b)
{
    return b - a;
}

int ADXRNA_GetNumRoom(void)
{
    return 0x7FFFFFFF;
}

int ADXSJD_GetSpsdInfo(int a)
{
    return a + 88;
}

void HomingPosX(float *p, float a, float b)
{
    float v;

    v = *p;
    *p = v + (b - v) * a;
}

float nlScalor2(float *v)
{
    return v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
}

void kdSetHandler(unsigned int index, int handler)
{
    if (index <= 31) {
        ((int *)0xC2EBF94)[index] = handler;
    }
}

void SetCameraPosVelocity(Triple *src)
{
    *(Triple *)0xC1798DC = *src;
}

int gdc_StopStreamVoice(int a);
int nlSysMetricsCpuPowerGet(void);
int buFbrWakeupFiber(int a, int b);
int nlGetMatrix(int a);

void Voice_ShutUp(int a)
{
    int *p;

    p = (int *)(0xC2AEBE0 + a * 16);
    if (*p != 0) {
        gdc_StopStreamVoice(a);
        *p = 0;
        p[3] = 0;
    }
}

float usedCpuPowerCheck(void)
{
    float now;
    float prev;

    now = (float)nlSysMetricsCpuPowerGet();
    prev = *(float *)0xC0F4274;
    *(float *)0xC0F4274 = now;
    return (now - prev) / 150.0f;
}

int buFbrKillFiber(int a, int b)
{
    int e;

    e = a + 0x210 + b * 0x124;
    if (*(int *)(e + 12) == 1) {
        buFbrWakeupFiber(a, b);
        *(int *)(e + 12) = 2;
        return 0;
    }
    return -1;
}

void GetRotVec(Triple *p)
{
    int m;

    m = nlGetMatrix(0);
    p[0] = *(Triple *)(m + 32);
    p[1] = *(Triple *)(m + 16);
}

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

int Set_Balloon(int a)
{
    int h;

    h = set_event(0x80, ((int)Exec_Balloon_Event));
    *(int *)(0xC2A9BC0 + a * 4) = h;
    if (h == 0) {
        return 0;
    }
    Init_Balloon_Obj(*(int *)(0xC2A9BC0 + a * 4), a);
    return 1;
}

int ADXT_GetStat(int a);
int ADXT_GetNumSmpl(int a);
int nlArcTan2(float a, float b);

int gdc_GetStreamVoiceTotalTime(int index)
{
    int handle;

    handle = ((int *)0xC1EE810)[index];
    if (ADXT_GetStat(handle) < 2) {
        return 0x58764;
    }
    return (int)((float)ADXT_GetNumSmpl(((int *)0xC1EE810)[index]) * 0.00136054412f);
}

void nlPrintSetGarbagedTexture(void)
{
    unsigned int *s;
    unsigned int f;

    s = (unsigned int *)0xC2AF130;
    f = s[6];
    ((unsigned int *)0xC2AF118)[3] = ((f & 1) << 31) | ((f & 8) << 27) | (s[2] & 0x38000000)
                                     | ((~f & 4) << 24) | ((f & 16) << 21) | (s[7] >> 3);
}

void TOANG(short *p, short *q, float x, float y, float z)
{
    float r;

    r = _builtin_sqrtf(z * z + x * x);
    *p = nlArcTan2(y, r);
    *q = nlArcTan2(-x, z);
}

float pfLength(signed char *s)
{
    float len;
    float k;
    int c;

    len = 0.0f;
    k = *(float *)0xC26E1FC;
    for (; *s != 0; s++) {
        c = *s;
        if (c >= 32 && c <= 127) {
            len += k * (*(float *)(*(int *)0xC26E1E8 + (signed char)(c - 32) * 16 + 4) - 1.0f);
        }
    }
    return len + k;
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

int getGoiToolSelect(int *out)
{
    int v;
    int count;
    int limit;
    int low;

    v = *(int *)0xC2A4E64;
    count = 0;
    limit = (out != 0 ? *out : 0) - 1;
    for (;;) {
        low = v & 31;
        if ((v & 32) == 0) {
            break;
        }
        if (count == limit) {
            break;
        }
        count++;
        if (count >= 5) {
            break;
        }
        v >>= 6;
    }
    if (out != 0) {
        count++;
        *out = count;
    }
    return low;
}

int ADXF_GetFileRange(int a, int b, int *start, int *count);
int syG2FifoIsEmpty(int *r);

int adxf_SetAfsFileInfo(int *obj, int a, int b)
{
    int f[2];

    if (ADXF_GetFileRange(a, b, &f[1], &f[0]) < 0) {
        return -3;
    }
    obj[3] = f[1];
    obj[4] = f[0];
    obj[5] = f[0] << 11;
    return 0;
}

int syG2FifoWaitEmpty(void)
{
    int r;

    do {
        syG2FifoIsEmpty(&r);
    } while (r != 1);
    *(int *)(*(int *)0xC178700 + 0x10C) += 1;
    return 0;
}

typedef void (*Release)(int);

int ADXSTM_Close(int a);
int ADXF_Ocbi(int a, int b);

void adxf_CloseSjStm(int *obj)
{
    int t;

    if (obj[1] != 0) {
        ADXSTM_Close(obj[1]);
        obj[1] = 0;
    }
    if (obj[2] != 0 && *(signed char *)((int)obj + 2) == 0) {
        if (*(int *)0xC2BA338 == 1) {
            ADXF_Ocbi(obj[10], obj[11]);
        }
        t = obj[2];
        ((Release)((int *)*(int *)t)[3])(t);
        obj[2] = 0;
    }
}

void kmytex_FBDeQueueEntry(int *head, int *tail, int *node)
{
    int *prev;
    int *next;

    prev = (int *)node[1];
    next = (int *)node[2];
    if (prev == 0) {
        *head = (int)next;
    } else {
        prev[2] = (int)next;
    }
    if (next == 0) {
        *tail = (int)prev;
    } else {
        next[1] = (int)prev;
    }
}

int abs(int a);
int nlCommonTextureConvertUVnum(int a);

int convergeRot(int a, int b, float k)
{
    int x;
    int y;
    int d;

    x = (unsigned short)a;
    y = (unsigned short)b;
    if (abs(y - x) < 0x8000) {
        d = y - x;
    } else if (y > x) {
        d = 0xFFFF0000 + (y - x);
    } else {
        d = 0x10000 + (y - x);
    }
    return (int)((float)d * k);
}

int search_dir_by_startfat(int disk, int fat)
{
    int base;
    int entry;
    int i;

    base = 0xC2EE990 + disk * 328;
    entry = *(int *)(base + 40);
    for (i = 0; i < *(int *)(*(int *)(base + 28) + 48); i++) {
        if (*(unsigned char *)entry != 0) {
            if ((unsigned short)((int (*)(int, int))((int *)*(int *)0xC2EE98C)[3])(entry, 2) == fat) {
                return entry;
            }
        }
        entry += 32;
    }
    return 0;
}

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

int kmChangeLatencyModel(int a, int b)
{
    *(int *)0xC2EA9F0 = 0;
    if (*(int *)0xC2EA88C != 0) {
        do {
            (*(void (**)(int))0xC2EA8E8)(*(int *)0xC2EA8EC);
            if (*(unsigned int *)0xC2EA9F0 > 10) {
                break;
            }
        } while (*(int *)0xC2EA88C != 0);
    }
    *(int *)0xC2EA9C4 = a;
    *(int *)0xC2EAAA0 = b;
    *(int *)0xC2EAAA4 = b & 15;
    *(int *)0xC2EA9CC = 0;
    *(int *)0xC2EA9D0 = -1;
    *(int *)0xC2EA9D4 = -1;
    *(int *)0xC2EA9D8 = -1;
    *(int *)0xC2EA9DC = 0;
    *(int *)0xC2EA9E0 = 0;
    *(int *)0xC2EA9E4 = 0;
    return 0;
}
