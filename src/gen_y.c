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


