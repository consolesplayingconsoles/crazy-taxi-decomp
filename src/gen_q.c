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
int Level_Calc(int, int);
int Init_RS_Light(void);
int Init_RS_Fog(void);
int Start_Excellent(void);
int Start_Fault(int);
int psgAllocIpBuff(int);
int breathExecOne(int, int);
int FUN_0c074200(int, int);
int FUN_0c074690(void);
int FUN_0c074f10(void);
int FUN_0c0770f0(int, int, int);
int FUN_0c0813e0(int, int, int);
int FUN_0c08160a(int);
int FUN_0c156c32(int, int, int, int);
int FUN_0c1583c4(void);
int FUN_0c158860(int, int, int);
int FUN_0c16884a(int);
int FUN_0c168c7c(int);
int FUN_0c16c634(int);
int FUN_0c170848(void);
int FUN_0c17085c(void);
int FUN_0c17088c(int, int, int);
int FUN_0c170908(int, int, int);
int FUN_0c172f1e(int);
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
int nlLoadMatrix(int, int);
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
int thunk_FUN_0c1708b2(void);
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
int FUN_0c074d20(void);
int FUN_0c074de0(int a4);
int FUN_0c074eb0(int a4);
int FUN_0c075090(void);
float nlTan(int a4);
int FUN_0c077290(int a4, int a5);
int FUN_0c07bd30(int a4);
int FUN_0c07be20(int a4);
int nlSpriteSetVtxContext(int a4);
int nlSpriteF2C(float f4);
int FUN_0c07e8a0(int a4, int a5);
int FUN_0c07f5c0(int a4);
int FUN_0c07fc40(int a4);
int FUN_0c080470(int a4, int a5, int a6, int a7);
int FUN_0c080500(int a4);
int nlDispStripLoadPalette(int a4, int a5);
int nlstripSetVertexContext(int a4);
int kmSetPaletteBankData(int a4, int a5, int a6);
int kmSetPixelClipping(int a4, int a5, int a6, int a7);
int FUN_0c14cf46(int a4);
void p2_cache_set(void);
int buExit(void);
int syCfgGetSoundMode(int a4);
int kmiInitializeDMA(void);
int kmiDMAHazardReset(void);
int kmiCh2DMAtoTA(int a4, int a5);
int kmiTAallocEx(int a4, int a5, int a6);
int FUN_0c1566a0(int a4, int a5);
int kmInitDevice(int a4);
void kmiWriteRegisters(int a4, int a5, int a6, int a7);
int kmfSetTimeOutCount(int a4, int a5);
int FUN_0c15a9a8(int a4);
int kmLoadVQCodebook(int a4, int a5);
int FUN_0c15c7a0(int a4);
int FUN_0c15c852(int a4);
int kmiConvertUVnum(int a4);
int kmSetCheapShadowMode(int a4);
int kmiPutGlobalParam(void);
int kmChangeContextZWriteDisable(int a4);
int kmChangeContextFogMode(int a4);
int kmChangeContextPaletteBank(int a4);
int FUN_0c15e820(int a4);
int FUN_0c15f460(int a4, int a5, int a6, int a7);
int FUN_0c15fa6c(int a4, int a5, int a6);
int kdVbOverHandler(void);
int FUN_0c162d2c(int a4, int a5);
int FUN_0c162d5e(int a4, int a5);
int FUN_0c162d8a(int a4, int a5);
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
int FUN_0c16bb70(void);
int FUN_0c16c796(void);
int syG2DmaReset(int a4);
int FUN_0c1708d0(int a4, int a5, int a6);
int FUN_0c170956(int a4, int a5);
int FUN_0c170a8c(int a4);
int FUN_0c170b48(int a4);
int FUN_0c170c68(int a4);
int ADXB_Create(int a4, int a5, int a6, int a7);
int ADXB_DecodeHeader(int a4, int a5, int a6);
int FUN_0c1718c4(int a4);
int FUN_0c171cfe(int a4, int a5);
int buFbrSleepFiber(int a4);
int ADXB_ExecOneAiff(int a4);
int ADXB_ExecOneAu(int a4);
int FUN_0c17467c(int a4);
void FUN_0c1747be(int a4);
int FUN_0c1747f4(int a4);

int gdc_PlayStreamSongDisk(void)
{
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;

    gdc_StopStreamSongAll();
    *(unsigned int *)0xC26A0D4 = 0x0;
    t1 = *(int *)0xC26A0CC;
    t2 = *(int *)(((t1 << 2) + 0xC08C410));
    adxStartAfs1(0x0, t2);
    t4 = *(int *)0xC26A0D4;
    t5 = gdc_GetStreamSongRemainTime(t4);
    *(unsigned int *)0xC26A0D0 = t5;
    *(unsigned int *)0xC26A0C8 = 0x1;
    t6 = *(signed char *)0xC1EE80C;
    t7 = gdc_GetVolGainMute(t6);
    t8 = *(int *)0xC1EE820;
    return ADXT_SetOutVol(t8, t7);
}


int gdc_CourseBlockReadNext(void)
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
    int t16;
    int t12;
    int t13;
    int t14;
    int t15;
    int t17;

    t0 = 0xC26C5DC;
    t1 = 0x0;
    t2 = 0x0;
    do {
        t3 = *(signed char *)((t0 + 0x0));
        if ((unsigned char)t3 == 1) {
            t4 = *(int *)((t0 + 0xC));
            if ((int)t2 < (int)t4) {
                *(unsigned int *)0xC26E0F4 = t1;
                t5 = *(int *)((t0 + 0xC));
                t2 = t5;
            }
        }
        t6 = *(int *)((t0 + 0x8));
        t1 = (t1 + t6);
        t1 = (t1 + 0x1);
        t0 = (t0 + (((((t6 + 0x1) << 1) + (t6 + 0x1)) << 2) << 1));
    } while ((int)t1 < (int)0x120);
    t7 = *(int *)0xC26E0F4;
    if (t7 != -1) {
        *(unsigned int *)0xC26E0F8 = 0x1;
        t8 = *(int *)0xC26E0F4;
        *(unsigned char *)((((short)((((t8 << 1) + t8) << 2) << 1) + 0xC26C5DC) + 0x0)) = 0x2;
        t9 = *(int *)0xC26E0F4;
        t10 = *(int *)((((short)((((t9 << 1) + t9) << 2) << 1) + 0xC26C5DC) + 0x4));
        t11 = ADXF_OpenAfs(0x0, t10);
        *(unsigned int *)0xC26C5D8 = t11;
        t16 = t11;
        if (t11 != 0) {
            t12 = ADXF_GetFsizeSct(t11);
            t13 = *(int *)((((short)((((t9 << 1) + t9) << 2) << 1) + 0xC26C5DC) + 0x14));
            t14 = *(int *)0xC26C5D8;
            t15 = ADXF_ReadNw32(t14, t12, t13);
            *(unsigned char *)((((short)((((t9 << 1) + t9) << 2) << 1) + 0xC26C5DC) + 0x0)) = 0x3;
            t16 = t15;
        }
        t17 = t16;
    } else {
        *(unsigned int *)0xC26E0F8 = 0x0;
        t17 = t7;
    }
    return t17;
}

int InitEffect(void)
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
    float u10;
    float u11;
    int t12;
    int t14;
    float u15;
    float u13;
    int t22;
    int t19;
    int t16;

    t0 = 0xC0EDA78;
    t1 = 0x0;
    do {
        t2 = *(int *)((t0 + 0x0));
        t1 = (t1 + 0x1);
        t3 = *(int *)((t2 + 0x20));
        *(unsigned int *)((t2 + 0x20)) = (t3 & 0x3F);
        t4 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        t5 = *(int *)((t4 + 0x20));
        *(unsigned int *)((t4 + 0x20)) = (t5 | 0x941604C0);
    } while ((int)t1 < (int)0x5);
    t6 = 0x0;
    t7 = 0x0;
    do {
        t7 = (t7 + 0x1);
        *(unsigned int *)((0xC0EDA48 + t6)) = 0x0;
        *(unsigned int *)((0xC0EDA38 + t6)) = 0x0;
        t6 = (t6 + 0x4);
    } while ((int)t7 < (int)0x4);
    *(unsigned int *)0xC0EDA64 = 0x0;
    *(unsigned int *)0xC0EDA60 = 0x0;
    *(unsigned int *)0xC0EDA5C = 0x0;
    *(unsigned int *)0xC0EDA58 = 0x0;
    *(unsigned int *)0xC27425C = 0x1E;
    *(unsigned int *)0xC274260 = 0x0;
    *(unsigned int *)0xC274268 = 0x1E;
    *(unsigned int *)0xC27426C = 0x1;
    *(unsigned int *)0xC274264 = 0x1;
    t9 = *(int *)0xC1EE20C;
    if (t9 == 0) {
        u10 = *(float *)0xC03676C;
        *(float *)0xC274258 = u10;
        t19 = 0xC03676C;
    } else {
        if (t9 == 1) {
            u11 = *(float *)0xC036770;
            *(float *)0xC274258 = u11;
            t16 = 0xC036770;
        } else {
            t12 = *(int *)0xC1EE214;
            t14 = t12;
            u15 = 0.0f;
            if (t12 == 1) {
                u13 = *(float *)0xC036778;
                t14 = 0xC036778;
                u15 = u13;
            }
            *(float *)0xC274258 = u15;
            t16 = t14;
        }
        t19 = t16;
    }
    t22 = *(int *)0xC14AA70;
    *(unsigned int *)0xC14AA70 = (t22 | 0x800000);
    return t19;
}

int gameState14(void)
{
    float u5;
    int t10;
    int t11;

    Voice_ShutUp(0x0);
    Voice_Request(0xC0EEA08, 0x0, 0x7F, 0x0);
    CarSel_SetBackColor();
    gdc_PlayStreamSong(0x1);
    gdc_VolStreamSong(0x7F);
    *(unsigned int *)0xC2864AC = 0x0;
    *(unsigned int *)0xC2864A8 = 0x0;
    *(unsigned int *)0xC2864A4 = 0x0;
    *(unsigned int *)0xC2864A0 = 0x0;
    *(unsigned int *)0xC2864BC = 0x0;
    *(unsigned int *)0xC2864B8 = 0x0;
    *(unsigned int *)0xC2864B4 = 0x0;
    *(unsigned int *)0xC2864B0 = 0x0;
    u5 = *(float *)0xC03A31C;
    *(float *)0xC2864C0 = u5;
    *(float *)0xC2864D4 = 1.0f;
    *(unsigned int *)0xC2864D8 = 0x0;
    *(unsigned int *)0xC2864C4 = 0x744;
    *(unsigned int *)0xC2864CC = 0xC039E58;
    *(unsigned char *)0xC2864D3 = 0x0;
    *(unsigned char *)0xC2864D2 = 0x0;
    *(unsigned char *)0xC2864D1 = 0x0;
    *(unsigned char *)0xC2864D0 = 0x0;
    *(unsigned int *)0xC2864C8 = 0x0;
    pfSetFont(0x0);
    pfSetFilterMode(0x1);
    pfSize((1.0f + 1.0f), (1.0f + 1.0f));
    pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
    t10 = pfOffsetColor(0x3F3F3F, 0x3F3F3F, 0x3F3F3F, 0x3F3F3F);
    t11 = *(int *)0xC1EE238;
    *(unsigned int *)0xC1EE238 = (t11 + 0x1);
    return t10;
}


int menuEnterStep(void)
{
    int t0;
    int t23;
    int t1;
    int t21;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t9;
    int t16;
    int t17;
    int t18;

    t0 = *(int *)0xC2A1214;
    t23 = 0x0;
    if (t0 != 1) {
        t1 = *(int *)0xC2A11EC;
        t21 = 0x0;
        if ((t1 & 8) != 0) {
            t2 = *(int *)0xC2A11EC;
            *(unsigned int *)0xC2A11EC = (t2 & 0xFFFFFFFB);
            t3 = *(int *)0xC0EF548;
            *(unsigned int *)0xC0EF548 = (t3 - 1);
            if ((int)(t3 - 1) < 0) {
                *(unsigned int *)0xC0EF548 = 0x14;
            } else {
                t4 = *(int *)0xC0EF548;
                if (t4 == 0) {
                    t5 = *(int *)0xC2A11D8;
                    *(unsigned int *)0xC2A11D8 = (t5 + 0x1);
                    *(unsigned int *)(((((t5 + 0x1) << 2) + 0xC2A11DC) + 0x0)) = 0x0;
                    t6 = *(int *)0xC2A11EC;
                    if ((t6 & 1) != 0) {
                        menuGoBack();
                    }
                    t9 = *(int *)0xC2A11EC;
                    *(unsigned int *)0xC2A11EC = ((t9 & 0xFFFFFFF6) | 0x2);
                }
            }
            t16 = *(int *)0xC2A1AD8;
            *(unsigned int *)0xC2A1AD8 = (t16 + 0x40);
            if ((int)(t16 + 0x40) > (int)0x280) {
                *(unsigned int *)0xC2A1AD8 = 0x280;
            }
            t17 = *(int *)0xC0EF548;
            if ((int)t17 < (int)0xF) {
                t18 = *(int *)0xC2A1ADC;
                *(unsigned int *)0xC2A1ADC = (t18 + 0x40);
                if ((int)(t18 + 0x40) > (int)0x280) {
                    *(unsigned int *)0xC2A1ADC = 0x280;
                }
            }
            t21 = 0x1;
        }
        t23 = t21;
    }
    return t23;
}

int menuGoBack(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t9;
    int t10;
    int t11;

    t0 = *(int *)0xC2A11D8;
    if ((int)t0 <= (int)0x1) {
        return callGoBackAdvertise();
    }
    t1 = *(int *)0xC2A11D8;
    *(unsigned int *)0xC2A11D8 = (t1 - 2);
    if ((t1 - 2) == 0) {
        t2 = GetMenuMode(0x0);
        if (t2 != 3) {
            t3 = GetMenuMode(0x0);
            if (t3 == 5) {
                t4 = *(int *)0xC2A11D8;
                t5 = *(int *)((0xC2A11DC + (t4 << 2)));
                if (t5 == 3) {
                    t6 = *(int *)0xC2A11BC;
                    syCfgSetSoundMode(t6);
                }
                return callSaveData(0x1);
            }
            return t3;
        }
        t9 = *(int *)0xC2A11D8;
        t10 = *(int *)((0xC2A11DC + (t9 << 2)));
        if (t10 == 3) {
            t11 = *(int *)0xC2A11BC;
            syCfgSetSoundMode(t11);
        }
        return callSaveData(0x1);
    }
    return (t1 - 2);
}

int stopingCarSpawn(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0xC2A6690;
    t1 = *(int *)((((((a4 << 1) + a4) << 2) + t0) + 0x8));
    t2 = *(int *)((t1 + 0x0));
    if ((t2 & 0x2000) != 0) {
        t3 = *(int *)0xC2A1B1C;
        if ((t3 & 24) != 0) {
            t4 = courseCarType();
            return StopingCarInit(t4, a4);
        }
        return t3;
    }
    return t1;
}

int pcarEnd(int a4)
{
    int t0;
    int t1;
    int t2;
    int t6;
    int t7;

    t0 = *(int *)((a4 + 0x78));
    if (t0 == 11) {
        t1 = *(int *)((a4 + 0x8));
        t2 = *(int *)((t1 + 0x84));
        *(unsigned int *)((t1 + 0x84)) = (t2 & 0xFFFFFFFE);
    }
    KillColliObj((a4 + 0x14));
    t6 = nlCloseEvent(a4);
    t7 = *(int *)0xC2A44A8;
    *(unsigned int *)0xC2A44A8 = (t7 - 1);
    return t6;
}

int trainControlExec(int a4)
{
    int t0;
    int t1;
    int t2;
    int t6;
    int t7;
    int t23;
    int t8;
    int t9;
    int t10;
    int t11;
    int t13;
    int t12;
    int t17;
    int t18;
    int t20;
    int t19;
    int t22;
    int t16;
    int t15;
    int t14;
    int t21;

    t0 = 0x0;
    do {
        if ((int)t0 >= (int)0x2) {
            t1 = *(int *)0xC2A9D60;
            if (t1 == 0) {
                t2 = *(int *)0xC2A4E48;
                *(unsigned int *)0xC2A4E48 = (t2 & 0xFFFFFFF3);
            }
        }
        t6 = *(int *)((a4 + 0x14));
        t7 = *(int *)0xC2A4E48;
        t23 = (((int)t0 >= 0) ? (0x1 << (t0 & 31)) : ((-(int)t0 & 31) ? ((int)0x1 >> (-(int)t0 & 31)) : ((int)0x1 >> 31)));
        if (((((int)t0 >= 0) ? (0x1 << (t0 & 31)) : ((-(int)t0 & 31) ? ((int)0x1 >> (-(int)t0 & 31)) : ((int)0x1 >> 31))) & t7) != (t6 & (((int)t0 >= 0) ? (0x1 << (t0 & 31)) : ((-(int)t0 & 31) ? ((int)0x1 >> (-(int)t0 & 31)) : ((int)0x1 >> 31))))) {
            if ((t7 & (((int)t0 >= 0) ? (0x1 << (t0 & 31)) : ((-(int)t0 & 31) ? ((int)0x1 >> (-(int)t0 & 31)) : ((int)0x1 >> 31)))) != 0) {
                t8 = *(int *)((a4 + 0x14));
                *(unsigned int *)((a4 + 0x14)) = (t8 | (((int)t0 >= 0) ? (0x1 << (t0 & 31)) : ((-(int)t0 & 31) ? ((int)0x1 >> (-(int)t0 & 31)) : ((int)0x1 >> 31))));
                if (t0 == 0) {
                    t9 = Sound_Request(0x70AA9, 0x1);
                    t16 = t9;
                } else {
                    if (t0 == 1) {
                        t10 = Sound_Request(0x20AA9, 0x0);
                        t15 = t10;
                    } else {
                        if (t0 == 2) {
                            t11 = Sound_Request(0x80AA9, 0x1);
                            t14 = t11;
                        } else {
                            t13 = t0;
                            if (t0 == 3) {
                                t12 = Sound_Request(0xAA9, 0x0);
                                t13 = t12;
                            }
                            t14 = t13;
                        }
                        t15 = t14;
                    }
                    t16 = t15;
                }
                t22 = t16;
            } else {
                t17 = *(int *)((a4 + 0x14));
                *(unsigned int *)((a4 + 0x14)) = (t17 & (~(((int)t0 >= 0) ? (0x1 << (t0 & 31)) : ((-(int)t0 & 31) ? ((int)0x1 >> (-(int)t0 & 31)) : ((int)0x1 >> 31)))));
                if (t0 == 1) {
                    t18 = Sound_Request(0x30AA9, 0x0);
                    t21 = t18;
                } else {
                    t20 = t0;
                    if (t0 == 3) {
                        t19 = Sound_Request(0x10AA9, 0x0);
                        t20 = t19;
                    }
                    t21 = t20;
                }
                t22 = t21;
            }
            t23 = t22;
        }
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x4);
    *(unsigned int *)0xC2A4E48 = 0x0;
    return t23;
}

void GoiTool(int a4)
{
    float u6;
    int t11;
    int t16;
    int t12;
    int t13;

    if (a4 == 0) {
        *(unsigned int *)0xC2A4E60 = 0x0;
        *(unsigned int *)0xC2A4E64 = 0x0;
        *(unsigned int *)0xC2A4E68 = 0x2;
        *(unsigned int *)0xC2A4E58 = 0x0;
        *(unsigned int *)0xC2A4E5C = 0x0;
        *(unsigned int *)0xC0F2B30 = 0xFFFFFFFF;
        *(unsigned int *)0xC0F2B34 = 0x0;
        *(unsigned int *)0xC0F2B3C = 0x0;
        goiToolPointEntry(0xFFFFFFFF, 0x0);
        goiToolCourseMap(0x0);
        goiToolCoursePoint(0x0);
        goiToolLight(0x0);
        goiToolCamData(0x0);
        MotionBlurOff();
        u6 = *(float *)0xC049B48;
        *(float *)0xC2A6298 = u6;
        SetMotionBlurStrength(u6);
        setReplayType(0x0);
        replay(0x1);
        replay(0x5);
        t11 = *(int *)0xC1EE234;
        t16 = 0x3;
        if (t11 != 0) {
            t12 = *(int *)0xC2A4E50;
            t13 = 0x2;
            if (t12 == 1) {
                t13 = 0x3;
            }
            t16 = t13;
        }
        replay(t16);
        *(unsigned int *)0xC2A62A4 = 0x0;
    }
}

int PutCourse_Sky(void)
{
    int t0;
    int t1;
    int t9;

    t0 = *(int *)0xC1EE20C;
    if (t0 != 2) {
        t1 = *(int *)0xC2A6FD8;
        if (t1 != 2) {
            nlPushMatrix(0x0);
            nlTranslateV(0xC179840);
            nlScale((1.0f + 1.0f), (1.0f + 1.0f), (1.0f + 1.0f));
            nlSetScaleFactor((1.0f + 1.0f));
            nlObjPutUseViewMatrix(0xC462B70);
            nlSetScaleFactor((1.0f + 1.0f));
            nlObjPutUseViewMatrix(0xC46C730);
            return nlPopMatrix(0x1);
        }
        return t1;
    }
    t9 = *(int *)0xC1EE214;
    if (t9 != 0) {
        nlPushMatrix(0x0);
        nlTranslateV(0xC179840);
        nlScale((1.0f + 1.0f), (1.0f + 1.0f), (1.0f + 1.0f));
        nlSetScaleFactor((1.0f + 1.0f));
        nlObjPutUseViewMatrix(0xC46C730);
        return nlPopMatrix(0x1);
    }
    return t0;
}

int selectInitIconSprite(void)
{
    float u0;
    int t1;

    u0 = *(float *)0xC051E10;
    t1 = 0x3;
    do {
        *(float *)0xC2A7414 = 0.0f;
        *(float *)0xC2A7418 = 0.0f;
        *(float *)0xC2A741C = u0;
        *(float *)0xC2A7420 = 1.0f;
        *(float *)0xC2A7424 = 1.0f;
        *(float *)0xC2A7428 = 0.0f;
        *(float *)0xC2A742C = 0.0f;
        *(float *)0xC2A7430 = 1.0f;
        *(float *)0xC2A7434 = 1.0f;
        t1 = (t1 - 0x1);
        *(unsigned int *)0xC2A7438 = 0x0;
        *(unsigned int *)0xC2A7444 = 0xA;
        *(float *)0xC2A743C = 1.0f;
        *(unsigned int *)0xC2A7440 = 0x2;
    } while (t1 != 0);
    return 0x2C;
}


int Init_Result_Parm(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;
    int t7;
    int t8;
    int t13;
    float u14;

    *(unsigned int *)0xC2A978C = 0x0;
    t0 = 0xC2A97AC;
    t1 = 0x0;
    do {
        t1 = (t1 + 0x1);
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x4);
    } while ((int)t1 < (int)0x8);
    t2 = *(int *)0xC2A7600;
    t3 = *(int *)((t2 + 0x0));
    Money_Array(0xC2A97AC, t3, 0x8);
    t5 = *(int *)0xC1794D0;
    if ((int)t5 > (int)0x3E7) {
        *(unsigned int *)0xC1794D0 = 0x3E7;
    }
    t6 = *(int *)0xC2A7600;
    t7 = *(int *)((t6 + 0x0));
    t8 = Level_Calc(t7, 0x3E7);
    *(unsigned int *)0xC2A97D8 = t8;
    if ((int)t8 <= (int)0x6) {
        *(unsigned int *)0xC2A97A8 = (((((0x6 - t8) << 2) + (0x6 - t8)) << 1) + 0x109);
    } else {
        *(unsigned int *)0xC2A97A8 = 0x145;
    }
    Init_DramRoll();
    Init_RS_Light();
    Init_RS_Fog();
    *(unsigned int *)0xC2A96F4 = 0x0;
    *(unsigned int *)0xC2A9788 = 0x0;
    *(unsigned int *)0xC2A97E0 = 0x0;
    *(unsigned int *)0xC2A97E4 = 0x0;
    t13 = 0x6;
    do {
        t13 = (t13 - 0x1);
    } while (t13 != 0);
    *(unsigned int *)0xC2A97E8 = 0x0;
    *(unsigned int *)0xC2A9850 = 0x0;
    *(unsigned int *)0xC2A9854 = 0x0;
    *(unsigned int *)0xC2A984C = 0x0;
    *(unsigned int *)0xC2A9748 = 0x0;
    *(float *)0xC2A9758 = 0.0f;
    u14 = *(float *)0xC059390;
    *(float *)0xC2A974C = u14;
    *(unsigned short *)0xC2A9750 = 0x0;
    *(unsigned int *)0xC2A9754 = 0x0;
    return 0xC059390;
}


int Exec_DCmini_Game12(void)
{
    float u1;
    float u2;
    float u4;
    float u6;
    float u8;
    float u9;
    float u11;
    float u12;
    float u14;
    int t17;
    int t18;
    int t28;
    int t19;
    int t24;
    int t20;

    nlObjPutSetFadeColor(0.0f, 1.0f, 1.0f);
    *(float *)0xC2A98A8 = 1.0f;
    *(float *)0xC2A98AC = 1.0f;
    u1 = *(float *)0xC05DB88;
    u2 = *(float *)0xC05DB90;
    nd_SprPut(0xC2A9898, 0x53, u2, u1);
    u4 = *(float *)0xC05DB94;
    nd_SprPut(0xC2A9898, 0x50, u4, u1);
    u6 = *(float *)0xC05DB98;
    nlObjPutSetFadeColor(0.0f, u6, 1.0f);
    u8 = *(float *)0xC05DB9C;
    u9 = *(float *)0xC05DBA0;
    nd_SprPut(0xC2A9898, 0x1E6, u9, u8);
    u11 = *(float *)0xC05DBA4;
    u12 = *(float *)0xC05DBA8;
    nd_SprPut(0xC2A9898, 0x1E3, u12, u11);
    u14 = *(float *)0xC05DBAC;
    nd_SprPut(0xC2A9898, 0x1E4, u14, u11);
    ResetFadeColor();
    t17 = Put_Max_Combo();
    t18 = *(int *)0xC1EE794;
    t28 = t17;
    if (t18 == 0) {
        t19 = *(int *)0xC2A991C;
        t24 = t17;
        if (t19 == 0) {
            t20 = *(int *)0xC2A7614;
            if ((int)t20 >= (int)0x1E) {
                *(unsigned int *)0xC2A98F4 = t20;
                Start_Excellent();
            } else {
                Start_Fault(0x0);
            }
            *(unsigned int *)0xC2A991C = 0x1;
            *(unsigned int *)0xC179120 = 0x0;
            t24 = 0x54;
        }
        t28 = t24;
    }
    return t28;
}

int execMiniLight(void)
{
    int t0;
    float u1;
    int t3;
    int t2;
    int t4;
    int t6;
    int t8;
    int t10;
    int t12;
    int t15;
    int t14;
    int t11;
    int t9;
    int t7;
    int t5;

    t0 = *(int *)0xC1EE214;
    u1 = *(float *)0xC179844;
    if (t0 != 1) {
        if (t0 != 5) {
            if (t0 != 6) {
                if (t0 != 7) {
                    if (t0 != 11) {
                        t3 = 0x0;
                        if (t0 == 17) {
                            t2 = 0x0;
                            if (0.0f > u1) {
                                t2 = 0x1;
                            }
                            t3 = t2;
                        }
                        t5 = t3;
                    } else {
                        t4 = 0x0;
                        if (0.0f > u1) {
                            t4 = 0x1;
                        }
                        t5 = t4;
                    }
                    t7 = t5;
                } else {
                    t6 = 0x0;
                    if (0.0f > u1) {
                        t6 = 0x1;
                    }
                    t7 = t6;
                }
                t9 = t7;
            } else {
                t8 = 0x0;
                if (0.0f > u1) {
                    t8 = 0x1;
                }
                t9 = t8;
            }
            t11 = t9;
        } else {
            t10 = 0x0;
            if (0.0f > u1) {
                t10 = 0x1;
            }
            t11 = t10;
        }
        t14 = t11;
    } else {
        t12 = 0x1;
        if (!(-9.79999924f > u1)) {
            t12 = 0x0;
        }
        t14 = t12;
    }
    t15 = LightEffect(t14);
    if (t14 != 0) {
        return ResetSpark();
    }
    return t15;
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

int Psg_IsMotionSetA(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x0));
    if (t0 != 1) {
        if (t0 != 2) {
            if (t0 != 3) {
                if (t0 != 24) {
                    if (t0 != 26) {
                        if (t0 != 31) {
                            if (t0 != 32) {
                                if (t0 != 33) {
                                    if (t0 != 35) {
                                        if (t0 != 36) {
                                            if (t0 != 38) {
                                                if (t0 != 41) {
                                                    if (t0 != 42) {
                                                        if (t0 != 44) {
                                                            if (t0 != 46) {
                                                                if (t0 != 48) {
                                                                    if (t0 != 49) {
                                                                        if (t0 != 51) {
                                                                            if (t0 != 52) {
                                                                                if (t0 != 55) {
                                                                                    if (t0 != 57) {
                                                                                        return 0x0;
                                                                                    }
                                                                                    return 0x1;
                                                                                }
                                                                                return 0x1;
                                                                            }
                                                                            return 0x1;
                                                                        }
                                                                        return 0x1;
                                                                    }
                                                                    return 0x1;
                                                                }
                                                                return 0x1;
                                                            }
                                                            return 0x1;
                                                        }
                                                        return 0x1;
                                                    }
                                                    return 0x1;
                                                }
                                                return 0x1;
                                            }
                                            return 0x1;
                                        }
                                        return 0x1;
                                    }
                                    return 0x1;
                                }
                                return 0x1;
                            }
                            return 0x1;
                        }
                        return 0x1;
                    }
                    return 0x1;
                }
                return 0x1;
            }
            return 0x1;
        }
        return 0x1;
    }
    return 0x1;
}

int Psg_CheckCharaBit4(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x0));
    if (t0 != 1) {
        if (t0 != 3) {
            if (t0 != 4) {
                if (t0 != 23) {
                    if (t0 != 24) {
                        if (t0 != 30) {
                            if (t0 != 32) {
                                if (t0 != 33) {
                                    if (t0 != 35) {
                                        if (t0 != 37) {
                                            if (t0 != 39) {
                                                if (t0 != 40) {
                                                    if (t0 != 42) {
                                                        if (t0 != 43) {
                                                            if (t0 != 44) {
                                                                if (t0 != 45) {
                                                                    if (t0 != 48) {
                                                                        if (t0 != 49) {
                                                                            if (t0 != 50) {
                                                                                if (t0 != 52) {
                                                                                    if (t0 != 53) {
                                                                                        if (t0 != 56) {
                                                                                            if (t0 != 57) {
                                                                                                return 0x0;
                                                                                            }
                                                                                            return 0x1;
                                                                                        }
                                                                                        return 0x1;
                                                                                    }
                                                                                    return 0x1;
                                                                                }
                                                                                return 0x1;
                                                                            }
                                                                            return 0x1;
                                                                        }
                                                                        return 0x1;
                                                                    }
                                                                    return 0x1;
                                                                }
                                                                return 0x1;
                                                            }
                                                            return 0x1;
                                                        }
                                                        return 0x1;
                                                    }
                                                    return 0x1;
                                                }
                                                return 0x1;
                                            }
                                            return 0x1;
                                        }
                                        return 0x1;
                                    }
                                    return 0x1;
                                }
                                return 0x1;
                            }
                            return 0x1;
                        }
                        return 0x1;
                    }
                    return 0x1;
                }
                return 0x1;
            }
            return 0x1;
        }
        return 0x1;
    }
    return 0x1;
}

int EndPsg_Start(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = set_event(0x17C, 0xC071E10);
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

int AreYouBreathing(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    do {
        t1 = breathExecOne(((signed char)((((t0 << 2) + t0) << 2) << 1) + 0xC2AE710), ((signed char)(((t0 << 1) + t0) << 2) + 0xC0D6134));
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x3);
    return t1;
}

int BigOneSwims(void)
{
    int t0;
    float u1;
    float u2;

    t0 = *(int *)0xC1EE210;
    if (t0 != 0) {
        return t0;
    }
    u1 = *(float *)0xC07392C;
    u2 = *(float *)0xC179148;
    if (!(u2 > u1)) {
        return BigOnePut();
    }
    return 0x7C;
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
        t8 = (((int)(0xF & t4) >= 0) ? (0x1 << ((0xF & t4) & 31)) : ((-(int)(0xF & t4) & 31) ? ((int)0x1 >> (-(int)(0xF & t4) & 31)) : ((int)0x1 >> 31)));
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
    int t12;
    int t13;
    int t9;
    int t10;
    int t11;
    int t25;
    int t19;
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
        t19 = t2;
        t22 = t0;
    } else {
        t12 = 0xFFFFFFFF;
        t13 = 0x0;
        if ((unsigned int)0xC2AECC8 < (unsigned int)0xC2AECD0) {
            t9 = 0xC2AECC8;
            t10 = 0x0;
            for (;;) {
                t11 = *(short *)((t9 + 0x0));
                if ((t11 & ((((int)((int)(a5 + 0xF) >> 4) >= 0) ? (0x1 << (((int)(a5 + 0xF) >> 4) & 31)) : ((-(int)((int)(a5 + 0xF) >> 4) & 31) ? ((int)0x1 >> (-(int)((int)(a5 + 0xF) >> 4) & 31)) : ((int)0x1 >> 31))) - 1)) == 0) break;
                t9 = (t9 + 0x2);
                t10 = (t10 + 0x10);
                if ((unsigned int)t9 >= (unsigned int)0xC2AECD0) {
                    if ((int)0x0 < (int)((int)(a5 + 0xF) >> 4)) {
                        return 0xFFFFFFFF;
                    }
                    return 0xFFFFFFFF;
                }
            }
            t12 = t10;
            t13 = ((int)(a5 + 0xF) >> 4);
        }
        t19 = t12;
        t22 = t13;
    }
    t25 = t19;
    if ((int)t22 < (int)((int)(a5 + 0xF) >> 4)) {
        t25 = 0xFFFFFFFF;
    }
    return t25;
}

int FUN_0c074d20(void)
{
    int t0;
    int t1;

    t0 = *(int *)0xC2AED40;
    if (t0 == 1) {
        *(unsigned int *)0xC2AED2C = 0x20;
        t1 = *(int *)0xC2AECD4;
        *(unsigned int *)0xC2AECD4 = (t1 | 0x10);
        *(unsigned int *)0xC2AED38 = 0x2;
        return (t1 | 0x10);
    }
    return kmChangeLatencyModel(0x1, 0x20);
}

int FUN_0c074de0(int a4)
{
    int t2;
    int t1;
    int t0;
    int t3;

    t2 = 0x20;
    if (a4 != 0) {
        t1 = 0x22;
        if (a4 != 2) {
            t0 = 0x24;
            if (a4 != 4) {
                t0 = 0x20;
            }
            t1 = t0;
        }
        t2 = t1;
    }
    t3 = *(int *)0xC2AED40;
    if (t3 == 1) {
        *(unsigned int *)0xC2AED2C = t2;
        return t3;
    }
    return kmChangeLatencyModel(0x1, t2);
}

int FUN_0c074eb0(int a4)
{
    int t0;

    t0 = *(int *)0xC2AED40;
    if (t0 == 1) {
        *(unsigned int *)0xC2AECF4 = (0xA0000000 | a4);
        return t0;
    }
    return kmfSetVertexBufferBaseAddress((0xA0000000 | a4), 0x0);
}

int FUN_0c075090(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0xC2AED40;
    if (t0 == 1) {
        t1 = FUN_0c074f10();
        t3 = t1;
    } else {
        t2 = FUN_0c074690();
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
        u0 = *(float *)0xC076458;
        u1 = *(float *)0xC07645C;
        u2 = *(float *)0xC076460;
        u3 = *(float *)0xC076464;
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
        u8 = *(float *)0xC076468;
        return u8;
    }
    u9 = *(float *)0xC076468;
    return u9;
}

int FUN_0c077290(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    float u3;

    if (a4 == 0) {
        if (a5 != 0) {
            return nlLoadMatrix(a5, a5);
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

int FUN_0c07bd30(int a4)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    int t7;
    int t8;
    int t9;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t10;
    int t11;

    u0 = *(float *)0xC07BE84;
    u1 = *(float *)0xC14A824;
    *(float *)0xC2B7624 = (u1 * u0);
    u2 = *(float *)0xC14A828;
    *(float *)0xC2B7628 = (u2 * u0);
    u3 = *(float *)0xC2B7624;
    *(float *)0xC2B762C = ((-1.0f) - u3);
    u4 = *(float *)0xC2B7628;
    *(float *)0xC2B7630 = ((-1.0f) - u4);
    u5 = *(float *)0xC2B7624;
    *(float *)0xC14AA08 = u5;
    u6 = *(float *)0xC2B7628;
    *(float *)0xC14AA1C = (-u6);
    t7 = *(int *)0xC2B8CBC;
    if ((a4 & 0x1) != 0) {
        t8 = *(int *)((t7 + 0x8));
        t10 = t8;
        t11 = 0xC14AA68;
    } else {
        t9 = *(int *)((t7 + 0x0));
        t10 = t9;
        t11 = 0xC14AA48;
    }
    t12 = *(int *)((t11 + 0x0));
    *(unsigned int *)((t11 + 0x0)) = (t12 & 0xFFFCFFFF);
    t13 = *(int *)0xC14A650;
    t14 = *(int *)((t11 + 0x0));
    *(unsigned int *)((t11 + 0x0)) = (t14 | ((t13 << 16) | 0x8C0000));
    *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t10 >> 16) >> 8);
    *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t10 >> 16) >> 8);
    t15 = ((0x3FFFFFF & t10) | 0xE0000000);
    t16 = t11;
    do {
        t17 = *(int *)((t16 + 0x0));
        t16 = (t16 + 0x4);
        *(unsigned int *)((t15 + 0x0)) = t17;
        t15 = (t15 + 0x4);
    } while ((unsigned int)t15 < (unsigned int)(((0x3FFFFFF & t10) | 0xE0000000) + 0x20));
    FUN_0c08160a(((0x3FFFFFF & t10) | 0xE0000000));
    return (((0x3FFFFFF & t10) | 0xE0000000) + 0x20);
}

int FUN_0c07be20(int a4)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    int t8;
    int t7;
    int t13;
    int t10;

    u0 = *(float *)((a4 + 0x4));
    u1 = *(float *)0xC2B7624;
    u2 = *(float *)((a4 + 0x8));
    u3 = *(float *)0xC2B7628;
    u4 = *(float *)0xC2B762C;
    u5 = *(float *)((a4 + 0x0));
    u6 = *(float *)0xC2B7630;
    t8 = 0x2;
    if (!(u5 > (u1 * u2))) {
        t7 = 0x0;
        if ((u4 * u2) > u5) {
            t7 = 0x1;
        }
        t8 = t7;
    }
    t13 = (t8 | 0x8);
    if (!(u0 > (u3 * u2))) {
        t10 = t8;
        if ((u6 * u2) > u0) {
            t10 = (t8 | 0x4);
        }
        t13 = t10;
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

    u0 = *(float *)0xC07E80C;
    u1 = *(float *)0xC07E810;
    u4 = (f4 * u0);
    if ((f4 * u0) > u1) {
        u2 = *(float *)0xC07E814;
        u4 = ((f4 * u0) + u2);
    }
    t5 = (int)u4;
    if ((unsigned int)(int)u4 > (unsigned int)0xFF) {
        t5 = 0xFF;
    }
    return t5;
}

int FUN_0c07e8a0(int a4, int a5)
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

int FUN_0c07f5c0(int a4)
{
    int t0;
    int t10;
    int t1;
    int t2;
    int t7;
    int t3;
    int t4;

    t0 = *(int *)0xC2B76DC;
    if (t0 != 0) {
        return 0xFFFFFFFD;
    }
    *(unsigned int *)0xC2B76DC = 0xFFFFFFFF;
    t10 = 0xFFFFFFFE;
    if ((0x80 & a4) != 0) {
        t1 = *(int *)0xC2B76E0;
        t2 = *(int *)((t1 + 0x0));
        t7 = 0xFFFFFFFF;
        if (t2 == 0) {
            t3 = *(int *)0xC2B76E0;
            *(unsigned int *)0xC2B76E0 = (t3 + 0x4);
            *(unsigned int *)((((t3 + 0x4) - 4) + 0x0)) = a4;
            t4 = *(int *)0xC2B76E0;
            if (t4 == 0xA0800500) {
                *(unsigned int *)0xC2B76E0 = 0xA0800400;
            }
            t7 = 0x0;
        }
        t10 = t7;
    }
    *(unsigned int *)0xC2B76DC = 0x0;
    return t10;
}

int FUN_0c07fc40(int a4)
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

int FUN_0c080470(int a4, int a5, int a6, int a7)
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

int FUN_0c080500(int a4)
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
    int t17;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t15;
    int t8;
    int t9;
    int t10;
    int t12;
    int t13;
    int t16;

    t0 = *(int *)0xC14A644;
    t18 = 0x0;
    if (t0 == 0) {
        t1 = *(short *)0xC2B7BC4;
        t17 = 0x1;
        if ((int)a4 < (int)t1) {
            t2 = *(int *)0xC2B7BD8;
            t3 = *(short *)(((((a4 << 2) << 1) + t2) + 0x4));
            if (t3 != 0) {
                t4 = *(short *)(((((a4 << 2) << 1) + t2) + 0x4));
                *(unsigned short *)(((((a4 << 2) << 1) + t2) + 0x4)) = (t4 + 0x1);
                t16 = 0x0;
            } else {
                t5 = *(short *)((a5 + 0x2));
                t6 = *(int *)((a5 + 0x8));
                t7 = nlSearchPalette(t5, t6);
                t15 = 0x1;
                if ((int)t7 >= 0) {
                    t8 = *(signed char *)((a5 + 0x2));
                    *(unsigned char *)(((((a4 << 2) << 1) + t2) + 0x2)) = t8;
                    t9 = *(int *)((a5 + 0x8));
                    *(unsigned char *)(((((a4 << 2) << 1) + t2) + 0x3)) = ((int)(t9 + 0xF) >> 4);
                    *(unsigned short *)(((((a4 << 2) << 1) + t2) + 0x4)) = 0x1;
                    *(unsigned short *)(((((a4 << 2) << 1) + t2) + 0x6)) = a4;
                    *(unsigned short *)(((((a4 << 2) << 1) + t2) + 0x0)) = t7;
                    t10 = *(int *)((a5 + 0x8));
                    FUN_0c074200(t7, t10);
                    t12 = *(int *)((a5 + 0x8));
                    t13 = *(int *)((a5 + 0x4));
                    FUN_0c0770f0(((t7 << 2) << 2), t13, t12);
                    t15 = 0x0;
                }
                t16 = t15;
            }
            t17 = t16;
        }
        t18 = t17;
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
    *(unsigned int *)((t8 + 0x44)) = t7;
    t9 = *(int *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    t10 = *(int *)0xC2B2FC8;
    *(unsigned int *)((t10 + 0x40)) = t9;
    t11 = *(int *)0xC2B2FC8;
    kmProcessVertexRenderState(t11);
    t13 = *(int *)0xC2B2FC8;
    t14 = *(int *)((t13 + 0x90));
    *(unsigned int *)((t13 + 0x90)) = (t14 & 0xFFFCFF3F);
    t15 = *(int *)0xC2B2FC8;
    t16 = *(int *)0xC2B7948;
    t17 = *(int *)((t15 + 0x90));
    *(unsigned int *)((t15 + 0x90)) = (t17 | t16);
    t18 = *(int *)0xC2B2FC8;
    t19 = *(int *)((t18 + 0x98));
    *(unsigned int *)((t18 + 0x98)) = (t19 & 0x31FF0FF);
    t20 = *(int *)0xC2B2FC8;
    t21 = *(int *)0xC2B794C;
    t22 = *(int *)0xC14A648;
    t23 = *(int *)(((t20 + 0x98) + 0x0));
    *(unsigned int *)(((t20 + 0x98) + 0x0)) = (t23 | ((((t22 ^ 0xFC) << 16) << 8) | t21));
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
        *(unsigned int *)0xC2EA934 = ((t4 & 0x7FF) | ((t6 & 0x7FF) << 16));
        *(unsigned int *)0xC2EA938 = (((t7 & 0x7FF) << 16) | (t5 & 0x7FF));
        return 0x0;
    }
    return 0xDDDD;
}

int FUN_0c14cf46(int a4)
{
    int t0;
    int t5;
    int t1;
    int t2;

    t0 = FUN_0c0813e0((a4 + 0x30), 0xC174DC8, 0x10);
    t5 = 0xFFFFFFFF;
    if (t0 == 0) {
        t1 = 0x1;
        for (;;) {
            t2 = FUN_0c0813e0((((((t1 << 2) << 2) << 1) + (a4 + 0x20)) + 0x10), 0xC174DD8, 0x10);
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
    *(unsigned int *)0xC2BF660 = 0x0;
    *(unsigned int *)0xC2BF664 = 0x0;
    *(unsigned int *)0xC2BF66C = 0x0;
    *(unsigned int *)0xC2BF670 = 0x0;
    *(unsigned int *)0xC2BF668 = 0x0;
    *(unsigned int *)0xC2BF674 = 0x7;
    *(unsigned int *)0xC2BF678 = 0x7;
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
    *(unsigned int *)0xFFA00020 = a4;
    *(unsigned int *)0xFFA00024 = 0x0;
    *(unsigned int *)0xFFA00028 = ((unsigned int)((unsigned int)((unsigned int)((a5 + 0x1F) & 0xFFFFFFE0) >> 2) >> 2) >> 1);
    *(unsigned int *)0xFFA0002C = 0x12C1;
    if (((a5 + 0x1F) & 0xFFFFFFE0) != 0) {
        *(unsigned int *)0xA05F6800 = 0x10000000;
        *(unsigned int *)0xA05F6804 = ((a5 + 0x1F) & 0xFFFFFFE0);
        *(unsigned int *)0xA05F6808 = 0x1;
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
    t2 = FUN_0c156c32(0x0, (t1 << 1), a5, 0x2000);
    if (t2 == 0) {
        t3 = *(int *)((a5 + 0x0));
        t4 = kmyConvertAddress64to32(t3);
        *(unsigned int *)((a5 + 0x0)) = t4;
        t5 = kmyConvertAddress64to32((t3 + 0x4));
        *(unsigned int *)((a6 + 0x0)) = t5;
    }
    return t2;
}

int FUN_0c1566a0(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t7;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t23;
    int t9;
    int t5;
    int t19;

    t0 = *(int *)((a4 + 0xC));
    t1 = *(int *)((a4 + 0x10));
    if ((unsigned int)a5 <= (unsigned int)0x2B0) {
        if ((unsigned int)((0x800 + t0) & 0xFFFFF800) < (unsigned int)(t0 + t1)) {
            t2 = *(int *)((a4 + 0xC));
            if ((unsigned int)(((0x800 + t0) & 0xFFFFF800) - t2) >= (unsigned int)a5) {
                t3 = *(int *)((a4 + 0xC));
                t5 = t3;
            } else {
                t4 = 0xFFFFFFFF;
                if ((unsigned int)((t0 + t1) - ((0x800 + t0) & 0xFFFFF800)) >= (unsigned int)a5) {
                    t4 = ((0x800 + t0) & 0xFFFFF800);
                }
                t5 = t4;
            }
            t9 = t5;
        } else {
            t7 = *(int *)((a4 + 0xC));
            t9 = t7;
        }
        t23 = t9;
    } else {
        t11 = *(int *)((a4 + 0xC));
        if ((unsigned int)(((0x800 + t0) & 0xFFFFF800) - t11) >= (unsigned int)0x2B0) {
            t12 = *(int *)((a4 + 0xC));
            t13 = (((0x800 + t0) & 0xFFFFF800) - 688);
            if ((unsigned int)(((((0x800 + t0) & 0xFFFFF800) - t12) + a5) - 688) > (unsigned int)(t0 + t1)) {
                t13 = 0xFFFFFFFF;
            }
            t19 = t13;
        } else {
            t14 = *(int *)((a4 + 0xC));
            t15 = 0xFFFFFFFF;
            if ((unsigned int)((((((0x800 + t0) & 0xFFFFF800) + 0x800) - t14) + a5) - 688) <= (unsigned int)(t0 + t1)) {
                t15 = ((((0x800 + t0) & 0xFFFFF800) + 0x800) - 688);
            }
            t19 = t15;
        }
        t23 = t19;
    }
    return t23;
}

int kmInitDevice(int a4)
{
    int t1;

    FUN_0c1583c4();
    if ((int)a4 <= (int)0x2) {
        if ((int)a4 < 0) {
            return 0x2;
        }
        t1 = kmiGetProfileInt(0xC175CFC, 0xC175D04);
        *(unsigned int *)0xC2EA69C = t1;
        kmiInitializeHardware();
        return 0x0;
    }
    return 0x2;
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
        if (t1 != 4) {
            if (t1 != 5) {
                if (t1 != 6) {
                    if (t1 != 8) {
                        t2 = *(int *)0xC2EA684;
                        *(unsigned int *)0xC2EA684 = (t2 & 0xFFFFFFEF);
                    } else {
                        t3 = *(int *)0xC2EA684;
                        *(unsigned int *)0xC2EA684 = (t3 | 0x10);
                    }
                } else {
                    t7 = *(int *)0xC2EA684;
                    *(unsigned int *)0xC2EA684 = (t7 | 0x10);
                }
            } else {
                t11 = *(int *)0xC2EA684;
                *(unsigned int *)0xC2EA684 = (t11 | 0x10);
            }
        } else {
            t15 = *(int *)0xC2EA684;
            *(unsigned int *)0xC2EA684 = (t15 | 0x10);
        }
    }
    return 0x0;
}

int FUN_0c15a9a8(int a4)
{
    int t0;
    int t1;
    int t2;
    int t6;
    int t5;
    int t3;
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
            t5 = 0x1;
            if ((t2 & 0x38000000) != 0x8000000) {
                t3 = 0x2;
                if ((t2 & 0x38000000) != 0x10000000) {
                    t3 = a4;
                }
                t5 = t3;
            }
            t6 = t5;
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
    int t12;
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
        t12 = 0x4;
        if ((t8 & 8) != 0) {
            t9 = *(int *)((a4 + 0x1C));
            kmiCopyToFrameBuffer(t9, a5, 0x800);
            t12 = 0x0;
        }
        t14 = t12;
    }
    return t14;
}

int FUN_0c15c7a0(int a4)
{
    int t0;
    int t1;
    int t2;
    int t19;
    int t3;
    int t11;
    int t12;
    int t13;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t15;
    int t20;
    int t21;

    t0 = *(int *)((a4 + 0x10));
    t1 = *(int *)((a4 + 0xC));
    t2 = *(int *)((a4 + 0x18));
    t19 = (t1 * t0);
    if ((t2 & 0x1) != 0) {
        t3 = ((unsigned int)t0 >> 1);
        if ((unsigned int)((unsigned int)t1 >> 1) < (unsigned int)((unsigned int)t0 >> 1)) {
            t3 = ((unsigned int)t1 >> 1);
        }
        t11 = ((unsigned int)t0 >> 1);
        t12 = ((unsigned int)t1 >> 1);
        t13 = (t1 * t0);
        if ((unsigned int)t3 > (unsigned int)0x1) {
            t4 = t3;
            t5 = ((unsigned int)t0 >> 1);
            t6 = ((unsigned int)t1 >> 1);
            t7 = (t1 * t0);
            do {
                t8 = (t6 * t5);
                t6 = ((unsigned int)t6 >> 1);
                t5 = ((unsigned int)t5 >> 1);
                t4 = ((unsigned int)t4 >> 1);
                t7 = (t7 + t8);
            } while ((unsigned int)t4 > (unsigned int)0x1);
            t11 = t5;
            t12 = t6;
            t13 = t7;
        }
        t15 = (t13 + (t12 * t11));
        if (t12 == t11) {
            t15 = (t13 + 0x4);
        }
        t19 = t15;
    }
    t20 = *(int *)((a4 + 0x4));
    t21 = (t19 << 2);
    if (t20 == 1) {
        t21 = (t19 << 1);
    }
    return t21;
}

int FUN_0c15c852(int a4)
{
    int t0;
    int t1;
    int t2;
    int t19;
    int t3;
    int t11;
    int t12;
    int t13;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t14;
    int t16;
    int t17;
    int t22;
    int t24;
    int t23;

    t0 = *(int *)((a4 + 0x10));
    t1 = *(int *)((a4 + 0xC));
    t2 = *(int *)((a4 + 0x18));
    t19 = (t1 * t0);
    if ((t2 & 0x1) != 0) {
        t3 = ((unsigned int)t0 >> 1);
        if ((unsigned int)((unsigned int)t1 >> 1) < (unsigned int)((unsigned int)t0 >> 1)) {
            t3 = ((unsigned int)t1 >> 1);
        }
        t11 = (t1 * t0);
        t12 = ((unsigned int)t1 >> 1);
        t13 = ((unsigned int)t0 >> 1);
        if ((unsigned int)t3 > (unsigned int)0x1) {
            t4 = t3;
            t5 = (t1 * t0);
            t6 = ((unsigned int)t1 >> 1);
            t7 = ((unsigned int)t0 >> 1);
            do {
                t8 = (t6 * t7);
                t6 = ((unsigned int)t6 >> 1);
                t7 = ((unsigned int)t7 >> 1);
                t4 = ((unsigned int)t4 >> 1);
                t5 = (t5 + t8);
            } while ((unsigned int)t4 > (unsigned int)0x1);
            t11 = t5;
            t12 = t6;
            t13 = t7;
        }
        t14 = (t11 + (t12 * t13));
        if (t12 == t13) {
            t14 = (t11 + 0x1);
        }
        t16 = *(int *)((a4 + 0x8));
        t17 = (t14 + 0xB);
        if (t16 == 0x28000000) {
            t17 = (t14 + 0x2B);
        }
        t19 = t17;
    }
    t22 = *(int *)((a4 + 0x8));
    t24 = t19;
    if (t22 == 0x28000000) {
        t23 = ((unsigned int)t19 >> 1);
        if (t19 == 1) {
            t23 = 0x1;
        }
        t24 = t23;
    }
    return t24;
}

int kmiConvertUVnum(int a4)
{
    int t10;
    int t9;
    int t8;
    int t7;
    int t6;
    int t4;
    int t2;
    int t0;

    t10 = 0x0;
    if (a4 != 8) {
        t9 = 0x1;
        if (a4 != 16) {
            t8 = 0x2;
            if (a4 != 32) {
                t7 = 0x3;
                if (a4 != 64) {
                    t6 = 0x4;
                    if (a4 != 0x80) {
                        t4 = 0x5;
                        if (a4 != 0x100) {
                            t2 = 0x6;
                            if (a4 != 0x200) {
                                t0 = a4;
                                if (a4 == 0x400) {
                                    t0 = 0x7;
                                }
                                t2 = t0;
                            }
                            t4 = t2;
                        }
                        t6 = t4;
                    }
                    t7 = t6;
                }
                t8 = t7;
            }
            t9 = t8;
        }
        t10 = t9;
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
    t1 = *(int *)0xC2B8CBC;
    *(unsigned int *)0xC2B8CC0 = ((t0 << 2) + t1);
    t2 = *(int *)0xC178300;
    t3 = *(int *)((((t0 << 2) + t1) + 0x0));
    FUN_0c158860(t3, 0xC178304, (t2 << 2));
    t5 = *(int *)0xC2B8CC0;
    t6 = *(int *)0xC178300;
    t7 = *(int *)((t5 + 0x0));
    *(unsigned int *)((t5 + 0x0)) = (t7 + (t6 << 2));
    t8 = *(int *)0xC2B8CC0;
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

int FUN_0c15e820(int a4)
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

    t0 = *(int *)0xC2EAB30;
    t1 = *(int *)((0xC1784A4 + (t0 << 2)));
    t2 = *(int *)0xC2EAB34;
    t3 = *(int *)((0xC1784A4 + (t2 << 2)));
    t4 = *(int *)0xC2EAB38;
    t5 = *(int *)((0xC1784A4 + (t4 << 2)));
    t6 = *(int *)0xC2EAB3C;
    t7 = *(int *)((0xC1784A4 + (t6 << 2)));
    t8 = *(int *)0xC2EAB40;
    t9 = *(int *)((0xC1784A4 + (t8 << 2)));
    return ((((((t1 + t3) + t5) + t7) + t9) * a4) << 2);
}

int FUN_0c15f460(int a4, int a5, int a6, int a7)
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

int FUN_0c15fa6c(int a4, int a5, int a6)
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

int FUN_0c162d2c(int a4, int a5)
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

int FUN_0c162d5e(int a4, int a5)
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

int FUN_0c162d8a(int a4, int a5)
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
        return FUN_0c168c7c(a4);
    }
    return t0;
}

int adxt_set_outpan(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    int t7;
    int t8;
    int t10;
    int t12;
    int t13;
    int t16;
    int t17;
    int t18;

    t0 = *(int *)((a4 + 0x4));
    t1 = FUN_0c16884a(t0);
    if (t1 == 1) {
        t2 = *(short *)(((a4 + 0x42) + 0x0));
        t3 = *(int *)((a4 + 0xC));
        if (t2 != -128) {
            t4 = *(short *)(((a4 + 0x42) + 0x0));
        }
        t6 = ADXRNA_SetOutPan();
        t18 = t6;
    } else {
        t7 = *(short *)(((a4 + 0x42) + 0x0));
        if (t7 != -128) {
            t8 = *(short *)(((a4 + 0x42) + 0x0));
        }
        t10 = *(int *)((a4 + 0xC));
        ADXRNA_SetOutPan();
        t12 = *(short *)((a4 + 0x44));
        if (t12 != -128) {
            t13 = *(short *)((a4 + 0x44));
        }
        t16 = *(int *)((a4 + 0xC));
        t17 = ADXRNA_SetOutPan();
        t18 = t17;
    }
    return t18;
}

void mwRnaSetupSnd(int a4, int a5)
{
    *(unsigned int *)0xC178644 = a4;
    *(unsigned int *)0xC178648 = a5;
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
    *(unsigned int *)0xC2EA9F8 = 0x0;
    *(unsigned int *)0xC2EA9FC = 0x0;
    *(unsigned int *)0xC2F91A8 = 0x0;
    *(unsigned int *)0xC2F91AC = 0x0;
    *(unsigned int *)0xC2F91B0 = 0x0;
    *(unsigned int *)0xC2F91B4 = 0x0;
    *(unsigned int *)0xC2F91B8 = 0x0;
    *(unsigned int *)0xC2F91BC = 0x0;
    *(unsigned int *)0xC2F91C0 = 0x0;
    *(unsigned int *)0xC2F91C4 = 0x0;
    *(unsigned int *)0xC2F91C8 = 0x0;
    *(unsigned int *)0xC2F91F8 = 0x0;
    *(unsigned int *)0xC2F91A4 = 0x0;
    t1 = 0x0;
    do {
        t2 = (0xC2F91D4 + t1);
        t1 = (t1 + 0x4);
        *(unsigned int *)((t2 + 0x0)) = 0x0;
    } while ((unsigned int)t1 < (unsigned int)0x14);
    return t0;
}

int FUN_0c16bb70(void)
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
    int t57;
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
    t4 = *(int *)0xC2EA6A0;
    if ((t4 & 0x1) != 1) {
        t5 = *(int *)0xC2EA6A0;
        if ((t5 & 0x2C) == 32) {
            if (0x1 != 0) {
                t6 = *(int *)0xC2EA898;
                t7 = *(int *)0xC2EA9B4;
                *(unsigned int *)0xA05F8050 = (t7 + t6);
                t8 = *(int *)0xC2EA89C;
                t9 = *(int *)0xC2EA9B8;
                *(unsigned int *)0xA05F8054 = (t9 + t8);
            } else {
                t10 = *(int *)0xC2EA6B4;
                if (t10 != 1) {
                    t11 = *(int *)((((t0 & 0x1) << 2) + 0xC2EA9B4));
                    t12 = *(int *)0xC2EA898;
                    *(unsigned int *)0xA05F8050 = (t11 + t12);
                    t13 = *(int *)((((t0 & 0x1) << 2) + 0xC2EA9B4));
                    t14 = *(int *)0xC2EA89C;
                    *(unsigned int *)0xA05F8054 = (t13 + t14);
                }
            }
        } else {
            t25 = *(int *)0xC2EA6B4;
            if (t25 != 1) {
                t26 = *(int *)((((t0 & 0x1) << 2) + 0xC2EA9B4));
                t27 = *(int *)0xC2EA898;
                *(unsigned int *)0xA05F8050 = (t26 + t27);
                t28 = *(int *)((((t0 & 0x1) << 2) + 0xC2EA9B4));
                t29 = *(int *)0xC2EA89C;
                *(unsigned int *)0xA05F8054 = (t28 + t29);
            }
        }
    } else {
        t40 = *(int *)0xC2EA6B4;
        if (t40 != 1) {
            t41 = *(int *)((((t0 & 0x1) << 2) + 0xC2EA9B4));
            t42 = *(int *)0xC2EA898;
            *(unsigned int *)0xA05F8050 = (t41 + t42);
            t43 = *(int *)((((t0 & 0x1) << 2) + 0xC2EA9B4));
            t44 = *(int *)0xC2EA89C;
            *(unsigned int *)0xA05F8054 = (t43 + t44);
        }
    }
    t53 = *(int *)(((t0 << 2) + 0xC2EA9CC));
    t61 = t53;
    if (t53 != -3) {
        t54 = *(int *)0xC2EA928;
        t57 = t54;
        if (t54 == 1) {
            t55 = *(int *)0xC2EA984;
            *(unsigned int *)0xA05F80E8 = t55;
            t56 = *(int *)0xC2EA948;
            *(unsigned int *)0xA05F8044 = t56;
            *(unsigned int *)0xC2EA928 = 0x0;
            t57 = 0xC2EA948;
        }
        t61 = t57;
    }
    return t61;
}

int FUN_0c16c796(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    *(unsigned int *)0xA05F6908 = 0x4;
    t0 = *(int *)0xC2F91C8;
    *(unsigned int *)0xC2F91C8 = (t0 + 0x1);
    t1 = *(int *)0xC2EA9E4;
    *(unsigned int *)(((t1 << 2) + 0xC2EA9CC)) = 0xFFFFFFFD;
    t2 = *(int *)0xC2EAB2C;
    if (t2 == 1) {
        t3 = *(int *)0xC2F91BC;
        *(unsigned int *)0xC2F91BC = (t3 + 0x1);
        FUN_0c16c634(0x0);
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

int FUN_0c1708d0(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = a4;
    t1 = a5;
    t2 = a6;
    t3 = 0x0;
    t4 = (((a5 << 2) << 2) << 2);
    while ((int)t4 > 0) {
        t5 = *(signed char *)((t0 + 0x0));
        t0 = (t0 + 0x1);
        t2 = t5;
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

int FUN_0c170956(int a4, int a5)
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
    t4 = *(short *)((a5 + 0x3E));
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

int FUN_0c170a8c(int a4)
{
    int t0;
    int t1;
    int t39;
    int t2;
    int t3;
    int t35;
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
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;

    t0 = *(short *)((a4 + 0x2));
    t1 = *(int *)((a4 + 0x4));
    t39 = 0xFFFFFFFA;
    if (t0 == 0) {
        t2 = *(int *)((a4 + 0xC));
        t3 = FUN_0c170848();
        t35 = 0xFFFFFFFE;
        if (t3 == 64) {
            t4 = *(int *)((a4 + 0x14));
            if ((int)t4 > 0) {
                t5 = t3;
                t6 = t4;
                t7 = 0x0;
                t8 = (t1 + 0x40);
                t9 = (t2 + 0x40);
                for (;;) {
                    t10 = *(short *)((t9 + 0x0));
                    if ((unsigned short)t10 != 0xFFFF) {
                        t11 = FUN_0c170956(a4, t9);
                        t5 = t11;
                        if (t5 == 0) {
                            t12 = FUN_0c170848();
                            t5 = t12;
                            if (t5 == 64) {
                                t7 = (t7 + 0x1);
                                t8 = (t8 + 0x40);
                                t6 = (t6 - 1);
                                t9 = (t9 + 0x40);
                                if ((int)t6 <= 0) break;
                                continue;
                            }
                            t5 = 0xFFFFFFFE;
                            return t5;
                        }
                        t6 = (t6 - 1);
                        t9 = (t9 + 0x40);
                        if ((int)t6 <= 0) break;
                        continue;
                    }
                    t6 = (t6 - 1);
                    t9 = (t9 + 0x40);
                    if ((int)t6 <= 0) break;
                }
                t14 = *(int *)((a4 + 0x14));
                t15 = *(int *)((a4 + 0x18));
                FUN_0c170908(t7, t9, t15);
                t17 = *(int *)((a4 + 0x18));
                t18 = FUN_0c170848();
                t19 = *(int *)((a4 + 0x18));
                t20 = 0xFFFFFFFE;
                if (t18 == (((t19 << 2) << 2) << 2)) {
                    *(unsigned int *)((a4 + 0x10)) = t7;
                    t20 = 0x0;
                }
                t28 = t20;
            } else {
                t21 = *(int *)((a4 + 0x14));
                t22 = *(int *)((a4 + 0x18));
                FUN_0c170908(0x0, (t2 + 0x40), t22);
                t24 = *(int *)((a4 + 0x18));
                t25 = FUN_0c170848();
                t26 = *(int *)((a4 + 0x18));
                t27 = 0xFFFFFFFE;
                if (t25 == (((t26 << 2) << 2) << 2)) {
                    *(unsigned int *)((a4 + 0x10)) = 0x0;
                    t27 = 0x0;
                }
                t28 = t27;
            }
            t35 = t28;
        }
        t39 = t35;
    }
    return t39;
}

int FUN_0c170b48(int a4)
{
    int t0;
    int t28;
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;
    int t8;
    int t9;
    int t27;
    int t10;
    int t11;
    int t12;
    int t13;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t25;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;

    t0 = *(short *)((a4 + 0x2));
    t28 = 0xFFFFFFFA;
    if (t0 == 0) {
        t1 = *(int *)((a4 + 0x28));
        *(unsigned short *)(((a4 + 0x34) + 0x0)) = t1;
        t2 = *(int *)((a4 + 0x30));
        thunk_FUN_0c1708b2();
        t4 = fmcalccrc(0x3E, (a4 + 0x34));
        *(unsigned short *)(((a4 + 0x34) + 0x3E)) = t4;
        t5 = *(int *)((a4 + 0x28));
        t6 = *(int *)((a4 + 0xC));
        FUN_0c17088c((a4 + 0x34), (t6 + ((((t5 + 0x1) << 2) << 2) << 2)), 0x40);
        t8 = *(int *)((a4 + 0x10));
        t9 = *(int *)((a4 + 0x14));
        t27 = 0xFFFFFFF6;
        if ((int)t8 < (int)t9) {
            t10 = *(int *)((a4 + 0x14));
            t11 = *(int *)((a4 + 0xC));
            t12 = *(int *)((a4 + 0x10));
            t13 = *(int *)((a4 + 0x18));
            FUN_0c170908((t12 + 0x1), (t11 + ((((t10 + 0x1) << 2) << 2) << 2)), t13);
            t15 = *(int *)((a4 + 0x18));
            t16 = *(int *)((a4 + 0xC));
            t17 = *(int *)((a4 + 0x4));
            t18 = FUN_0c170848();
            t19 = *(int *)((a4 + 0x18));
            t25 = 0xFFFFFFFE;
            if (t18 == (((t19 << 2) << 2) << 2)) {
                t20 = *(int *)((a4 + 0x10));
                t21 = *(int *)((a4 + 0x10));
                *(unsigned int *)((a4 + 0x10)) = (t21 + 0x1);
                t22 = *(int *)((a4 + 0x4));
                t23 = FUN_0c170848();
                t24 = 0x0;
                if (t23 != 64) {
                    t24 = 0xFFFFFFFE;
                }
                t25 = t24;
            }
            t27 = t25;
        }
        t28 = t27;
    }
    return t28;
}

int FUN_0c170c68(int a4)
{
    int t0;
    int t3;
    int t1;
    int t4;
    int t5;
    int t6;
    int t9;
    int t10;
    int t12;
    int t8;

    t0 = *(int *)((a4 + 0x24));
    if (t0 != 0) {
        if (t0 != 1) {
            t3 = 0xFFFFFFFE;
            if (t0 == 2) {
                t1 = FUN_0c170a8c(a4);
                t3 = t1;
            }
            t8 = t3;
        } else {
            t4 = *(int *)((a4 + 0x4));
            t5 = FUN_0c17085c();
            t6 = 0xFFFFFFFD;
            if (t5 != -1) {
                *(unsigned int *)((a4 + 0x24)) = 0x2;
                t6 = 0x1;
            }
            t8 = t6;
        }
        t12 = t8;
    } else {
        t9 = FUN_0c170b48(a4);
        t10 = t9;
        if (t9 == -10) {
            *(unsigned int *)((a4 + 0x24)) = 0x1;
            t10 = 0x1;
        }
        t12 = t10;
    }
    return t12;
}

int ADXB_Create(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t8;
    int t5;
    int t7;

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
            t7 = 0x0;
        } else {
            *(unsigned int *)((((t0 * 0xAC) + 0xC2FA5B4) + 0x38)) = a4;
            *(unsigned int *)((((t0 * 0xAC) + 0xC2FA5B4) + 0x3C)) = a5;
            *(unsigned int *)((((t0 * 0xAC) + 0xC2FA5B4) + 0x40)) = a6;
            *(unsigned int *)((((t0 * 0xAC) + 0xC2FA5B4) + 0x44)) = a7;
            *(unsigned int *)((((t0 * 0xAC) + 0xC2FA5B4) + 0x88)) = 0xC170FE4;
            *(unsigned int *)((((t0 * 0xAC) + 0xC2FA5B4) + 0x8C)) = ((t0 * 0xAC) + 0xC2FA5B4);
            *(unsigned int *)((((t0 * 0xAC) + 0xC2FA5B4) + 0x90)) = 0xC171002;
            *(unsigned int *)((((t0 * 0xAC) + 0xC2FA5B4) + 0x94)) = ((t0 * 0xAC) + 0xC2FA5B4);
            t7 = ((t0 * 0xAC) + 0xC2FA5B4);
        }
        t8 = t7;
    }
    return t8;
}

int ADXB_DecodeHeader(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(short *)((a5 + 0x0));
    if ((unsigned short)((unsigned char)((int)(unsigned short)t0 >> 8) | (((unsigned short)t0 << 8) & 0xFF00)) == 0x8000) {
        return ADXB_DecodeHeaderAdx(a4, a5, a6);
    }
    t1 = ADXB_CheckSpsd();
    if (t1 != 0) {
        return ADXB_DecodeHeaderSpsd(a4, a5, a6);
    }
    t2 = ADXB_CheckWav(a5);
    if (t2 != 0) {
        return ADXB_DecodeHeaderWav(a4, a5, a6);
    }
    t3 = FUN_0c172f1e(a5);
    if (t3 != 0) {
        return ADXB_DecodeHeaderAiff(a4, a5, a6);
    }
    t4 = ADXB_CheckAu(a5);
    if (t4 != 0) {
        return ADXB_DecodeHeaderAu(a4, a5, a6);
    }
    return 0x0;
}

int FUN_0c1718c4(int a4)
{
    int t5;
    int t0;
    int t1;
    int t2;
    int t3;

    if ((int)(short)a4 < 0) {
        return 0x0;
    }
    t5 = 0x0;
    if ((unsigned int)0xC2FB754 < (unsigned int)0xC2FB794) {
        t0 = 0xC2FB754;
        t1 = 0xC2FB754;
        t2 = 0xC2FAF54;
        for (;;) {
            t3 = *(int *)((t0 + 0x0));
            if (t3 == 0) break;
            t0 = (t0 + 0x8);
            t2 = (t2 + 0x100);
            t1 = (t1 + 0x8);
            if ((unsigned int)t0 >= (unsigned int)0xC2FB794) {
                return 0x0;
            }
        }
        *(unsigned int *)((t1 + 0x4)) = t2;
        *(unsigned int *)((t1 + 0x0)) = 0x1;
        t5 = t1;
    }
    return t5;
}

int FUN_0c171cfe(int a4, int a5)
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
    int t10;

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
        t10 = longjmp((t9 + 0x4), 0x1);
        t11 = t10;
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

    t0 = *(short *)((a4 + 0xAA));
    if (t0 == 2) {
        return ADXB_ExecOneAuUlaw(a4);
    }
    t1 = *(short *)((a4 + 0xAA));
    if (t1 == 1) {
        return ADXB_ExecOneAu8(a4);
    }
    return ADXB_ExecOneAu16(a4);
}

int FUN_0c17467c(int a4)
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

    t0 = *(int *)0xC2FD444;
    if (t0 != 0) {
        t8 = t0;
        if (t0 == 1) {
            do {
                t1 = *(int *)0xC2FD43C;
                t2 = *(signed char *)(((t1 + 0x10) + 0x0));
            } while (((unsigned char)t2 & 0x80) != 0x80);
            t3 = *(int *)0xC2FD43C;
            *(unsigned char *)(((t3 + 0xC) + 0x0)) = a4;
            t4 = *(int *)0xC2FD43C;
            t5 = *(signed char *)(((t4 + 0x10) + 0x0));
            *(unsigned char *)(((t4 + 0x10) + 0x0)) = (t5 & 0x7F);
            do {
                t6 = *(int *)0xC2FD43C;
                t7 = *(signed char *)(((t6 + 0x10) + 0x0));
            } while (((unsigned char)t7 & 0x4) != 4);
            t8 = ((unsigned char)t7 & 0x4);
        }
        t20 = t8;
    } else {
        do {
            t11 = *(int *)0xC2FD440;
            t12 = *(short *)((t11 + 0x10));
        } while (((unsigned short)t12 & 0x20) != 32);
        t13 = *(int *)0xC2FD440;
        *(unsigned char *)(((t13 + 0xC) + 0x0)) = a4;
        t14 = *(int *)0xC2FD440;
        t15 = *(short *)(((t14 + 0x10) + 0x0));
        *(unsigned short *)(((t14 + 0x10) + 0x0)) = (t15 & 0xFFDF);
        t16 = *(int *)0xC2FD440;
        t17 = *(short *)(((t16 + 0x10) + 0x0));
        *(unsigned short *)(((t16 + 0x10) + 0x0)) = (t17 & 0xFFBF);
        do {
            t18 = *(int *)0xC2FD440;
            t19 = *(short *)((t18 + 0x10));
        } while (((unsigned short)t19 & 0x40) != 64);
        t20 = ((unsigned short)t19 & 0x40);
    }
    return t20;
}

void FUN_0c1747be(int a4)
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
        FUN_0c17467c(t2);
    }
}

int FUN_0c1747f4(int a4)
{
    int t0;
    int t1;
    int t2;

    t0 = 0x1C;
    do {
        t1 = ((0xF & (((int)(-t0) >= 0) ? (a4 << ((-t0) & 31)) : ((-(int)(-t0) & 31) ? ((unsigned int)a4 >> (-(int)(-t0) & 31)) : 0))) + 0x30);
        if ((int)(unsigned char)(0xF & (((int)(-t0) >= 0) ? (a4 << ((-t0) & 31)) : ((-(int)(-t0) & 31) ? ((unsigned int)a4 >> (-(int)(-t0) & 31)) : 0))) >= (int)0xA) {
            t1 = ((0xF & (((int)(-t0) >= 0) ? (a4 << ((-t0) & 31)) : ((-(int)(-t0) & 31) ? ((unsigned int)a4 >> (-(int)(-t0) & 31)) : 0))) + 0x37);
        }
        t2 = FUN_0c17467c(t1);
        t0 = (t0 - 4);
    } while ((int)t0 >= 0);
    return t2;
}

