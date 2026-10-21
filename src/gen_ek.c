/* Straight-line functions with calls and guards (batch gen_ek): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0310a0(void);
int FUN_0c0310c0(int);
int FUN_0c031158(int);
int FUN_0c0771b0(int, int);
int FUN_0c077210(int, int);
int FUN_0c078980(void);
int FUN_0c079da0(void);
int FUN_0c07c830(void);
int FUN_0c07c870(int, int);
int GetCollision2D(int, float);
int SetCameraMode(int);
extern float _builtin_sqrtf(float);
int camRestore(void);
int camSetEye(int, int);
int camSetTarget(int, int);
int kmSetCheapShadowMode(int);
int kmiCopyToFrameBuffer(int, int, int);
int nlAddVector(int, int);
int nlArcTan2(float, float);
int nlGetAverageVector(int, int, int, float, float);
int nlGetMatrix(int);
int nlInvertMatrix(int);
int nlMultiMatrix(int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
float nlRoundOff(float);
int nlSetTranslate(int);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
float nlTan(int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int nlUnitMatrix(void);
int pfColor(int, int, int, int);
float pfLength(int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFont(int);
int pfSize(float, float);
int FUN_0c07c740(int a4, int a5);
int carSteering(int a4);
int carMultiCollision(int a4, float f4);
int nd_CarSel_PutCar(int a4, int a5, int a6, int a7);
int getSteering(int a4, int a5);
int FUN_0c064788(void);
int FUN_0c058018(int a4, int a5, int a6);
int kmLoadTextureBlock(int a4, int a5, int a6, int a7);
int getYXZrot(int a4);
int FUN_0c064a5c(void);

int FUN_0c07c740(int a4, int a5)
{
    int t1;
    float u3;
    float u4;
    float u5;
    int t9;
    int t18;
    float u19;
    float u20;
    float u21;
    float u22;
    int t28;
    int t29;
    int t30;

    nlPushMatrix(0x0);
    t1 = *(int *)((a5 + 0x10));
    kmSetCheapShadowMode(t1);
    u3 = *(float *)((a5 + 0x18));
    *(float *)0xC2B7678 = u3;
    u4 = *(float *)((a5 + 0x1C));
    *(float *)0xC2B767C = u4;
    u5 = *(float *)((a5 + 0x20));
    *(float *)0xC2B7680 = u5;
    FUN_0c078980();
    FUN_0c077210(0xC2B7678, 0xC2B7678);
    FUN_0c078980();
    t9 = *(int *)((a5 + 0x0));
    if ((t9 & 1) != 0) {
        nlPushMatrix(0x0);
        nlInvertMatrix(0x0);
        FUN_0c0771b0((a5 + 0x18), 0xC2B7688);
        nlPopMatrix(0x1);
    }
    FUN_0c079da0();
    FUN_0c07c830();
    t18 = *(int *)((a5 + 0x0));
    if ((t18 & 1) == 0) {
        u19 = *(float *)0xC2B7678;
        u20 = *(float *)((a5 + 0x14));
        *(float *)0xC2B7698 = (u19 * (-u20));
        u21 = *(float *)0xC2B767C;
        *(float *)0xC2B769C = (u21 * (-u20));
        u22 = *(float *)0xC2B7680;
        *(float *)0xC2B76A0 = (u22 * (-u20));
        FUN_0c077210(0xC2B7698, 0xC2B7698);
    }
    t28 = a4;
    for (;;) {
        t29 = *(int *)((t28 + 0x0));
        if (t29 == 0) {
            break;
        }
        *(unsigned int *)0xC2B7684 = 0x0;
        t30 = *(int *)((t28 + 0x0));
        t28 = (t28 + 0x4);
        FUN_0c07c870(t30, a5);
    }
    return nlPopMatrix(0x1);
}

int carSteering(int a4)
{
    int t1;
    int t3;
    int t5;
    int t7;
    int t8;
    float u9;
    int t11;
    float t12;
    float u13;
    float u14;
    int t15;
    int t16;
    float u27;
    int t30;
    float u24;
    int stk[11] = {0};

    nlPushUnitMatrix();
    t1 = *(short *)((a4 + 0xA6));
    nlRotateAY((unsigned short)t1);
    t3 = *(short *)((a4 + 0xA4));
    nlRotateAX((unsigned short)t3);
    t5 = *(short *)((a4 + 0xA8));
    nlRotateAZ((unsigned short)t5);
    t7 = *(int *)((a4 + 0xC0));
    if (t7 != 0) {
        t8 = *(short *)((a4 + 0x78));
        u9 = *(float *)(((short)((short)t8 * (short)0xA8) + 0xC0A26C0));
        nlTranslate(0.0f, 0.0f, (-u9));
        t11 = *(int *)((a4 + 0xC0));
        t12 = nlTan(t11);
        u13 = *(float *)((a4 + 0xCC));
        u14 = *(float *)((a4 + 0xCC));
        t15 = nlArcTan2((u14 * (1.0f / _builtin_sqrtf(((u13 * u13) + (u9 / t12) * (u9 / t12))))), (((u9 / t12) < 0.0f ? -(u9 / t12) : (u9 / t12)) * (1.0f / _builtin_sqrtf(((u13 * u13) + (u9 / t12) * (u9 / t12))))));
        t16 = t15;
        if (0.0f > (u9 / t12)) {
            t16 = (-t15);
        }
        nlRotateAY(t16);
        nlTranslate(0.0f, 0.0f, u9);
        u24 = (1.0f / _builtin_sqrtf(((u13 * u13) + (u9 / t12) * (u9 / t12))));
    }
    getYXZrot((0xA4 + a4));
    *(float *)(((int)stk + 8)) = 0.0f;
    *(float *)(((int)stk + 4)) = 0.0f;
    u27 = *(float *)((a4 + 0xC4));
    *(float *)(((int)stk + 12)) = u27;
    FUN_0c077210(((int)stk + 4), ((int)stk + 4));
    nlPopMatrix(0x1);
    t30 = nlAddVector((0x98 + a4), ((int)stk + 4));
    return t30;
}

int carMultiCollision(int a4, float f4)
{
    int t2;
    int t4;
    int t6;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    float u17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    float u23;
    int t30;
    int t31;
    int t36;
    float u32;
    float u34;
    float u35;
    int stk[11] = {0};

    nlPushUnitMatrix();
    nlSetTranslate((0x8C + a4));
    t2 = *(short *)((a4 + 0xA6));
    nlRotateAY((unsigned short)t2);
    t4 = *(short *)((a4 + 0xA4));
    nlRotateAX((unsigned short)t4);
    t6 = *(short *)((a4 + 0xA8));
    nlRotateAZ((unsigned short)t6);
    t8 = *(int *)0xC0A4790;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t8;
    t9 = *(int *)0xC0A478C;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t9;
    t10 = *(int *)0xC0A4788;
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t10;
    t11 = *(int *)0xC0A4790;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x8)) = t11;
    t12 = *(int *)0xC0A478C;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x4)) = t12;
    t13 = *(int *)0xC0A4788;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = t13;
    *(float *)(((int)stk + 24)) = (-f4);
    *(float *)(((int)stk + 12)) = f4;
    FUN_0c0771b0((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC));
    FUN_0c0771b0(((int)stk + 4), ((int)stk + 4));
    nlPopMatrix(0x1);
    u17 = *(float *)0xC043B48;
    t18 = GetCollision2D((((int)stk + 4) + 0xC), u17);
    t19 = *(int *)((t18 + 0x1C));
    if (t19 != -1) {
        t20 = *(int *)(((t18 + 0xC) + 0x8));
        *(unsigned int *)(((0xEC + a4) + 0x8)) = t20;
        t21 = *(int *)(((t18 + 0xC) + 0x4));
        *(unsigned int *)(((0xEC + a4) + 0x4)) = t21;
        t22 = *(int *)(((t18 + 0xC) + 0x0));
        *(unsigned int *)(((0xEC + a4) + 0x0)) = t22;
        u23 = *(float *)((t18 + 0x18));
        *(float *)((a4 + 0x104)) = u23;
    }
    t30 = GetCollision2D(((int)stk + 4), u17);
    t31 = *(int *)((t30 + 0x1C));
    t36 = t31;
    if (t31 != -1) {
        u32 = *(float *)0xC043B50;
        nlGetAverageVector((0xEC + a4), (t30 + 0xC), (0xEC + a4), u32, u32);
        u34 = *(float *)((a4 + 0x104));
        u35 = *(float *)((t30 + 0x18));
        *(float *)((a4 + 0x104)) = ((u35 + u34) * u32);
        t36 = 0x104;
    }
    return t36;
}

int nd_CarSel_PutCar(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t9;
    int t10;
    int t11;
    int t12;
    int t16;
    int t18;
    int t24;
    int t30;
    int t36;
    int t39;
    int stk[14] = {0};

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned short *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 12)) = a7;
    t0 = *(int *)(((int)stk + 4));
    nlPushMatrix(0x0);
    t2 = *(int *)((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0x0));
    nlObjPutUseViewMatrix(t2);
    t4 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 20)) = (t4 << 2);
    t5 = *(int *)(((int)stk + 8));
    t6 = *(int *)((0xC1309B8 + (t4 << 2)));
    t7 = *(int *)(((t5 << 2) + t6));
    nlObjPutUseViewMatrix(t7);
    t9 = *(int *)(((int)stk + 20));
    t10 = *(int *)(((int)stk + 12));
    t11 = *(int *)((t9 + 0xC1309E8));
    t12 = *(int *)(((t10 << 2) + t11));
    nlObjPutUseViewMatrix(t12);
    nlPushMatrix(0x0);
    nlTranslateV((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0x14));
    t16 = *(short *)(((int)stk + 16));
    nlRotateAX((unsigned short)t16);
    t18 = *(int *)((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0x4));
    nlObjPutUseViewMatrix(t18);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslateV((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0x20));
    nlRotateAX((unsigned short)t16);
    t24 = *(int *)((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0x8));
    nlObjPutUseViewMatrix(t24);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslateV((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0x2C));
    nlRotateAX((unsigned short)t16);
    t30 = *(int *)((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0xC));
    nlObjPutUseViewMatrix(t30);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslateV((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0x38));
    nlRotateAX((unsigned short)t16);
    t36 = *(int *)((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0x10));
    nlObjPutUseViewMatrix(t36);
    nlPopMatrix(0x1);
    t39 = nlPopMatrix(0x1);
    return t39;
}

int getSteering(int a4, int a5)
{
    int t1;
    int t3;
    int t5;
    int t7;
    int t8;
    int t9;
    float u13;
    int t14;
    float u15;
    int t16;
    int t17;
    int t18;
    int t21;
    int t19;
    int t24;
    int t27;
    int t25;
    int stk[8] = {0};

    *(unsigned int *)(((int)stk + 4)) = a5;
    nlPushUnitMatrix();
    t1 = *(short *)((a4 + 0xA8));
    nlRotateAZ((-(unsigned short)t1));
    t3 = *(short *)((a4 + 0xA4));
    nlRotateAX((-(unsigned short)t3));
    t5 = *(short *)((a4 + 0xA6));
    nlRotateAY((-(unsigned short)t5));
    t7 = *(int *)(((0xE0 + a4) + 0x8));
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = t7;
    t8 = *(int *)(((0xE0 + a4) + 0x4));
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = t8;
    t9 = *(int *)(((0xE0 + a4) + 0x0));
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t9;
    nlSubVector((((int)stk + 4) + 0x4), (0x8C + a4));
    FUN_0c077210((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x4));
    nlPopMatrix(0x1);
    u13 = *(float *)(((int)stk + 16));
    t14 = *(int *)(((int)stk + 4));
    u15 = *(float *)(((int)stk + 8));
    t16 = nlArcTan2(u15, u13);
    *(unsigned int *)((t14 + 0x0)) = (short)t16;
    t17 = *(int *)(((int)stk + 4));
    t18 = *(int *)((t17 + 0x0));
    t21 = 0xFFFFEC00;
    if ((int)(int)((float)t18 * 0.599999964f) < (int)0xFFFFEC00) {
    } else {
        t19 = (int)((float)t18 * 0.599999964f);
        if ((int)(int)((float)t18 * 0.599999964f) > (int)0x1400) {
            t19 = 0x1400;
        }
        t21 = t19;
    }
    t24 = *(int *)((a4 + 0xC0));
    t27 = 0xFFFFFFC0;
    if ((int)(int)((float)(t21 - t24) * 0.399999976f) < (int)0xFFFFFFC0) {
    } else {
        t25 = (int)((float)(t21 - t24) * 0.399999976f);
        if ((int)(int)((float)(t21 - t24) * 0.399999976f) > (int)0x40) {
            t25 = 0x40;
        }
        t27 = t25;
    }
    return t27;
}

int FUN_0c064788(void)
{
    int t6;
    int t11;
    int t12;
    int t13;
    int t14;
    int t22;
    int t24;
    int t23;
    int stk[15] = {0};

    SetCameraMode(0x1);
    nlGetAverageVector(0xC2AD554, 0xC2AD1F8, (((int)stk + 4) + 0x18), 1.0f, 20.0f);
    nlGetAverageVector((((int)stk + 4) + 0x18), 0xC2AD1EC, (((int)stk + 4) + 0x18), 1.0f, 10.0f);
    nlSubVector3op((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x18), 0xC179840);
    nlGetAverageVector(0xC179840, (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x18), 1.0f, 0.099999994f);
    camSetEye((((int)stk + 4) + 0x18), 0x1);
    t6 = *(int *)0xC2AD54C;
    nlGetAverageVector((t6 + 0x4), 0xC2AD1EC, ((int)stk + 4), 1.0f, 10.0f);
    nlSubVector3op((((int)stk + 4) + 0xC), ((int)stk + 4), 0xC17984C);
    nlGetAverageVector(0xC17984C, (((int)stk + 4) + 0xC), ((int)stk + 4), 1.0f, 0.299999982f);
    camSetTarget(((int)stk + 4), 0x1);
    t11 = *(int *)0xC2AD54C;
    t12 = *(int *)((t11 + 0x20));
    if (t12 == 2) {
        t13 = *(int *)0xC2AD54C;
        t14 = *(int *)((t13 + 0x24));
        if (t14 == 2) {
            *(unsigned int *)0xC2AD57C = 0x4;
        }
    }
    t22 = *(int *)0xC2AD590;
    t24 = t22;
    if ((t22 & 1) == 0) {
        t23 = camRestore();
        t24 = t23;
    }
    return t24;
}

int FUN_0c058018(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t4;
    int t23;
    float t24;
    float u25;
    float u26;
    float t27;
    float u28;
    int t30;

    t0 = a4;
    if ((int)a4 > (int)0x63) {
        t0 = 0x63;
    }
    t2 = a5;
    if ((int)a5 > (int)0x9) {
        t2 = 0x9;
    }
    t4 = a6;
    if ((int)a6 > (int)0x9) {
        t4 = 0x9;
    }
    FUN_0c0310a0();
    pfSetFont(0x1);
    pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
    pfSize(1.0f, 1.0f);
    FUN_0c0310c0(0xC0D0AB4);
    if (t0 == 0) {
        if (t2 == 0) {
            FUN_0c031158(t0);
        }
    } else {
        FUN_0c031158(t0);
    }
    if (t2 != 0) {
        FUN_0c0310c0(0xC0D0AC0);
        FUN_0c031158(t2);
        FUN_0c0310c0(0xC0D0AC4);
        FUN_0c031158(t4);
    }
    t23 = *(int *)0xC08D678;
    t24 = pfLength(t23);
    u25 = *(float *)0xC0581DC;
    u26 = *(float *)0xC0581E0;
    t27 = nlRoundOff((u26 - (t24 * u25)));
    u28 = *(float *)0xC0581E8;
    pfLocate(t27, u28);
    t30 = *(int *)0xC08D678;
    return pfPuts(t30);
}

int kmLoadTextureBlock(int a4, int a5, int a6, int a7)
{
    int t0;
    int t30;
    int t1;
    int t12;
    int t8;
    int t5;
    int t2;
    int t15;
    int t20;
    int t16;
    int t17;

    t0 = *(int *)((a4 + 0x0));
    t30 = 0x4;
    if ((unsigned short)t0 == 3) {
    } else {
        t1 = *(int *)((a4 + 0x18));
        t12 = 0x0;
        if ((0x4 & t1) != 0) {
            t8 = 0x0;
            if ((0x1 & t1) != 0) {
                t5 = 0x0;
                if ((0x8 & t1) == 0) {
                    t2 = 0x0;
                    if ((0x20 & t1) == 0) {
                        t2 = 0x4;
                    }
                    t5 = t2;
                }
                t8 = t5;
            }
            t12 = t8;
        }
        t15 = *(int *)((a4 + 0x14));
        t20 = 0xC;
        if ((unsigned int)(t12 + (a6 * (((a7 << 2) << 2) << 1))) >= (unsigned int)t15) {
        } else {
            t16 = *(int *)((a4 + 0x1C));
            t17 = (t15 - (t12 + (a6 * (((a7 << 2) << 2) << 1))));
            if ((unsigned int)(t15 - (t12 + (a6 * (((a7 << 2) << 2) << 1)))) > (unsigned int)(((a7 << 2) << 2) << 1)) {
                t17 = (((a7 << 2) << 2) << 1);
            }
            kmiCopyToFrameBuffer(((t12 + (a6 * (((a7 << 2) << 2) << 1))) + t16), a5, t17);
            t20 = 0x0;
        }
        t30 = t20;
    }
    return t30;
}

int getYXZrot(int a4)
{
    float u2;
    float u3;
    int t4;
    float u5;
    float u6;
    float u7;
    int t8;
    int t10;
    int t12;
    float u16;
    float u17;
    int t18;
    int t19;
    int stk[22] = {0};

    nlPushMatrix(0x0);
    nlGetMatrix(((int)stk + 4));
    u2 = *(float *)(((int)stk + 44));
    u3 = *(float *)(((int)stk + 36));
    t4 = nlArcTan2(u3, u2);
    *(unsigned short *)((a4 + 0x2)) = t4;
    u5 = *(float *)(((int)stk + 36));
    u6 = *(float *)(((int)stk + 44));
    u7 = *(float *)(((int)stk + 40));
    t8 = nlArcTan2(u7, _builtin_sqrtf(((u6 * u6) + u5 * u5)));
    *(unsigned short *)((a4 + 0x0)) = (-t8);
    nlUnitMatrix();
    t10 = *(short *)((a4 + 0x0));
    nlRotateAX((-(unsigned short)t10));
    t12 = *(short *)((a4 + 0x2));
    nlRotateAY((-(unsigned short)t12));
    nlMultiMatrix(((int)stk + 4));
    nlGetMatrix(((int)stk + 4));
    u16 = *(float *)(((int)stk + 4));
    u17 = *(float *)(((int)stk + 8));
    t18 = nlArcTan2(u17, u16);
    *(unsigned short *)((a4 + 0x4)) = t18;
    t19 = nlPopMatrix(0x1);
    return t19;
}

int FUN_0c064a5c(void)
{
    int t0;
    int t1;
    int t15;
    float u4;
    int t10;
    int t12;
    int t11;
    int stk[13] = {0};

    t0 = *(int *)0xC2AD54C;
    t1 = *(signed char *)((t0 + 0x149));
    t15 = t1;
    if ((t1 & 128) == 0) {
        SetCameraMode(0x1);
        nlSubVector3op((((int)stk + 4) + 0x18), 0xC2AD554, 0xC179840);
        u4 = *(float *)0xC064B4C;
        nlGetAverageVector(0xC179840, (((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC), 1.0f, u4);
        camSetEye((((int)stk + 4) + 0xC), 0x1);
        nlSubVector3op((((int)stk + 4) + 0x18), 0xC2AD560, 0xC17984C);
        nlGetAverageVector(0xC17984C, (((int)stk + 4) + 0x18), ((int)stk + 4), 1.0f, u4);
        camSetTarget(((int)stk + 4), 0x1);
        t10 = *(int *)0xC2AD590;
        t12 = t10;
        if ((t10 & 1) == 0) {
            t11 = camRestore();
            t12 = t11;
        }
        t15 = t12;
    }
    return t15;
}
