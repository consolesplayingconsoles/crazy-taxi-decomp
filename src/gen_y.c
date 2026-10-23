/* Straight-line functions with calls and guards (batch gen_y): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXB_CopyExtraBufMono(int, int, int, int);
int ADXB_CopyExtraBufSte(int, int, int, int);
int ADXB_EvokeExpandMono(int, int, int, int);
int ADXB_EvokeExpandSte(int, int, int, int);
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXF_Close(int);
int ADXPD_GetNumBlk(int, int);
int ADXRNA_GetTime(int, int, int);
int ADXSTM_GetCurOfst(int, int);
int ADXT_SetOutVol(int, int);
int CalcShadow4Normal(int, int);
int gdc_GetStreamSongRemainTime(int);
int gdc_GetVolGainMute(int);
int gdc_PlayStreamSongDisk(int);
int ReturnBreakPinNum(void);
int ReturnBreakPin(int);
int SetScreen(int, int);
int SetWindow(int);
int menuChangeValue(int, int, int);
int putMenuValue(int, int, int, int);
int PutRecords(int, int, int, int, int, int, float, float);
int CheckBoxFlag(int, int);
int Init_Remain_Time(int, int, int, int);
int Init_TotalDrum(void);
int Init_Shift(void);
int End_Pass_Default2_Sprite(void);
int Start_Pass_Ranking(void);
int rankingCalcDigitRoll(int, int, int, int);
int Put_TotalDrum_SetDigits(int, int);
int Put_TotalDrum(void);
int hudUpdateFareState(void);
int hudSplitFareDigits(int, int);
int hudDrawFare(void);
int Money_Array(int, int, int);
int Result_Drop_Lowest_Rank(void);
int Init_Result_Standard_Sprite(int, int, int);
int Init_Result_Parm(void);
int Result_Insert_Rank(void);
int Start_Bowling_Message(void);
int Reset_Bowling_Timer(void);
int Start_CrazyBox_Voice(int);
int nlPrintInitFontTexture(void);
int nlInitMatrixStack(int, int, int);
int nlMatrixMode(int);
int nlsndBlockMove(int, int, int);
int nlsndBlockMoveStatus(int);
int nlsndCheckPackLoadError(int, int);
int nlsndPackLoadInit(int, int, int, int);
int nlsndSeqRequest(int);
int nlsndStreamSetHdVol(int, int, int);
int nlsndStreamChgVol(int, int, int);
int nlsndStreamTranspose(int, int, int);
int nlsndStreamDetune(int, int);
int memcmp(int, int, int);
int vsprintf(int, int, int);
int kmiBGPlaneSetPCW(int, int, int);
int kmiBGPlaneCountWords(int);
int kmiBGPlanePutWord(int, int, int);
int kmiBGPlanePutColor(int, int, int);
int kmiFBallocSub(int, int, int);
int kmytex_ABSalloc(int, int, int, int, int, int);
int kmiMemCopy4(int, int, int);
int kmiPurgeCache(int);
int kmiModuleInitialize(void);
int kmtex_CheckTextureFormat(int, int, int, int);
int ADXSJD_GetSfreq(int);
int ADXSJD_GetOutBps(int);
int ADXSJD_GetTotalNumSmpl(int, int, int);
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
int extRand(int);
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
int kmiSetTAEnvironment(int, int, int, int, int, int);
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
int open_file_handle(int);
int pdVibIsReady(int, int, int, int);
int search_dir(int, int, int);
int search_exec_file(int, int);
int search_free_dir(int);
int setTechnicalBonus(int, int, int, int);
int set_event(int, int);
int set_vmstime(int, int);
int setjmp(int);
int fmMngSncmp(int, int, int);
int vmsfs_c_getstate(int, int);
int vmsfs_c_setfunc(int, int);
int vmsfs_c_setparam(int, int, int, int, int, int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int, int, int, int);


void SetCameraTargetVelocity(int a4)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)((a4 + 0x8));
    *(unsigned int *)0xC179910 = t0;
    t1 = *(int *)((a4 + 0x4));
    *(unsigned int *)0xC17990C = t1;
    t2 = *(int *)((a4 + 0x0));
    *(unsigned int *)0xC179908 = t2;
}


int gdc_StopStreamSongDisk(void)
{
    int t1;
    int t2;

    gdc_StopStreamSongAll();
    *(unsigned int *)0xC26A0C8 = 0x0;
    t1 = *(int *)0xC26A0CC;
    t2 = (int)((int)(t1 + 0x1) % (int)0x4);
    *(unsigned int *)0xC26A0CC = t2;
    return t2;
}


void GetLightVector(int a4)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)0xC26E1E0;
    *(unsigned int *)((a4 + 0x8)) = t0;
    t1 = *(int *)0xC26E1DC;
    *(unsigned int *)((a4 + 0x4)) = t1;
    t2 = *(int *)0xC26E1D8;
    *(unsigned int *)((a4 + 0x0)) = t2;
}








int courseCarType(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = extRand(a4);
    t1 = *(int *)(((((0x7 & t0) << 2) + (0xC0C3E24 + (((a4 << 2) << 2) << 1))) + 0x0));
    t2 = *(int *)(((((t1 << 2) << 1) + 0xC0A21F8) + 0x4));
    t3 = (int)((int)((int)t0 >> 4) % (int)t2);
    t4 = *(int *)(((((t1 << 2) << 1) + 0xC0A21F8) + 0x0));
    return (t3 + t4);
}





int pedStand(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;

    *(unsigned int *)((a4 + 0x50)) = 0x1;
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


int Init_RankDrum(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    *(float *)0xC2A80C0 = 0.0f;
    *(float *)0xC2A80C4 = 0.0f;
    *(float *)0xC2A80C8 = 0.199999988f;
    *(float *)0xC2A80CC = 1.0f;
    *(float *)0xC2A80D0 = (1.0f + 1.0f);
    *(float *)0xC2A80D4 = 0.0f;
    *(float *)0xC2A80D8 = 0.0f;
    *(float *)0xC2A80DC = 1.0f;
    *(float *)0xC2A80E0 = 1.0f;
    *(unsigned int *)0xC2A80E4 = 0x0;
    *(unsigned int *)0xC2A80F0 = 0xA;
    *(float *)0xC2A80E8 = 1.0f;
    *(unsigned int *)0xC2A80EC = 0x2;
    *(unsigned int *)0xC2A8F74 = 0x0;
    *(unsigned int *)0xC2A8F84 = 0x1;
    *(unsigned int *)0xC2A8F78 = 0x0;
    *(unsigned int *)0xC2A8F88 = 0x1;
    *(unsigned int *)0xC2A8F8C = 0x2;
    *(unsigned int *)0xC2A8F90 = 0x0;
    *(unsigned int *)0xC2A9170 = 0x0;
    *(float *)0xC2A9174 = 0.0f;
    t0 = *(int *)0xC2A9168;
    if (t0 == 100) {
        *(unsigned int *)0xC2A8F80 = 0x0;
        *(unsigned int *)0xC2A8F7C = 0x0;
        t3 = t0;
    } else {
        t1 = (int)((int)t0 / (int)0xA);
        t2 = (int)((int)t0 % (int)0xA);
        *(unsigned int *)0xC2A8F80 = (0x9 - t1);
        *(unsigned int *)0xC2A8F7C = (0x9 - t2);
        t3 = t2;
    }
    return t3;
}

int Start_Default_Sprite(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t2;

    *(unsigned int *)0xC2A8C54 = a4;
    *(unsigned int *)0xC2A8C58 = a5;
    *(unsigned int *)0xC2A7600 = a6;
    *(unsigned int *)0xC2A8C5C = a7;
    *(unsigned int *)0xC2A8C60 = a8;
    t0 = *(int *)0xC2A75E0;
    *(unsigned int *)0xC2A75E0 = (t0 | 0x20);
    Init_Remain_Time(0xC2A75E0, a5, a6, a7);
    t2 = *(int *)0xC1EE20C;
    if (t2 != 2) {
        Init_TotalDrum();
    }
    return Init_Shift();
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
    int stk[2];

    if (f4 == 0.0f) {
        return 0.0f;
    }
    *(float *)(((int)stk + 4)) = f4;
    t0 = *(int *)((((int)stk + 4) + 0x0));
    if ((int)(a4 + (unsigned char)((int)t0 >> 23)) < (int)0x1) {
        t1 = *(int *)((((int)stk + 4) + 0x0));
        t2 = *(int *)((((int)stk + 4) + 0x0));
        *(unsigned int *)((((int)stk + 4) + 0x0)) = ((t2 & 0x80000000) | (((int)(-(0x1 - (a4 + (unsigned char)((int)t0 >> 23)))) >= 0) ? (((t1 & 0x7FFFFF) | 0x800000) << ((-(0x1 - (a4 + (unsigned char)((int)t0 >> 23)))) & 31)) : ((-(int)(-(0x1 - (a4 + (unsigned char)((int)t0 >> 23)))) & 31) ? ((int)((t1 & 0x7FFFFF) | 0x800000) >> (-(int)(-(0x1 - (a4 + (unsigned char)((int)t0 >> 23)))) & 31)) : ((int)((t1 & 0x7FFFFF) | 0x800000) >> 31))));
    } else {
        if ((int)(a4 + (unsigned char)((int)t0 >> 23)) > (int)0xFE) {
            t3 = *(int *)((((int)stk + 4) + 0x0));
            *(unsigned int *)((((int)stk + 4) + 0x0)) = ((t3 & 0x80000000) | 0x7F800000);
        } else {
            t4 = *(int *)((((int)stk + 4) + 0x0));
            *(unsigned int *)((((int)stk + 4) + 0x0)) = (t4 & 0x807FFFFF);
            t5 = *(int *)((((int)stk + 4) + 0x0));
            *(unsigned int *)((((int)stk + 4) + 0x0)) = (t5 | ((a4 + (unsigned char)((int)t0 >> 23)) << 23));
        }
    }
    u15 = *(float *)(((int)stk + 4));
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
    int stk[3];

    *(unsigned int *)0xC2AF0C0 = 0x0;
    *(unsigned int *)0xC2AF0C4 = 0x0;
    *(unsigned int *)0xC2AF0D0 = 0x0;
    *(unsigned int *)0xC2AF108 = 0xFFFFFFFF;
    *(unsigned short *)0xC2AF104 = 0x8;
    *(unsigned int *)0xC2AF0C8 = 0x8;
    *(unsigned int *)0xC2AF0CC = 0x8;
    *(unsigned int *)0xC2AF0BC = 0x0;
    *(float *)0xC2AF10C = 0.0f;
    *(float *)0xC2AF110 = 1.0f;
    *(float *)0xC2AF114 = 0.0078125f;
    t0 = 0x0;
    do {
        u1 = *(float *)0xC2AF114;
        t2 = (t0 << 1);
        u4 = (float)t0;
        t0 = (t0 + 0x1);
        *(float *)(((int)stk + 4)) = (u4 * u1);
        t6 = *(short *)((((int)stk + 4) + 0x2));
        *(unsigned short *)(((t2 + 0xC2AF158) + 0x0)) = t6;
    } while ((int)t0 < (int)0x101);
    kmCreateTextureSurface(0xC2AF130, 0x8, 0x400, 0x902);
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
    *(unsigned char *)0xC2B31D8 = 0x1;
    t3 = *(int *)0xC2B31F0;
    *(unsigned int *)0xC2B31E4 = t3;
    t4 = *(int *)0xC2B31EC;
    *(unsigned int *)0xC2B31E0 = t4;
    t5 = *(int *)0xC2B31E8;
    *(unsigned int *)0xC2B31DC = t5;
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
        *(unsigned int *)(((a4 + 0x18) + 0x54)) = a6;
        t0 = *(signed char *)((((a4 + 0x18) + 0x50) + 0x0));
        *(unsigned char *)((((a4 + 0x18) + 0x50) + 0x0)) = (t0 | 0x10);
        t1 = *(signed char *)((((a4 + 0x18) + 0x50) + 0x0));
        t5 = (t1 & 0xF7);
    } else {
        t2 = (int)((int)a6 / (int)0x3);
        *(unsigned int *)(((0x54 + (a4 + 0x18)) + 0x0)) = t2;
        t3 = *(signed char *)((((a4 + 0x18) + 0x50) + 0x0));
        *(unsigned char *)((((a4 + 0x18) + 0x50) + 0x0)) = (t3 & 0xEF);
        t4 = *(signed char *)((((a4 + 0x18) + 0x50) + 0x0));
        t5 = (t4 | 0x8);
    }
    *(unsigned char *)((((a4 + 0x18) + 0x50) + 0x0)) = t5;
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
        t1 = *(int *)0xC2B76C0;
        t2 = (int)((int)(t1 + 0x1F) / (int)0x20);
        if ((int)t0 >= (int)t2) {
            return 0xFFFFFFFF;
        }
        t3 = *(int *)0xC2B76C4;
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
    t8 = *(int *)0xC2B76C4;
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
    int stk[11];

    *(unsigned int *)(((int)stk + 8)) = a5;
    t0 = nlsndCheckPackLoadError(a4, a5);
    t23 = t0;
    if (t0 == 0) {
        t1 = *(int *)((a4 + 0x8));
        t2 = *(int *)((a4 + 0x4));
        t3 = *(int *)(((int)stk + 8));
        t4 = nlsndPackLoadInit(t3, t2, t1, ((int)stk + 4));
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
                t8 = *(int *)0xA08000B4;
                if (t8 == 0) {
                    t7 = (t7 + 0x1);
                    if ((int)t7 >= (int)0x400000) break;
                    continue;
                }
                t9 = *(int *)(((int)stk + 4));
                if (t9 != 0) {
                    t10 = *(int *)(((int)stk + 4));
                    t7 = t4;
                    t11 = nlsndBlockMove(t7, (t4 + t1), t10);
                    t7 = t11;
                    if (t11 != 0) {
                        return t7;
                    }
                    t5 = 0x0;
                    for (;;) {
                        t12 = nlsndBlockMoveStatus(t7);
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
                            *(unsigned int *)0xA08000B0 = 0x1;
                            t7 = 0x0;
                            if (0x1 != 0) {
                                for (;;) {
                                    t16 = *(int *)0xA08000B4;
                                    if (t16 != 0) {
                                        t7 = (t7 + 0x1);
                                        if ((int)t7 >= (int)0x400000) break;
                                        continue;
                                    }
                                    *(unsigned int *)0xA08000B0 = 0x0;
                                    return 0x0;
                                }
                                return 0xFFFFFF00;
                            }
                            return 0xFFFFFF00;
                        }
                        *(unsigned int *)0xA08000B0 = 0x1;
                        t7 = 0x0;
                        if (0x1 != 0) {
                            for (;;) {
                                t17 = *(int *)0xA08000B4;
                                if (t17 != 0) {
                                    t7 = (t7 + 0x1);
                                    if ((int)t7 >= (int)0x400000) break;
                                    continue;
                                }
                                *(unsigned int *)0xA08000B0 = 0x0;
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
                    *(unsigned int *)0xA08000B0 = 0x1;
                    t7 = 0x0;
                    if (0x1 != 0) {
                        for (;;) {
                            t21 = *(int *)0xA08000B4;
                            if (t21 != 0) {
                                t7 = (t7 + 0x1);
                                if ((int)t7 >= (int)0x400000) break;
                                continue;
                            }
                            *(unsigned int *)0xA08000B0 = 0x0;
                            return 0x0;
                        }
                        return 0xFFFFFF00;
                    }
                    return 0xFFFFFF00;
                }
                *(unsigned int *)0xA08000B0 = 0x1;
                t7 = 0x0;
                if (0x1 != 0) {
                    for (;;) {
                        t22 = *(int *)0xA08000B4;
                        if (t22 != 0) {
                            t7 = (t7 + 0x1);
                            if ((int)t7 >= (int)0x400000) break;
                            continue;
                        }
                        *(unsigned int *)0xA08000B0 = 0x0;
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

int kmiCopyDummyGlobalData(int a4)
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
    int t20;
    int t21;
    int t23;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t37;
    int t43;
    int t44;
    int t46;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t60;
    int t66;
    int t67;
    int t69;
    int t77;
    int t78;
    int t79;
    int t80;
    int t81;
    int t83;
    int t89;
    int t90;
    int t92;
    int t100;
    int t121;
    int t101;
    int t102;
    int t110;
    int t107;
    int t103;
    int t104;
    int t105;
    int t106;
    int t116;
    int t112;
    int t113;
    int t114;
    int t115;
    int t119;
    int stk[18];

    t0 = *(int *)0xC174CB4;
    t1 = *(int *)0xC174CB0;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t1;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = t0;
    t2 = *(int *)0xC174CBC;
    t3 = *(int *)0xC174CB8;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = t3;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0xC)) = t2;
    t4 = *(int *)0xC174CC0;
    t5 = *(int *)0xC174CC4;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x10)) = t4;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x14)) = t5;
    t6 = *(int *)0xC174CCC;
    t7 = *(int *)0xC174CC8;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x18)) = t7;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x1C)) = t6;
    t8 = *(int *)0xC2EAAE8;
    if ((t8 & 1) != 0) {
        t9 = *(int *)0xC2EA9C4;
        if (t9 != 0) {
            t10 = *(int *)0xC2EAAA0;
            if (t10 != 32) {
                *(unsigned int *)(((int)stk + 4)) = 0x0;
                if ((unsigned int)0x0 < (unsigned int)a4) {
                    t11 = 0xC2B8CCC;
                    do {
                        t12 = *(int *)((t11 + 0x0));
                        kmiMemCopy4(t12, (((int)stk + 4) + 0x4), 0x20);
                        t14 = *(int *)(((int)stk + 4));
                        *(unsigned int *)(((int)stk + 4)) = (t14 + 0x1);
                        t11 = (t11 + 0x14);
                    } while ((unsigned int)(t14 + 0x1) < (unsigned int)a4);
                }
                *(unsigned int *)0xC2B8D28 = 0x8;
            }
        } else {
            *(unsigned int *)(((int)stk + 4)) = 0x0;
            if ((unsigned int)0x0 < (unsigned int)a4) {
                t20 = 0xC2B8CCC;
                do {
                    t21 = *(int *)((t20 + 0x0));
                    kmiMemCopy4(t21, (((int)stk + 4) + 0x4), 0x20);
                    t23 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t23 + 0x1);
                    t20 = (t20 + 0x14);
                } while ((unsigned int)(t23 + 0x1) < (unsigned int)a4);
            }
            *(unsigned int *)0xC2B8D28 = 0x8;
        }
    }
    t31 = *(int *)0xC2EAAE8;
    if ((t31 & 2) != 0) {
        *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = 0x81000000;
        t32 = *(int *)0xC2EA9C4;
        if (t32 != 0) {
            t33 = *(int *)0xC2EAAA0;
            if (t33 != 33) {
                *(unsigned int *)(((int)stk + 4)) = 0x0;
                if ((unsigned int)0x0 < (unsigned int)a4) {
                    t34 = 0xC2B8CCC;
                    do {
                        t35 = *(int *)((t34 + 0x4));
                        kmiMemCopy4(t35, (((int)stk + 4) + 0x4), 0x20);
                        t37 = *(int *)(((int)stk + 4));
                        *(unsigned int *)(((int)stk + 4)) = (t37 + 0x1);
                        t34 = (t34 + 0x14);
                    } while ((unsigned int)(t37 + 0x1) < (unsigned int)a4);
                }
                *(unsigned int *)0xC2B8D2C = 0x8;
            }
        } else {
            *(unsigned int *)(((int)stk + 4)) = 0x0;
            if ((unsigned int)0x0 < (unsigned int)a4) {
                t43 = 0xC2B8CCC;
                do {
                    t44 = *(int *)((t43 + 0x4));
                    kmiMemCopy4(t44, (((int)stk + 4) + 0x4), 0x20);
                    t46 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t46 + 0x1);
                    t43 = (t43 + 0x14);
                } while ((unsigned int)(t46 + 0x1) < (unsigned int)a4);
            }
            *(unsigned int *)0xC2B8D2C = 0x8;
        }
    }
    t54 = *(int *)0xC2EAAE8;
    if ((t54 & 4) != 0) {
        *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = 0x82000000;
        t55 = *(int *)0xC2EA9C4;
        if (t55 != 0) {
            t56 = *(int *)0xC2EAAA0;
            if (t56 != 34) {
                *(unsigned int *)(((int)stk + 4)) = 0x0;
                if ((unsigned int)0x0 < (unsigned int)a4) {
                    t57 = 0xC2B8CCC;
                    do {
                        t58 = *(int *)((t57 + 0x8));
                        kmiMemCopy4(t58, (((int)stk + 4) + 0x4), 0x20);
                        t60 = *(int *)(((int)stk + 4));
                        *(unsigned int *)(((int)stk + 4)) = (t60 + 0x1);
                        t57 = (t57 + 0x14);
                    } while ((unsigned int)(t60 + 0x1) < (unsigned int)a4);
                }
                *(unsigned int *)0xC2B8D30 = 0x8;
            }
        } else {
            *(unsigned int *)(((int)stk + 4)) = 0x0;
            if ((unsigned int)0x0 < (unsigned int)a4) {
                t66 = 0xC2B8CCC;
                do {
                    t67 = *(int *)((t66 + 0x8));
                    kmiMemCopy4(t67, (((int)stk + 4) + 0x4), 0x20);
                    t69 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t69 + 0x1);
                    t66 = (t66 + 0x14);
                } while ((unsigned int)(t69 + 0x1) < (unsigned int)a4);
            }
            *(unsigned int *)0xC2B8D30 = 0x8;
        }
    }
    t77 = *(int *)0xC2EAAE8;
    if ((t77 & 0x8) != 0) {
        *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = 0x83000000;
        t78 = *(int *)0xC2EA9C4;
        if (t78 != 0) {
            t79 = *(int *)0xC2EAAA0;
            if (t79 != 35) {
                *(unsigned int *)(((int)stk + 4)) = 0x0;
                if ((unsigned int)0x0 < (unsigned int)a4) {
                    t80 = 0xC2B8CCC;
                    do {
                        t81 = *(int *)((t80 + 0xC));
                        kmiMemCopy4(t81, (((int)stk + 4) + 0x4), 0x20);
                        t83 = *(int *)(((int)stk + 4));
                        *(unsigned int *)(((int)stk + 4)) = (t83 + 0x1);
                        t80 = (t80 + 0x14);
                    } while ((unsigned int)(t83 + 0x1) < (unsigned int)a4);
                }
                *(unsigned int *)0xC2B8D34 = 0x8;
            }
        } else {
            *(unsigned int *)(((int)stk + 4)) = 0x0;
            if ((unsigned int)0x0 < (unsigned int)a4) {
                t89 = 0xC2B8CCC;
                do {
                    t90 = *(int *)((t89 + 0xC));
                    kmiMemCopy4(t90, (((int)stk + 4) + 0x4), 0x20);
                    t92 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t92 + 0x1);
                    t89 = (t89 + 0x14);
                } while ((unsigned int)(t92 + 0x1) < (unsigned int)a4);
            }
            *(unsigned int *)0xC2B8D34 = 0x8;
        }
    }
    t100 = *(int *)0xC2EAAE8;
    t121 = t100;
    if ((t100 & 16) != 0) {
        *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = 0x84000000;
        t101 = *(int *)0xC2EA9C4;
        if (t101 != 0) {
            t102 = *(int *)0xC2EAAA0;
            t110 = t102;
            if (t102 != 36) {
                *(unsigned int *)(((int)stk + 4)) = 0x0;
                t107 = t102;
                if ((unsigned int)0x0 < (unsigned int)a4) {
                    t103 = 0xC2B8CCC;
                    do {
                        t104 = *(int *)((t103 + 0x10));
                        t105 = kmiMemCopy4(t104, (((int)stk + 4) + 0x4), 0x20);
                        t106 = *(int *)(((int)stk + 4));
                        *(unsigned int *)(((int)stk + 4)) = (t106 + 0x1);
                        t103 = (t103 + 0x14);
                    } while ((unsigned int)(t106 + 0x1) < (unsigned int)a4);
                    t107 = t105;
                }
                *(unsigned int *)0xC2B8D38 = 0x8;
                t110 = t107;
            }
            t119 = t110;
        } else {
            *(unsigned int *)(((int)stk + 4)) = 0x0;
            t116 = 0xC2EA9C4;
            if ((unsigned int)0x0 < (unsigned int)a4) {
                t112 = 0xC2B8CCC;
                do {
                    t113 = *(int *)((t112 + 0x10));
                    t114 = kmiMemCopy4(t113, (((int)stk + 4) + 0x4), 0x20);
                    t115 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t115 + 0x1);
                    t112 = (t112 + 0x14);
                } while ((unsigned int)(t115 + 0x1) < (unsigned int)a4);
                t116 = t114;
            }
            *(unsigned int *)0xC2B8D38 = 0x8;
            t119 = t116;
        }
        t121 = t119;
    }
    return t121;
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
    int t8;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int stk[8];

    t0 = *(int *)0xC174CD0;
    t1 = *(int *)0xC174CD4;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = t0;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x4)) = t1;
    t2 = *(int *)0xC174CD8;
    t3 = *(int *)0xC174CDC;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x8)) = t2;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0xC)) = t3;
    *(unsigned int *)(((int)stk + 8)) = (((unsigned int)((unsigned int)a4 >> 16) >> 1) & 0x3);
    *(unsigned int *)(((int)stk + 4)) = (((unsigned int)a4 >> 21) & 0x3);
    *(unsigned int *)(((int)stk + 12)) = (((unsigned int)a4 >> 23) & 0x3);
    t4 = *(int *)0xC2EAAE0;
    t5 = *(int *)0xC2EAADC;
    t6 = *(int *)0xC2EA684;
    t11 = (t5 * t4);
    if ((t6 & 32) != 0) {
        t7 = *(int *)0xC2EAAE4;
        t8 = ((t5 * t4) + (t5 * t4));
        if (t7 != 0) {
            t8 = ((t5 * t4) << 2);
        }
        t11 = t8;
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

    t0 = vmsfs_c_getstate(a4, a5);
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
    int t2;
    int t3;
    int t4;
    int t5;
    int t10;
    int t11;
    int t12;
    int t13;
    int t18;
    int t19;
    int t20;
    int stk[16];

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    t0 = *(int *)(((int)stk + 24));
    t1 = pdVibIsReady(t0, a5, a6, a7);
    t21 = 0xFFFFFFFE;
    if (t1 != 0) {
        *(unsigned int *)(((((int)stk + 16) + 0xC) + 0x10)) = 0x0;
        *(unsigned int *)(((((int)stk + 16) + 0xC) + 0xC)) = 0x0;
        *(unsigned int *)(((((int)stk + 16) + 0xC) + 0x8)) = 0x0;
        *(unsigned int *)(((((int)stk + 16) + 0xC) + 0x4)) = 0x0;
        *(unsigned int *)(((((int)stk + 16) + 0xC) + 0x0)) = 0x0;
        t8 = 0x0;
        if ((unsigned int)0x0 < (unsigned int)a7) {
            t2 = 0x0;
            t3 = 0x0;
            do {
                t4 = *(int *)(((int)stk + 20));
                t3 = (t3 + 0x1);
                *(unsigned int *)(((int)stk + 20)) = (t4 + 0x1);
                t5 = *(signed char *)((((t4 + 0x1) - 1) + 0x0));
                t2 = (t2 | (((int)(unsigned char)t5 >= 0) ? (0x1 << ((unsigned char)t5 & 31)) : ((-(int)(unsigned char)t5 & 31) ? ((int)0x1 >> (-(int)(unsigned char)t5 & 31)) : ((int)0x1 >> 31))));
            } while ((unsigned int)t3 < (unsigned int)a7);
            t8 = t2;
        }
        *(unsigned char *)(((((int)stk + 16) + 0xC) + 0x0)) = ((unsigned int)(unsigned short)t8 >> 8);
        *(unsigned char *)((((((int)stk + 16) + 0xC) + 0x1) + 0x0)) = t8;
        if ((unsigned int)0x0 < (unsigned int)a7) {
            t10 = 0x0;
            t11 = (((((int)stk + 16) + 0xC) + 0x1) + 0x1);
            do {
                t12 = *(int *)(((int)stk + 16));
                t10 = (t10 + 0x1);
                *(unsigned int *)(((int)stk + 16)) = (t12 + 0x1);
                t13 = *(signed char *)((((t12 + 0x1) - 1) + 0x0));
                *(unsigned char *)((t11 + 0x0)) = t13;
                t11 = (t11 + 0x1);
            } while ((unsigned int)t10 < (unsigned int)a7);
        }
        *(unsigned int *)(((int)stk + 16)) = ((unsigned int)(a7 + 0x5) >> 2);
        t18 = *(int *)(((int)stk + 24));
        t19 = kdSetBlockWrite(t18, 0x100, 0x0, 0x0, 0x0, (((int)stk + 16) + 0xC), ((unsigned int)(a7 + 0x5) >> 2));
        t20 = 0x0;
        if ((int)t19 < 0) {
            t20 = 0xFFFFFFFF;
        }
        t21 = t20;
    }
    return t21;
}

int pdVibSetUnitInfo(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t0;
    int t30;
    int t1;
    int t25;
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
    int t15;
    int t18;
    int t19;
    int t20;
    int t16;
    int t12;

    t0 = *(int *)((a7 + 0x0));
    t30 = 0xFFFFFFFE;
    if ((t0 & 0x100) != 0) {
        t1 = *(signed char *)((a6 + 0x4));
        t25 = 0xFFFFFFFE;
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
                        t12 = 0xFF;
                    } else {
                        *(unsigned char *)((a8 + 0x6)) = 0x0;
                        t12 = 0x0;
                    }
                    t16 = t12;
                } else {
                    t14 = *(signed char *)((((t2 + 0x8) + 0x2) + 0x0));
                    *(unsigned char *)((a8 + 0x6)) = t14;
                    t15 = *(signed char *)((((t2 + 0x8) + 0x2) + 0x0));
                    t16 = t15;
                }
                t20 = t16;
            } else {
                t18 = *(signed char *)((((t2 + 0x8) + 0x2) + 0x0));
                *(unsigned char *)((a8 + 0x6)) = t18;
                t19 = *(signed char *)(((t2 + 0x8) + 0x3));
                t20 = t19;
            }
            *(unsigned char *)((a8 + 0x7)) = t20;
            t25 = 0x0;
        }
        t30 = t25;
    }
    return t30;
}

void ADXT_GetTime(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t15;
    int t18;
    int t19;

    t0 = *(signed char *)((a4 + 0x1));
    if (t0 != 3) {
        if (t0 == 4) {
            t1 = *(int *)((a4 + 0xC));
            ADXRNA_GetTime(t1, a5, a6);
        } else {
            t3 = *(signed char *)((a4 + 0x1));
            if (t3 == 5) {
                t4 = *(int *)((a4 + 0x4));
                t5 = ADXSJD_GetTotalNumSmpl(t4, a5, a6);
                *(unsigned int *)((a5 + 0x0)) = t5;
                t6 = *(int *)((a4 + 0x4));
                t7 = ADXSJD_GetSfreq(t6);
                *(unsigned int *)((a6 + 0x0)) = t7;
                t8 = *(int *)((a4 + 0x4));
                t9 = ADXSJD_GetOutBps(t8);
                t10 = (int)((int)0x10 / (int)t9);
                t11 = *(int *)((a5 + 0x0));
                *(unsigned int *)((a5 + 0x0)) = (t11 * t10);
            } else {
                *(unsigned int *)((a5 + 0x0)) = 0x0;
                *(unsigned int *)((a6 + 0x0)) = 0x1;
            }
        }
    } else {
        t15 = *(int *)((a4 + 0xC));
        ADXRNA_GetTime(t15, a5, a6);
    }
    t18 = *(int *)((a5 + 0x0));
    t19 = *(int *)((a4 + 0x88));
    *(unsigned int *)((a5 + 0x0)) = (t18 + t19);
}

int ADXF_Open(int a4, int a5)
{
    int t2;
    int t8;
    int t3;
    int t6;

    adxf_SetCmdHstry(0x1, 0x0, a4, a5, 0xFFFFFFFF);
    ADXCRS_Lock();
    t2 = adxf_CreateAdxFs();
    t8 = t2;
    if (t2 != 0) {
        t3 = adxf_SetFileInfo(t2, a4);
        t6 = t2;
        if ((int)t3 < 0) {
            ADXF_Close(t2);
            t6 = 0x0;
        }
        t8 = t6;
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
    int t6;

    adxf_SetCmdHstry(0x2, 0x0, a4, a5, 0xFFFFFFFF);
    ADXCRS_Lock();
    t2 = adxf_CreateAdxFs();
    t8 = t2;
    if (t2 != 0) {
        t3 = adxf_SetAfsFileInfo(t2, a4, a5);
        t6 = t2;
        if ((int)t3 < 0) {
            ADXF_Close(t2);
            t6 = 0x0;
        }
        t8 = t6;
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
    int t10;
    int t7;
    int t8;
    int t9;
    int t11;
    int t12;
    int t13;
    int t14;
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
            t10 = t6;
            if (t6 == 4) {
                t7 = *(int *)((a4 + 0x18));
                t8 = *(int *)((a4 + 0x24));
                *(unsigned int *)((a4 + 0x18)) = (t7 + t8);
                t9 = adxf_CloseSjStm(a4);
                t10 = t9;
            }
            t14 = t10;
        } else {
            t11 = *(int *)((a4 + 0x18));
            t12 = *(int *)((a4 + 0x24));
            *(unsigned int *)((a4 + 0x18)) = (t11 + t12);
            t13 = adxf_CloseSjStm(a4);
            t14 = t13;
        }
        t15 = t14;
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

    t0 = *(int *)((a4 + 0x0));
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t0;
    t1 = *(int *)((a4 + 0x4));
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t1;
    t2 = *(int *)((a4 + 0x8));
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x0)) = t2;
    t3 = *(int *)0xC2EA820;
    t4 = *(int *)0xC2EA824;
    t5 = *(int *)0xC2EA828;
    *(unsigned int *)0xC2EA724 = t3;
    *(unsigned int *)0xC2EA728 = t4;
    *(unsigned int *)0xC2EA72C = t5;
    t6 = *(int *)((((int)stk + 4) + 0x0));
    t7 = *(int *)((t6 + 0x4));
    *(unsigned int *)0xC2EA730 = t7;
    t8 = *(int *)((((int)stk + 4) + 0x0));
    t9 = *(int *)((t8 + 0x8));
    *(unsigned int *)0xC2EA734 = t9;
    t10 = *(int *)((((int)stk + 4) + 0x0));
    t11 = *(int *)((t10 + 0xC));
    *(unsigned int *)0xC2EA738 = t11;
    t12 = *(int *)((((int)stk + 4) + 0x0));
    t13 = *(int *)((t12 + 0x10));
    t14 = kmiBGPlanePutColor(t3, 0x6, t13);
    t15 = *(int *)((((int)stk + 4) + 0x0));
    t16 = *(int *)((t15 + 0x18));
    *(unsigned int *)(((t14 << 2) + 0xC2EA724)) = t16;
    t17 = *(int *)((((int)stk + 4) + 0x0));
    t18 = *(int *)((t17 + 0x1C));
    t19 = kmiBGPlanePutWord(t3, (t14 + 0x1), t18);
    t20 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t21 = *(int *)((t20 + 0x4));
    *(unsigned int *)(((t19 << 2) + 0xC2EA724)) = t21;
    t22 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t23 = *(int *)((t22 + 0x8));
    *(unsigned int *)((((t19 + 0x1) << 2) + 0xC2EA724)) = t23;
    t24 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t25 = *(int *)((t24 + 0xC));
    *(unsigned int *)(((((t19 + 0x1) + 0x1) << 2) + 0xC2EA724)) = t25;
    t26 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t27 = *(int *)((t26 + 0x10));
    t28 = kmiBGPlanePutColor(t3, (((t19 + 0x1) + 0x1) + 0x1), t27);
    t29 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t30 = *(int *)((t29 + 0x18));
    *(unsigned int *)(((t28 << 2) + 0xC2EA724)) = t30;
    t31 = *(int *)((((int)stk + 4) + 0x0));
    t32 = *(int *)((t31 + 0x1C));
    t33 = kmiBGPlanePutWord(t3, (t28 + 0x1), t32);
    t34 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t35 = *(int *)((t34 + 0x4));
    *(unsigned int *)(((t33 << 2) + 0xC2EA724)) = t35;
    t36 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t37 = *(int *)((t36 + 0x8));
    *(unsigned int *)((((t33 + 0x1) << 2) + 0xC2EA724)) = t37;
    t38 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t39 = *(int *)((t38 + 0xC));
    *(unsigned int *)(((((t33 + 0x1) + 0x1) << 2) + 0xC2EA724)) = t39;
    t40 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t41 = *(int *)((t40 + 0x10));
    t42 = kmiBGPlanePutColor(t3, (((t33 + 0x1) + 0x1) + 0x1), t41);
    t43 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t44 = *(int *)((t43 + 0x18));
    *(unsigned int *)(((t42 << 2) + 0xC2EA724)) = t44;
    t45 = *(int *)((((int)stk + 4) + 0x0));
    t46 = *(int *)((t45 + 0x1C));
    t47 = kmiBGPlanePutWord(t3, (t42 + 0x1), t46);
    *(unsigned int *)0xC2EA81C = (t47 << 2);
    t48 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t48, 0x0, 0x0);
    t50 = *(int *)((((int)stk + 4) + 0x0));
    t51 = *(int *)((t50 + 0xC));
    *(unsigned int *)0xC2EA830 = t51;
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

    t0 = *(int *)((a4 + 0x0));
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t0;
    t1 = *(int *)((a4 + 0x4));
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t1;
    t2 = *(int *)((a4 + 0x8));
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x0)) = t2;
    t3 = *(int *)0xC2EA820;
    t4 = *(int *)0xC2EA824;
    t5 = *(int *)0xC2EA828;
    *(unsigned int *)0xC2EA724 = t3;
    *(unsigned int *)0xC2EA728 = t4;
    *(unsigned int *)0xC2EA72C = t5;
    t6 = *(int *)((((int)stk + 4) + 0x0));
    t7 = *(int *)((t6 + 0x4));
    *(unsigned int *)0xC2EA730 = t7;
    t8 = *(int *)((((int)stk + 4) + 0x0));
    t9 = *(int *)((t8 + 0x8));
    *(unsigned int *)0xC2EA734 = t9;
    t10 = *(int *)((((int)stk + 4) + 0x0));
    t11 = *(int *)((t10 + 0xC));
    *(unsigned int *)0xC2EA738 = t11;
    t12 = *(int *)((((int)stk + 4) + 0x0));
    t13 = *(int *)((t12 + 0x10));
    t14 = kmiBGPlanePutColor(t3, 0x6, t13);
    t15 = *(int *)((((int)stk + 4) + 0x0));
    u16 = *(float *)(((0x18 + t15) + 0x0));
    *(unsigned int *)(((t14 << 2) + 0xC2EA724)) = ((((((int)(u16 * 255.0f) << 16) << 8) | ((int)(u16 * 255.0f) << 16)) | ((int)(u16 * 255.0f) << 8)) | (int)(u16 * 255.0f));
    t17 = *(int *)((((int)stk + 4) + 0x0));
    u18 = *(float *)((t17 + 0x1C));
    t19 = kmiBGPlanePutWord(t3, (t14 + 0x1), ((((((int)(u18 * 255.0f) << 16) << 8) | ((int)(u18 * 255.0f) << 16)) | ((int)(u18 * 255.0f) << 8)) | (int)(u18 * 255.0f)));
    t20 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t21 = *(int *)((t20 + 0x4));
    *(unsigned int *)(((t19 << 2) + 0xC2EA724)) = t21;
    t22 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t23 = *(int *)((t22 + 0x8));
    *(unsigned int *)((((t19 + 0x1) << 2) + 0xC2EA724)) = t23;
    t24 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t25 = *(int *)((t24 + 0xC));
    *(unsigned int *)(((((t19 + 0x1) + 0x1) << 2) + 0xC2EA724)) = t25;
    t26 = *(int *)((((int)stk + 4) + 0x0));
    t27 = *(int *)((t26 + 0x10));
    t28 = kmiBGPlanePutColor(t3, (((t19 + 0x1) + 0x1) + 0x1), t27);
    t29 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    u30 = *(float *)(((0x18 + t29) + 0x0));
    *(unsigned int *)(((t28 << 2) + 0xC2EA724)) = ((((((int)(u30 * 255.0f) << 16) << 8) | ((int)(u30 * 255.0f) << 16)) | ((int)(u30 * 255.0f) << 8)) | (int)(u30 * 255.0f));
    t31 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    u32 = *(float *)((t31 + 0x1C));
    t33 = kmiBGPlanePutWord(t3, (t28 + 0x1), ((((((int)(u32 * 255.0f) << 16) << 8) | ((int)(u32 * 255.0f) << 16)) | ((int)(u32 * 255.0f) << 8)) | (int)(u32 * 255.0f)));
    t34 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t35 = *(int *)((t34 + 0x4));
    *(unsigned int *)(((t33 << 2) + 0xC2EA724)) = t35;
    t36 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t37 = *(int *)((t36 + 0x8));
    *(unsigned int *)((((t33 + 0x1) << 2) + 0xC2EA724)) = t37;
    t38 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t39 = *(int *)((t38 + 0xC));
    *(unsigned int *)(((((t33 + 0x1) + 0x1) << 2) + 0xC2EA724)) = t39;
    t40 = *(int *)((((int)stk + 4) + 0x0));
    t41 = *(int *)((t40 + 0x10));
    t42 = kmiBGPlanePutColor(t3, (((t33 + 0x1) + 0x1) + 0x1), t41);
    t43 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    u44 = *(float *)(((0x18 + t43) + 0x0));
    *(unsigned int *)(((t42 << 2) + 0xC2EA724)) = ((((((int)(u44 * 255.0f) << 16) << 8) | ((int)(u44 * 255.0f) << 16)) | ((int)(u44 * 255.0f) << 8)) | (int)(u44 * 255.0f));
    t45 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    u46 = *(float *)((t45 + 0x1C));
    t47 = kmiBGPlanePutWord(t3, (t42 + 0x1), ((((((int)(u46 * 255.0f) << 16) << 8) | ((int)(u46 * 255.0f) << 16)) | ((int)(u46 * 255.0f) << 8)) | (int)(u46 * 255.0f)));
    *(unsigned int *)0xC2EA81C = (t47 << 2);
    t48 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t48, 0x0, 0x0);
    t50 = *(int *)((((int)stk + 4) + 0x0));
    t51 = *(int *)((t50 + 0xC));
    *(unsigned int *)0xC2EA830 = t51;
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

    t0 = *(int *)((a4 + 0x0));
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t0;
    t1 = *(int *)((a4 + 0x4));
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t1;
    t2 = *(int *)((a4 + 0x8));
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x0)) = t2;
    t3 = *(int *)0xC2EA820;
    t4 = *(int *)0xC2EA824;
    t5 = *(int *)0xC2EA828;
    *(unsigned int *)0xC2EA724 = t3;
    *(unsigned int *)0xC2EA728 = t4;
    *(unsigned int *)0xC2EA72C = t5;
    t6 = *(int *)((((int)stk + 4) + 0x0));
    t7 = *(int *)((t6 + 0x4));
    *(unsigned int *)0xC2EA730 = t7;
    t8 = *(int *)((((int)stk + 4) + 0x0));
    t9 = *(int *)((t8 + 0x8));
    *(unsigned int *)0xC2EA734 = t9;
    t10 = *(int *)((((int)stk + 4) + 0x0));
    t11 = *(int *)((t10 + 0xC));
    *(unsigned int *)0xC2EA738 = t11;
    t12 = *(int *)((((int)stk + 4) + 0x0));
    t13 = *(int *)((t12 + 0x10));
    t14 = kmiBGPlanePutColor(t3, 0x6, t13);
    t15 = *(int *)((((int)stk + 4) + 0x0));
    t16 = *(int *)((t15 + 0x18));
    *(unsigned int *)(((t14 << 2) + 0xC2EA724)) = t16;
    t17 = *(int *)((((int)stk + 4) + 0x0));
    t18 = *(int *)((t17 + 0x1C));
    t19 = kmiBGPlanePutWord(t3, (t14 + 0x1), t18);
    t20 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t21 = *(int *)((t20 + 0x4));
    *(unsigned int *)(((t19 << 2) + 0xC2EA724)) = t21;
    t22 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t23 = *(int *)((t22 + 0x8));
    *(unsigned int *)((((t19 + 0x1) << 2) + 0xC2EA724)) = t23;
    t24 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t25 = *(int *)((t24 + 0xC));
    *(unsigned int *)(((((t19 + 0x1) + 0x1) << 2) + 0xC2EA724)) = t25;
    t26 = *(int *)((((int)stk + 4) + 0x0));
    t27 = *(int *)((t26 + 0x10));
    t28 = kmiBGPlanePutColor(t3, (((t19 + 0x1) + 0x1) + 0x1), t27);
    t29 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t30 = *(int *)((t29 + 0x18));
    *(unsigned int *)(((t28 << 2) + 0xC2EA724)) = t30;
    t31 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t32 = *(int *)((t31 + 0x1C));
    t33 = kmiBGPlanePutWord(t3, (t28 + 0x1), t32);
    t34 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t35 = *(int *)((t34 + 0x4));
    *(unsigned int *)(((t33 << 2) + 0xC2EA724)) = t35;
    t36 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t37 = *(int *)((t36 + 0x8));
    *(unsigned int *)((((t33 + 0x1) << 2) + 0xC2EA724)) = t37;
    t38 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t39 = *(int *)((t38 + 0xC));
    *(unsigned int *)(((((t33 + 0x1) + 0x1) << 2) + 0xC2EA724)) = t39;
    t40 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t41 = *(int *)((t40 + 0x10));
    t42 = kmiBGPlanePutColor(t3, (((t33 + 0x1) + 0x1) + 0x1), t41);
    t43 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t44 = *(int *)((t43 + 0x18));
    *(unsigned int *)(((t42 << 2) + 0xC2EA724)) = t44;
    t45 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t46 = *(int *)((t45 + 0x1C));
    t47 = kmiBGPlanePutWord(t3, (t42 + 0x1), t46);
    *(unsigned int *)0xC2EA81C = (t47 << 2);
    t48 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t48, 0x0, 0x0);
    t50 = *(int *)((((int)stk + 4) + 0x0));
    t51 = *(int *)((t50 + 0xC));
    *(unsigned int *)0xC2EA830 = t51;
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
        t1 = kmytex_ABSalloc(0x0, t0, a4, a5, 0x1, 0x1);
        t7 = t1;
        if (t1 == 0) {
            t2 = *(int *)0xC177FB0;
            t3 = kmytex_ABSalloc(0x1, (t2 + t0), a4, a6, 0x1, 0x1);
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
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t7;
    int t8;
    int t10;
    int t17;
    int t19;
    int t20;
    int t22;
    int t23;
    int stk[522];

    t13 = a6;
    t14 = a5;
    t15 = a4;
    if ((unsigned int)a6 > (unsigned int)0x800) {
        *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x4);
        t0 = a5;
        t1 = a4;
        t2 = a6;
        do {
            t3 = *(int *)(((int)stk + 4));
            kmiCopyFromFrameBuffer(t3, t0, 0x800);
            t5 = *(int *)(((int)stk + 4));
            t7 = 0x40;
            t8 = t5;
            while (t7 != 0) {
                kmiPurgeCache(t8);
                t7 = (t7 - 1);
                t8 = (t8 + 0x20);
            }
            t10 = *(int *)(((int)stk + 4));
            kmiCopyToFrameBuffer(t1, t10, 0x800);
            t2 = (t2 - 0x800);
            t0 = (t0 + 0x800);
            t1 = (t1 + 0x800);
        } while ((unsigned int)t2 > (unsigned int)0x800);
        t13 = t2;
        t14 = t0;
        t15 = t1;
    }
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x4);
    kmiCopyFromFrameBuffer((((int)stk + 4) + 0x4), t14, t13);
    t17 = *(int *)(((int)stk + 4));
    t19 = 0x40;
    t20 = t17;
    while (t19 != 0) {
        kmiPurgeCache(t20);
        t19 = (t19 - 1);
        t20 = (t20 + 0x20);
    }
    t22 = *(int *)(((int)stk + 4));
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
    t11 = kmiSetTAEnvironment(((unsigned int)t10 >> 7), ((unsigned int)t9 >> 7), ((unsigned int)t8 >> 7), ((unsigned int)t7 >> 7), t6, 0x0);
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
    int stk[12];

    *(unsigned int *)(((int)stk + 12)) = a4;
    t0 = *(int *)0xC2EA9DC;
    t1 = (0xC2EAA00 + (t0 << 2));
    t2 = (0xC2EAA50 + (t0 << 2));
    t3 = 0x0;
    do {
        t4 = *(int *)((t2 + 0x0));
        if (t4 != 0) {
            t5 = *(int *)(((int)stk + 12));
            if (t5 != t3) {
                t6 = *(int *)0xC2EAAB4;
                if (t6 == 1) {
                    if (t3 != 1) {
                        if (t3 == 3) {
                            t7 = *(int *)0xC2EAAB8;
                            t8 = *(int *)0xC2EAAB8;
                            t9 = *(int *)((t8 + 0x0));
                            *(unsigned int *)((t7 + 0x0)) = ((t9 & 0xF0FFFFFF) | ((t3 << 16) << 8));
                            do {
                                t10 = *(int *)0xC2EAABC;
                                t11 = *(int *)0xC2EAAB8;
                                t12 = kmiDMAtoTARequest(0x10000000, t11, t10, 0x10, ((int)stk + 8));
                            } while (t12 == 0x100);
                        }
                    } else {
                        t14 = *(int *)0xC2EAAB8;
                        t15 = *(int *)0xC2EAAB8;
                        t16 = *(int *)((t15 + 0x0));
                        *(unsigned int *)((t14 + 0x0)) = ((t16 & 0xF0FFFFFF) | ((t3 << 16) << 8));
                        do {
                            t17 = *(int *)0xC2EAABC;
                            t18 = *(int *)0xC2EAAB8;
                            t19 = kmiDMAtoTARequest(0x10000000, t18, t17, 0x10, ((int)stk + 8));
                        } while (t19 == 0x100);
                    }
                }
                do {
                    t22 = *(int *)((t2 + 0x0));
                    t23 = *(int *)((t1 + 0x0));
                    t24 = kmiDMAtoTARequest(0x10000000, t23, (t22 + 0x20), 0x10, ((int)stk + 8));
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
    int t10;
    int t17;
    int t18;
    int t20;
    int t21;
    int t22;
    int t29;
    int t16;
    int t27;

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
                t10 = kmiVQalloc(a5);
                if (t10 == 3) {
                    kmiVQFBfree(a4);
                    kmiDefaultInterruptHandler(0x3);
                }
                t16 = t10;
            } else {
                kmiDefaultInterruptHandler(0x3);
                t16 = t9;
            }
            t29 = t16;
        } else {
            t17 = *(int *)((a4 + 0x14));
            t18 = kmiTXalloc(t17, a4);
            if (t18 == 3) {
                kmiDefaultInterruptHandler(0x3);
                t27 = t18;
            } else {
                t20 = *(int *)((a5 + 0x14));
                t21 = kmiTXalloc(t20, a5);
                if (t21 == 3) {
                    t22 = *(int *)((a4 + 0x1C));
                    kmiFBfree(t22);
                    kmiDefaultInterruptHandler(0x3);
                }
                t27 = t21;
            }
            t29 = t27;
        }
        t30 = t29;
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
    int t45;
    int t6;
    int t7;
    int t43;
    int t8;
    int t41;
    int t9;
    int t10;
    int t11;
    int t39;
    int t12;
    int t37;
    int t13;
    int t35;
    int t14;
    int t33;
    int t15;
    int t31;
    int t16;
    int t29;
    int t18;
    int t27;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t26;
    int t47;
    int stk[22];

    *(unsigned int *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    *(unsigned int *)(((int)stk + 16)) = (a4 * 0x148);
    *(unsigned int *)(((int)stk + 4)) = ((a4 * 0x148) + 0xC2EE990);
    t0 = *(int *)(((int)stk + 8));
    *(unsigned int *)((t0 + 0x0)) = 0x0;
    t1 = *(int *)(((int)stk + 4));
    t2 = *(signed char *)((t1 + 0x2));
    t49 = 0xFFFFFF01;
    if (t2 != 0) {
        t3 = vmsio_isready(a4, a5, a6, a7);
        if (t3 == 0) {
            vmsfs_unmount(a4);
            t47 = 0xFFFFFF01;
        } else {
            t5 = vmsio_ismount(a4);
            t45 = 0xFFFFFF01;
            if (t5 != 0) {
                t6 = *(int *)(((int)stk + 16));
                t7 = *(signed char *)(((t6 + 0xC2EE990) + 0x8));
                t43 = 0xFFFFFF01;
                if (t7 != 0) {
                    t8 = buIsFormat(a4);
                    t41 = 0xFFFFFF03;
                    if ((int)t8 >= 0) {
                        t9 = *(int *)(((int)stk + 4));
                        t10 = *(int *)((t9 + 0x1C));
                        t11 = *(int *)((t10 + 0x38));
                        t39 = 0xFFFFFF08;
                        if (t11 != 0) {
                            t12 = check_isopen(a4, a5);
                            t37 = 0xFFFFFF08;
                            if ((int)t12 >= 0) {
                                t13 = search_dir(a4, a5, (((int)stk + 4) + 0x10));
                                t35 = 0xFFFFFF06;
                                if ((int)t13 < 0) {
                                    t14 = search_exec_file(a4, (((int)stk + 4) + 0x10));
                                    t33 = 0xFFFFFF09;
                                    if ((int)t14 < 0) {
                                        t15 = get_fat(a4, 0x0);
                                        t31 = 0xFFFFFF08;
                                        if ((unsigned short)t15 == 0xFFFC) {
                                            t16 = search_free_dir(a4);
                                            t29 = 0xFFFFFF08;
                                            if ((int)t16 >= 0) {
                                                direntry(a4, t16);
                                                t18 = open_file_handle(a4);
                                                t27 = 0xFFFFFF07;
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
                                                        t23 = *(signed char *)((t21 + 0x0));
                                                        t21 = (t21 + 0x1);
                                                        t19 = t23;
                                                        *(unsigned char *)((t20 + 0x0)) = t19;
                                                        t20 = (t20 + 0x1);
                                                    }
                                                    *(unsigned char *)((t20 + 0x0)) = 0x0;
                                                    t24 = *(int *)(((int)stk + 12));
                                                    set_vmstime((t18 + 0x20), t24);
                                                    t26 = *(int *)(((int)stk + 8));
                                                    *(unsigned int *)((t26 + 0x0)) = t18;
                                                    t27 = 0x0;
                                                }
                                                t29 = t27;
                                            }
                                            t31 = t29;
                                        }
                                        t33 = t31;
                                    }
                                    t35 = t33;
                                }
                                t37 = t35;
                            }
                            t39 = t37;
                        }
                        t41 = t39;
                    }
                    t43 = t41;
                }
                t45 = t43;
            }
            t47 = t45;
        }
        t49 = t47;
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

    t0 = *(int *)((a4 + 0x58));
    t1 = *(int *)((a4 + 0x50));
    t2 = *(int *)((a4 + 0x28));
    t3 = (int)((int)(t1 + t0) % (int)t2);
    *(unsigned int *)(((0x50 + a4) + 0x0)) = t3;
    t4 = *(int *)(((0x58 + a4) + 0x0));
    t5 = *(int *)((a4 + 0x54));
    *(unsigned int *)((a4 + 0x54)) = (t5 + t4);
    *(unsigned int *)((a4 + 0x58)) = 0x0;
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
    t2 = *(int *)((a4 + 0x54));
    t3 = *(int *)((a4 + 0x8));
    t4 = (int)((int)0x20 / (int)t3);
    t5 = (int)((int)((t0 - t1) - t2) / (int)((t4 << 2) << 1));
    t6 = *(int *)((a4 + 0x50));
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
            t16 = *(int *)((a4 + 0x50));
            t13 = a4;
            t17 = mwlRnaStartCopy(t13, t14, t16, ((t12 + 0x20) & 0xFFFFFFE0), (t10 * ((t4 << 2) << 1)));
            t14 = (t14 + 0x1);
            t13 = t17;
        }
        *(unsigned int *)((a4 + 0x58)) = t13;
        t18 = t13;
    }
    return t18;
}


int kmiStartNextRender(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t8;
    int t12;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t25;
    int t29;
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
    int t54;
    int t32;
    int t28;
    int t24;
    int t48;
    int t49;

    t0 = 0x0;
    for (;;) {
        t1 = *(int *)((0xC2EA9CC + (t0 << 2)));
        if (t1 != 3) {
            t0 = (t0 + 0x1);
            if ((int)t0 < (int)0x4) continue;
            return t1;
        }
        t2 = *(int *)0xC2EA888;
        if (t2 != 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 < (int)0x4) continue;
            return t1;
        }
        break;
    }
    t3 = *(int *)0xC2EA840;
    if ((((t0 & 0x1) + 0x1) & t3) != 0) {
        t4 = *(int *)0xC2EA6E8;
        t5 = *(int *)0xC2EAAE0;
        t6 = *(int *)0xC2EAADC;
        kmiCreateRegionArray(t6, t5, 0x0, 0x1, (t0 & 0x1), ((~t4) & 0x1));
        t8 = *(int *)0xC2EA840;
        *(unsigned int *)0xC2EA840 = (((~((t0 & 0x1) + 0x1)) & t8) & 0x3);
    }
    *(unsigned int *)0xC2EA888 = 0x1;
    *(unsigned int *)(((t0 << 2) + 0xC2EA9CC)) = 0x4;
    t12 = *(int *)0xC2EA684;
    if ((t12 & 16) != 0) {
        *(unsigned int *)0xA05F8008 = 0x2;
        *(unsigned int *)0xA05F8008 = 0x0;
    }
    t14 = *(int *)((((((t0 & 0x1) << 2) << 2) << 1) + 0xC2EAAF0));
    *(unsigned int *)0xA05F802C = t14;
    t15 = *(int *)((((((t0 & 0x1) << 2) << 2) << 1) + 0xC2EAB04));
    *(unsigned int *)0xA05F8020 = t15;
    t16 = *(int *)0xC2EA6B4;
    if (t16 != 1) {
        t17 = *(int *)0xC2EA6A0;
        if ((t17 & 0x1) != 1) {
            t18 = *(int *)0xC2EA6A0;
            if ((t18 & 0x2C) == 32) {
                if (0x1 != 0) {
                    t19 = *(int *)0xC2F9200;
                    t20 = *(int *)(((t19 << 2) + 0xC2EA9B4));
                    t24 = t20;
                } else {
                    t21 = *(int *)((((t0 & 0x1) << 2) + 0xC2EA9B4));
                    t24 = t21;
                }
                t28 = t24;
            } else {
                t25 = *(int *)((((t0 & 0x1) << 2) + 0xC2EA9B4));
                t28 = t25;
            }
            t32 = t28;
        } else {
            t29 = *(int *)((((t0 & 0x1) << 2) + 0xC2EA9B4));
            t32 = t29;
        }
        *(unsigned int *)0xA05F8060 = t32;
    }
    t38 = *(int *)0xC2EA834;
    *(unsigned int *)0xA05F808C = t38;
    t39 = *(int *)0xC2EA830;
    *(unsigned int *)0xA05F8088 = (t39 & 0xFFFFFFF0);
    t40 = *(int *)0xC2EA934;
    *(unsigned int *)0xA05F8068 = t40;
    t41 = *(int *)0xC2EA938;
    *(unsigned int *)0xA05F806C = t41;
    t42 = *(int *)0xC2EA944;
    *(unsigned int *)0xA05F804C = t42;
    t43 = *(int *)0xC2EA94C;
    *(unsigned int *)0xA05F8048 = t43;
    *(unsigned int *)0xC2F91A8 = 0x0;
    t44 = *(int *)0xC2EA6A0;
    if ((t44 & 0xFFFFFFED) == 32) {
        t45 = *(int *)0xC2F9200;
        if (t45 == 0) {
            t46 = *(int *)0xC2EA980;
            t48 = t46;
            t49 = 0x20000;
        } else {
            t47 = *(int *)0xC2EA980;
            t48 = t47;
            t49 = 0x60000;
        }
        *(unsigned int *)0xA05F80F4 = (t48 | t49);
    }
    t54 = *(int *)0xFFD8000C;
    *(unsigned int *)0xC2F91E8 = t54;
    *(unsigned int *)0xC2EA9E0 = t0;
    *(unsigned int *)0xC2F91FC = 0x1;
    *(unsigned int *)0xA05F8014 = 0xFFFFFFFF;
    return 0xC2EA9E0;
}

int fmMngInit(int a4, int a5)
{
    int t58;
    int t55;
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
    int t52;
    int t20;
    int t21;
    int t50;
    int t22;
    int t23;
    int t24;
    int t48;
    int t25;
    int t26;
    int t27;
    int t36;
    int t28;
    int t29;
    int t30;
    int t31;
    int t33;
    int t34;
    int t35;
    int t38;
    int t39;
    int t40;
    int t41;
    int t43;
    int t44;
    int t45;
    int t46;
    int stk[7];

    *(unsigned int *)(((int)stk + 4)) = a5;
    t58 = 0xFFFFFFF9;
    if ((int)a4 >= (int)0x1) {
        t55 = 0xFFFFFFF9;
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
            t52 = 0xFFFFFFFF;
            if (t19 != -1) {
                t20 = *(int *)0xC178720;
                t21 = fmMngSncmp((t20 + 0x34), 0xC17696C, 0xC);
                t50 = 0xFFFFFFF8;
                if (t21 != 0) {
                    t22 = *(int *)0xC178720;
                    t23 = *(signed char *)(((t20 + 0x34) + 0x10));
                    t24 = *(short *)((t22 + 0x0));
                    t48 = 0xFFFFFFF8;
                    if (t24 == t23) {
                        t25 = *(signed char *)(((t20 + 0x34) + 0x11));
                        *(unsigned short *)((t22 + 0x2)) = t25;
                        t26 = *(int *)0xC178720;
                        t27 = *(short *)((t26 + 0x2));
                        if (t27 != 0) {
                            t36 = 0xFFFFFFF8;
                            if (t27 == 1) {
                                t28 = *(int *)0xC178720;
                                t29 = *(int *)0xC178720;
                                t30 = *(int *)((t28 + 0x8));
                                t31 = *(int *)((t29 + 0xC));
                                fmMngClearBuf(t31, t30);
                                t33 = *(int *)0xC178720;
                                t34 = fmMngReadSctAllData(t33);
                                t35 = 0x0;
                                if (t34 != 0) {
                                    t35 = t34;
                                }
                                t36 = t35;
                            }
                            t46 = t36;
                        } else {
                            t38 = *(int *)0xC178720;
                            t39 = *(int *)0xC178720;
                            t40 = *(int *)((t38 + 0x8));
                            t41 = *(int *)((t39 + 0xC));
                            fmMngClearBuf(t41, t40);
                            t43 = *(int *)0xC178720;
                            t44 = fmMngReadSctAllData(t43);
                            t45 = 0x0;
                            if (t44 != 0) {
                                t45 = t44;
                            }
                            t46 = t45;
                        }
                        t48 = t46;
                    }
                    t50 = t48;
                }
                t52 = t50;
            }
            t55 = t52;
        }
        t58 = t55;
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

    t0 = *(short *)((a4 + 0xA8));
    if (t0 == 0) {
        *(unsigned int *)((a4 + 0x50)) = a5;
        t1 = *(signed char *)((a4 + 0xF));
        t2 = (int)((int)a6 / (int)t1);
        t7 = t2;
    } else {
        *(unsigned int *)((a4 + 0x50)) = a5;
        t3 = *(signed char *)((a4 + 0xD));
        t4 = t3;
        if ((int)t3 < 0) {
            t4 = (t3 + 0x7);
        }
        t5 = *(signed char *)((a4 + 0xE));
        t6 = (int)((int)a6 / (int)((((t4 >> 1) >> 1) >> 1) * t5));
        t7 = t6;
    }
    *(unsigned int *)(((0x54 + a4) + 0x0)) = t7;
    *(unsigned int *)((a4 + 0x84)) = 0x0;
    *(unsigned int *)((a4 + 0xA0)) = 0x0;
    *(unsigned int *)((a4 + 0xA4)) = 0x0;
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
    int t12;
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
        t12 = t10;
        if ((int)(((t10 * t4) - ((t4 - t9) - 1)) + t5) < (int)t11) {
            t12 = (t10 + 0x1);
        }
        t14 = t12;
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
        return ADXB_EvokeExpandSte(a4, t20, t16, t14);
    }
    return ADXB_EvokeExpandMono(a4, t20, t16, t14);
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
    t3 = *(int *)((a4 + 0x40));
    t4 = *(int *)(((a4 + 0x50) + 0x20));
    t5 = *(int *)(((a4 + 0x50) + 0x14));
    t6 = *(int *)((a4 + 0x44));
    t7 = (int)((int)((t0 + t2) - 1) / (int)t0);
    t8 = (int)((int)((t0 + t2) - 1) % (int)t0);
    t9 = *(int *)((a4 + 0x8));
    t10 = ADXPD_GetNumBlk(t9, ((t0 + t2) - 1));
    t11 = *(int *)(((a4 + 0x50) + 0x8));
    t12 = (int)((int)(t0 * t10) / (int)t11);
    t13 = t12;
    if ((int)t7 <= (int)t10) {
        t13 = (t12 - ((t0 - t8) - 1));
    }
    *(unsigned int *)((a4 + 0xA0)) = t13;
    *(unsigned int *)((a4 + 0xA4)) = (t1 * t10);
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
    t2 = (int)((int)(((a5 - (((int)(-t1) >= 0) ? (0xAC44 << ((-t1) & 31)) : ((-(int)(-t1) & 31) ? ((int)0xAC44 >> (-(int)(-t1) & 31)) : ((int)0xAC44 >> 31)))) << 8) << 2) / (int)(((int)(-t1) >= 0) ? (0xAC44 << ((-t1) & 31)) : ((-(int)(-t1) & 31) ? ((int)0xAC44 >> (-(int)(-t1) & 31)) : ((int)0xAC44 >> 31))));
    t3 = *(int *)((a4 + 0x1C));
    t4 = *(int *)((t3 + 0x4));
    t5 = nlsndStreamSetHdOctFns(t4, (0xF & (-t1)), (0x3FF & t2));
    *(unsigned int *)((a4 + 0x14)) = a5;
    return t5;
}

int mwSbSetVol(int a4, int a5)
{
    int t5;
    int t3;
    int t0;
    int t2;
    int t1;
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
        t3 = 0x7F;
        if ((int)a5 < 0) {
            t0 = (int)((int)(((a5 << 8) - a5) - 128) / (int)0xFFFFFC41);
            t2 = 0x7F;
            if ((int)(0x7F - (t0 << 1)) <= (int)0x7F) {
                t1 = (0x7F - (t0 << 1));
                if ((int)(0x7F - (t0 << 1)) < 0) {
                    t1 = 0x0;
                }
                t2 = t1;
            }
            t3 = t2;
        }
        t5 = t3;
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
    int t2;
    int t0;
    int t5;
    int t6;
    int t7;
    int t8;

    *(unsigned int *)((a4 + 0x48)) = a5;
    *(unsigned int *)((a4 + 0x4C)) = a6;
    t4 = 0x0;
    if ((int)a6 >= (int)0xFFFFFFD6) {
        t2 = 0xF;
        if ((int)a6 < 0) {
            t0 = (int)((int)a6 / (int)0x3);
            t2 = (t0 + 0xF);
        }
        t4 = t2;
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
    *(unsigned int *)((a4 + 0x50)) = t1;
    t2 = a6;
    if ((int)a6 >= (int)0x63) {
        t2 = 0x63;
    }
    t3 = t2;
    if ((int)t2 <= (int)0xFFFFFF9D) {
        t3 = 0xFFFFFF9D;
    }
    *(unsigned int *)((a4 + 0x54)) = t3;
    t4 = (int)((int)(((t3 << 2) << 2) << 2) / (int)0x64);
    t5 = *(short *)((a4 + 0x6));
    nlsndStreamTranspose(t5, t1, t3);
    t7 = *(short *)((a4 + 0x6));
    return nlsndStreamDetune(t7, t4);
}

int mwlSbSetGain(int a4, int a5)
{
    int t3;
    int t4;
    int t1;
    int t2;
    int t0;
    int t5;
    int t6;
    int t7;

    *(unsigned int *)((a4 + 0x5C)) = a5;
    t3 = 0x5C;
    t4 = 0x0;
    if ((int)a5 >= (int)0xFFFFFFD6) {
        t1 = 0x5C;
        t2 = 0xF;
        if ((int)a5 < 0) {
            t0 = (int)((int)a5 / (int)0x3);
            t1 = t0;
            t2 = (t0 + 0xF);
        }
        t3 = t1;
        t4 = t2;
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

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
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
        t8 = *(int *)(((int)stk + 4));
        *(unsigned int *)((t5 + 0x0)) = t8;
        *(unsigned int *)((t5 + 0x4)) = ((unsigned int)a7 >> 2);
        *(unsigned int *)((t5 + 0x118)) = 0x0;
        *(unsigned int *)((t5 + 0x10)) = 0x0;
        *(unsigned int *)((t5 + 0x11C)) = 0x0;
        memmove((t5 + 0x18), (0x104 + a4), 0x100);
        setjmp((((int)stk + 4) + 0x8));
        memmove((t5 + 0x18), (((int)stk + 4) + 0x8), 0x100);
        t12 = *(int *)(((int)stk + 4));
        *(unsigned int *)((t5 + 0x18)) = (((((unsigned int)a7 >> 2) - 1) << 2) + t12);
        t13 = *(int *)(((int)stk + 8));
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
    int stk[10];

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 28)) = a6;
    *(unsigned int *)(((int)stk + 32)) = a7;
    if ((int)a5 < (int)0x1000) {
        t0 = *(int *)(((int)stk + 28));
        *(unsigned short *)((t0 + 0x0)) = 0x0;
        return;
    }
    t1 = *(int *)(((int)stk + 24));
    t2 = adxb_DecodeInfoAiffSub(t1, (((int)stk + 4) + 0x4), (((int)stk + 4) + 0x8), (((int)stk + 4) + 0xC), (((int)stk + 8) + 0xC));
    if (t2 != 0) {
        t3 = *(int *)(((int)stk + 24));
        t4 = *(int *)(((int)stk + 28));
        *(unsigned short *)((t4 + 0x0)) = (t2 - t3);
        if ((int)(short)(t2 - t3) <= 0) {
            return;
        }
        t5 = *(int *)(((int)stk + 8));
        *(unsigned int *)((a11 + 0x0)) = t5;
        t6 = *(int *)(((int)stk + 12));
        *(unsigned char *)((a10 + 0x0)) = t6;
        t7 = *(int *)(((int)stk + 16));
        *(unsigned char *)((a8 + 0x0)) = t7;
        t8 = *(int *)(((int)stk + 20));
        *(unsigned int *)((a12 + 0x0)) = t8;
        t9 = *(int *)(((int)stk + 32));
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
