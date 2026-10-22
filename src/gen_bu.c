/* Straight-line functions with calls and guards (batch gen_bu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXB_GetCof(int);
int ADXB_GetLpInsNsmpl(int);
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int, ...);
int ADXPD_ExecHndl(int);
int ADXRNA_SetPlaySw(void);
int ADXSJD_GetStat(int);
int ADXSTM_OpenFname(int, int);
int ADXT_GetStat(int);
int ADXT_GetTime(int, int, int);
int ADXT_Stop(void);
int ADX_DecodeInfo(int, int);
int Advtise(void);
int CheckKyakuArea(int, int);
int Drv_StartAction(int, int, int);
int ExecKyakuArea(void);
int AdvNextCourseMode(void);
int req_load(void);
int Chk_DispCredit(void);
int gdc_VolStreamSong(int);
int gdc_PlayStreamSong(int);
int gdc_FadeStopStreamSong(int, int);
int gdc_FadeManStreamSong(void);
int gdc_StopStreamSongDisk(void);
int gdc_FileLoadStop(void);
int gdc_FileLoadInit(void);
int InitAdvLogoSprite(void);
int PutAdvLogoSprite(void);
int pfSetAspectRatio(float);
int pfOffsetOff(void);
int pfCleanString(void);
int pfAddNumber(int);
int pfSetFilterMode(int);
int PutCollisionPoly(int);
int PutGridPoly(int, int, float, float, float);
int MotionBlurOn(void);
int PutRenderTexture(int);
int num2char(int);
int CheckXWord(int);
int CheckNameEntryPad(void);
int BupSave(int, int, int, int);
int menuSpriteAttrInit(int);
int SetScreen(int);
int NextWindow(int);
int SetWindow(int);
int menuReadPad(int);
int windowOpenStep(void);
int windowEnterStep(void);
int CheckSetDrive(int, int);
int EditEntryName(int);
int AnnounceSecretFlag(int);
int SetMenuClass(int);
int setReplayType(int);
int nd_StartWait_MoveCar(void);
int nd_StartWait_PutCar(void);
int nd_StartWait_PutKyaku(void);
int nd_StartWait_PutMessage(void);
int nd_StartWait_Camera(void);
int nd_StartWait_Stub(void);
int nd_StartWait_SetLight(void);
int nd_StartWait_SetFog(void);
int Put_Time_Spark(int);
int Init_Adv_Sprite(void);
int Init_SEGA_LOGO(void);
int Start_Ranking(void);
int Start_Adv_Title_LOGO(int, int);
int End_Adv_Title_LOGO(void);
int Init_Window_Sprite(int);
int ndGetPeripheral(void);
int Put_ProposalWalker(int);
int Move_ProposalWalker(int);
int lcdSync(int);
int lcdFillData(int, int);
int lcdSetData(int, ...);
int Drv_StartGetOn(void);
int Drv_StartGetOff(void);
int Drv_SetMotion(int, float);
float Drv_DriveFrame(void);
float Drv_ReverseFrame(void);
float Drv_FacePsgFrame(int);
int Drv_ExecBlend(void);
int drvUpdatePartTracks(void);
int camGetOnMid(void);
int fcvCalcPosition(int, int, float);
int fcvCalcAngle(int, int, float);
int PatchMotion(void);
int EndPsg_Kill(int);
int EndPsg_CrushReact(int);
int Voice_Clear(void);
int Voice_Execute(void);
int FUN_0c074680(void);
int FUN_0c0753f0(void);
int FUN_0c075400(int);
int FUN_0c075410(int, int);
int FUN_0c076f70(void);
int nlSqrt(int, int);
int FUN_0c077210(int, int);
int FUN_0c077290(int, int);
int FUN_0c077470(int);
int FUN_0c077b50(int);
int FUN_0c077b80(int, int);
int FUN_0c077ee0(int);
int FUN_0c077f60(void);
int FUN_0c079f10(void);
int FUN_0c07d450(int, int, int);
int FUN_0c07d4f0(int, int, int, int);
int FUN_0c07e820(int, int, int);
int FUN_0c07e880(void);
int FUN_0c07e8a0(int, int);
int FUN_0c07e960(int, int, int, int);
int FUN_0c07ea70(int, int, int);
int FUN_0c07f5c0(void);
int FUN_0c07fb70(int);
int FUN_0c07fbb0(int);
int FUN_0c07fbe0(int);
int FUN_0c07fc10(int);
int FUN_0c07fc40(int);
int FUN_0c07fd00(int);
int FUN_0c07fd80(int);
int FUN_0c080470(int);
int FUN_0c080500(int);
int FUN_0c081470(int, int);
int FUN_0c14f414(void);
int FUN_0c152340(void);
int FUN_0c157220(int, int);
int FUN_0c158860(int, int, int);
int FUN_0c16766c(void);
int FUN_0c1676bc(void);
int FUN_0c1687f2(int);
int FUN_0c1687f6(int, int);
int FUN_0c168812(int, int);
int FUN_0c16881a(int, int);
int FUN_0c168826(int, int);
int FUN_0c1688aa(int);
int FUN_0c1688b6(int);
int FUN_0c1688c2(int);
int FUN_0c1688ce(int);
int FUN_0c168e10(int);
int FUN_0c1718c4(int);
int FUN_0c171e62(int, int, int);
int FUN_0c1722c2(int, int, int, int);
int FcvStoreBuffer(int, int, float);
int GetMenuMode(int);
int replayChangeControl(int);
int Initialize_Replay(void);
int KillColliObj(int);
int LightEffect(int);
int Put2DObjUp(int, float, float);
int PutKyakuStopArea(int, int);
int PutVM_Message(int, int, int, float, float);
int Put_SEGA_LOGO2(void);
int ResetFadeColor(void);
int SJMEM_Create(void);
int SetColliObj(int, int);
int SetFadeColorBaseMulti(float, float, float);
int Sound_Init(void);
int Sound_Request(int, int);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
extern void _builtin_ftrv(float *, float *);
extern int _builtin_get_imask(void);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
int adxStartAfs2(int, int);
int adxt_RcvrReplay(void);
int adxt_start_sj(int, int);
int adxt_start_stm(int);
int buCalcBackupFileSize(int, int);
int buGetDiskInfo(int, int);
int buMakeBackupFileImage(int, int);
int buStat(void);
int camRestore(void);
int exec_loop_Replay(void);
int extRand(void);
int gdFsExecServerG(void);
int gdFsGetDrvStat(void);
int gdFsGetDrvStatG(void);
int gdFsReopenHn(int);
int gdFsReqDrvStat(void);
int gdFsReqDrvStatG(void);
int gdc_FileLoad(int, int, int);
int gdc_SpriteSetAdv(void);
int gdc_SpriteSetMenu(void);
int gdc_StopStreamSongAll(void);
int gdc_StopStreamVoice(int);
int gdc_StopStreamVoiceAll(void);
int kdGetDeviceInfo(void);
int kdSetGetMediaInfoEx(int, int, int, int);
int kmGetCurrentScanline(int);
int kmGetFreeTextureMem(int, int);
int kmProcessVertexRenderState(int);
int kmSetColorClampValue(int, ...);
int kmfSetTimeOutCount(int, int);
int kmiQueryFinishDMA(int);
int kmiReadRegister(int);
int kmiWriteRegister(int, int);
int memmove(int, int, int);
int memset(int, int, int);
int menuCursor(int, int, int);
int mwRnaAdjustBuf(int);
int mwRnaErrCallFunc(int, ...);
int mwlSbAlloc(void);
int nlAddVector(int, int);
int nlArcTan2(float, float);
int nlCloseEvent(int);
float nlFloor(float);
int nlFogDensityF(float);
int nlFogTableColor(int);
int nlFree(int);
int nlGetMatrix(int);
int nlInitEvent(void);
int nlInitHeapMemory(int, int);
float nlInnerProduct(int, int);
float nlInvertSqrt(float);
float nlLength(int, int);
int nlLoadMatrix(int);
int nlLocate(int, int);
int nlMalloc(int);
int nlMultiMatrix(int);
int nlObjPutLoadTextureOnce_Sub(int, ...);
int nlObjPutSetFadeColorBase(float, float, float);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlScaleVector(int, int, float);
int nlSetDummyTextureParameter(int);
int nlSetTextureParameter(int, int);
int nlSubVector3op(int, int, int);
int nlTranslateV(int);
int nlsndCheckPackFreeError(int);
int nlsndG2DmaHandleClose(int);
int nlsndG2DmaHandleOpen(void);
int nlsndStreamGenerateHdInfo(int);
int pdExecPeripheralServer(void);
int pdGetPeripheral(int);
int pdVibGetInfo(int, int);
int pfColor(int, int, int, int);
int pfLocate(float, float);
int pfPutSEGALogo(void);
int pfPuts(int);
int pfSize(float, float);
int psgFrame(int);
int psgSetState(int, int, int, int);
int putLevelCTFontAssist(int, int, int, int);
int rinRandomSeed(int);
int saveBufferInit(int);
int set_event(int, int);
int strlen(int);
int strncmp(int, int, int);
int thunk_nlCloseEvent(void);
int camGetOnFar(void);
void SetCameraLookPtr(int a4);
void SetCameraLookAnglePtr(int a4);
void SetCameraLookRotVecPtr(int a4);
int nlEventNumber(void);
int nlWorkNumber(void);
float GetLightAmbience(void);
int ReturnBreakSBoardNum(void);
void Add_Sec(int a4);
void FUN_0c073d50(int a4);
void FUN_0c074ea0(int a4);
int FUN_0c0755d0(void);
int FUN_0c0755c0(void);
void FUN_0c07a540(int a4);
int FUN_0c07aae0(void);
int FUN_0c07f830(void);
int FUN_0c07f840(void);
int FUN_0c080400(void);
void FUN_0c080560(int a4);
void FUN_0c15348c(int a4);
void FUN_0c158ed2(int a4);
void FUN_0c1701ee(int a4, int a5, int a6);
void DO_NOT_LCDAccess(void);
void FUN_0c074310(int a4);
void FUN_0c07b700(int a4, int a5);
int FUN_0c1701de(int a4, int a5);
void usr_adx_err_func(void);
void NextGame(void);
int FUN_0c16770c(int a4, int a5);
int FUN_0c1676d0(int a4, int a5);
int FUN_0c167720(int a4, int a5);
int FUN_0c168886(int a4);
int FUN_0c16889e(int a4);
int FUN_0c075420(void);
int FUN_0c0755e0(int a4, int a5);
int FUN_0c14d2ec(int a4);
int FUN_0c171d18(int a4);
int FUN_0c07a240(void);
int FUN_0c07a290(void);
int camGetOffEnd(void);
int FUN_0c079d40(void);
int FUN_0c15152c(void);
void FUN_0c171002(int a4, int a5, int a6);
void FUN_0c172486(int a4, int a5, int a6);
int FUN_0c074bb0(void);
int FUN_0c075450(void);
int FUN_0c171d9a(int a4);
int FUN_0c171dce(int a4);
int FUN_0c073c00(void);
int FUN_0c077270(void);
int FUN_0c1519a4(int a4, int a5);
int End_TimeUp(void);
int FUN_0c075470(int a4, int a5);
void FUN_0c15f84c(void);
int FUN_0c15f8e8(int a4, int a5);
void FUN_0c07b460(void);
void FUN_0c07b480(void);
void FUN_0c07b4a0(void);
void FUN_0c07b520(void);
int FUN_0c15f8ca(int a4);
int FUN_0c15f95a(int a4);
int FUN_0c170fe4(int a4, int a5, int a6, int a7);
int FUN_0c15f93a(int a4, int a5, int a6, int a7);
int FUN_0c0772e0(int a4);
int FUN_0c15f876(int a4, int a5, int a6);
int FUN_0c15f898(int a4, int a5, int a6);
int FUN_0c15f904(int a4, int a5, int a6);
void FUN_0c167910(void);
void FUN_0c171cae(int a4);
int AdvExecState(void);
int Pause_ExecRenderTexture2nd(void);
void Drv_StartBikeGuest(void);
float FUN_0c0785a0(float f4, float f5);
float FUN_0c078660(float f4, float f5);
float FUN_0c0786c0(float f4, float f5);
float FUN_0c078720(float f4, float f5);
void FUN_0c07b4c0(void);
void FUN_0c07b4f0(void);
void FUN_0c14b320(void);
int FUN_0c161614(void);
int FUN_0c161638(void);
int FUN_0c17187c(void);
int FUN_0c1718a0(void);
void Drv_StartBikeReady(void);
int FUN_0c07aca0(void);
int FUN_0c078fc0(void);
void FUN_0c158800(float f4);
int FUN_0c17457a(void);
int gdc_GetStreamStat(int a4, int a5);
int Exec_Time_Spark(int a4);
void Drv_StartReverse(void);
int FUN_0c07d080(int a4, int a5);
void FUN_0c14b2d0(int a4, int a5);
int AdvStateStart(void);
void Drv_StartDrive(void);
int gdc_StreamPlayF(int a4, int a5, int a6);
int FUN_0c171cd0(int a4);
int gdc_GetStreamSongPlayTime(int a4);
int FUN_0c07d100(int a4, int a5, int a6, int a7);
int callWarnning(int a4);
int FUN_0c14f3d6(int a4, int a5);
void FUN_0c152298(int a4);
void Voice_CancelToNext(int a4);
int FUN_0c07d170(int a4, int a5, int a6, int a7);
int FUN_0c07d1f0(int a4, int a5, int a6, int a7);
void FUN_0c14dd4c(int a4, int a5);
void FUN_0c14e2ac(void);
int FUN_0c1614ee(int a4);
void FUN_0c0771d0(int a4, int a5, int a6);
void FUN_0c077230(int a4, int a5, int a6);
int FUN_0c171f36(int a4, int a5);
int AdvStateTitle2(void);
void FUN_0c14ac40(int a4);
int Exec_nd_StartWait(void);
int FUN_0c07d130(int a4, int a5, int a6, int a7);
int FUN_0c07d0b0(int a4, int a5, int a6, int a7);
int windowGoMenu(void);
float camGetOnSelect(void);
int FUN_0c07d1b0(int a4, int a5, int a6, int a7);
void FUN_0c1522f0(int a4);
float setObjHitBeach(int a4);
int FUN_0c07ba40(int a4);
int FUN_0c172440(int a4, int a5);
void AdvStateReplay2Init(void);
int FUN_0c07f570(int a4, int a5);
int FUN_0c16ad8a(int a4, int a5, int a6);
int ndCurrentPeriCheck(void);
int FUN_0c151b04(int a4, int a5);
int Exec_ProposalWalker(int a4);
int FUN_0c1723d6(int a4, int a5, int a6, int a7, int a8);
void Drv_StartSeated(void);
int FUN_0c07ee50(int a4, int a5, int a6);
void TggleObjShadow(int a4);
int Drv_ExecSeated(void);
int Drv_ExecPickUp(void);
int Drv_ExecChoin(void);
int Drv_ExecPsgReact(void);
int FUN_0c16178a(int a4, int a5);
int AdvStateTitle2Init(void);
float screenOutCheck(int a4);
int FUN_0c07f1b0(int a4);
int FUN_0c1518d2(int a4, int a5, int a6);
void AdvStateReplayInit(void);
int FUN_0c07f330(int a4, int a5, int a6, int a7);
int FUN_0c07f7c0(int a4);
int FUN_0c0108ea(int a4, int a5);
int ndCheckButtonFrame(void);
int FUN_0c151930(int a4);
int Drv_ExecBikeReady(void);
int FUN_0c074390(int a4);
int FUN_0c1617e0(int a4, int a5);
int FUN_0c171e74(int a4);
int init_Title2(void);
int search(int a4, int a5);
void FUN_0c1524ee(int a4, int a5, int a6);
int Drv_ExecBikeGuest(void);
int FUN_0c172350(int a4, int a5, int a6, int a7);
void TaxiBlankInterrupt(void);
int windowNameErase(void);
float FUN_0c078c50(int a4, int a5, int a6, int a7);
float FUN_0c078cf0(int a4, int a5, int a6, int a7);
int FUN_0c1523da(int a4, int a5);
void BupCompleteCallback(int a4, int a5, int a6);
void FUN_0c14f6f4(int a4, int a5, int a6);
int SaveVMSicon(int a4);
int lcdResetData(int a4, int a5);
int FUN_0c07f4b0(int a4, int a5, int a6);
int FUN_0c14df90(void);
int FUN_0c157dc0(int a4, int a5, int a6);
int FUN_0c078ef0(float f4, float f5, float f6, float f7, float f8, float f9);
void setObjHitBreakOff(int a4);
int FUN_0c078e30(float f4, float f5, float f6, float f7, float f8, float f9);
int windowNameEntry(void);
int PutCollisionObj(int a4, int a5);
int FUN_0c14e03a(void);
int Drv_StartPsgReact(void);
int FcvStorePartsBuffer(int a4, int a5, int a6, float f4);
int FUN_0c151b9c(int a4, int a5, int a6);
void FUN_0c168f00(int a4);
int camGetOffSelect(void);
int FUN_0c07a2e0(int a4, int a5, int a6);
int MakeBackupHeadInfo(int a4, int a5, int a6, int a7);
int ExecNameEntryDecide(void);
int Exec_LCDLogoDemo(void);
void setObjHitBreakSide(int a4);
void setObjHitSplitSleep(int a4);
int windowTryAgain(void);
int AdvStateReplay2(void);
int FUN_0c07f690(int a4, int a5, int a6);
int AdvStateReplay(void);
int FUN_0c080c50(int a4, int a5);
int AdvStateLogo(void);
int FUN_0c080d70(int a4, int a5);
int FUN_0c07ef40(void);
int Drv_ExecGetOff(void);
int Drv_ExecGetOn(void);
int FUN_0c169514(int a4);
int menuModeInit(void);
int EndPsg_Execute(int a4);
void ndPeriCheck(void);
int ExecEffectSmoke(int a4);
int FUN_0c17195a(int a4);
int ExecEndRoll(void);
int ndPeriCheck2(int a4, int a5);
int ExecNameEntrySelect(void);

int camGetOnFar(void)
{
    return camGetOnMid();
}

void SetCameraLookPtr(int a4)
{
    *(unsigned int *)0xC0E49F8 = a4;
}

void SetCameraLookAnglePtr(int a4)
{
    *(unsigned int *)0xC0E49FC = a4;
}

void SetCameraLookRotVecPtr(int a4)
{
    *(unsigned int *)0xC0E4A00 = a4;
}

int nlEventNumber(void)
{
    int t0;

    t0 = *(int *)0xC1A99EC;
    return t0;
}

int nlWorkNumber(void)
{
    int t0;

    t0 = *(int *)0xC1A99E8;
    return t0;
}

float GetLightAmbience(void)
{
    float u0;

    u0 = *(float *)0xC0EA5B8;
    return u0;
}

int ReturnBreakSBoardNum(void)
{
    int t0;

    t0 = *(int *)0xC275820;
    return t0;
}

void Add_Sec(int a4)
{
    *(unsigned int *)0xC2A760C = a4;
}

void FUN_0c073d50(int a4)
{
    *(unsigned int *)0xC14A640 = a4;
}

void FUN_0c074ea0(int a4)
{
    *(unsigned int *)0xC2AED3C = a4;
}

int FUN_0c0755d0(void)
{
    int t0;

    t0 = *(int *)0xC2AEE24;
    return t0;
}

int FUN_0c0755c0(void)
{
    int t0;

    t0 = *(int *)0xC2AEE20;
    return t0;
}

void FUN_0c07a540(int a4)
{
    *(unsigned int *)0xC2B3568 = a4;
}

int FUN_0c07aae0(void)
{
    int t0;

    t0 = *(int *)0xC2B3570;
    return t0;
}

int FUN_0c07f830(void)
{
    int t0;

    t0 = *(int *)0xA08000EC;
    return t0;
}

int FUN_0c07f840(void)
{
    int t0;

    t0 = *(int *)0xA08000E8;
    return t0;
}

int FUN_0c080400(void)
{
    int t0;

    t0 = *(int *)0xC2B7714;
    return t0;
}

void FUN_0c080560(int a4)
{
    *(unsigned int *)0xC2B7944 = a4;
}

void FUN_0c15348c(int a4)
{
    *(unsigned int *)0xC2BA338 = a4;
}

void FUN_0c158ed2(int a4)
{
    *(unsigned int *)((a4 + 0x4)) = 0x1;
}

void FUN_0c1701ee(int a4, int a5, int a6)
{
    *(unsigned short *)(((a4 + a5) + 0x0)) = a6;
}

void DO_NOT_LCDAccess(void)
{
    *(unsigned int *)0xC2A9FF0 = 0x1;
}

void FUN_0c074310(int a4)
{
    int t0;

    t0 = *(int *)0xC14A64C;
    *(unsigned int *)((a4 + 0x4)) = t0;
}

void FUN_0c07b700(int a4, int a5)
{
    *(unsigned int *)0xC2B75E8 = a5;
}

int FUN_0c1701de(int a4, int a5)
{
    int t0;

    t0 = *(short *)(((a4 + a5) + 0x0));
    return (unsigned short)t0;
}

void usr_adx_err_func(void)
{
    int t0;

    t0 = *(int *)0xC1EE208;
    *(unsigned int *)0xC1EE208 = (t0 + 0x1);
}

void NextGame(void)
{
    *(unsigned int *)0xC1EE234 = 0x0;
    *(unsigned int *)0xC1EE238 = 0x0;
}

int FUN_0c16770c(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x8);
}

int FUN_0c1676d0(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x5);
}

int FUN_0c167720(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x9);
}

int FUN_0c168886(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x4));
    return ADXB_GetCof(t0);
}

int FUN_0c16889e(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x4));
    return ADXB_GetLpInsNsmpl(t0);
}

int FUN_0c075420(void)
{
    int t0;

    t0 = FUN_0c0753f0();
    *(unsigned int *)0xC2AEEA8 = t0;
    return t0;
}

int FUN_0c0755e0(int a4, int a5)
{
    return kmfSetTimeOutCount(a4, a5);
}

int FUN_0c14d2ec(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x20));
    if (t0 != 1) {
        return gdFsExecServerG();
    }
    return t0;
}

int FUN_0c171d18(int a4)
{
    int t0;

    t0 = *(short *)((a4 + 0x6));
    return FUN_0c07fc10(t0);
}

int FUN_0c07a240(void)
{
    int t0;

    t0 = nlObjPutLoadTextureOnce_Sub(0x0);
    return t0;
}

int FUN_0c07a290(void)
{
    int t0;

    t0 = nlObjPutLoadTextureOnce_Sub(0x1);
    return t0;
}

int camGetOffEnd(void)
{
    int t0;

    t0 = *(int *)0xC2AD590;
    if ((t0 & 2) == 0) {
        return camRestore();
    }
    return t0;
}

int FUN_0c079d40(void)
{
    nlLoadMatrix(0xC2B3410);
    return nlMultiMatrix(0xC2B33D0);
}


void FUN_0c171002(int a4, int a5, int a6)
{
    int t0;
    int t1;

    t0 = *(int *)((a4 + 0x9C));
    *(unsigned int *)((a4 + 0x9C)) = (t0 + a6);
    t1 = *(int *)((a4 + 0x98));
    *(unsigned int *)((a4 + 0x98)) = (t1 + a6);
}

void FUN_0c172486(int a4, int a5, int a6)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x60));
    *(unsigned char *)((a4 + 0x5)) = t0;
    *(unsigned char *)((a4 + 0x60)) = 0x0;
    *(unsigned int *)((a6 + 0x0)) = 0x0;
}

int FUN_0c074bb0(void)
{
    int t1;
    int stk[3] = {0};

    kmGetCurrentScanline(((int)stk + 4));
    t1 = *(int *)(((int)stk + 4));
    return t1;
}

int FUN_0c075450(void)
{
    int t0;
    int t1;
    int t2;

    t0 = FUN_0c0753f0();
    t1 = *(int *)0xC2AEEA8;
    t2 = FUN_0c075410(t1, t0);
    return FUN_0c075400(t2);
}

int FUN_0c171d9a(int a4)
{
    int t0;
    int t1;

    t0 = *(short *)((a4 + 0x6));
    t1 = FUN_0c07fbb0(t0);
    *(unsigned int *)((a4 + 0x14)) = t1;
    return t1;
}

int FUN_0c171dce(int a4)
{
    int t0;
    int t1;

    t0 = *(short *)((a4 + 0x6));
    t1 = FUN_0c07fbe0(t0);
    *(unsigned int *)((a4 + 0x10)) = t1;
    return t1;
}

int FUN_0c073c00(void)
{
    int t1;
    int stk[4] = {0};

    kmGetFreeTextureMem((((int)stk + 4) + 0x4), ((int)stk + 4));
    t1 = *(int *)(((int)stk + 4));
    return t1;
}

int FUN_0c077270(void)
{
    int t1;

    nlGetMatrix(0x0);
    t1 = *(int *)0xC2B31E0;
    *(unsigned int *)0xC2B31E4 = t1;
    *(unsigned short *)0xC2B31DC = 0x0;
    return nlLoadMatrix(0x0);
}

int FUN_0c1519a4(int a4, int a5)
{
    int t0;

    t0 = ADXERR_CallErrFunc(0xC175454, a5);
    return t0;
}

int End_TimeUp(void)
{
    int t1;
    int t2;

    Sound_Init();
    t1 = Voice_Clear();
    t2 = *(int *)0xC2A75E0;
    *(unsigned int *)0xC2A75E0 = (t2 & 0xEFFFFFFF);
    return t1;
}

int FUN_0c075470(int a4, int a5)
{
    int t0;

    t0 = kmSetColorClampValue(a4, a5);
    return t0;
}

void FUN_0c15f84c(void)
{
    int t0;

    t0 = FUN_0c1676bc();
    if (t0 == 1) {
        return;
    }
}

int FUN_0c15f8e8(int a4, int a5)
{
    int t0;
    int stk[5] = {0};

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = a5;
    t0 = FUN_0c16766c();
    return t0;
}

void FUN_0c07b460(void)
{
    int t0;
    int t1;

    *(unsigned int *)0xC2B7620 = 0x0;
    t0 = *(int *)0xC2B75B8;
    if (t0 != 0) {
        t1 = ((int (*)(void))(t0))();
    }
}

void FUN_0c07b480(void)
{
    int t0;
    int t1;

    *(unsigned int *)0xC2B7620 = 0x1;
    t0 = *(int *)0xC2B75BC;
    if (t0 != 0) {
        t1 = ((int (*)(void))(t0))();
    }
}

void FUN_0c07b4a0(void)
{
    int t0;
    int t1;

    *(unsigned int *)0xC2B7620 = 0x2;
    t0 = *(int *)0xC2B75C0;
    if (t0 != 0) {
        t1 = ((int (*)(void))(t0))();
    }
}

void FUN_0c07b520(void)
{
    int t0;
    int t1;

    *(unsigned int *)0xC2B7620 = 0x4;
    t0 = *(int *)0xC2B75E8;
    if (t0 != 0) {
        t1 = ((int (*)(void))(t0))();
    }
}

int FUN_0c15f8ca(int a4)
{
    int t0;
    int stk[5] = {0};

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = 0x0;
    t0 = FUN_0c16766c();
    return t0;
}

int FUN_0c15f95a(int a4)
{
    int t0;
    int stk[5] = {0};

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = 0x0;
    t0 = FUN_0c16766c();
    return t0;
}

int FUN_0c170fe4(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = *(int *)((a4 + 0x9C));
    *(unsigned int *)((a5 + 0x0)) = t0;
    t1 = *(int *)((a4 + 0x9C));
    t2 = *(int *)((a4 + 0x40));
    *(unsigned int *)((a6 + 0x0)) = (t2 - t1);
    t3 = *(int *)((a4 + 0x18));
    t4 = *(int *)((a4 + 0x98));
    *(unsigned int *)((a7 + 0x0)) = (t3 - t4);
    t5 = *(int *)((a4 + 0x3C));
    return t5;
}

int FUN_0c15f93a(int a4, int a5, int a6, int a7)
{
    int t0;
    int stk[7] = {0};

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = a5;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = a6;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = a7;
    t0 = FUN_0c16766c();
    return t0;
}

int FUN_0c0772e0(int a4)
{
    int t1;
    int stk[20] = {0};

    *(unsigned int *)(((int)stk + 4)) = a4;
    FUN_0c077290((((int)stk + 4) + 0x4), a4);
    t1 = FUN_0c077b80((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x44));
    return t1;
}

int FUN_0c15f876(int a4, int a5, int a6)
{
    int t0;
    int stk[7] = {0};

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = a5;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = a6;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = 0x0;
    t0 = FUN_0c16766c();
    return t0;
}

int FUN_0c15f898(int a4, int a5, int a6)
{
    int t0;
    int stk[7] = {0};

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = a5;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = a6;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = 0x0;
    t0 = FUN_0c16766c();
    return t0;
}

int FUN_0c15f904(int a4, int a5, int a6)
{
    int t0;
    int stk[7] = {0};

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = a5;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = a6;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = 0x0;
    t0 = FUN_0c16766c();
    return t0;
}

void FUN_0c167910(void)
{
    int t0;
    int t2;

    t0 = *(int *)0xC178624;
    if (t0 == 0) {
        memset(0xC2F4C9C, 0x0, 0x180);
    }
    t2 = *(int *)0xC178624;
    *(unsigned int *)0xC178624 = (t2 + 0x1);
}

void FUN_0c171cae(int a4)
{
    int t0;
    int t2;

    t0 = *(short *)((a4 + 0x6));
    FUN_0c07fd80(t0);
    t2 = *(signed char *)((a4 + 0x5));
    *(unsigned char *)(((0x60 + a4) + 0x0)) = t2;
    *(unsigned char *)((a4 + 0x5)) = 0x0;
    *(unsigned int *)((a4 + 0x18)) = 0x0;
}

int AdvExecState(void)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)0xC1EE238;
    t1 = *(int *)(((t0 << 2) + 0xC08ADC4));
    if (t1 == 0) {
        *(unsigned int *)0xC1EE238 = 0x0;
    } else {
        t2 = ((int (*)(int))(t1))(0xC1EE238);
    }
    return Advtise();
}


void Drv_StartBikeGuest(void)
{
    float u1;

    *(unsigned int *)0xC2AD1D0 = 0xC0D3080;
    *(unsigned int *)0xC2AD1D4 = 0xC0D3080;
    Drv_SetMotion(0xC13D404, 0.0f);
    u1 = *(float *)0xC063114;
    *(float *)0xC2AD0F8 = u1;
}





void FUN_0c07b4c0(void)
{
    int t0;
    int t1;

    *(unsigned int *)0xC2B7620 = 0x3;
    t0 = *(int *)0xC2B75C4;
    if (t0 != 0) {
        t1 = ((int (*)(void))(t0))();
    }
    *(unsigned int *)0xA05F6900 = 0x4000;
}

void FUN_0c07b4f0(void)
{
    int t0;
    int t1;

    *(unsigned int *)0xC2B7620 = 0x5;
    t0 = *(int *)0xC2B75C8;
    if (t0 != 0) {
        t1 = ((int (*)(void))(t0))();
    }
    *(unsigned int *)0xA05F705C = 0x3;
}

void FUN_0c14b320(void)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)0xC2EAAB0;
    if (t0 != 1) {
        t1 = *(int *)0xC2EAAAC;
        t2 = kmiQueryFinishDMA(t1);
        if (t2 == 1) {
            return;
        }
        return;
    }
}

int FUN_0c161614(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(signed char *)0xFFD80004;
    *(unsigned char *)0xFFD80004 = (t0 & 0xFD);
    t1 = *(short *)0xFFD8001C;
    *(unsigned short *)0xFFD8001C = (t1 & 0xFFFFFFDF);
    t2 = *(short *)0xFFD8001C;
    *(unsigned short *)0xFFD8001C = (t2 & 0xFFFFFEFF);
    t3 = *(int *)0xC2EBF74;
    t4 = *(int *)0xC2EBF78;
    return ((int (*)(int))(t3))(t4);
}

int FUN_0c161638(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(signed char *)0xFFD80004;
    *(unsigned char *)0xFFD80004 = (t0 & 0xFB);
    t1 = *(short *)0xFFD80028;
    *(unsigned short *)0xFFD80028 = (t1 & 0xFFFFFFDF);
    t2 = *(short *)0xFFD80028;
    *(unsigned short *)0xFFD80028 = (t2 & 0xFFFFFEFF);
    t3 = *(int *)0xC2EBF7C;
    t4 = *(int *)0xC2EBF80;
    return ((int (*)(int))(t3))(t4);
}

int FUN_0c17187c(void)
{
    int t2;

    memset(0xC2FAF54, 0x0, 0x800);
    memset(0xC2FB754, 0x0, 0x40);
    t2 = memset(0xC2FAC14, 0x0, 0x340);
    return t2;
}

int FUN_0c1718a0(void)
{
    int t2;

    memset(0xC2FAF54, 0x0, 0x800);
    memset(0xC2FB754, 0x0, 0x40);
    t2 = memset(0xC2FAC14, 0x0, 0x340);
    return t2;
}

void Drv_StartBikeReady(void)
{
    float u1;

    *(unsigned int *)0xC2AD1D0 = 0xC0D4C58;
    *(unsigned int *)0xC2AD1D4 = 0xC0D4C68;
    Drv_SetMotion(0xC135150, 0.0f);
    u1 = *(float *)0xC063114;
    *(float *)0xC2AD0F8 = u1;
}

int FUN_0c07aca0(void)
{
    FUN_0c077470(0xC2B7578);
    FUN_0c077ee0(0xC2B34E8);
    FUN_0c077470(0xC2B34A8);
    return FUN_0c077b50(0xC2B7578);
}

int FUN_0c078fc0(void)
{
    int t0;
    int t2;

    t0 = *(int *)0xC2B3208;
    nlPushMatrix(t0);
    t2 = *(int *)0xC2B31FC;
    nlMultiMatrix(t2);
    FUN_0c077f60();
    FUN_0c077470(0xC2B33D0);
    return nlPopMatrix(0x1);
}

void FUN_0c158800(float f4)
{
    float u0;
    int t1;
    int t2;
    int t3;
    int stk[2] = {0};

    *(unsigned int *)(((int)stk + 4)) = 0x0;
    u0 = *(float *)0xC158840;
    t1 = *(int *)(((int)stk + 4));
    if ((unsigned int)t1 < (unsigned int)(int)(f4 * u0)) {
        do {
            t2 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t2 + 0x1);
            t3 = *(int *)(((int)stk + 4));
        } while ((unsigned int)t3 < (unsigned int)(int)(f4 * u0));
    }
}

int FUN_0c17457a(void)
{
    int t0;
    int t1;
    int t3;
    int t2;

    t0 = 0xC2FD29C;
    do {
        t1 = *(int *)((t0 + 0x0));
        t3 = t1;
        if (t1 == 1) {
            t2 = ADXPD_ExecHndl(t0);
            t3 = t2;
        }
        t0 = (t0 + 0x34);
    } while ((unsigned int)t0 < (unsigned int)0xC2FD43C);
    return t3;
}

int gdc_GetStreamStat(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    if (a4 == 1) {
        t0 = *(int *)(((a5 << 2) + 0xC1EE810));
        t1 = ADXT_GetStat(t0);
        t4 = t1;
    } else {
        t2 = *(int *)(((a5 << 2) + 0xC1EE820));
        t3 = ADXT_GetStat(t2);
        t4 = t3;
    }
    return t4;
}

int Exec_Time_Spark(int a4)
{
    float u1;
    float u2;

    Put_Time_Spark(a4);
    u1 = *(float *)0xC05723C;
    u2 = *(float *)((a4 + 0x1C));
    if (u1 > u2) {
        Sound_Request(0x5A9, 0x0);
        return thunk_nlCloseEvent();
    }
    return 0x1C;
}

void Drv_StartReverse(void)
{
    float t0;
    float u2;

    *(unsigned int *)0xC2AD1D0 = 0xC0D44E8;
    *(unsigned int *)0xC2AD1D4 = 0xC0D44F0;
    t0 = Drv_ReverseFrame();
    Drv_SetMotion(0xC8AC34C, t0);
    u2 = *(float *)0xC06219C;
    *(float *)0xC2AD0F8 = u2;
}

int FUN_0c07d080(int a4, int a5)
{
    int t0;
    int t1;
    int t2;

    t0 = *(short *)((a5 + 0x4));
    t1 = *(short *)((a5 + 0x0));
    t2 = *(short *)((a5 + 0x2));
    return FUN_0c07d450((((t1 << 2) << 2) + a4), (((t2 << 2) << 2) + a4), (((t0 << 2) << 2) + a4));
}

void FUN_0c14b2d0(int a4, int a5)
{
    int t0;

    t0 = kmiReadRegister(0xC4);
    *(unsigned int *)((a4 + 0x0)) = (t0 & 0x3FF);
    *(unsigned int *)((a5 + 0x0)) = (((unsigned int)t0 >> 16) & 0x3FF);
}


void Drv_StartDrive(void)
{
    float t0;
    float u2;

    *(unsigned int *)0xC2AD1D0 = 0xC0D44D8;
    *(unsigned int *)0xC2AD1D4 = 0xC0D44E0;
    t0 = Drv_DriveFrame();
    Drv_SetMotion(0xC8E4D64, t0);
    u2 = *(float *)0xC062154;
    *(float *)0xC2AD0F8 = u2;
}

int gdc_StreamPlayF(int a4, int a5, int a6)
{
    int t0;
    int t1;

    if (a4 == 1) {
        t0 = *(int *)(((a5 << 2) + 0xC1EE810));
        return FUN_0c151b04(t0, a6);
    }
    t1 = *(int *)(((a5 << 2) + 0xC1EE820));
    return FUN_0c151b04(t1, a6);
}

int FUN_0c171cd0(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int stk[4] = {0};

    t0 = *(short *)((a4 + 0x6));
    t1 = FUN_0c07fb70(t0);
    *(unsigned int *)((a4 + 0x20)) = t1;
    t2 = *(int *)(((int)stk + 4));
    *(unsigned int *)((a4 + 0x28)) = t2;
    t3 = *(int *)(((int)stk + 4));
    t4 = *(int *)((a4 + 0x10));
    t5 = (int)((int)t3 / (int)t4);
    return ((t5 << 2) << 1);
}

int gdc_GetStreamSongPlayTime(int a4)
{
    int t0;
    int t2;
    float u3;
    int stk[5] = {0};

    *(unsigned int *)(((int)stk + 12)) = a4;
    t0 = *(int *)(((a4 << 2) + 0xC1EE820));
    ADXT_GetTime(t0, ((int)stk + 4), (((int)stk + 4) + 0x4));
    t2 = *(int *)(((int)stk + 4));
    u3 = *(float *)0xC02E260;
    *(unsigned int *)(((int)stk + 4)) = (int)((float)t2 * u3);
    return (int)((float)t2 * u3);
}

int FUN_0c07d100(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;

    t0 = *(short *)((a7 + 0x4));
    t1 = *(short *)((a5 + 0x0));
    t2 = *(short *)((a7 + 0x0));
    return FUN_0c07d450((((t1 << 2) << 2) + a4), (((t2 << 2) << 2) + a6), (((t0 << 2) << 2) + a6));
}


int FUN_0c14f3d6(int a4, int a5)
{
    int t0;
    int t1;

    t0 = (a4 & 0x9FFFFFE0);
    t1 = ((unsigned int)((unsigned int)((unsigned int)((a5 + (a4 & 0x1F)) + 0x1F) >> 2) >> 2) >> 1);
    do {
        _builtin_prefetch((void *)t0);
        t1 = (t1 - 0x1);
        t0 = (t0 + 0x20);
    } while (t1 != 0);
    return (a4 & 0x1F);
}

void FUN_0c152298(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)((a4 + 0x14));
    if (t0 != 0) {
        t1 = *(int *)((a4 + 0x14));
        t2 = *(int *)((t1 + 0x0));
        t3 = *(int *)((t2 + 0x24));
        t4 = ((int (*)(int, int))(t3))(t1, 0x1);
        
    }
}

void Voice_CancelToNext(int a4)
{
    int t0;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)(((((a4 << 2) << 2) + 0xC2AEBE0) + 0x0));
    if (t0 != 0) {
        gdc_StopStreamVoice(a4);
        t2 = *(int *)(((((a4 << 2) << 2) + 0xC2AEBE0) + 0x0));
        *(unsigned int *)(((((a4 << 2) << 2) + 0xC2AEBE0) + 0x0)) = (t2 + 0xC);
        *(unsigned int *)(((((a4 << 2) << 2) + 0xC2AEBE0) + 0xC)) = 0x0;
        t3 = *(int *)(((((a4 << 2) << 2) + 0xC2AEBE0) + 0x0));
        t4 = *(int *)((t3 + 0x0));
        if (t4 == 0) {
            *(unsigned int *)(((((a4 << 2) << 2) + 0xC2AEBE0) + 0x0)) = 0x0;
        }
    }
}

int FUN_0c07d170(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;

    t0 = *(short *)((a7 + 0x2));
    t1 = *(short *)((a7 + 0x0));
    t2 = *(short *)((a5 + 0x2));
    return FUN_0c07d450((((t2 << 2) << 2) + a4), (((t0 << 2) << 2) + a6), (((t1 << 2) << 2) + a6));
}

int FUN_0c07d1f0(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;

    t0 = *(short *)((a7 + 0x2));
    t1 = *(short *)((a7 + 0x4));
    t2 = *(short *)((a5 + 0x4));
    return FUN_0c07d450((((t2 << 2) << 2) + a4), (((t1 << 2) << 2) + a6), (((t0 << 2) << 2) + a6));
}

void FUN_0c14dd4c(int a4, int a5)
{
    int t0;
    int t1;
    int t2;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t1 = *(int *)0xC177A8C;
    *(unsigned int *)((t1 + 0x24)) = a4;
    t2 = *(int *)0xC177A8C;
    *(unsigned int *)((t2 + 0x28)) = a5;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
}

void FUN_0c14e2ac(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0xC177A8C;
    t1 = *(int *)((t0 + 0x34));
    if (t1 != 1) {
        t2 = gdFsGetDrvStatG();
        if (t2 == 6) {
            t3 = *(int *)0xC177A8C;
            *(unsigned int *)((t3 + 0x34)) = 0x1;
            return;
        }
        if (t2 == 0) {
            gdFsReqDrvStatG();
        }
        return;
    }
}

int FUN_0c1614ee(int a4)
{
    int t0;
    int t1;
    int t2;

    t0 = (int)((unsigned int)a4 % (unsigned int)0x64);
    t1 = (int)((unsigned int)((((t0 << 2) << 2) << 2) << 1) / (unsigned int)0x64);
    t2 = (int)((unsigned int)a4 / (unsigned int)0x64);
    return (((((t2 << 2) << 2) << 2) << 1) + t1);
}

void FUN_0c0771d0(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int stk[5] = {0};

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    for (;;) {
        t0 = *(int *)(((int)stk + 12));
        *(unsigned int *)(((int)stk + 12)) = (t0 - 1);
        if ((int)(t0 - 1) < 0) break;
        t1 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t1 + 0xC);
        t2 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 4)) = (t2 + 0xC);
        nlSqrt(((t2 + 0xC) - 12), ((t1 + 0xC) - 12));
    }
}

void FUN_0c077230(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int stk[5] = {0};

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    for (;;) {
        t0 = *(int *)(((int)stk + 12));
        *(unsigned int *)(((int)stk + 12)) = (t0 - 1);
        if ((int)(t0 - 1) < 0) break;
        t1 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t1 + 0xC);
        t2 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 4)) = (t2 + 0xC);
        FUN_0c077210(((t2 + 0xC) - 12), ((t1 + 0xC) - 12));
    }
}

int FUN_0c171f36(int a4, int a5)
{
    int t0;
    int t1;

    t0 = FUN_0c171e62(a4, 0x6, a5);
    *(unsigned int *)((((a5 << 2) + (a4 + 0x40)) + 0x0)) = t0;
    t1 = *(int *)(((a5 << 2) + (a4 + 0x40)));
    return t1;
}

int AdvStateTitle2(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t6;

    t0 = *(int *)0xC1EE240;
    *(unsigned int *)0xC1EE240 = (t0 + 0x1);
    t1 = *(int *)0xC0E5310;
    if ((int)t1 > 0) {
        t2 = *(int *)0xC0E5310;
        *(unsigned int *)0xC0E5310 = (t2 - 1);
        t3 = *(int *)0xC1EE240;
        if ((int)t3 > (int)0x5) {
            *(unsigned int *)0xC1EE240 = 0x5;
        }
    }
    t6 = *(int *)0xC1EE240;
    if ((int)t6 >= (int)0xF0) {
        *(unsigned int *)0xC1EE238 = 0x0;
        return End_Adv_Title_LOGO();
    }
    return Chk_DispCredit();
}

void FUN_0c14ac40(int a4)
{
    int t0;
    int t1;
    int t2;

    t0 = a4;
    if ((0x80000000 & a4) != 0) {
        t0 = 0x0;
    }
    t1 = t0;
    if ((0x7FFFFF00 & t0) != 0) {
        t1 = 0xFF;
    }
    *(unsigned int *)0xC2EA720 = t1;
    t2 = *(int *)0xC2EA94C;
    *(unsigned int *)0xC2EA94C = ((t2 & 0xFF00FFFF) | ((unsigned char)t1 << 15));
    kmiWriteRegister(0x48, ((t2 & 0xFF00FFFF) | ((unsigned char)t1 << 15)));
}

int Exec_nd_StartWait(void)
{
    int t9;
    int t10;

    ExecKyakuArea();
    nd_StartWait_Stub();
    nd_StartWait_SetLight();
    nd_StartWait_SetFog();
    nd_StartWait_Camera();
    nd_StartWait_PutCar();
    nd_StartWait_PutKyaku();
    nd_StartWait_PutMessage();
    PutKyakuStopArea(0x21, 0x5);
    t9 = nd_StartWait_MoveCar();
    t10 = *(int *)0xC2A7208;
    *(unsigned int *)0xC2A7208 = (t10 + 0x1);
    return t9;
}

int FUN_0c07d130(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(short *)((a7 + 0x0));
    t1 = *(short *)((a5 + 0x4));
    t2 = *(short *)((a5 + 0x0));
    t3 = *(short *)((a7 + 0x2));
    return FUN_0c07d4f0((((t3 << 2) << 2) + a6), (((t1 << 2) << 2) + a4), (((t2 << 2) << 2) + a4), (((t0 << 2) << 2) + a6));
}

int FUN_0c07d0b0(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(short *)((a7 + 0x4));
    t1 = *(short *)((a5 + 0x4));
    t2 = *(short *)((a7 + 0x0));
    t3 = *(short *)((a5 + 0x2));
    return FUN_0c07d4f0((((t2 << 2) << 2) + a6), (((t3 << 2) << 2) + a4), (((t1 << 2) << 2) + a4), (((t0 << 2) << 2) + a6));
}

int windowGoMenu(void)
{
    int t0;
    int t1;

    *(unsigned int *)0xC1EE234 = 0x3;
    *(unsigned int *)0xC1EE238 = 0x0;
    t0 = GetMenuMode(0x0);
    t1 = 0x1;
    if ((int)t0 <= (int)0x1) {
        t1 = 0x0;
    }
    SetMenuClass(t1);
    SetScreen(0x4);
    SetWindow(0x0);
    *(unsigned int *)0xC2A11B0 = 0x0;
    return gdc_StopStreamSongDisk();
}

float camGetOnSelect(void)
{
    int t0;
    int t1;
    float t2;
    float u3;
    float u4;

    *(unsigned int *)0xC2AD580 = 0x0;
    t0 = *(int *)0xC2AD54C;
    t1 = *(int *)0xC2AD548;
    t2 = nlLength((t1 + 0x4), (t0 + 0x4));
    u3 = *(float *)0xC0648B0;
    if (u3 > t2) {
        *(unsigned int *)0xC2AD57C = 0x1;
    } else {
        u4 = *(float *)0xC0648B4;
        if (u4 > t2) {
            *(unsigned int *)0xC2AD57C = 0x2;
        } else {
            *(unsigned int *)0xC2AD57C = 0x3;
        }
    }
    return t2;
}

int FUN_0c07d1b0(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(short *)((a7 + 0x2));
    t1 = *(short *)((a5 + 0x2));
    t2 = *(short *)((a5 + 0x0));
    t3 = *(short *)((a7 + 0x4));
    return FUN_0c07d4f0((((t3 << 2) << 2) + a6), (((t2 << 2) << 2) + a4), (((t1 << 2) << 2) + a4), (((t0 << 2) << 2) + a6));
}

void FUN_0c1522f0(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = *(int *)((a4 + 0x14));
    if (t0 != 0) {
        t1 = *(int *)((a4 + 0x14));
        t2 = *(int *)((t1 + 0x0));
        t3 = *(int *)((t2 + 0x24));
        t4 = ((int (*)(int, int))(t3))(t1, 0x1);
        t5 = *(short *)((a4 + 0x3E));
        if ((int)t4 >= (int)(((t5 << 8) << 2) << 1)) {
            return;
        }
        return;
    }
}

float setObjHitBeach(int a4)
{
    float t0;
    float u1;
    float u2;
    int t3;
    int t4;
    int t5;

    t0 = nlLength((a4 + 0xC), (a4 + 0x58));
    if (!(t0 > (1.0f + 1.0f))) {
        u1 = *(float *)0xC038FDC;
        u2 = *(float *)((a4 + 0x40));
        if (u1 > u2) {
            *(unsigned int *)0xC275944 = 0x1;
        } else {
            t3 = *(int *)(((a4 + 0xC) + 0x8));
            *(unsigned int *)(((a4 + 0x58) + 0x8)) = t3;
            t4 = *(int *)(((a4 + 0xC) + 0x4));
            *(unsigned int *)(((a4 + 0x58) + 0x4)) = t4;
            t5 = *(int *)(((a4 + 0xC) + 0x0));
            *(unsigned int *)(((a4 + 0x58) + 0x0)) = t5;
        }
    } else {
        *(unsigned int *)0xC275944 = 0x1;
    }
    return t0;
}

int FUN_0c07ba40(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    if (a4 == 1) {
        t0 = *(int *)0xC14AA50;
        *(unsigned int *)0xC14AA50 = (t0 & 0xFF3FFFFF);
        t1 = *(int *)0xC14AA70;
        *(unsigned int *)0xC14AA70 = (t1 & 0xFF3FFFFF);
        return a4;
    }
    t2 = *(int *)0xC14AA50;
    *(unsigned int *)0xC14AA50 = (t2 & 0xFF3FFFFF);
    t3 = *(int *)0xC14AA70;
    *(unsigned int *)0xC14AA70 = (t3 & 0xFF3FFFFF);
    t4 = *(int *)0xC14AA50;
    *(unsigned int *)0xC14AA50 = (t4 | 0x800000);
    t5 = *(int *)0xC14AA70;
    *(unsigned int *)0xC14AA70 = (t5 | 0x800000);
    return a4;
}

int FUN_0c172440(int a4, int a5)
{
    int t0;
    int t1;
    int t6;
    int t4;

    t0 = *(int *)((((a5 << 2) + (a4 + 0x2C)) + 0x0));
    t1 = FUN_0c080500(t0);
    t6 = 0x1;
    if (t1 != 0x100) {
        t4 = 0x2;
        if (t1 != 0x101) {
            mwRnaErrCallFunc(0xC176D44);
            t4 = 0x0;
        }
        t6 = t4;
    }
    return t6;
}

void AdvStateReplay2Init(void)
{
    int t4;

    replayChangeControl(0xFFFFFFFF);
    Initialize_Replay();
    setReplayType(0x2);
    *(unsigned int *)0xC179860 = 0x7;
    MotionBlurOn();
    *(unsigned int *)0xC1EE774 = 0x0;
    *(unsigned int *)0xC1EE33C = 0x0;
    *(unsigned int *)0xC1EE240 = 0x0;
    t4 = *(int *)0xC1EE238;
    *(unsigned int *)0xC1EE238 = (t4 + 0x1);
    *(unsigned int *)0xC1EE334 = 0x11;
}

int FUN_0c07f570(int a4, int a5)
{
    int t0;

    if (a4 == 0xA3) {
        t0 = FUN_0c07f5c0();
        if (t0 != 0) {
            return t0;
        }
        return FUN_0c07f5c0();
    }
    return 0xFFFFFFFE;
}

int FUN_0c16ad8a(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;

    if (a4 == 0) {
        t0 = mwRnaErrCallFunc(0xC176680);
        return t0;
    }
    *(unsigned int *)((a4 + 0x7C)) = a5;
    *(unsigned int *)((a4 + 0x80)) = a6;
    t1 = *(int *)((a4 + 0x38));
    t2 = *(int *)((t1 + 0x0));
    t3 = *(int *)((t2 + 0x44));
    return ((int (*)(int, int, int, int))(t3))(t1, 0x3, a5, a6);
}


int FUN_0c151b04(int a4, int a5)
{
    int t2;
    int t3;

    ADXT_Stop();
    ADXCRS_Lock();
    t2 = *(int *)((a4 + 0x10));
    t3 = ADXSTM_OpenFname(a5, t2);
    *(unsigned int *)((a4 + 0x8)) = t3;
    if (t3 == 0) {
        ADXCRS_Unlock();
        ADXERR_CallErrFunc(0xC175488, a5);
    } else {
        adxt_start_stm(a4);
    }
    return ADXCRS_Unlock();
}

int Exec_ProposalWalker(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;
    int t9;
    int t10;
    int t11;
    int t13;

    t0 = *(int *)((a4 + 0x18));
    if (t0 != 0) {
        t1 = *(int *)((a4 + 0x14));
        t2 = *(int *)0xC2A9D58;
        if ((t2 & (((int)(t1 << 2) >= 0) ? (0x1 << ((t1 << 2) & 31)) : ((-(int)(t1 << 2) & 31) ? ((unsigned int)0x1 >> (-(int)(t1 << 2) & 31)) : 0))) != 0) {
            t3 = *(int *)((a4 + 0x40));
            if (t3 != 0) {
                t4 = *(int *)0xC2A9D5C;
                if ((t4 & (((int)(t1 << 2) >= 0) ? (0x1 << ((t1 << 2) & 31)) : ((-(int)(t1 << 2) & 31) ? ((unsigned int)0x1 >> (-(int)(t1 << 2) & 31)) : 0))) != 0) {
                    t5 = *(int *)((a4 + 0x40));
                    if (t5 == 1) {
                        Put_ProposalWalker(a4);
                        t7 = *(int *)((a4 + 0x18));
                        if (t7 == 1) {
                            return Move_ProposalWalker(a4);
                        }
                        return t7;
                    }
                    return t5;
                }
                return 0xC2A9D5C;
            }
            Put_ProposalWalker(a4);
            t9 = *(int *)((a4 + 0x18));
            if (t9 == 1) {
                return Move_ProposalWalker(a4);
            }
            return t9;
        }
        t10 = *(int *)0xC2A9D5C;
        if ((t10 & (((int)(t1 << 2) >= 0) ? (0x1 << ((t1 << 2) & 31)) : ((-(int)(t1 << 2) & 31) ? ((unsigned int)0x1 >> (-(int)(t1 << 2) & 31)) : 0))) != 0) {
            t11 = *(int *)((a4 + 0x40));
            if (t11 == 1) {
                Put_ProposalWalker(a4);
                t13 = *(int *)((a4 + 0x18));
                if (t13 == 1) {
                    return Move_ProposalWalker(a4);
                }
                return t13;
            }
            return t11;
        }
        return 0xC2A9D5C;
    }
    return 0;
}

int FUN_0c1723d6(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = FUN_0c1722c2(a4, a5, a6, a7);
    if (a6 == 0) {
        t1 = *(int *)((a4 + 0x28));
        t2 = *(int *)((a4 + 0x10));
        t3 = (int)((int)t1 / (int)t2);
        return FUN_0c172350(a4, a5, (((t3 << 2) << 1) + a6), a7);
    }
    return t0;
}

void Drv_StartSeated(void)
{
    int t0;
    int t1;
    float u3;
    int t5;
    int t2;

    t0 = *(int *)0xC2AD018;
    t1 = *(signed char *)((t0 + 0x14A));
    if ((t1 & 128) != 0) {
        *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
        *(unsigned int *)0xC2AD1D4 = 0xC0D3080;
        t2 = 0xC8EAF88;
    } else {
        *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
        *(unsigned int *)0xC2AD1D4 = 0xC0D3068;
        t2 = 0xC8D2EEC;
    }
    u3 = *(float *)0xC062820;
    Drv_SetMotion(t2, u3);
    t5 = *(signed char *)0xC2AD1DF;
    *(unsigned char *)0xC2AD1DF = (t5 | 0x80);
    *(float *)0xC2AD0F4 = 0.0f;
    *(float *)0xC2AD0F8 = u3;
}

int FUN_0c07ee50(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t8;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int stk[7] = {0};

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    t0 = *(int *)(((int)stk + 8));
    t1 = FUN_0c07e8a0(a4, t0);
    t8 = t1;
    if (t1 == 0) {
        t2 = *(int *)((a4 + 0x8));
        t3 = *(int *)((a4 + 0x4));
        t4 = *(int *)(((int)stk + 8));
        t5 = FUN_0c07e960(t4, t3, t2, ((int)stk + 4));
        *(unsigned int *)0xC2B7710 = t5;
        *(unsigned int *)0xC2B76FC = 0x1001;
        t6 = *(int *)(((int)stk + 12));
        *(unsigned int *)0xC2B7700 = t6;
        *(unsigned int *)0xC2B7704 = t2;
        t7 = *(int *)(((int)stk + 4));
        *(unsigned int *)0xC2B7708 = t7;
        t8 = 0x0;
    }
    return t8;
}

void TggleObjShadow(int a4)
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
    int t10;

    t0 = *(int *)((a4 + 0x0));
    if ((int)t0 >= 0) {
        t1 = *(int *)((a4 + 0x18));
        if (t1 != 0) {
            t2 = t1;
            t3 = t0;
            t4 = (a4 + 0x18);
            do {
                t5 = *(int *)((t4 + 0x0));
                t6 = t4;
                t4 = (t4 + 0x50);
                if ((t5 & 0xC0) != 0) {
                    t7 = *(int *)((t6 + 0x0));
                    t2 = t7;
                    t2 = (t2 & 0xFFFFFF3F);
                    *(unsigned int *)((t6 + 0x0)) = t2;
                } else {
                    t3 = (t5 & 0xFFFFFF3F);
                    t3 = (t3 | 0x80);
                    *(unsigned int *)((t6 + 0x0)) = t3;
                }
                t9 = *(int *)((t6 + 0x4C));
                t4 = (t4 + t9);
                t10 = *(int *)((t4 + 0x0));
            } while (t10 != 0);
        }
    }
}


int Drv_ExecPickUp(void)
{
    int t0;
    float u2;
    int t3;
    float u5;
    int t6;
    float u7;
    int t8;

    t0 = *(signed char *)0xC2AD1DF;
    if ((t0 & 128) != 0) {
        return Drv_ExecBlend();
    }
    drvUpdatePartTracks();
    u2 = *(float *)0xC2AD024;
    t3 = *(int *)0xC2AD020;
    FcvStoreBuffer(t3, 0xC2AD028, u2);
    u5 = *(float *)0xC2AD024;
    *(float *)0xC2AD024 = (u5 + 1.0f);
    t6 = *(int *)0xC2AD020;
    u7 = *(float *)0xC2AD024;
    t8 = *(int *)((t6 + 0x0));
    if (!((float)(t8 - 1) > u7)) {
        return Drv_StartAction(0x0, 0x0, 0x0);
    }
    return 0x24;
}

int Drv_ExecChoin(void)
{
    int t0;
    float u2;
    int t3;
    float u5;
    int t6;
    float u7;
    int t8;

    t0 = *(signed char *)0xC2AD1DF;
    if ((t0 & 128) != 0) {
        return Drv_ExecBlend();
    }
    drvUpdatePartTracks();
    u2 = *(float *)0xC2AD024;
    t3 = *(int *)0xC2AD020;
    FcvStoreBuffer(t3, 0xC2AD028, u2);
    u5 = *(float *)0xC2AD024;
    *(float *)0xC2AD024 = (u5 + 1.0f);
    t6 = *(int *)0xC2AD020;
    u7 = *(float *)0xC2AD024;
    t8 = *(int *)((t6 + 0x0));
    if (!((float)(t8 - 1) > u7)) {
        return Drv_StartAction(0x0, 0x0, 0x0);
    }
    return 0x24;
}

int Drv_ExecPsgReact(void)
{
    int t0;
    float u2;
    int t3;
    float u5;
    int t6;
    float u7;
    int t8;

    t0 = *(signed char *)0xC2AD1DF;
    if ((t0 & 128) != 0) {
        return Drv_ExecBlend();
    }
    drvUpdatePartTracks();
    u2 = *(float *)0xC2AD024;
    t3 = *(int *)0xC2AD020;
    FcvStoreBuffer(t3, 0xC2AD028, u2);
    u5 = *(float *)0xC2AD024;
    *(float *)0xC2AD024 = (u5 + 1.0f);
    t6 = *(int *)0xC2AD020;
    u7 = *(float *)0xC2AD024;
    t8 = *(int *)((t6 + 0x0));
    if (!((float)(t8 - 1) > u7)) {
        return Drv_StartAction(0x0, 0x0, 0x0);
    }
    return 0x24;
}

int FUN_0c16178a(int a4, int a5)
{
    int t3;
    int t2;
    int t1;
    int t0;
    int t4;
    int t5;
    int t6;

    t3 = 0x8;
    if ((unsigned short)a5 != 0) {
        t2 = 0x20;
        if ((unsigned short)a5 != 1) {
            t1 = 0x200;
            if ((unsigned short)a5 != 3) {
                t0 = 0x800;
                if ((unsigned short)a5 != 4) {
                    t0 = 0x80;
                }
                t1 = t0;
            }
            t2 = t1;
        }
        t3 = t2;
    }
    t4 = (int)((unsigned int)a4 % (unsigned int)0x64);
    t5 = (int)((unsigned int)(t4 * t3) / (unsigned int)0x64);
    t6 = (int)((unsigned int)a4 / (unsigned int)0x64);
    return ((t6 * t3) + t5);
}


float screenOutCheck(int a4)
{
    float u0;
    float u9;
    float u1;
    float u2;
    int t3;
    float u4;
    float u7;
    float u5;

    u0 = *(float *)((a4 + 0x8));
    u9 = 0.0f;
    if (0.0f > u0) {
        u1 = *(float *)((a4 + 0x8));
        u2 = *(float *)((a4 + 0x0));
        t3 = nlArcTan2((u2 < 0.0f ? -u2 : u2), (-u1));
        u4 = *(float *)0xC1798A4;
        u7 = 0.0f;
        if ((int)(unsigned short)t3 < (int)((int)(((u4 * 65536.0f) / 360.0f) + 0.5f) & 0xFFFF)) {
            u5 = *(float *)((a4 + 0x8));
            u7 = u5;
        }
        u9 = u7;
    }
    return u9;
}

int FUN_0c07f1b0(int a4)
{
    int t0;
    int t4;
    int t1;
    int t2;
    int t3;
    int stk[5] = {0};

    t0 = nlsndCheckPackFreeError(a4);
    t4 = t0;
    if (t0 == 0) {
        t1 = *(int *)(((((a4 << 1) + a4) << 2) + 0xC2B77E4));
        t2 = FUN_0c07ea70(a4, t1, ((int)stk + 4));
        *(unsigned int *)0xC2B7710 = t2;
        *(unsigned int *)0xC2B76FC = 0x101;
        *(unsigned int *)0xC2B7704 = (-t1);
        t3 = *(int *)(((int)stk + 4));
        *(unsigned int *)0xC2B7708 = t3;
        t4 = 0x0;
    }
    return t4;
}

int FUN_0c1518d2(int a4, int a5, int a6)
{
    int t0;
    int t6;
    int t1;
    int t5;
    int t2;
    int t3;

    t0 = *(int *)((((a4 * 0x1C) + 0xC2B9998) + 0x0));
    t6 = 0xFFFFFFFF;
    if (t0 == 0) {
        *(unsigned int *)((((a4 * 0x1C) + 0xC2B9998) + 0x0)) = 0x1;
        *(unsigned int *)((((a4 * 0x1C) + 0xC2B9998) + 0x4)) = 0x0;
        *(unsigned int *)((((a4 * 0x1C) + 0xC2B9998) + 0x8)) = a6;
        *(unsigned int *)((((a4 * 0x1C) + 0xC2B9998) + 0xC)) = 0x0;
        *(unsigned int *)((((a4 * 0x1C) + 0xC2B9998) + 0x10)) = a5;
        *(unsigned int *)((((a4 * 0x1C) + 0xC2B9998) + 0x14)) = 0x1;
        t1 = pdVibGetInfo(a4, (((a4 * 0x1C) + 0xC2B9998) + 0x18));
        t5 = t1;
        if ((int)t1 >= 0) {
            t2 = kdSetGetMediaInfoEx(a4, 0x100, 0x1, 0xC151864);
            t3 = 0x0;
            if ((int)t2 < 0) {
                *(unsigned int *)((((a4 * 0x1C) + 0xC2B9998) + 0x0)) = 0x0;
                t3 = 0xFFFFFFFF;
            }
            t5 = t3;
        }
        t6 = t5;
    }
    return t6;
}

void AdvStateReplayInit(void)
{
    int t2;
    int t9;

    replayChangeControl(0xFFFFFFFF);
    Initialize_Replay();
    t2 = *(int *)0xC1EE20C;
    if (t2 == 0) {
        setReplayType(0x1);
        gdc_PlayStreamSong(0x7);
    } else {
        setReplayType(0x2);
        gdc_PlayStreamSong(0x4);
    }
    *(unsigned int *)0xC179860 = 0x7;
    MotionBlurOn();
    *(unsigned int *)0xC1EE774 = 0x0;
    *(unsigned int *)0xC1EE33C = 0x0;
    *(unsigned int *)0xC1EE240 = 0x0;
    t9 = *(int *)0xC1EE238;
    *(unsigned int *)0xC1EE238 = (t9 + 0x1);
    *(unsigned int *)0xC1EE334 = 0x11;
}

int FUN_0c07f330(int a4, int a5, int a6, int a7)
{
    if (a6 != 0x1B0) {
        if (a6 != 0x2B0) {
            if (a6 != 0x7B0) {
                if (a6 != 0x27B0) {
                    if (a6 != 0xAB0) {
                        if (a6 != 0x2AB0) {
                            return 0xFFFFFFFE;
                        }
                        return FUN_0c07f5c0();
                    }
                    return FUN_0c07f5c0();
                }
                return FUN_0c07f5c0();
            }
            return FUN_0c07f5c0();
        }
        return FUN_0c07f5c0();
    }
    return FUN_0c07f5c0();
}

int FUN_0c07f7c0(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    t0 = *(int *)0xC2B76E4;
    t1 = *(int *)((t0 + 0xC));
    t2 = (t1 + 0xA0800000);
    t3 = 0x0;
    for (;;) {
        t4 = *(int *)((t2 + 0x0));
        if (((unsigned char)t4 & 0x80) != 0) {
            t5 = *(int *)((t2 + 0x0));
            if ((short)((unsigned int)(t5 & 0xFF0000) >> 16) == a4) break;
            t3 = (t3 + 0x1);
            t2 = (t2 + 0x30);
            if ((int)t3 >= (int)0x10) {
                return 0x0;
            }
            continue;
        }
        t3 = (t3 + 0x1);
        t2 = (t2 + 0x30);
        if ((int)t3 >= (int)0x10) {
            return 0x0;
        }
    }
    t6 = 0x100;
    if (((unsigned char)t4 & 0x1) != 0) {
        t6 = 0x101;
    }
    return t6;
}

int FUN_0c0108ea(int a4, int a5)
{
    int t1;
    int t3;

    t1 = 0xC01117E;
    if (a4 != 0) {
        t1 = 0xC0119A8;
    }
    t3 = ((int (*)(int, int))((t1 | 0xA0000000)))(a5, a5);
    return t3;
}


int FUN_0c151930(int a4)
{
    int t0;
    int t1;
    int t2;
    int t6;
    int t5;
    int t4;
    int t3;
    int t7;
    int t8;
    int t9;

    t0 = *(signed char *)((a4 + 0xC17542A));
    t1 = kdGetDeviceInfo();
    t2 = kdGetDeviceInfo();
    t6 = 0x1;
    if (a4 != 2) {
        t5 = 0x1;
        if (a4 != 8) {
            t4 = 0x1;
            if (a4 != 14) {
                t3 = 0x1;
                if (a4 != 20) {
                    t3 = 0x0;
                }
                t4 = t3;
            }
            t5 = t4;
        }
        t6 = t5;
    }
    t7 = *(signed char *)(((t2 + 0x12) + 0x0));
    t8 = *(signed char *)((t6 + (t1 + 0x12)));
    t9 = *(signed char *)((0xC175442 + (((unsigned char)t8 << 2) + (unsigned char)t7)));
    return (unsigned char)t9;
}

int Drv_ExecBikeReady(void)
{
    int t0;
    float u2;
    int t3;
    float u5;
    int t6;
    float u7;
    int t8;

    t0 = *(signed char *)0xC2AD1DF;
    if ((t0 & 128) != 0) {
        return Drv_ExecBlend();
    }
    drvUpdatePartTracks();
    u2 = *(float *)0xC2AD024;
    t3 = *(int *)0xC2AD020;
    FcvStoreBuffer(t3, 0xC2AD028, u2);
    u5 = *(float *)0xC2AD024;
    *(float *)0xC2AD024 = (u5 + 1.0f);
    t6 = *(int *)0xC2AD020;
    u7 = *(float *)0xC2AD024;
    t8 = *(int *)((t6 + 0x0));
    if (!((float)(t8 - 1) > u7)) {
        return Drv_StartAction(0x0, 0x0, 0x0);
    }
    return 0x24;
}

int FUN_0c074390(int a4)
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

    t0 = *(int *)0xC2B2FC8;
    *(unsigned int *)((t0 + 0x0)) = 0x600608;
    t1 = *(int *)0xC2B2FC8;
    t2 = *(int *)((((((a4 << 2) + a4) << 2) + 0xC0D63EC) + 0x0));
    *(unsigned int *)((t1 + 0x8)) = t2;
    t3 = *(int *)(((((((a4 << 2) + a4) << 2) + 0xC0D63EC) + 0x4) + 0x0));
    t4 = *(int *)0xC2B2FC8;
    *(unsigned int *)((t4 + 0xC)) = t3;
    t5 = *(int *)0xC2B2FC8;
    t6 = *(int *)(((((((a4 << 2) + a4) << 2) + 0xC0D63EC) + 0x8) + 0x0));
    *(unsigned int *)((t5 + 0x20)) = t6;
    t7 = *(int *)(((((((a4 << 2) + a4) << 2) + 0xC0D63EC) + 0xC) + 0x0));
    t8 = *(int *)0xC2B2FC8;
    *(unsigned int *)((t8 + 0x44)) = t7;
    t9 = *(int *)0xC2B2FC8;
    t10 = *(int *)(((((((a4 << 2) + a4) << 2) + 0xC0D63EC) + 0x10) + 0x0));
    *(unsigned int *)((t9 + 0x40)) = t10;
    t11 = *(int *)((((((a4 << 2) + a4) << 2) + 0xC0D63EC) + 0x0));
    *(unsigned int *)0xC2AEDA4 = t11;
    t12 = *(int *)(((((((a4 << 2) + a4) << 2) + 0xC0D63EC) + 0x4) + 0x0));
    *(unsigned int *)0xC2AEDA8 = t12;
    t13 = *(int *)(((((((a4 << 2) + a4) << 2) + 0xC0D63EC) + 0x8) + 0x0));
    *(unsigned int *)0xC2AEDAC = t13;
    t14 = *(int *)(((((((a4 << 2) + a4) << 2) + 0xC0D63EC) + 0xC) + 0x0));
    *(unsigned int *)0xC2AEDB0 = t14;
    t15 = *(int *)(((((((a4 << 2) + a4) << 2) + 0xC0D63EC) + 0x10) + 0x0));
    *(unsigned int *)0xC2AEDB4 = t15;
    t16 = *(int *)0xC2B2FC8;
    return kmProcessVertexRenderState(t16);
}

int FUN_0c1617e0(int a4, int a5)
{
    int t3;
    int t2;
    int t1;
    int t0;
    int t4;
    int t5;
    int t6;

    t3 = 0x8;
    if ((unsigned short)a5 != 0) {
        t2 = 0x20;
        if ((unsigned short)a5 != 1) {
            t1 = 0x200;
            if ((unsigned short)a5 != 3) {
                t0 = 0x800;
                if ((unsigned short)a5 != 4) {
                    t0 = 0x80;
                }
                t1 = t0;
            }
            t2 = t1;
        }
        t3 = t2;
    }
    t4 = (int)((unsigned int)a4 % (unsigned int)t3);
    t5 = (int)((unsigned int)(t4 * 0x64) / (unsigned int)t3);
    t6 = (int)((unsigned int)a4 / (unsigned int)t3);
    return ((t6 * 0x64) + t5);
}

int FUN_0c171e74(int a4)
{
    int t0;
    int t9;
    int t6;
    int t1;
    int t2;
    int t4;

    t0 = FUN_0c171e62(a4, 0x5, 0x0);
    t9 = 0xFFFFFC41;
    if ((int)t0 > 0) {
        t6 = 0x0;
        if ((int)t0 < (int)0x7F) {
            t1 = (int)((unsigned int)(0x7F - t0) + (unsigned int)0x0);
            t2 = (int)((unsigned int)t1 + ((((int)0x0 > (int)(0x7F - t0))) ? 1u : 0u));
            t4 = (int)((int)(0x80 - ((t2 >> 1) * 0x3BF)) / (int)0xFF);
            t6 = t4;
        }
        t9 = t6;
    }
    *(unsigned int *)((a4 + 0x3C)) = t9;
    return t9;
}

int init_Title2(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t12;
    int t17;
    int t18;

    *(unsigned int *)0xC1EE240 = 0x0;
    *(unsigned int *)0xC1EE334 = 0x11;
    t0 = *(signed char *)0xC08ADAC;
    *(unsigned char *)0xC1EE778 = t0;
    t1 = *(signed char *)0xC08ADAD;
    *(unsigned char *)0xC1EE779 = t1;
    t2 = *(signed char *)0xC08ADAE;
    *(unsigned char *)0xC1EE77A = t2;
    t3 = *(signed char *)0xC08ADAF;
    *(unsigned char *)0xC1EE77B = t3;
    t4 = *(signed char *)0xC08ADB0;
    *(unsigned char *)0xC1EE77C = t4;
    t5 = *(signed char *)0xC08ADB1;
    *(unsigned char *)0xC1EE77D = t5;
    t6 = *(int *)0xC1EE238;
    *(unsigned int *)0xC1EE238 = (t6 + 0x1);
    nlInitEvent();
    gdc_StopStreamSongAll();
    Voice_Clear();
    Init_Adv_Sprite();
    Start_Adv_Title_LOGO(0x1, 0x0);
    t12 = *(int *)0xC0E5310;
    if ((int)t12 > 0) {
        *(unsigned int *)0xC0E5310 = 0x384;
        Voice_Request(0xC130DC0, 0x0, 0x7F, 0x0);
    }
    gdc_FileLoadStop();
    gdc_FileLoadInit();
    t17 = *(int *)0xC1EE20C;
    t18 = 0x2;
    if (t17 == 0) {
        t18 = 0x1;
    }
    return setReplayType(t18);
}

int search(int a4, int a5)
{
    int t0;
    int t1;
    int t10;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;

    t0 = strlen(a4);
    t1 = strlen(a5);
    t10 = 0x0;
    if ((unsigned int)((t1 + a4) - 1) < (unsigned int)(a4 + t0)) {
        t2 = ((t1 + a4) - 1);
        for (;;) {
            t3 = *(signed char *)((((t1 - 1) + a5) + 0x0));
            t4 = *(signed char *)((t2 + 0x0));
            if (t4 == t3) {
                t5 = strncmp(((t2 - t1) + 0x1), a5, t1);
                if (t5 == 0) break;
                t6 = *(signed char *)((t2 + 0x0));
                t7 = *(int *)((0xC2A66A0 + (t6 << 2)));
                t2 = (t2 + t7);
                if ((unsigned int)t2 >= (unsigned int)(a4 + t0)) {
                    return 0x0;
                }
                continue;
            }
            t8 = *(signed char *)((t2 + 0x0));
            t9 = *(int *)((0xC2A66A0 + (t8 << 2)));
            t2 = (t2 + t9);
            if ((unsigned int)t2 >= (unsigned int)(a4 + t0)) {
                return 0x0;
            }
        }
        t10 = 0x1;
    }
    return t10;
}

void FUN_0c1524ee(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int stk[17] = {0};

    *(unsigned int *)(((int)stk + 60)) = a6;
    if ((int)a5 >= (int)0x2) {
        t0 = *(short *)((a4 + 0x0));
        if ((unsigned short)((unsigned char)((int)(unsigned short)t0 >> 8) | (((unsigned short)t0 << 8) & 0xFF00)) == 0x8000) {
            t1 = ADX_DecodeInfo(a4, a5);
            if ((int)t1 < 0) {
                return;
            }
            t2 = *(short *)(((int)stk + 28));
            t3 = *(int *)(((int)stk + 60));
            *(unsigned int *)((t3 + 0x0)) = t2;
            return;
        }
        return;
    }
}

int Drv_ExecBikeGuest(void)
{
    int t0;
    int t1;
    float u2;
    int t3;
    float u5;
    int t6;
    float u7;
    int t8;
    int t10;
    int t11;
    int t12;
    int t13;

    t0 = *(signed char *)0xC2AD1DF;
    *(unsigned char *)0xC2AD1DF = (t0 | 0x40);
    t1 = *(signed char *)0xC2AD1DF;
    if ((t1 & 128) != 0) {
        return Drv_ExecBlend();
    }
    u2 = *(float *)0xC2AD024;
    t3 = *(int *)0xC2AD020;
    FcvStoreBuffer(t3, 0xC2AD028, u2);
    u5 = *(float *)0xC2AD024;
    *(float *)0xC2AD024 = (u5 + 1.0f);
    t6 = *(int *)0xC2AD020;
    u7 = *(float *)0xC2AD024;
    t8 = *(int *)((t6 + 0x0));
    if (!((float)(t8 - 1) > u7)) {
        *(float *)0xC2AD024 = 0.0f;
    }
    t10 = *(int *)0xC2AD010;
    if (t10 == 2) {
        t11 = *(int *)0xC2AD590;
        if ((t11 & 1) != 0) {
            if (t10 == 4) {
                t12 = *(int *)0xC2AD590;
                if ((t12 & 2) == 0) {
                    return Drv_StartAction(0x0, 0x0, 0x0);
                }
                return t12;
            }
            return t10;
        }
        return Drv_StartAction(0x0, 0x0, 0x0);
    }
    if (t10 == 4) {
        t13 = *(int *)0xC2AD590;
        if ((t13 & 2) == 0) {
            return Drv_StartAction(0x0, 0x0, 0x0);
        }
        return t13;
    }
    return t10;
}

int FUN_0c172350(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t9;
    int t8;

    t0 = *(int *)((a4 + 0x10));
    
    t2 = *(int *)((((a5 << 2) + (a4 + 0x20)) + 0x0));
    t3 = *(int *)((((a4 + 0x2C) + (a5 << 2)) + 0x0));
    t4 = FUN_0c080470(t3);
    if ((int)t4 < 0) {
        if (t4 == -1) {
            t5 = mwRnaErrCallFunc(0xC176C54);
            return t5;
        }
        if (t4 == -2) {
            t6 = mwRnaErrCallFunc(0xC176C84);
            return t6;
        }
        if (t4 == -3) {
            t7 = mwRnaErrCallFunc(0xC176CC4);
            return t7;
        }
        t9 = t4;
        if (t4 == -4) {
            t8 = mwRnaErrCallFunc(0xC176D04);
            t9 = t8;
        }
        return t9;
    }
    return t4;
}

void TaxiBlankInterrupt(void)
{
    int t0;
    int t8;
    int t9;
    int t11;
    float u15;
    float u16;
    float u18;
    int t23;
    int t24;
    int t25;
    float u27;
    float u28;

    t0 = gdFsGetDrvStat();
    if (t0 != 6) {
        if (t0 == 0) {
            gdFsReqDrvStat();
        }
    } else {
        gdFsReqDrvStat();
    }
    pdExecPeripheralServer();
    Voice_Execute();
    FUN_0c152340();
    t8 = *(int *)0xC0E4E44;
    t9 = *(int *)0xC0E4E40;
    if (t8 != t9) {
        nlFogTableColor(t9);
        t11 = *(int *)0xC0E4E40;
        *(unsigned int *)0xC0E4E44 = t11;
    }
    u15 = *(float *)0xC0E4E4C;
    u16 = *(float *)0xC0E4E48;
    if (u15 != u16) {
        nlFogDensityF(u16);
        u18 = *(float *)0xC0E4E48;
        *(float *)0xC0E4E4C = u18;
    }
    t23 = *(int *)0xC1EE228;
    if (t23 != 2) {
        t24 = *(int *)0xC1EE33C;
        *(unsigned int *)0xC1EE33C = (t24 + 0x1);
    } else {
        t25 = *(int *)0xC1EE33C;
        if (t25 == 0) {
            *(float *)0xC0E4E84 = 0.0f;
        }
        u27 = *(float *)0xC0E4E84;
        u28 = *(float *)0xC02A3E8;
        *(float *)0xC0E4E84 = (u27 + u28);
        *(unsigned int *)0xC1EE33C = (int)(u27 + u28);
    }
}


float FUN_0c078c50(int a4, int a5, int a6, int a7)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9;
    float u10;
    float u11;
    float t13;
    float t14;
    float u15;
    float u16;
    float u17;
    int stk[9] = {0};

    u0 = *(float *)((a5 + 0x0));
    u1 = *(float *)((a4 + 0x0));
    *(float *)(((int)stk + 16)) = (u0 - u1);
    u2 = *(float *)((a5 + 0x4));
    u3 = *(float *)((a4 + 0x4));
    *(float *)(((int)stk + 20)) = (u2 - u3);
    u4 = *(float *)((a5 + 0x8));
    u5 = *(float *)((a4 + 0x8));
    *(float *)(((int)stk + 24)) = (u4 - u5);
    u6 = *(float *)((a6 + 0x0));
    u7 = *(float *)((a5 + 0x0));
    *(float *)(((int)stk + 4)) = (u6 - u7);
    u8 = *(float *)((a6 + 0x4));
    u9 = *(float *)((a5 + 0x4));
    *(float *)(((int)stk + 8)) = (u8 - u9);
    u10 = *(float *)((a6 + 0x8));
    u11 = *(float *)((a5 + 0x8));
    *(float *)(((int)stk + 12)) = (u10 - u11);
    nlOuterProduct((((int)stk + 4) + 0xC), ((int)stk + 4), a7);
    t13 = nlInnerProduct(a7, a7);
    if (t13 == 0.0f) {
        return t13;
    }
    t14 = nlInvertSqrt(t13);
    u15 = *(float *)((a7 + 0x0));
    *(float *)((a7 + 0x0)) = (u15 * t14);
    u16 = *(float *)((a7 + 0x4));
    *(float *)((a7 + 0x4)) = (u16 * t14);
    u17 = *(float *)((a7 + 0x8));
    *(float *)((a7 + 0x8)) = (u17 * t14);
    return t14;
}

float FUN_0c078cf0(int a4, int a5, int a6, int a7)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9;
    float u10;
    float u11;
    float t13;
    float t14;
    float u15;
    float u16;
    float u17;
    int stk[9] = {0};

    u0 = *(float *)((a5 + 0x0));
    u1 = *(float *)((a4 + 0x0));
    *(float *)(((int)stk + 16)) = (u0 - u1);
    u2 = *(float *)((a5 + 0x4));
    u3 = *(float *)((a4 + 0x4));
    *(float *)(((int)stk + 20)) = (u2 - u3);
    u4 = *(float *)((a5 + 0x8));
    u5 = *(float *)((a4 + 0x8));
    *(float *)(((int)stk + 24)) = (u4 - u5);
    u6 = *(float *)((a6 + 0x0));
    u7 = *(float *)((a5 + 0x0));
    *(float *)(((int)stk + 4)) = (u6 - u7);
    u8 = *(float *)((a6 + 0x4));
    u9 = *(float *)((a5 + 0x4));
    *(float *)(((int)stk + 8)) = (u8 - u9);
    u10 = *(float *)((a6 + 0x8));
    u11 = *(float *)((a5 + 0x8));
    *(float *)(((int)stk + 12)) = (u10 - u11);
    nlOuterProduct(((int)stk + 4), (((int)stk + 4) + 0xC), a7);
    t13 = nlInnerProduct(a7, a7);
    if (t13 == 0.0f) {
        return t13;
    }
    t14 = nlInvertSqrt(t13);
    u15 = *(float *)((a7 + 0x0));
    *(float *)((a7 + 0x0)) = (u15 * t14);
    u16 = *(float *)((a7 + 0x4));
    *(float *)((a7 + 0x4)) = (u16 * t14);
    u17 = *(float *)((a7 + 0x8));
    *(float *)((a7 + 0x8)) = (u17 * t14);
    return t14;
}

int FUN_0c1523da(int a4, int a5)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t5;
    int t6;
    int t8;
    int t9;
    int t10;

    t0 = ADXT_GetStat(a4);
    *(unsigned char *)((a4 + 0x72)) = a5;
    if (t0 != 3) {
        if (t0 == 4) {
            if (a5 == 1) {
                t1 = *(int *)((a4 + 0xC));
                ADXRNA_SetPlaySw();
                t3 = 0x7A120;
                do {
                    t3 = (t3 - 0x1);
                } while (t3 != 0);
                t4 = *(int *)((a4 + 0xC));
                return mwRnaAdjustBuf(t4);
            }
            t5 = *(int *)((a4 + 0xC));
            return ADXRNA_SetPlaySw();
        }
        return t0;
    }
    if (a5 == 1) {
        t6 = *(int *)((a4 + 0xC));
        ADXRNA_SetPlaySw();
        t8 = 0x7A120;
        do {
            t8 = (t8 - 0x1);
        } while (t8 != 0);
        t9 = *(int *)((a4 + 0xC));
        return mwRnaAdjustBuf(t9);
    }
    t10 = *(int *)((a4 + 0xC));
    return ADXRNA_SetPlaySw();
}


void FUN_0c14f6f4(int a4, int a5, int a6)
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
    int t21;
    int t22;
    int t23;
    int t24;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    if (a4 != 0) {
        t1 = *(int *)0xC2B9358;
        t2 = t1;
        t3 = a6;
        for (;;) {
            if ((unsigned int)(a4 - 32) > (unsigned int)t2) {
                t4 = *(int *)((t2 + 0x0));
                if ((unsigned int)(a4 - 32) < (unsigned int)t4) break;
                t5 = *(int *)((t2 + 0x0));
                t3 = t5;
                if ((unsigned int)t2 >= (unsigned int)t3) {
                    if ((unsigned int)(a4 - 32) <= (unsigned int)t2) {
                        if ((unsigned int)(a4 - 32) >= (unsigned int)t3) {
                            t6 = *(int *)((t2 + 0x0));
                            t2 = t6;
                            continue;
                        }
                        break;
                    }
                    break;
                }
                t7 = *(int *)((t2 + 0x0));
                t2 = t7;
                continue;
            }
            t8 = *(int *)((t2 + 0x0));
            t3 = t8;
            if ((unsigned int)t2 >= (unsigned int)t3) {
                if ((unsigned int)(a4 - 32) <= (unsigned int)t2) {
                    if ((unsigned int)(a4 - 32) >= (unsigned int)t3) {
                        t9 = *(int *)((t2 + 0x0));
                        t2 = t9;
                        continue;
                    }
                    break;
                }
                break;
            }
            t10 = *(int *)((t2 + 0x0));
            t2 = t10;
        }
        t11 = *(int *)(((a4 - 32) + 0x4));
        t12 = *(int *)((t2 + 0x0));
        if (((((t11 << 2) << 2) << 1) + (a4 - 32)) == t12) {
            t13 = *(int *)((t2 + 0x0));
            t14 = *(int *)(((a4 - 32) + 0x4));
            t15 = *(int *)((t13 + 0x4));
            *(unsigned int *)(((a4 - 32) + 0x4)) = (t14 + t15);
            t16 = *(int *)((t2 + 0x0));
            t17 = *(int *)((t16 + 0x0));
            *(unsigned int *)(((a4 - 32) + 0x0)) = t17;
        } else {
            t18 = *(int *)((t2 + 0x0));
            *(unsigned int *)(((a4 - 32) + 0x0)) = t18;
        }
        t21 = *(int *)((t2 + 0x4));
        if (((((t21 << 2) << 2) << 1) + t2) == (a4 - 32)) {
            t22 = *(int *)((t2 + 0x4));
            t23 = *(int *)(((a4 - 32) + 0x4));
            *(unsigned int *)((t2 + 0x4)) = (t22 + t23);
            t24 = *(int *)(((a4 - 32) + 0x0));
            *(unsigned int *)((t2 + 0x0)) = t24;
        } else {
            *(unsigned int *)((t2 + 0x0)) = (a4 - 32);
        }
        *(unsigned int *)0xC2B9358 = t2;
    }
    _builtin_set_imask(((unsigned int)((((unsigned short)t0 & 0xF) << 2) << 2) >> 4));
}

int SaveVMSicon(int a4)
{
    int t0;
    int t13;
    int t7;
    int t9;
    int t11;

    t0 = nlMalloc(0x400);
    t13 = 0xFFFFFFFF;
    if (t0 != 0) {
        memset(t0, 0x0, 0x400);
        FUN_0c081470(t0, 0xC09DB7C);
        *(unsigned int *)((t0 + 0x10)) = 0x20;
        *(unsigned int *)((t0 + 0x14)) = 0xA0;
        memset((t0 + 0x18), 0x0, 0x8);
        memmove((t0 + 0x20), 0xC0EF2A3, 0x80);
        memmove((0xA0 + t0), 0xC0EF323, 0x20);
        memmove((0xC0 + t0), 0xC0EF343, 0x200);
        t7 = BupSave(a4, 0xC09DB8C, t0, 0x2);
        if (t7 != 0) {
            nlFree(t0);
            t11 = 0xFFFFFFFF;
        } else {
            do {
                t9 = buStat();
            } while (t9 == -1);
            nlFree(t0);
            t11 = 0x0;
        }
        t13 = t11;
    }
    return t13;
}

int lcdResetData(int a4, int a5)
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
    int stk[10] = {0};

    if (a5 == 1) {
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        t0 = 0x0;
        t1 = 0x0;
        t2 = 0x0;
        do {
            t3 = 0x1;
            t4 = (t1 + 0x1);
            t5 = (t2 + 0x1);
            t6 = (t0 + 0x1);
            do {
                lcdFillData(0x80, t4);
                lcdSync(t6);
                t9 = lcdSync(t5);
                t3 = (t3 + 0x1);
                t5 = (t5 + 0x1);
                t6 = (t6 + 0x1);
                t4 = (t4 + 0x1);
            } while ((int)t3 < (int)0x3);
            t10 = *(int *)(((int)stk + 4));
            t0 = (t0 + 0x6);
            *(unsigned int *)(((int)stk + 4)) = (t10 + 0x1);
            t1 = (t1 + 0x6);
            t2 = (t2 + 0x6);
        } while ((int)(t10 + 0x1) < (int)0x4);
        return t9;
    }
    t11 = (int)((unsigned int)a4 / (unsigned int)0x6);
    lcdFillData(0x80, t11);
    lcdSync(a4);
    return lcdSync(a4);
}

int FUN_0c07f4b0(int a4, int a5, int a6)
{
    int t0;

    if (a5 != 0xA4) {
        if (a5 != 0x10A4) {
            if (a5 != 0x20A4) {
                return 0xFFFFFFFE;
            }
            return FUN_0c07f5c0();
        }
        return FUN_0c07f5c0();
    }
    t0 = FUN_0c07f5c0();
    if (t0 != 0) {
        return t0;
    }
    return FUN_0c07f5c0();
}

int FUN_0c14df90(void)
{
    int t0;
    int t1;
    int t2;
    int t24;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t23;

    t0 = *(int *)0xC177A8C;
    t1 = *(int *)((t0 + 0x14));
    t2 = gdFsReopenHn(t1);
    t24 = 0xFFFFFFF3;
    if (t2 != 0) {
        t3 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t4 = *(int *)0xC177A8C;
        t5 = *(int *)((t4 + 0xC));
        t6 = *(int *)((t5 + 0x30));
        t7 = ((int (*)(void))(t6))();
        if (t7 != 0) {
            *(unsigned int *)((t2 + 0x3C)) = t7;
            *(unsigned short *)((t2 + 0x50)) = 0x4;
            t8 = *(int *)0xC177A8C;
            t9 = *(short *)((t8 + 0x3A));
            if (t9 != 0) {
                t10 = *(int *)0xC177A8C;
                t11 = *(int *)((t10 + 0x2C));
                if ((int)t11 >= (int)0x10001) {
                    *(unsigned int *)((t2 + 0x4)) = 0xC2B8D98;
                    *(unsigned short *)((t2 + 0x48)) = 0x8;
                } else {
                    *(unsigned short *)((t2 + 0x48)) = 0x6;
                }
            } else {
                *(unsigned short *)((t2 + 0x48)) = 0x6;
            }
            t17 = *(int *)((t2 + 0x0));
            *(unsigned int *)((t17 + 0x1C)) = t2;
            t18 = *(int *)0xC177A8C;
            t19 = *(int *)((t18 + 0xC));
            t20 = *(int *)((t19 + 0x40));
            t21 = ((int (*)(void))(t20))();
        }
        _builtin_set_imask(((unsigned int)(((t3 & 0xF) << 2) << 2) >> 4));
        t23 = 0x0;
        if (t7 == 0) {
            t23 = 0xFFFFFFF3;
        }
        t24 = t23;
    }
    return t24;
}

int FUN_0c157dc0(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t27;
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
    int t25;
    int t13;
    int stk[12] = {0};

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    t0 = *(int *)((((((short)a4 << 2) + (short)a4) << 2) + 0xC177FBC));
    t1 = *(int *)0xC177FA8;
    t27 = 0x0;
    if (t0 != 0) {
        t2 = 0xC177FBC;
        t3 = 0x0;
        t4 = t1;
        t5 = t0;
        do {
            t6 = *(short *)((t5 + 0x0));
            if (((unsigned short)t6 & 0x4) == 0) {
                if ((0x2 & (unsigned short)t6) != 0) {
                    if ((0x1800 & (unsigned short)t6) != 0) {
                        t7 = *(int *)((t5 + 0x10));
                        t8 = *(int *)(((int)stk + 8));
                        if ((int)t7 >= (int)t8) {
                            t9 = *(int *)((t5 + 0x10));
                            if ((int)t9 < (int)t4) {
                                t10 = *(int *)0xC177FB0;
                                if ((short)a4 == 0) {
                                    t11 = *(int *)((t5 + 0xC));
                                    t13 = (t11 + t10);
                                } else {
                                    t12 = *(int *)((t5 + 0xC));
                                    t13 = (t12 - t10);
                                }
                                t14 = FUN_0c157220(t13, ((int)stk + 4));
                                t2 = t14;
                                if (t2 != 0) {
                                    t15 = *(int *)((t2 + 0x14));
                                    t16 = *(short *)((t15 + 0x0));
                                    t17 = *(int *)(((int)stk + 12));
                                    t18 = *(short *)((t17 + 0x0));
                                    if (((unsigned short)t16 & 0xF000) == ((unsigned short)t18 & 0xF000)) {
                                        t19 = *(int *)((t5 + 0x10));
                                        t4 = t19;
                                        t3 = t5;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            t25 = *(int *)((t5 + 0x8));
            t5 = t25;
        } while (t5 != 0);
        t27 = t3;
    }
    return t27;
}

int FUN_0c078ef0(float f4, float f5, float f6, float f7, float f8, float f9)
{
    int t1;
    int stk[18] = {0};

    *(float *)(((int)stk + 4)) = ((f8 * (1.0f + 1.0f)) / (f5 - f4));
    *(float *)(((int)stk + 8)) = 0.0f;
    *(float *)(((int)stk + 12)) = 0.0f;
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = ((f8 * (1.0f + 1.0f)) / (f7 - f6));
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = ((f4 + f5) / (f5 - f4));
    *(float *)(((int)stk + 40)) = ((f6 + f7) / (f7 - f6));
    *(float *)(((int)stk + 44)) = (((-f8) - f9) / (f9 - f8));
    *(float *)(((int)stk + 48)) = 1.0f;
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = 0.0f;
    *(float *)(((int)stk + 60)) = (((f8 * f9) * (1.0f + 1.0f)) / (f9 - f8));
    *(float *)(((int)stk + 64)) = 0.0f;
    *(float *)0xC2B7BDC = f8;
    *(float *)0xC2B7BE0 = f9;
    *(float *)0xC2B7BE4 = (1.0f / f8);
    *(float *)0xC2B3174 = f8;
    *(float *)0xC2B315C = (-f8);
    *(float *)0xC2B3178 = f9;
    *(float *)0xC2B3170 = (1.0f / f8);
    nlMultiMatrix(((int)stk + 4));
    t1 = FUN_0c079f10();
    return t1;
}


int FUN_0c078e30(float f4, float f5, float f6, float f7, float f8, float f9)
{
    int t1;
    int stk[18] = {0};

    *(float *)(((int)stk + 4)) = ((f8 * (1.0f + 1.0f)) / (f5 - f4));
    *(float *)(((int)stk + 8)) = 0.0f;
    *(float *)(((int)stk + 12)) = 0.0f;
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = ((f8 * (1.0f + 1.0f)) / (f7 - f6));
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = ((f4 + f5) / (f5 - f4));
    *(float *)(((int)stk + 40)) = ((f6 + f7) / (f7 - f6));
    *(float *)(((int)stk + 44)) = (((-f8) - f9) / (f9 - f8));
    *(float *)(((int)stk + 48)) = (-1.0f);
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = 0.0f;
    *(float *)(((int)stk + 60)) = ((-((f8 * f9) * (1.0f + 1.0f))) / (f9 - f8));
    *(float *)(((int)stk + 64)) = 0.0f;
    *(float *)0xC2B7BDC = f8;
    *(float *)0xC2B7BE0 = f9;
    *(float *)0xC2B7BE4 = (1.0f / f8);
    *(float *)0xC2B3174 = f8;
    *(float *)0xC2B315C = (-f8);
    *(float *)0xC2B3178 = f9;
    *(float *)0xC2B3170 = (1.0f / f8);
    nlMultiMatrix(((int)stk + 4));
    t1 = FUN_0c079f10();
    return t1;
}

int windowNameEntry(void)
{
    int t2;
    int t4;
    int t5;
    int t9;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;

    windowOpenStep();
    menuCursor(0x1, 0x1, 0x0);
    t2 = *(int *)0xC2A1208;
    if ((t2 & 0x4) != 0) {
        EditEntryName(0x1);
        t4 = *(int *)0xC2A11CC;
        if ((t4 & 0x4) != 0) {
            t5 = *(int *)0xC2A11DC;
            if ((int)t5 <= (int)0x1) {
                NextWindow(0xA);
            }
        }
        t9 = *(int *)0xC2A11CC;
        if ((t9 & 2) != 0) {
            CheckXWord(0xC2A1248);
            t11 = 0x0;
            for (;;) {
                if ((int)t11 >= (int)0x4) {
                    return windowEnterStep();
                }
                t12 = 0x0;
                t13 = ((short)((short)t11 * (short)0x788) + 0xC28A4F8);
                t14 = 0xC2A1248;
                t15 = 0x0;
                do {
                    t16 = *(signed char *)((t14 + 0x0));
                    t17 = *(signed char *)((t13 + 0x0));
                    t13 = (t13 + 0x1);
                    t15 = (t15 + 0x1);
                    if (t17 == t16) {
                        t12 = (t12 + 0x1);
                    }
                    t14 = (t14 + 0x1);
                } while ((int)t15 < (int)0x3);
                if ((int)t12 >= (int)0x3) break;
                t11 = (t11 + 0x1);
            }
            NextWindow(0xE);
        }
    }
    return windowEnterStep();
}

int PutCollisionObj(int a4, int a5)
{
    float u0;
    float u1;
    float t2;
    float u3;
    float u4;
    float t5;
    int t6;
    int t7;
    int t8;
    int t42;
    int t9;
    int t36;
    int t10;
    int t11;
    int t30;
    float u12;
    int t13;
    int t14;
    int t15;
    float u16;
    int t17;
    float u18;
    int t20;
    int t21;
    int t22;
    int t24;
    int t25;
    int t26;
    int t28;
    int t29;

    u0 = *(float *)0xC26E410;
    u1 = *(float *)((a4 + 0x0));
    t2 = nlFloor((u1 / u0));
    u3 = *(float *)0xC26E410;
    u4 = *(float *)((a4 + 0x8));
    t5 = nlFloor((u4 / u3));
    t6 = *(int *)0xC26E3F8;
    t7 = *(int *)0xC26E404;
    t8 = *(int *)0xC26E3F4;
    t42 = 0x0;
    if ((int)((t7 * ((int)t5 - t6)) + ((int)t2 - t8)) >= 0) {
        t9 = *(int *)0xC26E40C;
        t36 = 0x0;
        if ((int)((t7 * ((int)t5 - t6)) + ((int)t2 - t8)) < (int)t9) {
            t10 = *(int *)0xC26E3F0;
            t11 = *(int *)(((((t7 * ((int)t5 - t6)) + ((int)t2 - t8)) << 2) + t10));
            t30 = 0x0;
            if (t11 != 0) {
                u12 = *(float *)0xC26E410;
                t13 = *(int *)0xC26E3F0;
                t14 = *(int *)(((((t7 * ((int)t5 - t6)) + ((int)t2 - t8)) << 2) + t13));
                t15 = *(int *)0xC26E3F8;
                u16 = *(float *)((t14 + 0x4));
                t17 = *(int *)0xC26E3F4;
                u18 = *(float *)((t14 + 0x0));
                PutGridPoly((t17 + ((int)t2 - t8)), (t15 + ((int)t5 - t6)), u18, u16, u12);
                t20 = *(int *)0xC26E3F0;
                t21 = *(int *)(((((t7 * ((int)t5 - t6)) + ((int)t2 - t8)) << 2) + t20));
                t22 = *(short *)((t21 + 0x8));
                *(unsigned int *)((a5 + 0x0)) = t22;
                t24 = (t21 + 0xC);
                t25 = t22;
                while (t25 != 0) {
                    t26 = *(int *)((t24 + 0x0));
                    t24 = (t24 + 0x4);
                    PutCollisionPoly(t26);
                    t25 = (t25 - 1);
                }
                t28 = *(int *)0xC26E3F0;
                t29 = *(int *)(((((t7 * ((int)t5 - t6)) + ((int)t2 - t8)) << 2) + t28));
                t30 = (t29 + 0xC);
            }
            t36 = t30;
        }
        t42 = t36;
    }
    return t42;
}

int FUN_0c14e03a(void)
{
    int t0;
    int t1;
    int t2;
    int t24;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t23;

    t0 = *(int *)0xC177A8C;
    t1 = *(int *)((t0 + 0x14));
    t2 = gdFsReopenHn(t1);
    t24 = 0xFFFFFFF3;
    if (t2 != 0) {
        t3 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t4 = *(int *)0xC177A8C;
        t5 = *(int *)((t4 + 0xC));
        t6 = *(int *)((t5 + 0x30));
        t7 = ((int (*)(void))(t6))();
        if (t7 != 0) {
            *(unsigned int *)((t2 + 0x3C)) = t7;
            *(unsigned short *)((t2 + 0x50)) = 0x4;
            t8 = *(int *)0xC177A8C;
            t9 = *(short *)((t8 + 0x3A));
            if (t9 != 0) {
                t10 = *(int *)0xC177A8C;
                t11 = *(int *)((t10 + 0x2C));
                if ((int)t11 >= (int)0x10001) {
                    *(unsigned int *)((t2 + 0x4)) = 0xC2B8D98;
                    *(unsigned short *)((t2 + 0x48)) = 0x8;
                } else {
                    *(unsigned short *)((t2 + 0x48)) = 0x6;
                }
            } else {
                *(unsigned short *)((t2 + 0x48)) = 0x6;
            }
            t17 = *(int *)((t2 + 0x0));
            *(unsigned int *)((t17 + 0x1C)) = t2;
            t18 = *(int *)0xC177A8C;
            t19 = *(int *)((t18 + 0xC));
            t20 = *(int *)((t19 + 0x40));
            t21 = ((int (*)(void))(t20))();
        }
        _builtin_set_imask(((unsigned int)(((t3 & 0xF) << 2) << 2) >> 4));
        t23 = 0x0;
        if (t7 == 0) {
            t23 = 0xFFFFFFF3;
        }
        t24 = t23;
    }
    return t24;
}

int Drv_StartPsgReact(void)
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
    int t16;
    int t11;
    int t12;
    int t13;
    float u15;
    int t17;
    int t18;
    int t19;
    int t20;
    float u22;
    int t23;
    int stk[14] = {0};

    t0 = *(int *)0xC0D5158;
    *(unsigned int *)(((((int)stk + 4) + 0x1C) + 0x4)) = t0;
    t1 = *(int *)0xC0D5154;
    *(unsigned int *)(((((int)stk + 4) + 0x1C) + 0x0)) = t1;
    t2 = *(int *)0xC0D5160;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x4)) = t2;
    t3 = *(int *)0xC0D515C;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x0)) = t3;
    t4 = *(int *)0xC0D5168;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x4)) = t4;
    t5 = *(int *)0xC0D5164;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = t5;
    t6 = *(int *)0xC0D516C;
    *(unsigned int *)(((int)stk + 12)) = t6;
    t7 = *(int *)0xC0D5170;
    *(unsigned int *)(((int)stk + 8)) = t7;
    t8 = *(int *)0xC0D5174;
    *(unsigned int *)(((int)stk + 4)) = t8;
    t9 = extRand();
    t10 = *(int *)0xC2AD01C;
    *(unsigned int *)0xC2AD014 = t10;
    if (t10 != 0) {
        t16 = t10;
        if (t10 == 1) {
            t11 = *(int *)(((int)stk + 8));
            *(unsigned int *)0xC2AD1D0 = t11;
            t12 = *(int *)(((int)stk + 4));
            *(unsigned int *)0xC2AD1D4 = t12;
            t13 = *(int *)(((int)stk + 12));
            Drv_SetMotion(t13, 0.0f);
            u15 = *(float *)0xC062FDC;
            *(float *)0xC2AD0F8 = u15;
            t16 = 0xF8;
        }
        t23 = t16;
    } else {
        t17 = (int)((unsigned int)t9 % (unsigned int)0x2);
        t18 = *(int *)((((t17 << 2) + (((int)stk + 4) + 0x14)) + 0x0));
        *(unsigned int *)0xC2AD1D0 = t18;
        t19 = *(int *)((((((int)stk + 4) + 0xC) + (t17 << 2)) + 0x0));
        *(unsigned int *)0xC2AD1D4 = t19;
        t20 = *(int *)((((t17 << 2) + (((int)stk + 4) + 0x1C)) + 0x0));
        Drv_SetMotion(t20, 0.0f);
        u22 = *(float *)0xC062FDC;
        *(float *)0xC2AD0F8 = u22;
        t23 = 0xF8;
    }
    return t23;
}


int FUN_0c151b9c(int a4, int a5, int a6)
{
    int t1;
    int t3;
    int t4;

    ADXT_Stop();
    t1 = *(int *)((a5 + 0x4));
    if ((int)a6 < (int)((((unsigned char)(signed char)((unsigned int)((unsigned int)t1 >> 16) >> 8) | (((int)t1 >> 8) & 0xFF00)) | ((t1 << 8) & 0xFF0000)) | ((t1 << 16) << 8))) {
        if ((int)a6 >= 0) {
            ADXCRS_Lock();
            t3 = *(int *)((a5 + (((a6 + 0x1) << 1) << 2)));
            t4 = SJMEM_Create();
            if (t4 == 0) {
                ADXCRS_Unlock();
                ADXERR_CallErrFunc(0xC1754E0);
            } else {
                adxt_start_sj(a4, t4);
                *(unsigned char *)((a4 + 0x2)) = 0x2;
            }
            return ADXCRS_Unlock();
        }
        return 0xFF00;
    }
    return 0xFF00;
}

void FUN_0c168f00(int a4)
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
    int t10;
    int t11;
    int t14;
    int t15;
    int t16;
    int t18;
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
    int t33;
    int stk[11] = {0};

    t0 = *(int *)((a4 + 0x14));
    t1 = *(int *)((a4 + 0x4));
    t2 = FUN_0c1688aa(t1);
    t3 = FUN_0c1688b6(t1);
    t4 = FUN_0c1688c2(t1);
    *(unsigned int *)(((int)stk + 8)) = t4;
    FUN_0c1688ce(t1);
    t6 = *(int *)((t0 + 0x0));
    t7 = *(int *)((a4 + 0x50));
    t8 = *(int *)((t6 + 0x18));
    t9 = ((int (*)(int, int, int, int))(t8))(t0, 0x1, t7, (((int)stk + 8) + 0x4));
    t10 = *(int *)(((int)stk + 16));
    t11 = *(int *)((a4 + 0x50));
    if ((int)t10 < (int)t11) {
        ADXERR_CallErrFunc(0xC176558);
    }
    t14 = *(int *)((t0 + 0x0));
    t15 = *(int *)((t14 + 0x20));
    t16 = ((int (*)(int, int, int))(t15))(t0, 0x0, (((int)stk + 8) + 0x4));
    FUN_0c16881a(t1, 0x0);
    t18 = *(int *)(((int)stk + 8));
    FUN_0c168812(t1, (t18 - t2));
    FUN_0c168826(t1, t3);
    FUN_0c1687f6(t1, t2);
    t22 = *(signed char *)((a4 + 0x2));
    if (t22 == 2) {
        t23 = *(int *)((t0 + 0x0));
        t24 = *(int *)((t23 + 0x14));
        t25 = ((int (*)(int))(t24))(t0);
        t26 = *(int *)((t0 + 0x0));
        t27 = *(int *)((t26 + 0x18));
        t28 = ((int (*)(int, int, int, int))(t27))(t0, 0x1, t3, (((int)stk + 8) + 0x4));
        t29 = *(int *)((t0 + 0x0));
        t30 = *(int *)((t29 + 0x20));
        t31 = ((int (*)(int, int, int))(t30))(t0, 0x0, (((int)stk + 8) + 0x4));
    }
    t33 = *(int *)((a4 + 0x4C));
    *(unsigned int *)((a4 + 0x4C)) = (t33 + 0x1);
}

int camGetOffSelect(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t32;

    t0 = *(int *)0xC2AD54C;
    t1 = *(int *)(((0x148 + t0) + 0x0));
    t2 = (int)(((unsigned int)t1 >> 21) & 0x3);
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 == 2) {
                *(unsigned int *)0xC2AD57C = 0x4;
            }
        } else {
            *(unsigned int *)0xC2AD57C = 0x4;
        }
        t32 = t2;
    } else {
        t3 = *(int *)((t0 + 0x110));
        if (t3 != 0xC956FCC) {
            if (t3 != 0xC95A230) {
                if (t3 != 0xC95D7C4) {
                    if (t3 != 0xC960308) {
                        if (t3 != 0xC962F0C) {
                            if (t3 != 0xC9659C0) {
                                if (t3 != 0xC9684A4) {
                                    if (t3 != 0xC96B138) {
                                        if (t3 != 0xC96DE8C) {
                                            if (t3 != 0xC9702C0) {
                                                *(unsigned int *)0xC2AD57C = 0x3;
                                            } else {
                                                *(unsigned int *)0xC2AD57C = 0x2;
                                            }
                                        } else {
                                            *(unsigned int *)0xC2AD57C = 0x2;
                                        }
                                    } else {
                                        *(unsigned int *)0xC2AD57C = 0x1;
                                    }
                                } else {
                                    *(unsigned int *)0xC2AD57C = 0x1;
                                }
                            } else {
                                *(unsigned int *)0xC2AD57C = 0x1;
                            }
                        } else {
                            *(unsigned int *)0xC2AD57C = 0x1;
                        }
                    } else {
                        *(unsigned int *)0xC2AD57C = 0x1;
                    }
                } else {
                    *(unsigned int *)0xC2AD57C = 0x1;
                }
            } else {
                *(unsigned int *)0xC2AD57C = 0x1;
            }
        } else {
            *(unsigned int *)0xC2AD57C = 0x1;
        }
        t32 = t3;
    }
    *(unsigned int *)0xC2AD580 = 0x0;
    return t32;
}

int FUN_0c07a2e0(int a4, int a5, int a6)
{
    int t0;
    int t33;
    int t1;
    int t28;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t20;
    int t10;
    int t14;
    int t11;
    int t13;
    int t12;
    int t15;
    int t16;
    int t17;
    int t18;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t19;
    int stk[12] = {0};

    *(unsigned int *)(((int)stk + 4)) = a6;
    t0 = *(int *)((a4 + 0x0));
    t33 = 0x0;
    if ((int)t0 >= 0) {
        t1 = *(int *)((a4 + 0x18));
        t28 = 0x0;
        if (t1 != 0) {
            *(unsigned int *)(((int)stk + 8)) = ((((a5 == 0)) ? 1 : 0) ^ 0x1);
            t2 = ((((a5 == 0)) ? 1 : 0) ^ 0x1);
            t3 = t1;
            t4 = t0;
            t5 = a4;
            t6 = 0x0;
            t7 = (a4 + 0x18);
            do {
                t8 = *(int *)((t7 + 0x20));
                t9 = t7;
                t7 = (t7 + 0x50);
                t20 = t8;
                if ((int)t8 >= 0) {
                    t10 = *(int *)(((int)stk + 4));
                    t4 = t10;
                    t14 = t8;
                    if (t4 != 0) {
                        t11 = *(int *)(((int)stk + 8));
                        t4 = t11;
                        t13 = t8;
                        if (t4 != 0) {
                            t4 = t8;
                            t4 = (t4 << 2);
                            t4 = (t4 << 2);
                            t4 = (t4 + a5);
                            t12 = *(int *)((t4 + 0xC));
                            t13 = t12;
                        }
                        t14 = t13;
                    }
                    t3 = 0xC2B3184;
                    t2 = 0xC2AEC84;
                    t15 = *(int *)((t3 + 0x0));
                    t16 = *(int *)((t2 + 0x0));
                    t4 = t16;
                    t5 = (t14 + t15);
                    t5 = (t5 << 2);
                    t5 = (t5 << 1);
                    t5 = (t5 + t4);
                    t17 = *(int *)((t5 + 0x0));
                    if (t17 == 0) {
                        t6 = 0x1;
                        t19 = 0xFFFFFFFF;
                    } else {
                        t18 = *(int *)((t5 + 0x4));
                        t19 = t18;
                    }
                    t20 = t19;
                }
                t21 = *(int *)((t9 + 0xC));
                *(unsigned int *)(((int)stk + 12)) = (t21 & 0x7E00000);
                if ((int)t20 >= 0) {
                    t5 = t9;
                    t22 = nlSetTextureParameter(t5, t20);
                    t2 = t22;
                } else {
                    t5 = t9;
                    t23 = nlSetDummyTextureParameter(t5);
                    t2 = t23;
                }
                t2 = 0x4C;
                t24 = *(int *)(((int)stk + 12));
                t4 = t24;
                t25 = *(int *)((t9 + 0xC));
                *(unsigned int *)((t9 + 0xC)) = (t25 | t4);
                t26 = *(int *)((t9 + t2));
                t3 = t26;
                t7 = (t7 + t3);
                t27 = *(int *)((t7 + 0x0));
                t5 = t27;
            } while (t5 != 0);
            t28 = t6;
        }
        t33 = t28;
    }
    return t33;
}

int MakeBackupHeadInfo(int a4, int a5, int a6, int a7)
{
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t19;
    int t10;
    int t11;
    int t12;
    int t14;
    int t18;
    int t16;
    int stk[33] = {0};

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 12)) = a7;
    memset((((int)stk + 4) + 0xC), 0x0, 0x60);
    FUN_0c081470((((int)stk + 4) + 0xC), 0xC09DB5C);
    FUN_0c081470((((int)stk + 4) + 0x1E), 0xC09DB6C);
    memmove((((int)stk + 4) + 0x40), 0xC0EEC73, 0x10);
    *(unsigned int *)(((int)stk + 84)) = 0xC0EEC83;
    *(unsigned int *)(((int)stk + 88)) = 0xC0EECA3;
    *(unsigned short *)(((int)stk + 92)) = 0x3;
    *(unsigned short *)(((int)stk + 94)) = 0x2;
    *(unsigned int *)(((int)stk + 96)) = 0x0;
    *(unsigned short *)(((int)stk + 100)) = 0x0;
    t4 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 104)) = t4;
    t5 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 108)) = t5;
    t6 = *(short *)(((int)stk + 100));
    t7 = *(short *)(((int)stk + 92));
    t8 = buCalcBackupFileSize((unsigned short)t7, (unsigned short)t6);
    *(unsigned int *)(((int)stk + 4)) = t8;
    t9 = nlMalloc(((t8 << 8) << 1));
    t19 = 0xFFFFFFFF;
    if (t9 != 0) {
        t10 = buMakeBackupFileImage(t9, (((int)stk + 4) + 0xC));
        if ((int)t10 > 0) {
            t11 = *(int *)(((int)stk + 8));
            t12 = BupSave(a4, t11, t9, t10);
            if (t12 != 0) {
                nlFree(t9);
                t16 = 0xFFFFFFFF;
            } else {
                do {
                    t14 = buStat();
                } while (t14 == -1);
                nlFree(t9);
                t16 = 0x0;
            }
            t18 = t16;
        } else {
            nlFree(t9);
            t18 = 0xFFFFFFFF;
        }
        t19 = t18;
    }
    return t19;
}

int ExecNameEntryDecide(void)
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
    int t13;
    int t14;

    t0 = *(int *)0xC2864C4;
    *(unsigned int *)0xC2864C4 = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        t1 = *(short *)0xC1EE210;
        t2 = *(int *)0xC1EE340;
        t3 = (((t2 - 1) << 2) << 2);
        t4 = 0x3C0;
        t5 = 0xC2864D0;
        t6 = 0x3;
        t7 = ((((short)((short)t1 * (short)0x3C0) + 0xC28C318) + (((t2 - 1) << 2) << 2)) + 0x6);
        while (t6 != 0) {
            t8 = *(signed char *)((t5 + 0x0));
            t3 = t8;
            if (t3 == 0) {
                *(unsigned char *)((t5 + 0x0)) = 0x20;
            }
            t9 = *(signed char *)((t5 + 0x0));
            t4 = t9;
            t5 = (t5 + 0x1);
            t6 = (t6 - 1);
            *(unsigned char *)((t7 + 0x0)) = t4;
            t7 = (t7 + 0x1);
        }
        t10 = *(int *)0xC1789C0;
        *(unsigned int *)0xC1789C0 = (t10 + 0x1);
        gdc_StopStreamSongAll();
        pfSetFilterMode(0x0);
        t13 = pfOffsetOff();
        *(unsigned int *)0xC1EE238 = 0x2;
        return t13;
    }
    t14 = *(int *)0xC2864C4;
    if (t14 == 0xC8) {
        return gdc_FadeStopStreamSong(0x0, 0x12C);
    }
    return 0xC8;
}

int Exec_LCDLogoDemo(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    int t12;
    int t18;
    int t13;
    int t16;
    int t14;
    int t15;
    int t19;
    int t22;
    int t20;
    int t21;

    t0 = *(int *)0xC132320;
    t1 = *(int *)0xC132324;
    t2 = pdGetPeripheral((((t0 << 1) + (t0 << 2)) + t1));
    t3 = *(int *)((t2 + 0x30));
    t4 = *(int *)((t3 + 0x0));
    if ((t4 & 4) != 0) {
        lcdFillData(0x0, (((t0 << 1) + (t0 << 2)) + t1));
        t6 = *(int *)0xC2A9FAC;
        
        lcdSetData((((t0 << 1) + (t0 << 2)) + t1));
        lcdSync((((t0 << 1) + (t0 << 2)) + t1));
    }
    t12 = *(int *)0xC132320;
    t18 = t12;
    if (t12 == 3) {
        t13 = *(int *)0xC132324;
        t16 = t13;
        if (t13 == 2) {
            t14 = *(int *)0xC2A9FAC;
            *(unsigned int *)0xC2A9FAC = (t14 + 0x1);
            t15 = t13;
            if ((t14 + 0x1) == 0x280) {
                *(unsigned int *)0xC2A9FAC = 0x0;
                t15 = 0x0;
            }
            t16 = t15;
        }
        t18 = t16;
    }
    t19 = *(int *)0xC132324;
    *(unsigned int *)0xC132324 = (t19 + 0x1);
    t22 = t18;
    if ((int)(t19 + 0x1) > (int)0x2) {
        *(unsigned int *)0xC132324 = 0x1;
        t20 = *(int *)0xC132320;
        t21 = (int)((int)(t20 + 0x1) % (int)0x4);
        *(unsigned int *)0xC132320 = t21;
        t22 = t21;
    }
    return t22;
}



int windowTryAgain(void)
{
    int t2;
    int t3;
    int t5;
    int t6;
    int t7;
    int t8;
    int t10;
    int t11;
    int t23;
    int t24;

    windowOpenStep();
    menuCursor(0x1, 0x2, 0x0);
    t2 = *(int *)0xC2A11F4;
    t3 = *(int *)((((t2 << 2) + 0xC2A11F8) + 0x0));
    putLevelCTFontAssist(0x2026, 0xC09E028, 0x3, t3);
    t5 = *(int *)0xC2A1208;
    if ((t5 & 4) != 0) {
        t6 = *(int *)0xC2A11CC;
        if ((t6 & 0x2) != 0) {
            t7 = *(int *)0xC2A11F4;
            t8 = *(int *)((((t7 << 2) + 0xC2A11F8) + 0x0));
            if (t8 == 0) {
                *(unsigned int *)0xC0EF550 = 0x277;
                Voice_Request(0xC0EF550, 0x0, 0x7F, 0x0);
            } else {
                if ((0x2 & t6) != 0) {
                    t10 = *(int *)0xC2A11F4;
                    t11 = *(int *)((0xC2A11F8 + (t10 << 2)));
                    if (t11 != 1) {
                        if ((0x4 & t6) != 0) {
                            *(unsigned int *)0xC0EF550 = 0x25D;
                            Voice_Request(0xC0EF550, 0x0, 0x7F, 0x0);
                            NextWindow(0x3);
                        }
                    } else {
                        *(unsigned int *)0xC0EF550 = 0x25D;
                        Voice_Request(0xC0EF550, 0x0, 0x7F, 0x0);
                        NextWindow(0x3);
                    }
                } else {
                    if ((0x4 & t6) != 0) {
                        *(unsigned int *)0xC0EF550 = 0x25D;
                        Voice_Request(0xC0EF550, 0x0, 0x7F, 0x0);
                        NextWindow(0x3);
                    }
                }
            }
        } else {
            if ((0x2 & t6) != 0) {
                t23 = *(int *)0xC2A11F4;
                t24 = *(int *)((0xC2A11F8 + (t23 << 2)));
                if (t24 != 1) {
                    if ((0x4 & t6) != 0) {
                        *(unsigned int *)0xC0EF550 = 0x25D;
                        Voice_Request(0xC0EF550, 0x0, 0x7F, 0x0);
                        NextWindow(0x3);
                    }
                } else {
                    *(unsigned int *)0xC0EF550 = 0x25D;
                    Voice_Request(0xC0EF550, 0x0, 0x7F, 0x0);
                    NextWindow(0x3);
                }
            } else {
                if ((0x4 & t6) != 0) {
                    *(unsigned int *)0xC0EF550 = 0x25D;
                    Voice_Request(0xC0EF550, 0x0, 0x7F, 0x0);
                    NextWindow(0x3);
                }
            }
        }
    }
    return windowEnterStep();
}

int AdvStateReplay2(void)
{
    int t0;
    int t1;
    int t4;
    int t5;
    int t7;
    int t8;
    int t11;
    int t19;
    int t22;
    int t30;
    int t31;
    int t32;

    t0 = *(int *)0xC1EE240;
    *(unsigned int *)0xC1EE240 = (t0 + 0x1);
    t1 = replayChangeControl(0x2);
    if (t1 == 0) {
        exec_loop_Replay();
    }
    t4 = *(int *)0xC1EE774;
    if (t4 == 0) {
        t5 = *(int *)0xC1EE33C;
        if ((int)t5 >= (int)0x8AC) {
            Start_Ranking();
            t7 = *(int *)0xC1EE774;
            *(unsigned int *)0xC1EE774 = (t7 + 0x1);
        } else {
            if (t4 == 1) {
                t8 = *(int *)0xC1EE33C;
                if ((int)t8 >= (int)0xD3E) {
                    Voice_Request(0xC0E52E0, 0x0, 0x7F, 0x0);
                    gdc_FadeStopStreamSong(0x0, 0x654);
                    t11 = *(int *)0xC1EE774;
                    *(unsigned int *)0xC1EE774 = (t11 + 0x1);
                } else {
                    if (t4 == 2) {
                        gdc_FadeManStreamSong();
                    }
                }
            } else {
                if (t4 == 2) {
                    gdc_FadeManStreamSong();
                }
            }
        }
    } else {
        if (t4 == 1) {
            t19 = *(int *)0xC1EE33C;
            if ((int)t19 >= (int)0xD3E) {
                Voice_Request(0xC0E52E0, 0x0, 0x7F, 0x0);
                gdc_FadeStopStreamSong(0x0, 0x654);
                t22 = *(int *)0xC1EE774;
                *(unsigned int *)0xC1EE774 = (t22 + 0x1);
            } else {
                if (t4 == 2) {
                    gdc_FadeManStreamSong();
                }
            }
        } else {
            if (t4 == 2) {
                gdc_FadeManStreamSong();
            }
        }
    }
    t30 = *(int *)0xC1EE33C;
    if ((int)t30 >= (int)0xF78) {
        *(unsigned int *)0xC1EE238 = 0x8;
        t31 = *(int *)0xC2A4E54;
        if ((int)t31 > 0) {
            t32 = *(int *)0xC2A4E54;
            *(unsigned int *)0xC2A4E54 = (t32 - 1);
        }
        return gdc_StopStreamSongAll();
    }
    return Chk_DispCredit();
}

int FUN_0c07f690(int a4, int a5, int a6)
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

    if ((unsigned int)a4 >= (unsigned int)0x8) {
        return 0xFFFFFF80;
    }
    if ((int)(a5 - 1) < 0) {
        return 0xFFFFFF80;
    }
    if ((int)(a5 - 1) >= (int)0x10) {
        return 0xFFFFFF80;
    }
    t0 = *(int *)0xC2B76E4;
    t1 = *(int *)((t0 + 0x4));
    t2 = *(int *)((((t1 + 0xA0800000) + ((((a4 << 2) << 2) + (a5 - 1)) << 2)) + 0x0));
    if ((unsigned char)t2 == 0xFF) {
        return 0xFFFFFF7F;
    }
    t3 = *(int *)((t0 + 0x8));
    if (a6 != 0x1B0) {
        if (a6 != 0x2B0) {
            if (a6 != 0x27B0) {
                if (a6 != 0x2AB0) {
                    return 0xFFFFFF80;
                }
                t4 = *(int *)(((((t3 + 0xA0800000) + (((((unsigned char)t2 & 0x3F) << 2) << 2) << 2)) + 0x8) + 0x0));
                t5 = *(signed char *)(((signed char)((unsigned int)((unsigned int)(t4 & 0x1F000000) >> 16) >> 8) + 0xC0D6919));
                return t5;
            }
            t6 = *(int *)(((((t3 + 0xA0800000) + (((((unsigned char)t2 & 0x3F) << 2) << 2) << 2)) + 0x8) + 0x0));
            return (short)((unsigned int)(t6 & 0x7F0000) >> 16);
        }
        t7 = *(int *)(((((t3 + 0xA0800000) + (((((unsigned char)t2 & 0x3F) << 2) << 2) << 2)) + 0x14) + 0x0));
        return ((int)(t7 & 0x7F00) >> 8);
    }
    t8 = *(int *)(((((t3 + 0xA0800000) + (((((unsigned char)t2 & 0x3F) << 2) << 2) << 2)) + 0x14) + 0x0));
    return (t8 & 0x7F);
}

int AdvStateReplay(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t6;
    int t7;
    int t9;
    int t10;
    int t12;
    int t13;
    int t15;
    int t23;
    int t25;
    int t26;
    int t28;
    int t36;
    int t37;
    int t38;

    t0 = *(int *)0xC1EE240;
    *(unsigned int *)0xC1EE240 = (t0 + 0x1);
    t1 = *(int *)0xC1EE20C;
    t2 = 0x2;
    if (t1 == 0) {
        t2 = 0x1;
    }
    t3 = replayChangeControl(t2);
    if (t3 == 0) {
        exec_loop_Replay();
    }
    t6 = *(int *)0xC1EE774;
    if (t6 == 0) {
        t7 = *(int *)0xC1EE33C;
        if ((int)t7 >= (int)0xBB8) {
            Start_Ranking();
            t9 = *(int *)0xC1EE774;
            *(unsigned int *)0xC1EE774 = (t9 + 0x1);
        } else {
            if (t6 == 1) {
                t10 = *(int *)0xC1EE33C;
                if ((int)t10 >= (int)0x105E) {
                    Voice_Request(0xC0E52E0, 0x0, 0x7F, 0x0);
                    t12 = *(int *)0xC1EE20C;
                    t13 = 0x384;
                    if (t12 == 0) {
                        t13 = 0x44C;
                    }
                    gdc_FadeStopStreamSong(0x0, t13);
                    t15 = *(int *)0xC1EE774;
                    *(unsigned int *)0xC1EE774 = (t15 + 0x1);
                } else {
                    if (t6 == 2) {
                        gdc_FadeManStreamSong();
                    }
                }
            } else {
                if (t6 == 2) {
                    gdc_FadeManStreamSong();
                }
            }
        }
    } else {
        if (t6 == 1) {
            t23 = *(int *)0xC1EE33C;
            if ((int)t23 >= (int)0x105E) {
                Voice_Request(0xC0E52E0, 0x0, 0x7F, 0x0);
                t25 = *(int *)0xC1EE20C;
                t26 = 0x384;
                if (t25 == 0) {
                    t26 = 0x44C;
                }
                gdc_FadeStopStreamSong(0x0, t26);
                t28 = *(int *)0xC1EE774;
                *(unsigned int *)0xC1EE774 = (t28 + 0x1);
            } else {
                if (t6 == 2) {
                    gdc_FadeManStreamSong();
                }
            }
        } else {
            if (t6 == 2) {
                gdc_FadeManStreamSong();
            }
        }
    }
    t36 = *(int *)0xC1EE33C;
    if ((int)t36 >= (int)0x1298) {
        *(unsigned int *)0xC1EE238 = 0x8;
        t37 = *(int *)0xC2A4E54;
        if ((int)t37 > 0) {
            t38 = *(int *)0xC2A4E54;
            *(unsigned int *)0xC2A4E54 = (t38 - 1);
        }
        return gdc_StopStreamSongAll();
    }
    return Chk_DispCredit();
}

int FUN_0c080c50(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;
    int t8;
    int t10;
    int t11;
    int t12;
    int t35;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    float u18;
    float u19;
    float u20;
    float u21;
    float u24;
    float u25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    float u23;
    int stk[20] = {0};

    t0 = *(int *)0xC2AF370;
    t1 = *(int *)((t0 + 0x0));
    *(unsigned int *)(((int)stk + 8)) = (t1 << 2);
    t2 = *(int *)0xC2AF368;
    t3 = *(int *)((t0 + 0x4));
    t4 = *(int *)(((t1 << 2) + t2));
    *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t4 >> 16) >> 8);
    *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t4 >> 16) >> 8);
    *(unsigned int *)(((int)stk + 4)) = ((t4 & 0x3FFFFFF) | 0xE0000000);
    t5 = *(int *)0xC2AF36C;
    FUN_0c158860(((t4 & 0x3FFFFFF) | 0xE0000000), t5, t3);
    t7 = *(int *)(((int)stk + 4));
    _builtin_prefetch((void *)t7);
    if (t3 == 64) {
        t8 = *(int *)(((int)stk + 4));
        _builtin_prefetch((void *)(t8 + 0x20));
    }
    t10 = *(int *)0xC2AF368;
    t11 = *(int *)(((int)stk + 8));
    t12 = *(int *)((t11 + t10));
    *(unsigned int *)((t11 + t10)) = (t12 + (((unsigned int)t3 >> 2) << 2));
    *(unsigned int *)(((int)stk + 12)) = 0xE0000000;
    t35 = t10;
    if ((int)a4 > 0) {
        t13 = t11;
        t14 = a4;
        t15 = a5;
        do {
            if (t14 == 1) {
                t13 = 0xF0000000;
                *(unsigned int *)(((int)stk + 12)) = t13;
            }
            t16 = *(int *)0xC2B7944;
            if (t16 != 0) {
                t13 = 0xC0771B0;
                t17 = ((int (*)(int, int))(t13))(t15, (((int)stk + 4) + 0xC));
                u18 = *(float *)(((int)stk + 24));
                u23 = u18;
            } else {
                u19 = *(float *)((t15 + 0x0));
                *(float *)(((int)stk + 16)) = u19;
                u20 = *(float *)((t15 + 0x4));
                *(float *)(((int)stk + 20)) = u20;
                u21 = *(float *)((t15 + 0x8));
                u23 = u21;
            }
            *(float *)(((int)stk + 24)) = (1.0f / u23);
            u24 = *(float *)((t15 + 0xC));
            *(float *)(((int)stk + 28)) = u24;
            u25 = *(float *)((t15 + 0x10));
            *(float *)(((int)stk + 32)) = u25;
            t26 = *(int *)((t15 + 0x14));
            t13 = t26;
            *(unsigned int *)(((int)stk + 36)) = t13;
            t27 = *(int *)0xC2AF370;
            t28 = *(int *)((t27 + 0x0));
            *(unsigned int *)(((int)stk + 4)) = (t28 << 2);
            t29 = *(int *)0xC2AF368;
            t30 = *(int *)(((t28 << 2) + t29));
            *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t30 >> 16) >> 8);
            *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t30 >> 16) >> 8);
            t13 = 0xC158860;
            t31 = ((int (*)(int, int, int))(t13))(((t30 & 0x3FFFFFF) | 0xE0000000), (((int)stk + 4) + 0x8), 0x20);
            _builtin_prefetch((void *)((t30 & 0x3FFFFFF) | 0xE0000000));
            t32 = *(int *)0xC2AF368;
            t14 = (t14 - 1);
            t33 = *(int *)(((int)stk + 4));
            t13 = t33;
            t34 = *(int *)((t13 + t32));
            *(unsigned int *)((t13 + t32)) = (t34 + 0x20);
            t15 = (t15 + 0x1C);
        } while ((int)t14 > 0);
        t35 = t32;
    }
    return t35;
}

int AdvStateLogo(void)
{
    int t0;
    int t1;
    int t14;
    int t3;
    int t11;
    int t4;
    int t9;
    int t7;
    int t8;
    int t12;
    int t13;
    int t16;
    int t19;
    int t27;
    int t20;
    int t25;
    int t23;
    int t24;
    int t28;
    int t29;
    int t32;
    int t33;
    int t38;
    int t40;
    int t41;
    int t43;
    int t44;
    int t48;
    int t49;
    int t53;
    int t50;
    int t51;
    int t64;
    int t61;
    int t62;
    int t68;
    int t30;
    int t66;
    int t57;

    t0 = *(int *)0xC1EE240;
    *(unsigned int *)0xC1EE240 = (t0 + 0x1);
    t1 = *(int *)0xC1EE770;
    if (t1 != 0) {
        if (t1 != 1) {
            t14 = t1;
            if (t1 == 2) {
                PutAdvLogoSprite();
                t3 = *(int *)0xC1EE240;
                t11 = t3;
                if (t3 == 5) {
                    t4 = *(int *)0xC1EE76C;
                    t9 = t4;
                    if (t4 == -1) {
                        *(unsigned int *)0xC1EE33C = 0x0;
                        gdc_FileLoad(0xC880000, 0xC08ADB8, 0x0);
                        PatchMotion();
                        t7 = *(int *)0xC1EE240;
                        t8 = *(int *)0xC1EE33C;
                        *(unsigned int *)0xC1EE240 = (t7 + t8);
                        *(unsigned int *)0xC1EE76C = 0x1;
                        t9 = 0xC1EE76C;
                    }
                    t11 = t9;
                }
                t12 = *(int *)0xC1EE240;
                t13 = t11;
                if ((int)t12 >= (int)0xB4) {
                    *(unsigned int *)0xC1EE238 = 0x6;
                    t13 = 0x6;
                }
                t14 = t13;
            }
            t30 = t14;
        } else {
            t16 = *(int *)0xC1EE770;
            *(unsigned int *)0xC1EE770 = (t16 + 0x1);
            InitAdvLogoSprite();
            PutAdvLogoSprite();
            t19 = *(int *)0xC1EE240;
            t27 = t19;
            if (t19 == 5) {
                t20 = *(int *)0xC1EE76C;
                t25 = t20;
                if (t20 == -1) {
                    *(unsigned int *)0xC1EE33C = 0x0;
                    gdc_FileLoad(0xC880000, 0xC08ADB8, 0x0);
                    PatchMotion();
                    t23 = *(int *)0xC1EE240;
                    t24 = *(int *)0xC1EE33C;
                    *(unsigned int *)0xC1EE240 = (t23 + t24);
                    *(unsigned int *)0xC1EE76C = 0x1;
                    t25 = 0xC1EE76C;
                }
                t27 = t25;
            }
            t28 = *(int *)0xC1EE240;
            t29 = t27;
            if ((int)t28 >= (int)0xB4) {
                *(unsigned int *)0xC1EE238 = 0x6;
                t29 = 0x6;
            }
            t30 = t29;
        }
        t68 = t30;
    } else {
        t32 = *(int *)0xC1EE240;
        if ((int)t32 < (int)0x78) {
            t33 = *(int *)0xC1EE250;
            if ((t33 & 8) != 0) {
                *(unsigned int *)0xC2A93F4 = 0x78;
                *(unsigned int *)0xC1EE240 = 0x78;
            }
        }
        Put_SEGA_LOGO2();
        t38 = *(int *)0xC1EE240;
        if (t38 == 123) {
            *(unsigned int *)0xC1EE33C = 0x0;
            req_load();
            t40 = *(int *)0xC1EE240;
            t41 = *(int *)0xC1EE33C;
            *(unsigned int *)0xC1EE240 = (t40 + t41);
        }
        t43 = *(int *)0xC1EE23C;
        if (t43 == 1) {
            t44 = *(int *)0xC1EE240;
            if (t44 == 120) {
                gdc_PlayStreamSong(0x4);
            }
        }
        t48 = *(int *)0xC1EE23C;
        if (t48 == 0) {
            t49 = *(int *)0xC1EE240;
            if ((int)t49 >= (int)0x12C) {
                *(unsigned int *)0xC1EE770 = 0x1;
                *(unsigned int *)0xC1EE240 = 0x0;
                t57 = 0xC1EE240;
            } else {
                t53 = t48;
                if (t48 == 1) {
                    t50 = *(int *)0xC1EE240;
                    t51 = t48;
                    if ((int)t50 >= (int)0x19A) {
                        *(unsigned int *)0xC1EE238 = 0x6;
                        t51 = 0x6;
                    }
                    t53 = t51;
                }
                t57 = t53;
            }
            t66 = t57;
        } else {
            t64 = t48;
            if (t48 == 1) {
                t61 = *(int *)0xC1EE240;
                t62 = t48;
                if ((int)t61 >= (int)0x19A) {
                    *(unsigned int *)0xC1EE238 = 0x6;
                    t62 = 0x6;
                }
                t64 = t62;
            }
            t66 = t64;
        }
        t68 = t66;
    }
    return t68;
}

int FUN_0c080d70(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;
    int t8;
    int t10;
    int t11;
    int t12;
    int t36;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    float u18;
    float u19;
    float u20;
    float u21;
    float u24;
    float u25;
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
    float u23;
    int stk[20] = {0};

    t0 = *(int *)0xC2AF370;
    t1 = *(int *)((t0 + 0x0));
    *(unsigned int *)(((int)stk + 8)) = (t1 << 2);
    t2 = *(int *)0xC2AF368;
    t3 = *(int *)((t0 + 0x4));
    t4 = *(int *)(((t1 << 2) + t2));
    *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t4 >> 16) >> 8);
    *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t4 >> 16) >> 8);
    *(unsigned int *)(((int)stk + 4)) = ((t4 & 0x3FFFFFF) | 0xE0000000);
    t5 = *(int *)0xC2AF36C;
    FUN_0c158860(((t4 & 0x3FFFFFF) | 0xE0000000), t5, t3);
    t7 = *(int *)(((int)stk + 4));
    _builtin_prefetch((void *)t7);
    if (t3 == 64) {
        t8 = *(int *)(((int)stk + 4));
        _builtin_prefetch((void *)(t8 + 0x20));
    }
    t10 = *(int *)0xC2AF368;
    t11 = *(int *)(((int)stk + 8));
    t12 = *(int *)((t11 + t10));
    *(unsigned int *)((t11 + t10)) = (t12 + (((unsigned int)t3 >> 2) << 2));
    *(unsigned int *)(((int)stk + 12)) = 0xE0000000;
    t36 = t10;
    if ((int)a4 > 0) {
        t13 = t11;
        t14 = a4;
        t15 = a5;
        do {
            if (t14 == 1) {
                t13 = 0xF0000000;
                *(unsigned int *)(((int)stk + 12)) = t13;
            }
            t16 = *(int *)0xC2B7944;
            if (t16 != 0) {
                t13 = 0xC0771B0;
                t17 = ((int (*)(int, int))(t13))(t15, (((int)stk + 4) + 0xC));
                u18 = *(float *)(((int)stk + 24));
                u23 = u18;
            } else {
                u19 = *(float *)((t15 + 0x0));
                *(float *)(((int)stk + 16)) = u19;
                u20 = *(float *)((t15 + 0x4));
                *(float *)(((int)stk + 20)) = u20;
                u21 = *(float *)((t15 + 0x8));
                u23 = u21;
            }
            *(float *)(((int)stk + 24)) = (1.0f / u23);
            u24 = *(float *)((t15 + 0xC));
            *(float *)(((int)stk + 28)) = u24;
            u25 = *(float *)((t15 + 0x10));
            *(float *)(((int)stk + 32)) = u25;
            t26 = *(int *)((t15 + 0x14));
            t13 = t26;
            *(unsigned int *)(((int)stk + 36)) = t13;
            t27 = *(int *)((t15 + 0x18));
            *(unsigned int *)(((int)stk + 40)) = t27;
            t28 = *(int *)0xC2AF370;
            t29 = *(int *)((t28 + 0x0));
            *(unsigned int *)(((int)stk + 4)) = (t29 << 2);
            t30 = *(int *)0xC2AF368;
            t31 = *(int *)(((t29 << 2) + t30));
            *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t31 >> 16) >> 8);
            *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t31 >> 16) >> 8);
            t13 = 0xC158860;
            t32 = ((int (*)(int, int, int))(t13))(((t31 & 0x3FFFFFF) | 0xE0000000), (((int)stk + 4) + 0x8), 0x20);
            _builtin_prefetch((void *)((t31 & 0x3FFFFFF) | 0xE0000000));
            t33 = *(int *)0xC2AF368;
            t14 = (t14 - 1);
            t34 = *(int *)(((int)stk + 4));
            t13 = t34;
            t35 = *(int *)((t13 + t33));
            *(unsigned int *)((t13 + t33)) = (t35 + 0x20);
            t15 = (t15 + 0x1C);
        } while ((int)t14 > 0);
        t36 = t33;
    }
    return t36;
}

int FUN_0c07ef40(void)
{
    int t0;
    int t56;
    int t3;
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
    int t13;
    int t12;
    int t20;
    int t36;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t31;
    int t30;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t45;
    int t49;
    int t50;
    int t51;
    int t52;
    int t48;
    int t37;
    int t18;
    int t14;
    int t32;

    t0 = *(int *)0xC2B76FC;
    t56 = 0xFFFFFFFF;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                if ((unsigned char)t0 != 3) {
                    if ((unsigned char)t0 != 4) {
                        t3 = (unsigned char)t0;
                        if ((unsigned char)t0 == 5) {
                            t1 = *(int *)0xA08000B4;
                            t2 = 0x1;
                            if (t1 == 0) {
                                *(unsigned int *)0xA08000B0 = 0x0;
                                *(unsigned int *)0xC2B76FC = 0x0;
                                t2 = 0x0;
                            }
                            t3 = t2;
                        }
                        t18 = t3;
                    } else {
                        t4 = *(int *)0xC2B76FC;
                        if ((t4 & 0xFF00) == 0) {
                            t5 = 0x0;
                            for (;;) {
                                t6 = *(int *)0xC2B7700;
                                if ((int)t5 >= (int)t6) {
                                    return 0x1;
                                }
                                t7 = *(int *)0xC2B7710;
                                *(unsigned int *)0xC2B7710 = (t7 + 0x4);
                                t8 = *(int *)0xC2B770C;
                                *(unsigned int *)0xC2B770C = (t8 + 0x4);
                                t9 = *(int *)((((t8 + 0x4) - 4) + 0x0));
                                *(unsigned int *)((((t7 + 0x4) - 4) + 0x0)) = t9;
                                t10 = *(int *)0xC2B7704;
                                *(unsigned int *)0xC2B7704 = (t10 - 4);
                                if ((t10 - 4) == 0) break;
                                t5 = (t5 + 0x1);
                            }
                            *(unsigned int *)0xA08000B0 = 0x1;
                            t11 = *(int *)0xC2B76FC;
                            *(unsigned int *)0xC2B76FC = (t11 + 0x1);
                            t14 = 0x1;
                        } else {
                            t13 = 0x0;
                            if ((t4 & 0xFF00) == 0x100) {
                                *(unsigned int *)0xA08000B0 = 0x1;
                                t12 = *(int *)0xC2B76FC;
                                *(unsigned int *)0xC2B76FC = (t12 + 0x1);
                                t13 = 0x1;
                            }
                            t14 = t13;
                        }
                        t18 = t14;
                    }
                    t37 = t18;
                } else {
                    t20 = FUN_0c07e880();
                    t36 = 0x1;
                    if (t20 == 0) {
                        t21 = *(int *)0xC2B76FC;
                        *(unsigned int *)0xC2B76FC = (t21 + 0x1);
                        t22 = *(int *)0xC2B76FC;
                        if ((t22 & 0xFF00) == 0) {
                            t23 = 0x0;
                            for (;;) {
                                t24 = *(int *)0xC2B7700;
                                if ((int)t23 >= (int)t24) {
                                    return 0x1;
                                }
                                t25 = *(int *)0xC2B7710;
                                *(unsigned int *)0xC2B7710 = (t25 + 0x4);
                                t26 = *(int *)0xC2B770C;
                                *(unsigned int *)0xC2B770C = (t26 + 0x4);
                                t27 = *(int *)((((t26 + 0x4) - 4) + 0x0));
                                *(unsigned int *)((((t25 + 0x4) - 4) + 0x0)) = t27;
                                t28 = *(int *)0xC2B7704;
                                *(unsigned int *)0xC2B7704 = (t28 - 4);
                                if ((t28 - 4) == 0) break;
                                t23 = (t23 + 0x1);
                            }
                            *(unsigned int *)0xA08000B0 = 0x1;
                            t29 = *(int *)0xC2B76FC;
                            *(unsigned int *)0xC2B76FC = (t29 + 0x1);
                            t32 = 0x1;
                        } else {
                            t31 = 0x0;
                            if ((t22 & 0xFF00) == 0x100) {
                                *(unsigned int *)0xA08000B0 = 0x1;
                                t30 = *(int *)0xC2B76FC;
                                *(unsigned int *)0xC2B76FC = (t30 + 0x1);
                                t31 = 0x1;
                            }
                            t32 = t31;
                        }
                        t36 = t32;
                    }
                    t37 = t36;
                }
                t48 = t37;
            } else {
                t38 = *(int *)0xA08000B4;
                if (t38 != 0) {
                    t39 = *(int *)0xC2B7708;
                    if (t39 != 0) {
                        t40 = *(int *)0xC2B7710;
                        t41 = *(int *)0xC2B7704;
                        t42 = *(int *)0xC2B7710;
                        FUN_0c07e820(t42, (t40 + t41), t39);
                    }
                    t45 = *(int *)0xC2B76FC;
                    *(unsigned int *)0xC2B76FC = (t45 + 0x1);
                }
                t48 = 0x1;
            }
            t52 = t48;
        } else {
            t49 = 0x0;
            for (;;) {
                t50 = FUN_0c07f5c0();
                if (t50 != 0) {
                    t49 = (t49 + 0x1);
                    if ((int)t49 >= (int)0x400000) break;
                    continue;
                }
                t51 = *(int *)0xC2B76FC;
                *(unsigned int *)0xC2B76FC = (t51 + 0x1);
                return 0x1;
            }
            t52 = 0x1;
        }
        t56 = t52;
    }
    return t56;
}

int Drv_ExecGetOff(void)
{
    int t0;
    int t1;
    float u3;
    int t4;
    float u6;
    int t7;
    float u8;
    int t9;
    int t10;
    float u12;
    int t13;
    float u15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t24;
    int t26;
    int t28;
    int t30;
    int t32;
    int t34;
    int t36;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t45;
    int t47;
    int t49;
    int t51;
    int t53;
    int t55;
    int t57;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    int t66;
    int t68;
    int t70;
    int t72;
    int t74;
    int t76;
    int t78;
    int t80;

    t0 = *(int *)0xC2AD014;
    t1 = *(int *)0xC2AD018;
    if (t0 != 0) {
        if (t0 == 1) {
            drvUpdatePartTracks();
            u3 = *(float *)0xC2AD024;
            t4 = *(int *)0xC2AD020;
            FcvStoreBuffer(t4, 0xC2AD028, u3);
            u6 = *(float *)0xC2AD024;
            *(float *)0xC2AD024 = (u6 + 1.0f);
            t7 = *(int *)0xC2AD020;
            u8 = *(float *)0xC2AD024;
            t9 = *(int *)((t7 + 0x0));
            if (!((float)(t9 - 1) > u8)) {
                return Drv_StartAction(0x0, 0x0, 0x0);
            }
            return 0x24;
        }
        return t0;
    }
    t10 = *(signed char *)0xC2AD1DF;
    if ((t10 & 128) != 0) {
        return Drv_ExecBlend();
    }
    drvUpdatePartTracks();
    u12 = *(float *)0xC2AD024;
    t13 = *(int *)0xC2AD020;
    FcvStoreBuffer(t13, 0xC2AD028, u12);
    u15 = *(float *)0xC2AD024;
    *(float *)0xC2AD024 = (u15 + 1.0f);
    t16 = *(int *)0xC2AD020;
    t17 = *(int *)((t16 + 0x0));
    if ((float)(t17 - 1) > (u15 + 1.0f)) {
        if (t16 != 0xC8D1824) {
            if (t16 != 0xC8D2488) {
                return 0x24;
            }
            if (!(60.0f > (u15 + 1.0f))) {
                t18 = *(int *)((t1 + 0x34));
                if (t18 != 0xC956FCC) {
                    if (t18 != 0xC95A230) {
                        if (t18 != 0xC95D7C4) {
                            if (t18 != 0xC960308) {
                                if (t18 != 0xC962F0C) {
                                    if (t18 != 0xC9659C0) {
                                        if (t18 != 0xC9684A4) {
                                            if (t18 != 0xC96B138) {
                                                t19 = *(int *)0xC2AD020;
                                                t20 = *(int *)((t19 + 0x0));
                                                *(float *)0xC2AD024 = (float)(t20 - 2);
                                                t21 = *(int *)((t1 + 0x24));
                                                if (t21 == 1) {
                                                    t22 = *(int *)0xC2AD014;
                                                    *(unsigned int *)0xC2AD014 = (t22 + 0x1);
                                                    return Drv_StartGetOff();
                                                }
                                                return t21;
                                            }
                                            Drv_StartAction(0x0, 0x0, 0x0);
                                            t24 = *(signed char *)0xC2AD1DF;
                                            *(unsigned char *)0xC2AD1DF = (t24 | 0x40);
                                            return (t24 | 0x40);
                                        }
                                        Drv_StartAction(0x0, 0x0, 0x0);
                                        t26 = *(signed char *)0xC2AD1DF;
                                        *(unsigned char *)0xC2AD1DF = (t26 | 0x40);
                                        return (t26 | 0x40);
                                    }
                                    Drv_StartAction(0x0, 0x0, 0x0);
                                    t28 = *(signed char *)0xC2AD1DF;
                                    *(unsigned char *)0xC2AD1DF = (t28 | 0x40);
                                    return (t28 | 0x40);
                                }
                                Drv_StartAction(0x0, 0x0, 0x0);
                                t30 = *(signed char *)0xC2AD1DF;
                                *(unsigned char *)0xC2AD1DF = (t30 | 0x40);
                                return (t30 | 0x40);
                            }
                            Drv_StartAction(0x0, 0x0, 0x0);
                            t32 = *(signed char *)0xC2AD1DF;
                            *(unsigned char *)0xC2AD1DF = (t32 | 0x40);
                            return (t32 | 0x40);
                        }
                        Drv_StartAction(0x0, 0x0, 0x0);
                        t34 = *(signed char *)0xC2AD1DF;
                        *(unsigned char *)0xC2AD1DF = (t34 | 0x40);
                        return (t34 | 0x40);
                    }
                    Drv_StartAction(0x0, 0x0, 0x0);
                    t36 = *(signed char *)0xC2AD1DF;
                    *(unsigned char *)0xC2AD1DF = (t36 | 0x40);
                    return (t36 | 0x40);
                }
                Drv_StartAction(0x0, 0x0, 0x0);
                t38 = *(signed char *)0xC2AD1DF;
                *(unsigned char *)0xC2AD1DF = (t38 | 0x40);
                return (t38 | 0x40);
            }
            return 0xC063668;
        }
        if (!(60.0f > (u15 + 1.0f))) {
            t39 = *(int *)((t1 + 0x34));
            if (t39 != 0xC956FCC) {
                if (t39 != 0xC95A230) {
                    if (t39 != 0xC95D7C4) {
                        if (t39 != 0xC960308) {
                            if (t39 != 0xC962F0C) {
                                if (t39 != 0xC9659C0) {
                                    if (t39 != 0xC9684A4) {
                                        if (t39 != 0xC96B138) {
                                            t40 = *(int *)0xC2AD020;
                                            t41 = *(int *)((t40 + 0x0));
                                            *(float *)0xC2AD024 = (float)(t41 - 2);
                                            t42 = *(int *)((t1 + 0x24));
                                            if (t42 == 1) {
                                                t43 = *(int *)0xC2AD014;
                                                *(unsigned int *)0xC2AD014 = (t43 + 0x1);
                                                return Drv_StartGetOff();
                                            }
                                            return t42;
                                        }
                                        Drv_StartAction(0x0, 0x0, 0x0);
                                        t45 = *(signed char *)0xC2AD1DF;
                                        *(unsigned char *)0xC2AD1DF = (t45 | 0x40);
                                        return (t45 | 0x40);
                                    }
                                    Drv_StartAction(0x0, 0x0, 0x0);
                                    t47 = *(signed char *)0xC2AD1DF;
                                    *(unsigned char *)0xC2AD1DF = (t47 | 0x40);
                                    return (t47 | 0x40);
                                }
                                Drv_StartAction(0x0, 0x0, 0x0);
                                t49 = *(signed char *)0xC2AD1DF;
                                *(unsigned char *)0xC2AD1DF = (t49 | 0x40);
                                return (t49 | 0x40);
                            }
                            Drv_StartAction(0x0, 0x0, 0x0);
                            t51 = *(signed char *)0xC2AD1DF;
                            *(unsigned char *)0xC2AD1DF = (t51 | 0x40);
                            return (t51 | 0x40);
                        }
                        Drv_StartAction(0x0, 0x0, 0x0);
                        t53 = *(signed char *)0xC2AD1DF;
                        *(unsigned char *)0xC2AD1DF = (t53 | 0x40);
                        return (t53 | 0x40);
                    }
                    Drv_StartAction(0x0, 0x0, 0x0);
                    t55 = *(signed char *)0xC2AD1DF;
                    *(unsigned char *)0xC2AD1DF = (t55 | 0x40);
                    return (t55 | 0x40);
                }
                Drv_StartAction(0x0, 0x0, 0x0);
                t57 = *(signed char *)0xC2AD1DF;
                *(unsigned char *)0xC2AD1DF = (t57 | 0x40);
                return (t57 | 0x40);
            }
            Drv_StartAction(0x0, 0x0, 0x0);
            t59 = *(signed char *)0xC2AD1DF;
            *(unsigned char *)0xC2AD1DF = (t59 | 0x40);
            return (t59 | 0x40);
        }
        return 0xC063668;
    }
    t60 = *(int *)((t1 + 0x34));
    if (t60 != 0xC956FCC) {
        if (t60 != 0xC95A230) {
            if (t60 != 0xC95D7C4) {
                if (t60 != 0xC960308) {
                    if (t60 != 0xC962F0C) {
                        if (t60 != 0xC9659C0) {
                            if (t60 != 0xC9684A4) {
                                if (t60 != 0xC96B138) {
                                    t61 = *(int *)0xC2AD020;
                                    t62 = *(int *)((t61 + 0x0));
                                    *(float *)0xC2AD024 = (float)(t62 - 2);
                                    t63 = *(int *)((t1 + 0x24));
                                    if (t63 == 1) {
                                        t64 = *(int *)0xC2AD014;
                                        *(unsigned int *)0xC2AD014 = (t64 + 0x1);
                                        return Drv_StartGetOff();
                                    }
                                    return t63;
                                }
                                Drv_StartAction(0x0, 0x0, 0x0);
                                t66 = *(signed char *)0xC2AD1DF;
                                *(unsigned char *)0xC2AD1DF = (t66 | 0x40);
                                return (t66 | 0x40);
                            }
                            Drv_StartAction(0x0, 0x0, 0x0);
                            t68 = *(signed char *)0xC2AD1DF;
                            *(unsigned char *)0xC2AD1DF = (t68 | 0x40);
                            return (t68 | 0x40);
                        }
                        Drv_StartAction(0x0, 0x0, 0x0);
                        t70 = *(signed char *)0xC2AD1DF;
                        *(unsigned char *)0xC2AD1DF = (t70 | 0x40);
                        return (t70 | 0x40);
                    }
                    Drv_StartAction(0x0, 0x0, 0x0);
                    t72 = *(signed char *)0xC2AD1DF;
                    *(unsigned char *)0xC2AD1DF = (t72 | 0x40);
                    return (t72 | 0x40);
                }
                Drv_StartAction(0x0, 0x0, 0x0);
                t74 = *(signed char *)0xC2AD1DF;
                *(unsigned char *)0xC2AD1DF = (t74 | 0x40);
                return (t74 | 0x40);
            }
            Drv_StartAction(0x0, 0x0, 0x0);
            t76 = *(signed char *)0xC2AD1DF;
            *(unsigned char *)0xC2AD1DF = (t76 | 0x40);
            return (t76 | 0x40);
        }
        Drv_StartAction(0x0, 0x0, 0x0);
        t78 = *(signed char *)0xC2AD1DF;
        *(unsigned char *)0xC2AD1DF = (t78 | 0x40);
        return (t78 | 0x40);
    }
    Drv_StartAction(0x0, 0x0, 0x0);
    t80 = *(signed char *)0xC2AD1DF;
    *(unsigned char *)0xC2AD1DF = (t80 | 0x40);
    return (t80 | 0x40);
}

int Drv_ExecGetOn(void)
{
    int t0;
    int t1;
    int t2;
    float u4;
    int t5;
    float u7;
    int t8;
    float u9;
    int t10;
    float u12;
    int t13;
    float u15;
    int t16;
    float u17;
    int t18;
    int t19;
    int t20;
    int t24;
    int t25;
    float t26;
    float u28;
    int t29;
    int t31;
    int t32;
    float u34;
    int t35;
    float u37;
    int t38;
    float u39;
    float u40;
    int t41;

    t0 = *(signed char *)0xC2AD1DF;
    t1 = *(int *)0xC2AD018;
    if ((t0 & 128) != 0) {
        return Drv_ExecBlend();
    }
    t2 = *(int *)0xC2AD014;
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 != 2) {
                if (t2 != 3) {
                    return t2;
                }
                drvUpdatePartTracks();
                u4 = *(float *)0xC2AD024;
                t5 = *(int *)0xC2AD020;
                FcvStoreBuffer(t5, 0xC2AD028, u4);
                u7 = *(float *)0xC2AD024;
                *(float *)0xC2AD024 = (u7 + 1.0f);
                t8 = *(int *)0xC2AD020;
                u9 = *(float *)0xC2AD024;
                t10 = *(int *)((t8 + 0x0));
                if (!((float)(t10 - 1) > u9)) {
                    return Drv_StartAction(0x0, 0x0, 0x0);
                }
                return 0x24;
            }
            drvUpdatePartTracks();
            u12 = *(float *)0xC2AD024;
            t13 = *(int *)0xC2AD020;
            FcvStoreBuffer(t13, 0xC2AD028, u12);
            u15 = *(float *)0xC2AD024;
            *(float *)0xC2AD024 = (u15 + 1.5f);
            t16 = *(int *)0xC2AD020;
            u17 = *(float *)0xC2AD024;
            t18 = *(int *)((t16 + 0x0));
            if (!((float)(t18 - 1) > u17)) {
                t19 = *(int *)0xC2AD020;
                t20 = *(int *)((t19 + 0x0));
                *(float *)0xC2AD024 = (float)(t20 - 2);
            }
            t24 = *(int *)((t1 + 0x20));
            if (t24 == 3) {
                t25 = *(int *)0xC2AD014;
                *(unsigned int *)0xC2AD014 = (t25 + 0x1);
                return Drv_StartGetOn();
            }
            return t24;
        }
        t26 = Drv_FacePsgFrame(t1);
        *(float *)0xC2AD024 = t26;
        drvUpdatePartTracks();
        u28 = *(float *)0xC2AD024;
        t29 = *(int *)0xC2AD020;
        FcvStoreBuffer(t29, 0xC2AD028, u28);
        t31 = *(int *)((t1 + 0x24));
        if (t31 == 2) {
            t32 = *(int *)0xC2AD014;
            *(unsigned int *)0xC2AD014 = (t32 + 0x1);
            return Drv_StartGetOn();
        }
        return t31;
    }
    drvUpdatePartTracks();
    u34 = *(float *)0xC2AD024;
    t35 = *(int *)0xC2AD020;
    FcvStoreBuffer(t35, 0xC2AD028, u34);
    u37 = *(float *)0xC2AD024;
    *(float *)0xC2AD024 = (u37 + 1.0f);
    t38 = *(int *)0xC2AD01C;
    u39 = (float)t38;
    if ((int)t38 < 0) {
        u39 = ((float)t38 + 4.2949673e+09f);
    }
    u40 = *(float *)0xC2AD024;
    if (u39 > u40) {
        return 0x24;
    }
    t41 = *(int *)0xC2AD014;
    *(unsigned int *)0xC2AD014 = (t41 + 0x1);
    return Drv_StartGetOn();
}

int FUN_0c169514(int a4)
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
    int t14;
    int t15;
    int t20;
    int t27;
    int t28;
    int t29;
    int t30;
    int t36;
    int t31;
    int t32;
    int t33;
    int t34;
    int t37;
    int t38;
    int t39;
    int t42;
    int t43;
    int t50;
    int t58;
    int t51;
    int t56;
    int t57;
    int t65;
    int t76;
    int t66;
    int t67;
    int t75;
    int t68;
    int t73;
    int t74;
    int t64;
    int t63;
    int t62;
    int t61;
    int t60;

    t0 = *(signed char *)((a4 + 0x1));
    if (t0 == 3) {
        t1 = *(signed char *)((a4 + 0x72));
        if (t1 == 0) {
            t2 = *(int *)((a4 + 0x4));
            t3 = ADXSJD_GetStat(t2);
            if (t3 != 3) {
                t4 = *(int *)((a4 + 0x4));
                t5 = FUN_0c1687f2(t4);
                t6 = *(int *)((a4 + 0x64));
                if (t6 == t5) {
                    t7 = *(short *)((a4 + 0x68));
                    *(unsigned short *)((a4 + 0x68)) = (t7 + 0x1);
                    t8 = *(int *)((a4 + 0x38));
                    t9 = *(short *)((a4 + 0x68));
                    if ((int)t9 > (int)((t8 << 2) + t8)) {
                        *(unsigned short *)((a4 + 0x60)) = 0xFFFFFFFE;
                    }
                } else {
                    *(unsigned short *)((a4 + 0x68)) = 0x0;
                }
                *(unsigned int *)((a4 + 0x64)) = t5;
                t14 = *(short *)((a4 + 0x60));
                if (t14 != 0) {
                    t15 = *(signed char *)((a4 + 0x6D));
                    if (t15 != 1) {
                        if (t15 == 2) {
                            ADXT_Stop();
                        }
                    } else {
                        ADXT_Stop();
                    }
                    t20 = *(signed char *)((a4 + 0x6D));
                    if (t20 != 0) {
                        *(unsigned short *)((a4 + 0x60)) = 0x0;
                        *(unsigned short *)((a4 + 0x68)) = 0x0;
                    }
                }
            } else {
                *(unsigned short *)((a4 + 0x68)) = 0x0;
            }
        } else {
            *(unsigned short *)((a4 + 0x68)) = 0x0;
        }
    } else {
        *(unsigned short *)((a4 + 0x68)) = 0x0;
    }
    if ((int)t0 >= (int)0x1) {
        if ((int)t0 <= (int)0x3) {
            t27 = *(signed char *)((a4 + 0x72));
            if (t27 == 0) {
                t28 = *(int *)((a4 + 0x4));
                t29 = ADXSJD_GetStat(t28);
                if (t29 != 3) {
                    t30 = *(int *)((a4 + 0x14));
                    t36 = 0x0;
                    if (t30 != 0) {
                        t31 = *(int *)((a4 + 0x14));
                        t32 = *(int *)((t31 + 0x0));
                        t33 = *(int *)((t32 + 0x24));
                        t34 = ((int (*)(int, int))(t33))(t31, 0x1);
                        t36 = t34;
                    }
                    if ((int)t36 < (int)0x40) {
                        t37 = *(short *)((a4 + 0x6A));
                        *(unsigned short *)((a4 + 0x6A)) = (t37 + 0x1);
                        if (t0 == 3) {
                            t38 = *(int *)((a4 + 0x38));
                            t39 = *(short *)((a4 + 0x6A));
                            if ((int)t39 > (int)((t38 << 2) + t38)) {
                                *(unsigned short *)((a4 + 0x60)) = 0xFFFFFFFF;
                            }
                        } else {
                            t42 = *(int *)((a4 + 0x38));
                            t43 = *(short *)((a4 + 0x6A));
                            if ((int)t43 > (int)(((t42 << 2) + t42) << 2)) {
                                *(unsigned short *)((a4 + 0x60)) = 0xFFFFFFFF;
                            }
                        }
                        t50 = *(short *)((a4 + 0x60));
                        t58 = 0x60;
                        if (t50 != 0) {
                            t51 = *(signed char *)((a4 + 0x6D));
                            if (t51 == 1) {
                                ADXT_Stop();
                            } else {
                                if (t51 == 2) {
                                    adxt_RcvrReplay();
                                }
                            }
                            t56 = *(signed char *)((a4 + 0x6D));
                            t57 = 0x6D;
                            if (t56 != 0) {
                                *(unsigned short *)((a4 + 0x60)) = 0x0;
                                *(unsigned short *)((a4 + 0x6A)) = 0x0;
                                t57 = 0x6A;
                            }
                            t58 = t57;
                        }
                        t60 = t58;
                    } else {
                        *(unsigned short *)((a4 + 0x6A)) = 0x0;
                        t60 = 0x6A;
                    }
                    t61 = t60;
                } else {
                    *(unsigned short *)((a4 + 0x6A)) = 0x0;
                    t61 = 0x6A;
                }
                t62 = t61;
            } else {
                *(unsigned short *)((a4 + 0x6A)) = 0x0;
                t62 = 0x6A;
            }
            t63 = t62;
        } else {
            *(unsigned short *)((a4 + 0x6A)) = 0x0;
            t63 = 0x6A;
        }
        t64 = t63;
    } else {
        *(unsigned short *)((a4 + 0x6A)) = 0x0;
        t64 = 0x6A;
    }
    t65 = *(int *)((a4 + 0x8));
    t76 = t64;
    if (t65 != 0) {
        t66 = *(int *)((a4 + 0x8));
        t67 = FUN_0c168e10(t66);
        t75 = t67;
        if (t67 == 4) {
            t68 = *(signed char *)((a4 + 0x6D));
            if (t68 == 1) {
                ADXT_Stop();
            } else {
                if (t68 == 2) {
                    adxt_RcvrReplay();
                }
            }
            t73 = *(signed char *)((a4 + 0x6D));
            t74 = 0x6D;
            if (t73 != 0) {
                *(unsigned short *)((a4 + 0x60)) = 0x0;
                *(unsigned short *)((a4 + 0x6A)) = 0x0;
                t74 = 0x6A;
            }
            t75 = t74;
        }
        t76 = t75;
    }
    return t76;
}

int menuModeInit(void)
{
    int t11;
    int t15;
    int t16;
    int t25;
    int t17;
    int t18;
    int t21;
    int t20;
    int t23;
    int t26;
    int t32;
    int t27;
    int t29;
    int t28;
    int t30;
    int t33;
    int t35;
    int t34;
    int t36;
    int t24;
    int t31;

    *(unsigned int *)0xC1799E4 = 0xC1799E8;
    nlInitHeapMemory(0xC1799E8, 0x30000);
    nlInitEvent();
    Voice_Clear();
    gdc_StopStreamVoiceAll();
    gdc_StopStreamSongAll();
    Sound_Init();
    gdc_SpriteSetMenu();
    Init_Adv_Sprite();
    Init_Window_Sprite(0x4);
    *(unsigned int *)0xC1EE334 = 0x11;
    FUN_0c074680();
    LightEffect(0x0);
    *(unsigned int *)0xC2A11EC = 0x2;
    *(unsigned int *)0xC2A1ADC = 0x280;
    *(unsigned int *)0xC2A1AD8 = 0x280;
    *(unsigned int *)0xC0EF548 = 0x0;
    *(unsigned int *)0xC0EF54C = 0x0;
    t11 = *(int *)0xC2A1210;
    if (t11 == 0xC09DDE0) {
        SetWindow(0x0);
    }
    menuReadPad(0x0);
    t15 = menuSpriteAttrInit(0xC2A1A84);
    t16 = *(int *)0xC2A11B0;
    t25 = t15;
    if (t16 == 0) {
        t17 = *(int *)0xC2A1228;
        if (t17 == 0) {
            t18 = *(int *)0xC2A122C;
            t21 = 0xC2A122C;
            if (t18 != 0) {
                gdc_PlayStreamSong(0x0);
                t20 = gdc_VolStreamSong(0x7F);
                t21 = t20;
            }
            t24 = t21;
        } else {
            gdc_PlayStreamSong(0x0);
            t23 = gdc_VolStreamSong(0x7F);
            t24 = t23;
        }
        t25 = t24;
    }
    t26 = *(int *)0xC2A1228;
    t32 = t25;
    if (t26 == 0) {
        t27 = *(int *)0xC2A122C;
        if (t27 != 7) {
            t29 = t27;
            if (t27 == 9) {
                t28 = adxStartAfs2(0x0, 0x2A0);
                t29 = t28;
            }
            t31 = t29;
        } else {
            t30 = adxStartAfs2(0x0, 0x2A0);
            t31 = t30;
        }
        t32 = t31;
    }
    t33 = *(int *)0xC2A1214;
    t35 = t32;
    if (t33 == 0) {
        t34 = AnnounceSecretFlag(0x1);
        t35 = t34;
    }
    t36 = *(int *)0xC1EE238;
    *(unsigned int *)0xC1EE238 = (t36 + 0x1);
    return t35;
}


void ndPeriCheck(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t11;
    int t12;
    int t13;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t21;
    int t22;
    int t23;
    int t25;
    int t27;
    int t28;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t45;
    int t46;
    int t47;
    int t48;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t56;
    int t57;
    int t58;
    int t59;
    int t61;
    int t63;
    int t67;
    int t68;
    int stk[19] = {0};

    *(unsigned int *)(((int)stk + 16)) = 0xC131A04;
    *(unsigned int *)(((int)stk + 20)) = 0x28;
    *(unsigned int *)(((int)stk + 24)) = 0xC0D2B4C;
    *(unsigned int *)(((int)stk + 28)) = 0xC131A48;
    *(unsigned int *)(((int)stk + 32)) = 0xC0D2B48;
    *(unsigned int *)(((int)stk + 36)) = 0xC131A44;
    t0 = 0xC131A48;
    t1 = 0xC131A04;
    t2 = 0x0;
    while ((int)t2 < (int)0x4) {
        t3 = *(int *)(((t2 << 2) + 0xC0D2B18));
        ndGetPeripheral();
        t5 = *(int *)0xC2A9C70;
        t0 = t5;
        t6 = *(int *)(((int)stk + 24));
        t7 = *(int *)((t0 + 0x30));
        t8 = *(int *)((t6 + 0x0));
        t0 = t8;
        t9 = *(int *)((t7 + 0x0));
        if ((t9 & t0) != 0) {
            nlLocate(0x5, (t2 + 0x28));
            t11 = *(int *)(((int)stk + 28));
            t12 = *(int *)((t11 + 0x0));
            t0 = t12;
            t13 = *(int *)((0xC131A04 + (t2 << 2)));
            nlPrintf(0xC0D2B5C, t13, t0);
        } else {
            t15 = *(int *)0xC2A9C70;
            t0 = t15;
            t16 = *(int *)(((int)stk + 32));
            t17 = *(int *)((t0 + 0x30));
            t18 = *(int *)((t16 + 0x0));
            t0 = t18;
            t19 = *(int *)((t17 + 0x0));
            if ((t19 & t0) != 0) {
                nlLocate(0x5, (t2 + 0x28));
                t21 = *(int *)(((int)stk + 36));
                t22 = *(int *)((t21 + 0x0));
                t0 = t22;
                t23 = *(int *)((t1 + 0x0));
                nlPrintf(0xC0D2B5C, t23, t0);
            } else {
                t25 = *(int *)(((int)stk + 20));
                nlLocate(0x5, t25);
                t27 = *(int *)(((int)stk + 16));
                t28 = *(int *)((t27 + 0x0));
                t0 = t28;
                nlPrintf(0xC0D2B6C, t0);
            }
        }
        t32 = *(int *)(((int)stk + 16));
        t0 = t32;
        t1 = (t1 + 0x4);
        t2 = (t2 + 0x1);
        t0 = (t0 + 0x4);
        *(unsigned int *)(((int)stk + 16)) = t0;
        t33 = *(int *)(((int)stk + 20));
        *(unsigned int *)(((int)stk + 20)) = (t33 + 0x1);
    }
    *(unsigned int *)(((int)stk + 20)) = 0x2C;
    *(unsigned int *)(((int)stk + 16)) = 0xC131A14;
    *(unsigned int *)(((int)stk + 32)) = 0xC0D2B50;
    *(unsigned int *)(((int)stk + 40)) = 0xC131A4C;
    *(unsigned int *)(((int)stk + 24)) = 0xC0D2B54;
    *(unsigned int *)(((int)stk + 28)) = 0xC131A50;
    t34 = 0xC0D2B50;
    t35 = 0xC131A14;
    t36 = 0x4;
    while ((int)t36 < (int)0xC) {
        *(unsigned int *)(((int)stk + 36)) = (t36 << 2);
        t37 = *(int *)(((t36 << 2) + 0xC0D2B18));
        ndGetPeripheral();
        t39 = *(int *)0xC2A9C70;
        t40 = *(int *)(((int)stk + 32));
        t41 = *(int *)((t39 + 0x30));
        t34 = t41;
        t42 = *(int *)((t40 + 0x0));
        t43 = *(int *)((t34 + 0x0));
        t34 = t43;
        if ((t34 & t42) != 0) {
            nlLocate(0x5, (t36 + 0x28));
            t45 = *(int *)(((int)stk + 40));
            t34 = t45;
            t46 = *(int *)((t34 + 0x0));
            t47 = *(int *)(((int)stk + 36));
            t48 = *(int *)((0xC131A04 + t47));
            t34 = t48;
            nlPrintf(0xC0D2B5C, t34, t46);
        } else {
            t50 = *(int *)0xC2A9C70;
            t51 = *(int *)(((int)stk + 24));
            t52 = *(int *)((t50 + 0x30));
            t34 = t52;
            t53 = *(int *)((t51 + 0x0));
            t54 = *(int *)((t34 + 0x0));
            t34 = t54;
            if ((t34 & t53) != 0) {
                nlLocate(0x5, (t36 + 0x28));
                t56 = *(int *)(((int)stk + 28));
                t34 = t56;
                t57 = *(int *)((t34 + 0x0));
                t58 = *(int *)(((int)stk + 16));
                t59 = *(int *)((t58 + 0x0));
                t34 = t59;
                nlPrintf(0xC0D2B5C, t34, t57);
            } else {
                t61 = *(int *)(((int)stk + 20));
                nlLocate(0x5, t61);
                t63 = *(int *)((t35 + 0x0));
                t34 = t63;
                nlPrintf(0xC0D2B6C, t34);
            }
        }
        t67 = *(int *)(((int)stk + 20));
        t36 = (t36 + 0x1);
        t35 = (t35 + 0x4);
        *(unsigned int *)(((int)stk + 20)) = (t67 + 0x1);
        t68 = *(int *)(((int)stk + 16));
        t34 = t68;
        t34 = (t34 + 0x4);
        *(unsigned int *)(((int)stk + 16)) = t34;
    }
}

int ExecEffectSmoke(int a4)
{
    int t0;
    int t1;
    int t2;
    int t5;
    float u7;
    float u11;
    float u14;
    int t21;
    float u24;
    int t25;
    float u27;
    float u28;

    t0 = *(int *)((a4 + 0x30));
    t1 = *(int *)((a4 + 0x34));
    t2 = *(int *)(((t1 << 2) + 0xC0EDA98));
    *(float *)(((t2 + 0x44) + 0x0)) = ((float)t0 / 30.0f);
    nlPushUnitMatrix();
    nlTranslateV((a4 + 0x14));
    t5 = *(int *)((a4 + 0x38));
    if (t5 == 2) {
        SetFadeColorBaseMulti(0.799999952f, 0.599999964f, 0.299999982f);
        u7 = *(float *)((a4 + 0x2C));
        Put2DObjUp(t2, u7, (u7 * 0.699999988f));
        ResetFadeColor();
    } else {
        if (t5 == 1) {
            nlObjPutSetFadeColorBase(0.799999952f, 0.799999952f, 1.0f);
            u11 = *(float *)((a4 + 0x2C));
            Put2DObjUp(t2, u11, (u11 * 0.699999988f));
            ResetFadeColor();
        } else {
            u14 = *(float *)((a4 + 0x2C));
            Put2DObjUp(t2, u14, (u14 * 0.599999964f));
        }
    }
    nlPopMatrix(0x1);
    t21 = *(int *)((a4 + 0x30));
    *(unsigned int *)((a4 + 0x30)) = (t21 - 1);
    if ((int)(t21 - 1) <= 0) {
        return nlCloseEvent(a4);
    }
    nlAddVector((a4 + 0x14), (a4 + 0x20));
    nlScaleVector((a4 + 0x20), (a4 + 0x20), 0.949999988f);
    u24 = *(float *)((a4 + 0x18));
    *(float *)((a4 + 0x18)) = (u24 + 0.049999997f);
    t25 = *(int *)((a4 + 0x38));
    u27 = 0.0899999961f;
    if (t25 == 0) {
        u27 = 0.0799999982f;
    }
    u28 = *(float *)((a4 + 0x2C));
    *(float *)((a4 + 0x2C)) = (u28 + u27);
    return 0x2C;
}

int FUN_0c17195a(int a4)
{
    int t1;
    int t3;
    int t4;
    int t5;
    int t7;
    int t8;
    int t10;
    int t12;
    int t13;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t21;
    int t22;
    int t24;
    int t25;
    int t26;
    int t27;
    int t30;
    int t31;
    int t32;
    int t34;
    int t35;
    int t36;
    int t37;
    int t40;
    int stk[12] = {0};

    if ((int)a4 >= (int)0x1) {
        if ((int)a4 > (int)0x2) {
            mwRnaErrCallFunc(0xC176AAC);
        } else {
            t1 = mwlSbAlloc();
            if (t1 == 0) {
                mwRnaErrCallFunc(0xC176ADC);
            } else {
                *(unsigned int *)((t1 + 0x0)) = 0xC178744;
                t3 = 0x0;
                for (;;) {
                    if ((int)t3 >= (int)a4) {
                        t3 = 0x0;
                        for (;;) {
                            if ((int)t3 >= (int)a4) {
                                t4 = FUN_0c07fc40(a4);
                                *(unsigned short *)((t1 + 0x6)) = t4;
                                t5 = *(short *)((t1 + 0x6));
                                if ((int)t5 >= 0) {
                                    if ((int)t5 > (int)0x7) {
                                        mwRnaErrCallFunc(0xC176B78);
                                        return 0x0;
                                    }
                                    t7 = *(short *)((t1 + 0x6));
                                    t8 = FUN_0c1718c4(t7);
                                    *(unsigned int *)((t1 + 0x1C)) = t8;
                                    if (t8 == 0) {
                                        mwRnaErrCallFunc(0xC176BB4);
                                        t10 = *(short *)((t1 + 0x6));
                                        FUN_0c07fd00(t10);
                                        return 0x0;
                                    }
                                    t12 = *(int *)((t1 + 0x1C));
                                    t13 = *(int *)((t12 + 0x4));
                                    nlsndStreamGenerateHdInfo(t13);
                                    *(unsigned char *)((t1 + 0x60)) = 0x0;
                                    *(unsigned char *)((t1 + 0x5)) = 0x0;
                                    *(unsigned int *)((t1 + 0x18)) = 0x0;
                                    *(unsigned int *)((t1 + 0xC)) = a4;
                                    *(unsigned int *)((t1 + 0x8)) = a4;
                                    t15 = *(short *)((t1 + 0x6));
                                    t16 = FUN_0c07fb70(t15);
                                    *(unsigned int *)((t1 + 0x20)) = t16;
                                    t17 = *(short *)((t1 + 0x6));
                                    t18 = FUN_0c07fb70(t17);
                                    *(unsigned int *)((t1 + 0x24)) = t18;
                                    t19 = *(int *)(((int)stk + 12));
                                    *(unsigned int *)((t1 + 0x28)) = t19;
                                    *(unsigned int *)((t1 + 0x48)) = 0xFFFFFFFF;
                                    *(unsigned int *)((t1 + 0x4C)) = 0x0;
                                    *(unsigned int *)((t1 + 0x50)) = 0x0;
                                    *(unsigned int *)((t1 + 0x54)) = 0x0;
                                    *(unsigned short *)((t1 + 0x58)) = 0x0;
                                    *(unsigned short *)((t1 + 0x5A)) = 0x0;
                                    *(unsigned char *)((t1 + 0x61)) = 0xFFFFFFFF;
                                    *(unsigned short *)((t1 + 0x62)) = 0xFFFFFFFF;
                                    *(unsigned char *)((t1 + 0x4)) = 0x1;
                                    return t1;
                                }
                                mwRnaErrCallFunc(0xC176B78);
                                return 0x0;
                            }
                            t21 = nlsndG2DmaHandleOpen();
                            if (t21 == 0) break;
                            t22 = ((t3 << 2) + (t1 + 0x34));
                            t3 = (t3 + 0x1);
                            *(unsigned int *)((t22 + 0x0)) = t21;
                        }
                        mwRnaErrCallFunc(0xC176B10);
                        *(unsigned int *)(((int)stk + 8)) = 0x0;
                        if ((int)t3 > 0) {
                            t24 = (t1 + 0x2C);
                            t25 = (t1 + 0x34);
                            do {
                                t26 = *(int *)((t25 + 0x0));
                                t27 = nlsndG2DmaHandleClose(t26);
                                if ((int)t27 < 0) {
                                    mwRnaErrCallFunc(0xC176B44);
                                }
                                *(unsigned int *)((t24 + 0x0)) = 0x0;
                                t24 = (t24 + 0x4);
                                t30 = *(int *)(((int)stk + 8));
                                *(unsigned int *)(((int)stk + 8)) = (t30 + 0x1);
                                t25 = (t25 + 0x4);
                            } while ((int)(t30 + 0x1) < (int)t3);
                            return 0x0;
                        }
                        return 0x0;
                    }
                    t31 = nlsndG2DmaHandleOpen();
                    if (t31 == 0) break;
                    t32 = ((t3 << 2) + (t1 + 0x2C));
                    t3 = (t3 + 0x1);
                    *(unsigned int *)((t32 + 0x0)) = t31;
                }
                mwRnaErrCallFunc(0xC176B10);
                *(unsigned int *)(((int)stk + 8)) = 0x0;
                if ((int)t3 > 0) {
                    t34 = (t1 + 0x2C);
                    t35 = (t1 + 0x2C);
                    do {
                        t36 = *(int *)((t34 + 0x0));
                        t37 = nlsndG2DmaHandleClose(t36);
                        if ((int)t37 < 0) {
                            mwRnaErrCallFunc(0xC176B44);
                        }
                        *(unsigned int *)((t35 + 0x0)) = 0x0;
                        t35 = (t35 + 0x4);
                        t40 = *(int *)(((int)stk + 8));
                        *(unsigned int *)(((int)stk + 8)) = (t40 + 0x1);
                        t34 = (t34 + 0x4);
                    } while ((int)(t40 + 0x1) < (int)t3);
                }
            }
        }
    } else {
        mwRnaErrCallFunc(0xC176AAC);
    }
    return 0x0;
}

int ExecEndRoll(void)
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
    float u13;
    int t14;
    int t15;
    int t16;
    int t18;
    int t27;
    int t28;
    int t36;
    int t37;
    int t45;
    int t47;
    int t48;
    int t49;
    int t50;

    t0 = *(int *)0xC1EE33C;
    *(unsigned int *)0xC2864E0 = t0;
    t1 = 0xC03A4F4;
    t2 = 0x0;
    while ((unsigned int)t2 < (unsigned int)0x87) {
        t3 = *(int *)0xC2864E0;
        if ((int)((((((t2 << 1) + t2) << 2) << 1) - t3) + 0x28A) > (int)0xFFFFFFE8) {
            t1 = 0x1E0;
            if ((int)((((((t2 << 1) + t2) << 2) << 1) - t3) + 0x28A) < (int)t1) {
                t4 = pfLocate(330.0f, (float)((((((t2 << 1) + t2) << 2) << 1) - t3) + 0x28A));
                t1 = t4;
                t1 = t2;
                t1 = (t1 << 2);
                t5 = *(int *)((0xC0EEA20 + t1));
                t1 = t5;
                t6 = *(signed char *)((t1 + 0x0));
                t1 = t6;
                t7 = 0xFFFFFF00;
                t8 = 0xFFFFFF00;
                t9 = 0xFFFFFF00;
                t10 = 0xFFFFFF00;
                if (t1 == 32) {
                    t7 = 0xFFFFFFFF;
                    t8 = 0xFFFFFFFF;
                    t9 = 0xFFFFFFFF;
                    t10 = 0xFFFFFFFF;
                }
                t11 = pfColor(t7, t8, t9, t10);
                t1 = t11;
                t1 = t2;
                if (t1 == 53) {
                    t12 = pfSize(0.789999962f, 1.0f);
                    t1 = t12;
                } else {
                    u13 = 1.0f;
                    if (t2 == 0x85) {
                        u13 = 0.939999998f;
                    }
                    t14 = pfSize(u13, 1.0f);
                    t1 = t14;
                }
                t1 = t2;
                t1 = (t1 << 2);
                t15 = *(int *)((0xC0EEA20 + t1));
                t16 = pfPuts(t15);
                t1 = t16;
            }
        }
        t2 = (t2 + 0x1);
    }
    t18 = *(int *)0xC2864E0;
    if ((int)(0xF2A - t18) <= (int)0xFFFFFFC0) {
        if ((int)(0xF2A - t18) < (int)0x1E0) {
            pfLocate(330.0f, (float)(0xF2A - t18));
            pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
            pfPutSEGALogo();
        }
    } else {
        pfLocate(330.0f, (float)(0xF2A - t18));
        pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
        pfPutSEGALogo();
    }
    t27 = *(int *)0xC2864E0;
    if ((int)t27 >= (int)0xD8E) {
        t28 = *(int *)0xC2864E4;
        if (t28 == 2) {
            Voice_ShutUp(0x0);
            Voice_Request(0xC0EEC40, 0x0, 0x7F, 0x0);
            *(unsigned int *)0xC2864E4 = 0x1;
        }
    }
    t36 = *(int *)0xC2864E0;
    if ((int)t36 >= (int)0xE10) {
        t37 = *(int *)0xC2864E4;
        if (t37 != 0) {
            gdc_FadeStopStreamSong(0x0, 0x104);
            *(unsigned int *)0xC2864E4 = 0x0;
        }
    }
    t45 = *(int *)0xC1EE250;
    if ((t45 & 8) != 0) {
        *(unsigned int *)0xC2864E0 = 0x2710;
    }
    t47 = *(int *)0xC2864E0;
    if ((int)t47 >= (int)0xFB4) {
        *(unsigned int *)0xC2A4E50 = 0x0;
        t48 = GetMenuMode(0x1);
        if (t48 == 0) {
            t49 = *(int *)0xC1EE340;
            if ((int)t49 <= (int)0x14) {
                t50 = *(int *)0xC17948C;
                if (t50 == 0) {
                    *(unsigned int *)0xC1EE238 = 0xE;
                } else {
                    *(unsigned int *)0xC1EE238 = 0x2;
                }
            } else {
                *(unsigned int *)0xC1EE238 = 0x2;
            }
        } else {
            *(unsigned int *)0xC1EE238 = 0x2;
        }
    }
    return gdc_FadeManStreamSong();
}

int windowNameErase(void)
{
    float u1;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t14;
    int t16;

    windowOpenStep();
    u1 = *(float *)0xC03EF3C;
    PutVM_Message(0x20, 0x1A, 0xC2A1248, u1, u1);
    t3 = *(int *)0xC2A1208;
    if ((t3 & 4) != 0) {
        t4 = *(int *)0xC2A1208;
        *(unsigned int *)0xC2A1208 = (t4 | 0x8);
        t5 = *(int *)0xC2A11C4;
        t6 = 0xC2A11C4;
        t7 = 0xC2A11F4;
        t8 = t5;
        for (;;) {
            t9 = *(signed char *)0xC28A4F6;
            t8 = (t8 + 0x1);
            if ((int)t8 >= (int)(unsigned char)t9) break;
            t6 = 0x788;
            t7 = 0xC28A4E8;
            t7 = (t7 + 0x10);
            t6 = 0xC081268;
            t14 = ((int (*)(int))(t6))(t7);
        }
        saveBufferInit(((short)((short)(t8 - 1) * (short)0x788) + 0xC28A4F8));
        t16 = *(signed char *)0xC28A4F6;
        *(unsigned char *)0xC28A4F6 = (t16 - 1);
    }
    NextWindow(0x0);
    return windowEnterStep();
}

