/* Straight-line functions with calls and guards (batch gen_cn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Chat_Direction(void);
int Chat_TellDestination(void);
int Drv_StartAction(int, int, int);
int carSpreadWheelLoad(float, float, float);
int SetLandmark(int);
int ExecRenderTexture1st(void);
int ExecRenderTexture2nd(void);
int ExecEndRoll(void);
int SetScreen(int);
extern int SetWindow();
int windowOpenStep(void);
int windowEnterStep(void);
int windowClose(void);
int callBoxAdvice(void);
int callWarnning(int);
int CheckBoxFlag(int);
int GetNowLanguage(int);
int Start_Pass_Default_Sprite(int);
int PTime_Pos_Set(float, float);
int PTime_Scale_Set(float, float);
int PTime_Color_Set(float, float, float);
int Init_Window_Sprite(int);
int Start_PoleMarriageKiss(void);
int Start_LoadSave(int, int);
int End_LoadSave(int);
int Chat_Iraira(void);
int psgFreeIpBuff(int);
int psgStepBlend(int);
int psgUpdatePartTracks(int);
int FUN_0c074740(void);
int FUN_0c077170(int, int);
int nlSqrt(int, int);
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
int replayChangeControl(int);
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
int Level_Calc(int a4);
int DispBackupHeadInfo(int a4, int a5, int a6);
int mwRnaCreate(int a4, int a5);
int FUN_0c07bc00(int a4, int a5);
int colliSphereSphere(int a4, int a5);
int vmsio_block_write(int a4, int a5, int a6);
void carResistance(int a4);
void ExecSpark(void);
int pcarLaneChange(int a4);
int gameState13(void);
int windowSaveData(void);
int psgTimeDispExec(void);
int menuCrazyBoxHandler(void);
int psgFrameState4(int a4);
void psgEnterState3(int a4, int a5);


int FUN_0c074970(void)
{
    return FUN_0c074740();
}

void kmiDACControl(void)
{
    
}

int Level_Calc(int a4)
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

int DispBackupHeadInfo(int a4, int a5, int a6)
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
                    t26 = nlSqrt(t6, ((signed char)(((t25 << 1) + t25) << 2) + (((((t24 << 2) << 2) << 1) + 0xC274298) + 0x8)));
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

int pcarLaneChange(int a4)
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
    ExecRenderTexture1st();
    t2 = replayChangeControl(0x3);
    if (t2 == 0) {
        exec_loop_Replay();
    }
    ExecRenderTexture2nd();
    return ExecEndRoll();
}


int psgTimeDispExec(void)
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
                    PTime_Pos_Set(u16, (u14 + 0.25f * (u15 - u13)));
                    t18 = *(int *)0xC1EE7D4;
                    t19 = *(int *)0xC1EE7CC;
                    t22 = 0x44;
                    if ((int)t19 <= (int)t18) {
                        t20 = PTime_Color_Set(1.0f, 0.329999983f, 0.0f);
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
                        PTime_Pos_Set(u39, (u37 + 0.25f * (u38 - u36)));
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
                        t87 = PTime_Scale_Set(u86, u85);
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
                PTime_Pos_Set(u127, (u125 + 0.25f * (u126 - u124)));
                t129 = *(int *)0xC1EE7D4;
                t130 = *(int *)0xC1EE7CC;
                t133 = 0x44;
                if ((int)t130 <= (int)t129) {
                    t131 = PTime_Color_Set(1.0f, 0.329999983f, 0.0f);
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
            PTime_Pos_Set(u142, u141);
            t144 = *(int *)0xC1EE210;
            t146 = t144;
            if (t144 != 2) {
                t145 = Start_Pass_Default_Sprite(0xC1EE7CC);
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

int menuCrazyBoxHandler(void)
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
    t2 = CheckBoxFlag(t1);
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
            Init_Window_Sprite(0x1);
            Init_Window_Sprite(0x2);
        } else {
            if ((int)t26 > (int)0x11) {
                Init_Window_Sprite(0x1);
                Init_Window_Sprite(0x2);
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
                    t46 = GetNowLanguage(0x1);
                    t47 = *(int *)(((0xC0EF6A8 + (((t45 - 2) << 2) << 1)) + (t46 << 2)));
                    menuPutSprites(t47, 0xC2A1A84, (t43 + 0x158), 0xB2);
                }
                t52 = *(int *)0xC2A11EC;
                if ((t52 & 4) != 0) {
                    t53 = *(int *)0xC2A1214;
                    if (t53 == 0) {
                        t54 = *(int *)0xC2A11CC;
                        if ((t54 & 1) != 0) {
                            callBoxAdvice();
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
        Init_Window_Sprite(0x2);
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


