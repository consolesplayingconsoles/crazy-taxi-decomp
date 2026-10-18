/* Straight-line functions with calls and guards (batch gen_af): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ExecAdvCamera(void);
int FUN_0c0287d4(float, float);
int FUN_0c0288ca(int, int, int);
int FUN_0c0288d4(float, float);
int FUN_0c0288e0(int, float);
int FUN_0c028b06(void);
int FUN_0c028f50(void);
int FUN_0c077f80(int, float, float);
int FUN_0c1534a0(int, int, int);
int FUN_0c1534ca(int);
int FUN_0c1534e8(int, int, int);
int FUN_0c1534fc(int, int, int);
int GetCollision2D(int, float);
int ResetSpark(void);
int SetCameraMode(int);
int camSetAngles(int, int, int, int);
int camSetTarget(int, int);
int kmiAddSysConfigFlag(int);
int kmiCopyToPVRMemory(int, int, int);
int kmiFBalloc(int, int);
int kmiGetDisplayData(int, int, int, int);
int kmiGetSysConfigFlag(void);
int nlAddVector(int, int);
int nlObjPut(int);
int nlPopMatrix(int);
int nlScale(float, float, float);
int nlScaleUnitVector(int, int, float);
int nlSubVector(int, int, int, int);
int nlUnitRotation(void);

int FUN_0c0289be(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    float u4;
    int t5;
    int t9;
    int t10;
    int t11;
    int t13;
    int t14;
    int t16;
    int t18;
    int t20;
    int t29;
    int t21;
    int t17;
    int stk[9];

    t0 = *(int *)0xC0E4E38;
    if (t0 != 1) {
        if (t0 != 2) {
            if (t0 != 3) {
                if (t0 != 4) {
                    return t0;
                }
                return FUN_0c028f50();
            }
            return ExecAdvCamera();
        }
        return FUN_0c028b06();
    }
    t1 = *(int *)0xC17914C;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t1;
    t2 = *(int *)0xC179148;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t2;
    t3 = *(int *)0xC179144;
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t3;
    u4 = *(float *)(((int)stk + 8));
    *(float *)(((int)stk + 8)) = (u4 + 5.0f);
    t5 = *(int *)0xC179974;
    if (t5 != 0) {
        FUN_0c0288e0(0x0, 60.0f);
        camSetTarget(((int)stk + 4), 0x0);
        FUN_0c0287d4(0.299999982f, 0.299999982f);
        t9 = *(int *)0xC2A4E50;
        if (t9 == 1) {
            t10 = *(int *)0xC1EE20C;
            if (t10 == 1) {
                t11 = *(short *)0xC179152;
                camSetAngles(0x0, ((unsigned short)t11 - 24576), 0x0, 0x0);
                t13 = *(short *)0xC179152;
                t17 = ((unsigned short)t13 - 24576);
            } else {
                t14 = *(short *)0xC179152;
                camSetAngles(0x0, (unsigned short)t14, 0x0, 0x0);
                t16 = *(short *)0xC179152;
                t17 = (unsigned short)t16;
            }
            t21 = t17;
        } else {
            t18 = *(short *)0xC179152;
            camSetAngles(0x0, (unsigned short)t18, 0x0, 0x0);
            t20 = *(short *)0xC179152;
            t21 = (unsigned short)t20;
        }
        camSetAngles(0xFFFFC000, t21, 0xFFFFD000, 0x1);
        FUN_0c0288d4(9.99999975e-06f, 1.0f);
        FUN_0c0288ca(0x8, 0x90, 0x10);
        SetCameraMode(0x2);
        ResetSpark();
        *(unsigned int *)0xC179974 = 0x0;
    }
    t29 = camSetTarget(((int)stk + 4), 0x2);
    return t29;
}

int Put2DObj(int a4, float f4, float f5)
{
    FUN_0c077f80(a4, f4, f5);
    nlUnitRotation();
    nlScale(f4, f5, 1.0f);
    nlObjPut(a4);
    return nlPopMatrix(0x1);
}

void getReplayPassenger(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    float u7;
    int t11;
    int t12;
    float u13;
    float u14;
    float u15;
    float u18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int stk[7];

    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = *(int *)0xC0F2B30;
    if ((int)t0 < (int)0xB) {
        t1 = *(int *)0xC1EE20C;
        t2 = 0xC0F3A40;
        if (t1 == 0) {
            t2 = 0xC0F3540;
        }
        *(unsigned int *)((((((t0 << 2) << 2) << 1) + t2) + 0x10)) = a4;
        t3 = *(int *)(((int)stk + 4));
        *(unsigned int *)((((((t0 << 2) << 2) << 1) + t2) + 0x14)) = t3;
        *(unsigned int *)((((((t0 << 2) << 2) << 1) + t2) + 0x18)) = a6;
        *(unsigned int *)((((((t0 << 2) << 2) << 1) + t2) + 0x1C)) = a7;
        t4 = *(int *)((a8 + 0x8));
        *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = t4;
        t5 = *(int *)((a8 + 0x4));
        *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = t5;
        t6 = *(int *)((a8 + 0x0));
        *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t6;
        u7 = *(float *)0xC179148;
        *(float *)(((int)stk + 12)) = u7;
        nlSubVector((((int)stk + 4) + 0x4), 0xC179144, a6, a7);
        nlScaleUnitVector((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x4), 50.0f);
        nlAddVector((((int)stk + 4) + 0x4), 0xC179144);
        t11 = GetCollision2D((((int)stk + 4) + 0x4), 10.0f);
        t12 = *(int *)((t11 + 0x1C));
        if (t12 != -1) {
            u13 = *(float *)((t11 + 0x18));
            u14 = *(float *)(((int)stk + 12));
            if (u13 > u14) {
                u15 = *(float *)((t11 + 0x18));
                *(float *)(((int)stk + 12)) = u15;
            }
        }
        u18 = *(float *)(((int)stk + 12));
        *(float *)(((int)stk + 12)) = (u18 + 4.0f);
        t19 = *(int *)(((int)stk + 4));
        t20 = *(int *)0xC2A62AC;
        t21 = *(int *)(((((int)stk + 4) + 0x4) + 0x8));
        *(unsigned int *)((((((t19 << 1) + t19) << 2) + t20) + 0x8)) = t21;
        t22 = *(int *)(((((int)stk + 4) + 0x4) + 0x4));
        *(unsigned int *)((((((t19 << 1) + t19) << 2) + t20) + 0x4)) = t22;
        t23 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
        *(unsigned int *)((((((t19 << 1) + t19) << 2) + t20) + 0x0)) = t23;
    }
}

void kmiProcessVertex_06(int a4)
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
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    float u16;
    float u17;
    float u18;
    float u19;
    int t20;
    float u21;
    float u22;
    float u23;
    float u24;
    int t25;
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
    float u36;
    float u37;
    float u38;
    float u39;
    int t40;
    float u41;
    float u42;
    float u43;
    float u44;
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
    float u56;
    float u57;
    float u58;
    float u59;
    int t60;
    float u61;
    float u62;
    float u63;
    float u64;
    int t65;
    int t66;
    int t68;
    int t69;
    int stk[12];

    t0 = *(int *)((a4 + 0x0));
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t0;
    t1 = *(int *)((a4 + 0x4));
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t1;
    t2 = *(int *)((a4 + 0x8));
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x0)) = t2;
    t3 = *(int *)0xC2EA820;
    t4 = *(int *)0xC2EA824;
    t5 = *(int *)0xC2EA828;
    *(unsigned int *)0xC2EA724 = t3;
    *(unsigned int *)0xC2EA728 = t4;
    *(unsigned int *)0xC2EA72C = t5;
    t6 = *(int *)((((int)stk + 4) + 0x0));
    t7 = *(int *)((t6 + 0x4));
    *(unsigned int *)0xC2EA730 = t7;
    t8 = *(int *)((((int)stk + 4) + 0x0));
    t9 = *(int *)((t8 + 0x8));
    *(unsigned int *)0xC2EA734 = t9;
    t10 = *(int *)((((int)stk + 4) + 0x0));
    t11 = *(int *)((t10 + 0xC));
    *(unsigned int *)0xC2EA738 = t11;
    t12 = *(int *)((((int)stk + 4) + 0x0));
    t13 = *(int *)((t12 + 0x10));
    t14 = FUN_0c1534fc(t3, 0x6, t13);
    t15 = *(int *)((((int)stk + 4) + 0x0));
    u16 = *(float *)(((0x20 + t15) + 0x0));
    u17 = *(float *)(((0x24 + t15) + 0x0));
    u18 = *(float *)(((0x28 + t15) + 0x0));
    u19 = *(float *)(((0x2C + t15) + 0x0));
    *(unsigned int *)(((t14 << 2) + 0xC2EA724)) = ((((((int)(u16 * 255.0f) << 16) << 8) | ((int)(u17 * 255.0f) << 16)) | ((int)(u18 * 255.0f) << 8)) | (int)(u19 * 255.0f));
    t20 = *(int *)((((int)stk + 4) + 0x0));
    u21 = *(float *)((t20 + 0x30));
    u22 = *(float *)((t20 + 0x34));
    u23 = *(float *)((t20 + 0x38));
    u24 = *(float *)((t20 + 0x3C));
    t25 = FUN_0c1534e8(t3, (t14 + 0x1), ((((((int)(u21 * 255.0f) << 16) << 8) | ((int)(u22 * 255.0f) << 16)) | ((int)(u23 * 255.0f) << 8)) | (int)(u24 * 255.0f)));
    t26 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t27 = *(int *)((t26 + 0x4));
    *(unsigned int *)(((t25 << 2) + 0xC2EA724)) = t27;
    t28 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t29 = *(int *)((t28 + 0x8));
    *(unsigned int *)((((t25 + 0x1) << 2) + 0xC2EA724)) = t29;
    t30 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t31 = *(int *)((t30 + 0xC));
    *(unsigned int *)(((((t25 + 0x1) + 0x1) << 2) + 0xC2EA724)) = t31;
    t32 = *(int *)((((int)stk + 4) + 0x0));
    t33 = *(int *)((t32 + 0x10));
    t34 = FUN_0c1534fc(t3, (((t25 + 0x1) + 0x1) + 0x1), t33);
    t35 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    u36 = *(float *)(((0x20 + t35) + 0x0));
    u37 = *(float *)(((0x24 + t35) + 0x0));
    u38 = *(float *)(((0x28 + t35) + 0x0));
    u39 = *(float *)(((0x2C + t35) + 0x0));
    *(unsigned int *)(((t34 << 2) + 0xC2EA724)) = ((((((int)(u36 * 255.0f) << 16) << 8) | ((int)(u37 * 255.0f) << 16)) | ((int)(u38 * 255.0f) << 8)) | (int)(u39 * 255.0f));
    t40 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    u41 = *(float *)((t40 + 0x30));
    u42 = *(float *)((t40 + 0x34));
    u43 = *(float *)((t40 + 0x38));
    u44 = *(float *)((t40 + 0x3C));
    t45 = FUN_0c1534e8(t3, (t34 + 0x1), ((((((int)(u41 * 255.0f) << 16) << 8) | ((int)(u42 * 255.0f) << 16)) | ((int)(u43 * 255.0f) << 8)) | (int)(u44 * 255.0f)));
    t46 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t47 = *(int *)((t46 + 0x4));
    *(unsigned int *)(((t45 << 2) + 0xC2EA724)) = t47;
    t48 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t49 = *(int *)((t48 + 0x8));
    *(unsigned int *)((((t45 + 0x1) << 2) + 0xC2EA724)) = t49;
    t50 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t51 = *(int *)((t50 + 0xC));
    *(unsigned int *)(((((t45 + 0x1) + 0x1) << 2) + 0xC2EA724)) = t51;
    t52 = *(int *)((((int)stk + 4) + 0x0));
    t53 = *(int *)((t52 + 0x10));
    t54 = FUN_0c1534fc(t3, (((t45 + 0x1) + 0x1) + 0x1), t53);
    t55 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    u56 = *(float *)(((0x20 + t55) + 0x0));
    u57 = *(float *)(((0x24 + t55) + 0x0));
    u58 = *(float *)(((0x28 + t55) + 0x0));
    u59 = *(float *)(((0x2C + t55) + 0x0));
    *(unsigned int *)(((t54 << 2) + 0xC2EA724)) = ((((((int)(u56 * 255.0f) << 16) << 8) | ((int)(u57 * 255.0f) << 16)) | ((int)(u58 * 255.0f) << 8)) | (int)(u59 * 255.0f));
    t60 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    u61 = *(float *)((t60 + 0x30));
    u62 = *(float *)((t60 + 0x34));
    u63 = *(float *)((t60 + 0x38));
    u64 = *(float *)((t60 + 0x3C));
    t65 = FUN_0c1534e8(t3, (t54 + 0x1), ((((((int)(u61 * 255.0f) << 16) << 8) | ((int)(u62 * 255.0f) << 16)) | ((int)(u63 * 255.0f) << 8)) | (int)(u64 * 255.0f)));
    *(unsigned int *)0xC2EA81C = (t65 << 2);
    t66 = FUN_0c1534ca(t3);
    FUN_0c1534a0(t66, 0x0, 0x0);
    t68 = *(int *)((((int)stk + 4) + 0x0));
    t69 = *(int *)((t68 + 0xC));
    *(unsigned int *)0xC2EA830 = t69;
}

void kmiProcessVertex_14(int a4)
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
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    float u16;
    int t17;
    float u18;
    int t19;
    int t20;
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
    int t31;
    float u32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    float u44;
    int t45;
    float u46;
    int t47;
    int t48;
    int t50;
    int t51;
    int stk[12];

    t0 = *(int *)((a4 + 0x0));
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t0;
    t1 = *(int *)((a4 + 0x4));
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t1;
    t2 = *(int *)((a4 + 0x8));
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x0)) = t2;
    t3 = *(int *)0xC2EA820;
    t4 = *(int *)0xC2EA824;
    t5 = *(int *)0xC2EA828;
    *(unsigned int *)0xC2EA724 = t3;
    *(unsigned int *)0xC2EA728 = t4;
    *(unsigned int *)0xC2EA72C = t5;
    t6 = *(int *)((((int)stk + 4) + 0x0));
    t7 = *(int *)((t6 + 0x4));
    *(unsigned int *)0xC2EA730 = t7;
    t8 = *(int *)((((int)stk + 4) + 0x0));
    t9 = *(int *)((t8 + 0x8));
    *(unsigned int *)0xC2EA734 = t9;
    t10 = *(int *)((((int)stk + 4) + 0x0));
    t11 = *(int *)((t10 + 0xC));
    *(unsigned int *)0xC2EA738 = t11;
    t12 = *(int *)((((int)stk + 4) + 0x0));
    t13 = *(int *)((t12 + 0x10));
    t14 = FUN_0c1534fc(t3, 0x6, t13);
    t15 = *(int *)((((int)stk + 4) + 0x0));
    u16 = *(float *)(((0x18 + t15) + 0x0));
    *(unsigned int *)(((t14 << 2) + 0xC2EA724)) = ((((((int)(u16 * 255.0f) << 16) << 8) | ((int)(u16 * 255.0f) << 16)) | ((int)(u16 * 255.0f) << 8)) | (int)(u16 * 255.0f));
    t17 = *(int *)((((int)stk + 4) + 0x0));
    u18 = *(float *)((t17 + 0x1C));
    t19 = FUN_0c1534e8(t3, (t14 + 0x1), ((((((int)(u18 * 255.0f) << 16) << 8) | ((int)(u18 * 255.0f) << 16)) | ((int)(u18 * 255.0f) << 8)) | (int)(u18 * 255.0f)));
    t20 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t21 = *(int *)((t20 + 0x4));
    *(unsigned int *)(((t19 << 2) + 0xC2EA724)) = t21;
    t22 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t23 = *(int *)((t22 + 0x8));
    *(unsigned int *)((((t19 + 0x1) << 2) + 0xC2EA724)) = t23;
    t24 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t25 = *(int *)((t24 + 0xC));
    *(unsigned int *)(((((t19 + 0x1) + 0x1) << 2) + 0xC2EA724)) = t25;
    t26 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t27 = *(int *)((t26 + 0x10));
    t28 = FUN_0c1534fc(t3, (((t19 + 0x1) + 0x1) + 0x1), t27);
    t29 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    u30 = *(float *)(((0x18 + t29) + 0x0));
    *(unsigned int *)(((t28 << 2) + 0xC2EA724)) = ((((((int)(u30 * 255.0f) << 16) << 8) | ((int)(u30 * 255.0f) << 16)) | ((int)(u30 * 255.0f) << 8)) | (int)(u30 * 255.0f));
    t31 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    u32 = *(float *)((t31 + 0x1C));
    t33 = FUN_0c1534e8(t3, (t28 + 0x1), ((((((int)(u32 * 255.0f) << 16) << 8) | ((int)(u32 * 255.0f) << 16)) | ((int)(u32 * 255.0f) << 8)) | (int)(u32 * 255.0f)));
    t34 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t35 = *(int *)((t34 + 0x4));
    *(unsigned int *)(((t33 << 2) + 0xC2EA724)) = t35;
    t36 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t37 = *(int *)((t36 + 0x8));
    *(unsigned int *)((((t33 + 0x1) << 2) + 0xC2EA724)) = t37;
    t38 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t39 = *(int *)((t38 + 0xC));
    *(unsigned int *)(((((t33 + 0x1) + 0x1) << 2) + 0xC2EA724)) = t39;
    t40 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t41 = *(int *)((t40 + 0x10));
    t42 = FUN_0c1534fc(t3, (((t33 + 0x1) + 0x1) + 0x1), t41);
    t43 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    u44 = *(float *)(((0x18 + t43) + 0x0));
    *(unsigned int *)(((t42 << 2) + 0xC2EA724)) = ((((((int)(u44 * 255.0f) << 16) << 8) | ((int)(u44 * 255.0f) << 16)) | ((int)(u44 * 255.0f) << 8)) | (int)(u44 * 255.0f));
    t45 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    u46 = *(float *)((t45 + 0x1C));
    t47 = FUN_0c1534e8(t3, (t42 + 0x1), ((((((int)(u46 * 255.0f) << 16) << 8) | ((int)(u46 * 255.0f) << 16)) | ((int)(u46 * 255.0f) << 8)) | (int)(u46 * 255.0f)));
    *(unsigned int *)0xC2EA81C = (t47 << 2);
    t48 = FUN_0c1534ca(t3);
    FUN_0c1534a0(t48, 0x0, 0x0);
    t50 = *(int *)((((int)stk + 4) + 0x0));
    t51 = *(int *)((t50 + 0xC));
    *(unsigned int *)0xC2EA830 = t51;
}

int kmCreateFrameBufferSurface(int a4, int a5, int a6, int a7, int a8)
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
    int t10;
    int t11;
    int t12;
    int t13;
    int t16;
    int t17;
    int t18;
    int t37;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t29;
    int t41;
    int stk[654];

    *(unsigned int *)(((int)stk + 4)) = a6;
    t0 = *(int *)0xC175D4C;
    t1 = *(int *)0xC175D48;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t1;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = t0;
    t2 = *(int *)0xC175D50;
    t3 = *(int *)0xC175D54;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = t2;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0xC)) = t3;
    t4 = *(int *)0xC175D5C;
    t5 = *(int *)0xC175D58;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x10)) = t5;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x14)) = t4;
    t6 = *(int *)0xC17826C;
    *(unsigned int *)(((((t6 << 2) << 2) + 0xC2B8C5C) + 0x0)) = a4;
    t7 = *(int *)0xC17826C;
    *(unsigned int *)(((((t7 << 2) << 2) + 0xC2B8C5C) + 0x4)) = a5;
    t8 = *(int *)0xC17826C;
    t9 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((((t8 << 2) << 2) + 0xC2B8C5C) + 0x8)) = t9;
    *(unsigned int *)0xC2B8C58 = a7;
    t10 = *(int *)0xC17826C;
    *(unsigned int *)(((((t10 << 2) << 2) + 0xC2B8C5C) + 0xC)) = a8;
    t11 = *(int *)0xC17826C;
    *(unsigned int *)0xC17826C = ((t11 + 0x1) & 0x1);
    *(unsigned int *)0xC2EA6B4 = a7;
    t12 = *(int *)0xC2B8C94;
    if (t12 != 0) {
        t13 = *(int *)(((int)stk + 4));
        kmiGetDisplayData(0xFF, a7, t13, a7);
    }
    t16 = kmiGetSysConfigFlag();
    if (t16 == 0x80000000) {
        t17 = *(int *)0xC2B8CA0;
        t18 = kmiFBalloc(t17, a4);
        t37 = t18;
        if (t18 == 0) {
            *(unsigned int *)((a4 + 0x0)) = 0x1;
            t19 = *(int *)0xC2EA6A4;
            t20 = *(int *)((((t19 << 2) + (((int)stk + 4) + 0x4)) + 0x0));
            *(unsigned int *)((a4 + 0x4)) = t20;
            t21 = *(int *)0xC2EA6A4;
            *(unsigned int *)((a4 + 0x8)) = t21;
            t22 = *(int *)0xC2B8C88;
            *(unsigned int *)((a4 + 0xC)) = t22;
            t23 = *(int *)0xC2B8C8C;
            *(unsigned int *)((a4 + 0x10)) = t23;
            if (a7 == 1) {
                *(unsigned int *)((a4 + 0x18)) = 0x1;
            } else {
                *(unsigned int *)((a4 + 0x18)) = 0x0;
            }
            if (a8 == 1) {
                t24 = (((int)stk + 4) + 0x1C);
                while ((unsigned int)t24 < (unsigned int)((((int)stk + 4) + 0x1C) + 0xA00)) {
                    *(unsigned int *)((t24 + 0x0)) = 0x0;
                    t24 = (t24 + 0x4);
                }
                t25 = *(int *)((a4 + 0x14));
                if ((unsigned int)0x0 < (unsigned int)t25) {
                    t26 = 0x0;
                    do {
                        t27 = *(int *)((a4 + 0x1C));
                        kmiCopyToPVRMemory((t27 + t26), (((int)stk + 4) + 0x1C), 0xA00);
                        t29 = *(int *)((a4 + 0x14));
                        t26 = (t26 + 0xA00);
                    } while ((unsigned int)t26 < (unsigned int)t29);
                }
            }
            t37 = 0x0;
        }
        t41 = t37;
    } else {
        kmiAddSysConfigFlag(0x200);
        t41 = 0x0;
    }
    return t41;
}
