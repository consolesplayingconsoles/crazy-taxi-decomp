/* Straight-line functions with calls and guards (batch gen_cl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int psgUpdatePartTracks(int);
int FUN_0c077210(int, int);
int FcvPlayBuffer(int, int);
int Psg_ChoinIt(int);
int Put_Combo_Entry(int, int);
int ResetFadeColor(void);
int Sound_Request(int, int);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
extern float _builtin_fipr(float *, float *);
extern float _builtin_sqrtf(float);
static float iaFsrra(float x)
{
    return _builtin_fsrra(x);
}
int nlArcTan2(float, float);
int nlGetMatrix(int);
float nlInnerProduct(int, int);
int nlMultiMatrix(int);
int nlObjPutSetFadeColor(float, float, float);
float nlRandom(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlSprPut(int);
int nlTranslateV(int);
int nlUnitMatrix(void);
int set_event(int, int);
float nlUnitVector(int a4);
float FUN_0c076200(int a4, float f4);
float fcvHermiteAngle(int a4, int a5, float f4);
int CheckColliWallEdge(int a4, int a5);
int GetAng4Mat(int a4);
int Put_TimeUp(void);
float CheckColliPoleEdge(int a4, int a5, int a6, float f4);
int FUN_0c078070(int a4, int a5, int a6);
int setTechnicalBonus(int a4, int a5);
int Put_TotalDrum_Money(void);
int psgJolt(int a4, int a5, float f4);

float nlUnitVector(int a4)
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
    *(float *)((((a4 + 0xC) - 0x4) + 0x0)) = (u2 * u6);
    *(float *)(((((a4 + 0xC) - 0x4) - 0x4) + 0x0)) = (u1 * u6);
    *(float *)((((((a4 + 0xC) - 0x4) - 0x4) - 0x4) + 0x0)) = (u0 * u6);
    return _builtin_sqrtf(u5);
}

float FUN_0c076200(int a4, float f4)
{
    float u0;
    float u1;
    float u4;
    float u5;
    float u6;
    int t7;
    float u8;
    int t9;
    float u10;
    float u3;

    if (!(0.0f > f4)) {
        u0 = *(float *)0xC07633C;
        u3 = u0;
    } else {
        u1 = *(float *)0xC076340;
        u3 = u1;
    }
    u4 = *(float *)0xC076344;
    *(unsigned int *)((a4 + 0x0)) = (int)(u3 + (f4 / u4));
    u5 = *(float *)0xC076348;
    u6 = *(float *)0xC07634C;
    t7 = 0xB;
    u8 = 0.0f;
    do {
        t9 = t7;
        t7 = (t7 - 2);
        u10 = ((float)t9 - u8);
        u8 = (((f4 - ((float)(int)(u3 + (f4 / u4)) * u5)) + u6 * (float)(int)(u3 + (f4 / u4))) * ((f4 - ((float)(int)(u3 + (f4 / u4)) * u5)) + u6 * (float)(int)(u3 + (f4 / u4))));
        u8 = (u8 / u10);
    } while ((int)t7 >= (int)0x3);
    return (((f4 - ((float)(int)(u3 + (f4 / u4)) * u5)) + u6 * (float)(int)(u3 + (f4 / u4))) / (1.0f - u8));
}

float fcvHermiteAngle(int a4, int a5, float f4)
{
    float u1;
    float u0;
    int t2;
    int t3;
    int t4;
    int t5;

    u1 = 1.0f;
    if (!(f4 > 1.0f)) {
        u0 = f4;
        if (0.0f > f4) {
            u0 = 0.0f;
        }
        u1 = u0;
    }
    t2 = *(int *)((a4 + 0x4));
    t3 = *(int *)((a5 + 0x4));
    t4 = *(int *)((a4 + 0xC));
    t5 = *(int *)((a5 + 0x8));
    return ((u1 * (u1 * u1)) - (u1 * u1));
}

int CheckColliWallEdge(int a4, int a5)
{
    int t0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9;
    float u10;
    float u11;
    int t12;
    int t13;
    float u14;
    float u15;
    float u16;
    float u17;
    float u18;

    t0 = *(int *)((a4 + 0x0));
    u1 = *(float *)((t0 + 0x4));
    u2 = *(float *)((a5 + 0x14));
    if (!(u1 > u2)) {
        u3 = *(float *)((a4 + 0x14));
        u4 = *(float *)((a5 + 0x18));
        if (!((u4 - u3) > u1)) {
            u5 = *(float *)((t0 + 0x0));
            u6 = *(float *)((a5 + 0x8));
            u7 = *(float *)((a5 + 0x4));
            u8 = *(float *)((t0 + 0x8));
            u9 = *(float *)((a5 + 0xC));
            u10 = *(float *)((a5 + 0x0));
            if ((((u6 - u5) * u7) - ((u9 - u8) * u10)) > 0.0f) {
                u11 = *(float *)((a5 + 0x1C));
                if (u11 > (((u6 - u5) * u7) - ((u9 - u8) * u10))) {
                    t12 = *(int *)((a5 + 0x4));
                    *(unsigned int *)(((a4 + 0x4) + 0x4)) = t12;
                    t13 = *(int *)((a5 + 0x0));
                    *(unsigned int *)(((a4 + 0x4) + 0x0)) = t13;
                    u14 = *(float *)((a5 + 0x0));
                    u15 = *(float *)((t0 + 0x8));
                    u16 = *(float *)((a5 + 0x4));
                    u17 = *(float *)((t0 + 0x0));
                    u18 = *(float *)((a5 + 0x10));
                    *(float *)((a4 + 0x10)) = (((u16 * u15) + u17 * u14) + u18);
                    return 0x1;
                }
                return 0x0;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}

int GetAng4Mat(int a4)
{
    int t0;
    float u1;
    float u2;
    int t3;
    float u4;
    float u5;
    float u6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t12;
    int t14;
    float u17;
    float u18;
    int t19;
    int stk[10] = {0};

    t0 = nlGetMatrix(0x0);
    u1 = *(float *)((t0 + 0x28));
    u2 = *(float *)((t0 + 0x20));
    t3 = nlArcTan2(u2, u1);
    *(unsigned int *)((a4 + 0x4)) = t3;
    u4 = *(float *)((t0 + 0x20));
    u5 = *(float *)((t0 + 0x28));
    u6 = *(float *)((t0 + 0x24));
    t7 = nlArcTan2(u6, _builtin_sqrtf(((u5 * u5) + u4 * u4)));
    *(unsigned int *)((a4 + 0x0)) = (-t7);
    t8 = *(int *)((t0 + 0x8));
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t8;
    t9 = *(int *)((t0 + 0x4));
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t9;
    t10 = *(int *)((t0 + 0x0));
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t10;
    nlUnitMatrix();
    t12 = *(int *)((a4 + 0x0));
    nlRotateAX((-t12));
    t14 = *(int *)((a4 + 0x4));
    nlRotateAY((-t14));
    FUN_0c077210(((int)stk + 4), ((int)stk + 4));
    u17 = *(float *)(((int)stk + 4));
    u18 = *(float *)(((int)stk + 8));
    t19 = nlArcTan2(u18, u17);
    *(unsigned int *)((a4 + 0x8)) = t19;
    return t19;
}



int FUN_0c078070(int a4, int a5, int a6)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
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
    float t22;
    float u23;
    float u24;
    float u25;
    int t27;
    int stk[26] = {0};

    u0 = *(float *)((a5 + 0x0));
    u1 = *(float *)((a6 + 0x0));
    *(float *)((((int)stk + 4) + 0x0)) = (u1 - u0);
    u2 = *(float *)((a6 + 0x4));
    u3 = *(float *)((a5 + 0x4));
    *(float *)((((int)stk + 4) + 0x4)) = (u2 - u3);
    u4 = *(float *)((a6 + 0x8));
    u5 = *(float *)((a5 + 0x8));
    *(float *)((((int)stk + 4) + 0x8)) = (u4 - u5);
    u6 = *(float *)((a4 + 0xC));
    u7 = *(float *)((((int)stk + 4) + 0x4));
    u8 = *(float *)((a4 + 0x10));
    u9 = *(float *)((((int)stk + 4) + 0x0));
    u10 = *(float *)((((int)stk + 4) + 0x8));
    u11 = *(float *)((a4 + 0x14));
    *(float *)(((int)stk + 16)) = ((-(u9 * (u6 * (1.0f / (((u8 * u7) + u9 * u6) + u10 * u11))))) + 1.0f);
    u12 = *(float *)((((int)stk + 4) + 0x4));
    *(float *)(((int)stk + 20)) = (-(u12 * (u6 * (1.0f / (((u8 * u7) + u9 * u6) + u10 * u11)))));
    u13 = *(float *)((((int)stk + 4) + 0x8));
    *(float *)(((int)stk + 24)) = (-(u13 * (u6 * (1.0f / (((u8 * u7) + u9 * u6) + u10 * u11)))));
    u14 = *(float *)((a4 + 0x10));
    u15 = *(float *)((((int)stk + 4) + 0x0));
    *(float *)(((int)stk + 32)) = (-(u15 * (u14 * (1.0f / (((u8 * u7) + u9 * u6) + u10 * u11)))));
    u16 = *(float *)((((int)stk + 4) + 0x4));
    *(float *)(((int)stk + 36)) = ((-(u16 * (u14 * (1.0f / (((u8 * u7) + u9 * u6) + u10 * u11))))) + 1.0f);
    u17 = *(float *)((((int)stk + 4) + 0x8));
    *(float *)(((int)stk + 40)) = (-(u17 * (u14 * (1.0f / (((u8 * u7) + u9 * u6) + u10 * u11)))));
    u18 = *(float *)((a4 + 0x14));
    u19 = *(float *)((((int)stk + 4) + 0x0));
    *(float *)(((int)stk + 48)) = (-(u19 * (u18 * (1.0f / (((u8 * u7) + u9 * u6) + u10 * u11)))));
    u20 = *(float *)((((int)stk + 4) + 0x4));
    *(float *)(((int)stk + 52)) = (-(u20 * (u18 * (1.0f / (((u8 * u7) + u9 * u6) + u10 * u11)))));
    u21 = *(float *)((((int)stk + 4) + 0x8));
    *(float *)(((int)stk + 56)) = ((-(u21 * (u18 * (1.0f / (((u8 * u7) + u9 * u6) + u10 * u11))))) + 1.0f);
    t22 = nlInnerProduct(a4, (a4 + 0xC));
    u23 = *(float *)((((int)stk + 4) + 0x0));
    *(float *)(((int)stk + 64)) = (u23 * (t22 * (1.0f / (((u8 * u7) + u9 * u6) + u10 * u11))));
    u24 = *(float *)((((int)stk + 4) + 0x4));
    *(float *)(((int)stk + 68)) = (u24 * (t22 * (1.0f / (((u8 * u7) + u9 * u6) + u10 * u11))));
    u25 = *(float *)((((int)stk + 4) + 0x8));
    *(float *)(((int)stk + 72)) = (u25 * (t22 * (1.0f / (((u8 * u7) + u9 * u6) + u10 * u11))));
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 60)) = 0.0f;
    *(float *)(((int)stk + 76)) = 1.0f;
    nlMultiMatrix((((int)stk + 4) + 0xC));
    t27 = nlTranslateV(a5);
    return t27;
}


int Put_TotalDrum_Money(void)
{
    float u0;
    float u2;
    float u1;
    int t3;
    float u4;
    float u8;
    float u5;
    float u9;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    float u17;
    float u18;
    int t21;
    int t22;
    int t23;
    float u24;
    int t26;
    int t27;
    int t28;
    int t29;
    int t31;
    int t32;
    int t33;
    float u34;
    int t37;
    int t38;
    float u39;
    float u40;
    float u41;
    int t46;
    int t48;
    int t49;
    int t50;
    int t51;
    int t53;
    int t55;
    float u56;
    float u57;
    float u58;
    int t62;
    int stk[14] = {0};

    *(unsigned int *)0xC2A7EC0 = 0x6;
    *(unsigned int *)0xC2A7E8C = 0x128;
    *(float *)0xC2A7EA4 = 0.0f;
    *(float *)0xC2A7EAC = 1.0f;
    *(float *)0xC2A7E90 = 532.0f;
    u0 = *(float *)0xC2A8C8C;
    u2 = 0.199999988f;
    if (!(0.199999988f > u0)) {
        u1 = *(float *)0xC2A8C8C;
        u2 = u1;
    }
    t3 = *(int *)0xC2A8D78;
    *(float *)0xC2A7E94 = ((float)(t3 - 4) + 20.0f * (u2 + -0.199999988f));
    *(float *)0xC2A7E98 = 0.049999997f;
    *(float *)0xC2A7E9C = 10.0f;
    u4 = *(float *)0xC2A8C8C;
    u8 = 0.0f;
    if (!(0.0f > u4)) {
        u5 = *(float *)0xC2A8C8C;
        u8 = (u5 * 5.0f);
    }
    u9 = u8;
    if (u8 > 1.0f) {
        u9 = 1.0f;
    }
    *(float *)0xC2A7EA0 = (u9 * (1.0f + 1.0f));
    *(float *)0xC2A7EB8 = 0.699999988f;
    nlSprPut(0xC2A7E8C);
    *(unsigned int *)0xC2A7EB4 = 0x0;
    *(float *)0xC2A7E9C = 1.0f;
    *(float *)0xC2A7EA0 = 1.0f;
    *(float *)0xC2A7EB8 = 1.0f;
    t11 = *(int *)0xC2A8D78;
    *(float *)0xC2A7E94 = (float)(t11 + 0x2);
    *(float *)0xC2A7EA8 = 0.0f;
    t12 = *(int *)0xC2A8C90;
    if (t12 != 0) {
        *(float *)0xC2A7EB0 = 1.0f;
        *(float *)0xC2A7E90 = 532.0f;
        *(unsigned int *)0xC2A7EC0 = 0xB;
        t13 = *(int *)0xC2A8CB4;
        t14 = *(int *)(((t13 << 2) + 0xC130A74));
        *(unsigned int *)0xC2A7E8C = t14;
        *(float *)0xC2A7EA4 = 0.0f;
        t15 = *(int *)0xC2A8C90;
        *(float *)0xC2A7E9C = ((float)t15 * 0.049999997f);
        *(float *)0xC2A7EAC = ((float)t15 * 0.049999997f);
        *(float *)0xC2A7EB8 = 1.0f;
        *(float *)0xC2A7E98 = 0.099999994f;
        *(unsigned int *)0xC2A7EB4 = 0x0;
        nlSprPut(0xC2A7E8C);
        u17 = *(float *)0xC2A8C8C;
        if (0.0f > u17) {
            *(float *)(((int)stk + 4)) = 0.0f;
        } else {
            u18 = *(float *)0xC2A8C8C;
            *(float *)(((int)stk + 4)) = (u18 * 16.0f);
        }
        t21 = *(int *)0xC2A8EA8;
        t22 = *(int *)(((t21 << 2) + 0xC130A80));
        *(unsigned int *)0xC2A7E8C = t22;
        t23 = *(int *)0xC2A8D78;
        u24 = *(float *)(((int)stk + 4));
        *(float *)0xC2A7E94 = (((float)t23 + u24) + 19.0f);
        nlSprPut(0xC2A7E8C);
        t26 = *(int *)0xC2A8CB4;
        t27 = *(int *)(((t26 << 2) + 0xC130A74));
        *(unsigned int *)0xC2A7E8C = t27;
        *(unsigned int *)0xC2A7EC0 = 0x9;
        t28 = *(int *)0xC2A8D78;
        *(float *)0xC2A7E94 = (float)(t28 + 0x2);
        t29 = *(int *)0xC2A8C90;
        *(float *)0xC2A7EA4 = (1.0f - ((float)t29 * 0.049999997f));
        *(float *)0xC2A7E90 = 532.0f;
        *(float *)0xC2A7EAC = 1.0f;
        nlSprPut(0xC2A7E8C);
        t31 = *(int *)0xC2A8EA8;
        t32 = *(int *)(((t31 << 2) + 0xC130A80));
        *(unsigned int *)0xC2A7E8C = t32;
        t33 = *(int *)0xC2A8D78;
        u34 = *(float *)(((int)stk + 4));
        *(float *)0xC2A7E94 = (((float)t33 + u34) + 19.0f);
        nlSprPut(0xC2A7E8C);
        *(float *)0xC2A7E98 = 0.199999988f;
    }
    *(float *)0xC2A7E90 = 532.0f;
    t37 = *(int *)0xC2A8D78;
    *(float *)0xC2A7E94 = (float)(t37 + 0x2);
    *(unsigned int *)0xC2A7EC0 = 0x6;
    *(float *)0xC2A7EA8 = 0.0f;
    *(unsigned int *)0xC2A7EB4 = 0x0;
    t38 = *(int *)0xC2A8CBC;
    if (t38 == 0) {
        *(float *)0xC2A7EA0 = 0.0f;
    } else {
        if (t38 == 1) {
            u39 = *(float *)0xC2A8C8C;
            if (!(0.0f > u39)) {
                u40 = *(float *)0xC2A8C8C;
                *(float *)0xC2A7EA0 = u40;
                u41 = *(float *)0xC2A8C8C;
                *(float *)0xC2A7EA8 = (1.0f - u41);
                *(float *)0xC2A7EB0 = 1.0f;
            } else {
                *(float *)0xC2A7EA0 = 0.0f;
                *(float *)0xC2A7EA8 = 0.0f;
                *(float *)0xC2A7EB0 = 0.0f;
            }
        } else {
            *(float *)0xC2A7EA0 = 1.0f;
            *(float *)0xC2A7EB0 = 1.0f;
        }
    }
    *(unsigned int *)0xC2A7EC0 = 0x2006;
    *(unsigned int *)0xC2A7E8C = 0x1B0;
    *(float *)0xC2A7EA4 = 0.0f;
    *(float *)0xC2A7EAC = 1.0f;
    *(float *)0xC2A7E90 = 460.0f;
    t46 = *(int *)0xC2A8D78;
    *(float *)0xC2A7E94 = (float)(t46 + 0xB);
    *(float *)0xC2A7E9C = 1.0f;
    nlSprPut(0xC2A7E8C);
    t48 = *(int *)0xC2A7600;
    t49 = *(int *)((t48 + 0x0));
    t50 = 0x1BD;
    if ((int)t49 >= (int)0x186A0) {
        t50 = 0x1AF;
    }
    *(unsigned int *)0xC2A7E8C = t50;
    *(float *)0xC2A7E9C = 1.0f;
    *(float *)0xC2A7E90 = 520.0f;
    t51 = *(int *)0xC2A8D78;
    *(float *)0xC2A7E94 = (float)(t51 + 0xB);
    nlSprPut(0xC2A7E8C);
    *(unsigned int *)0xC2A7E8C = 0x1B1;
    *(float *)0xC2A7E9C = 1.0f;
    *(float *)0xC2A7E90 = 576.0f;
    t53 = *(int *)0xC2A8D78;
    *(float *)0xC2A7E94 = (float)(t53 + 0xB);
    nlSprPut(0xC2A7E8C);
    *(unsigned int *)0xC2A7E8C = 0x102;
    *(float *)0xC2A7EA4 = 0.0f;
    *(float *)0xC2A7EAC = 1.0f;
    *(float *)0xC2A7EB0 = 1.0f;
    *(float *)0xC2A7E90 = 450.0f;
    t55 = *(int *)0xC2A8D78;
    *(float *)0xC2A7E94 = (float)(t55 + 0xB);
    *(float *)0xC2A7E98 = 0.289999992f;
    *(float *)0xC2A7E9C = 1.0f;
    u56 = *(float *)0xC2A8C8C;
    if (!(0.0f > u56)) {
        u57 = *(float *)0xC2A8C8C;
        *(float *)0xC2A7EA0 = (u57 * 0.5f);
        u58 = *(float *)0xC2A8C8C;
        *(float *)0xC2A7EA8 = ((1.0f - u58) * 0.5f);
        *(float *)0xC2A7EB0 = 1.0f;
    }
    nlSprPut(0xC2A7E8C);
    *(unsigned int *)0xC2A7EC0 = 0xE;
    *(float *)0xC2A7EA4 = 0.0f;
    *(float *)0xC2A7EAC = 1.0f;
    *(float *)0xC2A7E90 = 614.0f;
    t62 = *(int *)0xC2A8D78;
    *(float *)0xC2A7E94 = (float)(t62 + 0xB);
    *(float *)0xC2A7E98 = 0.289999992f;
    *(float *)0xC2A7E9C = 1.0f;
    *(unsigned int *)0xC2A7EB4 = 0x8000;
    nlSprPut(0xC2A7E8C);
    *(unsigned int *)0xC2A7EC0 = 0x6;
    *(unsigned int *)0xC2A7EB4 = 0x0;
    *(float *)0xC2A7EA0 = 1.0f;
    *(float *)0xC2A7EB0 = 1.0f;
    return 0x24;
}

int psgJolt(int a4, int a5, float f4)
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
    float u11;
    int t12;
    float u13;
    float u14;
    int t15;
    float u16;
    float u17;
    int t30;
    float u31;
    int t32;
    float u33;
    int t40;
    float u41;
    int t42;
    float u43;
    int t44;
    int t45;
    float u46;
    int t47;
    int t55;
    float u56;
    float u57;
    int t58;
    int t59;
    int t60;
    float u61;
    int t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
    int t68;
    int t69;
    int t70;
    int t71;
    int t72;
    int t73;
    int t74;
    int t75;
    int t82;
    int t83;
    float u84;
    int t85;
    int t86;
    int t87;
    int t88;
    int t89;
    int t90;
    int t91;
    int t92;
    int t93;
    int t94;
    int t95;
    int t96;
    int t97;
    int t98;
    int t99;
    int t100;
    int t107;
    int t108;
    int t109;
    float u110;
    float u111;
    int t112;
    int t113;
    int t114;
    int t115;
    int t116;
    int t117;
    int t118;
    int t119;
    int t120;
    int t121;
    int t122;
    int t123;
    int t124;
    int t125;
    int t132;
    float u133;
    int t134;
    int t135;
    int t136;
    int t137;
    int t138;
    int t139;
    int t140;
    int t141;
    int t142;
    int t143;
    int t144;
    int t145;
    int t146;
    int t147;
    int t148;
    int t149;
    int t157;
    int t158;
    int t159;
    float u160;
    int t161;
    int t162;
    int t163;
    int t164;
    int t165;
    int t166;
    int t167;
    int t168;
    int t169;
    int t170;
    int t171;
    int t172;
    int t173;
    int t174;
    int t182;
    float u183;
    int t184;
    float u185;
    int t186;
    float u187;
    int t188;
    float u189;
    int t190;
    float u191;
    int t192;
    float u193;
    int t194;
    float u195;
    int t196;
    float u197;
    int t198;
    float u199;
    int t200;
    float u201;
    int t202;
    float u203;
    int t204;
    float u205;
    int t206;
    float u207;
    int t208;
    float u209;
    int t210;
    int t211;
    int t212;
    int t213;
    int t214;
    int t215;
    int t216;
    int t217;
    int t218;
    int t219;
    int t220;
    int t221;
    int t222;
    int t223;
    int t224;
    int t225;
    int t226;
    int t227;
    int t228;
    int t229;
    int t230;
    int t231;
    int t232;
    int t233;
    int t234;
    int t235;
    int t236;
    int t237;
    int t238;
    int t239;
    int t240;
    int t241;
    int t242;
    int t243;
    int t244;
    int t245;
    int t246;
    int t247;
    int t248;
    int t249;
    int t250;
    int t251;
    int t252;
    int t253;
    int t254;
    int t255;
    int t256;
    int t257;
    int t258;
    int t259;
    int t260;
    int t261;
    int t262;
    int t263;
    int t264;
    int t265;
    int t266;
    int t267;
    int t268;
    int t269;
    int t270;
    int t271;
    int t273;
    int t274;
    int t275;
    int t36;
    float u39;
    int stk[14] = {0};

    t0 = nlInnerProduct(0xC2AD288, 0xC2AD1E0);
    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = t0;
    t1 = nlInnerProduct(0xC2AD288, 0xC2AD1EC);
    *(float *)(((((int)stk + 4) + 0x4) + 0x4)) = t1;
    t2 = nlInnerProduct(0xC2AD288, 0xC2AD1F8);
    *(float *)(((((int)stk + 4) + 0x4) + 0x8)) = t2;
    u3 = *(float *)(((((int)stk + 4) + 0x4) + 0x0));
    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = (u3 * (f4 / 4.0f));
    u4 = *(float *)(((((int)stk + 4) + 0x4) + 0x4));
    *(float *)(((((int)stk + 4) + 0x4) + 0x4)) = (u4 * (f4 / (1.0f + 1.0f)));
    u5 = *(float *)(((((int)stk + 4) + 0x4) + 0x8));
    *(float *)(((((int)stk + 4) + 0x4) + 0x8)) = (u5 * (f4 / (1.0f + 1.0f)));
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
    } else {
        if (0.0f > u9) {
            *(float *)(((((int)stk + 4) + 0x4) + 0x4)) = 0.0f;
        }
    }
    u11 = *(float *)(((((int)stk + 4) + 0x4) + 0x8));
    if (u11 > 1.0f) {
        *(float *)(((((int)stk + 4) + 0x4) + 0x8)) = 1.0f;
    } else if ((-1.0f) > u11) {
        *(float *)(((((int)stk + 4) + 0x4) + 0x8)) = (-1.0f);
    }
    t12 = *(short *)((a4 + 0x154));
    u13 = *(float *)((a5 + 0x4));
    u14 = *(float *)((((short)((short)t12 * (short)0xCC) + 0xC2ADCE4) + 0x4));
    if ((u14 - u13) > -0.5f) {
        if (0.5f > (u14 - u13)) {
            t15 = *(signed char *)((a4 + 0x154));
            u16 = *(float *)(((((int)stk + 4) + 0x4) + 0x4));
            u17 = *(float *)((((unsigned char)((unsigned short)t15 * (unsigned short)0x1C) + 0xC2AE278) + 0x0));
            *(float *)((((unsigned char)((unsigned short)t15 * (unsigned short)0x1C) + 0xC2AE278) + 0x0)) = (u17 + 0.5f * u16);
        }
    }
    if (!(0.0f > (u14 - u13))) {
        t30 = *(signed char *)((a4 + 0x154));
        u31 = *(float *)(((0xC2AE278 + (unsigned char)((unsigned short)t30 * (unsigned short)0x1C)) + 0x0));
        t36 = (0xC2AE278 + (unsigned char)((unsigned short)t30 * (unsigned short)0x1C));
        u39 = (u31 - ((0.849999964f * (u14 - u13)) / 65.0f));
    } else {
        t32 = *(signed char *)((a4 + 0x154));
        u33 = *(float *)(((0xC2AE278 + (unsigned char)((unsigned short)t32 * (unsigned short)0x1C)) + 0x0));
        t36 = (0xC2AE278 + (unsigned char)((unsigned short)t32 * (unsigned short)0x1C));
        u39 = (u33 - ((7.0f * (u14 - u13)) / 65.0f));
    }
    *(float *)((t36 + 0x0)) = u39;
    t40 = *(signed char *)((a4 + 0x154));
    u41 = *(float *)((((unsigned char)((unsigned short)t40 * (unsigned short)0x1C) + 0xC2AE278) + 0x0));
    *(float *)((((unsigned char)((unsigned short)t40 * (unsigned short)0x1C) + 0xC2AE278) + 0x0)) = (u41 * 0.799999952f);
    t42 = *(signed char *)((a4 + 0x154));
    u43 = *(float *)((((unsigned char)((unsigned short)t42 * (unsigned short)0x1C) + 0xC2AE278) + 0x0));
    if (u43 > 5.0f) {
        t44 = *(signed char *)((a4 + 0x154));
        *(float *)(((0xC2AE278 + (unsigned char)((unsigned short)t44 * (unsigned short)0x1C)) + 0x0)) = 5.0f;
    } else {
        t45 = *(signed char *)((a4 + 0x154));
        u46 = *(float *)((((unsigned char)((unsigned short)t45 * (unsigned short)0x1C) + 0xC2AE278) + 0x0));
        if ((-1.0f) > u46) {
            t47 = *(signed char *)((a4 + 0x154));
            *(float *)(((0xC2AE278 + (unsigned char)((unsigned short)t47 * (unsigned short)0x1C)) + 0x0)) = (-1.0f);
        }
    }
    t55 = *(int *)((a4 + 0x154));
    u56 = *(float *)((((short)((short)t55 * (short)0xCC) + 0xC2ADCE4) + 0x4));
    u57 = *(float *)((((unsigned char)((unsigned short)t55 * (unsigned short)0x1C) + 0xC2AE278) + 0x0));
    *(float *)((((short)((short)t55 * (short)0xCC) + 0xC2ADCE4) + 0x4)) = (u56 + u57);
    t58 = *(int *)((a4 + 0x154));
    t59 = *(int *)((a5 + 0x44));
    t60 = *(int *)((((short)((short)t58 * (short)0xCC) + 0xC2ADCE4) + 0x44));
    u61 = *(float *)(((((int)stk + 4) + 0x4) + 0x0));
    t62 = *(int *)((((unsigned char)((unsigned short)t58 * (unsigned short)0x1C) + 0xC2AE278) + 0x4));
    *(unsigned int *)((((unsigned char)((unsigned short)t58 * (unsigned short)0x1C) + 0xC2AE278) + 0x4)) = (t62 + (-(int)(u61 * 2730.0f)));
    t63 = *(signed char *)((a4 + 0x154));
    t64 = *(int *)((((unsigned char)((unsigned short)t63 * (unsigned short)0x1C) + 0xC2AE278) + 0x4));
    *(unsigned int *)((((unsigned char)((unsigned short)t63 * (unsigned short)0x1C) + 0xC2AE278) + 0x4)) = (t64 - (int)(((float)(t60 - t59) * 0.5f) / 65.0f));
    t65 = *(signed char *)((a4 + 0x154));
    t66 = *(int *)((((unsigned char)((unsigned short)t65 * (unsigned short)0x1C) + 0xC2AE278) + 0x4));
    *(unsigned int *)((((unsigned char)((unsigned short)t65 * (unsigned short)0x1C) + 0xC2AE278) + 0x4)) = (int)((float)t66 * 0.849999964f);
    t67 = *(int *)((a4 + 0x154));
    t68 = *(int *)((((short)((short)t67 * (short)0xCC) + 0xC2ADCE4) + 0x44));
    t69 = *(int *)((((unsigned char)((unsigned short)t67 * (unsigned short)0x1C) + 0xC2AE278) + 0x4));
    *(unsigned int *)((((short)((short)t67 * (short)0xCC) + 0xC2ADCE4) + 0x44)) = (t68 + t69);
    t70 = *(short *)((a4 + 0x154));
    t71 = *(int *)((((short)((short)t70 * (short)0xCC) + 0xC2ADCE4) + 0x44));
    if ((int)t71 > (int)0xE39) {
        t72 = *(short *)((a4 + 0x154));
        *(unsigned int *)(((0xC2ADCE4 + (short)((short)t72 * (short)0xCC)) + 0x44)) = 0xE39;
    } else {
        t73 = *(short *)((a4 + 0x154));
        t74 = *(int *)((((short)((short)t73 * (short)0xCC) + 0xC2ADCE4) + 0x44));
        if ((int)t74 < (int)0xFFFFF1C7) {
            t75 = *(short *)((a4 + 0x154));
            *(unsigned int *)(((0xC2ADCE4 + (short)((short)t75 * (short)0xCC)) + 0x44)) = 0xFFFFF1C7;
        }
    }
    t82 = *(int *)((a4 + 0x154));
    *(unsigned int *)(((int)stk + 4)) = t82;
    t83 = *(int *)((a5 + 0x4C));
    u84 = *(float *)(((((int)stk + 4) + 0x4) + 0x0));
    t85 = *(int *)(((int)stk + 4));
    t86 = *(int *)((((short)((short)t82 * (short)0xCC) + 0xC2ADCE4) + 0x4C));
    t87 = *(int *)((((unsigned char)((unsigned short)t85 * (unsigned short)0x1C) + 0xC2AE278) + 0xC));
    *(unsigned int *)((((unsigned char)((unsigned short)t85 * (unsigned short)0x1C) + 0xC2AE278) + 0xC)) = (t87 + (-(int)(u84 * 2730.0f)));
    t88 = *(signed char *)((a4 + 0x154));
    t89 = *(int *)((((unsigned char)((unsigned short)t88 * (unsigned short)0x1C) + 0xC2AE278) + 0xC));
    *(unsigned int *)((((unsigned char)((unsigned short)t88 * (unsigned short)0x1C) + 0xC2AE278) + 0xC)) = (t89 - (int)(((float)(t86 - t83) * 3.0f) / 15.0f));
    t90 = *(signed char *)((a4 + 0x154));
    t91 = *(int *)((((unsigned char)((unsigned short)t90 * (unsigned short)0x1C) + 0xC2AE278) + 0xC));
    *(unsigned int *)((((unsigned char)((unsigned short)t90 * (unsigned short)0x1C) + 0xC2AE278) + 0xC)) = (int)((float)t91 * 0.799999952f);
    t92 = *(int *)((a4 + 0x154));
    t93 = *(int *)((((short)((short)t92 * (short)0xCC) + 0xC2ADCE4) + 0x4C));
    t94 = *(int *)((((unsigned char)((unsigned short)t92 * (unsigned short)0x1C) + 0xC2AE278) + 0xC));
    *(unsigned int *)((((short)((short)t92 * (short)0xCC) + 0xC2ADCE4) + 0x4C)) = (t93 + t94);
    t95 = *(short *)((a4 + 0x154));
    t96 = *(int *)((((short)((short)t95 * (short)0xCC) + 0xC2ADCE4) + 0x4C));
    if ((int)t96 > (int)0xE39) {
        t97 = *(short *)((a4 + 0x154));
        *(unsigned int *)(((0xC2ADCE4 + (short)((short)t97 * (short)0xCC)) + 0x4C)) = 0xE39;
    } else {
        t98 = *(short *)((a4 + 0x154));
        t99 = *(int *)((((short)((short)t98 * (short)0xCC) + 0xC2ADCE4) + 0x4C));
        if ((int)t99 < (int)0xFFFFF1C7) {
            t100 = *(short *)((a4 + 0x154));
            *(unsigned int *)(((0xC2ADCE4 + (short)((short)t100 * (short)0xCC)) + 0x4C)) = 0xFFFFF1C7;
        }
    }
    t107 = *(int *)((a4 + 0x154));
    t108 = *(int *)((a5 + 0x50));
    t109 = *(int *)((((short)((short)t107 * (short)0xCC) + 0xC2ADCE4) + 0x50));
    u110 = *(float *)(((((int)stk + 4) + 0x4) + 0x8));
    u111 = *(float *)(((((int)stk + 4) + 0x4) + 0x4));
    t112 = *(int *)((((unsigned char)((unsigned short)t107 * (unsigned short)0x1C) + 0xC2AE278) + 0x10));
    *(unsigned int *)((((unsigned char)((unsigned short)t107 * (unsigned short)0x1C) + 0xC2AE278) + 0x10)) = (t112 + ((int)(u110 * 2730.0f) - (int)(u111 * 2730.0f)));
    t113 = *(signed char *)((a4 + 0x154));
    t114 = *(int *)((((unsigned char)((unsigned short)t113 * (unsigned short)0x1C) + 0xC2AE278) + 0x10));
    *(unsigned int *)((((unsigned char)((unsigned short)t113 * (unsigned short)0x1C) + 0xC2AE278) + 0x10)) = (t114 - (int)(((float)(t109 - t108) * 0.599999964f) / 15.0f));
    t115 = *(signed char *)((a4 + 0x154));
    t116 = *(int *)((((unsigned char)((unsigned short)t115 * (unsigned short)0x1C) + 0xC2AE278) + 0x10));
    *(unsigned int *)((((unsigned char)((unsigned short)t115 * (unsigned short)0x1C) + 0xC2AE278) + 0x10)) = (int)((float)t116 * 0.949999988f);
    t117 = *(int *)((a4 + 0x154));
    t118 = *(int *)((((short)((short)t117 * (short)0xCC) + 0xC2ADCE4) + 0x50));
    t119 = *(int *)((((unsigned char)((unsigned short)t117 * (unsigned short)0x1C) + 0xC2AE278) + 0x10));
    *(unsigned int *)((((short)((short)t117 * (short)0xCC) + 0xC2ADCE4) + 0x50)) = (t118 + t119);
    t120 = *(short *)((a4 + 0x154));
    t121 = *(int *)((((short)((short)t120 * (short)0xCC) + 0xC2ADCE4) + 0x50));
    if ((int)t121 > (int)0x4E39) {
        t122 = *(short *)((a4 + 0x154));
        *(unsigned int *)(((0xC2ADCE4 + (short)((short)t122 * (short)0xCC)) + 0x50)) = 0x4E39;
    } else {
        t123 = *(short *)((a4 + 0x154));
        t124 = *(int *)((((short)((short)t123 * (short)0xCC) + 0xC2ADCE4) + 0x50));
        if ((int)t124 < (int)0x2000) {
            t125 = *(short *)((a4 + 0x154));
            *(unsigned int *)(((0xC2ADCE4 + (short)((short)t125 * (short)0xCC)) + 0x50)) = 0x2000;
        }
    }
    t132 = *(int *)((a4 + 0x154));
    u133 = *(float *)(((((int)stk + 4) + 0x4) + 0x0));
    t134 = *(int *)((a5 + 0x54));
    t135 = *(int *)((((short)((short)t132 * (short)0xCC) + 0xC2ADCE4) + 0x54));
    t136 = *(int *)((((unsigned char)((unsigned short)t132 * (unsigned short)0x1C) + 0xC2AE278) + 0x14));
    *(unsigned int *)((((unsigned char)((unsigned short)t132 * (unsigned short)0x1C) + 0xC2AE278) + 0x14)) = (t136 + (-(int)(u133 * 2730.0f)));
    t137 = *(signed char *)((a4 + 0x154));
    t138 = *(int *)((((unsigned char)((unsigned short)t137 * (unsigned short)0x1C) + 0xC2AE278) + 0x14));
    *(unsigned int *)((((unsigned char)((unsigned short)t137 * (unsigned short)0x1C) + 0xC2AE278) + 0x14)) = (t138 - (int)(((float)(t135 - t134) * 1.0f) / 7.0f));
    t139 = *(signed char *)((a4 + 0x154));
    t140 = *(int *)((((unsigned char)((unsigned short)t139 * (unsigned short)0x1C) + 0xC2AE278) + 0x14));
    *(unsigned int *)((((unsigned char)((unsigned short)t139 * (unsigned short)0x1C) + 0xC2AE278) + 0x14)) = (int)((float)t140 * 0.799999952f);
    t141 = *(int *)((a4 + 0x154));
    t142 = *(int *)((((short)((short)t141 * (short)0xCC) + 0xC2ADCE4) + 0x54));
    t143 = *(int *)((((unsigned char)((unsigned short)t141 * (unsigned short)0x1C) + 0xC2AE278) + 0x14));
    *(unsigned int *)((((short)((short)t141 * (short)0xCC) + 0xC2ADCE4) + 0x54)) = (t142 + t143);
    t144 = *(short *)((a4 + 0x154));
    t145 = *(int *)((((short)((short)t144 * (short)0xCC) + 0xC2ADCE4) + 0x54));
    if ((int)t145 > (int)0x1555) {
        t146 = *(short *)((a4 + 0x154));
        *(unsigned int *)(((0xC2ADCE4 + (short)((short)t146 * (short)0xCC)) + 0x54)) = 0x1555;
    } else {
        t147 = *(short *)((a4 + 0x154));
        t148 = *(int *)((((short)((short)t147 * (short)0xCC) + 0xC2ADCE4) + 0x54));
        if ((int)t148 < (int)0xFFFFEAAB) {
            t149 = *(short *)((a4 + 0x154));
            *(unsigned int *)(((0xC2ADCE4 + (short)((short)t149 * (short)0xCC)) + 0x54)) = 0xFFFFEAAB;
        }
    }
    t157 = *(int *)((a4 + 0x154));
    t158 = *(int *)((a5 + 0x5C));
    t159 = *(int *)((((short)((short)t157 * (short)0xCC) + 0xC2ADCE4) + 0x5C));
    u160 = *(float *)(((((int)stk + 4) + 0x4) + 0x8));
    t161 = *(int *)((((unsigned char)((unsigned short)t157 * (unsigned short)0x1C) + 0xC2AE278) + 0x18));
    *(unsigned int *)((((unsigned char)((unsigned short)t157 * (unsigned short)0x1C) + 0xC2AE278) + 0x18)) = (t161 + (int)(u160 * 8192.0f));
    t162 = *(signed char *)((a4 + 0x154));
    t163 = *(int *)((((unsigned char)((unsigned short)t162 * (unsigned short)0x1C) + 0xC2AE278) + 0x18));
    *(unsigned int *)((((unsigned char)((unsigned short)t162 * (unsigned short)0x1C) + 0xC2AE278) + 0x18)) = (t163 - (int)(((float)(t159 - t158) * 0.5f) / 7.0f));
    t164 = *(signed char *)((a4 + 0x154));
    t165 = *(int *)((((unsigned char)((unsigned short)t164 * (unsigned short)0x1C) + 0xC2AE278) + 0x18));
    *(unsigned int *)((((unsigned char)((unsigned short)t164 * (unsigned short)0x1C) + 0xC2AE278) + 0x18)) = (int)((float)t165 * 0.919999957f);
    t166 = *(int *)((a4 + 0x154));
    t167 = *(int *)((((short)((short)t166 * (short)0xCC) + 0xC2ADCE4) + 0x5C));
    t168 = *(int *)(((0xC2AE278 + (unsigned char)((unsigned short)t166 * (unsigned short)0x1C)) + 0x18));
    *(unsigned int *)((((short)((short)t166 * (short)0xCC) + 0xC2ADCE4) + 0x5C)) = (t167 + t168);
    t169 = *(short *)((a4 + 0x154));
    t170 = *(int *)((((short)((short)t169 * (short)0xCC) + 0xC2ADCE4) + 0x5C));
    if ((int)t170 > (int)0x2000) {
        t171 = *(short *)((a4 + 0x154));
        *(unsigned int *)(((0xC2ADCE4 + (short)((short)t171 * (short)0xCC)) + 0x5C)) = 0x2000;
    } else {
        t172 = *(short *)((a4 + 0x154));
        t173 = *(int *)((((short)((short)t172 * (short)0xCC) + 0xC2ADCE4) + 0x5C));
        if ((int)t173 < (int)0xFFFFE000) {
            t174 = *(short *)((a4 + 0x154));
            *(unsigned int *)(((0xC2ADCE4 + (short)((short)t174 * (short)0xCC)) + 0x5C)) = 0xFFFFE000;
        }
    }
    t182 = *(short *)((a4 + 0x154));
    u183 = *(float *)((a5 + 0x0));
    *(float *)((((short)((short)t182 * (short)0xCC) + 0xC2ADCE4) + 0x0)) = u183;
    t184 = *(short *)((a4 + 0x154));
    u185 = *(float *)((a5 + 0x8));
    *(float *)((((short)((short)t184 * (short)0xCC) + 0xC2ADCE4) + 0x8)) = u185;
    t186 = *(short *)((a4 + 0x154));
    u187 = *(float *)((a5 + 0xC));
    *(float *)((((short)((short)t186 * (short)0xCC) + 0xC2ADCE4) + 0xC)) = u187;
    t188 = *(short *)((a4 + 0x154));
    u189 = *(float *)((a5 + 0x10));
    *(float *)((((short)((short)t188 * (short)0xCC) + 0xC2ADCE4) + 0x10)) = u189;
    t190 = *(short *)((a4 + 0x154));
    u191 = *(float *)((a5 + 0x14));
    *(float *)((((short)((short)t190 * (short)0xCC) + 0xC2ADCE4) + 0x14)) = u191;
    t192 = *(short *)((a4 + 0x154));
    u193 = *(float *)((a5 + 0x18));
    *(float *)((((short)((short)t192 * (short)0xCC) + 0xC2ADCE4) + 0x18)) = u193;
    t194 = *(short *)((a4 + 0x154));
    u195 = *(float *)((a5 + 0x1C));
    *(float *)((((short)((short)t194 * (short)0xCC) + 0xC2ADCE4) + 0x1C)) = u195;
    t196 = *(short *)((a4 + 0x154));
    u197 = *(float *)((a5 + 0x20));
    *(float *)((((short)((short)t196 * (short)0xCC) + 0xC2ADCE4) + 0x20)) = u197;
    t198 = *(short *)((a4 + 0x154));
    u199 = *(float *)((a5 + 0x24));
    *(float *)((((short)((short)t198 * (short)0xCC) + 0xC2ADCE4) + 0x24)) = u199;
    t200 = *(short *)((a4 + 0x154));
    u201 = *(float *)((a5 + 0x28));
    *(float *)((((short)((short)t200 * (short)0xCC) + 0xC2ADCE4) + 0x28)) = u201;
    t202 = *(short *)((a4 + 0x154));
    u203 = *(float *)((a5 + 0x2C));
    *(float *)((((short)((short)t202 * (short)0xCC) + 0xC2ADCE4) + 0x2C)) = u203;
    t204 = *(short *)((a4 + 0x154));
    u205 = *(float *)((a5 + 0x30));
    *(float *)((((short)((short)t204 * (short)0xCC) + 0xC2ADCE4) + 0x30)) = u205;
    t206 = *(short *)((a4 + 0x154));
    u207 = *(float *)((a5 + 0x34));
    *(float *)((((short)((short)t206 * (short)0xCC) + 0xC2ADCE4) + 0x34)) = u207;
    t208 = *(short *)((a4 + 0x154));
    u209 = *(float *)((a5 + 0x38));
    *(float *)((((short)((short)t208 * (short)0xCC) + 0xC2ADCE4) + 0x38)) = u209;
    t210 = *(short *)((a4 + 0x154));
    t211 = *(int *)((a5 + 0x3C));
    *(unsigned int *)((((short)((short)t210 * (short)0xCC) + 0xC2ADCE4) + 0x3C)) = t211;
    t212 = *(short *)((a4 + 0x154));
    t213 = *(int *)((a5 + 0x40));
    *(unsigned int *)((((short)((short)t212 * (short)0xCC) + 0xC2ADCE4) + 0x40)) = t213;
    t214 = *(short *)((a4 + 0x154));
    t215 = *(int *)((a5 + 0x48));
    *(unsigned int *)((((short)((short)t214 * (short)0xCC) + 0xC2ADCE4) + 0x48)) = t215;
    t216 = *(short *)((a4 + 0x154));
    t217 = *(int *)((a5 + 0x58));
    *(unsigned int *)((((short)((short)t216 * (short)0xCC) + 0xC2ADCE4) + 0x58)) = t217;
    t218 = *(short *)((a4 + 0x154));
    t219 = *(int *)((a5 + 0x60));
    *(unsigned int *)((((short)((short)t218 * (short)0xCC) + 0xC2ADCE4) + 0x60)) = t219;
    t220 = *(short *)((a4 + 0x154));
    t221 = *(int *)((a5 + 0x64));
    *(unsigned int *)((((short)((short)t220 * (short)0xCC) + 0xC2ADCE4) + 0x64)) = t221;
    t222 = *(short *)((a4 + 0x154));
    t223 = *(int *)((a5 + 0x68));
    *(unsigned int *)((((short)((short)t222 * (short)0xCC) + 0xC2ADCE4) + 0x68)) = t223;
    t224 = *(short *)((a4 + 0x154));
    t225 = *(int *)((a5 + 0x6C));
    *(unsigned int *)((((short)((short)t224 * (short)0xCC) + 0xC2ADCE4) + 0x6C)) = t225;
    t226 = *(short *)((a4 + 0x154));
    t227 = *(int *)((a5 + 0x70));
    *(unsigned int *)((((short)((short)t226 * (short)0xCC) + 0xC2ADCE4) + 0x70)) = t227;
    t228 = *(short *)((a4 + 0x154));
    t229 = *(int *)((a5 + 0x74));
    *(unsigned int *)((((short)((short)t228 * (short)0xCC) + 0xC2ADCE4) + 0x74)) = t229;
    t230 = *(short *)((a4 + 0x154));
    t231 = *(int *)((a5 + 0x78));
    *(unsigned int *)((((short)((short)t230 * (short)0xCC) + 0xC2ADCE4) + 0x78)) = t231;
    t232 = *(short *)((a4 + 0x154));
    t233 = *(int *)((a5 + 0x7C));
    *(unsigned int *)((((short)((short)t232 * (short)0xCC) + 0xC2ADCE4) + 0x7C)) = t233;
    t234 = *(short *)((a4 + 0x154));
    t235 = *(int *)((a5 + 0x80));
    *(unsigned int *)((((short)((short)t234 * (short)0xCC) + 0xC2ADCE4) + 0x80)) = t235;
    t236 = *(short *)((a4 + 0x154));
    t237 = *(int *)((a5 + 0x84));
    *(unsigned int *)((((short)((short)t236 * (short)0xCC) + 0xC2ADCE4) + 0x84)) = t237;
    t238 = *(short *)((a4 + 0x154));
    t239 = *(int *)((a5 + 0x88));
    *(unsigned int *)((((short)((short)t238 * (short)0xCC) + 0xC2ADCE4) + 0x88)) = t239;
    t240 = *(short *)((a4 + 0x154));
    t241 = *(int *)((a5 + 0x8C));
    *(unsigned int *)((((short)((short)t240 * (short)0xCC) + 0xC2ADCE4) + 0x8C)) = t241;
    t242 = *(short *)((a4 + 0x154));
    t243 = *(int *)((a5 + 0x90));
    *(unsigned int *)((((short)((short)t242 * (short)0xCC) + 0xC2ADCE4) + 0x90)) = t243;
    t244 = *(short *)((a4 + 0x154));
    t245 = *(int *)((a5 + 0x94));
    *(unsigned int *)((((short)((short)t244 * (short)0xCC) + 0xC2ADCE4) + 0x94)) = t245;
    t246 = *(short *)((a4 + 0x154));
    t247 = *(int *)((a5 + 0x98));
    *(unsigned int *)((((short)((short)t246 * (short)0xCC) + 0xC2ADCE4) + 0x98)) = t247;
    t248 = *(short *)((a4 + 0x154));
    t249 = *(int *)((a5 + 0x9C));
    *(unsigned int *)((((short)((short)t248 * (short)0xCC) + 0xC2ADCE4) + 0x9C)) = t249;
    t250 = *(short *)((a4 + 0x154));
    t251 = *(int *)((a5 + 0xA0));
    *(unsigned int *)((((short)((short)t250 * (short)0xCC) + 0xC2ADCE4) + 0xA0)) = t251;
    t252 = *(short *)((a4 + 0x154));
    t253 = *(int *)((a5 + 0xA4));
    *(unsigned int *)((((short)((short)t252 * (short)0xCC) + 0xC2ADCE4) + 0xA4)) = t253;
    t254 = *(short *)((a4 + 0x154));
    t255 = *(int *)((a5 + 0xA8));
    *(unsigned int *)((((short)((short)t254 * (short)0xCC) + 0xC2ADCE4) + 0xA8)) = t255;
    t256 = *(short *)((a4 + 0x154));
    t257 = *(int *)((a5 + 0xAC));
    *(unsigned int *)((((short)((short)t256 * (short)0xCC) + 0xC2ADCE4) + 0xAC)) = t257;
    t258 = *(short *)((a4 + 0x154));
    t259 = *(int *)((a5 + 0xB0));
    *(unsigned int *)((((short)((short)t258 * (short)0xCC) + 0xC2ADCE4) + 0xB0)) = t259;
    t260 = *(short *)((a4 + 0x154));
    t261 = *(int *)((a5 + 0xB4));
    *(unsigned int *)((((short)((short)t260 * (short)0xCC) + 0xC2ADCE4) + 0xB4)) = t261;
    t262 = *(short *)((a4 + 0x154));
    t263 = *(int *)((a5 + 0xB8));
    *(unsigned int *)((((short)((short)t262 * (short)0xCC) + 0xC2ADCE4) + 0xB8)) = t263;
    t264 = *(short *)((a4 + 0x154));
    t265 = *(int *)((a5 + 0xBC));
    *(unsigned int *)((((short)((short)t264 * (short)0xCC) + 0xC2ADCE4) + 0xBC)) = t265;
    t266 = *(short *)((a4 + 0x154));
    t267 = *(int *)((((a5 + 0x3C) + 0x84) + 0x0));
    *(unsigned int *)((((((short)((short)t266 * (short)0xCC) + 0xC2ADCE4) + 0x3C) + 0x84) + 0x0)) = t267;
    t268 = *(short *)((a4 + 0x154));
    t269 = *(int *)((((a5 + 0x3C) + 0x84) + 0x4));
    *(unsigned int *)((((((short)((short)t268 * (short)0xCC) + 0xC2ADCE4) + 0x3C) + 0x84) + 0x4)) = t269;
    t270 = *(short *)((a4 + 0x154));
    t271 = *(int *)((((a5 + 0x3C) + 0x84) + 0x8));
    *(unsigned int *)((((((short)((short)t270 * (short)0xCC) + 0xC2ADCE4) + 0x3C) + 0x84) + 0x8)) = t271;
    psgUpdatePartTracks(a4);
    t273 = *(short *)((a4 + 0x154));
    t274 = *(int *)((a4 + 0x0));
    t275 = FcvPlayBuffer(((short)((short)t273 * (short)0xCC) + 0xC2ADCE4), t274);
    return t275;
}
