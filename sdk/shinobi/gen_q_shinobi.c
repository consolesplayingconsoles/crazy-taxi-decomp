extern int EndPsg_Execute();
extern int ExecNameEntrySelect();
/* Straight-line functions with calls and guards (batch gen_q): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXB_CheckAu(int);
int ADXB_CheckSpsd(void);
int ADXB_CheckWav(int);
int ADXB_DecodeHeaderAdx(int, int, int);
int ADXB_DecodeHeaderAiff(int, int, int);
int ADXB_DecodeHeaderAu(int, int, int);
int ADXB_DecodeHeaderSpsd(int, int, int);
int ADXB_DecodeHeaderWav(int, int, int);
int ADXB_Destroy(int);
int ADXB_ExecHndl(int);
int ADXB_ExecOneAiff16(int);
int ADXB_ExecOneAiff8(int);
int ADXB_ExecOneAu16(int);
int ADXB_ExecOneAu8(int);
int ADXB_ExecOneAuUlaw(int);
int ADXB_GetStat(int);
int ADXF_GetFsizeSct(int);
int ADXF_OpenAfs(int, int);
int ADXF_ReadNw32(int, int, int);
int ADXPD_Create(void);
int ADXRNA_SetOutPan(void);
int ADXSTM_Tell(int);
int ADXT_SetOutVol(int, int);
int gdc_GetStreamSongRemainTime(int);
int gdc_GetVolGainMute(int);
int gdc_VolStreamSong(int);
int gdc_PlayStreamSong(int);
int pfOffsetColor(int, int, int, int);
int pfSetFilterMode(int);
int MotionBlurOff(void);
int SetMotionBlurStrength(float);
int callSaveData(int);
int goiToolPointEntry(int, int);
int goiToolCourseMap(int);
int goiToolCoursePoint(int);
int goiToolLight(int);
int goiToolCamData(int);
int setReplayType(int);
int HomingPosX(int, float, float);
int CarSel_SetBackColor(void);
int Money_Array(int, int, int);
int nd_SprPut(int, int, float, float);
int Init_DramRoll(void);
int Level_Calc(int);
int Init_RS_Light(void);
int Init_RS_Fog(void);
int Start_Excellent(void);
int Start_Fault(int);
int psgAllocIpBuff(int);
int breathExecOne(int, int);
int nlSetPaletteMap(int, int);
int nlCreateVertexBuffer_clx16(void);
int nlCreateVertexBuffer_clx22(void);
int nlSetPaletteData(int, int, int);
int memcmp(int, int, int);
int prefetch(int);
int kmiFBallocQueue(int, int, int, int);
int kmiInitializeDriver(void);
int kmiMemCopy8(int, int, int);
int ADXSJD_GetNumChan(int);
int adxstmf_stat_exec(int);
int kmiErrorRecover(int);
int syBtFlWrite(void);
int syBtFlDeleteSct(void);
int fmMngMcpy4(int, int, int);
int fmMngNum2Bit(int, int, int);
int ADXB_CheckAiff(int);
int GetMenuMode(int);
int BigOnePut(void);
int KillColliObj(int);
int LightEffect(int);
int Psg_Init(int, int, int);
int Put_Max_Combo(void);
int ResetFadeColor(void);
int ResetSpark(void);
int Sound_Request(int, int);
int StopingCarInit(int, int);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int adxStartAfs1(int, int);
int adxsjd_decexec_end(int);
int adxsjd_decexec_start(int);
int buExitForce(void);
int callGoBackAdvertise(void);
int courseCarType(void);
int fmcalccrc(int, int);
int gdFsInit(void);
int gdFsSeek(int);
int gdc_StopStreamSongAll(void);
int kmChangeLatencyModel(int, int);
int kmProcessVertexRenderState(int);
int kmSetVertexRenderState(int);
int kmfSetVertexBufferBaseAddress(int, int);
int kmiCopyToFrameBuffer(int, int, int);
int kmiGetProfileInt(int, int);
int kmiInitializeHardware(void);
int kmiRegisterPhIntHandler(int);
int kmiWriteRegister(int, int);
int kmtex_GetTextureLevel(int, int);
int kmyConvertAddress64to32(int);
int longjmp(int, int);
int memset(int, int, int);
int nlCloseEvent(int);
int nlGetMatrix(int);
int nlLoadMatrix(int);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPrintColor(int);
int nlPushMatrix(int);
int nlScale(float, float, float);
int nlSetScaleFactor(float);
int nlSetTextureParameter(int);
int nlSprPut(int);
int nlTranslateV(int);
int nlsndStreamSetHdChs(int, int);
int ovLibDeleteTbl(int);
int pfColor(int, int, int, int);
int pfSetFont(int);
int pfSetZ(float);
int pfSize(float, float);
int psgSetState(int, int, int, int);
int replay(int);
int set_event(int, int);
int setjmp(int);
int syBtCfgSet(int);
int syCfgSetSoundMode(int);
int fmMngMcpy(void);
int vmsfs_c_getstate(int);
int gdc_PlayStreamSongDisk(void);
int fsInit(void);
int gdc_CourseBlockReadNext(void);
int InitEffect(void);
int gameState14(void);
int SetScreen(int a4);
int menuEnterStep(void);
int menuGoBack(void);
int stopingCarSpawn(int a4, int a5);
int pcarEnd(int a4);
int trainControlExec(int a4);
void GoiTool(int a4);
int PutCourse_Sky(void);
int selectInitIconSprite(void);
void selectDrawPanels(void);
int Init_Result_Parm(void);
int Result_Next_State(void);
int Exec_DCmini_Game12(void);
int execMiniLight(void);
int GetAverageAngle(int a4, int a5, float f4);
int Psg_IsMotionSetA(int a4);
int Psg_CheckCharaBit4(int a4);
int EndPsg_Start(int a4, int a5, int a6, int a7);
int AreYouBreathing(void);
int BigOneSwims(void);
int nlFreePalette(int a4);
int nlSearchPalette(int a4, int a5);
int nlSysUseLatency2V(void);
int nlSysSetDirectListTypeLatency2V(int a4);
int nlSysSetVertexBufferBaseAddress(int a4);
int nlCreateVertexBuffer(void);
float nlTan(int a4);
int nlCopyMatrix(int a4, int a5);
int nlLineSendHeader(int a4);
int nlLineCalcFogA(int a4);
int nlSpriteSetVtxContext(int a4);
int nlSpriteF2C(float f4);
int nlsndCheckPackLoadError(int a4, int a5);
int nlsndSeqRequest(int a4);
int nlsndStreamOpen(int a4);
int nlsndG2DmaRequest(int a4, int a5, int a6, int a7);
int nlsndG2DmaGetStatus(int a4);
int nlDispStripLoadPalette(int a4, int a5);
int nlstripSetVertexContext(int a4);
int kmSetPaletteBankData(int a4, int a5, int a6);
int kmSetPixelClipping(int a4, int a5, int a6, int a7);
int ovMdlDeleteTbl(int a4);
void p2_cache_set(void);
int buExit(void);
int syCfgGetSoundMode(int a4);
int kmiInitializeDMA(void);
int kmiDMAHazardReset(void);
int kmiCh2DMAtoTA(int a4, int a5);
int kmiTAallocEx(int a4, int a5, int a6);
int kmiFBFitBlock(int a4, int a5);
int kmInitDevice(int a4);
void kmiWriteRegisters(int a4, int a5, int a6, int a7);
int kmfSetTimeOutCount(int a4, int a5);
int kmiCheckRenderTexture(int a4);
int kmLoadVQCodebook(int a4, int a5);
int kmtex_TextureSize_Twiddled(int a4);
int kmtex_TextureSize_Palettized(int a4);
int kmiConvertUVnum(int a4);
int kmSetCheapShadowMode(int a4);
int kmiPutGlobalParam(void);
int kmChangeContextZWriteDisable(int a4);
int kmChangeContextFogMode(int a4);
int kmChangeContextPaletteBank(int a4);
int kmiCalcTABufferSize(int a4);
int ccitt_updcrc(int a4, int a5, int a6, int a7);
int gdFsGetTokenSize(int a4, int a5, int a6);
int kdVbOverHandler(void);
int pdVmsLcdBltAsmFlipV(int a4, int a5);
int pdVmsLcdBltAsmFlipH(int a4, int a5);
int pdVmsLcdBltAsmFlipHV(int a4, int a5);
int check_caps(int a4);
int ADX_DecodeInfoExADPCM2(int a4, int a5, int a6);
int adxsjd_decode_exec(int a4);
int ADXSTM_Seek(int a4, int a5);
void ADXSTM_SetEos(int a4, int a5);
int ADXSTMF_ExecHndl(int a4);
int adxt_set_outpan(int a4);
void mwRnaSetupSnd(int a4, int a5);
void SJMEM_Finish(void);
void SJRBF_Finish(void);
void SJUNI_Finish(void);
int kmiInitInterrupt(void);
int kmiUpdateRenderStatus(void);
int kmiErrorISR04(void);
int syG2DmaReset(int a4);
int fmMngBit2Num(int a4, int a5, int a6);
int fmMngChkEmptyData(int a4, int a5);
int fmMngSctRefresh(int a4);
int fmMngAddData(int a4);
int fmMngWriteData(int a4);
int ADXB_Create(int a4, int a5, int a6, int a7);
int ADXB_DecodeHeader(int a4, int a5, int a6);
int mwlSbAllocWork(int a4);
int mwSbSetNumChan(int a4, int a5);
int buFbrSleepFiber(int a4);
int ADXB_ExecOneAiff(int a4);
int ADXB_ExecOneAu(int a4);
int syIntAdrChk_putchar(int a4);
void syIntAdrChk_prints(int a4);
int syIntAdrChk_printh(int a4);
struct o3E_short { char p[0x3E]; short v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o78_int { char p[0x78]; int v; };
struct o84_int { char p[0x84]; int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o90_int { char p[0x90]; int v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o94_uint { char p[0x94]; unsigned int v; };
struct o98_int { char p[0x98]; int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct oAA_short { char p[0xAA]; short v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o30_int { char p[0x30]; int v; };
struct o34_int { char p[0x34]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


void p2_cache_set(void)
{
    int t0;

    *(unsigned int *)0xFF00001C = 0x0;
    t0 = 0xF4000000;
    do {
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x20);
    } while ((int)t0 < (int)0xF4004000);
    *(unsigned int *)0xFF00001C = 0x800;
    *(unsigned int *)0xFF00001C = 0x0;
}


int ccitt_updcrc(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    t0 = a4;
    t1 = a6;
    t2 = a7;
    t3 = a5;
    for (;;) {
        t4 = ((int)t1 > 0);
        t1 = (t1 - 1);
        if (!t4) break;
        t2 = (unsigned short)t0;
        t5 = *(signed char *)((t3 + 0x0));
        t3 = (t3 + 0x1);
        t6 = *(short *)((0xC175FD4 + (((unsigned char)((int)t2 >> 8) ^ (unsigned char)t5) << 1)));
        t0 = ((t2 << 8) & 0xFF00);
        t0 = (t0 ^ t6);
    }
    return t0;
}

int gdFsGetTokenSize(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    t0 = a4;
    t1 = a6;
    t2 = 0x0;
    for (;;) {
        t3 = *(signed char *)((t0 + 0x0));
        if (t3 == 0) break;
        t1 = a5;
        for (;;) {
            t4 = *(signed char *)((t1 + 0x0));
            if (t4 == 0) break;
            t5 = *(signed char *)((t1 + 0x0));
            t6 = *(signed char *)((t0 + 0x0));
            if (t6 != t5) {
                t1 = (t1 + 0x1);
                continue;
            }
            return t2;
        }
        t2 = (t2 + 0x1);
        t0 = (t0 + 0x1);
    }
    return t2;
}

int kdVbOverHandler(void)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)0xC2EC26C;
    *(unsigned int *)0xC2EC26C = (t0 + 0x1);
    t1 = *(int *)0xC2EC4D8;
    t2 = *(short *)((((t1 << 1) + 0xC2EC288) + 0x0));
    *(unsigned short *)((((t1 << 1) + 0xC2EC288) + 0x0)) = (t2 + 0x1);
    *(unsigned int *)0xA05F6900 = 0x2000;
    return (t2 + 0x1);
}

int pdVmsLcdBltAsmFlipV(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    t0 = 0x20;
    t1 = (a4 + 0xBA);
    t2 = a5;
    do {
        t3 = 0x6;
        do {
            t4 = 0x80;
            t5 = 0x0;
            t6 = 0x8;
            do {
                t7 = *(signed char *)((t2 + 0x0));
                t2 = (t2 + 0x1);
                if ((t7 & 8) != 0) {
                    t5 = (t5 | t4);
                }
                t4 = ((unsigned int)t4 >> 1);
                t6 = (t6 - 0x1);
            } while (t6 != 0);
            *(unsigned char *)((t1 + 0x0)) = t5;
            t1 = (t1 + 0x1);
            t3 = (t3 - 0x1);
        } while (t3 != 0);
        t0 = (t0 - 0x1);
        t1 = (t1 - 12);
    } while (t0 != 0);
    return t7;
}

int pdVmsLcdBltAsmFlipH(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    t0 = 0x20;
    t1 = (a4 + 0x5);
    t2 = a5;
    do {
        t3 = 0x6;
        do {
            t4 = 0x1;
            t5 = 0x0;
            t6 = 0x8;
            do {
                t7 = *(signed char *)((t2 + 0x0));
                t2 = (t2 + 0x1);
                if ((t7 & 8) != 0) {
                    t5 = (t5 | t4);
                }
                t4 = (t4 << 1);
                t6 = (t6 - 0x1);
            } while (t6 != 0);
            *(unsigned char *)((t1 + 0x0)) = t5;
            t1 = (t1 - 1);
            t3 = (t3 - 0x1);
        } while (t3 != 0);
        t0 = (t0 - 0x1);
        t1 = (t1 + 0xC);
    } while (t0 != 0);
    return t7;
}

int pdVmsLcdBltAsmFlipHV(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    t0 = 0x20;
    t1 = (a4 + 0xC0);
    t2 = a5;
    do {
        t3 = 0x6;
        do {
            t4 = 0x1;
            t5 = 0x0;
            t6 = 0x8;
            do {
                t7 = *(signed char *)((t2 + 0x0));
                t2 = (t2 + 0x1);
                if ((t7 & 8) != 0) {
                    t5 = (t5 | t4);
                }
                t6 = (t6 - 0x1);
                t4 = (t4 << 1);
            } while (t6 != 0);
            *(unsigned char *)(((t1 - 0x1) + 0x0)) = t5;
            t1 = (t1 - 0x1);
            t3 = (t3 - 0x1);
        } while (t3 != 0);
        t0 = (t0 - 0x1);
    } while (t0 != 0);
    return t7;
}


int syG2DmaReset(int a4)
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

    t0 = *(int *)((a4 + 0x0));
    t1 = *(int *)0xC178700;
    *(unsigned int *)((((t0 * 0x34) + (t1 + 0x4)) + 0x0)) = t0;
    t2 = *(int *)((a4 + 0x0));
    t3 = *(int *)0xC178700;
    *(unsigned int *)((((t2 * 0x34) + (t3 + 0x4)) + 0x28)) = 0x0;
    t4 = *(int *)((a4 + 0x0));
    t5 = *(int *)0xC178700;
    *(unsigned int *)((((t4 * 0x34) + (t5 + 0x4)) + 0x2C)) = 0x0;
    t6 = *(int *)((a4 + 0x0));
    t7 = *(int *)0xC178700;
    *(unsigned int *)((((t6 * 0x34) + (t7 + 0x4)) + 0x30)) = 0x0;
    t8 = *(int *)0xC178700;
    t9 = *(int *)((a4 + 0x0));
    *(unsigned int *)((((t9 * 0x34) + (t8 + 0x4)) + 0x4)) = 0x0;
    t10 = *(int *)((a4 + 0x0));
    t11 = *(int *)0xC178700;
    *(unsigned int *)((((t10 * 0x34) + (t11 + 0x4)) + 0x8)) = 0x0;
    t12 = *(int *)((a4 + 0x0));
    t13 = *(int *)0xC178700;
    *(unsigned int *)((((t12 * 0x34) + (t13 + 0x4)) + 0xC)) = 0x0;
    t14 = *(int *)((a4 + 0x0));
    t15 = *(int *)0xC178700;
    *(unsigned int *)((((t14 * 0x34) + (t15 + 0x4)) + 0x10)) = 0x0;
    t16 = *(int *)((a4 + 0x0));
    t17 = *(int *)0xC178700;
    *(unsigned int *)((((t16 * 0x34) + (t17 + 0x4)) + 0x14)) = 0x0;
    t18 = *(int *)((a4 + 0x0));
    t19 = *(int *)0xC178700;
    *(unsigned int *)((((t18 * 0x34) + (t19 + 0x4)) + 0x18)) = 0x3;
    t20 = *(int *)((a4 + 0x0));
    t21 = *(int *)0xC178700;
    *(unsigned int *)((((t20 * 0x34) + (t21 + 0x4)) + 0x1C)) = 0x0;
    t22 = *(int *)((a4 + 0x0));
    t23 = *(int *)0xC178700;
    *(unsigned int *)((((t22 * 0x34) + (t23 + 0x4)) + 0x20)) = 0x0;
    t24 = *(int *)((a4 + 0x0));
    t25 = *(int *)0xC178700;
    t26 = *(int *)((t25 + 0x0));
    *(unsigned int *)((((((t24 << 2) << 2) << 1) + t26) + 0x14)) = 0x0;
    return 0x0;
}

int fmMngBit2Num(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = a4;
    t1 = a5;
    t2 = a6;
    t3 = 0x0;
    t4 = (((a5 << 2) << 2) << 2);
    while ((int)t4 > 0) {
        t2 = *(signed char *)((t0 + 0x0));
        t0 = (t0 + 0x1);
        t1 = 0x8;
        for (;;) {
            if (((signed char)t2 & 0x80) == 0) {
                t1 = (t1 - 1);
                t2 = (t2 << 1);
                t3 = (t3 + 0x1);
                if ((int)t1 <= 0) break;
                continue;
            }
            return t3;
        }
        t4 = (t4 - 1);
    }
    return t3;
}

int fmMngChkEmptyData(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t7;
    int t5;
    int t6;

    t0 = 0x3C;
    t1 = (a5 + 0x2);
    for (;;) {
        t2 = *(signed char *)((t1 + 0x0));
        t1 = (t1 + 0x1);
        if ((unsigned char)t2 == 0xFF) {
            t0 = (t0 - 1);
            if ((int)t0 <= 0) break;
            continue;
        }
        return 0x0;
    }
    t3 = fmcalccrc(0x3E, a5);
    t4 = (((struct o3E_short *)(a5))->v);
    t7 = 0x0;
    if ((unsigned short)t4 == (unsigned short)t3) {
        t5 = 0x40;
        t6 = a5;
        while (t5 != 0) {
            *(unsigned char *)((t6 + 0x0)) = 0xFF;
            t5 = (t5 - 1);
            t6 = (t6 + 0x1);
        }
        t7 = 0x1;
    }
    return t7;
}


int buFbrSleepFiber(int a4)
{
    int t0;
    int t1;
    int t5;
    int t2;
    int t3;
    int t6;
    int t7;
    int t8;
    int t11;
    int t9;

    t0 = *(int *)0xC2FD290;
    t1 = *(int *)((t0 + 0xD78));
    t5 = 0x7FFFFFFF;
    if ((int)a4 >= 0) {
        t2 = *(int *)0xC2FD290;
        t3 = *(int *)((t2 + 0x204));
        t5 = (t3 + a4);
    }
    *(unsigned int *)((t1 + 0x14)) = t5;
    t6 = *(int *)0xC2FD290;
    t7 = *(int *)((t6 + 0xD78));
    t8 = setjmp((t7 + 0x18));
    t11 = t8;
    if (t8 == 0) {
        t9 = *(int *)0xC2FD290;
        t11 = longjmp((t9 + 0x4), 0x1);
    }
    return t11;
}


int syIntAdrChk_putchar(int a4)
{
    int t0;
    int t8;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
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

    t0 = (((struct o8_int *)0xC2FD43C)->v);
    if (t0 != 0) {
        t8 = t0;
        if (t0 == 1) {
            do {
                t1 = (((struct o0_int *)0xC2FD43C)->v);
                t2 = *(signed char *)(((t1 + 0x10) + 0x0));
            } while (((unsigned char)t2 & 0x80) != 0x80);
            t3 = (((struct o0_int *)0xC2FD43C)->v);
            *(unsigned char *)(((t3 + 0xC) + 0x0)) = a4;
            t4 = (((struct o0_int *)0xC2FD43C)->v);
            t5 = *(signed char *)(((t4 + 0x10) + 0x0));
            *(unsigned char *)(((t4 + 0x10) + 0x0)) = (t5 & 0x7F);
            do {
                t6 = (((struct o0_int *)0xC2FD43C)->v);
                t7 = *(signed char *)(((t6 + 0x10) + 0x0));
            } while (((unsigned char)t7 & 0x4) != 4);
            t8 = ((unsigned char)t7 & 0x4);
        }
        t20 = t8;
    } else {
        do {
            t11 = (((struct o4_int *)0xC2FD43C)->v);
            t12 = *(short *)((t11 + 0x10));
        } while (((unsigned short)t12 & 0x20) != 32);
        t13 = (((struct o4_int *)0xC2FD43C)->v);
        *(unsigned char *)(((t13 + 0xC) + 0x0)) = a4;
        t14 = (((struct o4_int *)0xC2FD43C)->v);
        t15 = *(short *)(((t14 + 0x10) + 0x0));
        *(unsigned short *)(((t14 + 0x10) + 0x0)) = (t15 & 0xFFDF);
        t16 = (((struct o4_int *)0xC2FD43C)->v);
        t17 = *(short *)(((t16 + 0x10) + 0x0));
        *(unsigned short *)(((t16 + 0x10) + 0x0)) = (t17 & 0xFFBF);
        do {
            t18 = (((struct o4_int *)0xC2FD43C)->v);
            t19 = *(short *)((t18 + 0x10));
        } while (((unsigned short)t19 & 0x40) != 64);
        t20 = ((unsigned short)t19 & 0x40);
    }
    return t20;
}

void syIntAdrChk_prints(int a4)
{
    int t0;
    int t1;
    int t2;

    t0 = a4;
    for (;;) {
        t1 = *(signed char *)((t0 + 0x0));
        if (t1 == 0) break;
        t2 = *(signed char *)((t0 + 0x0));
        t0 = (t0 + 0x1);
        syIntAdrChk_putchar(t2);
    }
}


