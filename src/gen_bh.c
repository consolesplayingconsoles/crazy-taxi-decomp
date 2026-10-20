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
int FUN_0c02f220(int);
int FUN_0c038ed0(void);
int FUN_0c038f78(void);
int FUN_0c03bea0(int, int, int);
int FUN_0c03c792(int, int, int, int);
int FUN_0c05003c(void);
int FUN_0c05008c(void);
int FUN_0c050716(void);
int FUN_0c05332c(void);
int FUN_0c05423a(int, int);
int FUN_0c0543fc(void);
int FUN_0c054452(void);
int FUN_0c055aca(void);
int FUN_0c057728(int, int, int);
int FUN_0c05778a(int, int, float, float);
int FUN_0c057b64(void);
int FUN_0c058828(void);
int FUN_0c05891a(void);
int FUN_0c058968(int, int);
int FUN_0c05b7a8(void);
int FUN_0c05b7f0(int);
int FUN_0c05b88a(void);
int FUN_0c05baf4(int);
int FUN_0c05bb12(void);
int FUN_0c05bb24(void);
int FUN_0c05bb76(int);
int FUN_0c05cb80(void);
int FUN_0c05cde4(void);
int FUN_0c05ce64(void);
int FUN_0c05e8c8(void);
int FUN_0c05f93c(void);
int FUN_0c0713d8(int);
int FUN_0c071a7c(int, int);
int FUN_0c0771b0(int, int);
int FUN_0c077210(int, int);
int FUN_0c077df0(int);
float FUN_0c078c00(int);
int FUN_0c169710(void);
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
int vibStart(void);
int vmsfs_fwrite1(int, int);
int vmsfs_xwrite1(int, int);
int pdGunSetCallback(void);
int FUN_0c064ade(void);
int gdFsOpenRangeG(int a4, int a5);
int Put_GearBox(void);
int mwRnaSetNumChan(int a4, int a5);
int FUN_0c073d60(int a4);
int ADXB_ExecHndl(int a4);
int FUN_0c02e074(void);
int sysCfgRead(void);
int FUN_0c050656(void);
int vmsfs_fwrite(int a4, int a5, int a6);
int FUN_0c1697c2(int a4);
int psgRoadCheck(int a4);
int FUN_0c02f26a(void);
int PutStringFixPfont(int a4, int a5, float f4, float f5, float f6, float f7);
int FUN_0c03da02(int a4);
int menuRuleHandler(void);
int FUN_0c05c614(void);
int FUN_0c05c8e8(void);
int gdc_Err(void);
int FUN_0c03db08(int a4);
int FUN_0c055950(void);
int FUN_0c07eb10(int a4, int a5);
int FUN_0c05c470(void);
int mpdrv_frame_send(void);
int pedUpdate(int a4);
int carRumble(int a4);
int FUN_0c055688(void);
int psgFrameState6(int a4);
int FUN_0c053b76(void);
int Init_DCmini(void);
int FUN_0c05be5c(void);
int FUN_0c058234(void);

int pdGunSetCallback(void)
{
    return kdSetGunCallback();
}

int FUN_0c064ade(void)
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
    int stk[9] = {0};

    t0 = *(int *)0xC0D52A8;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x14)) = t0;
    t1 = *(int *)0xC0D52A4;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x10)) = t1;
    t2 = *(int *)0xC0D52A0;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0xC)) = t2;
    t3 = *(int *)0xC0D529C;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = t3;
    t4 = *(int *)0xC0D5298;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = t4;
    t5 = *(int *)0xC0D5294;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t5;
    t6 = *(int *)0xC2AD57C;
    t7 = *(int *)(((((int)stk + 4) + 0x4) + (t6 << 2)));
    *(unsigned int *)(((int)stk + 4)) = t7;
    t8 = ((int (*)(int))(t7))((((int)stk + 4) + 0x4));
    t9 = *(int *)0xC2AD578;
    *(unsigned int *)0xC2AD578 = (t9 + 0x1);
    return t8;
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

int FUN_0c073d60(int a4)
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

int FUN_0c02e074(void)
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

int FUN_0c050656(void)
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
    FUN_0c050716();
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

int FUN_0c1697c2(int a4)
{
    int t1;

    FUN_0c169710();
    *(unsigned int *)0xFF00001C = ((a4 & 0xFFFFF7FF) | 0x800);
    t1 = *(int *)0xFF00001C;
    *(unsigned int *)0xFF00001C = ((t1 & 0xFFFFFFF7) | 0x8);
    return ((t1 & 0xFFFFFFF7) | 0x8);
}

int psgRoadCheck(int a4)
{
    int t0;
    int t1;
    float u3;
    int t4;
    float t6;
    float t8;
    float t9;
    int t11;
    int t12;
    int t13;
    int t15;
    int t16;
    int t18;
    int t19;
    int t20;
    int t22;
    int t23;
    int t25;
    int t26;
    int t27;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t37;
    int stk[22] = {0};

    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t0 = *(int *)((a4 + 0x12C));
    if ((int)t0 > 0) {
        t1 = *(int *)((a4 + 0x12C));
        *(unsigned int *)((a4 + 0x12C)) = (t1 - 2);
    }
    u3 = *(float *)0xC071A60;
    t4 = 0x0;
    for (;;) {
        nlSubVector3op((((int)stk + 4) + 0x1C), (((short)(((t4 << 1) + t4) << 2) + 0xC2AD2BC) + 0xC), ((short)(((t4 << 1) + t4) << 2) + 0xC2AD2BC));
        *(float *)(((int)stk + 36)) = 0.0f;
        t6 = nlUnitVector((((int)stk + 4) + 0x1C));
        nlSubVector3op((((int)stk + 4) + 0x10), (a4 + 0x4), ((short)(((t4 << 1) + t4) << 2) + 0xC2AD2BC));
        *(float *)(((int)stk + 24)) = 0.0f;
        t8 = nlInnerProduct((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x10));
        if (!(0.0f > t8)) {
            if (!(t8 > t6)) {
                t9 = FUN_0c078c00((((int)stk + 4) + 0x10));
                if (u3 > t9) break;
                t4 = (t4 + 0x1);
                if ((int)t4 >= (int)0x22) {
                    t11 = *(int *)((a4 + 0x12C));
                    if ((int)t11 > (int)0xF) {
                        t12 = *(int *)((a4 + 0x28));
                        t13 = *(int *)((a4 + 0x2C));
                        psgSetState(a4, 0x6, t12, t13);
                        *(unsigned int *)((a4 + 0x12C)) = 0x0;
                        *(unsigned int *)(((int)stk + 4)) = 0x1;
                        t15 = *(int *)(((int)stk + 4));
                        return t15;
                    }
                    t16 = *(int *)(((int)stk + 4));
                    return t16;
                }
                continue;
            }
            t4 = (t4 + 0x1);
            if ((int)t4 >= (int)0x22) {
                t18 = *(int *)((a4 + 0x12C));
                if ((int)t18 > (int)0xF) {
                    t19 = *(int *)((a4 + 0x28));
                    t20 = *(int *)((a4 + 0x2C));
                    psgSetState(a4, 0x6, t19, t20);
                    *(unsigned int *)((a4 + 0x12C)) = 0x0;
                    *(unsigned int *)(((int)stk + 4)) = 0x1;
                    t22 = *(int *)(((int)stk + 4));
                    return t22;
                }
                t23 = *(int *)(((int)stk + 4));
                return t23;
            }
            continue;
        }
        t4 = (t4 + 0x1);
        if ((int)t4 >= (int)0x22) {
            t25 = *(int *)((a4 + 0x12C));
            if ((int)t25 > (int)0xF) {
                t26 = *(int *)((a4 + 0x28));
                t27 = *(int *)((a4 + 0x2C));
                psgSetState(a4, 0x6, t26, t27);
                *(unsigned int *)((a4 + 0x12C)) = 0x0;
                *(unsigned int *)(((int)stk + 4)) = 0x1;
                t29 = *(int *)(((int)stk + 4));
                return t29;
            }
            t30 = *(int *)(((int)stk + 4));
            return t30;
        }
    }
    t31 = *(int *)((a4 + 0x12C));
    *(unsigned int *)((a4 + 0x12C)) = (t31 + (0x23 - t4));
    t32 = *(int *)((a4 + 0x12C));
    if ((int)t32 > (int)0xF) {
        t33 = *(int *)((a4 + 0x28));
        t34 = *(int *)((a4 + 0x2C));
        psgSetState(a4, 0x6, t33, t34);
        *(unsigned int *)((a4 + 0x12C)) = 0x0;
        *(unsigned int *)(((int)stk + 4)) = 0x1;
    }
    t37 = *(int *)(((int)stk + 4));
    return t37;
}

int FUN_0c02f26a(void)
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
            t9 = FUN_0c02f220(t8);
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

int PutStringFixPfont(int a4, int a5, float f4, float f5, float f6, float f7)
{
    float u2;
    int t4;
    int t5;
    float u10;
    float u7;
    int t20;
    int t13;
    int t14;
    int t15;
    float u16;
    int t17;
    int t18;
    int t19;
    int stk[15] = {0};

    pfSetFont((0x3 & a4));
    u2 = f7;
    if ((0x20000 & a4) != 0) {
        u2 = (f7 * 1.5f);
    }
    pfSize(f7, u2);
    t4 = 0x0;
    for (;;) {
        t5 = *(signed char *)((a5 + t4));
        if (t5 == 0) break;
        t4 = (t4 + 0x1);
    }
    u10 = (f4 - (((float)(t4 - 1) * f6) * 0.5f));
    if ((a4 & 0x4) == 0) {
        u7 = f4;
        if ((0x8 & a4) != 0) {
            u7 = (f4 - ((float)(t4 - 1) * f6));
        }
        u10 = u7;
    }
    *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x1)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x4);
    t20 = 0x0;
    if ((int)t4 > 0) {
        t13 = (0x0 + a5);
        t14 = 0x0;
        t15 = a4;
        u16 = u10;
        do {
            t17 = *(signed char *)((t13 + 0x0));
            t13 = (t13 + 0x1);
            t15 = (t15 & 0xFFFFFFF7);
            t18 = *(int *)(((int)stk + 4));
            t15 = (t15 | 0x4);
            *(unsigned char *)((t18 + 0x0)) = t17;
            t19 = putString(t15, (((int)stk + 4) + 0x4), u16, f5, f7);
            t14 = (t14 + 0x1);
            u16 = (u16 + f6);
        } while ((int)t14 < (int)t4);
        t20 = t19;
    }
    return t20;
}

int FUN_0c03da02(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t20;
    int t22;
    int t23;
    int t26;
    int t27;
    int t21;
    int t18;
    int t19;
    int t24;
    int t25;
    int stk[7] = {0};

    *(unsigned char *)(((int)stk + 8)) = 0x0;
    t0 = vibIsReady();
    t1 = (((int)stk + 4) + 0x4);
    if (t0 == 1) {
        t1 = 0xC28A4EF;
    }
    t2 = *(signed char *)((t1 + 0x0));
    t3 = *(int *)0xC2A1214;
    *(unsigned int *)(((int)stk + 4)) = (unsigned char)t2;
    if (a4 != 0) {
        t4 = FUN_0c03bea0((((t3 == 1)) ? 1 : 0), ((int)stk + 4), 0x2);
        if (t4 == 1) {
            t5 = *(int *)(((int)stk + 4));
            *(unsigned char *)((t1 + 0x0)) = t5;
            if ((((t3 == 1)) ? 1 : 0) == 0) {
                t6 = *(int *)(((int)stk + 4));
                if (t6 != 0) {
                    ndPuru2Start(0x2, 0x1, 0x0);
                } else {
                    vibStart();
                }
            }
        }
    }
    if ((((t3 == 1)) ? 1 : 0) == 1) {
        if (a4 != 0) {
            t13 = *(int *)(((int)stk + 4));
            t14 = FUN_0c03c792(0xA044, 0xC09E15C, 0x2, t13);
            t21 = t14;
        } else {
            t15 = vibIsReady();
            if (t15 == 1) {
                t16 = *(int *)(((int)stk + 4));
                t18 = 0x2024;
                t19 = t16;
            } else {
                t17 = *(int *)(((int)stk + 4));
                t18 = 0x2084;
                t19 = t17;
            }
            t20 = FUN_0c03c792(t18, 0xC09E15C, 0x2, t19);
            t21 = t20;
        }
        t27 = t21;
    } else {
        if (a4 != 0) {
            t22 = *(int *)(((int)stk + 4));
            t24 = 0xC017;
            t25 = t22;
        } else {
            t23 = *(int *)(((int)stk + 4));
            t24 = 0x4017;
            t25 = t23;
        }
        t26 = FUN_0c03c792(t24, 0xC09EB54, 0x2, t25);
        t27 = t26;
    }
    return t27;
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

int FUN_0c05c614(void)
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
    FUN_0c05778a(0xC2A9898, 0x51, 483.0f, 55.0f);
    FUN_0c05778a(0xC2A9898, 0x55, 509.0f, 55.0f);
    nlObjPutSetFadeColor(0.0f, 0.299999982f, 1.0f);
    FUN_0c05778a(0xC2A9898, 0x1E6, 458.0f, 67.0f);
    FUN_0c05778a(0xC2A9898, 0x1E3, 559.0f, 60.0f);
    FUN_0c05778a(0xC2A9898, 0x1E4, 595.0f, 60.0f);
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
                FUN_0c05bb24();
            } else {
                FUN_0c05bb76(0x0);
            }
            *(unsigned int *)0xC2A991C = 0x1;
            *(unsigned int *)0xC179120 = 0x0;
            t15 = 0x54;
        }
        t19 = t15;
    }
    return t19;
}

int FUN_0c05c8e8(void)
{
    float u0;
    float u1;
    int t2;
    float u5;
    float u6;
    float u7;
    float u8;
    float u11;
    float u12;
    float u13;
    float u14;
    float u15;
    float u18;
    float u19;
    float u20;
    float u23;
    float u24;
    float u27;
    float u28;
    float u31;
    float u32;
    float u40;
    float u41;
    float u42;
    float u45;
    float u46;
    float u49;
    float u50;
    float u53;
    float u54;
    float u63;
    float u64;
    float u65;
    float u66;
    float u67;
    float u70;
    float u71;
    float u72;
    float u75;
    float u76;
    float u79;
    float u80;
    float u83;
    float u84;
    float u92;
    float u93;
    float u94;
    float u97;
    float u98;
    float u101;
    float u102;
    float u105;
    float u106;

    u0 = *(float *)0xC1313CC;
    u1 = *(float *)0xC17914C;
    t2 = *(int *)0xC2A995C;
    if (u1 > (u0 + 50.0f)) {
        if ((int)t2 < (int)0x7) {
            *(unsigned int *)0xC2A995C = 0x7;
            FUN_0c05cb80();
        }
    } else {
        u5 = *(float *)0xC1313AC;
        u6 = *(float *)0xC179144;
        if ((u5 + 450.0f) > u6) {
            u7 = *(float *)0xC1313C0;
            u8 = *(float *)0xC17914C;
            if (u8 > (u7 + 100.0f)) {
                if ((int)t2 < (int)0x6) {
                    *(unsigned int *)0xC2A995C = 0x6;
                    FUN_0c05cb80();
                }
            } else {
                u11 = *(float *)0xC1313AC;
                u12 = *(float *)0xC05CB58;
                u13 = *(float *)0xC179144;
                if ((u11 + u12) > u13) {
                    u14 = *(float *)0xC1313B4;
                    u15 = *(float *)0xC17914C;
                    if (u15 > (u14 + u12)) {
                        if ((int)t2 < (int)0x5) {
                            *(unsigned int *)0xC2A995C = 0x5;
                            FUN_0c05cb80();
                        }
                    } else {
                        u18 = *(float *)0xC05CB5C;
                        u19 = *(float *)0xC1313A8;
                        u20 = *(float *)0xC17914C;
                        if (u20 > (u19 + u18)) {
                            if ((int)t2 < (int)0x4) {
                                *(unsigned int *)0xC2A995C = 0x4;
                                FUN_0c05cb80();
                            }
                        } else {
                            u23 = *(float *)0xC13139C;
                            u24 = *(float *)0xC17914C;
                            if (u24 > (u23 + u18)) {
                                if ((int)t2 < (int)0x3) {
                                    *(unsigned int *)0xC2A995C = 0x3;
                                    FUN_0c05cb80();
                                }
                            } else {
                                u27 = *(float *)0xC131390;
                                u28 = *(float *)0xC17914C;
                                if (u28 > (u27 + u18)) {
                                    if ((int)t2 < (int)0x2) {
                                        *(unsigned int *)0xC2A995C = 0x2;
                                        FUN_0c05cb80();
                                    }
                                } else {
                                    u31 = *(float *)0xC131384;
                                    u32 = *(float *)0xC17914C;
                                    if (u32 > (u31 + u18)) {
                                        if ((int)t2 < (int)0x1) {
                                            *(unsigned int *)0xC2A995C = 0x1;
                                            FUN_0c05cb80();
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    u40 = *(float *)0xC05CB5C;
                    u41 = *(float *)0xC1313A8;
                    u42 = *(float *)0xC17914C;
                    if (u42 > (u41 + u40)) {
                        if ((int)t2 < (int)0x4) {
                            *(unsigned int *)0xC2A995C = 0x4;
                            FUN_0c05cb80();
                        }
                    } else {
                        u45 = *(float *)0xC13139C;
                        u46 = *(float *)0xC17914C;
                        if (u46 > (u45 + u40)) {
                            if ((int)t2 < (int)0x3) {
                                *(unsigned int *)0xC2A995C = 0x3;
                                FUN_0c05cb80();
                            }
                        } else {
                            u49 = *(float *)0xC131390;
                            u50 = *(float *)0xC17914C;
                            if (u50 > (u49 + u40)) {
                                if ((int)t2 < (int)0x2) {
                                    *(unsigned int *)0xC2A995C = 0x2;
                                    FUN_0c05cb80();
                                }
                            } else {
                                u53 = *(float *)0xC131384;
                                u54 = *(float *)0xC17914C;
                                if (u54 > (u53 + u40)) {
                                    if ((int)t2 < (int)0x1) {
                                        *(unsigned int *)0xC2A995C = 0x1;
                                        FUN_0c05cb80();
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            u63 = *(float *)0xC1313AC;
            u64 = *(float *)0xC05CB58;
            u65 = *(float *)0xC179144;
            if ((u63 + u64) > u65) {
                u66 = *(float *)0xC1313B4;
                u67 = *(float *)0xC17914C;
                if (u67 > (u66 + u64)) {
                    if ((int)t2 < (int)0x5) {
                        *(unsigned int *)0xC2A995C = 0x5;
                        FUN_0c05cb80();
                    }
                } else {
                    u70 = *(float *)0xC05CB5C;
                    u71 = *(float *)0xC1313A8;
                    u72 = *(float *)0xC17914C;
                    if (u72 > (u71 + u70)) {
                        if ((int)t2 < (int)0x4) {
                            *(unsigned int *)0xC2A995C = 0x4;
                            FUN_0c05cb80();
                        }
                    } else {
                        u75 = *(float *)0xC13139C;
                        u76 = *(float *)0xC17914C;
                        if (u76 > (u75 + u70)) {
                            if ((int)t2 < (int)0x3) {
                                *(unsigned int *)0xC2A995C = 0x3;
                                FUN_0c05cb80();
                            }
                        } else {
                            u79 = *(float *)0xC131390;
                            u80 = *(float *)0xC17914C;
                            if (u80 > (u79 + u70)) {
                                if ((int)t2 < (int)0x2) {
                                    *(unsigned int *)0xC2A995C = 0x2;
                                    FUN_0c05cb80();
                                }
                            } else {
                                u83 = *(float *)0xC131384;
                                u84 = *(float *)0xC17914C;
                                if (u84 > (u83 + u70)) {
                                    if ((int)t2 < (int)0x1) {
                                        *(unsigned int *)0xC2A995C = 0x1;
                                        FUN_0c05cb80();
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                u92 = *(float *)0xC05CB5C;
                u93 = *(float *)0xC1313A8;
                u94 = *(float *)0xC17914C;
                if (u94 > (u93 + u92)) {
                    if ((int)t2 < (int)0x4) {
                        *(unsigned int *)0xC2A995C = 0x4;
                        FUN_0c05cb80();
                    }
                } else {
                    u97 = *(float *)0xC13139C;
                    u98 = *(float *)0xC17914C;
                    if (u98 > (u97 + u92)) {
                        if ((int)t2 < (int)0x3) {
                            *(unsigned int *)0xC2A995C = 0x3;
                            FUN_0c05cb80();
                        }
                    } else {
                        u101 = *(float *)0xC131390;
                        u102 = *(float *)0xC17914C;
                        if (u102 > (u101 + u92)) {
                            if ((int)t2 < (int)0x2) {
                                *(unsigned int *)0xC2A995C = 0x2;
                                FUN_0c05cb80();
                            }
                        } else {
                            u105 = *(float *)0xC131384;
                            u106 = *(float *)0xC17914C;
                            if (u106 > (u105 + u92)) {
                                if ((int)t2 < (int)0x1) {
                                    *(unsigned int *)0xC2A995C = 0x1;
                                    FUN_0c05cb80();
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    FUN_0c05cde4();
    return FUN_0c05ce64();
}

int gdc_Err(void)
{
    int t0;
    int t1;
    int t24;
    int t2;
    float u3;
    float u5;
    float u15;
    float u17;
    int t23;
    int t25;
    float u26;
    float u28;
    float u38;
    float u40;
    int t46;
    int t47;
    int stk[24] = {0};

    t0 = *(int *)0xC1EE234;
    if (t0 == 0) {
        t1 = *(int *)0xC1EE238;
        t24 = t1;
        if (t1 != 1) {
            *(float *)(((int)stk + 16)) = 0.099999994f;
            *(float *)(((int)stk + 28)) = 0.0f;
            *(float *)(((int)stk + 32)) = 0.0f;
            *(float *)(((int)stk + 36)) = 1.0f;
            *(float *)(((int)stk + 40)) = 1.0f;
            *(unsigned int *)(((int)stk + 44)) = 0x0;
            *(unsigned int *)(((int)stk + 56)) = 0x80A;
            *(float *)(((int)stk + 48)) = 1.0f;
            *(unsigned int *)(((int)stk + 52)) = 0xFFFFFFFF;
            *(float *)(((int)stk + 24)) = 1.0f;
            *(float *)(((int)stk + 20)) = 1.0f;
            t2 = *(int *)0xC2A11C0;
            if (t2 != 0) {
                if (t2 != 1) {
                    if (t2 != 2) {
                        if (t2 != 3) {
                            if (t2 != 4) {
                                *(unsigned int *)(((int)stk + 4)) = 0xA7;
                                u3 = *(float *)0xC02DF9C;
                                *(float *)(((int)stk + 8)) = u3;
                                *(float *)(((int)stk + 12)) = 335.0f;
                                nlSprPut(((int)stk + 4));
                                *(unsigned int *)(((int)stk + 4)) = 0xA8;
                                u5 = *(float *)0xC02DFA0;
                                *(float *)(((int)stk + 8)) = u5;
                            } else {
                                *(unsigned int *)(((int)stk + 4)) = 0xBB;
                                *(float *)(((int)stk + 8)) = 350.0f;
                                *(float *)(((int)stk + 12)) = 335.0f;
                                nlSprPut(((int)stk + 4));
                                *(unsigned int *)(((int)stk + 4)) = 0xBC;
                                *(float *)(((int)stk + 8)) = 405.0f;
                            }
                        } else {
                            *(unsigned int *)(((int)stk + 4)) = 0xB0;
                            *(float *)(((int)stk + 8)) = 360.0f;
                            *(float *)(((int)stk + 12)) = 335.0f;
                            nlSprPut(((int)stk + 4));
                            *(unsigned int *)(((int)stk + 4)) = 0xB1;
                            *(float *)(((int)stk + 8)) = 415.0f;
                        }
                    } else {
                        *(unsigned int *)(((int)stk + 4)) = 0xB5;
                        *(float *)(((int)stk + 8)) = 442.0f;
                        *(float *)(((int)stk + 12)) = 335.0f;
                        nlSprPut(((int)stk + 4));
                        *(unsigned int *)(((int)stk + 4)) = 0xB6;
                        *(float *)(((int)stk + 8)) = 436.0f;
                    }
                } else {
                    *(unsigned int *)(((int)stk + 4)) = 0xA7;
                    u15 = *(float *)0xC02DF9C;
                    *(float *)(((int)stk + 8)) = u15;
                    *(float *)(((int)stk + 12)) = 335.0f;
                    nlSprPut(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = 0xA8;
                    u17 = *(float *)0xC02DFA0;
                    *(float *)(((int)stk + 8)) = u17;
                }
            } else {
                *(unsigned int *)(((int)stk + 4)) = 0x8E;
                *(float *)(((int)stk + 8)) = 370.0f;
                *(float *)(((int)stk + 12)) = 335.0f;
                nlSprPut(((int)stk + 4));
                *(unsigned int *)(((int)stk + 4)) = 0x8F;
                *(float *)(((int)stk + 8)) = 400.0f;
            }
            *(float *)(((int)stk + 12)) = 360.0f;
            t23 = nlSprPut(((int)stk + 4));
            t24 = t23;
        }
        t47 = t24;
    } else {
        *(float *)(((int)stk + 16)) = 0.099999994f;
        *(float *)(((int)stk + 28)) = 0.0f;
        *(float *)(((int)stk + 32)) = 0.0f;
        *(float *)(((int)stk + 36)) = 1.0f;
        *(float *)(((int)stk + 40)) = 1.0f;
        *(unsigned int *)(((int)stk + 44)) = 0x0;
        *(unsigned int *)(((int)stk + 56)) = 0x80A;
        *(float *)(((int)stk + 48)) = 1.0f;
        *(unsigned int *)(((int)stk + 52)) = 0xFFFFFFFF;
        *(float *)(((int)stk + 24)) = 1.0f;
        *(float *)(((int)stk + 20)) = 1.0f;
        t25 = *(int *)0xC2A11C0;
        if (t25 != 0) {
            if (t25 != 1) {
                if (t25 != 2) {
                    if (t25 != 3) {
                        if (t25 != 4) {
                            *(unsigned int *)(((int)stk + 4)) = 0xA7;
                            u26 = *(float *)0xC02DF9C;
                            *(float *)(((int)stk + 8)) = u26;
                            *(float *)(((int)stk + 12)) = 335.0f;
                            nlSprPut(((int)stk + 4));
                            *(unsigned int *)(((int)stk + 4)) = 0xA8;
                            u28 = *(float *)0xC02DFA0;
                            *(float *)(((int)stk + 8)) = u28;
                        } else {
                            *(unsigned int *)(((int)stk + 4)) = 0xBB;
                            *(float *)(((int)stk + 8)) = 350.0f;
                            *(float *)(((int)stk + 12)) = 335.0f;
                            nlSprPut(((int)stk + 4));
                            *(unsigned int *)(((int)stk + 4)) = 0xBC;
                            *(float *)(((int)stk + 8)) = 405.0f;
                        }
                    } else {
                        *(unsigned int *)(((int)stk + 4)) = 0xB0;
                        *(float *)(((int)stk + 8)) = 360.0f;
                        *(float *)(((int)stk + 12)) = 335.0f;
                        nlSprPut(((int)stk + 4));
                        *(unsigned int *)(((int)stk + 4)) = 0xB1;
                        *(float *)(((int)stk + 8)) = 415.0f;
                    }
                } else {
                    *(unsigned int *)(((int)stk + 4)) = 0xB5;
                    *(float *)(((int)stk + 8)) = 442.0f;
                    *(float *)(((int)stk + 12)) = 335.0f;
                    nlSprPut(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = 0xB6;
                    *(float *)(((int)stk + 8)) = 436.0f;
                }
            } else {
                *(unsigned int *)(((int)stk + 4)) = 0xA7;
                u38 = *(float *)0xC02DF9C;
                *(float *)(((int)stk + 8)) = u38;
                *(float *)(((int)stk + 12)) = 335.0f;
                nlSprPut(((int)stk + 4));
                *(unsigned int *)(((int)stk + 4)) = 0xA8;
                u40 = *(float *)0xC02DFA0;
                *(float *)(((int)stk + 8)) = u40;
            }
        } else {
            *(unsigned int *)(((int)stk + 4)) = 0x8E;
            *(float *)(((int)stk + 8)) = 370.0f;
            *(float *)(((int)stk + 12)) = 335.0f;
            nlSprPut(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = 0x8F;
            *(float *)(((int)stk + 8)) = 400.0f;
        }
        *(float *)(((int)stk + 12)) = 360.0f;
        t46 = nlSprPut(((int)stk + 4));
        t47 = t46;
    }
    return t47;
}

int FUN_0c03db08(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t47;
    int t5;
    int t6;
    int t7;
    int t11;
    int t12;
    int t13;
    int t20;
    int t21;
    int t42;
    int t22;
    int t23;
    int t24;
    int t25;
    float u26;
    float u27;
    int t29;
    int t30;
    float u31;
    float u32;
    float u33;
    float u34;
    int t36;
    float u37;
    float u38;
    float u39;
    float u40;
    int t41;
    int t8;
    int t9;
    int t15;
    int t16;
    int t18;
    int t19;
    int stk[13] = {0};

    *(unsigned int *)(((int)stk + 8)) = a4;
    t0 = *(signed char *)0xC28A4EE;
    *(unsigned int *)(((int)stk + 4)) = (unsigned char)t0;
    t1 = *(int *)(((int)stk + 8));
    if (t1 != 0) {
        t2 = FUN_0c03bea0(0x0, ((int)stk + 4), 0x2);
        if (t2 == 1) {
            t3 = *(int *)(((int)stk + 4));
            *(unsigned char *)0xC28A4EE = t3;
        }
    }
    t4 = padPortAConnected();
    t47 = t4;
    if (t4 == 1) {
        t5 = *(int *)(((int)stk + 8));
        if (t5 != 0) {
            t6 = *(int *)(((int)stk + 4));
            t8 = 0x8013;
            t9 = t6;
        } else {
            t7 = *(int *)(((int)stk + 4));
            t8 = 0x13;
            t9 = t7;
        }
        FUN_0c03c792(t8, 0xC09F050, 0x2, t9);
        t11 = *(int *)0xC2A123C;
        if (t11 == 1) {
            t12 = *(signed char *)0xC28A4EE;
            t15 = (0xC0EF5A0 + (signed char)((((t12 << 1) + t12) << 2) << 1));
            t16 = 0xC09EF48;
            t18 = 0xC0A0888;
            t19 = 0x6;
        } else {
            t13 = *(signed char *)0xC28A4EE;
            t15 = (0xC0EF568 + (signed char)((short)t13 * (short)0x1C));
            t16 = 0xC09EE14;
            t18 = 0xC0A0878;
            t19 = 0x7;
        }
        t20 = *(int *)0xC2A1ADC;
        t21 = menuPutSprites(t18, 0xC2A1A84, (-t20), 0x0);
        t42 = t21;
        if ((int)t19 > 0) {
            t22 = 0x0;
            t23 = t15;
            t24 = t16;
            do {
                t25 = *(int *)0xC2A1ADC;
                u26 = *(float *)((t24 + 0x0));
                u27 = *(float *)((t24 + 0x4));
                putString(0x13, (t24 + 0xC), (u26 + (float)t25), u27, 1.0f);
                t29 = *(int *)((t23 + 0x0));
                t23 = (t23 + 0x4);
                t30 = *(int *)0xC2A1ADC;
                u31 = *(float *)((t24 + 0x4));
                u32 = *(float *)((t24 + 0x0));
                u33 = *(float *)((((short)((short)t29 * (short)0x58) + 0xC09EBAC) + 0x4));
                u34 = *(float *)((((short)((short)t29 * (short)0x58) + 0xC09EBAC) + 0x0));
                putString(0x20, (((short)((short)t29 * (short)0x58) + 0xC09EBAC) + 0xC), ((u32 + u34) + (float)t30), (u31 + u33), 1.0f);
                t36 = *(int *)0xC2A1ADC;
                u37 = *(float *)((t24 + 0x4));
                u38 = *(float *)(((((short)((short)t29 * (short)0x58) + 0xC09EBAC) + 0x2C) + 0x4));
                u39 = *(float *)((t24 + 0x0));
                u40 = *(float *)(((((short)((short)t29 * (short)0x58) + 0xC09EBAC) + 0x2C) + 0x0));
                t41 = putString(0x20, ((((short)((short)t29 * (short)0x58) + 0xC09EBAC) + 0x2C) + 0xC), ((u39 + u40) + (float)t36), (u37 + u38), 1.0f);
                t22 = (t22 + 0x1);
                t24 = (t24 + 0x2C);
            } while ((int)t22 < (int)t19);
            t42 = t41;
        }
        t47 = t42;
    }
    return t47;
}

int FUN_0c055950(void)
{
    int t0;
    int t2;
    int t3;
    float u4;
    int t7;
    int t8;
    int t9;
    float u17;
    float u18;
    float u19;
    float u13;
    float u14;
    float u15;
    int t24;
    int t25;

    t0 = *(int *)0xC2A760C;
    if ((int)t0 <= (int)0xFFFFFFFE) {
        return 0;
    }
    if ((int)t0 > (int)0x2) {
        return 0;
    }
    FUN_0c055aca();
    t2 = *(int *)0xC2A760C;
    t3 = *(int *)(((t2 << 2) + 0xC130B0C));
    *(unsigned int *)0xC2A7EDC = t3;
    *(float *)0xC2A7EE0 = 320.0f;
    *(float *)0xC2A7EE4 = 360.0f;
    *(float *)0xC2A7EE8 = 0.199999988f;
    u4 = *(float *)0xC2A8FAC;
    *(float *)0xC2A7EF0 = (u4 + 1.0f);
    *(float *)0xC2A7EEC = (u4 + 1.0f);
    *(float *)0xC2A7F08 = 1.0f;
    *(unsigned int *)0xC2A7F04 = 0x0;
    *(unsigned int *)0xC2A7F10 = 0x200A;
    nlObjPutSetFadeColor(0.0f, 0.0f, 0.0f);
    nlSprPut(0xC2A7EDC);
    *(float *)0xC2A7EE8 = 0.099999994f;
    *(float *)0xC2A7EE0 = 318.0f;
    *(float *)0xC2A7EE4 = 358.0f;
    *(unsigned int *)0xC2A7F0C = 0x2;
    t7 = *(int *)0xC2A760C;
    t8 = *(int *)(((t7 << 2) + 0xC130B0C));
    *(unsigned int *)0xC2A7EDC = t8;
    t9 = *(int *)0xC2A760C;
    if (t9 == 2) {
        nlObjPutSetFadeColor(0.0f, 1.0f, 0.0f);
    } else {
        if (t9 == 1) {
            nlObjPutSetFadeColor(1.0f, 0.901960731f, 0.0f);
        } else {
            u17 = 0.988235235f;
            u18 = 0.0f;
            u19 = 0.0f;
            if (t9 != 0) {
                u13 = 0.988235235f;
                u14 = 0.0f;
                u15 = 0.0f;
                if (t9 == -1) {
                    u13 = 0.686274469f;
                    u14 = 0.0980392098f;
                    u15 = 0.56078428f;
                }
                u17 = u13;
                u18 = u14;
                u19 = u15;
            }
            nlObjPutSetFadeColor(u17, u18, u19);
        }
    }
    nlSprPut(0xC2A7EDC);
    t24 = ResetFadeColor();
    t25 = *(int *)0xC2A8F94;
    *(unsigned int *)0xC2A8F94 = (t25 + 0x1);
    if ((int)(t25 + 0x1) > (int)0xB4) {
        return FUN_0c05332c();
    }
    return t24;
}

int FUN_0c07eb10(int a4, int a5)
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

int FUN_0c05c470(void)
{
    float u5;
    int t6;
    int t7;
    int t9;
    float u10;
    int t13;
    int t14;
    int t15;
    float u18;
    int t19;
    int t20;
    int t26;
    float u27;
    int t28;
    int t31;
    int t32;
    int t34;
    int t43;
    int t35;
    int t41;
    float u36;
    float u37;
    int t38;
    int t39;
    int t47;
    int t56;
    int t48;
    int t54;
    float u49;
    float u50;
    int t51;
    int t52;
    int t58;
    int t45;
    int t40;
    int t53;

    nlObjPutSetFadeColor(1.0f, 0.699999988f, 0.0f);
    *(float *)0xC2A98A8 = 1.0f;
    *(float *)0xC2A98AC = 1.0f;
    FUN_0c05778a(0xC2A9898, 0x1E7, 491.0f, 57.0f);
    FUN_0c05778a(0xC2A9898, 0x1E8, 531.0f, 57.0f);
    FUN_0c05778a(0xC2A9898, 0x1E2, 580.0f, 50.0f);
    *(float *)0xC2A98A8 = 1.0f;
    *(float *)0xC2A98B8 = 1.0f;
    ResetFadeColor();
    u5 = *(float *)0xC17914C;
    if (!(0.0f > u5)) {
        t6 = *(int *)0xC2A9970;
        if (t6 == 0) {
            t7 = *(int *)0xC2A9970;
            *(unsigned int *)0xC2A9970 = (t7 + 0x1);
        }
    }
    t9 = *(int *)0xC2A9970;
    if ((int)t9 < (int)0x2) {
        u10 = *(float *)0xC17914C;
        *(float *)0xC2A9A24 = (u10 * 0.099999994f);
    }
    t13 = *(int *)0xC17926C;
    if (t13 == 0) {
        t14 = *(int *)0xC2A9970;
        if (t14 == 1) {
            t15 = *(int *)0xC2A9970;
            *(unsigned int *)0xC2A9970 = (t15 + 0x1);
        }
    }
    u18 = *(float *)0xC179148;
    if (!(u18 > 0.0f)) {
        t19 = *(int *)0xC2A9970;
        if ((int)t19 <= (int)0x1) {
            t20 = *(int *)0xC2A991C;
            if (t20 == 0) {
                FUN_0c05bb76(0x0);
                *(unsigned int *)0xC2A991C = 0x1;
            }
        }
    }
    t26 = *(int *)0xC2A9970;
    if (t26 == 2) {
        u27 = *(float *)0xC2A9A24;
        *(unsigned int *)0xC2A98F4 = (int)(u27 * 100.0f);
        t28 = *(int *)0xC2A9970;
        *(unsigned int *)0xC2A9970 = (t28 + 0x1);
    }
    t31 = *(int *)0xC1EE794;
    if (t31 == 0) {
        t32 = *(int *)0xC2A991C;
        if (t32 == 0) {
            FUN_0c05bb76(0x1);
            *(unsigned int *)0xC2A991C = 0x1;
            *(unsigned int *)0xC179120 = 0x0;
            t45 = 0x54;
        } else {
            t34 = *(int *)0xC2A9970;
            t43 = t34;
            if (t34 == 3) {
                t35 = *(int *)0xC2A991C;
                t41 = t34;
                if (t35 == 0) {
                    u36 = *(float *)0xC2A9A24;
                    u37 = *(float *)0xC05C6C8;
                    if (!(u37 > u36)) {
                        t38 = FUN_0c05bb24();
                        t40 = t38;
                    } else {
                        t39 = FUN_0c05bb76(0x0);
                        t40 = t39;
                    }
                    *(unsigned int *)0xC2A991C = 0x1;
                    t41 = t40;
                }
                t43 = t41;
            }
            t45 = t43;
        }
        t58 = t45;
    } else {
        t47 = *(int *)0xC2A9970;
        t56 = t47;
        if (t47 == 3) {
            t48 = *(int *)0xC2A991C;
            t54 = t47;
            if (t48 == 0) {
                u49 = *(float *)0xC2A9A24;
                u50 = *(float *)0xC05C6C8;
                if (!(u50 > u49)) {
                    t51 = FUN_0c05bb24();
                    t53 = t51;
                } else {
                    t52 = FUN_0c05bb76(0x0);
                    t53 = t52;
                }
                *(unsigned int *)0xC2A991C = 0x1;
                t54 = t53;
            }
            t56 = t54;
        }
        t58 = t56;
    }
    return t58;
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

int pedUpdate(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    float t12;
    float u13;
    float t15;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t29;
    int t30;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t50;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    float u58;
    float u59;
    int t60;
    int t61;
    int t62;
    int t63;
    float u64;
    float u65;
    int t67;
    int t66;
    float u70;
    float u71;
    int t73;
    int t72;
    int t75;
    int t69;
    int t68;
    int t74;
    int stk[13] = {0};

    t0 = *(int *)((a4 + 0x50));
    if (t0 == 2) {
        t1 = *(int *)(((a4 + 0x40) + 0x8));
        *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x8)) = t1;
        t2 = *(int *)(((a4 + 0x40) + 0x4));
        *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x4)) = t2;
        t3 = *(int *)(((a4 + 0x40) + 0x0));
        *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = t3;
    } else {
        t4 = *(int *)(((a4 + 0xC) + 0x8));
        *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x8)) = t4;
        t5 = *(int *)(((a4 + 0xC) + 0x4));
        *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x4)) = t5;
        t6 = *(int *)(((a4 + 0xC) + 0x0));
        *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = t6;
    }
    nlPushUnitMatrix();
    nlLoadMatrix(0xC2A6FE4);
    FUN_0c0771b0((((int)stk + 4) + 0xC), ((int)stk + 4));
    nlPopMatrix(0x1);
    t12 = nlLength(0xC179144, (((int)stk + 4) + 0xC));
    u13 = *(float *)(((int)stk + 4));
    pedDodgeCheck(a4, t12, u13);
    t15 = nlLength(0xC179840, (((int)stk + 4) + 0xC));
    nlProjectScreen3D((((int)stk + 4) + 0xC));
    t17 = CheckClipping(5.0f);
    if (t17 != 0) {
        t18 = *(int *)0xC1EE20C;
        if (t18 != 0) {
            t19 = *(int *)0xC1EE20C;
            if (t19 == 1) {
                t20 = *(short *)((a4 + 0x60));
                if (t20 != 0) {
                    t21 = FUN_0c05003c();
                    if ((int)t21 < (int)0x1) {
                        t22 = *(short *)((a4 + 0x60));
                        if (t22 == 0) {
                            t23 = FUN_0c05008c();
                            if (t23 != 0) {
                                pedDraw(a4, t15, t12);
                            }
                        }
                    } else {
                        pedDraw(a4, t15, t12);
                    }
                } else {
                    t29 = *(short *)((a4 + 0x60));
                    if (t29 == 0) {
                        t30 = FUN_0c05008c();
                        if (t30 != 0) {
                            pedDraw(a4, t15, t12);
                        }
                    }
                }
            }
        } else {
            pedDraw(a4, t15, t12);
        }
    }
    t39 = *(int *)((a4 + 0x50));
    if (t39 == 2) {
        t40 = *(int *)((a4 + 0x20));
        *(unsigned int *)((a4 + 0x20)) = (t40 + 0x2);
        t41 = *(int *)((a4 + 0x28));
        t42 = *(int *)((0xC0D61AC + (t41 << 2)));
        t43 = *(int *)((t42 + 0x0));
        if ((unsigned int)t43 <= (unsigned int)((t40 + 0x2) + 0x1)) {
            t44 = *(int *)((a4 + 0x28));
            t45 = *(int *)((0xC0D61AC + (t44 << 2)));
            t46 = *(int *)((t45 + 0x0));
            *(unsigned int *)((a4 + 0x20)) = (t46 - 1);
        }
    } else {
        t50 = *(int *)((a4 + 0x20));
        *(unsigned int *)((a4 + 0x20)) = (t50 + 0x1);
    }
    t52 = *(int *)((a4 + 0x50));
    if (t52 == 2) {
        t53 = *(int *)((a4 + 0x28));
        t54 = *(int *)((a4 + 0x20));
        t55 = *(int *)(((t53 << 2) + 0xC0D61AC));
        t56 = *(int *)((t55 + 0x0));
        if ((unsigned int)t56 <= (unsigned int)(t54 + 0x1)) {
            *(unsigned int *)((a4 + 0x50)) = 0x1;
            *(unsigned int *)((a4 + 0x20)) = 0x0;
            pedPickIdle(a4);
            *(unsigned short *)((a4 + 0x38)) = 0x0;
            *(float *)((a4 + 0x3C)) = 0.0f;
            u58 = *(float *)((a4 + 0x40));
            *(float *)((a4 + 0xC)) = u58;
            u59 = *(float *)((a4 + 0x48));
            *(float *)((a4 + 0x14)) = u59;
            t60 = *(int *)0xC12FF08;
            *(unsigned int *)(((a4 + 0x40) + 0x8)) = t60;
            t61 = *(int *)0xC12FF04;
            *(unsigned int *)(((a4 + 0x40) + 0x4)) = t61;
            t62 = *(int *)0xC12FF00;
            *(unsigned int *)(((a4 + 0x40) + 0x0)) = t62;
            *(unsigned int *)((a4 + 0x4C)) = 0x0;
            t63 = *(short *)0xC1791C0;
            *(unsigned short *)((a4 + 0x1A)) = t63;
            t69 = t63;
        } else {
            u64 = *(float *)0xC04FCA0;
            if (t12 > u64) {
                *(unsigned int *)((a4 + 0x50)) = 0x0;
                t68 = 0x50;
            } else {
                u65 = *(float *)0xC04FCA4;
                t67 = 0xC04FCA4;
                if (t12 > u65) {
                    t66 = pedStand(a4);
                    t67 = t66;
                }
                t68 = t67;
            }
            t69 = t68;
        }
        t75 = t69;
    } else {
        u70 = *(float *)0xC04FCA0;
        if (t12 > u70) {
            *(unsigned int *)((a4 + 0x50)) = 0x0;
            t74 = 0x50;
        } else {
            u71 = *(float *)0xC04FCA4;
            t73 = 0xC04FCA4;
            if (t12 > u71) {
                t72 = pedStand(a4);
                t73 = t72;
            }
            t74 = t73;
        }
        t75 = t74;
    }
    return t75;
}

int carRumble(int a4)
{
    int t0;
    int t3;
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;
    float u8;
    float u9;
    float u10;
    int t12;
    int t13;
    int t16;
    int t17;
    int t20;
    int t21;
    int t22;
    int t23;
    int t34;
    int t24;
    int t27;
    int t25;
    int t28;
    int t31;
    int t29;
    int t30;
    int t36;
    int t37;
    int t40;
    int t44;
    int t45;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    float u52;
    int t53;
    int t54;
    int t61;
    float u62;
    int t63;
    int t64;
    int t43;
    int t42;
    int t32;
    int t41;
    int t60;
    int t56;
    int t66;

    t0 = *(signed char *)0xC1EE277;
    t3 = 0x0;
    if ((unsigned char)t0 == 2) {
        t1 = *(int *)0xC1EE234;
        t2 = 0x0;
        if (t1 != 0) {
            t2 = 0x1;
        }
        t3 = t2;
    }
    t4 = *(int *)((a4 + 0x3B0));
    if (t4 != 0) {
        if (t4 == 1) {
            t5 = *(int *)((a4 + 0x3B4));
            if ((int)t5 > 0) {
                t6 = *(int *)((a4 + 0x3B4));
                if ((int)t6 > (int)0x3) {
                    u8 = 0.799999952f;
                    if (t3 != 0) {
                        u8 = 0.199999988f;
                    }
                    u9 = *(float *)((a4 + 0x3B8));
                    u10 = *(float *)((a4 + 0x118));
                    if ((u10 - u9) > u8) {
                        *(unsigned int *)((a4 + 0x3B0)) = 0x2;
                        *(unsigned int *)((a4 + 0x3B4)) = 0x5A;
                        Sound_Request(0x108A9, 0x0);
                        t12 = *(signed char *)0xC1EE278;
                        return ndPuru2Start((unsigned char)t12, 0x100000, 0x3);
                    }
                    t13 = *(signed char *)0xC1EE268;
                    if (t13 != 0) {
                        *(unsigned int *)((a4 + 0x3B0)) = 0x4;
                        Sound_Request(0x102A9, 0x0);
                    }
                    t16 = *(int *)((a4 + 0x3B4));
                    *(unsigned int *)((a4 + 0x3B4)) = (t16 - 1);
                    return 0x3B4;
                }
                t17 = *(signed char *)0xC1EE268;
                if (t17 != 0) {
                    *(unsigned int *)((a4 + 0x3B0)) = 0x4;
                    Sound_Request(0x102A9, 0x0);
                }
                t20 = *(int *)((a4 + 0x3B4));
                *(unsigned int *)((a4 + 0x3B4)) = (t20 - 1);
                return 0x3B4;
            }
            *(unsigned int *)((a4 + 0x3B0)) = 0x0;
            return 0x3B0;
        }
        if (t4 == 2) {
            t21 = *(int *)((a4 + 0x3B4));
            *(unsigned int *)((a4 + 0x3B4)) = (t21 - 1);
            t22 = *(int *)((a4 + 0x3B4));
            t23 = 0x3B4;
            if ((int)t22 <= 0) {
                *(unsigned int *)((a4 + 0x3B0)) = 0x0;
                t23 = 0x3B0;
            }
            t43 = t23;
        } else {
            if (t4 != 3) {
                t34 = t4;
                if (t4 == 4) {
                    if (t3 != 0) {
                        t24 = *(signed char *)0xC1EE264;
                        t27 = 0x18;
                        if ((int)(unsigned char)t24 > (int)0x7D) {
                            t25 = 0x18;
                            if ((int)(unsigned char)t24 < (int)0x83) {
                                *(unsigned int *)((a4 + 0x3B0)) = 0x0;
                                t25 = 0x3B0;
                            }
                            t27 = t25;
                        }
                        t32 = t27;
                    } else {
                        t28 = *(signed char *)0xC1EE267;
                        t31 = 0x1B;
                        if (t28 == 0) {
                            t29 = *(signed char *)0xC1EE268;
                            t30 = 0x1C;
                            if (t29 == 0) {
                                *(unsigned int *)((a4 + 0x3B0)) = 0x0;
                                t30 = 0x3B0;
                            }
                            t31 = t30;
                        }
                        t32 = t31;
                    }
                    t34 = t32;
                }
                t42 = t34;
            } else {
                t36 = *(int *)((a4 + 0x3B4));
                if ((int)t36 > 0) {
                    t37 = *(signed char *)0xC1EE26B;
                    if (t37 != 0) {
                        *(unsigned int *)((a4 + 0x3B0)) = 0x4;
                        Sound_Request(0x102A9, 0x0);
                    }
                    t40 = *(int *)((a4 + 0x3B4));
                    *(unsigned int *)((a4 + 0x3B4)) = (t40 - 1);
                    t41 = 0x3B4;
                } else {
                    *(unsigned int *)((a4 + 0x3B0)) = 0x0;
                    t41 = 0x3B0;
                }
                t42 = t41;
            }
            t43 = t42;
        }
        return t43;
    }
    if (t3 != 0) {
        t44 = *(signed char *)0xC1EE27A;
        t45 = *(signed char *)0xC1EE27C;
        if ((int)(int)((float)((unsigned char)t44 - (unsigned char)t45) < 0.0f ? -(float)((unsigned char)t44 - (unsigned char)t45) : (float)((unsigned char)t44 - (unsigned char)t45)) > (int)0x40) {
            *(unsigned int *)((a4 + 0x3B0)) = 0x2;
            *(unsigned int *)((a4 + 0x3B4)) = 0x5A;
            Sound_Request(0x108A9, 0x0);
            t47 = *(signed char *)0xC1EE278;
            return ndPuru2Start((unsigned char)t47, 0x100000, 0x0);
        }
        t48 = *(signed char *)0xC1EE279;
        t49 = *(signed char *)0xC1EE27B;
        if ((int)(int)((float)((unsigned char)t48 - (unsigned char)t49) < 0.0f ? -(float)((unsigned char)t48 - (unsigned char)t49) : (float)((unsigned char)t48 - (unsigned char)t49)) > (int)0x40) {
            *(unsigned int *)((a4 + 0x3B0)) = 0x4;
            t50 = Sound_Request(0x102A9, 0x0);
            t60 = t50;
        } else {
            t51 = *(signed char *)0xC1EE26B;
            if (t51 != 0) {
                *(unsigned int *)((a4 + 0x3B4)) = 0x8;
                u52 = *(float *)((a4 + 0x118));
                *(float *)((a4 + 0x3B8)) = u52;
                *(unsigned int *)((a4 + 0x3B0)) = 0x1;
                t56 = 0x3B0;
            } else {
                t53 = *(signed char *)0xC1EE26C;
                t54 = 0x20;
                if (t53 != 0) {
                    *(unsigned int *)((a4 + 0x3B4)) = 0xA;
                    *(unsigned int *)((a4 + 0x3B0)) = 0x3;
                    t54 = 0x3B0;
                }
                t56 = t54;
            }
            t60 = t56;
        }
        return t60;
    }
    t61 = *(signed char *)0xC1EE26B;
    if (t61 != 0) {
        *(unsigned int *)((a4 + 0x3B4)) = 0x8;
        u62 = *(float *)((a4 + 0x118));
        *(float *)((a4 + 0x3B8)) = u62;
        *(unsigned int *)((a4 + 0x3B0)) = 0x1;
        t66 = 0x3B0;
    } else {
        t63 = *(signed char *)0xC1EE26C;
        t64 = 0x20;
        if (t63 != 0) {
            *(unsigned int *)((a4 + 0x3B4)) = 0xA;
            *(unsigned int *)((a4 + 0x3B0)) = 0x3;
            t64 = 0x3B0;
        }
        t66 = t64;
    }
    return t66;
}

int FUN_0c055688(void)
{
    int t0;
    float u1;
    float u2;
    float u4;
    float u6;
    float u7;
    int t10;
    float u11;
    float u13;
    float u15;
    float u16;
    float u17;
    float u18;
    float u20;
    float u21;
    float u22;

    t0 = *(int *)0xC2A8EB0;
    if (t0 != 1) {
        if (t0 == 6) {
            u1 = *(float *)0xC2A8EA0;
            *(float *)0xC2A7EA8 = (1.0f - u1);
        } else {
            *(float *)0xC2A7EA8 = 0.0f;
        }
    } else {
        u2 = *(float *)0xC2A8EA0;
        *(float *)0xC2A7EA8 = (1.0f - u2);
    }
    *(float *)0xC2A7EB0 = 1.0f;
    *(unsigned int *)0xC2A7E8C = 0x128;
    *(float *)0xC2A7EA4 = 0.0f;
    *(float *)0xC2A7EAC = 1.0f;
    *(float *)0xC2A7E90 = 532.0f;
    *(float *)0xC2A7E94 = 96.0f;
    *(float *)0xC2A7E98 = 0.049999997f;
    *(float *)0xC2A7E9C = 9.0f;
    *(float *)0xC2A7EA0 = (1.0f + 1.0f);
    *(float *)0xC2A7EB8 = 0.699999988f;
    *(unsigned int *)0xC2A7EB4 = 0x8000;
    nlSprPut(0xC2A7E8C);
    u4 = *(float *)0xC2A8EB8;
    *(float *)0xC2A7E94 = (96.0f - u4);
    *(unsigned int *)0xC2A7EB4 = 0x0;
    nlSprPut(0xC2A7E8C);
    *(float *)0xC2A7E9C = 1.0f;
    *(float *)0xC2A7EA0 = 1.0f;
    *(float *)0xC2A7EB8 = 1.0f;
    *(unsigned int *)0xC2A7E8C = 0x102;
    *(float *)0xC2A7EA4 = 0.0f;
    *(float *)0xC2A7EAC = 1.0f;
    *(float *)0xC2A7E90 = 458.0f;
    u6 = *(float *)0xC2A8EB8;
    *(float *)0xC2A7E94 = (79.0f - u6);
    *(float *)0xC2A7E98 = 0.289999992f;
    *(float *)0xC2A7E9C = 1.0f;
    u7 = *(float *)0xC2A8EA0;
    *(float *)0xC2A7EA0 = u7;
    nlSprPut(0xC2A7E8C);
    *(float *)0xC2A7E98 = 0.279999971f;
    *(unsigned int *)0xC2A7E8C = 0x10E;
    *(float *)0xC2A7E90 = 468.0f;
    nlSprPut(0xC2A7E8C);
    t10 = *(int *)0xC2A8E64;
    if (t10 != 10) {
        *(unsigned int *)0xC2A7E8C = 0x10D;
    } else {
        *(unsigned int *)0xC2A7E8C = 0xFE;
    }
    *(float *)0xC2A7E9C = 1.0f;
    u11 = *(float *)0xC055914;
    *(float *)0xC2A7E90 = u11;
    nlSprPut(0xC2A7E8C);
    *(unsigned int *)0xC2A7E8C = 0x10F;
    *(float *)0xC2A7E9C = 1.0f;
    u13 = *(float *)0xC05591C;
    *(float *)0xC2A7E90 = u13;
    nlSprPut(0xC2A7E8C);
    *(unsigned int *)0xC2A7E8C = 0x102;
    *(unsigned int *)0xC2A7EC0 = 0x200E;
    *(float *)0xC2A7EA4 = 0.0f;
    *(float *)0xC2A7EAC = 1.0f;
    u15 = *(float *)0xC055920;
    *(float *)0xC2A7E90 = u15;
    u16 = *(float *)0xC2A8EB8;
    u17 = *(float *)0xC055924;
    *(float *)0xC2A7E94 = (u17 - u16);
    *(float *)0xC2A7E98 = 0.289999992f;
    *(float *)0xC2A7E9C = 1.0f;
    u18 = *(float *)0xC2A8EA0;
    *(float *)0xC2A7EA0 = u18;
    *(unsigned int *)0xC2A7EB4 = 0x8000;
    nlSprPut(0xC2A7E8C);
    *(unsigned int *)0xC2A7EC0 = 0x2006;
    *(unsigned int *)0xC2A7EB4 = 0x0;
    *(unsigned int *)0xC2A7E8C = 0x1A2;
    *(float *)0xC2A7EA4 = 0.0f;
    *(float *)0xC2A7EAC = 1.0f;
    *(float *)0xC2A7E90 = 532.0f;
    u20 = *(float *)0xC05592C;
    u21 = *(float *)0xC2A8EB8;
    *(float *)0xC2A7E94 = (u20 - u21);
    *(float *)0xC2A7E98 = 0.289999992f;
    *(float *)0xC2A7E9C = 1.0f;
    u22 = *(float *)0xC2A8EA0;
    *(float *)0xC2A7EA0 = u22;
    nlSprPut(0xC2A7E8C);
    *(float *)0xC2A7EA0 = 1.0f;
    *(float *)0xC2A7EB0 = 1.0f;
    return 0x24;
}

int psgFrameState6(int a4)
{
    int t0;
    int t1;
    int t2;
    float u6;
    float u7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t13;
    float u14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    float u21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    float t30;
    float u31;
    int t37;
    float u40;
    int t41;
    int t42;
    float u44;
    int t45;
    int t46;
    float u48;
    float u49;
    int t55;
    int stk[14] = {0};

    t0 = *(int *)((a4 + 0x24));
    if (t0 == 0) {
        t1 = *(signed char *)(((0x149 + a4) + 0x0));
        *(unsigned char *)(((0x149 + a4) + 0x0)) = (t1 & 0xBF);
        t2 = *(signed char *)(((0x14B + a4) + 0x0));
        *(unsigned char *)(((0x14B + a4) + 0x0)) = (t2 | 0x2);
        nlPushMatrix(0x0);
        nlSubVector3op((((int)stk + 4) + 0x4), (a4 + 0x4), 0xC179144);
        nlUnitVector((((int)stk + 4) + 0x4));
        u6 = *(float *)(((int)stk + 16));
        u7 = *(float *)(((int)stk + 8));
        t8 = nlArcTan2((-u7), (-u6));
        *(unsigned int *)(((int)stk + 4)) = t8;
        t9 = *(int *)(((int)stk + 4));
        t10 = *(int *)((a4 + 0x10));
        t11 = GetAverageAngle(t10, t9, 0.849999964f);
        *(unsigned int *)((a4 + 0x10)) = (short)t11;
        nlRotateAY(((short)t11 + 0x8000));
        t13 = *(int *)((a4 + 0x34));
        u14 = *(float *)((a4 + 0x38));
        t15 = *(int *)((t13 + 0x4));
        t16 = *(int *)((t13 + 0x8));
        t17 = *(int *)(((t16 + ((((((int)u14 - 1) * (((t15 + 0x1) << 1) + 0x1)) << 1) + (((int)u14 - 1) * (((t15 + 0x1) << 1) + 0x1))) << 2)) + 0x8));
        *(unsigned int *)(((((int)stk + 4) + 0x1C) + 0x8)) = t17;
        t18 = *(int *)(((t16 + ((((((int)u14 - 1) * (((t15 + 0x1) << 1) + 0x1)) << 1) + (((int)u14 - 1) * (((t15 + 0x1) << 1) + 0x1))) << 2)) + 0x4));
        *(unsigned int *)(((((int)stk + 4) + 0x1C) + 0x4)) = t18;
        t19 = *(int *)(((t16 + ((((((int)u14 - 1) * (((t15 + 0x1) << 1) + 0x1)) << 1) + (((int)u14 - 1) * (((t15 + 0x1) << 1) + 0x1))) << 2)) + 0x0));
        *(unsigned int *)(((((int)stk + 4) + 0x1C) + 0x0)) = t19;
        t20 = *(int *)((a4 + 0x34));
        u21 = *(float *)((a4 + 0x38));
        t22 = *(int *)((t20 + 0x4));
        t23 = *(int *)((t20 + 0x8));
        t24 = *(int *)(((t23 + (((((int)u21 * (((t22 + 0x1) << 1) + 0x1)) << 1) + ((int)u21 * (((t22 + 0x1) << 1) + 0x1))) << 2)) + 0x8));
        *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x8)) = t24;
        t25 = *(int *)(((t23 + (((((int)u21 * (((t22 + 0x1) << 1) + 0x1)) << 1) + ((int)u21 * (((t22 + 0x1) << 1) + 0x1))) << 2)) + 0x4));
        *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x4)) = t25;
        t26 = *(int *)(((t23 + (((((int)u21 * (((t22 + 0x1) << 1) + 0x1)) << 1) + ((int)u21 * (((t22 + 0x1) << 1) + 0x1))) << 2)) + 0x0));
        *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x0)) = t26;
        *(float *)(((int)stk + 24)) = 0.0f;
        *(float *)(((int)stk + 36)) = 0.0f;
        nlSubVector((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x1C));
        FUN_0c077210((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x1C));
        nlGetAverageVector((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x4), (((int)stk + 4) + 0x10), 1.3499999f, 0.75f);
        t30 = nlUnitVector((((int)stk + 4) + 0x10));
        u31 = t30;
        if (t30 > 2.75f) {
            u31 = 2.75f;
        }
        nlScaleVector((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x10), u31);
        nlAddVector((((int)stk + 4) + 0x10), (a4 + 0x4));
        Psg_SetPosPtr(a4, (((int)stk + 4) + 0x10));
        nlGetPushedMatrix(0x0);
        psgPutShadow(a4);
        t37 = *(signed char *)((a4 + 0x149));
        if ((t37 & 128) != 0) {
            psgPlayBlend(a4, 0x1);
        } else {
            FUN_0c0713d8(a4);
            u40 = *(float *)((a4 + 0x38));
            t41 = *(int *)((a4 + 0x0));
            t42 = *(int *)((a4 + 0x34));
            humanDraw(t42, t41, (int)u40, 0x1);
            u44 = *(float *)((a4 + 0x38));
            *(float *)((a4 + 0x38)) = (u44 + 1.0f);
            t45 = *(int *)((a4 + 0x34));
            t46 = *(int *)((t45 + 0x0));
            u48 = (float)(t46 - 2);
            if ((int)(t46 - 2) < 0) {
                u48 = ((float)(t46 - 2) + 4.2949673e+09f);
            }
            u49 = *(float *)((a4 + 0x38));
            if (!(u48 > u49)) {
                psgSetState(a4, 0x0, 0x0, 0x0);
            }
        }
        nlPopMatrix(0x1);
    }
    t55 = FUN_0c071a7c(a4, 0x1);
    return t55;
}

int FUN_0c053b76(void)
{
    int t1;
    int t2;
    int t3;
    int t7;
    int t10;
    int t11;
    int t12;
    int t8;
    int t13;
    int t14;
    int t16;
    float u17;
    int t19;
    int t22;
    float u23;
    int t25;
    float u26;
    int t28;
    int t30;
    int t33;
    float u34;
    int t36;
    float u37;
    int t43;
    int t46;
    float u47;
    int t49;
    float u50;
    int t54;
    int t57;
    float u58;
    int t60;
    float u61;
    int t68;
    int t71;
    float u72;
    int t74;
    float u75;
    int t82;
    int t85;
    float u86;
    int t88;
    float u89;
    int t93;
    int t96;
    float u97;
    int t99;
    float u100;
    int t106;
    int t109;
    float u110;
    int t112;
    float u113;
    int t117;
    int t120;
    float u121;
    int t123;
    float u124;
    int t131;
    int t134;
    float u135;
    int t137;
    float u138;
    int t146;
    int t149;
    float u150;
    int t152;
    float u153;
    int t159;
    int t162;
    float u163;
    int t165;
    float u166;
    int t170;
    int t173;
    float u174;
    int t176;
    float u177;
    int t184;
    int t187;
    float u188;
    int t190;
    float u191;
    float u199;
    int t201;
    int t204;
    float u205;
    int t207;
    float u208;
    float u211;
    int t213;
    int t216;
    float u217;
    int t219;
    float u220;
    int t226;
    int t227;
    int t228;
    int t229;
    int t251;
    int t247;
    int t243;
    int t230;
    int t240;
    int t233;
    int t232;
    int t231;
    int t236;
    int t235;
    int t234;
    int t239;
    int t238;
    int t237;
    int t255;
    int t265;
    int t258;
    int t257;
    int t256;
    int t261;
    int t260;
    int t259;
    int t264;
    int t263;
    int t262;
    int t272;
    int t294;
    int t290;
    int t286;
    int t273;
    int t283;
    int t276;
    int t275;
    int t274;
    int t279;
    int t278;
    int t277;
    int t282;
    int t281;
    int t280;
    int t302;
    int t324;
    int t320;
    int t316;
    int t303;
    int t313;
    int t306;
    int t305;
    int t304;
    int t309;
    int t308;
    int t307;
    int t312;
    int t311;
    int t310;
    int t332;
    int t342;
    int t335;
    int t334;
    int t333;
    int t338;
    int t337;
    int t336;
    int t341;
    int t340;
    int t339;
    int t349;
    int t350;
    int t372;
    int t368;
    int t364;
    int t351;
    int t361;
    int t354;
    int t353;
    int t352;
    int t357;
    int t356;
    int t355;
    int t360;
    int t359;
    int t358;
    int t376;
    int t386;
    int t379;
    int t378;
    int t377;
    int t382;
    int t381;
    int t380;
    int t385;
    int t384;
    int t383;
    int t393;
    int t415;
    int t411;
    int t407;
    int t394;
    int t404;
    int t397;
    int t396;
    int t395;
    int t400;
    int t399;
    int t398;
    int t403;
    int t402;
    int t401;
    int t423;
    int t445;
    int t441;
    int t437;
    int t424;
    int t434;
    int t427;
    int t426;
    int t425;
    int t430;
    int t429;
    int t428;
    int t433;
    int t432;
    int t431;
    int t457;
    int t458;
    int t480;
    int t476;
    int t472;
    int t459;
    int t469;
    int t462;
    int t461;
    int t460;
    int t465;
    int t464;
    int t463;
    int t468;
    int t467;
    int t466;
    int t484;
    int t494;
    int t487;
    int t486;
    int t485;
    int t490;
    int t489;
    int t488;
    int t493;
    int t492;
    int t491;
    int t501;
    int t523;
    int t519;
    int t515;
    int t502;
    int t512;
    int t505;
    int t504;
    int t503;
    int t508;
    int t507;
    int t506;
    int t511;
    int t510;
    int t509;
    int t531;
    int t553;
    int t549;
    int t545;
    int t532;
    int t542;
    int t535;
    int t534;
    int t533;
    int t538;
    int t537;
    int t536;
    int t541;
    int t540;
    int t539;
    int t565;
    int t561;
    int t453;
    int t345;
    int t328;
    int t298;
    int t268;
    int t449;
    int t419;
    int t389;
    int t557;
    int t527;
    int t497;

    FUN_0c054452();
    t1 = *(int *)0xC2A8C54;
    t2 = *(int *)((t1 + 0x0));
    t3 = (int)((int)t2 / (int)0x3C);
    if (t2 == 0x293) {
        Voice_ShutUp(0x0);
        Voice_Request(0xC130B78, 0x0, 0x7F, 0x0);
    }
    t7 = t3;
    if ((int)t3 > (int)0x3E7) {
        t7 = 0x3E7;
    }
    t10 = 0x0;
    t11 = t7;
    t12 = 0x64;
    if ((int)t3 >= (int)0x64) {
        t8 = (int)((int)t7 / (int)0x64);
        t10 = t8;
        t11 = (t7 - (t8 * 0x64));
        t12 = (t8 * 0x64);
    }
    t13 = (int)((int)t11 / (int)0xA);
    t14 = (int)((int)t11 % (int)0xA);
    FUN_0c05423a(t11, t12);
    *(unsigned int *)0xC2A7FB0 = 0x200E;
    *(float *)0xC2A7FA0 = 1.0f;
    *(float *)0xC2A7F90 = 1.0f;
    *(unsigned int *)0xC2A7FA4 = 0x0;
    t16 = *(int *)0xC2A8E98;
    if (t16 != 1) {
        if ((int)t7 < (int)0xB) {
            if ((int)t7 < (int)0x1) {
                u17 = 1.0f;
                if ((int)t7 < (int)0xB) {
                    u17 = 0.0f;
                }
                nlObjPutSetFadeColor(1.0f, u17, 0.0f);
                *(float *)0xC2A7F80 = 32.0f;
                *(float *)0xC2A7F84 = 84.0f;
                if (t10 != 0) {
                    t19 = *(int *)((0xC0D0C08 + (t10 << 2)));
                    *(unsigned int *)0xC2A7F7C = t19;
                    nlSprPut(0xC2A7F7C);
                }
                t22 = *(int *)((0xC0D0C08 + (t13 << 2)));
                *(unsigned int *)0xC2A7F7C = t22;
                u23 = *(float *)0xC053E44;
                *(float *)0xC2A7F80 = u23;
                nlSprPut(0xC2A7F7C);
                t25 = *(int *)((0xC0D0C08 + (t14 << 2)));
                *(unsigned int *)0xC2A7F7C = t25;
                u26 = *(float *)0xC053E48;
                *(float *)0xC2A7F80 = u26;
                nlSprPut(0xC2A7F7C);
            } else {
                t28 = *(int *)0xC2A8CAC;
                if ((int)t28 < (int)0xA) {
                    if ((int)t7 < (int)0xB) {
                        if ((int)t7 <= (int)0x6) {
                            if ((int)t28 < (int)0x7) {
                                if ((int)t7 < (int)0x7) {
                                    if ((int)t7 <= (int)0x3) {
                                        if ((int)t28 < (int)0x5) {
                                            if ((int)t7 < (int)0x4) {
                                                if ((int)t7 > 0) {
                                                    nlObjPutSetFadeColor(1.0f, 0.0f, 0.0f);
                                                    *(float *)0xC2A7F80 = 32.0f;
                                                    *(float *)0xC2A7F84 = 84.0f;
                                                    if (t10 != 0) {
                                                        t30 = *(int *)((0xC0D0C08 + (t10 << 2)));
                                                        *(unsigned int *)0xC2A7F7C = t30;
                                                        nlSprPut(0xC2A7F7C);
                                                    }
                                                    t33 = *(int *)((0xC0D0C08 + (t13 << 2)));
                                                    *(unsigned int *)0xC2A7F7C = t33;
                                                    u34 = *(float *)0xC053E44;
                                                    *(float *)0xC2A7F80 = u34;
                                                    nlSprPut(0xC2A7F7C);
                                                    t36 = *(int *)((0xC0D0C08 + (t14 << 2)));
                                                    *(unsigned int *)0xC2A7F7C = t36;
                                                    u37 = *(float *)0xC053E48;
                                                    *(float *)0xC2A7F80 = u37;
                                                    nlSprPut(0xC2A7F7C);
                                                }
                                            }
                                        }
                                    } else {
                                        nlObjPutSetFadeColor(1.0f, 0.0f, 0.0f);
                                        *(float *)0xC2A7F80 = 32.0f;
                                        *(float *)0xC2A7F84 = 84.0f;
                                        if (t10 != 0) {
                                            t43 = *(int *)((0xC0D0C08 + (t10 << 2)));
                                            *(unsigned int *)0xC2A7F7C = t43;
                                            nlSprPut(0xC2A7F7C);
                                        }
                                        t46 = *(int *)((0xC0D0C08 + (t13 << 2)));
                                        *(unsigned int *)0xC2A7F7C = t46;
                                        u47 = *(float *)0xC053E44;
                                        *(float *)0xC2A7F80 = u47;
                                        nlSprPut(0xC2A7F7C);
                                        t49 = *(int *)((0xC0D0C08 + (t14 << 2)));
                                        *(unsigned int *)0xC2A7F7C = t49;
                                        u50 = *(float *)0xC053E48;
                                        *(float *)0xC2A7F80 = u50;
                                        nlSprPut(0xC2A7F7C);
                                    }
                                } else {
                                    if ((int)t28 < (int)0x5) {
                                        if ((int)t7 < (int)0x4) {
                                            if ((int)t7 > 0) {
                                                nlObjPutSetFadeColor(1.0f, 0.0f, 0.0f);
                                                *(float *)0xC2A7F80 = 32.0f;
                                                *(float *)0xC2A7F84 = 84.0f;
                                                if (t10 != 0) {
                                                    t54 = *(int *)((0xC0D0C08 + (t10 << 2)));
                                                    *(unsigned int *)0xC2A7F7C = t54;
                                                    nlSprPut(0xC2A7F7C);
                                                }
                                                t57 = *(int *)((0xC0D0C08 + (t13 << 2)));
                                                *(unsigned int *)0xC2A7F7C = t57;
                                                u58 = *(float *)0xC053E44;
                                                *(float *)0xC2A7F80 = u58;
                                                nlSprPut(0xC2A7F7C);
                                                t60 = *(int *)((0xC0D0C08 + (t14 << 2)));
                                                *(unsigned int *)0xC2A7F7C = t60;
                                                u61 = *(float *)0xC053E48;
                                                *(float *)0xC2A7F80 = u61;
                                                nlSprPut(0xC2A7F7C);
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((int)t28 < (int)0x5) {
                                    if ((int)t7 < (int)0x4) {
                                        if ((int)t7 > 0) {
                                            nlObjPutSetFadeColor(1.0f, 0.0f, 0.0f);
                                            *(float *)0xC2A7F80 = 32.0f;
                                            *(float *)0xC2A7F84 = 84.0f;
                                            if (t10 != 0) {
                                                t68 = *(int *)((0xC0D0C08 + (t10 << 2)));
                                                *(unsigned int *)0xC2A7F7C = t68;
                                                nlSprPut(0xC2A7F7C);
                                            }
                                            t71 = *(int *)((0xC0D0C08 + (t13 << 2)));
                                            *(unsigned int *)0xC2A7F7C = t71;
                                            u72 = *(float *)0xC053E44;
                                            *(float *)0xC2A7F80 = u72;
                                            nlSprPut(0xC2A7F7C);
                                            t74 = *(int *)((0xC0D0C08 + (t14 << 2)));
                                            *(unsigned int *)0xC2A7F7C = t74;
                                            u75 = *(float *)0xC053E48;
                                            *(float *)0xC2A7F80 = u75;
                                            nlSprPut(0xC2A7F7C);
                                        }
                                    }
                                }
                            }
                        } else {
                            nlObjPutSetFadeColor(1.0f, 0.0f, 0.0f);
                            *(float *)0xC2A7F80 = 32.0f;
                            *(float *)0xC2A7F84 = 84.0f;
                            if (t10 != 0) {
                                t82 = *(int *)((0xC0D0C08 + (t10 << 2)));
                                *(unsigned int *)0xC2A7F7C = t82;
                                nlSprPut(0xC2A7F7C);
                            }
                            t85 = *(int *)((0xC0D0C08 + (t13 << 2)));
                            *(unsigned int *)0xC2A7F7C = t85;
                            u86 = *(float *)0xC053E44;
                            *(float *)0xC2A7F80 = u86;
                            nlSprPut(0xC2A7F7C);
                            t88 = *(int *)((0xC0D0C08 + (t14 << 2)));
                            *(unsigned int *)0xC2A7F7C = t88;
                            u89 = *(float *)0xC053E48;
                            *(float *)0xC2A7F80 = u89;
                            nlSprPut(0xC2A7F7C);
                        }
                    } else {
                        if ((int)t28 < (int)0x7) {
                            if ((int)t7 < (int)0x7) {
                                if ((int)t7 <= (int)0x3) {
                                    if ((int)t28 < (int)0x5) {
                                        if ((int)t7 < (int)0x4) {
                                            if ((int)t7 > 0) {
                                                nlObjPutSetFadeColor(1.0f, 0.0f, 0.0f);
                                                *(float *)0xC2A7F80 = 32.0f;
                                                *(float *)0xC2A7F84 = 84.0f;
                                                if (t10 != 0) {
                                                    t93 = *(int *)((0xC0D0C08 + (t10 << 2)));
                                                    *(unsigned int *)0xC2A7F7C = t93;
                                                    nlSprPut(0xC2A7F7C);
                                                }
                                                t96 = *(int *)((0xC0D0C08 + (t13 << 2)));
                                                *(unsigned int *)0xC2A7F7C = t96;
                                                u97 = *(float *)0xC053E44;
                                                *(float *)0xC2A7F80 = u97;
                                                nlSprPut(0xC2A7F7C);
                                                t99 = *(int *)((0xC0D0C08 + (t14 << 2)));
                                                *(unsigned int *)0xC2A7F7C = t99;
                                                u100 = *(float *)0xC053E48;
                                                *(float *)0xC2A7F80 = u100;
                                                nlSprPut(0xC2A7F7C);
                                            }
                                        }
                                    }
                                } else {
                                    nlObjPutSetFadeColor(1.0f, 0.0f, 0.0f);
                                    *(float *)0xC2A7F80 = 32.0f;
                                    *(float *)0xC2A7F84 = 84.0f;
                                    if (t10 != 0) {
                                        t106 = *(int *)((0xC0D0C08 + (t10 << 2)));
                                        *(unsigned int *)0xC2A7F7C = t106;
                                        nlSprPut(0xC2A7F7C);
                                    }
                                    t109 = *(int *)((0xC0D0C08 + (t13 << 2)));
                                    *(unsigned int *)0xC2A7F7C = t109;
                                    u110 = *(float *)0xC053E44;
                                    *(float *)0xC2A7F80 = u110;
                                    nlSprPut(0xC2A7F7C);
                                    t112 = *(int *)((0xC0D0C08 + (t14 << 2)));
                                    *(unsigned int *)0xC2A7F7C = t112;
                                    u113 = *(float *)0xC053E48;
                                    *(float *)0xC2A7F80 = u113;
                                    nlSprPut(0xC2A7F7C);
                                }
                            } else {
                                if ((int)t28 < (int)0x5) {
                                    if ((int)t7 < (int)0x4) {
                                        if ((int)t7 > 0) {
                                            nlObjPutSetFadeColor(1.0f, 0.0f, 0.0f);
                                            *(float *)0xC2A7F80 = 32.0f;
                                            *(float *)0xC2A7F84 = 84.0f;
                                            if (t10 != 0) {
                                                t117 = *(int *)((0xC0D0C08 + (t10 << 2)));
                                                *(unsigned int *)0xC2A7F7C = t117;
                                                nlSprPut(0xC2A7F7C);
                                            }
                                            t120 = *(int *)((0xC0D0C08 + (t13 << 2)));
                                            *(unsigned int *)0xC2A7F7C = t120;
                                            u121 = *(float *)0xC053E44;
                                            *(float *)0xC2A7F80 = u121;
                                            nlSprPut(0xC2A7F7C);
                                            t123 = *(int *)((0xC0D0C08 + (t14 << 2)));
                                            *(unsigned int *)0xC2A7F7C = t123;
                                            u124 = *(float *)0xC053E48;
                                            *(float *)0xC2A7F80 = u124;
                                            nlSprPut(0xC2A7F7C);
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((int)t28 < (int)0x5) {
                                if ((int)t7 < (int)0x4) {
                                    if ((int)t7 > 0) {
                                        nlObjPutSetFadeColor(1.0f, 0.0f, 0.0f);
                                        *(float *)0xC2A7F80 = 32.0f;
                                        *(float *)0xC2A7F84 = 84.0f;
                                        if (t10 != 0) {
                                            t131 = *(int *)((0xC0D0C08 + (t10 << 2)));
                                            *(unsigned int *)0xC2A7F7C = t131;
                                            nlSprPut(0xC2A7F7C);
                                        }
                                        t134 = *(int *)((0xC0D0C08 + (t13 << 2)));
                                        *(unsigned int *)0xC2A7F7C = t134;
                                        u135 = *(float *)0xC053E44;
                                        *(float *)0xC2A7F80 = u135;
                                        nlSprPut(0xC2A7F7C);
                                        t137 = *(int *)((0xC0D0C08 + (t14 << 2)));
                                        *(unsigned int *)0xC2A7F7C = t137;
                                        u138 = *(float *)0xC053E48;
                                        *(float *)0xC2A7F80 = u138;
                                        nlSprPut(0xC2A7F7C);
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((int)t28 < (int)0x7) {
                        if ((int)t7 < (int)0x7) {
                            if ((int)t7 <= (int)0x3) {
                                if ((int)t28 < (int)0x5) {
                                    if ((int)t7 < (int)0x4) {
                                        if ((int)t7 > 0) {
                                            nlObjPutSetFadeColor(1.0f, 0.0f, 0.0f);
                                            *(float *)0xC2A7F80 = 32.0f;
                                            *(float *)0xC2A7F84 = 84.0f;
                                            if (t10 != 0) {
                                                t146 = *(int *)((0xC0D0C08 + (t10 << 2)));
                                                *(unsigned int *)0xC2A7F7C = t146;
                                                nlSprPut(0xC2A7F7C);
                                            }
                                            t149 = *(int *)((0xC0D0C08 + (t13 << 2)));
                                            *(unsigned int *)0xC2A7F7C = t149;
                                            u150 = *(float *)0xC053E44;
                                            *(float *)0xC2A7F80 = u150;
                                            nlSprPut(0xC2A7F7C);
                                            t152 = *(int *)((0xC0D0C08 + (t14 << 2)));
                                            *(unsigned int *)0xC2A7F7C = t152;
                                            u153 = *(float *)0xC053E48;
                                            *(float *)0xC2A7F80 = u153;
                                            nlSprPut(0xC2A7F7C);
                                        }
                                    }
                                }
                            } else {
                                nlObjPutSetFadeColor(1.0f, 0.0f, 0.0f);
                                *(float *)0xC2A7F80 = 32.0f;
                                *(float *)0xC2A7F84 = 84.0f;
                                if (t10 != 0) {
                                    t159 = *(int *)((0xC0D0C08 + (t10 << 2)));
                                    *(unsigned int *)0xC2A7F7C = t159;
                                    nlSprPut(0xC2A7F7C);
                                }
                                t162 = *(int *)((0xC0D0C08 + (t13 << 2)));
                                *(unsigned int *)0xC2A7F7C = t162;
                                u163 = *(float *)0xC053E44;
                                *(float *)0xC2A7F80 = u163;
                                nlSprPut(0xC2A7F7C);
                                t165 = *(int *)((0xC0D0C08 + (t14 << 2)));
                                *(unsigned int *)0xC2A7F7C = t165;
                                u166 = *(float *)0xC053E48;
                                *(float *)0xC2A7F80 = u166;
                                nlSprPut(0xC2A7F7C);
                            }
                        } else {
                            if ((int)t28 < (int)0x5) {
                                if ((int)t7 < (int)0x4) {
                                    if ((int)t7 > 0) {
                                        nlObjPutSetFadeColor(1.0f, 0.0f, 0.0f);
                                        *(float *)0xC2A7F80 = 32.0f;
                                        *(float *)0xC2A7F84 = 84.0f;
                                        if (t10 != 0) {
                                            t170 = *(int *)((0xC0D0C08 + (t10 << 2)));
                                            *(unsigned int *)0xC2A7F7C = t170;
                                            nlSprPut(0xC2A7F7C);
                                        }
                                        t173 = *(int *)((0xC0D0C08 + (t13 << 2)));
                                        *(unsigned int *)0xC2A7F7C = t173;
                                        u174 = *(float *)0xC053E44;
                                        *(float *)0xC2A7F80 = u174;
                                        nlSprPut(0xC2A7F7C);
                                        t176 = *(int *)((0xC0D0C08 + (t14 << 2)));
                                        *(unsigned int *)0xC2A7F7C = t176;
                                        u177 = *(float *)0xC053E48;
                                        *(float *)0xC2A7F80 = u177;
                                        nlSprPut(0xC2A7F7C);
                                    }
                                }
                            }
                        }
                    } else {
                        if ((int)t28 < (int)0x5) {
                            if ((int)t7 < (int)0x4) {
                                if ((int)t7 > 0) {
                                    nlObjPutSetFadeColor(1.0f, 0.0f, 0.0f);
                                    *(float *)0xC2A7F80 = 32.0f;
                                    *(float *)0xC2A7F84 = 84.0f;
                                    if (t10 != 0) {
                                        t184 = *(int *)((0xC0D0C08 + (t10 << 2)));
                                        *(unsigned int *)0xC2A7F7C = t184;
                                        nlSprPut(0xC2A7F7C);
                                    }
                                    t187 = *(int *)((0xC0D0C08 + (t13 << 2)));
                                    *(unsigned int *)0xC2A7F7C = t187;
                                    u188 = *(float *)0xC053E44;
                                    *(float *)0xC2A7F80 = u188;
                                    nlSprPut(0xC2A7F7C);
                                    t190 = *(int *)((0xC0D0C08 + (t14 << 2)));
                                    *(unsigned int *)0xC2A7F7C = t190;
                                    u191 = *(float *)0xC053E48;
                                    *(float *)0xC2A7F80 = u191;
                                    nlSprPut(0xC2A7F7C);
                                }
                            }
                        }
                    }
                }
            }
        } else {
            u199 = 1.0f;
            if ((int)t7 < (int)0xB) {
                u199 = 0.0f;
            }
            nlObjPutSetFadeColor(1.0f, u199, 0.0f);
            *(float *)0xC2A7F80 = 32.0f;
            *(float *)0xC2A7F84 = 84.0f;
            if (t10 != 0) {
                t201 = *(int *)((0xC0D0C08 + (t10 << 2)));
                *(unsigned int *)0xC2A7F7C = t201;
                nlSprPut(0xC2A7F7C);
            }
            t204 = *(int *)((0xC0D0C08 + (t13 << 2)));
            *(unsigned int *)0xC2A7F7C = t204;
            u205 = *(float *)0xC053E44;
            *(float *)0xC2A7F80 = u205;
            nlSprPut(0xC2A7F7C);
            t207 = *(int *)((0xC0D0C08 + (t14 << 2)));
            *(unsigned int *)0xC2A7F7C = t207;
            u208 = *(float *)0xC053E48;
            *(float *)0xC2A7F80 = u208;
            nlSprPut(0xC2A7F7C);
        }
    } else {
        u211 = 1.0f;
        if ((int)t7 < (int)0xB) {
            u211 = 0.0f;
        }
        nlObjPutSetFadeColor(1.0f, u211, 0.0f);
        *(float *)0xC2A7F80 = 32.0f;
        *(float *)0xC2A7F84 = 84.0f;
        if (t10 != 0) {
            t213 = *(int *)((0xC0D0C08 + (t10 << 2)));
            *(unsigned int *)0xC2A7F7C = t213;
            nlSprPut(0xC2A7F7C);
        }
        t216 = *(int *)((0xC0D0C08 + (t13 << 2)));
        *(unsigned int *)0xC2A7F7C = t216;
        u217 = *(float *)0xC053E44;
        *(float *)0xC2A7F80 = u217;
        nlSprPut(0xC2A7F7C);
        t219 = *(int *)((0xC0D0C08 + (t14 << 2)));
        *(unsigned int *)0xC2A7F7C = t219;
        u220 = *(float *)0xC053E48;
        *(float *)0xC2A7F80 = u220;
        nlSprPut(0xC2A7F7C);
    }
    if ((int)t7 < (int)0xB) {
        nlObjPutSetFadeColor(1.0f, 0.0f, 0.0f);
    }
    FUN_0c0543fc();
    t226 = ResetFadeColor();
    t227 = *(int *)0xC2A8CAC;
    if ((int)t227 > (int)0x14) {
        if ((int)t7 < (int)0xB) {
            if ((int)t7 <= (int)0x6) {
                t228 = *(int *)0xC2A8CAC;
                if ((int)t228 > (int)0xF) {
                    if ((int)t7 < (int)0x7) {
                        if ((int)t7 <= (int)0x3) {
                            t229 = *(int *)0xC2A8CAC;
                            t251 = 0x7;
                            if ((int)t229 > (int)0xA) {
                                t247 = 0x4;
                                if ((int)t7 < (int)0x4) {
                                    t243 = 0x4;
                                    if ((int)t7 > 0) {
                                        t230 = *(int *)0xC2A8E98;
                                        t240 = 0x4;
                                        if (t230 == 0) {
                                            t233 = 0x4;
                                            if ((int)t7 < (int)0xB) {
                                                t232 = 0x6;
                                                if ((int)t7 > (int)0x6) {
                                                    t231 = Sound_Request(0x505A9, 0x0);
                                                    t232 = t231;
                                                }
                                                t233 = t232;
                                            }
                                            t236 = t233;
                                            if ((int)t7 < (int)0x7) {
                                                t235 = t233;
                                                if ((int)t7 > (int)0x3) {
                                                    t234 = Sound_Request(0x505A9, 0x0);
                                                    t235 = t234;
                                                }
                                                t236 = t235;
                                            }
                                            t239 = t236;
                                            if ((int)t7 < (int)0x4) {
                                                t238 = t236;
                                                if ((int)t7 > 0) {
                                                    t237 = Sound_Request(0x505A9, 0x0);
                                                    t238 = t237;
                                                }
                                                t239 = t238;
                                            }
                                            t240 = t239;
                                        }
                                        *(unsigned int *)0xC2A8CAC = 0x0;
                                        t243 = t240;
                                    }
                                    t247 = t243;
                                }
                                t251 = t247;
                            }
                            t268 = t251;
                        } else {
                            t255 = *(int *)0xC2A8E98;
                            t265 = 0x7;
                            if (t255 == 0) {
                                t258 = 0x7;
                                if ((int)t7 < (int)0xB) {
                                    t257 = 0x6;
                                    if ((int)t7 > (int)0x6) {
                                        t256 = Sound_Request(0x505A9, 0x0);
                                        t257 = t256;
                                    }
                                    t258 = t257;
                                }
                                t261 = t258;
                                if ((int)t7 < (int)0x7) {
                                    t260 = t258;
                                    if ((int)t7 > (int)0x3) {
                                        t259 = Sound_Request(0x505A9, 0x0);
                                        t260 = t259;
                                    }
                                    t261 = t260;
                                }
                                t264 = t261;
                                if ((int)t7 < (int)0x4) {
                                    t263 = t261;
                                    if ((int)t7 > 0) {
                                        t262 = Sound_Request(0x505A9, 0x0);
                                        t263 = t262;
                                    }
                                    t264 = t263;
                                }
                                t265 = t264;
                            }
                            *(unsigned int *)0xC2A8CAC = 0x0;
                            t268 = t265;
                        }
                        t298 = t268;
                    } else {
                        t272 = *(int *)0xC2A8CAC;
                        t294 = 0x7;
                        if ((int)t272 > (int)0xA) {
                            t290 = 0x4;
                            if ((int)t7 < (int)0x4) {
                                t286 = 0x4;
                                if ((int)t7 > 0) {
                                    t273 = *(int *)0xC2A8E98;
                                    t283 = 0x4;
                                    if (t273 == 0) {
                                        t276 = 0x4;
                                        if ((int)t7 < (int)0xB) {
                                            t275 = 0x6;
                                            if ((int)t7 > (int)0x6) {
                                                t274 = Sound_Request(0x505A9, 0x0);
                                                t275 = t274;
                                            }
                                            t276 = t275;
                                        }
                                        t279 = t276;
                                        if ((int)t7 < (int)0x7) {
                                            t278 = t276;
                                            if ((int)t7 > (int)0x3) {
                                                t277 = Sound_Request(0x505A9, 0x0);
                                                t278 = t277;
                                            }
                                            t279 = t278;
                                        }
                                        t282 = t279;
                                        if ((int)t7 < (int)0x4) {
                                            t281 = t279;
                                            if ((int)t7 > 0) {
                                                t280 = Sound_Request(0x505A9, 0x0);
                                                t281 = t280;
                                            }
                                            t282 = t281;
                                        }
                                        t283 = t282;
                                    }
                                    *(unsigned int *)0xC2A8CAC = 0x0;
                                    t286 = t283;
                                }
                                t290 = t286;
                            }
                            t294 = t290;
                        }
                        t298 = t294;
                    }
                    t328 = t298;
                } else {
                    t302 = *(int *)0xC2A8CAC;
                    t324 = 0xB;
                    if ((int)t302 > (int)0xA) {
                        t320 = 0x4;
                        if ((int)t7 < (int)0x4) {
                            t316 = 0x4;
                            if ((int)t7 > 0) {
                                t303 = *(int *)0xC2A8E98;
                                t313 = 0x4;
                                if (t303 == 0) {
                                    t306 = 0x4;
                                    if ((int)t7 < (int)0xB) {
                                        t305 = 0x6;
                                        if ((int)t7 > (int)0x6) {
                                            t304 = Sound_Request(0x505A9, 0x0);
                                            t305 = t304;
                                        }
                                        t306 = t305;
                                    }
                                    t309 = t306;
                                    if ((int)t7 < (int)0x7) {
                                        t308 = t306;
                                        if ((int)t7 > (int)0x3) {
                                            t307 = Sound_Request(0x505A9, 0x0);
                                            t308 = t307;
                                        }
                                        t309 = t308;
                                    }
                                    t312 = t309;
                                    if ((int)t7 < (int)0x4) {
                                        t311 = t309;
                                        if ((int)t7 > 0) {
                                            t310 = Sound_Request(0x505A9, 0x0);
                                            t311 = t310;
                                        }
                                        t312 = t311;
                                    }
                                    t313 = t312;
                                }
                                *(unsigned int *)0xC2A8CAC = 0x0;
                                t316 = t313;
                            }
                            t320 = t316;
                        }
                        t324 = t320;
                    }
                    t328 = t324;
                }
                t345 = t328;
            } else {
                t332 = *(int *)0xC2A8E98;
                t342 = 0xB;
                if (t332 == 0) {
                    t335 = 0xB;
                    if ((int)t7 < (int)0xB) {
                        t334 = 0x6;
                        if ((int)t7 > (int)0x6) {
                            t333 = Sound_Request(0x505A9, 0x0);
                            t334 = t333;
                        }
                        t335 = t334;
                    }
                    t338 = t335;
                    if ((int)t7 < (int)0x7) {
                        t337 = t335;
                        if ((int)t7 > (int)0x3) {
                            t336 = Sound_Request(0x505A9, 0x0);
                            t337 = t336;
                        }
                        t338 = t337;
                    }
                    t341 = t338;
                    if ((int)t7 < (int)0x4) {
                        t340 = t338;
                        if ((int)t7 > 0) {
                            t339 = Sound_Request(0x505A9, 0x0);
                            t340 = t339;
                        }
                        t341 = t340;
                    }
                    t342 = t341;
                }
                *(unsigned int *)0xC2A8CAC = 0x0;
                t345 = t342;
            }
            t453 = t345;
        } else {
            t349 = *(int *)0xC2A8CAC;
            if ((int)t349 > (int)0xF) {
                if ((int)t7 < (int)0x7) {
                    if ((int)t7 <= (int)0x3) {
                        t350 = *(int *)0xC2A8CAC;
                        t372 = 0x7;
                        if ((int)t350 > (int)0xA) {
                            t368 = 0x4;
                            if ((int)t7 < (int)0x4) {
                                t364 = 0x4;
                                if ((int)t7 > 0) {
                                    t351 = *(int *)0xC2A8E98;
                                    t361 = 0x4;
                                    if (t351 == 0) {
                                        t354 = 0x4;
                                        if ((int)t7 < (int)0xB) {
                                            t353 = 0x6;
                                            if ((int)t7 > (int)0x6) {
                                                t352 = Sound_Request(0x505A9, 0x0);
                                                t353 = t352;
                                            }
                                            t354 = t353;
                                        }
                                        t357 = t354;
                                        if ((int)t7 < (int)0x7) {
                                            t356 = t354;
                                            if ((int)t7 > (int)0x3) {
                                                t355 = Sound_Request(0x505A9, 0x0);
                                                t356 = t355;
                                            }
                                            t357 = t356;
                                        }
                                        t360 = t357;
                                        if ((int)t7 < (int)0x4) {
                                            t359 = t357;
                                            if ((int)t7 > 0) {
                                                t358 = Sound_Request(0x505A9, 0x0);
                                                t359 = t358;
                                            }
                                            t360 = t359;
                                        }
                                        t361 = t360;
                                    }
                                    *(unsigned int *)0xC2A8CAC = 0x0;
                                    t364 = t361;
                                }
                                t368 = t364;
                            }
                            t372 = t368;
                        }
                        t389 = t372;
                    } else {
                        t376 = *(int *)0xC2A8E98;
                        t386 = 0x7;
                        if (t376 == 0) {
                            t379 = 0x7;
                            if ((int)t7 < (int)0xB) {
                                t378 = 0x6;
                                if ((int)t7 > (int)0x6) {
                                    t377 = Sound_Request(0x505A9, 0x0);
                                    t378 = t377;
                                }
                                t379 = t378;
                            }
                            t382 = t379;
                            if ((int)t7 < (int)0x7) {
                                t381 = t379;
                                if ((int)t7 > (int)0x3) {
                                    t380 = Sound_Request(0x505A9, 0x0);
                                    t381 = t380;
                                }
                                t382 = t381;
                            }
                            t385 = t382;
                            if ((int)t7 < (int)0x4) {
                                t384 = t382;
                                if ((int)t7 > 0) {
                                    t383 = Sound_Request(0x505A9, 0x0);
                                    t384 = t383;
                                }
                                t385 = t384;
                            }
                            t386 = t385;
                        }
                        *(unsigned int *)0xC2A8CAC = 0x0;
                        t389 = t386;
                    }
                    t419 = t389;
                } else {
                    t393 = *(int *)0xC2A8CAC;
                    t415 = 0x7;
                    if ((int)t393 > (int)0xA) {
                        t411 = 0x4;
                        if ((int)t7 < (int)0x4) {
                            t407 = 0x4;
                            if ((int)t7 > 0) {
                                t394 = *(int *)0xC2A8E98;
                                t404 = 0x4;
                                if (t394 == 0) {
                                    t397 = 0x4;
                                    if ((int)t7 < (int)0xB) {
                                        t396 = 0x6;
                                        if ((int)t7 > (int)0x6) {
                                            t395 = Sound_Request(0x505A9, 0x0);
                                            t396 = t395;
                                        }
                                        t397 = t396;
                                    }
                                    t400 = t397;
                                    if ((int)t7 < (int)0x7) {
                                        t399 = t397;
                                        if ((int)t7 > (int)0x3) {
                                            t398 = Sound_Request(0x505A9, 0x0);
                                            t399 = t398;
                                        }
                                        t400 = t399;
                                    }
                                    t403 = t400;
                                    if ((int)t7 < (int)0x4) {
                                        t402 = t400;
                                        if ((int)t7 > 0) {
                                            t401 = Sound_Request(0x505A9, 0x0);
                                            t402 = t401;
                                        }
                                        t403 = t402;
                                    }
                                    t404 = t403;
                                }
                                *(unsigned int *)0xC2A8CAC = 0x0;
                                t407 = t404;
                            }
                            t411 = t407;
                        }
                        t415 = t411;
                    }
                    t419 = t415;
                }
                t449 = t419;
            } else {
                t423 = *(int *)0xC2A8CAC;
                t445 = 0xB;
                if ((int)t423 > (int)0xA) {
                    t441 = 0x4;
                    if ((int)t7 < (int)0x4) {
                        t437 = 0x4;
                        if ((int)t7 > 0) {
                            t424 = *(int *)0xC2A8E98;
                            t434 = 0x4;
                            if (t424 == 0) {
                                t427 = 0x4;
                                if ((int)t7 < (int)0xB) {
                                    t426 = 0x6;
                                    if ((int)t7 > (int)0x6) {
                                        t425 = Sound_Request(0x505A9, 0x0);
                                        t426 = t425;
                                    }
                                    t427 = t426;
                                }
                                t430 = t427;
                                if ((int)t7 < (int)0x7) {
                                    t429 = t427;
                                    if ((int)t7 > (int)0x3) {
                                        t428 = Sound_Request(0x505A9, 0x0);
                                        t429 = t428;
                                    }
                                    t430 = t429;
                                }
                                t433 = t430;
                                if ((int)t7 < (int)0x4) {
                                    t432 = t430;
                                    if ((int)t7 > 0) {
                                        t431 = Sound_Request(0x505A9, 0x0);
                                        t432 = t431;
                                    }
                                    t433 = t432;
                                }
                                t434 = t433;
                            }
                            *(unsigned int *)0xC2A8CAC = 0x0;
                            t437 = t434;
                        }
                        t441 = t437;
                    }
                    t445 = t441;
                }
                t449 = t445;
            }
            t453 = t449;
        }
        t561 = t453;
    } else {
        t457 = *(int *)0xC2A8CAC;
        if ((int)t457 > (int)0xF) {
            if ((int)t7 < (int)0x7) {
                if ((int)t7 <= (int)0x3) {
                    t458 = *(int *)0xC2A8CAC;
                    t480 = 0x7;
                    if ((int)t458 > (int)0xA) {
                        t476 = 0x4;
                        if ((int)t7 < (int)0x4) {
                            t472 = 0x4;
                            if ((int)t7 > 0) {
                                t459 = *(int *)0xC2A8E98;
                                t469 = 0x4;
                                if (t459 == 0) {
                                    t462 = 0x4;
                                    if ((int)t7 < (int)0xB) {
                                        t461 = 0x6;
                                        if ((int)t7 > (int)0x6) {
                                            t460 = Sound_Request(0x505A9, 0x0);
                                            t461 = t460;
                                        }
                                        t462 = t461;
                                    }
                                    t465 = t462;
                                    if ((int)t7 < (int)0x7) {
                                        t464 = t462;
                                        if ((int)t7 > (int)0x3) {
                                            t463 = Sound_Request(0x505A9, 0x0);
                                            t464 = t463;
                                        }
                                        t465 = t464;
                                    }
                                    t468 = t465;
                                    if ((int)t7 < (int)0x4) {
                                        t467 = t465;
                                        if ((int)t7 > 0) {
                                            t466 = Sound_Request(0x505A9, 0x0);
                                            t467 = t466;
                                        }
                                        t468 = t467;
                                    }
                                    t469 = t468;
                                }
                                *(unsigned int *)0xC2A8CAC = 0x0;
                                t472 = t469;
                            }
                            t476 = t472;
                        }
                        t480 = t476;
                    }
                    t497 = t480;
                } else {
                    t484 = *(int *)0xC2A8E98;
                    t494 = 0x7;
                    if (t484 == 0) {
                        t487 = 0x7;
                        if ((int)t7 < (int)0xB) {
                            t486 = 0x6;
                            if ((int)t7 > (int)0x6) {
                                t485 = Sound_Request(0x505A9, 0x0);
                                t486 = t485;
                            }
                            t487 = t486;
                        }
                        t490 = t487;
                        if ((int)t7 < (int)0x7) {
                            t489 = t487;
                            if ((int)t7 > (int)0x3) {
                                t488 = Sound_Request(0x505A9, 0x0);
                                t489 = t488;
                            }
                            t490 = t489;
                        }
                        t493 = t490;
                        if ((int)t7 < (int)0x4) {
                            t492 = t490;
                            if ((int)t7 > 0) {
                                t491 = Sound_Request(0x505A9, 0x0);
                                t492 = t491;
                            }
                            t493 = t492;
                        }
                        t494 = t493;
                    }
                    *(unsigned int *)0xC2A8CAC = 0x0;
                    t497 = t494;
                }
                t527 = t497;
            } else {
                t501 = *(int *)0xC2A8CAC;
                t523 = 0x7;
                if ((int)t501 > (int)0xA) {
                    t519 = 0x4;
                    if ((int)t7 < (int)0x4) {
                        t515 = 0x4;
                        if ((int)t7 > 0) {
                            t502 = *(int *)0xC2A8E98;
                            t512 = 0x4;
                            if (t502 == 0) {
                                t505 = 0x4;
                                if ((int)t7 < (int)0xB) {
                                    t504 = 0x6;
                                    if ((int)t7 > (int)0x6) {
                                        t503 = Sound_Request(0x505A9, 0x0);
                                        t504 = t503;
                                    }
                                    t505 = t504;
                                }
                                t508 = t505;
                                if ((int)t7 < (int)0x7) {
                                    t507 = t505;
                                    if ((int)t7 > (int)0x3) {
                                        t506 = Sound_Request(0x505A9, 0x0);
                                        t507 = t506;
                                    }
                                    t508 = t507;
                                }
                                t511 = t508;
                                if ((int)t7 < (int)0x4) {
                                    t510 = t508;
                                    if ((int)t7 > 0) {
                                        t509 = Sound_Request(0x505A9, 0x0);
                                        t510 = t509;
                                    }
                                    t511 = t510;
                                }
                                t512 = t511;
                            }
                            *(unsigned int *)0xC2A8CAC = 0x0;
                            t515 = t512;
                        }
                        t519 = t515;
                    }
                    t523 = t519;
                }
                t527 = t523;
            }
            t557 = t527;
        } else {
            t531 = *(int *)0xC2A8CAC;
            t553 = t226;
            if ((int)t531 > (int)0xA) {
                t549 = 0x4;
                if ((int)t7 < (int)0x4) {
                    t545 = 0x4;
                    if ((int)t7 > 0) {
                        t532 = *(int *)0xC2A8E98;
                        t542 = 0x4;
                        if (t532 == 0) {
                            t535 = 0x4;
                            if ((int)t7 < (int)0xB) {
                                t534 = 0x6;
                                if ((int)t7 > (int)0x6) {
                                    t533 = Sound_Request(0x505A9, 0x0);
                                    t534 = t533;
                                }
                                t535 = t534;
                            }
                            t538 = t535;
                            if ((int)t7 < (int)0x7) {
                                t537 = t535;
                                if ((int)t7 > (int)0x3) {
                                    t536 = Sound_Request(0x505A9, 0x0);
                                    t537 = t536;
                                }
                                t538 = t537;
                            }
                            t541 = t538;
                            if ((int)t7 < (int)0x4) {
                                t540 = t538;
                                if ((int)t7 > 0) {
                                    t539 = Sound_Request(0x505A9, 0x0);
                                    t540 = t539;
                                }
                                t541 = t540;
                            }
                            t542 = t541;
                        }
                        *(unsigned int *)0xC2A8CAC = 0x0;
                        t545 = t542;
                    }
                    t549 = t545;
                }
                t553 = t549;
            }
            t557 = t553;
        }
        t561 = t557;
    }
    t565 = *(int *)0xC2A8CAC;
    *(unsigned int *)0xC2A8CAC = (t565 + 0x1);
    return t561;
}

int Init_DCmini(void)
{
    int t7;
    int t22;
    int t28;
    int t31;
    int t32;
    int t39;
    int t40;
    int t50;
    int t51;
    int t55;
    int t62;
    float u63;
    int t66;
    int t69;
    int t70;
    int t71;

    FUN_0c077df0(0x3);
    nlUnitMatrix();
    nlPerspective(0x1D28, 1.33333325f, 0.299999982f, 300.0f);
    FUN_0c077df0(0x1);
    FUN_0c05b7a8();
    FUN_0c05b7f0(0x4);
    FUN_0c05b88a();
    *(unsigned int *)0xC2A991C = 0x0;
    *(unsigned int *)0xC2A9920 = 0x0;
    *(unsigned int *)0xC2A9924 = 0x1E;
    *(unsigned int *)0xC2A98E8 = 0x0;
    *(unsigned int *)0xC2A98F4 = 0x0;
    *(unsigned int *)0xC2A98F8 = 0x0;
    *(unsigned int *)0xC2A98F0 = 0xC2A98F4;
    *(unsigned int *)0xC2A9928 = 0x3E7;
    *(unsigned int *)0xC2A9A38 = 0xB4;
    *(unsigned short *)0xC2A9940 = 0x0;
    *(unsigned int *)0xC2A9944 = 0x1;
    *(float *)0xC2A9948 = 0.5f;
    *(float *)0xC2A994C = 0.0f;
    *(unsigned int *)0xC2A9950 = 0x0;
    *(unsigned int *)0xC2A9904 = 0x0;
    t7 = *(int *)0xC1EE214;
    if (t7 == 10) {
        *(unsigned int *)0xC2A9900 = 0x8;
    } else {
        if (t7 == 8) {
            *(unsigned int *)0xC2A9900 = 0x5;
        } else {
            if (t7 == 9) {
                *(unsigned int *)0xC2A9900 = 0x3;
            } else {
                if (t7 != 14) {
                    if (t7 == 11) {
                        *(unsigned int *)0xC2A9900 = 0x7;
                    } else {
                        *(unsigned int *)0xC2A9900 = 0x1;
                    }
                } else {
                    *(unsigned int *)0xC2A9900 = 0x7;
                }
            }
        }
    }
    *(unsigned short *)0xC2A992C = 0x0;
    *(unsigned int *)0xC2A996C = 0xC1311C8;
    *(unsigned int *)0xC2A9A40 = 0x122;
    *(unsigned int *)0xC2A9A44 = 0x0;
    *(float *)0xC2A9A48 = -320.0f;
    *(float *)0xC2A9A4C = 320.0f;
    *(unsigned int *)0xC2A9A50 = 0x0;
    *(float *)0xC2A9A54 = 1.0f;
    *(float *)0xC2A9A58 = 1.0f;
    t22 = *(int *)0xC1EE214;
    if (t22 == 3) {
        *(unsigned int *)0xC2A9964 = 0x78;
        *(unsigned int *)0xC2A9960 = 0x78;
        FUN_0c038ed0();
        *(unsigned int *)0xC2A9954 = 0xFFFFFFFF;
        *(unsigned int *)0xC2A9958 = 0x46;
        *(unsigned int *)0xC2A995C = 0x0;
    }
    *(unsigned int *)0xC2A98FC = 0x0;
    t28 = *(int *)0xC1EE214;
    if (t28 == 1) {
        InitArrow(0xC1311BC);
        FUN_0c038f78();
    } else {
        if (t28 != 8) {
            if (t28 != 9) {
                if (t28 != 10) {
                    if (t28 != 11) {
                        if (t28 != 13) {
                            if (t28 == 14) {
                                *(unsigned int *)0xC2A98EC = 0x7;
                                t31 = *(int *)0xC1EE214;
                                t32 = 0xC1310E4;
                                if (t31 == 11) {
                                    t32 = 0xC131030;
                                }
                                InitArrow(t32);
                                FUN_0c038ed0();
                                *(unsigned int *)0xC2A9968 = 0x78;
                                *(unsigned int *)0xC2A9A34 = 0x0;
                            }
                        } else {
                            *(unsigned int *)0xC2A9A3C = 0x0;
                        }
                    } else {
                        *(unsigned int *)0xC2A98EC = 0x7;
                        t39 = *(int *)0xC1EE214;
                        t40 = 0xC1310E4;
                        if (t39 == 11) {
                            t40 = 0xC131030;
                        }
                        InitArrow(t40);
                        FUN_0c038ed0();
                        *(unsigned int *)0xC2A9968 = 0x78;
                        *(unsigned int *)0xC2A9A34 = 0x0;
                    }
                } else {
                    *(unsigned int *)0xC2A98EC = 0x8;
                    InitArrow(0xC131084);
                    *(unsigned int *)0xC2A9968 = 0x78;
                    *(unsigned short *)0xC2A9A64 = 0xC000;
                }
            } else {
                *(unsigned int *)0xC2A98EC = 0x3;
                *(unsigned int *)0xC2A9968 = 0x78;
            }
        } else {
            *(unsigned int *)0xC2A98EC = 0x5;
            *(unsigned int *)0xC2A9968 = 0x78;
            t50 = 0xC2A9908;
            t51 = 0x0;
            do {
                t51 = (t51 + 0x1);
                *(unsigned int *)((t50 + 0x0)) = 0x0;
                t50 = (t50 + 0x4);
            } while ((int)t51 < (int)0x5);
            FUN_0c05f93c();
        }
    }
    t55 = *(int *)0xC1EE214;
    if (t55 != 0) {
        if (t55 == 20) {
            FUN_0c05bb12();
            *(float *)0xC2A9A24 = 0.0f;
            FUN_0c05baf4(0xC2A9A24);
            *(unsigned int *)0xC2A9970 = 0x0;
        }
    } else {
        FUN_0c05bb12();
        *(float *)0xC2A9A24 = 0.0f;
        FUN_0c05baf4(0xC2A9A24);
        *(unsigned int *)0xC2A9970 = 0x0;
    }
    t62 = *(int *)0xC1EE214;
    if (t62 == 20) {
        u63 = *(float *)0xC05B75C;
        MakeKyakuTakeArea(0xC2A9978, 0xC1311AC, 0x0, u63);
        *(unsigned int *)0xC2A9974 = 0x0;
    }
    t66 = *(int *)0xC1EE214;
    if (t66 == 2) {
        FUN_0c05e8c8();
    }
    t69 = *(int *)0xC1EE214;
    if (t69 == 14) {
        *(unsigned int *)0xC2A9A2C = 0x0;
        *(unsigned int *)0xC2A9A30 = 0xFFFFFFFF;
    }
    *(unsigned int *)0xC2A9930 = 0x0;
    *(unsigned int *)0xC2A9934 = 0x0;
    *(unsigned int *)0xC2A9938 = 0x0;
    *(unsigned int *)0xC2A993C = 0x0;
    *(unsigned int *)0xC2A7614 = 0x0;
    t70 = *(int *)0xC1EE214;
    t71 = t70;
    if (t70 == 15) {
        *(unsigned int *)0xC2A9A5C = 0x0;
        *(unsigned int *)0xC2A9A60 = 0x0;
        t71 = 0xC2A9A5C;
    }
    *(unsigned int *)0xC17948C = 0x0;
    *(unsigned int *)0xC2A7368 = 0x0;
    *(unsigned int *)0xC2A736C = 0x0;
    *(unsigned int *)0xC2A9A68 = 0x0;
    return t71;
}

int FUN_0c05be5c(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t8;
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
    int t30;
    float u40;
    float u41;
    int t31;
    float u32;
    float u33;
    float u34;
    int t44;
    float u45;
    int t46;
    float u47;
    float u48;
    int t49;
    int t50;
    int t53;
    int t57;
    int t61;
    int t65;
    int t66;
    int t70;
    float u71;
    float u72;
    int t73;
    int t74;
    int t77;
    int t81;
    int t85;
    int t90;
    float u91;
    int t92;
    float u93;
    float u94;
    int t95;
    int t96;
    int t97;
    int t108;
    int t109;
    int t110;
    int t116;
    float u117;
    float u118;
    int t119;
    int t120;
    int t121;
    int t133;
    float u134;
    int t135;
    float u136;
    float u137;
    int t138;
    int t145;
    int t149;
    float u150;
    float u151;
    int t152;
    float u158;
    float u160;
    float u161;
    float u162;
    float u164;
    int t165;
    float u166;
    float u167;
    int t168;
    float u169;
    float u170;
    float u171;
    float u172;
    int t173;
    int t180;
    int t184;
    float u185;
    float u186;
    float u187;
    float u188;
    int t189;
    float u197;
    int t199;
    float u200;
    float u201;
    int t202;
    float u203;
    float u204;
    float u205;
    float u206;
    int t207;
    int t214;
    int t218;
    float u219;
    float u220;
    float u221;
    float u222;
    int t223;
    float u229;
    int t12;
    float u13;
    float u14;
    int stk[18] = {0};

    t0 = *(int *)0xC0D0F24;
    *(unsigned int *)((((int)stk + 4) + 0x10)) = t0;
    t1 = *(int *)0xC0D0F20;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = t1;
    t2 = *(int *)0xC0D0F1C;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t2;
    t3 = *(int *)0xC0D0F18;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t3;
    t4 = *(int *)0xC0D0F14;
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t4;
    pfSetFont(0x0);
    pfColor(0xFFFFAA00, 0xFFFFFFFF, 0xFFFFAA00, 0xFFFFFFFF);
    pfSize(1.0f, 1.0f);
    t8 = *(int *)0xC1EE214;
    if (t8 == 0) {
        nlObjPutSetFadeColor(0.0f, 0.799999952f, 0.399999976f);
        *(float *)0xC2A98A8 = 1.0f;
        *(float *)0xC2A98AC = 1.0f;
        t12 = 0x1F5;
        u13 = 523.0f;
        u14 = 80.0f;
    } else {
        nlObjPutSetFadeColor(1.0f, 0.5f, 0.899999976f);
        *(float *)0xC2A98A8 = 1.0f;
        *(float *)0xC2A98AC = 1.0f;
        t12 = 0x1F4;
        u13 = 555.0f;
        u14 = 83.0f;
    }
    FUN_0c05778a(0xC2A9898, t12, u13, u14);
    ResetFadeColor();
    t17 = *(int *)0xC2A996C;
    u18 = *(float *)((t17 + 0x0));
    *(unsigned int *)0xC1311B8 = (int)(u18 * 100.0f);
    t19 = (int)(u18 * 100.0f);
    if ((int)(int)(u18 * 100.0f) < 0) {
        t19 = 0x0;
    }
    t20 = t19;
    if ((int)t19 > (int)0x1869F) {
        t20 = 0x1869F;
    }
    t21 = (int)((int)t20 / (int)0x2710);
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x0)) = t21;
    t22 = (int)((int)t20 / (int)0x3E8);
    t23 = (int)((int)t22 % (int)0xA);
    *(unsigned int *)((((int)stk + 4) + 0xC)) = t23;
    t24 = (int)((int)t20 / (int)0x64);
    t25 = (int)((int)t24 % (int)0xA);
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t25;
    t26 = (int)((int)t20 / (int)0xA);
    t27 = (int)((int)t26 % (int)0xA);
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t27;
    t28 = *(int *)(((((int)stk + 4) + 0x10) + 0x0));
    t29 = (int)((int)(t20 - (t28 * 0x2710)) % (int)0xA);
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t29;
    t30 = *(int *)0xC1EE214;
    u40 = 1.0f;
    u41 = 0.0f;
    if (t30 == 0) {
        t31 = *(int *)0xC2A996C;
        u32 = *(float *)((t31 + 0x0));
        u33 = 1.0f;
        u34 = 0.0f;
        if (!(150.0f > u32)) {
            u33 = 0.0f;
            u34 = 1.0f;
        }
        u40 = u33;
        u41 = u34;
    }
    nlObjPutSetFadeColor(u40, 1.0f, u41);
    *(float *)0xC2A98A8 = 1.0f;
    *(float *)0xC2A98AC = 1.0f;
    FUN_0c05778a(0xC2A9898, 0x1E9, 601.0f, 108.0f);
    *(float *)0xC2A98A0 = 102.0f;
    *(float *)0xC2A98C4 = 1.0f;
    *(unsigned int *)0xC2A98C0 = 0x0;
    *(unsigned int *)0xC2A98CC = 0x200A;
    *(float *)0xC2A989C = 464.0f;
    t44 = *(int *)0xC1EE214;
    if (t44 == 0) {
        u45 = *(float *)0xC179148;
        if (!(u45 > -5100.0f)) {
            t46 = *(int *)0xC1EE214;
            if (t46 == 20) {
                u47 = *(float *)0xC17914C;
                if (!(1350.0f > u47)) {
                    u48 = *(float *)0xC17914C;
                    if (!(u48 > 1950.0f)) {
                        t49 = *(int *)(((((int)stk + 4) + 0x10) + 0x0));
                        *(unsigned int *)0xC2A9898 = (t49 + 0x50);
                        *(float *)0xC2A98A8 = 1.0f;
                        *(float *)0xC2A98AC = 1.0f;
                        t50 = *(int *)(((((int)stk + 4) + 0x10) + 0x0));
                        if (t50 != 0) {
                            nlSprPut(0xC2A9898);
                        }
                    } else {
                        t53 = *(int *)0xC1EE214;
                        if (t53 == 0) {
                            *(unsigned int *)0xC2A9898 = 0x1E0;
                            nlSprPut(0xC2A9898);
                        }
                    }
                } else {
                    t57 = *(int *)0xC1EE214;
                    if (t57 == 0) {
                        *(unsigned int *)0xC2A9898 = 0x1E0;
                        nlSprPut(0xC2A9898);
                    }
                }
            } else {
                t61 = *(int *)0xC1EE214;
                if (t61 == 0) {
                    *(unsigned int *)0xC2A9898 = 0x1E0;
                    nlSprPut(0xC2A9898);
                }
            }
        } else {
            t65 = *(int *)(((((int)stk + 4) + 0x10) + 0x0));
            *(unsigned int *)0xC2A9898 = (t65 + 0x50);
            *(float *)0xC2A98A8 = 1.0f;
            *(float *)0xC2A98AC = 1.0f;
            t66 = *(int *)(((((int)stk + 4) + 0x10) + 0x0));
            if (t66 != 0) {
                nlSprPut(0xC2A9898);
            }
        }
    } else {
        t70 = *(int *)0xC1EE214;
        if (t70 == 20) {
            u71 = *(float *)0xC17914C;
            if (!(1350.0f > u71)) {
                u72 = *(float *)0xC17914C;
                if (!(u72 > 1950.0f)) {
                    t73 = *(int *)(((((int)stk + 4) + 0x10) + 0x0));
                    *(unsigned int *)0xC2A9898 = (t73 + 0x50);
                    *(float *)0xC2A98A8 = 1.0f;
                    *(float *)0xC2A98AC = 1.0f;
                    t74 = *(int *)(((((int)stk + 4) + 0x10) + 0x0));
                    if (t74 != 0) {
                        nlSprPut(0xC2A9898);
                    }
                } else {
                    t77 = *(int *)0xC1EE214;
                    if (t77 == 0) {
                        *(unsigned int *)0xC2A9898 = 0x1E0;
                        nlSprPut(0xC2A9898);
                    }
                }
            } else {
                t81 = *(int *)0xC1EE214;
                if (t81 == 0) {
                    *(unsigned int *)0xC2A9898 = 0x1E0;
                    nlSprPut(0xC2A9898);
                }
            }
        } else {
            t85 = *(int *)0xC1EE214;
            if (t85 == 0) {
                *(unsigned int *)0xC2A9898 = 0x1E0;
                nlSprPut(0xC2A9898);
            }
        }
    }
    *(float *)0xC2A989C = 488.0f;
    t90 = *(int *)0xC1EE214;
    if (t90 == 0) {
        u91 = *(float *)0xC179148;
        if (!(u91 > -5100.0f)) {
            t92 = *(int *)0xC1EE214;
            if (t92 == 20) {
                u93 = *(float *)0xC17914C;
                if (!(1350.0f > u93)) {
                    u94 = *(float *)0xC17914C;
                    if (!(u94 > 1950.0f)) {
                        t95 = *(int *)(((((int)stk + 4) + 0xC) + 0x0));
                        *(unsigned int *)0xC2A9898 = (t95 + 0x50);
                        *(float *)0xC2A98A8 = 1.0f;
                        *(float *)0xC2A98AC = 1.0f;
                        t96 = *(int *)(((((int)stk + 4) + 0xC) + 0x0));
                        if (t96 == 0) {
                            t97 = *(int *)((((int)stk + 4) + 0x10));
                            if (t97 != 0) {
                                nlSprPut(0xC2A9898);
                            }
                        } else {
                            nlSprPut(0xC2A9898);
                        }
                    } else {
                        *(unsigned int *)0xC2A9898 = 0x1E0;
                        nlSprPut(0xC2A9898);
                    }
                } else {
                    *(unsigned int *)0xC2A9898 = 0x1E0;
                    nlSprPut(0xC2A9898);
                }
            } else {
                *(unsigned int *)0xC2A9898 = 0x1E0;
                nlSprPut(0xC2A9898);
            }
        } else {
            t108 = *(int *)(((((int)stk + 4) + 0xC) + 0x0));
            *(unsigned int *)0xC2A9898 = (t108 + 0x50);
            *(float *)0xC2A98A8 = 1.0f;
            *(float *)0xC2A98AC = 1.0f;
            t109 = *(int *)(((((int)stk + 4) + 0xC) + 0x0));
            if (t109 == 0) {
                t110 = *(int *)((((int)stk + 4) + 0x10));
                if (t110 != 0) {
                    nlSprPut(0xC2A9898);
                }
            } else {
                nlSprPut(0xC2A9898);
            }
        }
    } else {
        t116 = *(int *)0xC1EE214;
        if (t116 == 20) {
            u117 = *(float *)0xC17914C;
            if (!(1350.0f > u117)) {
                u118 = *(float *)0xC17914C;
                if (!(u118 > 1950.0f)) {
                    t119 = *(int *)(((((int)stk + 4) + 0xC) + 0x0));
                    *(unsigned int *)0xC2A9898 = (t119 + 0x50);
                    *(float *)0xC2A98A8 = 1.0f;
                    *(float *)0xC2A98AC = 1.0f;
                    t120 = *(int *)(((((int)stk + 4) + 0xC) + 0x0));
                    if (t120 == 0) {
                        t121 = *(int *)((((int)stk + 4) + 0x10));
                        if (t121 != 0) {
                            nlSprPut(0xC2A9898);
                        }
                    } else {
                        nlSprPut(0xC2A9898);
                    }
                } else {
                    *(unsigned int *)0xC2A9898 = 0x1E0;
                    nlSprPut(0xC2A9898);
                }
            } else {
                *(unsigned int *)0xC2A9898 = 0x1E0;
                nlSprPut(0xC2A9898);
            }
        } else {
            *(unsigned int *)0xC2A9898 = 0x1E0;
            nlSprPut(0xC2A9898);
        }
    }
    t133 = *(int *)0xC1EE214;
    if (t133 == 0) {
        u134 = *(float *)0xC179148;
        if (!(u134 > -5100.0f)) {
            t135 = *(int *)0xC1EE214;
            if (t135 == 20) {
                u136 = *(float *)0xC17914C;
                if (!(1350.0f > u136)) {
                    u137 = *(float *)0xC17914C;
                    if (!(u137 > 1950.0f)) {
                        t138 = *(int *)((((int)stk + 4) + 0x8));
                        *(unsigned int *)0xC2A9898 = (t138 + 0x50);
                        *(float *)0xC2A98A8 = 1.0f;
                        *(float *)0xC2A98AC = 1.0f;
                    } else {
                        *(unsigned int *)0xC2A9898 = 0x1E0;
                    }
                } else {
                    *(unsigned int *)0xC2A9898 = 0x1E0;
                }
            } else {
                *(unsigned int *)0xC2A9898 = 0x1E0;
            }
        } else {
            t145 = *(int *)((((int)stk + 4) + 0x8));
            *(unsigned int *)0xC2A9898 = (t145 + 0x50);
            *(float *)0xC2A98A8 = 1.0f;
            *(float *)0xC2A98AC = 1.0f;
        }
    } else {
        t149 = *(int *)0xC1EE214;
        if (t149 == 20) {
            u150 = *(float *)0xC17914C;
            if (!(1350.0f > u150)) {
                u151 = *(float *)0xC17914C;
                if (!(u151 > 1950.0f)) {
                    t152 = *(int *)((((int)stk + 4) + 0x8));
                    *(unsigned int *)0xC2A9898 = (t152 + 0x50);
                    *(float *)0xC2A98A8 = 1.0f;
                    *(float *)0xC2A98AC = 1.0f;
                } else {
                    *(unsigned int *)0xC2A9898 = 0x1E0;
                }
            } else {
                *(unsigned int *)0xC2A9898 = 0x1E0;
            }
        } else {
            *(unsigned int *)0xC2A9898 = 0x1E0;
        }
    }
    u158 = *(float *)0xC05C2AC;
    *(float *)0xC2A989C = u158;
    nlSprPut(0xC2A9898);
    *(unsigned int *)0xC2A9898 = 0x5C;
    u160 = *(float *)0xC05C2B4;
    *(float *)0xC2A989C = u160;
    u161 = *(float *)0xC05C2B8;
    u162 = *(float *)0xC2A98A0;
    *(float *)0xC2A98A0 = (u162 + u161);
    *(float *)0xC2A98A8 = 1.0f;
    *(float *)0xC2A98AC = 1.0f;
    nlSprPut(0xC2A9898);
    u164 = *(float *)0xC2A98A0;
    *(float *)0xC2A98A0 = (u164 - u161);
    t165 = *(int *)0xC1EE214;
    if (t165 == 0) {
        u166 = *(float *)0xC05C2BC;
        u167 = *(float *)0xC179148;
        if (!(u167 > u166)) {
            t168 = *(int *)0xC1EE214;
            if (t168 == 20) {
                u169 = *(float *)0xC05C2C0;
                u170 = *(float *)0xC17914C;
                if (!(u169 > u170)) {
                    u171 = *(float *)0xC05C2C4;
                    u172 = *(float *)0xC17914C;
                    if (!(u172 > u171)) {
                        t173 = *(int *)((((int)stk + 4) + 0x4));
                        *(unsigned int *)0xC2A9898 = (t173 + 0x50);
                        *(float *)0xC2A98A8 = 1.0f;
                        *(float *)0xC2A98AC = 1.0f;
                    } else {
                        *(unsigned int *)0xC2A9898 = 0x1E0;
                    }
                } else {
                    *(unsigned int *)0xC2A9898 = 0x1E0;
                }
            } else {
                *(unsigned int *)0xC2A9898 = 0x1E0;
            }
        } else {
            t180 = *(int *)((((int)stk + 4) + 0x4));
            *(unsigned int *)0xC2A9898 = (t180 + 0x50);
            *(float *)0xC2A98A8 = 1.0f;
            *(float *)0xC2A98AC = 1.0f;
        }
    } else {
        t184 = *(int *)0xC1EE214;
        if (t184 == 20) {
            u185 = *(float *)0xC05C2C0;
            u186 = *(float *)0xC17914C;
            if (!(u185 > u186)) {
                u187 = *(float *)0xC05C2C4;
                u188 = *(float *)0xC17914C;
                if (!(u188 > u187)) {
                    t189 = *(int *)((((int)stk + 4) + 0x4));
                    *(unsigned int *)0xC2A9898 = (t189 + 0x50);
                    *(float *)0xC2A98A8 = 1.0f;
                    *(float *)0xC2A98AC = 1.0f;
                } else {
                    *(unsigned int *)0xC2A9898 = 0x1E0;
                }
            } else {
                *(unsigned int *)0xC2A9898 = 0x1E0;
            }
        } else {
            *(unsigned int *)0xC2A9898 = 0x1E0;
        }
    }
    u197 = *(float *)0xC05C2C8;
    *(float *)0xC2A989C = u197;
    nlSprPut(0xC2A9898);
    t199 = *(int *)0xC1EE214;
    if (t199 == 0) {
        u200 = *(float *)0xC05C2BC;
        u201 = *(float *)0xC179148;
        if (!(u201 > u200)) {
            t202 = *(int *)0xC1EE214;
            if (t202 == 20) {
                u203 = *(float *)0xC05C2C0;
                u204 = *(float *)0xC17914C;
                if (!(u203 > u204)) {
                    u205 = *(float *)0xC05C2C4;
                    u206 = *(float *)0xC17914C;
                    if (!(u206 > u205)) {
                        t207 = *(int *)((((int)stk + 4) + 0x0));
                        *(unsigned int *)0xC2A9898 = (t207 + 0x50);
                        *(float *)0xC2A98A8 = 1.0f;
                        *(float *)0xC2A98AC = 1.0f;
                    } else {
                        *(unsigned int *)0xC2A9898 = 0x1E0;
                    }
                } else {
                    *(unsigned int *)0xC2A9898 = 0x1E0;
                }
            } else {
                *(unsigned int *)0xC2A9898 = 0x1E0;
            }
        } else {
            t214 = *(int *)((((int)stk + 4) + 0x0));
            *(unsigned int *)0xC2A9898 = (t214 + 0x50);
            *(float *)0xC2A98A8 = 1.0f;
            *(float *)0xC2A98AC = 1.0f;
        }
    } else {
        t218 = *(int *)0xC1EE214;
        if (t218 == 20) {
            u219 = *(float *)0xC05C2C0;
            u220 = *(float *)0xC17914C;
            if (!(u219 > u220)) {
                u221 = *(float *)0xC05C2C4;
                u222 = *(float *)0xC17914C;
                if (!(u222 > u221)) {
                    t223 = *(int *)((((int)stk + 4) + 0x0));
                    *(unsigned int *)0xC2A9898 = (t223 + 0x50);
                    *(float *)0xC2A98A8 = 1.0f;
                    *(float *)0xC2A98AC = 1.0f;
                } else {
                    *(unsigned int *)0xC2A9898 = 0x1E0;
                }
            } else {
                *(unsigned int *)0xC2A9898 = 0x1E0;
            }
        } else {
            *(unsigned int *)0xC2A9898 = 0x1E0;
        }
    }
    u229 = *(float *)0xC05C2CC;
    *(float *)0xC2A989C = u229;
    nlSprPut(0xC2A9898);
    ResetFadeColor();
    *(float *)0xC2A98A8 = 1.0f;
    *(float *)0xC2A98AC = 1.0f;
    return 0x14;
}

int FUN_0c058234(void)
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
    int t20;
    int t21;
    int t22;
    int t31;
    int t32;
    int t38;
    int t167;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t48;
    int t49;
    int t50;
    float u51;
    float u52;
    int t57;
    float u58;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    float u65;
    int t66;
    int t67;
    int t68;
    int t69;
    int t70;
    int t71;
    int t72;
    int t73;
    int t74;
    int t75;
    int t76;
    int t77;
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
    float u99;
    int t100;
    int t101;
    int t102;
    int t103;
    int t104;
    int t105;
    int t106;
    int t107;
    int t108;
    int t109;
    int t110;
    int t111;
    int t112;
    int t113;
    int t114;
    int t115;
    int t116;
    int t117;
    int t118;
    int t120;
    int t121;
    float u122;
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
    int t149;
    int t150;
    int t154;
    int t164;
    int t155;
    int t160;
    int t156;
    int t170;
    int t157;
    int stk[29] = {0};

    t0 = *(int *)0xC0D0AE8;
    *(unsigned int *)(((((int)stk + 4) + 0x1C) + 0x1C)) = t0;
    t1 = *(int *)0xC0D0AE4;
    *(unsigned int *)(((((int)stk + 4) + 0x1C) + 0x18)) = t1;
    t2 = *(int *)0xC0D0AE0;
    *(unsigned int *)(((((int)stk + 4) + 0x1C) + 0x14)) = t2;
    t3 = *(int *)0xC0D0ADC;
    *(unsigned int *)(((((int)stk + 4) + 0x1C) + 0x10)) = t3;
    t4 = *(int *)0xC0D0AD8;
    *(unsigned int *)(((((int)stk + 4) + 0x1C) + 0xC)) = t4;
    t5 = *(int *)0xC0D0AD4;
    *(unsigned int *)(((((int)stk + 4) + 0x1C) + 0x8)) = t5;
    t6 = *(int *)0xC0D0AD0;
    *(unsigned int *)(((((int)stk + 4) + 0x1C) + 0x4)) = t6;
    t7 = *(int *)0xC0D0ACC;
    *(unsigned int *)(((((int)stk + 4) + 0x1C) + 0x0)) = t7;
    t8 = *(int *)0xC2A96A4;
    if (t8 == 2) {
        t9 = *(int *)0xC2A9690;
        *(unsigned int *)0xC2A9690 = (t9 - 64);
        t10 = *(int *)0xC2A9694;
        *(unsigned int *)0xC2A9694 = (t10 + 0x40);
        t11 = *(int *)0xC2A9698;
        *(unsigned int *)0xC2A9698 = (t11 - 64);
        t12 = *(int *)0xC2A969C;
        *(unsigned int *)0xC2A969C = (t12 + 0x40);
        t13 = *(int *)0xC2A96A0;
        *(unsigned int *)0xC2A96A0 = (t13 - 64);
        t14 = *(int *)0xC2A9690;
        if (t14 == 0xFFFFFD80) {
            *(unsigned int *)0xC2A96A4 = 0x3;
        }
    }
    t20 = *(int *)0xC2A96A4;
    if (t20 == 3) {
        t21 = *(int *)0xC2A96BC;
        *(unsigned int *)0xC2A96BC = (t21 + 0x1);
        if ((int)(t21 + 0x1) >= (int)0x3C) {
            *(unsigned int *)0xC2A9690 = 0x0;
            *(unsigned int *)0xC2A9694 = 0x0;
            *(unsigned int *)0xC2A9698 = 0x0;
            *(unsigned int *)0xC2A969C = 0x0;
            *(unsigned int *)0xC2A96A0 = 0x0;
            *(unsigned int *)0xC2A96A4 = 0x1;
            *(unsigned int *)0xC2A96BC = 0x0;
            *(unsigned int *)0xC2A9684 = 0xA;
            t22 = *(int *)0xC2A96C0;
            *(unsigned int *)0xC2A96C0 = (t22 + 0x1);
        }
    }
    t31 = *(int *)0xC2A96A4;
    if (t31 == 4) {
        t32 = *(int *)0xC2A96BC;
        *(unsigned int *)0xC2A96BC = (t32 + 0x1);
        if ((int)(t32 + 0x1) >= (int)0x3C) {
            FUN_0c057b64();
        }
    }
    FUN_0c058828();
    FUN_0c05891a();
    t38 = *(int *)0xC2A96A4;
    t167 = 0xC2A96A4;
    if ((int)t38 >= (int)0x1) {
        *(unsigned int *)(((int)stk + 16)) = (((int)stk + 4) + 0x1C);
        *(unsigned int *)(((int)stk + 24)) = (((int)stk + 4) + 0x30);
        *(unsigned int *)(((int)stk + 20)) = (((int)stk + 4) + 0x34);
        *(unsigned int *)(((int)stk + 28)) = (((int)stk + 4) + 0x38);
        t39 = 0xC05837C;
        t40 = 0x0;
        for (;;) {
            t41 = *(int *)0xC2A9684;
            if ((int)(t41 - 10) >= (int)(((t40 << 2) + t40) << 1)) {
                if ((int)(t41 - 10) < (int)0x3C) {
                    t39 = 0xA;
                    t42 = (int)((int)(t41 - 10) % (int)t39);
                    t39 = t42;
                    if (t39 == 0) {
                        *(unsigned int *)0xC2A96A8 = 0x1;
                        *(unsigned short *)0xC2A96AC = 0x0;
                        *(float *)0xC2A96B0 = 0.5f;
                        *(float *)0xC2A96B4 = 0.0f;
                        t43 = *(int *)0xC2A96B8;
                        t39 = t43;
                        t39 = (t39 + 0x1);
                        *(unsigned int *)0xC2A96B8 = t39;
                    }
                }
                *(unsigned int *)0xC2A91D8 = 0x4B;
                t48 = *(int *)0xC2A9684;
                if ((int)(t48 - 10) < (int)0x3C) {
                    t39 = 0xA;
                    t49 = (int)((int)(t48 - 10) / (int)t39);
                    t39 = t49;
                    if (t39 == t40) {
                        t39 = (t40 << 2);
                        t50 = *(int *)((0xC2A9690 + t39));
                        t39 = 0x14;
                        u51 = *(float *)0xC2A96B4;
                        *(float *)0xC2A91E8 = (((float)t50 + u51) + 0.5f);
                        u52 = *(float *)0xC2A96B4;
                        *(float *)((0xC2A91D8 + t39)) = (u52 + 0.5f);
                    } else {
                        t39 = 0x10;
                        *(float *)((0xC2A91D8 + t39)) = 0.5f;
                        t39 = 0x14;
                        *(float *)((0xC2A91D8 + t39)) = 0.5f;
                    }
                } else {
                    t39 = 0x10;
                    *(float *)((0xC2A91D8 + t39)) = 0.5f;
                    t39 = 0x14;
                    *(float *)((0xC2A91D8 + t39)) = 0.5f;
                }
                t39 = (t40 << 2);
                t57 = *(int *)((0xC2A9690 + t39));
                t39 = 0x8;
                *(float *)0xC2A91DC = (float)(t57 + 0x4E);
                *(unsigned int *)(((int)stk + 8)) = (t40 * 0x3C);
                *(float *)((0xC2A91D8 + t39)) = (float)((t40 * 0x3C) + 0x60);
                t39 = 0xC058550;
                u58 = *(float *)((t39 + 0x0));
                t39 = 0xC;
                *(float *)((0xC2A91D8 + t39)) = u58;
                *(unsigned int *)0xC2A920C = 0xA;
                *(unsigned int *)0xC2A9200 = 0x0;
                t59 = nlSprPut(0xC2A91D8);
                t39 = t59;
                t60 = *(int *)0xC2A96C0;
                t39 = 0xA;
                t61 = (int)((int)((((t60 << 2) + t60) + t40) + 0x1) / (int)t39);
                t39 = t61;
                *(unsigned int *)(((int)stk + 4)) = t39;
                t39 = 0xA;
                t62 = (int)((int)((((t60 << 2) + t60) + t40) + 0x1) % (int)t39);
                t39 = t62;
                t63 = nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
                t64 = t39;
                t39 = t63;
                t39 = 0xC058568;
                u65 = *(float *)((t39 + 0x0));
                t39 = 0xC;
                *(float *)((0xC2A91D8 + t39)) = u65;
                t66 = *(int *)(((int)stk + 4));
                if (t66 != 0) {
                    t67 = *(int *)(((int)stk + 4));
                    t39 = 0xC0D0CD0;
                    t68 = *(int *)(((t67 << 2) + t39));
                    *(unsigned int *)0xC2A91D8 = t68;
                    t39 = (t40 << 2);
                    t69 = *(int *)((0xC2A9690 + t39));
                    *(float *)0xC2A91DC = (float)(t69 + 0x36);
                    t70 = nlSprPut(0xC2A91D8);
                    t39 = t70;
                }
                t39 = 0xC0D0CD0;
                t71 = *(int *)(((t64 << 2) + t39));
                *(unsigned int *)0xC2A91D8 = t71;
                t39 = 0x4;
                *(unsigned int *)(((int)stk + 12)) = ((t40 << 2) + 0xC2A9690);
                t72 = *(int *)((((t40 << 2) + 0xC2A9690) + 0x0));
                *(float *)((0xC2A91D8 + t39)) = (float)(t72 + 0x56);
                t73 = nlSprPut(0xC2A91D8);
                t39 = t73;
                *(unsigned int *)0xC2A91D8 = 0x4F;
                t39 = 0x4;
                t74 = *(int *)(((int)stk + 12));
                t75 = *(int *)((t74 + 0x0));
                *(float *)((0xC2A91D8 + t39)) = (float)(t75 + 0x72);
                t39 = 0x8;
                t76 = *(int *)(((int)stk + 8));
                *(float *)((0xC2A91D8 + t39)) = (float)(t76 + 0x64);
                t77 = *(int *)(((int)stk + 4));
                if (t77 == 0) {
                    t39 = t64;
                    if (t39 == 1) {
                        *(unsigned int *)0xC2A91D8 = 0x4E;
                    } else {
                        if (t39 == 2) {
                            *(unsigned int *)0xC2A91D8 = 0x4C;
                        } else {
                            t39 = t64;
                            if (t39 == 3) {
                                *(unsigned int *)0xC2A91D8 = 0x4D;
                            }
                        }
                    }
                }
                t85 = nlSprPut(0xC2A91D8);
                t39 = t85;
                t86 = ResetFadeColor();
                t39 = t86;
                t87 = *(int *)0xC2A9684;
                if ((int)t87 >= (int)0x46) {
                    t39 = 0xC2A9684;
                    t88 = *(int *)((t39 + 0x0));
                    t39 = 0xA;
                    t89 = (int)((int)(t88 - 70) / (int)t39);
                    t39 = t89;
                    if ((int)t39 >= (int)t40) {
                        t39 = 0x10;
                        *(unsigned int *)0xC2A920C = 0xA;
                        *(float *)((0xC2A91D8 + t39)) = 1.0f;
                        t39 = 0x14;
                        *(float *)((0xC2A91D8 + t39)) = 1.0f;
                        *(unsigned int *)(((int)stk + 12)) = ((t40 << 2) + 0xC2A9690);
                        t90 = *(int *)(((int)stk + 8));
                        t91 = 0x0;
                        while ((int)t91 < (int)0x3) {
                            t92 = *(short *)0xC1EE20C;
                            t93 = *(int *)0xC2A96C0;
                            t39 = ((short)t92 * (short)0x3C0);
                            t39 = (short)t39;
                            t39 = (t39 + 0xC28C318);
                            t39 = (t39 + (((((t93 << 2) + t93) + t40) << 2) << 2));
                            t94 = ((t39 + 0x6) + t91);
                            t39 = 0xC0D0AF0;
                            t95 = *(signed char *)((t94 + 0x0));
                            *(unsigned int *)(((int)stk + 4)) = ((signed char)(t95 - 32) << 2);
                            t96 = *(int *)((((signed char)(t95 - 32) << 2) + t39));
                            t39 = t96;
                            if (t39 != 0x5F5E0FF) {
                                t97 = *(int *)(((int)stk + 12));
                                t98 = *(int *)((t97 + 0x0));
                                t39 = 0x4;
                                *(float *)((0xC2A91D8 + t39)) = (float)((((((t91 << 2) << 2) + t91) << 1) + t98) + 0xA4);
                                t39 = 0x8;
                                *(float *)((0xC2A91D8 + t39)) = (float)(t90 + 0x60);
                                t39 = 0x4;
                                u99 = *(float *)((0xC2A91D8 + t39));
                                t39 = 0xC0D0AF0;
                                t100 = *(int *)(((int)stk + 4));
                                t101 = *(int *)((t100 + t39));
                                t102 = FUN_0c05778a(0xC2A91D8, t101, u99, (float)(t90 + 0x60));
                                t39 = t102;
                            }
                            t91 = (t91 + 0x1);
                        }
                        t103 = *(short *)0xC1EE20C;
                        t39 = 0xC2A96C0;
                        t104 = *(int *)((t39 + 0x0));
                        t105 = *(int *)(((((short)((short)t103 * (short)0x3C0) + 0xC28C318) + (((((t104 << 2) + t104) + t40) << 2) << 2)) + 0x0));
                        t106 = *(int *)(((int)stk + 16));
                        t107 = FUN_0c057728(t106, t105, 0x8);
                        t39 = t107;
                        t108 = *(int *)(((int)stk + 8));
                        t39 = (t40 << 2);
                        t109 = *(int *)((0xC2A9690 + t39));
                        t110 = FUN_0c05778a(0xC2A91D8, 0x5B, (float)(t109 + 0x112), (float)(t108 + 0x60));
                        t39 = t110;
                        *(unsigned int *)(((int)stk + 12)) = ((t40 << 2) + 0xC2A9690);
                        t111 = *(int *)(((int)stk + 8));
                        t112 = 0x0;
                        do {
                            *(unsigned int *)(((int)stk + 4)) = 0x0;
                            if ((int)t112 < (int)0x5) {
                                *(unsigned int *)(((int)stk + 4)) = 0x8;
                            }
                            if ((int)t112 < (int)0x2) {
                                t113 = *(int *)(((int)stk + 4));
                                *(unsigned int *)(((int)stk + 4)) = (t113 + 0x8);
                            }
                            t114 = *(int *)(((int)stk + 16));
                            t115 = FUN_0c058968(t114, t112);
                            t39 = t115;
                            if (t39 == 1) {
                                t116 = *(int *)(((int)stk + 12));
                                t117 = *(int *)(((int)stk + 4));
                                t39 = t117;
                                t118 = *(int *)((t116 + 0x0));
                                t120 = (((((0x8 - t112) * 0x1A) + t118) + t39) + 0x116);
                                t39 = 0x4;
                                *(float *)((0xC2A91D8 + t39)) = (float)t120;
                                t39 = 0x8;
                                *(float *)((0xC2A91D8 + t39)) = (float)(t111 + 0x60);
                                t39 = 0x4;
                                t121 = *(int *)((((t112 << 2) + (((int)stk + 4) + 0x1C)) + 0x0));
                                u122 = *(float *)((0xC2A91D8 + t39));
                                t39 = 0xC0D0CF8;
                                t123 = *(int *)(((t121 << 2) + t39));
                                t124 = FUN_0c05778a(0xC2A91D8, t123, u122, (float)(t111 + 0x60));
                                t39 = t124;
                            }
                            t112 = (t112 + 0x1);
                        } while ((int)t112 < (int)0x8);
                        t125 = *(int *)(((int)stk + 24));
                        t126 = *(int *)((t125 + 0x0));
                        if (t126 == 0) {
                            t127 = *(int *)(((int)stk + 20));
                            t128 = *(int *)((t127 + 0x0));
                            if (t128 == 0) {
                                t129 = *(int *)(((int)stk + 28));
                                t130 = *(int *)((t129 + 0x0));
                                if (t130 != 0) {
                                    t131 = *(int *)(((int)stk + 8));
                                    t39 = (t40 << 2);
                                    t132 = *(int *)((0xC2A9690 + t39));
                                    t133 = FUN_0c05778a(0xC2A91D8, 0x5A, (float)(t132 + 0x176), (float)(t131 + 0x72));
                                    t39 = t133;
                                }
                            } else {
                                t134 = *(int *)(((int)stk + 8));
                                t39 = (t40 << 2);
                                t135 = *(int *)((0xC2A9690 + t39));
                                t136 = FUN_0c05778a(0xC2A91D8, 0x5A, (float)(t135 + 0x176), (float)(t134 + 0x72));
                                t39 = t136;
                            }
                        } else {
                            t137 = *(int *)(((int)stk + 8));
                            t39 = (t40 << 2);
                            t138 = *(int *)((0xC2A9690 + t39));
                            t139 = FUN_0c05778a(0xC2A91D8, 0x5A, (float)(t138 + 0x176), (float)(t137 + 0x72));
                            t39 = t139;
                        }
                        t140 = *(int *)(((int)stk + 8));
                        t141 = *(int *)((((t40 << 2) + 0xC2A9690) + 0x0));
                        t142 = FUN_0c05778a(0xC2A91D8, 0x5C, (float)(t141 + 0x1CC), (float)(t140 + 0x72));
                        t39 = t142;
                        t39 = 0xC2A96C0;
                        *(unsigned int *)0xC2A920C = 0xA;
                        t143 = *(short *)0xC1EE20C;
                        t144 = *(int *)((t39 + 0x0));
                        t145 = *(signed char *)((((((((t144 << 2) + t144) + t40) << 2) << 2) + ((short)((short)t143 * (short)0x3C0) + 0xC28C318)) + 0x5));
                        t39 = t145;
                        t39 = (t39 << 2);
                        t146 = *(int *)((0xC0D0D20 + t39));
                        *(unsigned int *)0xC2A91D8 = t146;
                        t147 = *(int *)((((t40 << 2) + 0xC2A9690) + 0x0));
                        t39 = t147;
                        t39 = (t39 + 0x24C);
                        t148 = t39;
                        t39 = 0x4;
                        *(float *)((0xC2A91D8 + t39)) = (float)t148;
                        t149 = *(int *)(((int)stk + 8));
                        t39 = 0x8;
                        *(float *)((0xC2A91D8 + t39)) = (float)(t149 + 0x60);
                        t39 = 0x10;
                        *(float *)((0xC2A91D8 + t39)) = 1.0f;
                        t39 = 0x14;
                        *(float *)((0xC2A91D8 + t39)) = 1.0f;
                        t150 = nlSprPut(0xC2A91D8);
                        t39 = t150;
                        *(unsigned int *)0xC2A920C = 0xA;
                    }
                }
            }
            t40 = (t40 + 0x1);
            if ((int)t40 < (int)0x5) continue;
            break;
        }
        t154 = *(int *)0xC2A96A4;
        t164 = t154;
        if (t154 == 1) {
            t155 = *(int *)0xC2A9684;
            t160 = 0xC2A9684;
            if ((int)t155 >= (int)0x122) {
                t156 = *(int *)0xC2A96C0;
                if (t156 == 3) {
                    *(unsigned int *)0xC2A96A4 = 0x4;
                    t157 = t156;
                } else {
                    *(unsigned int *)0xC2A96A4 = 0x2;
                    t157 = 0xC2A96A4;
                }
                t160 = t157;
            }
            t164 = t160;
        }
        t167 = t164;
    }
    t170 = *(int *)0xC2A9684;
    *(unsigned int *)0xC2A9684 = (t170 + 0x1);
    return t167;
}

