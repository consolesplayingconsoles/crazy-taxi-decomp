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


