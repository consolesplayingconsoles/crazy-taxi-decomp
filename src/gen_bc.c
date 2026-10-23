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
int HomingAngle1(int, int, float);
int colliObjPairHit(int, int, int, int, int, int);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlMultiViewMatrix(void);
int nlQuickInvertMatrix(void);
int nlAddVector3op(int, int, int);
float nlScalor2(int);
float nlUnitVectorsd(int, int);
int nlsndG2DmaRequest(int);
int crcchk(int, int);
int bcd2bin(int);
int bcdtime2fad(int);
int ADXSTMF_Create(int, int, int, int);
int IsBoyFriend(int, int);
int ResetFadeColor(void);
int MultiRot4Vec(int);
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
int mwlSbTrnsDat(int a4, int a5, int a6, int a7, int a8);
int sySqInit(void);
int setBorderColor(int a4);
int syG2SysInit(void);
int BigOneFollowTaxi(float f4);
int nlRenderTextureSet_Sub(int a4, int a5, int a6, int a7);
int psgPutMarker(int a4, int a5);
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
    t2 = ADXSTMF_Create(t0, 0x0, (((a5 << 8) << 2) << 1), a6);
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
        t2 = ADXSTMF_Create(t0, a5, (((a6 << 8) << 2) << 1), a7);
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

int mwlSbTrnsDat(int a4, int a5, int a6, int a7, int a8)
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
    t5 = nlsndG2DmaRequest(t4);
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

int sySqInit(void)
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

int setBorderColor(int a4)
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







