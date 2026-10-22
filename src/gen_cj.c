/* Straight-line functions with calls and guards (batch gen_cj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int pfCleanString(void);
int FUN_0c0310ae(int);
int pfAddNumber(int);
int FUN_0c04a38a(int, int, int);
int FUN_0c058b70(int, int, int, float);
float FUN_0c076200(int, float);
int FUN_0c077210(int, int);
int FUN_0c0813d0(int);
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
int FUN_0c07cb70(int a4, int a5, int a6);
int FUN_0c079980(int a4);
float FUN_0c020d20(float f4);
float FUN_0c036378(int a4);
int FUN_0c078480(int a4, int a5);
int fcvRotate(int a4);
float FUN_0c04a3d2(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int FUN_0c0601f0(void);
int FUN_0c0397e8(void);
float FUN_0c034b5e(int a4, int a5, int a6, int a7);
int technicalBonusExec(int a4);
int drvJolt(void);
int FUN_0c021244(int a4);

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
    t0 = FUN_0c076200(((int)stk + 4), (f4 / (1.0f + 1.0f)));
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

int FUN_0c07cb70(int a4, int a5, int a6)
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

int FUN_0c079980(int a4)
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


float FUN_0c036378(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    float u4;
    float u5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    float u11;
    float u12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    float u18;
    float u19;
    int t20;

    t0 = *(int *)((a4 + 0x0));
    t1 = *(int *)((a4 + 0x18));
    t2 = *(int *)((a4 + 0xC));
    t3 = (t1 - t0);
    if ((int)(short)(t1 - t0) > (int)((short)(t1 - t0) + 0x8000)) {
        t3 = (-(t1 - t0));
    }
    u4 = *(float *)((a4 + 0x24));
    u5 = *(float *)((a4 + 0x28));
    *(unsigned int *)((a4 + 0xC)) = (int)(((float)(short)t3 * u4) + u5 * (float)t2);
    t6 = *(int *)((a4 + 0x0));
    *(unsigned int *)((a4 + 0x0)) = (unsigned short)(t6 + (int)(((float)(short)t3 * u4) + u5 * (float)t2));
    t7 = *(int *)((a4 + 0x1C));
    t8 = *(int *)((a4 + 0x4));
    t9 = *(int *)((a4 + 0x10));
    t10 = (t7 - t8);
    if ((int)(short)(t7 - t8) > (int)((short)(t7 - t8) + 0x8000)) {
        t10 = (-(t7 - t8));
    }
    u11 = *(float *)((a4 + 0x24));
    u12 = *(float *)((a4 + 0x28));
    *(unsigned int *)((a4 + 0x10)) = (int)(((float)(short)t10 * u11) + u12 * (float)t9);
    t13 = *(int *)((a4 + 0x4));
    *(unsigned int *)((a4 + 0x4)) = (unsigned short)(t13 + (int)(((float)(short)t10 * u11) + u12 * (float)t9));
    t14 = *(int *)((a4 + 0x20));
    t15 = *(int *)((a4 + 0x8));
    t16 = *(int *)((a4 + 0x14));
    t17 = (t14 - t15);
    if ((int)(short)(t14 - t15) > (int)(0x8000 + (short)(t14 - t15))) {
        t17 = (-(t14 - t15));
    }
    u18 = *(float *)((a4 + 0x24));
    u19 = *(float *)((a4 + 0x28));
    *(unsigned int *)((a4 + 0x14)) = (int)(((float)(short)t17 * u18) + u19 * (float)t16);
    t20 = *(int *)((a4 + 0x8));
    *(unsigned int *)((a4 + 0x8)) = (unsigned short)(t20 + (int)(((float)(short)t17 * u18) + u19 * (float)t16));
    return u19;
}

int FUN_0c078480(int a4, int a5)
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

    *(unsigned int *)(((int)stk + 72)) = a4;
    *(unsigned int *)(((int)stk + 68)) = a5;
    t0 = nlCos(a5);
    *(float *)(((int)stk + 64)) = t0;
    t1 = *(int *)(((int)stk + 68));
    t2 = nlSin(t1);
    t3 = *(int *)(((int)stk + 72));
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

int fcvRotate(int a4)
{
    int t0;
    int t2;
    int t4;
    float u6;
    float u7;
    float u8;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;
    float u15;
    float u16;
    float u17;
    float u18;
    float u19;
    float u20;
    float u21;
    float u22;
    float u23;
    float u24;
    float u25;
    float u26;
    float u27;
    float u28;
    float u29;
    float u30;
    float u31;
    float u32;
    float u33;
    float u34;
    int t35;
    int stk[10] = {0};

    t0 = *(int *)((a4 + 0x0));
    nlFastSinCos(t0, (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x10));
    t2 = *(int *)((a4 + 0x4));
    nlFastSinCos(t2, (((int)stk + 4) + 0x8), (((int)stk + 4) + 0x14));
    t4 = *(int *)((a4 + 0x8));
    nlFastSinCos(t4, ((int)stk + 4), (((int)stk + 4) + 0x4));
    u6 = *(float *)(((int)stk + 8));
    u7 = *(float *)(((int)stk + 24));
    *(float *)0xC13EDFC = (u7 * u6);
    u8 = *(float *)(((int)stk + 4));
    u9 = *(float *)(((int)stk + 24));
    *(float *)0xC13EE00 = (u8 * u9);
    u10 = *(float *)(((int)stk + 12));
    *(float *)0xC13EE04 = (-u10);
    u11 = *(float *)(((int)stk + 12));
    u12 = *(float *)(((int)stk + 16));
    u13 = *(float *)(((int)stk + 8));
    u14 = *(float *)(((int)stk + 20));
    u15 = *(float *)(((int)stk + 4));
    *(float *)0xC13EE0C = (((u12 * u11) * u13) - (u15 * u14));
    u16 = *(float *)(((int)stk + 12));
    u17 = *(float *)(((int)stk + 16));
    u18 = *(float *)(((int)stk + 8));
    u19 = *(float *)(((int)stk + 20));
    u20 = *(float *)(((int)stk + 4));
    *(float *)0xC13EE10 = ((u19 * u18) + u20 * (u17 * u16));
    u21 = *(float *)(((int)stk + 24));
    u22 = *(float *)(((int)stk + 16));
    *(float *)0xC13EE14 = (u22 * u21);
    u23 = *(float *)(((int)stk + 20));
    u24 = *(float *)(((int)stk + 12));
    u25 = *(float *)(((int)stk + 16));
    u26 = *(float *)(((int)stk + 4));
    u27 = *(float *)(((int)stk + 8));
    *(float *)0xC13EE1C = ((u25 * u26) + u27 * (u24 * u23));
    u28 = *(float *)(((int)stk + 12));
    u29 = *(float *)(((int)stk + 20));
    u30 = *(float *)(((int)stk + 4));
    u31 = *(float *)(((int)stk + 8));
    u32 = *(float *)(((int)stk + 16));
    *(float *)0xC13EE20 = (((u28 * u30) * u29) - (u32 * u31));
    u33 = *(float *)(((int)stk + 24));
    u34 = *(float *)(((int)stk + 20));
    *(float *)0xC13EE24 = (u34 * u33);
    t35 = nlMultiMatrix(0xC13EDFC);
    return t35;
}

float FUN_0c04a3d2(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int t0;
    int t1;
    float t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t12;
    float u13;
    float u14;
    float u15;
    float u16;
    float u17;
    float u18;
    float u19;
    float u20;
    float u21;
    int t22;
    float t23;
    float u24;
    float u25;
    int stk[13] = {0};

    *(unsigned int *)(((int)stk + 4)) = a7;
    t0 = FUN_0c04a38a(a7, a9, a5);
    t1 = FUN_0c0813d0(t0);
    if ((int)t1 <= (int)0x1) {
        t2 = nlLength(a6, a8);
        *(float *)((a10 + 0x0)) = t2;
        u25 = t2;
    } else {
        if ((int)t0 < 0) {
            t3 = (int)((int)(a9 + 0x1) % (int)a5);
            t4 = *(int *)((((((t3 << 1) + t3) << 2) + a4) + 0x8));
            *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = t4;
            t5 = *(int *)((((((t3 << 1) + t3) << 2) + a4) + 0x4));
            *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = t5;
            t6 = *(int *)((((((t3 << 1) + t3) << 2) + a4) + 0x0));
            *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t6;
        } else {
            t7 = (int)((int)(a9 - 1) % (int)a5);
            t8 = *(int *)((((((t7 << 1) + t7) << 2) + a4) + 0x8));
            *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = t8;
            t9 = *(int *)((((((t7 << 1) + t7) << 2) + a4) + 0x4));
            *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = t9;
            t10 = *(int *)((((((t7 << 1) + t7) << 2) + a4) + 0x0));
            *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t10;
        }
        t12 = *(int *)(((int)stk + 4));
        u13 = *(float *)((a6 + 0x0));
        u14 = *(float *)((((((t12 << 1) + t12) << 2) + a4) + 0x0));
        u15 = *(float *)(((int)stk + 8));
        *(float *)(((int)stk + 8)) = (u15 + (u13 - u14));
        u16 = *(float *)((a6 + 0x4));
        u17 = *(float *)((((((t12 << 1) + t12) << 2) + a4) + 0x4));
        u18 = *(float *)(((int)stk + 12));
        *(float *)(((int)stk + 12)) = (u18 + (u16 - u17));
        u19 = *(float *)((a6 + 0x8));
        u20 = *(float *)((((((t12 << 1) + t12) << 2) + a4) + 0x8));
        u21 = *(float *)(((int)stk + 16));
        *(float *)(((int)stk + 16)) = (u21 + (u19 - u20));
        t22 = FUN_0c0813d0(t0);
        t23 = nlLength((((int)stk + 4) + 0x4), a8);
        u24 = *(float *)0xC04A4F4;
        *(float *)((a10 + 0x0)) = (t23 + u24 * (float)(t22 - 1));
        u25 = u24;
    }
    return u25;
}

int FUN_0c0601f0(void)
{
    int t0;
    int t1;
    float u2;
    int t3;
    float u4;
    int t5;
    float u6;
    int t7;
    float u8;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;
    float u15;
    float u16;
    int t17;
    float u18;
    float u19;
    float u20;
    int t21;
    float u22;
    float u23;
    float u24;
    float u30;
    int t31;
    float u32;
    int t33;
    float u34;
    float u38;
    float u39;
    float u40;

    t0 = *(int *)0xC2A9F64;
    if (t0 != 3) {
        t1 = *(int *)0xC2A9F68;
        if (t1 == 3) {
            u2 = *(float *)((((signed char)(((t0 << 2) + t0) << 2) + 0xC1322C0) + 0x4));
            *(float *)0xC2A9F74 = u2;
            t3 = *(int *)0xC2A9F64;
            u4 = *(float *)((((signed char)(((t3 << 2) + t3) << 2) + 0xC1322C0) + 0x8));
            *(float *)0xC2A9F78 = u4;
            t5 = *(int *)0xC2A9F64;
            u6 = *(float *)((((signed char)(((t5 << 2) + t5) << 2) + 0xC1322C0) + 0xC));
            *(float *)0xC2A9F7C = u6;
        } else {
            t7 = *(int *)0xC2A9F9C;
            if (t7 != 0) {
                u8 = *(float *)0xC2A9F74;
                u9 = *(float *)0xC2A9F8C;
                *(float *)0xC2A9F74 = (u8 + u9);
                u10 = *(float *)0xC2A9F78;
                u11 = *(float *)0xC2A9F90;
                *(float *)0xC2A9F78 = (u10 + u11);
                u12 = *(float *)0xC2A9F7C;
                u13 = *(float *)0xC2A9F94;
                *(float *)0xC2A9F7C = (u12 + u13);
            } else {
                u14 = *(float *)0xC2A9F74;
                u15 = *(float *)((((signed char)(((t0 << 2) + t0) << 2) + 0xC1322C0) + 0x4));
                u16 = *(float *)((((signed char)(((t0 << 2) + t0) << 2) + 0xC1322C0) + 0x10));
                *(float *)0xC2A9F74 = (u14 + u16 * (u15 - u14));
                t17 = *(int *)0xC2A9F64;
                u18 = *(float *)0xC2A9F78;
                u19 = *(float *)((((signed char)(((t17 << 2) + t17) << 2) + 0xC1322C0) + 0x8));
                u20 = *(float *)((((signed char)(((t17 << 2) + t17) << 2) + 0xC1322C0) + 0x10));
                *(float *)0xC2A9F78 = (u18 + u20 * (u19 - u18));
                t21 = *(int *)0xC2A9F64;
                u22 = *(float *)0xC2A9F7C;
                u23 = *(float *)((((signed char)(((t21 << 2) + t21) << 2) + 0xC1322C0) + 0xC));
                u24 = *(float *)((((signed char)(((t21 << 2) + t21) << 2) + 0xC1322C0) + 0x10));
                *(float *)0xC2A9F7C = (u22 + u24 * (u23 - u22));
            }
        }
    } else {
        u30 = *(float *)((((signed char)(((t0 << 2) + t0) << 2) + 0xC1322C0) + 0x4));
        *(float *)0xC2A9F74 = u30;
        t31 = *(int *)0xC2A9F64;
        u32 = *(float *)((((signed char)(((t31 << 2) + t31) << 2) + 0xC1322C0) + 0x8));
        *(float *)0xC2A9F78 = u32;
        t33 = *(int *)0xC2A9F64;
        u34 = *(float *)((((signed char)(((t33 << 2) + t33) << 2) + 0xC1322C0) + 0xC));
        *(float *)0xC2A9F7C = u34;
    }
    u38 = *(float *)0xC2A9F74;
    u39 = *(float *)0xC2A9F78;
    u40 = *(float *)0xC2A9F7C;
    *(unsigned int *)0xC0E4E40 = (0x0 | ((((int)u38 << 16) | ((int)u39 << 8)) | (int)u40));
    return 0xC;
}

int FUN_0c0397e8(void)
{
    float u2;
    int t3;
    int t4;
    int t6;
    int t7;
    int t13;
    int t15;
    int stk[30] = {0};

    *(float *)(((int)stk + 24)) = 1.0f;
    *(float *)(((int)stk + 20)) = 1.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 40)) = 1.0f;
    *(float *)(((int)stk + 36)) = 1.0f;
    *(unsigned int *)(((int)stk + 44)) = 0x0;
    *(float *)(((int)stk + 48)) = 1.0f;
    *(unsigned int *)(((int)stk + 56)) = 0x705;
    *(unsigned int *)(((int)stk + 52)) = 0x2;
    *(unsigned int *)(((int)stk + 4)) = 0x125;
    *(float *)(((int)stk + 8)) = 32.0f;
    *(float *)(((int)stk + 12)) = 32.0f;
    *(float *)(((int)stk + 16)) = (1.0f + 1.0f);
    nlSprPut(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = 0x126;
    *(float *)(((int)stk + 8)) = 544.0f;
    nlSprPut(((int)stk + 4));
    u2 = *(float *)0xC2864D4;
    *(float *)(((int)stk + 24)) = u2;
    *(float *)(((int)stk + 20)) = u2;
    t3 = *(int *)0xC179488;
    t4 = *(int *)((0xC0EE9CC + ((t3 & 0x3) << 2)));
    *(unsigned int *)(((int)stk + 4)) = t4;
    *(float *)(((int)stk + 8)) = 528.0f;
    *(float *)(((int)stk + 12)) = 190.0f;
    *(unsigned int *)(((int)stk + 56)) = 0x270A;
    nlSprPut(((int)stk + 4));
    t6 = *(int *)0xC179488;
    t7 = *(int *)((0xC0EE9DC + ((t6 & 0x3) << 2)));
    *(unsigned int *)(((int)stk + 4)) = t7;
    *(float *)(((int)stk + 12)) = 276.0f;
    nlSprPut(((int)stk + 4));
    nlObjPutSetFadeColor(0.699999988f, 0.699999988f, 0.699999988f);
    *(unsigned int *)(((int)stk + 4)) = 0x127;
    *(float *)(((int)stk + 8)) = 320.0f;
    *(float *)(((int)stk + 12)) = 190.0f;
    nlSprPut(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = 0x146;
    *(float *)(((int)stk + 12)) = 320.0f;
    nlSprPut(((int)stk + 4));
    nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
    *(float *)(((int)stk + 24)) = 1.0f;
    *(float *)(((int)stk + 20)) = 1.0f;
    *(unsigned int *)(((int)stk + 4)) = 0x5D;
    *(float *)(((int)stk + 12)) = 250.0f;
    t13 = 0x0;
    do {
        *(float *)(((int)stk + 8)) = (38.0f + 17.0f * (float)t13);
        nlSprPut(((int)stk + 4));
        t13 = (t13 + 0x1);
    } while ((int)t13 < (int)0xA);
    *(unsigned int *)(((int)stk + 4)) = 0x62;
    *(float *)(((int)stk + 8)) = 0.0f;
    *(float *)(((int)stk + 12)) = 112.0f;
    *(float *)(((int)stk + 16)) = 3.0f;
    *(float *)(((int)stk + 20)) = 40.0f;
    *(float *)(((int)stk + 24)) = 30.0f;
    *(unsigned int *)(((int)stk + 56)) = 0x705;
    *(unsigned int *)(((int)stk + 52)) = 0x0;
    t15 = nlSprPut(((int)stk + 4));
    return t15;
}

float FUN_0c034b5e(int a4, int a5, int a6, int a7)
{
    float u0;
    int t1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u53;
    float u54;
    float u55;
    float u56;
    float u6;
    float u7;
    float u8;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    int t14;
    int t15;
    float u16;
    float u17;
    float u18;
    float u19;
    float u20;
    float u21;
    float u22;
    float u23;
    float u24;
    int t25;
    int t26;
    int t27;
    int t28;
    float u34;
    float u35;
    float u36;
    float u37;
    int t38;
    float u39;
    float u40;
    float u41;
    float u42;
    float u43;
    float u44;
    float u45;
    float u46;
    float u47;
    float u48;
    float u49;
    float u50;
    float u51;
    float u32;
    float u33;
    int stk[22] = {0};

    u0 = *(float *)((a4 + 0xC));
    t1 = *(int *)((a4 + 0x28));
    *(float *)(((((int)stk + 4) + 0x34) + 0x0)) = u0;
    u2 = *(float *)((a4 + 0x14));
    *(float *)(((((int)stk + 4) + 0x34) + 0x4)) = u2;
    u3 = *(float *)((a6 + 0x4));
    u4 = *(float *)(((((int)stk + 4) + 0x34) + 0x0));
    u5 = *(float *)((a6 + 0x0));
    u53 = u5;
    u54 = u4;
    u55 = 0.0f;
    u56 = ((u2 * u3) + u5 * u4);
    if (0.0f > ((u2 * u3) + u5 * u4)) {
        *(unsigned int *)(((int)stk + 4)) = (a7 * 0x1C);
        u6 = *(float *)((a6 + 0x0));
        u7 = *(float *)(((a7 * 0x1C) + 0xC0ED44C));
        *(float *)(((((int)stk + 4) + 0x34) + 0x0)) = (u6 * (((u2 * u3) + u5 * u4) * ((-(u7 * 0.199999988f)) + (-1.0f))));
        u8 = *(float *)((a6 + 0x4));
        *(float *)(((((int)stk + 4) + 0x34) + 0x4)) = (u8 * (((u2 * u3) + u5 * u4) * ((-(u7 * 0.199999988f)) + (-1.0f))));
        u9 = *(float *)((t1 + 0x0));
        *(float *)(((((int)stk + 4) + 0xC) + 0x0)) = u9;
        u10 = *(float *)((t1 + 0x8));
        *(float *)(((((int)stk + 4) + 0xC) + 0x4)) = u10;
        u11 = *(float *)(((((int)stk + 4) + 0xC) + 0x0));
        if (_builtin_sqrtf(((u10 * u10) + u11 * u11)) > 0.0f) {
            u12 = *(float *)(((((int)stk + 4) + 0xC) + 0x0));
            *(float *)(((((int)stk + 4) + 0xC) + 0x0)) = (u12 * (1.0f / _builtin_sqrtf(((u10 * u10) + u11 * u11))));
            u13 = *(float *)(((((int)stk + 4) + 0xC) + 0x4));
            *(float *)(((((int)stk + 4) + 0xC) + 0x4)) = (u13 * (1.0f / _builtin_sqrtf(((u10 * u10) + u11 * u11))));
            t14 = *(int *)(((((int)stk + 4) + 0xC) + 0x4));
            *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = t14;
            t15 = *(int *)(((((int)stk + 4) + 0xC) + 0x0));
            *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t15;
            u16 = *(float *)(((((int)stk + 4) + 0x34) + 0x0));
            u17 = *(float *)(((((int)stk + 4) + 0x34) + 0x4));
            u18 = *(float *)(((((int)stk + 4) + 0xC) + 0x4));
            u19 = *(float *)(((((int)stk + 4) + 0xC) + 0x0));
            *(float *)(((((int)stk + 4) + 0xC) + 0x0)) = (u19 * ((u17 * u18) + u19 * u16));
            u20 = *(float *)(((((int)stk + 4) + 0xC) + 0x4));
            *(float *)(((((int)stk + 4) + 0xC) + 0x4)) = (u20 * ((u17 * u18) + u19 * u16));
            u21 = *(float *)(((((int)stk + 4) + 0x34) + 0x0));
            u22 = *(float *)(((((int)stk + 4) + 0xC) + 0x0));
            *(float *)(((((int)stk + 4) + 0x14) + 0x0)) = (u21 - u22);
            u23 = *(float *)(((((int)stk + 4) + 0x34) + 0x4));
            u24 = *(float *)(((((int)stk + 4) + 0xC) + 0x4));
            *(float *)(((((int)stk + 4) + 0x14) + 0x4)) = (u23 - u24);
            u32 = u24;
            u33 = ((u17 * u18) + u19 * u16);
        } else {
            t25 = *(int *)(((((int)stk + 4) + 0x34) + 0x4));
            *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x4)) = t25;
            t26 = *(int *)(((((int)stk + 4) + 0x34) + 0x0));
            *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = t26;
            *(float *)(((((int)stk + 4) + 0x14) + 0x4)) = 0.0f;
            *(float *)(((((int)stk + 4) + 0x14) + 0x0)) = 0.0f;
            t27 = *(int *)((a6 + 0x4));
            *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = t27;
            t28 = *(int *)((a6 + 0x0));
            *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t28;
            u32 = _builtin_sqrtf(((u10 * u10) + u11 * u11));
            u33 = _builtin_sqrtf(((u10 * u10) + u11 * u11));
        }
        u34 = *(float *)((a5 + 0x0));
        u35 = *(float *)((a5 + 0x4));
        u36 = *(float *)(((((int)stk + 4) + 0x4) + 0x4));
        u37 = *(float *)(((((int)stk + 4) + 0x4) + 0x0));
        t38 = *(int *)(((int)stk + 4));
        u39 = *(float *)(((((int)stk + 4) + 0x14) + 0x0));
        u40 = *(float *)(((t38 + 0xC0ED440) + 0x4));
        u41 = *(float *)(((t38 + 0xC0ED440) + 0x14));
        u42 = *(float *)(((0x4 + a5) + 0x0));
        u43 = *(float *)(((0x4 + (((int)stk + 4) + 0x14)) + 0x0));
        u44 = *(float *)((t1 + 0x1C));
        u45 = *(float *)(((0x10 + (t38 + 0xC0ED440)) + 0x0));
        *(float *)((t1 + 0x1C)) = (u44 + u45 * (((u42 * u39) - (u34 * u43)) * (_builtin_sqrtf(((((u35 * u36) + u34 * u37) * (-((u35 * u36) + u34 * u37))) + ((u35 * u35) + u34 * u34))) * (u41 / u40))));
        u46 = *(float *)(((((int)stk + 4) + 0x14) + 0x0));
        u47 = *(float *)(((((int)stk + 4) + 0xC) + 0x0));
        u48 = *(float *)((a4 + 0xC));
        *(float *)((a4 + 0xC)) = (u48 + (u47 + (1.0f - (_builtin_sqrtf(((((u35 * u36) + u34 * u37) * (-((u35 * u36) + u34 * u37))) + ((u35 * u35) + u34 * u34))) * (u41 / u40))) * u46));
        u49 = *(float *)(((((int)stk + 4) + 0xC) + 0x4));
        u50 = *(float *)(((((int)stk + 4) + 0x14) + 0x4));
        u51 = *(float *)(((0x14 + a4) + 0x0));
        *(float *)(((0x14 + a4) + 0x0)) = (u51 + (u49 + (1.0f - (_builtin_sqrtf(((((u35 * u36) + u34 * u37) * (-((u35 * u36) + u34 * u37))) + ((u35 * u35) + u34 * u34))) * (u41 / u40))) * u50));
        u53 = (1.0f - (_builtin_sqrtf(((((u35 * u36) + u34 * u37) * (-((u35 * u36) + u34 * u37))) + ((u35 * u35) + u34 * u34))) * (u41 / u40)));
        u54 = (u49 + (1.0f - (_builtin_sqrtf(((((u35 * u36) + u34 * u37) * (-((u35 * u36) + u34 * u37))) + ((u35 * u35) + u34 * u34))) * (u41 / u40))) * u50);
        u55 = (u51 + (u49 + (1.0f - (_builtin_sqrtf(((((u35 * u36) + u34 * u37) * (-((u35 * u36) + u34 * u37))) + ((u35 * u35) + u34 * u34))) * (u41 / u40))) * u50));
        u56 = (_builtin_sqrtf(((((u35 * u36) + u34 * u37) * (-((u35 * u36) + u34 * u37))) + ((u35 * u35) + u34 * u34))) * (u41 / u40));
    }
    return u53;
}


int drvJolt(void)
{
    float t0;
    float t1;
    float t2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u9;
    float u10;
    float u11;
    int t12;
    float u14;
    float u15;
    float u16;
    float u17;
    float u23;
    float u24;
    float u28;
    float u30;
    float u31;
    int t32;
    int t33;
    float u34;
    int t35;
    int t36;
    int t37;
    int t39;
    int t40;
    float u41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t47;
    int t48;
    int t49;
    float u50;
    int t51;
    int t52;
    int t55;
    int t56;
    float u25;
    int stk[11] = {0};

    t0 = nlInnerProduct(0xC2AD288, 0xC2AD1E0);
    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = t0;
    t1 = nlInnerProduct(0xC2AD288, 0xC2AD1EC);
    *(float *)(((((int)stk + 4) + 0x4) + 0x4)) = t1;
    t2 = nlInnerProduct(0xC2AD288, 0xC2AD1F8);
    *(float *)(((((int)stk + 4) + 0x4) + 0x8)) = t2;
    u3 = *(float *)(((((int)stk + 4) + 0x4) + 0x0));
    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = (u3 * 0.25f);
    u4 = *(float *)(((((int)stk + 4) + 0x4) + 0x4));
    *(float *)(((((int)stk + 4) + 0x4) + 0x4)) = (u4 * 0.5f);
    u5 = *(float *)(((((int)stk + 4) + 0x4) + 0x8));
    *(float *)(((((int)stk + 4) + 0x4) + 0x8)) = (u5 * 0.5f);
    u6 = *(float *)(((((int)stk + 4) + 0x4) + 0x0));
    if (u6 > 1.0f) {
        *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = 1.0f;
    } else {
        u7 = *(float *)(((((int)stk + 4) + 0x4) + 0x0));
        if ((-1.0f) > u7) {
            *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = (-1.0f);
        }
    }
    u9 = *(float *)(((((int)stk + 4) + 0x4) + 0x4));
    if (u9 > 1.0f) {
        *(float *)(((((int)stk + 4) + 0x4) + 0x4)) = 1.0f;
    } else if ((-1.0f) > u9) {
        *(float *)(((((int)stk + 4) + 0x4) + 0x4)) = (-1.0f);
    }
    u10 = *(float *)(((((int)stk + 4) + 0x4) + 0x8));
    if (u10 > 1.0f) {
        *(float *)(((((int)stk + 4) + 0x4) + 0x8)) = 1.0f;
    } else if ((-1.0f) > u10) {
        *(float *)(((((int)stk + 4) + 0x4) + 0x8)) = (-1.0f);
    }
    u11 = *(float *)0xC2AD024;
    t12 = *(int *)0xC2AD020;
    FcvStoreBuffer(t12, 0xC2AD460, u11);
    u14 = *(float *)0xC2AD02C;
    u15 = *(float *)0xC2AD464;
    if ((u15 - u14) > -0.5f) {
        if (0.5f > (u15 - u14)) {
            u16 = *(float *)0xC2AD52C;
            u17 = *(float *)(((((int)stk + 4) + 0x4) + 0x4));
            *(float *)0xC2AD52C = (u16 + 0.5f * u17);
        }
    }
    if (!(0.0f > (u15 - u14))) {
        u23 = *(float *)0xC2AD52C;
        u25 = (u23 - ((0.849999964f * (u15 - u14)) / 65.0f));
    } else {
        u24 = *(float *)0xC2AD52C;
        u25 = (u24 - ((7.0f * (u15 - u14)) / 65.0f));
    }
    *(float *)0xC2AD52C = (u25 * 0.799999952f);
    if ((u25 * 0.799999952f) > 5.0f) {
        *(float *)0xC2AD52C = 5.0f;
    } else {
        u28 = *(float *)0xC2AD52C;
        if ((-1.0f) > u28) {
            *(float *)0xC2AD52C = (-1.0f);
        }
    }
    u30 = *(float *)0xC2AD52C;
    u31 = *(float *)0xC2AD464;
    *(float *)0xC2AD464 = (u31 + u30);
    t32 = *(int *)0xC2AD06C;
    t33 = *(int *)0xC2AD4A4;
    u34 = *(float *)(((((int)stk + 4) + 0x4) + 0x0));
    t35 = *(int *)0xC2AD530;
    *(unsigned int *)0xC2AD530 = (int)((float)((t35 + (-(int)(u34 * 2730.0f))) - (int)(((float)(t33 - t32) * 0.5f) / 65.0f)) * 0.849999964f);
    t36 = *(int *)0xC2AD4A4;
    *(unsigned int *)0xC2AD4A4 = (t36 + (int)((float)((t35 + (-(int)(u34 * 2730.0f))) - (int)(((float)(t33 - t32) * 0.5f) / 65.0f)) * 0.849999964f));
    if ((int)(t36 + (int)((float)((t35 + (-(int)(u34 * 2730.0f))) - (int)(((float)(t33 - t32) * 0.5f) / 65.0f)) * 0.849999964f)) > (int)0xE39) {
        *(unsigned int *)0xC2AD4A4 = 0xE39;
    } else {
        t37 = *(int *)0xC2AD4A4;
        if ((int)t37 < (int)0xFFFFF1C7) {
            *(unsigned int *)0xC2AD4A4 = 0xFFFFF1C7;
        }
    }
    t39 = *(int *)0xC2AD074;
    t40 = *(int *)0xC2AD4AC;
    *(unsigned int *)(((int)stk + 4)) = (t40 - t39);
    u41 = *(float *)(((((int)stk + 4) + 0x4) + 0x0));
    t42 = *(int *)0xC2AD538;
    *(unsigned int *)0xC2AD538 = (t42 + (-(int)(u41 * 2730.0f)));
    t43 = *(int *)(((int)stk + 4));
    *(unsigned int *)0xC2AD538 = (int)((float)((t42 + (-(int)(u41 * 2730.0f))) - (int)(((float)t43 * 3.0f) / 15.0f)) * 0.799999952f);
    t44 = *(int *)0xC2AD4AC;
    *(unsigned int *)0xC2AD4AC = (t44 + (int)((float)((t42 + (-(int)(u41 * 2730.0f))) - (int)(((float)t43 * 3.0f) / 15.0f)) * 0.799999952f));
    if ((int)(t44 + (int)((float)((t42 + (-(int)(u41 * 2730.0f))) - (int)(((float)t43 * 3.0f) / 15.0f)) * 0.799999952f)) > (int)0xE39) {
        *(unsigned int *)0xC2AD4AC = 0xE39;
    } else {
        t45 = *(int *)0xC2AD4AC;
        if ((int)t45 < (int)0xFFFFF1C7) {
            *(unsigned int *)0xC2AD4AC = 0xFFFFF1C7;
        }
    }
    t47 = *(int *)0xC2AD53C;
    t48 = *(int *)0xC2AD078;
    t49 = *(int *)0xC2AD4B0;
    u50 = *(float *)(((((int)stk + 4) + 0x4) + 0x8));
    *(unsigned int *)0xC2AD53C = (int)((float)((t47 + (int)(u50 * 2730.0f)) - (int)(((float)(t49 - t48) * 0.599999964f) / 15.0f)) * 0.949999988f);
    t51 = *(int *)0xC2AD4B0;
    *(unsigned int *)0xC2AD4B0 = (t51 + (int)((float)((t47 + (int)(u50 * 2730.0f)) - (int)(((float)(t49 - t48) * 0.599999964f) / 15.0f)) * 0.949999988f));
    if ((int)(t51 + (int)((float)((t47 + (int)(u50 * 2730.0f)) - (int)(((float)(t49 - t48) * 0.599999964f) / 15.0f)) * 0.949999988f)) > (int)0x4E39) {
        *(unsigned int *)0xC2AD4B0 = 0x4E39;
    } else {
        t52 = *(int *)0xC2AD4B0;
        if ((int)t52 < (int)0x2000) {
            *(unsigned int *)0xC2AD4B0 = 0x2000;
        }
    }
    t55 = *(int *)0xC2AD000;
    t56 = FcvPlayBuffer(0xC2AD460, t55);
    return t56;
}

