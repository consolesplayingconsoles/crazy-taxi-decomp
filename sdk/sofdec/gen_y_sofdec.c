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


