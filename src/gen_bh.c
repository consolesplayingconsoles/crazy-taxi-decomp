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

int Put_GearBox(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0xC2A8C60;
    t1 = *(int *)((t0 + 0x0));
    t2 = 0x0;
    if (t1 != 0) {
        t2 = 0x1;
    }
    t3 = *(int *)0xC2A8DE8;
    if (t3 != t2) {
        Sound_Request(0xBA9, 0x0);
        *(unsigned int *)0xC2A8DE8 = t2;
    }
    if (t2 == 0) {
        *(unsigned int *)0xC2A892C = 0x12;
    } else {
        *(unsigned int *)0xC2A892C = 0x11;
    }
    return nlSprPut(0xC2A892C);
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

int sysCfgRead(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = syCfgGetSoundMode(0xC2A11BC);
    if (t0 != 0) {
        *(unsigned int *)0xC2A11BC = 0x0;
    }
    t1 = syCfgGetLanguage(0xC2A11C0);
    if (t1 == 0) {
        t2 = *(int *)0xC2A11C0;
        if (t2 != 0) {
            if (t2 != 1) {
                if (t2 != 2) {
                    if (t2 != 3) {
                        if (t2 != 4) {
                            *(unsigned int *)0xC2A11C0 = 0x1;
                        } else {
                            *(unsigned int *)0xC2A11C0 = 0x4;
                        }
                    } else {
                        *(unsigned int *)0xC2A11C0 = 0x3;
                    }
                } else {
                    *(unsigned int *)0xC2A11C0 = 0x2;
                }
            } else {
                *(unsigned int *)0xC2A11C0 = 0x1;
            }
        } else {
            *(unsigned int *)0xC2A11C0 = 0x0;
        }
        t3 = t2;
    } else {
        *(unsigned int *)0xC2A11C0 = 0x0;
        t3 = t1;
    }
    return t3;
}

int nd_StartWait_PutCar(void)
{
    int t0;
    int t1;
    int t5;
    int t6;
    int t7;
    int t8;
    int t12;
    int t15;
    int t13;
    int t14;

    t0 = *(int *)0xC2A720C;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 == 4) {
                        *(unsigned int *)0xC12FFF4 = 0x0;
                    }
                } else {
                    *(unsigned int *)0xC12FFF4 = 0x1;
                }
            } else {
                *(unsigned int *)0xC12FFF4 = 0x0;
            }
        } else {
            *(unsigned int *)0xC12FFF4 = 0x1;
        }
    } else {
        *(unsigned int *)0xC12FFF4 = 0x0;
    }
    t1 = *(int *)0xC2A720C;
    if (t1 == 2) {
        *(unsigned int *)0xC12FFF8 = 0x0;
    } else {
        *(unsigned int *)0xC12FFF8 = 0x1;
    }
    nlPushMatrix(0x0);
    nlTranslateV(0xC2A72CC);
    nlRotateAY(0x4000);
    t5 = *(short *)0xC12FFF0;
    t6 = *(int *)0xC12FFF8;
    t7 = *(int *)0xC12FFF4;
    t8 = *(int *)0xC2A72D8;
    nd_CarSel_PutCar(t8, t5, t7, t6);
    nd_StartWait_PutDriver();
    nlPopMatrix(0x1);
    t12 = *(int *)0xC2A720C;
    t15 = t12;
    if (t12 != 1) {
        t13 = *(int *)0xC2A720C;
        if (t13 != 3) {
            t14 = *(short *)0xC12FFF0;
            *(unsigned short *)0xC12FFF0 = (t14 + 0x2000);
        }
        t15 = t13;
    }
    return t15;
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


int gdc_LandmarkLoadExec(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t13;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;

    t0 = *(int *)0xC26E178;
    if (t0 == 1) {
        t1 = *(int *)0xC26E174;
        t2 = ADXF_GetStat(t1);
        if (t2 == 3) {
            *(unsigned int *)0xC0EA3E4 = 0x0;
            t3 = *(int *)0xC26E174;
            ADXF_Close(t3);
            t5 = *(int *)0xC26E17C;
            *(unsigned int *)0xC1EE808 = t5;
            *(unsigned int *)0xC26E178 = 0x0;
            nlSetCommonTextureOffset(0x0);
            return texLoadIndexed(0x7A);
        }
        t13 = t2;
        if (t2 == 4) {
            t7 = *(int *)0xC0EA3E4;
            *(unsigned int *)0xC0EA3E4 = (t7 + 0x1);
            t8 = *(int *)0xC26E17C;
            t9 = gdc_LandmarkReq(t8);
            t10 = *(int *)0xC0EA3E4;
            if ((int)t10 > (int)0xA) {
                t11 = *(int *)0xC1EE208;
                *(unsigned int *)0xC1EE208 = (t11 + 0x1);
            }
            t13 = t9;
        }
        return t13;
    }
    return t0;
}



int menuRuleHandler(void)
{
    int t3;
    int t4;
    int t5;
    int t7;
    int t9;
    int t10;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;

    menuOpenStep();
    menuCursor(0x0, 0x5, 0x0);
    menuPutFrame();
    t3 = *(int *)0xC2A11DC;
    t4 = *(int *)0xC2A1AD8;
    t5 = 0xC0A0758;
    if (t3 == 0) {
        t5 = 0xC0A0740;
    }
    menuPutSprites(t5, 0xC2A1A84, (t4 + 0x8), 0x18);
    t7 = *(int *)0xC2A1AD8;
    menuPutHelpBar(0x0, (float)(-t7), 416.0f);
    t9 = *(int *)0xC2A11D8;
    t10 = *(int *)((((t9 << 2) + 0xC2A11DC) + 0x0));
    putLevelCTFontAssist(0x817, 0xC09E36C, 0x5, t10);
    t12 = *(int *)0xC2A11EC;
    if ((t12 & 0x4) != 0) {
        t13 = *(int *)0xC2A11CC;
        if ((t13 & 2) != 0) {
            t14 = *(int *)0xC2A1214;
            if (t14 == 0) {
                t15 = *(int *)0xC2A11D8;
                t16 = *(int *)((((t15 << 2) + 0xC2A11DC) + 0x0));
                if ((int)t16 < (int)0x4) {
                    t17 = *(int *)0xC2A11D8;
                    t18 = *(int *)((((t17 << 2) + 0xC2A11DC) + 0x0));
                    t19 = *(int *)((0xC0A1FC8 + (t18 << 2)));
                    *(unsigned int *)0xC0EF550 = t19;
                    Voice_Request(0xC0EF550, 0x0, 0x7F, 0x0);
                }
            }
        }
    }
    return menuEnterStep();
}

int Exec_DCmini_Game4(void)
{
    int t8;
    int t9;
    int t19;
    int t10;
    int t15;
    int t11;

    nlObjPutSetFadeColor(0.0f, 1.0f, 1.0f);
    *(float *)0xC2A98A8 = 1.0f;
    *(float *)0xC2A98AC = 1.0f;
    nd_SprPut(0xC2A9898, 0x51, 483.0f, 55.0f);
    nd_SprPut(0xC2A9898, 0x55, 509.0f, 55.0f);
    nlObjPutSetFadeColor(0.0f, 0.299999982f, 1.0f);
    nd_SprPut(0xC2A9898, 0x1E6, 458.0f, 67.0f);
    nd_SprPut(0xC2A9898, 0x1E3, 559.0f, 60.0f);
    nd_SprPut(0xC2A9898, 0x1E4, 595.0f, 60.0f);
    ResetFadeColor();
    t8 = Put_Max_Combo();
    t9 = *(int *)0xC1EE794;
    t19 = t8;
    if (t9 == 0) {
        t10 = *(int *)0xC2A991C;
        t15 = t8;
        if (t10 == 0) {
            t11 = *(int *)0xC2A7614;
            if ((int)t11 >= (int)0xF) {
                *(unsigned int *)0xC2A98F4 = t11;
                Start_Excellent();
            } else {
                Start_Fault(0x0);
            }
            *(unsigned int *)0xC2A991C = 0x1;
            *(unsigned int *)0xC179120 = 0x0;
            t15 = 0x54;
        }
        t19 = t15;
    }
    return t19;
}





int nlsndInit(int a4, int a5)
{
    int t0;
    int t63;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
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
    int t49;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
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
    int t56;

    t0 = *(int *)((a4 + 0xC4));
    *(unsigned int *)0xC2B7718 = t0;
    t63 = 0xFFFFFFFF;
    if ((unsigned int)t0 >= (unsigned int)0x6E0) {
        if (a5 == 0) {
            *(unsigned int *)0xC2B76F0 = 0x200000;
            t1 = *(int *)0xA0702C00;
            *(unsigned int *)0xA0702C00 = ((t1 & 0xFFFE) | 0x1);
            *(unsigned int *)0xA0702800 = a5;
            t2 = *(int *)0xA0702C00;
            *(unsigned int *)0xA0702C00 = ((t2 & 0xFFFE) | 0x1);
            t3 = *(int *)(((a4 + 0x54) + 0x0));
            if ((unsigned int)0x0 < (unsigned int)((unsigned int)t3 >> 2)) {
                t4 = 0x0;
                t5 = 0xA0800000;
                t6 = a4;
                do {
                    t7 = *(int *)((t6 + 0x0));
                    t6 = (t6 + 0x4);
                    *(unsigned int *)((t5 + 0x0)) = t7;
                    t4 = (t4 + 0x1);
                    t5 = (t5 + 0x4);
                } while ((unsigned int)t4 < (unsigned int)((unsigned int)t3 >> 2));
            }
            *(unsigned int *)0xA0800050 = a5;
            t12 = 0x8;
            t13 = 0xA0800060;
            while (t12 != 0) {
                *(unsigned int *)((t13 + 0x0)) = 0xFFFFFFFF;
                t12 = (t12 - 1);
                t13 = (t13 + 0x4);
            }
            t14 = *(int *)0xA0702C00;
            *(unsigned int *)0xA0702C00 = (t14 & 0xFFFE);
            t15 = 0xC2B77DC;
            while ((unsigned int)t15 < (unsigned int)0xC2B783C) {
                *(unsigned int *)((t15 + 0x0)) = 0xFFFFFFFF;
                *(unsigned int *)((t15 + 0x4)) = 0x0;
                *(unsigned int *)((t15 + 0x8)) = 0x0;
                t15 = (t15 + 0xC);
            }
            t16 = ((unsigned int)t3 >> 2);
            t17 = 0xC2B771C;
            t18 = 0xC2B771C;
            while ((unsigned int)t17 < (unsigned int)0xC2B77DC) {
                t18 = t17;
                t16 = 0x0;
                t18 = (t18 + 0x4);
                *(unsigned char *)((t17 + 0x0)) = 0xFFFFFFFF;
                *(unsigned char *)((t17 + 0x1)) = t16;
                t17 = (t17 + 0x18);
                *(unsigned int *)((t18 + 0x4)) = 0xFFFFFFFF;
                *(unsigned int *)((t18 + 0x0)) = 0xFFFFFFFF;
            }
            t19 = *(int *)((a4 + 0x84));
            *(unsigned int *)0xC2B76E8 = (t19 + 0xA0800000);
            t20 = *(int *)((a4 + 0x80));
            *(unsigned int *)0xC2B76EC = (t20 + 0xA0800010);
            t21 = *(int *)((a4 + 0xC8));
            *(unsigned int *)0xC2B76E4 = (0xA0800000 + t21);
            *(unsigned int *)0xC2B76E0 = 0xA0800400;
            *(unsigned int *)0xC2B76F4 = 0x0;
            *(unsigned int *)0xC2B76FC = 0x0;
            *(unsigned int *)0xC2B76DC = 0x0;
            t22 = 0x0;
            for (;;) {
                t23 = *(int *)0xA080005C;
                if (t23 == 0) {
                    t22 = (t22 + 0x1);
                    if ((unsigned int)t22 >= (unsigned int)0x400000) break;
                    continue;
                }
                t24 = *(int *)0xA070289C;
                *(unsigned int *)0xA070289C = (t24 & 0x7F7);
                return 0x0;
            }
            t56 = 0xFFFFFF00;
        } else {
            t49 = 0xFFFFFFFE;
            if (a5 == 0x200) {
                *(unsigned int *)0xC2B76F0 = 0x800000;
                t25 = *(int *)0xA0702C00;
                *(unsigned int *)0xA0702C00 = ((t25 & 0xFFFE) | 0x1);
                *(unsigned int *)0xA0702800 = a5;
                t26 = *(int *)0xA0702C00;
                *(unsigned int *)0xA0702C00 = ((t26 & 0xFFFE) | 0x1);
                t27 = *(int *)(((a4 + 0x54) + 0x0));
                if ((unsigned int)0x0 < (unsigned int)((unsigned int)t27 >> 2)) {
                    t28 = 0x0;
                    t29 = 0xA0800000;
                    t30 = a4;
                    do {
                        t31 = *(int *)((t30 + 0x0));
                        t30 = (t30 + 0x4);
                        *(unsigned int *)((t29 + 0x0)) = t31;
                        t28 = (t28 + 0x1);
                        t29 = (t29 + 0x4);
                    } while ((unsigned int)t28 < (unsigned int)((unsigned int)t27 >> 2));
                }
                *(unsigned int *)0xA0800050 = a5;
                t36 = 0x8;
                t37 = 0xA0800060;
                while (t36 != 0) {
                    *(unsigned int *)((t37 + 0x0)) = 0xFFFFFFFF;
                    t36 = (t36 - 1);
                    t37 = (t37 + 0x4);
                }
                t38 = *(int *)0xA0702C00;
                *(unsigned int *)0xA0702C00 = (t38 & 0xFFFE);
                t39 = 0xC2B77DC;
                while ((unsigned int)t39 < (unsigned int)0xC2B783C) {
                    *(unsigned int *)((t39 + 0x0)) = 0xFFFFFFFF;
                    *(unsigned int *)((t39 + 0x4)) = 0x0;
                    *(unsigned int *)((t39 + 0x8)) = 0x0;
                    t39 = (t39 + 0xC);
                }
                t40 = ((unsigned int)t27 >> 2);
                t41 = 0xC2B771C;
                t42 = 0xC2B771C;
                while ((unsigned int)t41 < (unsigned int)0xC2B77DC) {
                    t42 = t41;
                    t40 = 0x0;
                    t42 = (t42 + 0x4);
                    *(unsigned char *)((t41 + 0x0)) = 0xFFFFFFFF;
                    *(unsigned char *)((t41 + 0x1)) = t40;
                    t41 = (t41 + 0x18);
                    *(unsigned int *)((t42 + 0x4)) = 0xFFFFFFFF;
                    *(unsigned int *)((t42 + 0x0)) = 0xFFFFFFFF;
                }
                t43 = *(int *)((a4 + 0x84));
                *(unsigned int *)0xC2B76E8 = (t43 + 0xA0800000);
                t44 = *(int *)((a4 + 0x80));
                *(unsigned int *)0xC2B76EC = (t44 + 0xA0800010);
                t45 = *(int *)((a4 + 0xC8));
                *(unsigned int *)0xC2B76E4 = (0xA0800000 + t45);
                *(unsigned int *)0xC2B76E0 = 0xA0800400;
                *(unsigned int *)0xC2B76F4 = 0x0;
                *(unsigned int *)0xC2B76FC = 0x0;
                *(unsigned int *)0xC2B76DC = 0x0;
                t46 = 0x0;
                for (;;) {
                    t47 = *(int *)0xA080005C;
                    if (t47 == 0) {
                        t46 = (t46 + 0x1);
                        if ((unsigned int)t46 >= (unsigned int)0x400000) break;
                        continue;
                    }
                    t48 = *(int *)0xA070289C;
                    *(unsigned int *)0xA070289C = (t48 & 0x7F7);
                    return 0x0;
                }
                t49 = 0xFFFFFF00;
            }
            t56 = t49;
        }
        t63 = t56;
    }
    return t63;
}


int mpdrv_frame_send(void)
{
    int t0;
    int t1;
    int t68;
    int t2;
    int t3;
    int t4;
    int t67;
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
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
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
    int t65;
    int t66;

    t0 = *(int *)0xC2FA538;
    t1 = *(int *)((0xFC0 + t0));
    t68 = 0xFFFFFFFD;
    if (t1 == 1) {
        t2 = *(int *)0xC2FA538;
        t3 = *(int *)((t2 + 0x10F4));
        t4 = *(int *)((t3 + 0x18));
        t67 = 0xFFFFFFFF;
        if ((t4 & 0x1) == 0) {
            t5 = *(int *)0xC1701BC;
            if (_builtin_tas((char *)t5) == 0) {
                mpdrv_dpf(0xC1768C4);
                t66 = 0xFFFFFFFE;
            } else {
                t7 = *(int *)0xC2FA538;
                t8 = *(int *)((t7 + 0xFAC));
                t9 = *(int *)((t7 + 0xFB0));
                if (t9 != t8) {
                    t10 = *(int *)0xC2FA538;
                    t11 = *(int *)((t10 + 0xFAC));
                    *(unsigned int *)((t10 + 0xFB0)) = t11;
                    t12 = *(int *)0xC2FA538;
                    t13 = *(int *)((t12 + 0xFAC));
                    if (t13 != 0) {
                        t14 = *(int *)0xC17630C;
                        t15 = *(int *)0xC2FA538;
                        t16 = (int)((int)(t14 * 0x3E8) / (int)0x14);
                        *(unsigned int *)(((0x10C0 + t15) + 0x0)) = (t16 << 16);
                    } else {
                        t17 = *(int *)0xC2FA538;
                        *(unsigned int *)((t17 + 0x10C0)) = 0xC3500000;
                    }
                    t22 = *(int *)0xC2FA538;
                    t23 = *(int *)((t22 + 0x10F4));
                    *(unsigned int *)((t23 + 0x14)) = 0x0;
                    t24 = *(int *)0xC2FA538;
                    t25 = *(int *)((t24 + 0x10F4));
                    t26 = *(int *)((t24 + 0x10D0));
                    t27 = *(int *)((t24 + 0x10C0));
                    *(unsigned int *)((t25 + 0x80)) = (t27 | t26);
                    t28 = *(int *)0xC2FA538;
                    t29 = *(int *)((t28 + 0x10F4));
                    *(unsigned int *)((t29 + 0x14)) = 0x1;
                }
                frame_make();
                t35 = *(int *)0xC2FA538;
                t36 = *(int *)(((0x10B8 + t35) + 0x0));
                t37 = *(int *)((((t36 << 2) + (0x10A8 + t35)) + 0x0));
                *(unsigned int *)(((0x10B0 + t35) + 0x0)) = t37;
                t38 = *(int *)0xC2FA538;
                t39 = *(int *)((t38 + 0x10F4));
                t40 = *(int *)(((0x10B8 + t38) + 0x0));
                t41 = *(int *)((((t40 << 2) + (0x10A8 + t38)) + 0x0));
                t42 = mpdrv_v2p(t41);
                *(unsigned int *)(((t39 + 0x4) + 0x0)) = t42;
                t43 = *(int *)0xC2FA538;
                t44 = *(int *)((t43 + 0x10F4));
                *(unsigned int *)((t44 + 0x18)) = 0x1;
                t45 = *(int *)0xC2FA538;
                *(unsigned int *)((t45 + 0xFD8)) = 0x0;
                t46 = *(int *)0xC2FA538;
                t47 = *(int *)((t46 + 0x10B8));
                *(unsigned int *)((t46 + 0x10B8)) = (t47 ^ 0x1);
                t48 = *(int *)0xC2FA538;
                t49 = *(int *)(((0x10B8 + t48) + 0x0));
                t50 = *(int *)((((t49 << 2) + (0x10A8 + t48)) + 0x0));
                *(unsigned int *)(((0xFCC + t48) + 0x0)) = t50;
                t51 = *(int *)0xC2FA538;
                t52 = *(int *)((t51 + 0x10B4));
                *(unsigned int *)((t51 + 0x10B4)) = (t52 ^ 0x1);
                t53 = *(int *)0xC2FA538;
                *(unsigned int *)((t53 + 0xFDC)) = 0x0;
                t54 = *(int *)0xC2FA538;
                t55 = 0xFDC;
                t56 = (t52 ^ 0x1);
                t57 = t53;
                t58 = (t54 + 0x28);
                t59 = 0x0;
                while ((int)t59 < (int)0x18) {
                    t57 = 0xF90;
                    t60 = *(int *)0xC2FA538;
                    t55 = t60;
                    t57 = (t57 + t55);
                    t57 = (t57 + t59);
                    t61 = *(signed char *)((t57 + 0x0));
                    t56 = t61;
                    t59 = (t59 + 0x1);
                    if (t56 != 0) {
                        t62 = *(signed char *)((t58 + 0x6));
                        t55 = t62;
                        *(unsigned char *)((t58 + 0x7)) = t55;
                        t55 = 0x0;
                        *(unsigned char *)((t58 + 0x6)) = t55;
                        t63 = *(int *)((t58 + 0x18));
                        t57 = t63;
                        *(unsigned int *)((t58 + 0x1C)) = t57;
                        *(unsigned int *)((t58 + 0x18)) = t55;
                    }
                    t58 = (t58 + 0x2C);
                }
                t64 = *(int *)0xC2FA538;
                *(unsigned int *)((t64 + 0xFC0)) = 0x0;
                t65 = *(int *)0xC1701BC;
                *(unsigned char *)((t65 + 0x0)) = 0x0;
                t66 = 0x0;
            }
            t67 = t66;
        }
        t68 = t67;
    }
    return t68;
}








