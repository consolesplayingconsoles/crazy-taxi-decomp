/* Straight-line functions with calls and guards (batch gen_cn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Chat_Direction(void);
int Chat_TellDestination(void);
int Drv_StartAction(int, int, int);
int carSpreadWheelLoad(float, float, float);
int SetLandmark(int);
int ExecRenderTexture1st(void);
int ExecRenderTexture2nd(void);
int ExecEndRoll(void);
int SetScreen(int);
extern int SetWindow();
int windowOpenStep(void);
int windowEnterStep(void);
int windowClose(void);
int callBoxAdvice(void);
int callWarnning(int);
int CheckBoxFlag(int);
int GetNowLanguage(int);
int Start_Pass_Default_Sprite(int);
int PTime_Pos_Set(float, float);
int PTime_Scale_Set(float, float);
int PTime_Color_Set(float, float, float);
int Init_Window_Sprite(int);
int Start_PoleMarriageKiss(void);
int Start_LoadSave(int, int);
int End_LoadSave(int);
int Chat_Iraira(void);
int psgFreeIpBuff(int);
int psgStepBlend(int);
int psgUpdatePartTracks(int);
void nlInitLibrary0(int, int, int);
int nlCalcPoint4(int, int);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlMultiPushedMatrix(void);
int nlMultiViewMatrix(void);
int nlFastScreenPoint(int, int);
int nlMakeFastModelProjectMatrixVM(void);
int nlMultiLineTrnsl(void);
int nlLineSendHeader(int);
int nlLineCalcColor(int, int);
int nlLineClipNear(int, int);
int nlLineDrawThick(int, int, int, int);
int mwRnaLockCs(int);
int FcvPlay(int, int, float);
int FcvPlayBuffer(int, int);
int FcvStoreBuffer(int, int, float);
int GetCollisionFirst(int, int);
int replayChangeControl(int);
int IsBoyFriend(int, int);
int Psg_SetPosPtr(int, int);
int PutVM_Message(int, int, int, float, float);
int PutWindow(int, float, float);
int SaveBackupData(int);
int SetEffect(int, int, int);
int Sound_Request(int, int);
int Start_Proposal(int, int);
int Voice_Request(int, int, int, int);
extern void _builtin_ftrv(float *, float *);
extern float _builtin_sqrtf(float);
int buAnalyzeBackupFileImage(int, int);
int buIsExistFile(int, int);
int courseStatusGet(int, int, int, int);
int exec_loop_Replay(void);
int extRand(void);
extern int getNearLineIndex();
int kdGetDevice(int);
int kdGetStatus(void);
int kdIsChanged(void);
int kdSetBlockWrite(void);
int kdSetGetLastError(void);
int menuCursorBox(int, int, int);
int menuEnterStep(void);
int menuOpenStep(void);
int menuPutFrame(void);
int menuPutHelpBar(int, float, float);
int menuPutSprites(int, int, int, int);
int mwRnaErrCallFunc(int, ...);
int mwRnaSetBitPerSmpl(int, int);
int mwRnaSetNumChan(int, int);
int mwRnaSetSfreq(int, int);
int mwRnaUnlockCs(int);
int mwlRnaAlloc(void);
int mwlRnaSetInitMember(int);
int nlAddVector(int, int);
int nlArcTan2(float, float);
int nlGetAverageVector(int, int, int, float, float);
int nlGetTranslate(int);
float nlInnerProduct(int, int);
int nlLineBlendFunc(int, int);
int nlLineSetDiv(float);
int nlLineSetThickness(float);
int nlLocate(int, int);
int nlMultiMatrix8(int);
int nlPopMatrix(int);
extern int nlPrintf();
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScaleUnitVector(int, int, float);
int nlScaleVector(int, int, float);
float nlScalor(int);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nlTranslateV(int);
int nlUnitVector(int);
int psgEnterState4(int);
int psgPutShadow(int);
float psgRunToPoint(int);
int psgSeatMatrix(int);
int putLevelCTFontAssist(int, int, int, int, int);
int putString(int, int, float, float, float);
int vmsfb_sleep(void);
int vmsio_ismount(int);
void nlTranslate(float f4, float f5, float f6);
void nlInitLibraryDC(int, int, int);
void kmiDACControl(void);
int Level_Calc(int a4);
int DispBackupHeadInfo(int a4, int a5, int a6);
int mwRnaCreate(int a4, int a5);
int nlMultiLineSub(int a4, int a5);
int colliSphereSphere(int a4, int a5);
int vmsio_block_write(int a4, int a5, int a6);
void carResistance(int a4);
void ExecSpark(void);
int pcarLaneChange(int a4);
int gameState13(void);
int windowSaveData(void);
int psgTimeDispExec(void);
int menuCrazyBoxHandler(void);
int psgFrameState4(int a4);
void psgEnterState3(int a4, int a5);


/* manual: nlInitLibraryDC is a trampoline: `bra nlInitLibrary0` with r4 (the mode), r5 (the display flags) and r6 passed
   through untouched and r7 = 0. The generated form was void and called nlInitLibrary0() with nothing, so its callers dropped
   the flags too: nlInitLibrary0 then read a leftover r5, kmSetDisplayMode refused the frame-buffer mode it indexed, and the
   console never got its display registers (black screen after the licence screen on hardware; Flycast drew anyway). */

void kmiDACControl(void)
{
    
}


