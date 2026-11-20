/* Straight-line functions with calls and guards (batch gen_cj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int pfCleanString(void);
int pfAddChar(int);
int pfAddNumber(int);
int getShortRootPoint(int, int, int);
typedef struct { short x, y, z; } AngleR;
int Model_Put_Sprite3D(int, int, AngleR, float, int);      /* manual: the definition's parameters (gen_wn.c); this file does not call it */
float nlSinfReduce(int, float);
int nlCalcVector(int, int);
int abs(int);
int FcvPlayBuffer(int, int);
int FcvStoreBuffer(int, int, float);
int ResetFadeColor(void);
extern float _builtin_fipr(float *, float *);
extern float _builtin_sqrtf(float);
static float iaFsrra(float x)
{
    return _builtin_fsrra(x);
}
int ndPuru2Start(int, int, int);
int nlCloseEvent(int);
float nlCos(int);
int nlFastSinCos(int, int, int);
float nlInnerProduct(int, int);
float nlLength(int, int);
int nlMultiMatrix(int);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutSetFadeColorBase(float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
float nlScalor(int);
float nlSin(int);
int nlSprPut(int);
int nlSubVector3op(int, int, int);
int pfColor(int, int, int, int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFont(int);
int pfSize(float, float);
void nlVoidUnitVector(int a4);
float nlSinf(float f4);
int nlMvClipEdge(int a4, int a5, int a6);
int nlMakeProjConvMat(int a4);
float carEngineTorque(float f4);
float CalcHomingAngle(int a4);
int nlRotateAxe(int a4, int a5);
int fcvRotate(int a4);
int getRootDistance(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int Exec_FogColor(void);
int PutNameEntryScreen(void);
float ReflectColliWallBox(int a4, int a5, int a6, int a7);
int technicalBonusExec(int a4);
int drvJolt(void);
int carLoadTransfer(int a4);

void nlVoidUnitVector(int a4)
{
    float u0;
    float u1;
    float u2;
    float u5;
    float u6;
    float u3[4];
    float u4[4];

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)(((a4 + 0x4) + 0x0));
    u2 = *(float *)((((a4 + 0x4) + 0x4) + 0x0));
    u3[0] = u0;
    u3[1] = u1;
    u3[2] = u2;
    u3[3] = 0.0f;
    u4[0] = u0;
    u4[1] = u1;
    u4[2] = u2;
    u4[3] = 0.0f;
    u5 = _builtin_fipr(u3, u4);
    u6 = iaFsrra(u5);
    *(float *)((((((a4 + 0x4) + 0x4) + 0x4) - 0x4) + 0x0)) = (u2 * u6);
    *(float *)(((((((a4 + 0x4) + 0x4) + 0x4) - 0x4) - 0x4) + 0x0)) = (u1 * u6);
    *(float *)((((((((a4 + 0x4) + 0x4) + 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = (u0 * u6);
}

float nlSinf(float f4)
{
    float t0;
    int t1;
    int t2;
    int stk[5] = {0};

    *(float *)(((int)stk + 8)) = f4;
    t0 = nlSinfReduce(((int)stk + 4), (f4 / (1.0f + 1.0f)));
    t1 = *(int *)(((int)stk + 4));
    t2 = ((~(((~t1) + 0x1) & 0x1)) + 0x1);
    if ((int)t1 >= 0) {
        t2 = (t1 & 0x1);
    }
    if (t2 == 0) {
        return ((t0 * (1.0f + 1.0f)) / (1.0f + t0 * t0));
    }
    return (-((t0 * (1.0f + 1.0f)) / (1.0f + t0 * t0)));
}

int nlMvClipEdge(int a4, int a5, int a6)
{
    int t0;
    int t1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9;
    int t10;

    t0 = *(int *)((a4 + 0xC));
    t1 = *(int *)((a5 + 0xC));
    if ((int)(t0 ^ t1) >= 0) {
        *(float *)((a6 + 0xC)) = -1.0f;
        t10 = 0xC;
    } else {
        u2 = *(float *)0xC2B7BDC;
        u3 = *(float *)((a4 + 0x8));
        u4 = *(float *)((a5 + 0x8));
        *(float *)((a6 + 0xC)) = (1.0f / u2);
        *(float *)((a6 + 0x8)) = u2;
        u5 = *(float *)((a5 + 0x8));
        u6 = *(float *)((a4 + 0x0));
        u7 = *(float *)((a5 + 0x0));
        *(float *)((a6 + 0x0)) = (u7 + ((u2 - u5) * (1.0f / (u3 - u4))) * (u6 - u7));
        u8 = *(float *)((a5 + 0x4));
        u9 = *(float *)((a4 + 0x4));
        *(float *)((a6 + 0x4)) = (u8 + ((u2 - u5) * (1.0f / (u3 - u4))) * (u9 - u8));
        t10 = 0x4;
    }
    return t10;
}

int nlMakeProjConvMat(int a4)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;

    u0 = *(float *)0xC14A824;
    *(float *)((a4 + 0x0)) = (u0 * 0.5f);
    *(float *)((a4 + 0x4)) = 0.0f;
    *(float *)((a4 + 0x8)) = 0.0f;
    *(float *)((a4 + 0xC)) = 0.0f;
    *(float *)((a4 + 0x10)) = 0.0f;
    u1 = *(float *)0xC14A828;
    *(float *)((a4 + 0x14)) = (-(u1 * 0.5f));
    *(float *)((a4 + 0x18)) = 0.0f;
    *(float *)((a4 + 0x1C)) = 0.0f;
    *(float *)((a4 + 0x20)) = 0.0f;
    *(float *)((a4 + 0x24)) = 0.0f;
    *(float *)((a4 + 0x28)) = -0.5f;
    *(float *)((a4 + 0x2C)) = 0.0f;
    u2 = *(float *)0xC14A82C;
    u3 = *(float *)0xC14A824;
    *(float *)((a4 + 0x30)) = (u2 + 0.5f * u3);
    u4 = *(float *)0xC14A828;
    u5 = *(float *)0xC14A830;
    *(float *)((a4 + 0x34)) = (u5 + 0.5f * u4);
    *(float *)((a4 + 0x38)) = 0.5f;
    *(float *)((a4 + 0x3C)) = 1.0f;
    return 0x3C;
}


int nlRotateAxe(int a4, int a5)
{
    float t0;
    int t1;
    float t2;
    int t3;
    float u4;
    float u5;
    float u6;
    int t7;
    int stk[20] = {0};
    int R1068;
    int R1072;

    R1068 = *(int *)((int)stk + 68);
    R1072 = *(int *)((int)stk + 72);

    R1072 = a4;
    R1068 = a5;
    t0 = nlCos(a5);
    *(float *)(((int)stk + 64)) = t0;
    t1 = R1068;
    t2 = nlSin(t1);
    t3 = R1072;
    u4 = *(float *)((t3 + 0x0));
    u5 = *(float *)((t3 + 0x4));
    u6 = *(float *)((t3 + 0x8));
    *(float *)(((int)stk + 4)) = ((u4 * u4) + t0 * (1.0f - (u4 * u4)));
    *(float *)(((int)stk + 8)) = ((t2 * u6) + (((1.0f - t0) * u4) * u5));
    *(float *)(((int)stk + 12)) = ((((1.0f - t0) * u4) * u6) - (t2 * u5));
    *(float *)(((int)stk + 20)) = ((((1.0f - t0) * u4) * u5) - (t2 * u6));
    *(float *)(((int)stk + 24)) = ((u5 * u5) + t0 * (1.0f - (u5 * u5)));
    *(float *)(((int)stk + 28)) = ((t2 * u4) + (((1.0f - t0) * u5) * u6));
    *(float *)(((int)stk + 36)) = ((t2 * u5) + (((1.0f - t0) * u4) * u6));
    *(float *)(((int)stk + 40)) = ((((1.0f - t0) * u5) * u6) - (t2 * u4));
    *(float *)(((int)stk + 44)) = ((u6 * u6) + t0 * (1.0f - (u6 * u6)));
    *(float *)((((int)stk + 4) + 0x38)) = 0.0f;
    *(float *)((((int)stk + 4) + 0x34)) = 0.0f;
    *(float *)((((int)stk + 4) + 0x30)) = 0.0f;
    *(float *)((((int)stk + 4) + 0x2C)) = 0.0f;
    *(float *)((((int)stk + 4) + 0x1C)) = 0.0f;
    *(float *)((((int)stk + 4) + 0xC)) = 0.0f;
    *(float *)(((int)stk + 64)) = 1.0f;
    t7 = nlMultiMatrix(((int)stk + 4));
    return t7;
}


