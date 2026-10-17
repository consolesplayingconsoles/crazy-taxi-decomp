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
int FUN_0c02c094(int, int);
int FUN_0c02e074(void);
int FUN_0c02e42a(void);
int FUN_0c03012c(void);
int FUN_0c03019a(void);
int FUN_0c0310a0(int, int, int);
int FUN_0c03b698(int);
int FUN_0c0527ec(void);
int FUN_0c052d28(void);
int FUN_0c053b76(void);
int FUN_0c053dec(void);
int FUN_0c0544a8(void);
int FUN_0c058ff0(int);
int FUN_0c05b044(void);
int FUN_0c072884(void);
int FUN_0c0728c8(void);
int FUN_0c072e36(void);
int FUN_0c072fe8(void);
int FUN_0c0738bc(void);
int FUN_0c080ae0(int, int, int);
int FUN_0c151cac(int, int, int);
int FUN_0c152292(int, int);
int FUN_0c152330(int, int);
int FUN_0c15fa1c(void);
int FUN_0c167c4c(void);
int FUN_0c16800c(void);
int FUN_0c169710(int);
int FUN_0c16c634(int);
int FUN_0c170880(void);
int FUN_0c1708b2(void);
int FUN_0c171e62(int, int, int);
int FcvPlay(int, int, float);
int GetMenuMode(int);
int GetRotVec(int);
int Init_Standard(int);
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
int callTryAgain(void);
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
int njSetConstantAttr(void);
int nlArcTan2(int, float);
int nlCloseEvent(void);
int nlInitEvent(int);
int nlInnerProduct(int, int);
int nlObjPutLoadTexture(int, int);
int nlObjPutSetGlobalAmbience(float);
int nlObjPutSetLightDirectionV(int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(int, int, int, int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSprPut(int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int nlsndSystemControl(int, int, int);
int nlstripSetVertexContext(int, int, int);
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
int thunk_FUN_0c072fe8(void);
int thunk_FUN_0c169a20(void);
int thunk_mwRnaErrEntryFunc(int, int);
int vmsfb_exec(void);
int vmsfs_c_dispatch(int);
int vmsfs_c_exit(void);
int vmsfs_exit(void);

void FUN_0c022358(int a4)
{
    int t0;
    int t1;
    int t2;
    float u3;
    float u4;

    t0 = *(short *)((a4 + 0x86));
    t1 = *(short *)((a4 + 0xF4));
    if (((int)(unsigned short)(t1 - t0) > (int)0x4000)) {
        if (!((int)(unsigned short)(t1 - t0) >= (int)0xC000)) {
        t2 = *(short *)((a4 + 0xF4));
        *(unsigned short *)((a4 + 0xF4)) = (t2 + 0x8000);
        u3 = *(float *)((a4 + 0x160));
        *(float *)((a4 + 0x160)) = (-u3);
        u4 = *(float *)((a4 + 0x15C));
        *(float *)((a4 + 0x15C)) = (-u4);
        }
        }
}

void FUN_0c029aa6(void)
{
    int t0;
    int t1;
    float u2;
    int t3;
    int t4;

    *(float *)0xC1EE300 = 0.0f;
    *(float *)0xC1EE304 = 255.0f;
    *(float *)0xC1EE308 = 255.0f;
    *(float *)0xC1EE30C = 0.0f;
    *(float *)0xC1EE310 = 255.0f;
    *(float *)0xC1EE314 = 255.0f;
    *(float *)0xC1EE318 = 0.0f;
    *(float *)0xC1EE31C = 128.0f;
    *(float *)0xC1EE320 = 255.0f;
    *(float *)0xC1EE324 = 255.0f;
    t0 = *(signed char *)0xC1789DE;
    t1 = *(signed char *)0xC1789DC;
    *(float *)0xC1EE32C = (float)((unsigned char)t0 - (unsigned char)t1);
    u2 = *(float *)0xC1EE32C;
    if ((u2 == 0.0f)) {
        *(float *)0xC1EE32C = 0.049999997f;
        }
    t3 = *(signed char *)0xC1789DC;
    t4 = *(signed char *)0xC1789DD;
    *(float *)0xC1EE328 = (float)((unsigned char)t3 - (unsigned char)t4);
    if (((float)((unsigned char)t3 - (unsigned char)t4) == 0.0f)) {
        *(float *)0xC1EE328 = 0.049999997f;
        }
}

int getSwitch(void)
{
    padReadSlot(0x0);
    ConvertSwitch(0x0);
    padReadSlot(0x2);
    ConvertSwitch2();
    return padToAnalog();
}

int thunk_FUN_0c02a9ac(void)
{
    return MainLoop();
}

int FUN_0c02bbf4(int a4, float f4)
{
    int t0;

    t0 = nlArcTan2(a4, (-f4));
    *(unsigned short *)((a4 + 0x0)) = t0;
    return t0;
}

int gameState8(void)
{
    int t0;
    int t4;

    t0 = *(int *)0xC1EE238;
    *(unsigned int *)0xC1EE238 = (t0 + 0x1);
    *(unsigned int *)0xC1EE240 = 0x0;
    nlInitEvent(0xC1EE238);
    Sound_Init();
    gdc_StopStreamSongAll();
    t4 = *(int *)0xC179488;
    FUN_0c058ff0(t4);
    FUN_0c03012c();
    return FUN_0c03019a();
}

int gameState10(void)
{
    int t0;

    t0 = *(int *)0xC1EE238;
    *(unsigned int *)0xC1EE238 = (t0 + 0x1);
    *(unsigned int *)0xC1EE240 = 0x0;
    nlInitEvent(0xC1EE238);
    Sound_Init();
    return gdc_StopStreamSongAll();
}

int FUN_0c02dfbc(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;

    t0 = FUN_0c151cac(0x1, 0xC1EE824, 0x10884);
    *(unsigned int *)0xC1EE810 = t0;
    t1 = FUN_0c151cac(0x1, 0xC1FF0A8, 0x10884);
    *(unsigned int *)0xC1EE814 = t1;
    t2 = FUN_0c151cac(0x1, 0xC20F92C, 0x10884);
    *(unsigned int *)0xC1EE818 = t2;
    t3 = FUN_0c151cac(0x1, 0xC2201B0, 0x10884);
    *(unsigned int *)0xC1EE81C = t3;
    t4 = FUN_0c151cac(0x2, 0xC230A34, 0x390C4);
    *(unsigned int *)0xC1EE820 = t4;
    FUN_0c152292(t4, 0x19);
    t6 = *(int *)0xC1EE820;
    FUN_0c152330(t6, 0x2);
    FUN_0c02e074();
    return FUN_0c02e42a();
}

int FUN_0c030b7a(float f4)
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

int FUN_0c036256(int a4, int a5, int a6, int a7)
{
    nlPushUnitMatrix(a4, a5, a6, a7);
    nlRotateAY(a6);
    nlRotateAX(a5);
    nlRotateAZ(a7);
    GetRotVec(a4);
    return nlPopMatrix(0x1);
}

int FUN_0c03a640(void)
{
    return syCfgInit(0xC2864E8);
}

int thunk_syCfgExit(void)
{
    return syCfgExit();
}

int saveBufferInit(int a4)
{
    memmove(a4, 0xC09DB48, 0x4);
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    return memset((a4 + 0x8), 0xFFFFFFFF, 0x780);
}

int FUN_0c0409a6(void)
{
    int t0;
    int t1;

    t0 = *(int *)0xC1EE234;
    *(unsigned int *)0xC2A1228 = t0;
    t1 = *(int *)0xC1EE238;
    *(unsigned int *)0xC2A122C = t1;
    FUN_0c072e36();
    gdc_StopStreamVoiceAll();
    Sound_Init();
    return FUN_0c03b698(0x1);
}

int callTryAgain(void)
{
    int t0;
    int t1;

    t0 = *(int *)0xC1EE234;
    *(unsigned int *)0xC2A1228 = t0;
    t1 = *(int *)0xC1EE238;
    *(unsigned int *)0xC2A122C = t1;
    FUN_0c072e36();
    gdc_StopStreamVoiceAll();
    gdc_StopStreamSongAll();
    Sound_Init();
    FUN_0c03b698(0x2);
    *(unsigned int *)0xC0EF550 = 0x275;
    return Voice_Request(0xC0EF550, 0x0, 0x7F, 0x0);
}

int SetSEvolume(void)
{
    int t0;

    t0 = *(signed char *)0xC28A4ED;
    return nlsndSystemControl(0x8, 0x10A0, (signed char)(int)(((float)(unsigned char)t0 / 8.0f) * 117.0f));
}

int FUN_0c041ce8(void)
{
    int t0;
    int t1;

    t0 = *(int *)0xC1EE234;
    *(unsigned int *)0xC2A1228 = t0;
    t1 = *(int *)0xC1EE238;
    *(unsigned int *)0xC2A122C = t1;
    *(unsigned int *)0xC1EE234 = 0x3;
    *(unsigned int *)0xC1EE238 = 0x0;
    return FUN_0c02c094(0x0, 0xC1EE238);
}

int FUN_0c050716(void)
{
    int t1;
    int t4;
    int t5;

    nlPushMatrix(0x0);
    t1 = *(signed char *)0xC2A72D8;
    nlTranslateV(((signed char)(((t1 << 1) + t1) << 2) + 0xC0CF5F0));
    nlRotateAY(0x8000);
    t4 = *(int *)0xC2A72BC;
    t5 = *(int *)0xC12FFE8;
    FcvPlay(t5, t4, 0.0f);
    return nlPopMatrix(0x1);
}

int FUN_0c051d38(void)
{
    *(unsigned int *)0xC2A7398 = 0x0;
    return nlSprPut(0xC2A7370);
}

int FUN_0c052138(void)
{
    return menuPutHelpBar(0x3, 0.0f, 416.0f);
}

int FUN_0c0533ba(void)
{
    int t1;
    int t2;

    FUN_0c0527ec();
    t1 = rankingInsert();
    if (!(t1 == 0)) {
        t2 = *(int *)0xC2A75E0;
        *(unsigned int *)0xC2A75E0 = (t2 | 0x1000);
        *(unsigned int *)0xC2A916C = 0x0;
        *(unsigned int *)0xC2A9178 = 0x0;
        *(unsigned int *)0xC2A917C = 0x0;
        }
    return t1;
}

void hudShowPickUpNag(void)
{
    int t0;
    int t1;
    int t5;

    t0 = *(int *)0xC1EE210;
    if (!(t0 == 2)) {
        t1 = *(int *)0xC2A75E0;
        *(unsigned int *)0xC2A75E0 = (t1 | 0x2000000);
        Init_Standard(0xC2A75E0);
        Voice_ShutUp(0x0);
        Voice_Request(0xC130B60, 0x0, 0x7F, 0x0);
        *(unsigned int *)0xC2A8FB4 = 0x0;
        t5 = *(int *)0xC1EE244;
        *(unsigned int *)0xC2A8FBC = t5;
        }
}

int FUN_0c05364e(void)
{
    int t1;
    int t2;
    int t3;

    FUN_0c052d28();
    t1 = *(int *)0xC2A75E0;
    *(unsigned int *)0xC2A75E0 = (t1 & 0xFEFFFFFF);
    t2 = *(int *)0xC2A75E0;
    *(unsigned int *)0xC2A75E0 = (t2 & 0xFDFFFFFF);
    t3 = *(int *)0xC2A75E0;
    *(unsigned int *)0xC2A75E0 = ((t3 & 0xFBFFFFFF) | 0x10000000);
    return ((t3 & 0xFBFFFFFF) | 0x10000000);
}

int FUN_0c053b44(void)
{
    int t0;
    int t1;

    t0 = *(int *)0xC1EE210;
    if (!(t0 == 2)) {
        t1 = GetMenuMode(0x1);
        if (!(t1 == 0)) {
        FUN_0c053dec();
        } else {
        FUN_0c053b76();
        }
        FUN_0c0544a8();
        } else {
        FUN_0c053dec();
        }
    return Put_GearBox();
}

int thunk_nlCloseEvent(void)
{
    return nlCloseEvent();
}

int FUN_0c057fe2(void)
{
    float u3;

    pfSetFont(0x1);
    pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
    pfSize(1.0f, 1.0f);
    u3 = *(float *)0xC2A96D0;
    pfLocate(u3, 378.0f);
    return pfPuts(0xC0D0A40);
}

int FUN_0c05af86(void)
{
    *(float *)0xC130E14 = 0.0f;
    return FUN_0c05b044();
}

int thunk_FUN_0c0409d2(void)
{
    return callTryAgain();
}

void FUN_0c05d4fc(void)
{
    int t3;
    int t5;
    int t8;
    int t9;

    nlPushMatrix(0x0);
    nlTranslateV(0xC13197C);
    nlTranslate(-3.0f, 0.0f, 26.0f);
    t3 = *(short *)0xC2A9A64;
    nlRotateAY(((unsigned short)t3 + 0x8000));
    t5 = *(int *)0xC2A9B90;
    FcvPlay(0xC9C6C40, 0x21, (float)t5);
    nlPopMatrix(0x1);
    t8 = *(int *)0xC2A9B90;
    if (!((int)t8 >= (int)0x40)) {
        t9 = *(int *)0xC2A9B90;
        *(unsigned int *)0xC2A9B90 = (t9 + 0x1);
        }
}

int FUN_0c0608ac(int a4, int a5, int a6)
{
    FUN_0c0310a0(a4, a5, a6);
    pfLength(a6);
    pfLocate((float)a4, (float)a5);
    return pfPuts(a6);
}

int kmUnloadDevice(void)
{
    thunk_FUN_0c072fe8();
    return FUN_0c072884();
}

int FUN_0c060da6(void)
{
    FUN_0c0728c8();
    ShallWeHaveSomeRelaxation(-1240.0f);
    return FUN_0c0738bc();
}

int camRestore(void)
{
    int t0;
    int t4;
    int t5;
    int t6;

    t0 = *(int *)0xC2AD550;
    camSetMode(t0);
    camSetEye(0xC2AD554, 0x0);
    camSetTarget(0xC2AD560, 0x0);
    t4 = *(short *)0xC2AD570;
    t5 = *(short *)0xC2AD56C;
    t6 = *(short *)0xC2AD56E;
    return camSetAngles((unsigned short)t5, (unsigned short)t6, (unsigned short)t4, 0x0);
}

int drvAccelDot(void)
{
    return nlInnerProduct(0xC2AD288, 0xC2AD1F8);
}

int psgPutShadow(int a4)
{
    int t1;

    nlTranslateV((a4 + 0x4));
    t1 = *(int *)((a4 + 0x10));
    nlRotateAY((t1 + 0x8000));
    nlPushMatrix(0x0);
    CalcShadow2Matrix((a4 + 0x14));
    nlObjPutUseViewMatrix(0xC5AA038);
    return nlPopMatrix(0x1);
}

int FUN_0c0738ae(int a4)
{
    return nlObjPutLoadTexture(0xC13F898, a4);
}

int thunk_FUN_0c072fe8(void)
{
    return FUN_0c072fe8();
}

int thunk_kmSetFogTable(void)
{
    return kmSetFogTable();
}

int thunk_FUN_0c158b80(void)
{
    return kmSetHSyncLine();
}

int nlDispStripX(int a4, int a5, int a6)
{
    nlstripSetVertexContext(0xC14AAC8, a5, a6);
    return FUN_0c080ae0(a4, a5, a6);
}

void kmResetRenderer(void)
{
    kmiDiscardRenderPipeline();
    kmiResetBoard();
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

int buUnmountDisk(void)
{
    return buUnmount();
}

int FUN_0c1519be(void)
{
    ADXF_Init();
    SJUNI_Init();
    SJRBF_Init();
    SJMEM_Init();
    FUN_0c167c4c();
    thunk_FUN_0c169a20();
    ADXSTM_Init();
    ADXSJD_Init();
    FUN_0c16800c();
    thunk_mwRnaErrEntryFunc(0xC1519A4, 0x0);
    return memset(0xC177AE0, 0x0, 0x460);
}

void adxt_start_stm(int a4)
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
}

int thunk_njSetConstantAttr(void)
{
    return njSetConstantAttr();
}

int thunk_kmiWriteRegister(void)
{
    return kmiWriteRegister();
}

int thunk_FUN_0c15fa1c(void)
{
    return FUN_0c15fa1c();
}

int vmsfs_c_synch(void)
{
    return vmsfb_exec();
}

int vmsfs_c_fiber0(void)
{
    return vmsfs_c_dispatch(0x0);
}

int vmsfs_c_fiber1(void)
{
    return vmsfs_c_dispatch(0x1);
}

int vmsfs_c_fiber2(void)
{
    return vmsfs_c_dispatch(0x2);
}

int vmsfs_c_fiber3(void)
{
    return vmsfs_c_dispatch(0x3);
}

int vmsfs_c_fiber4(void)
{
    return vmsfs_c_dispatch(0x4);
}

int vmsfs_c_fiber5(void)
{
    return vmsfs_c_dispatch(0x5);
}

int thunk_FUN_0c169a20(void)
{
    return mwRnaInit();
}

int thunk_FUN_0c169a7a(void)
{
    return mwRnaFinish();
}

int thunk_mwRnaCreate(void)
{
    return mwRnaCreate();
}

int ADXRNA_Start(void)
{
    return mwRnaStart();
}

int ADXRNA_Stop(void)
{
    return mwRnaStop();
}

int ADXRNA_SetTransSw(void)
{
    return mwRnaSetTransSw();
}

int ADXRNA_GetTime(void)
{
    return mwRnaGetTime();
}

int ADXRNA_GetStat(void)
{
    return mwRnaGetStat();
}

int ADXRNA_ExecServer(void)
{
    return mwRnaExecServer();
}

int ADXRNA_SetStartSmpl(void)
{
    return mwRnaSetStartSmpl();
}

int ADXRNA_SetNumChan(void)
{
    return mwRnaSetNumChan();
}

int ADXRNA_SetSfreq(void)
{
    return mwRnaSetSfreq();
}

int ADXRNA_SetOutVol(void)
{
    return mwRnaSetOutVol();
}

int ADXRNA_SetOutPan(void)
{
    return mwRnaSetOutPan();
}

int ADXRNA_SetBitPerSmpl(void)
{
    return mwRnaSetBitPerSmpl();
}

int ADXRNA_GetSfreq(void)
{
    return mwRnaGetSfreq();
}

int ADXRNA_GetOutVol(void)
{
    return mwRnaGetOutVol();
}

int ADXRNA_GetOutPan(void)
{
    return mwRnaGetOutPan();
}

int ADXRNA_GetBitPerSmpl(void)
{
    return mwRnaGetBitPerSmpl();
}

int ADXRNA_DiscardData(void)
{
    return mwRnaDiscardData();
}

int ADXSJD_Finish(void)
{
    return memset(0xC2F4F1C, 0x0, 0x4C0);
}

void ADXSJD_Stop(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x4));
    ADXB_Stop(t0);
    *(unsigned char *)((a4 + 0x1)) = 0x0;
}

int FUN_0c168832(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x4));
    return ADXB_GetFormat(t0);
}

int FUN_0c16883e(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x4));
    return ADXB_GetSfreq(t0);
}

int FUN_0c16884a(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x4));
    return ADXB_GetNumChan(t0);
}

int FUN_0c168856(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x4));
    return ADXB_GetOutBps(t0);
}

int FUN_0c168862(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x4));
    return ADXB_GetBlkSmpl(t0);
}

int FUN_0c16887a(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x4));
    return ADXB_GetTotalNumSmpl(t0);
}

int FUN_0c168892(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x4));
    return ADXB_GetNumLoop(t0);
}

int FUN_0c1688aa(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x4));
    return ADXB_GetLpStartPos(t0);
}

int FUN_0c1688b6(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x4));
    return ADXB_GetLpStartOfst(t0);
}

int FUN_0c1688c2(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x4));
    return ADXB_GetLpEndPos(t0);
}

int FUN_0c1688ce(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x4));
    return ADXB_GetLpEndOfst(t0);
}

int FUN_0c1697c4(int a4)
{
    int t1;

    FUN_0c169710(a4);
    *(unsigned int *)0xFF00001C = ((a4 & 0xFFFFF7FF) | 0x800);
    t1 = *(int *)0xFF00001C;
    *(unsigned int *)0xFF00001C = ((t1 & 0xFFFFFFF7) | 0x8);
    return ((t1 & 0xFFFFFFF7) | 0x8);
}

void FUN_0c16c7ca(void)
{
    int t0;
    int t1;
    int t2;

    *(unsigned int *)0xA05F6908 = 0x8;
    t0 = *(int *)0xC2F91C4;
    *(unsigned int *)0xC2F91C4 = (t0 + 0x1);
    t1 = *(int *)0xC2EAB2C;
    if ((t1 == 1)) {
        t2 = *(int *)0xC2F91B8;
        *(unsigned int *)0xC2F91B8 = (t2 + 0x1);
        FUN_0c16c634(0x1);
        }
}

int vmsfb_exec(void)
{
    int t0;

    t0 = *(int *)0xC2FA53C;
    return buFbrExecFiberServer(t0);
}

int vmsfb_exit(void)
{
    int t0;

    t0 = *(int *)0xC2FA53C;
    return buFbrDestroyServer(t0);
}

int vmsfb_sleep(void)
{
    return buFbrSleepVFiber();
}

int vmsfb_end(void)
{
    return buFbrEndFiber();
}

int thunk_FUN_0c170880(void)
{
    return FUN_0c170880();
}

int thunk_FUN_0c1708b2(void)
{
    return FUN_0c1708b2();
}

void ADXB_Destroy(int a4)
{
    int t0;

    if (!(a4 == 0)) {
        t0 = *(int *)((a4 + 0x8));
        ADXPD_Destroy(t0);
        memset(a4, 0x0, 0xAC);
        *(unsigned short *)((a4 + 0x0)) = 0x0;
        }
}

void ADXB_Reset(int a4)
{
    int t0;
    int t1;

    t0 = *(int *)((a4 + 0x4));
    if ((t0 == 3)) {
        t1 = *(int *)((a4 + 0x8));
        ADXPD_Reset(t1);
        *(unsigned int *)((a4 + 0x9C)) = 0x0;
        *(unsigned int *)((a4 + 0x4)) = 0x0;
        }
}

void FUN_0c17190c(int a4)
{
    int t0;

    if (!(a4 == 0)) {
        t0 = *(int *)((a4 + 0x4));
        memset(t0, 0x0, 0x100);
        memset(a4, 0x0, 0x8);
        *(unsigned int *)((a4 + 0x0)) = 0x0;
        }
}

void FUN_0c1720f4(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = FUN_0c171e62(a4, 0x9, 0x0);
    *(unsigned short *)(((0x58 + a4) + 0x0)) = t0;
    t1 = FUN_0c171e62(a4, 0xA, 0x0);
    *(unsigned short *)(((0x5A + a4) + 0x0)) = t1;
    t2 = *(short *)((a4 + 0x58));
    *(unsigned int *)((a5 + 0x0)) = t2;
    t3 = *(short *)((a4 + 0x5A));
    *(unsigned int *)((a6 + 0x0)) = t3;
}

void buFbrInit(void)
{
    memset(0xC2FB798, 0x0, 0x1AF8);
    *(unsigned int *)0xC2FD290 = 0x0;
    *(unsigned int *)0xC2FD294 = 0x0;
    *(unsigned int *)0xC2FD298 = 0x0;
}

int FUN_0c174394(void)
{
    return memset(0xC2FD29C, 0x0, 0x1A0);
}
