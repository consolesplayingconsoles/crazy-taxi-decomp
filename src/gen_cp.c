/* Straight-line functions with calls and guards (batch gen_cp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CableControlInit(int);
int GetRotVec4Ang(int, int, int);
int NextWindow(int);
int windowOpenStep(void);
int windowEnterStep(void);
int GetNowLanguage(int);
int convergeRot(int, int, float);
int getNearLinkedLine(int, int, int, int);
int nd_SprPut(int, int, float, float);
int Init_Window_Sprite(int);
int Start_Excellent(void);
int Start_Fault(int);
int Exec_Remain_Arrow(void);
int Put_Remain_Icon(void);
int fcvTranslateCurve(void);
int fcvRotateCurve(void);
int fcvSolveIK(int, int, int, int, int);
float BigOneKeyValue(int, int, float);
int BigOneRotate(int, int, int);
int BigOneHomeAngle(int, int, float);
int nlSqrt(int, int);
int FUN_0c077210(int, int);
int FUN_0c077f70(void);
int FUN_0c078310(void);
int FUN_0c0789c0(int);
int FUN_0c078a70(int, int, int);
int FUN_0c07c1d0(int, int, int, int, float, float);
int FUN_0c07c260(int, int, int, int, float, float);
int FUN_0c07c2e0(int, int, int, int, float, float);
int FUN_0c07c360(int, int, int, int, float, float);
int FUN_0c07c3f0(int, int, int, float);
int FUN_0c07cb70(int, int, int);
int FUN_0c07cd30(int, int, int, int);
int FUN_0c07d040(int, int);
int FUN_0c16bb70(void);
int FUN_0c16bca0(void);
int FUN_0c16bf4a(void);
int GetAverageAngle(int, int, float);
int GetCollision2D(int, float);
int KillColliObj(int);
int PutWindow(int, float, float);
int MultiRot4Vec(int);
int Sound_Request(int, int);
extern float _builtin_sqrtf(float);
int carColliReflection(void);
int carEntry(int);
int carResistance(void);
int colliBoxAhead(int, int, int);
int extRand(void);
int getYXZrot(int);
extern int kmiCreateRegionArray();
int kmiDMAHazardReset(void);
int menuPutSprites(int, int, int, int);
int nlAddVector(int, int);
int nlArcTan2(float, float);
int nlCloseEvent(int);
float nlFloor(float);
int nlGetAverageVector(int, int, int, float, float);
int nlGetPushedMatrix(int);
int nlGetTranslate(int);
float nlInnerProduct(int, int);
float nlLength(int, int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRand(void);
float nlRandom(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlRotateV(int, int);
int nlScaleUnitVector(int, int, float);
int nlScaleVector(int, int, float);
float nlScalor(int);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int nlUnitVector(int);
extern int pcarSpawn();
int putString(int, int, float, float, float);
int setTechnicalBonus(int, int, int);
int signalInit(int, int);
int technicalCheck(int);
int trainControlInit(void);
int vsklRotate(int);
void nlUnitRotation(void);
int kmiCopyTextureToTexture(void);
float carGripCurve(float f4);
int windowBoxAdvice(void);
int Exec_DCmini_Game7(void);
void FUN_0c07cc00(int a4, int a5, int a6, int a7);
int breathSteer(int a4, int a5);
int SetSpark(int a4, int a5, int a6);
int FUN_0c07c470(int a4, int a5, int a6, int a7);
int colliBoxSphere(int a4, int a5);
int Put_Window_SpriteXtoY(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7);
int FUN_0c16c1c0(void);
int trailerExec(int a4);
int BigOneSwimMove(void);
int trafficSectionControl(int a4, int a5, int a6, float f4);
int humanDraw(int a4, int a5, int a6, int a7);
int FcvPlay(int a4, int a5, float f4);


int kmiCopyTextureToTexture(void)
{
    return 0x1;
}

float carGripCurve(float f4)
{
    float u20;
    float u15;
    float u10;
    float u3;
    float u4;
    float u21;

    u20 = (1.06999993f - (f4 * 21.0f));
    if (!(0.00999999978f > f4)) {
        u15 = (0.859999955f + (1.0f + 1.0f) * (f4 + -0.00999999978f));
        if (!(0.0599999987f > f4)) {
            u10 = (0.959999979f + (1.0f + 1.0f) * (f4 + -0.0599999987f));
            if (!(0.109999999f > f4)) {
                u3 = ((f4 + -0.209999993f) * 0.424999982f);
                u4 = 0.909999967f;
                if (0.209999993f > f4) {
                    u3 = ((f4 + -0.109999999f) * 1.5f);
                    u4 = 1.05999994f;
                }
                u10 = (u4 - u3);
            }
            u15 = u10;
        }
        u20 = u15;
    }
    u21 = u20;
    if (0.719999969f > u20) {
        u21 = 0.719999969f;
    }
    return u21;
}

int windowBoxAdvice(void)
{
    int t0;
    int t3;
    int t4;
    int t5;
    int t9;
    int t13;
    int t14;
    int t15;
    int t16;

    t0 = windowOpenStep();
    if (t0 == 1) {
        Init_Window_Sprite(0x3);
    }
    t3 = *(int *)0xC2A1208;
    if ((t3 & 4) != 0) {
        t4 = *(int *)0xC2A11CC;
        if ((t4 & 5) != 0) {
            t5 = *(int *)0xC2A1208;
            *(unsigned int *)0xC2A1208 = (t5 | 0x8);
        }
    }
    NextWindow(0x0);
    t9 = PutWindow(0x3, 8.0f, 264.0f);
    if (t9 == 1) {
        putString(0x23, 0xC0A2090, 428.0f, 272.0f, 1.0f);
        putString(0x20, 0xC0A2098, 520.0f, 272.0f, 1.0f);
        putString(0x23, 0xC0A20A8, 32.0f, 272.0f, 1.0f);
        t13 = *(int *)0xC2A11D8;
        t14 = *(int *)(((t13 << 2) + 0xC2A11DC));
        t15 = GetNowLanguage(0x1);
        t16 = *(int *)(((0xC0EF728 + (((t14 - 2) << 2) << 1)) + (t15 << 2)));
        menuPutSprites(t16, 0xC2A1A84, 0x40, 0x130);
    }
    return windowEnterStep();
}


void FUN_0c07cc00(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    float t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t37;
    int stk[17] = {0};

    *(unsigned int *)(((int)stk + 28)) = a6;
    t0 = *(int *)0xC2B7670;
    *(unsigned int *)(((int)stk + 4)) = t0;
    *(unsigned int *)(((int)stk + 32)) = 0xC2B7678;
    t1 = *(int *)((a7 + 0x0));
    t2 = (((int)stk + 4) + 0x1C);
    if ((t1 & 0x1) != 0) {
        t2 = ((int)stk + 4);
    }
    t3 = 0xC2B7670;
    t4 = a4;
    t5 = a5;
    while ((int)t5 > 0) {
        t3 = 0xC078AC0;
        t6 = *(int *)((t2 + 0x0));
        t7 = nlInnerProduct(t4, t6);
        if (0.0f > t7) {
            t8 = (t4 + 0x12);
            t9 = 0x3;
            do {
                t10 = *(short *)((t8 + 0x0));
                t8 = (t8 + 0x2);
                t11 = *(int *)0xC2B766C;
                t12 = *(signed char *)(((t11 + t10) + 0x0));
                t3 = t12;
                if (t3 != 0) {
                    *(unsigned char *)(((t11 + t10) + 0x0)) = 0x2;
                } else {
                    *(unsigned char *)(((t11 + t10) + 0x0)) = 0x1;
                    t13 = *(int *)(((int)stk + 28));
                    t3 = t13;
                    t14 = *(short *)((((t10 << 2) + t3) + 0x0));
                    t15 = ((t10 << 2) + t3);
                    t3 = t14;
                    *(unsigned int *)(((int)stk + 24)) = t3;
                    t16 = *(short *)((t15 + 0x2));
                    *(unsigned int *)(((int)stk + 8)) = t16;
                    *(unsigned int *)(((int)stk + 20)) = ((t10 << 2) << 2);
                    t17 = *(int *)(((int)stk + 8));
                    t18 = *(int *)0xC2B7664;
                    *(unsigned int *)(((int)stk + 12)) = ((t17 << 2) << 2);
                    t19 = *(int *)(((int)stk + 24));
                    t20 = *(int *)0xC2B7658;
                    t3 = t20;
                    *(unsigned int *)(((int)stk + 16)) = ((t19 << 2) << 2);
                    FUN_0c07cb70((((t19 << 2) << 2) + t3), (((t17 << 2) << 2) + t3), (((t10 << 2) << 2) + t18));
                    t3 = 0xC2B7668;
                    t22 = *(int *)0xC2B765C;
                    t23 = *(int *)(((int)stk + 12));
                    t24 = *(int *)((t3 + 0x0));
                    t25 = *(int *)(((int)stk + 20));
                    t26 = *(int *)(((int)stk + 16));
                    FUN_0c07cb70((t26 + t22), (t23 + t22), (t25 + t24));
                }
                t9 = (t9 - 0x1);
            } while (t9 != 0);
            t3 = 0xC2B7658;
            t29 = *(int *)0xC2B7664;
            t30 = *(int *)((t3 + 0x0));
            t31 = FUN_0c07d040(t30, (t4 + 0xC));
            t3 = 0xC2B765C;
            t32 = *(int *)0xC2B7668;
            t33 = *(int *)((t3 + 0x0));
            t34 = FUN_0c07d040(t33, (t4 + 0xC));
            if ((t31 | t34) != 0) {
                FUN_0c07cd30(t31, t34, (t4 + 0xC), (t4 + 0x12));
            }
        }
        t37 = *(int *)(((int)stk + 4));
        t3 = t37;
        t4 = (t4 + 0x18);
        t5 = (t5 - 1);
        t3 = (t3 + 0xC);
        *(unsigned int *)(((int)stk + 4)) = t3;
    }
}

int breathSteer(int a4, int a5)
{
    int t0;
    int t21;
    int t1;
    int t2;
    int t3;
    int t4;
    float u5;
    float u6;
    float u7;
    int t9;
    int t10;
    float u11;
    float u12;
    float u13;
    float u15;
    float u16;
    float u17;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    float u36;
    float u37;
    int t39;
    float u43;
    float u44;
    int t46;
    int t47;
    int t48;
    int t49;
    int t52;
    int t50;
    int t51;
    int t54;
    int t41;
    int t18;

    t0 = *(int *)((a4 + 0x24));
    if (t0 != 0) {
        if (t0 != 1) {
            t21 = t0;
            if (t0 == 2) {
                t1 = *(int *)((a4 + 0x20));
                if ((int)t1 >= 0) {
                    t2 = *(int *)((a4 + 0xC));
                    t3 = GetAverageAngle(t2, 0xFFFFDC72, 0.98999995f);
                    *(unsigned int *)((a4 + 0xC)) = (short)t3;
                    t4 = *(int *)((a4 + 0x20));
                    *(unsigned int *)((a4 + 0x20)) = (t4 - 1);
                    u5 = *(float *)0xC072784;
                    u6 = *(float *)((a4 + 0x18));
                    if (u5 > u6) {
                        u7 = *(float *)((a4 + 0x18));
                        *(float *)((a4 + 0x18)) = (u7 + 0.00999999978f);
                    }
                    t18 = 0x18;
                } else {
                    t9 = *(int *)((a4 + 0xC));
                    t10 = GetAverageAngle(t9, 0x31C7, 0.98999995f);
                    *(unsigned int *)((a4 + 0xC)) = (short)t10;
                    u11 = *(float *)0xC072788;
                    u12 = *(float *)((a4 + 0x18));
                    if (u11 > u12) {
                        u13 = *(float *)((a4 + 0x18));
                        *(float *)((a4 + 0x18)) = (u13 + 0.00999999978f);
                    }
                    u15 = *(float *)0xC07278C;
                    u16 = *(float *)((a5 + 0x4));
                    u17 = *(float *)((a4 + 0x4));
                    if (!((u16 + u15) > u17)) {
                        *(unsigned int *)((a4 + 0x24)) = 0x0;
                    }
                    t18 = 0x4;
                }
                t21 = t18;
            }
            t41 = t21;
        } else {
            t22 = *(int *)0xC1EE330;
            t23 = (int)((int)t22 % (int)0x2D);
            if (t23 == 1) {
                t24 = *(int *)((a4 + 0x10));
                t25 = nlRand();
                t26 = (int)((int)t25 % (int)0x5);
                *(unsigned int *)((a4 + 0x14)) = (int)((float)t24 + 1274.0f * (float)(t26 - 1));
            }
            t30 = *(int *)((a4 + 0x14));
            t31 = *(int *)((a4 + 0x10));
            t32 = GetAverageAngle(t31, t30, 0.949999988f);
            *(unsigned int *)((a4 + 0x10)) = (short)t32;
            t33 = *(int *)((a4 + 0xC));
            t34 = GetAverageAngle(t33, 0xFFFFFF4A, 0.949999988f);
            *(unsigned int *)((a4 + 0xC)) = (short)t34;
            t35 = *(int *)((a4 + 0x20));
            *(unsigned int *)((a4 + 0x20)) = (t35 - 1);
            u36 = *(float *)((a4 + 0x18));
            if (0.099999994f > u36) {
                u37 = *(float *)((a4 + 0x18));
                *(float *)((a4 + 0x18)) = (u37 + 0.00999999978f);
            }
            t39 = *(int *)((a4 + 0x20));
            if ((int)t39 < (int)0xFFFFFF10) {
                *(unsigned int *)((a4 + 0x24)) = 0x0;
            }
            t41 = 0x18;
        }
        t54 = t41;
    } else {
        u43 = *(float *)((a4 + 0x18));
        if (0.00999999978f > u43) {
            *(float *)((a4 + 0x18)) = 0.00999999978f;
        } else {
            u44 = *(float *)((a4 + 0x18));
            *(float *)((a4 + 0x18)) = (u44 * 0.899999976f);
        }
        t46 = *(int *)((a4 + 0xC));
        t47 = GetAverageAngle(t46, 0x10, 0.98999995f);
        *(unsigned int *)((a4 + 0xC)) = (short)t47;
        *(unsigned int *)((a4 + 0x20)) = 0xF0;
        t48 = *(int *)0xC1EE330;
        t49 = (int)((int)t48 % (int)0x78);
        t52 = t49;
        if (t49 == 0) {
            t50 = nlRand();
            t51 = (int)((int)t50 % (int)0x3);
            *(unsigned int *)((a4 + 0x24)) = t51;
            t52 = t51;
        }
        t54 = t52;
    }
    return t54;
}

int SetSpark(int a4, int a5, int a6)
{
    int t0;
    float t1;
    int t48;
    int t2;
    int t3;
    int t5;
    int t9;
    float u15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    float u25;
    float t26;
    int t27;
    int t28;
    float u29;
    float t30;
    int t31;
    int t32;
    float u33;
    float t34;
    int t35;
    int t36;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t11;
    int stk[20] = {0};

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    t0 = *(int *)0xC2757D0;
    t1 = nlScalor(a5);
    t48 = 0xC0379D8;
    if (!(0.199999988f > (t1 * 0.5f))) {
        if ((int)a6 > (int)(0x5A - t0)) {
            if ((int)((a6 + 0x1) >> 1) > (int)(0x5A - t0)) {
                *(unsigned int *)0xC2757D0 = 0x5A;
                t2 = *(int *)0xC2757D4;
                *(unsigned int *)0xC2757D4 = (t2 + (((a6 + 0x1) >> 1) - (0x5A - t0)));
                if ((int)(t2 + (((a6 + 0x1) >> 1) - (0x5A - t0))) >= (int)0x5A) {
                    t3 = *(int *)0xC2757D4;
                    *(unsigned int *)0xC2757D4 = (t3 - 0x5A);
                }
            } else {
                t5 = *(int *)0xC2757D0;
                *(unsigned int *)0xC2757D0 = (t5 + ((a6 + 0x1) >> 1));
            }
            t11 = ((a6 + 0x1) >> 1);
        } else {
            t9 = *(int *)0xC2757D0;
            *(unsigned int *)0xC2757D0 = (t9 + a6);
            t11 = a6;
        }
        nlPushUnitMatrix();
        FUN_0c077f70();
        u15 = *(float *)0xC037B24;
        t16 = a4;
        t17 = t11;
        while (t17 != 0) {
            t18 = *(int *)0xC2757D8;
            t19 = *(int *)(((int)stk + 12));
            t20 = *(int *)((t19 + 0x8));
            *(unsigned int *)((((short)((short)t18 * (short)0x1C) + 0xC274DF8) + 0x8)) = t20;
            t21 = *(int *)((t19 + 0x4));
            *(unsigned int *)((((short)((short)t18 * (short)0x1C) + 0xC274DF8) + 0x4)) = t21;
            t22 = *(int *)((t19 + 0x0));
            *(unsigned int *)((((short)((short)t18 * (short)0x1C) + 0xC274DF8) + 0x0)) = t22;
            t23 = *(int *)0xC2757D8;
            t24 = *(int *)(((int)stk + 8));
            u25 = *(float *)((t24 + 0x0));
            t26 = nlRandom();
            *(float *)(((0xC + ((short)((short)t23 * (short)0x1C) + 0xC274DF8)) + 0x0)) = (u25 + (t1 * 0.5f) * (t26 + u15));
            t27 = *(int *)0xC2757D8;
            t28 = *(int *)(((int)stk + 8));
            u29 = *(float *)((t28 + 0x4));
            t30 = nlRandom();
            *(float *)(((0x10 + ((short)((short)t27 * (short)0x1C) + 0xC274DF8)) + 0x0)) = (u29 + (t1 * 0.5f) * (t30 + u15));
            t31 = *(int *)0xC2757D8;
            t32 = *(int *)(((int)stk + 8));
            u33 = *(float *)((t32 + 0x8));
            t34 = nlRandom();
            *(float *)(((0x14 + ((short)((short)t31 * (short)0x1C) + 0xC274DF8)) + 0x0)) = (u33 + (t1 * 0.5f) * (t34 + u15));
            t35 = *(int *)0xC2757D8;
            *(unsigned int *)((((short)((short)t35 * (short)0x1C) + 0xC274DF8) + 0x18)) = 0x1E;
            t36 = *(int *)(((int)stk + 12));
            t16 = t36;
            nlSqrt(t16, (((int)stk + 8) + 0xC));
            t38 = *(int *)0xC2757D8;
            *(unsigned int *)((((((t38 << 2) << 2) << 1) + 0xC274298) + 0x0)) = 0x1;
            t39 = *(int *)0xC2757D8;
            t16 = t39;
            t16 = (t16 << 2);
            t16 = (t16 << 2);
            t16 = (t16 << 1);
            t16 = (t16 + 0xC274298);
            *(unsigned int *)(((int)stk + 16)) = t16;
            t16 = (t16 + 0x8);
            t40 = *(int *)(((((int)stk + 8) + 0xC) + 0x8));
            *(unsigned int *)(((t16 + 0xC) + 0x8)) = t40;
            t41 = *(int *)(((((int)stk + 8) + 0xC) + 0x4));
            *(unsigned int *)(((t16 + 0xC) + 0x4)) = t41;
            t42 = *(int *)(((((int)stk + 8) + 0xC) + 0x0));
            *(unsigned int *)(((t16 + 0xC) + 0x0)) = t42;
            t43 = *(int *)(((((int)stk + 8) + 0xC) + 0x8));
            *(unsigned int *)((t16 + 0x8)) = t43;
            t44 = *(int *)(((((int)stk + 8) + 0xC) + 0x4));
            *(unsigned int *)((t16 + 0x4)) = t44;
            t45 = *(int *)(((((int)stk + 8) + 0xC) + 0x0));
            *(unsigned int *)((t16 + 0x0)) = t45;
            t46 = *(int *)0xC2757D8;
            *(unsigned int *)0xC2757D8 = (t46 + 0x1);
            if ((int)(t46 + 0x1) >= (int)0x5A) {
                *(unsigned int *)0xC2757D8 = 0x0;
            }
            t17 = (t17 - 1);
        }
        t47 = nlPopMatrix(0x1);
        t48 = t47;
    }
    return t48;
}

int FUN_0c07c470(int a4, int a5, int a6, int a7)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    int t7;
    float u9;
    int t10;
    int t11;
    int t12;
    float u13;
    float u14;
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
    int t45;
    int t28;
    int t29;
    float u30;
    float u31;
    float u32;
    float u33;
    float u34;
    float u35;
    float u36;
    float u37;
    float u38;
    float u39;
    float u40;
    float u41;
    float u46;
    float u47;
    float u48;
    float u49;
    float u50;
    float u51;
    float u52;
    float u53;
    float u54;
    float u55;
    float u56;
    float u57;
    int t65;
    float u66;
    int t61;

    u0 = *(float *)((a5 + 0x0));
    u1 = *(float *)((a6 + 0x0));
    u2 = *(float *)((a5 + 0x4));
    u3 = *(float *)((a6 + 0x4));
    u4 = *(float *)0xC14A9F4;
    if ((((u2 - u3) * (u2 - u3)) + (u0 - u1) * (u0 - u1)) == 0.0f) {
        u5 = *(float *)((a5 + 0x8));
        u6 = *(float *)((a6 + 0x8));
        t7 = a6;
        if (!(u5 > u6)) {
            t7 = a5;
        }
        FUN_0c07c3f0(a4, t7, a7, (u4 * 0.5f));
        t65 = (a4 + 0x80);
        u66 = (u4 * 0.5f);
    } else {
        u9 = *(float *)0xC14A9F0;
        t10 = (int)((1.0f / u9) * (u0 - u1));
        if ((int)(int)((1.0f / u9) * (u0 - u1)) < 0) {
            t10 = (-(int)((1.0f / u9) * (u0 - u1)));
        }
        t11 = (int)((1.0f / u9) * (u2 - u3));
        if ((int)(int)((1.0f / u9) * (u2 - u3)) < 0) {
            t11 = (-(int)((1.0f / u9) * (u2 - u3)));
        }
        t12 = t11;
        if ((int)t10 < (int)t11) {
            t12 = t10;
        }
        u13 = *(float *)((a5 + 0x8));
        *(float *)((a5 + 0x8)) = (1.0f / u13);
        u14 = *(float *)((a6 + 0x8));
        *(float *)((a6 + 0x8)) = (1.0f / u14);
        if ((int)t12 <= (int)0x1) {
            FUN_0c07c1d0(a4, a5, a6, a7, ((u0 - u1) * ((1.0f / _builtin_sqrtf((((u2 - u3) * (u2 - u3)) + (u0 - u1) * (u0 - u1)))) * (u4 * 0.5f))), ((u2 - u3) * ((1.0f / _builtin_sqrtf((((u2 - u3) * (u2 - u3)) + (u0 - u1) * (u0 - u1)))) * (u4 * 0.5f))));
            t61 = a4;
        } else {
            *(float *)0xC2B7634 = ((1.0f / (float)t12) * (u0 - u1));
            *(float *)0xC2B7638 = ((1.0f / (float)t12) * (u2 - u3));
            u16 = *(float *)((a5 + 0x8));
            u17 = *(float *)((a6 + 0x8));
            *(float *)0xC2B763C = ((u16 - u17) * (1.0f / (float)t12));
            u18 = *(float *)((a6 + 0x0));
            *(float *)0xC2B7640 = u18;
            u19 = *(float *)0xC2B7640;
            u20 = *(float *)0xC2B7634;
            *(float *)0xC2B764C = (u19 + u20);
            u21 = *(float *)((a6 + 0x4));
            *(float *)0xC2B7644 = u21;
            u22 = *(float *)0xC2B7638;
            u23 = *(float *)0xC2B7644;
            *(float *)0xC2B7650 = (u23 + u22);
            u24 = *(float *)((a6 + 0x8));
            *(float *)0xC2B7648 = u24;
            u25 = *(float *)0xC2B7648;
            u26 = *(float *)0xC2B763C;
            *(float *)0xC2B7654 = (u25 + u26);
            FUN_0c07c360(a4, 0xC2B764C, 0xC2B7640, a7, ((u0 - u1) * ((1.0f / _builtin_sqrtf((((u2 - u3) * (u2 - u3)) + (u0 - u1) * (u0 - u1)))) * (u4 * 0.5f))), ((u2 - u3) * ((1.0f / _builtin_sqrtf((((u2 - u3) * (u2 - u3)) + (u0 - u1) * (u0 - u1)))) * (u4 * 0.5f))));
            t45 = (a4 + 0x80);
            if ((int)0x1 < (int)(t12 - 1)) {
                t28 = 0x1;
                t29 = (a4 + 0x80);
                do {
                    u30 = *(float *)0xC2B7634;
                    u31 = *(float *)0xC2B7640;
                    *(float *)0xC2B7640 = (u31 + u30);
                    u32 = *(float *)0xC2B764C;
                    u33 = *(float *)0xC2B7634;
                    *(float *)0xC2B764C = (u32 + u33);
                    u34 = *(float *)0xC2B7638;
                    u35 = *(float *)0xC2B7644;
                    *(float *)0xC2B7644 = (u35 + u34);
                    u36 = *(float *)0xC2B7638;
                    u37 = *(float *)0xC2B7650;
                    *(float *)0xC2B7650 = (u37 + u36);
                    u38 = *(float *)0xC2B763C;
                    u39 = *(float *)0xC2B7648;
                    *(float *)0xC2B7648 = (u39 + u38);
                    u40 = *(float *)0xC2B763C;
                    u41 = *(float *)0xC2B7654;
                    *(float *)0xC2B7654 = (u41 + u40);
                    FUN_0c07c2e0(t29, 0xC2B764C, 0xC2B7640, a7, ((u0 - u1) * ((1.0f / _builtin_sqrtf((((u2 - u3) * (u2 - u3)) + (u0 - u1) * (u0 - u1)))) * (u4 * 0.5f))), ((u2 - u3) * ((1.0f / _builtin_sqrtf((((u2 - u3) * (u2 - u3)) + (u0 - u1) * (u0 - u1)))) * (u4 * 0.5f))));
                    t28 = (t28 + 0x1);
                    t29 = (t29 + 0x80);
                } while ((int)t28 < (int)(t12 - 1));
                t45 = t29;
            }
            u46 = *(float *)0xC2B7634;
            u47 = *(float *)0xC2B7640;
            *(float *)0xC2B7640 = (u47 + u46);
            u48 = *(float *)0xC2B7634;
            u49 = *(float *)0xC2B764C;
            *(float *)0xC2B764C = (u49 + u48);
            u50 = *(float *)0xC2B7638;
            u51 = *(float *)0xC2B7644;
            *(float *)0xC2B7644 = (u51 + u50);
            u52 = *(float *)0xC2B7638;
            u53 = *(float *)0xC2B7650;
            *(float *)0xC2B7650 = (u53 + u52);
            u54 = *(float *)0xC2B763C;
            u55 = *(float *)0xC2B7648;
            *(float *)0xC2B7648 = (u55 + u54);
            u56 = *(float *)0xC2B763C;
            u57 = *(float *)0xC2B7654;
            *(float *)0xC2B7654 = (u57 + u56);
            FUN_0c07c260(t45, 0xC2B764C, 0xC2B7640, a7, ((u0 - u1) * ((1.0f / _builtin_sqrtf((((u2 - u3) * (u2 - u3)) + (u0 - u1) * (u0 - u1)))) * (u4 * 0.5f))), ((u2 - u3) * ((1.0f / _builtin_sqrtf((((u2 - u3) * (u2 - u3)) + (u0 - u1) * (u0 - u1)))) * (u4 * 0.5f))));
            t61 = t45;
        }
        t65 = (t61 + 0x80);
        u66 = ((u0 - u1) * ((1.0f / _builtin_sqrtf((((u2 - u3) * (u2 - u3)) + (u0 - u1) * (u0 - u1)))) * (u4 * 0.5f)));
    }
    return t65;
}



int FUN_0c16c1c0(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t8;
    int t9;
    int t19;
    int t23;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t129;
    int t40;
    int t122;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t70;
    int t71;
    int t72;
    int t73;
    int t74;
    int t75;
    int t76;
    int t77;
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    int t83;
    int t84;
    int t85;
    int t86;
    int t91;
    int t92;
    int t93;
    int t94;
    int t95;
    int t97;
    int t98;
    int t106;
    int t107;
    int t108;
    int t109;
    int t110;
    int t111;
    int t128;
    int t125;
    int t127;
    int t5;
    int t34;
    int t38;
    int t15;
    int t18;
    int t30;
    int t33;
    int t116;
    int stk[18] = {0};

    *(unsigned int *)0xA05F6900 = 0x8;
    t0 = *(int *)0xC2EA930;
    *(unsigned int *)0xC2EA930 = (t0 | 0x2);
    t1 = *(int *)0xC2EA9F0;
    *(unsigned int *)0xC2EA9F0 = (t1 + 0x1);
    t2 = *(int *)0xC2EA684;
    if ((t2 & 2) != 0) {
        t3 = *(int *)0xA05F810C;
        t5 = ((unsigned int)((unsigned int)(t3 & 0x400) >> 8) >> 2);
    } else {
        t4 = *(int *)0xC1786F4;
        *(unsigned int *)0xC1786F4 = ((t4 + 0x1) & 0x1);
        t5 = ((t4 + 0x1) & 0x1);
    }
    *(unsigned int *)0xC2F9200 = t5;
    t8 = *(int *)0xC2EA6A0;
    if ((t8 & 0x4) == 4) {
        t9 = *(int *)0xC2F9200;
        t19 = t9;
        t23 = 0x1;
        if (t9 != 1) {
            t10 = *(int *)0xC2EA860;
            *(unsigned int *)0xC2EA860 = (t10 - 1);
            t11 = *(int *)0xC2EA860;
            if ((int)t11 >= 0) {
                t12 = *(int *)0xC2F91A4;
                t13 = 0x1;
                if (t12 != 0) {
                    *(unsigned int *)0xC2F91A4 = 0x0;
                    t13 = 0x0;
                }
                t15 = t12;
                t18 = t13;
            } else {
                t14 = *(int *)0xC2EA864;
                *(unsigned int *)0xC2EA860 = t14;
                t15 = 0xC2EA860;
                t18 = 0x0;
            }
            t19 = t15;
            t23 = t18;
        }
        t34 = t19;
        t38 = t23;
    } else {
        t25 = *(int *)0xC2EA860;
        *(unsigned int *)0xC2EA860 = (t25 - 1);
        t26 = *(int *)0xC2EA860;
        if ((int)t26 >= 0) {
            t27 = *(int *)0xC2F91A4;
            t28 = 0x1;
            if (t27 != 0) {
                *(unsigned int *)0xC2F91A4 = 0x0;
                t28 = 0x0;
            }
            t30 = t27;
            t33 = t28;
        } else {
            t29 = *(int *)0xC2EA864;
            *(unsigned int *)0xC2EA860 = t29;
            t30 = 0xC2EA860;
            t33 = 0x0;
        }
        t34 = t30;
        t38 = t33;
    }
    t129 = 0x0;
    if (t38 == 0) {
        *(unsigned int *)(((int)stk + 36)) = 0x0;
        t40 = *(int *)0xC2EA9FC;
        t122 = 0x1;
        if (t40 == 0) {
            t41 = *(int *)0xC2EA9F8;
            if (t41 != 0) {
                t42 = *(int *)0xC2F91C0;
                *(unsigned int *)0xC2F91C0 = (t42 + 0x1);
                if ((unsigned int)(t42 + 0x1) > (unsigned int)0x10) {
                    t43 = *(int *)0xC2EA94C;
                    *(unsigned int *)0xA05F8048 = t43;
                    t44 = *(int *)0xC2EA944;
                    *(unsigned int *)0xA05F804C = t44;
                    t45 = *(int *)0xC2EA934;
                    *(unsigned int *)0xA05F8068 = t45;
                    t46 = *(int *)0xC2EA938;
                    *(unsigned int *)0xA05F806C = t46;
                    *(unsigned int *)0xC2EA888 = 0x0;
                    *(unsigned int *)0xC2F91C0 = 0x0;
                }
                t116 = 0x1;
            } else {
                *(unsigned int *)(((int)stk + 20)) = 0x0;
                *(unsigned int *)(((int)stk + 32)) = 0x0;
                *(unsigned int *)(((int)stk + 24)) = 0x0;
                *(unsigned int *)(((int)stk + 28)) = 0x0;
                t51 = t34;
                t52 = 0xC2EA9F8;
                for (;;) {
                    t53 = *(int *)(((int)stk + 20));
                    if ((int)t53 < (int)0x4) {
                        t54 = *(int *)(((int)stk + 20));
                        t51 = 0xC2EA9CC;
                        t55 = *(int *)(((t54 << 2) + t51));
                        t52 = t55;
                        if ((int)t52 >= 0) {
                            t56 = *(int *)(((t54 << 2) + t51));
                            t52 = t56;
                            if ((t52 & 0x1) == 0) {
                                t57 = *(int *)0xC2EA8A4;
                                if (t57 == 0) {
                                    t58 = *(int *)(((t54 << 2) + t51));
                                    t51 = t58;
                                    if (t51 == 4) {
                                        t51 = 0xC2EA9CC;
                                        *(unsigned int *)(((t54 << 2) + t51)) = 0x5;
                                        t59 = *(int *)0xC2EA888;
                                        t52 = t59;
                                        if (t52 != 0) {
                                            t60 = *(int *)0xC2F91B0;
                                            t52 = t60;
                                            t52 = (t52 + 0x1);
                                            *(unsigned int *)0xC2F91B0 = t52;
                                        }
                                        *(unsigned int *)0xC2EA888 = 0x0;
                                        t52 = 0x2;
                                        *(unsigned int *)0xA05F8008 = t52;
                                        *(unsigned int *)0xA05F8008 = 0x0;
                                    } else {
                                        t51 = 0xC2EA9CC;
                                        *(unsigned int *)0xC2F91A4 = 0x1;
                                        *(unsigned int *)(((int)stk + 36)) = 0x1;
                                        t61 = *(int *)(((t54 << 2) + t51));
                                        t51 = t61;
                                        if (t51 == 2) {
                                            t62 = *(int *)0xC2F91AC;
                                            *(unsigned int *)0xC2F91AC = (t62 + 0x1);
                                            t63 = *(int *)0xC2F91AC;
                                            t51 = t63;
                                            t64 = *(int *)0xC2EA8A8;
                                            t52 = t64;
                                            if ((unsigned int)t51 > (unsigned int)t52) {
                                                t65 = *(int *)0xC2F91B4;
                                                t52 = t65;
                                                t52 = (t52 + 0x1);
                                                *(unsigned int *)0xC2F91B4 = t52;
                                                t52 = 0xC155422;
                                                t66 = kmiDMAHazardReset();
                                                t51 = t66;
                                                t51 = 0xC2EA9CC;
                                                *(unsigned int *)(((t54 << 2) + t51)) = 0xFFFFFFFF;
                                                t52 = 0xC2EA88C;
                                                *(unsigned int *)((t52 + 0x0)) = 0x0;
                                                *(unsigned int *)0xC2F91AC = 0x0;
                                            }
                                        }
                                    }
                                } else {
                                    t51 = 0xC2EA9CC;
                                    *(unsigned int *)0xC2F91A4 = 0x1;
                                    *(unsigned int *)(((int)stk + 36)) = 0x1;
                                    t70 = *(int *)(((t54 << 2) + t51));
                                    t51 = t70;
                                    if (t51 == 4) {
                                        t71 = *(int *)0xC2F91A8;
                                        *(unsigned int *)0xC2F91A8 = (t71 + 0x1);
                                        t72 = *(int *)0xC2F91A8;
                                        t51 = t72;
                                        t73 = *(int *)0xC2EA8A4;
                                        t52 = t73;
                                        if ((unsigned int)t51 > (unsigned int)t52) {
                                            t74 = *(int *)0xC2F91B0;
                                            t52 = t74;
                                            t52 = (t52 + 0x1);
                                            *(unsigned int *)0xC2F91B0 = t52;
                                            t52 = 0xFFFFFFFE;
                                            t75 = *(int *)0xC2EA948;
                                            t51 = t75;
                                            t51 = (t51 & t52);
                                            *(unsigned int *)0xA05F8044 = t51;
                                            *(unsigned int *)0xA05F8008 = 0x6;
                                            *(unsigned int *)0xA05F8008 = 0x0;
                                            t76 = *(int *)0xC2EA948;
                                            *(unsigned int *)0xA05F8044 = t76;
                                            t77 = *(int *)0xC2EA6E8;
                                            t51 = t77;
                                            t51 = (~t51);
                                            t52 = 0xC2EAAE0;
                                            t51 = (t51 & 0x1);
                                            t78 = *(int *)((t52 + 0x0));
                                            t52 = 0xC15EA40;
                                            t79 = *(int *)0xC2EAADC;
                                            t80 = ((int (*)(int, int, int))(kmiCreateRegionArray))(t79, t78, 0x0);
                                            t51 = t80;
                                            t52 = 0xC2EA6E8;
                                            t81 = *(int *)((t52 + 0x0));
                                            t82 = *(int *)0xC2EAAE0;
                                            t51 = 0xC2EAADC;
                                            t83 = *(int *)((t51 + 0x0));
                                            t84 = ((int (*)(int, int, int, int, int, int, int, int))(kmiCreateRegionArray))(t83, t82, 0x0, 0x1, 0x1, ((~t81) & 0x1), 0x0, t51);
                                            t51 = t84;
                                            t51 = 0xC2EA9CC;
                                            t85 = *(int *)(((int)stk + 28));
                                            t52 = t85;
                                            *(unsigned int *)((t52 + t51)) = 0x5;
                                            t52 = 0xC2EA888;
                                            *(unsigned int *)((t52 + 0x0)) = 0x0;
                                            t86 = *(int *)0xC2F91F8;
                                            *(unsigned int *)0xC2F91F8 = (t86 + 0x1);
                                            *(unsigned int *)0xC2F91A8 = 0x0;
                                        }
                                    }
                                    t51 = 0xC2EA9CC;
                                    t91 = *(int *)(((int)stk + 24));
                                    t52 = t91;
                                    t92 = *(int *)((t52 + t51));
                                    t51 = t92;
                                    if (t51 == 2) {
                                        t51 = 0xC2EA8A8;
                                        t93 = *(int *)0xC2F91AC;
                                        t52 = t93;
                                        t52 = (t52 + 0x1);
                                        *(unsigned int *)0xC2F91AC = t52;
                                        t94 = *(int *)((t51 + 0x0));
                                        if ((unsigned int)t52 > (unsigned int)t94) {
                                            t95 = *(int *)0xC2F91B4;
                                            t52 = t95;
                                            t52 = (t52 + 0x1);
                                            *(unsigned int *)0xC2F91B4 = t52;
                                            t97 = kmiDMAHazardReset();
                                            t51 = t97;
                                            t51 = 0xC2EA9CC;
                                            t52 = 0xFFFFFFFF;
                                            t98 = *(int *)(((int)stk + 32));
                                            *(unsigned int *)((t98 + t51)) = t52;
                                            *(unsigned int *)0xC2EA88C = 0x0;
                                            *(unsigned int *)0xC2F91AC = 0x0;
                                        }
                                    }
                                }
                            }
                        }
                        t106 = *(int *)(((int)stk + 20));
                        t52 = t106;
                        t52 = (t52 + 0x1);
                        *(unsigned int *)(((int)stk + 20)) = t52;
                        t107 = *(int *)(((int)stk + 32));
                        *(unsigned int *)(((int)stk + 32)) = (t107 + 0x4);
                        t108 = *(int *)(((int)stk + 24));
                        *(unsigned int *)(((int)stk + 24)) = (t108 + 0x4);
                        t109 = *(int *)(((int)stk + 28));
                        t52 = t109;
                        t52 = (t52 + 0x4);
                        *(unsigned int *)(((int)stk + 28)) = t52;
                        continue;
                    }
                    break;
                }
                t110 = *(int *)0xC2EA888;
                t111 = *(int *)(((int)stk + 36));
                *(unsigned int *)(((int)stk + 36)) = (t111 | t110);
                t116 = (t111 | t110);
            }
            t122 = t116;
        }
        t128 = 0x0;
        if (t122 == 0) {
            FUN_0c16bb70();
            t125 = FUN_0c16bca0();
            t127 = 0x1;
            if (t125 != 0) {
                FUN_0c16bf4a();
                *(unsigned int *)0xC2EA9F4 = 0x0;
                t127 = 0x0;
            }
            t128 = t127;
        }
        t129 = t128;
    }
    return t129;
}

int trailerExec(int a4)
{
    int t1;
    int t3;
    int t4;
    int t5;
    int t8;
    int t10;
    int t12;
    float u14;
    float u15;
    int t19;
    float u20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    float u30;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    float u37;
    float u38;
    float u39;
    float u40;
    int t50;
    int t52;
    float u55;
    float u56;
    int t57;
    int t61;
    int t62;
    int t63;
    int t67;
    int t68;
    int t69;
    int t70;
    int t76;
    int t83;
    int t84;
    int t85;
    int t86;
    int t87;
    int t88;
    int t91;
    int t93;
    int t95;
    float u98;
    int t101;
    int t102;
    int t103;
    int t104;
    int t105;
    int t106;
    int t107;
    int t108;
    int t109;
    int t110;
    int t111;
    int t112;
    int t114;
    int stk[23] = {0};

    technicalCheck(a4);
    t1 = *(int *)((a4 + 0x84));
    if ((t1 & 1) == 0) {
        KillColliObj((a4 + 0x14));
        t3 = nlCloseEvent(a4);
        t4 = *(int *)0xC2A44A8;
        *(unsigned int *)0xC2A44A8 = (t4 - 1);
        t114 = t3;
    } else {
        t5 = *(int *)((a4 + 0x4));
        nlPushUnitMatrix();
        nlTranslateV((0x8C + t5));
        t8 = *(short *)((t5 + 0xA6));
        nlRotateAY((unsigned short)t8);
        t10 = *(short *)((t5 + 0xA4));
        nlRotateAX((unsigned short)t10);
        t12 = *(short *)((t5 + 0xA8));
        nlRotateAZ((unsigned short)t12);
        u14 = *(float *)((t5 + 0xFC));
        u15 = *(float *)((t5 + 0xF8));
        nlTranslate(0.0f, (u15 + u14), -32.0f);
        nlGetTranslate((((int)stk + 8) + 0x24));
        nlPopMatrix(0x1);
        t19 = *(int *)((t5 + 0x84));
        *(unsigned int *)((a4 + 0x84)) = t19;
        u20 = *(float *)((t5 + 0xC8));
        *(float *)((a4 + 0xC8)) = u20;
        t21 = *(int *)(((0x8C + a4) + 0x8));
        *(unsigned int *)(((((int)stk + 8) + 0x18) + 0x8)) = t21;
        t22 = *(int *)(((0x8C + a4) + 0x4));
        *(unsigned int *)(((((int)stk + 8) + 0x18) + 0x4)) = t22;
        t23 = *(int *)(((0x8C + a4) + 0x0));
        *(unsigned int *)(((((int)stk + 8) + 0x18) + 0x0)) = t23;
        t24 = *(int *)(((a4 + 0x14) + 0x8));
        *(unsigned int *)(((0x8C + a4) + 0x8)) = t24;
        t25 = *(int *)(((a4 + 0x14) + 0x4));
        *(unsigned int *)(((0x8C + a4) + 0x4)) = t25;
        t26 = *(int *)(((a4 + 0x14) + 0x0));
        *(unsigned int *)(((0x8C + a4) + 0x0)) = t26;
        t27 = *(int *)(((a4 + 0x20) + 0x8));
        *(unsigned int *)(((0x98 + a4) + 0x8)) = t27;
        t28 = *(int *)(((a4 + 0x20) + 0x4));
        *(unsigned int *)(((0x98 + a4) + 0x4)) = t28;
        t29 = *(int *)(((a4 + 0x20) + 0x0));
        *(unsigned int *)(((0x98 + a4) + 0x0)) = t29;
        u30 = *(float *)((a4 + 0x9C));
        *(float *)((a4 + 0x9C)) = (u30 - 0.073499985f);
        nlAddVector((0x8C + a4), (0x98 + a4));
        t32 = GetCollision2D((0x8C + a4), 30.0f);
        t33 = *(int *)((t32 + 0x1C));
        if (t33 != -1) {
            t34 = *(int *)(((t32 + 0xC) + 0x8));
            *(unsigned int *)(((0xEC + a4) + 0x8)) = t34;
            t35 = *(int *)(((t32 + 0xC) + 0x4));
            *(unsigned int *)(((0xEC + a4) + 0x4)) = t35;
            t36 = *(int *)(((t32 + 0xC) + 0x0));
            *(unsigned int *)(((0xEC + a4) + 0x0)) = t36;
            u37 = *(float *)((t32 + 0x18));
            *(float *)((a4 + 0x104)) = u37;
            u38 = *(float *)((a4 + 0x104));
            u39 = *(float *)((a4 + 0x90));
            if (u38 > u39) {
                u40 = *(float *)((a4 + 0x104));
                *(float *)((a4 + 0x90)) = u40;
                carColliReflection();
            }
        }
        nlPushUnitMatrix();
        *(float *)(((int)stk + 12)) = 0.0f;
        *(float *)(((int)stk + 8)) = 0.0f;
        *(float *)(((int)stk + 16)) = 1.0f;
        nlSubVector3op((((int)stk + 8) + 0xC), (((int)stk + 8) + 0x24), (0x8C + a4));
        nlUnitVector((((int)stk + 8) + 0xC));
        nlRotateV(((int)stk + 8), (((int)stk + 8) + 0xC));
        getYXZrot((0xA4 + a4));
        nlPushUnitMatrix();
        t50 = *(short *)((a4 + 0xA4));
        nlRotateAX((-(unsigned short)t50));
        t52 = *(short *)((a4 + 0xA6));
        nlRotateAY((-(unsigned short)t52));
        FUN_0c077210((0xEC + a4), (((int)stk + 8) + 0xC));
        u55 = *(float *)(((int)stk + 24));
        u56 = *(float *)(((int)stk + 20));
        t57 = nlArcTan2(u56, u55);
        *(unsigned short *)(((0xA8 + a4) + 0x0)) = (-t57);
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        nlSubVector3op((((int)stk + 8) + 0xC), (((int)stk + 8) + 0x24), (0x8C + a4));
        t61 = *(int *)(((((int)stk + 8) + 0xC) + 0x8));
        *(unsigned int *)((((int)stk + 8) + 0x8)) = t61;
        t62 = *(int *)(((((int)stk + 8) + 0xC) + 0x4));
        *(unsigned int *)((((int)stk + 8) + 0x4)) = t62;
        t63 = *(int *)(((((int)stk + 8) + 0xC) + 0x0));
        *(unsigned int *)((((int)stk + 8) + 0x0)) = t63;
        nlScaleUnitVector(((int)stk + 8), ((int)stk + 8), 100.0f);
        nlSubVector((((int)stk + 8) + 0xC), ((int)stk + 8));
        nlAddVector((0x8C + a4), (((int)stk + 8) + 0xC));
        t67 = *(short *)((t5 + 0xA6));
        t68 = *(short *)((a4 + 0xA6));
        t69 = convergeRot(t68, t67, 1.0f);
        if (((float)t69 < 0.0f ? -(float)t69 : (float)t69) > 12288.0f) {
            t70 = (t69 - 12288);
            if ((int)t69 < 0) {
                t70 = (t69 + 0x3000);
            }
            nlPushUnitMatrix();
            nlSubVector3op((((int)stk + 8) + 0xC), (0x8C + a4), (((int)stk + 8) + 0x24));
            nlRotateAY(t70);
            FUN_0c077210((((int)stk + 8) + 0xC), ((int)stk + 8));
            FUN_0c078a70((0x8C + a4), (((int)stk + 8) + 0x24), ((int)stk + 8));
            t76 = *(short *)((a4 + 0xA6));
            *(unsigned short *)((a4 + 0xA6)) = (t76 + t70);
            nlPopMatrix(0x1);
        }
        nlSubVector3op((0x98 + a4), (0x8C + a4), (((int)stk + 8) + 0x18));
        carResistance();
        nlScaleVector((0x98 + a4), (0x98 + a4), 0.999799967f);
        t83 = *(signed char *)(((0xA4 + a4) + 0x0));
        *(unsigned char *)(((0x108 + a4) + 0x0)) = t83;
        t84 = *(signed char *)(((0xA4 + a4) + 0x1));
        *(unsigned char *)(((0x108 + a4) + 0x1)) = t84;
        t85 = *(signed char *)(((0xA4 + a4) + 0x2));
        *(unsigned char *)(((0x108 + a4) + 0x2)) = t85;
        t86 = *(signed char *)(((0xA4 + a4) + 0x3));
        *(unsigned char *)(((0x108 + a4) + 0x3)) = t86;
        t87 = *(signed char *)(((0xA4 + a4) + 0x4));
        *(unsigned char *)(((0x108 + a4) + 0x4)) = t87;
        t88 = *(signed char *)(((0xA4 + a4) + 0x5));
        *(unsigned char *)(((0x108 + a4) + 0x5)) = t88;
        getNearLinkedLine(0x2, 0x0, (0x80 + a4), (0xD4 + a4));
        nlPushUnitMatrix();
        t91 = *(short *)((a4 + 0xA8));
        nlRotateAZ((-(unsigned short)t91));
        t93 = *(short *)((a4 + 0xA4));
        nlRotateAX((-(unsigned short)t93));
        t95 = *(short *)((a4 + 0xA6));
        nlRotateAY((-(unsigned short)t95));
        FUN_0c077210((0x98 + a4), (((int)stk + 8) + 0xC));
        u98 = *(float *)(((int)stk + 28));
        *(float *)((a4 + 0xCC)) = u98;
        nlPopMatrix(0x1);
        carEntry(a4);
        t101 = *(int *)(((0x8C + a4) + 0x8));
        *(unsigned int *)(((a4 + 0x14) + 0x8)) = t101;
        t102 = *(int *)(((0x8C + a4) + 0x4));
        *(unsigned int *)(((a4 + 0x14) + 0x4)) = t102;
        t103 = *(int *)(((0x8C + a4) + 0x0));
        *(unsigned int *)(((a4 + 0x14) + 0x0)) = t103;
        t104 = *(int *)(((0x98 + a4) + 0x8));
        *(unsigned int *)(((a4 + 0x20) + 0x8)) = t104;
        t105 = *(int *)(((0x98 + a4) + 0x4));
        *(unsigned int *)(((a4 + 0x20) + 0x4)) = t105;
        t106 = *(int *)(((0x98 + a4) + 0x0));
        *(unsigned int *)(((a4 + 0x20) + 0x0)) = t106;
        t107 = *(int *)0xC0A4790;
        *(unsigned int *)(((a4 + 0x5C) + 0x8)) = t107;
        t108 = *(int *)0xC0A478C;
        *(unsigned int *)(((a4 + 0x5C) + 0x4)) = t108;
        t109 = *(int *)0xC0A4788;
        *(unsigned int *)(((a4 + 0x5C) + 0x0)) = t109;
        t110 = *(short *)((a4 + 0xA8));
        t111 = *(short *)((a4 + 0xA6));
        t112 = *(short *)((a4 + 0xA4));
        GetRotVec4Ang((a4 + 0x44), (unsigned short)t112, (unsigned short)t111);
        *(unsigned int *)((a4 + 0x68)) = 0x0;
        t114 = 0x68;
    }
    return t114;
}

int BigOneSwimMove(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    float u10;
    float t11;
    float u12;
    float t13;
    float u14;
    float u15;
    float t16;
    float u17;
    float t18;
    int t19;
    int t21;
    int t23;
    int t25;
    int t26;
    int t27;
    float u31;
    float t32;
    float u33;
    float t34;
    float u35;
    float t36;
    float u38;
    float u39;
    float u40;
    int t41;
    int t42;
    float u43;
    float u44;
    int t45;
    int t46;
    int t47;
    int t49;
    int t52;
    int t53;
    int t54;
    int t57;
    int t58;
    int t60;
    int t62;
    float u65;
    float t66;
    float u67;
    float t68;
    float u69;
    float t70;
    float u72;
    float u73;
    float u74;
    int t75;
    int t76;
    float u77;
    float u78;
    int t79;
    int t80;
    int t81;
    int t83;
    int t86;
    int t87;
    int t88;
    int t91;
    int t92;
    int t94;
    int t96;
    float u98;
    float t99;
    float u100;
    float t101;
    float u102;
    float t103;
    float u105;
    float u106;
    float u107;
    int t108;
    int t109;
    int t110;
    float u111;
    float u112;
    int t113;
    int t114;
    int t115;
    int t116;
    int t118;
    int t121;
    int t122;
    int t123;
    int t126;
    int t127;
    int t129;
    int t131;
    float u133;
    float u134;
    float u135;
    float u136;
    float t137;
    int t138;
    int stk[29] = {0};

    t0 = *(int *)0xC0D61E0;
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0x20)) = t0;
    t1 = *(int *)0xC0D61DC;
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0x1C)) = t1;
    t2 = *(int *)0xC0D61D8;
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0x18)) = t2;
    t3 = *(int *)0xC0D61D4;
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0x14)) = t3;
    t4 = *(int *)0xC0D61D0;
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0x10)) = t4;
    t5 = *(int *)0xC0D61CC;
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0xC)) = t5;
    t6 = *(int *)0xC0D61C8;
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0x8)) = t6;
    t7 = *(int *)0xC0D61C4;
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0x4)) = t7;
    t8 = *(int *)0xC0D61C0;
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0x0)) = t8;
    t9 = *(int *)0xC2AEC3C;
    if (t9 != 0) {
        *(unsigned int *)0xC2AEC3C = 0x0;
        t138 = t9;
    } else {
        u10 = *(float *)0xC2AEC58;
        t11 = BigOneKeyValue(0xC13F5B8, 0x2, u10);
        *(float *)0xC2AEC40 = t11;
        u12 = *(float *)0xC2AEC58;
        t13 = BigOneKeyValue(0xC13F578, 0x4, u12);
        *(float *)0xC2AEC44 = t13;
        u14 = *(float *)0xC2AEC40;
        *(float *)0xC2AEC48 = u14;
        u15 = *(float *)0xC2AEC58;
        t16 = BigOneKeyValue(0xC13F518, 0x4, u15);
        *(unsigned int *)(((int)stk + 4)) = ((int)(((t16 * 65536.0f) / 360.0f) + 0.5f) & 0xFFFF);
        u17 = *(float *)0xC2AEC58;
        t18 = BigOneKeyValue(0xC13F558, 0x2, u17);
        *(unsigned int *)(((int)stk + 8)) = ((int)(((t18 * 65536.0f) / 360.0f) + 0.5f) & 0xFFFF);
        t19 = *(int *)(((int)stk + 4));
        BigOneHomeAngle(t19, 0xC2AEC4C, 0.0749999955f);
        t21 = *(int *)(((int)stk + 8));
        BigOneHomeAngle(t21, 0xC2AEC50, 0.0749999955f);
        t23 = *(int *)0xC2AEC50;
        *(unsigned int *)0xC2AEC54 = t23;
        nlPushUnitMatrix();
        t25 = *(int *)0xC2AEC50;
        t26 = *(int *)0xC2AEC54;
        t27 = *(int *)0xC2AEC4C;
        BigOneRotate(t27, t25, t26);
        nlPushMatrix(0x0);
        nlSqrt((((int)stk + 4) + 0x38), (((int)stk + 4) + 0x14));
        u31 = *(float *)0xC2AEC58;
        t32 = BigOneKeyValue(0xC13F5D8, 0x2, u31);
        *(float *)(((int)stk + 12)) = t32;
        u33 = *(float *)0xC2AEC58;
        t34 = BigOneKeyValue(0xC13F5F8, 0x6, u33);
        *(float *)(((int)stk + 16)) = t34;
        u35 = *(float *)0xC2AEC58;
        t36 = BigOneKeyValue(0xC13F658, 0x5, u35);
        *(float *)(((int)stk + 20)) = t36;
        nlSubVector((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x14));
        u38 = *(float *)(((int)stk + 12));
        u39 = *(float *)(((int)stk + 20));
        u40 = *(float *)(((int)stk + 16));
        t41 = nlArcTan2(u40, _builtin_sqrtf(((u39 * u39) + u38 * u38)));
        t42 = *(int *)0xC2AEC4C;
        *(unsigned int *)(((int)stk + 4)) = (t41 - t42);
        u43 = *(float *)(((int)stk + 20));
        u44 = *(float *)(((int)stk + 12));
        t45 = nlArcTan2(u44, u43);
        t46 = *(int *)0xC2AEC50;
        *(unsigned int *)(((int)stk + 8)) = ((t45 - t46) - t46);
        t47 = *(int *)(((int)stk + 4));
        BigOneHomeAngle(t47, 0xC2AEC60, 0.0749999955f);
        t49 = *(int *)(((int)stk + 8));
        BigOneHomeAngle(t49, 0xC2AEC64, 0.0749999955f);
        nlTranslateV((((int)stk + 4) + 0x38));
        t52 = *(int *)0xC2AEC68;
        t53 = *(int *)0xC2AEC64;
        t54 = *(int *)0xC2AEC60;
        BigOneRotate(t54, t53, t52);
        FUN_0c0789c0((((int)stk + 4) + 0x38));
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        t57 = 0xC140EB8;
        do {
            t58 = *(int *)((t57 + 0x18));
            nlSqrt(t57, ((t58 << 2) + 0xC13F898));
            t60 = *(int *)((((t58 << 2) + 0xC13F898) + 0x0));
            *(unsigned int *)((((t58 << 2) + 0xC13F898) + 0x0)) = (t60 | 0x1);
            FUN_0c077210((t57 + 0xC), (((t58 << 2) + 0xC13F898) + 0xC));
            t62 = *(int *)(((int)stk + 4));
            t57 = (t57 + 0x1C);
            *(unsigned int *)(((int)stk + 4)) = (t62 + 0x1);
        } while ((unsigned int)(t62 + 0x1) < (unsigned int)0x2D);
        nlGetPushedMatrix(0x0);
        nlSqrt((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
        u65 = *(float *)0xC2AEC58;
        t66 = BigOneKeyValue(0xC13F6A8, 0x2, u65);
        *(float *)(((int)stk + 12)) = t66;
        u67 = *(float *)0xC2AEC58;
        t68 = BigOneKeyValue(0xC13F6C8, 0x6, u67);
        *(float *)(((int)stk + 16)) = t68;
        u69 = *(float *)0xC2AEC58;
        t70 = BigOneKeyValue(0xC13F728, 0x6, u69);
        *(float *)(((int)stk + 20)) = t70;
        nlSubVector((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x14));
        u72 = *(float *)(((int)stk + 12));
        u73 = *(float *)(((int)stk + 20));
        u74 = *(float *)(((int)stk + 16));
        t75 = nlArcTan2(u74, _builtin_sqrtf(((u73 * u73) + u72 * u72)));
        t76 = *(int *)0xC2AEC4C;
        *(unsigned int *)(((int)stk + 4)) = (t75 - t76);
        u77 = *(float *)(((int)stk + 20));
        u78 = *(float *)(((int)stk + 12));
        t79 = nlArcTan2(u78, (-u77));
        t80 = *(int *)0xC2AEC50;
        *(unsigned int *)(((int)stk + 8)) = (t79 - t80);
        t81 = *(int *)(((int)stk + 4));
        BigOneHomeAngle(t81, 0xC2AEC6C, 0.0749999955f);
        t83 = *(int *)(((int)stk + 8));
        BigOneHomeAngle(t83, 0xC2AEC70, 0.0749999955f);
        nlTranslateV((((int)stk + 4) + 0x20));
        t86 = *(int *)0xC2AEC74;
        t87 = *(int *)0xC2AEC70;
        t88 = *(int *)0xC2AEC6C;
        BigOneRotate(t88, t87, t86);
        FUN_0c0789c0((((int)stk + 4) + 0x20));
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        t91 = 0xC1413A4;
        do {
            t92 = *(int *)((t91 + 0x18));
            nlSqrt(t91, ((t92 << 2) + 0xC13F898));
            t94 = *(int *)((((t92 << 2) + 0xC13F898) + 0x0));
            *(unsigned int *)((((t92 << 2) + 0xC13F898) + 0x0)) = (t94 | 0x1);
            FUN_0c077210((t91 + 0xC), (((t92 << 2) + 0xC13F898) + 0xC));
            t96 = *(int *)(((int)stk + 4));
            t91 = (t91 + 0x1C);
            *(unsigned int *)(((int)stk + 4)) = (t96 + 0x1);
        } while ((unsigned int)(t96 + 0x1) < (unsigned int)0x10);
        nlSqrt((((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x14));
        u98 = *(float *)0xC2AEC58;
        t99 = BigOneKeyValue(0xC13F788, 0x2, u98);
        *(float *)(((int)stk + 12)) = t99;
        u100 = *(float *)0xC2AEC58;
        t101 = BigOneKeyValue(0xC13F7A8, 0x8, u100);
        *(float *)(((int)stk + 16)) = t101;
        u102 = *(float *)0xC2AEC58;
        t103 = BigOneKeyValue(0xC13F828, 0x7, u102);
        *(float *)(((int)stk + 20)) = t103;
        nlSubVector((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x14));
        u105 = *(float *)(((int)stk + 12));
        u106 = *(float *)(((int)stk + 20));
        u107 = *(float *)(((int)stk + 16));
        t108 = nlArcTan2(u107, _builtin_sqrtf(((u106 * u106) + u105 * u105)));
        t109 = *(int *)0xC2AEC4C;
        t110 = *(int *)0xC2AEC6C;
        *(unsigned int *)(((int)stk + 4)) = ((t108 - t109) - t110);
        u111 = *(float *)(((int)stk + 20));
        u112 = *(float *)(((int)stk + 12));
        t113 = nlArcTan2(u112, (-u111));
        t114 = *(int *)0xC2AEC50;
        t115 = *(int *)0xC2AEC70;
        *(unsigned int *)(((int)stk + 8)) = ((t113 - t114) - t115);
        t116 = *(int *)(((int)stk + 4));
        BigOneHomeAngle(t116, 0xC2AEC78, 0.0749999955f);
        t118 = *(int *)(((int)stk + 8));
        BigOneHomeAngle(t118, 0xC2AEC7C, 0.0749999955f);
        nlTranslateV((((int)stk + 4) + 0x2C));
        t121 = *(int *)0xC2AEC80;
        t122 = *(int *)0xC2AEC7C;
        t123 = *(int *)0xC2AEC78;
        BigOneRotate(t123, t122, t121);
        FUN_0c0789c0((((int)stk + 4) + 0x2C));
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        t126 = 0xC141564;
        do {
            t127 = *(int *)((t126 + 0x18));
            nlSqrt(t126, ((t127 << 2) + 0xC13F898));
            t129 = *(int *)((((t127 << 2) + 0xC13F898) + 0x0));
            *(unsigned int *)((((t127 << 2) + 0xC13F898) + 0x0)) = (t129 | 0x1);
            FUN_0c077210((t126 + 0xC), (((t127 << 2) + 0xC13F898) + 0xC));
            t131 = *(int *)(((int)stk + 4));
            t126 = (t126 + 0x1C);
            *(unsigned int *)(((int)stk + 4)) = (t131 + 0x1);
        } while ((unsigned int)(t131 + 0x1) < (unsigned int)0x19);
        nlPopMatrix(0x2);
        u133 = *(float *)0xC2AEC5C;
        u134 = *(float *)0xC2AEC58;
        *(float *)0xC2AEC58 = (u134 + u133);
        u135 = *(float *)0xC0738E8;
        u136 = *(float *)0xC2AEC58;
        t137 = nlFloor((u136 / u135));
        *(float *)0xC2AEC58 = (u136 - (t137 * u135));
        t138 = 0x38;
    }
    return t138;
}

int trafficSectionControl(int a4, int a5, int a6, float f4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t15;
    int t16;
    int t18;
    int t21;
    int t28;
    int t37;
    int t36;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    float t56;
    int t57;
    int t61;
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
    int t78;
    int t79;
    int t80;
    int t81;
    int t83;
    int t84;
    int t85;
    int t86;
    int t87;
    int t89;
    int t108;
    int t109;
    int t110;
    int t103;
    int t104;
    int t105;
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
    int t111;
    int t112;
    int t113;
    int t115;
    int t116;
    int t117;
    int t118;
    int t119;
    int t120;
    int t121;
    int t122;
    int t125;
    int t126;
    int t127;
    int t128;
    int t129;
    int t131;
    int t132;
    int t133;
    int t134;
    int t135;
    int t136;
    int t137;
    int t141;
    int t142;
    int t143;
    int t144;
    int t145;
    int t147;
    int t148;
    int t149;
    int t150;
    int t151;
    int t152;
    int t153;
    int t5;
    int t6;
    int t155;
    int stk[23] = {0};

    *(unsigned int *)(((int)stk + 20)) = a5;
    t0 = *(int *)0xC1EE210;
    t1 = *(int *)0xC1EE214;
    t2 = *(int *)(((((((t0 + t1) << 1) + (t0 + t1)) << 2) + 0xC0C3D4C) + 0x0));
    if (t2 == 1) {
        t3 = *(int *)(((((((t0 + t1) << 1) + (t0 + t1)) << 2) + 0xC0C3D4C) + 0x4));
        *(unsigned int *)(((int)stk + 28)) = t3;
        t4 = *(int *)(((((((t0 + t1) << 1) + (t0 + t1)) << 2) + 0xC0C3D4C) + 0x8));
        t5 = (t3 + t4);
        t6 = t4;
    } else {
        *(unsigned int *)(((int)stk + 28)) = 0x0;
        t5 = 0x0;
        t6 = 0x0;
    }
    *(unsigned int *)(((int)stk + 32)) = t5;
    if (a4 == 0) {
        t7 = *(int *)(((int)stk + 28));
        t8 = t6;
        t9 = a4;
        t10 = t7;
        t11 = a6;
        for (;;) {
            t12 = *(int *)(((int)stk + 32));
            if ((int)t10 >= (int)t12) break;
            t8 = 0xC2A1B78;
            t11 = t10;
            t11 = (t11 << 1);
            *(unsigned int *)((t8 + 0x0)) = 0x0;
            t11 = (t11 + t10);
            t11 = (t11 << 2);
            t11 = (short)t11;
            t11 = (t11 + 0xC2A1B7C);
            t9 = 0x3;
            t13 = t10;
            while (t9 != 0) {
                t13 = 0x0;
                *(unsigned int *)((t11 + 0x0)) = t13;
                t9 = (t9 - 1);
                t11 = (t11 + 0x4);
            }
            t10 = (t10 + 0x1);
        }
        setTechnicalBonus(0xFFFFFFFF, 0x0, t11);
        t15 = *(int *)0xC1EE210;
        t16 = *(int *)0xC1EE214;
        if ((t15 + t16) != 0) {
            if ((t15 + t16) == 17) {
                t18 = 0x0;
                while ((int)t18 < (int)0x22) {
                    signalInit(0x0, t18);
                    t18 = (t18 + 0x1);
                }
            } else {
                if ((t15 + t16) == 1) {
                    t21 = 0x0;
                    while ((int)t21 < (int)0x2C) {
                        signalInit(0x1, t21);
                        t21 = (t21 + 0x1);
                    }
                }
            }
        } else {
            t28 = 0x0;
            while ((int)t28 < (int)0x22) {
                signalInit(0x0, t28);
                t28 = (t28 + 0x1);
            }
        }
        if ((t15 + t16) != 0) {
            if ((t15 + t16) == 17) {
                CableControlInit(0x0);
            }
        } else {
            CableControlInit(0x0);
        }
        t37 = (t15 + t16);
        if ((t15 + t16) == 1) {
            t36 = trainControlInit();
            t37 = t36;
        }
        t155 = t37;
    } else {
        t38 = *(int *)0xC2A1B78;
        *(unsigned int *)0xC2A1B78 = (t38 + 0x1);
        *(unsigned int *)0xC2A1B78 = ((t38 + 0x1) & 0x1);
        t39 = *(int *)(((int)stk + 28));
        t40 = t39;
        t41 = (((((t0 + t1) << 1) + (t0 + t1)) << 2) + 0xC0C3D4C);
        for (;;) {
            t42 = *(int *)(((int)stk + 32));
            if ((int)t40 >= (int)t42) break;
            t43 = *(short *)0xC2A1B78;
            t44 = (short)(((t40 << 1) + t40) << 2);
            t45 = 0x3;
            t46 = (((short)((short)t43 * (short)0xF60) + 0xC2A1B7C) + (short)(((t40 << 1) + t40) << 2));
            while (t45 != 0) {
                t44 = 0x0;
                *(unsigned int *)((t46 + 0x0)) = t44;
                t45 = (t45 - 1);
                t46 = (t46 + 0x4);
            }
            t47 = *(int *)0xC2A6690;
            t48 = *(short *)0xC2A1B78;
            t49 = *(int *)((((((t40 << 1) + t40) << 2) + t47) + 0x0));
            t50 = *(int *)((((((t40 << 1) + t40) << 2) + t47) + 0x4));
            t51 = *(int *)((t50 + 0x0));
            t41 = 0x0;
            if ((int)t41 < (int)0x3) {
                t52 = (0x0 + (((short)((short)t48 * (short)0xF60) + 0xC2A1B7C) + (short)(((t40 << 1) + t40) << 2)));
                t53 = 0x0;
                t54 = 0x0;
                for (;;) {
                    t55 = *(int *)(((int)stk + 20));
                    t56 = nlLength(t55, ((((t53 << 1) + t53) << 2) + t49));
                    t53 = (t53 + 0xF);
                    if (f4 > t56) {
                        t57 = *(int *)((t52 + 0x0));
                        *(unsigned int *)((t52 + 0x0)) = (t57 | (((int)t54 >= 0) ? (0x1 << (t54 & 31)) : ((-(int)t54 & 31) ? ((int)0x1 >> (-(int)t54 & 31)) : ((int)0x1 >> 31))));
                    }
                    if ((int)t53 < (int)t51) {
                        t54 = (t54 + 0x1);
                        if ((int)t54 >= (int)0x20) {
                            t52 = (t52 + 0x4);
                            t41 = (t41 + 0x1);
                            t54 = 0x0;
                        }
                        if ((int)t41 >= (int)0x3) break;
                        continue;
                    }
                    break;
                }
            }
            t40 = (t40 + 0x1);
        }
        t61 = *(int *)(((int)stk + 28));
        t62 = ((t38 + 0x1) & 0x1);
        t63 = t40;
        t64 = t61;
        t65 = t41;
        for (;;) {
            t66 = *(int *)(((int)stk + 32));
            if ((int)t64 < (int)t66) {
                t67 = *(int *)0xC2A6690;
                t68 = *(int *)((((((t64 << 1) + t64) << 2) + t67) + 0x8));
                t62 = t68;
                t69 = *(int *)((((((t64 << 1) + t64) << 2) + t67) + 0x4));
                t70 = *(int *)((t62 + 0x0));
                t62 = t70;
                t71 = *(int *)((((((t64 << 1) + t64) << 2) + t67) + 0x0));
                t62 = ((int)t62 >> 8);
                t72 = *(int *)((t69 + 0x0));
                t62 = (t62 & 0xF);
                t62 = (t62 << 2);
                t73 = *(int *)((0xC0C3F20 + t62));
                *(unsigned int *)(((int)stk + 20)) = t73;
                if ((int)t73 > (int)0x8) {
                    t74 = *(int *)0xC2A1B6C;
                    if ((int)(t73 - t74) < (int)0x8) {
                        t62 = 0x8;
                    } else {
                        t62 = (t73 - t74);
                    }
                    *(unsigned int *)(((int)stk + 20)) = t62;
                }
                t62 = 0xC2A6690;
                t78 = *(int *)((t62 + 0x0));
                t79 = *(int *)((((((t64 << 1) + t64) << 2) + t78) + 0x8));
                t80 = *(int *)((t79 + 0x0));
                if ((t80 & 0x1000) != 0) {
                    t81 = *(int *)(((int)stk + 20));
                    *(unsigned int *)(((int)stk + 20)) = (t81 << 1);
                }
                t83 = *(short *)0xC2A1B78;
                t63 = 0x0;
                *(unsigned int *)(((int)stk + 36)) = (0xC2A1B7C + (short)((short)t83 * (short)0xF60));
                *(unsigned int *)(((int)stk + 40)) = (((t64 << 1) + t64) << 2);
                t84 = *(int *)(((int)stk + 36));
                *(unsigned int *)(((int)stk + 48)) = ((((t64 << 1) + t64) << 2) + t84);
                t62 = t64;
                *(unsigned int *)(((int)stk + 44)) = (short)(((t64 << 1) + t62) << 2);
                t85 = 0x0;
                t86 = 0x0;
                for (;;) {
                    if ((int)t63 < (int)0x3) {
                        t87 = *(int *)(((int)stk + 48));
                        t62 = t87;
                        t89 = *(int *)(((t63 << 2) + t62));
                        if ((t89 & (((int)t85 >= 0) ? (0x1 << (t85 & 31)) : ((-(int)t85 & 31) ? ((int)0x1 >> (-(int)t85 & 31)) : ((int)0x1 >> 31)))) != 0) {
                            t108 = t64;
                            t109 = t63;
                            t110 = (t85 - 1);
                            if (t85 == 0) {
                                t103 = t64;
                                t104 = (t63 - 1);
                                t105 = 0x1F;
                                if (t63 == 0) {
                                    t90 = *(int *)(((int)stk + 40));
                                    t91 = *(int *)0xC2A6690;
                                    t92 = *(int *)0xC2A6690;
                                    t93 = *(int *)(((t90 + t91) + 0x8));
                                    t94 = *(short *)((t93 + 0x8));
                                    t62 = t94;
                                    t65 = (unsigned short)t62;
                                    t65 = (t65 << 1);
                                    t65 = (t65 + (unsigned short)t62);
                                    t65 = (t65 << 2);
                                    t65 = (t65 + t92);
                                    t95 = *(int *)((t65 + 0x4));
                                    t65 = t95;
                                    t96 = *(int *)((t65 + 0x0));
                                    t65 = t96;
                                    t97 = (unsigned short)t62;
                                    t62 = 0xF;
                                    t98 = (int)((int)t65 / (int)t62);
                                    t62 = t98;
                                    t62 = ((int)t62 >> 5);
                                    t99 = t62;
                                    t62 = 0xF;
                                    t100 = (int)((int)(t65 - 1) / (int)t62);
                                    t62 = t100;
                                    t103 = t97;
                                    t104 = t99;
                                    t105 = (t62 & 0x1F);
                                }
                                t108 = t103;
                                t109 = t104;
                                t110 = t105;
                            }
                            t111 = *(int *)(((int)stk + 36));
                            t65 = 0x1;
                            *(unsigned int *)(((int)stk + 28)) = ((((t108 << 1) + t108) << 2) + t111);
                            t112 = *(short *)0xC2A1B78;
                            t62 = t112;
                            t113 = *(int *)(((int)stk + 44));
                            t62 = (t62 + 0x1);
                            t62 = (t62 & 0x1);
                            t62 = ((short)t62 * (short)0xF60);
                            t62 = (short)t62;
                            t62 = (t62 + 0xC2A1B7C);
                            t62 = (t62 + t113);
                            t115 = *(int *)(((t63 << 2) + t62));
                            t65 = (((int)t110 >= 0) ? (t65 << (t110 & 31)) : ((-(int)t110 & 31) ? ((int)t65 >> (-(int)t110 & 31)) : ((int)t65 >> 31)));
                            if ((t115 & (((int)t85 >= 0) ? (0x1 << (t85 & 31)) : ((-(int)t85 & 31) ? ((int)0x1 >> (-(int)t85 & 31)) : ((int)0x1 >> 31)))) != 0) {
                                t116 = *(int *)(((int)stk + 28));
                                t62 = t116;
                                t117 = *(int *)(((t109 << 2) + t62));
                                if ((t117 & t65) == 0) {
                                    t118 = *(int *)(((int)stk + 20));
                                    t62 = t118;
                                    *(unsigned int *)(((int)stk + 16)) = t62;
                                    *(unsigned int *)(((int)stk + 24)) = 0x0;
                                    t119 = *(int *)(((int)stk + 20));
                                    t120 = ((int (*)(int, int, int, int, int, int, int, float))(pcarSpawn))(0x2, t64, t86, t119, (((int)stk + 8) + 0x8), 0x0, (((int)stk + 16) + 0x8), f4);
                                    t62 = t120;
                                }
                            } else {
                                t121 = *(int *)(((int)stk + 28));
                                t62 = t121;
                                t122 = *(int *)(((t109 << 2) + t62));
                                if ((t122 & t65) == 0) {
                                    t65 = 0xE;
                                    if ((int)(t86 + 0xE) >= (int)t72) {
                                        t65 = (t65 - (((t65 - t72) + t86) + 0x1));
                                    }
                                    t125 = extRand();
                                    t62 = t125;
                                    if ((t62 & 15) != 0) {
                                        t126 = *(int *)(((int)stk + 20));
                                        *(unsigned int *)(((int)stk + 16)) = t126;
                                        *(unsigned int *)(((int)stk + 24)) = 0x0;
                                    } else {
                                        *(unsigned int *)(((int)stk + 16)) = 0x3;
                                        t127 = extRand();
                                        t62 = t127;
                                        t128 = t62;
                                        t62 = 0x3;
                                        t129 = (int)((int)t128 % (int)t62);
                                        t62 = t129;
                                        *(unsigned int *)(((int)stk + 24)) = t62;
                                    }
                                    t131 = extRand();
                                    t62 = t131;
                                    t62 = (t62 & 0x1);
                                    *(unsigned int *)(((int)stk + 28)) = t62;
                                    while ((int)t65 >= 0) {
                                        t132 = *(int *)(((int)stk + 16));
                                        if ((int)(t65 + t86) < (int)(t72 - t132)) {
                                            t133 = *(int *)(((int)stk + 28));
                                            t134 = *(int *)(((int)stk + 20));
                                            t135 = ((int (*)(int, int, int, int))(pcarSpawn))(0x1, t64, (t65 + t86), t134);
                                            t62 = t135;
                                            if (t62 != 0) {
                                                t136 = *(int *)(((int)stk + 16));
                                                t65 = (t65 - t136);
                                            }
                                        } else {
                                            t137 = *(int *)(((int)stk + 16));
                                            t65 = (t65 - t137);
                                        }
                                        t65 = (t65 - 1);
                                    }
                                } else {
                                    t65 = 0xE;
                                    if ((int)(t86 - 14) <= 0) {
                                        t65 = (t65 - ((t65 - t86) + 0x1));
                                    }
                                    t141 = extRand();
                                    t62 = t141;
                                    if ((t62 & 15) != 0) {
                                        t142 = *(int *)(((int)stk + 20));
                                        *(unsigned int *)(((int)stk + 16)) = t142;
                                        *(unsigned int *)(((int)stk + 24)) = 0x0;
                                    } else {
                                        *(unsigned int *)(((int)stk + 16)) = 0x3;
                                        t143 = extRand();
                                        t62 = t143;
                                        t144 = t62;
                                        t62 = 0x3;
                                        t145 = (int)((int)t144 % (int)t62);
                                        t62 = t145;
                                        *(unsigned int *)(((int)stk + 24)) = t62;
                                    }
                                    t147 = extRand();
                                    t62 = t147;
                                    t62 = (t62 & 0x1);
                                    *(unsigned int *)(((int)stk + 28)) = t62;
                                    while ((int)t65 >= 0) {
                                        t148 = *(int *)(((int)stk + 16));
                                        if ((int)(t86 - t65) < (int)(t72 - t148)) {
                                            t149 = *(int *)(((int)stk + 28));
                                            t150 = *(int *)(((int)stk + 20));
                                            t151 = ((int (*)(int, int, int, int))(pcarSpawn))(0x0, t64, (t86 - t65), t150);
                                            t62 = t151;
                                            if (t62 != 0) {
                                                t152 = *(int *)(((int)stk + 16));
                                                t65 = (t65 - t152);
                                            }
                                        } else {
                                            t153 = *(int *)(((int)stk + 16));
                                            t65 = (t65 - t153);
                                        }
                                        t65 = (t65 - 1);
                                    }
                                }
                            }
                        }
                        t86 = (t86 + 0xF);
                        if ((int)t86 < (int)t72) {
                            t85 = (t85 + 0x1);
                            if ((int)t85 >= (int)0x20) {
                                t63 = (t63 + 0x1);
                                t85 = 0x0;
                            }
                            continue;
                        }
                        break;
                    }
                    break;
                }
                t64 = (t64 + 0x1);
                continue;
            }
            break;
        }
        t155 = t62;
    }
    return t155;
}

int humanDraw(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    float u7;
    int t13;
    int t14;
    int t52;
    int t53;
    int t113;
    int t119;
    int t120;
    int t143;
    int t144;
    int t155;
    int t156;
    int t159;
    int t169;
    int t170;
    int t193;
    int t194;
    int t199;
    int t200;
    int t203;
    int t209;
    int t210;
    int t247;
    int t253;
    int t254;
    int t267;
    int t268;
    int t273;
    int t274;
    int t280;
    int t281;
    int t295;
    int t296;
    int t301;
    int t302;
    int t305;

    t0 = *(int *)(((a5 << 2) + 0xC1331B0));
    t1 = *(int *)((a4 + 0x0));
    t2 = (int)((unsigned int)a6 % (unsigned int)(t1 - 1));
    t3 = *(int *)((a4 + 0x4));
    t4 = *(int *)((a4 + 0x8));
    nlPushMatrix(0x0);
    if (a7 == 0) {
        nlTranslateV(((((((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1)) << 1) + ((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1))) << 2) + t4));
    } else {
        u7 = *(float *)((((((((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1)) << 1) + ((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1))) << 2) + t4) + 0x4));
        nlTranslate(0.0f, u7, 0.0f);
    }
    vsklRotate((((((((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1)) << 1) + ((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1))) << 2) + t4) + 0xC));
    nlPushMatrix(0x0);
    vsklRotate((0xC0 + (((((((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1)) << 1) + ((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1))) << 2) + t4) + 0xC)));
    t13 = *(int *)(((t0 + 0x20) + 0x0));
    if (t13 != 0) {
        t14 = *(int *)(((t0 + 0x20) + 0x0));
        nlObjPutUseViewMatrix(t14);
    }
    if (a5 != 1) {
        if (a5 != 3) {
            if (a5 != 12) {
                if (a5 != 17) {
                    if (a5 != 18) {
                        if (a5 != 19) {
                            if (a5 != 20) {
                                if (a5 != 21) {
                                    if (a5 != 23) {
                                        if (a5 != 29) {
                                            if (a5 != 34) {
                                                if (a5 != 37) {
                                                    if (a5 != 53) {
                                                        if (a5 != 54) {
                                                            if (a5 != 59) {
                                                                if (a5 == 61) {
                                                                    nlObjPutUseViewMatrix(0xC49AFA8);
                                                                }
                                                            } else {
                                                                nlObjPutUseViewMatrix(0xC56E778);
                                                            }
                                                        } else {
                                                            nlObjPutUseViewMatrix(0xC4D35A8);
                                                        }
                                                    } else {
                                                        nlObjPutUseViewMatrix(0xC55C470);
                                                    }
                                                } else {
                                                    nlObjPutUseViewMatrix(0xC5027E8);
                                                }
                                            } else {
                                                nlObjPutUseViewMatrix(0xC4EE460);
                                            }
                                        } else {
                                            nlObjPutUseViewMatrix(0xC4D35A8);
                                        }
                                    } else {
                                        nlObjPutUseViewMatrix(0xC4B15B8);
                                    }
                                } else {
                                    nlObjPutUseViewMatrix(0xC4AAA40);
                                }
                            } else {
                                nlObjPutUseViewMatrix(0xC4A87C8);
                            }
                        } else {
                            nlObjPutUseViewMatrix(0xC4A68B0);
                        }
                    } else {
                        nlObjPutUseViewMatrix(0xC4A49E0);
                    }
                } else {
                    nlObjPutUseViewMatrix(0xC4A2C40);
                }
            } else {
                nlObjPutUseViewMatrix(0xC5A0878);
            }
        } else {
            nlObjPutUseViewMatrix(0xC495C20);
        }
    } else {
        nlObjPutUseViewMatrix(0xC567178);
    }
    nlPushMatrix(0x0);
    nlTranslateV(0xC0D5430);
    vsklRotate(((((((((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1)) << 1) + ((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1))) << 2) + t4) + 0xC) + 0x18));
    t52 = *(int *)(((t0 + 0x4) + 0x0));
    if (t52 != 0) {
        t53 = *(int *)(((t0 + 0x4) + 0x0));
        nlObjPutUseViewMatrix(t53);
    }
    if ((unsigned int)(a5 - 1) < (unsigned int)0x3E) {
        switch (((a5 - 1) << 1)) {
            case 0:
            {
                nlObjPutUseViewMatrix(0xC5634F8);
                nlObjPutUseViewMatrix(0xC5638B8);
                nlObjPutUseViewMatrix(0xC563D68);
            }
                break;
            case 2:
            {
                nlObjPutUseViewMatrix(0xC572F28);
                nlObjPutUseViewMatrix(0xC572D08);
                nlObjPutUseViewMatrix(0xC573600);
            }
                break;
            case 4:
            {
                nlObjPutUseViewMatrix(0xC492DA0);
                nlObjPutUseViewMatrix(0xC493068);
            }
                break;
            case 6:
            {
                nlObjPutUseViewMatrix(0xC5849B0);
            }
                break;
            case 8:
            case 10:
            case 12:
            case 14:
            case 16:
            case 18:
            case 22:
            case 34:
            case 46:
            case 48:
            case 50:
            case 54:
            case 56:
            case 60:
            case 62:
            case 64:
            case 70:
            case 72:
            case 74:
            case 82:
            case 88:
            case 96:
            case 104:
            {
            }
                break;
            case 20:
            {
                nlObjPutUseViewMatrix(0xC59E200);
            }
                break;
            case 24:
            {
                nlObjPutUseViewMatrix(0xC5A1B78);
            }
                break;
            case 26:
            {
                nlObjPutUseViewMatrix(0xC5A3430);
                nlObjPutUseViewMatrix(0xC5A3788);
            }
                break;
            case 28:
            {
                nlObjPutUseViewMatrix(0xC5A5CD0);
                nlObjPutUseViewMatrix(0xC5A6028);
            }
                break;
            case 30:
            {
                nlObjPutUseViewMatrix(0xC5A8688);
            }
                break;
            case 32:
            {
                nlObjPutUseViewMatrix(0xC4A1DC0);
            }
                break;
            case 36:
            {
                nlObjPutUseViewMatrix(0xC4A5A30);
            }
                break;
            case 38:
            {
                nlObjPutUseViewMatrix(0xC4A7900);
            }
                break;
            case 40:
            {
                nlObjPutUseViewMatrix(0xC4A9818);
            }
                break;
            case 42:
            {
                nlObjPutUseViewMatrix(0xC4ABD18);
            }
                break;
            case 44:
            {
                nlObjPutUseViewMatrix(0xC4AF058);
            }
                break;
            case 52:
            {
                nlObjPutUseViewMatrix(0xC4C5B10);
                nlObjPutUseViewMatrix(0xC4C5CF8);
                nlObjPutUseViewMatrix(0xC4C5EF8);
            }
                break;
            case 58:
            {
                nlObjPutUseViewMatrix(0xC4D6B70);
                nlObjPutUseViewMatrix(0xC4D6D60);
            }
                break;
            case 66:
            {
                nlObjPutUseViewMatrix(0xC4EC4E8);
            }
                break;
            case 68:
            {
                nlObjPutUseViewMatrix(0xC4F6420);
            }
                break;
            case 76:
            {
                nlObjPutUseViewMatrix(0xC50B4E0);
            }
                break;
            case 78:
            {
                nlObjPutUseViewMatrix(0xC511448);
                nlObjPutUseViewMatrix(0xC5116E8);
            }
                break;
            case 80:
            {
                nlObjPutUseViewMatrix(0xC516FD0);
            }
                break;
            case 84:
            {
                nlObjPutUseViewMatrix(0xC5227D0);
            }
                break;
            case 86:
            {
                nlObjPutUseViewMatrix(0xC527BC8);
            }
                break;
            case 90:
            {
                nlObjPutUseViewMatrix(0xC532F58);
            }
                break;
            case 92:
            {
                nlObjPutUseViewMatrix(0xC5386F8);
            }
                break;
            case 94:
            {
                nlObjPutUseViewMatrix(0xC53E200);
            }
                break;
            case 98:
            {
                nlObjPutUseViewMatrix(0xC549570);
            }
                break;
            case 100:
            {
                nlObjPutUseViewMatrix(0xC54EB48);
            }
                break;
            case 102:
            {
                nlObjPutUseViewMatrix(0xC5548A0);
            }
                break;
            case 106:
            {
                nlObjPutUseViewMatrix(0xC4A9818);
            }
                break;
            case 108:
            {
                nlObjPutUseViewMatrix(0xC4A9818);
            }
                break;
            case 110:
            {
                nlObjPutUseViewMatrix(0xC5227D0);
                nlObjPutUseViewMatrix(0xC4A9818);
            }
                break;
            case 112:
            {
                nlObjPutUseViewMatrix(0xC4A9818);
            }
                break;
            case 114:
            {
                nlObjPutUseViewMatrix(0xC5548A0);
                nlObjPutUseViewMatrix(0xC4A9818);
            }
                break;
            case 116:
            {
                nlObjPutUseViewMatrix(0xC569030);
                nlObjPutUseViewMatrix(0xC5693F0);
                nlObjPutUseViewMatrix(0xC5698A0);
            }
                break;
            case 118:
            {
                nlObjPutUseViewMatrix(0xC579890);
                nlObjPutUseViewMatrix(0xC579670);
                nlObjPutUseViewMatrix(0xC5794F0);
            }
                break;
            case 120:
            {
                nlObjPutUseViewMatrix(0xC4970A0);
                nlObjPutUseViewMatrix(0xC497368);
            }
                break;
            default:
            {
                nlObjPutUseViewMatrix(0xC58B1E0);
            }
                break;
        }
    }
    t113 = *(int *)0xC13ED9C;
    if (t113 != 0) {
        nlGetTranslate(0xC13EDA4);
    }
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslateV(0xC0D543C);
    vsklRotate(((((((((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1)) << 1) + ((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1))) << 2) + t4) + 0xC) + 0x60));
    t119 = *(int *)(((t0 + 0x10) + 0x0));
    if (t119 != 0) {
        t120 = *(int *)(((t0 + 0x10) + 0x0));
        nlObjPutUseViewMatrix(t120);
    }
    if (a5 != 1) {
        if (a5 != 2) {
            if (a5 != 4) {
                if (a5 != 25) {
                    if (a5 != 32) {
                        if (a5 != 42) {
                            if (a5 != 59) {
                                if (a5 != 60) {
                                    if (a5 == 62) {
                                        nlObjPutUseViewMatrix(0xC58DAC0);
                                    }
                                } else {
                                    nlObjPutUseViewMatrix(0xC57CEC8);
                                }
                            } else {
                                nlObjPutUseViewMatrix(0xC56C0E8);
                            }
                        } else {
                            nlObjPutUseViewMatrix(0xC51D520);
                        }
                    } else {
                        nlObjPutUseViewMatrix(0xC4E21F8);
                    }
                } else {
                    nlObjPutUseViewMatrix(0xC4BB208);
                }
            } else {
                nlObjPutUseViewMatrix(0xC586508);
            }
        } else {
            nlObjPutUseViewMatrix(0xC574EA0);
        }
    } else {
        nlObjPutUseViewMatrix(0xC5654D8);
    }
    nlTranslateV(0xC0D5448);
    vsklRotate(((((((((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1)) << 1) + ((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1))) << 2) + t4) + 0xC) + 0x48));
    t143 = *(int *)(((t0 + 0xC) + 0x0));
    if (t143 != 0) {
        t144 = *(int *)(((t0 + 0xC) + 0x0));
        nlObjPutUseViewMatrix(t144);
    }
    if (a5 != 4) {
        if (a5 != 5) {
            if (a5 == 62) {
                nlObjPutUseViewMatrix(0xC58C9E8);
            }
        } else {
            nlObjPutUseViewMatrix(0xC594548);
        }
    } else {
        nlObjPutUseViewMatrix(0xC585FA0);
    }
    nlTranslateV(0xC0D5454);
    vsklRotate(((((((((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1)) << 1) + ((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1))) << 2) + t4) + 0xC) + 0x30));
    t155 = *(int *)(((t0 + 0x8) + 0x0));
    if (t155 != 0) {
        t156 = *(int *)(((t0 + 0x8) + 0x0));
        nlObjPutUseViewMatrix(t156);
    }
    t159 = *(int *)0xC13ED98;
    if (t159 != 0) {
        if (a5 != 33) {
            if (a5 == 36) {
                nlObjPutUseViewMatrix(0xC4FDD38);
            }
        } else {
            nlObjPutUseViewMatrix(0xC4EA2A8);
        }
    }
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslateV(0xC0D5460);
    vsklRotate((0xA8 + (((((((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1)) << 1) + ((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1))) << 2) + t4) + 0xC)));
    t169 = *(int *)(((t0 + 0x1C) + 0x0));
    if (t169 != 0) {
        t170 = *(int *)(((t0 + 0x1C) + 0x0));
        nlObjPutUseViewMatrix(t170);
    }
    if (a5 != 1) {
        if (a5 != 2) {
            if (a5 != 4) {
                if (a5 != 25) {
                    if (a5 != 32) {
                        if (a5 != 42) {
                            if (a5 != 59) {
                                if (a5 != 60) {
                                    if (a5 == 62) {
                                        nlObjPutUseViewMatrix(0xC58FB18);
                                    }
                                } else {
                                    nlObjPutUseViewMatrix(0xC57F2C8);
                                }
                            } else {
                                nlObjPutUseViewMatrix(0xC56DCC0);
                            }
                        } else {
                            nlObjPutUseViewMatrix(0xC51DA80);
                        }
                    } else {
                        nlObjPutUseViewMatrix(0xC4E2720);
                    }
                } else {
                    nlObjPutUseViewMatrix(0xC4BB7A8);
                }
            } else {
                nlObjPutUseViewMatrix(0xC587E40);
            }
        } else {
            nlObjPutUseViewMatrix(0xC5768B8);
        }
    } else {
        nlObjPutUseViewMatrix(0xC566CB0);
    }
    nlTranslateV(0xC0D546C);
    vsklRotate((0x90 + (((((((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1)) << 1) + ((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1))) << 2) + t4) + 0xC)));
    t193 = *(int *)(((t0 + 0x18) + 0x0));
    if (t193 != 0) {
        t194 = *(int *)(((t0 + 0x18) + 0x0));
        nlObjPutUseViewMatrix(t194);
    }
    nlTranslateV(0xC0D5478);
    vsklRotate(((((((((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1)) << 1) + ((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1))) << 2) + t4) + 0xC) + 0x78));
    t199 = *(int *)(((t0 + 0x14) + 0x0));
    if (t199 != 0) {
        t200 = *(int *)(((t0 + 0x14) + 0x0));
        nlObjPutUseViewMatrix(t200);
    }
    t203 = *(int *)0xC13ED98;
    if (t203 != 0) {
        if (a5 == 35) {
            nlObjPutUseViewMatrix(0xC4FA698);
        }
    }
    nlPopMatrix(0x2);
    vsklRotate((0x168 + (((((((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1)) << 1) + ((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1))) << 2) + t4) + 0xC)));
    t209 = *(int *)(((t0 + 0x3C) + 0x0));
    if (t209 != 0) {
        t210 = *(int *)(((t0 + 0x3C) + 0x0));
        nlObjPutUseViewMatrix(t210);
    }
    if (a5 != 2) {
        if (a5 != 3) {
            if (a5 != 14) {
                if (a5 != 15) {
                    if (a5 != 29) {
                        if (a5 != 31) {
                            if (a5 != 35) {
                                if (a5 != 37) {
                                    if (a5 != 39) {
                                        if (a5 != 44) {
                                            if (a5 != 45) {
                                                if (a5 != 46) {
                                                    if (a5 != 51) {
                                                        if (a5 != 54) {
                                                            if (a5 != 55) {
                                                                if (a5 != 60) {
                                                                    if (a5 == 61) {
                                                                        nlObjPutUseViewMatrix(0xC499990);
                                                                    }
                                                                } else {
                                                                    nlObjPutUseViewMatrix(0xC5836A0);
                                                                }
                                                            } else {
                                                                nlObjPutUseViewMatrix(0xC4DCDE0);
                                                            }
                                                        } else {
                                                            nlObjPutUseViewMatrix(0xC4D2010);
                                                        }
                                                    } else {
                                                        nlObjPutUseViewMatrix(0xC550020);
                                                    }
                                                } else {
                                                    nlObjPutUseViewMatrix(0xC533FA8);
                                                }
                                            } else {
                                                nlObjPutUseViewMatrix(0xC52E6C8);
                                            }
                                        } else {
                                            nlObjPutUseViewMatrix(0xC528C18);
                                        }
                                    } else {
                                        nlObjPutUseViewMatrix(0xC50C828);
                                    }
                                } else {
                                    nlObjPutUseViewMatrix(0xC501220);
                                }
                            } else {
                                nlObjPutUseViewMatrix(0xC4F7C78);
                            }
                        } else {
                            nlObjPutUseViewMatrix(0xC4DCDE0);
                        }
                    } else {
                        nlObjPutUseViewMatrix(0xC4D2010);
                    }
                } else {
                    nlObjPutUseViewMatrix(0xC5A8088);
                }
            } else {
                nlObjPutUseViewMatrix(0xC5A57E8);
            }
        } else {
            nlObjPutUseViewMatrix(0xC4948E0);
        }
    } else {
        nlObjPutUseViewMatrix(0xC5786B8);
    }
    t247 = *(int *)0xC13EDA0;
    if (t247 != 0) {
        nlGetTranslate(0xC13EDB0);
    }
    nlPushMatrix(0x0);
    nlTranslateV(0xC0D5484);
    vsklRotate((0x108 + (((((((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1)) << 1) + ((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1))) << 2) + t4) + 0xC)));
    t253 = *(int *)(((t0 + 0x2C) + 0x0));
    if (t253 != 0) {
        t254 = *(int *)(((t0 + 0x2C) + 0x0));
        nlObjPutUseViewMatrix(t254);
    }
    if (a5 != 25) {
        if (a5 != 35) {
            if (a5 != 42) {
                if (a5 == 44) {
                    nlObjPutUseViewMatrix(0xC529218);
                }
            } else {
                nlObjPutUseViewMatrix(0xC51E450);
            }
        } else {
            nlObjPutUseViewMatrix(0xC4F8138);
        }
    } else {
        nlObjPutUseViewMatrix(0xC4BC440);
    }
    nlTranslateV(0xC0D5490);
    vsklRotate((0xF0 + (((((((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1)) << 1) + ((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1))) << 2) + t4) + 0xC)));
    t267 = *(int *)(((t0 + 0x28) + 0x0));
    if (t267 != 0) {
        t268 = *(int *)(((t0 + 0x28) + 0x0));
        nlObjPutUseViewMatrix(t268);
    }
    nlTranslateV(0xC0D549C);
    vsklRotate((0xD8 + (((((((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1)) << 1) + ((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1))) << 2) + t4) + 0xC)));
    t273 = *(int *)(((t0 + 0x24) + 0x0));
    if (t273 != 0) {
        t274 = *(int *)(((t0 + 0x24) + 0x0));
        nlObjPutUseViewMatrix(t274);
    }
    nlPopMatrix(0x1);
    nlTranslateV(0xC0D54A8);
    vsklRotate((0x150 + (((((((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1)) << 1) + ((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1))) << 2) + t4) + 0xC)));
    t280 = *(int *)(((t0 + 0x38) + 0x0));
    if (t280 != 0) {
        t281 = *(int *)(((t0 + 0x38) + 0x0));
        nlObjPutUseViewMatrix(t281);
    }
    if (a5 != 25) {
        if (a5 != 35) {
            if (a5 != 42) {
                if (a5 == 44) {
                    nlObjPutUseViewMatrix(0xC5296D8);
                }
            } else {
                nlObjPutUseViewMatrix(0xC51E990);
            }
        } else {
            nlObjPutUseViewMatrix(0xC4F85A8);
        }
    } else {
        nlObjPutUseViewMatrix(0xC4BC8C8);
    }
    nlPushMatrix(0x0);
    nlTranslateV(0xC0D54B4);
    vsklRotate((0x138 + (((((((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1)) << 1) + ((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1))) << 2) + t4) + 0xC)));
    t295 = *(int *)(((t0 + 0x34) + 0x0));
    if (t295 != 0) {
        t296 = *(int *)(((t0 + 0x34) + 0x0));
        nlObjPutUseViewMatrix(t296);
    }
    nlTranslateV(0xC0D54C0);
    vsklRotate((0x120 + (((((((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1)) << 1) + ((t2 + 0x1) * (((t3 + 0x1) << 1) + 0x1))) << 2) + t4) + 0xC)));
    t301 = *(int *)(((t0 + 0x30) + 0x0));
    if (t301 != 0) {
        t302 = *(int *)(((t0 + 0x30) + 0x0));
        nlObjPutUseViewMatrix(t302);
    }
    t305 = nlPopMatrix(0x2);
    return t305;
}


