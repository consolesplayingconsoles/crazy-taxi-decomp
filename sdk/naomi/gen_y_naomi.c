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


void nlCreateVertexBuffer_clx16(int a4, int a5, int a6, int a7)
{
    int t0;
    int t5;

    t0 = *(int *)0xC2AED38;
    kmCreateVertexBuffer(0xC2AF368, a4, a5, a6, a7);
    kmCreateFrameBufferSurface(0xC2AED44, 0x0, 0x0, 0x0, 0x0);
    kmCreateFrameBufferSurface(0xC2AED6C, 0x0, 0x0, 0x0, 0x0);
    kmActivateFrameBuffer(0xC2AED44, 0xC2AED6C, 0x0, 0x1);
    t5 = *(int *)0xC2AEDC0;
    if (t5 == 0) {
        nlLoadDummyTexture();
        *(unsigned int *)0xC2AEDC0 = 0x1;
    }
}

float nlLdexpf(int a4, float f4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    float u15;
    int stk[1];

    if (f4 == 0.0f) {
        return 0.0f;
    }
    *(float *)(((int)stk + 0)) = f4;
    t0 = *(int *)((((int)stk + 0) + 0x0));
    if ((int)(a4 + (unsigned char)((int)t0 >> 23)) < (int)0x1) {
        t1 = *(int *)((((int)stk + 0) + 0x0));
        t2 = *(int *)((((int)stk + 0) + 0x0));
        *(unsigned int *)((((int)stk + 0) + 0x0)) = ((t2 & 0x80000000) | ((int)((t1 & 0x7FFFFF) | 0x800000) << (int)(-(0x1 - (a4 + (unsigned char)((int)t0 >> 23))))));
    } else {
        if ((int)(a4 + (unsigned char)((int)t0 >> 23)) > (int)0xFE) {
            t3 = *(int *)((((int)stk + 0) + 0x0));
            *(unsigned int *)((((int)stk + 0) + 0x0)) = ((t3 & 0x80000000) | 0x7F800000);
        } else {
            t4 = *(int *)((((int)stk + 0) + 0x0));
            *(unsigned int *)((((int)stk + 0) + 0x0)) = (t4 & 0x807FFFFF);
            t5 = *(int *)((((int)stk + 0) + 0x0));
            *(unsigned int *)((((int)stk + 0) + 0x0)) = (t5 | ((a4 + (unsigned char)((int)t0 >> 23)) << 23));
        }
    }
    u15 = *(float *)(((int)stk + 0));
    return u15;
}

int nlInitPrint(void)
{
    int stk[1];
    register int t1;
    register int t4;
    register float u6;

    (((struct o4_uint *)0xC2AF0BC)->v) = 0x0;
    (((struct o8_uint *)0xC2AF0BC)->v) = 0x0;
    (((struct o14_uint *)0xC2AF0BC)->v) = 0x0;
    (((struct o4_uint *)0xC2AF104)->v) = 0xFFFFFFFF;
    (((struct o0_ushort *)0xC2AF104)->v) = 0x8;
    (((struct oC_uint *)0xC2AF0BC)->v) = 0x8;
    (((struct o10_uint *)0xC2AF0BC)->v) = 0x8;
    (((struct o0_uint *)0xC2AF0BC)->v) = 0x0;
    (((struct o8_float *)0xC2AF104)->v) = 0.0f;
    (((struct oC_float *)0xC2AF104)->v) = 1.0f;
    (((struct o10_float *)0xC2AF104)->v) = (*(float *)0xC0765D4);
    t1 = 0x0;
    for (;;) {
        t4 = (t1 << 1);
        u6 = (float)t1;
        t1 = (t1 + 0x1);
        *(float *)(((int)stk + 0)) = (u6 * ((((struct o10_float *)0xC2AF104)->v)));
        *(unsigned short *)(((t4 + 0xC2AF158) + 0x0)) = (*(short *)((((int)stk + 0) + 0x2)));
        if ((int)t1 >= (int)0x101) {
            break;
        }
    }
    kmCreateTextureSurface(0xC2AF130, 0x8, 0x400, 0x902);
    kmLoadTexture(0xC2AF130, (*(int *)0xC14A7C0), 0x0, 0x0);
    return (nlPrintInitFontTexture());
}

int nlPrintf(Stk3 s)
{
    int stk[13];
    register int t0;

    stk[2] = s.w[0];
    stk[3] = s.w[1];
    stk[4] = s.w[2];
    t0 = ((((int)stk + 4) + 0x4) + 0x4);
    if ((0x3 & ((((int)stk + 4) + 0x4) + 0x4)) != 0) {
        t0 = ((((int)stk + 4) + 0x4) + 0x8);
    }
    vsprintf(0xC2AEEBC, s.w[0], t0);
    nlPuts(0xC2AEEBC);
    return 0x0;
}

int nlInitMatrix(int a4, int a5)
{
    int t2;
    int t3;
    int t4;
    int t5;

    nlInitMatrixStack(0xC2B31F4, 0xC2B320C, 0x3);
    nlInitMatrixStack(0xC2B3200, 0xC2B32CC, 0x3);
    t2 = nlInitMatrixStack(0xC2B31E8, a4, (a5 + 0x1));
    (((struct o0_uchar *)0xC2B31D8)->v) = 0x1;
    t3 = (((struct o18_int *)0xC2B31D8)->v);
    (((struct oC_uint *)0xC2B31D8)->v) = t3;
    t4 = (((struct o14_int *)0xC2B31D8)->v);
    (((struct o8_uint *)0xC2B31D8)->v) = t4;
    t5 = (((struct o10_int *)0xC2B31D8)->v);
    (((struct o4_uint *)0xC2B31D8)->v) = t5;
    return t2;
}

int nlTriPutSetAttribPointNum(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    if (a5 == 0) {
        (((struct o54_uint *)((a4 + 0x18)))->v) = a6;
        t0 = *(signed char *)((((a4 + 0x18) + 0x50) + 0x0));
        (((struct o50_uchar *)((a4 + 0x18)))->v) = (t0 | 0x10);
        t1 = *(signed char *)((((a4 + 0x18) + 0x50) + 0x0));
        t5 = (t1 & 0xF7);
    } else {
        t2 = (int)((int)a6 / (int)0x3);
        (((struct o54_uint *)((a4 + 0x18)))->v) = t2;
        t3 = *(signed char *)((((a4 + 0x18) + 0x50) + 0x0));
        (((struct o50_uchar *)((a4 + 0x18)))->v) = (t3 & 0xEF);
        t4 = *(signed char *)((((a4 + 0x18) + 0x50) + 0x0));
        t5 = (t4 | 0x8);
    }
    (((struct o50_uchar *)((a4 + 0x18)))->v) = t5;
    return t5;
}

int nlSpriteGetNextSpriteIndex(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    int t7;
    int t8;
    int t9;

    t0 = 0x0;
    for (;;) {
        t1 = (((struct o0_int *)0xC2B76C0)->v);
        t2 = (int)((int)(t1 + 0x1F) / (int)0x20);
        if ((int)t0 >= (int)t2) {
            return 0xFFFFFFFF;
        }
        t3 = (((struct o4_int *)0xC2B76C0)->v);
        t4 = *(int *)(((t0 << 2) + t3));
        if (t4 != -1) break;
        t0 = (t0 + 0x1);
    }
    t6 = 0x1;
    t7 = 0x0;
    while ((t4 & t6) != 0) {
        t6 = (t6 << 1);
        t7 = (t7 + 0x1);
    }
    t8 = (((struct o4_int *)0xC2B76C0)->v);
    t9 = *(int *)(((t0 << 2) + t8));
    *(unsigned int *)(((t0 << 2) + t8)) = (t9 | t6);
    return ((((t0 << 2) << 2) << 1) + t7);
}

int nlsndPackLoad(int a4, int a5)
{
    int t0;
    int t23;
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
    int stk[10];

    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = nlsndCheckPackLoadError(a4, a5);
    t23 = t0;
    if (t0 == 0) {
        t1 = *(int *)((a4 + 0x8));
        t2 = *(int *)((a4 + 0x4));
        t3 = *(int *)(((int)stk + 4));
        t4 = nlsndPackLoadInit(t3, t2, t1, ((int)stk + 0));
        t5 = 0x0;
        for (;;) {
            t6 = nlsndSeqRequest(0x18A0);
            if (t6 != 0) {
                t5 = (t5 + 0x1);
                if ((int)t5 >= (int)0x400000) break;
                continue;
            }
            t7 = 0x0;
            for (;;) {
                t8 = (((struct o4_int *)0xA08000B0)->v);
                if (t8 == 0) {
                    t7 = (t7 + 0x1);
                    if ((int)t7 >= (int)0x400000) break;
                    continue;
                }
                t9 = *(int *)(((int)stk + 0));
                if (t9 != 0) {
                    t10 = *(int *)(((int)stk + 0));
                    t7 = t4;
                    t11 = nlsndBlockMove(t7, (t4 + t1), t10);
                    t7 = t11;
                    if (t11 != 0) {
                        return t7;
                    }
                    t5 = 0x0;
                    for (;;) {
                        t12 = nlsndBlockMoveStatus();
                        if (t12 != 0) {
                            t5 = (t5 + 0x1);
                            if ((int)t5 >= (int)0x1000000) break;
                            continue;
                        }
                        t7 = a4;
                        if ((unsigned int)0x0 < (unsigned int)((unsigned int)t1 >> 2)) {
                            t13 = 0x0;
                            t14 = t4;
                            do {
                                t15 = *(int *)((t7 + 0x0));
                                t7 = (t7 + 0x4);
                                *(unsigned int *)((t14 + 0x0)) = t15;
                                t13 = (t13 + 0x1);
                                t14 = (t14 + 0x4);
                            } while ((unsigned int)t13 < (unsigned int)((unsigned int)t1 >> 2));
                            (((struct o0_uint *)0xA08000B0)->v) = 0x1;
                            t7 = 0x0;
                            if (0x1 != 0) {
                                for (;;) {
                                    t16 = (((struct o4_int *)0xA08000B0)->v);
                                    if (t16 != 0) {
                                        t7 = (t7 + 0x1);
                                        if ((int)t7 >= (int)0x400000) break;
                                        continue;
                                    }
                                    (((struct o0_uint *)0xA08000B0)->v) = 0x0;
                                    return 0x0;
                                }
                                return 0xFFFFFF00;
                            }
                            return 0xFFFFFF00;
                        }
                        (((struct o0_uint *)0xA08000B0)->v) = 0x1;
                        t7 = 0x0;
                        if (0x1 != 0) {
                            for (;;) {
                                t17 = (((struct o4_int *)0xA08000B0)->v);
                                if (t17 != 0) {
                                    t7 = (t7 + 0x1);
                                    if ((int)t7 >= (int)0x400000) break;
                                    continue;
                                }
                                (((struct o0_uint *)0xA08000B0)->v) = 0x0;
                                return 0x0;
                            }
                            return 0xFFFFFF00;
                        }
                        return 0xFFFFFF00;
                    }
                    return 0xFFFFFF00;
                }
                t7 = a4;
                if ((unsigned int)0x0 < (unsigned int)((unsigned int)t1 >> 2)) {
                    t18 = 0x0;
                    t19 = t4;
                    do {
                        t20 = *(int *)((t7 + 0x0));
                        t7 = (t7 + 0x4);
                        *(unsigned int *)((t19 + 0x0)) = t20;
                        t18 = (t18 + 0x1);
                        t19 = (t19 + 0x4);
                    } while ((unsigned int)t18 < (unsigned int)((unsigned int)t1 >> 2));
                    (((struct o0_uint *)0xA08000B0)->v) = 0x1;
                    t7 = 0x0;
                    if (0x1 != 0) {
                        for (;;) {
                            t21 = (((struct o4_int *)0xA08000B0)->v);
                            if (t21 != 0) {
                                t7 = (t7 + 0x1);
                                if ((int)t7 >= (int)0x400000) break;
                                continue;
                            }
                            (((struct o0_uint *)0xA08000B0)->v) = 0x0;
                            return 0x0;
                        }
                        return 0xFFFFFF00;
                    }
                    return 0xFFFFFF00;
                }
                (((struct o0_uint *)0xA08000B0)->v) = 0x1;
                t7 = 0x0;
                if (0x1 != 0) {
                    for (;;) {
                        t22 = (((struct o4_int *)0xA08000B0)->v);
                        if (t22 != 0) {
                            t7 = (t7 + 0x1);
                            if ((int)t7 >= (int)0x400000) break;
                            continue;
                        }
                        (((struct o0_uint *)0xA08000B0)->v) = 0x0;
                        return 0x0;
                    }
                    return 0xFFFFFF00;
                }
                return 0xFFFFFF00;
            }
            return 0xFFFFFF00;
        }
        t23 = 0xFFFFFF00;
    }
    return t23;
}


