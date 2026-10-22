/* Straight-line functions with calls and guards (batch gen_dz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Bezier(int, int, float);
int FUN_0c049aa8(int, int, float);
int FUN_0c05778a(int, int, float, float);
int FUN_0c074680(void);
int nlSqrt(int, int);
int FUN_0c077210(int, int);
int FUN_0c078a70(int, int, int);
int FUN_0c079f10(void);
int FUN_0c089978(int, int);
int FUN_0c089e00(int);
int FUN_0c15e85c(int, int, int);
int GetCollision2D(int, float);
int ResetFadeColor(void);
int SetCameraMode(int);
extern float _builtin_sqrtf(float);
int _mult64(int, int, int, int);
int _pow10(int, int, int);
int camRestore(void);
int camSetEye(int, int);
int camSetTarget(int, int);
int carBalance(int);
int get_fat(int, int);
int kmiCopyToPVRMemory(int);
int kmiCreateDummyRegionforAvoidCacheBug(void);
int kmiCreateDummyTranslucentObject(int, int);
int memmove(int, int, int);
int memset(int, int, int);
int nlAddVector(int, int);
int nlArcTan(float);
int nlArcTan2(float, float);
float nlCos(int);
int nlFastSinCos(int, int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlGetMatrix(int);
float nlInnerProduct(int, int);
int nlMultiMatrix(int);
int nlObjPut(int);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSetTranslate(int);
float nlSin(int);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
float nlTan(int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int nlTriPutSetAttrib(int, int, int, int, int, int, int, int, int, int, float, float, float, float, float, float, float, float);
int nlTriPutSetAttribFaceColor(int, float, float, float);
int nlTriPutSetClipping(int, float, float, float, float);
int nlTriPutSetPoint(int, int, float, float, float, float, float, float, float, float);
int nlTriPutTextureInit(int, int, int);
int nlUnitMatrix(void);
int nlUnitVector(int);
int search_fat_dir(int, int);
int set_fat(int, int);
int vmsfs_write_retry(int, int, int);
int write_fat(int);
int write_sys(int);
int FUN_0c034fa8(int a4);
int FUN_0c05d862(void);
int FUN_0c064788(void);
int FUN_0c0648e0(void);
int FUN_0c064a5c(void);
int FUN_0c065bb8(void);
int FUN_0c0792b0(int a4, float f4, float f5, float f6);
int Put_Motion2D(int a4, int a5);
int Put_SEGA_LOGO2(void);
int _power(int a4, int a5, int a6);
int carMultiCollision(int a4, float f4);
int carSteering(int a4);
int getSteering(int a4, int a5);
int getYXZrot(int a4);
int kmiCreateRegionArray(int a4, int a5, int a6, int a7, int a8, int a9);
int nd_CarSel_PutCar(int a4, int a5, int a6, int a7);
int write_dir(int a4);

int FUN_0c034fa8(int a4)
{
    int t0;
    int t3;
    int t8;
    float u9;
    float u10;
    float u13;
    float u14;
    int t15;
    int t16;
    int t17;
    float u19;
    float u20;
    float u21;
    float u22;
    float u23;
    float u24;
    float u25;
    float u27;
    float u28;
    float u29;
    float u31;
    float u32;
    float u33;
    float u34;
    float u35;
    int t37;
    int stk[23] = {0};

    t0 = *(int *)0xC0ED8A0;
    if (t0 != 0) {
        nlTriPutTextureInit(0xC270E78, 0xFFFFFFFF, 0x0);
        nlTriPutSetAttrib(0xC270E78, 0x2, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x22, 0.5f, 0.5f, 1.0f, 0.0f, 0.699999988f, 0.0f, 0.0f, 0.0f);
        t3 = *(int *)0xC270E98;
        *(unsigned int *)0xC270E98 = (t3 | 0xC0);
        *(unsigned int *)0xC0ED8A0 = 0x0;
    }
    t8 = *(int *)((a4 + 0x18));
    u9 = 0.0f;
    u10 = 0.699999988f;
    if ((t8 & 1) != 0) {
        u9 = 0.699999988f;
        u10 = 0.0f;
    }
    nlTriPutSetAttribFaceColor(0xC270E78, 1.0f, u9, u10);
    u13 = *(float *)((a4 + 0x8));
    *(float *)(((int)stk + 36)) = u13;
    u14 = *(float *)((a4 + 0xC));
    *(float *)(((int)stk + 40)) = u14;
    t15 = 0x0;
    t16 = 0x0;
    t17 = 0x0;
    for (;;) {
        nlFastSinCos(t16, ((int)stk + 28), (((int)stk + 28) + 0x4));
        u19 = *(float *)((a4 + 0x10));
        u20 = *(float *)(((int)stk + 32));
        u21 = *(float *)(((int)stk + 36));
        u22 = *(float *)(((int)stk + 40));
        u23 = *(float *)(((int)stk + 28));
        u24 = *(float *)(((int)stk + 32));
        u25 = *(float *)((a4 + 0x14));
        nlTriPutSetPoint(0xC270E78, t17, (u21 + u19 * u20), u25, (u22 + u19 * u23), u24, 0.0f, u23, 0.0f, 0.0f);
        u27 = *(float *)(((int)stk + 32));
        u28 = *(float *)((a4 + 0x18));
        u29 = *(float *)(((int)stk + 28));
        nlTriPutSetPoint(0xC270E78, (t17 + 0x1), (u21 + u19 * u20), u28, (u22 + u19 * u23), u27, 0.0f, u29, 0.0f, 0.0f);
        t15 = (t15 + 0x1);
        t17 = (t17 + 0x2);
        t16 = (t16 + 0x1000);
        if ((int)t15 > (int)0x10) {
            break;
        }
    }
    u31 = *(float *)((a4 + 0x14));
    u32 = *(float *)((a4 + 0x18));
    u33 = *(float *)((a4 + 0x10));
    u34 = *(float *)(((int)stk + 40));
    u35 = *(float *)(((int)stk + 36));
    nlTriPutSetClipping(0xC270E78, u35, ((u31 + u32) * 0.5f), u34, (u33 + 0.5f * (u31 - u32)));
    t37 = nlObjPutUseViewMatrix(0xC270E78);
    return t37;
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

int FUN_0c0648e0(void)
{
    int t1;
    int t2;
    float u5;
    int t6;
    float t8;
    float u9;
    float u12;
    float u13;
    float u16;
    int t19;
    float u20;
    int t21;
    int t27;
    int t28;
    int t29;
    int t30;
    int t38;
    int t40;
    int t39;
    int stk[19] = {0};

    SetCameraMode(0x1);
    t1 = *(int *)0xC2AD54C;
    t2 = *(int *)0xC2AD548;
    nlSubVector3op((((int)stk + 4) + 0x18), (t1 + 0x4), (t2 + 0x4));
    nlUnitVector((((int)stk + 4) + 0x18));
    u5 = *(float *)0xC064A24;
    t6 = *(int *)0xC2AD548;
    nlGetAverageVector((t6 + 0x4), (((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC), 1.0f, u5);
    t8 = nlInnerProduct(0xC2AD1F8, (((int)stk + 4) + 0x18));
    u9 = (t8 * (-1.0f));
    if (t8 > 0.0f) {
        u9 = 0.0f;
    }
    u12 = *(float *)0xC064A30;
    u13 = *(float *)0xC064A34;
    nlGetAverageVector((((int)stk + 4) + 0xC), 0xC2AD1EC, (((int)stk + 4) + 0xC), 1.0f, (u13 + u12 * u9));
    nlSubVector3op((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC), 0xC179840);
    u16 = *(float *)0xC064A40;
    nlGetAverageVector(0xC179840, (((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC), 1.0f, u16);
    camSetEye((((int)stk + 4) + 0xC), 0x1);
    t19 = *(int *)0xC2AD54C;
    u20 = *(float *)0xC064A48;
    t21 = *(int *)0xC2AD548;
    nlGetAverageVector((t21 + 0x4), (t19 + 0x4), ((int)stk + 4), u20, u20);
    nlGetAverageVector(((int)stk + 4), 0xC2AD1EC, ((int)stk + 4), 1.0f, u12);
    nlSubVector3op((((int)stk + 4) + 0x18), ((int)stk + 4), 0xC17984C);
    nlGetAverageVector(0xC17984C, (((int)stk + 4) + 0x18), ((int)stk + 4), 1.0f, u16);
    camSetTarget(((int)stk + 4), 0x1);
    t27 = *(int *)0xC2AD54C;
    t28 = *(int *)((t27 + 0x20));
    if (t28 == 2) {
        t29 = *(int *)0xC2AD54C;
        t30 = *(int *)((t29 + 0x24));
        if (t30 == 2) {
            *(unsigned int *)0xC2AD57C = 0x4;
        }
    }
    t38 = *(int *)0xC2AD590;
    t40 = t38;
    if ((t38 & 1) == 0) {
        t39 = camRestore();
        t40 = t39;
    }
    return t40;
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

int FUN_0c065bb8(void)
{
    int t2;
    int t13;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    float u40;
    float u41;
    float u42;
    float u43;
    int t49;
    int t50;
    int t51;
    int t54;
    int t57;
    int t59;
    int t85;
    int t87;
    int t86;
    int stk[47] = {0};

    SetCameraMode(0x1);
    nlPushMatrix(0xC179180);
    t2 = *(int *)0xC2AD578;
    if ((int)t2 <= (int)0x7) {
        if ((int)t2 > (int)0x6E) {
            nlSubVector3op((((int)stk + 4) + 0x74), 0xC2AD554, 0xC179840);
            nlGetAverageVector(0xC179840, (((int)stk + 4) + 0x74), (0x8C + ((int)stk + 4)), 1.0f, 0.049999997f);
            camSetEye((0x8C + ((int)stk + 4)), 0x1);
            nlSubVector3op((((int)stk + 4) + 0x74), 0xC2AD560, 0xC17984C);
            nlGetAverageVector(0xC17984C, (((int)stk + 4) + 0x74), (0x80 + ((int)stk + 4)), 1.0f, 0.049999997f);
            camSetTarget((0x80 + ((int)stk + 4)), 0x1);
        }
    } else {
        t13 = *(int *)0xC2AD578;
        if ((int)t13 >= (int)0x50) {
            if ((int)t2 > (int)0x6E) {
                nlSubVector3op((((int)stk + 4) + 0x74), 0xC2AD554, 0xC179840);
                nlGetAverageVector(0xC179840, (((int)stk + 4) + 0x74), (0x8C + ((int)stk + 4)), 1.0f, 0.049999997f);
                camSetEye((0x8C + ((int)stk + 4)), 0x1);
                nlSubVector3op((((int)stk + 4) + 0x74), 0xC2AD560, 0xC17984C);
                nlGetAverageVector(0xC17984C, (((int)stk + 4) + 0x74), (0x80 + ((int)stk + 4)), 1.0f, 0.049999997f);
                camSetTarget((0x80 + ((int)stk + 4)), 0x1);
            }
        } else {
            t26 = *(int *)0xC0D5410;
            *(unsigned int *)(((((int)stk + 4) + 0x50) + 0x14)) = t26;
            t27 = *(int *)0xC0D540C;
            *(unsigned int *)(((((int)stk + 4) + 0x50) + 0x10)) = t27;
            t28 = *(int *)0xC0D5408;
            *(unsigned int *)(((((int)stk + 4) + 0x50) + 0xC)) = t28;
            t29 = *(int *)0xC0D5404;
            *(unsigned int *)(((((int)stk + 4) + 0x50) + 0x8)) = t29;
            t30 = *(int *)0xC0D5400;
            *(unsigned int *)(((((int)stk + 4) + 0x50) + 0x4)) = t30;
            t31 = *(int *)0xC0D53FC;
            *(unsigned int *)(((((int)stk + 4) + 0x50) + 0x0)) = t31;
            t32 = *(int *)0xC0D541C;
            *(unsigned int *)(((((int)stk + 4) + 0x44) + 0x8)) = t32;
            t33 = *(int *)0xC0D5418;
            *(unsigned int *)(((((int)stk + 4) + 0x44) + 0x4)) = t33;
            t34 = *(int *)0xC0D5414;
            *(unsigned int *)(((((int)stk + 4) + 0x44) + 0x0)) = t34;
            t35 = *(int *)0xC0D5428;
            *(unsigned int *)(((((int)stk + 4) + 0x38) + 0x8)) = t35;
            t36 = *(int *)0xC0D5424;
            *(unsigned int *)(((((int)stk + 4) + 0x38) + 0x4)) = t36;
            t37 = *(int *)0xC0D5420;
            *(unsigned int *)(((((int)stk + 4) + 0x38) + 0x0)) = t37;
            t38 = *(int *)0xC2AD54C;
            t39 = *(signed char *)((t38 + 0x14B));
            if ((t39 & 4) == 0) {
                u40 = *(float *)(((((int)stk + 4) + 0x50) + 0x0));
                *(float *)(((((int)stk + 4) + 0x50) + 0x0)) = (u40 * (-1.0f));
                u41 = *(float *)(((((int)stk + 4) + 0x50) + 0xC));
                *(float *)(((((int)stk + 4) + 0x50) + 0xC)) = (u41 * (-1.0f));
                u42 = *(float *)(((int)stk + 72));
                *(float *)(((int)stk + 72)) = (u42 * (-1.0f));
                u43 = *(float *)(((int)stk + 60));
                *(float *)(((int)stk + 60)) = (u43 * (-1.0f));
            }
            *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x8);
            t49 = *(int *)0xC2AD55C;
            *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x8)) = t49;
            t50 = *(int *)0xC2AD558;
            *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x4)) = t50;
            t51 = *(int *)0xC2AD554;
            *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x0)) = t51;
            *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 4) + 0x8) + 0x24);
            nlSqrt((((int)stk + 4) + 0x44), ((((int)stk + 4) + 0x8) + 0x24));
            FUN_0c077210((((int)stk + 4) + 0x50), (((int)stk + 4) + 0x74));
            t54 = *(int *)(((int)stk + 4));
            FUN_0c078a70(((((int)stk + 4) + 0x8) + 0xC), t54, (((int)stk + 4) + 0x74));
            FUN_0c077210(((((int)stk + 4) + 0x50) + 0xC), (((int)stk + 4) + 0x74));
            t57 = *(int *)(((int)stk + 8));
            FUN_0c078a70(((((int)stk + 4) + 0x8) + 0x18), t57, (((int)stk + 4) + 0x74));
            t59 = *(int *)0xC2AD578;
            Bezier((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x74), ((float)(t59 - 7) / 72.0f));
            nlSubVector3op((((int)stk + 4) + 0x68), (((int)stk + 4) + 0x74), 0xC179840);
            nlGetAverageVector(0xC179840, (((int)stk + 4) + 0x68), (0x8C + ((int)stk + 4)), 1.0f, 0.299999982f);
            camSetEye((0x8C + ((int)stk + 4)), 0x1);
            nlSqrt((((int)stk + 4) + 0x38), (((int)stk + 4) + 0x74));
            nlSubVector3op((((int)stk + 4) + 0x68), (((int)stk + 4) + 0x74), 0xC17984C);
            nlGetAverageVector(0xC17984C, (((int)stk + 4) + 0x68), (0x80 + ((int)stk + 4)), 1.0f, 0.049999997f);
            camSetTarget((0x80 + ((int)stk + 4)), 0x1);
        }
    }
    nlPopMatrix(0x1);
    t85 = *(int *)0xC2AD590;
    t87 = t85;
    if ((t85 & 2) == 0) {
        t86 = camRestore();
        t87 = t86;
    }
    return t87;
}

int FUN_0c0792b0(int a4, float f4, float f5, float f6)
{
    int t0;
    float t1;
    float u2;
    float t3;
    float u4;
    int t5;
    float t6;
    float t7;
    float u12;
    float u13;
    float u14;
    float u23;
    int t15;
    float t16;
    float u17;
    int t25;
    float t26;
    float u27;
    float u28;
    float u29;
    float u30;
    float u31;
    float u32;
    float u33;
    float t35;
    float u36;
    int t37;
    float t38;
    float t39;
    float u40;
    float t41;
    int t42;
    float t43;
    float u44;
    float u45;
    float u46;
    float u47;
    float u48;
    int t50;
    int stk[34] = {0};

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(float *)(((int)stk + 16)) = f4;
    *(float *)(((int)stk + 4)) = f6;
    t0 = *(int *)(((int)stk + 8));
    t1 = nlTan((t0 >> 1));
    *(float *)(((int)stk + 12)) = (1.0f / t1);
    u2 = *(float *)0xC14A81C;
    if (u2 != 0.0f) {
        t3 = nlTan((t0 >> 1));
        u4 = *(float *)0xC14A81C;
        t5 = nlArcTan((t3 * (u4 + 1.0f)));
        t6 = nlCos(t5);
        *(float *)(((int)stk + 24)) = (1.0f / t6);
    } else {
        t7 = nlCos((t0 >> 1));
        *(float *)(((int)stk + 24)) = (1.0f / t7);
    }
    u12 = *(float *)0xC14A820;
    u13 = *(float *)(((int)stk + 12));
    u14 = *(float *)(((int)stk + 16));
    u23 = (1.0f / (u14 * u13));
    if (u12 != 0.0f) {
        t15 = nlArcTan((1.0f / (u14 * u13)));
        *(unsigned int *)(((int)stk + 8)) = t15;
        t16 = nlTan(t15);
        u17 = *(float *)0xC14A820;
        u23 = (t16 * (u17 + 1.0f));
    }
    t25 = nlArcTan(u23);
    t26 = nlCos(t25);
    *(float *)0xC14A81C = 0.0f;
    *(float *)0xC14A820 = 0.0f;
    u27 = *(float *)(((int)stk + 24));
    u28 = *(float *)(((int)stk + 12));
    *(float *)0xC14A810 = ((u28 * u27) * 0.5f);
    *(float *)0xC14A814 = (((u14 * u13) * (1.0f / t26)) * 0.5f);
    u29 = *(float *)0xC14A824;
    u30 = *(float *)0xC14A810;
    *(float *)0xC2B3490 = (u29 * u30);
    u31 = *(float *)0xC14A814;
    u32 = *(float *)0xC14A828;
    *(float *)0xC2B3494 = (u32 * u31);
    u33 = *(float *)0xC2B3490;
    if (u33 > (u32 * u31)) {
        *(float *)0xC14A818 = u33;
    } else {
        *(float *)0xC14A818 = (u32 * u31);
    }
    t35 = nlTan((t0 >> 1));
    u36 = *(float *)(((int)stk + 16));
    t37 = nlArcTan((t35 / u36));
    *(float *)(((int)stk + 20)) = (float)t37;
    *(float *)0xC2B3464 = 0.0f;
    *(float *)0xC2B3454 = 0.0f;
    *(float *)0xC2B3480 = 0.0f;
    *(float *)0xC2B3470 = 0.0f;
    t38 = nlCos((t0 >> 1));
    *(float *)0xC2B3450 = t38;
    *(float *)0xC2B3460 = (-t38);
    t39 = nlSin((t0 >> 1));
    *(float *)0xC2B3468 = t39;
    *(float *)0xC2B3458 = t39;
    u40 = *(float *)(((int)stk + 20));
    *(unsigned int *)(((int)stk + 8)) = (int)u40;
    t41 = nlCos((int)u40);
    *(float *)0xC2B3474 = t41;
    *(float *)0xC2B3484 = (-t41);
    t42 = *(int *)(((int)stk + 8));
    t43 = nlSin(t42);
    *(float *)0xC2B3488 = t43;
    *(float *)0xC2B3478 = t43;
    *(float *)0xC2B346C = 0.0f;
    *(float *)0xC2B345C = 0.0f;
    *(float *)0xC2B348C = 0.0f;
    *(float *)0xC2B347C = 0.0f;
    u44 = *(float *)(((int)stk + 12));
    *(float *)(((int)stk + 28)) = u44;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = (u14 * u13);
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = 0.0f;
    *(float *)(((int)stk + 60)) = 0.0f;
    *(float *)(((int)stk + 64)) = 0.0f;
    u45 = *(float *)(((int)stk + 4));
    *(float *)(((int)stk + 68)) = ((f5 + u45) / (f5 - u45));
    *(float *)(((int)stk + 72)) = (-1.0f);
    *(float *)(((int)stk + 76)) = 0.0f;
    *(float *)(((int)stk + 80)) = 0.0f;
    u46 = *(float *)(((int)stk + 4));
    *(float *)(((int)stk + 84)) = (((f5 * u46) * (1.0f + 1.0f)) / (f5 - u45));
    *(float *)(((int)stk + 88)) = 0.0f;
    *(float *)0xC2B7BDC = f5;
    u47 = *(float *)(((int)stk + 4));
    *(float *)0xC2B7BE0 = u47;
    *(float *)0xC2B7BE4 = (1.0f / f5);
    *(float *)0xC2B3174 = f5;
    *(float *)0xC2B315C = (-f5);
    u48 = *(float *)(((int)stk + 4));
    *(float *)0xC2B3178 = u48;
    *(float *)0xC2B3170 = (1.0f / f5);
    nlMultiMatrix((((int)stk + 4) + 0x18));
    t50 = FUN_0c079f10();
    return t50;
}


int Put_SEGA_LOGO2(void)
{
    int t2;
    float u5;
    float u6;
    int t9;
    float u14;
    int t15;
    int t16;
    int t19;
    int t28;
    int t30;
    int t32;
    int t34;
    float u39;
    float u40;
    int t45;
    int t65;
    int t20;
    int t17;
    int stk[42] = {0};

    nlPushMatrix(0x0);
    nlTranslate(0.0f, 0.0f, -50.0f);
    t2 = *(int *)0xC2A93F4;
    if ((int)t2 >= (int)0x78) {
        nlObjPut(0xC464170);
        *(unsigned int *)0xC2A9300 = 0x200A;
        nlObjPutSetFadeColor(0.0f, 0.0f, 0.0f);
        u5 = *(float *)0xC058FB0;
        u6 = *(float *)0xC058FB4;
        FUN_0c05778a(0xC2A92CC, 0xED, u6, u5);
        nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
    } else {
        t9 = 0x0;
        for (;;) {
            nlPushUnitMatrix();
            nlRotateAZ((t9 * 0x1999));
            *(unsigned int *)(((int)stk + 4)) = (signed char)(((t9 << 1) + t9) << 2);
            nlSqrt(0xC2A93F8, ((signed char)(((t9 << 1) + t9) << 2) + (((int)stk + 4) + 0x4)));
            nlPopMatrix(0x1);
            u14 = *(float *)0xC2A93FC;
            if (u14 > 0.0f) {
                if ((int)t9 >= (int)0x3) {
                    if ((int)t9 > (int)0x7) {
                        t15 = *(short *)((((unsigned char)(((t9 << 2) + t9) << 2) + 0xC2A932C) + 0xC));
                        t17 = (t15 - 0x222);
                    } else {
                        t16 = *(short *)((((unsigned char)(((t9 << 2) + t9) << 2) + 0xC2A932C) + 0xC));
                        t17 = (t16 + 0x222);
                    }
                    t20 = t17;
                } else {
                    t19 = *(short *)((((unsigned char)(((t9 << 2) + t9) << 2) + 0xC2A932C) + 0xC));
                    t20 = (t19 - 0x222);
                }
                *(unsigned short *)((((unsigned char)(((t9 << 2) + t9) << 2) + 0xC2A932C) + 0xC)) = t20;
            }
            nlPushMatrix(0x0);
            t28 = *(int *)(((int)stk + 4));
            nlTranslateV((t28 + (((int)stk + 4) + 0x4)));
            t30 = *(short *)((((unsigned char)(((t9 << 2) + t9) << 2) + 0xC2A932C) + 0xC));
            nlRotateAX((unsigned short)t30);
            t32 = *(int *)((((t9 << 2) + 0xC130D58) + 0x0));
            FUN_0c089e00(t32);
            t34 = *(int *)((((t9 << 2) + 0xC130D58) + 0x0));
            nlObjPut(t34);
            nlPopMatrix(0x1);
            t9 = (t9 + 0x1);
            if ((int)t9 >= (int)0xA) {
                break;
            }
        }
        u39 = *(float *)0xC2A93FC;
        if (u39 > 0.0f) {
            u40 = *(float *)0xC2A93FC;
            *(float *)0xC2A93FC = (u40 - 0.299999982f);
        }
        t45 = *(int *)0xC2A93F4;
        *(unsigned int *)0xC2A93F4 = (t45 + 0x1);
    }
    FUN_0c074680();
    t65 = nlPopMatrix(0x1);
    return t65;
}

int _power(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t5;
    int t8;
    int t13;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t34;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t37;
    int t38;
    int t40;
    int t41;
    int t42;
    int t44;
    int t45;
    int t46;
    int t47;
    int t57;
    int t58;
    int t59;
    int t60;
    int t14;
    int t15;
    int t9;
    int t10;
    int t33;
    int t30;
    int stk[19] = {0};

    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    t0 = 0x1;
    t1 = (-a4);
    if ((int)a4 >= 0) {
        t0 = 0x0;
        t1 = a4;
    }
    t3 = (int)((int)t1 / (int)0x1B);
    t4 = (int)((int)t1 % (int)0x1B);
    if (t0 == 1) {
        if (t4 != 0) {
            t5 = *(short *)0xC0DAEA8;
            *(unsigned short *)(((int)stk + 4)) = t5;
            memmove((((int)stk + 4) + 0x1C), 0xC0DAE58, 0x8);
            *(unsigned char *)(((((int)stk + 4) + 0x1C) + 0x8)) = 0x0;
            t9 = 0x0;
            t10 = (0x1B - t4);
        } else {
            memset((((int)stk + 4) + 0x1C), 0x0, 0x9);
            t8 = *(signed char *)(((((int)stk + 4) + 0x1C) + 0x0));
            *(unsigned char *)(((((int)stk + 4) + 0x1C) + 0x0)) = (t8 | 0x80);
            *(unsigned short *)(((int)stk + 4)) = 0x0;
            t9 = (t8 | 0x80);
            t10 = t4;
        }
        t14 = t9;
        t15 = t10;
    } else {
        memset((((int)stk + 4) + 0x1C), 0x0, 0x9);
        t13 = *(signed char *)(((((int)stk + 4) + 0x1C) + 0x0));
        *(unsigned char *)(((((int)stk + 4) + 0x1C) + 0x0)) = (t13 | 0x80);
        *(unsigned short *)(((int)stk + 4)) = 0x0;
        t14 = (t13 | 0x80);
        t15 = t4;
    }
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0x1C);
    t17 = t14;
    t18 = (((int)stk + 4) + 0x1C);
    t19 = 0xC0DAE18;
    t20 = 0x0;
    t21 = t3;
    t22 = ((((t0 << 2) << 2) << 2) + 0xC0DAE18);
    t23 = (((t0 << 2) << 2) + 0xC0DAE98);
    for (;;) {
        t34 = t19;
        if ((t21 & 0x1) != 0) {
            t24 = *(short *)((t23 + 0x0));
            t25 = _mult64(((int)stk + 4), (((int)stk + 4) + 0x1C), t24, t22);
            t17 = t25;
            t19 = 0xB4;
            t26 = FUN_0c089978((((int)stk + 4) + 0x1C), 0x40);
            t17 = t26;
            if (t17 != 0) {
                t27 = *(short *)(((int)stk + 4));
                t19 = t27;
                t19 = (t19 + 0x1);
                *(unsigned short *)(((int)stk + 4)) = t19;
                t28 = *(int *)(((int)stk + 8));
                t29 = *(signed char *)((t28 + 0x0));
                t17 = t29;
                t17 = (t17 | 0x80);
                *(unsigned char *)((t28 + 0x0)) = t17;
                t30 = t19;
            }
            t34 = t30;
        } else {
            t33 = t18;
        }
        t18 = t33;
        t19 = t34;
        t20 = (t20 + 0x1);
        t21 = (t21 >> 1);
        t23 = (t23 + 0x2);
        t22 = (t22 + 0x8);
        if ((int)t20 >= (int)0x8) {
            break;
        }
    }
    if (t15 != 0) {
        t37 = *(int *)(((int)stk + 12));
        t38 = *(int *)(((int)stk + 16));
        _pow10(t15, t37, t38);
        t40 = *(int *)(((int)stk + 12));
        t41 = *(short *)((t40 + 0x0));
        t42 = *(int *)(((int)stk + 16));
        _mult64(((int)stk + 4), (((int)stk + 4) + 0x1C), t41, t42);
        t44 = FUN_0c089978((((int)stk + 4) + 0x1C), 0x40);
        if (t44 == 1) {
            t45 = *(short *)(((int)stk + 4));
            *(unsigned short *)(((int)stk + 4)) = (t45 + 0x1);
            t46 = *(int *)(((int)stk + 8));
            t47 = *(signed char *)((t46 + 0x0));
            *(unsigned char *)((t46 + 0x0)) = (t47 | 0x80);
        }
    }
    t57 = *(short *)(((int)stk + 4));
    t58 = *(int *)(((int)stk + 12));
    *(unsigned short *)((t58 + 0x0)) = t57;
    t59 = *(int *)(((int)stk + 16));
    t60 = memmove(t59, (((int)stk + 4) + 0x1C), 0x8);
    return t60;
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
    nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC));
    nlSqrt(((int)stk + 4), ((int)stk + 4));
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

int kmiCreateRegionArray(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t5;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t30;
    int t24;
    int t27;
    int t25;
    int t51;
    int t52;
    int t54;
    int t63;
    int t65;
    int t67;
    int t69;
    int t71;
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
    int t87;
    int t88;
    int t89;
    int t90;
    int t91;
    int t92;
    int t93;
    int t94;
    int t220;
    int t95;
    int t96;
    int t97;
    int t98;
    int t99;
    int t100;
    int t105;
    int t106;
    int t107;
    int t108;
    int t114;
    int t129;
    int t115;
    int t116;
    int t124;
    int t117;
    int t118;
    int t119;
    int t131;
    int t132;
    int t133;
    int t134;
    int t135;
    int t138;
    int t136;
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
    int t150;
    int t151;
    int t152;
    int t153;
    int t154;
    int t155;
    int t156;
    int t157;
    int t163;
    int t164;
    int t165;
    int t166;
    int t173;
    int t174;
    int t175;
    int t176;
    int t177;
    int t178;
    int t179;
    int t180;
    int t181;
    int t182;
    int t184;
    int t185;
    int t186;
    int t187;
    int t188;
    int t189;
    int t190;
    int t191;
    int t192;
    int t193;
    int t194;
    int t195;
    int t196;
    int t197;
    int t198;
    int t202;
    int t203;
    int t204;
    int t205;
    int t207;
    int t209;
    int t211;
    int t216;
    int t219;
    int t217;
    int t213;
    int stk[57] = {0};

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 88)) = 0x0;
    t0 = *(int *)0xC2EA844;
    t1 = 0x0;
    if (t0 == 1) {
        t1 = 0x1;
    }
    t3 = *(int *)0xC2EA88C;
    if (t3 == 0) {
        t4 = *(int *)(((int)stk + 4));
        t5 = *(int *)(((int)stk + 8));
        FUN_0c15e85c(t5, t4, a8);
    }
    t14 = *(int *)(((int)stk + 8));
    t15 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 8)) = (t14 * t15);
    t16 = *(int *)(((int)stk + 16));
    t17 = *(int *)(((((a8 << 2) << 2) << 1) + 0xC2EAAF0));
    *(unsigned int *)(((int)stk + 12)) = ((t16 * (((((t14 * t15) << 1) + (t14 * t15)) << 2) << 1)) + t17);
    t18 = *(int *)0xC2EA684;
    if ((t18 & 32) != 0) {
        t19 = *(int *)0xC2EAAE4;
        if (t19 != 0) {
            t20 = *(int *)(((((a8 << 2) << 2) << 1) + 0xC2EAAEC));
            t21 = *(int *)(((0xC2EAAEC + (((a8 << 2) << 2) << 1)) + 0x4));
            t22 = kmiCreateDummyTranslucentObject((t21 + ((((((t14 * t15) << 1) + (t14 * t15)) << 2) << 1) << 2)), t20);
            *(unsigned int *)(((int)stk + 24)) = t22;
            t23 = *(int *)0xC2EAB30;
            t30 = 0x0;
            if (t23 == 0) {
                t24 = *(int *)0xC2EAB38;
                t27 = 0x0;
                if (t24 != 0) {
                    t25 = 0x0;
                    if (t1 != 0) {
                        t25 = 0x1;
                    }
                    t27 = t25;
                }
                t30 = t27;
            }
            *(unsigned int *)(((int)stk + 88)) = t30;
        }
    }
    t51 = *(int *)0xC2EA684;
    if ((t51 & 128) != 0) {
        t52 = *(int *)(((int)stk + 12));
        kmiCreateDummyRegionforAvoidCacheBug();
        t54 = *(int *)(((int)stk + 12));
        *(unsigned int *)(((int)stk + 12)) = (t54 + 0x18);
    }
    t63 = *(int *)0xC2EAB30;
    if (t63 == 0) {
        *(unsigned int *)(((int)stk + 76)) = 0x80000000;
    } else {
        *(unsigned int *)(((int)stk + 76)) = 0x0;
    }
    t65 = *(int *)0xC2EAB34;
    if (t65 == 0) {
        *(unsigned int *)(((int)stk + 80)) = 0x80000000;
    } else {
        *(unsigned int *)(((int)stk + 80)) = 0x0;
    }
    t67 = *(int *)0xC2EAB38;
    if (t67 == 0) {
        *(unsigned int *)(((int)stk + 84)) = 0x80000000;
    } else {
        *(unsigned int *)(((int)stk + 84)) = 0x0;
    }
    t69 = *(int *)0xC2EAB3C;
    if (t69 == 0) {
        *(unsigned int *)(((int)stk + 96)) = 0x80000000;
    } else {
        *(unsigned int *)(((int)stk + 96)) = 0x0;
    }
    t71 = *(int *)0xC2EAB40;
    if (t71 == 0) {
        *(unsigned int *)(((int)stk + 92)) = 0x80000000;
    } else {
        *(unsigned int *)(((int)stk + 92)) = 0x0;
    }
    t73 = *(int *)0xC2EAB30;
    t74 = *(int *)((0xC1784A4 + (t73 << 2)));
    *(unsigned int *)(((int)stk + 56)) = (t74 << 2);
    t75 = *(int *)0xC2EAB34;
    t76 = *(int *)((0xC1784A4 + (t75 << 2)));
    *(unsigned int *)(((int)stk + 68)) = (t76 << 2);
    t77 = *(int *)0xC2EAB38;
    t78 = *(int *)((0xC1784A4 + (t77 << 2)));
    *(unsigned int *)(((int)stk + 64)) = (t78 << 2);
    t79 = *(int *)0xC2EAB3C;
    t80 = *(int *)((0xC1784A4 + (t79 << 2)));
    *(unsigned int *)(((int)stk + 60)) = (t80 << 2);
    t81 = *(int *)0xC2EAB40;
    t82 = *(int *)((0xC1784A4 + (t81 << 2)));
    *(unsigned int *)(((int)stk + 72)) = (t82 << 2);
    t83 = *(int *)(((((a8 << 2) << 2) << 1) + 0xC2EAAF8));
    *(unsigned int *)(((int)stk + 28)) = t83;
    t84 = *(int *)0xC2EAB30;
    t85 = *(int *)(((int)stk + 8));
    t86 = *(int *)((0xC1784A4 + (t84 << 2)));
    t87 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 36)) = (((t86 * t85) << 2) + t87);
    t88 = *(int *)0xC2EAB34;
    t89 = *(int *)((0xC1784A4 + (t88 << 2)));
    *(unsigned int *)(((int)stk + 32)) = ((((t86 * t85) << 2) + t87) + ((t89 * t85) << 2));
    t90 = *(int *)0xC2EAB38;
    t91 = *(int *)((0xC1784A4 + (t90 << 2)));
    t92 = *(int *)(((int)stk + 32));
    *(unsigned int *)(((int)stk + 40)) = (((t91 * t85) << 2) + t92);
    t93 = *(int *)0xC2EAB3C;
    t94 = *(int *)((0xC1784A4 + (t93 << 2)));
    *(unsigned int *)(((int)stk + 48)) = ((((t91 * t85) << 2) + t92) + ((t94 * t85) << 2));
    *(unsigned int *)(((int)stk + 52)) = (t85 - 1);
    *(unsigned int *)(((int)stk + 44)) = ((t1 & 0x1) << 29);
    t220 = (t93 << 2);
    if ((unsigned int)0x0 >= (unsigned int)t85) {
    } else {
        t95 = 0x0;
        t96 = 0x0;
        for (;;) {
            if (a9 != 0) {
                if (a9 != 1) {
                } else {
                    t95 = 0xC2EAADC;
                    t97 = *(int *)((t95 + 0x0));
                    t98 = (int)((unsigned int)t96 % (unsigned int)t97);
                    *(unsigned int *)(((int)stk + 16)) = t98;
                    t99 = *(int *)((t95 + 0x0));
                    t100 = (int)((unsigned int)t96 / (unsigned int)t99);
                    *(unsigned int *)(((int)stk + 20)) = t100;
                }
            } else {
                t95 = 0xC080FC4;
                t105 = *(int *)0xC2EAAE0;
                t106 = (int)((unsigned int)t96 / (unsigned int)t105);
                t95 = 0xC2EAAE0;
                *(unsigned int *)(((int)stk + 16)) = t106;
                t107 = *(int *)((t95 + 0x0));
                t95 = 0xC081134;
                t108 = (int)((unsigned int)t96 % (unsigned int)t107);
                *(unsigned int *)(((int)stk + 20)) = t108;
            }
            t95 = 0xC2EA848;
            t114 = *(int *)((t95 + 0x0));
            t129 = 0x0;
            if (t114 == 1) {
                t115 = *(int *)(((int)stk + 16));
                t116 = *(int *)0xC2EA84C;
                t124 = 0x80000000;
                if ((unsigned int)t116 >= (unsigned int)t115) {
                    t117 = *(int *)(((int)stk + 20));
                    t118 = *(int *)0xC2EA850;
                    t119 = 0x0;
                    if ((unsigned int)t118 < (unsigned int)t117) {
                        t119 = 0x80000000;
                    }
                    t124 = t119;
                }
                t129 = t124;
            }
            t131 = *(int *)0xC2EAADC;
            t95 = t131;
            t132 = *(int *)(((int)stk + 20));
            t133 = *(int *)(((int)stk + 16));
            t134 = *(int *)(((int)stk + 52));
            t135 = (t132 * t95);
            t95 = t134;
            t138 = ((((t96 == t95)) ? 1 : 0) & 0x1);
            t136 = (int)(((unsigned int)t138 >> 1) | ((unsigned int)t138 << 31));
            t95 = t136;
            t139 = *(int *)(((int)stk + 44));
            t95 = (t95 | ((t132 & 0x3F) << 8));
            t95 = (t95 | ((t133 & 0x3F) << 2));
            t95 = (t95 | t139);
            *(unsigned int *)(((int)stk + 172)) = t95;
            t140 = *(int *)(((int)stk + 56));
            t141 = *(int *)(((int)stk + 28));
            t95 = t141;
            t142 = *(int *)(((int)stk + 76));
            *(unsigned int *)(((int)stk + 176)) = ((((t140 * (t135 + t133)) + t95) | t142) | t129);
            t143 = *(int *)(((int)stk + 68));
            t144 = *(int *)(((int)stk + 36));
            t145 = *(int *)(((int)stk + 80));
            *(unsigned int *)(((int)stk + 180)) = ((((t143 * (t135 + t133)) + t144) | t145) | t129);
            t146 = *(int *)(((int)stk + 64));
            t95 = t146;
            t147 = *(int *)(((int)stk + 32));
            t148 = *(int *)(((int)stk + 84));
            t95 = (t95 * (t135 + t133));
            t95 = (t95 + t147);
            t95 = (t95 | t148);
            t95 = (t95 | t129);
            *(unsigned int *)(((int)stk + 184)) = t95;
            t150 = *(int *)(((int)stk + 60));
            t151 = *(int *)(((int)stk + 40));
            t95 = t151;
            t152 = *(int *)(((int)stk + 96));
            *(unsigned int *)(((int)stk + 188)) = ((((t150 * (t135 + t133)) + t95) | t152) | t129);
            t153 = *(int *)0xC1784B4;
            if (t153 != 0) {
                t154 = *(int *)(((int)stk + 184));
                *(unsigned int *)(((int)stk + 192)) = t154;
            } else {
                t155 = *(int *)(((int)stk + 48));
                t95 = t155;
                t156 = *(int *)(((int)stk + 72));
                t157 = *(int *)(((int)stk + 92));
                *(unsigned int *)(((int)stk + 192)) = ((((t156 * (t135 + t133)) + t95) | t157) | t129);
            }
            t163 = *(int *)0xC2EA854;
            t95 = t163;
            if (t95 != 0) {
                t95 = 0xC2EA858;
                t164 = *(int *)((t95 + 0x0));
                if (t164 == 1) {
                    t165 = *(int *)(((int)stk + 180));
                    *(unsigned int *)(((0xB8 + ((int)stk + 4)) + 0x0)) = t165;
                } else {
                    t166 = *(int *)(((int)stk + 188));
                    *(unsigned int *)(((int)stk + 180)) = t166;
                }
            }
            t95 = 0xC2EA684;
            t173 = *(int *)((t95 + 0x0));
            if ((t173 & 32) == 0) {
                t174 = *(int *)(((int)stk + 12));
                t175 = kmiCopyToPVRMemory((((((t96 << 1) + t96) << 2) << 1) + t174));
                t217 = t175;
            } else {
                t176 = *(int *)0xC2EAAE4;
                t177 = *(int *)(((int)stk + 172));
                if (t176 == 0) {
                    *(unsigned int *)(((int)stk + 148)) = t177;
                    t178 = *(int *)(((int)stk + 172));
                    *(unsigned int *)(((int)stk + 172)) = (t178 & 0x7FFFFFFF);
                    t179 = *(int *)(((int)stk + 172));
                    t95 = (t179 & 0xBFFFFFFF);
                    t95 = (t95 | 0x10000000);
                    *(unsigned int *)(((int)stk + 172)) = t95;
                    t180 = *(int *)(((int)stk + 148));
                    t95 = t180;
                    t95 = (t95 | 0x40000000);
                    *(unsigned int *)(((int)stk + 148)) = t95;
                    t95 = 0xEFFFFFFF;
                    t181 = *(int *)(((int)stk + 148));
                    *(unsigned int *)(((0x90 + ((int)stk + 4)) + 0x0)) = (t181 & t95);
                    *(unsigned int *)(((int)stk + 152)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 156)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 160)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 164)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 168)) = 0x80000000;
                    t182 = *(int *)(((int)stk + 12));
                    *(unsigned int *)(((int)stk + 4)) = (((((t96 << 1) + t96) << 2) << 2) + t182);
                    kmiCopyToPVRMemory((((((t96 << 1) + t96) << 2) << 2) + t182));
                    t184 = *(int *)(((int)stk + 4));
                    t213 = (t184 + 0x18);
                } else {
                    t95 = 0xA8;
                    *(unsigned int *)(((int)stk + 148)) = t177;
                    *(unsigned int *)(((int)stk + 124)) = t177;
                    *(unsigned int *)(((int)stk + 100)) = t177;
                    t95 = (t95 + ((int)stk + 4));
                    t185 = *(int *)(((int)stk + 172));
                    *(unsigned int *)(((int)stk + 172)) = (t185 & 0x7FFFFFFF);
                    t186 = *(int *)(((int)stk + 148));
                    *(unsigned int *)(((int)stk + 148)) = (t186 & 0x7FFFFFFF);
                    t187 = *(int *)(((int)stk + 124));
                    *(unsigned int *)(((int)stk + 124)) = (t187 & 0x7FFFFFFF);
                    t188 = *(int *)(((int)stk + 172));
                    *(unsigned int *)((t95 + 0x0)) = (t188 & 0xBFFFFFFF);
                    t189 = *(int *)(((int)stk + 148));
                    t95 = t189;
                    t95 = (t95 | 0x40000000);
                    *(unsigned int *)(((int)stk + 148)) = t95;
                    t190 = *(int *)(((int)stk + 124));
                    t95 = t190;
                    t95 = (t95 | 0x40000000);
                    *(unsigned int *)(((int)stk + 124)) = t95;
                    t191 = *(int *)(((int)stk + 100));
                    t95 = t191;
                    t95 = (t95 | 0x40000000);
                    *(unsigned int *)(((int)stk + 100)) = t95;
                    t192 = *(int *)(((int)stk + 172));
                    t95 = t192;
                    t95 = (t95 | 0x10000000);
                    *(unsigned int *)(((int)stk + 172)) = t95;
                    t193 = *(int *)(((int)stk + 148));
                    t95 = t193;
                    t95 = (t95 | 0x10000000);
                    *(unsigned int *)(((int)stk + 148)) = t95;
                    t194 = *(int *)(((int)stk + 124));
                    t95 = t194;
                    t95 = (t95 | 0x10000000);
                    *(unsigned int *)(((int)stk + 124)) = t95;
                    t195 = *(int *)(((int)stk + 100));
                    t95 = 0xEFFFFFFF;
                    *(unsigned int *)(((((int)stk + 4) + 0x60) + 0x0)) = (t195 & t95);
                    t196 = *(int *)(((int)stk + 148));
                    *(unsigned int *)(((0x90 + ((int)stk + 4)) + 0x0)) = (t196 & 0xDFFFFFFF);
                    t197 = *(int *)(((int)stk + 88));
                    if (t197 != 0) {
                        t198 = *(int *)(((int)stk + 24));
                        *(unsigned int *)(((int)stk + 176)) = t198;
                    }
                    *(unsigned int *)(((int)stk + 152)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 156)) = 0x80000000;
                    t202 = *(int *)(((int)stk + 24));
                    t95 = t202;
                    *(unsigned int *)(((int)stk + 160)) = t95;
                    *(unsigned int *)(((int)stk + 164)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 168)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 128)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 132)) = 0x80000000;
                    t203 = *(int *)(((int)stk + 184));
                    t95 = t203;
                    *(unsigned int *)(((int)stk + 136)) = t95;
                    t204 = *(int *)(((int)stk + 188));
                    *(unsigned int *)(((int)stk + 140)) = t204;
                    *(unsigned int *)(((int)stk + 144)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 184)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 188)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 104)) = 0x80000000;
                    t95 = t96;
                    t95 = (t95 << 1);
                    *(unsigned int *)(((int)stk + 108)) = 0x80000000;
                    t95 = (t95 + t96);
                    *(unsigned int *)(((int)stk + 112)) = 0x80000000;
                    t95 = (t95 << 2);
                    t95 = (t95 << 2);
                    *(unsigned int *)(((int)stk + 116)) = 0x80000000;
                    t95 = (t95 << 1);
                    *(unsigned int *)(((int)stk + 120)) = 0x80000000;
                    t205 = *(int *)(((int)stk + 12));
                    t95 = (t95 + t205);
                    *(unsigned int *)(((int)stk + 4)) = t95;
                    kmiCopyToPVRMemory(t95);
                    t207 = *(int *)(((int)stk + 4));
                    kmiCopyToPVRMemory((t207 + 0x18));
                    t209 = *(int *)(((int)stk + 4));
                    kmiCopyToPVRMemory((t209 + 0x30));
                    t211 = *(int *)(((int)stk + 4));
                    t213 = (t211 + 0x48);
                }
                t216 = kmiCopyToPVRMemory(t213);
                t217 = t216;
            }
            t219 = *(int *)(((int)stk + 8));
            t95 = t219;
            t96 = (t96 + 0x1);
            if ((unsigned int)t96 < (unsigned int)t95) continue;
            break;
        }
        t220 = t217;
    }
    return t220;
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

int write_dir(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t18;
    int t20;
    int t21;
    int t22;
    int t23;
    int t27;
    int t29;
    int t3;
    int t5;
    int t6;
    int stk[12] = {0};

    t0 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
    t1 = *(int *)((t0 + 0x18));
    t2 = *(int *)((t0 + 0x14));
    *(unsigned int *)(((int)stk + 8)) = t1;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    t4 = 0x0;
    t7 = (unsigned short)t2;
    for (;;) {
        t8 = *(int *)(((int)stk + 8));
        if ((int)t4 >= (int)t8) {
            t9 = *(int *)(((int)stk + 12));
            if (t9 != 0) {
                t10 = write_fat(a4);
                if ((int)t10 >= 0) {
                    t11 = write_sys(a4);
                    if ((int)t11 < 0) {
                        return t11;
                    }
                    return 0x0;
                }
                return t10;
            }
            return 0x0;
        }
        t12 = *(signed char *)((((((a4 * 0x148) + 0xC2EE990) + 0x48) + t4) + 0x0));
        if (t12 != 0) {
            *(unsigned int *)(((int)stk + 4)) = ((t4 << 8) << 1);
            for (;;) {
                t13 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x28));
                t14 = *(int *)(((int)stk + 4));
                t15 = vmsfs_write_retry(a4, t7, (t13 + t14));
                if (t15 == 0) {
                    break;
                }
                if (t15 != 0xFFFFFF01) {
                    *(unsigned int *)(((int)stk + 12)) = 0x1;
                    t16 = get_fat(a4, t7);
                    t5 = (unsigned short)t16;
                    set_fat(a4, t7);
                    t18 = search_fat_dir(a4, 0xFFFC);
                    t6 = t18;
                    if ((int)t6 < 0) {
                        return 0xFFFFFF04;
                    }
                    set_fat(a4, t6);
                    if (t4 == 0) {
                        t20 = *(int *)0xC2EE98C;
                        t21 = *(int *)((t20 + 0x10));
                        t22 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                        t23 = ((int (*)(int, int, int))(t21))(t22, 0x4A, t6);
                    } else {
                        set_fat(a4, t3);
                    }
                    t3 = t7;
                    t7 = t6;
                    continue;
                }
                return t15;
            }
            t27 = get_fat(a4, t7);
            t3 = t7;
            *(unsigned char *)((((((a4 * 0x148) + 0xC2EE990) + 0x48) + t4) + 0x0)) = 0x0;
            t5 = (unsigned short)t27;
            t7 = t5;
            t4 = (t4 + 0x1);
            continue;
        }
        t29 = get_fat(a4, t7);
        t3 = t7;
        t5 = (unsigned short)t29;
        t7 = t5;
        t4 = (t4 + 0x1);
    }
}
