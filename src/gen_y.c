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
int kmCreateTextureSurface(int);
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




void SetCameraTargetVelocity(int a4)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)((a4 + 0x8));
    (((struct o8_uint *)0xC179908)->v) = t0;
    t1 = *(int *)((a4 + 0x4));
    (((struct o4_uint *)0xC179908)->v) = t1;
    t2 = *(int *)((a4 + 0x0));
    (((struct o0_uint *)0xC179908)->v) = t2;
}


int gdc_StopStreamSongDisk(void)
{
    int t1;
    int t2;

    gdc_StopStreamSongAll();
    (((struct o0_uint *)0xC26A0C8)->v) = 0x0;
    t1 = (((struct o4_int *)0xC26A0C8)->v);
    t2 = (int)((int)(t1 + 0x1) % (int)0x4);
    (((struct o4_uint *)0xC26A0C8)->v) = t2;
    return t2;
}


void GetLightVector(int a4)
{
    int t0;
    int t1;
    int t2;

    t0 = (((struct o8_int *)0xC26E1D8)->v);
    *(unsigned int *)((a4 + 0x8)) = t0;
    t1 = (((struct o4_int *)0xC26E1D8)->v);
    *(unsigned int *)((a4 + 0x4)) = t1;
    t2 = (((struct o0_int *)0xC26E1D8)->v);
    *(unsigned int *)((a4 + 0x0)) = t2;
}













int pedStand(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;

    (((struct o50_uint *)(a4))->v) = 0x1;
    *(unsigned int *)((a4 + 0x20)) = 0x0;
    t0 = *(int *)((a4 + 0x8));
    *(unsigned int *)(((a4 + 0xC) + 0x8)) = t0;
    t1 = *(int *)((a4 + 0x4));
    *(unsigned int *)(((a4 + 0xC) + 0x4)) = t1;
    t2 = *(int *)((a4 + 0x0));
    *(unsigned int *)(((a4 + 0xC) + 0x0)) = t2;
    t3 = *(short *)((a4 + 0x18));
    *(unsigned short *)((a4 + 0x1A)) = t3;
    return t3;
}








void SEGA_LOGO_SetColor(void)
{
    int stk[45];

    *(float *)((((int)stk + 4) + 0x4)) = 0.0f;
    *(float *)((((int)stk + 4) + 0x8)) = 1.0f;
    *(float *)((((int)stk + 4) + 0xC)) = 1.0f;
    *(float *)((((int)stk + 4) + 0x10)) = 1.0f;
    *(float *)((((int)stk + 4) + 0x14)) = 0.0f;
    *(float *)((((int)stk + 4) + 0x18)) = 1.0f;
    *(float *)((((int)stk + 4) + 0x1C)) = 1.0f;
    *(float *)((((int)stk + 4) + 0x20)) = 1.0f;
}



void lcdFillData(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = (int)((unsigned int)a5 / (unsigned int)0x6);
    t1 = (int)((unsigned int)a5 % (unsigned int)0x6);
    t2 = 0x0;
    t3 = 0x0;
    do {
        t4 = (t2 + ((short)(((((((t0 << 1) + t1) - 1) << 1) + (((t0 << 1) + t1) - 1)) << 8) << 1) + 0xC2A9FF8));
        t5 = 0x0;
        do {
            t5 = (t5 + 0x1);
            *(unsigned char *)((t4 + 0x0)) = a4;
            t4 = (t4 + 0x1);
        } while ((int)t5 < (int)0x30);
        t3 = (t3 + 0x1);
        t2 = (t2 + 0x30);
    } while ((int)t3 < (int)0x20);
}



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
    int t0;
    float u1;
    int t2;
    float u4;
    int t6;
    int t8;
    int t10;
    int stk[2];

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
    (((struct o10_float *)0xC2AF104)->v) = 0.0078125f;
    t0 = 0x0;
    do {
        u1 = (((struct o10_float *)0xC2AF104)->v);
        t2 = (t0 << 1);
        u4 = (float)t0;
        t0 = (t0 + 0x1);
        *(float *)(((int)stk + 0)) = (u4 * u1);
        t6 = *(short *)((((int)stk + 0) + 0x2));
        *(unsigned short *)(((t2 + 0xC2AF158) + 0x0)) = t6;
    } while ((int)t0 < (int)0x101);
    kmCreateTextureSurface(0xC2AF130);
    t8 = *(int *)0xC14A7C0;
    kmLoadTexture(0xC2AF130, t8, 0x0, 0x0);
    t10 = nlPrintInitFontTexture();
    return t10;
}

void nlPrintf(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int stk[2];

    t0 = ((((int)stk + 4) + 0x4) + 0x4);
    if ((0x3 & ((((int)stk + 4) + 0x4) + 0x4)) != 0) {
        t0 = ((((int)stk + 4) + 0x4) + 0x8);
    }
    vsprintf(0xC2AEEBC, a8, t0);
    nlPuts(0xC2AEEBC);
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

void kmSetColorClampValue(int a4, int a5, int a6, int a7, int a8, int a9)
{
    kmiWriteRegister(0xBC, a8);
    kmiWriteRegister(0xC0, a9);
}

void kmSetFogTableColor(int a4, int a5, int a6, int a7, int a8)
{
    kmiWriteRegister(0xB0, a8);
}

void kmSetFogVertexColor(int a4, int a5, int a6, int a7, int a8)
{
    kmiWriteRegister(0xB4, a8);
}

void kmSetBorderColor(int a4, int a5, int a6, int a7, int a8)
{
    kmiWriteRegister(0x40, a8);
}


int kmiGetNativeRegOBPSize(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t11;
    int t7;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int stk[8];

    t0 = (((struct o0_int *)0xC174CD0)->v);
    t1 = (((struct o4_int *)0xC174CD0)->v);
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = t0;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x4)) = t1;
    t2 = (((struct o8_int *)0xC174CD0)->v);
    t3 = (((struct oC_int *)0xC174CD0)->v);
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x8)) = t2;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0xC)) = t3;
    *(unsigned int *)(((int)stk + 8)) = (((unsigned int)((unsigned int)a4 >> 16) >> 1) & 0x3);
    *(unsigned int *)(((int)stk + 4)) = (((unsigned int)a4 >> 21) & 0x3);
    *(unsigned int *)(((int)stk + 12)) = (((unsigned int)a4 >> 23) & 0x3);
    t4 = (((struct o4_int *)0xC2EAADC)->v);
    t5 = (((struct o0_int *)0xC2EAADC)->v);
    t6 = *(int *)0xC2EA684;
    t11 = (t5 * t4);
    if ((t6 & 32) != 0) {
        t7 = (((struct o8_int *)0xC2EAADC)->v);
        t11 = ((t5 * t4) + (t5 * t4));
        if (t7 != 0) {
            t11 = ((t5 * t4) << 2);
        }
    }
    t12 = *(int *)(((int)stk + 8));
    t13 = *(int *)(((((int)stk + 4) + 0xC) + (t12 << 2)));
    t14 = *(int *)(((((int)stk + 4) + 0xC) + ((((unsigned int)((unsigned int)((unsigned int)a4 >> 16) >> 2) >> 1) & 0x3) << 2)));
    t15 = *(int *)(((int)stk + 4));
    t16 = *(int *)(((((int)stk + 4) + 0xC) + (t15 << 2)));
    t17 = *(int *)(((int)stk + 12));
    t18 = *(int *)(((((int)stk + 4) + 0xC) + (t17 << 2)));
    t19 = *(int *)(((((int)stk + 4) + 0xC) + ((0x3 & ((unsigned int)((unsigned int)((unsigned int)a4 >> 16) >> 8) >> 1)) << 2)));
    *(unsigned int *)0xC2B8CA4 = (((((((t13 + t14) + t16) + t18) + t19) << 2) + 0x18) * t11);
    return ((0x3 & ((unsigned int)((unsigned int)((unsigned int)a4 >> 16) >> 8) >> 1)) << 2);
}


int buDefragDisk(int a4, int a5)
{
    int t0;
    int t3;

    t0 = vmsfs_c_getstate(a4);
    t3 = 0xFFFFFFFF;
    if (t0 == 0) {
        vmsfs_c_setfunc(a4, 0x9);
        vmsfs_c_setparam(a4, a4, a5, 0x0, 0x0, 0x0, 0x0);
        t3 = 0x0;
    }
    return t3;
}

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


int ADXF_Open(int a4, int a5)
{
    int t2;
    int t8;
    int t3;

    adxf_SetCmdHstry(0x1, 0x0, a4, a5, 0xFFFFFFFF);
    ADXCRS_Lock();
    t2 = adxf_CreateAdxFs();
    t8 = t2;
    if (t2 != 0) {
        t3 = adxf_SetFileInfo(t2, a4);
        t8 = t2;
        if ((int)t3 < 0) {
            ADXF_Close(t2);
            t8 = 0x0;
        }
    }
    ADXCRS_Unlock();
    adxf_SetCmdHstry(0x1, 0x1, a4, a5, 0xFFFFFFFF);
    return t8;
}

int ADXF_OpenAfs(int a4, int a5)
{
    int t2;
    int t8;
    int t3;

    adxf_SetCmdHstry(0x2, 0x0, a4, a5, 0xFFFFFFFF);
    ADXCRS_Lock();
    t2 = adxf_CreateAdxFs();
    t8 = t2;
    if (t2 != 0) {
        t3 = adxf_SetAfsFileInfo(t2, a4, a5);
        t8 = t2;
        if ((int)t3 < 0) {
            ADXF_Close(t2);
            t8 = 0x0;
        }
    }
    ADXCRS_Unlock();
    adxf_SetCmdHstry(0x2, 0x1, a4, a5, 0xFFFFFFFF);
    return t8;
}

int adxf_ExecOne(int a4)
{
    int t0;
    int t15;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;
    int t7;
    int t8;
    int t11;
    int t12;
    int stk[4];

    t0 = *(signed char *)((a4 + 0x1));
    t15 = t0;
    if (t0 == 2) {
        t1 = *(int *)((a4 + 0x4));
        t2 = ADXSTM_GetStat(t1);
        *(unsigned char *)((a4 + 0x1)) = t2;
        t3 = *(int *)((a4 + 0x4));
        ADXSTM_GetCurOfst(t3, ((int)stk + 4));
        t5 = *(int *)(((int)stk + 4));
        *(unsigned int *)((a4 + 0x24)) = t5;
        t6 = *(signed char *)((a4 + 0x1));
        if (t6 != 3) {
            t15 = t6;
            if (t6 == 4) {
                t7 = *(int *)((a4 + 0x18));
                t8 = *(int *)((a4 + 0x24));
                *(unsigned int *)((a4 + 0x18)) = (t7 + t8);
                t15 = adxf_CloseSjStm(a4);
            }
        } else {
            t11 = *(int *)((a4 + 0x18));
            t12 = *(int *)((a4 + 0x24));
            *(unsigned int *)((a4 + 0x18)) = (t11 + t12);
            t15 = adxf_CloseSjStm(a4);
        }
    }
    return t15;
}

void kmiProcessVertex_04(int a4)
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
    int t50;
    int t51;
    int stk[10];
    int R1004;
    int R1008;
    int R1012;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    t0 = *(int *)((a4 + 0x0));
    R1004 = t0;
    t1 = *(int *)((a4 + 0x4));
    R1008 = t1;
    t2 = *(int *)((a4 + 0x8));
    R1012 = t2;
    t3 = (((struct o4_int *)0xC2EA81C)->v);
    t4 = (((struct o8_int *)0xC2EA81C)->v);
    t5 = (((struct oC_int *)0xC2EA81C)->v);
    (((struct o0_uint *)0xC2EA724)->v) = t3;
    (((struct o4_uint *)0xC2EA724)->v) = t4;
    (((struct o8_uint *)0xC2EA724)->v) = t5;
    t6 = R1004;
    t7 = *(int *)((t6 + 0x4));
    (((struct oC_uint *)0xC2EA724)->v) = t7;
    t8 = R1004;
    t9 = *(int *)((t8 + 0x8));
    (((struct o10_uint *)0xC2EA724)->v) = t9;
    t10 = R1004;
    t11 = *(int *)((t10 + 0xC));
    (((struct o14_uint *)0xC2EA724)->v) = t11;
    t12 = R1004;
    t13 = *(int *)((t12 + 0x10));
    t14 = kmiBGPlanePutColor(t3, 0x6, t13);
    t15 = R1004;
    t16 = *(int *)((t15 + 0x18));
    *(unsigned int *)(((t14 << 2) + 0xC2EA724)) = t16;
    t17 = R1004;
    t18 = *(int *)((t17 + 0x1C));
    t19 = kmiBGPlanePutWord(t3, (t14 + 0x1), t18);
    t20 = R1008;
    t21 = *(int *)((t20 + 0x4));
    *(unsigned int *)(((t19 << 2) + 0xC2EA724)) = t21;
    t22 = R1008;
    t23 = *(int *)((t22 + 0x8));
    *(unsigned int *)((((t19 + 0x1) << 2) + 0xC2EA724)) = t23;
    t24 = R1008;
    t25 = *(int *)((t24 + 0xC));
    *(unsigned int *)(((((t19 + 0x1) + 0x1) << 2) + 0xC2EA724)) = t25;
    t26 = R1008;
    t27 = *(int *)((t26 + 0x10));
    t28 = kmiBGPlanePutColor(t3, (((t19 + 0x1) + 0x1) + 0x1), t27);
    t29 = R1008;
    t30 = *(int *)((t29 + 0x18));
    *(unsigned int *)(((t28 << 2) + 0xC2EA724)) = t30;
    t31 = R1004;
    t32 = *(int *)((t31 + 0x1C));
    t33 = kmiBGPlanePutWord(t3, (t28 + 0x1), t32);
    t34 = R1012;
    t35 = *(int *)((t34 + 0x4));
    *(unsigned int *)(((t33 << 2) + 0xC2EA724)) = t35;
    t36 = R1012;
    t37 = *(int *)((t36 + 0x8));
    *(unsigned int *)((((t33 + 0x1) << 2) + 0xC2EA724)) = t37;
    t38 = R1012;
    t39 = *(int *)((t38 + 0xC));
    *(unsigned int *)(((((t33 + 0x1) + 0x1) << 2) + 0xC2EA724)) = t39;
    t40 = R1012;
    t41 = *(int *)((t40 + 0x10));
    t42 = kmiBGPlanePutColor(t3, (((t33 + 0x1) + 0x1) + 0x1), t41);
    t43 = R1012;
    t44 = *(int *)((t43 + 0x18));
    *(unsigned int *)(((t42 << 2) + 0xC2EA724)) = t44;
    t45 = R1004;
    t46 = *(int *)((t45 + 0x1C));
    t47 = kmiBGPlanePutWord(t3, (t42 + 0x1), t46);
    (((struct o0_uint *)0xC2EA81C)->v) = (t47 << 2);
    t48 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t48, 0x0, 0x0);
    t50 = R1004;
    t51 = *(int *)((t50 + 0xC));
    (((struct o14_uint *)0xC2EA81C)->v) = t51;
}

void kmiProcessVertex_08(int a4)
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
    float u30;
    int t31;
    float u32;
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
    float u44;
    int t45;
    float u46;
    int t47;
    int t48;
    int t50;
    int t51;
    int stk[12];
    int R1004;
    int R1008;
    int R1012;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    t0 = *(int *)((a4 + 0x0));
    R1004 = t0;
    t1 = *(int *)((a4 + 0x4));
    R1008 = t1;
    t2 = *(int *)((a4 + 0x8));
    R1012 = t2;
    t3 = (((struct o4_int *)0xC2EA81C)->v);
    t4 = (((struct o8_int *)0xC2EA81C)->v);
    t5 = (((struct oC_int *)0xC2EA81C)->v);
    (((struct o0_uint *)0xC2EA724)->v) = t3;
    (((struct o4_uint *)0xC2EA724)->v) = t4;
    (((struct o8_uint *)0xC2EA724)->v) = t5;
    t6 = R1004;
    t7 = *(int *)((t6 + 0x4));
    (((struct oC_uint *)0xC2EA724)->v) = t7;
    t8 = R1004;
    t9 = *(int *)((t8 + 0x8));
    (((struct o10_uint *)0xC2EA724)->v) = t9;
    t10 = R1004;
    t11 = *(int *)((t10 + 0xC));
    (((struct o14_uint *)0xC2EA724)->v) = t11;
    t12 = R1004;
    t13 = *(int *)((t12 + 0x10));
    t14 = kmiBGPlanePutColor(t3, 0x6, t13);
    t15 = R1004;
    u16 = *(float *)(((0x18 + t15) + 0x0));
    *(unsigned int *)(((t14 << 2) + 0xC2EA724)) = ((((((int)(u16 * 255.0f) << 16) << 8) | ((int)(u16 * 255.0f) << 16)) | ((int)(u16 * 255.0f) << 8)) | (int)(u16 * 255.0f));
    t17 = R1004;
    u18 = *(float *)((t17 + 0x1C));
    t19 = kmiBGPlanePutWord(t3, (t14 + 0x1), ((((((int)(u18 * 255.0f) << 16) << 8) | ((int)(u18 * 255.0f) << 16)) | ((int)(u18 * 255.0f) << 8)) | (int)(u18 * 255.0f)));
    t20 = R1008;
    t21 = *(int *)((t20 + 0x4));
    *(unsigned int *)(((t19 << 2) + 0xC2EA724)) = t21;
    t22 = R1008;
    t23 = *(int *)((t22 + 0x8));
    *(unsigned int *)((((t19 + 0x1) << 2) + 0xC2EA724)) = t23;
    t24 = R1008;
    t25 = *(int *)((t24 + 0xC));
    *(unsigned int *)(((((t19 + 0x1) + 0x1) << 2) + 0xC2EA724)) = t25;
    t26 = R1004;
    t27 = *(int *)((t26 + 0x10));
    t28 = kmiBGPlanePutColor(t3, (((t19 + 0x1) + 0x1) + 0x1), t27);
    t29 = R1008;
    u30 = *(float *)(((0x18 + t29) + 0x0));
    *(unsigned int *)(((t28 << 2) + 0xC2EA724)) = ((((((int)(u30 * 255.0f) << 16) << 8) | ((int)(u30 * 255.0f) << 16)) | ((int)(u30 * 255.0f) << 8)) | (int)(u30 * 255.0f));
    t31 = R1008;
    u32 = *(float *)((t31 + 0x1C));
    t33 = kmiBGPlanePutWord(t3, (t28 + 0x1), ((((((int)(u32 * 255.0f) << 16) << 8) | ((int)(u32 * 255.0f) << 16)) | ((int)(u32 * 255.0f) << 8)) | (int)(u32 * 255.0f)));
    t34 = R1012;
    t35 = *(int *)((t34 + 0x4));
    *(unsigned int *)(((t33 << 2) + 0xC2EA724)) = t35;
    t36 = R1012;
    t37 = *(int *)((t36 + 0x8));
    *(unsigned int *)((((t33 + 0x1) << 2) + 0xC2EA724)) = t37;
    t38 = R1012;
    t39 = *(int *)((t38 + 0xC));
    *(unsigned int *)(((((t33 + 0x1) + 0x1) << 2) + 0xC2EA724)) = t39;
    t40 = R1004;
    t41 = *(int *)((t40 + 0x10));
    t42 = kmiBGPlanePutColor(t3, (((t33 + 0x1) + 0x1) + 0x1), t41);
    t43 = R1012;
    u44 = *(float *)(((0x18 + t43) + 0x0));
    *(unsigned int *)(((t42 << 2) + 0xC2EA724)) = ((((((int)(u44 * 255.0f) << 16) << 8) | ((int)(u44 * 255.0f) << 16)) | ((int)(u44 * 255.0f) << 8)) | (int)(u44 * 255.0f));
    t45 = R1012;
    u46 = *(float *)((t45 + 0x1C));
    t47 = kmiBGPlanePutWord(t3, (t42 + 0x1), ((((((int)(u46 * 255.0f) << 16) << 8) | ((int)(u46 * 255.0f) << 16)) | ((int)(u46 * 255.0f) << 8)) | (int)(u46 * 255.0f)));
    (((struct o0_uint *)0xC2EA81C)->v) = (t47 << 2);
    t48 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t48, 0x0, 0x0);
    t50 = R1004;
    t51 = *(int *)((t50 + 0xC));
    (((struct o14_uint *)0xC2EA81C)->v) = t51;
}

void kmiProcessVertex_12(int a4)
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
    int t50;
    int t51;
    int stk[10];
    int R1004;
    int R1008;
    int R1012;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    t0 = *(int *)((a4 + 0x0));
    R1004 = t0;
    t1 = *(int *)((a4 + 0x4));
    R1008 = t1;
    t2 = *(int *)((a4 + 0x8));
    R1012 = t2;
    t3 = (((struct o4_int *)0xC2EA81C)->v);
    t4 = (((struct o8_int *)0xC2EA81C)->v);
    t5 = (((struct oC_int *)0xC2EA81C)->v);
    (((struct o0_uint *)0xC2EA724)->v) = t3;
    (((struct o4_uint *)0xC2EA724)->v) = t4;
    (((struct o8_uint *)0xC2EA724)->v) = t5;
    t6 = R1004;
    t7 = *(int *)((t6 + 0x4));
    (((struct oC_uint *)0xC2EA724)->v) = t7;
    t8 = R1004;
    t9 = *(int *)((t8 + 0x8));
    (((struct o10_uint *)0xC2EA724)->v) = t9;
    t10 = R1004;
    t11 = *(int *)((t10 + 0xC));
    (((struct o14_uint *)0xC2EA724)->v) = t11;
    t12 = R1004;
    t13 = *(int *)((t12 + 0x10));
    t14 = kmiBGPlanePutColor(t3, 0x6, t13);
    t15 = R1004;
    t16 = *(int *)((t15 + 0x18));
    *(unsigned int *)(((t14 << 2) + 0xC2EA724)) = t16;
    t17 = R1004;
    t18 = *(int *)((t17 + 0x1C));
    t19 = kmiBGPlanePutWord(t3, (t14 + 0x1), t18);
    t20 = R1008;
    t21 = *(int *)((t20 + 0x4));
    *(unsigned int *)(((t19 << 2) + 0xC2EA724)) = t21;
    t22 = R1008;
    t23 = *(int *)((t22 + 0x8));
    *(unsigned int *)((((t19 + 0x1) << 2) + 0xC2EA724)) = t23;
    t24 = R1008;
    t25 = *(int *)((t24 + 0xC));
    *(unsigned int *)(((((t19 + 0x1) + 0x1) << 2) + 0xC2EA724)) = t25;
    t26 = R1004;
    t27 = *(int *)((t26 + 0x10));
    t28 = kmiBGPlanePutColor(t3, (((t19 + 0x1) + 0x1) + 0x1), t27);
    t29 = R1008;
    t30 = *(int *)((t29 + 0x18));
    *(unsigned int *)(((t28 << 2) + 0xC2EA724)) = t30;
    t31 = R1008;
    t32 = *(int *)((t31 + 0x1C));
    t33 = kmiBGPlanePutWord(t3, (t28 + 0x1), t32);
    t34 = R1012;
    t35 = *(int *)((t34 + 0x4));
    *(unsigned int *)(((t33 << 2) + 0xC2EA724)) = t35;
    t36 = R1012;
    t37 = *(int *)((t36 + 0x8));
    *(unsigned int *)((((t33 + 0x1) << 2) + 0xC2EA724)) = t37;
    t38 = R1012;
    t39 = *(int *)((t38 + 0xC));
    *(unsigned int *)(((((t33 + 0x1) + 0x1) << 2) + 0xC2EA724)) = t39;
    t40 = R1012;
    t41 = *(int *)((t40 + 0x10));
    t42 = kmiBGPlanePutColor(t3, (((t33 + 0x1) + 0x1) + 0x1), t41);
    t43 = R1012;
    t44 = *(int *)((t43 + 0x18));
    *(unsigned int *)(((t42 << 2) + 0xC2EA724)) = t44;
    t45 = R1012;
    t46 = *(int *)((t45 + 0x1C));
    t47 = kmiBGPlanePutWord(t3, (t42 + 0x1), t46);
    (((struct o0_uint *)0xC2EA81C)->v) = (t47 << 2);
    t48 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t48, 0x0, 0x0);
    t50 = R1004;
    t51 = *(int *)((t50 + 0xC));
    (((struct o14_uint *)0xC2EA81C)->v) = t51;
}

int kmiCBalloc(int a4, int a5, int a6)
{
    int t0;
    int t9;
    int t1;
    int t7;
    int t2;
    int t3;
    int t4;

    t0 = kmiFBallocSub(a4, a5, a6);
    t9 = 0x3;
    if (t0 != -1) {
        t1 = kmytex_ABSalloc(0x0, t0, a4, a5);
        t7 = t1;
        if (t1 == 0) {
            t2 = *(int *)0xC177FB0;
            t3 = kmytex_ABSalloc(0x1, (t2 + t0), a4, a6);
            if (t3 != 0) {
                t4 = *(int *)((a5 + 0x1C));
                kmiFBfree(t4);
            }
            t7 = t3;
        }
        t9 = t7;
    }
    return t9;
}

int FBmovedata(int a4, int a5, int a6)
{
    int t13;
    int t14;
    int t15;
    int t3;
    int t7;
    int t8;
    int t10;
    int t19;
    int t20;
    int t22;
    int t23;
    int stk[522];
    int R1004;

    R1004 = *(int *)((int)stk + 4);

    t13 = a6;
    t14 = a5;
    t15 = a4;
    if ((unsigned int)a6 > (unsigned int)0x800) {
        R1004 = (((int)stk + 4) + 0x4);
        t14 = a5;
        t15 = a4;
        t13 = a6;
        do {
            t3 = R1004;
            kmiCopyFromFrameBuffer(t3, t14, 0x800);
            t8 = R1004;
            t7 = 0x40;
            while (t7 != 0) {
                kmiPurgeCache(t8);
                t7 = (t7 - 1);
                t8 = (t8 + 0x20);
            }
            t10 = R1004;
            kmiCopyToFrameBuffer(t15, t10, 0x800);
            t13 = (t13 - 0x800);
            t14 = (t14 + 0x800);
            t15 = (t15 + 0x800);
        } while ((unsigned int)t13 > (unsigned int)0x800);
    }
    R1004 = (((int)stk + 4) + 0x4);
    kmiCopyFromFrameBuffer((((int)stk + 4) + 0x4), t14, t13);
    t20 = R1004;
    t19 = 0x40;
    while (t19 != 0) {
        kmiPurgeCache(t20);
        t19 = (t19 - 1);
        t20 = (t20 + 0x20);
    }
    t22 = R1004;
    t23 = kmiCopyToFrameBuffer(t15, t22, t13);
    return t23;
}

void kmytex_GetSmallVQprofile(int a4, int a5)
{
    int t0;
    int t1;
    int t5;
    int t6;
    int t7;
    int t10;
    int t11;
    int t12;
    int t16;
    int t17;
    int t18;
    int t21;
    int t22;
    int t14;

    t0 = *(int *)((a5 + 0xC));
    if (t0 != 8) {
        if (t0 != 16) {
            if (t0 != 32) {
                if (t0 != 64) {
                    return;
                }
                t1 = *(int *)((a5 + 0x18));
                if ((0x1 & t1) != 0) {
                    *(unsigned int *)((a4 + 0x0)) = 0x8000;
                    *(unsigned int *)((a4 + 0x4)) = 0x800;
                    *(unsigned int *)((a4 + 0x8)) = 0x560;
                    *(unsigned int *)((a4 + 0xC)) = 0xD60;
                } else {
                    *(unsigned int *)((a4 + 0x0)) = 0x7000;
                    *(unsigned int *)((a4 + 0x4)) = 0x400;
                    *(unsigned int *)((a4 + 0x8)) = 0x400;
                    *(unsigned int *)((a4 + 0xC)) = 0x1000;
                }
                t5 = *(int *)((a4 + 0x4));
                t6 = (int)((unsigned int)0x800 / (unsigned int)t5);
                *(unsigned int *)((a4 + 0x10)) = t6;
                return;
            }
            t7 = *(int *)((a5 + 0x18));
            if ((0x1 & t7) != 0) {
                *(unsigned int *)((a4 + 0x0)) = 0x6000;
                *(unsigned int *)((a4 + 0x4)) = 0x200;
                *(unsigned int *)((a4 + 0x8)) = 0x160;
                *(unsigned int *)((a4 + 0xC)) = 0xF60;
            } else {
                *(unsigned int *)((a4 + 0x0)) = 0x5000;
                *(unsigned int *)((a4 + 0x4)) = 0x100;
                *(unsigned int *)((a4 + 0x8)) = 0x100;
                *(unsigned int *)((a4 + 0xC)) = 0x1000;
            }
            t10 = *(int *)((a4 + 0x4));
            t11 = (int)((unsigned int)0x800 / (unsigned int)t10);
            *(unsigned int *)((a4 + 0x10)) = t11;
            return;
        }
        t12 = *(int *)((a5 + 0x18));
        if ((0x1 & t12) != 0) {
            *(unsigned int *)((a4 + 0x0)) = 0x4000;
            *(unsigned int *)((a4 + 0x4)) = 0x80;
            *(unsigned int *)((a4 + 0x8)) = 0x60;
            t14 = 0xFE0;
        } else {
            *(unsigned int *)((a4 + 0x0)) = 0x3000;
            *(unsigned int *)((a4 + 0x4)) = 0x80;
            *(unsigned int *)((a4 + 0x8)) = 0x40;
            t14 = 0xFC0;
        }
        *(unsigned int *)((a4 + 0xC)) = t14;
        t16 = *(int *)((a4 + 0x4));
        t17 = (int)((unsigned int)0x800 / (unsigned int)t16);
        *(unsigned int *)((a4 + 0x10)) = t17;
        return;
    }
    t18 = *(int *)((a5 + 0x18));
    if ((0x1 & t18) != 0) {
        *(unsigned int *)((a4 + 0x0)) = 0x2000;
        *(unsigned int *)((a4 + 0x4)) = 0x80;
        *(unsigned int *)((a4 + 0x8)) = 0x20;
        *(unsigned int *)((a4 + 0xC)) = 0xFA0;
    } else {
        *(unsigned int *)((a4 + 0x0)) = 0x1000;
        *(unsigned int *)((a4 + 0x4)) = 0x80;
        *(unsigned int *)((a4 + 0x8)) = 0x20;
        *(unsigned int *)((a4 + 0xC)) = 0xF90;
    }
    t21 = *(int *)((a4 + 0x4));
    t22 = (int)((unsigned int)0x800 / (unsigned int)t21);
    *(unsigned int *)((a4 + 0x10)) = t22;
}

int kmiInitializeHardware(void)
{
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;

    kmiModuleInitialize();
    kmiInitializeDevice();
    kmiInitializeTA();
    kmiFBinit();
    kmiInitInterrupt();
    kmiInitializeFog();
    *(unsigned int *)0xC2EAAD8 = 0x100000;
    *(unsigned int *)0xC2EAADC = 0x0;
    *(unsigned int *)0xC2EAAE0 = 0x0;
    *(unsigned int *)0xC2EAAE4 = 0x0;
    t6 = *(int *)0xC2EA6E8;
    t7 = *(int *)0xC2EA6F8;
    t8 = *(int *)0xC2EA6F4;
    t9 = *(int *)0xC2EA6F0;
    t10 = *(int *)0xC2EA6EC;
    t11 = kmiSetTAEnvironment(((unsigned int)t10 >> 7), ((unsigned int)t9 >> 7), ((unsigned int)t8 >> 7), ((unsigned int)t7 >> 7), t6);
    return t11;
}

void kmiReqRestOfDMA(int a4)
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
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t22;
    int t23;
    int t24;
    int stk[10];

    *(unsigned int *)(((int)stk + 4)) = a4;
    t0 = *(int *)0xC2EA9DC;
    t1 = (0xC2EAA00 + (t0 << 2));
    t2 = (0xC2EAA50 + (t0 << 2));
    t3 = 0x0;
    do {
        t4 = *(int *)((t2 + 0x0));
        if (t4 != 0) {
            t5 = *(int *)(((int)stk + 4));
            if (t5 != t3) {
                t6 = (((struct o0_int *)0xC2EAAB4)->v);
                if (t6 == 1) {
                    if (t3 != 1) {
                        if (t3 == 3) {
                            t7 = (((struct o4_int *)0xC2EAAB4)->v);
                            t8 = (((struct o4_int *)0xC2EAAB4)->v);
                            t9 = *(int *)((t8 + 0x0));
                            *(unsigned int *)((t7 + 0x0)) = ((t9 & 0xF0FFFFFF) | ((t3 << 16) << 8));
                            do {
                                t10 = (((struct o8_int *)0xC2EAAB4)->v);
                                t11 = (((struct o4_int *)0xC2EAAB4)->v);
                                t12 = kmiDMAtoTARequest(0x10000000, t11, t10, 0x10, ((int)stk + 0));
                            } while (t12 == 0x100);
                        }
                    } else {
                        t14 = (((struct o4_int *)0xC2EAAB4)->v);
                        t15 = (((struct o4_int *)0xC2EAAB4)->v);
                        t16 = *(int *)((t15 + 0x0));
                        *(unsigned int *)((t14 + 0x0)) = ((t16 & 0xF0FFFFFF) | ((t3 << 16) << 8));
                        do {
                            t17 = (((struct o8_int *)0xC2EAAB4)->v);
                            t18 = (((struct o4_int *)0xC2EAAB4)->v);
                            t19 = kmiDMAtoTARequest(0x10000000, t18, t17, 0x10, ((int)stk + 0));
                        } while (t19 == 0x100);
                    }
                }
                do {
                    t22 = *(int *)((t2 + 0x0));
                    t23 = *(int *)((t1 + 0x0));
                    t24 = kmiDMAtoTARequest(0x10000000, t23, (t22 + 0x20), 0x10, ((int)stk + 0));
                } while (t24 == 0x100);
            }
        }
        t3 = (t3 + 0x1);
        t2 = (t2 + 0x10);
        t1 = (t1 + 0x10);
    } while ((unsigned int)t3 < (unsigned int)0x5);
}

int kmCreateCombinedTextureSurface(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t30;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t17;
    int t20;
    int t22;

    t0 = kmtex_CheckTextureFormat(a4, a6, a7, a8);
    t30 = t0;
    if (t0 == 0) {
        t1 = *(int *)((a4 + 0x0));
        *(unsigned int *)((a5 + 0x0)) = t1;
        t2 = *(int *)((a4 + 0x4));
        *(unsigned int *)((a5 + 0x4)) = t2;
        t3 = *(int *)((a4 + 0x8));
        *(unsigned int *)((a5 + 0x8)) = t3;
        t4 = *(int *)((a4 + 0xC));
        *(unsigned int *)((a5 + 0xC)) = t4;
        t5 = *(int *)((a4 + 0x10));
        *(unsigned int *)((a5 + 0x10)) = t5;
        t6 = *(int *)((a4 + 0x14));
        *(unsigned int *)((a5 + 0x14)) = t6;
        t7 = *(int *)((a4 + 0x18));
        *(unsigned int *)((a5 + 0x18)) = t7;
        t8 = *(int *)((a4 + 0x0));
        if ((unsigned short)t8 == 3) {
            t9 = kmiVQalloc(a4);
            if (t9 != 3) {
                t30 = kmiVQalloc(a5);
                if (t30 == 3) {
                    kmiVQFBfree(a4);
                    kmiDefaultInterruptHandler(0x3);
                }
            } else {
                kmiDefaultInterruptHandler(0x3);
                t30 = t9;
            }
        } else {
            t17 = *(int *)((a4 + 0x14));
            t30 = kmiTXalloc(t17, a4);
            if (t30 == 3) {
                kmiDefaultInterruptHandler(0x3);
            } else {
                t20 = *(int *)((a5 + 0x14));
                t30 = kmiTXalloc(t20, a5);
                if (t30 == 3) {
                    t22 = *(int *)((a4 + 0x1C));
                    kmiFBfree(t22);
                    kmiDefaultInterruptHandler(0x3);
                }
            }
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

int vmsfs_scanfile(int a4, int a5, int a6)
{
    int t0;
    int t13;
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
    int stk[18];

    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = search_dir(a4, a5, (((int)stk + 4) + 0x4));
    t13 = 0xFFFFFF05;
    if ((int)t0 >= 0) {
        t1 = direntry(a4, t0);
        t2 = *(int *)(((int)stk + 20));
        *(unsigned short *)((a6 + 0x0)) = t2;
        t3 = t1;
        t4 = a4;
        t5 = t2;
        t6 = (a6 + 0x2);
        t7 = 0x0;
        for (;;) {
            t8 = *(int *)(((int)stk + 48));
            if ((int)t7 >= (int)t8) break;
            t4 = a4;
            t9 = get_fat(t4, t5);
            t3 = t9;
            t4 = (unsigned short)t3;
            t5 = t4;
            *(unsigned short *)((t6 + 0x0)) = t5;
            t7 = (t7 + 0x1);
            t6 = (t6 + 0x2);
        }
        t10 = *(int *)(((int)stk + 4));
        t11 = check_file_correct(a4, t10);
        t12 = t0;
        if ((int)t11 < 0) {
            t12 = t11;
        }
        t13 = t12;
    }
    return t13;
}

void ADX_DecodeInfo(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13)
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

    if ((int)a5 < (int)0x10) {
        return;
    }
    t0 = *(short *)((a4 + 0x0));
    if ((unsigned short)((unsigned char)((int)(unsigned short)t0 >> 8) | (((unsigned short)t0 << 8) & 0xFF00)) != 0x8000) {
        return;
    }
    t1 = *(short *)((a4 + 0x2));
    *(unsigned short *)((a6 + 0x0)) = (((unsigned char)((int)t1 >> 8) | ((t1 << 8) & 0xFFFFFF00)) + 0x4);
    t2 = *(signed char *)((a4 + 0x4));
    *(unsigned char *)((a7 + 0x0)) = t2;
    t3 = *(signed char *)((a4 + 0x5));
    *(unsigned char *)((a9 + 0x0)) = t3;
    t4 = *(signed char *)((a4 + 0x6));
    *(unsigned char *)((a8 + 0x0)) = t4;
    t5 = *(signed char *)((a4 + 0x7));
    *(unsigned char *)((a10 + 0x0)) = t5;
    t6 = *(int *)((a4 + 0x8));
    *(unsigned int *)((a11 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)t6 >> 16) >> 8) | (((int)t6 >> 8) & 0xFF00)) | ((t6 << 8) & 0xFF0000)) | ((t6 << 16) << 8));
    t7 = *(int *)((a4 + 0xC));
    *(unsigned int *)((a12 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)t7 >> 16) >> 8) | (((int)t7 >> 8) & 0xFF00)) | ((t7 << 8) & 0xFF0000)) | ((t7 << 16) << 8));
    t8 = *(signed char *)((a9 + 0x0));
    t9 = *(signed char *)((a8 + 0x0));
    t10 = (int)((int)(((t8 - 2) << 2) << 1) / (int)t9);
    *(unsigned int *)((a13 + 0x0)) = t10;
}

void mwlRnaAddFlshPos(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = (((struct o58_int *)(a4))->v);
    t1 = (((struct o50_int *)(a4))->v);
    t2 = *(int *)((a4 + 0x28));
    t3 = (int)((int)(t1 + t0) % (int)t2);
    (((struct o50_uint *)(a4))->v) = t3;
    t4 = (((struct o58_int *)(a4))->v);
    t5 = (((struct o54_int *)(a4))->v);
    (((struct o54_uint *)(a4))->v) = (t5 + t4);
    (((struct o58_uint *)(a4))->v) = 0x0;
}

int mwlRnaInsrtSlntDat(int a4)
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
    int t18;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;

    t0 = *(int *)((a4 + 0x28));
    t1 = *(int *)((a4 + 0x34));
    t2 = (((struct o54_int *)(a4))->v);
    t3 = *(int *)((a4 + 0x8));
    t4 = (int)((int)0x20 / (int)t3);
    t5 = (int)((int)((t0 - t1) - t2) / (int)((t4 << 2) << 1));
    t6 = (((struct o50_int *)(a4))->v);
    t7 = (t0 - t6);
    if ((int)(t5 * ((t4 << 2) << 1)) < (int)(t0 - t6)) {
        t7 = (t5 * ((t4 << 2) << 1));
    }
    t8 = (int)((int)0x800 / (int)t3);
    t9 = t7;
    if ((int)t7 >= (int)((t8 << 2) << 1)) {
        t9 = ((t8 << 2) << 1);
    }
    t10 = (int)((int)t9 / (int)((t4 << 2) << 1));
    t18 = 0x0;
    if ((int)(t10 * ((t4 << 2) << 1)) > 0) {
        t11 = *(int *)((a4 + 0x8));
        t12 = 0xC2F64DC;
        if (t11 == 4) {
            t12 = 0xC2F6CFC;
        }
        t13 = t12;
        t14 = 0x0;
        for (;;) {
            t15 = *(signed char *)((a4 + 0x3));
            if ((int)t14 >= (int)(unsigned char)t15) break;
            t16 = (((struct o50_int *)(a4))->v);
            t13 = a4;
            t17 = mwlRnaStartCopy(t13, t14, t16, ((t12 + 0x20) & 0xFFFFFFE0), (t10 * ((t4 << 2) << 1)));
            t14 = (t14 + 0x1);
            t13 = t17;
        }
        (((struct o58_uint *)(a4))->v) = t13;
        t18 = t13;
    }
    return t18;
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

void ADXB_EntryData(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    t0 = (((struct oA8_short *)(a4))->v);
    if (t0 == 0) {
        (((struct o50_uint *)(a4))->v) = a5;
        t1 = *(signed char *)((a4 + 0xF));
        t2 = (int)((int)a6 / (int)t1);
        t7 = t2;
    } else {
        (((struct o50_uint *)(a4))->v) = a5;
        t3 = *(signed char *)((a4 + 0xD));
        t4 = t3;
        if ((int)t3 < 0) {
            t4 = (t3 + 0x7);
        }
        t5 = *(signed char *)((a4 + 0xE));
        t6 = (int)((int)a6 / (int)((((t4 >> 1) >> 1) >> 1) * t5));
        t7 = t6;
    }
    (((struct o54_uint *)(a4))->v) = t7;
    (((struct o84_uint *)(a4))->v) = 0x0;
    (((struct oA0_uint *)(a4))->v) = 0x0;
    (((struct oA4_uint *)(a4))->v) = 0x0;
}

int ADXB_EvokeDecode(int a4)
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
    int t14;
    int t11;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;

    t0 = *(int *)(((a4 + 0x50) + 0x4));
    t1 = *(int *)(((a4 + 0x50) + 0x8));
    t2 = (int)((int)t0 / (int)t1);
    t3 = *(int *)(((a4 + 0x50) + 0x28));
    t4 = *(int *)(((a4 + 0x50) + 0x10));
    t5 = *(int *)(((a4 + 0x50) + 0x20));
    t6 = *(int *)(((a4 + 0x50) + 0x24));
    t7 = *(int *)(((a4 + 0x50) + 0x18));
    t8 = (int)((int)((t3 + t4) - 1) / (int)t4);
    t9 = (int)((int)((t3 + t4) - 1) % (int)t4);
    t10 = (int)((int)(((t7 - t5) + t4) - 1) / (int)t4);
    t14 = t10;
    if ((int)t8 < (int)t10) {
        t11 = *(int *)(((a4 + 0x50) + 0x18));
        t14 = t10;
        if ((int)(((t10 * t4) - ((t4 - t9) - 1)) + t5) < (int)t11) {
            t14 = (t10 + 0x1);
        }
    }
    t15 = t6;
    if ((int)t3 < (int)t6) {
        t15 = (t6 + ((t4 - t9) - 1));
    }
    t16 = (int)((int)t15 / (int)t4);
    t17 = t2;
    if ((int)t2 > (int)t16) {
        t17 = t16;
    }
    t18 = t17;
    if ((int)t17 > (int)t8) {
        t18 = t8;
    }
    t19 = *(int *)(((a4 + 0x50) + 0x8));
    t20 = t18;
    if ((int)t18 > (int)t14) {
        t20 = t14;
    }
    if (t19 == 2) {
        return ADXB_EvokeExpandSte(a4, t20);
    }
    return ADXB_EvokeExpandMono(a4, t20);
}

int ADXB_EndDecode(int a4)
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

    t0 = *(int *)(((a4 + 0x50) + 0x10));
    t1 = *(int *)(((a4 + 0x50) + 0xC));
    t2 = *(int *)(((a4 + 0x50) + 0x28));
    t3 = (((struct o40_int *)(a4))->v);
    t4 = *(int *)(((a4 + 0x50) + 0x20));
    t5 = *(int *)(((a4 + 0x50) + 0x14));
    t6 = (((struct o44_int *)(a4))->v);
    t7 = (int)((int)((t0 + t2) - 1) / (int)t0);
    t8 = (int)((int)((t0 + t2) - 1) % (int)t0);
    t9 = *(int *)((a4 + 0x8));
    t10 = ADXPD_GetNumBlk(t9);
    t11 = *(int *)(((a4 + 0x50) + 0x8));
    t12 = (int)((int)(t0 * t10) / (int)t11);
    t13 = t12;
    if ((int)t7 <= (int)t10) {
        t13 = (t12 - ((t0 - t8) - 1));
    }
    (((struct oA0_uint *)(a4))->v) = t13;
    (((struct oA4_uint *)(a4))->v) = (t1 * t10);
    if ((int)(t4 + t13) >= (int)t3) {
        t14 = *(int *)(((a4 + 0x50) + 0x8));
        if (t14 == 2) {
            return ADXB_CopyExtraBufSte(t5, t3, t6, ((t4 + t13) - t3));
        }
        return ADXB_CopyExtraBufMono(t5, t3, t6, ((t4 + t13) - t3));
    }
    return 0xA4;
}

int mwSbSetSfreq(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = (int)((int)0xAC44 / (int)(a5 + 0x1));
    t1 = *(signed char *)((0xC1769AC + t0));
    t2 = (int)((int)(((a5 - ((int)0xAC44 << (int)(-t1))) << 8) << 2) / (int)((int)0xAC44 << (int)(-t1)));
    t3 = *(int *)((a4 + 0x1C));
    t4 = *(int *)((t3 + 0x4));
    t5 = nlsndStreamSetHdOctFns(t4, (0xF & (-t1)), (0x3FF & t2));
    *(unsigned int *)((a4 + 0x14)) = a5;
    return t5;
}

int mwSbSetVol(int a4, int a5)
{
    int t5;
    int t0;
    int t8;
    int t9;
    int t10;
    int t12;
    int t13;
    int t14;
    int t16;

    *(unsigned int *)((a4 + 0x3C)) = a5;
    t5 = 0x0;
    if ((int)a5 > (int)0xFFFFFC41) {
        t5 = 0x7F;
        if ((int)a5 < 0) {
            t0 = (int)((int)(((a5 << 8) - a5) - 128) / (int)0xFFFFFC41);
            t5 = 0x7F;
            if ((int)(0x7F - (t0 << 1)) <= (int)0x7F) {
                t5 = (0x7F - (t0 << 1));
                if ((int)(0x7F - (t0 << 1)) < 0) {
                    t5 = 0x0;
                }
            }
        }
    }
    t8 = *(int *)((a4 + 0x18));
    if (t8 == 0) {
        t9 = *(int *)((a4 + 0x1C));
        t10 = *(int *)((t9 + 0x4));
        nlsndStreamSetHdVol(t10, 0x0, t5);
        t12 = *(int *)((a4 + 0x1C));
        t13 = *(int *)((t12 + 0x4));
        return nlsndStreamSetHdVol(t13, 0x1, t5);
    }
    t14 = *(short *)((a4 + 0x6));
    nlsndStreamChgVol(t14, 0x0, t5);
    t16 = *(short *)((a4 + 0x6));
    return nlsndStreamChgVol(t16, 0x1, t5);
}

int mwlSbSetFx(int a4, int a5, int a6)
{
    int t4;
    int t0;
    int t5;
    int t6;
    int t7;
    int t8;

    (((struct o48_uint *)(a4))->v) = a5;
    (((struct o4C_uint *)(a4))->v) = a6;
    t4 = 0x0;
    if ((int)a6 >= (int)0xFFFFFFD6) {
        t4 = 0xF;
        if ((int)a6 < 0) {
            t0 = (int)((int)a6 / (int)0x3);
            t4 = (t0 + 0xF);
        }
    }
    t5 = *(int *)((a4 + 0x18));
    if (t5 == 0) {
        t6 = *(int *)((a4 + 0x1C));
        t7 = *(int *)((t6 + 0x4));
        return nlsndStreamSetHdFx(t7, a5, t4);
    }
    t8 = *(short *)((a4 + 0x6));
    return nlsndStreamChgFx(t8, a5, t4);
}

int mwlSbSetPitch(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;

    t0 = a5;
    if ((int)a5 >= (int)0x3F) {
        t0 = 0x3F;
    }
    t1 = t0;
    if ((int)t0 <= (int)0xFFFFFFC0) {
        t1 = 0xFFFFFFC0;
    }
    (((struct o50_uint *)(a4))->v) = t1;
    t2 = a6;
    if ((int)a6 >= (int)0x63) {
        t2 = 0x63;
    }
    t3 = t2;
    if ((int)t2 <= (int)0xFFFFFF9D) {
        t3 = 0xFFFFFF9D;
    }
    (((struct o54_uint *)(a4))->v) = t3;
    t4 = (int)((int)(((t3 << 2) << 2) << 2) / (int)0x64);
    t5 = *(short *)((a4 + 0x6));
    nlsndStreamTranspose(t5, t1);
    t7 = *(short *)((a4 + 0x6));
    return nlsndStreamDetune(t7, t4);
}

int mwlSbSetGain(int a4, int a5)
{
    int t3;
    int t4;
    int t0;
    int t5;
    int t6;
    int t7;

    *(unsigned int *)((a4 + 0x5C)) = a5;
    t3 = 0x5C;
    t4 = 0x0;
    if ((int)a5 >= (int)0xFFFFFFD6) {
        t3 = 0x5C;
        t4 = 0xF;
        if ((int)a5 < 0) {
            t0 = (int)((int)a5 / (int)0x3);
            t3 = t0;
            t4 = (t0 + 0xF);
        }
    }
    t5 = *(int *)((a4 + 0x18));
    if (t5 == 0) {
        t6 = *(int *)((a4 + 0x1C));
        t7 = *(int *)((t6 + 0x4));
        return nlsndStreamSetHdGain(t7, t4);
    }
    return t3;
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

void ADX_DecodeInfoAiff(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13)
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
    int stk[9];

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 24)) = a6;
    *(unsigned int *)(((int)stk + 28)) = a7;
    if ((int)a5 < (int)0x1000) {
        t0 = *(int *)(((int)stk + 24));
        *(unsigned short *)((t0 + 0x0)) = 0x0;
        return;
    }
    t1 = *(int *)(((int)stk + 20));
    t2 = adxb_DecodeInfoAiffSub(t1, (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0xC), (((int)stk + 4) + 0xC));
    if (t2 != 0) {
        t3 = *(int *)(((int)stk + 20));
        t4 = *(int *)(((int)stk + 24));
        *(unsigned short *)((t4 + 0x0)) = (t2 - t3);
        if ((int)(short)(t2 - t3) <= 0) {
            return;
        }
        t5 = *(int *)(((int)stk + 4));
        *(unsigned int *)((a11 + 0x0)) = t5;
        t6 = *(int *)(((int)stk + 8));
        *(unsigned char *)((a10 + 0x0)) = t6;
        t7 = *(int *)(((int)stk + 12));
        *(unsigned char *)((a8 + 0x0)) = t7;
        t8 = *(int *)(((int)stk + 16));
        *(unsigned int *)((a12 + 0x0)) = t8;
        t9 = *(int *)(((int)stk + 28));
        *(unsigned char *)((t9 + 0x0)) = 0xFFFFFFFF;
        t10 = *(signed char *)((a10 + 0x0));
        t11 = *(signed char *)((a8 + 0x0));
        t12 = ((short)t10 * (short)t11);
        if ((int)((short)t10 * (short)t11) < 0) {
            t12 = (((short)t10 * (short)t11) + 0x7);
        }
        *(unsigned char *)((a9 + 0x0)) = (((t12 >> 1) >> 1) >> 1);
        *(unsigned int *)((a13 + 0x0)) = 0x1;
        return;
    }
}


void ADXPD_EntrySte(int a4, int a5, int a6, int a7, int a8)
{
    int t0;

    t0 = *(int *)((a4 + 0xC));
    if (t0 == 0) {
        *(unsigned int *)((a4 + 0x14)) = 0x2;
        *(unsigned int *)((a4 + 0x18)) = a5;
        *(unsigned int *)((a4 + 0x1C)) = a6;
        *(unsigned int *)((a4 + 0x20)) = a7;
        *(unsigned int *)((a4 + 0x24)) = a8;
        return;
    }
}
