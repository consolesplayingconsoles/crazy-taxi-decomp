typedef struct { int w[3]; } Stk3;
/* Straight-line functions with calls and guards (batch gen_y): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXB_CopyExtraBufMono(int, int, int, int);
int ADXB_CopyExtraBufSte(int, int, int, int);
int ADXB_EvokeExpandMono(int, int);
int ADXB_EvokeExpandSte(int, int);
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXF_Close(int);
int ADXPD_GetNumBlk(int);
int ADXRNA_GetTime(int, int, int);
int ADXSTM_GetCurOfst(int, int);
int ADXT_SetOutVol(int, int);
int CalcShadow4Normal(int, int);
int gdc_GetStreamSongRemainTime(int);
int gdc_GetVolGainMute(int);
int gdc_PlayStreamSongDisk(void);
int ReturnBreakPinNum(void);
int ReturnBreakPin(int);
int SetScreen(int);
int SetWindow(int);
int menuChangeValue(int, int, int);
int putMenuValue(int, int, int, int);
int PutRecords(int, int, int, int, int, int, float, float);
int CheckBoxFlag(int);
int Init_Remain_Time(void);
int Init_TotalDrum(void);
int Init_Shift(void);
int End_Pass_Default2_Sprite(void);
int Start_Pass_Ranking(void);
int rankingCalcDigitRoll(int, int);
int Put_TotalDrum_SetDigits(int, int);
int Put_TotalDrum(void);
int hudUpdateFareState(void);
int hudSplitFareDigits(int, int);
int hudDrawFare(void);
int Money_Array(int, int, int);
int Result_Drop_Lowest_Rank(void);
int Init_Result_Standard_Sprite(void);
int Init_Result_Parm(void);
int Result_Insert_Rank(void);
int Start_Bowling_Message(void);
int Reset_Bowling_Timer(void);
int Start_CrazyBox_Voice(int);
int nlPrintInitFontTexture(void);
int nlInitMatrixStack(int, int, int);
int nlMatrixMode(int);
int nlsndBlockMove(int, int, int);
int nlsndBlockMoveStatus(void);
int nlsndCheckPackLoadError(int, int);
int nlsndPackLoadInit(int, int, int, int);
int nlsndSeqRequest(int);
int nlsndStreamSetHdVol(int, int, int);
int nlsndStreamChgVol(int, int, int);
int nlsndStreamTranspose(int, int);
int nlsndStreamDetune(int, int);
int memcmp(int, int, int);
int vsprintf(int, int, int);
int kmiBGPlaneSetPCW(int, int, int);
int kmiBGPlaneCountWords(int);
int kmiBGPlanePutWord(int, int, int);
int kmiBGPlanePutColor(int, int, int);
int kmiFBallocSub(int, int, int);
int kmytex_ABSalloc(int, int, int, int);
int kmiMemCopy4(int, int, int);
int kmiPurgeCache(int);
int kmiModuleInitialize(void);
int kmtex_CheckTextureFormat(int, int, int, int);
int ADXSJD_GetSfreq(int);
int ADXSJD_GetOutBps(int);
int ADXSJD_GetTotalNumSmpl(int);
int ADXSTM_GetStat(int);
int syBtFlGetInfo(int, int);
int syBtFlRead(int, int, int);
int fmMngClearBuf(int, int);
int fmMngReadSctAllData(int);
int adxb_DecodeInfoAiffSub(int, int, int, int, int);
int GetCollision2D(int, int, float);
int GetMenuMode(int);
int Sound_Request(int, int);
int Voice_Request(int, int, int, int);
int adxf_CloseSjStm(int);
int adxf_CreateAdxFs(void);
int adxf_SetAfsFileInfo(int, int, int);
int adxf_SetCmdHstry(int, int, int, int, int);
int adxf_SetFileInfo(int, int);
int buGetFileInfo(int, int, int);
int buIsFormat(int);
int buIsReady(int);
int buStat(int);
int camSetAngles(int, int, int, int);
int camSetMode(int);
int check_file_correct(int, int);
int check_isopen(int, int);
int direntry(int, int);
int extRand(void);
int gdc_StopStreamSongAll(void);
int get_fat(int, int);
int kdSetBlockWrite(int, int, int, int, int, int, int);
int kmActivateFrameBuffer(int, int, int, int);
int kmCreateFrameBufferSurface(int, int, int, int, int);
int kmCreateTABuffer(int, int);
int kmCreateTextureSurface(int, int, int, int);
int kmCreateVertexBuffer(int, int, int, int, int);
int kmLoadTexture(int, int, int, int);
int kmiCopyFromFrameBuffer(int, int, int);
int kmiCopyToFrameBuffer(int, int, int);
int kmiCreateRegionArray(int, int, int, int, int, int);
int kmiDMAtoTARequest(int, int, int, int, int);
int kmiDefaultInterruptHandler(int);
int kmiFBfree(int);
int kmiFBinit(void);
int kmiInitInterrupt(void);
int kmiInitializeDevice(void);
int kmiInitializeFog(void);
int kmiInitializeTA(void);
int kmiReadRegister(int);
int kmiSetTAEnvironment(int, int, int, int, int);
int kmiTXalloc(int, int);
int kmiVQFBfree(int);
int kmiVQalloc(int);
int kmiWriteRegister(int, int);
int memmove(int, int, int);
int memset(int, int, int, int);
int mwlRnaStartCopy(int, int, int, int, int);
int nlLoadDummyTexture(void);
int nlMultiMatrix8(int);
int nlOuterProduct(int, int, int);
int nlPerspective(int, float, float, float);
int nlPuts(int);
int nlUnitMatrix(void);
int nlsndStreamChgFx(int, int, int);
int nlsndStreamSetHdFx(int, int, int);
int nlsndStreamSetHdGain(int, int);
int nlsndStreamSetHdOctFns(int, int, int);
int open_file_handle(void);
int pdVibIsReady(int);
int search_dir(int, int, int);
int search_exec_file(int, int);
int search_free_dir(int);
int setTechnicalBonus(int, int, int);
int set_event(int, int);
int set_vmstime(int, int);
int setjmp(int);
int fmMngSncmp(void);
int vmsfs_c_getstate(int);
int vmsfs_c_setfunc(int, int);
int vmsfs_c_setparam(int, int, int, int, int, int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int, int, int, int);
struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uchar { char p[0x50]; unsigned char v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_int { char p[0x54]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_short { char p[0xA8]; short v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int pdVibSetStopTime(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t21;
    int t8;
    int t3;
    int t4;
    int t5;
    int t10;
    int t11;
    int t12;
    int t13;
    int t18;
    int t19;
    int stk[12];
    int R1016;
    int R1020;
    int R1024;

    R1016 = *(int *)((int)stk + 0);
    R1020 = *(int *)((int)stk + 4);
    R1024 = *(int *)((int)stk + 8);

    R1024 = a4;
    R1020 = a5;
    R1016 = a6;
    t0 = R1024;
    t1 = pdVibIsReady(t0);
    t21 = 0xFFFFFFFE;
    if (t1 != 0) {
        *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x10)) = 0x0;
        *(unsigned int *)(((((int)stk + 0) + 0xC) + 0xC)) = 0x0;
        *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x8)) = 0x0;
        *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x4)) = 0x0;
        *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x0)) = 0x0;
        t8 = 0x0;
        if ((unsigned int)0x0 < (unsigned int)a7) {
            t8 = 0x0;
            t3 = 0x0;
            do {
                t4 = R1020;
                t3 = (t3 + 0x1);
                R1020 = (t4 + 0x1);
                t5 = *(signed char *)((((t4 + 0x1) - 1) + 0x0));
                t8 = (t8 | ((int)0x1 << (int)(unsigned char)t5));
            } while ((unsigned int)t3 < (unsigned int)a7);
        }
        *(unsigned char *)(((((int)stk + 0) + 0xC) + 0x0)) = ((unsigned int)(unsigned short)t8 >> 8);
        *(unsigned char *)((((((int)stk + 0) + 0xC) + 0x1) + 0x0)) = t8;
        if ((unsigned int)0x0 < (unsigned int)a7) {
            t10 = 0x0;
            t11 = (((((int)stk + 0) + 0xC) + 0x1) + 0x1);
            do {
                t12 = R1016;
                t10 = (t10 + 0x1);
                R1016 = (t12 + 0x1);
                t13 = *(signed char *)((((t12 + 0x1) - 1) + 0x0));
                *(unsigned char *)((t11 + 0x0)) = t13;
                t11 = (t11 + 0x1);
            } while ((unsigned int)t10 < (unsigned int)a7);
        }
        R1016 = ((unsigned int)(a7 + 0x5) >> 2);
        t18 = R1024;
        t19 = kdSetBlockWrite(t18, 0x100, 0x0, 0x0, 0x0, (((int)stk + 0) + 0xC), ((unsigned int)(a7 + 0x5) >> 2));
        t21 = 0x0;
        if ((int)t19 < 0) {
            t21 = 0xFFFFFFFF;
        }
    }
    return t21;
}

int pdVibSetUnitInfo(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t0;
    int t30;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t14;
    int t18;
    int t20;

    t0 = *(int *)((a7 + 0x0));
    t30 = 0xFFFFFFFE;
    if ((t0 & 0x100) != 0) {
        t1 = *(signed char *)((a6 + 0x4));
        t30 = 0xFFFFFFFE;
        if ((unsigned char)t1 == 8) {
            t2 = *(int *)((a6 + 0x8));
            if (a9 != 0) {
                t3 = *(signed char *)(((t2 + 0x8) + 0x0));
                *(unsigned int *)((a9 + 0x0)) = (((unsigned int)((unsigned int)(unsigned char)t3 >> 2) >> 2) & 0xF);
            }
            t5 = *(signed char *)(((t2 + 0x8) + 0x1));
            t6 = *(signed char *)(((t2 + 0x8) + 0x0));
            *(unsigned char *)((a8 + 0x0)) = (((unsigned int)(unsigned char)t6 >> 2) & 0x3);
            t7 = *(signed char *)(((t2 + 0x8) + 0x0));
            *(unsigned char *)((a8 + 0x1)) = (t7 & 0x3);
            t8 = 0x0;
            if ((0x80 & (unsigned char)t5) != 0) {
                t8 = 0x1;
            }
            *(unsigned char *)((a8 + 0x2)) = t8;
            t9 = 0x0;
            if ((0x40 & (unsigned char)t5) != 0) {
                t9 = 0x1;
            }
            *(unsigned char *)((a8 + 0x3)) = t9;
            t10 = 0x0;
            if ((0x20 & (unsigned char)t5) != 0) {
                t10 = 0x1;
            }
            *(unsigned char *)((a8 + 0x4)) = t10;
            t11 = 0x0;
            if ((0x10 & (unsigned char)t5) != 0) {
                t11 = 0x1;
            }
            *(unsigned char *)((a8 + 0x5)) = t11;
            if ((0xF & (unsigned char)t5) != 0) {
                if ((0xF & (unsigned char)t5) != 1) {
                    if ((0xF & (unsigned char)t5) != 15) {
                        *(unsigned char *)((a8 + 0x6)) = 0xFF;
                        t20 = 0xFF;
                    } else {
                        *(unsigned char *)((a8 + 0x6)) = 0x0;
                        t20 = 0x0;
                    }
                } else {
                    t14 = *(signed char *)((((t2 + 0x8) + 0x2) + 0x0));
                    *(unsigned char *)((a8 + 0x6)) = t14;
                    t20 = *(signed char *)((((t2 + 0x8) + 0x2) + 0x0));
                }
            } else {
                t18 = *(signed char *)((((t2 + 0x8) + 0x2) + 0x0));
                *(unsigned char *)((a8 + 0x6)) = t18;
                t20 = *(signed char *)(((t2 + 0x8) + 0x3));
            }
            *(unsigned char *)((a8 + 0x7)) = t20;
            t30 = 0x0;
        }
    }
    return t30;
}


int vmsfs_xcreate(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t49;
    int t3;
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
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t24;
    int t26;
    int stk[22];
    int R1004;
    int R1008;
    int R1012;
    int R1016;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);

    R1012 = a6;
    R1008 = a7;
    R1016 = (a4 * 0x148);
    R1004 = ((a4 * 0x148) + 0xC2EE990);
    t0 = R1008;
    *(unsigned int *)((t0 + 0x0)) = 0x0;
    t1 = R1004;
    t2 = *(signed char *)((t1 + 0x2));
    t49 = 0xFFFFFF01;
    if (t2 != 0) {
        t3 = vmsio_isready(a4, a5, a6, a7);
        if (t3 == 0) {
            vmsfs_unmount(a4);
            t49 = 0xFFFFFF01;
        } else {
            t5 = vmsio_ismount(a4);
            t49 = 0xFFFFFF01;
            if (t5 != 0) {
                t6 = R1016;
                t7 = *(signed char *)(((t6 + 0xC2EE990) + 0x8));
                t49 = 0xFFFFFF01;
                if (t7 != 0) {
                    t8 = buIsFormat(a4);
                    t49 = 0xFFFFFF03;
                    if ((int)t8 >= 0) {
                        t9 = R1004;
                        t10 = *(int *)((t9 + 0x1C));
                        t11 = *(int *)((t10 + 0x38));
                        t49 = 0xFFFFFF08;
                        if (t11 != 0) {
                            t12 = check_isopen(a4, a5);
                            t49 = 0xFFFFFF08;
                            if ((int)t12 >= 0) {
                                t13 = search_dir(a4, a5, (((int)stk + 4) + 0x10));
                                t49 = 0xFFFFFF06;
                                if ((int)t13 < 0) {
                                    t14 = search_exec_file(a4, (((int)stk + 4) + 0x10));
                                    t49 = 0xFFFFFF09;
                                    if ((int)t14 < 0) {
                                        t15 = get_fat(a4, 0x0);
                                        t49 = 0xFFFFFF08;
                                        if ((unsigned short)t15 == 0xFFFC) {
                                            t16 = search_free_dir(a4);
                                            t49 = 0xFFFFFF08;
                                            if ((int)t16 >= 0) {
                                                direntry(a4, t16);
                                                t18 = open_file_handle();
                                                t49 = 0xFFFFFF07;
                                                if (t18 != 0) {
                                                    *(unsigned int *)((t18 + 0x8)) = 0x1;
                                                    *(unsigned int *)((t18 + 0x4)) = 0x2;
                                                    *(unsigned int *)((t18 + 0x2C)) = t16;
                                                    *(unsigned int *)((t18 + 0x38)) = 0xFFFF;
                                                    *(unsigned int *)((t18 + 0x30)) = 0x0;
                                                    *(unsigned int *)((t18 + 0x28)) = a4;
                                                    *(unsigned short *)((t18 + 0x2)) = 0x1;
                                                    *(unsigned char *)((t18 + 0x1)) = 0x0;
                                                    t19 = 0xFFFF;
                                                    t20 = (t18 + 0x10);
                                                    t21 = a5;
                                                    for (;;) {
                                                        t22 = *(signed char *)((t21 + 0x0));
                                                        if (t22 == 0) break;
                                                        t19 = *(signed char *)((t21 + 0x0));
                                                        t21 = (t21 + 0x1);
                                                        *(unsigned char *)((t20 + 0x0)) = t19;
                                                        t20 = (t20 + 0x1);
                                                    }
                                                    *(unsigned char *)((t20 + 0x0)) = 0x0;
                                                    t24 = R1012;
                                                    set_vmstime((t18 + 0x20), t24);
                                                    t26 = R1008;
                                                    *(unsigned int *)((t26 + 0x0)) = t18;
                                                    t49 = 0x0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return t49;
}


int fmMngInit(int a4, int a5)
{
    int t58;
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
    int t33;
    int t34;
    int t38;
    int t39;
    int t40;
    int t41;
    int t43;
    int t44;
    int stk[7];

    *(unsigned int *)(((int)stk + 4)) = a5;
    t58 = 0xFFFFFFF9;
    if ((int)a4 >= (int)0x1) {
        t58 = 0xFFFFFFF9;
        if ((int)a4 < (int)0x5) {
            *(unsigned int *)0xC178720 = 0xC2FA540;
            syBtFlGetInfo(a4, (((int)stk + 4) + 0x4));
            t1 = *(int *)0xC178720;
            *(unsigned short *)((t1 + 0x0)) = a4;
            t2 = *(int *)(((int)stk + 8));
            t3 = *(int *)0xC178720;
            *(unsigned int *)((t3 + 0x4)) = t2;
            t4 = *(int *)(((int)stk + 12));
            t5 = *(int *)0xC178720;
            *(unsigned int *)((t5 + 0x8)) = t4;
            t6 = *(int *)0xC178720;
            t7 = *(int *)((t6 + 0x8));
            *(unsigned int *)((t6 + 0x18)) = ((int)(t7 + 0x7FFF) >> 15);
            t8 = *(int *)0xC178720;
            t9 = *(int *)((t8 + 0x8));
            t10 = *(int *)((t8 + 0x18));
            *(unsigned int *)((t8 + 0x14)) = ((((int)t9 >> 6) - t10) - 1);
            t11 = *(int *)(((int)stk + 4));
            t12 = *(int *)0xC178720;
            *(unsigned int *)((t12 + 0xC)) = t11;
            t13 = *(int *)0xC178720;
            *(unsigned int *)((t13 + 0x1C)) = 0x0;
            t14 = *(int *)0xC178720;
            *(unsigned int *)((t14 + 0x20)) = 0x0;
            t15 = *(int *)0xC178720;
            *(unsigned int *)((t15 + 0x2C)) = 0x0;
            t16 = *(int *)0xC178720;
            t17 = *(int *)0xC178720;
            t18 = *(int *)((t17 + 0x4));
            t19 = syBtFlRead(t18, (t16 + 0x34), 0x40);
            t58 = 0xFFFFFFFF;
            if (t19 != -1) {
                t20 = *(int *)0xC178720;
                t21 = fmMngSncmp();
                t58 = 0xFFFFFFF8;
                if (t21 != 0) {
                    t22 = *(int *)0xC178720;
                    t23 = *(signed char *)(((t20 + 0x34) + 0x10));
                    t24 = *(short *)((t22 + 0x0));
                    t58 = 0xFFFFFFF8;
                    if (t24 == t23) {
                        t25 = *(signed char *)(((t20 + 0x34) + 0x11));
                        *(unsigned short *)((t22 + 0x2)) = t25;
                        t26 = *(int *)0xC178720;
                        t27 = *(short *)((t26 + 0x2));
                        if (t27 != 0) {
                            t58 = 0xFFFFFFF8;
                            if (t27 == 1) {
                                t28 = *(int *)0xC178720;
                                t29 = *(int *)0xC178720;
                                t30 = *(int *)((t28 + 0x8));
                                t31 = *(int *)((t29 + 0xC));
                                fmMngClearBuf(t31, t30);
                                t33 = *(int *)0xC178720;
                                t34 = fmMngReadSctAllData(t33);
                                t58 = 0x0;
                                if (t34 != 0) {
                                    t58 = t34;
                                }
                            }
                        } else {
                            t38 = *(int *)0xC178720;
                            t39 = *(int *)0xC178720;
                            t40 = *(int *)((t38 + 0x8));
                            t41 = *(int *)((t39 + 0xC));
                            fmMngClearBuf(t41, t40);
                            t43 = *(int *)0xC178720;
                            t44 = fmMngReadSctAllData(t43);
                            t58 = 0x0;
                            if (t44 != 0) {
                                t58 = t44;
                            }
                        }
                    }
                }
            }
        }
    }
    return t58;
}


int buFbrCreateFiber(int a4, int a5, int a6, int a7)
{
    int t1;
    int t2;
    int t14;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t12;
    int t13;
    int stk[47];
    int R1004;
    int R1008;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);

    R1008 = a5;
    R1004 = a6;
    memset((((int)stk + 4) + 0x8), 0x0, 0x98, a7);
    t1 = *(int *)((a4 + 0x208));
    t2 = *(int *)((a4 + 0x20C));
    t14 = 0xFFFFFFFF;
    if (t2 != t1) {
        t3 = t1;
        t4 = 0x0;
        t5 = (0x210 + a4);
        for (;;) {
            t6 = *(int *)((t5 + 0xC));
            if (t6 == 0) break;
            t3 = 0x124;
            t4 = (t4 + 0x1);
            t5 = (t5 + t3);
        }
        *(unsigned int *)((t5 + 0x8)) = 0x0;
        *(unsigned int *)((t5 + 0xC)) = 0x1;
        t7 = *(int *)((a4 + 0x204));
        *(unsigned int *)((t5 + 0x14)) = t7;
        t8 = R1004;
        *(unsigned int *)((t5 + 0x0)) = t8;
        *(unsigned int *)((t5 + 0x4)) = ((unsigned int)a7 >> 2);
        *(unsigned int *)((t5 + 0x118)) = 0x0;
        *(unsigned int *)((t5 + 0x10)) = 0x0;
        *(unsigned int *)((t5 + 0x11C)) = 0x0;
        memmove((t5 + 0x18), (0x104 + a4), 0x100);
        setjmp((((int)stk + 4) + 0x8));
        memmove((t5 + 0x18), (((int)stk + 4) + 0x8), 0x100);
        t12 = R1004;
        *(unsigned int *)((t5 + 0x18)) = (((((unsigned int)a7 >> 2) - 1) << 2) + t12);
        t13 = R1008;
        *(unsigned int *)((t5 + 0x20)) = t13;
        t14 = t4;
    }
    return t14;
}


