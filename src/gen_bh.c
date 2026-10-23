/* Straight-line functions with calls and guards (batch gen_bh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXB_ExecOneAdx(int);
int ADXB_ExecOneAiff(int);
int ADXB_ExecOneAu(int);
int ADXB_ExecOneSpsd(int);
int ADXB_ExecOneWav(int);
int ADXF_Close(int);
int ADXF_GetStat(int);
int ADXF_LoadPartition(int, int, int, int);
int CheckClipping(float);
int gdc_LandmarkReq(int);
int ResetPinFlag(void);
int ResetBreakBeachFlag(void);
int menuChangeValue(int, int, int);
int putMenuValue(int, int, int, int);
int pedGetSubwayFlag(void);
int pedCarNotInSubway(void);
int nd_StartWait_PutDriver(void);
int End_Pass_Judgement(void);
int Put_Remain_Time_Gauge(int, int);
int Put_Remain_Time_Frame(void);
int Put_Remain_Time_Add(void);
int hudJudgementWobble(void);
int Money_Array(int, int, int);
int nd_SprPut(int, int, float, float);
int End_Ranking(void);
int Put_Ranking_Header(void);
int Reset_Ranking_Wave(void);
int Check_Digit_Disp(int, int);
int Init_DCmini_Standard_Sprite(void);
int Init_Window_Sprite(int);
int Init_DCmini_CarPos(void);
int Start_JumpDistance(int);
int Reset_JumpDistance(void);
int Start_Excellent(void);
int Start_Fault(int);
int Check_Bowling_Pins(void);
int Put_Bowling_Message(void);
int Put_Bowling_Pins(void);
int Init_Balloon(void);
int Proposal_Initialize(void);
int psgUpdatePartTracks(int);
int psgPutMarker(int, int);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlMatrixMode(int);
float nlScalor2(int);
int adxf_purge_all(void);
int GetAverageAngle(int, int, float);
int InitArrow(int);
int MakeKyakuTakeArea(int, int, int, float);
int Psg_SetPosPtr(int, int);
int Put_Max_Combo(void);
int ResetFadeColor(void);
int Sound_Request(int, int);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
extern int _builtin_tas(char *);
int frame_make(void);
int gdFsCreateHnG(int);
int gdFsSetGlobalErrG(int);
int humanDraw(int, int, int, int);
int kdSetGunCallback(void);
int menuCursor(int, int, int);
int menuEnterStep(void);
int menuOpenStep(void);
int menuPutFrame(void);
int menuPutHelpBar(int, float, float);
int menuPutSprites(int, int, int, int);
int mpdrv_dpf(int, ...);
int mpdrv_v2p(int);
int mwRnaErrCallFunc(int, ...);
int mwRnaSetOutPan(int, int);
int ndPuru2Start(int, int, int);
int nd_CarSel_PutCar(int, int, int, int);
int nlAddVector(int, int);
int nlArcTan2(float, float);
int nlGetAverageVector(int, int, int, float, float);
int nlGetPushedMatrix(int);
float nlInnerProduct(int, int);
float nlLength(int, int);
int nlLoadMatrix(int);
int nlObjPutSetFadeColor(float, float, float);
int nlPerspective(int, float, float, float);
int nlPopMatrix(int);
int nlProjectScreen3D(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
int nlScaleVector(int, int, float);
int nlSetCommonTextureOffset(int);
int nlSprPut(int);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nlTranslateV(int);
int nlUnitMatrix(void);
float nlUnitVector(int);
int padPortAConnected(void);
int pedDodgeCheck(int, float, float);
int pedDraw(int, float, float);
int pedPickIdle(int);
int pedStand(int);
int pfColor(int, int, int, int);
int pfSetFont(int);
int pfSize(float, float);
int psgPlayBlend(int, int);
int psgPutShadow(int);
int psgSetState(int, int, int, int);
int putLevelCTFontAssist(int, int, int, int);
int putString(int, int, float, float, float);
int syCfgGetLanguage(int);
int syCfgGetSoundMode(int);
int texLoadIndexed(int);
int vibIsReady(void);
int ndPuru2Stop(void);
int vmsfs_fwrite1(int, int);
int vmsfs_xwrite1(int, int);
int pdGunSetCallback(void);
int camGetOffScript(void);
int gdFsOpenRangeG(int a4, int a5);
int Put_GearBox(void);
int mwRnaSetNumChan(int a4, int a5);
int nlCommonTextureConvertUVnum(int a4);
int ADXB_ExecHndl(int a4);
int gdc_SetStreamAFS(void);
int sysCfgRead(void);
int nd_StartWait_PutCar(void);
int vmsfs_fwrite(int a4, int a5, int a6);
int adxf_purge_all_tail_0c1697c2(int a4);
int psgRoadCheck(int a4);
int gdc_LandmarkLoadExec(void);
int PutStringFixPfont(int a4, int a5, float f4, float f5, float f6, float f7);
int menuItemVibration(int a4);
int menuRuleHandler(void);
int Exec_DCmini_Game4(void);
int Exec_Bowling_Pins(void);
int gdc_Err(void);
int menuItemController(int a4);
int hudDrawJudgement(void);
int nlsndInit(int a4, int a5);
int Exec_Crazy_Jump(void);
int mpdrv_frame_send(void);
int pedUpdate(int a4);
int carRumble(int a4);
int hudDrawFareFrame(void);
int psgFrameState6(int a4);
int Put_Remain_Time(void);
int Init_DCmini(void);
int Put_JumpDistance(void);
int Put_Ranking(void);

int pdGunSetCallback(void)
{
    return kdSetGunCallback();
}


int gdFsOpenRangeG(int a4, int a5)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;
    int t10;

    if ((int)a4 < (int)0xB05E) {
        gdFsSetGlobalErrG(0xFFFFFFE0);
        t10 = 0x0;
    } else {
        t1 = *(int *)0xC177A8C;
        t2 = *(int *)((t1 + 0x18));
        t3 = 0x0;
        t4 = t2;
        for (;;) {
            t5 = *(int *)((t1 + 0x0));
            if ((int)t3 >= (int)t5) {
                t3 = 0xFFFFFFF7;
                gdFsSetGlobalErrG(t3);
                return 0x0;
            }
            t7 = *(short *)((t4 + 0x4C));
            if (t7 == 0) break;
            t4 = (t4 + 0x54);
            t3 = (t3 + 0x1);
        }
        gdFsCreateHnG(t4);
        gdFsSetGlobalErrG(0x0);
        t10 = t4;
    }
    return t10;
}


int mwRnaSetNumChan(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t8;
    int t10;

    if (a4 == 0) {
        t0 = mwRnaErrCallFunc(0xC176680);
        return t0;
    }
    t1 = *(signed char *)((a4 + 0x2));
    if ((int)a5 > (int)(unsigned char)t1) {
        t2 = mwRnaErrCallFunc(0xC176724);
        return t2;
    }
    *(unsigned char *)((a4 + 0x3)) = a5;
    t3 = *(int *)((a4 + 0x38));
    t4 = *(int *)((t3 + 0x0));
    t5 = *(int *)((t4 + 0x1C));
    t6 = ((int (*)(int, int))(t5))(t3, (signed char)a5);
    if (a5 == 1) {
        *(unsigned int *)(((a4 + 0x64) + 0x0)) = 0x0;
        *(unsigned int *)((a4 + 0x68)) = 0x0;
    } else {
        *(unsigned int *)(((a4 + 0x64) + 0x0)) = 0xFFFFFFF1;
        *(unsigned int *)((a4 + 0x68)) = 0xF;
    }
    t8 = *(int *)(((a4 + 0x64) + 0x0));
    mwRnaSetOutPan(a4, 0x0);
    t10 = *(int *)((a4 + 0x68));
    return mwRnaSetOutPan(a4, 0x1);
}

int nlCommonTextureConvertUVnum(int a4)
{
    int t10;
    int t9;
    int t8;
    int t7;
    int t6;
    int t4;
    int t2;
    int t0;

    t10 = 0x0;
    if (a4 != 8) {
        t9 = 0x1;
        if (a4 != 16) {
            t8 = 0x2;
            if (a4 != 32) {
                t7 = 0x3;
                if (a4 != 64) {
                    t6 = 0x4;
                    if (a4 != 0x80) {
                        t4 = 0x5;
                        if (a4 != 0x100) {
                            t2 = 0x6;
                            if (a4 != 0x200) {
                                t0 = a4;
                                if (a4 == 0x400) {
                                    t0 = 0x7;
                                }
                                t2 = t0;
                            }
                            t4 = t2;
                        }
                        t6 = t4;
                    }
                    t7 = t6;
                }
                t8 = t7;
            }
            t9 = t8;
        }
        t10 = t9;
    }
    return t10;
}

int ADXB_ExecHndl(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(short *)((a4 + 0xA8));
    if (t0 != 0) {
        t1 = *(short *)((a4 + 0xA8));
        if (t1 == 2) {
            return ADXB_ExecOneSpsd(a4);
        }
        t2 = *(short *)((a4 + 0xA8));
        if (t2 == 3) {
            return ADXB_ExecOneAiff(a4);
        }
        t3 = *(short *)((a4 + 0xA8));
        if (t3 == 4) {
            return ADXB_ExecOneAu(a4);
        }
        t4 = *(short *)((a4 + 0xA8));
        if (t4 == 1) {
            return ADXB_ExecOneWav(a4);
        }
        return t4;
    }
    return ADXB_ExecOneAdx(a4);
}

int gdc_SetStreamAFS(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = 0x0;
    for (;;) {
        t1 = ADXF_LoadPartition(0x1, 0xC08C3F8, 0xC269AF8, 0xA);
        if (t1 == 0) break;
        t0 = (t0 + 0x1);
        if ((int)t0 > (int)0xA) {
            t2 = *(int *)0xC1EE208;
            *(unsigned int *)0xC1EE208 = (t2 + 0x1);
        }
    }
    t3 = 0x0;
    for (;;) {
        t4 = ADXF_LoadPartition(0x2, 0xC08C404, 0xC269B24, 0x2BC);
        if (t4 == 0) break;
        t3 = (t3 + 0x1);
        if ((int)t3 > (int)0xA) {
            t5 = *(int *)0xC1EE208;
            *(unsigned int *)0xC1EE208 = (t5 + 0x1);
        }
    }
    return t4;
}



int vmsfs_fwrite(int a4, int a5, int a6)
{
    int t25;
    int t0;
    int t1;
    int t23;
    int t2;
    int t11;
    int t3;
    int t7;
    int t4;
    int t5;
    int t6;
    int t13;
    int t17;
    int t14;
    int t15;
    int t16;
    int t21;

    t25 = 0xFFFFFF00;
    if (a4 != 0) {
        t0 = *(int *)((a4 + 0x28));
        t1 = *(signed char *)((((t0 * 0x148) + 0xC2EE990) + 0x2));
        t23 = 0xFFFFFF01;
        if (t1 != 0) {
            t2 = *(int *)((a4 + 0x4));
            if (t2 != 1) {
                t11 = 0xFFFFFF0B;
                if (t2 == 2) {
                    t3 = *(int *)((a4 + 0x28));
                    *(unsigned int *)(((0xC2EE990 + (t3 * 0x148)) + 0x30)) = 0x1;
                    *(unsigned int *)(((0xC2EE990 + (t3 * 0x148)) + 0x34)) = a6;
                    t7 = 0x0;
                    if ((int)a6 > 0) {
                        t4 = 0x0;
                        t5 = a5;
                        for (;;) {
                            t6 = vmsfs_xwrite1(a4, t5);
                            if ((int)t6 < 0) break;
                            t4 = (t4 + 0x1);
                            t5 = (t5 + 0x200);
                            if ((int)t4 >= (int)a6) {
                                return 0x0;
                            }
                        }
                        t7 = t6;
                    }
                    t11 = t7;
                }
                t21 = t11;
            } else {
                t13 = *(int *)((a4 + 0x28));
                *(unsigned int *)(((0xC2EE990 + (t13 * 0x148)) + 0x30)) = 0x1;
                *(unsigned int *)(((0xC2EE990 + (t13 * 0x148)) + 0x34)) = a6;
                t17 = 0x0;
                if ((int)a6 > 0) {
                    t14 = 0x0;
                    t15 = a5;
                    for (;;) {
                        t16 = vmsfs_fwrite1(a4, t15);
                        if ((int)t16 < 0) break;
                        t14 = (t14 + 0x1);
                        t15 = (t15 + 0x200);
                        if ((int)t14 >= (int)a6) {
                            return 0x0;
                        }
                    }
                    t17 = t16;
                }
                t21 = t17;
            }
            t23 = t21;
        }
        t25 = t23;
    }
    return t25;
}

int adxf_purge_all_tail_0c1697c2(int a4)
{
    int t1;

    adxf_purge_all();
    *(unsigned int *)0xFF00001C = ((a4 & 0xFFFFF7FF) | 0x800);
    t1 = *(int *)0xFF00001C;
    *(unsigned int *)0xFF00001C = ((t1 & 0xFFFFFFF7) | 0x8);
    return ((t1 & 0xFFFFFFF7) | 0x8);
}





















