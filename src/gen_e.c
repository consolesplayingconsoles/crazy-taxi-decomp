/* Straight-line functions with calls and guards (batch gen_e): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXB_GetBlkSmpl(int);
int ADXB_GetFormat(int);
int ADXB_GetLpEndOfst(int);
int ADXB_GetLpEndPos(int);
int ADXB_GetLpStartOfst(int);
int ADXB_GetLpStartPos(int);
int ADXB_GetNumChan(int);
int ADXB_GetNumLoop(int);
int ADXB_GetOutBps(int);
int ADXB_GetSfreq(int);
int ADXB_GetTotalNumSmpl(int);
int ADXB_Stop(int);
int ADXF_Init(void);
int ADXPD_Destroy(int);
int ADXPD_Reset(int);
int ADXSJD_Init(void);
int ADXSTM_Init(void);
int ADXSTM_SetBufSize(int, int, int);
int ADXSTM_SetEos(int, int);
int ADXSTM_Start(int);
int CalcShadow2Matrix(int);
int ConvertSwitch(int);
int ConvertSwitch2(void);
int TitleWaitSet(int);
int gdc_SetStreamAFS(void);
int gdc_InitStreamSongDisk(void);
int gdc_FileLoadStop(void);
int gdc_FileLoadInit(void);
int pfCleanString(void);
int SetWindow(int);
int Init_RankDrum(void);
int Init_TimeUp(void);
int Put_Remain_Time(void);
int Put_Remain_Time_Mode2(void);
int Put_TotalDrum_Update(void);
int Init_Result(int);
int Result_SetFog(void);
int KeepYourBreath(void);
int AreYouBreathing(void);
int Voice_Clear(void);
int BigOneResetState(void);
int BigOneSwims(void);
int nldispstripSub(int, int, int);
int ADXT_Create(int, int, int);
int ADXT_SetReloadSct(int, int);
int ADXT_SetAutoRcvr(int, int);
int gdFsStrcmp_tail_0c15fa1c(void);
int ADXCRS_Init(void);
int ADXERR_Init(void);
int adxf_purge_all(void);
int kmiErrorRecover(int);
int fmMngSncmp_tail_0c170880(void);
int fmMngMcpy_tail_0c1708b2(void);
int mwlSbGetStreamParam(int, int, int);
int FcvPlay(int, int, float);
int GetMenuMode(int);
int GetRotVec(int);
int Init_Standard(void);
int MainLoop(void);
int Put_GearBox(void);
int SJMEM_Init(void);
int SJRBF_Init(void);
int SJUNI_Init(void);
int ShallWeHaveSomeRelaxation(float);
int Sound_Init(void);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int adxt_start_sj(int, int);
int buFbrDestroyServer(int);
int buFbrEndFiber(void);
int buFbrExecFiberServer(int);
int buFbrSleepVFiber(void);
int buUnmount(void);
int camSetAngles(int, int, int, int);
int camSetEye(int, int);
int camSetMode(int);
int camSetTarget(int, int);
int gdc_StopStreamSongAll(void);
int gdc_StopStreamVoiceAll(void);
int kdSetHandler(int, int);
int kmSetFogTable(void);
int kmSetHSyncLine(void);
int kmiDiscardRenderPipeline(void);
int kmiResetBoard(void);
int kmiWriteRegister(void);
int memmove(int, int, int);
int memset(int, int, int);
int menuPutHelpBar(int, float, float);
int mwRnaCreate(void);
int mwRnaDiscardData(void);
int mwRnaExecServer(void);
int mwRnaFinish(void);
int mwRnaGetBitPerSmpl(void);
int mwRnaGetOutPan(void);
int mwRnaGetOutVol(void);
int mwRnaGetSfreq(void);
int mwRnaGetStat(void);
int mwRnaGetTime(void);
int mwRnaInit(void);
int mwRnaSetBitPerSmpl(void);
int mwRnaSetNumChan(void);
int mwRnaSetOutPan(void);
int mwRnaSetOutVol(void);
int mwRnaSetSfreq(void);
int mwRnaSetStartSmpl(void);
int mwRnaSetTransSw(void);
int mwRnaStart(void);
int mwRnaStop(void);
int ADXERR_EntryErrFunc(void);
int nlArcTan2(float);
int nlCloseEvent(void);
int nlInitEvent(void);
int nlInnerProduct(int, int);
int nlObjPutLoadTexture(int, int);
int nlObjPutSetGlobalAmbience(float);
int nlObjPutSetLightDirectionV(int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSprPut(int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int nlsndSystemControl(int, int, int);
int nlstripSetVertexContext(int);
int padReadSlot(int);
int padToAnalog(void);
int pfColor(int, int, int, int);
int pfLength(int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFont(int);
int pfSize(float, float);
int rankingInsert(void);
int syCfgExit(void);
int syCfgInit(int);
int thunk_mwRnaErrEntryFunc(void);
int vmsfs_c_dispatch(int);
int vmsfs_c_exit(void);
int vmsfs_exit(void);
int carFlipTravelDir(int a4);
int padInitAnalog(void);
int getSwitch(void);
int thunk_FUN_0c02a9ac(void);
int TOANG2(int a4, float f4, float f5);
int gameState8(void);
int gameState10(void);
int gdc_StreamInit(void);
int SetLightAmbience(float f4);
int ResetLight(void);
int GetRotVec4Ang(int a4, int a5, int a6, int a7);
int CfgInit(void);
int thunk_syCfgExit(void);
int saveBufferInit(int a4);
int callPause(void);
int callTryAgain(void);
int SetSEvolume(void);
int GotoMenu(void);
int nd_StartWait_PutDriver(void);
int selectDrawBar(void);
int selectPutHelpBar(void);
int Start_Pass_Ranking(void);
int hudShowPickUpNag(void);
int Start_TimeUp(void);
int Put_Default_Sprite(void);
int thunk_nlCloseEvent(void);
int Put_Press_Start(void);
int Init_RS_Fog(void);
int thunk_FUN_0c0409d2(void);
int Put_PoleMarriageKiss(void);
int pfTextPut(int a4, int a5, int a6);
int RinAqua_Init(void);
int RinAqua_Execute(void);
int camRestore(void);
int drvAccelDot(void);
int psgPutShadow(int a4);
int LoadBigOne(int a4);
int thunk_FUN_0c072fe8(void);
int thunk_kmSetFogTable(void);
int nlIntrSetHSynchLine(void);
int nlDispStripX(int a4, int a5, int a6);
int kmResetRenderer(void);
int buExitForce(void);
int buUnmountDisk(void);
int ADXT_Init(void);
int adxt_start_stm(int a4);
int thunk_ADXT_EntryErrFunc(void);
int thunk_kmiWriteRegister(void);
int gdFsStrcmp(void);
int vmsfs_c_synch(void);
int vmsfs_c_fiber0(void);
int vmsfs_c_fiber1(void);
int vmsfs_c_fiber2(void);
int vmsfs_c_fiber3(void);
int vmsfs_c_fiber4(void);
int vmsfs_c_fiber5(void);
int ADXRNA_Init(void);
int ADXRNA_Finish(void);
int thunk_ADXRNA_Create(void);
int ADXRNA_Start(void);
int ADXRNA_Stop(void);
int ADXRNA_SetTransSw(void);
int ADXRNA_GetTime(void);
int ADXRNA_GetStat(void);
int ADXRNA_ExecServer(void);
int ADXRNA_SetStartSmpl(void);
int ADXRNA_SetNumChan(void);
int ADXRNA_SetSfreq(void);
int ADXRNA_SetOutVol(void);
int ADXRNA_SetOutPan(void);
int ADXRNA_SetBitPerSmpl(void);
int ADXRNA_GetSfreq(void);
int ADXRNA_GetOutVol(void);
int ADXRNA_GetOutPan(void);
int ADXRNA_GetBitPerSmpl(void);
int ADXRNA_DiscardData(void);
int ADXSJD_Finish(void);
int ADXSJD_Stop(int a4);
int ADXSJD_GetFormat(int a4);
int ADXSJD_GetSfreq(int a4);
int ADXSJD_GetNumChan(int a4);
int ADXSJD_GetOutBps(int a4);
int ADXSJD_GetBlkSmpl(int a4);
int ADXSJD_GetTotalNumSmpl(int a4);
int ADXSJD_GetNumLoop(int a4);
int ADXSJD_GetLpStartPos(int a4);
int ADXSJD_GetLpStartOfst(int a4);
int ADXSJD_GetLpEndPos(int a4);
int ADXSJD_GetLpEndOfst(int a4);
int ADXF_InitCache_P2_(int a4);
int kmiErrorISR08(void);
int vmsfb_exec(void);
int vmsfb_exit(void);
int vmsfb_sleep(void);
int vmsfb_end(void);
int fmMngSncmp(void);
int fmMngMcpy(void);
void ADXB_Destroy(int a4);
int ADXB_Reset(int a4);
void mwlSbFreeWork(int a4);
int mwlSbGetFilter(int a4, int a5, int a6);
int buFbrInit(void);
int ADXPD_Init(void);

int carFlipTravelDir(int a4)
{
    int t0;
    int t1;
    int t7;
    int t5;
    int t2;
    float u3;
    float u4;

    t0 = *(short *)((a4 + 0x86));
    t1 = *(short *)((a4 + 0xF4));
    t7 = 0xF4;
    if ((int)(unsigned short)(t1 - t0) > (int)0x4000) {
        t5 = 0xF4;
        if ((int)(unsigned short)(t1 - t0) < (int)0xC000) {
            t2 = *(short *)((a4 + 0xF4));
            *(unsigned short *)((a4 + 0xF4)) = (t2 + 0x8000);
            u3 = *(float *)((a4 + 0x160));
            *(float *)((a4 + 0x160)) = (-u3);
            u4 = *(float *)((a4 + 0x15C));
            *(float *)((a4 + 0x15C)) = (-u4);
            t5 = 0x15C;
        }
        t7 = t5;
    }
    return t7;
}

int padInitAnalog(void)
{
    float u0;
    float u1;
    float u2;
    int t3;
    int t4;
    float u5;
    float u6;
    int t7;
    int t8;

    *(float *)0xC1EE300 = 0.0f;
    u0 = 255.0f;
    *(float *)0xC1EE304 = u0;
    *(float *)0xC1EE308 = u0;
    u1 = 0.099999994f;
    *(float *)0xC1EE30C = 0.0f;
    *(float *)0xC1EE310 = u0;
    *(float *)0xC1EE314 = u0;
    *(float *)0xC1EE318 = 0.0f;
    u2 = 128.0f;
    *(float *)0xC1EE31C = u2;
    *(float *)0xC1EE320 = u0;
    *(float *)0xC1EE324 = u0;
    t3 = *(signed char *)0xC1789DE;
    t4 = *(signed char *)0xC1789DC;
    *(float *)0xC1EE32C = (float)((unsigned char)t3 - (unsigned char)t4);
    u5 = *(float *)0xC1EE32C;
    u6 = 0.049999997f;
    if (u5 == 0.0f) {
        *(float *)0xC1EE32C = u6;
    }
    t7 = *(signed char *)0xC1789DC;
    t8 = *(signed char *)0xC1789DD;
    *(float *)0xC1EE328 = (float)((unsigned char)t7 - (unsigned char)t8);
    if ((float)((unsigned char)t7 - (unsigned char)t8) == 0.0f) {
        *(float *)0xC1EE328 = u6;
    }
    return 0x19;
}

int getSwitch(void)
{
    padReadSlot(0x0);
    ConvertSwitch(0x0);
    padReadSlot(0x2);
    ConvertSwitch2();
    return padToAnalog();
}




int gameState10(void)
{
    int t0;

    t0 = *(int *)0xC1EE238;
    *(unsigned int *)0xC1EE238 = (t0 + 0x1);
    *(unsigned int *)0xC1EE240 = 0x0;
    nlInitEvent();
    Sound_Init();
    return gdc_StopStreamSongAll();
}


int SetLightAmbience(float f4)
{
    *(float *)0xC0EA5B8 = f4;
    return nlObjPutSetGlobalAmbience(f4);
}

int ResetLight(void)
{
    float u1;

    nlObjPutSetLightDirectionV(0xC26E1D8);
    u1 = *(float *)0xC0EA5B8;
    return nlObjPutSetGlobalAmbience(u1);
}







int SetSEvolume(void)
{
    float u0;
    int t1;
    float u2;

    u0 = 8.0f;
    t1 = *(signed char *)0xC28A4ED;
    u2 = 117.0f;
    return nlsndSystemControl(0x8, 0x10A0, (signed char)(int)(((float)(unsigned char)t1 / u0) * u2));
}

int GotoMenu(void)
{
    int t0;
    int t1;

    t0 = *(int *)0xC1EE234;
    *(unsigned int *)0xC2A1228 = t0;
    t1 = *(int *)0xC1EE238;
    *(unsigned int *)0xC2A122C = t1;
    *(unsigned int *)0xC1EE234 = 0x3;
    *(unsigned int *)0xC1EE238 = 0x0;
    return TitleWaitSet(0x0);
}



int selectPutHelpBar(void)
{
    float u0;

    u0 = 416.0f;
    return menuPutHelpBar(0x3, 0.0f, u0);
}


int hudShowPickUpNag(void)
{
    int t0;
    int t6;
    int t1;
    int t5;

    t0 = *(int *)0xC1EE210;
    t6 = t0;
    if (t0 != 2) {
        t1 = *(int *)0xC2A75E0;
        *(unsigned int *)0xC2A75E0 = (t1 | 0x2000000);
        Init_Standard();
        Voice_ShutUp(0x0);
        Voice_Request(0xC130B60, 0x0, 0x7F, 0x0);
        *(unsigned int *)0xC2A8FB4 = 0x0;
        t5 = *(int *)0xC1EE244;
        *(unsigned int *)0xC2A8FBC = t5;
        t6 = 0xC1EE244;
    }
    return t6;
}

int Start_TimeUp(void)
{
    int t1;
    int t2;
    int t3;

    Init_TimeUp();
    t1 = *(int *)0xC2A75E0;
    *(unsigned int *)0xC2A75E0 = (t1 & 0xFEFFFFFF);
    t2 = *(int *)0xC2A75E0;
    *(unsigned int *)0xC2A75E0 = (t2 & 0xFDFFFFFF);
    t3 = *(int *)0xC2A75E0;
    *(unsigned int *)0xC2A75E0 = ((t3 & 0xFBFFFFFF) | 0x10000000);
    return ((t3 & 0xFBFFFFFF) | 0x10000000);
}





int thunk_FUN_0c0409d2(void)
{
    return callTryAgain();
}



int RinAqua_Init(void)
{
    thunk_FUN_0c072fe8();
    return KeepYourBreath();
}









int nlDispStripX(int a4, int a5, int a6)
{
    nlstripSetVertexContext(0xC14AAC8);
    return nldispstripSub(a4, a5, a6);
}

int kmResetRenderer(void)
{
    kmiDiscardRenderPipeline();
    kmiResetBoard();
    return 0x0;
}

int buExitForce(void)
{
    int t0;

    *(unsigned int *)0xC177AA4 = 0x0;
    t0 = *(int *)0xC17539C;
    kdSetHandler(t0, 0x0);
    vmsfs_c_exit();
    return vmsfs_exit();
}



int adxt_start_stm(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t6;
    int t8;

    t0 = *(short *)((a4 + 0x3C));
    t1 = *(short *)((a4 + 0x3E));
    t2 = *(int *)((a4 + 0x8));
    ADXSTM_SetBufSize(t2, (((t1 << 8) << 2) << 1), (((t0 << 8) << 2) << 1));
    t4 = *(int *)((a4 + 0x8));
    ADXSTM_SetEos(t4, 0x19);
    t6 = *(int *)((a4 + 0x8));
    ADXSTM_Start(t6);
    t8 = *(int *)((a4 + 0x10));
    adxt_start_sj(a4, t8);
    *(unsigned char *)((a4 + 0x2)) = 0x0;
    return 0x0;
}











int ADXRNA_Init(void)
{
    return mwRnaInit();
}

int ADXRNA_Finish(void)
{
    return mwRnaFinish();
}







int ADXRNA_ExecServer(void)
{
    return mwRnaExecServer();
}











int ADXRNA_DiscardData(void)
{
    return mwRnaDiscardData();
}


int ADXSJD_Stop(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x4));
    ADXB_Stop(t0);
    *(unsigned char *)((a4 + 0x1)) = 0x0;
    return 0x0;
}

int ADXSJD_GetFormat(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x4));
    return ADXB_GetFormat(t0);
}

int ADXSJD_GetSfreq(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x4));
    return ADXB_GetSfreq(t0);
}

int ADXSJD_GetNumChan(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x4));
    return ADXB_GetNumChan(t0);
}

int ADXSJD_GetOutBps(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x4));
    return ADXB_GetOutBps(t0);
}

int ADXSJD_GetBlkSmpl(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x4));
    return ADXB_GetBlkSmpl(t0);
}

int ADXSJD_GetTotalNumSmpl(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x4));
    return ADXB_GetTotalNumSmpl(t0);
}

int ADXSJD_GetNumLoop(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x4));
    return ADXB_GetNumLoop(t0);
}

int ADXSJD_GetLpStartPos(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x4));
    return ADXB_GetLpStartPos(t0);
}

int ADXSJD_GetLpStartOfst(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x4));
    return ADXB_GetLpStartOfst(t0);
}

int ADXSJD_GetLpEndPos(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x4));
    return ADXB_GetLpEndPos(t0);
}

int ADXSJD_GetLpEndOfst(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x4));
    return ADXB_GetLpEndOfst(t0);
}

int ADXF_InitCache_P2_(int a4)
{
    int t1;

    adxf_purge_all();
    *(unsigned int *)0xFF00001C = ((a4 & 0xFFFFF7FF) | 0x800);
    t1 = *(int *)0xFF00001C;
    *(unsigned int *)0xFF00001C = ((t1 & 0xFFFFFFF7) | 0x8);
    return ((t1 & 0xFFFFFFF7) | 0x8);
}

int kmiErrorISR08(void)
{
    int t0;
    int t1;
    int t2;

    *(unsigned int *)0xA05F6908 = 0x8;
    t0 = *(int *)0xC2F91C4;
    *(unsigned int *)0xC2F91C4 = (t0 + 0x1);
    t1 = *(int *)0xC2EAB2C;
    if (t1 == 1) {
        t2 = *(int *)0xC2F91B8;
        *(unsigned int *)0xC2F91B8 = (t2 + 0x1);
        kmiErrorRecover(0x1);
    }
    return 0x0;
}



int vmsfb_sleep(void)
{
    return buFbrSleepVFiber();
}

int vmsfb_end(void)
{
    return buFbrEndFiber();
}

int fmMngSncmp(void)
{
    return fmMngSncmp_tail_0c170880();
}


void ADXB_Destroy(int a4)
{
    int t0;

    if (a4 != 0) {
        t0 = *(int *)((a4 + 0x8));
        ADXPD_Destroy(t0);
        memset(a4, 0x0, 0xAC);
        *(unsigned short *)((a4 + 0x0)) = 0x0;
    }
}

int ADXB_Reset(int a4)
{
    int t0;
    int t3;
    int t1;

    t0 = *(int *)((a4 + 0x4));
    t3 = t0;
    if (t0 == 3) {
        t1 = *(int *)((a4 + 0x8));
        ADXPD_Reset(t1);
        *(unsigned int *)((a4 + 0x9C)) = 0x0;
        *(unsigned int *)((a4 + 0x4)) = 0x0;
        t3 = 0x9C;
    }
    return t3;
}

void mwlSbFreeWork(int a4)
{
    int t0;

    if (a4 != 0) {
        t0 = *(int *)((a4 + 0x4));
        memset(t0, 0x0, 0x100);
        memset(a4, 0x0, 0x8);
        *(unsigned int *)((a4 + 0x0)) = 0x0;
    }
}

int mwlSbGetFilter(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = mwlSbGetStreamParam(a4, 0x9, 0x0);
    *(unsigned short *)(((0x58 + a4) + 0x0)) = t0;
    t1 = mwlSbGetStreamParam(a4, 0xA, 0x0);
    *(unsigned short *)(((0x5A + a4) + 0x0)) = t1;
    t2 = *(short *)((a4 + 0x58));
    *(unsigned int *)((a5 + 0x0)) = t2;
    t3 = *(short *)((a4 + 0x5A));
    *(unsigned int *)((a6 + 0x0)) = t3;
    return 0x5A;
}

int buFbrInit(void)
{
    memset(0xC2FB798, 0x0, 0x1AF8);
    *(unsigned int *)0xC2FD290 = 0x0;
    *(unsigned int *)0xC2FD294 = 0x0;
    *(unsigned int *)0xC2FD298 = 0x0;
    return 0xC2FD298;
}


