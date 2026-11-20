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


