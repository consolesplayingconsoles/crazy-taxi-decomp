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


