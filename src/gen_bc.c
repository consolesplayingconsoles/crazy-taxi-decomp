/* Straight-line functions with calls and guards (batch gen_bc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int, ...);
int ADXRNA_SetPlaySw(void);
int ADXRNA_SetTransSw(void);
int ADXSJD_Stop(int);
int ADXSTM_Close(int);
int ADXSTM_Seek(int, int);
int ADXSTM_Stop(int);
int CheckColliWall(int, float);
int FUN_0c02bb60(int, int, float);
int FUN_0c033234(int, int, int, int, int, int);
int FUN_0c0771b0(int, int);
int FUN_0c077210(int, int);
int FUN_0c077f70(void);
int FUN_0c078310(void);
int FUN_0c078a70(int, int, int);
float FUN_0c078c00(int);
float FUN_0c078de0(int, int);
int FUN_0c080470(int);
int FUN_0c15f49a(int, int);
int FUN_0c15f4c8(int);
int FUN_0c15f4e2(int);
int FUN_0c16893a(int, int, int, int);
int IsBoyFriend(int, int);
int ResetFadeColor(void);
int SetCameraPosVelocity(int);
int SetSpark(int, int, int);
extern float _builtin_sqrtf(float);
extern int _builtin_tas(char *);
int colliBoxAhead(int, int, int);
int gdFsOpen(void);
int gdFsOpenRange(void);
int kdRecvFrame(void);
int kdSetCallback(int, int, int);
int kmCreateTextureSurface(void);
int kmSetBorderColor(int, ...);
int memset(int, int, int);
int mpdrv_dpf(int, ...);
int mpdrv_insertnop(int);
int mpdrv_set_arctrl_ns(int);
int mpdrv_set_bwrite_ns(int);
int mpdrv_set_getcond_ns(int);
int mpdrv_set_setcond_ns(int);
int mpdrv_v2p(int);
int mwRnaErrCallFunc(int, ...);
int nlAddVector(int, int);
int nlArcTan2(float, float);
float nlCeil(float);
int nlCommonTextureGetNextTextureIndex(void);
int nlCreateTextureParam(int);
float nlFloor(float);
int nlGetTranslate(int);
float nlInnerProduct(int, int);
int nlObjPut(int);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutUseViewMatrix(int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlScaleVector(int, int, float);
int nlSetScaleFactor(float);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int nlUnitMatrix(void);
int nlUnitVector(int);
int strlen(int);
int strncpy(int, int, int);
int syChainAddHandler(int, int, int, int);
int syG2DmaReset(int);
int syG2DmaSetProtect(int, int);
int syMmuAddEntry(int, int, int);
int mwRnaGetOutPan(int a4, int a5);
int ADXSTM_OpenRange(int a4, int a5, int a6);
int ADXSTM_OpenFileRange(int a4, int a5, int a6, int a7);
int ADXT_Stop(int a4);
int kdSetSetConditionEx(int a4, int a5, int a6, int a7, int a8);
int kdSetGetConditionEx(int a4, int a5, int a6);
int kdSetARControlEx(int a4, int a5, int a6);
int kdSetBlockWriteEx(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int FUN_0c1722c2(int a4, int a5, int a6, int a7, int a8);
int FUN_0c160e88(void);
int FUN_0c074a10(int a4);
int syG2SysInit(void);
int FUN_0c0730b4(float f4);
int nlRenderTextureSet_Sub(int a4, int a5, int a6, int a7);
int FUN_0c071a7c(int a4, int a5);
int mpdrv_setcmd_force(int a4, int a5, int a6, int a7, int a8, int a9);
int mpdrv_setcmd(int a4, int a5, int a6, int a7, int a8, int a9);
int gdDecSubcode(int a4, int a5);
int colliBoxBox(int a4, int a5);
int ConvertSwitch(int a4);

int mwRnaGetOutPan(int a4, int a5)
{
    int t1;

    if (a4 == 0) {
        mwRnaErrCallFunc(0xC176680);
        return 0xFFFFFFFF;
    }
    t1 = *(int *)(((a4 + 0x64) + (a5 << 2)));
    return t1;
}

int ADXSTM_OpenRange(int a4, int a5, int a6)
{
    int t0;
    int t2;

    t0 = gdFsOpenRange();
    if (t0 == 0) {
        ADXERR_CallErrFunc(0xC1764B4, a4, a5);
        return 0x0;
    }
    t2 = FUN_0c16893a(t0, 0x0, (((a5 << 8) << 2) << 1), a6);
    if (t2 != 0) {
        strncpy((t2 + 0x40), 0xC1764EC, 0x20);
    }
    return t2;
}

int ADXSTM_OpenFileRange(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t6;

    t0 = gdFsOpen();
    if (t0 == 0) {
        ADXERR_CallErrFunc(0xC1764F8, a4);
        t6 = 0x0;
    } else {
        t2 = FUN_0c16893a(t0, a5, (((a6 << 8) << 2) << 1), a7);
        if (t2 != 0) {
            strncpy((t2 + 0x40), a4, 0x20);
            ADXSTM_Seek(t2, 0x0);
        }
        t6 = t2;
    }
    return t6;
}

int ADXT_Stop(int a4)
{
    int t1;
    int t3;
    int t5;
    int t7;
    int t8;
    int t10;
    int t12;
    int t13;
    int t14;
    int t15;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;

    ADXCRS_Lock();
    t1 = *(int *)((a4 + 0xC));
    ADXRNA_SetTransSw();
    t3 = *(int *)((a4 + 0xC));
    ADXRNA_SetPlaySw();
    t5 = *(int *)((a4 + 0x4));
    ADXSJD_Stop(t5);
    t7 = *(int *)((a4 + 0x8));
    if (t7 != 0) {
        t8 = *(int *)((a4 + 0x8));
        ADXSTM_Stop(t8);
        t10 = *(int *)((a4 + 0x8));
        ADXSTM_Close(t10);
        t12 = *(int *)((a4 + 0x14));
        t13 = *(int *)((t12 + 0x0));
        t14 = *(int *)((t13 + 0x14));
        t15 = ((int (*)(int))(t14))(t12);
        *(unsigned int *)((a4 + 0x8)) = 0x0;
    }
    t17 = *(signed char *)((a4 + 0x2));
    if (t17 == 2) {
        t18 = *(int *)((a4 + 0x14));
        if (t18 != 0) {
            t19 = *(int *)((a4 + 0x14));
            t20 = *(int *)((t19 + 0x0));
            t21 = *(int *)((t20 + 0xC));
            t22 = ((int (*)(int))(t21))(t19);
        }
    }
    *(unsigned int *)((a4 + 0x14)) = 0x0;
    *(unsigned char *)((a4 + 0x1)) = 0x0;
    return ADXCRS_Unlock();
}

int kdSetSetConditionEx(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t2;
    int t5;
    int t6;
    int t7;

    t0 = *(int *)0xC1701BC;
    if (_builtin_tas((char *)t0) == 0) {
        mpdrv_dpf(0xC176314);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_setcond_ns(a4);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a8, t2);
    }
    t5 = *(int *)0xC1701BC;
    *(unsigned char *)((t5 + 0x0)) = 0x0;
    t6 = *(int *)0xC2FA538;
    t7 = *(int *)((t6 + 0x10E8));
    if (t7 != 0) {
        kdRecvFrame();
    }
    return t2;
}

int kdSetGetConditionEx(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t5;
    int t6;
    int t7;

    t0 = *(int *)0xC1701BC;
    if (_builtin_tas((char *)t0) == 0) {
        mpdrv_dpf(0xC176314);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_getcond_ns(a4);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a6, t2);
    }
    t5 = *(int *)0xC1701BC;
    *(unsigned char *)((t5 + 0x0)) = 0x0;
    t6 = *(int *)0xC2FA538;
    t7 = *(int *)((t6 + 0x10E8));
    if (t7 != 0) {
        kdRecvFrame();
    }
    return t2;
}

int kdSetARControlEx(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t5;
    int t6;
    int t7;

    t0 = *(int *)0xC1701BC;
    if (_builtin_tas((char *)t0) == 0) {
        mpdrv_dpf(0xC176314);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_arctrl_ns(a4);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a6, t2);
    }
    t5 = *(int *)0xC1701BC;
    *(unsigned char *)((t5 + 0x0)) = 0x0;
    t6 = *(int *)0xC2FA538;
    t7 = *(int *)((t6 + 0x10E8));
    if (t7 != 0) {
        kdRecvFrame();
    }
    return t2;
}

int kdSetBlockWriteEx(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int t0;
    int t2;
    int t5;
    int t6;
    int t7;

    t0 = *(int *)0xC1701BC;
    if (_builtin_tas((char *)t0) == 0) {
        mpdrv_dpf(0xC176314);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_bwrite_ns(a4);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a11, t2);
    }
    t5 = *(int *)0xC1701BC;
    *(unsigned char *)((t5 + 0x0)) = 0x0;
    t6 = *(int *)0xC2FA538;
    t7 = *(int *)((t6 + 0x10E8));
    if (t7 != 0) {
        kdRecvFrame();
    }
    return t2;
}

int FUN_0c1722c2(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t10;
    int t9;

    t0 = *(int *)((a4 + 0x10));
    t2 = *(int *)((((a5 << 2) + (a4 + 0x20)) + 0x0));
    t4 = *(int *)((((a4 + 0x2C) + (a5 << 2)) + 0x0));
    t5 = FUN_0c080470(t4);
    if ((int)t5 < 0) {
        if (t5 == -1) {
            t6 = mwRnaErrCallFunc(0xC176C54);
            return t6;
        }
        if (t5 == -2) {
            t7 = mwRnaErrCallFunc(0xC176C84);
            return t7;
        }
        if (t5 == -3) {
            t8 = mwRnaErrCallFunc(0xC176CC4);
            return t8;
        }
        t10 = t5;
        if (t5 == -4) {
            t9 = mwRnaErrCallFunc(0xC176D04);
            t10 = t9;
        }
        return t10;
    }
    return t5;
}

int FUN_0c160e88(void)
{
    int t0;
    int t12;
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

    t0 = *(int *)0xFF000010;
    t12 = (t0 & 0x1);
    if ((t0 & 0x1) == 1) {
        t1 = (t0 & 0x1);
        t2 = 0xE0000000;
        t3 = 0x0;
        t4 = 0x0;
        while ((unsigned int)(0xC000000 + t4) < (unsigned int)0xD000000) {
            t5 = syMmuAddEntry((0xC000000 + t4), (0xE0000000 + t4), 0x4);
            t1 = t5;
            t2 = (0xC2EBF10 + (t3 << 2));
            t3 = (t3 + 0x1);
            t4 = (t4 + 0x100000);
            *(unsigned int *)((t2 + 0x0)) = t1;
        }
        t6 = t1;
        t7 = t2;
        t8 = 0x0;
        t9 = 0x0;
        while ((unsigned int)(0x10000000 + t9) < (unsigned int)0x10800000) {
            t10 = syMmuAddEntry((0x10000000 + t9), (0xE1000000 + t9), 0x4);
            t6 = t10;
            t7 = (0xC2EBF50 + (t8 << 2));
            t8 = (t8 + 0x1);
            t9 = (t9 + 0x100000);
            *(unsigned int *)((t7 + 0x0)) = t6;
        }
        t11 = syMmuAddEntry(0x10800000, 0xE1800000, 0x4);
        *(unsigned int *)0xC2EBF70 = t11;
        t12 = t11;
    }
    return t12;
}

int FUN_0c074a10(int a4)
{
    int t0;

    t0 = kmSetBorderColor((a4 | 0xFF000000));
    return t0;
}

int syG2SysInit(void)
{
    int t0;
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
    int t16;
    int t17;
    int t18;
    int t19;
    int t21;
    int t23;
    int t25;
    int t26;
    int t27;
    int t28;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;

    t0 = *(int *)0xC178704;
    strlen(t0);
    *(unsigned int *)0xC178700 = 0xC2F9220;
    memset(0xC2F9220, 0xFF, 0x114);
    t3 = *(int *)0xC178700;
    *(unsigned int *)((t3 + 0x0)) = 0xA05F7800;
    t4 = *(int *)0xC178700;
    *(unsigned int *)((t4 + 0xD4)) = 0x1;
    t5 = *(int *)0xC178700;
    *(unsigned int *)((t5 + 0xD8)) = 0x0;
    t6 = 0x0;
    do {
        t7 = *(int *)0xC178700;
        *(unsigned int *)((((t7 + 0x4) + (t6 * 0x34)) + 0x0)) = t6;
        t8 = *(int *)0xC178700;
        *(unsigned int *)((((t8 + 0x4) + (t6 * 0x34)) + 0x28)) = 0x0;
        t9 = *(int *)0xC178700;
        *(unsigned int *)((((t9 + 0x4) + (t6 * 0x34)) + 0x2C)) = 0x0;
        t10 = *(int *)0xC178700;
        *(unsigned int *)((((t10 + 0x4) + (t6 * 0x34)) + 0x30)) = 0x0;
        t11 = *(int *)0xC178700;
        *(unsigned int *)((((t11 + 0x4) + (t6 * 0x34)) + 0x4)) = 0x0;
        t12 = *(int *)0xC178700;
        *(unsigned int *)((((t12 + 0x4) + (t6 * 0x34)) + 0x8)) = 0x0;
        t13 = *(int *)0xC178700;
        *(unsigned int *)((((t13 + 0x4) + (t6 * 0x34)) + 0xC)) = 0x0;
        t14 = *(int *)0xC178700;
        *(unsigned int *)((((t14 + 0x4) + (t6 * 0x34)) + 0x10)) = 0x0;
        t15 = *(int *)0xC178700;
        *(unsigned int *)((((t15 + 0x4) + (t6 * 0x34)) + 0x14)) = 0x0;
        t16 = *(int *)0xC178700;
        *(unsigned int *)((((t16 + 0x4) + (t6 * 0x34)) + 0x18)) = 0x3;
        t17 = *(int *)0xC178700;
        *(unsigned int *)((((t17 + 0x4) + (t6 * 0x34)) + 0x1C)) = 0x0;
        t18 = *(int *)0xC178700;
        *(unsigned int *)((((t18 + 0x4) + (t6 * 0x34)) + 0x20)) = 0x0;
        t19 = *(int *)0xC178700;
        syG2DmaReset(((t19 + 0x4) + (t6 * 0x34)));
        t21 = *(int *)0xC178700;
        t23 = (t6 << 2);
        t6 = (t6 + 0x1);
        *(unsigned int *)((((0xDC + t21) + t23) + 0x0)) = 0x0;
        t25 = *(int *)0xC178700;
        *(unsigned int *)((((0xFC + t25) + t23) + 0x0)) = 0x0;
        t26 = *(int *)0xC178700;
        *(unsigned int *)(((t23 + (0xEC + t26)) + 0x0)) = 0x0;
    } while ((int)t6 < (int)0x4);
    t27 = *(int *)0xC178700;
    *(unsigned int *)((t27 + 0x10C)) = 0x0;
    t28 = *(int *)0xC178700;
    *(unsigned int *)((t28 + 0x110)) = 0x0;
    syG2DmaSetProtect(0xC000000, 0xCFFFFFF);
    t30 = *(int *)0xC178700;
    *(unsigned int *)((t30 + 0xD4)) = 0x1;
    t31 = *(int *)0xC178700;
    t32 = syChainAddHandler(0xA60, 0xC16E330, 0x60, (t31 + 0x4));
    *(unsigned int *)(((0x24 + (t31 + 0x4)) + 0x0)) = t32;
    t33 = *(int *)0xC178700;
    t34 = syChainAddHandler(0xA80, 0xC16E330, 0x60, (t33 + 0x38));
    *(unsigned int *)(((0x24 + (t33 + 0x38)) + 0x0)) = t34;
    t35 = *(int *)0xC178700;
    t36 = syChainAddHandler(0xAA0, 0xC16E330, 0x60, (t35 + 0x6C));
    *(unsigned int *)(((0x24 + (t35 + 0x6C)) + 0x0)) = t36;
    t37 = *(int *)0xC178700;
    t38 = syChainAddHandler(0xAC0, 0xC16E330, 0x60, ((t37 + 0x4) + 0x9C));
    *(unsigned int *)(((0x24 + ((t37 + 0x4) + 0x9C)) + 0x0)) = t38;
    *(unsigned int *)0xC2F9338 = 0x0;
    return 0x0;
}

int FUN_0c0730b4(float f4)
{
    float u0;
    float u5;
    float u6;
    int t7;
    int t9;
    int t10;
    float u13;
    float u11;
    float u14;
    float u15;
    float u16;
    float u19;
    float u20;
    float u21;
    float u22;
    int t33;
    float u36;
    float u39;
    float u42;
    int stk[19] = {0};

    u0 = *(float *)0xC179148;
    if ((f4 - u0) > 30.0f) {
        nlScaleVector((((int)stk + 4) + 0xC), 0xC2AD1F8, 100.0f);
        FUN_0c078a70((((int)stk + 4) + 0x18), 0xC179144, (((int)stk + 4) + 0xC));
        nlSubVector3op((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x18), 0xC2AEC20);
        *(float *)(((int)stk + 20)) = 0.0f;
        nlUnitVector((((int)stk + 4) + 0xC));
        u5 = *(float *)(((int)stk + 24));
        u6 = *(float *)(((int)stk + 16));
        t7 = nlArcTan2(u6, u5);
        FUN_0c02bb60(t7, 0xC2AEC30, 0.00999999978f);
        t9 = *(int *)0xC2AEC30;
        t10 = (t9 - t7);
        if ((int)t7 > (int)t9) {
            t10 = (t7 - t9);
        }
        u13 = 1.0f;
        if ((int)t10 > (int)0x2000) {
            u11 = *(float *)0xC07325C;
            u13 = u11;
        }
        u14 = *(float *)0xC2AEC38;
        if (u13 > u14) {
            u15 = *(float *)0xC2AEC38;
            *(float *)0xC2AEC38 = (u15 + 0.0199999996f);
        } else {
            if (u14 > u13) {
                u16 = *(float *)0xC2AEC38;
                *(float *)0xC2AEC38 = (u16 - 0.0199999996f);
            }
        }
    } else {
        u19 = *(float *)0xC2AEC38;
        if (u19 > 0.0f) {
            u20 = *(float *)0xC2AEC38;
            *(float *)0xC2AEC38 = (u20 - 0.0199999996f);
        } else {
            *(float *)0xC2AEC38 = 0.0f;
            u21 = *(float *)0xC2AEC58;
            if ((int)u21 != 10) {
                u22 = *(float *)0xC2AEC58;
                *(float *)0xC2AEC58 = (u22 + 0.099999994f);
            }
        }
    }
    nlPushUnitMatrix();
    t33 = *(int *)0xC2AEC30;
    nlRotateAY(t33);
    FUN_0c077210(0xC0D5554, (((int)stk + 4) + 0xC));
    u36 = *(float *)0xC2AEC38;
    nlScaleVector(((int)stk + 4), (((int)stk + 4) + 0xC), u36);
    nlAddVector(0xC2AEC20, ((int)stk + 4));
    u39 = *(float *)0xC07327C;
    CheckColliWall(0xC2AEC20, u39);
    nlPopMatrix(0x1);
    u42 = *(float *)0xC2AEC38;
    *(float *)0xC2AEC5C = ((u42 * 1.0f) / 1.0f);
    return 0x3C;
}

int nlRenderTextureSet_Sub(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t49;
    int t46;
    int t2;
    int t43;
    int t7;
    int t6;
    int t5;
    int t4;
    int t3;
    int t11;
    int t10;
    int t9;
    int t8;
    int t12;
    int t13;
    int t14;
    int t35;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t29;
    int t21;
    int t22;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;

    t0 = *(int *)0xC2B31C0;
    t1 = *(int *)0xC2B31BC;
    t49 = 0xFFFFFFFF;
    if ((unsigned int)a4 <= (unsigned int)t0) {
        t46 = 0xFFFFFFFF;
        if ((int)a5 >= 0) {
            t2 = *(int *)(((t1 + ((a4 << 2) << 2)) + 0x0));
            t43 = 0xFFFFFFFF;
            if ((int)t2 < 0) {
                t7 = 0x20;
                if ((int)a6 > (int)0x20) {
                    t6 = 0x40;
                    if ((int)a6 > (int)0x40) {
                        t5 = 0x80;
                        if ((int)a6 > (int)0x80) {
                            t4 = 0x100;
                            if ((int)a6 > (int)0x100) {
                                t3 = 0x400;
                                if ((int)a6 <= (int)0x200) {
                                    t3 = 0x200;
                                }
                                t4 = t3;
                            }
                            t5 = t4;
                        }
                        t6 = t5;
                    }
                    t7 = t6;
                }
                t11 = 0x20;
                if ((int)a7 > (int)0x20) {
                    t10 = 0x40;
                    if ((int)a7 > (int)0x40) {
                        t9 = 0x80;
                        if ((int)a7 > (int)0x80) {
                            t8 = 0x200;
                            if ((int)a7 <= (int)0x100) {
                                t8 = 0x100;
                            }
                            t9 = t8;
                        }
                        t10 = t9;
                    }
                    t11 = t10;
                }
                t12 = *(int *)0xC2B3184;
                t13 = *(int *)0xC2AEC84;
                t14 = *(int *)((((((a5 + t12) << 2) << 1) + t13) + 0x0));
                t35 = 0xFFFFFFFF;
                if (t14 == 0) {
                    *(unsigned int *)(((t13 + (((a5 + t12) << 2) << 1)) + 0x0)) = 0x1;
                    t15 = *(int *)0xC2AEC84;
                    t16 = nlCommonTextureGetNextTextureIndex();
                    *(unsigned int *)(((0x4 + (t15 + (((a5 + t12) << 2) << 1))) + 0x0)) = t16;
                    t17 = *(int *)0xC2AEC84;
                    t18 = *(int *)(((t17 + (((a5 + t12) << 2) << 1)) + 0x4));
                    t19 = *(int *)0xC2B29C0;
                    t20 = *(int *)((((t18 * 0x3C) + t19) + 0x2C));
                    t29 = 0xFFFFFFFF;
                    if (t20 == 0) {
                        t21 = kmCreateTextureSurface();
                        t22 = *(int *)0xC2B29C0;
                        *(unsigned int *)((((t18 * 0x3C) + t22) + 0x28)) = t21;
                        nlCreateTextureParam(t18);
                        *(unsigned int *)((((t18 * 0x3C) + t19) + 0x38)) = t18;
                        *(unsigned int *)((((t18 * 0x3C) + t19) + 0x2C)) = 0x1;
                        t24 = *(int *)0xC2B31BC;
                        *(unsigned int *)(((t24 + ((a4 << 2) << 2)) + 0x0)) = a5;
                        *(unsigned int *)(((t24 + ((a4 << 2) << 2)) + 0x4)) = t18;
                        *(unsigned short *)(((t24 + ((a4 << 2) << 2)) + 0x8)) = t7;
                        *(unsigned short *)(((t24 + ((a4 << 2) << 2)) + 0xA)) = t11;
                        t25 = *(short *)0xC2B3190;
                        t26 = *(short *)0xC2B3192;
                        t27 = t7;
                        if ((int)t7 > (int)t25) {
                            t27 = t25;
                        }
                        t28 = t11;
                        if ((int)t11 > (int)t26) {
                            t28 = t26;
                        }
                        *(unsigned short *)(((t24 + ((a4 << 2) << 2)) + 0xC)) = t27;
                        *(unsigned short *)(((t24 + ((a4 << 2) << 2)) + 0xE)) = t28;
                        t29 = t21;
                    }
                    t35 = t29;
                }
                t43 = t35;
            }
            t46 = t43;
        }
        t49 = t46;
    }
    return t49;
}

int FUN_0c071a7c(int a4, int a5)
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
    int t16;
    int t17;
    int t18;
    int t19;
    int t191;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t79;
    int t26;
    int t27;
    int t28;
    int t77;
    int t31;
    float u32;
    int t34;
    int t35;
    int t37;
    float u38;
    float u39;
    float u40;
    float u41;
    int t43;
    int t47;
    int t48;
    int t54;
    int t59;
    float u60;
    float u61;
    float u62;
    int t63;
    float u64;
    int t65;
    int t66;
    float u67;
    int t71;
    float u72;
    int t73;
    int t74;
    int t76;
    int t81;
    int t82;
    int t83;
    int t132;
    int t86;
    float u87;
    int t89;
    int t90;
    int t92;
    float u93;
    float u94;
    float u95;
    float u96;
    int t98;
    int t102;
    int t103;
    int t109;
    int t114;
    float u115;
    float u116;
    float u117;
    int t118;
    float u119;
    int t120;
    int t121;
    float u122;
    int t126;
    float u127;
    int t128;
    int t129;
    int t131;
    int t136;
    int t137;
    int t138;
    int t187;
    int t141;
    float u142;
    int t144;
    int t145;
    int t147;
    float u148;
    float u149;
    float u150;
    float u151;
    int t153;
    int t157;
    int t158;
    int t164;
    int t169;
    float u170;
    float u171;
    float u172;
    int t173;
    float u174;
    int t175;
    int t176;
    float u177;
    int t181;
    float u182;
    int t183;
    int t184;
    int t186;
    int t193;
    int t194;
    int t195;
    int t196;
    int t197;
    int t198;
    int t252;
    int t199;
    int t200;
    int t201;
    int t250;
    int t204;
    float u205;
    int t207;
    int t208;
    int t210;
    float u211;
    float u212;
    float u213;
    float u214;
    int t216;
    int t220;
    int t221;
    int t227;
    int t232;
    float u233;
    float u234;
    float u235;
    int t236;
    float u237;
    int t238;
    int t239;
    float u240;
    int t244;
    float u245;
    int t246;
    int t247;
    int t249;
    int t254;
    int t255;
    int t256;
    int t305;
    int t259;
    float u260;
    int t262;
    int t263;
    int t265;
    float u266;
    float u267;
    float u268;
    float u269;
    int t271;
    int t275;
    int t276;
    int t282;
    int t287;
    float u288;
    float u289;
    float u290;
    int t291;
    float u292;
    int t293;
    int t294;
    float u295;
    int t299;
    float u300;
    int t301;
    int t302;
    int t304;
    int t309;
    int t310;
    int t311;
    int t360;
    int t314;
    float u315;
    int t317;
    int t318;
    int t320;
    float u321;
    float u322;
    float u323;
    float u324;
    int t326;
    int t330;
    int t331;
    int t337;
    int t342;
    float u343;
    float u344;
    float u345;
    int t346;
    float u347;
    int t348;
    int t349;
    float u350;
    int t354;
    float u355;
    int t356;
    int t357;
    int t359;
    int t366;
    int t367;
    int t368;
    int t369;
    int t370;
    int t371;
    int t425;
    int t372;
    int t373;
    int t374;
    int t423;
    int t377;
    float u378;
    int t380;
    int t381;
    int t383;
    float u384;
    float u385;
    float u386;
    float u387;
    int t389;
    int t393;
    int t394;
    int t400;
    int t405;
    float u406;
    float u407;
    float u408;
    int t409;
    float u410;
    int t411;
    int t412;
    float u413;
    int t417;
    float u418;
    int t419;
    int t420;
    int t422;
    int t427;
    int t428;
    int t429;
    int t478;
    int t432;
    float u433;
    int t435;
    int t436;
    int t438;
    float u439;
    float u440;
    float u441;
    float u442;
    int t444;
    int t448;
    int t449;
    int t455;
    int t460;
    float u461;
    float u462;
    float u463;
    int t464;
    float u465;
    int t466;
    int t467;
    float u468;
    int t472;
    float u473;
    int t474;
    int t475;
    int t477;
    int t482;
    int t483;
    int t484;
    int t533;
    int t487;
    float u488;
    int t490;
    int t491;
    int t493;
    float u494;
    float u495;
    float u496;
    float u497;
    int t499;
    int t503;
    int t504;
    int t510;
    int t515;
    float u516;
    float u517;
    float u518;
    int t519;
    float u520;
    int t521;
    int t522;
    float u523;
    int t527;
    float u528;
    int t529;
    int t530;
    int t532;
    int t539;
    int t540;
    int t541;
    int t542;
    int t543;
    int t544;
    int t598;
    int t545;
    int t546;
    int t547;
    int t596;
    int t550;
    float u551;
    int t553;
    int t554;
    int t556;
    float u557;
    float u558;
    float u559;
    float u560;
    int t562;
    int t566;
    int t567;
    int t573;
    int t578;
    float u579;
    float u580;
    float u581;
    int t582;
    float u583;
    int t584;
    int t585;
    float u586;
    int t590;
    float u591;
    int t592;
    int t593;
    int t595;
    int t600;
    int t601;
    int t602;
    int t651;
    int t605;
    float u606;
    int t608;
    int t609;
    int t611;
    float u612;
    float u613;
    float u614;
    float u615;
    int t617;
    int t621;
    int t622;
    int t628;
    int t633;
    float u634;
    float u635;
    float u636;
    int t637;
    float u638;
    int t639;
    int t640;
    float u641;
    int t645;
    float u646;
    int t647;
    int t648;
    int t650;
    int t655;
    int t656;
    int t657;
    int t706;
    int t660;
    float u661;
    int t663;
    int t664;
    int t666;
    float u667;
    float u668;
    float u669;
    float u670;
    int t672;
    int t676;
    int t677;
    int t683;
    int t688;
    float u689;
    float u690;
    float u691;
    int t692;
    float u693;
    int t694;
    int t695;
    float u696;
    int t700;
    float u701;
    int t702;
    int t703;
    int t705;
    int t712;
    int t713;
    int t714;
    int t715;
    int t716;
    int t717;
    int t771;
    int t718;
    int t719;
    int t720;
    int t769;
    int t723;
    float u724;
    int t726;
    int t727;
    int t729;
    float u730;
    float u731;
    float u732;
    float u733;
    int t735;
    int t739;
    int t740;
    int t746;
    int t751;
    float u752;
    float u753;
    float u754;
    int t755;
    float u756;
    int t757;
    int t758;
    float u759;
    int t763;
    float u764;
    int t765;
    int t766;
    int t768;
    int t773;
    int t774;
    int t775;
    int t824;
    int t778;
    float u779;
    int t781;
    int t782;
    int t784;
    float u785;
    float u786;
    float u787;
    float u788;
    int t790;
    int t794;
    int t795;
    int t801;
    int t806;
    float u807;
    float u808;
    float u809;
    int t810;
    float u811;
    int t812;
    int t813;
    float u814;
    int t818;
    float u819;
    int t820;
    int t821;
    int t823;
    int t828;
    int t829;
    int t830;
    int t879;
    int t833;
    float u834;
    int t836;
    int t837;
    int t839;
    float u840;
    float u841;
    float u842;
    float u843;
    int t845;
    int t849;
    int t850;
    int t856;
    int t861;
    float u862;
    float u863;
    float u864;
    int t865;
    float u866;
    int t867;
    int t868;
    float u869;
    int t873;
    float u874;
    int t875;
    int t876;
    int t878;
    int t883;
    int t710;
    int t537;
    int t364;
    int t189;
    int t134;
    int t362;
    int t307;
    int t535;
    int t480;
    int t708;
    int t653;
    int t881;
    int t826;
    int stk[24] = {0};

    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = *(int *)0xC0D60DC;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x38)) = t0;
    t1 = *(int *)0xC0D60D8;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x34)) = t1;
    t2 = *(int *)0xC0D60D4;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x30)) = t2;
    t3 = *(int *)0xC0D60D0;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x2C)) = t3;
    t4 = *(int *)0xC0D60CC;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x28)) = t4;
    t5 = *(int *)0xC0D60C8;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x24)) = t5;
    t6 = *(int *)0xC0D60C4;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x20)) = t6;
    t7 = *(int *)0xC0D60C0;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x1C)) = t7;
    t8 = *(int *)0xC0D60BC;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x18)) = t8;
    t9 = *(int *)0xC0D60B8;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x14)) = t9;
    t10 = *(int *)0xC0D60B4;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x10)) = t10;
    t11 = *(int *)0xC0D60B0;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0xC)) = t11;
    t12 = *(int *)0xC0D60AC;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x8)) = t12;
    t13 = *(int *)0xC0D60A8;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x4)) = t13;
    t14 = *(int *)0xC0D60A4;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x0)) = t14;
    t15 = *(int *)0xC179860;
    if (t15 != 0) {
        t16 = *(int *)0xC179860;
        if (t16 != 1) {
            t17 = *(int *)0xC179860;
            if (t17 != 2) {
                t18 = *(int *)0xC179860;
                if (t18 != 10) {
                    t19 = *(int *)0xC179860;
                    t191 = t19;
                    if (t19 == 11) {
                        t20 = *(int *)0xC1EE20C;
                        if (t20 == 2) {
                            t21 = *(int *)0xC1EE214;
                            if (t21 == 8) {
                                t22 = *(int *)((a4 + 0x144));
                                t23 = *(int *)((t22 + 0x14));
                                t24 = *(int *)((t23 + 0x4));
                                t25 = IsBoyFriend(t24, 0x1);
                                t79 = t25;
                                if (t25 != 0) {
                                    t26 = *(int *)((a4 + 0x144));
                                    t27 = *(int *)((0x198 + t26));
                                    t28 = *(int *)((t27 + 0x0));
                                    t77 = t28;
                                    if (t28 != -1) {
                                        nlPushUnitMatrix();
                                        nlTranslateV((a4 + 0x4));
                                        t31 = *(int *)((a4 + 0x144));
                                        u32 = *(float *)((t31 + 0x17C));
                                        nlTranslate(0.0f, u32, 0.0f);
                                        t34 = *(int *)((a4 + 0x144));
                                        t35 = *(short *)((t34 + 0x180));
                                        nlRotateAY((unsigned short)t35);
                                        t37 = *(int *)((a4 + 0x144));
                                        u38 = *(float *)((t37 + 0x194));
                                        u39 = *(float *)((((signed char)((((int)(u38 * 4.0f) << 1) + (int)(u38 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x8));
                                        u40 = *(float *)((((signed char)((((int)(u38 * 4.0f) << 1) + (int)(u38 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x4));
                                        u41 = *(float *)((((signed char)((((int)(u38 * 4.0f) << 1) + (int)(u38 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x0));
                                        nlObjPutSetFadeColor(u41, u40, u39);
                                        t43 = *(int *)0xC179124;
                                        if (t43 != 0) {
                                            nlScale(0.5f, 0.5f, 0.5f);
                                            nlSetScaleFactor(0.5f);
                                        }
                                        t47 = *(int *)(((int)stk + 4));
                                        t48 = 0xC0EAC20;
                                        if (t47 == 0) {
                                            t48 = 0xC0EB720;
                                        }
                                        nlObjPutUseViewMatrix(t48);
                                        FUN_0c077f70();
                                        nlGetTranslate((((int)stk + 4) + 0x4));
                                        nlUnitMatrix();
                                        nlTranslateV((((int)stk + 4) + 0x4));
                                        t54 = *(int *)0xC179124;
                                        if (t54 != 0) {
                                            nlScale(0.5f, 0.5f, 0.5f);
                                            nlSetScaleFactor(0.5f);
                                        }
                                        nlObjPut(0xC0EB340);
                                        t59 = *(int *)((a4 + 0x144));
                                        u60 = *(float *)((t59 + 0x17C));
                                        u61 = *(float *)(((0x178 + t59) + 0x0));
                                        *(float *)((t59 + 0x17C)) = (u60 + u61);
                                        u62 = *(float *)0xC071D10;
                                        t63 = *(int *)((a4 + 0x144));
                                        u64 = *(float *)((t63 + 0x17C));
                                        if (u62 > u64) {
                                            t65 = *(int *)((a4 + 0x144));
                                            *(float *)((t65 + 0x17C)) = u62;
                                            t66 = *(int *)((a4 + 0x144));
                                            u67 = *(float *)0xC071D14;
                                            *(float *)((t66 + 0x178)) = u67;
                                        }
                                        t71 = *(int *)((a4 + 0x144));
                                        u72 = *(float *)((t71 + 0x178));
                                        *(float *)((t71 + 0x178)) = (u72 - 0.0249999985f);
                                        t73 = *(int *)((a4 + 0x144));
                                        t74 = *(short *)((t73 + 0x180));
                                        *(unsigned short *)((t73 + 0x180)) = (t74 + 0x100);
                                        ResetFadeColor();
                                        t76 = nlPopMatrix(0x1);
                                        t77 = t76;
                                    }
                                    t79 = t77;
                                }
                                t134 = t79;
                            } else {
                                t81 = *(int *)((a4 + 0x144));
                                t82 = *(int *)((0x198 + t81));
                                t83 = *(int *)((t82 + 0x0));
                                t132 = t83;
                                if (t83 != -1) {
                                    nlPushUnitMatrix();
                                    nlTranslateV((a4 + 0x4));
                                    t86 = *(int *)((a4 + 0x144));
                                    u87 = *(float *)((t86 + 0x17C));
                                    nlTranslate(0.0f, u87, 0.0f);
                                    t89 = *(int *)((a4 + 0x144));
                                    t90 = *(short *)((t89 + 0x180));
                                    nlRotateAY((unsigned short)t90);
                                    t92 = *(int *)((a4 + 0x144));
                                    u93 = *(float *)((t92 + 0x194));
                                    u94 = *(float *)((((signed char)((((int)(u93 * 4.0f) << 1) + (int)(u93 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x8));
                                    u95 = *(float *)((((signed char)((((int)(u93 * 4.0f) << 1) + (int)(u93 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x4));
                                    u96 = *(float *)((((signed char)((((int)(u93 * 4.0f) << 1) + (int)(u93 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x0));
                                    nlObjPutSetFadeColor(u96, u95, u94);
                                    t98 = *(int *)0xC179124;
                                    if (t98 != 0) {
                                        nlScale(0.5f, 0.5f, 0.5f);
                                        nlSetScaleFactor(0.5f);
                                    }
                                    t102 = *(int *)(((int)stk + 4));
                                    t103 = 0xC0EAC20;
                                    if (t102 == 0) {
                                        t103 = 0xC0EB720;
                                    }
                                    nlObjPutUseViewMatrix(t103);
                                    FUN_0c077f70();
                                    nlGetTranslate((((int)stk + 4) + 0x4));
                                    nlUnitMatrix();
                                    nlTranslateV((((int)stk + 4) + 0x4));
                                    t109 = *(int *)0xC179124;
                                    if (t109 != 0) {
                                        nlScale(0.5f, 0.5f, 0.5f);
                                        nlSetScaleFactor(0.5f);
                                    }
                                    nlObjPut(0xC0EB340);
                                    t114 = *(int *)((a4 + 0x144));
                                    u115 = *(float *)((t114 + 0x17C));
                                    u116 = *(float *)(((0x178 + t114) + 0x0));
                                    *(float *)((t114 + 0x17C)) = (u115 + u116);
                                    u117 = *(float *)0xC071D10;
                                    t118 = *(int *)((a4 + 0x144));
                                    u119 = *(float *)((t118 + 0x17C));
                                    if (u117 > u119) {
                                        t120 = *(int *)((a4 + 0x144));
                                        *(float *)((t120 + 0x17C)) = u117;
                                        t121 = *(int *)((a4 + 0x144));
                                        u122 = *(float *)0xC071D14;
                                        *(float *)((t121 + 0x178)) = u122;
                                    }
                                    t126 = *(int *)((a4 + 0x144));
                                    u127 = *(float *)((t126 + 0x178));
                                    *(float *)((t126 + 0x178)) = (u127 - 0.0249999985f);
                                    t128 = *(int *)((a4 + 0x144));
                                    t129 = *(short *)((t128 + 0x180));
                                    *(unsigned short *)((t128 + 0x180)) = (t129 + 0x100);
                                    ResetFadeColor();
                                    t131 = nlPopMatrix(0x1);
                                    t132 = t131;
                                }
                                t134 = t132;
                            }
                            t189 = t134;
                        } else {
                            t136 = *(int *)((a4 + 0x144));
                            t137 = *(int *)((0x198 + t136));
                            t138 = *(int *)((t137 + 0x0));
                            t187 = t138;
                            if (t138 != -1) {
                                nlPushUnitMatrix();
                                nlTranslateV((a4 + 0x4));
                                t141 = *(int *)((a4 + 0x144));
                                u142 = *(float *)((t141 + 0x17C));
                                nlTranslate(0.0f, u142, 0.0f);
                                t144 = *(int *)((a4 + 0x144));
                                t145 = *(short *)((t144 + 0x180));
                                nlRotateAY((unsigned short)t145);
                                t147 = *(int *)((a4 + 0x144));
                                u148 = *(float *)((t147 + 0x194));
                                u149 = *(float *)((((signed char)((((int)(u148 * 4.0f) << 1) + (int)(u148 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x8));
                                u150 = *(float *)((((signed char)((((int)(u148 * 4.0f) << 1) + (int)(u148 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x4));
                                u151 = *(float *)((((signed char)((((int)(u148 * 4.0f) << 1) + (int)(u148 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x0));
                                nlObjPutSetFadeColor(u151, u150, u149);
                                t153 = *(int *)0xC179124;
                                if (t153 != 0) {
                                    nlScale(0.5f, 0.5f, 0.5f);
                                    nlSetScaleFactor(0.5f);
                                }
                                t157 = *(int *)(((int)stk + 4));
                                t158 = 0xC0EAC20;
                                if (t157 == 0) {
                                    t158 = 0xC0EB720;
                                }
                                nlObjPutUseViewMatrix(t158);
                                FUN_0c077f70();
                                nlGetTranslate((((int)stk + 4) + 0x4));
                                nlUnitMatrix();
                                nlTranslateV((((int)stk + 4) + 0x4));
                                t164 = *(int *)0xC179124;
                                if (t164 != 0) {
                                    nlScale(0.5f, 0.5f, 0.5f);
                                    nlSetScaleFactor(0.5f);
                                }
                                nlObjPut(0xC0EB340);
                                t169 = *(int *)((a4 + 0x144));
                                u170 = *(float *)((t169 + 0x17C));
                                u171 = *(float *)(((0x178 + t169) + 0x0));
                                *(float *)((t169 + 0x17C)) = (u170 + u171);
                                u172 = *(float *)0xC071D10;
                                t173 = *(int *)((a4 + 0x144));
                                u174 = *(float *)((t173 + 0x17C));
                                if (u172 > u174) {
                                    t175 = *(int *)((a4 + 0x144));
                                    *(float *)((t175 + 0x17C)) = u172;
                                    t176 = *(int *)((a4 + 0x144));
                                    u177 = *(float *)0xC071D14;
                                    *(float *)((t176 + 0x178)) = u177;
                                }
                                t181 = *(int *)((a4 + 0x144));
                                u182 = *(float *)((t181 + 0x178));
                                *(float *)((t181 + 0x178)) = (u182 - 0.0249999985f);
                                t183 = *(int *)((a4 + 0x144));
                                t184 = *(short *)((t183 + 0x180));
                                *(unsigned short *)((t183 + 0x180)) = (t184 + 0x100);
                                ResetFadeColor();
                                t186 = nlPopMatrix(0x1);
                                t187 = t186;
                            }
                            t189 = t187;
                        }
                        t191 = t189;
                    }
                    t364 = t191;
                } else {
                    t193 = *(int *)0xC1EE20C;
                    if (t193 == 2) {
                        t194 = *(int *)0xC1EE214;
                        if (t194 == 8) {
                            t195 = *(int *)((a4 + 0x144));
                            t196 = *(int *)((t195 + 0x14));
                            t197 = *(int *)((t196 + 0x4));
                            t198 = IsBoyFriend(t197, 0x1);
                            t252 = t198;
                            if (t198 != 0) {
                                t199 = *(int *)((a4 + 0x144));
                                t200 = *(int *)((0x198 + t199));
                                t201 = *(int *)((t200 + 0x0));
                                t250 = t201;
                                if (t201 != -1) {
                                    nlPushUnitMatrix();
                                    nlTranslateV((a4 + 0x4));
                                    t204 = *(int *)((a4 + 0x144));
                                    u205 = *(float *)((t204 + 0x17C));
                                    nlTranslate(0.0f, u205, 0.0f);
                                    t207 = *(int *)((a4 + 0x144));
                                    t208 = *(short *)((t207 + 0x180));
                                    nlRotateAY((unsigned short)t208);
                                    t210 = *(int *)((a4 + 0x144));
                                    u211 = *(float *)((t210 + 0x194));
                                    u212 = *(float *)((((signed char)((((int)(u211 * 4.0f) << 1) + (int)(u211 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x8));
                                    u213 = *(float *)((((signed char)((((int)(u211 * 4.0f) << 1) + (int)(u211 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x4));
                                    u214 = *(float *)((((signed char)((((int)(u211 * 4.0f) << 1) + (int)(u211 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x0));
                                    nlObjPutSetFadeColor(u214, u213, u212);
                                    t216 = *(int *)0xC179124;
                                    if (t216 != 0) {
                                        nlScale(0.5f, 0.5f, 0.5f);
                                        nlSetScaleFactor(0.5f);
                                    }
                                    t220 = *(int *)(((int)stk + 4));
                                    t221 = 0xC0EAC20;
                                    if (t220 == 0) {
                                        t221 = 0xC0EB720;
                                    }
                                    nlObjPutUseViewMatrix(t221);
                                    FUN_0c077f70();
                                    nlGetTranslate((((int)stk + 4) + 0x4));
                                    nlUnitMatrix();
                                    nlTranslateV((((int)stk + 4) + 0x4));
                                    t227 = *(int *)0xC179124;
                                    if (t227 != 0) {
                                        nlScale(0.5f, 0.5f, 0.5f);
                                        nlSetScaleFactor(0.5f);
                                    }
                                    nlObjPut(0xC0EB340);
                                    t232 = *(int *)((a4 + 0x144));
                                    u233 = *(float *)((t232 + 0x17C));
                                    u234 = *(float *)(((0x178 + t232) + 0x0));
                                    *(float *)((t232 + 0x17C)) = (u233 + u234);
                                    u235 = *(float *)0xC071D10;
                                    t236 = *(int *)((a4 + 0x144));
                                    u237 = *(float *)((t236 + 0x17C));
                                    if (u235 > u237) {
                                        t238 = *(int *)((a4 + 0x144));
                                        *(float *)((t238 + 0x17C)) = u235;
                                        t239 = *(int *)((a4 + 0x144));
                                        u240 = *(float *)0xC071D14;
                                        *(float *)((t239 + 0x178)) = u240;
                                    }
                                    t244 = *(int *)((a4 + 0x144));
                                    u245 = *(float *)((t244 + 0x178));
                                    *(float *)((t244 + 0x178)) = (u245 - 0.0249999985f);
                                    t246 = *(int *)((a4 + 0x144));
                                    t247 = *(short *)((t246 + 0x180));
                                    *(unsigned short *)((t246 + 0x180)) = (t247 + 0x100);
                                    ResetFadeColor();
                                    t249 = nlPopMatrix(0x1);
                                    t250 = t249;
                                }
                                t252 = t250;
                            }
                            t307 = t252;
                        } else {
                            t254 = *(int *)((a4 + 0x144));
                            t255 = *(int *)((0x198 + t254));
                            t256 = *(int *)((t255 + 0x0));
                            t305 = t256;
                            if (t256 != -1) {
                                nlPushUnitMatrix();
                                nlTranslateV((a4 + 0x4));
                                t259 = *(int *)((a4 + 0x144));
                                u260 = *(float *)((t259 + 0x17C));
                                nlTranslate(0.0f, u260, 0.0f);
                                t262 = *(int *)((a4 + 0x144));
                                t263 = *(short *)((t262 + 0x180));
                                nlRotateAY((unsigned short)t263);
                                t265 = *(int *)((a4 + 0x144));
                                u266 = *(float *)((t265 + 0x194));
                                u267 = *(float *)((((signed char)((((int)(u266 * 4.0f) << 1) + (int)(u266 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x8));
                                u268 = *(float *)((((signed char)((((int)(u266 * 4.0f) << 1) + (int)(u266 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x4));
                                u269 = *(float *)((((signed char)((((int)(u266 * 4.0f) << 1) + (int)(u266 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x0));
                                nlObjPutSetFadeColor(u269, u268, u267);
                                t271 = *(int *)0xC179124;
                                if (t271 != 0) {
                                    nlScale(0.5f, 0.5f, 0.5f);
                                    nlSetScaleFactor(0.5f);
                                }
                                t275 = *(int *)(((int)stk + 4));
                                t276 = 0xC0EAC20;
                                if (t275 == 0) {
                                    t276 = 0xC0EB720;
                                }
                                nlObjPutUseViewMatrix(t276);
                                FUN_0c077f70();
                                nlGetTranslate((((int)stk + 4) + 0x4));
                                nlUnitMatrix();
                                nlTranslateV((((int)stk + 4) + 0x4));
                                t282 = *(int *)0xC179124;
                                if (t282 != 0) {
                                    nlScale(0.5f, 0.5f, 0.5f);
                                    nlSetScaleFactor(0.5f);
                                }
                                nlObjPut(0xC0EB340);
                                t287 = *(int *)((a4 + 0x144));
                                u288 = *(float *)((t287 + 0x17C));
                                u289 = *(float *)(((0x178 + t287) + 0x0));
                                *(float *)((t287 + 0x17C)) = (u288 + u289);
                                u290 = *(float *)0xC071D10;
                                t291 = *(int *)((a4 + 0x144));
                                u292 = *(float *)((t291 + 0x17C));
                                if (u290 > u292) {
                                    t293 = *(int *)((a4 + 0x144));
                                    *(float *)((t293 + 0x17C)) = u290;
                                    t294 = *(int *)((a4 + 0x144));
                                    u295 = *(float *)0xC071D14;
                                    *(float *)((t294 + 0x178)) = u295;
                                }
                                t299 = *(int *)((a4 + 0x144));
                                u300 = *(float *)((t299 + 0x178));
                                *(float *)((t299 + 0x178)) = (u300 - 0.0249999985f);
                                t301 = *(int *)((a4 + 0x144));
                                t302 = *(short *)((t301 + 0x180));
                                *(unsigned short *)((t301 + 0x180)) = (t302 + 0x100);
                                ResetFadeColor();
                                t304 = nlPopMatrix(0x1);
                                t305 = t304;
                            }
                            t307 = t305;
                        }
                        t362 = t307;
                    } else {
                        t309 = *(int *)((a4 + 0x144));
                        t310 = *(int *)((0x198 + t309));
                        t311 = *(int *)((t310 + 0x0));
                        t360 = t311;
                        if (t311 != -1) {
                            nlPushUnitMatrix();
                            nlTranslateV((a4 + 0x4));
                            t314 = *(int *)((a4 + 0x144));
                            u315 = *(float *)((t314 + 0x17C));
                            nlTranslate(0.0f, u315, 0.0f);
                            t317 = *(int *)((a4 + 0x144));
                            t318 = *(short *)((t317 + 0x180));
                            nlRotateAY((unsigned short)t318);
                            t320 = *(int *)((a4 + 0x144));
                            u321 = *(float *)((t320 + 0x194));
                            u322 = *(float *)((((signed char)((((int)(u321 * 4.0f) << 1) + (int)(u321 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x8));
                            u323 = *(float *)((((signed char)((((int)(u321 * 4.0f) << 1) + (int)(u321 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x4));
                            u324 = *(float *)((((signed char)((((int)(u321 * 4.0f) << 1) + (int)(u321 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x0));
                            nlObjPutSetFadeColor(u324, u323, u322);
                            t326 = *(int *)0xC179124;
                            if (t326 != 0) {
                                nlScale(0.5f, 0.5f, 0.5f);
                                nlSetScaleFactor(0.5f);
                            }
                            t330 = *(int *)(((int)stk + 4));
                            t331 = 0xC0EAC20;
                            if (t330 == 0) {
                                t331 = 0xC0EB720;
                            }
                            nlObjPutUseViewMatrix(t331);
                            FUN_0c077f70();
                            nlGetTranslate((((int)stk + 4) + 0x4));
                            nlUnitMatrix();
                            nlTranslateV((((int)stk + 4) + 0x4));
                            t337 = *(int *)0xC179124;
                            if (t337 != 0) {
                                nlScale(0.5f, 0.5f, 0.5f);
                                nlSetScaleFactor(0.5f);
                            }
                            nlObjPut(0xC0EB340);
                            t342 = *(int *)((a4 + 0x144));
                            u343 = *(float *)((t342 + 0x17C));
                            u344 = *(float *)(((0x178 + t342) + 0x0));
                            *(float *)((t342 + 0x17C)) = (u343 + u344);
                            u345 = *(float *)0xC071D10;
                            t346 = *(int *)((a4 + 0x144));
                            u347 = *(float *)((t346 + 0x17C));
                            if (u345 > u347) {
                                t348 = *(int *)((a4 + 0x144));
                                *(float *)((t348 + 0x17C)) = u345;
                                t349 = *(int *)((a4 + 0x144));
                                u350 = *(float *)0xC071D14;
                                *(float *)((t349 + 0x178)) = u350;
                            }
                            t354 = *(int *)((a4 + 0x144));
                            u355 = *(float *)((t354 + 0x178));
                            *(float *)((t354 + 0x178)) = (u355 - 0.0249999985f);
                            t356 = *(int *)((a4 + 0x144));
                            t357 = *(short *)((t356 + 0x180));
                            *(unsigned short *)((t356 + 0x180)) = (t357 + 0x100);
                            ResetFadeColor();
                            t359 = nlPopMatrix(0x1);
                            t360 = t359;
                        }
                        t362 = t360;
                    }
                    t364 = t362;
                }
                t537 = t364;
            } else {
                t366 = *(int *)0xC1EE20C;
                if (t366 == 2) {
                    t367 = *(int *)0xC1EE214;
                    if (t367 == 8) {
                        t368 = *(int *)((a4 + 0x144));
                        t369 = *(int *)((t368 + 0x14));
                        t370 = *(int *)((t369 + 0x4));
                        t371 = IsBoyFriend(t370, 0x1);
                        t425 = t371;
                        if (t371 != 0) {
                            t372 = *(int *)((a4 + 0x144));
                            t373 = *(int *)((0x198 + t372));
                            t374 = *(int *)((t373 + 0x0));
                            t423 = t374;
                            if (t374 != -1) {
                                nlPushUnitMatrix();
                                nlTranslateV((a4 + 0x4));
                                t377 = *(int *)((a4 + 0x144));
                                u378 = *(float *)((t377 + 0x17C));
                                nlTranslate(0.0f, u378, 0.0f);
                                t380 = *(int *)((a4 + 0x144));
                                t381 = *(short *)((t380 + 0x180));
                                nlRotateAY((unsigned short)t381);
                                t383 = *(int *)((a4 + 0x144));
                                u384 = *(float *)((t383 + 0x194));
                                u385 = *(float *)((((signed char)((((int)(u384 * 4.0f) << 1) + (int)(u384 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x8));
                                u386 = *(float *)((((signed char)((((int)(u384 * 4.0f) << 1) + (int)(u384 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x4));
                                u387 = *(float *)((((signed char)((((int)(u384 * 4.0f) << 1) + (int)(u384 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x0));
                                nlObjPutSetFadeColor(u387, u386, u385);
                                t389 = *(int *)0xC179124;
                                if (t389 != 0) {
                                    nlScale(0.5f, 0.5f, 0.5f);
                                    nlSetScaleFactor(0.5f);
                                }
                                t393 = *(int *)(((int)stk + 4));
                                t394 = 0xC0EAC20;
                                if (t393 == 0) {
                                    t394 = 0xC0EB720;
                                }
                                nlObjPutUseViewMatrix(t394);
                                FUN_0c077f70();
                                nlGetTranslate((((int)stk + 4) + 0x4));
                                nlUnitMatrix();
                                nlTranslateV((((int)stk + 4) + 0x4));
                                t400 = *(int *)0xC179124;
                                if (t400 != 0) {
                                    nlScale(0.5f, 0.5f, 0.5f);
                                    nlSetScaleFactor(0.5f);
                                }
                                nlObjPut(0xC0EB340);
                                t405 = *(int *)((a4 + 0x144));
                                u406 = *(float *)((t405 + 0x17C));
                                u407 = *(float *)(((0x178 + t405) + 0x0));
                                *(float *)((t405 + 0x17C)) = (u406 + u407);
                                u408 = *(float *)0xC071D10;
                                t409 = *(int *)((a4 + 0x144));
                                u410 = *(float *)((t409 + 0x17C));
                                if (u408 > u410) {
                                    t411 = *(int *)((a4 + 0x144));
                                    *(float *)((t411 + 0x17C)) = u408;
                                    t412 = *(int *)((a4 + 0x144));
                                    u413 = *(float *)0xC071D14;
                                    *(float *)((t412 + 0x178)) = u413;
                                }
                                t417 = *(int *)((a4 + 0x144));
                                u418 = *(float *)((t417 + 0x178));
                                *(float *)((t417 + 0x178)) = (u418 - 0.0249999985f);
                                t419 = *(int *)((a4 + 0x144));
                                t420 = *(short *)((t419 + 0x180));
                                *(unsigned short *)((t419 + 0x180)) = (t420 + 0x100);
                                ResetFadeColor();
                                t422 = nlPopMatrix(0x1);
                                t423 = t422;
                            }
                            t425 = t423;
                        }
                        t480 = t425;
                    } else {
                        t427 = *(int *)((a4 + 0x144));
                        t428 = *(int *)((0x198 + t427));
                        t429 = *(int *)((t428 + 0x0));
                        t478 = t429;
                        if (t429 != -1) {
                            nlPushUnitMatrix();
                            nlTranslateV((a4 + 0x4));
                            t432 = *(int *)((a4 + 0x144));
                            u433 = *(float *)((t432 + 0x17C));
                            nlTranslate(0.0f, u433, 0.0f);
                            t435 = *(int *)((a4 + 0x144));
                            t436 = *(short *)((t435 + 0x180));
                            nlRotateAY((unsigned short)t436);
                            t438 = *(int *)((a4 + 0x144));
                            u439 = *(float *)((t438 + 0x194));
                            u440 = *(float *)((((signed char)((((int)(u439 * 4.0f) << 1) + (int)(u439 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x8));
                            u441 = *(float *)((((signed char)((((int)(u439 * 4.0f) << 1) + (int)(u439 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x4));
                            u442 = *(float *)((((signed char)((((int)(u439 * 4.0f) << 1) + (int)(u439 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x0));
                            nlObjPutSetFadeColor(u442, u441, u440);
                            t444 = *(int *)0xC179124;
                            if (t444 != 0) {
                                nlScale(0.5f, 0.5f, 0.5f);
                                nlSetScaleFactor(0.5f);
                            }
                            t448 = *(int *)(((int)stk + 4));
                            t449 = 0xC0EAC20;
                            if (t448 == 0) {
                                t449 = 0xC0EB720;
                            }
                            nlObjPutUseViewMatrix(t449);
                            FUN_0c077f70();
                            nlGetTranslate((((int)stk + 4) + 0x4));
                            nlUnitMatrix();
                            nlTranslateV((((int)stk + 4) + 0x4));
                            t455 = *(int *)0xC179124;
                            if (t455 != 0) {
                                nlScale(0.5f, 0.5f, 0.5f);
                                nlSetScaleFactor(0.5f);
                            }
                            nlObjPut(0xC0EB340);
                            t460 = *(int *)((a4 + 0x144));
                            u461 = *(float *)((t460 + 0x17C));
                            u462 = *(float *)(((0x178 + t460) + 0x0));
                            *(float *)((t460 + 0x17C)) = (u461 + u462);
                            u463 = *(float *)0xC071D10;
                            t464 = *(int *)((a4 + 0x144));
                            u465 = *(float *)((t464 + 0x17C));
                            if (u463 > u465) {
                                t466 = *(int *)((a4 + 0x144));
                                *(float *)((t466 + 0x17C)) = u463;
                                t467 = *(int *)((a4 + 0x144));
                                u468 = *(float *)0xC071D14;
                                *(float *)((t467 + 0x178)) = u468;
                            }
                            t472 = *(int *)((a4 + 0x144));
                            u473 = *(float *)((t472 + 0x178));
                            *(float *)((t472 + 0x178)) = (u473 - 0.0249999985f);
                            t474 = *(int *)((a4 + 0x144));
                            t475 = *(short *)((t474 + 0x180));
                            *(unsigned short *)((t474 + 0x180)) = (t475 + 0x100);
                            ResetFadeColor();
                            t477 = nlPopMatrix(0x1);
                            t478 = t477;
                        }
                        t480 = t478;
                    }
                    t535 = t480;
                } else {
                    t482 = *(int *)((a4 + 0x144));
                    t483 = *(int *)((0x198 + t482));
                    t484 = *(int *)((t483 + 0x0));
                    t533 = t484;
                    if (t484 != -1) {
                        nlPushUnitMatrix();
                        nlTranslateV((a4 + 0x4));
                        t487 = *(int *)((a4 + 0x144));
                        u488 = *(float *)((t487 + 0x17C));
                        nlTranslate(0.0f, u488, 0.0f);
                        t490 = *(int *)((a4 + 0x144));
                        t491 = *(short *)((t490 + 0x180));
                        nlRotateAY((unsigned short)t491);
                        t493 = *(int *)((a4 + 0x144));
                        u494 = *(float *)((t493 + 0x194));
                        u495 = *(float *)((((signed char)((((int)(u494 * 4.0f) << 1) + (int)(u494 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x8));
                        u496 = *(float *)((((signed char)((((int)(u494 * 4.0f) << 1) + (int)(u494 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x4));
                        u497 = *(float *)((((signed char)((((int)(u494 * 4.0f) << 1) + (int)(u494 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x0));
                        nlObjPutSetFadeColor(u497, u496, u495);
                        t499 = *(int *)0xC179124;
                        if (t499 != 0) {
                            nlScale(0.5f, 0.5f, 0.5f);
                            nlSetScaleFactor(0.5f);
                        }
                        t503 = *(int *)(((int)stk + 4));
                        t504 = 0xC0EAC20;
                        if (t503 == 0) {
                            t504 = 0xC0EB720;
                        }
                        nlObjPutUseViewMatrix(t504);
                        FUN_0c077f70();
                        nlGetTranslate((((int)stk + 4) + 0x4));
                        nlUnitMatrix();
                        nlTranslateV((((int)stk + 4) + 0x4));
                        t510 = *(int *)0xC179124;
                        if (t510 != 0) {
                            nlScale(0.5f, 0.5f, 0.5f);
                            nlSetScaleFactor(0.5f);
                        }
                        nlObjPut(0xC0EB340);
                        t515 = *(int *)((a4 + 0x144));
                        u516 = *(float *)((t515 + 0x17C));
                        u517 = *(float *)(((0x178 + t515) + 0x0));
                        *(float *)((t515 + 0x17C)) = (u516 + u517);
                        u518 = *(float *)0xC071D10;
                        t519 = *(int *)((a4 + 0x144));
                        u520 = *(float *)((t519 + 0x17C));
                        if (u518 > u520) {
                            t521 = *(int *)((a4 + 0x144));
                            *(float *)((t521 + 0x17C)) = u518;
                            t522 = *(int *)((a4 + 0x144));
                            u523 = *(float *)0xC071D14;
                            *(float *)((t522 + 0x178)) = u523;
                        }
                        t527 = *(int *)((a4 + 0x144));
                        u528 = *(float *)((t527 + 0x178));
                        *(float *)((t527 + 0x178)) = (u528 - 0.0249999985f);
                        t529 = *(int *)((a4 + 0x144));
                        t530 = *(short *)((t529 + 0x180));
                        *(unsigned short *)((t529 + 0x180)) = (t530 + 0x100);
                        ResetFadeColor();
                        t532 = nlPopMatrix(0x1);
                        t533 = t532;
                    }
                    t535 = t533;
                }
                t537 = t535;
            }
            t710 = t537;
        } else {
            t539 = *(int *)0xC1EE20C;
            if (t539 == 2) {
                t540 = *(int *)0xC1EE214;
                if (t540 == 8) {
                    t541 = *(int *)((a4 + 0x144));
                    t542 = *(int *)((t541 + 0x14));
                    t543 = *(int *)((t542 + 0x4));
                    t544 = IsBoyFriend(t543, 0x1);
                    t598 = t544;
                    if (t544 != 0) {
                        t545 = *(int *)((a4 + 0x144));
                        t546 = *(int *)((0x198 + t545));
                        t547 = *(int *)((t546 + 0x0));
                        t596 = t547;
                        if (t547 != -1) {
                            nlPushUnitMatrix();
                            nlTranslateV((a4 + 0x4));
                            t550 = *(int *)((a4 + 0x144));
                            u551 = *(float *)((t550 + 0x17C));
                            nlTranslate(0.0f, u551, 0.0f);
                            t553 = *(int *)((a4 + 0x144));
                            t554 = *(short *)((t553 + 0x180));
                            nlRotateAY((unsigned short)t554);
                            t556 = *(int *)((a4 + 0x144));
                            u557 = *(float *)((t556 + 0x194));
                            u558 = *(float *)((((signed char)((((int)(u557 * 4.0f) << 1) + (int)(u557 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x8));
                            u559 = *(float *)((((signed char)((((int)(u557 * 4.0f) << 1) + (int)(u557 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x4));
                            u560 = *(float *)((((signed char)((((int)(u557 * 4.0f) << 1) + (int)(u557 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x0));
                            nlObjPutSetFadeColor(u560, u559, u558);
                            t562 = *(int *)0xC179124;
                            if (t562 != 0) {
                                nlScale(0.5f, 0.5f, 0.5f);
                                nlSetScaleFactor(0.5f);
                            }
                            t566 = *(int *)(((int)stk + 4));
                            t567 = 0xC0EAC20;
                            if (t566 == 0) {
                                t567 = 0xC0EB720;
                            }
                            nlObjPutUseViewMatrix(t567);
                            FUN_0c077f70();
                            nlGetTranslate((((int)stk + 4) + 0x4));
                            nlUnitMatrix();
                            nlTranslateV((((int)stk + 4) + 0x4));
                            t573 = *(int *)0xC179124;
                            if (t573 != 0) {
                                nlScale(0.5f, 0.5f, 0.5f);
                                nlSetScaleFactor(0.5f);
                            }
                            nlObjPut(0xC0EB340);
                            t578 = *(int *)((a4 + 0x144));
                            u579 = *(float *)((t578 + 0x17C));
                            u580 = *(float *)(((0x178 + t578) + 0x0));
                            *(float *)((t578 + 0x17C)) = (u579 + u580);
                            u581 = *(float *)0xC071D10;
                            t582 = *(int *)((a4 + 0x144));
                            u583 = *(float *)((t582 + 0x17C));
                            if (u581 > u583) {
                                t584 = *(int *)((a4 + 0x144));
                                *(float *)((t584 + 0x17C)) = u581;
                                t585 = *(int *)((a4 + 0x144));
                                u586 = *(float *)0xC071D14;
                                *(float *)((t585 + 0x178)) = u586;
                            }
                            t590 = *(int *)((a4 + 0x144));
                            u591 = *(float *)((t590 + 0x178));
                            *(float *)((t590 + 0x178)) = (u591 - 0.0249999985f);
                            t592 = *(int *)((a4 + 0x144));
                            t593 = *(short *)((t592 + 0x180));
                            *(unsigned short *)((t592 + 0x180)) = (t593 + 0x100);
                            ResetFadeColor();
                            t595 = nlPopMatrix(0x1);
                            t596 = t595;
                        }
                        t598 = t596;
                    }
                    t653 = t598;
                } else {
                    t600 = *(int *)((a4 + 0x144));
                    t601 = *(int *)((0x198 + t600));
                    t602 = *(int *)((t601 + 0x0));
                    t651 = t602;
                    if (t602 != -1) {
                        nlPushUnitMatrix();
                        nlTranslateV((a4 + 0x4));
                        t605 = *(int *)((a4 + 0x144));
                        u606 = *(float *)((t605 + 0x17C));
                        nlTranslate(0.0f, u606, 0.0f);
                        t608 = *(int *)((a4 + 0x144));
                        t609 = *(short *)((t608 + 0x180));
                        nlRotateAY((unsigned short)t609);
                        t611 = *(int *)((a4 + 0x144));
                        u612 = *(float *)((t611 + 0x194));
                        u613 = *(float *)((((signed char)((((int)(u612 * 4.0f) << 1) + (int)(u612 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x8));
                        u614 = *(float *)((((signed char)((((int)(u612 * 4.0f) << 1) + (int)(u612 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x4));
                        u615 = *(float *)((((signed char)((((int)(u612 * 4.0f) << 1) + (int)(u612 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x0));
                        nlObjPutSetFadeColor(u615, u614, u613);
                        t617 = *(int *)0xC179124;
                        if (t617 != 0) {
                            nlScale(0.5f, 0.5f, 0.5f);
                            nlSetScaleFactor(0.5f);
                        }
                        t621 = *(int *)(((int)stk + 4));
                        t622 = 0xC0EAC20;
                        if (t621 == 0) {
                            t622 = 0xC0EB720;
                        }
                        nlObjPutUseViewMatrix(t622);
                        FUN_0c077f70();
                        nlGetTranslate((((int)stk + 4) + 0x4));
                        nlUnitMatrix();
                        nlTranslateV((((int)stk + 4) + 0x4));
                        t628 = *(int *)0xC179124;
                        if (t628 != 0) {
                            nlScale(0.5f, 0.5f, 0.5f);
                            nlSetScaleFactor(0.5f);
                        }
                        nlObjPut(0xC0EB340);
                        t633 = *(int *)((a4 + 0x144));
                        u634 = *(float *)((t633 + 0x17C));
                        u635 = *(float *)(((0x178 + t633) + 0x0));
                        *(float *)((t633 + 0x17C)) = (u634 + u635);
                        u636 = *(float *)0xC071D10;
                        t637 = *(int *)((a4 + 0x144));
                        u638 = *(float *)((t637 + 0x17C));
                        if (u636 > u638) {
                            t639 = *(int *)((a4 + 0x144));
                            *(float *)((t639 + 0x17C)) = u636;
                            t640 = *(int *)((a4 + 0x144));
                            u641 = *(float *)0xC071D14;
                            *(float *)((t640 + 0x178)) = u641;
                        }
                        t645 = *(int *)((a4 + 0x144));
                        u646 = *(float *)((t645 + 0x178));
                        *(float *)((t645 + 0x178)) = (u646 - 0.0249999985f);
                        t647 = *(int *)((a4 + 0x144));
                        t648 = *(short *)((t647 + 0x180));
                        *(unsigned short *)((t647 + 0x180)) = (t648 + 0x100);
                        ResetFadeColor();
                        t650 = nlPopMatrix(0x1);
                        t651 = t650;
                    }
                    t653 = t651;
                }
                t708 = t653;
            } else {
                t655 = *(int *)((a4 + 0x144));
                t656 = *(int *)((0x198 + t655));
                t657 = *(int *)((t656 + 0x0));
                t706 = t657;
                if (t657 != -1) {
                    nlPushUnitMatrix();
                    nlTranslateV((a4 + 0x4));
                    t660 = *(int *)((a4 + 0x144));
                    u661 = *(float *)((t660 + 0x17C));
                    nlTranslate(0.0f, u661, 0.0f);
                    t663 = *(int *)((a4 + 0x144));
                    t664 = *(short *)((t663 + 0x180));
                    nlRotateAY((unsigned short)t664);
                    t666 = *(int *)((a4 + 0x144));
                    u667 = *(float *)((t666 + 0x194));
                    u668 = *(float *)((((signed char)((((int)(u667 * 4.0f) << 1) + (int)(u667 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x8));
                    u669 = *(float *)((((signed char)((((int)(u667 * 4.0f) << 1) + (int)(u667 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x4));
                    u670 = *(float *)((((signed char)((((int)(u667 * 4.0f) << 1) + (int)(u667 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x0));
                    nlObjPutSetFadeColor(u670, u669, u668);
                    t672 = *(int *)0xC179124;
                    if (t672 != 0) {
                        nlScale(0.5f, 0.5f, 0.5f);
                        nlSetScaleFactor(0.5f);
                    }
                    t676 = *(int *)(((int)stk + 4));
                    t677 = 0xC0EAC20;
                    if (t676 == 0) {
                        t677 = 0xC0EB720;
                    }
                    nlObjPutUseViewMatrix(t677);
                    FUN_0c077f70();
                    nlGetTranslate((((int)stk + 4) + 0x4));
                    nlUnitMatrix();
                    nlTranslateV((((int)stk + 4) + 0x4));
                    t683 = *(int *)0xC179124;
                    if (t683 != 0) {
                        nlScale(0.5f, 0.5f, 0.5f);
                        nlSetScaleFactor(0.5f);
                    }
                    nlObjPut(0xC0EB340);
                    t688 = *(int *)((a4 + 0x144));
                    u689 = *(float *)((t688 + 0x17C));
                    u690 = *(float *)(((0x178 + t688) + 0x0));
                    *(float *)((t688 + 0x17C)) = (u689 + u690);
                    u691 = *(float *)0xC071D10;
                    t692 = *(int *)((a4 + 0x144));
                    u693 = *(float *)((t692 + 0x17C));
                    if (u691 > u693) {
                        t694 = *(int *)((a4 + 0x144));
                        *(float *)((t694 + 0x17C)) = u691;
                        t695 = *(int *)((a4 + 0x144));
                        u696 = *(float *)0xC071D14;
                        *(float *)((t695 + 0x178)) = u696;
                    }
                    t700 = *(int *)((a4 + 0x144));
                    u701 = *(float *)((t700 + 0x178));
                    *(float *)((t700 + 0x178)) = (u701 - 0.0249999985f);
                    t702 = *(int *)((a4 + 0x144));
                    t703 = *(short *)((t702 + 0x180));
                    *(unsigned short *)((t702 + 0x180)) = (t703 + 0x100);
                    ResetFadeColor();
                    t705 = nlPopMatrix(0x1);
                    t706 = t705;
                }
                t708 = t706;
            }
            t710 = t708;
        }
        t883 = t710;
    } else {
        t712 = *(int *)0xC1EE20C;
        if (t712 == 2) {
            t713 = *(int *)0xC1EE214;
            if (t713 == 8) {
                t714 = *(int *)((a4 + 0x144));
                t715 = *(int *)((t714 + 0x14));
                t716 = *(int *)((t715 + 0x4));
                t717 = IsBoyFriend(t716, 0x1);
                t771 = t717;
                if (t717 != 0) {
                    t718 = *(int *)((a4 + 0x144));
                    t719 = *(int *)((0x198 + t718));
                    t720 = *(int *)((t719 + 0x0));
                    t769 = t720;
                    if (t720 != -1) {
                        nlPushUnitMatrix();
                        nlTranslateV((a4 + 0x4));
                        t723 = *(int *)((a4 + 0x144));
                        u724 = *(float *)((t723 + 0x17C));
                        nlTranslate(0.0f, u724, 0.0f);
                        t726 = *(int *)((a4 + 0x144));
                        t727 = *(short *)((t726 + 0x180));
                        nlRotateAY((unsigned short)t727);
                        t729 = *(int *)((a4 + 0x144));
                        u730 = *(float *)((t729 + 0x194));
                        u731 = *(float *)((((signed char)((((int)(u730 * 4.0f) << 1) + (int)(u730 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x8));
                        u732 = *(float *)((((signed char)((((int)(u730 * 4.0f) << 1) + (int)(u730 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x4));
                        u733 = *(float *)((((signed char)((((int)(u730 * 4.0f) << 1) + (int)(u730 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x0));
                        nlObjPutSetFadeColor(u733, u732, u731);
                        t735 = *(int *)0xC179124;
                        if (t735 != 0) {
                            nlScale(0.5f, 0.5f, 0.5f);
                            nlSetScaleFactor(0.5f);
                        }
                        t739 = *(int *)(((int)stk + 4));
                        t740 = 0xC0EAC20;
                        if (t739 == 0) {
                            t740 = 0xC0EB720;
                        }
                        nlObjPutUseViewMatrix(t740);
                        FUN_0c077f70();
                        nlGetTranslate((((int)stk + 4) + 0x4));
                        nlUnitMatrix();
                        nlTranslateV((((int)stk + 4) + 0x4));
                        t746 = *(int *)0xC179124;
                        if (t746 != 0) {
                            nlScale(0.5f, 0.5f, 0.5f);
                            nlSetScaleFactor(0.5f);
                        }
                        nlObjPut(0xC0EB340);
                        t751 = *(int *)((a4 + 0x144));
                        u752 = *(float *)((t751 + 0x17C));
                        u753 = *(float *)(((0x178 + t751) + 0x0));
                        *(float *)((t751 + 0x17C)) = (u752 + u753);
                        u754 = *(float *)0xC071D10;
                        t755 = *(int *)((a4 + 0x144));
                        u756 = *(float *)((t755 + 0x17C));
                        if (u754 > u756) {
                            t757 = *(int *)((a4 + 0x144));
                            *(float *)((t757 + 0x17C)) = u754;
                            t758 = *(int *)((a4 + 0x144));
                            u759 = *(float *)0xC071D14;
                            *(float *)((t758 + 0x178)) = u759;
                        }
                        t763 = *(int *)((a4 + 0x144));
                        u764 = *(float *)((t763 + 0x178));
                        *(float *)((t763 + 0x178)) = (u764 - 0.0249999985f);
                        t765 = *(int *)((a4 + 0x144));
                        t766 = *(short *)((t765 + 0x180));
                        *(unsigned short *)((t765 + 0x180)) = (t766 + 0x100);
                        ResetFadeColor();
                        t768 = nlPopMatrix(0x1);
                        t769 = t768;
                    }
                    t771 = t769;
                }
                t826 = t771;
            } else {
                t773 = *(int *)((a4 + 0x144));
                t774 = *(int *)((0x198 + t773));
                t775 = *(int *)((t774 + 0x0));
                t824 = t775;
                if (t775 != -1) {
                    nlPushUnitMatrix();
                    nlTranslateV((a4 + 0x4));
                    t778 = *(int *)((a4 + 0x144));
                    u779 = *(float *)((t778 + 0x17C));
                    nlTranslate(0.0f, u779, 0.0f);
                    t781 = *(int *)((a4 + 0x144));
                    t782 = *(short *)((t781 + 0x180));
                    nlRotateAY((unsigned short)t782);
                    t784 = *(int *)((a4 + 0x144));
                    u785 = *(float *)((t784 + 0x194));
                    u786 = *(float *)((((signed char)((((int)(u785 * 4.0f) << 1) + (int)(u785 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x8));
                    u787 = *(float *)((((signed char)((((int)(u785 * 4.0f) << 1) + (int)(u785 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x4));
                    u788 = *(float *)((((signed char)((((int)(u785 * 4.0f) << 1) + (int)(u785 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x0));
                    nlObjPutSetFadeColor(u788, u787, u786);
                    t790 = *(int *)0xC179124;
                    if (t790 != 0) {
                        nlScale(0.5f, 0.5f, 0.5f);
                        nlSetScaleFactor(0.5f);
                    }
                    t794 = *(int *)(((int)stk + 4));
                    t795 = 0xC0EAC20;
                    if (t794 == 0) {
                        t795 = 0xC0EB720;
                    }
                    nlObjPutUseViewMatrix(t795);
                    FUN_0c077f70();
                    nlGetTranslate((((int)stk + 4) + 0x4));
                    nlUnitMatrix();
                    nlTranslateV((((int)stk + 4) + 0x4));
                    t801 = *(int *)0xC179124;
                    if (t801 != 0) {
                        nlScale(0.5f, 0.5f, 0.5f);
                        nlSetScaleFactor(0.5f);
                    }
                    nlObjPut(0xC0EB340);
                    t806 = *(int *)((a4 + 0x144));
                    u807 = *(float *)((t806 + 0x17C));
                    u808 = *(float *)(((0x178 + t806) + 0x0));
                    *(float *)((t806 + 0x17C)) = (u807 + u808);
                    u809 = *(float *)0xC071D10;
                    t810 = *(int *)((a4 + 0x144));
                    u811 = *(float *)((t810 + 0x17C));
                    if (u809 > u811) {
                        t812 = *(int *)((a4 + 0x144));
                        *(float *)((t812 + 0x17C)) = u809;
                        t813 = *(int *)((a4 + 0x144));
                        u814 = *(float *)0xC071D14;
                        *(float *)((t813 + 0x178)) = u814;
                    }
                    t818 = *(int *)((a4 + 0x144));
                    u819 = *(float *)((t818 + 0x178));
                    *(float *)((t818 + 0x178)) = (u819 - 0.0249999985f);
                    t820 = *(int *)((a4 + 0x144));
                    t821 = *(short *)((t820 + 0x180));
                    *(unsigned short *)((t820 + 0x180)) = (t821 + 0x100);
                    ResetFadeColor();
                    t823 = nlPopMatrix(0x1);
                    t824 = t823;
                }
                t826 = t824;
            }
            t881 = t826;
        } else {
            t828 = *(int *)((a4 + 0x144));
            t829 = *(int *)((0x198 + t828));
            t830 = *(int *)((t829 + 0x0));
            t879 = t830;
            if (t830 != -1) {
                nlPushUnitMatrix();
                nlTranslateV((a4 + 0x4));
                t833 = *(int *)((a4 + 0x144));
                u834 = *(float *)((t833 + 0x17C));
                nlTranslate(0.0f, u834, 0.0f);
                t836 = *(int *)((a4 + 0x144));
                t837 = *(short *)((t836 + 0x180));
                nlRotateAY((unsigned short)t837);
                t839 = *(int *)((a4 + 0x144));
                u840 = *(float *)((t839 + 0x194));
                u841 = *(float *)((((signed char)((((int)(u840 * 4.0f) << 1) + (int)(u840 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x8));
                u842 = *(float *)((((signed char)((((int)(u840 * 4.0f) << 1) + (int)(u840 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x4));
                u843 = *(float *)((((signed char)((((int)(u840 * 4.0f) << 1) + (int)(u840 * 4.0f)) << 2) + (((int)stk + 4) + 0x10)) + 0x0));
                nlObjPutSetFadeColor(u843, u842, u841);
                t845 = *(int *)0xC179124;
                if (t845 != 0) {
                    nlScale(0.5f, 0.5f, 0.5f);
                    nlSetScaleFactor(0.5f);
                }
                t849 = *(int *)(((int)stk + 4));
                t850 = 0xC0EAC20;
                if (t849 == 0) {
                    t850 = 0xC0EB720;
                }
                nlObjPutUseViewMatrix(t850);
                FUN_0c077f70();
                nlGetTranslate((((int)stk + 4) + 0x4));
                nlUnitMatrix();
                nlTranslateV((((int)stk + 4) + 0x4));
                t856 = *(int *)0xC179124;
                if (t856 != 0) {
                    nlScale(0.5f, 0.5f, 0.5f);
                    nlSetScaleFactor(0.5f);
                }
                nlObjPut(0xC0EB340);
                t861 = *(int *)((a4 + 0x144));
                u862 = *(float *)((t861 + 0x17C));
                u863 = *(float *)(((0x178 + t861) + 0x0));
                *(float *)((t861 + 0x17C)) = (u862 + u863);
                u864 = *(float *)0xC071D10;
                t865 = *(int *)((a4 + 0x144));
                u866 = *(float *)((t865 + 0x17C));
                if (u864 > u866) {
                    t867 = *(int *)((a4 + 0x144));
                    *(float *)((t867 + 0x17C)) = u864;
                    t868 = *(int *)((a4 + 0x144));
                    u869 = *(float *)0xC071D14;
                    *(float *)((t868 + 0x178)) = u869;
                }
                t873 = *(int *)((a4 + 0x144));
                u874 = *(float *)((t873 + 0x178));
                *(float *)((t873 + 0x178)) = (u874 - 0.0249999985f);
                t875 = *(int *)((a4 + 0x144));
                t876 = *(short *)((t875 + 0x180));
                *(unsigned short *)((t875 + 0x180)) = (t876 + 0x100);
                ResetFadeColor();
                t878 = nlPopMatrix(0x1);
                t879 = t878;
            }
            t881 = t879;
        }
        t883 = t881;
    }
    return t883;
}

int mpdrv_setcmd_force(int a4, int a5, int a6, int a7, int a8, int a9)
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
    int t13;
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
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t36;
    int t31;
    int t32;
    int t33;
    int t34;
    int t39;
    int t40;
    int t47;
    int t41;
    int t42;
    int t43;
    int t44;
    int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
    int t68;
    int t75;
    int t76;
    int t77;
    int t78;
    int t91;
    int t92;
    int t93;
    int t94;
    int t95;
    int t55;
    int stk[16] = {0};

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned char *)(((int)stk + 24)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 16)) = ((a7 + a9) + 0x3);
    t0 = *(int *)(((int)stk + 8));
    t1 = *(signed char *)((t0 + 0xC176918));
    *(unsigned char *)(((int)stk + 20)) = t1;
    t2 = *(signed char *)(((((int)stk + 8) + 0xC) + 0x0));
    t3 = *(int *)0xC2FA538;
    t4 = *(int *)((t3 + 0x10CC));
    if ((int)t4 > 0) {
        t5 = *(int *)((t3 + 0xFD8));
        if ((int)t5 > 0) {
            t6 = *(int *)((t3 + 0xFCC));
            t7 = *(int *)((t6 + 0x0));
            if ((((int)(unsigned char)(t2 & 0xC0) >> 6) & 0x3) == ((short)((unsigned int)t7 >> 16) & 0x3)) {
                t8 = *(int *)((t3 + 0x10CC));
                mpdrv_insertnop(t8);
            }
        }
    }
    t13 = *(int *)0xC2FA538;
    t14 = *(int *)(((0xFD8 + t13) + 0x0));
    t15 = *(int *)((t13 + 0xFCC));
    *(unsigned int *)((t13 + 0xFCC)) = (t15 + (t14 << 2));
    t16 = *(int *)0xC2FA538;
    t17 = *(int *)((t16 + 0xFCC));
    *(unsigned int *)(((int)stk + 28)) = (unsigned char)(a7 + a9);
    *(unsigned int *)((t17 + 0x0)) = (((((int)(unsigned char)(t2 & 0xC0) >> 6) & 0x3) << 16) | (unsigned char)(a7 + a9));
    t18 = *(int *)0xC2FA538;
    t19 = *(int *)(((0x10B4 + t18) + 0x0));
    t20 = *(int *)(((int)stk + 8));
    t21 = *(int *)(((t20 << 2) + ((t18 + 0xFE8) + (((((t19 << 1) + t19) << 2) << 2) << 1))));
    t22 = mpdrv_v2p(t21);
    *(unsigned int *)(((t17 + 0x4) + 0x0)) = t22;
    t23 = *(signed char *)(((int)stk + 24));
    t24 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 12)) = (unsigned char)t23;
    t25 = *(signed char *)(((int)stk + 20));
    *(unsigned int *)(((int)stk + 8)) = (unsigned char)t25;
    t26 = *(int *)0xC2FA538;
    t27 = *(int *)((0x10C4 + t26));
    if (t27 == 1) {
        t28 = *(int *)(((int)stk + 12));
        t29 = *(int *)(((int)stk + 8));
        t30 = *(int *)(((int)stk + 28));
        *(unsigned int *)((((t17 + 0x4) + 0x4) + 0x0)) = ((((((t28 << 16) << 8) & 0xFF000000) | ((t29 << 16) & 0xFF0000)) | (((unsigned char)(t2 & 0xC0) << 8) & 0xFF00)) | t30);
        t36 = (((t17 + 0x4) + 0x4) + 0x4);
        if ((int)a7 > 0) {
            t31 = t24;
            t32 = 0x0;
            t33 = (((t17 + 0x4) + 0x4) + 0x4);
            do {
                t34 = *(int *)((t31 + 0x0));
                t31 = (t31 + 0x4);
                t32 = (t32 + 0x1);
                *(unsigned int *)((t33 + 0x0)) = t34;
                t33 = (t33 + 0x4);
            } while ((int)t32 < (int)a7);
            t36 = t33;
        }
        t55 = t36;
    } else {
        t39 = *(int *)(((int)stk + 8));
        t40 = *(int *)(((int)stk + 12));
        *(unsigned int *)((((t17 + 0x4) + 0x4) + 0x0)) = ((((((unsigned char)(t2 & 0xC0) << 16) & 0xFF0000) | ((t39 << 8) & 0xFF00)) | ((((a7 + a9) << 16) << 8) & 0xFF000000)) | t40);
        t47 = (((t17 + 0x4) + 0x4) + 0x4);
        if ((int)a7 > 0) {
            t41 = t24;
            t42 = 0x0;
            t43 = (((t17 + 0x4) + 0x4) + 0x4);
            do {
                t44 = *(int *)((t41 + 0x0));
                t41 = (t41 + 0x4);
                t42 = (t42 + 0x1);
                *(unsigned int *)((t43 + 0x0)) = ((((((t44 << 16) << 8) & 0xFF000000) | ((t44 << 8) & 0xFF0000)) | (((int)t44 >> 8) & 0xFF00)) | (unsigned char)(signed char)((unsigned int)((unsigned int)t44 >> 16) >> 8));
                t43 = (t43 + 0x4);
            } while ((int)t42 < (int)a7);
            t47 = t43;
        }
        t55 = t47;
    }
    t60 = *(int *)0xC2FA538;
    t61 = *(int *)((0x10C4 + t60));
    if (t61 == 1) {
        if ((int)a9 > 0) {
            t62 = a8;
            t63 = 0x0;
            t64 = t55;
            do {
                t65 = *(signed char *)((t62 + 0x1));
                t63 = (t63 + 0x1);
                t66 = *(signed char *)((t62 + 0x0));
                t67 = *(signed char *)((t62 + 0x2));
                t68 = *(signed char *)((t62 + 0x3));
                *(unsigned int *)((t64 + 0x0)) = (((((t65 << 16) & 0xFF0000) | ((t67 << 8) & 0xFF00)) | (((t66 << 16) << 8) & 0xFF000000)) | (unsigned char)t68);
                t64 = (t64 + 0x4);
                t62 = (t62 + 0x4);
            } while ((int)t63 < (int)a9);
        }
    } else {
        if ((int)a9 > 0) {
            t75 = 0x0;
            t76 = a8;
            t77 = t55;
            do {
                t78 = *(int *)((t76 + 0x0));
                t76 = (t76 + 0x4);
                t75 = (t75 + 0x1);
                *(unsigned int *)((t77 + 0x0)) = t78;
                t77 = (t77 + 0x4);
            } while ((int)t75 < (int)a9);
        }
    }
    t91 = *(int *)(((int)stk + 16));
    t92 = *(int *)0xC2FA538;
    *(unsigned int *)((t92 + 0xFD8)) = t91;
    t93 = *(int *)0xC2FA538;
    t94 = *(int *)(((int)stk + 16));
    t95 = *(int *)((t93 + 0xFDC));
    *(unsigned int *)((t93 + 0xFDC)) = (t95 + (t94 << 2));
    return 0x0;
}

int mpdrv_setcmd(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t0;
    int t1;
    int t110;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t15;
    int t16;
    int t17;
    int t18;
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
    int t30;
    int t31;
    int t32;
    int t37;
    int t33;
    int t34;
    int t35;
    int t36;
    int t41;
    int t42;
    int t48;
    int t43;
    int t44;
    int t45;
    int t46;
    int t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
    int t68;
    int t69;
    int t70;
    int t77;
    int t78;
    int t79;
    int t80;
    int t93;
    int t94;
    int t95;
    int t96;
    int t97;
    int t98;
    int t99;
    int t100;
    int t101;
    int t102;
    int t103;
    int t104;
    int t105;
    int t108;
    int t109;
    int t56;
    int stk[17] = {0};

    *(unsigned char *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 32)) = a6;
    t0 = *(int *)0xC2FA538;
    t1 = *(signed char *)((((t0 + 0x28) + (a4 * 0x2C)) + 0x6));
    t110 = 0xFFFFFFFF;
    if (t1 == 0) {
        t2 = *(signed char *)(((int)stk + 12));
        *(unsigned char *)((((t0 + 0x28) + (a4 * 0x2C)) + 0x6)) = t2;
        *(unsigned int *)(((int)stk + 16)) = ((a7 + a9) + 0x3);
        t3 = *(signed char *)((a4 + 0xC176918));
        *(unsigned char *)(((((int)stk + 8) + 0x10) + 0x0)) = t3;
        *(unsigned int *)(((int)stk + 20)) = (unsigned char)(0xC0 & t3);
        *(unsigned int *)(((int)stk + 8)) = (((int)(unsigned char)(0xC0 & t3) >> 6) & 0x3);
        t4 = *(int *)0xC2FA538;
        t5 = *(int *)((t4 + 0x10CC));
        if ((int)t5 > 0) {
            t6 = *(int *)((t4 + 0xFD8));
            if ((int)t6 > 0) {
                t7 = *(int *)((t4 + 0xFCC));
                t8 = *(int *)((t7 + 0x0));
                t9 = *(int *)(((int)stk + 8));
                if (t9 == (0x3 & (short)((unsigned int)t8 >> 16))) {
                    t10 = *(int *)((t4 + 0x10CC));
                    mpdrv_insertnop(t10);
                }
            }
        }
        t15 = *(int *)0xC2FA538;
        t16 = *(int *)(((0xFD8 + t15) + 0x0));
        t17 = *(int *)((t15 + 0xFCC));
        *(unsigned int *)((t15 + 0xFCC)) = (t17 + (t16 << 2));
        t18 = *(int *)(((int)stk + 8));
        t19 = *(int *)0xC2FA538;
        t20 = *(int *)((t19 + 0xFCC));
        *(unsigned int *)(((int)stk + 28)) = (unsigned char)(a7 + a9);
        *(unsigned int *)((t20 + 0x0)) = ((t18 << 16) | (unsigned char)(a7 + a9));
        t21 = *(int *)0xC2FA538;
        t22 = *(int *)(((0x10B4 + t21) + 0x0));
        t23 = *(int *)(((a4 << 2) + ((t21 + 0xFE8) + (((((t22 << 1) + t22) << 2) << 2) << 1))));
        t24 = mpdrv_v2p(t23);
        *(unsigned int *)(((t20 + 0x4) + 0x0)) = t24;
        t25 = *(signed char *)(((int)stk + 12));
        t26 = *(int *)(((int)stk + 32));
        *(unsigned int *)(((int)stk + 8)) = (unsigned char)t25;
        t27 = *(signed char *)(((int)stk + 24));
        t28 = *(int *)0xC2FA538;
        t29 = *(int *)((0x10C4 + t28));
        if (t29 == 1) {
            t30 = *(int *)(((int)stk + 8));
            t31 = *(int *)(((int)stk + 20));
            t32 = *(int *)(((int)stk + 28));
            *(unsigned int *)((((t20 + 0x4) + 0x4) + 0x0)) = ((((((t30 << 16) << 8) & 0xFF000000) | (((unsigned char)t27 << 16) & 0xFF0000)) | ((t31 << 8) & 0xFF00)) | t32);
            t37 = (((t20 + 0x4) + 0x4) + 0x4);
            if ((int)a7 > 0) {
                t33 = t26;
                t34 = 0x0;
                t35 = (((t20 + 0x4) + 0x4) + 0x4);
                do {
                    t36 = *(int *)((t33 + 0x0));
                    t33 = (t33 + 0x4);
                    t34 = (t34 + 0x1);
                    *(unsigned int *)((t35 + 0x0)) = t36;
                    t35 = (t35 + 0x4);
                } while ((int)t34 < (int)a7);
                t37 = t35;
            }
            t56 = t37;
        } else {
            t41 = *(int *)(((int)stk + 20));
            t42 = *(int *)(((int)stk + 8));
            *(unsigned int *)((((t20 + 0x4) + 0x4) + 0x0)) = (((((t41 << 16) & 0xFF0000) | (((unsigned char)t27 << 8) & 0xFF00)) | ((((a7 + a9) << 16) << 8) & 0xFF000000)) | t42);
            t48 = (((t20 + 0x4) + 0x4) + 0x4);
            if ((int)a7 > 0) {
                t43 = t26;
                t44 = 0x0;
                t45 = (((t20 + 0x4) + 0x4) + 0x4);
                do {
                    t46 = *(int *)((t43 + 0x0));
                    t43 = (t43 + 0x4);
                    t44 = (t44 + 0x1);
                    *(unsigned int *)((t45 + 0x0)) = ((((((t46 << 16) << 8) & 0xFF000000) | ((t46 << 8) & 0xFF0000)) | (((int)t46 >> 8) & 0xFF00)) | (unsigned char)(signed char)((unsigned int)((unsigned int)t46 >> 16) >> 8));
                    t45 = (t45 + 0x4);
                } while ((int)t44 < (int)a7);
                t48 = t45;
            }
            t56 = t48;
        }
        t62 = *(int *)0xC2FA538;
        t63 = *(int *)((0x10C4 + t62));
        if (t63 == 1) {
            if ((int)a9 > 0) {
                t64 = a8;
                t65 = 0x0;
                t66 = t56;
                do {
                    t67 = *(signed char *)((t64 + 0x1));
                    t65 = (t65 + 0x1);
                    t68 = *(signed char *)((t64 + 0x0));
                    t69 = *(signed char *)((t64 + 0x2));
                    t70 = *(signed char *)((t64 + 0x3));
                    *(unsigned int *)((t66 + 0x0)) = (((((t67 << 16) & 0xFF0000) | ((t69 << 8) & 0xFF00)) | (((t68 << 16) << 8) & 0xFF000000)) | (unsigned char)t70);
                    t66 = (t66 + 0x4);
                    t64 = (t64 + 0x4);
                } while ((int)t65 < (int)a9);
            }
        } else {
            if ((int)a9 > 0) {
                t77 = 0x0;
                t78 = a8;
                t79 = t56;
                do {
                    t80 = *(int *)((t78 + 0x0));
                    t78 = (t78 + 0x4);
                    t77 = (t77 + 0x1);
                    *(unsigned int *)((t79 + 0x0)) = t80;
                    t79 = (t79 + 0x4);
                } while ((int)t77 < (int)a9);
            }
        }
        t93 = *(int *)(((int)stk + 16));
        t94 = *(int *)0xC2FA538;
        *(unsigned int *)((t94 + 0xFD8)) = t93;
        t95 = *(int *)0xC2FA538;
        t96 = *(int *)(((int)stk + 16));
        t97 = *(int *)((t95 + 0xFDC));
        *(unsigned int *)((t95 + 0xFDC)) = (t97 + (t96 << 2));
        t98 = *(int *)0xC2FA538;
        t99 = *(int *)0xC2FA538;
        t100 = *(int *)((t98 + 0xFE0));
        *(unsigned int *)((t98 + 0xFE0)) = (t100 + 0x1);
        *(unsigned int *)((((t99 + 0x28) + (a4 * 0x2C)) + 0x18)) = ((t100 + 0x1) - 1);
        t101 = *(int *)0xC2FA538;
        t102 = *(int *)((t101 + 0xFE0));
        *(unsigned int *)((t101 + 0xFE0)) = (t102 & 0x7FFFFFFF);
        t103 = *(int *)0xC2FA538;
        t104 = *(int *)((t103 + 0xFE0));
        if (t104 == 0) {
            t105 = *(int *)0xC2FA538;
            *(unsigned int *)((t105 + 0xFE0)) = 0x1;
        }
        t108 = *(int *)0xC2FA538;
        t109 = *(int *)((((t108 + 0x28) + (a4 * 0x2C)) + 0x18));
        t110 = t109;
    }
    return t110;
}

int gdDecSubcode(int a4, int a5)
{
    int t0;
    int t35;
    int t1;
    int t2;
    int t31;
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
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t29;
    int stk[17] = {0};

    t0 = *(signed char *)((a4 + 0x0));
    t35 = 0xFFFFFFFF;
    if (t0 == 0) {
        t1 = *(signed char *)((a4 + 0x2));
        t2 = *(signed char *)((a4 + 0x3));
        t31 = 0xFFFFFFFE;
        if ((t2 + (t1 << 8)) == 100) {
            t3 = 0x0;
            t4 = (a4 + 0x4);
            for (;;) {
                if ((int)t3 >= (int)0xC) {
                    t5 = *(signed char *)((((((int)stk + 8) + 0x4) + 0xC) + 0xA));
                    t3 = ((unsigned char)t5 << 8);
                    t6 = *(signed char *)((((((int)stk + 8) + 0x4) + 0xC) + 0xB));
                    t3 = (t3 | (unsigned char)t6);
                    t7 = FUN_0c15f49a(((((int)stk + 8) + 0x4) + 0xC), t3);
                    if (t7 != 0) {
                        return 0xFFFFFFFD;
                    }
                    t8 = *(signed char *)(((((int)stk + 8) + 0x4) + 0xD));
                    t9 = FUN_0c15f4c8(t8);
                    *(unsigned int *)((a5 + 0x0)) = t9;
                    t10 = *(signed char *)(((((int)stk + 8) + 0x4) + 0xF));
                    t11 = FUN_0c15f4c8(t10);
                    *(unsigned int *)((a5 + 0x4)) = t11;
                    t12 = *(signed char *)(((((int)stk + 8) + 0x4) + 0x10));
                    t13 = FUN_0c15f4c8(t12);
                    *(unsigned int *)((a5 + 0x8)) = t13;
                    t14 = *(signed char *)(((((int)stk + 8) + 0x4) + 0x11));
                    t15 = FUN_0c15f4c8(t14);
                    *(unsigned int *)((a5 + 0xC)) = t15;
                    *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 8) + 0x4) + 0xC);
                    t16 = *(signed char *)((((((int)stk + 8) + 0x4) + 0xC) + 0x0));
                    t17 = *(int *)(((int)stk + 8));
                    t18 = FUN_0c15f4e2((t17 + 0x7));
                    *(unsigned int *)((a5 + 0x10)) = (t18 | ((t16 << 16) << 8));
                    t19 = *(signed char *)(((((int)stk + 8) + 0x4) + 0xE));
                    t20 = FUN_0c15f4c8(t19);
                    *(unsigned int *)((a5 + 0x14)) = t20;
                    return 0x0;
                }
                *(unsigned char *)((((((int)stk + 8) + 0x4) + t3) + 0x0)) = 0x0;
                *(unsigned char *)(((((((int)stk + 8) + 0x4) + 0xC) + t3) + 0x0)) = 0x0;
                t21 = 0x7;
                do {
                    if (t21 == 7) {
                        t22 = *(signed char *)((t4 + 0x0));
                        t4 = (t4 + 0x1);
                        t23 = *(signed char *)(((((((int)stk + 8) + 0x4) + 0xC) + t3) + 0x0));
                        *(unsigned char *)(((((((int)stk + 8) + 0x4) + 0xC) + t3) + 0x0)) = (t23 | ((t22 & 0x40) << 1));
                    } else {
                        t24 = *(signed char *)((t4 + 0x0));
                        t4 = (t4 + 0x1);
                        t25 = *(signed char *)(((((((int)stk + 8) + 0x4) + 0xC) + t3) + 0x0));
                        *(unsigned char *)(((((((int)stk + 8) + 0x4) + 0xC) + t3) + 0x0)) = (t25 | (((int)(-(0x6 - t21)) >= 0) ? ((t24 & 0x40) << ((-(0x6 - t21)) & 31)) : ((-(int)(-(0x6 - t21)) & 31) ? ((int)(t24 & 0x40) >> (-(int)(-(0x6 - t21)) & 31)) : ((int)(t24 & 0x40) >> 31))));
                    }
                    t21 = (t21 - 1);
                } while ((int)t21 >= 0);
                t29 = *(signed char *)(((((int)stk + 8) + 0x4) + 0xC));
                if ((t29 & 0xF) != 1) break;
                t3 = (t3 + 0x1);
            }
            t31 = 0xFFFFFFFB;
        }
        t35 = t31;
    }
    return t35;
}

int colliBoxBox(int a4, int a5)
{
    int t0;
    float u1;
    int t2;
    float u3;
    float t4;
    float t5;
    float u6;
    float u8;
    float u9;
    float u10;
    float u11;
    int t12;
    float u14;
    float u15;
    int t16;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t27;
    float u28;
    float u29;
    int t30;
    float u33;
    float u34;
    int t35;
    int t38;
    float u39;
    float u40;
    int t41;
    float u44;
    float u45;
    int t46;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    float u60;
    int t65;
    float u67;
    int t72;
    int t73;
    int t81;
    int t82;
    int t83;
    int t84;
    int t85;
    int t86;
    float t87;
    float t88;
    float u156;
    int t89;
    int t90;
    float u91;
    float u92;
    int t94;
    float u95;
    int t96;
    int t98;
    float t99;
    float u100;
    int t101;
    float u102;
    int t103;
    float u104;
    int t105;
    int t110;
    int t111;
    int t114;
    int t122;
    float u126;
    float t128;
    float t129;
    int t130;
    float u131;
    float u132;
    int t136;
    float u137;
    int t139;
    float u141;
    float t143;
    float t144;
    int t145;
    float u146;
    float u147;
    int t151;
    float u152;
    int t154;
    float u157;
    float u160;
    int t163;
    int t164;
    int t165;
    int t166;
    int stk[41] = {0};

    t0 = *(int *)0xC26ECD8;
    if (t0 == 0) {
        u1 = *(float *)0xC26ECE0;
        t2 = *(int *)((a5 + 0x28));
        u3 = *(float *)((((short)((short)t0 * (short)0x1C) + 0xC0ED440) + 0x0));
        if (u3 > u1) {
            *(unsigned int *)(((t2 + 0x24) + 0x0)) = 0x1;
            t4 = FUN_0c078de0((a4 + 0xC), (((int)stk + 12) + 0x5C));
            *(float *)(((t2 + 0x24) + 0x4)) = t4;
            t5 = nlInnerProduct((((int)stk + 8) + 0x60), (a5 + 0xC));
            u6 = *(float *)(((0x4 + (t2 + 0x24)) + 0x0));
            *(float *)(((0x4 + (t2 + 0x24)) + 0x0)) = (u6 - t5);
        } else {
            *(unsigned int *)(((t2 + 0x24) + 0x0)) = 0x0;
        }
    }
    u8 = *(float *)0xC26ECE0;
    u9 = *(float *)0xC26ECE8;
    if (!(u9 > u8)) {
        u10 = *(float *)0xC26ECE0;
        u11 = *(float *)0xC26ECEC;
        if (u11 > u10) {
            t12 = *(int *)0xC26ECDC;
            colliBoxAhead(a4, a5, t12);
        }
        u14 = *(float *)0xC26ECE0;
        u15 = *(float *)0xC26ECF0;
        if (u15 > u14) {
            t16 = *(int *)0xC26ECD8;
            colliBoxAhead(a5, a4, t16);
        }
    } else {
        nlPushUnitMatrix();
        t19 = *(int *)0xC26ECF8;
        t20 = *(int *)0xC26ECFC;
        t21 = FUN_0c033234(a4, t19, a5, t20, 0xC270408, 0x0);
        *(unsigned int *)(((int)stk + 16)) = t21;
        if (t21 != 0) {
            t22 = *(int *)0xC26ECFC;
            t23 = *(int *)0xC26ECF8;
            t24 = FUN_0c033234(a5, t22, a4, t23, 0xC270430, 0x1);
            *(unsigned int *)(((int)stk + 12)) = t24;
        } else {
            *(unsigned int *)(((int)stk + 12)) = 0x0;
        }
        nlPopMatrix(0x1);
        t27 = *(int *)(((int)stk + 16));
        if (t27 == 0) {
            u28 = *(float *)0xC26ECE0;
            u29 = *(float *)0xC26ECEC;
            if (u29 > u28) {
                t30 = *(int *)0xC26ECDC;
                colliBoxAhead(a4, a5, t30);
            }
            u33 = *(float *)0xC26ECE0;
            u34 = *(float *)0xC26ECF0;
            if (u34 > u33) {
                t35 = *(int *)0xC26ECD8;
                colliBoxAhead(a5, a4, t35);
            }
        } else {
            t38 = *(int *)(((int)stk + 12));
            if (t38 == 0) {
                u39 = *(float *)0xC26ECE0;
                u40 = *(float *)0xC26ECEC;
                if (u40 > u39) {
                    t41 = *(int *)0xC26ECDC;
                    colliBoxAhead(a4, a5, t41);
                }
                u44 = *(float *)0xC26ECE0;
                u45 = *(float *)0xC26ECF0;
                if (u45 > u44) {
                    t46 = *(int *)0xC26ECD8;
                    colliBoxAhead(a5, a4, t46);
                }
            } else {
                t49 = *(int *)0xC0965F8;
                *(unsigned int *)(((((int)stk + 12) + 0x14) + 0x8)) = t49;
                t50 = *(int *)0xC0965F4;
                *(unsigned int *)(((((int)stk + 12) + 0x14) + 0x4)) = t50;
                t51 = *(int *)0xC0965F0;
                *(unsigned int *)(((((int)stk + 12) + 0x14) + 0x0)) = t51;
                t52 = *(int *)0xC0965F8;
                *(unsigned int *)(((((int)stk + 12) + 0x20) + 0x8)) = t52;
                t53 = *(int *)0xC0965F4;
                *(unsigned int *)(((((int)stk + 12) + 0x20) + 0x4)) = t53;
                t54 = *(int *)0xC0965F0;
                *(unsigned int *)(((((int)stk + 12) + 0x20) + 0x0)) = t54;
                t55 = *(int *)0xC0965F8;
                *(unsigned int *)(((((int)stk + 12) + 0x5C) + 0x8)) = t55;
                t56 = *(int *)0xC0965F4;
                *(unsigned int *)(((((int)stk + 12) + 0x5C) + 0x4)) = t56;
                t57 = *(int *)0xC0965F0;
                *(unsigned int *)(((((int)stk + 12) + 0x5C) + 0x0)) = t57;
                t58 = *(int *)(((int)stk + 16));
                if (t58 == 2) {
                    nlAddVector((((int)stk + 12) + 0x20), 0xC270420);
                    u60 = *(float *)0xC27042C;
                    nlScaleVector((((int)stk + 12) + 0x8), 0xC270420, u60);
                    nlAddVector((((int)stk + 12) + 0x14), (((int)stk + 12) + 0x8));
                    nlAddVector((((int)stk + 12) + 0x5C), 0xC270408);
                }
                t65 = *(int *)(((int)stk + 12));
                if (t65 == 2) {
                    nlSubVector((((int)stk + 12) + 0x20), 0xC270448);
                    u67 = *(float *)0xC270454;
                    nlScaleVector((((int)stk + 12) + 0x8), 0xC270448, u67);
                    nlSubVector((((int)stk + 12) + 0x14), (((int)stk + 12) + 0x8));
                    nlAddVector((((int)stk + 12) + 0x5C), 0xC270430);
                }
                t72 = *(int *)(((int)stk + 16));
                if (t72 == 2) {
                    t73 = *(int *)(((int)stk + 12));
                    if (t73 == 2) {
                        nlScaleVector((((int)stk + 12) + 0x14), (((int)stk + 12) + 0x14), 0.5f);
                        nlScaleVector((((int)stk + 12) + 0x5C), (((int)stk + 12) + 0x5C), 0.5f);
                        nlUnitVector((((int)stk + 12) + 0x20));
                    }
                }
                nlSubVector3op((((int)stk + 12) + 0x50), (((int)stk + 12) + 0x5C), a4);
                nlSubVector3op((((int)stk + 12) + 0x44), (((int)stk + 12) + 0x5C), a5);
                t81 = *(int *)(((a4 + 0xC) + 0x8));
                *(unsigned int *)(((((int)stk + 12) + 0x38) + 0x8)) = t81;
                t82 = *(int *)(((a4 + 0xC) + 0x4));
                *(unsigned int *)(((((int)stk + 12) + 0x38) + 0x4)) = t82;
                t83 = *(int *)(((a4 + 0xC) + 0x0));
                *(unsigned int *)(((((int)stk + 12) + 0x38) + 0x0)) = t83;
                t84 = *(int *)(((a5 + 0xC) + 0x8));
                *(unsigned int *)(((((int)stk + 12) + 0x2C) + 0x8)) = t84;
                t85 = *(int *)(((a5 + 0xC) + 0x4));
                *(unsigned int *)(((((int)stk + 12) + 0x2C) + 0x4)) = t85;
                t86 = *(int *)(((a5 + 0xC) + 0x0));
                *(unsigned int *)(((((int)stk + 12) + 0x2C) + 0x0)) = t86;
                t87 = nlInnerProduct((((int)stk + 12) + 0x20), (((int)stk + 12) + 0x38));
                t88 = nlInnerProduct((((int)stk + 12) + 0x20), (((int)stk + 12) + 0x2C));
                u156 = (t87 - t88);
                if ((t87 - t88) > 0.0f) {
                    t89 = *(int *)0xC26ECD8;
                    t90 = *(short *)0xC26ECDC;
                    u91 = *(float *)((((short)((short)t89 * (short)0x1C) + 0xC0ED440) + 0xC));
                    u92 = *(float *)((((short)((short)t90 * (short)0x1C) + 0xC0ED440) + 0xC));
                    nlScaleVector((((int)stk + 12) + 0x38), (((int)stk + 12) + 0x20), ((t87 - t88) * (u91 + u92)));
                    t94 = *(int *)0xC26ECD8;
                    if (t94 == 0) {
                        u95 = *(float *)0xC26ECF4;
                        *(float *)((a5 + 0x1C)) = (u95 * ((t87 - t88) * (u91 + u92)));
                        t96 = *(int *)((a5 + 0x28));
                        *(unsigned int *)(((int)stk + 16)) = (t96 + 0x24);
                        FUN_0c078de0((a4 + 0xC), (((int)stk + 12) + 0x8));
                        t98 = *(int *)(((int)stk + 16));
                        t99 = nlInnerProduct((((int)stk + 8) + 0xC), (((int)stk + 8) + 0x24));
                        *(float *)(((0x8 + t98) + 0x0)) = t99;
                        u100 = *(float *)((a5 + 0x1C));
                        *(unsigned int *)(((int)stk + 12)) = (int)((u100 * (1.0f + 1.0f)) < 0.0f ? -(u100 * (1.0f + 1.0f)) : (u100 * (1.0f + 1.0f)));
                        t101 = *(int *)(((int)stk + 16));
                        u102 = *(float *)((t101 + 0x8));
                        if (0.099999994f > u102) {
                            t103 = *(int *)(((int)stk + 16));
                            u104 = *(float *)((t103 + 0x8));
                            t105 = *(int *)(((int)stk + 12));
                            *(unsigned int *)(((int)stk + 12)) = (t105 + ((int)((u104 * 20.0f) < 0.0f ? -(u104 * 20.0f) : (u104 * 20.0f)) + 0x2));
                        }
                        t110 = *(int *)(((int)stk + 12));
                        if ((int)t110 > 0) {
                            t111 = *(int *)((a4 + 0x28));
                            *(unsigned int *)(((int)stk + 16)) = t111;
                            nlPushUnitMatrix();
                            nlTranslateV(a4);
                            t114 = *(int *)(((int)stk + 16));
                            SetCameraPosVelocity(t114);
                            nlPushMatrix(0x0);
                            FUN_0c078310();
                            FUN_0c0771b0((((int)stk + 12) + 0x5C), (((int)stk + 12) + 0x5C));
                            nlPopMatrix(0x1);
                            *(float *)(((int)stk + 108)) = 5.0f;
                            FUN_0c0771b0((((int)stk + 12) + 0x5C), (((int)stk + 12) + 0x5C));
                            nlPopMatrix(0x1);
                            t122 = *(int *)(((int)stk + 12));
                            SetSpark((((int)stk + 12) + 0x5C), (a4 + 0xC), t122);
                        }
                    }
                    u126 = *(float *)0xC26ECF4;
                    nlScaleVector((((int)stk + 12) + 0x2C), (((int)stk + 12) + 0x38), u126);
                    t128 = nlInnerProduct((((int)stk + 12) + 0x20), (((int)stk + 12) + 0x50));
                    t129 = FUN_0c078c00((((int)stk + 12) + 0x50));
                    t130 = *(int *)0xC26ECD8;
                    u131 = *(float *)((((short)((short)t130 * (short)0x1C) + 0xC0ED440) + 0x4));
                    u132 = *(float *)((((short)((short)t130 * (short)0x1C) + 0xC0ED440) + 0x14));
                    nlScaleVector((((int)stk + 12) + 0x8), (((int)stk + 12) + 0x2C), (1.0f - (_builtin_sqrtf(((t128 * (-t128)) + t129)) * (u132 / u131))));
                    nlSubVector((a4 + 0xC), (((int)stk + 12) + 0x8));
                    nlOuterProduct((((int)stk + 12) + 0x50), (((int)stk + 12) + 0x2C), (((int)stk + 12) + 0x8));
                    t136 = *(int *)0xC26ECD8;
                    u137 = *(float *)((((short)((short)t136 * (short)0x1C) + 0xC0ED440) + 0x10));
                    nlScaleVector((((int)stk + 12) + 0x8), (((int)stk + 12) + 0x8), ((_builtin_sqrtf(((t128 * (-t128)) + t129)) * (u132 / u131)) * u137));
                    t139 = *(int *)((a4 + 0x28));
                    *(unsigned int *)(((int)stk + 12)) = t139;
                    nlSubVector((t139 + 0x18), (((int)stk + 12) + 0x8));
                    u141 = *(float *)0xC26ECF4;
                    nlScaleVector((((int)stk + 12) + 0x2C), (((int)stk + 12) + 0x38), (1.0f - u141));
                    t143 = nlInnerProduct((((int)stk + 12) + 0x20), (((int)stk + 12) + 0x44));
                    t144 = FUN_0c078c00((((int)stk + 12) + 0x44));
                    t145 = *(short *)0xC26ECDC;
                    u146 = *(float *)((((short)((short)t145 * (short)0x1C) + 0xC0ED440) + 0x4));
                    u147 = *(float *)((((short)((short)t145 * (short)0x1C) + 0xC0ED440) + 0x14));
                    nlScaleVector((((int)stk + 12) + 0x8), (((int)stk + 12) + 0x2C), (1.0f - (_builtin_sqrtf(((t143 * (-t143)) + t144)) * (u147 / u146))));
                    nlAddVector((a5 + 0xC), (((int)stk + 12) + 0x8));
                    nlOuterProduct((((int)stk + 12) + 0x44), (((int)stk + 12) + 0x2C), (((int)stk + 12) + 0x8));
                    t151 = *(short *)0xC26ECDC;
                    u152 = *(float *)((((short)((short)t151 * (short)0x1C) + 0xC0ED440) + 0x10));
                    nlScaleVector((((int)stk + 12) + 0x8), (((int)stk + 12) + 0x8), ((_builtin_sqrtf(((t143 * (-t143)) + t144)) * (u147 / u146)) * u152));
                    t154 = *(int *)((a5 + 0x28));
                    *(unsigned int *)(((int)stk + 12)) = t154;
                    nlAddVector((t154 + 0x18), (((int)stk + 12) + 0x8));
                    u156 = (_builtin_sqrtf(((t143 * (-t143)) + t144)) * (u147 / u146));
                }
                u157 = *(float *)0xC26ECF4;
                nlScaleVector((((int)stk + 12) + 0x8), (((int)stk + 12) + 0x14), u157);
                nlAddVector(a4, (((int)stk + 12) + 0x8));
                u160 = *(float *)0xC26ECF4;
                nlScaleVector((((int)stk + 12) + 0x8), (((int)stk + 12) + 0x14), (1.0f - u160));
                nlSubVector(a5, (((int)stk + 12) + 0x8));
                t163 = *(int *)((a4 + 0x20));
                t164 = *(int *)0xC26ECDC;
                *(unsigned int *)((a4 + 0x20)) = (t163 | (((int)t164 >= 0) ? (0x1 << (t164 & 31)) : ((-(int)t164 & 31) ? ((int)0x1 >> (-(int)t164 & 31)) : ((int)0x1 >> 31))));
                t165 = *(int *)0xC26ECD8;
                t166 = *(int *)((a5 + 0x20));
                *(unsigned int *)((a5 + 0x20)) = (t166 | (((int)t165 >= 0) ? (0x1 << (t165 & 31)) : ((-(int)t165 & 31) ? ((int)0x1 >> (-(int)t165 & 31)) : ((int)0x1 >> 31))));
            }
        }
    }
    return 0x1;
}

int ConvertSwitch(int a4)
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
    int t14;
    int t15;
    int t22;
    int t16;
    int t19;
    int t17;
    int t23;
    int t24;
    float t25;
    int t26;
    int t27;
    float t28;
    int t29;
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
    int t45;
    int t46;
    float t47;
    int t48;
    int t49;
    float t50;
    int t51;
    int t56;
    int t57;
    int t58;
    int t59;
    float t60;
    int t61;
    int t62;
    float t63;
    int t64;
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
    int t95;
    int t96;
    int t97;
    int t98;
    float t99;
    int t100;
    int t101;
    float t102;
    int t103;
    int t108;
    int t109;
    int t111;
    int t112;
    int t113;
    int t114;
    int t115;
    int t116;
    int t117;
    int t118;
    int t119;
    int t123;
    int t124;
    int t125;
    int t126;
    int t127;
    int t128;
    int t129;
    int t130;
    int t131;
    int t132;
    int t133;
    int t134;
    int t135;
    int t136;
    int t137;
    int t138;
    int t146;
    int t147;
    int t148;
    int t149;
    int t150;
    int t151;
    int t152;
    int t153;
    int t154;
    int t155;
    int t156;
    int t157;
    int t158;
    int t159;
    int t160;
    int t161;
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
    int t175;
    int t176;
    int t177;
    int t178;
    int t6;
    int t5;
    int t179;
    int t181;
    int t139;
    int t141;

    t0 = *(int *)(((a4 << 2) + 0xC1EE12C));
    t1 = *(int *)((t0 + 0x24));
    t2 = *(signed char *)((t1 + 0x0));
    if (t2 == 82) {
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2C)) = 0x2;
        t6 = 0x1;
    } else {
        t3 = *(int *)((t0 + 0x24));
        t4 = *(signed char *)((t3 + 0xA));
        if (t4 == 70) {
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2C)) = 0x5;
            t5 = 0x2;
        } else {
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2C)) = 0x2;
            t5 = 0x0;
        }
        t6 = t5;
    }
    *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2B)) = t6;
    t7 = *(short *)((t0 + 0x1C));
    *(unsigned short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x10)) = ((t7 + 0x80) << 8);
    t8 = *(short *)((t0 + 0x18));
    *(unsigned short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x12)) = ((unsigned short)t8 << 8);
    t9 = *(short *)((t0 + 0x1A));
    *(unsigned short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x14)) = ((unsigned short)t9 << 8);
    t10 = *(short *)((t0 + 0x1E));
    *(unsigned short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x16)) = ((t10 + 0x80) << 8);
    t11 = *(int *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x0));
    *(unsigned int *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0xC)) = t11;
    t12 = *(int *)((t0 + 0x8));
    *(unsigned int *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x0)) = t12;
    t13 = *(int *)((t0 + 0x10));
    *(unsigned int *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x4)) = t13;
    t14 = *(int *)((t0 + 0x14));
    *(unsigned int *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x8)) = t14;
    if (t6 != 1) {
        if (t6 != 2) {
            t15 = *(int *)((t0 + 0x8));
            t22 = 0x0;
            if ((t15 & 64) == 0) {
                t16 = *(int *)((t0 + 0x8));
                t19 = 0xFF;
                if ((0x80 & t16) == 0) {
                    t17 = *(short *)((t0 + 0x1C));
                    t19 = (t17 + 0x80);
                }
                t22 = t19;
            }
            t23 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x18));
            if ((float)((unsigned char)t22 - (unsigned char)t23) > 0.0f) {
                t24 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x18));
                t25 = nlCeil(((float)((unsigned char)t22 - (unsigned char)t24) * 0.349999994f));
                t26 = *(signed char *)(((0x18 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0));
                *(unsigned char *)(((0x18 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0)) = (t26 + (int)t25);
            } else {
                t27 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x18));
                t28 = nlFloor(((float)((unsigned char)t22 - (unsigned char)t27) * 0.349999994f));
                t29 = *(signed char *)(((0x18 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0));
                *(unsigned char *)(((0x18 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0)) = (t29 + (int)t28);
            }
            t34 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x27)) = t34;
            t35 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x28)) = t35;
            t36 = *(signed char *)0xC28A4EE;
            if (t36 == 0) {
                t37 = *(int *)((t0 + 0x8));
                if ((t37 & 0x2) != 0) {
                    *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)) = 0x1;
                } else {
                    *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)) = 0x0;
                }
                t38 = *(int *)((t0 + 0x8));
                if ((t38 & 4) != 0) {
                    *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)) = 0x1;
                } else {
                    *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)) = 0x0;
                }
                t39 = *(short *)((t0 + 0x18));
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x19)) = t39;
                t40 = *(short *)((t0 + 0x1A));
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1A)) = t40;
            } else {
                t41 = *(int *)((t0 + 0x8));
                if ((t41 & 0x10000) != 0) {
                    *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)) = 0x1;
                } else {
                    *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)) = 0x0;
                }
                t42 = *(int *)((t0 + 0x8));
                if ((t42 & 0x20000) != 0) {
                    *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)) = 0x1;
                } else {
                    *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)) = 0x0;
                }
                t43 = *(int *)((t0 + 0x8));
                t44 = 0x0;
                if ((t43 & 4) != 0) {
                    t44 = 0xFF;
                }
                t45 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x19));
                if ((float)((unsigned char)t44 - (unsigned char)t45) > 0.0f) {
                    t46 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x19));
                    t47 = nlCeil(((float)((unsigned char)t44 - (unsigned char)t46) * 0.899999976f));
                    t48 = *(signed char *)(((0x19 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0));
                    *(unsigned char *)(((0x19 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0)) = (t48 + (int)t47);
                } else {
                    t49 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x19));
                    t50 = nlFloor(((float)((unsigned char)t44 - (unsigned char)t49) * 0.899999976f));
                    t51 = *(signed char *)(((0x19 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0));
                    *(unsigned char *)(((0x19 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0)) = (t51 + (int)t50);
                }
                t56 = *(int *)((t0 + 0x8));
                t57 = 0x0;
                if ((t56 & 0x2) != 0) {
                    t57 = 0xFF;
                }
                t58 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1A));
                if ((float)((unsigned char)t57 - (unsigned char)t58) > 0.0f) {
                    t59 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1A));
                    t60 = nlCeil(((float)((unsigned char)t57 - (unsigned char)t59) * 0.899999976f));
                    t61 = *(signed char *)(((0x1A + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0));
                    *(unsigned char *)(((0x1A + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0)) = (t61 + (int)t60);
                } else {
                    t62 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1A));
                    t63 = nlFloor(((float)((unsigned char)t57 - (unsigned char)t62) * 0.899999976f));
                    t64 = *(signed char *)(((0x1A + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0));
                    *(unsigned char *)(((0x1A + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0)) = (t64 + (int)t63);
                }
            }
            t76 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x27));
            t77 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1F)) = ((~t76) & t77);
            t78 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B));
            t79 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x27));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x23)) = ((~t78) & t79);
            t80 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x28));
            t81 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x20)) = ((~t80) & t81);
            t82 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C));
            t83 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x28));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x24)) = ((~t82) & t83);
            t84 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x29)) = t84;
            t85 = *(int *)((t0 + 0x8));
            if ((t85 & 0x400) != 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D)) = 0x1;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D)) = 0x0;
            }
            t86 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x29));
            t87 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x21)) = ((~t86) & t87);
            t88 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D));
            t89 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x29));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x25)) = ((~t88) & t89);
            t90 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1E));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2A)) = t90;
            t91 = *(int *)((t0 + 0x8));
            if ((t91 & 0x200) != 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1E)) = 0x1;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1E)) = 0x0;
            }
            t92 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2A));
            t93 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1E));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x22)) = ((~t92) & t93);
            t94 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1E));
            t95 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2A));
            t139 = 0x26;
            t141 = ((~t94) & t95);
        } else {
            t96 = *(short *)((t0 + 0x1C));
            t97 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x18));
            if ((float)((unsigned char)(t96 + 0x80) - (unsigned char)t97) > 0.0f) {
                t98 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x18));
                t99 = nlCeil(((float)((unsigned char)(t96 + 0x80) - (unsigned char)t98) * 0.349999994f));
                t100 = *(signed char *)(((0x18 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0));
                *(unsigned char *)(((0x18 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0)) = (t100 + (int)t99);
            } else {
                t101 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x18));
                t102 = nlFloor(((float)((unsigned char)(t96 + 0x80) - (unsigned char)t101) * 0.349999994f));
                t103 = *(signed char *)(((0x18 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0));
                *(unsigned char *)(((0x18 + ((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C)) + 0x0)) = (t103 + (int)t102);
            }
            t108 = *(short *)((t0 + 0x18));
            if ((int)(unsigned short)t108 > (int)0x3F) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x19)) = 0xFF;
            } else {
                t109 = *(short *)((t0 + 0x18));
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x19)) = (t109 << 2);
            }
            t111 = *(int *)((t0 + 0x8));
            if ((t111 & 0x2) != 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1A)) = 0xFF;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1A)) = 0x0;
            }
            t112 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2D));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2F)) = t112;
            t113 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2E));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x30)) = t113;
            t114 = *(signed char *)((t0 + 0x20));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2D)) = (t114 + 0x80);
            t115 = *(signed char *)((t0 + 0x22));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2E)) = (0x80 + t115);
            t116 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x27)) = t116;
            t117 = *(int *)((t0 + 0x8));
            if ((t117 & 4) == 0) {
                t118 = *(signed char *)0xC1EE27A;
                t119 = *(signed char *)0xC1EE27C;
                if ((int)((unsigned char)t118 - (unsigned char)t119) > (int)0x30) {
                    *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)) = 0x1;
                } else {
                    *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)) = 0x0;
                }
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)) = 0x1;
            }
            t123 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x27));
            t124 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1F)) = ((~t123) & t124);
            t125 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B));
            t126 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x27));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x23)) = ((~t125) & t126);
            t127 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x28)) = t127;
            t128 = *(int *)((t0 + 0x8));
            if ((t128 & 0x400) != 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)) = 0x1;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)) = 0x0;
            }
            t129 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x28));
            t130 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x20)) = ((~t129) & t130);
            t131 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C));
            t132 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x28));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x24)) = ((~t131) & t132);
            t133 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x29)) = t133;
            t134 = *(int *)((t0 + 0x8));
            if ((t134 & 0x200) != 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D)) = 0x1;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D)) = 0x0;
            }
            t135 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x29));
            t136 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x21)) = ((~t135) & t136);
            t137 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D));
            t138 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x29));
            t139 = 0x25;
            t141 = ((~t137) & t138);
        }
        t179 = t139;
        t181 = t141;
    } else {
        t146 = *(short *)((t0 + 0x1C));
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x18)) = (t146 + 0x80);
        t147 = *(short *)((t0 + 0x18));
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x19)) = t147;
        t148 = *(short *)((t0 + 0x1A));
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1A)) = t148;
        t149 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B));
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x27)) = t149;
        t150 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C));
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x28)) = t150;
        t151 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D));
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x29)) = t151;
        t152 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1E));
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2A)) = t152;
        t153 = *(signed char *)0xC28A4EE;
        if (t153 == 0) {
            t154 = *(int *)((t0 + 0x8));
            if ((0x10 & t154) != 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)) = 0x1;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)) = 0x0;
            }
            t155 = *(int *)((t0 + 0x8));
            if ((0x20 & t155) != 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)) = 0x1;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)) = 0x0;
            }
            t156 = *(int *)((t0 + 0x8));
            if ((t156 & 0x2) != 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D)) = 0x1;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D)) = 0x0;
            }
            t157 = *(int *)((t0 + 0x8));
            if ((t157 & 4) == 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1E)) = 0x0;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1E)) = 0x1;
            }
        } else {
            t158 = *(int *)((t0 + 0x8));
            if ((t158 & 4) != 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)) = 0x1;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B)) = 0x0;
            }
            t159 = *(int *)((t0 + 0x8));
            if ((t159 & 0x2) != 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)) = 0x1;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C)) = 0x0;
            }
            t160 = *(int *)((t0 + 0x8));
            if ((0x20 & t160) != 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D)) = 0x1;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D)) = 0x0;
            }
            t161 = *(int *)((t0 + 0x8));
            if ((0x10 & t161) != 0) {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1E)) = 0x1;
            } else {
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1E)) = 0x0;
            }
        }
        t163 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x27));
        t164 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B));
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1F)) = ((~t163) & t164);
        t165 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1B));
        t166 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x27));
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x23)) = ((~t165) & t166);
        t167 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x28));
        t168 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C));
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x20)) = ((~t167) & t168);
        t169 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1C));
        t170 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x28));
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x24)) = ((~t169) & t170);
        t171 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x29));
        t172 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D));
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x21)) = ((~t171) & t172);
        t173 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1D));
        t174 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x29));
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x25)) = ((~t173) & t174);
        t175 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2A));
        t176 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1E));
        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x22)) = ((~t175) & t176);
        t177 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x1E));
        t178 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + 0x2A));
        t179 = 0x26;
        t181 = ((~t177) & t178);
    }
    *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x34) + 0xC1EE24C) + t179)) = t181;
    return t179;
}

