/* Straight-line functions with calls and guards (batch gen_cn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Chat_Direction(void);
int Chat_TellDestination(void);
int Drv_StartAction(int, int, int);
int FUN_0c0211e0(float, float, float);
int FUN_0c031492(int);
int FUN_0c039540(void);
int FUN_0c039560(void);
int FUN_0c03a41c(void);
int FUN_0c03b544(int);
extern int FUN_0c03b698();
int FUN_0c03bf42(void);
int FUN_0c03bf76(void);
int FUN_0c03dfc8(void);
int FUN_0c040b00(void);
int FUN_0c040c58(int);
int FUN_0c040cea(int);
int FUN_0c041016(int);
int FUN_0c05318a(int);
int FUN_0c05322c(float, float);
int FUN_0c053236(float, float);
int FUN_0c053240(float, float, float);
int FUN_0c05b7f0(int);
int FUN_0c05d492(void);
int FUN_0c060586(int, int);
int FUN_0c060616(int);
int FUN_0c061b14(void);
int FUN_0c070ede(int);
int FUN_0c071258(int);
int FUN_0c0713d8(int);
int FUN_0c074740(void);
int FUN_0c077170(int, int);
int FUN_0c0771b0(int, int);
int FUN_0c077210(int, int);
int FUN_0c077f60(void);
int FUN_0c077f70(void);
int FUN_0c079d60(int, int);
int FUN_0c079e70(void);
int FUN_0c07b9d0(void);
int FUN_0c07bd30(int);
int FUN_0c07c000(int, int);
int FUN_0c07c100(int, int);
int FUN_0c07c470(int, int, int, int);
int FUN_0c1717d8(int);
int FcvPlay(int, int, float);
int FcvPlayBuffer(int, int);
int FcvStoreBuffer(int, int, float);
int GetCollisionFirst(int, int);
int Init_Result(int);
int IsBoyFriend(int, int);
int Psg_SetPosPtr(int, int);
int PutVM_Message(int, int, int, float, float);
int PutWindow(int, float, float);
int SaveBackupData(int);
int SetEffect(int, int, int);
int Sound_Request(int, int);
int Start_Proposal(int, int);
int Voice_Request(int, int, int, int);
extern void _builtin_ftrv(float *, float *);
extern float _builtin_sqrtf(float);
int buAnalyzeBackupFileImage(int, int);
int buIsExistFile(int, int);
int courseStatusGet(int, int, int, int);
int exec_loop_Replay(void);
int extRand(void);
extern int getNearLineIndex();
int kdGetDevice(int);
int kdGetStatus(void);
int kdIsChanged(void);
int kdSetBlockWrite(void);
int kdSetGetLastError(void);
int menuCursorBox(int, int, int);
int menuEnterStep(void);
int menuOpenStep(void);
int menuPutFrame(void);
int menuPutHelpBar(int, float, float);
int menuPutSprites(int, int, int, int);
int mwRnaErrCallFunc(int, ...);
int mwRnaSetBitPerSmpl(int, int);
int mwRnaSetNumChan(int, int);
int mwRnaSetSfreq(int, int);
int mwRnaUnlockCs(int);
int mwlRnaAlloc(void);
int mwlRnaSetInitMember(int);
int nlAddVector(int, int);
int nlArcTan2(float, float);
int nlGetAverageVector(int, int, int, float, float);
int nlGetTranslate(int);
float nlInnerProduct(int, int);
int nlLineBlendFunc(int, int);
int nlLineSetDiv(float);
int nlLineSetThickness(float);
int nlLocate(int, int);
int nlMultiMatrix8(int);
int nlPopMatrix(int);
extern int nlPrintf();
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScaleUnitVector(int, int, float);
int nlScaleVector(int, int, float);
float nlScalor(int);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nlTranslateV(int);
int nlUnitVector(int);
int psgEnterState4(int);
int psgPutShadow(int);
float psgRunToPoint(int);
int psgSeatMatrix(int);
int putLevelCTFontAssist(int, int, int, int, int);
int putString(int, int, float, float, float);
int vmsfb_sleep(void);
int vmsio_ismount(int);
void nlTranslate(float f4, float f5, float f6);
int FUN_0c074970(void);
void kmiDACControl(void);
int FUN_0c059486(int a4);
int FUN_0c03ab40(int a4, int a5, int a6);
int mwRnaCreate(int a4, int a5);
int FUN_0c07bc00(int a4, int a5);
int colliSphereSphere(int a4, int a5);
int vmsio_block_write(int a4, int a5, int a6);
void carResistance(int a4);
void ExecSpark(void);
int FUN_0c044c64(int a4);
int gameState13(void);
int FUN_0c03e254(void);
int FUN_0c07159c(void);
int FUN_0c03fd2c(void);
int psgFrameState4(int a4);
void psgEnterState3(int a4, int a5);

void nlTranslate(float f4, float f5, float f6)
{
    float u0[4];

    u0[0] = f4;
    u0[1] = f5;
    u0[2] = f6;
    u0[3] = 1.0f;
    _builtin_ftrv(u0, u0);
}

int FUN_0c074970(void)
{
    return FUN_0c074740();
}

void kmiDACControl(void)
{
    
}

int FUN_0c059486(int a4)
{
    int t19;
    int t17;
    int t14;
    int t10;
    int t6;
    int t3;
    int t1;
    int t0;

    t19 = 0x3E7;
    if ((int)a4 < (int)0x1E8480) {
        t17 = 0x63;
        if ((int)a4 < (int)0xF4240) {
            t14 = 0x0;
            if ((int)a4 < (int)0x7A120) {
                t10 = 0x1;
                if ((int)a4 < (int)0x61A80) {
                    t6 = 0x2;
                    if ((int)a4 < (int)0x493E0) {
                        t3 = 0x3;
                        if ((int)a4 < (int)0x30D40) {
                            t1 = 0x4;
                            if ((int)a4 < (int)0x186A0) {
                                t0 = 0x6;
                                if ((int)a4 >= (int)0x1) {
                                    t0 = 0x5;
                                }
                                t1 = t0;
                            }
                            t3 = t1;
                        }
                        t6 = t3;
                    }
                    t10 = t6;
                }
                t14 = t10;
            }
            t17 = t14;
        }
        t19 = t17;
    }
    return t19;
}

int FUN_0c03ab40(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t29;
    int t5;
    int t6;
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
    int t26;
    int t27;
    int t28;
    int stk[55] = {0};

    *(unsigned int *)(((int)stk + 104)) = a4;
    *(unsigned int *)(((int)stk + 100)) = a5;
    *(unsigned int *)(((int)stk + 108)) = a6;
    t0 = buAnalyzeBackupFileImage((((int)stk + 100) + 0xC), a6);
    t1 = *(int *)(((int)stk + 100));
    t2 = *(int *)(((int)stk + 104));
    nlLocate(t2, t1);
    t4 = ((int (*)(void))(nlPrintf))();
    t29 = t4;
    if (t0 == 0) {
        t5 = *(int *)(((int)stk + 100));
        t6 = *(int *)(((int)stk + 104));
        nlLocate(t6, (t5 + 0x1));
        t8 = ((int (*)(void))(nlPrintf))();
        t9 = ((int (*)(void))(nlPrintf))();
        t10 = ((int (*)(void))(nlPrintf))();
        t11 = *(int *)(((int)stk + 180));
        t12 = ((int (*)(void))(nlPrintf))();
        t13 = *(int *)(((int)stk + 184));
        t14 = ((int (*)(void))(nlPrintf))();
        t15 = *(short *)(((int)stk + 188));
        t16 = ((int (*)(void))(nlPrintf))();
        t17 = *(short *)(((int)stk + 190));
        t18 = ((int (*)(void))(nlPrintf))();
        t19 = *(int *)(((int)stk + 192));
        t20 = ((int (*)(void))(nlPrintf))();
        t21 = *(short *)(((int)stk + 196));
        t22 = ((int (*)(void))(nlPrintf))();
        t23 = *(short *)(((int)stk + 198));
        t24 = ((int (*)(void))(nlPrintf))();
        t25 = *(int *)(((int)stk + 200));
        t26 = ((int (*)(void))(nlPrintf))();
        t27 = *(int *)(((int)stk + 204));
        t28 = ((int (*)(int, ...))(nlPrintf))(0xC09DB34, t27, 0xC09DB20, t25, 0xC09DB0C, (unsigned short)t23, 0xC09DAF8, (unsigned short)t21, 0xC09DAE4, t19, 0xC09DAD0, (unsigned short)t17, 0xC09DABC, (unsigned short)t15, 0xC09DAA8, t13, 0xC09DA94, t11, 0xC09DA80, (((int)stk + 84) + 0x50), 0xC09DA6C, (((int)stk + 92) + 0x26), 0xC09DA58, (((int)stk + 100) + 0xC));
        t29 = t28;
    }
    return t29;
}

int mwRnaCreate(int a4, int a5)
{
    int t1;
    int t2;
    int t3;
    int t5;
    int t8;
    int t11;
    int t12;
    int t13;
    int t19;
    int t21;
    int t22;
    int t23;
    int t24;
    int t26;
    int t27;
    int t28;
    int t34;
    int t36;
    int t37;
    int t38;
    int t39;
    int t43;
    int t52;
    int t45;
    int t46;
    int t47;
    int t53;
    int t54;
    int t55;
    int t60;
    int t62;
    int t63;
    int t64;
    int t65;
    int t78;
    int t76;
    int t74;
    int t71;
    int t69;
    int t67;
    int stk[10] = {0};

    if ((int)a5 >= (int)0x1) {
        if ((int)a5 > (int)0x2) {
            mwRnaErrCallFunc(0xC1765D0);
            t76 = 0x0;
        } else {
            if (a4 != 0) {
                if ((int)a5 > 0) {
                    t1 = a4;
                    t2 = 0x0;
                    for (;;) {
                        t3 = *(int *)((t1 + 0x0));
                        if (t3 == 0) break;
                        t2 = (t2 + 0x1);
                        t1 = (t1 + 0x4);
                        if ((int)t2 >= (int)a5) {
                            t1 = ((int)stk + 8);
                            FUN_0c1717d8(t1);
                            t5 = mwlRnaAlloc();
                            if (t5 == 0) {
                                mwRnaErrCallFunc(0xC17662C);
                                t1 = ((int)stk + 8);
                                mwRnaUnlockCs(t1);
                                return t5;
                            }
                            t2 = 0x0;
                            *(unsigned char *)((t5 + 0x3)) = a5;
                            *(unsigned char *)((t5 + 0x2)) = a5;
                            t1 = 0x0;
                            if ((int)a5 > 0) {
                                do {
                                    t8 = *(int *)((a4 + t1));
                                    t2 = (t2 + 0x1);
                                    *(unsigned int *)((((t5 + 0x10) + t1) + 0x0)) = t8;
                                    t1 = (t1 + 0x4);
                                } while ((int)t2 < (int)a5);
                                t11 = *(int *)0xC178644;
                                t12 = *(int *)((t11 + 0x14));
                                t1 = a5;
                                t13 = ((int (*)(int, int))(t12))(t1, t2);
                                *(unsigned int *)((t5 + 0x38)) = t13;
                                if (t13 == 0) {
                                    mwRnaErrCallFunc(0xC17665C);
                                    t1 = ((int)stk + 8);
                                    mwRnaUnlockCs(t1);
                                    return 0x0;
                                }
                                t1 = t5;
                                mwlRnaSetInitMember(t1);
                                t2 = 0x10;
                                t1 = t5;
                                mwRnaSetBitPerSmpl(t1, t2);
                                t2 = 0xAC44;
                                t1 = t5;
                                mwRnaSetSfreq(t1, t2);
                                t19 = *(signed char *)((t5 + 0x3));
                                t2 = (unsigned char)t19;
                                t1 = t5;
                                mwRnaSetNumChan(t1, t2);
                                t21 = *(int *)((t5 + 0x38));
                                *(unsigned int *)(((int)stk + 12)) = t21;
                                t22 = *(int *)((t21 + 0x0));
                                t23 = *(int *)((t22 + 0x18));
                                t1 = t21;
                                t24 = ((int (*)(int))(t23))(t1);
                                *(unsigned int *)((t5 + 0x28)) = t24;
                                *(unsigned char *)((t5 + 0x0)) = 0x1;
                                t1 = ((int)stk + 8);
                                mwRnaUnlockCs(t1);
                                return t5;
                            }
                            t26 = *(int *)0xC178644;
                            t27 = *(int *)((t26 + 0x14));
                            t1 = a5;
                            t28 = ((int (*)(int, int))(t27))(t1, t2);
                            *(unsigned int *)((t5 + 0x38)) = t28;
                            if (t28 == 0) {
                                mwRnaErrCallFunc(0xC17665C);
                                t1 = ((int)stk + 8);
                                mwRnaUnlockCs(t1);
                                return 0x0;
                            }
                            t1 = t5;
                            mwlRnaSetInitMember(t1);
                            t2 = 0x10;
                            t1 = t5;
                            mwRnaSetBitPerSmpl(t1, t2);
                            t2 = 0xAC44;
                            t1 = t5;
                            mwRnaSetSfreq(t1, t2);
                            t34 = *(signed char *)((t5 + 0x3));
                            t2 = (unsigned char)t34;
                            t1 = t5;
                            mwRnaSetNumChan(t1, t2);
                            t36 = *(int *)((t5 + 0x38));
                            *(unsigned int *)(((int)stk + 12)) = t36;
                            t37 = *(int *)((t36 + 0x0));
                            t38 = *(int *)((t37 + 0x18));
                            t1 = t36;
                            t39 = ((int (*)(int))(t38))(t1);
                            *(unsigned int *)((t5 + 0x28)) = t39;
                            *(unsigned char *)((t5 + 0x0)) = 0x1;
                            t1 = ((int)stk + 8);
                            mwRnaUnlockCs(t1);
                            return t5;
                        }
                    }
                    mwRnaErrCallFunc(0xC176600);
                    t71 = 0x0;
                } else {
                    FUN_0c1717d8(((int)stk + 8));
                    t43 = mwlRnaAlloc();
                    if (t43 == 0) {
                        mwRnaErrCallFunc(0xC17662C);
                        t69 = t43;
                    } else {
                        *(unsigned char *)((t43 + 0x3)) = a5;
                        *(unsigned char *)((t43 + 0x2)) = a5;
                        t52 = 0x0;
                        if ((int)a5 > 0) {
                            t45 = 0x0;
                            t46 = 0x0;
                            do {
                                t47 = *(int *)((a4 + t45));
                                t46 = (t46 + 0x1);
                                *(unsigned int *)((((t43 + 0x10) + t45) + 0x0)) = t47;
                                t45 = (t45 + 0x4);
                            } while ((int)t46 < (int)a5);
                            t52 = t46;
                        }
                        t53 = *(int *)0xC178644;
                        t54 = *(int *)((t53 + 0x14));
                        t55 = ((int (*)(int, int))(t54))(a5, t52);
                        *(unsigned int *)((t43 + 0x38)) = t55;
                        if (t55 == 0) {
                            mwRnaErrCallFunc(0xC17665C);
                            t67 = 0x0;
                        } else {
                            mwlRnaSetInitMember(t43);
                            mwRnaSetBitPerSmpl(t43, 0x10);
                            mwRnaSetSfreq(t43, 0xAC44);
                            t60 = *(signed char *)((t43 + 0x3));
                            mwRnaSetNumChan(t43, (unsigned char)t60);
                            t62 = *(int *)((t43 + 0x38));
                            *(unsigned int *)(((int)stk + 12)) = t62;
                            t63 = *(int *)((t62 + 0x0));
                            t64 = *(int *)((t63 + 0x18));
                            t65 = ((int (*)(int))(t64))(t62);
                            *(unsigned int *)((t43 + 0x28)) = t65;
                            *(unsigned char *)((t43 + 0x0)) = 0x1;
                            t67 = t43;
                        }
                        t69 = t67;
                    }
                    mwRnaUnlockCs(((int)stk + 8));
                    t71 = t69;
                }
                t74 = t71;
            } else {
                mwRnaErrCallFunc(0xC176600);
                t74 = 0x0;
            }
            t76 = t74;
        }
        t78 = t76;
    } else {
        mwRnaErrCallFunc(0xC1765D0);
        t78 = 0x0;
    }
    return t78;
}

int FUN_0c07bc00(int a4, int a5)
{
    int t0;
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
    int t17;
    int t18;
    int t19;
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
    int t30;
    int t32;
    int t33;
    int t34;
    int stk[17] = {0};

    t0 = FUN_0c07bd30(a5);
    nlPushMatrix(0xC14AA08);
    t2 = *(int *)0xC2B3208;
    nlMultiMatrix8(t2);
    if ((0x2 & a5) != 0) {
        t4 = *(int *)0xC2B31FC;
        nlMultiMatrix8(t4);
    }
    t7 = FUN_0c077f60();
    t8 = t7;
    t9 = a4;
    t10 = t0;
    t11 = a4;
    for (;;) {
        t12 = *(int *)((t11 + 0x0));
        if (t12 == 0) break;
        t13 = *(int *)((t11 + 0x0));
        t11 = (t11 + 0x4);
        t9 = 0x0;
        t14 = *(int *)((t11 + 0x0));
        t11 = (t11 + 0x4);
        *(unsigned int *)(((int)stk + 4)) = t14;
        t15 = t9;
        while ((unsigned int)t15 < (unsigned int)t13) {
            t9 = t11;
            t16 = FUN_0c077170(t9, (((int)stk + 4) + 0x14));
            t8 = t16;
            t9 = t11;
            t9 = (t9 + 0xC);
            t17 = FUN_0c077170(t9, (((int)stk + 4) + 0x4));
            t8 = t17;
            t9 = ((int)stk + 4);
            t9 = (t9 + 0x14);
            t18 = FUN_0c07c100(t9, (((int)stk + 4) + 0x4));
            t8 = t18;
            if (t8 != 0) {
                t9 = ((int)stk + 4);
                t9 = (t9 + 0x14);
                t19 = FUN_0c07c000(t9, (((int)stk + 4) + 0x4));
                t8 = t19;
                if (t8 != 0) {
                    t8 = 0x1C;
                    u20 = *(float *)((((int)stk + 4) + t8));
                    t8 = 0x14;
                    t9 = 0xC2B7624;
                    u21 = *(float *)((((int)stk + 4) + t8));
                    t8 = 0x14;
                    u22 = *(float *)((t9 + 0x0));
                    *(float *)((((int)stk + 4) + t8)) = (u22 + (1.0f / u20) * u21);
                    t8 = 0x18;
                    u23 = *(float *)((((int)stk + 4) + t8));
                    t8 = 0x18;
                    u24 = *(float *)0xC2B7628;
                    *(float *)((((int)stk + 4) + t8)) = (u24 + (1.0f / u20) * u23);
                    t8 = 0xC;
                    u25 = *(float *)((((int)stk + 4) + t8));
                    t8 = 0x4;
                    u26 = *(float *)((((int)stk + 4) + t8));
                    t8 = 0x4;
                    u27 = *(float *)((t9 + 0x0));
                    *(float *)((((int)stk + 4) + t8)) = (u27 + (1.0f / u25) * u26);
                    t8 = 0x8;
                    u28 = *(float *)0xC2B7628;
                    u29 = *(float *)((((int)stk + 4) + t8));
                    t8 = 0x8;
                    *(float *)((((int)stk + 4) + t8)) = (u28 + (1.0f / u25) * u29);
                    t9 = t10;
                    t30 = FUN_0c07c470(t9, (((int)stk + 4) + 0x14), (((int)stk + 4) + 0x4), ((int)stk + 4));
                    t8 = t30;
                    t10 = t8;
                }
            }
            t15 = (t15 + 0x1);
            t11 = (t11 + 0xC);
        }
        t11 = (t11 + 0xC);
    }
    nlPopMatrix(0x1);
    t32 = *(int *)0xC2B8CBC;
    t33 = t32;
    if ((a5 & 0x1) != 0) {
        t33 = (t32 + 0x8);
    }
    t34 = *(int *)((t33 + 0x0));
    *(unsigned int *)((t33 + 0x0)) = ((t34 & 0xFC000000) | (t10 & 0x3FFFFFF));
    return 0x1;
}

int colliSphereSphere(int a4, int a5)
{
    float u0;
    int t1;
    float u2;
    float u3;
    int t4;
    float u5;
    float u6;
    float u7;
    float u8;
    int t9;
    int t10;
    float u11;
    float u12;
    int t13;
    int t14;
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
    float t34;
    float t35;
    int t36;
    int t37;
    float u38;
    float u39;
    float u40;
    float u42;
    int t45;
    int t46;
    int t47;
    int t48;
    int stk[16] = {0};

    u0 = *(float *)0xC26ECE0;
    if (u0 == 0.0f) {
        t1 = *(int *)0xC26ECD8;
        u2 = *(float *)((a4 + 0x0));
        u3 = *(float *)((((short)((short)t1 * (short)0x1C) + 0xC0ED440) + 0x4));
        *(float *)((a4 + 0x0)) = (u2 + u3);
        t4 = *(int *)0xC26ECDC;
        u5 = *(float *)((a5 + 0x0));
        u6 = *(float *)((((short)((short)t4 * (short)0x1C) + 0xC0ED440) + 0x4));
        *(float *)((a5 + 0x0)) = (u5 - u6);
    } else {
        u7 = *(float *)0xC26ECE8;
        if (!(u7 > u0)) {
            u8 = *(float *)0xC26ECEC;
            if (u8 > u0) {
                t9 = *(int *)0xC26ECDC;
                t10 = *(int *)((a4 + 0x24));
                *(unsigned int *)((a4 + 0x24)) = (t10 | (((int)t9 >= 0) ? (0x1 << (t9 & 31)) : ((-(int)t9 & 31) ? ((int)0x1 >> (-(int)t9 & 31)) : ((int)0x1 >> 31))));
            }
            u11 = *(float *)0xC26ECE0;
            u12 = *(float *)0xC26ECF0;
            if (u12 > u11) {
                t13 = *(int *)0xC26ECD8;
                t14 = *(int *)((a5 + 0x24));
                *(unsigned int *)((a5 + 0x24)) = (t14 | (((int)t13 >= 0) ? (0x1 << (t13 & 31)) : ((-(int)t13 & 31) ? ((int)0x1 >> (-(int)t13 & 31)) : ((int)0x1 >> 31))));
            }
        } else {
            nlSubVector3op(((int)stk + 4), a5, a4);
            nlUnitVector(((int)stk + 4));
            u19 = *(float *)0xC26ECE0;
            u20 = *(float *)0xC26ECE8;
            u21 = *(float *)(((int)stk + 4));
            u22 = *(float *)0xC26ECF4;
            u23 = *(float *)((a4 + 0x0));
            *(float *)((a4 + 0x0)) = (u23 - (u21 * (u22 * (u20 - u19))));
            u24 = *(float *)(((((int)stk + 4) + 0x4) + 0x0));
            u25 = *(float *)((a4 + 0x4));
            *(float *)((a4 + 0x4)) = (u25 - (u24 * (u22 * (u20 - u19))));
            u26 = *(float *)(((((int)stk + 4) + 0x8) + 0x0));
            u27 = *(float *)((a4 + 0x8));
            *(float *)((a4 + 0x8)) = (u27 - (u26 * (u22 * (u20 - u19))));
            u28 = *(float *)(((int)stk + 4));
            u29 = *(float *)((a5 + 0x0));
            *(float *)((a5 + 0x0)) = (u29 - (u28 * ((u22 * (u20 - u19)) - (u20 - u19))));
            u30 = *(float *)(((((int)stk + 4) + 0x4) + 0x0));
            u31 = *(float *)((a5 + 0x4));
            *(float *)((a5 + 0x4)) = (u31 - (u30 * ((u22 * (u20 - u19)) - (u20 - u19))));
            u32 = *(float *)(((((int)stk + 4) + 0x8) + 0x0));
            u33 = *(float *)((a5 + 0x8));
            *(float *)((a5 + 0x8)) = (u33 - (u32 * ((u22 * (u20 - u19)) - (u20 - u19))));
            t34 = nlInnerProduct(((int)stk + 4), (a4 + 0xC));
            t35 = nlInnerProduct(((int)stk + 4), (a5 + 0xC));
            if ((t34 - t35) > 0.0f) {
                t36 = *(int *)0xC26ECD8;
                t37 = *(int *)0xC26ECDC;
                u38 = *(float *)((((short)((short)t36 * (short)0x1C) + 0xC0ED440) + 0xC));
                u39 = *(float *)((((short)((short)t37 * (short)0x1C) + 0xC0ED440) + 0xC));
                u40 = *(float *)0xC26ECF4;
                nlGetAverageVector((a4 + 0xC), ((int)stk + 4), (a4 + 0xC), 1.0f, (-(u40 * ((t34 - t35) * (u38 + u39)))));
                u42 = *(float *)0xC26ECF4;
                nlGetAverageVector((a5 + 0xC), ((int)stk + 4), (a5 + 0xC), 1.0f, ((1.0f - u42) * ((t34 - t35) * (u38 + u39))));
            }
            t45 = *(int *)0xC26ECDC;
            t46 = *(int *)((a4 + 0x20));
            *(unsigned int *)((a4 + 0x20)) = (t46 | (((int)t45 >= 0) ? (0x1 << (t45 & 31)) : ((-(int)t45 & 31) ? ((int)0x1 >> (-(int)t45 & 31)) : ((int)0x1 >> 31))));
            t47 = *(int *)0xC26ECD8;
            t48 = *(int *)((a5 + 0x20));
            *(unsigned int *)((a5 + 0x20)) = (t48 | (((int)t47 >= 0) ? (0x1 << (t47 & 31)) : ((-(int)t47 & 31) ? ((int)0x1 >> (-(int)t47 & 31)) : ((int)0x1 >> 31))));
        }
    }
    return 0x1;
}

int vmsio_block_write(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
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
    int t19;
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
    int t32;
    int t33;
    int t34;
    int t35;
    int t37;
    int t38;
    int t39;
    int t41;
    int t42;
    int t44;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int stk[20] = {0};

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a6;
    t0 = *(int *)(((int)stk + 24));
    *(unsigned int *)(((int)stk + 36)) = ((t0 * 0x148) + 0xC2EE990);
    t1 = *(int *)(((int)stk + 24));
    t2 = vmsio_ismount(t1);
    if (t2 != 0) {
        t4 = *(int *)(((int)stk + 24));
        t5 = *(int *)(((t4 << 2) + 0xC176948));
        kdGetDevice(t5);
        t7 = *(int *)(((int)stk + 16));
        *(unsigned int *)(((int)stk + 20)) = t7;
        t8 = *(int *)(((int)stk + 36));
        t9 = *(int *)((t8 + 0x1C));
        t10 = *(int *)((t9 + 0x48));
        *(unsigned int *)(((int)stk + 16)) = t10;
        *(unsigned int *)(((int)stk + 44)) = 0x0;
        t11 = 0x0;
        for (;;) {
            t12 = *(int *)(((int)stk + 36));
            t13 = *(int *)((t12 + 0x1C));
            t14 = *(int *)((t13 + 0x40));
            t15 = *(int *)(((int)stk + 44));
            if ((int)t15 >= (int)t14) {
                for (;;) {
                    t16 = kdIsChanged();
                    if (t16 == 0) {
                        t17 = kdSetGetLastError();
                        if ((int)t17 < 0) {
                            vmsfb_sleep();
                            continue;
                        }
                        for (;;) {
                            t19 = kdGetStatus();
                            if (t19 == 0) {
                                vmsfb_sleep();
                                continue;
                            }
                            break;
                        }
                        t21 = kdGetDevice(t5);
                        *(unsigned int *)(((int)stk + 20)) = t21;
                        t22 = kdIsChanged();
                        if (t22 != 0) break;
                        t23 = *(int *)0xC17871C;
                        *(unsigned int *)(((int)stk + 16)) = t23;
                        if (t23 != 0) {
                            t24 = *(int *)(((int)stk + 16));
                            t25 = *(int *)(((int)stk + 24));
                            t26 = ((int (*)(int, int, int, int))(t24))(t25, a5, (((int)stk + 16) + 0xC), (((int)stk + 16) + 0x10));
                            if (t26 == 0) {
                                t27 = *(int *)(((int)stk + 20));
                                t28 = *(signed char *)((t27 + 0x4));
                                *(unsigned char *)(((int)stk + 28)) = t28;
                                t29 = *(int *)(((int)stk + 20));
                                t30 = *(int *)((t29 + 0xC));
                                *(unsigned int *)(((int)stk + 32)) = t30;
                            }
                        } else {
                            t32 = *(int *)(((int)stk + 20));
                            t33 = *(signed char *)((t32 + 0x4));
                            *(unsigned char *)(((int)stk + 28)) = t33;
                            t34 = *(int *)(((int)stk + 20));
                            t35 = *(int *)((t34 + 0xC));
                            *(unsigned int *)(((int)stk + 32)) = t35;
                        }
                        t37 = *(signed char *)(((int)stk + 28));
                        if ((unsigned char)t37 != 7) {
                            if ((unsigned char)t37 != 0xFC) {
                                if ((unsigned char)t37 != 0xFB) {
                                    return 0xFFFFFF01;
                                }
                                return 0xFFFFFF40;
                            }
                            continue;
                        }
                        return 0x0;
                    }
                    break;
                }
                return 0xFFFFFF30;
            }
            for (;;) {
                t38 = kdIsChanged();
                if (t38 == 0) {
                    t39 = *(int *)(((int)stk + 16));
                    t41 = *(int *)(((int)stk + 20));
                    t42 = kdSetBlockWrite();
                    if ((int)t42 < 0) {
                        vmsfb_sleep();
                        continue;
                    }
                    for (;;) {
                        t44 = kdGetStatus();
                        if (t44 == 0) {
                            vmsfb_sleep();
                            continue;
                        }
                        break;
                    }
                    t46 = kdGetDevice(t5);
                    *(unsigned int *)(((int)stk + 40)) = t46;
                    t47 = kdIsChanged();
                    if (t47 == 0) {
                        t48 = *(int *)(((int)stk + 40));
                        t49 = *(signed char *)((t48 + 0x4));
                        if ((unsigned char)t49 != 7) {
                            if ((unsigned char)t49 != 0xFC) {
                                return 0xFFFFFF01;
                            }
                            continue;
                        }
                        break;
                    }
                    return 0xFFFFFF30;
                }
                return 0xFFFFFF30;
            }
            t50 = *(int *)(((int)stk + 20));
            t11 = (t11 + 0x1);
            t51 = *(int *)(((int)stk + 16));
            *(unsigned int *)(((int)stk + 20)) = (t50 + t51);
            t52 = *(int *)(((int)stk + 44));
            *(unsigned int *)(((int)stk + 44)) = (t52 + 0x1);
        }
    }
    vmsfb_sleep();
    return 0xFFFFFF01;
}

void carResistance(int a4)
{
    int t1;
    int t3;
    int t5;
    int t9;
    int t10;
    int t11;
    float t12;
    int t13;
    int t14;
    int t15;
    int t16;
    float u17;
    float u18;
    float u19;
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
    float u33;
    float u34;
    float u36;
    float u37;
    float u38;
    int t40;
    int t39;
    float u41;
    float u47;
    float u48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    float u63;
    float u64;
    float u65;
    float u66;
    int t68;
    int t70;
    int t72;
    float u62;
    float u43;
    float u45;
    int stk[9] = {0};

    nlPushUnitMatrix();
    t1 = *(short *)((a4 + 0xA8));
    nlRotateAZ((-(unsigned short)t1));
    t3 = *(short *)((a4 + 0xA4));
    nlRotateAX((-(unsigned short)t3));
    t5 = *(short *)((a4 + 0xA6));
    nlRotateAY((-(unsigned short)t5));
    FUN_0c077210((0x98 + a4), (((int)stk + 4) + 0xC));
    nlPopMatrix(0x1);
    t9 = *(int *)(((((int)stk + 4) + 0xC) + 0x8));
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t9;
    t10 = *(int *)(((((int)stk + 4) + 0xC) + 0x4));
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t10;
    t11 = *(int *)(((((int)stk + 4) + 0xC) + 0x0));
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t11;
    *(float *)(((int)stk + 8)) = 0.0f;
    t12 = nlScalor(((int)stk + 4));
    if (t12 > 0.0f) {
        t13 = *(int *)0xC0A4790;
        *(unsigned int *)((((int)stk + 4) + 0x8)) = t13;
        t14 = *(int *)0xC0A478C;
        *(unsigned int *)((((int)stk + 4) + 0x4)) = t14;
        t15 = *(int *)0xC0A4788;
        *(unsigned int *)((((int)stk + 4) + 0x0)) = t15;
        t16 = *(int *)((a4 + 0x84));
        if ((t16 & 32) == 0) {
            if (!(0.00999999978f > t12)) {
                u17 = *(float *)((a4 + 0xC8));
                if (u17 != 0.0f) {
                    u18 = *(float *)((a4 + 0xC8));
                    if (t12 > u18) {
                        u19 = *(float *)((a4 + 0xC8));
                        nlScaleUnitVector(((int)stk + 4), (((int)stk + 4) + 0xC), u19);
                    } else {
                        t21 = *(int *)(((((int)stk + 4) + 0xC) + 0x8));
                        *(unsigned int *)((((int)stk + 4) + 0x8)) = t21;
                        t22 = *(int *)(((((int)stk + 4) + 0xC) + 0x4));
                        *(unsigned int *)((((int)stk + 4) + 0x4)) = t22;
                        t23 = *(int *)(((((int)stk + 4) + 0xC) + 0x0));
                        *(unsigned int *)((((int)stk + 4) + 0x0)) = t23;
                        t24 = *(int *)0xC0A4790;
                        *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x8)) = t24;
                        t25 = *(int *)0xC0A478C;
                        *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x4)) = t25;
                        t26 = *(int *)0xC0A4788;
                        *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = t26;
                    }
                }
            } else {
                t27 = *(int *)(((((int)stk + 4) + 0xC) + 0x8));
                *(unsigned int *)((((int)stk + 4) + 0x8)) = t27;
                t28 = *(int *)(((((int)stk + 4) + 0xC) + 0x4));
                *(unsigned int *)((((int)stk + 4) + 0x4)) = t28;
                t29 = *(int *)(((((int)stk + 4) + 0xC) + 0x0));
                *(unsigned int *)((((int)stk + 4) + 0x0)) = t29;
                t30 = *(int *)0xC0A4790;
                *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x8)) = t30;
                t31 = *(int *)0xC0A478C;
                *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x4)) = t31;
                t32 = *(int *)0xC0A4788;
                *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = t32;
            }
            u33 = *(float *)(((int)stk + 16));
            u34 = *(float *)((a4 + 0xB4));
            u36 = 1.0f;
            if (5000.0f > u34) {
                u36 = 0.5f;
            }
            if (u36 > (u33 < 0.0f ? -u33 : u33)) {
                u37 = *(float *)(((int)stk + 16));
                u43 = 0.899999976f;
                u45 = u37;
            } else {
                u38 = *(float *)(((int)stk + 16));
                t40 = 0x1;
                if (!(u38 > 0.0f)) {
                    t39 = 0x0;
                    if (0.0f > u38) {
                        t39 = 0xFFFFFFFF;
                    }
                    t40 = t39;
                }
                u41 = 0.099999994f;
                if (0.099999994f > ((u33 < 0.0f ? -u33 : u33) * 0.399999976f)) {
                    u41 = ((u33 < 0.0f ? -u33 : u33) * 0.399999976f);
                }
                u43 = u41;
                u45 = (float)t40;
            }
            u47 = *(float *)(((int)stk + 4));
            *(float *)(((int)stk + 4)) = (u47 + u43 * u45);
            u62 = 0.0149999997f;
        } else {
            u48 = *(float *)((a4 + 0x100));
            if (((float)(((9.99999994e-09f > u48)) ? 1 : 0) < 0.0f ? -(float)(((9.99999994e-09f > u48)) ? 1 : 0) : (float)(((9.99999994e-09f > u48)) ? 1 : 0)) != 0.0f) {
                if (0.399999976f > t12) {
                    t49 = *(int *)(((((int)stk + 4) + 0xC) + 0x8));
                    *(unsigned int *)((((int)stk + 4) + 0x8)) = t49;
                    t50 = *(int *)(((((int)stk + 4) + 0xC) + 0x4));
                    *(unsigned int *)((((int)stk + 4) + 0x4)) = t50;
                    t51 = *(int *)(((((int)stk + 4) + 0xC) + 0x0));
                    *(unsigned int *)((((int)stk + 4) + 0x0)) = t51;
                    t52 = *(int *)0xC0A4790;
                    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x8)) = t52;
                    t53 = *(int *)0xC0A478C;
                    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x4)) = t53;
                    t54 = *(int *)0xC0A4788;
                    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = t54;
                }
            }
            u62 = 0.049999997f;
        }
        u63 = *(float *)(((int)stk + 4));
        u64 = *(float *)(((int)stk + 16));
        *(float *)(((int)stk + 4)) = (u63 + u62 * u64);
        u65 = *(float *)(((int)stk + 24));
        u66 = *(float *)(((int)stk + 12));
        *(float *)(((int)stk + 12)) = (u66 + u62 * u65);
        nlPushUnitMatrix();
        t68 = *(short *)((a4 + 0xA6));
        nlRotateAY((unsigned short)t68);
        t70 = *(short *)((a4 + 0xA4));
        nlRotateAX((unsigned short)t70);
        t72 = *(short *)((a4 + 0xA8));
        nlRotateAZ((unsigned short)t72);
        FUN_0c077210(((int)stk + 4), ((int)stk + 4));
        nlPopMatrix(0x1);
        nlSubVector((0x98 + a4), ((int)stk + 4));
    }
}

void ExecSpark(void)
{
    int t0;
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
    float u15;
    int t16;
    int t17;
    float u18;
    float t19;
    int t20;
    int t23;
    int t24;
    int t25;
    int t26;
    float u27;
    float u28;
    float u29;
    int t30;
    int t31;
    int t32;
    int t34;
    int t35;
    int t37;
    int t38;
    float u41;
    int t43;
    int t44;
    int t45;
    int t46;
    int t49;
    int t55;
    int t21;
    int stk[16] = {0};

    t0 = *(int *)0xC2757D0;
    if ((int)t0 >= (int)0x1) {
        nlPushUnitMatrix();
        t2 = FUN_0c077f70();
        t3 = *(int *)0xC2757D0;
        *(unsigned int *)(((int)stk + 4)) = t3;
        t4 = *(int *)0xC2757D4;
        *(unsigned int *)(((int)stk + 8)) = t4;
        t5 = t2;
        t6 = t4;
        t7 = ((short)((short)t4 * (short)0x1C) + 0xC274DF8);
        for (;;) {
            t8 = *(int *)(((int)stk + 4));
            if (t8 != 0) {
                t9 = *(int *)((t7 + 0x18));
                *(unsigned int *)((t7 + 0x18)) = (t9 - 1);
                if ((int)(t9 - 1) < 0) {
                    t10 = *(int *)0xC2757D0;
                    *(unsigned int *)0xC2757D0 = (t10 - 1);
                    t11 = *(int *)0xC2757D4;
                    *(unsigned int *)0xC2757D4 = (t11 + 0x1);
                    if ((int)(t11 + 0x1) >= (int)0x5A) {
                        *(unsigned int *)0xC2757D4 = 0x0;
                    }
                } else {
                    t6 = t7;
                    t12 = GetCollisionFirst(t6, (t7 + 0xC));
                    t5 = t12;
                    t13 = *(int *)((t5 + 0x1C));
                    t14 = t5;
                    t5 = t13;
                    if (t5 == -1) {
                        t6 = t7;
                        t21 = (t7 + 0xC);
                    } else {
                        t5 = 0x18;
                        u15 = *(float *)((t14 + t5));
                        t6 = ((int)stk + 4);
                        t6 = (t6 + 0x8);
                        t16 = nlScaleVector(t6, (t7 + 0xC), u15);
                        t5 = t16;
                        t6 = t7;
                        t17 = nlAddVector(t6, (((int)stk + 4) + 0x8));
                        t5 = t17;
                        t5 = 0xC037868;
                        u18 = *(float *)((t5 + 0x0));
                        t6 = t7;
                        t6 = (t6 + 0xC);
                        t19 = nlInnerProduct(t6, (t14 + 0xC));
                        t5 = t19;
                        t6 = ((int)stk + 4);
                        t6 = (t6 + 0x8);
                        t20 = nlScaleVector(t6, (t14 + 0xC), (-(t19 * u18)));
                        t5 = t20;
                        t6 = t7;
                        t6 = (t6 + 0xC);
                        t21 = (((int)stk + 4) + 0x8);
                    }
                    t23 = nlAddVector(t6, t21);
                    t5 = t23;
                    t24 = *(int *)(((int)stk + 8));
                    t25 = *(signed char *)0xC2757DC;
                    t6 = t7;
                    t26 = FUN_0c0771b0(t6, ((signed char)(((t25 << 1) + t25) << 2) + (((((t24 << 2) << 2) << 1) + 0xC274298) + 0x8)));
                    t5 = t26;
                    t5 = 0xC037874;
                    u27 = *(float *)((t5 + 0x0));
                    t5 = 0x10;
                    u28 = *(float *)((t7 + t5));
                    t6 = t7;
                    *(float *)((t7 + t5)) = (u28 - u27);
                    t5 = 0xC037878;
                    u29 = *(float *)((t5 + 0x0));
                    t6 = (t6 + 0xC);
                    t30 = nlScaleVector(t6, (t7 + 0xC), u29);
                    t5 = t30;
                    t31 = *(int *)((t7 + 0x18));
                    t5 = t31;
                    t6 = 0xC0EDB40;
                    t5 = (t5 << 2);
                    t32 = *(int *)((t6 + t5));
                    *(unsigned int *)((((((t24 << 2) << 2) << 1) + 0xC274298) + 0x4)) = t32;
                }
                t34 = *(int *)(((int)stk + 8));
                *(unsigned int *)(((int)stk + 8)) = (t34 + 0x1);
                if ((int)(t34 + 0x1) >= (int)0x5A) {
                    t7 = 0xC274DF8;
                    *(unsigned int *)(((int)stk + 8)) = 0x0;
                } else {
                    t7 = (t7 + 0x1C);
                }
                t35 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 4)) = (t35 - 1);
                continue;
            }
            break;
        }
        nlPopMatrix(0x1);
        t37 = *(int *)0xC2757D0;
        if ((int)t37 > 0) {
            t38 = *(int *)0xC2757E0;
            if (t38 == 0) {
                nlLineBlendFunc(0x1, 0x4);
                nlLineSetThickness((1.0f + 1.0f));
                u41 = *(float *)0xC0379BC;
                nlLineSetDiv(u41);
                t43 = *(int *)0xC2757D0;
                if (t43 == 90) {
                    *(unsigned int *)0xC274DD8 = 0x0;
                } else {
                    t44 = *(int *)0xC2757D8;
                    *(unsigned int *)((((((t44 << 2) << 2) << 1) + 0xC274298) + 0x0)) = 0x0;
                    t45 = *(int *)0xC2757D4;
                    t46 = *(int *)0xC2757D8;
                    if ((int)t45 > (int)t46) {
                        *(unsigned int *)0xC274DD8 = 0x0;
                        FUN_0c07b9d0();
                    }
                    t49 = *(int *)0xC2757D4;
                }
                FUN_0c07b9d0();
            }
        } else {
            *(unsigned int *)0xC2757D8 = 0x0;
            *(unsigned int *)0xC2757D4 = 0x0;
            *(unsigned int *)0xC2757D0 = 0x0;
        }
        t55 = *(int *)0xC2757DC;
        *(unsigned int *)0xC2757DC = (t55 ^ 0x1);
        *(unsigned int *)0xC2757E0 = 0x0;
    }
}

int FUN_0c044c64(int a4)
{
    int t0;
    int t105;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;
    float u7;
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
    int t31;
    int t32;
    float u33;
    float u34;
    int t36;
    int t35;
    int t38;
    int t41;
    int t42;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t58;
    int t52;
    int t54;
    int t53;
    int t62;
    int t63;
    int t64;
    int t65;
    int t102;
    int t68;
    int t69;
    int t70;
    int t71;
    int t72;
    int t100;
    int t98;
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
    int t89;
    int t92;
    int t94;
    int t93;
    int t104;
    int t45;
    int t39;
    int t103;
    int t66;
    int t67;
    int t96;
    int stk[9] = {0};

    t0 = *(int *)((a4 + 0x84));
    t105 = 0x84;
    if ((t0 & 0x8000) == 0) {
        t1 = *(int *)((a4 + 0x84));
        if ((t1 & 0xC00) != 0) {
            t2 = *(int *)((a4 + 0x11C));
            if (t2 != 0) {
                t3 = *(int *)((a4 + 0x11C));
                *(unsigned int *)((a4 + 0x11C)) = (t3 - 1);
            }
            t5 = *(int *)((a4 + 0x11C));
            if ((float)t5 == 150.0f) {
                *(unsigned int *)((a4 + 0x11C)) = 0x0;
            } else {
                t6 = *(int *)((a4 + 0x11C));
                u7 = *(float *)0xC044F5C;
                if (u7 > (float)t6) {
                    if ((float)t6 > 150.0f) {
                        t8 = *(int *)0xC2A6690;
                        t9 = *(int *)((a4 + 0x80));
                        t10 = *(int *)((a4 + 0xD4));
                        t11 = *(int *)((((((t9 << 1) + t9) << 2) + t8) + 0x4));
                        t12 = *(int *)((t11 + 0x0));
                        if ((int)t10 > (int)0x17) {
                            if ((int)t10 < (int)(t12 - 23)) {
                                t13 = *(int *)((a4 + 0x80));
                                t14 = *(int *)((((((t13 << 1) + t13) << 2) + t8) + 0x8));
                                t15 = *(short *)((t14 + 0xA));
                                t16 = *(int *)((a4 + 0xD4));
                                *(unsigned int *)(((int)stk + 8)) = t16;
                                t17 = *(int *)0xC2A6690;
                                t18 = *(int *)(((((((unsigned short)t15 << 1) + (unsigned short)t15) << 2) + t17) + 0x4));
                                t19 = *(int *)(((((((unsigned short)t15 << 1) + (unsigned short)t15) << 2) + t17) + 0x0));
                                t20 = *(int *)((t18 + 0x0));
                                t21 = ((int (*)(int, int, int, int, int, float))(getNearLineIndex))(0x2, t19, t20, (((int)stk + 4) + 0x4), (0x8C + a4), (float)t6);
                                t22 = *(int *)(((int)stk + 8));
                                t23 = courseStatusGet((unsigned short)t15, (t22 - 2), 0x0, 0x8);
                                if (t23 == 0) {
                                    *(unsigned int *)((a4 + 0x80)) = (unsigned short)t15;
                                    t24 = *(int *)(((int)stk + 8));
                                    *(unsigned int *)((a4 + 0xD4)) = t24;
                                    *(unsigned int *)((a4 + 0x11C)) = 0x96;
                                }
                            }
                        }
                    }
                }
            }
            t31 = *(int *)((a4 + 0x84));
            if ((0x2 & t31) == 0) {
                t32 = *(int *)((a4 + 0x11C));
                if (t32 != 0) {
                    u33 = *(float *)0xC044F68;
                    u34 = *(float *)((a4 + 0xCC));
                    t36 = 0xCC;
                    if (u33 > u34) {
                        t35 = *(int *)((a4 + 0x84));
                        *(unsigned int *)((a4 + 0x84)) = (t35 & 0xFFFFF3FF);
                        *(unsigned int *)((a4 + 0x11C)) = 0x0;
                        t36 = 0x11C;
                    }
                    t39 = t36;
                } else {
                    t38 = *(int *)((a4 + 0x84));
                    *(unsigned int *)((a4 + 0x84)) = (t38 & 0xFFFFF3FF);
                    *(unsigned int *)((a4 + 0x11C)) = 0x0;
                    t39 = 0x11C;
                }
                t45 = t39;
            } else {
                t41 = *(int *)((a4 + 0x11C));
                if (t41 == 0) {
                    t42 = *(int *)((a4 + 0x84));
                    *(unsigned int *)((a4 + 0x84)) = (t42 & 0xFFFFF3FF);
                    *(unsigned int *)((a4 + 0x11C)) = 0x0;
                }
                t45 = 0x11C;
            }
            t104 = t45;
        } else {
            t47 = *(int *)0xC2A6690;
            t48 = *(int *)((a4 + 0x80));
            t49 = *(int *)((((((t48 << 1) + t48) << 2) + t47) + 0x8));
            t50 = *(short *)((t49 + 0xA));
            if ((unsigned short)t50 == 0) {
                t51 = *(int *)((a4 + 0x84));
                t58 = 0x84;
                if ((0x2 & t51) != 0) {
                    t52 = *(int *)((a4 + 0x84));
                    t54 = 0x84;
                    if ((0x100 & t52) != 0) {
                        t53 = *(int *)((a4 + 0x84));
                        *(unsigned int *)((a4 + 0x84)) = (t53 | 0x8000);
                        *(unsigned int *)((a4 + 0x11C)) = 0x168;
                        t54 = 0x11C;
                    }
                    t58 = t54;
                }
                t103 = t58;
            } else {
                t62 = *(int *)((a4 + 0x84));
                if ((t62 & 0x2) == 0) {
                    t63 = extRand();
                    t66 = t63;
                    t67 = (0x3FF & t63);
                } else {
                    t64 = *(int *)((a4 + 0x84));
                    t65 = 0x1;
                    if ((0x100 & t64) != 0) {
                        t65 = 0x0;
                    }
                    t66 = 0x84;
                    t67 = t65;
                }
                t102 = t66;
                if (t67 == 0) {
                    t68 = *(int *)0xC2A6690;
                    t69 = *(int *)((a4 + 0x80));
                    t70 = *(int *)((a4 + 0xD4));
                    t71 = *(int *)((((((t69 << 1) + t69) << 2) + t68) + 0x4));
                    t72 = *(int *)((t71 + 0x0));
                    t100 = 0xD4;
                    if ((int)t70 > (int)0x17) {
                        t98 = 0xD4;
                        if ((int)t70 < (int)(t72 - 23)) {
                            t73 = *(int *)((a4 + 0xD4));
                            *(unsigned int *)(((int)stk + 8)) = t73;
                            t74 = *(int *)0xC2A6690;
                            t75 = *(int *)(((((((unsigned short)t50 << 1) + (unsigned short)t50) << 2) + t74) + 0x4));
                            t76 = *(int *)(((((((unsigned short)t50 << 1) + (unsigned short)t50) << 2) + t74) + 0x0));
                            t77 = *(int *)((t75 + 0x0));
                            t78 = ((int (*)(int, int, int, int, int))(getNearLineIndex))(0x2, t76, t77, (((int)stk + 4) + 0x4), (0x8C + a4));
                            t79 = *(int *)(((int)stk + 8));
                            t80 = courseStatusGet((unsigned short)t50, (t79 - 2), 0x0, 0x8);
                            if (t80 == 0) {
                                t81 = *(int *)0xC2A6690;
                                t82 = *(int *)((a4 + 0x80));
                                t83 = *(int *)((((((t82 << 1) + t82) << 2) + t81) + 0x8));
                                t84 = *(int *)((t83 + 0x0));
                                if ((t84 & 0x4000) != 0) {
                                    t85 = *(int *)((a4 + 0x84));
                                    *(unsigned int *)((a4 + 0x84)) = (t85 | 0x800);
                                } else {
                                    t86 = *(int *)((a4 + 0x84));
                                    *(unsigned int *)((a4 + 0x84)) = (t86 | 0x400);
                                }
                                t89 = *(int *)((a4 + 0x84));
                                if ((0x2 & t89) == 0) {
                                    *(unsigned int *)((a4 + 0x11C)) = 0x1C2;
                                } else {
                                    *(unsigned int *)((a4 + 0x11C)) = 0x168;
                                }
                                t96 = 0x11C;
                            } else {
                                t92 = *(int *)((a4 + 0x84));
                                t94 = 0x84;
                                if ((0x2 & t92) != 0) {
                                    t93 = *(int *)((a4 + 0x84));
                                    *(unsigned int *)((a4 + 0x84)) = (t93 | 0x8000);
                                    *(unsigned int *)((a4 + 0x11C)) = 0x168;
                                    t94 = 0x11C;
                                }
                                t96 = t94;
                            }
                            t98 = t96;
                        }
                        t100 = t98;
                    }
                    t102 = t100;
                }
                t103 = t102;
            }
            t104 = t103;
        }
        t105 = t104;
    }
    return t105;
}

int gameState13(void)
{
    int t0;
    int t2;

    t0 = *(int *)0xC1EE240;
    *(unsigned int *)0xC1EE240 = (t0 + 0x1);
    FUN_0c039540();
    t2 = Init_Result(0x3);
    if (t2 == 0) {
        exec_loop_Replay();
    }
    FUN_0c039560();
    return FUN_0c03a41c();
}

int FUN_0c03e254(void)
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
    int t12;
    int t13;
    float u14;
    int t10;
    int t16;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t28;
    int t29;
    int t31;
    int t30;
    int t32;
    int t33;
    int t34;
    int t40;
    int t41;
    int t43;
    int t45;
    int t46;
    int t47;
    int t48;
    int t51;
    int t52;
    float u53;
    int t49;
    int t55;
    int t57;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    int t67;
    int t68;
    int t70;
    int t69;
    int t71;
    int t73;
    int t74;
    int t75;
    int t76;
    int t79;
    int t80;
    float u81;
    int t77;
    int t83;
    int t85;
    int t86;
    int t87;
    int t88;
    int t89;
    int t90;
    int t95;
    int t96;
    int t98;
    int t97;
    int t99;
    int t100;
    int t101;
    int t104;
    int t105;
    float u106;
    int t102;
    int t108;
    int t110;
    int t111;
    int t112;
    int t113;
    int t114;
    int t115;
    int t120;
    int t121;
    int t123;
    int t122;
    int t124;
    int t126;
    int t127;
    int t128;
    int t129;
    int t132;
    int t133;
    float u134;
    int t130;
    int t136;
    int t138;
    int t139;
    int t140;
    int t141;
    int t142;
    int t143;
    int t148;
    int t149;
    int t151;
    int t150;
    int t152;
    int t153;
    int t154;
    int t157;
    int t158;
    float u159;
    int t155;
    int t161;
    int t163;
    int t164;
    int t165;
    int t166;
    int t167;
    int t168;
    int t173;
    int t174;
    int t176;
    int t175;

    t0 = *(int *)0xC2A1220;
    if (t0 != 0) {
        return 0;
    }
    t1 = *(int *)0xC2A121C;
    if (t1 == 1) {
        *(unsigned int *)0xC2A121C = 0x2;
        *(unsigned int *)0xC2A1208 = 0x2;
        t2 = *(int *)0xC2A1224;
        if (t2 != 0) {
            return t1;
        }
        return ((int (*)(int))(FUN_0c03b698))(0x4);
    }
    t3 = FUN_0c03bf42();
    if (t3 == 1) {
        do {
            t4 = *(int *)0xC2A11B8;
            t5 = buIsExistFile(t4, 0xC0A2078);
        } while (t5 == -1);
        *(unsigned int *)0xC2A1AEC = t5;
        if (t5 != 0) {
            if (t5 != 0xFFFFFF05) {
                return FUN_0c040c58(t5);
            }
            *(unsigned int *)0xC0EF7E0 = 0x1;
            *(unsigned int *)0xC2A19E0 = 0x3;
            return t5;
        }
        *(unsigned int *)0xC0EF7E0 = 0x1;
        *(unsigned int *)0xC2A19E0 = 0x3;
        return t5;
    }
    t6 = *(int *)0xC2A1208;
    t7 = *(int *)0xC2A1AEC;
    if ((t6 & 0x4) == 0) {
        t8 = *(int *)0xC0EF7E0;
        if (t8 == 0) {
            return ((int (*)(int, int, int))(FUN_0c03b698))(0x9, t7, 0x4);
        }
        t9 = *(int *)0xC2A1AEC;
        t12 = 0x6;
        t13 = 0x0;
        u14 = 135.0f;
        if (t9 == 0xFFFFFF05) {
            t10 = *(int *)0xC2A11B8;
            t12 = 0x8;
            t13 = ((((t10 << 2) << 2) << 1) + 0xC09F9F0);
            u14 = 191.0f;
        }
        PutVM_Message(0x20, t12, t13, u14, 240.0f);
        t16 = *(int *)0xC2A11B8;
        PutVM_Message(0x20, 0x7, ((((t16 << 2) << 2) << 1) + 0xC09F9F0), 220.0f, 368.0f);
        t18 = *(int *)0xC2A11B8;
        t19 = FUN_0c060586(((((t18 >> 1) << 1) + ((t18 >> 1) << 2)) + 0x1), 0x1);
        t20 = *(int *)0xC2A19E0;
        if ((int)t20 > 0) {
            t21 = *(int *)0xC2A19E0;
            *(unsigned int *)0xC2A19E0 = (t21 - 1);
            return t19;
        }
        t22 = *(int *)0xC2A11B8;
        t23 = SaveBackupData(t22);
        FUN_0c060616(0x1);
        if (t23 != 0) {
            return FUN_0c040c58(t23);
        }
        FUN_0c03bf76();
        FUN_0c03dfc8();
        FUN_0c03b544(0x4);
        t28 = ((int (*)(int))(FUN_0c03b698))(0x0);
        t29 = *(int *)0xC0EF7E0;
        t31 = t29;
        if (t29 == 1) {
            t30 = *(int *)0xC2A121C;
            if (t30 == 2) {
                *(unsigned int *)0xC2A121C = 0x3;
            }
            t31 = t30;
        }
        return t31;
    }
    t32 = *(int *)0xC2A11CC;
    if (t7 == 0) {
        t33 = *(int *)0xC2A121C;
        if (t33 == 2) {
            if ((0x18 & t32) != 0) {
                t34 = *(int *)0xC0EF7E0;
                *(unsigned int *)0xC0EF7E0 = ((t34 + 0x1) & 0x1);
            } else {
                if ((t32 & 0x4) != 0) {
                    *(unsigned int *)0xC0EF7E0 = 0x0;
                }
            }
            PutVM_Message(0x20, 0x24, 0x0, 190.0f, 176.0f);
            PutVM_Message(0x20, 0x25, 0x0, 190.0f, 208.0f);
            t40 = *(int *)0xC0EF7E0;
            t41 = FUN_0c041016(0x0);
            putLevelCTFontAssist(0x2024, (0xC09E1B4 + (short)((short)t41 * (short)0x58)), 0x2, (0x1 & (t40 + 0x1)), 0x0);
            t43 = *(int *)0xC2A11B8;
            PutVM_Message(0x20, 0x7, ((((t43 << 2) << 2) << 1) + 0xC09F9F0), 220.0f, 368.0f);
            t45 = *(int *)0xC2A11CC;
            if ((t45 & 6) == 0) {
                return t45;
            }
            t46 = *(int *)0xC2A1208;
            *(unsigned int *)0xC2A1208 = ((t46 & 0xFFFFFFFB) | 0x8);
            t47 = *(int *)0xC0EF7E0;
            if (t47 == 0) {
                return ((int (*)(int))(FUN_0c03b698))(0x9);
            }
            t48 = *(int *)0xC2A1AEC;
            t51 = 0x6;
            t52 = 0x0;
            u53 = 135.0f;
            if (t48 == 0xFFFFFF05) {
                t49 = *(int *)0xC2A11B8;
                t51 = 0x8;
                t52 = ((((t49 << 2) << 2) << 1) + 0xC09F9F0);
                u53 = 191.0f;
            }
            PutVM_Message(0x20, t51, t52, u53, 240.0f);
            t55 = *(int *)0xC2A11B8;
            PutVM_Message(0x20, 0x7, ((((t55 << 2) << 2) << 1) + 0xC09F9F0), 220.0f, 368.0f);
            t57 = *(int *)0xC2A11B8;
            t58 = FUN_0c060586(((((t57 >> 1) << 1) + ((t57 >> 1) << 2)) + 0x1), 0x1);
            t59 = *(int *)0xC2A19E0;
            if ((int)t59 > 0) {
                t60 = *(int *)0xC2A19E0;
                *(unsigned int *)0xC2A19E0 = (t60 - 1);
                return t58;
            }
            t61 = *(int *)0xC2A11B8;
            t62 = SaveBackupData(t61);
            FUN_0c060616(0x1);
            if (t62 != 0) {
                return FUN_0c040c58(t62);
            }
            FUN_0c03bf76();
            FUN_0c03dfc8();
            FUN_0c03b544(0x4);
            t67 = ((int (*)(int))(FUN_0c03b698))(0x0);
            t68 = *(int *)0xC0EF7E0;
            t70 = t68;
            if (t68 == 1) {
                t69 = *(int *)0xC2A121C;
                if (t69 == 2) {
                    *(unsigned int *)0xC2A121C = 0x3;
                }
                t70 = t69;
            }
            return t70;
        }
        if (t7 == 0xFFFFFF05) {
            if ((t32 & 0x2) == 0) {
                t71 = *(int *)0xC2A11B8;
                PutVM_Message(0x20, 0x5, ((((t71 << 2) << 2) << 1) + 0xC09F9F0), 118.0f, 240.0f);
                t73 = *(int *)0xC2A11B8;
                return PutVM_Message(0x20, 0x7, ((((t73 << 2) << 2) << 1) + 0xC09F9F0), 220.0f, 368.0f);
            }
            *(unsigned int *)0xC0EF7E0 = 0x1;
            t74 = *(int *)0xC2A1208;
            *(unsigned int *)0xC2A1208 = ((t74 & 0xFFFFFFFB) | 0x8);
            t75 = *(int *)0xC0EF7E0;
            if (t75 == 0) {
                return ((int (*)(int, int, int))(FUN_0c03b698))(0x9, t7, 0x4);
            }
            t76 = *(int *)0xC2A1AEC;
            t79 = 0x6;
            t80 = 0x0;
            u81 = 135.0f;
            if (t76 == 0xFFFFFF05) {
                t77 = *(int *)0xC2A11B8;
                t79 = 0x8;
                t80 = ((((t77 << 2) << 2) << 1) + 0xC09F9F0);
                u81 = 191.0f;
            }
            PutVM_Message(0x20, t79, t80, u81, 240.0f);
            t83 = *(int *)0xC2A11B8;
            PutVM_Message(0x20, 0x7, ((((t83 << 2) << 2) << 1) + 0xC09F9F0), 220.0f, 368.0f);
            t85 = *(int *)0xC2A11B8;
            t86 = FUN_0c060586(((((t85 >> 1) << 1) + ((t85 >> 1) << 2)) + 0x1), 0x1);
            t87 = *(int *)0xC2A19E0;
            if ((int)t87 > 0) {
                t88 = *(int *)0xC2A19E0;
                *(unsigned int *)0xC2A19E0 = (t88 - 1);
                return t86;
            }
            t89 = *(int *)0xC2A11B8;
            t90 = SaveBackupData(t89);
            FUN_0c060616(0x1);
            if (t90 != 0) {
                return FUN_0c040c58(t90);
            }
            FUN_0c03bf76();
            FUN_0c03dfc8();
            FUN_0c03b544(0x4);
            t95 = ((int (*)(int))(FUN_0c03b698))(0x0);
            t96 = *(int *)0xC0EF7E0;
            t98 = t96;
            if (t96 == 1) {
                t97 = *(int *)0xC2A121C;
                if (t97 == 2) {
                    *(unsigned int *)0xC2A121C = 0x3;
                }
                t98 = t97;
            }
            return t98;
        }
        *(unsigned int *)0xC0EF7E0 = 0x1;
        t99 = *(int *)0xC2A1208;
        *(unsigned int *)0xC2A1208 = ((t99 & 0xFFFFFFFB) | 0x8);
        t100 = *(int *)0xC0EF7E0;
        if (t100 == 0) {
            return ((int (*)(int, int, int))(FUN_0c03b698))(0x9, t7, 0x4);
        }
        t101 = *(int *)0xC2A1AEC;
        t104 = 0x6;
        t105 = 0x0;
        u106 = 135.0f;
        if (t101 == 0xFFFFFF05) {
            t102 = *(int *)0xC2A11B8;
            t104 = 0x8;
            t105 = ((((t102 << 2) << 2) << 1) + 0xC09F9F0);
            u106 = 191.0f;
        }
        PutVM_Message(0x20, t104, t105, u106, 240.0f);
        t108 = *(int *)0xC2A11B8;
        PutVM_Message(0x20, 0x7, ((((t108 << 2) << 2) << 1) + 0xC09F9F0), 220.0f, 368.0f);
        t110 = *(int *)0xC2A11B8;
        t111 = FUN_0c060586(((((t110 >> 1) << 1) + ((t110 >> 1) << 2)) + 0x1), 0x1);
        t112 = *(int *)0xC2A19E0;
        if ((int)t112 > 0) {
            t113 = *(int *)0xC2A19E0;
            *(unsigned int *)0xC2A19E0 = (t113 - 1);
            return t111;
        }
        t114 = *(int *)0xC2A11B8;
        t115 = SaveBackupData(t114);
        FUN_0c060616(0x1);
        if (t115 != 0) {
            return FUN_0c040c58(t115);
        }
        FUN_0c03bf76();
        FUN_0c03dfc8();
        FUN_0c03b544(0x4);
        t120 = ((int (*)(int))(FUN_0c03b698))(0x0);
        t121 = *(int *)0xC0EF7E0;
        t123 = t121;
        if (t121 == 1) {
            t122 = *(int *)0xC2A121C;
            if (t122 == 2) {
                *(unsigned int *)0xC2A121C = 0x3;
            }
            t123 = t122;
        }
        return t123;
    }
    if (t7 == 0xFFFFFF05) {
        if ((t32 & 0x2) == 0) {
            t124 = *(int *)0xC2A11B8;
            PutVM_Message(0x20, 0x5, ((((t124 << 2) << 2) << 1) + 0xC09F9F0), 118.0f, 240.0f);
            t126 = *(int *)0xC2A11B8;
            return PutVM_Message(0x20, 0x7, ((((t126 << 2) << 2) << 1) + 0xC09F9F0), 220.0f, 368.0f);
        }
        *(unsigned int *)0xC0EF7E0 = 0x1;
        t127 = *(int *)0xC2A1208;
        *(unsigned int *)0xC2A1208 = ((t127 & 0xFFFFFFFB) | 0x8);
        t128 = *(int *)0xC0EF7E0;
        if (t128 == 0) {
            return ((int (*)(int, int, int))(FUN_0c03b698))(0x9, t7, 0x4);
        }
        t129 = *(int *)0xC2A1AEC;
        t132 = 0x6;
        t133 = 0x0;
        u134 = 135.0f;
        if (t129 == 0xFFFFFF05) {
            t130 = *(int *)0xC2A11B8;
            t132 = 0x8;
            t133 = ((((t130 << 2) << 2) << 1) + 0xC09F9F0);
            u134 = 191.0f;
        }
        PutVM_Message(0x20, t132, t133, u134, 240.0f);
        t136 = *(int *)0xC2A11B8;
        PutVM_Message(0x20, 0x7, ((((t136 << 2) << 2) << 1) + 0xC09F9F0), 220.0f, 368.0f);
        t138 = *(int *)0xC2A11B8;
        t139 = FUN_0c060586(((((t138 >> 1) << 1) + ((t138 >> 1) << 2)) + 0x1), 0x1);
        t140 = *(int *)0xC2A19E0;
        if ((int)t140 > 0) {
            t141 = *(int *)0xC2A19E0;
            *(unsigned int *)0xC2A19E0 = (t141 - 1);
            return t139;
        }
        t142 = *(int *)0xC2A11B8;
        t143 = SaveBackupData(t142);
        FUN_0c060616(0x1);
        if (t143 != 0) {
            return FUN_0c040c58(t143);
        }
        FUN_0c03bf76();
        FUN_0c03dfc8();
        FUN_0c03b544(0x4);
        t148 = ((int (*)(int))(FUN_0c03b698))(0x0);
        t149 = *(int *)0xC0EF7E0;
        t151 = t149;
        if (t149 == 1) {
            t150 = *(int *)0xC2A121C;
            if (t150 == 2) {
                *(unsigned int *)0xC2A121C = 0x3;
            }
            t151 = t150;
        }
        return t151;
    }
    *(unsigned int *)0xC0EF7E0 = 0x1;
    t152 = *(int *)0xC2A1208;
    *(unsigned int *)0xC2A1208 = ((t152 & 0xFFFFFFFB) | 0x8);
    t153 = *(int *)0xC0EF7E0;
    if (t153 == 0) {
        return ((int (*)(int, int, int))(FUN_0c03b698))(0x9, t7, 0x4);
    }
    t154 = *(int *)0xC2A1AEC;
    t157 = 0x6;
    t158 = 0x0;
    u159 = 135.0f;
    if (t154 == 0xFFFFFF05) {
        t155 = *(int *)0xC2A11B8;
        t157 = 0x8;
        t158 = ((((t155 << 2) << 2) << 1) + 0xC09F9F0);
        u159 = 191.0f;
    }
    PutVM_Message(0x20, t157, t158, u159, 240.0f);
    t161 = *(int *)0xC2A11B8;
    PutVM_Message(0x20, 0x7, ((((t161 << 2) << 2) << 1) + 0xC09F9F0), 220.0f, 368.0f);
    t163 = *(int *)0xC2A11B8;
    t164 = FUN_0c060586(((((t163 >> 1) << 1) + ((t163 >> 1) << 2)) + 0x1), 0x1);
    t165 = *(int *)0xC2A19E0;
    if ((int)t165 > 0) {
        t166 = *(int *)0xC2A19E0;
        *(unsigned int *)0xC2A19E0 = (t166 - 1);
        return t164;
    }
    t167 = *(int *)0xC2A11B8;
    t168 = SaveBackupData(t167);
    FUN_0c060616(0x1);
    if (t168 != 0) {
        return FUN_0c040c58(t168);
    }
    FUN_0c03bf76();
    FUN_0c03dfc8();
    FUN_0c03b544(0x4);
    t173 = ((int (*)(int))(FUN_0c03b698))(0x0);
    t174 = *(int *)0xC0EF7E0;
    t176 = t174;
    if (t174 == 1) {
        t175 = *(int *)0xC2A121C;
        if (t175 == 2) {
            *(unsigned int *)0xC2A121C = 0x3;
        }
        t176 = t175;
    }
    return t176;
}

int FUN_0c07159c(void)
{
    int t0;
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
    int t18;
    int t19;
    int t22;
    int t20;
    int t21;
    int t88;
    float u28;
    float u29;
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
    float u52;
    float u53;
    int t54;
    float u55;
    float u56;
    float u57;
    float u58;
    float u59;
    float u60;
    int t61;
    int t62;
    int t63;
    int t64;
    int t65;
    int t66;
    float u67;
    float u68;
    float u85;
    float u86;
    int t87;
    float u94;
    float u95;
    float u96;
    float u97;
    float u98;
    float u99;
    int t100;
    float u101;
    float u102;
    float u103;
    float u104;
    float u105;
    float u116;
    float u117;
    float u118;
    float u119;
    float u120;
    float u121;
    float u122;
    float u123;
    float u124;
    float u125;
    float u126;
    float u127;
    int t129;
    int t130;
    int t133;
    int t131;
    int t132;
    float u140;
    float u141;
    float u142;
    int t144;
    int t146;
    int t145;
    int t147;
    int t149;
    int t150;
    int t148;
    int t135;
    int t89;
    float u109;
    float u110;
    float u111;
    int stk[21] = {0};

    t0 = *(int *)0xC2AE364;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    nlPushUnitMatrix();
                    FUN_0c079e70();
                    FUN_0c079d60(0xC13EDA4, (((int)stk + 4) + 0x14));
                    nlPopMatrix(0x1);
                    u5 = *(float *)(((int)stk + 24));
                    *(float *)(((int)stk + 24)) = (u5 + 37.1999969f);
                    u6 = *(float *)(((int)stk + 28));
                    *(float *)(((int)stk + 28)) = (u6 + -23.3999996f);
                    u7 = *(float *)0xC2AE36C;
                    u8 = *(float *)(((((int)stk + 4) + 0x14) + 0x0));
                    u9 = *(float *)0xC2AE374;
                    u10 = *(float *)0xC2AE374;
                    *(float *)0xC2AE374 = (u9 + 0.179999992f * ((u8 - u7) - u10));
                    u11 = *(float *)0xC2AE36C;
                    u12 = *(float *)0xC2AE374;
                    *(float *)0xC2AE36C = (u11 + u12);
                    u13 = *(float *)0xC2AE370;
                    u14 = *(float *)0xC2AE370;
                    u15 = *(float *)(((((int)stk + 4) + 0x18) + 0x0));
                    *(float *)0xC2AE370 = (u14 + 0.25f * (u15 - u13));
                    u16 = *(float *)0xC2AE36C;
                    FUN_0c05322c(u16, (u14 + 0.25f * (u15 - u13)));
                    t18 = *(int *)0xC1EE7D4;
                    t19 = *(int *)0xC1EE7CC;
                    t22 = 0x44;
                    if ((int)t19 <= (int)t18) {
                        t20 = FUN_0c053240(1.0f, 0.329999983f, 0.0f);
                        t21 = *(int *)0xC2AE364;
                        *(unsigned int *)0xC2AE364 = (t21 + 0x1);
                        t22 = t20;
                    }
                    t89 = t22;
                } else {
                    t88 = t0;
                    if (t0 == 4) {
                        nlPushUnitMatrix();
                        FUN_0c079e70();
                        FUN_0c079d60(0xC13EDA4, (((int)stk + 4) + 0x14));
                        nlPopMatrix(0x1);
                        u28 = *(float *)(((int)stk + 24));
                        *(float *)(((int)stk + 24)) = (u28 + 37.1999969f);
                        u29 = *(float *)(((int)stk + 28));
                        *(float *)(((int)stk + 28)) = (u29 + -23.3999996f);
                        u30 = *(float *)0xC2AE36C;
                        u31 = *(float *)(((((int)stk + 4) + 0x14) + 0x0));
                        u32 = *(float *)0xC2AE374;
                        u33 = *(float *)0xC2AE374;
                        *(float *)0xC2AE374 = (u32 + 0.179999992f * ((u31 - u30) - u33));
                        u34 = *(float *)0xC2AE36C;
                        u35 = *(float *)0xC2AE374;
                        *(float *)0xC2AE36C = (u34 + u35);
                        u36 = *(float *)0xC2AE370;
                        u37 = *(float *)0xC2AE370;
                        u38 = *(float *)(((((int)stk + 4) + 0x18) + 0x0));
                        *(float *)0xC2AE370 = (u37 + 0.25f * (u38 - u36));
                        u39 = *(float *)0xC2AE36C;
                        FUN_0c05322c(u39, (u37 + 0.25f * (u38 - u36)));
                        t41 = *(int *)0xC1EE7CC;
                        if ((int)t41 <= 0) {
                            t42 = *(int *)0xC2AE364;
                            *(unsigned int *)0xC2AE364 = (t42 + 0x1);
                        }
                        t43 = *(int *)0xC1EE7CC;
                        if ((int)t43 < (int)0xB4) {
                            t44 = *(int *)0xC0D608C;
                            *(unsigned int *)((((int)stk + 4) + 0x10)) = t44;
                            t45 = *(int *)0xC0D6088;
                            *(unsigned int *)((((int)stk + 4) + 0xC)) = t45;
                            t46 = *(int *)0xC0D6084;
                            *(unsigned int *)((((int)stk + 4) + 0x8)) = t46;
                            t47 = *(int *)0xC0D6080;
                            *(unsigned int *)((((int)stk + 4) + 0x4)) = t47;
                            t48 = *(int *)0xC0D607C;
                            *(unsigned int *)((((int)stk + 4) + 0x0)) = t48;
                            t49 = *(int *)0xC1EE7CC;
                            t50 = (int)((int)t49 % (int)0x1E);
                            t51 = (int)((int)t50 % (int)0x5);
                            u52 = *(float *)((((t51 << 2) + ((int)stk + 4)) + 0x0));
                            *(float *)0xC2AE37C = (u52 + 0.5f);
                            u53 = *(float *)((((t51 << 2) + ((int)stk + 4)) + 0x0));
                            *(float *)0xC2AE380 = (u53 + 0.5f);
                        } else {
                            t54 = (int)((int)t43 % (int)0x3C);
                            if ((int)t54 < (int)0x1E) {
                                u55 = *(float *)0xC2AE37C;
                                *(float *)0xC2AE37C = (u55 + 0.00999999978f);
                                u56 = *(float *)0xC2AE380;
                                *(float *)0xC2AE380 = (u56 + 0.00999999978f);
                            } else {
                                if ((int)t54 < (int)0x2D) {
                                    u57 = *(float *)0xC2AE37C;
                                    u58 = *(float *)0xC2AE37C;
                                    *(float *)0xC2AE37C = (u58 - ((u57 + -0.5f) * 0.00999999978f));
                                    u59 = *(float *)0xC2AE380;
                                    u60 = *(float *)0xC2AE380;
                                    *(float *)0xC2AE380 = (u60 - ((u59 + -0.5f) * 0.00999999978f));
                                } else {
                                    t61 = *(int *)0xC0D60A0;
                                    *(unsigned int *)((((int)stk + 4) + 0x10)) = t61;
                                    t62 = *(int *)0xC0D609C;
                                    *(unsigned int *)((((int)stk + 4) + 0xC)) = t62;
                                    t63 = *(int *)0xC0D6098;
                                    *(unsigned int *)((((int)stk + 4) + 0x8)) = t63;
                                    t64 = *(int *)0xC0D6094;
                                    *(unsigned int *)((((int)stk + 4) + 0x4)) = t64;
                                    t65 = *(int *)0xC0D6090;
                                    *(unsigned int *)((((int)stk + 4) + 0x0)) = t65;
                                    t66 = (int)((int)t54 % (int)0x5);
                                    u67 = *(float *)((((t66 << 2) + ((int)stk + 4)) + 0x0));
                                    *(float *)0xC2AE37C = (u67 + 0.5f);
                                    u68 = *(float *)((((t66 << 2) + ((int)stk + 4)) + 0x0));
                                    *(float *)0xC2AE380 = (u68 + 0.5f);
                                }
                            }
                        }
                        u85 = *(float *)0xC2AE380;
                        u86 = *(float *)0xC2AE37C;
                        t87 = FUN_0c053236(u86, u85);
                        t88 = t87;
                    }
                    t89 = t88;
                }
                t135 = t89;
            } else {
                nlPushUnitMatrix();
                FUN_0c079e70();
                FUN_0c079d60(0xC13EDA4, (((int)stk + 4) + 0x14));
                nlPopMatrix(0x1);
                u94 = *(float *)(((int)stk + 24));
                *(float *)(((int)stk + 24)) = (u94 + 37.1999969f);
                u95 = *(float *)(((int)stk + 28));
                *(float *)(((int)stk + 28)) = (u95 + -23.3999996f);
                u96 = *(float *)0xC2AE36C;
                u97 = *(float *)(((int)stk + 24));
                u98 = *(float *)0xC2AE370;
                u99 = *(float *)(((int)stk + 28));
                if (5.0f > _builtin_sqrtf((((u99 - u98) * (u99 - u98)) + (u97 - u96) * (u97 - u96)))) {
                    *(float *)0xC2AE378 = 1.0f;
                    *(float *)0xC2AE374 = 1.0f;
                    t100 = *(int *)0xC2AE364;
                    *(unsigned int *)0xC2AE364 = (t100 + 0x1);
                    u109 = (u97 - u96);
                    u110 = (u99 - u98);
                    u111 = _builtin_sqrtf((((u99 - u98) * (u99 - u98)) + (u97 - u96) * (u97 - u96)));
                } else {
                    u101 = *(float *)0xC2AE384;
                    u102 = *(float *)0xC2AE36C;
                    *(float *)0xC2AE36C = (u102 + ((u101 * ((u99 - u98) / _builtin_sqrtf((((u99 - u98) * (u99 - u98)) + (u97 - u96) * (u97 - u96))))) + 0.899999976f * ((u97 - u96) / _builtin_sqrtf((((u99 - u98) * (u99 - u98)) + (u97 - u96) * (u97 - u96))))));
                    u103 = *(float *)0xC2AE384;
                    u104 = *(float *)0xC2AE370;
                    *(float *)0xC2AE370 = (u104 + ((((u99 - u98) / _builtin_sqrtf((((u99 - u98) * (u99 - u98)) + (u97 - u96) * (u97 - u96)))) * 0.899999976f) - (u103 * ((u97 - u96) / _builtin_sqrtf((((u99 - u98) * (u99 - u98)) + (u97 - u96) * (u97 - u96)))))));
                    u105 = *(float *)0xC2AE384;
                    *(float *)0xC2AE384 = (u105 * 0.939999998f);
                    u109 = ((u97 - u96) / _builtin_sqrtf((((u99 - u98) * (u99 - u98)) + (u97 - u96) * (u97 - u96))));
                    u110 = ((((u99 - u98) / _builtin_sqrtf((((u99 - u98) * (u99 - u98)) + (u97 - u96) * (u97 - u96)))) * 0.899999976f) - (u103 * ((u97 - u96) / _builtin_sqrtf((((u99 - u98) * (u99 - u98)) + (u97 - u96) * (u97 - u96))))));
                    u111 = 0.899999976f;
                }
                nlPushUnitMatrix();
                FUN_0c079e70();
                FUN_0c079d60(0xC13EDA4, (((int)stk + 4) + 0x14));
                nlPopMatrix(0x1);
                u116 = *(float *)(((int)stk + 24));
                *(float *)(((int)stk + 24)) = (u116 + 37.1999969f);
                u117 = *(float *)(((int)stk + 28));
                *(float *)(((int)stk + 28)) = (u117 + -23.3999996f);
                u118 = *(float *)0xC2AE36C;
                u119 = *(float *)(((((int)stk + 4) + 0x14) + 0x0));
                u120 = *(float *)0xC2AE374;
                u121 = *(float *)0xC2AE374;
                *(float *)0xC2AE374 = (u120 + 0.179999992f * ((u119 - u118) - u121));
                u122 = *(float *)0xC2AE36C;
                u123 = *(float *)0xC2AE374;
                *(float *)0xC2AE36C = (u122 + u123);
                u124 = *(float *)0xC2AE370;
                u125 = *(float *)0xC2AE370;
                u126 = *(float *)(((((int)stk + 4) + 0x18) + 0x0));
                *(float *)0xC2AE370 = (u125 + 0.25f * (u126 - u124));
                u127 = *(float *)0xC2AE36C;
                FUN_0c05322c(u127, (u125 + 0.25f * (u126 - u124)));
                t129 = *(int *)0xC1EE7D4;
                t130 = *(int *)0xC1EE7CC;
                t133 = 0x44;
                if ((int)t130 <= (int)t129) {
                    t131 = FUN_0c053240(1.0f, 0.329999983f, 0.0f);
                    t132 = *(int *)0xC2AE364;
                    *(unsigned int *)0xC2AE364 = (t132 + 0x1);
                    t133 = t131;
                }
                t135 = t133;
            }
            t148 = t135;
        } else {
            nlPushUnitMatrix();
            FUN_0c079e70();
            FUN_0c079d60(0xC13EDB0, (((int)stk + 4) + 0x14));
            nlPopMatrix(0x1);
            u140 = *(float *)(((int)stk + 24));
            *(float *)0xC2AE36C = u140;
            u141 = *(float *)(((int)stk + 28));
            *(float *)0xC2AE370 = u141;
            u142 = *(float *)0xC2AE36C;
            FUN_0c05322c(u142, u141);
            t144 = *(int *)0xC1EE210;
            t146 = t144;
            if (t144 != 2) {
                t145 = FUN_0c05318a(0xC1EE7CC);
                t146 = t145;
            }
            t147 = *(int *)0xC2AE364;
            *(unsigned int *)0xC2AE364 = (t147 + 0x1);
            t148 = t146;
        }
        t150 = t148;
    } else {
        t149 = *(int *)0xC2AE364;
        *(unsigned int *)0xC2AE364 = (t149 + 0x1);
        t150 = t0;
    }
    return t150;
}

int FUN_0c03fd2c(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t7;
    int t9;
    int t10;
    int t11;
    int t13;
    int t14;
    int t15;
    int t20;
    int t21;
    int t23;
    int t24;
    int t25;
    int t26;
    int t31;
    int t32;
    int t33;
    int t35;
    int t37;
    int t38;
    int t39;
    int t41;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t52;
    int t53;
    int t54;
    int t57;
    int t58;
    int t59;
    int t60;
    int t72;
    int t73;
    int t74;
    int t75;
    int t76;
    int t78;
    int t79;
    int t81;
    int t82;
    int t83;
    int t85;
    int t86;
    int t88;
    int t89;
    int t90;
    int t92;
    int t95;
    int t98;

    t0 = menuOpenStep();
    if (t0 == 1) {
        *(unsigned int *)0xC2A1230 = 0x0;
    }
    t1 = *(int *)0xC2A11C4;
    t2 = FUN_0c040cea(t1);
    t3 = *(signed char *)0xC28A4F6;
    t4 = (t2 << 2);
    if (t3 == 0) {
        t4 = 0x3FFFE;
    }
    menuCursorBox(0x0, 0x13, t4);
    menuPutFrame();
    t7 = *(int *)0xC2A1AD8;
    menuPutSprites(0xC0A0770, 0xC2A1A84, (t7 + 0x8), 0x18);
    t9 = *(int *)0xC2A11D8;
    t10 = *(int *)0xC2A1AD8;
    t11 = *(int *)((((t9 << 2) + 0xC2A11DC) + 0x0));
    if (t11 != 0) {
        if (t11 == 1) {
            menuPutHelpBar(0x2, (float)(-t10), 416.0f);
        } else {
            t13 = *(int *)0xC2A11D8;
            t14 = *(int *)((0xC2A11DC + (t13 << 2)));
            t15 = 0x1;
            if (t14 == 18) {
                t15 = 0x0;
            }
            menuPutHelpBar(t15, (float)(-t10), 416.0f);
        }
    } else {
        menuPutHelpBar(0x2, (float)(-t10), 416.0f);
    }
    t20 = *(int *)0xC2A11D8;
    t21 = *(int *)((((t20 << 2) + 0xC2A11DC) + 0x0));
    putLevelCTFontAssist(0x1017, 0xC09E658, 0x13, t21, t4);
    t23 = *(int *)0xC2A11D8;
    t24 = *(int *)((0xC2A11DC + (t23 << 2)));
    if (t24 != 1) {
        t25 = *(int *)0xC2A11D8;
        t26 = *(int *)((((t25 << 2) + 0xC2A11DC) + 0x0));
        if ((int)t26 < (int)0x2) {
            FUN_0c05b7f0(0x1);
            FUN_0c05b7f0(0x2);
        } else {
            if ((int)t26 > (int)0x11) {
                FUN_0c05b7f0(0x1);
                FUN_0c05b7f0(0x2);
            } else {
                t31 = *(int *)0xC2A1ADC;
                t32 = PutWindow(0x1, (float)(t31 + 0x138), 112.0f);
                if (t32 == 1) {
                    t33 = *(int *)0xC2A1ADC;
                    putString(0x23, 0xC0A2130, (float)(t33 + 0x190), 232.0f, 1.0f);
                    t35 = *(int *)0xC2A1ADC;
                    putString(0x20, 0xC0A2098, (float)(t35 + 0x1FE), 232.0f, 1.0f);
                    t37 = *(int *)0xC2A1ADC;
                    t38 = *(int *)0xC2A11D8;
                    t39 = *(int *)((((t38 << 2) + 0xC2A11DC) + 0x0));
                    putString(0x4023, ((((t39 << 2) << 2) << 1) + 0xC09FAF0), (float)(t37 + 0x148), 120.0f, 1.0f);
                    t41 = *(int *)0xC2A1ADC;
                    putString(0x23, 0xC0A213C, (float)(0x148 + t41), 146.0f, 1.0f);
                    t43 = *(int *)0xC2A1ADC;
                    t44 = *(int *)0xC2A11D8;
                    t45 = *(int *)((0xC2A11DC + (t44 << 2)));
                    t46 = FUN_0c041016(0x1);
                    t47 = *(int *)(((0xC0EF6A8 + (((t45 - 2) << 2) << 1)) + (t46 << 2)));
                    menuPutSprites(t47, 0xC2A1A84, (t43 + 0x158), 0xB2);
                }
                t52 = *(int *)0xC2A11EC;
                if ((t52 & 4) != 0) {
                    t53 = *(int *)0xC2A1214;
                    if (t53 == 0) {
                        t54 = *(int *)0xC2A11CC;
                        if ((t54 & 1) != 0) {
                            FUN_0c040b00();
                        }
                        t57 = *(int *)0xC2A11CC;
                        if ((t57 & 2) != 0) {
                            t58 = *(int *)0xC2A11D8;
                            t59 = *(int *)(((t58 << 2) + 0xC2A11DC));
                            t60 = *(int *)((((t59 + 0x2) << 2) + 0xC0A1FC8));
                            *(unsigned int *)0xC0EF550 = t60;
                            Voice_Request(0xC0EF550, 0x0, 0x7F, 0x0);
                        }
                    }
                }
            }
        }
    } else {
        FUN_0c05b7f0(0x2);
        t72 = *(int *)0xC2A1ADC;
        t73 = PutWindow(0x1, (float)(t72 + 0x138), 112.0f);
        if (t73 == 1) {
            t74 = *(int *)0xC2A1ADC;
            t75 = *(int *)0xC2A11D8;
            t76 = *(int *)((((t75 << 2) + 0xC2A11DC) + 0x0));
            putString(0x4023, ((((t76 << 2) << 2) << 1) + 0xC09FAF0), (float)(t74 + 0x148), 120.0f, 1.0f);
            t78 = *(int *)0xC2A1ADC;
            t79 = *(int *)0xC2A1240;
            putString(0x4020, ((short)((short)(0x3 & t79) * (short)0x2C) + 0xC09E504), (float)(0x148 + t78), 140.0f, 1.0f);
            t81 = *(int *)0xC2A1240;
            t82 = *(int *)0xC2A1ADC;
            t83 = *(int *)((((t81 & 0x3) << 2) + 0xC0EF648));
            menuPutSprites(t83, 0xC2A1A84, (t82 + 0x23C), 0xC8);
            t85 = 0x0;
            do {
                t86 = *(int *)0xC2A1ADC;
                putString(0x4020, (0xC09FEB0 + (((t85 << 2) << 2) << 1)), (float)(t86 + 0x158), (float)(((((t85 << 2) << 1) + t85) << 1) + 0x9E), 1.0f);
                t88 = *(int *)0xC2A1ADC;
                if (t85 == 3) {
                    t89 = *(int *)0xC2A1240;
                    if ((t89 & 0x3) == 2) {
                        t90 = *(signed char *)0xC28A4E8;
                        if (((unsigned char)t90 & 32) == 0) {
                            putString(0x4020, 0xC09FE70, (float)(t88 + 0x1BC), (float)(((((t85 << 2) << 1) + t85) << 1) + 0x9E), 1.0f);
                        } else {
                            t92 = *(int *)0xC2A1240;
                            putString(0x4020, (((short)(((((((0x3 & t92) + 0x1) << 2) + ((0x3 & t92) + 0x1)) << 2) << 2) << 1) + 0xC09FEB0) + (((t85 << 2) << 2) << 1)), (float)(t88 + 0x1BC), (float)(((((t85 << 2) << 1) + t85) << 1) + 0x9E), 1.0f);
                        }
                    } else {
                        t95 = *(int *)0xC2A1240;
                        putString(0x4020, (((short)(((((((0x3 & t95) + 0x1) << 2) + ((0x3 & t95) + 0x1)) << 2) << 2) << 1) + 0xC09FEB0) + (((t85 << 2) << 2) << 1)), (float)(t88 + 0x1BC), (float)(((((t85 << 2) << 1) + t85) << 1) + 0x9E), 1.0f);
                    }
                } else {
                    t98 = *(int *)0xC2A1240;
                    putString(0x4020, (((short)(((((((0x3 & t98) + 0x1) << 2) + ((0x3 & t98) + 0x1)) << 2) << 2) << 1) + 0xC09FEB0) + (((t85 << 2) << 2) << 1)), (float)(t88 + 0x1BC), (float)(((((t85 << 2) << 1) + t85) << 1) + 0x9E), 1.0f);
                }
                t85 = (t85 + 0x1);
            } while ((int)t85 < (int)0x5);
        }
    }
    return menuEnterStep();
}

int psgFrameState4(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t7;
    float u11;
    int t12;
    int t14;
    float u16;
    int t17;
    int t18;
    float u19;
    int t21;
    int t25;
    float u26;
    int t28;
    int t32;
    float u33;
    int t35;
    int t39;
    float u40;
    int t42;
    int t46;
    float u47;
    int t49;
    int t53;
    float u54;
    int t56;
    float u60;
    float u61;
    int t63;
    int t67;
    int t70;
    float u75;
    float u76;
    int t78;
    int t82;
    int t85;
    int t90;
    float u91;
    int t93;
    int t97;
    float u98;
    int t100;
    int t104;
    int t105;
    int t106;
    int t107;
    int t108;
    int t109;
    int t110;
    float u111;
    int t116;
    int t117;
    int t118;
    int t119;
    int t120;
    int t121;
    int t122;
    float u123;
    int t128;
    float u129;
    int t130;
    float u131;
    int t134;
    float u135;
    int t136;
    float u137;
    int t140;
    float u141;
    int t144;
    float u145;
    int t148;
    float u149;
    int t152;
    float u153;
    int t156;
    float u157;
    int t158;
    float u159;
    float u163;
    int t164;
    float u165;
    float u169;
    int t170;
    float u171;
    float u175;
    int t176;
    float u177;
    float u182;
    int t183;
    float u184;
    int t187;
    float u188;
    int t191;
    float u192;
    int t195;
    float u196;
    int t199;
    float u200;
    float u205;
    int t206;
    float u207;
    float u211;
    int t212;
    float u213;
    float u217;
    int t218;
    float u219;
    float u223;
    int t224;
    float u225;
    float u229;
    int t230;
    float u231;
    int t241;
    float u242;
    int t243;
    int t244;
    int t246;
    int t248;
    float u252;
    float u253;
    int t254;
    int t255;
    int t257;
    int t258;
    int t259;
    int t262;
    int t263;
    int t264;
    int t265;
    float u266;
    int t267;
    int t268;
    int t273;
    int t275;
    int t278;
    int t280;
    int t283;
    int t284;
    int t285;
    int t286;
    int t287;
    float t288;
    int t291;
    float u292;
    int t293;
    float u295;
    float u296;
    int t297;
    int t298;
    int t299;
    int t300;
    int t305;
    int t306;
    int t307;
    int t308;
    int t309;
    int t310;
    int t311;
    int t312;
    int t320;
    int t322;
    int t321;
    int t331;
    int t333;
    float u336;
    int t337;
    int t339;
    float u341;
    int t342;
    int t343;
    float u344;
    int t345;
    int t346;
    float u349;
    float u350;
    int t351;
    int t353;
    int t354;
    int t355;
    int t356;
    int t358;
    int t362;
    float u364;
    int t369;
    int t372;
    float u373;
    int t374;
    int t375;
    int t376;
    int t377;
    int t378;
    int t382;
    int t384;
    int t386;
    float u390;
    float u391;
    int t392;
    int t394;
    int t395;
    int t396;
    int t398;
    int t399;
    int t402;
    float u404;
    int t410;
    int t411;
    int t412;
    int t417;
    float u418;
    int t419;
    int t420;
    int t421;
    int t422;
    int t423;
    int t427;
    int t429;
    int t431;
    float u435;
    float u436;
    int t437;
    int t439;
    int t440;
    int t441;
    int t443;
    int t444;
    int t447;
    float u449;
    int t455;
    int t456;
    int t457;
    int t462;
    float u463;
    int t464;
    int t465;
    int t466;
    int t467;
    int t468;
    int t472;
    int t474;
    int t476;
    float u480;
    float u481;
    int t482;
    int t484;
    int t485;
    int t486;
    int t488;
    int t489;
    int t492;
    float u494;
    int t500;
    int t501;
    int t502;
    int t507;
    float u508;
    int t509;
    int t510;
    int t511;
    int t512;
    int t513;
    int t517;
    int t519;
    int t521;
    float u525;
    float u526;
    int t527;
    int t529;
    int t530;
    int t531;
    int t533;
    int t534;
    int t537;
    float u539;
    int t545;
    int t546;
    int t547;
    int t552;
    float u553;
    int t554;
    int t555;
    int t556;
    int t557;
    int t558;
    int t562;
    int t564;
    int t566;
    float u570;
    float u571;
    int t572;
    int t574;
    int t575;
    int t576;
    int t578;
    int t579;
    int t582;
    float u584;
    int t590;
    int t591;
    int t592;
    int t597;
    float u598;
    int t599;
    int t600;
    int t601;
    int t602;
    int t603;
    int t607;
    int t609;
    int t611;
    float u615;
    float u616;
    int t617;
    int t619;
    int t620;
    int t621;
    int t623;
    int t624;
    int t627;
    float u629;
    int t635;
    int t636;
    int t637;
    int t642;
    float u643;
    int t644;
    int t645;
    int t646;
    int t647;
    int t648;
    int t652;
    int t654;
    int t656;
    float u660;
    float u661;
    int t662;
    int t664;
    int t665;
    int t666;
    int t668;
    int t669;
    int t672;
    float u674;
    int t680;
    int t681;
    int t682;
    int t687;
    float u688;
    int t689;
    int t690;
    int t691;
    int t692;
    int t693;
    int t697;
    int t699;
    int t701;
    float u705;
    float u706;
    int t707;
    int t709;
    int t710;
    int t711;
    int t713;
    int t714;
    int t717;
    float u719;
    int t725;
    int t726;
    int t727;
    int t734;
    int t735;
    int t326;
    int t324;
    int stk[37] = {0};

    t0 = *(int *)0xC0D5FA0;
    *(unsigned int *)(((((int)stk + 16) + 0x48) + 0x8)) = t0;
    t1 = *(int *)0xC0D5F9C;
    *(unsigned int *)(((((int)stk + 16) + 0x48) + 0x4)) = t1;
    t2 = *(int *)0xC0D5F98;
    *(unsigned int *)(((((int)stk + 16) + 0x48) + 0x0)) = t2;
    t3 = *(signed char *)((a4 + 0x148));
    if ((t3 & 128) == 0) {
        t4 = *(int *)0xC13EEE4;
        *(unsigned int *)0xC13EEE4 = (t4 + 0x1);
    }
    t7 = *(int *)((a4 + 0x24));
    if (t7 != 0) {
        if (t7 == 1) {
            nlPushMatrix(0x0);
            psgPutShadow(a4);
            FUN_0c0713d8(a4);
            u11 = *(float *)((a4 + 0x38));
            t12 = *(int *)((a4 + 0x34));
            FcvStoreBuffer(t12, (a4 + 0x3C), u11);
            t14 = *(int *)((a4 + 0x0));
            FcvPlayBuffer((a4 + 0x3C), t14);
            u16 = *(float *)((a4 + 0x38));
            *(float *)((a4 + 0x38)) = (u16 + 1.0f);
            t17 = *(int *)((a4 + 0x34));
            if (t17 != 0xC95D7C4) {
                if (t17 != 0xC960308) {
                    if (t17 != 0xC9A23C8) {
                        if (t17 != 0xC9A3E8C) {
                            if (t17 != 0xC9BBD68) {
                                if (t17 != 0xC9BE3CC) {
                                    if (t17 != 0xC9C0A30) {
                                        if (t17 != 0xC9C20A4) {
                                            if (t17 != 0xC9C3718) {
                                                if (t17 == 0xC9C51AC) {
                                                    t18 = *(signed char *)((a4 + 0x14A));
                                                    if ((t18 & 2) == 0) {
                                                        u19 = *(float *)((a4 + 0x38));
                                                        if (!(29.0f > u19)) {
                                                            Sound_Request(0x3A9, 0x2);
                                                            t21 = *(signed char *)(((0x14A + a4) + 0x0));
                                                            *(unsigned char *)(((0x14A + a4) + 0x0)) = (t21 | 0x2);
                                                        }
                                                    }
                                                }
                                            } else {
                                                t25 = *(signed char *)((a4 + 0x14A));
                                                if ((t25 & 2) == 0) {
                                                    u26 = *(float *)((a4 + 0x38));
                                                    if (!(29.0f > u26)) {
                                                        Sound_Request(0x3A9, 0x2);
                                                        t28 = *(signed char *)(((0x14A + a4) + 0x0));
                                                        *(unsigned char *)(((0x14A + a4) + 0x0)) = (t28 | 0x2);
                                                    }
                                                }
                                            }
                                        } else {
                                            t32 = *(signed char *)((a4 + 0x14A));
                                            if ((t32 & 2) == 0) {
                                                u33 = *(float *)((a4 + 0x38));
                                                if (!(36.0f > u33)) {
                                                    Sound_Request(0x3A9, 0x2);
                                                    t35 = *(signed char *)(((0x14A + a4) + 0x0));
                                                    *(unsigned char *)(((0x14A + a4) + 0x0)) = (t35 | 0x2);
                                                }
                                            }
                                        }
                                    } else {
                                        t39 = *(signed char *)((a4 + 0x14A));
                                        if ((t39 & 2) == 0) {
                                            u40 = *(float *)((a4 + 0x38));
                                            if (!(36.0f > u40)) {
                                                Sound_Request(0x3A9, 0x2);
                                                t42 = *(signed char *)(((0x14A + a4) + 0x0));
                                                *(unsigned char *)(((0x14A + a4) + 0x0)) = (t42 | 0x2);
                                            }
                                        }
                                    }
                                } else {
                                    t46 = *(signed char *)((a4 + 0x14A));
                                    if ((t46 & 2) == 0) {
                                        u47 = *(float *)((a4 + 0x38));
                                        if (!(36.0f > u47)) {
                                            Sound_Request(0x3A9, 0x2);
                                            t49 = *(signed char *)(((0x14A + a4) + 0x0));
                                            *(unsigned char *)(((0x14A + a4) + 0x0)) = (t49 | 0x2);
                                        }
                                    }
                                }
                            } else {
                                t53 = *(signed char *)((a4 + 0x14A));
                                if ((t53 & 2) == 0) {
                                    u54 = *(float *)((a4 + 0x38));
                                    if (!(36.0f > u54)) {
                                        Sound_Request(0x3A9, 0x2);
                                        t56 = *(signed char *)(((0x14A + a4) + 0x0));
                                        *(unsigned char *)(((0x14A + a4) + 0x0)) = (t56 | 0x2);
                                    }
                                }
                            }
                        } else {
                            u60 = *(float *)((a4 + 0x38));
                            u61 = *(float *)((a4 + 0x120));
                            if (!(((-(u61 * 0.5f)) + 66.0f) > u60)) {
                                if (!(((-(u61 * 0.5f)) + 66.0f) > u60)) {
                                    if (!(((-(u61 * 0.5f)) + 90.0f) > u60)) {
                                        if (((-(u61 * 0.5f)) + 90.0f) > u60) {
                                            Sound_Request(0x9A9, 0x2);
                                            t63 = *(signed char *)(((0x14A + a4) + 0x0));
                                            *(unsigned char *)(((0x14A + a4) + 0x0)) = (t63 | 0x2);
                                        }
                                    }
                                } else {
                                    Sound_Request(0x9A9, 0x2);
                                    t67 = *(signed char *)(((0x14A + a4) + 0x0));
                                    *(unsigned char *)(((0x14A + a4) + 0x0)) = (t67 | 0x2);
                                }
                            } else {
                                if (!(((-(u61 * 0.5f)) + 90.0f) > u60)) {
                                    if (((-(u61 * 0.5f)) + 90.0f) > u60) {
                                        Sound_Request(0x9A9, 0x2);
                                        t70 = *(signed char *)(((0x14A + a4) + 0x0));
                                        *(unsigned char *)(((0x14A + a4) + 0x0)) = (t70 | 0x2);
                                    }
                                }
                            }
                        }
                    } else {
                        u75 = *(float *)((a4 + 0x38));
                        u76 = *(float *)((a4 + 0x120));
                        if (!(((-(u76 * 0.5f)) + 66.0f) > u75)) {
                            if (!(((-(u76 * 0.5f)) + 66.0f) > u75)) {
                                if (!(((-(u76 * 0.5f)) + 90.0f) > u75)) {
                                    if (((-(u76 * 0.5f)) + 90.0f) > u75) {
                                        Sound_Request(0x9A9, 0x2);
                                        t78 = *(signed char *)(((0x14A + a4) + 0x0));
                                        *(unsigned char *)(((0x14A + a4) + 0x0)) = (t78 | 0x2);
                                    }
                                }
                            } else {
                                Sound_Request(0x9A9, 0x2);
                                t82 = *(signed char *)(((0x14A + a4) + 0x0));
                                *(unsigned char *)(((0x14A + a4) + 0x0)) = (t82 | 0x2);
                            }
                        } else {
                            if (!(((-(u76 * 0.5f)) + 90.0f) > u75)) {
                                if (((-(u76 * 0.5f)) + 90.0f) > u75) {
                                    Sound_Request(0x9A9, 0x2);
                                    t85 = *(signed char *)(((0x14A + a4) + 0x0));
                                    *(unsigned char *)(((0x14A + a4) + 0x0)) = (t85 | 0x2);
                                }
                            }
                        }
                    }
                } else {
                    t90 = *(signed char *)((a4 + 0x14A));
                    if ((t90 & 2) == 0) {
                        u91 = *(float *)((a4 + 0x38));
                        if (!(57.0f > u91)) {
                            Sound_Request(0x9A9, 0x2);
                            t93 = *(signed char *)(((0x14A + a4) + 0x0));
                            *(unsigned char *)(((0x14A + a4) + 0x0)) = (t93 | 0x2);
                        }
                    }
                }
            } else {
                t97 = *(signed char *)((a4 + 0x14A));
                if ((t97 & 2) == 0) {
                    u98 = *(float *)((a4 + 0x38));
                    if (!(57.0f > u98)) {
                        Sound_Request(0x9A9, 0x2);
                        t100 = *(signed char *)(((0x14A + a4) + 0x0));
                        *(unsigned char *)(((0x14A + a4) + 0x0)) = (t100 | 0x2);
                    }
                }
            }
            t104 = *(int *)((a4 + 0x34));
            if (t104 == 0xC9891B0) {
                t105 = *(int *)0xC0D5FB8;
                *(unsigned int *)(((((int)stk + 16) + 0x18) + 0x14)) = t105;
                t106 = *(int *)0xC0D5FB4;
                *(unsigned int *)(((((int)stk + 16) + 0x18) + 0x10)) = t106;
                t107 = *(int *)0xC0D5FB0;
                *(unsigned int *)(((((int)stk + 16) + 0x18) + 0xC)) = t107;
                t108 = *(int *)0xC0D5FAC;
                *(unsigned int *)(((((int)stk + 16) + 0x18) + 0x8)) = t108;
                t109 = *(int *)0xC0D5FA8;
                *(unsigned int *)(((((int)stk + 16) + 0x18) + 0x4)) = t109;
                t110 = *(int *)0xC0D5FA4;
                *(unsigned int *)(((((int)stk + 16) + 0x18) + 0x0)) = t110;
                u111 = *(float *)((a4 + 0x38));
                if ((int)u111 == 69) {
                    FUN_0c0771b0((((int)stk + 16) + 0x18), (((int)stk + 16) + 0xC));
                    FUN_0c077210(((((int)stk + 16) + 0x18) + 0xC), ((int)stk + 16));
                    SetEffect((((int)stk + 16) + 0xC), ((int)stk + 16), 0x2);
                }
            } else {
                t116 = *(int *)((a4 + 0x34));
                if (t116 == 0xC98B054) {
                    t117 = *(int *)0xC0D5FD0;
                    *(unsigned int *)(((((int)stk + 16) + 0x18) + 0x14)) = t117;
                    t118 = *(int *)0xC0D5FCC;
                    *(unsigned int *)(((((int)stk + 16) + 0x18) + 0x10)) = t118;
                    t119 = *(int *)0xC0D5FC8;
                    *(unsigned int *)(((((int)stk + 16) + 0x18) + 0xC)) = t119;
                    t120 = *(int *)0xC0D5FC4;
                    *(unsigned int *)(((((int)stk + 16) + 0x18) + 0x8)) = t120;
                    t121 = *(int *)0xC0D5FC0;
                    *(unsigned int *)(((((int)stk + 16) + 0x18) + 0x4)) = t121;
                    t122 = *(int *)0xC0D5FBC;
                    *(unsigned int *)(((((int)stk + 16) + 0x18) + 0x0)) = t122;
                    u123 = *(float *)((a4 + 0x38));
                    if ((int)u123 == 69) {
                        FUN_0c0771b0((((int)stk + 16) + 0x18), (((int)stk + 16) + 0xC));
                        FUN_0c077210(((((int)stk + 16) + 0x18) + 0xC), ((int)stk + 16));
                        SetEffect((((int)stk + 16) + 0xC), ((int)stk + 16), 0x2);
                    }
                } else {
                    t128 = *(int *)((a4 + 0x34));
                    if (t128 != 0xC98CEF8) {
                        if (t128 != 0xC98E9AC) {
                            if (t128 != 0xC990460) {
                                if (t128 != 0xC992634) {
                                    if (t128 != 0xC998E20) {
                                        if (t128 == 0xC99AD04) {
                                            u129 = *(float *)((a4 + 0x38));
                                            if ((int)u129 == 48) {
                                                t130 = *(signed char *)((a4 + 0x14B));
                                                u131 = 1.0f;
                                                if ((t130 & 4) != 0) {
                                                    u131 = 0.0f;
                                                }
                                                FUN_0c0211e0(u131, 0.75f, 10.0f);
                                            }
                                        } else {
                                            t134 = *(int *)((a4 + 0x34));
                                            if (t134 != 0xC9944D8) {
                                                if (t134 == 0xC99697C) {
                                                    u135 = *(float *)((a4 + 0x38));
                                                    if ((int)u135 != 10) {
                                                        if ((int)u135 != 20) {
                                                            if ((int)u135 != 30) {
                                                                if ((int)u135 != 40) {
                                                                    if ((int)u135 == 56) {
                                                                        t136 = *(signed char *)((a4 + 0x14B));
                                                                        u137 = 1.0f;
                                                                        if ((t136 & 4) != 0) {
                                                                            u137 = 0.0f;
                                                                        }
                                                                        FUN_0c0211e0(u137, 0.75f, 30.0f);
                                                                    }
                                                                } else {
                                                                    t140 = *(signed char *)((a4 + 0x14B));
                                                                    u141 = 1.0f;
                                                                    if ((t140 & 4) != 0) {
                                                                        u141 = 0.0f;
                                                                    }
                                                                    FUN_0c0211e0(u141, 0.75f, 10.0f);
                                                                }
                                                            } else {
                                                                t144 = *(signed char *)((a4 + 0x14B));
                                                                u145 = 1.0f;
                                                                if ((t144 & 4) != 0) {
                                                                    u145 = 0.0f;
                                                                }
                                                                FUN_0c0211e0(u145, 0.75f, 10.0f);
                                                            }
                                                        } else {
                                                            t148 = *(signed char *)((a4 + 0x14B));
                                                            u149 = 1.0f;
                                                            if ((t148 & 4) != 0) {
                                                                u149 = 0.0f;
                                                            }
                                                            FUN_0c0211e0(u149, 0.75f, 10.0f);
                                                        }
                                                    } else {
                                                        t152 = *(signed char *)((a4 + 0x14B));
                                                        u153 = 1.0f;
                                                        if ((t152 & 4) != 0) {
                                                            u153 = 0.0f;
                                                        }
                                                        FUN_0c0211e0(u153, 0.75f, 10.0f);
                                                    }
                                                } else {
                                                    t156 = *(int *)((a4 + 0x34));
                                                    if (t156 != 0xC9C0A30) {
                                                        if (t156 != 0xC9C20A4) {
                                                            if (t156 != 0xC9BBD68) {
                                                                if (t156 == 0xC9BE3CC) {
                                                                    u157 = *(float *)((a4 + 0x38));
                                                                    if ((int)u157 == 36) {
                                                                        t158 = *(signed char *)((a4 + 0x14B));
                                                                        u159 = 1.0f;
                                                                        if ((t158 & 4) != 0) {
                                                                            u159 = 0.0f;
                                                                        }
                                                                        FUN_0c0211e0(u159, 0.75f, 30.0f);
                                                                    }
                                                                }
                                                            } else {
                                                                u163 = *(float *)((a4 + 0x38));
                                                                if ((int)u163 == 36) {
                                                                    t164 = *(signed char *)((a4 + 0x14B));
                                                                    u165 = 1.0f;
                                                                    if ((t164 & 4) != 0) {
                                                                        u165 = 0.0f;
                                                                    }
                                                                    FUN_0c0211e0(u165, 0.75f, 30.0f);
                                                                }
                                                            }
                                                        } else {
                                                            u169 = *(float *)((a4 + 0x38));
                                                            if ((int)u169 == 36) {
                                                                t170 = *(signed char *)((a4 + 0x14B));
                                                                u171 = 1.0f;
                                                                if ((t170 & 4) != 0) {
                                                                    u171 = 0.0f;
                                                                }
                                                                FUN_0c0211e0(u171, 0.75f, 30.0f);
                                                            }
                                                        }
                                                    } else {
                                                        u175 = *(float *)((a4 + 0x38));
                                                        if ((int)u175 == 36) {
                                                            t176 = *(signed char *)((a4 + 0x14B));
                                                            u177 = 1.0f;
                                                            if ((t176 & 4) != 0) {
                                                                u177 = 0.0f;
                                                            }
                                                            FUN_0c0211e0(u177, 0.75f, 30.0f);
                                                        }
                                                    }
                                                }
                                            } else {
                                                u182 = *(float *)((a4 + 0x38));
                                                if ((int)u182 != 10) {
                                                    if ((int)u182 != 20) {
                                                        if ((int)u182 != 30) {
                                                            if ((int)u182 != 40) {
                                                                if ((int)u182 == 56) {
                                                                    t183 = *(signed char *)((a4 + 0x14B));
                                                                    u184 = 1.0f;
                                                                    if ((t183 & 4) != 0) {
                                                                        u184 = 0.0f;
                                                                    }
                                                                    FUN_0c0211e0(u184, 0.75f, 30.0f);
                                                                }
                                                            } else {
                                                                t187 = *(signed char *)((a4 + 0x14B));
                                                                u188 = 1.0f;
                                                                if ((t187 & 4) != 0) {
                                                                    u188 = 0.0f;
                                                                }
                                                                FUN_0c0211e0(u188, 0.75f, 10.0f);
                                                            }
                                                        } else {
                                                            t191 = *(signed char *)((a4 + 0x14B));
                                                            u192 = 1.0f;
                                                            if ((t191 & 4) != 0) {
                                                                u192 = 0.0f;
                                                            }
                                                            FUN_0c0211e0(u192, 0.75f, 10.0f);
                                                        }
                                                    } else {
                                                        t195 = *(signed char *)((a4 + 0x14B));
                                                        u196 = 1.0f;
                                                        if ((t195 & 4) != 0) {
                                                            u196 = 0.0f;
                                                        }
                                                        FUN_0c0211e0(u196, 0.75f, 10.0f);
                                                    }
                                                } else {
                                                    t199 = *(signed char *)((a4 + 0x14B));
                                                    u200 = 1.0f;
                                                    if ((t199 & 4) != 0) {
                                                        u200 = 0.0f;
                                                    }
                                                    FUN_0c0211e0(u200, 0.75f, 10.0f);
                                                }
                                            }
                                        }
                                    } else {
                                        u205 = *(float *)((a4 + 0x38));
                                        if ((int)u205 == 48) {
                                            t206 = *(signed char *)((a4 + 0x14B));
                                            u207 = 1.0f;
                                            if ((t206 & 4) != 0) {
                                                u207 = 0.0f;
                                            }
                                            FUN_0c0211e0(u207, 0.75f, 10.0f);
                                        }
                                    }
                                } else {
                                    u211 = *(float *)((a4 + 0x38));
                                    if ((int)u211 == 48) {
                                        t212 = *(signed char *)((a4 + 0x14B));
                                        u213 = 1.0f;
                                        if ((t212 & 4) != 0) {
                                            u213 = 0.0f;
                                        }
                                        FUN_0c0211e0(u213, 0.75f, 10.0f);
                                    }
                                }
                            } else {
                                u217 = *(float *)((a4 + 0x38));
                                if ((int)u217 == 48) {
                                    t218 = *(signed char *)((a4 + 0x14B));
                                    u219 = 1.0f;
                                    if ((t218 & 4) != 0) {
                                        u219 = 0.0f;
                                    }
                                    FUN_0c0211e0(u219, 0.75f, 10.0f);
                                }
                            }
                        } else {
                            u223 = *(float *)((a4 + 0x38));
                            if ((int)u223 == 48) {
                                t224 = *(signed char *)((a4 + 0x14B));
                                u225 = 1.0f;
                                if ((t224 & 4) != 0) {
                                    u225 = 0.0f;
                                }
                                FUN_0c0211e0(u225, 0.75f, 10.0f);
                            }
                        }
                    } else {
                        u229 = *(float *)((a4 + 0x38));
                        if ((int)u229 == 48) {
                            t230 = *(signed char *)((a4 + 0x14B));
                            u231 = 1.0f;
                            if ((t230 & 4) != 0) {
                                u231 = 0.0f;
                            }
                            FUN_0c0211e0(u231, 0.75f, 10.0f);
                        }
                    }
                }
            }
            t241 = *(int *)((a4 + 0x34));
            u242 = *(float *)((a4 + 0x38));
            t243 = *(int *)((t241 + 0x0));
            if (!((float)(t243 - 2) > u242)) {
                t244 = *(int *)((a4 + 0x80));
                nlRotateAZ(t244);
                t246 = *(int *)((a4 + 0x7C));
                nlRotateAY(t246);
                t248 = *(int *)((a4 + 0x78));
                nlRotateAX(t248);
                FUN_0c077210(0xC0D5554, (((int)stk + 16) + 0x3C));
                *(float *)(((int)stk + 80)) = 0.0f;
                nlUnitVector((((int)stk + 16) + 0x3C));
                u252 = *(float *)(((int)stk + 84));
                u253 = *(float *)(((int)stk + 76));
                t254 = nlArcTan2(u253, u252);
                *(unsigned int *)((a4 + 0x10)) = (t254 - 32768);
                *(unsigned int *)((a4 + 0x78)) = 0x0;
                *(unsigned int *)((a4 + 0x7C)) = 0x0;
                *(unsigned int *)((a4 + 0x80)) = 0x0;
                *(float *)((a4 + 0x11C)) = 0.0f;
                *(float *)((a4 + 0x120)) = 0.5f;
                t255 = *(int *)((a4 + 0x24));
                *(unsigned int *)((a4 + 0x24)) = (t255 + 0x1);
                psgEnterState4(a4);
                t257 = *(signed char *)((a4 + 0x148));
                if ((t257 & 128) == 0) {
                    t258 = *(signed char *)(((0x148 + a4) + 0x0));
                    *(unsigned char *)(((0x148 + a4) + 0x0)) = (t258 | 0x80);
                    t259 = *(int *)0xC2AD590;
                    *(unsigned int *)0xC2AD590 = (t259 & 0xFFFFFFFD);
                    FUN_0c031492(0x3);
                }
            } else {
                t262 = *(signed char *)((a4 + 0x148));
                if ((t262 & 128) == 0) {
                    t263 = *(int *)0xC13EEE4;
                    t264 = *(int *)(((0x148 + a4) + 0x0));
                    t265 = (int)(((unsigned int)t264 >> 21) & 0x3);
                    u266 = *(float *)((((t265 << 2) + (((int)stk + 16) + 0x48)) + 0x0));
                    if (!(u266 > (float)t263)) {
                        t267 = *(signed char *)(((0x148 + a4) + 0x0));
                        *(unsigned char *)(((0x148 + a4) + 0x0)) = (t267 | 0x80);
                        t268 = *(int *)0xC2AD590;
                        *(unsigned int *)0xC2AD590 = (t268 & 0xFFFFFFFD);
                        FUN_0c031492(0x3);
                    }
                }
            }
            t273 = nlPopMatrix(0x1);
            t326 = t273;
        } else {
            if (t7 == 2) {
                nlPushMatrix(0x0);
                t275 = *(signed char *)((a4 + 0x149));
                if ((t275 & 128) != 0) {
                    psgPutShadow(a4);
                    FUN_0c071258(a4);
                    t278 = *(int *)((a4 + 0x0));
                    FcvPlayBuffer((a4 + 0x3C), t278);
                } else {
                    t280 = *(int *)((a4 + 0x118));
                    if (t280 != 0) {
                        FUN_0c070ede(a4);
                    }
                    t283 = *(int *)0xC1EE210;
                    t284 = *(int *)0xC1EE214;
                    t285 = *(int *)((0xC13F3B0 + (t283 << 2)));
                    t286 = *(int *)(((t284 << 2) + t285));
                    t287 = *(int *)((a4 + 0x140));
                    t288 = psgRunToPoint(a4);
                    psgPutShadow(a4);
                    FUN_0c0713d8(a4);
                    t291 = *(int *)((a4 + 0x0));
                    u292 = *(float *)((a4 + 0x38));
                    t293 = *(int *)((a4 + 0x34));
                    FcvPlay(t293, t291, u292);
                    u295 = *(float *)((a4 + 0x38));
                    u296 = *(float *)(((0x120 + a4) + 0x0));
                    *(float *)((a4 + 0x38)) = (u295 + u296);
                    if (3.0f > t288) {
                        t297 = *(int *)((a4 + 0x24));
                        *(unsigned int *)((a4 + 0x24)) = (t297 + 0x1);
                        t298 = *(int *)0xC1EE20C;
                        if (t298 == 2) {
                            t299 = *(int *)0xC1EE214;
                            if (t299 == 10) {
                                t300 = *(int *)((a4 + 0x0));
                                if (t300 == 33) {
                                    FUN_0c05d492();
                                }
                            }
                        }
                        t305 = *(int *)0xC1EE20C;
                        if (t305 == 2) {
                            t306 = *(int *)0xC1EE214;
                            if (t306 == 8) {
                                t307 = *(int *)((a4 + 0x0));
                                t308 = IsBoyFriend(t307, 0x0);
                                if (t308 != 0) {
                                    t309 = *(int *)(((a4 + 0x4) + 0x8));
                                    *(unsigned int *)((((int)stk + 4) + 0x8)) = t309;
                                    t310 = *(int *)(((a4 + 0x4) + 0x4));
                                    *(unsigned int *)((((int)stk + 4) + 0x4)) = t310;
                                    t311 = *(int *)(((a4 + 0x4) + 0x0));
                                    *(unsigned int *)((((int)stk + 4) + 0x0)) = t311;
                                    t312 = *(int *)((a4 + 0x154));
                                    Start_Proposal(t312, 0x0);
                                }
                            }
                        }
                    }
                }
                t320 = nlPopMatrix(0x1);
                t324 = t320;
            } else {
                t322 = t7;
                if (t7 == 3) {
                    t321 = *(signed char *)(((0x149 + a4) + 0x0));
                    *(unsigned char *)(((0x149 + a4) + 0x0)) = (t321 | 0x40);
                    t322 = (t321 | 0x40);
                }
                t324 = t322;
            }
            t326 = t324;
        }
        t735 = t326;
    } else {
        nlPushMatrix(0x0);
        psgSeatMatrix(a4);
        t331 = *(signed char *)((a4 + 0x149));
        if ((t331 & 128) != 0) {
            FUN_0c071258(a4);
            t333 = *(int *)((a4 + 0x0));
            FcvPlayBuffer((a4 + 0x3C), t333);
        } else {
            FUN_0c0713d8(a4);
            u336 = *(float *)((a4 + 0x38));
            t337 = *(int *)((a4 + 0x34));
            FcvStoreBuffer(t337, (a4 + 0x3C), u336);
            t339 = *(int *)((a4 + 0x0));
            FcvPlayBuffer((a4 + 0x3C), t339);
            u341 = *(float *)((a4 + 0x38));
            *(float *)((a4 + 0x38)) = (u341 + 1.0f);
            t342 = *(int *)((a4 + 0x34));
            if (t342 != 0xC956FCC) {
                if (t342 != 0xC95A230) {
                    if (t342 != 0xC95D7C4) {
                        if (t342 != 0xC960308) {
                            if (t342 != 0xC962F0C) {
                                if (t342 != 0xC9659C0) {
                                    if (t342 != 0xC9684A4) {
                                        if (t342 != 0xC96B138) {
                                            t343 = *(int *)((a4 + 0x34));
                                            u344 = *(float *)((a4 + 0x38));
                                            t345 = *(int *)((t343 + 0x0));
                                            if (!((float)(t345 - 2) > u344)) {
                                                t346 = *(int *)((a4 + 0x24));
                                                *(unsigned int *)((a4 + 0x24)) = (t346 + 0x1);
                                                FUN_0c077210(0xC0D5578, (((int)stk + 16) + 0x3C));
                                                *(float *)(((int)stk + 80)) = 0.0f;
                                                nlUnitVector((((int)stk + 16) + 0x3C));
                                                u349 = *(float *)(((int)stk + 84));
                                                u350 = *(float *)(((int)stk + 76));
                                                t351 = nlArcTan2(u350, u349);
                                                *(unsigned int *)((a4 + 0x10)) = t351;
                                                nlPushMatrix(0xC179180);
                                                t353 = *(int *)0xC1EE20C;
                                                if (t353 == 2) {
                                                    t354 = *(int *)0xC1EE214;
                                                    if (t354 == 14) {
                                                        t355 = *(signed char *)((a4 + 0x14B));
                                                        if ((t355 & 4) == 0) {
                                                            t356 = *(int *)((a4 + 0x10));
                                                            *(unsigned int *)((a4 + 0x10)) = (t356 + 0x8000);
                                                        }
                                                        t358 = *(signed char *)((a4 + 0x154));
                                                        nlTranslateV(((signed char)(((t358 << 1) + t358) << 2) + 0xC13F3BC));
                                                    }
                                                }
                                                t362 = *(signed char *)((a4 + 0x14B));
                                                u364 = -14.8279991f;
                                                if ((t362 & 4) != 0) {
                                                    u364 = 14.8279991f;
                                                }
                                                nlTranslate(u364, 0.0f, -6.46399975f);
                                                nlGetTranslate((((int)stk + 16) + 0x30));
                                                Psg_SetPosPtr(a4, (((int)stk + 16) + 0x30));
                                                nlPopMatrix(0x1);
                                                t369 = *(int *)((a4 + 0x24));
                                                psgEnterState4(a4);
                                            }
                                        } else {
                                            t372 = *(int *)((a4 + 0x34));
                                            u373 = *(float *)((a4 + 0x38));
                                            t374 = *(int *)((t372 + 0x0));
                                            if ((float)(t374 - 2) > u373) {
                                                t375 = *(signed char *)((a4 + 0x148));
                                                if ((t375 & 128) == 0) {
                                                    t376 = *(int *)0xC13EEE4;
                                                    if ((int)t376 >= (int)0xAA) {
                                                        t377 = *(signed char *)(((0x148 + a4) + 0x0));
                                                        *(unsigned char *)(((0x148 + a4) + 0x0)) = (t377 | 0x80);
                                                        t378 = *(int *)0xC2AD590;
                                                        *(unsigned int *)0xC2AD590 = (t378 & 0xFFFFFFFD);
                                                        FUN_0c031492(0x3);
                                                    }
                                                }
                                            } else {
                                                t382 = *(int *)((a4 + 0x80));
                                                nlRotateAZ(t382);
                                                t384 = *(int *)((a4 + 0x7C));
                                                nlRotateAY(t384);
                                                t386 = *(int *)((a4 + 0x78));
                                                nlRotateAX(t386);
                                                FUN_0c077210(0xC0D5554, (((int)stk + 16) + 0x3C));
                                                *(float *)(((int)stk + 80)) = 0.0f;
                                                nlUnitVector((((int)stk + 16) + 0x3C));
                                                u390 = *(float *)(((int)stk + 84));
                                                u391 = *(float *)(((int)stk + 76));
                                                t392 = nlArcTan2(u391, u390);
                                                *(unsigned int *)((a4 + 0x10)) = (t392 - 32768);
                                                *(unsigned int *)((a4 + 0x78)) = 0x0;
                                                *(unsigned int *)((a4 + 0x7C)) = 0x0;
                                                *(unsigned int *)((a4 + 0x80)) = 0x0;
                                                nlPushMatrix(0xC179180);
                                                t394 = *(int *)0xC1EE20C;
                                                if (t394 == 2) {
                                                    t395 = *(int *)0xC1EE214;
                                                    if (t395 == 14) {
                                                        t396 = *(signed char *)((a4 + 0x154));
                                                        nlTranslateV(((signed char)(((t396 << 1) + t396) << 2) + 0xC13F3BC));
                                                        t398 = *(signed char *)((a4 + 0x14B));
                                                        if ((t398 & 4) == 0) {
                                                            t399 = *(int *)((a4 + 0x10));
                                                            *(unsigned int *)((a4 + 0x10)) = (t399 + 0x8000);
                                                        }
                                                    }
                                                }
                                                t402 = *(signed char *)((a4 + 0x14B));
                                                u404 = -14.8279991f;
                                                if ((t402 & 4) != 0) {
                                                    u404 = 14.8279991f;
                                                }
                                                nlTranslate(u404, 7.5f, -6.46399975f);
                                                nlGetTranslate((((int)stk + 16) + 0x30));
                                                Psg_SetPosPtr(a4, (((int)stk + 16) + 0x30));
                                                nlPopMatrix(0x1);
                                                *(unsigned int *)((a4 + 0x24)) = 0x2;
                                                psgEnterState4(a4);
                                                t410 = *(signed char *)((a4 + 0x148));
                                                if ((t410 & 128) == 0) {
                                                    t411 = *(signed char *)(((0x148 + a4) + 0x0));
                                                    *(unsigned char *)(((0x148 + a4) + 0x0)) = (t411 | 0x80);
                                                    t412 = *(int *)0xC2AD590;
                                                    *(unsigned int *)0xC2AD590 = (t412 & 0xFFFFFFFD);
                                                    FUN_0c031492(0x3);
                                                }
                                            }
                                        }
                                    } else {
                                        t417 = *(int *)((a4 + 0x34));
                                        u418 = *(float *)((a4 + 0x38));
                                        t419 = *(int *)((t417 + 0x0));
                                        if ((float)(t419 - 2) > u418) {
                                            t420 = *(signed char *)((a4 + 0x148));
                                            if ((t420 & 128) == 0) {
                                                t421 = *(int *)0xC13EEE4;
                                                if ((int)t421 >= (int)0xAA) {
                                                    t422 = *(signed char *)(((0x148 + a4) + 0x0));
                                                    *(unsigned char *)(((0x148 + a4) + 0x0)) = (t422 | 0x80);
                                                    t423 = *(int *)0xC2AD590;
                                                    *(unsigned int *)0xC2AD590 = (t423 & 0xFFFFFFFD);
                                                    FUN_0c031492(0x3);
                                                }
                                            }
                                        } else {
                                            t427 = *(int *)((a4 + 0x80));
                                            nlRotateAZ(t427);
                                            t429 = *(int *)((a4 + 0x7C));
                                            nlRotateAY(t429);
                                            t431 = *(int *)((a4 + 0x78));
                                            nlRotateAX(t431);
                                            FUN_0c077210(0xC0D5554, (((int)stk + 16) + 0x3C));
                                            *(float *)(((int)stk + 80)) = 0.0f;
                                            nlUnitVector((((int)stk + 16) + 0x3C));
                                            u435 = *(float *)(((int)stk + 84));
                                            u436 = *(float *)(((int)stk + 76));
                                            t437 = nlArcTan2(u436, u435);
                                            *(unsigned int *)((a4 + 0x10)) = (t437 - 32768);
                                            *(unsigned int *)((a4 + 0x78)) = 0x0;
                                            *(unsigned int *)((a4 + 0x7C)) = 0x0;
                                            *(unsigned int *)((a4 + 0x80)) = 0x0;
                                            nlPushMatrix(0xC179180);
                                            t439 = *(int *)0xC1EE20C;
                                            if (t439 == 2) {
                                                t440 = *(int *)0xC1EE214;
                                                if (t440 == 14) {
                                                    t441 = *(signed char *)((a4 + 0x154));
                                                    nlTranslateV(((signed char)(((t441 << 1) + t441) << 2) + 0xC13F3BC));
                                                    t443 = *(signed char *)((a4 + 0x14B));
                                                    if ((t443 & 4) == 0) {
                                                        t444 = *(int *)((a4 + 0x10));
                                                        *(unsigned int *)((a4 + 0x10)) = (t444 + 0x8000);
                                                    }
                                                }
                                            }
                                            t447 = *(signed char *)((a4 + 0x14B));
                                            u449 = -14.8279991f;
                                            if ((t447 & 4) != 0) {
                                                u449 = 14.8279991f;
                                            }
                                            nlTranslate(u449, 7.5f, -6.46399975f);
                                            nlGetTranslate((((int)stk + 16) + 0x30));
                                            Psg_SetPosPtr(a4, (((int)stk + 16) + 0x30));
                                            nlPopMatrix(0x1);
                                            *(unsigned int *)((a4 + 0x24)) = 0x2;
                                            psgEnterState4(a4);
                                            t455 = *(signed char *)((a4 + 0x148));
                                            if ((t455 & 128) == 0) {
                                                t456 = *(signed char *)(((0x148 + a4) + 0x0));
                                                *(unsigned char *)(((0x148 + a4) + 0x0)) = (t456 | 0x80);
                                                t457 = *(int *)0xC2AD590;
                                                *(unsigned int *)0xC2AD590 = (t457 & 0xFFFFFFFD);
                                                FUN_0c031492(0x3);
                                            }
                                        }
                                    }
                                } else {
                                    t462 = *(int *)((a4 + 0x34));
                                    u463 = *(float *)((a4 + 0x38));
                                    t464 = *(int *)((t462 + 0x0));
                                    if ((float)(t464 - 2) > u463) {
                                        t465 = *(signed char *)((a4 + 0x148));
                                        if ((t465 & 128) == 0) {
                                            t466 = *(int *)0xC13EEE4;
                                            if ((int)t466 >= (int)0xAA) {
                                                t467 = *(signed char *)(((0x148 + a4) + 0x0));
                                                *(unsigned char *)(((0x148 + a4) + 0x0)) = (t467 | 0x80);
                                                t468 = *(int *)0xC2AD590;
                                                *(unsigned int *)0xC2AD590 = (t468 & 0xFFFFFFFD);
                                                FUN_0c031492(0x3);
                                            }
                                        }
                                    } else {
                                        t472 = *(int *)((a4 + 0x80));
                                        nlRotateAZ(t472);
                                        t474 = *(int *)((a4 + 0x7C));
                                        nlRotateAY(t474);
                                        t476 = *(int *)((a4 + 0x78));
                                        nlRotateAX(t476);
                                        FUN_0c077210(0xC0D5554, (((int)stk + 16) + 0x3C));
                                        *(float *)(((int)stk + 80)) = 0.0f;
                                        nlUnitVector((((int)stk + 16) + 0x3C));
                                        u480 = *(float *)(((int)stk + 84));
                                        u481 = *(float *)(((int)stk + 76));
                                        t482 = nlArcTan2(u481, u480);
                                        *(unsigned int *)((a4 + 0x10)) = (t482 - 32768);
                                        *(unsigned int *)((a4 + 0x78)) = 0x0;
                                        *(unsigned int *)((a4 + 0x7C)) = 0x0;
                                        *(unsigned int *)((a4 + 0x80)) = 0x0;
                                        nlPushMatrix(0xC179180);
                                        t484 = *(int *)0xC1EE20C;
                                        if (t484 == 2) {
                                            t485 = *(int *)0xC1EE214;
                                            if (t485 == 14) {
                                                t486 = *(signed char *)((a4 + 0x154));
                                                nlTranslateV(((signed char)(((t486 << 1) + t486) << 2) + 0xC13F3BC));
                                                t488 = *(signed char *)((a4 + 0x14B));
                                                if ((t488 & 4) == 0) {
                                                    t489 = *(int *)((a4 + 0x10));
                                                    *(unsigned int *)((a4 + 0x10)) = (t489 + 0x8000);
                                                }
                                            }
                                        }
                                        t492 = *(signed char *)((a4 + 0x14B));
                                        u494 = -14.8279991f;
                                        if ((t492 & 4) != 0) {
                                            u494 = 14.8279991f;
                                        }
                                        nlTranslate(u494, 7.5f, -6.46399975f);
                                        nlGetTranslate((((int)stk + 16) + 0x30));
                                        Psg_SetPosPtr(a4, (((int)stk + 16) + 0x30));
                                        nlPopMatrix(0x1);
                                        *(unsigned int *)((a4 + 0x24)) = 0x2;
                                        psgEnterState4(a4);
                                        t500 = *(signed char *)((a4 + 0x148));
                                        if ((t500 & 128) == 0) {
                                            t501 = *(signed char *)(((0x148 + a4) + 0x0));
                                            *(unsigned char *)(((0x148 + a4) + 0x0)) = (t501 | 0x80);
                                            t502 = *(int *)0xC2AD590;
                                            *(unsigned int *)0xC2AD590 = (t502 & 0xFFFFFFFD);
                                            FUN_0c031492(0x3);
                                        }
                                    }
                                }
                            } else {
                                t507 = *(int *)((a4 + 0x34));
                                u508 = *(float *)((a4 + 0x38));
                                t509 = *(int *)((t507 + 0x0));
                                if ((float)(t509 - 2) > u508) {
                                    t510 = *(signed char *)((a4 + 0x148));
                                    if ((t510 & 128) == 0) {
                                        t511 = *(int *)0xC13EEE4;
                                        if ((int)t511 >= (int)0xAA) {
                                            t512 = *(signed char *)(((0x148 + a4) + 0x0));
                                            *(unsigned char *)(((0x148 + a4) + 0x0)) = (t512 | 0x80);
                                            t513 = *(int *)0xC2AD590;
                                            *(unsigned int *)0xC2AD590 = (t513 & 0xFFFFFFFD);
                                            FUN_0c031492(0x3);
                                        }
                                    }
                                } else {
                                    t517 = *(int *)((a4 + 0x80));
                                    nlRotateAZ(t517);
                                    t519 = *(int *)((a4 + 0x7C));
                                    nlRotateAY(t519);
                                    t521 = *(int *)((a4 + 0x78));
                                    nlRotateAX(t521);
                                    FUN_0c077210(0xC0D5554, (((int)stk + 16) + 0x3C));
                                    *(float *)(((int)stk + 80)) = 0.0f;
                                    nlUnitVector((((int)stk + 16) + 0x3C));
                                    u525 = *(float *)(((int)stk + 84));
                                    u526 = *(float *)(((int)stk + 76));
                                    t527 = nlArcTan2(u526, u525);
                                    *(unsigned int *)((a4 + 0x10)) = (t527 - 32768);
                                    *(unsigned int *)((a4 + 0x78)) = 0x0;
                                    *(unsigned int *)((a4 + 0x7C)) = 0x0;
                                    *(unsigned int *)((a4 + 0x80)) = 0x0;
                                    nlPushMatrix(0xC179180);
                                    t529 = *(int *)0xC1EE20C;
                                    if (t529 == 2) {
                                        t530 = *(int *)0xC1EE214;
                                        if (t530 == 14) {
                                            t531 = *(signed char *)((a4 + 0x154));
                                            nlTranslateV(((signed char)(((t531 << 1) + t531) << 2) + 0xC13F3BC));
                                            t533 = *(signed char *)((a4 + 0x14B));
                                            if ((t533 & 4) == 0) {
                                                t534 = *(int *)((a4 + 0x10));
                                                *(unsigned int *)((a4 + 0x10)) = (t534 + 0x8000);
                                            }
                                        }
                                    }
                                    t537 = *(signed char *)((a4 + 0x14B));
                                    u539 = -14.8279991f;
                                    if ((t537 & 4) != 0) {
                                        u539 = 14.8279991f;
                                    }
                                    nlTranslate(u539, 7.5f, -6.46399975f);
                                    nlGetTranslate((((int)stk + 16) + 0x30));
                                    Psg_SetPosPtr(a4, (((int)stk + 16) + 0x30));
                                    nlPopMatrix(0x1);
                                    *(unsigned int *)((a4 + 0x24)) = 0x2;
                                    psgEnterState4(a4);
                                    t545 = *(signed char *)((a4 + 0x148));
                                    if ((t545 & 128) == 0) {
                                        t546 = *(signed char *)(((0x148 + a4) + 0x0));
                                        *(unsigned char *)(((0x148 + a4) + 0x0)) = (t546 | 0x80);
                                        t547 = *(int *)0xC2AD590;
                                        *(unsigned int *)0xC2AD590 = (t547 & 0xFFFFFFFD);
                                        FUN_0c031492(0x3);
                                    }
                                }
                            }
                        } else {
                            t552 = *(int *)((a4 + 0x34));
                            u553 = *(float *)((a4 + 0x38));
                            t554 = *(int *)((t552 + 0x0));
                            if ((float)(t554 - 2) > u553) {
                                t555 = *(signed char *)((a4 + 0x148));
                                if ((t555 & 128) == 0) {
                                    t556 = *(int *)0xC13EEE4;
                                    if ((int)t556 >= (int)0xAA) {
                                        t557 = *(signed char *)(((0x148 + a4) + 0x0));
                                        *(unsigned char *)(((0x148 + a4) + 0x0)) = (t557 | 0x80);
                                        t558 = *(int *)0xC2AD590;
                                        *(unsigned int *)0xC2AD590 = (t558 & 0xFFFFFFFD);
                                        FUN_0c031492(0x3);
                                    }
                                }
                            } else {
                                t562 = *(int *)((a4 + 0x80));
                                nlRotateAZ(t562);
                                t564 = *(int *)((a4 + 0x7C));
                                nlRotateAY(t564);
                                t566 = *(int *)((a4 + 0x78));
                                nlRotateAX(t566);
                                FUN_0c077210(0xC0D5554, (((int)stk + 16) + 0x3C));
                                *(float *)(((int)stk + 80)) = 0.0f;
                                nlUnitVector((((int)stk + 16) + 0x3C));
                                u570 = *(float *)(((int)stk + 84));
                                u571 = *(float *)(((int)stk + 76));
                                t572 = nlArcTan2(u571, u570);
                                *(unsigned int *)((a4 + 0x10)) = (t572 - 32768);
                                *(unsigned int *)((a4 + 0x78)) = 0x0;
                                *(unsigned int *)((a4 + 0x7C)) = 0x0;
                                *(unsigned int *)((a4 + 0x80)) = 0x0;
                                nlPushMatrix(0xC179180);
                                t574 = *(int *)0xC1EE20C;
                                if (t574 == 2) {
                                    t575 = *(int *)0xC1EE214;
                                    if (t575 == 14) {
                                        t576 = *(signed char *)((a4 + 0x154));
                                        nlTranslateV(((signed char)(((t576 << 1) + t576) << 2) + 0xC13F3BC));
                                        t578 = *(signed char *)((a4 + 0x14B));
                                        if ((t578 & 4) == 0) {
                                            t579 = *(int *)((a4 + 0x10));
                                            *(unsigned int *)((a4 + 0x10)) = (t579 + 0x8000);
                                        }
                                    }
                                }
                                t582 = *(signed char *)((a4 + 0x14B));
                                u584 = -14.8279991f;
                                if ((t582 & 4) != 0) {
                                    u584 = 14.8279991f;
                                }
                                nlTranslate(u584, 7.5f, -6.46399975f);
                                nlGetTranslate((((int)stk + 16) + 0x30));
                                Psg_SetPosPtr(a4, (((int)stk + 16) + 0x30));
                                nlPopMatrix(0x1);
                                *(unsigned int *)((a4 + 0x24)) = 0x2;
                                psgEnterState4(a4);
                                t590 = *(signed char *)((a4 + 0x148));
                                if ((t590 & 128) == 0) {
                                    t591 = *(signed char *)(((0x148 + a4) + 0x0));
                                    *(unsigned char *)(((0x148 + a4) + 0x0)) = (t591 | 0x80);
                                    t592 = *(int *)0xC2AD590;
                                    *(unsigned int *)0xC2AD590 = (t592 & 0xFFFFFFFD);
                                    FUN_0c031492(0x3);
                                }
                            }
                        }
                    } else {
                        t597 = *(int *)((a4 + 0x34));
                        u598 = *(float *)((a4 + 0x38));
                        t599 = *(int *)((t597 + 0x0));
                        if ((float)(t599 - 2) > u598) {
                            t600 = *(signed char *)((a4 + 0x148));
                            if ((t600 & 128) == 0) {
                                t601 = *(int *)0xC13EEE4;
                                if ((int)t601 >= (int)0xAA) {
                                    t602 = *(signed char *)(((0x148 + a4) + 0x0));
                                    *(unsigned char *)(((0x148 + a4) + 0x0)) = (t602 | 0x80);
                                    t603 = *(int *)0xC2AD590;
                                    *(unsigned int *)0xC2AD590 = (t603 & 0xFFFFFFFD);
                                    FUN_0c031492(0x3);
                                }
                            }
                        } else {
                            t607 = *(int *)((a4 + 0x80));
                            nlRotateAZ(t607);
                            t609 = *(int *)((a4 + 0x7C));
                            nlRotateAY(t609);
                            t611 = *(int *)((a4 + 0x78));
                            nlRotateAX(t611);
                            FUN_0c077210(0xC0D5554, (((int)stk + 16) + 0x3C));
                            *(float *)(((int)stk + 80)) = 0.0f;
                            nlUnitVector((((int)stk + 16) + 0x3C));
                            u615 = *(float *)(((int)stk + 84));
                            u616 = *(float *)(((int)stk + 76));
                            t617 = nlArcTan2(u616, u615);
                            *(unsigned int *)((a4 + 0x10)) = (t617 - 32768);
                            *(unsigned int *)((a4 + 0x78)) = 0x0;
                            *(unsigned int *)((a4 + 0x7C)) = 0x0;
                            *(unsigned int *)((a4 + 0x80)) = 0x0;
                            nlPushMatrix(0xC179180);
                            t619 = *(int *)0xC1EE20C;
                            if (t619 == 2) {
                                t620 = *(int *)0xC1EE214;
                                if (t620 == 14) {
                                    t621 = *(signed char *)((a4 + 0x154));
                                    nlTranslateV(((signed char)(((t621 << 1) + t621) << 2) + 0xC13F3BC));
                                    t623 = *(signed char *)((a4 + 0x14B));
                                    if ((t623 & 4) == 0) {
                                        t624 = *(int *)((a4 + 0x10));
                                        *(unsigned int *)((a4 + 0x10)) = (t624 + 0x8000);
                                    }
                                }
                            }
                            t627 = *(signed char *)((a4 + 0x14B));
                            u629 = -14.8279991f;
                            if ((t627 & 4) != 0) {
                                u629 = 14.8279991f;
                            }
                            nlTranslate(u629, 7.5f, -6.46399975f);
                            nlGetTranslate((((int)stk + 16) + 0x30));
                            Psg_SetPosPtr(a4, (((int)stk + 16) + 0x30));
                            nlPopMatrix(0x1);
                            *(unsigned int *)((a4 + 0x24)) = 0x2;
                            psgEnterState4(a4);
                            t635 = *(signed char *)((a4 + 0x148));
                            if ((t635 & 128) == 0) {
                                t636 = *(signed char *)(((0x148 + a4) + 0x0));
                                *(unsigned char *)(((0x148 + a4) + 0x0)) = (t636 | 0x80);
                                t637 = *(int *)0xC2AD590;
                                *(unsigned int *)0xC2AD590 = (t637 & 0xFFFFFFFD);
                                FUN_0c031492(0x3);
                            }
                        }
                    }
                } else {
                    t642 = *(int *)((a4 + 0x34));
                    u643 = *(float *)((a4 + 0x38));
                    t644 = *(int *)((t642 + 0x0));
                    if ((float)(t644 - 2) > u643) {
                        t645 = *(signed char *)((a4 + 0x148));
                        if ((t645 & 128) == 0) {
                            t646 = *(int *)0xC13EEE4;
                            if ((int)t646 >= (int)0xAA) {
                                t647 = *(signed char *)(((0x148 + a4) + 0x0));
                                *(unsigned char *)(((0x148 + a4) + 0x0)) = (t647 | 0x80);
                                t648 = *(int *)0xC2AD590;
                                *(unsigned int *)0xC2AD590 = (t648 & 0xFFFFFFFD);
                                FUN_0c031492(0x3);
                            }
                        }
                    } else {
                        t652 = *(int *)((a4 + 0x80));
                        nlRotateAZ(t652);
                        t654 = *(int *)((a4 + 0x7C));
                        nlRotateAY(t654);
                        t656 = *(int *)((a4 + 0x78));
                        nlRotateAX(t656);
                        FUN_0c077210(0xC0D5554, (((int)stk + 16) + 0x3C));
                        *(float *)(((int)stk + 80)) = 0.0f;
                        nlUnitVector((((int)stk + 16) + 0x3C));
                        u660 = *(float *)(((int)stk + 84));
                        u661 = *(float *)(((int)stk + 76));
                        t662 = nlArcTan2(u661, u660);
                        *(unsigned int *)((a4 + 0x10)) = (t662 - 32768);
                        *(unsigned int *)((a4 + 0x78)) = 0x0;
                        *(unsigned int *)((a4 + 0x7C)) = 0x0;
                        *(unsigned int *)((a4 + 0x80)) = 0x0;
                        nlPushMatrix(0xC179180);
                        t664 = *(int *)0xC1EE20C;
                        if (t664 == 2) {
                            t665 = *(int *)0xC1EE214;
                            if (t665 == 14) {
                                t666 = *(signed char *)((a4 + 0x154));
                                nlTranslateV(((signed char)(((t666 << 1) + t666) << 2) + 0xC13F3BC));
                                t668 = *(signed char *)((a4 + 0x14B));
                                if ((t668 & 4) == 0) {
                                    t669 = *(int *)((a4 + 0x10));
                                    *(unsigned int *)((a4 + 0x10)) = (t669 + 0x8000);
                                }
                            }
                        }
                        t672 = *(signed char *)((a4 + 0x14B));
                        u674 = -14.8279991f;
                        if ((t672 & 4) != 0) {
                            u674 = 14.8279991f;
                        }
                        nlTranslate(u674, 7.5f, -6.46399975f);
                        nlGetTranslate((((int)stk + 16) + 0x30));
                        Psg_SetPosPtr(a4, (((int)stk + 16) + 0x30));
                        nlPopMatrix(0x1);
                        *(unsigned int *)((a4 + 0x24)) = 0x2;
                        psgEnterState4(a4);
                        t680 = *(signed char *)((a4 + 0x148));
                        if ((t680 & 128) == 0) {
                            t681 = *(signed char *)(((0x148 + a4) + 0x0));
                            *(unsigned char *)(((0x148 + a4) + 0x0)) = (t681 | 0x80);
                            t682 = *(int *)0xC2AD590;
                            *(unsigned int *)0xC2AD590 = (t682 & 0xFFFFFFFD);
                            FUN_0c031492(0x3);
                        }
                    }
                }
            } else {
                t687 = *(int *)((a4 + 0x34));
                u688 = *(float *)((a4 + 0x38));
                t689 = *(int *)((t687 + 0x0));
                if ((float)(t689 - 2) > u688) {
                    t690 = *(signed char *)((a4 + 0x148));
                    if ((t690 & 128) == 0) {
                        t691 = *(int *)0xC13EEE4;
                        if ((int)t691 >= (int)0xAA) {
                            t692 = *(signed char *)(((0x148 + a4) + 0x0));
                            *(unsigned char *)(((0x148 + a4) + 0x0)) = (t692 | 0x80);
                            t693 = *(int *)0xC2AD590;
                            *(unsigned int *)0xC2AD590 = (t693 & 0xFFFFFFFD);
                            FUN_0c031492(0x3);
                        }
                    }
                } else {
                    t697 = *(int *)((a4 + 0x80));
                    nlRotateAZ(t697);
                    t699 = *(int *)((a4 + 0x7C));
                    nlRotateAY(t699);
                    t701 = *(int *)((a4 + 0x78));
                    nlRotateAX(t701);
                    FUN_0c077210(0xC0D5554, (((int)stk + 16) + 0x3C));
                    *(float *)(((int)stk + 80)) = 0.0f;
                    nlUnitVector((((int)stk + 16) + 0x3C));
                    u705 = *(float *)(((int)stk + 84));
                    u706 = *(float *)(((int)stk + 76));
                    t707 = nlArcTan2(u706, u705);
                    *(unsigned int *)((a4 + 0x10)) = (t707 - 32768);
                    *(unsigned int *)((a4 + 0x78)) = 0x0;
                    *(unsigned int *)((a4 + 0x7C)) = 0x0;
                    *(unsigned int *)((a4 + 0x80)) = 0x0;
                    nlPushMatrix(0xC179180);
                    t709 = *(int *)0xC1EE20C;
                    if (t709 == 2) {
                        t710 = *(int *)0xC1EE214;
                        if (t710 == 14) {
                            t711 = *(signed char *)((a4 + 0x154));
                            nlTranslateV(((signed char)(((t711 << 1) + t711) << 2) + 0xC13F3BC));
                            t713 = *(signed char *)((a4 + 0x14B));
                            if ((t713 & 4) == 0) {
                                t714 = *(int *)((a4 + 0x10));
                                *(unsigned int *)((a4 + 0x10)) = (t714 + 0x8000);
                            }
                        }
                    }
                    t717 = *(signed char *)((a4 + 0x14B));
                    u719 = -14.8279991f;
                    if ((t717 & 4) != 0) {
                        u719 = 14.8279991f;
                    }
                    nlTranslate(u719, 7.5f, -6.46399975f);
                    nlGetTranslate((((int)stk + 16) + 0x30));
                    Psg_SetPosPtr(a4, (((int)stk + 16) + 0x30));
                    nlPopMatrix(0x1);
                    *(unsigned int *)((a4 + 0x24)) = 0x2;
                    psgEnterState4(a4);
                    t725 = *(signed char *)((a4 + 0x148));
                    if ((t725 & 128) == 0) {
                        t726 = *(signed char *)(((0x148 + a4) + 0x0));
                        *(unsigned char *)(((0x148 + a4) + 0x0)) = (t726 | 0x80);
                        t727 = *(int *)0xC2AD590;
                        *(unsigned int *)0xC2AD590 = (t727 & 0xFFFFFFFD);
                        FUN_0c031492(0x3);
                    }
                }
            }
        }
        t734 = nlPopMatrix(0x1);
        t735 = t734;
    }
    return t735;
}

void psgEnterState3(int a4, int a5)
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
    int t56;
    int t57;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    int t67;
    int t68;
    int t69;
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
    int t139;
    int t140;
    int t141;
    int t214;
    float u215;
    int t216;
    int t218;
    int t219;
    int t220;
    int t224;
    int t285;
    int t286;
    int t287;
    int t288;
    int t290;
    int t291;
    int t292;
    int t293;
    int t295;
    int t296;
    int t297;
    int t298;
    int t299;
    int t300;
    int t303;
    int t304;
    int t305;
    int t306;
    int t307;
    int t309;
    int t310;
    int t311;
    int t312;
    int t313;
    int t314;
    int t315;
    int t316;
    int t317;
    int t338;
    int t339;
    int t342;
    int t343;
    int t344;
    int t345;
    int t347;
    float u348;
    int t349;
    int t351;
    int t352;
    int t353;
    float u354;
    int t355;
    int t357;
    int t358;
    int t359;
    int t360;
    int t361;
    int t362;
    float u363;
    int t364;
    int t366;
    int t367;
    int t368;
    int t369;
    int t370;
    int t371;
    float u372;
    int t373;
    int t375;
    int t376;
    int t377;
    int t378;
    int t379;
    int t382;
    float u383;
    int t384;
    int t386;
    int t387;
    int t388;
    int t389;
    int t390;
    int t391;
    int stk[75] = {0};

    t0 = *(int *)0xC0D5BD4;
    *(unsigned int *)(((0xEC + ((int)stk + 8)) + 0xC)) = t0;
    t1 = *(int *)0xC0D5BD0;
    *(unsigned int *)(((0xEC + ((int)stk + 8)) + 0x8)) = t1;
    t2 = *(int *)0xC0D5BCC;
    *(unsigned int *)(((0xEC + ((int)stk + 8)) + 0x4)) = t2;
    t3 = *(int *)0xC0D5BC8;
    *(unsigned int *)(((0xEC + ((int)stk + 8)) + 0x0)) = t3;
    t4 = *(int *)0xC0D5BE4;
    *(unsigned int *)(((0xDC + ((int)stk + 8)) + 0xC)) = t4;
    t5 = *(int *)0xC0D5BE0;
    *(unsigned int *)(((0xDC + ((int)stk + 8)) + 0x8)) = t5;
    t6 = *(int *)0xC0D5BDC;
    *(unsigned int *)(((0xDC + ((int)stk + 8)) + 0x4)) = t6;
    t7 = *(int *)0xC0D5BD8;
    *(unsigned int *)(((0xDC + ((int)stk + 8)) + 0x0)) = t7;
    t8 = *(int *)0xC0D5BF4;
    *(unsigned int *)(((0xCC + ((int)stk + 8)) + 0xC)) = t8;
    t9 = *(int *)0xC0D5BF0;
    *(unsigned int *)(((0xCC + ((int)stk + 8)) + 0x8)) = t9;
    t10 = *(int *)0xC0D5BEC;
    *(unsigned int *)(((0xCC + ((int)stk + 8)) + 0x4)) = t10;
    t11 = *(int *)0xC0D5BE8;
    *(unsigned int *)(((0xCC + ((int)stk + 8)) + 0x0)) = t11;
    t12 = *(int *)0xC0D5BFC;
    *(unsigned int *)(((0xC4 + ((int)stk + 8)) + 0x4)) = t12;
    t13 = *(int *)0xC0D5BF8;
    *(unsigned int *)(((0xC4 + ((int)stk + 8)) + 0x0)) = t13;
    t14 = *(int *)0xC0D5C04;
    *(unsigned int *)(((0xBC + ((int)stk + 8)) + 0x4)) = t14;
    t15 = *(int *)0xC0D5C00;
    *(unsigned int *)(((0xBC + ((int)stk + 8)) + 0x0)) = t15;
    t16 = *(int *)0xC0D5C0C;
    *(unsigned int *)(((0xB4 + ((int)stk + 8)) + 0x4)) = t16;
    t17 = *(int *)0xC0D5C08;
    *(unsigned int *)(((0xB4 + ((int)stk + 8)) + 0x0)) = t17;
    t18 = *(int *)0xC0D5C14;
    *(unsigned int *)(((0xAC + ((int)stk + 8)) + 0x4)) = t18;
    t19 = *(int *)0xC0D5C10;
    *(unsigned int *)(((0xAC + ((int)stk + 8)) + 0x0)) = t19;
    t20 = *(int *)0xC0D5C18;
    *(unsigned int *)(((int)stk + 176)) = t20;
    t21 = *(int *)0xC0D5C1C;
    *(unsigned int *)(((int)stk + 172)) = t21;
    t22 = *(int *)0xC0D5C20;
    *(unsigned int *)(((int)stk + 168)) = t22;
    t23 = *(int *)0xC0D5C24;
    *(unsigned int *)(((int)stk + 164)) = t23;
    t24 = *(int *)0xC0D5C28;
    *(unsigned int *)(((int)stk + 160)) = t24;
    t25 = *(int *)0xC0D5C2C;
    *(unsigned int *)(((int)stk + 156)) = t25;
    t26 = *(int *)0xC0D5C3C;
    *(unsigned int *)(((0x84 + ((int)stk + 8)) + 0xC)) = t26;
    t27 = *(int *)0xC0D5C38;
    *(unsigned int *)(((0x84 + ((int)stk + 8)) + 0x8)) = t27;
    t28 = *(int *)0xC0D5C34;
    *(unsigned int *)(((0x84 + ((int)stk + 8)) + 0x4)) = t28;
    t29 = *(int *)0xC0D5C30;
    *(unsigned int *)(((0x84 + ((int)stk + 8)) + 0x0)) = t29;
    t30 = *(int *)0xC0D5C4C;
    *(unsigned int *)(((((int)stk + 8) + 0x74) + 0xC)) = t30;
    t31 = *(int *)0xC0D5C48;
    *(unsigned int *)(((((int)stk + 8) + 0x74) + 0x8)) = t31;
    t32 = *(int *)0xC0D5C44;
    *(unsigned int *)(((((int)stk + 8) + 0x74) + 0x4)) = t32;
    t33 = *(int *)0xC0D5C40;
    *(unsigned int *)(((((int)stk + 8) + 0x74) + 0x0)) = t33;
    t34 = *(int *)0xC0D5C60;
    *(unsigned int *)(((((int)stk + 8) + 0x60) + 0x10)) = t34;
    t35 = *(int *)0xC0D5C5C;
    *(unsigned int *)(((((int)stk + 8) + 0x60) + 0xC)) = t35;
    t36 = *(int *)0xC0D5C58;
    *(unsigned int *)(((((int)stk + 8) + 0x60) + 0x8)) = t36;
    t37 = *(int *)0xC0D5C54;
    *(unsigned int *)(((((int)stk + 8) + 0x60) + 0x4)) = t37;
    t38 = *(int *)0xC0D5C50;
    *(unsigned int *)(((((int)stk + 8) + 0x60) + 0x0)) = t38;
    t39 = *(int *)0xC0D5C8C;
    *(unsigned int *)(((((int)stk + 8) + 0x34) + 0x28)) = t39;
    t40 = *(int *)0xC0D5C88;
    *(unsigned int *)(((((int)stk + 8) + 0x34) + 0x24)) = t40;
    t41 = *(int *)0xC0D5C84;
    *(unsigned int *)(((((int)stk + 8) + 0x34) + 0x20)) = t41;
    t42 = *(int *)0xC0D5C80;
    *(unsigned int *)(((((int)stk + 8) + 0x34) + 0x1C)) = t42;
    t43 = *(int *)0xC0D5C7C;
    *(unsigned int *)(((((int)stk + 8) + 0x34) + 0x18)) = t43;
    t44 = *(int *)0xC0D5C78;
    *(unsigned int *)(((((int)stk + 8) + 0x34) + 0x14)) = t44;
    t45 = *(int *)0xC0D5C74;
    *(unsigned int *)(((((int)stk + 8) + 0x34) + 0x10)) = t45;
    t46 = *(int *)0xC0D5C70;
    *(unsigned int *)(((((int)stk + 8) + 0x34) + 0xC)) = t46;
    t47 = *(int *)0xC0D5C6C;
    *(unsigned int *)(((((int)stk + 8) + 0x34) + 0x8)) = t47;
    t48 = *(int *)0xC0D5C68;
    *(unsigned int *)(((((int)stk + 8) + 0x34) + 0x4)) = t48;
    t49 = *(int *)0xC0D5C64;
    *(unsigned int *)(((((int)stk + 8) + 0x34) + 0x0)) = t49;
    t50 = *(int *)0xC0D5C9C;
    *(unsigned int *)(((((int)stk + 8) + 0x24) + 0xC)) = t50;
    t51 = *(int *)0xC0D5C98;
    *(unsigned int *)(((((int)stk + 8) + 0x24) + 0x8)) = t51;
    t52 = *(int *)0xC0D5C94;
    *(unsigned int *)(((((int)stk + 8) + 0x24) + 0x4)) = t52;
    t53 = *(int *)0xC0D5C90;
    *(unsigned int *)(((((int)stk + 8) + 0x24) + 0x0)) = t53;
    t54 = *(int *)0xC0D5CAC;
    *(unsigned int *)(((((int)stk + 8) + 0x14) + 0xC)) = t54;
    t55 = *(int *)0xC0D5CA8;
    *(unsigned int *)(((((int)stk + 8) + 0x14) + 0x8)) = t55;
    t56 = *(int *)0xC0D5CA4;
    *(unsigned int *)(((((int)stk + 8) + 0x14) + 0x4)) = t56;
    t57 = *(int *)0xC0D5CA0;
    *(unsigned int *)(((((int)stk + 8) + 0x14) + 0x0)) = t57;
    t58 = *(int *)0xC0D5CBC;
    *(unsigned int *)(((((int)stk + 8) + 0x4) + 0xC)) = t58;
    t59 = *(int *)0xC0D5CB8;
    *(unsigned int *)(((((int)stk + 8) + 0x4) + 0x8)) = t59;
    t60 = *(int *)0xC0D5CB4;
    *(unsigned int *)(((((int)stk + 8) + 0x4) + 0x4)) = t60;
    t61 = *(int *)0xC0D5CB0;
    *(unsigned int *)(((((int)stk + 8) + 0x4) + 0x0)) = t61;
    *(unsigned int *)(((int)stk + 8)) = 0xC1790CC;
    if ((unsigned int)a5 < (unsigned int)0x10) {
        switch ((a5 << 1)) {
            case 0:
            {
                t62 = *(int *)(((0x148 + a4) + 0x0));
                t63 = (int)(((unsigned int)t62 >> 18) & 0x3);
                if (t63 == 0) {
                    t64 = *(signed char *)((a4 + 0x14B));
                    if ((t64 & 16) != 0) {
                        *(unsigned int *)((a4 + 0x34)) = 0xC9726F4;
                    } else {
                        *(unsigned int *)((a4 + 0x34)) = 0xC972E68;
                    }
                } else {
                    t67 = *(int *)(((0x148 + a4) + 0x0));
                    t68 = (int)(((unsigned int)t67 >> 18) & 0x3);
                    t69 = *(int *)((((t68 << 2) + (0xEC + ((int)stk + 8))) + 0x0));
                    *(unsigned int *)((a4 + 0x34)) = t69;
                }
                t74 = *(int *)(((0x148 + a4) + 0x0));
                t75 = (int)(((unsigned int)t74 >> 18) & 0x3);
                t76 = *(int *)(((0xDC + ((int)stk + 8)) + (t75 << 2)));
                *(unsigned int *)((a4 + 0x124)) = t76;
                t77 = *(int *)(((0x148 + a4) + 0x0));
                t78 = (int)(((unsigned int)t77 >> 18) & 0x3);
                t79 = *(int *)(((0xDC + ((int)stk + 8)) + (t78 << 2)));
                *(unsigned int *)((a4 + 0x128)) = t79;
                *(float *)((a4 + 0x38)) = 0.0f;
                t80 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t80 & 0x7F);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = 0.0f;
                t81 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t81 & 0xF9);
            }
                break;
            case 2:
            {
                t82 = *(int *)(((int)stk + 8));
                t83 = *(int *)((a4 + 0x28));
                t84 = *(short *)((t82 + 0x86));
                t85 = *(short *)((t83 + 0x0));
                t86 = *(signed char *)((a4 + 0x14A));
                t87 = *(int *)0xC1EE210;
                if ((t86 & 128) == 0) {
                    if (t87 == 2) {
                        t88 = *(int *)0xC1EE214;
                        if (t88 != 4) {
                            t89 = *(int *)0xC1EE214;
                            if (t89 != 12) {
                                t90 = *(int *)0xC1EE214;
                                if (t90 != 15) {
                                    if ((int)(unsigned short)((t85 - t84) + 0x1000) > (int)0xE000) {
                                        *(unsigned int *)((a4 + 0x110)) = 0xC907360;
                                        *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                        *(unsigned int *)((a4 + 0x128)) = 0xC0D5730;
                                    } else {
                                        if ((int)(unsigned short)((t85 - t84) + 0x1000) > (int)0xC000) {
                                            *(unsigned int *)(((0x110 + a4) + 0x0)) = 0xC90A900;
                                            *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                            *(unsigned int *)((a4 + 0x128)) = 0xC0D5730;
                                        } else {
                                            if ((int)(unsigned short)((t85 - t84) + 0x1000) > (int)0xA000) {
                                                *(unsigned int *)((a4 + 0x110)) = 0xC902298;
                                                *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                                *(unsigned int *)((a4 + 0x128)) = 0xC0D5730;
                                            } else {
                                                if ((int)(unsigned short)((t85 - t84) + 0x1000) > (int)0x8000) {
                                                    *(unsigned int *)((a4 + 0x110)) = 0xC8FE818;
                                                    *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                                    *(unsigned int *)((a4 + 0x128)) = 0xC0D5730;
                                                } else {
                                                    if ((int)(unsigned short)((t85 - t84) + 0x1000) > (int)0x6000) {
                                                        *(unsigned int *)((a4 + 0x110)) = 0xC900390;
                                                        *(unsigned int *)((a4 + 0x124)) = 0xC0D5730;
                                                        *(unsigned int *)((a4 + 0x128)) = 0xC0D3068;
                                                    } else {
                                                        if ((int)(unsigned short)((t85 - t84) + 0x1000) > (int)0x4000) {
                                                            *(unsigned int *)(((0x110 + a4) + 0x0)) = 0xC908CF8;
                                                            *(unsigned int *)((a4 + 0x124)) = 0xC0D5730;
                                                            *(unsigned int *)((a4 + 0x128)) = 0xC0D3068;
                                                        } else {
                                                            if ((int)(unsigned short)((t85 - t84) + 0x1000) > (int)0x2000) {
                                                                *(unsigned int *)(((0x110 + a4) + 0x0)) = 0xC9057E8;
                                                                *(unsigned int *)((a4 + 0x124)) = 0xC0D5730;
                                                                *(unsigned int *)((a4 + 0x128)) = 0xC0D3068;
                                                            } else {
                                                                *(unsigned int *)((a4 + 0x110)) = 0xC903E20;
                                                                *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                                                *(unsigned int *)((a4 + 0x128)) = 0xC0D5730;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    *(unsigned int *)((a4 + 0x110)) = 0xC903E20;
                                    *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                    *(unsigned int *)((a4 + 0x128)) = 0xC0D5730;
                                }
                            } else {
                                *(unsigned int *)((a4 + 0x110)) = 0xC903E20;
                                *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                *(unsigned int *)((a4 + 0x128)) = 0xC0D5730;
                            }
                        } else {
                            *(unsigned int *)((a4 + 0x110)) = 0xC903E20;
                            *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                            *(unsigned int *)((a4 + 0x128)) = 0xC0D5730;
                        }
                    } else {
                        if ((int)(unsigned short)((t85 - t84) + 0x1000) > (int)0xE000) {
                            *(unsigned int *)((a4 + 0x110)) = 0xC907360;
                            *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                            *(unsigned int *)((a4 + 0x128)) = 0xC0D5730;
                        } else {
                            if ((int)(unsigned short)((t85 - t84) + 0x1000) > (int)0xC000) {
                                *(unsigned int *)(((0x110 + a4) + 0x0)) = 0xC90A900;
                                *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                *(unsigned int *)((a4 + 0x128)) = 0xC0D5730;
                            } else {
                                if ((int)(unsigned short)((t85 - t84) + 0x1000) > (int)0xA000) {
                                    *(unsigned int *)((a4 + 0x110)) = 0xC902298;
                                    *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                    *(unsigned int *)((a4 + 0x128)) = 0xC0D5730;
                                } else {
                                    if ((int)(unsigned short)((t85 - t84) + 0x1000) > (int)0x8000) {
                                        *(unsigned int *)((a4 + 0x110)) = 0xC8FE818;
                                        *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                        *(unsigned int *)((a4 + 0x128)) = 0xC0D5730;
                                    } else {
                                        if ((int)(unsigned short)((t85 - t84) + 0x1000) > (int)0x6000) {
                                            *(unsigned int *)((a4 + 0x110)) = 0xC900390;
                                            *(unsigned int *)((a4 + 0x124)) = 0xC0D5730;
                                            *(unsigned int *)((a4 + 0x128)) = 0xC0D3068;
                                        } else {
                                            if ((int)(unsigned short)((t85 - t84) + 0x1000) > (int)0x4000) {
                                                *(unsigned int *)(((0x110 + a4) + 0x0)) = 0xC908CF8;
                                                *(unsigned int *)((a4 + 0x124)) = 0xC0D5730;
                                                *(unsigned int *)((a4 + 0x128)) = 0xC0D3068;
                                            } else {
                                                if ((int)(unsigned short)((t85 - t84) + 0x1000) > (int)0x2000) {
                                                    *(unsigned int *)(((0x110 + a4) + 0x0)) = 0xC9057E8;
                                                    *(unsigned int *)((a4 + 0x124)) = 0xC0D5730;
                                                    *(unsigned int *)((a4 + 0x128)) = 0xC0D3068;
                                                } else {
                                                    *(unsigned int *)((a4 + 0x110)) = 0xC903E20;
                                                    *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                                    *(unsigned int *)((a4 + 0x128)) = 0xC0D5730;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (t87 == 2) {
                        t139 = *(int *)0xC1EE214;
                        if (t139 != 4) {
                            t140 = *(int *)0xC1EE214;
                            if (t140 != 12) {
                                t141 = *(int *)0xC1EE214;
                                if (t141 != 15) {
                                    if ((int)(unsigned short)((t85 - t84) + 0x1000) > (int)0xE000) {
                                        *(unsigned int *)((a4 + 0x110)) = 0xC916E40;
                                        *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                        *(unsigned int *)((a4 + 0x128)) = 0xC0D57A0;
                                    } else {
                                        if ((int)(unsigned short)((t85 - t84) + 0x1000) > (int)0xC000) {
                                            *(unsigned int *)(((0x110 + a4) + 0x0)) = 0xC91A5C0;
                                            *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                            *(unsigned int *)((a4 + 0x128)) = 0xC0D5780;
                                        } else {
                                            if ((int)(unsigned short)((t85 - t84) + 0x1000) > (int)0xA000) {
                                                *(unsigned int *)((a4 + 0x110)) = 0xC9100A8;
                                                *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                                *(unsigned int *)((a4 + 0x128)) = 0xC0D57C0;
                                            } else {
                                                if ((int)(unsigned short)((t85 - t84) + 0x1000) > (int)0x8000) {
                                                    *(unsigned int *)((a4 + 0x110)) = 0xC90C478;
                                                    *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                                    *(unsigned int *)((a4 + 0x128)) = 0xC0D5760;
                                                } else {
                                                    if ((int)(unsigned short)((t85 - t84) + 0x1000) > (int)0x6000) {
                                                        *(unsigned int *)((a4 + 0x110)) = 0xC90E230;
                                                        *(unsigned int *)((a4 + 0x124)) = 0xC0D57B0;
                                                        *(unsigned int *)((a4 + 0x128)) = 0xC0D3068;
                                                    } else {
                                                        if ((int)(unsigned short)((t85 - t84) + 0x1000) > (int)0x4000) {
                                                            *(unsigned int *)(((0x110 + a4) + 0x0)) = 0xC918988;
                                                            *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                                            *(unsigned int *)((a4 + 0x128)) = 0xC0D5770;
                                                        } else {
                                                            if ((int)(unsigned short)((t85 - t84) + 0x1000) > (int)0x2000) {
                                                                *(unsigned int *)(((0x110 + a4) + 0x0)) = 0xC913CC8;
                                                                *(unsigned int *)((a4 + 0x124)) = 0xC0D5790;
                                                                *(unsigned int *)((a4 + 0x128)) = 0xC0D3068;
                                                            } else {
                                                                *(unsigned int *)((a4 + 0x110)) = 0xC912130;
                                                                *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                                                *(unsigned int *)((a4 + 0x128)) = 0xC0D5750;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    *(unsigned int *)((a4 + 0x110)) = 0xC912130;
                                    *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                    *(unsigned int *)((a4 + 0x128)) = 0xC0D5750;
                                }
                            } else {
                                *(unsigned int *)((a4 + 0x110)) = 0xC912130;
                                *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                *(unsigned int *)((a4 + 0x128)) = 0xC0D5750;
                            }
                        } else {
                            *(unsigned int *)((a4 + 0x110)) = 0xC912130;
                            *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                            *(unsigned int *)((a4 + 0x128)) = 0xC0D5750;
                        }
                    } else {
                        if ((int)(unsigned short)((t85 - t84) + 0x1000) > (int)0xE000) {
                            *(unsigned int *)((a4 + 0x110)) = 0xC916E40;
                            *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                            *(unsigned int *)((a4 + 0x128)) = 0xC0D57A0;
                        } else {
                            if ((int)(unsigned short)((t85 - t84) + 0x1000) > (int)0xC000) {
                                *(unsigned int *)(((0x110 + a4) + 0x0)) = 0xC91A5C0;
                                *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                *(unsigned int *)((a4 + 0x128)) = 0xC0D5780;
                            } else {
                                if ((int)(unsigned short)((t85 - t84) + 0x1000) > (int)0xA000) {
                                    *(unsigned int *)((a4 + 0x110)) = 0xC9100A8;
                                    *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                    *(unsigned int *)((a4 + 0x128)) = 0xC0D57C0;
                                } else {
                                    if ((int)(unsigned short)((t85 - t84) + 0x1000) > (int)0x8000) {
                                        *(unsigned int *)((a4 + 0x110)) = 0xC90C478;
                                        *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                        *(unsigned int *)((a4 + 0x128)) = 0xC0D5760;
                                    } else {
                                        if ((int)(unsigned short)((t85 - t84) + 0x1000) > (int)0x6000) {
                                            *(unsigned int *)((a4 + 0x110)) = 0xC90E230;
                                            *(unsigned int *)((a4 + 0x124)) = 0xC0D57B0;
                                            *(unsigned int *)((a4 + 0x128)) = 0xC0D3068;
                                        } else {
                                            if ((int)(unsigned short)((t85 - t84) + 0x1000) > (int)0x4000) {
                                                *(unsigned int *)(((0x110 + a4) + 0x0)) = 0xC918988;
                                                *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                                *(unsigned int *)((a4 + 0x128)) = 0xC0D5770;
                                            } else {
                                                if ((int)(unsigned short)((t85 - t84) + 0x1000) > (int)0x2000) {
                                                    *(unsigned int *)(((0x110 + a4) + 0x0)) = 0xC913CC8;
                                                    *(unsigned int *)((a4 + 0x124)) = 0xC0D5790;
                                                    *(unsigned int *)((a4 + 0x128)) = 0xC0D3068;
                                                } else {
                                                    *(unsigned int *)((a4 + 0x110)) = 0xC912130;
                                                    *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                                    *(unsigned int *)((a4 + 0x128)) = 0xC0D5750;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                *(float *)((a4 + 0x114)) = 10.0f;
                t214 = *(int *)((a4 + 0x118));
                u215 = *(float *)((a4 + 0x114));
                t216 = *(int *)((a4 + 0x110));
                FcvStoreBuffer(t216, t214, u215);
                t218 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t218 | 0x80);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = 10.0f;
                t219 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t219 & 0xF9);
                t220 = *(signed char *)((a4 + 0x14B));
                if ((t220 & 1) != 0) {
                    Chat_TellDestination();
                } else {
                    Chat_Direction();
                }
            }
                break;
            case 4:
            {
            }
                break;
            case 6:
            {
                t224 = *(int *)((a4 + 0x34));
                if (t224 != 0xC8FE818) {
                    if (t224 != 0xC900390) {
                        if (t224 != 0xC902298) {
                            if (t224 == 0xC903E20) {
                                *(unsigned int *)((a4 + 0x34)) = 0xC904DA4;
                                *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                *(unsigned int *)((a4 + 0x128)) = 0xC0D5740;
                            } else {
                                if (t224 != 0xC9057E8) {
                                    if (t224 != 0xC907360) {
                                        if (t224 != 0xC908CF8) {
                                            if (t224 != 0xC90A900) {
                                                if (t224 != 0xC90C478) {
                                                    if (t224 != 0xC90E230) {
                                                        if (t224 != 0xC9100A8) {
                                                            if (t224 != 0xC912130) {
                                                                if (t224 != 0xC913CC8) {
                                                                    if (t224 != 0xC916E40) {
                                                                        if (t224 != 0xC918988) {
                                                                            if (t224 == 0xC91A5C0) {
                                                                                *(unsigned int *)((a4 + 0x34)) = 0xC91B2D4;
                                                                                *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                                                                *(unsigned int *)((a4 + 0x128)) = 0xC0D57D0;
                                                                            }
                                                                        } else {
                                                                            *(unsigned int *)((a4 + 0x34)) = 0xC91984C;
                                                                            *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                                                            *(unsigned int *)((a4 + 0x128)) = 0xC0D57D0;
                                                                        }
                                                                    } else {
                                                                        *(unsigned int *)((a4 + 0x34)) = 0xC917E84;
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)((a4 + 0x34)) = 0xC914F1C;
                                                                    *(unsigned int *)((a4 + 0x124)) = 0xC0D57D0;
                                                                    *(unsigned int *)((a4 + 0x128)) = 0xC0D3068;
                                                                }
                                                            } else {
                                                                *(unsigned int *)((a4 + 0x34)) = 0xC913174;
                                                                *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                                                *(unsigned int *)((a4 + 0x128)) = 0xC0D57D0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)((a4 + 0x34)) = 0xC91150C;
                                                            *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                                            *(unsigned int *)((a4 + 0x128)) = 0xC0D57D0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)((a4 + 0x34)) = 0xC90F424;
                                                        *(unsigned int *)((a4 + 0x124)) = 0xC0D57D0;
                                                        *(unsigned int *)((a4 + 0x128)) = 0xC0D3068;
                                                    }
                                                } else {
                                                    *(unsigned int *)((a4 + 0x34)) = 0xC90D5DC;
                                                    *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                                    *(unsigned int *)((a4 + 0x128)) = 0xC0D57D0;
                                                }
                                            } else {
                                                *(unsigned int *)((a4 + 0x34)) = 0xC90B914;
                                                *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                                *(unsigned int *)((a4 + 0x128)) = 0xC0D5740;
                                            }
                                        } else {
                                            *(unsigned int *)((a4 + 0x34)) = 0xC909D3C;
                                            *(unsigned int *)((a4 + 0x124)) = 0xC0D5740;
                                            *(unsigned int *)((a4 + 0x128)) = 0xC0D3068;
                                        }
                                    } else {
                                        *(unsigned int *)((a4 + 0x34)) = 0xC9082E4;
                                        *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                        *(unsigned int *)((a4 + 0x128)) = 0xC0D5740;
                                    }
                                } else {
                                    *(unsigned int *)((a4 + 0x34)) = 0xC90682C;
                                    *(unsigned int *)((a4 + 0x124)) = 0xC0D5740;
                                    *(unsigned int *)((a4 + 0x128)) = 0xC0D3068;
                                }
                            }
                        } else {
                            *(unsigned int *)((a4 + 0x34)) = 0xC9032DC;
                            *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                            *(unsigned int *)((a4 + 0x128)) = 0xC0D5740;
                        }
                    } else {
                        *(unsigned int *)((a4 + 0x34)) = 0xC901764;
                        *(unsigned int *)((a4 + 0x124)) = 0xC0D5740;
                        *(unsigned int *)((a4 + 0x128)) = 0xC0D3068;
                    }
                } else {
                    *(unsigned int *)((a4 + 0x34)) = 0xC8FF7FC;
                    *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                    *(unsigned int *)((a4 + 0x128)) = 0xC0D5740;
                }
                *(float *)((a4 + 0x38)) = 0.0f;
                t285 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t285 & 0x7F);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = 0.0f;
                t286 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t286 & 0xF9);
            }
                break;
            case 8:
            {
                *(unsigned int *)((a4 + 0x34)) = 0xC945094;
                *(float *)((a4 + 0x38)) = 0.0f;
                t287 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t287 & 0x7F);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = 0.0f;
                t288 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t288 & 0xF9);
                *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
                *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
                FUN_0c061b14();
            }
                break;
            case 10:
            {
                t290 = extRand();
                t291 = *(int *)(((0xC4 + ((int)stk + 8)) + ((t290 & 0x1) << 2)));
                *(unsigned int *)((a4 + 0x34)) = t291;
                *(float *)((a4 + 0x38)) = 0.0f;
                t292 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t292 & 0x7F);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = 0.0f;
                t293 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t293 & 0xF9);
                *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
                *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
                FUN_0c061b14();
            }
                break;
            case 12:
            {
                t295 = extRand();
                t296 = *(int *)(((((0x1 & t295) << 2) + (0xBC + ((int)stk + 8))) + 0x0));
                *(unsigned int *)((a4 + 0x34)) = t296;
                *(float *)((a4 + 0x38)) = 0.0f;
                t297 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t297 & 0x7F);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = 0.0f;
                t298 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t298 & 0xF9);
                t299 = *(int *)((((0xB4 + ((int)stk + 8)) + ((0x1 & t295) << 2)) + 0x0));
                *(unsigned int *)(((0x124 + a4) + 0x0)) = t299;
                t300 = *(int *)(((((0x1 & t295) << 2) + (0xAC + ((int)stk + 8))) + 0x0));
                *(unsigned int *)((a4 + 0x128)) = t300;
                FUN_0c061b14();
            }
                break;
            case 14:
            {
                extRand();
                t303 = *(int *)(((0x0 + (0xA8 + ((int)stk + 8))) + 0x0));
                *(unsigned int *)((a4 + 0x34)) = t303;
                *(float *)((a4 + 0x38)) = 0.0f;
                t304 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t304 & 0x7F);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = 0.0f;
                t305 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t305 & 0xF9);
                t306 = *(int *)((((0xA4 + ((int)stk + 8)) + 0x0) + 0x0));
                *(unsigned int *)(((0x124 + a4) + 0x0)) = t306;
                t307 = *(int *)(((0x0 + (0xA0 + ((int)stk + 8))) + 0x0));
                *(unsigned int *)((a4 + 0x128)) = t307;
            }
                break;
            case 16:
            {
                extRand();
                t309 = *(int *)(((0x0 + (0x9C + ((int)stk + 8))) + 0x0));
                *(unsigned int *)((a4 + 0x34)) = t309;
                *(float *)((a4 + 0x38)) = 0.0f;
                t310 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t310 & 0x7F);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = 0.0f;
                t311 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t311 & 0xF9);
                t312 = *(int *)((((0x98 + ((int)stk + 8)) + 0x0) + 0x0));
                *(unsigned int *)(((0x124 + a4) + 0x0)) = t312;
                t313 = *(int *)(((0x0 + (0x94 + ((int)stk + 8))) + 0x0));
                *(unsigned int *)((a4 + 0x128)) = t313;
            }
                break;
            case 18:
            {
                t314 = *(int *)(((int)stk + 8));
                t315 = *(int *)((a4 + 0x28));
                t316 = *(short *)((t314 + 0x86));
                t317 = *(short *)((t315 + 0x0));
                if ((int)(unsigned short)((t317 - t316) + 0x1000) > (int)0xE000) {
                    *(unsigned int *)((a4 + 0x34)) = 0xC92BB18;
                    *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
                    *(unsigned int *)((a4 + 0x128)) = 0xC0D57F8;
                } else {
                    if ((int)(unsigned short)((t317 - t316) + 0x1000) > (int)0xC000) {
                        *(unsigned int *)((a4 + 0x34)) = 0xC92E500;
                        *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
                        *(unsigned int *)((a4 + 0x128)) = 0xC0D57F8;
                    } else {
                        if ((int)(unsigned short)((t317 - t316) + 0x1000) > (int)0xA000) {
                            *(unsigned int *)((a4 + 0x34)) = 0xC92796C;
                            *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
                            *(unsigned int *)((a4 + 0x128)) = 0xC0D57F8;
                        } else {
                            if ((int)(unsigned short)((t317 - t316) + 0x1000) > (int)0x8000) {
                                *(unsigned int *)((a4 + 0x34)) = 0xC924E04;
                                *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
                                *(unsigned int *)((a4 + 0x128)) = 0xC0D57F8;
                            } else {
                                if ((int)(unsigned short)((t317 - t316) + 0x1000) > (int)0x6000) {
                                    *(unsigned int *)((a4 + 0x34)) = 0xC926538;
                                    *(unsigned int *)((a4 + 0x124)) = 0xC0D5790;
                                    *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
                                } else {
                                    if ((int)(unsigned short)((t317 - t316) + 0x1000) > (int)0x4000) {
                                        *(unsigned int *)((a4 + 0x34)) = 0xC92D18C;
                                        *(unsigned int *)((a4 + 0x124)) = 0xC0D5790;
                                        *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
                                    } else {
                                        if ((int)(unsigned short)((t317 - t316) + 0x1000) > (int)0x2000) {
                                            *(unsigned int *)((a4 + 0x34)) = 0xC92A7A4;
                                            *(unsigned int *)((a4 + 0x124)) = 0xC0D5790;
                                            *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
                                        } else {
                                            *(unsigned int *)((a4 + 0x34)) = 0xC929130;
                                            *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
                                            *(unsigned int *)((a4 + 0x128)) = 0xC0D57F8;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                *(float *)((a4 + 0x38)) = 0.0f;
                t338 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t338 & 0x7F);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = 0.0f;
                t339 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t339 & 0xF9);
                Drv_StartAction(0x7, 0x0, 0x0);
                FUN_0c061b14();
            }
                break;
            case 20:
            {
                t342 = extRand();
                t343 = *(int *)(((((0x3 & t342) << 2) + (((int)stk + 8) + 0x74)) + 0x0));
                *(unsigned int *)((a4 + 0x34)) = t343;
                *(float *)((a4 + 0x38)) = 0.0f;
                t344 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t344 & 0x7F);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = 0.0f;
                t345 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t345 & 0xF9);
                *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
                *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
                FUN_0c061b14();
            }
                break;
            case 22:
            {
                *(unsigned int *)((a4 + 0x110)) = 0xC979F64;
                *(float *)((a4 + 0x114)) = 0.0f;
                t347 = *(int *)((a4 + 0x118));
                u348 = *(float *)((a4 + 0x114));
                t349 = *(int *)((a4 + 0x110));
                FcvStoreBuffer(t349, t347, u348);
                t351 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t351 | 0x80);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = 15.0f;
                t352 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t352 & 0xF9);
                *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
                *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
            }
                break;
            case 24:
            {
                *(unsigned int *)((a4 + 0x110)) = 0xC979F64;
                *(unsigned int *)((a4 + 0x34)) = 0xC979F64;
                *(float *)((a4 + 0x114)) = 73.0f;
                *(float *)((a4 + 0x38)) = 73.0f;
                t353 = *(int *)((a4 + 0x118));
                u354 = *(float *)((a4 + 0x114));
                t355 = *(int *)((a4 + 0x110));
                FcvStoreBuffer(t355, t353, u354);
                t357 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t357 & 0x7F);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = 0.0f;
                t358 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t358 & 0xF9);
                *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
                *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
            }
                break;
            case 26:
            {
                t359 = *(int *)0xC0E49E0;
                t360 = (int)((unsigned int)t359 % (unsigned int)0x5);
                t361 = *(int *)(((((int)stk + 8) + 0x60) + (t360 << 2)));
                *(unsigned int *)((a4 + 0x110)) = t361;
                *(float *)((a4 + 0x114)) = 0.0f;
                t362 = *(int *)((a4 + 0x118));
                u363 = *(float *)((a4 + 0x114));
                t364 = *(int *)((a4 + 0x110));
                FcvStoreBuffer(t364, t362, u363);
                t366 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t366 | 0x80);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = 15.0f;
                t367 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t367 & 0xF9);
                *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
                *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
            }
                break;
            case 28:
            {
                t368 = *(int *)0xC0E49E0;
                t369 = (int)((unsigned int)t368 % (unsigned int)0xB);
                t370 = *(int *)(((((int)stk + 8) + 0x34) + (t369 << 2)));
                *(unsigned int *)((a4 + 0x110)) = t370;
                *(float *)((a4 + 0x114)) = 0.0f;
                t371 = *(int *)((a4 + 0x118));
                u372 = *(float *)((a4 + 0x114));
                t373 = *(int *)((a4 + 0x110));
                FcvStoreBuffer(t373, t371, u372);
                t375 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t375 | 0x80);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = 5.0f;
                t376 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t376 & 0xF9);
                *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
                *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
            }
                break;
            default:
            {
                t377 = *(int *)0xC2AE340;
                t378 = *(int *)(((((int)stk + 8) + 0x24) + (t377 << 2)));
                *(unsigned int *)((a4 + 0x110)) = t378;
                t379 = *(int *)0xC2AE340;
                if (t379 == 3) {
                    Drv_StartAction(0x8, 0x0, 0x0);
                }
                *(float *)((a4 + 0x114)) = 0.0f;
                t382 = *(int *)((a4 + 0x118));
                u383 = *(float *)((a4 + 0x114));
                t384 = *(int *)((a4 + 0x110));
                FcvStoreBuffer(t384, t382, u383);
                t386 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t386 | 0x80);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = 5.0f;
                t387 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t387 & 0xF9);
                t388 = *(int *)0xC2AE340;
                t389 = *(int *)((((t388 << 2) + (((int)stk + 8) + 0x14)) + 0x0));
                *(unsigned int *)((a4 + 0x124)) = t389;
                t390 = *(int *)0xC2AE340;
                t391 = *(int *)((((t390 << 2) + (((int)stk + 8) + 0x4)) + 0x0));
                *(unsigned int *)((a4 + 0x128)) = t391;
            }
                break;
        }
    }
}
