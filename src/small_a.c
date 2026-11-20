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


void HomingPosX(float *p, float a, float b)
{
    float v;

    v = *p;
    *p = v + (b - v) * a;
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


void GetRotVec(Triple *p)
{
    int m;

    m = nlGetMatrix(0);
    p[0] = *(Triple *)(m + 32);
    p[1] = *(Triple *)(m + 16);
}

int set_event(int a, int b);
int Init_Balloon_Obj(int a, int b);


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


typedef void (*Release)(int);

int ADXSTM_Close(int a);
int ADXF_Ocbi(int a, int b);


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


