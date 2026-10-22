/* Straight-line functions with calls and guards (batch gen_af): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ExecAdvCameraRandom(void);
int SetCameraTargetRatio(float, float);
int SetCameraAngleVelocity(int, int, int);
int SetCameraAngleRatio(float, float);
int SetCameraDistance(float);
int ExecAdvCameraChase(void);
int ExecAdvCameraFixed(void);
int FUN_0c077f80(void);
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
int kmiCopyToPVRMemory(int);
int kmiFBalloc(int, int);
int kmiGetDisplayData(int, int, int);
int kmiGetSysConfigFlag(void);
int nlAddVector(int, int);
int nlObjPut(int);
int nlPopMatrix(int);
int nlScale(float, float, float);
int nlScaleUnitVector(int, int, float);
int nlSubVector(int, int);
int nlUnitRotation(void);
int ExecAdvCamera(void);
int Put2DObj(int a4, float f4, float f5);
void getReplayPassenger(int a4, int a5, int a6, int a7, int a8);
int kmiProcessVertex_06(int a4);
int kmiProcessVertex_14(int a4);
int kmCreateFrameBufferSurface(int a4, int a5, int a6, int a7, int a8);

int ExecAdvCamera(void)
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
    float u23;
    int t30;
    int t21;
    int t17;
    int stk[9] = {0};

    t0 = *(int *)0xC0E4E38;
    if (t0 != 1) {
        if (t0 != 2) {
            if (t0 != 3) {
                if (t0 != 4) {
                    return t0;
                }
                return ExecAdvCameraFixed();
            }
            return ExecAdvCameraRandom();
        }
        return ExecAdvCameraChase();
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
        SetCameraDistance(60.0f);
        camSetTarget(((int)stk + 4), 0x0);
        SetCameraTargetRatio(0.299999982f, 0.299999982f);
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
        u23 = *(float *)0xC028BB8;
        SetCameraAngleRatio(u23, 1.0f);
        SetCameraAngleVelocity(0x8, 0x90, 0x10);
        SetCameraMode(0x2);
        ResetSpark();
        *(unsigned int *)0xC179974 = 0x0;
    }
    t30 = camSetTarget(((int)stk + 4), 0x2);
    return t30;
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
    float u9;
    float u12;
    int t13;
    int t14;
    float u15;
    float u16;
    float u17;
    float u20;
    float u21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int stk[7] = {0};

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
        nlSubVector((((int)stk + 4) + 0x4), 0xC179144);
        u9 = *(float *)0xC04C08C;
        nlScaleUnitVector((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x4), u9);
        nlAddVector((((int)stk + 4) + 0x4), 0xC179144);
        u12 = *(float *)0xC04C098;
        t13 = GetCollision2D((((int)stk + 4) + 0x4), u12);
        t14 = *(int *)((t13 + 0x1C));
        if (t14 != -1) {
            u15 = *(float *)((t13 + 0x18));
            u16 = *(float *)(((int)stk + 12));
            if (u15 > u16) {
                u17 = *(float *)((t13 + 0x18));
                *(float *)(((int)stk + 12)) = u17;
            }
        }
        u20 = *(float *)0xC04C0A0;
        u21 = *(float *)(((int)stk + 12));
        *(float *)(((int)stk + 12)) = (u21 + u20);
        t22 = *(int *)(((int)stk + 4));
        t23 = *(int *)0xC2A62AC;
        t24 = *(int *)(((((int)stk + 4) + 0x4) + 0x8));
        *(unsigned int *)((((((t22 << 1) + t22) << 2) + t23) + 0x8)) = t24;
        t25 = *(int *)(((((int)stk + 4) + 0x4) + 0x4));
        *(unsigned int *)((((((t22 << 1) + t22) << 2) + t23) + 0x4)) = t25;
        t26 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
        *(unsigned int *)((((((t22 << 1) + t22) << 2) + t23) + 0x0)) = t26;
    }
}

int kmiProcessVertex_06(int a4)
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
    float u20;
    int t21;
    float u22;
    float u23;
    float u24;
    float u25;
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
    float u37;
    float u38;
    float u39;
    float u40;
    int t41;
    float u42;
    float u43;
    float u44;
    float u45;
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
    int t56;
    float u57;
    float u58;
    float u59;
    float u60;
    int t61;
    float u62;
    float u63;
    float u64;
    float u65;
    int t66;
    int t67;
    int t69;
    int t70;
    int stk[12] = {0};

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
    u16 = *(float *)0xC154390;
    u17 = *(float *)(((0x20 + t15) + 0x0));
    u18 = *(float *)(((0x24 + t15) + 0x0));
    u19 = *(float *)(((0x28 + t15) + 0x0));
    u20 = *(float *)(((0x2C + t15) + 0x0));
    *(unsigned int *)(((t14 << 2) + 0xC2EA724)) = ((((((int)(u17 * u16) << 16) << 8) | ((int)(u18 * u16) << 16)) | ((int)(u19 * u16) << 8)) | (int)(u20 * u16));
    t21 = *(int *)((((int)stk + 4) + 0x0));
    u22 = *(float *)((t21 + 0x30));
    u23 = *(float *)((t21 + 0x34));
    u24 = *(float *)((t21 + 0x38));
    u25 = *(float *)((t21 + 0x3C));
    t26 = FUN_0c1534e8(t3, (t14 + 0x1), ((((((int)(u22 * u16) << 16) << 8) | ((int)(u23 * u16) << 16)) | ((int)(u24 * u16) << 8)) | (int)(u25 * u16)));
    t27 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t28 = *(int *)((t27 + 0x4));
    *(unsigned int *)(((t26 << 2) + 0xC2EA724)) = t28;
    t29 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t30 = *(int *)((t29 + 0x8));
    *(unsigned int *)((((t26 + 0x1) << 2) + 0xC2EA724)) = t30;
    t31 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t32 = *(int *)((t31 + 0xC));
    *(unsigned int *)(((((t26 + 0x1) + 0x1) << 2) + 0xC2EA724)) = t32;
    t33 = *(int *)((((int)stk + 4) + 0x0));
    t34 = *(int *)((t33 + 0x10));
    t35 = FUN_0c1534fc(t3, (((t26 + 0x1) + 0x1) + 0x1), t34);
    t36 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    u37 = *(float *)(((0x20 + t36) + 0x0));
    u38 = *(float *)(((0x24 + t36) + 0x0));
    u39 = *(float *)(((0x28 + t36) + 0x0));
    u40 = *(float *)(((0x2C + t36) + 0x0));
    *(unsigned int *)(((t35 << 2) + 0xC2EA724)) = ((((((int)(u37 * u16) << 16) << 8) | ((int)(u38 * u16) << 16)) | ((int)(u39 * u16) << 8)) | (int)(u40 * u16));
    t41 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    u42 = *(float *)((t41 + 0x30));
    u43 = *(float *)((t41 + 0x34));
    u44 = *(float *)((t41 + 0x38));
    u45 = *(float *)((t41 + 0x3C));
    t46 = FUN_0c1534e8(t3, (t35 + 0x1), ((((((int)(u42 * u16) << 16) << 8) | ((int)(u43 * u16) << 16)) | ((int)(u44 * u16) << 8)) | (int)(u45 * u16)));
    t47 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t48 = *(int *)((t47 + 0x4));
    *(unsigned int *)(((t46 << 2) + 0xC2EA724)) = t48;
    t49 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t50 = *(int *)((t49 + 0x8));
    *(unsigned int *)((((t46 + 0x1) << 2) + 0xC2EA724)) = t50;
    t51 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t52 = *(int *)((t51 + 0xC));
    *(unsigned int *)(((((t46 + 0x1) + 0x1) << 2) + 0xC2EA724)) = t52;
    t53 = *(int *)((((int)stk + 4) + 0x0));
    t54 = *(int *)((t53 + 0x10));
    t55 = FUN_0c1534fc(t3, (((t46 + 0x1) + 0x1) + 0x1), t54);
    t56 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    u57 = *(float *)(((0x20 + t56) + 0x0));
    u58 = *(float *)(((0x24 + t56) + 0x0));
    u59 = *(float *)(((0x28 + t56) + 0x0));
    u60 = *(float *)(((0x2C + t56) + 0x0));
    *(unsigned int *)(((t55 << 2) + 0xC2EA724)) = ((((((int)(u57 * u16) << 16) << 8) | ((int)(u58 * u16) << 16)) | ((int)(u59 * u16) << 8)) | (int)(u60 * u16));
    t61 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    u62 = *(float *)((t61 + 0x30));
    u63 = *(float *)((t61 + 0x34));
    u64 = *(float *)((t61 + 0x38));
    u65 = *(float *)((t61 + 0x3C));
    t66 = FUN_0c1534e8(t3, (t55 + 0x1), ((((((int)(u62 * u16) << 16) << 8) | ((int)(u63 * u16) << 16)) | ((int)(u64 * u16) << 8)) | (int)(u65 * u16)));
    *(unsigned int *)0xC2EA81C = (t66 << 2);
    t67 = FUN_0c1534ca(t3);
    FUN_0c1534a0(t67, 0x0, 0x0);
    t69 = *(int *)((((int)stk + 4) + 0x0));
    t70 = *(int *)((t69 + 0xC));
    *(unsigned int *)0xC2EA830 = t70;
    return 0x0;
}

int kmiProcessVertex_14(int a4)
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
    int t18;
    float u19;
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
    int t30;
    float u31;
    int t32;
    float u33;
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
    int t44;
    float u45;
    int t46;
    float u47;
    int t48;
    int t49;
    int t51;
    int t52;
    int stk[12] = {0};

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
    u17 = *(float *)0xC155394;
    *(unsigned int *)(((t14 << 2) + 0xC2EA724)) = ((((((int)(u16 * u17) << 16) << 8) | ((int)(u16 * u17) << 16)) | ((int)(u16 * u17) << 8)) | (int)(u16 * u17));
    t18 = *(int *)((((int)stk + 4) + 0x0));
    u19 = *(float *)((t18 + 0x1C));
    t20 = FUN_0c1534e8(t3, (t14 + 0x1), ((((((int)(u19 * u17) << 16) << 8) | ((int)(u19 * u17) << 16)) | ((int)(u19 * u17) << 8)) | (int)(u19 * u17)));
    t21 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t22 = *(int *)((t21 + 0x4));
    *(unsigned int *)(((t20 << 2) + 0xC2EA724)) = t22;
    t23 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t24 = *(int *)((t23 + 0x8));
    *(unsigned int *)((((t20 + 0x1) << 2) + 0xC2EA724)) = t24;
    t25 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t26 = *(int *)((t25 + 0xC));
    *(unsigned int *)(((((t20 + 0x1) + 0x1) << 2) + 0xC2EA724)) = t26;
    t27 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t28 = *(int *)((t27 + 0x10));
    t29 = FUN_0c1534fc(t3, (((t20 + 0x1) + 0x1) + 0x1), t28);
    t30 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    u31 = *(float *)(((0x18 + t30) + 0x0));
    *(unsigned int *)(((t29 << 2) + 0xC2EA724)) = ((((((int)(u31 * u17) << 16) << 8) | ((int)(u31 * u17) << 16)) | ((int)(u31 * u17) << 8)) | (int)(u31 * u17));
    t32 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    u33 = *(float *)((t32 + 0x1C));
    t34 = FUN_0c1534e8(t3, (t29 + 0x1), ((((((int)(u33 * u17) << 16) << 8) | ((int)(u33 * u17) << 16)) | ((int)(u33 * u17) << 8)) | (int)(u33 * u17)));
    t35 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t36 = *(int *)((t35 + 0x4));
    *(unsigned int *)(((t34 << 2) + 0xC2EA724)) = t36;
    t37 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t38 = *(int *)((t37 + 0x8));
    *(unsigned int *)((((t34 + 0x1) << 2) + 0xC2EA724)) = t38;
    t39 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t40 = *(int *)((t39 + 0xC));
    *(unsigned int *)(((((t34 + 0x1) + 0x1) << 2) + 0xC2EA724)) = t40;
    t41 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t42 = *(int *)((t41 + 0x10));
    t43 = FUN_0c1534fc(t3, (((t34 + 0x1) + 0x1) + 0x1), t42);
    t44 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    u45 = *(float *)(((0x18 + t44) + 0x0));
    *(unsigned int *)(((t43 << 2) + 0xC2EA724)) = ((((((int)(u45 * u17) << 16) << 8) | ((int)(u45 * u17) << 16)) | ((int)(u45 * u17) << 8)) | (int)(u45 * u17));
    t46 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    u47 = *(float *)((t46 + 0x1C));
    t48 = FUN_0c1534e8(t3, (t43 + 0x1), ((((((int)(u47 * u17) << 16) << 8) | ((int)(u47 * u17) << 16)) | ((int)(u47 * u17) << 8)) | (int)(u47 * u17)));
    *(unsigned int *)0xC2EA81C = (t48 << 2);
    t49 = FUN_0c1534ca(t3);
    FUN_0c1534a0(t49, 0x0, 0x0);
    t51 = *(int *)((((int)stk + 4) + 0x0));
    t52 = *(int *)((t51 + 0xC));
    *(unsigned int *)0xC2EA830 = t52;
    return 0x0;
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
    int stk[654] = {0};

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
        kmiGetDisplayData(0xFF, a7, t13);
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
                        kmiCopyToPVRMemory((t27 + t26));
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

