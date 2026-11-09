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












int pcarEnd(int a4)
{
    int t0;
    int t1;
    int t2;
    int t6;
    int t7;

    t0 = (((struct o78_int *)(a4))->v);
    if (t0 == 11) {
        t1 = *(int *)((a4 + 0x8));
        t2 = (((struct o84_int *)(t1))->v);
        (((struct o84_uint *)(t1))->v) = (t2 & 0xFFFFFFFE);
    }
    KillColliObj((a4 + 0x14));
    t6 = nlCloseEvent(a4);
    t7 = *(int *)0xC2A44A8;
    *(unsigned int *)0xC2A44A8 = (t7 - 1);
    return t6;
}










int GetAverageAngle(int a4, int a5, float f4)
{
    int t2;

    t2 = (a5 - (int)((float)((short)a5 - (short)a4) * f4));
    if ((int)(short)(a4 - a5) < (int)(0x8000 + (short)(a4 - a5))) {
        t2 = (a5 + (int)((float)(short)(a4 - a5) * f4));
    }
    return t2;
}



int EndPsg_Start(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = set_event(0x17C, ((int)EndPsg_Execute));
    if (t0 == 0) {
        return 0x0;
    }
    *(unsigned int *)((t0 + 0x14)) = a6;
    *(unsigned int *)((t0 + 0x18)) = a7;
    Psg_Init((t0 + 0x1C), a4, a5);
    psgSetState((t0 + 0x1C), 0x3, 0x0, 0x0);
    psgAllocIpBuff((t0 + 0x1C));
    *(unsigned int *)((t0 + 0x174)) = 0x0;
    *(unsigned int *)((t0 + 0x178)) = 0x0;
    return t0;
}



int nlFreePalette(int a4)
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

    t0 = *(int *)0xC2B7BD8;
    t1 = *(short *)(((t0 + ((a4 << 2) << 1)) + 0x4));
    if ((int)t1 > (int)0x1) {
        t2 = *(short *)(((t0 + ((a4 << 2) << 1)) + 0x4));
        *(unsigned short *)(((t0 + ((a4 << 2) << 1)) + 0x4)) = (t2 - 1);
        t12 = (t2 - 1);
    } else {
        t3 = *(signed char *)(((t0 + ((a4 << 2) << 1)) + 0x3));
        t4 = *(short *)(((t0 + ((a4 << 2) << 1)) + 0x0));
        *(unsigned short *)(((t0 + ((a4 << 2) << 1)) + 0x6)) = 0xFFFFFFFF;
        *(unsigned short *)(((t0 + ((a4 << 2) << 1)) + 0x0)) = 0xFFFFFFFF;
        *(unsigned char *)(((t0 + ((a4 << 2) << 1)) + 0x2)) = 0xFFFFFFFF;
        *(unsigned short *)(((t0 + ((a4 << 2) << 1)) + 0x4)) = 0x0;
        t5 = 0xC2AECC8;
        t6 = 0xC2B7BD8;
        t7 = ((((int)t4 >> 4) << 1) + 0xC2AECC8);
        t8 = ((int)0x1 << (int)(0xF & t4));
        t9 = (unsigned char)t3;
        for (;;) {
            t10 = ((int)t9 > 0);
            t9 = (t9 - 1);
            if (!t10) break;
            t11 = *(short *)((t7 + 0x0));
            t5 = t11;
            t6 = (~t8);
            t8 = (t8 + t8);
            t5 = (t5 & t6);
            *(unsigned short *)((t7 + 0x0)) = t5;
            if (t8 == 0x10000) {
                t7 = (t7 + 0x2);
                t8 = 0x1;
            }
        }
        t12 = 0x0;
    }
    return t12;
}

int nlSearchPalette(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t9;
    int t11;
    int t25;
    int t22;

    if (a4 == 16) {
        t0 = 0x0;
        t1 = 0x0;
        t2 = 0xFFFFFFFF;
        do {
            t3 = ((t1 << 2) << 2);
            t4 = 0x0;
            t5 = 0x1;
            for (;;) {
                t6 = *(short *)((((t1 << 1) + 0xC2AECC8) + 0x0));
                if ((t6 & t5) == 0) {
                    t7 = (t0 == 0);
                    t0 = (t0 + 0x1);
                    if (t7) {
                        t2 = t3;
                    }
                    if ((int)t0 < (int)((int)(a5 + 0xF) >> 4)) {
                        t4 = (t4 + 0x1);
                        t5 = (t5 + t5);
                        t3 = (t3 + 0x1);
                        if ((int)t4 >= (int)0x10) break;
                        continue;
                    }
                    break;
                }
                t0 = 0x0;
                t4 = (t4 + 0x1);
                t5 = (t5 + t5);
                t3 = (t3 + 0x1);
                if ((int)t4 >= (int)0x10) break;
            }
            t1 = (t1 + 0x1);
        } while ((int)t1 < (int)0x4);
        t25 = t2;
        t22 = t0;
    } else {
        t25 = 0xFFFFFFFF;
        t22 = 0x0;
        if ((unsigned int)0xC2AECC8 < (unsigned int)0xC2AECD0) {
            t9 = 0xC2AECC8;
            t25 = 0x0;
            for (;;) {
                t11 = *(short *)((t9 + 0x0));
                if ((t11 & (((int)0x1 << (int)((int)(a5 + 0xF) >> 4)) - 1)) == 0) break;
                t9 = (t9 + 0x2);
                t25 = (t25 + 0x10);
                if ((unsigned int)t9 >= (unsigned int)0xC2AECD0) {
                    if ((int)0x0 < (int)((int)(a5 + 0xF) >> 4)) {
                        return 0xFFFFFFFF;
                    }
                    return 0xFFFFFFFF;
                }
            }
            t22 = ((int)(a5 + 0xF) >> 4);
        }
    }
    if ((int)t22 < (int)((int)(a5 + 0xF) >> 4)) {
        t25 = 0xFFFFFFFF;
    }
    return t25;
}

int nlSysUseLatency2V(void)
{
    int t0;
    int t1;

    t0 = (((struct o14_int *)0xC2AED2C)->v);
    if (t0 == 1) {
        (((struct o0_uint *)0xC2AED2C)->v) = 0x20;
        t1 = *(int *)0xC2AECD4;
        *(unsigned int *)0xC2AECD4 = (t1 | 0x10);
        (((struct oC_uint *)0xC2AED2C)->v) = 0x2;
        return (t1 | 0x10);
    }
    return kmChangeLatencyModel(0x1, 0x20);
}

int nlSysSetDirectListTypeLatency2V(int a4)
{
    int t2;
    int t3;

    t2 = 0x20;
    if (a4 != 0) {
        t2 = 0x22;
        if (a4 != 2) {
            t2 = 0x24;
            if (a4 != 4) {
                t2 = 0x20;
            }
        }
    }
    t3 = (((struct o14_int *)0xC2AED2C)->v);
    if (t3 == 1) {
        (((struct o0_uint *)0xC2AED2C)->v) = t2;
        return t3;
    }
    return kmChangeLatencyModel(0x1, t2);
}

int nlSysSetVertexBufferBaseAddress(int a4)
{
    int t0;

    t0 = *(int *)0xC2AED40;
    if (t0 == 1) {
        *(unsigned int *)0xC2AECF4 = (0xA0000000 | a4);
        return t0;
    }
    return kmfSetVertexBufferBaseAddress((0xA0000000 | a4), 0x0);
}

int nlCreateVertexBuffer(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0xC2AED40;
    if (t0 == 1) {
        t1 = nlCreateVertexBuffer_clx22();
        t3 = t1;
    } else {
        t2 = nlCreateVertexBuffer_clx16();
        t3 = t2;
    }
    return t3;
}

float nlTan(int a4)
{
    float u0;
    float u1;
    float u2;
    float u3;
    int t4;
    float u5;
    float u6;
    int t7;
    float u8;
    float u9;

    if ((0x7FFF & (unsigned short)a4) != 0x4000) {
        u0 = 6.283185f;
        u1 = 65536.0f;
        u2 = 1.5707963f;
        u3 = 0.5f;
        t4 = 0xD;
        u5 = ((float)(int)(((((float)(unsigned short)(unsigned short)a4 * u0) / u1) / u2) + u3) * u2);
        u6 = 0.0f;
        while ((int)t4 >= (int)0x3) {
            t7 = t4;
            t4 = (t4 - 2);
            u5 = (float)t7;
            u5 = (u5 - u6);
            u6 = (((((float)(unsigned short)(unsigned short)a4 * u0) / u1) - ((float)(int)(((((float)(unsigned short)(unsigned short)a4 * u0) / u1) / u2) + u3) * u2)) * ((((float)(unsigned short)(unsigned short)a4 * u0) / u1) - ((float)(int)(((((float)(unsigned short)(unsigned short)a4 * u0) / u1) / u2) + u3) * u2)));
            u6 = (u6 / u5);
        }
        if (((int)(((((float)(unsigned short)(unsigned short)a4 * u0) / u1) / u2) + u3) & 0x1) == 0) {
            return (((((float)(unsigned short)(unsigned short)a4 * u0) / u1) - ((float)(int)(((((float)(unsigned short)(unsigned short)a4 * u0) / u1) / u2) + u3) * u2)) / (1.0f - u6));
        }
        if ((((((float)(unsigned short)(unsigned short)a4 * u0) / u1) - ((float)(int)(((((float)(unsigned short)(unsigned short)a4 * u0) / u1) / u2) + u3) * u2)) / (1.0f - u6)) != 0.0f) {
            return ((-1.0f) / (((((float)(unsigned short)(unsigned short)a4 * u0) / u1) - ((float)(int)(((((float)(unsigned short)(unsigned short)a4 * u0) / u1) / u2) + u3) * u2)) / (1.0f - u6)));
        }
        u8 = 3.4028235e+38f;
        return u8;
    }
    u9 = 3.4028235e+38f;
    return u9;
}

int nlCopyMatrix(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    float u3;

    if (a4 == 0) {
        if (a5 != 0) {
            return nlLoadMatrix(a5);
        }
        return 0;
    }
    if (a5 == 0) {
        return nlGetMatrix(a4);
    }
    t0 = 0x10;
    t1 = a4;
    t2 = a5;
    do {
        u3 = *(float *)((t2 + 0x0));
        t2 = (t2 + 0x4);
        t0 = (t0 - 0x1);
        *(float *)((t1 + 0x0)) = u3;
        t1 = (t1 + 0x4);
    } while (t0 != 0);
    return 0;
}

int nlLineSendHeader(int a4)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    int t7;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t10;

    u0 = 0.5f;
    u1 = (((struct o0_float *)0xC14A824)->v);
    (((struct o0_float *)0xC2B7624)->v) = (u1 * u0);
    u2 = (((struct o4_float *)0xC14A824)->v);
    (((struct o4_float *)0xC2B7624)->v) = (u2 * u0);
    u3 = (((struct o0_float *)0xC2B7624)->v);
    (((struct o8_float *)0xC2B7624)->v) = ((-1.0f) - u3);
    u4 = (((struct o4_float *)0xC2B7624)->v);
    (((struct oC_float *)0xC2B7624)->v) = ((-1.0f) - u4);
    u5 = (((struct o0_float *)0xC2B7624)->v);
    (((struct o0_float *)0xC14AA08)->v) = u5;
    u6 = (((struct o4_float *)0xC2B7624)->v);
    (((struct o14_float *)0xC14AA08)->v) = (-u6);
    t7 = *(int *)0xC2B8CBC;
    if ((a4 & 0x1) != 0) {
        t10 = *(int *)((t7 + 0x8));
        t16 = 0xC14AA68;
    } else {
        t10 = *(int *)((t7 + 0x0));
        t16 = 0xC14AA48;
    }
    t12 = *(int *)((t16 + 0x0));
    *(unsigned int *)((t16 + 0x0)) = (t12 & 0xFFFCFFFF);
    t13 = *(int *)0xC14A650;
    t14 = *(int *)((t16 + 0x0));
    *(unsigned int *)((t16 + 0x0)) = (t14 | ((t13 << 16) | 0x8C0000));
    (((struct o0_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t10 >> 16) >> 8);
    (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t10 >> 16) >> 8);
    t15 = ((0x3FFFFFF & t10) | 0xE0000000);
    do {
        t17 = *(int *)((t16 + 0x0));
        t16 = (t16 + 0x4);
        *(unsigned int *)((t15 + 0x0)) = t17;
        t15 = (t15 + 0x4);
    } while ((unsigned int)t15 < (unsigned int)(((0x3FFFFFF & t10) | 0xE0000000) + 0x20));
    prefetch(((0x3FFFFFF & t10) | 0xE0000000));
    return (((0x3FFFFFF & t10) | 0xE0000000) + 0x20);
}

int nlLineCalcFogA(int a4)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    int t8;
    int t13;

    u0 = *(float *)((a4 + 0x4));
    u1 = (((struct o0_float *)0xC2B7624)->v);
    u2 = *(float *)((a4 + 0x8));
    u3 = (((struct o4_float *)0xC2B7624)->v);
    u4 = (((struct o8_float *)0xC2B7624)->v);
    u5 = *(float *)((a4 + 0x0));
    u6 = (((struct oC_float *)0xC2B7624)->v);
    t8 = 0x2;
    if (!(u5 > (u1 * u2))) {
        t8 = 0x0;
        if ((u4 * u2) > u5) {
            t8 = 0x1;
        }
    }
    t13 = (t8 | 0x8);
    if (!(u0 > (u3 * u2))) {
        t13 = t8;
        if ((u6 * u2) > u0) {
            t13 = (t8 | 0x4);
        }
    }
    return t13;
}

int nlSpriteSetVtxContext(int a4)
{
    int t1;
    int t6;
    float u7;
    int t8;
    float u9;

    *(unsigned int *)((a4 + 0x0)) = 0xA0000009;
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    *(unsigned int *)((a4 + 0x8)) = 0x4C0;
    *(unsigned int *)((a4 + 0xC)) = 0x0;
    nlSetTextureParameter(a4);
    t1 = *(int *)((a4 + 0xC));
    *(unsigned short *)((a4 + 0x14)) = 0x0;
    if ((((unsigned int)t1 >> 27) & 0x7) != 0) {
        if ((((unsigned int)t1 >> 27) & 0x7) != 2) {
            if ((((unsigned int)t1 >> 27) & 0x7) != 5) {
                if ((((unsigned int)t1 >> 27) & 0x7) == 6) {
                    *(unsigned short *)((a4 + 0x14)) = 0x1;
                }
            } else {
                *(unsigned short *)((a4 + 0x14)) = 0x1;
            }
        } else {
            *(unsigned short *)((a4 + 0x14)) = 0x1;
        }
    } else {
        *(unsigned short *)((a4 + 0x14)) = 0x1;
    }
    t6 = *(int *)((a4 + 0x8));
    u7 = *(float *)((0xC0D6880 + ((((unsigned int)((unsigned int)t6 >> 2) >> 1) & 0x7) << 2)));
    *(float *)((a4 + 0x18)) = u7;
    t8 = *(int *)((a4 + 0x8));
    u9 = *(float *)((0xC0D6880 + ((t8 & 0x7) << 2)));
    *(float *)((a4 + 0x1C)) = u9;
    return 0x1C;
}

int nlSpriteF2C(float f4)
{
    float u0;
    float u1;
    float u4;
    float u2;
    int t5;

    u0 = 255.0f;
    u1 = 2.1474836e+09f;
    u4 = (f4 * u0);
    if ((f4 * u0) > u1) {
        u2 = -4.2949673e+09f;
        u4 = ((f4 * u0) + u2);
    }
    t5 = (int)u4;
    if ((unsigned int)(int)u4 > (unsigned int)0xFF) {
        t5 = 0xFF;
    }
    return t5;
}

int nlsndCheckPackLoadError(int a4, int a5)
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

    if ((int)a5 >= 0) {
        if ((int)a5 >= (int)0x8) {
            return 0xFFFFFFFF;
        }
        t0 = 0xC0D68D4;
        t1 = a4;
        t2 = 0x0;
        for (;;) {
            t3 = *(signed char *)((t0 + 0x0));
            t0 = (t0 + 0x1);
            t4 = *(signed char *)((t1 + 0x0));
            t1 = (t1 + 0x1);
            if (t4 != t3) break;
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)0x4) {
                t0 = a5;
                t0 = (t0 << 1);
                t1 = 0xC2B77DC;
                t0 = (t0 + a5);
                t0 = (t0 << 2);
                t5 = *(int *)((t1 + t0));
                t0 = t5;
                if (t0 != -1) {
                    t0 = 0xFFFFFFFD;
                    return t0;
                }
                t6 = *(int *)((a4 + 0x8));
                t7 = *(int *)0xA0800088;
                t1 = 0xC2B76F4;
                t8 = *(int *)((t1 + 0x0));
                if ((int)(t6 + t8) > (int)t7) {
                    t0 = 0xFFFFFFFC;
                    return t0;
                }
                t9 = *(int *)0xC2B76FC;
                if (t9 != 0) {
                    t0 = 0xFFFFFFFB;
                    return t0;
                }
                t0 = 0x0;
                return t0;
            }
        }
        return 0xFFFFFFFE;
    }
    return 0xFFFFFFFF;
}

int nlsndSeqRequest(int a4)
{
    int t0;
    int t10;
    int t1;
    int t2;
    int t7;
    int t3;
    int t4;

    t0 = (((struct o0_int *)0xC2B76DC)->v);
    if (t0 != 0) {
        return 0xFFFFFFFD;
    }
    (((struct o0_uint *)0xC2B76DC)->v) = 0xFFFFFFFF;
    t10 = 0xFFFFFFFE;
    if ((0x80 & a4) != 0) {
        t1 = (((struct o4_int *)0xC2B76DC)->v);
        t2 = *(int *)((t1 + 0x0));
        t7 = 0xFFFFFFFF;
        if (t2 == 0) {
            t3 = (((struct o4_int *)0xC2B76DC)->v);
            (((struct o4_uint *)0xC2B76DC)->v) = (t3 + 0x4);
            *(unsigned int *)((((t3 + 0x4) - 4) + 0x0)) = a4;
            t4 = (((struct o4_int *)0xC2B76DC)->v);
            if (t4 == 0xA0800500) {
                (((struct o4_uint *)0xC2B76DC)->v) = 0xA0800400;
            }
            t7 = 0x0;
        }
        t10 = t7;
    }
    (((struct o0_uint *)0xC2B76DC)->v) = 0x0;
    return t10;
}

int nlsndStreamOpen(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t8;
    int t20;
    int t9;
    int t10;
    int t11;
    int t12;
    int t17;
    int t25;

    if ((short)a4 == 1) {
        t0 = 0x0;
        t1 = 0x0;
        for (;;) {
            t2 = *(signed char *)((((((((short)t1 << 1) + (short)t1) << 2) << 1) + 0xC2B771C) + 0x0));
            if (t2 == 0) {
                t3 = *(int *)((((((((short)t1 << 1) + (short)t1) << 2) << 1) + 0xC2B771C) + 0x8));
                t0 = t3;
                if (t0 != 0) {
                    t1 = (t1 + 0x1);
                    if ((int)(short)t1 >= (int)0x8) break;
                    continue;
                }
                if (0x1 == 0) {
                    return 0xFFFFFFFF;
                }
                *(unsigned char *)((((((((short)t1 << 1) + (short)t1) << 2) << 1) + 0xC2B771C) + 0x0)) = 0x1;
                return t1;
            }
            t1 = (t1 + 0x1);
            if ((int)(short)t1 >= (int)0x8) break;
        }
        t8 = 0xFFFFFFFF;
        if (0x0 != 0) {
            *(unsigned char *)((((((((short)t1 << 1) + (short)t1) << 2) << 1) + 0xC2B771C) + 0x0)) = 0x1;
            t8 = t1;
        }
        t25 = t8;
    } else {
        t20 = 0xFFFFFFFF;
        if ((short)a4 == 2) {
            t9 = 0x0;
            t10 = 0x0;
            for (;;) {
                t11 = *(signed char *)((((((((short)t10 << 1) + (short)t10) << 2) << 1) + 0xC2B771C) + 0x0));
                if (t11 == 0) {
                    t12 = *(int *)((((((((short)t10 << 1) + (short)t10) << 2) << 1) + 0xC2B771C) + 0x8));
                    t9 = t12;
                    if (t9 != 0) break;
                    t10 = (t10 + 0x1);
                    if ((int)(short)t10 >= (int)0x8) {
                        if (0x0 == 0) {
                            return 0xFFFFFFFF;
                        }
                        *(unsigned char *)((((((((short)t10 << 1) + (short)t10) << 2) << 1) + 0xC2B771C) + 0x0)) = 0x1;
                        return t10;
                    }
                    continue;
                }
                t10 = (t10 + 0x1);
                if ((int)(short)t10 >= (int)0x8) {
                    if (0x0 == 0) {
                        return 0xFFFFFFFF;
                    }
                    *(unsigned char *)((((((((short)t10 << 1) + (short)t10) << 2) << 1) + 0xC2B771C) + 0x0)) = 0x1;
                    return t10;
                }
            }
            t17 = 0xFFFFFFFF;
            if (0x1 != 0) {
                *(unsigned char *)((((((((short)t10 << 1) + (short)t10) << 2) << 1) + 0xC2B771C) + 0x0)) = 0x1;
                t17 = t10;
            }
            t20 = t17;
        }
        t25 = t20;
    }
    return t25;
}

int nlsndG2DmaRequest(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = *(int *)((a4 + 0x0));
    if (t0 != 1) {
        return 0xFFFFFFFF;
    }
    if ((a5 & 0x1F) != 0) {
        return 0xFFFFFFFE;
    }
    if ((a6 & 0x1F) != 0) {
        return 0xFFFFFFFD;
    }
    if ((0x1F & a7) != 0) {
        return 0xFFFFFFFC;
    }
    t1 = *(int *)0xC2B7714;
    if (t1 == 0) {
        if ((unsigned int)0x0 < (unsigned int)((unsigned int)a7 >> 2)) {
            t2 = a6;
            t3 = a5;
            t4 = 0x0;
            do {
                t5 = *(int *)((t3 + 0x0));
                t3 = (t3 + 0x4);
                *(unsigned int *)((t2 + 0x0)) = t5;
                t4 = (t4 + 0x1);
                t2 = (t2 + 0x4);
            } while ((unsigned int)t4 < (unsigned int)((unsigned int)a7 >> 2));
        }
        return 0x0;
    }
    if (t1 != 1) {
        return 0xFFFFFFFB;
    }
    return 0x0;
}

int nlsndG2DmaGetStatus(int a4)
{
    int t0;
    int t1;

    t0 = *(int *)((a4 + 0x0));
    if (t0 != 1) {
        return 0xFFFFFFFF;
    }
    t1 = *(int *)0xC2B7714;
    if (t1 == 0) {
        return 0x100;
    }
    if (t1 != 1) {
        return 0xFFFFFFFB;
    }
    return 0x0;
}

int nlDispStripLoadPalette(int a4, int a5)
{
    int t0;
    int t18;
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
    int t12;
    int t13;

    t0 = *(int *)0xC14A644;
    t18 = 0x0;
    if (t0 == 0) {
        t1 = (((struct o0_short *)0xC2B7BC4)->v);
        t18 = 0x1;
        if ((int)a4 < (int)t1) {
            t2 = (((struct o14_int *)0xC2B7BC4)->v);
            t3 = *(short *)(((((a4 << 2) << 1) + t2) + 0x4));
            if (t3 != 0) {
                t4 = *(short *)(((((a4 << 2) << 1) + t2) + 0x4));
                *(unsigned short *)(((((a4 << 2) << 1) + t2) + 0x4)) = (t4 + 0x1);
                t18 = 0x0;
            } else {
                t5 = *(short *)((a5 + 0x2));
                t6 = *(int *)((a5 + 0x8));
                t7 = nlSearchPalette(t5, t6);
                t18 = 0x1;
                if ((int)t7 >= 0) {
                    t8 = *(signed char *)((a5 + 0x2));
                    *(unsigned char *)(((((a4 << 2) << 1) + t2) + 0x2)) = t8;
                    t9 = *(int *)((a5 + 0x8));
                    *(unsigned char *)(((((a4 << 2) << 1) + t2) + 0x3)) = ((int)(t9 + 0xF) >> 4);
                    *(unsigned short *)(((((a4 << 2) << 1) + t2) + 0x4)) = 0x1;
                    *(unsigned short *)(((((a4 << 2) << 1) + t2) + 0x6)) = a4;
                    *(unsigned short *)(((((a4 << 2) << 1) + t2) + 0x0)) = t7;
                    t10 = *(int *)((a5 + 0x8));
                    nlSetPaletteMap(t7, t10);
                    t12 = *(int *)((a5 + 0x8));
                    t13 = *(int *)((a5 + 0x4));
                    nlSetPaletteData(((t7 << 2) << 2), t13, t12);
                    t18 = 0x0;
                }
            }
        }
    }
    return t18;
}

int nlstripSetVertexContext(int a4)
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

    t0 = *(int *)0xC2B2FC8;
    *(unsigned int *)((t0 + 0x0)) = 0x600608;
    t1 = *(int *)((a4 + 0x0));
    t2 = *(int *)0xC2B2FC8;
    *(unsigned int *)((t2 + 0x8)) = t1;
    t3 = *(int *)(((a4 + 0x4) + 0x0));
    t4 = *(int *)0xC2B2FC8;
    *(unsigned int *)((t4 + 0xC)) = t3;
    t5 = *(int *)((((a4 + 0x4) + 0x4) + 0x0));
    t6 = *(int *)0xC2B2FC8;
    *(unsigned int *)((t6 + 0x20)) = t5;
    t7 = *(int *)(((((a4 + 0x4) + 0x4) + 0x4) + 0x0));
    t8 = *(int *)0xC2B2FC8;
    (((struct o44_uint *)(t8))->v) = t7;
    t9 = *(int *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    t10 = *(int *)0xC2B2FC8;
    (((struct o40_uint *)(t10))->v) = t9;
    t11 = *(int *)0xC2B2FC8;
    kmProcessVertexRenderState(t11);
    t13 = *(int *)0xC2B2FC8;
    t14 = (((struct o90_int *)(t13))->v);
    (((struct o90_uint *)(t13))->v) = (t14 & 0xFFFCFF3F);
    t15 = *(int *)0xC2B2FC8;
    t16 = (((struct o0_int *)0xC2B7948)->v);
    t17 = (((struct o90_int *)(t15))->v);
    (((struct o90_uint *)(t15))->v) = (t17 | t16);
    t18 = *(int *)0xC2B2FC8;
    t19 = (((struct o98_int *)(t18))->v);
    (((struct o98_uint *)(t18))->v) = (t19 & 0x31FF0FF);
    t20 = *(int *)0xC2B2FC8;
    t21 = (((struct o4_int *)0xC2B7948)->v);
    t22 = *(int *)0xC14A648;
    t23 = (((struct o98_int *)(t20))->v);
    (((struct o98_uint *)(t20))->v) = (t23 | ((((t22 ^ 0xFC) << 16) << 8) | t21));
    t24 = *(int *)0xC2B2FC8;
    return kmSetVertexRenderState(t24);
}

int kmSetPaletteBankData(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = (a5 + a4);
    if ((int)(a5 + a4) > (int)0x400) {
        t0 = 0x3FF;
    }
    if ((int)a4 < (int)t0) {
        t1 = ((a4 << 2) + a6);
        t2 = ((a4 << 2) + 0x1000);
        t3 = a4;
        do {
            t4 = *(int *)((t1 + 0x0));
            t1 = (t1 + 0x4);
            kmiWriteRegister(t2, t4);
            t3 = (t3 + 0x1);
            t2 = (t2 + 0x4);
        } while ((int)t3 < (int)t0);
    }
    return 0x0;
}

int kmSetPixelClipping(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;

    if ((int)a4 <= (int)a6) {
        if ((int)a5 > (int)a7) {
            return 0xDDDD;
        }
        t0 = a6;
        if ((int)a6 > (int)0x7FF) {
            t0 = 0x7FF;
        }
        t1 = a7;
        if ((int)a7 > (int)0x7FF) {
            t1 = 0x7FF;
        }
        t2 = *(int *)0xC2EA6A4;
        t4 = a4;
        t5 = a5;
        t6 = t0;
        t7 = t1;
        if (t2 == 4) {
            t4 = ((a4 + 0x1) & 0xFFFFFFFE);
            t5 = ((a5 + 0x1) & 0xFFFFFFFE);
            t6 = (t0 & 0xFFFFFFFE);
            t7 = (t1 & 0xFFFFFFFE);
        }
        (((struct o0_uint *)0xC2EA934)->v) = ((t4 & 0x7FF) | ((t6 & 0x7FF) << 16));
        (((struct o4_uint *)0xC2EA934)->v) = (((t7 & 0x7FF) << 16) | (t5 & 0x7FF));
        return 0x0;
    }
    return 0xDDDD;
}

int ovMdlDeleteTbl(int a4)
{
    int t0;
    int t5;
    int t1;
    int t2;

    t0 = memcmp((a4 + 0x30), 0xC174DC8, 0x10);
    t5 = 0xFFFFFFFF;
    if (t0 == 0) {
        t1 = 0x1;
        for (;;) {
            t2 = memcmp((((((t1 << 2) << 2) << 1) + (a4 + 0x20)) + 0x10), 0xC174DD8, 0x10);
            if (t2 != 0) {
                ovLibDeleteTbl(((((t1 << 2) << 2) << 1) + (a4 + 0x20)));
                t1 = (t1 + 0x1);
                continue;
            }
            break;
        }
        t5 = 0x0;
    }
    return t5;
}

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

int buExit(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    for (;;) {
        t1 = vmsfs_c_getstate(t0);
        if (t1 != 0) break;
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            return buExitForce();
        }
    }
    return 0xFFFFFFFF;
}

int syCfgGetSoundMode(int a4)
{
    int t0;
    int t1;
    int t2;

    if (a4 != 0) {
        *(unsigned int *)((a4 + 0x0)) = 0x0;
        t0 = *(int *)0xC177AC8;
        if (t0 != 0) {
            t1 = syBtCfgSet(0x0);
            if (t1 != -1) {
                t2 = *(signed char *)0x8C00007E;
                if ((signed char)t2 == 0) {
                    *(unsigned int *)((a4 + 0x0)) = 0x0;
                    return 0x0;
                }
                if ((signed char)t2 == 1) {
                    *(unsigned int *)((a4 + 0x0)) = 0x1;
                    return 0x0;
                }
                return 0xFFFFFFFF;
            }
            return 0xFFFFFFFF;
        }
        return 0xFFFFFFFF;
    }
    return 0xFFFFFFFF;
}

int kmiInitializeDMA(void)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)0xFFA0002C;
    *(unsigned int *)0xFFA00020 = 0x0;
    *(unsigned int *)0xFFA00024 = 0x0;
    *(unsigned int *)0xFFA00028 = 0x0;
    *(unsigned int *)0xFFA0002C = 0x12C0;
    *(unsigned int *)0xFFA00040 = 0x8201;
    *(unsigned int *)0xA05F6884 = 0x0;
    *(unsigned int *)0xFF000038 = 0x10;
    *(unsigned int *)0xFF00003C = 0x10;
    *(unsigned int *)0xC2BF660 = 0x0;
    *(unsigned int *)0xC2BF664 = 0x0;
    *(unsigned int *)0xC2BF66C = 0x0;
    *(unsigned int *)0xC2BF670 = 0x0;
    *(unsigned int *)0xC2BF668 = 0x0;
    *(unsigned int *)0xC2BF674 = 0x7;
    *(unsigned int *)0xC2BF678 = 0x1;
    t1 = 0x0;
    do {
        t2 = (0xC2BF460 + t1);
        t1 = (t1 + 0x20);
        *(unsigned int *)((t2 + 0x18)) = 0x0;
        *(unsigned int *)(((t2 + 0x100) + 0x18)) = 0x8;
    } while ((unsigned int)t1 < (unsigned int)0x100);
    return 0x8;
}

int kmiDMAHazardReset(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    *(unsigned int *)0xA05F6808 = 0x0;
    *(unsigned int *)0xA05F8008 = 0x1;
    *(unsigned int *)0xA05F8008 = 0x0;
    do {
        t0 = *(int *)0xA05F6808;
    } while (t0 != 0);
    t1 = *(int *)0xFFA0002C;
    *(unsigned int *)0xFFA0002C = (t1 & 0xFFFFFFFE);
    *(unsigned int *)0xA05F8008 = 0x1;
    *(unsigned int *)0xA05F8008 = 0x0;
    (((struct o0_uint *)0xC2BF660)->v) = 0x0;
    (((struct o4_uint *)0xC2BF660)->v) = 0x0;
    (((struct oC_uint *)0xC2BF660)->v) = 0x0;
    (((struct o10_uint *)0xC2BF660)->v) = 0x0;
    (((struct o8_uint *)0xC2BF660)->v) = 0x0;
    (((struct o14_uint *)0xC2BF660)->v) = 0x7;
    (((struct o18_uint *)0xC2BF660)->v) = 0x7;
    t2 = 0x0;
    do {
        t3 = (0xC2BF460 + t2);
        t2 = (t2 + 0x20);
        *(unsigned int *)((t3 + 0x18)) = 0x0;
        *(unsigned int *)(((t3 + 0x100) + 0x18)) = 0x8;
    } while ((unsigned int)t2 < (unsigned int)0x100);
    return 0x0;
}

int kmiCh2DMAtoTA(int a4, int a5)
{
    (((struct o0_uint *)0xFFA00020)->v) = a4;
    (((struct o4_uint *)0xFFA00020)->v) = 0x0;
    (((struct o8_uint *)0xFFA00020)->v) = ((unsigned int)((unsigned int)((unsigned int)((a5 + 0x1F) & 0xFFFFFFE0) >> 2) >> 2) >> 1);
    (((struct oC_uint *)0xFFA00020)->v) = 0x12C1;
    if (((a5 + 0x1F) & 0xFFFFFFE0) != 0) {
        (((struct o0_uint *)0xA05F6800)->v) = 0x10000000;
        (((struct o4_uint *)0xA05F6800)->v) = ((a5 + 0x1F) & 0xFFFFFFE0);
        (((struct o8_uint *)0xA05F6800)->v) = 0x1;
        return 0x1;
    }
    return 0x0;
}

int kmiTAallocEx(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = ((~(((~a4) + 0x1) & 0x1F)) + 0x1);
    if ((int)a4 >= 0) {
        t0 = (a4 & 0x1F);
    }
    t1 = a4;
    if (t0 != 0) {
        t1 = (a4 + (0x20 - t0));
    }
    t2 = kmiFBallocQueue(0x0, (t1 << 1), a5, 0x2000);
    if (t2 == 0) {
        t3 = *(int *)((a5 + 0x0));
        t4 = kmyConvertAddress64to32(t3);
        *(unsigned int *)((a5 + 0x0)) = t4;
        t5 = kmyConvertAddress64to32((t3 + 0x4));
        *(unsigned int *)((a6 + 0x0)) = t5;
    }
    return t2;
}

int kmiFBFitBlock(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t11;
    int t12;
    int t14;
    int t23;

    t0 = *(int *)((a4 + 0xC));
    t1 = *(int *)((a4 + 0x10));
    if ((unsigned int)a5 <= (unsigned int)0x2B0) {
        if ((unsigned int)((0x800 + t0) & 0xFFFFF800) < (unsigned int)(t0 + t1)) {
            t2 = *(int *)((a4 + 0xC));
            if ((unsigned int)(((0x800 + t0) & 0xFFFFF800) - t2) >= (unsigned int)a5) {
                t23 = *(int *)((a4 + 0xC));
            } else {
                t23 = 0xFFFFFFFF;
                if ((unsigned int)((t0 + t1) - ((0x800 + t0) & 0xFFFFF800)) >= (unsigned int)a5) {
                    t23 = ((0x800 + t0) & 0xFFFFF800);
                }
            }
        } else {
            t23 = *(int *)((a4 + 0xC));
        }
    } else {
        t11 = *(int *)((a4 + 0xC));
        if ((unsigned int)(((0x800 + t0) & 0xFFFFF800) - t11) >= (unsigned int)0x2B0) {
            t12 = *(int *)((a4 + 0xC));
            t23 = (((0x800 + t0) & 0xFFFFF800) - 688);
            if ((unsigned int)(((((0x800 + t0) & 0xFFFFF800) - t12) + a5) - 688) > (unsigned int)(t0 + t1)) {
                t23 = 0xFFFFFFFF;
            }
        } else {
            t14 = *(int *)((a4 + 0xC));
            t23 = 0xFFFFFFFF;
            if ((unsigned int)((((((0x800 + t0) & 0xFFFFF800) + 0x800) - t14) + a5) - 688) <= (unsigned int)(t0 + t1)) {
                t23 = ((((0x800 + t0) & 0xFFFFF800) + 0x800) - 688);
            }
        }
    }
    return t23;
}

void kmiWriteRegisters(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = 0x0;
    t1 = a7;
    while ((unsigned int)t0 < (unsigned int)a4) {
        t2 = *(int *)(((((t0 << 2) << 1) + a5) + 0x0));
        t3 = *(int *)(((((t0 << 2) << 1) + a5) + 0x4));
        t1 = t3;
        *(unsigned int *)(((t2 + 0xA05F8000) + 0x0)) = t1;
        t0 = (t0 + 0x1);
    }
}

int kmfSetTimeOutCount(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t7;
    int t11;
    int t15;

    *(unsigned int *)0xC2EA8A8 = a4;
    *(unsigned int *)0xC2EA8A4 = a5;
    if (a5 == 0) {
        t0 = *(int *)0xC2EA684;
        *(unsigned int *)0xC2EA684 = (t0 | 0x10);
    } else {
        t1 = *(int *)0xA05F689C;
        switch (t1) {
        case 4:
            t15 = *(int *)0xC2EA684;
            *(unsigned int *)0xC2EA684 = (t15 | 0x10);
            break;
        case 5:
            t11 = *(int *)0xC2EA684;
            *(unsigned int *)0xC2EA684 = (t11 | 0x10);
            break;
        case 6:
            t7 = *(int *)0xC2EA684;
            *(unsigned int *)0xC2EA684 = (t7 | 0x10);
            break;
        case 8:
            t3 = *(int *)0xC2EA684;
            *(unsigned int *)0xC2EA684 = (t3 | 0x10);
            break;
        default:
            t2 = *(int *)0xC2EA684;
            *(unsigned int *)0xC2EA684 = (t2 & 0xFFFFFFEF);
            break;
        }
    }
    return 0x0;
}

int kmiCheckRenderTexture(int a4)
{
    int t0;
    int t1;
    int t2;
    int t6;
    int t7;

    t0 = *(int *)((a4 + 0x18));
    if ((t0 & 4) == 0) {
        t1 = *(int *)((a4 + 0x4));
        if (t1 != 1) {
            return 0x4;
        }
        t2 = *(int *)((a4 + 0x8));
        t6 = 0x3;
        if ((t2 & 0x38000000) != 0) {
            t6 = 0x1;
            if ((t2 & 0x38000000) != 0x8000000) {
                t6 = 0x2;
                if ((t2 & 0x38000000) != 0x10000000) {
                    t6 = a4;
                }
            }
        }
        t7 = *(int *)0xC2EA94C;
        *(unsigned int *)0xC2EAB84 = ((t7 & 0xFFFFFFF8) | t6);
        return 0x0;
    }
    return 0x4;
}

int kmLoadVQCodebook(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t8;
    int t9;
    int t14;

    t0 = *(int *)((a4 + 0x0));
    if ((unsigned short)t0 == 3) {
        t1 = *(int *)((a4 + 0xC));
        t2 = kmtex_GetTextureLevel(t1, t1);
        t3 = *(int *)((a4 + 0x18));
        t4 = 0xC175DC4;
        if ((t3 & 1) != 0) {
            t4 = 0xC175DE0;
        }
        t5 = *(int *)(((t2 << 2) + t4));
        t6 = *(int *)((a4 + 0x1C));
        kmiCopyToFrameBuffer(t6, a5, t5);
        t14 = 0x0;
    } else {
        t8 = *(int *)((a4 + 0x18));
        t14 = 0x4;
        if ((t8 & 8) != 0) {
            t9 = *(int *)((a4 + 0x1C));
            kmiCopyToFrameBuffer(t9, a5, 0x800);
            t14 = 0x0;
        }
    }
    return t14;
}

int kmtex_TextureSize_Twiddled(int a4)
{
    int t0;
    int t1;
    int t2;
    int t19;
    int t11;
    int t12;
    int t13;
    int t4;
    int t8;
    int t20;
    int t21;

    t0 = *(int *)((a4 + 0x10));
    t1 = *(int *)((a4 + 0xC));
    t2 = *(int *)((a4 + 0x18));
    t19 = (t1 * t0);
    if ((t2 & 0x1) != 0) {
        t4 = ((unsigned int)t0 >> 1);
        if ((unsigned int)((unsigned int)t1 >> 1) < (unsigned int)((unsigned int)t0 >> 1)) {
            t4 = ((unsigned int)t1 >> 1);
        }
        t11 = ((unsigned int)t0 >> 1);
        t12 = ((unsigned int)t1 >> 1);
        t13 = (t1 * t0);
        if ((unsigned int)t4 > (unsigned int)0x1) {
            t11 = ((unsigned int)t0 >> 1);
            t12 = ((unsigned int)t1 >> 1);
            t13 = (t1 * t0);
            do {
                t8 = (t12 * t11);
                t12 = ((unsigned int)t12 >> 1);
                t11 = ((unsigned int)t11 >> 1);
                t4 = ((unsigned int)t4 >> 1);
                t13 = (t13 + t8);
            } while ((unsigned int)t4 > (unsigned int)0x1);
        }
        t19 = (t13 + (t12 * t11));
        if (t12 == t11) {
            t19 = (t13 + 0x4);
        }
    }
    t20 = *(int *)((a4 + 0x4));
    t21 = (t19 << 2);
    if (t20 == 1) {
        t21 = (t19 << 1);
    }
    return t21;
}

int kmtex_TextureSize_Palettized(int a4)
{
    int t0;
    int t1;
    int t2;
    int t19;
    int t11;
    int t12;
    int t13;
    int t4;
    int t8;
    int t14;
    int t16;
    int t22;
    int t24;

    t0 = *(int *)((a4 + 0x10));
    t1 = *(int *)((a4 + 0xC));
    t2 = *(int *)((a4 + 0x18));
    t19 = (t1 * t0);
    if ((t2 & 0x1) != 0) {
        t4 = ((unsigned int)t0 >> 1);
        if ((unsigned int)((unsigned int)t1 >> 1) < (unsigned int)((unsigned int)t0 >> 1)) {
            t4 = ((unsigned int)t1 >> 1);
        }
        t11 = (t1 * t0);
        t12 = ((unsigned int)t1 >> 1);
        t13 = ((unsigned int)t0 >> 1);
        if ((unsigned int)t4 > (unsigned int)0x1) {
            t11 = (t1 * t0);
            t12 = ((unsigned int)t1 >> 1);
            t13 = ((unsigned int)t0 >> 1);
            do {
                t8 = (t12 * t13);
                t12 = ((unsigned int)t12 >> 1);
                t13 = ((unsigned int)t13 >> 1);
                t4 = ((unsigned int)t4 >> 1);
                t11 = (t11 + t8);
            } while ((unsigned int)t4 > (unsigned int)0x1);
        }
        t14 = (t11 + (t12 * t13));
        if (t12 == t13) {
            t14 = (t11 + 0x1);
        }
        t16 = *(int *)((a4 + 0x8));
        t19 = (t14 + 0xB);
        if (t16 == 0x28000000) {
            t19 = (t14 + 0x2B);
        }
    }
    t22 = *(int *)((a4 + 0x8));
    t24 = t19;
    if (t22 == 0x28000000) {
        t24 = ((unsigned int)t19 >> 1);
        if (t19 == 1) {
            t24 = 0x1;
        }
    }
    return t24;
}

int kmiConvertUVnum(int a4)
{
    int t10;

    t10 = 0x0;
    if (a4 != 8) {
        t10 = 0x1;
        if (a4 != 16) {
            t10 = 0x2;
            if (a4 != 32) {
                t10 = 0x3;
                if (a4 != 64) {
                    t10 = 0x4;
                    if (a4 != 0x80) {
                        t10 = 0x5;
                        if (a4 != 0x100) {
                            t10 = 0x6;
                            if (a4 != 0x200) {
                                t10 = a4;
                                if (a4 == 0x400) {
                                    t10 = 0x7;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return t10;
}

int kmSetCheapShadowMode(int a4)
{
    int t0;

    if ((int)a4 < 0) {
        *(unsigned int *)0xC1782FC = 0x1;
    } else {
        *(unsigned int *)0xC1782FC = 0x0;
    }
    t0 = *(int *)0xC1782FC;
    kmiWriteRegister(0x74, (((0x1 - t0) << 8) | (unsigned char)a4));
    return 0x0;
}

int kmiPutGlobalParam(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;
    int t7;
    int t8;

    t0 = *(int *)0xC2B8D1C;
    t1 = (((struct o0_int *)0xC2B8CBC)->v);
    (((struct o4_uint *)0xC2B8CBC)->v) = ((t0 << 2) + t1);
    t2 = *(int *)0xC178300;
    t3 = *(int *)((((t0 << 2) + t1) + 0x0));
    kmiMemCopy8(t3, 0xC178304, (t2 << 2));
    t5 = (((struct o4_int *)0xC2B8CBC)->v);
    t6 = *(int *)0xC178300;
    t7 = *(int *)((t5 + 0x0));
    *(unsigned int *)((t5 + 0x0)) = (t7 + (t6 << 2));
    t8 = (((struct o4_int *)0xC2B8CBC)->v);
    return t8;
}

int kmChangeContextZWriteDisable(int a4)
{
    int t0;
    int t1;
    int t3;

    if (a4 != 0) {
        t0 = *(int *)0xC2EABAC;
        *(unsigned int *)0xC2EABAC = (t0 | 0x4000000);
    } else {
        t1 = *(int *)0xC2EABAC;
        *(unsigned int *)0xC2EABAC = (t1 & 0xFBFFFFFF);
    }
    t3 = *(int *)0xC2EABAC;
    *(unsigned int *)0xC178308 = t3;
    return 0x0;
}

int kmChangeContextFogMode(int a4)
{
    int t0;
    int t1;

    t0 = *(int *)0xC2EABB0;
    *(unsigned int *)0xC2EABB0 = ((t0 & 0xFF3FFFFF) | (a4 << 22));
    t1 = *(int *)0xC2EABB0;
    *(unsigned int *)0xC17830C = t1;
    return 0x0;
}

int kmChangeContextPaletteBank(int a4)
{
    int t0;
    int t1;
    int t2;
    int t6;
    int t7;

    t0 = *(int *)0xC2EABB4;
    if ((t0 & 0x38000000) != 0x28000000) {
        if ((t0 & 0x38000000) == 0x30000000) {
            t1 = *(int *)0xC2EABB4;
            *(unsigned int *)0xC2EABB4 = ((t1 & 0xF81FFFFF) | ((a4 & 0x3F) << 21));
            t2 = *(int *)0xC2EABB4;
            *(unsigned int *)0xC178310 = t2;
        }
    } else {
        t6 = *(int *)0xC2EABB4;
        *(unsigned int *)0xC2EABB4 = ((t6 & 0xF81FFFFF) | ((a4 & 0x3F) << 21));
        t7 = *(int *)0xC2EABB4;
        *(unsigned int *)0xC178310 = t7;
    }
    return 0x0;
}

int kmiCalcTABufferSize(int a4)
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

    t0 = (((struct o0_int *)0xC2EAB30)->v);
    t1 = *(int *)((0xC1784A4 + (t0 << 2)));
    t2 = (((struct o4_int *)0xC2EAB30)->v);
    t3 = *(int *)((0xC1784A4 + (t2 << 2)));
    t4 = (((struct o8_int *)0xC2EAB30)->v);
    t5 = *(int *)((0xC1784A4 + (t4 << 2)));
    t6 = (((struct oC_int *)0xC2EAB30)->v);
    t7 = *(int *)((0xC1784A4 + (t6 << 2)));
    t8 = (((struct o10_int *)0xC2EAB30)->v);
    t9 = *(int *)((0xC1784A4 + (t8 << 2)));
    return ((((((t1 + t3) + t5) + t7) + t9) * a4) << 2);
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

int check_caps(int a4)
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

    t0 = *(int *)((a4 + 0x1C));
    t1 = *(int *)((t0 + 0x0));
    if ((int)t1 >= (int)0x1) {
        if ((int)t1 <= (int)0x7FF) {
            t2 = *(int *)((t0 + 0x0));
            t3 = *(int *)((t0 + 0x8));
            if (t2 == t3) {
                t4 = *(int *)((t0 + 0xC));
                if ((int)t4 >= 0) {
                    t5 = *(int *)((t0 + 0x0));
                    if ((int)t4 < (int)t5) {
                        t6 = *(int *)((t0 + 0x14));
                        if ((int)t6 >= 0) {
                            t7 = *(int *)((t0 + 0x0));
                            if ((int)t6 < (int)t7) {
                                t8 = *(int *)((t0 + 0x34));
                                if ((int)t8 >= 0) {
                                    t9 = *(int *)((t0 + 0x0));
                                    if ((int)t8 <= (int)t9) {
                                        t10 = *(int *)((t0 + 0x38));
                                        if ((int)t10 >= 0) {
                                            t11 = *(int *)((t0 + 0x0));
                                            if ((int)t10 <= (int)t11) {
                                                t12 = *(int *)0xC2EE98C;
                                                t13 = *(int *)((t12 + 0x8));
                                                if (t13 == 0) {
                                                    t14 = *(int *)((t0 + 0x10));
                                                    t15 = *(short *)((a4 + 0x10));
                                                    if ((int)t15 >= (int)t14) {
                                                        t16 = *(int *)((t0 + 0x18));
                                                        t17 = *(short *)((a4 + 0x12));
                                                        if ((int)t17 >= (int)t16) {
                                                            t18 = *(int *)((t0 + 0x0));
                                                            if (t18 != 0xFF) {
                                                                if (t18 != 0x1FF) {
                                                                    if (t18 != 0x3FF) {
                                                                        if (t18 != 0x7FF) {
                                                                            return 0xFFFFFFFF;
                                                                        }
                                                                        *(unsigned int *)((a4 + 0x4)) = 0x3;
                                                                        return 0x0;
                                                                    }
                                                                    *(unsigned int *)((a4 + 0x4)) = 0x2;
                                                                    return 0x0;
                                                                }
                                                                *(unsigned int *)((a4 + 0x4)) = 0x1;
                                                                return 0x0;
                                                            }
                                                            *(unsigned int *)((a4 + 0x4)) = 0x0;
                                                            return 0x0;
                                                        }
                                                        return 0xFFFFFFFF;
                                                    }
                                                    return 0xFFFFFFFF;
                                                }
                                                t19 = *(int *)((t0 + 0x0));
                                                if (t19 != 0xFF) {
                                                    if (t19 != 0x1FF) {
                                                        if (t19 != 0x3FF) {
                                                            if (t19 != 0x7FF) {
                                                                return 0xFFFFFFFF;
                                                            }
                                                            *(unsigned int *)((a4 + 0x4)) = 0x3;
                                                            return 0x0;
                                                        }
                                                        *(unsigned int *)((a4 + 0x4)) = 0x2;
                                                        return 0x0;
                                                    }
                                                    *(unsigned int *)((a4 + 0x4)) = 0x1;
                                                    return 0x0;
                                                }
                                                *(unsigned int *)((a4 + 0x4)) = 0x0;
                                                return 0x0;
                                            }
                                            return 0xFFFFFFFF;
                                        }
                                        return 0xFFFFFFFF;
                                    }
                                    return 0xFFFFFFFF;
                                }
                                return 0xFFFFFFFF;
                            }
                            return 0xFFFFFFFF;
                        }
                        return 0xFFFFFFFF;
                    }
                    return 0xFFFFFFFF;
                }
                return 0xFFFFFFFF;
            }
            return 0xFFFFFFFF;
        }
        return 0xFFFFFFFF;
    }
    return 0xFFFFFFFF;
}

int ADX_DecodeInfoExADPCM2(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;

    if ((int)a5 >= (int)0x12) {
        t0 = *(short *)((a4 + 0x0));
        if ((unsigned short)((unsigned char)((int)(unsigned short)t0 >> 8) | (((unsigned short)t0 << 8) & 0xFF00)) != 0x8000) {
            return 0xFFFFFFFE;
        }
        t1 = *(short *)((a4 + 0x2));
        if ((int)((unsigned char)((int)t1 >> 8) | ((t1 << 8) & 0xFF00)) < (int)0xE) {
            return 0xFFFFFFFF;
        }
        t2 = *(short *)((a4 + 0x10));
        *(unsigned short *)((a6 + 0x0)) = ((unsigned char)((int)(unsigned short)t2 >> 8) | (((unsigned short)t2 << 8) & 0xFFFFFF00));
        return 0x0;
    }
    return 0xFFFFFFFF;
}

int adxsjd_decode_exec(int a4)
{
    int t0;
    int t1;
    int t5;

    t0 = *(int *)((a4 + 0x4));
    t1 = ADXB_GetStat(t0);
    if (t1 == 0) {
        adxsjd_decexec_start(a4);
    }
    ADXB_ExecHndl(t0);
    t5 = ADXB_GetStat(t0);
    if (t5 == 3) {
        return adxsjd_decexec_end(a4);
    }
    return t5;
}

int ADXSTM_Seek(int a4, int a5)
{
    int t0;
    int t3;
    int t4;

    t0 = *(int *)((a4 + 0x14));
    
    
    t3 = *(int *)((a4 + 0x10));
    t4 = *(int *)((a4 + 0x8));
    gdFsSeek(t4);
    return ADXSTM_Tell(a4);
}

void ADXSTM_SetEos(int a4, int a5)
{
    int t0;
    int t1;

    if ((int)a5 >= 0) {
        *(unsigned int *)((a4 + 0x30)) = a5;
    } else {
        t0 = *(int *)((a4 + 0x14));
        t1 = (t0 + 0x7FF);
        if ((int)(t0 + 0x7FF) < 0) {
            t1 = ((t0 + 0x7FF) + 0x7FF);
        }
        *(unsigned int *)((a4 + 0x30)) = ((int)t1 >> 11);
    }
}

int ADXSTMF_ExecHndl(int a4)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x1));
    if (t0 == 2) {
        return adxstmf_stat_exec(a4);
    }
    return t0;
}


void mwRnaSetupSnd(int a4, int a5)
{
    (((struct o0_uint *)0xC178644)->v) = a4;
    (((struct o4_uint *)0xC178644)->v) = a5;
}

void SJMEM_Finish(void)
{
    int t0;

    t0 = *(int *)0xC178684;
    *(unsigned int *)0xC178684 = (t0 - 1);
}

void SJRBF_Finish(void)
{
    int t0;

    t0 = *(int *)0xC1786BC;
    *(unsigned int *)0xC1786BC = (t0 - 1);
}

void SJUNI_Finish(void)
{
    int t0;

    t0 = *(int *)0xC1786F0;
    *(unsigned int *)0xC1786F0 = (t0 - 1);
}

int kmiInitInterrupt(void)
{
    int t0;
    int t1;
    int t2;

    t0 = kmiRegisterPhIntHandler(0xC16C810);
    *(unsigned int *)0xC2EA86C = 0x0;
    *(unsigned int *)0xC2EA930 = 0x0;
    (((struct o0_uint *)0xC2EA9F8)->v) = 0x0;
    (((struct o4_uint *)0xC2EA9F8)->v) = 0x0;
    (((struct o4_uint *)0xC2F91A4)->v) = 0x0;
    (((struct o8_uint *)0xC2F91A4)->v) = 0x0;
    (((struct oC_uint *)0xC2F91A4)->v) = 0x0;
    (((struct o10_uint *)0xC2F91A4)->v) = 0x0;
    (((struct o14_uint *)0xC2F91A4)->v) = 0x0;
    (((struct o18_uint *)0xC2F91A4)->v) = 0x0;
    (((struct o1C_uint *)0xC2F91A4)->v) = 0x0;
    (((struct o20_uint *)0xC2F91A4)->v) = 0x0;
    (((struct o24_uint *)0xC2F91A4)->v) = 0x0;
    *(unsigned int *)0xC2F91F8 = 0x0;
    (((struct o0_uint *)0xC2F91A4)->v) = 0x0;
    t1 = 0x0;
    do {
        t2 = (0xC2F91D4 + t1);
        t1 = (t1 + 0x4);
        *(unsigned int *)((t2 + 0x0)) = 0x0;
    } while ((unsigned int)t1 < (unsigned int)0x14);
    return t0;
}

int kmiUpdateRenderStatus(void)
{
    int t0;
    int t1;
    int t2;
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
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t53;
    int t61;
    int t54;
    int t55;
    int t56;

    t0 = 0x0;
    for (;;) {
        t1 = *(int *)(((t0 << 2) + 0xC2EA9CC));
        if (t1 != 5) {
            t2 = *(int *)(((t0 << 2) + 0xC2EA9CC));
            if (t2 == -3) break;
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x4) {
                return t2;
            }
            continue;
        }
        break;
    }
    *(unsigned int *)(((t0 << 2) + 0xC2EA9CC)) = 0x7;
    t4 = (((struct o0_int *)0xC2EA6A0)->v);
    if ((t4 & 0x1) != 1) {
        t5 = (((struct o0_int *)0xC2EA6A0)->v);
        if ((t5 & 0x2C) == 32) {
            if (0x1 != 0) {
                t6 = (((struct o0_int *)0xC2EA898)->v);
                t7 = (((struct o30_int *)0xC2EA984)->v);
                (((struct oC_uint *)0xA05F8044)->v) = (t7 + t6);
                t8 = (((struct o4_int *)0xC2EA898)->v);
                t9 = (((struct o34_int *)0xC2EA984)->v);
                (((struct o10_uint *)0xA05F8044)->v) = (t9 + t8);
            } else {
                t10 = (((struct o14_int *)0xC2EA6A0)->v);
                if (t10 != 1) {
                    t11 = *(int *)((((t0 & 0x1) << 2) + 0xC2EA9B4));
                    t12 = (((struct o0_int *)0xC2EA898)->v);
                    (((struct oC_uint *)0xA05F8044)->v) = (t11 + t12);
                    t13 = *(int *)((((t0 & 0x1) << 2) + 0xC2EA9B4));
                    t14 = (((struct o4_int *)0xC2EA898)->v);
                    (((struct o10_uint *)0xA05F8044)->v) = (t13 + t14);
                }
            }
        } else {
            t25 = (((struct o14_int *)0xC2EA6A0)->v);
            if (t25 != 1) {
                t26 = *(int *)((((t0 & 0x1) << 2) + 0xC2EA9B4));
                t27 = (((struct o0_int *)0xC2EA898)->v);
                (((struct oC_uint *)0xA05F8044)->v) = (t26 + t27);
                t28 = *(int *)((((t0 & 0x1) << 2) + 0xC2EA9B4));
                t29 = (((struct o4_int *)0xC2EA898)->v);
                (((struct o10_uint *)0xA05F8044)->v) = (t28 + t29);
            }
        }
    } else {
        t40 = (((struct o14_int *)0xC2EA6A0)->v);
        if (t40 != 1) {
            t41 = *(int *)((((t0 & 0x1) << 2) + 0xC2EA9B4));
            t42 = (((struct o0_int *)0xC2EA898)->v);
            (((struct oC_uint *)0xA05F8044)->v) = (t41 + t42);
            t43 = *(int *)((((t0 & 0x1) << 2) + 0xC2EA9B4));
            t44 = (((struct o4_int *)0xC2EA898)->v);
            (((struct o10_uint *)0xA05F8044)->v) = (t43 + t44);
        }
    }
    t53 = *(int *)(((t0 << 2) + 0xC2EA9CC));
    t61 = t53;
    if (t53 != -3) {
        t54 = (((struct o0_int *)0xC2EA928)->v);
        t61 = t54;
        if (t54 == 1) {
            t55 = (((struct o0_int *)0xC2EA984)->v);
            *(unsigned int *)0xA05F80E8 = t55;
            t56 = (((struct o20_int *)0xC2EA928)->v);
            (((struct o0_uint *)0xA05F8044)->v) = t56;
            (((struct o0_uint *)0xC2EA928)->v) = 0x0;
            t61 = 0xC2EA948;
        }
    }
    return t61;
}

int kmiErrorISR04(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    *(unsigned int *)0xA05F6908 = 0x4;
    t0 = (((struct oC_int *)0xC2F91BC)->v);
    (((struct oC_uint *)0xC2F91BC)->v) = (t0 + 0x1);
    t1 = *(int *)0xC2EA9E4;
    *(unsigned int *)(((t1 << 2) + 0xC2EA9CC)) = 0xFFFFFFFD;
    t2 = *(int *)0xC2EAB2C;
    if (t2 == 1) {
        t3 = (((struct o0_int *)0xC2F91BC)->v);
        (((struct o0_uint *)0xC2F91BC)->v) = (t3 + 0x1);
        kmiErrorRecover(0x0);
    }
    return 0x0;
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

int ADXB_Create(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t8;
    int t5;

    t0 = 0x0;
    for (;;) {
        t1 = *(short *)((((t0 * 0xAC) + 0xC2FA5B4) + 0x0));
        if (t1 != 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x8) break;
            continue;
        }
        break;
    }
    t8 = 0x0;
    if (t0 != 8) {
        memset(((t0 * 0xAC) + 0xC2FA5B4), 0x0, 0xAC);
        *(unsigned short *)((((t0 * 0xAC) + 0xC2FA5B4) + 0x0)) = 0x1;
        t5 = ADXPD_Create();
        *(unsigned int *)((((t0 * 0xAC) + 0xC2FA5B4) + 0x8)) = t5;
        if (t5 == 0) {
            ADXB_Destroy(((t0 * 0xAC) + 0xC2FA5B4));
            t8 = 0x0;
        } else {
            *(unsigned int *)((((t0 * 0xAC) + 0xC2FA5B4) + 0x38)) = a4;
            *(unsigned int *)((((t0 * 0xAC) + 0xC2FA5B4) + 0x3C)) = a5;
            (((struct o40_uint *)(((t0 * 0xAC) + 0xC2FA5B4)))->v) = a6;
            (((struct o44_uint *)(((t0 * 0xAC) + 0xC2FA5B4)))->v) = a7;
            (((struct o88_uint *)(((t0 * 0xAC) + 0xC2FA5B4)))->v) = 0xC170FE4;
            (((struct o8C_uint *)(((t0 * 0xAC) + 0xC2FA5B4)))->v) = ((t0 * 0xAC) + 0xC2FA5B4);
            (((struct o90_uint *)(((t0 * 0xAC) + 0xC2FA5B4)))->v) = 0xC171002;
            (((struct o94_uint *)(((t0 * 0xAC) + 0xC2FA5B4)))->v) = ((t0 * 0xAC) + 0xC2FA5B4);
            t8 = ((t0 * 0xAC) + 0xC2FA5B4);
        }
    }
    return t8;
}

int mwlSbAllocWork(int a4)
{
    int t5;
    int t0;
    int t2;
    int t3;

    if ((int)(short)a4 < 0) {
        return 0x0;
    }
    t5 = 0x0;
    if ((unsigned int)0xC2FB754 < (unsigned int)0xC2FB794) {
        t0 = 0xC2FB754;
        t5 = 0xC2FB754;
        t2 = 0xC2FAF54;
        for (;;) {
            t3 = *(int *)((t0 + 0x0));
            if (t3 == 0) break;
            t0 = (t0 + 0x8);
            t2 = (t2 + 0x100);
            t5 = (t5 + 0x8);
            if ((unsigned int)t0 >= (unsigned int)0xC2FB794) {
                return 0x0;
            }
        }
        *(unsigned int *)((t5 + 0x4)) = t2;
        *(unsigned int *)((t5 + 0x0)) = 0x1;
    }
    return t5;
}

int mwSbSetNumChan(int a4, int a5)
{
    int t0;
    int t1;

    *(unsigned int *)((a4 + 0xC)) = a5;
    t0 = *(int *)((a4 + 0x1C));
    t1 = *(int *)((t0 + 0x4));
    return nlsndStreamSetHdChs(t1, a5);
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

int ADXB_ExecOneAiff(int a4)
{
    int t0;

    t0 = *(short *)((a4 + 0xAA));
    if (t0 == 1) {
        return ADXB_ExecOneAiff8(a4);
    }
    return ADXB_ExecOneAiff16(a4);
}

int ADXB_ExecOneAu(int a4)
{
    int t0;
    int t1;

    t0 = (((struct oAA_short *)(a4))->v);
    if (t0 == 2) {
        return ADXB_ExecOneAuUlaw(a4);
    }
    t1 = (((struct oAA_short *)(a4))->v);
    if (t1 == 1) {
        return ADXB_ExecOneAu8(a4);
    }
    return ADXB_ExecOneAu16(a4);
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

int syIntAdrChk_printh(int a4)
{
    int t0;
    int t1;
    int t2;

    t0 = 0x1C;
    do {
        t1 = ((0xF & ((unsigned int)a4 << (int)(-t0))) + 0x30);
        if ((int)(unsigned char)(0xF & ((unsigned int)a4 << (int)(-t0))) >= (int)0xA) {
            t1 = ((0xF & ((unsigned int)a4 << (int)(-t0))) + 0x37);
        }
        t2 = syIntAdrChk_putchar(t1);
        t0 = (t0 - 4);
    } while ((int)t0 >= 0);
    return t2;
}


