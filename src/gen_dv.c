/* Straight-line functions with calls and guards (batch gen_dv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckClipping(float);
int DispVector(int, int, int, float);
int Drv_StartAction(int, int, int);
int SetScreen(int);
int NextWindow(int);
int SetWindow(int);
int menuChangeValue(int, int, int);
int windowOpenStep(void);
int windowEnterStep(void);
int putMenuValue(int, int, int, int);
extern int PutRecords();
int windowClose(void);
int callSaveData(int);
int callWarnning(int);
int GetNowLanguage(int);
int SetTotalRecords(void);
int HomingPosX(int, float, float);
int nd_SprPut(int, int, float, float);
int Put_Window_SpriteXtoY(int, int, int, int, int, float, float, float, float);
int Start_LoadSave(int, int);
int End_LoadSave(int);
int Chat_Getoff(void);
int Drv_StartBikePedal(int);
int Drv_SetMotion(int, float);
float Drv_DriveFrame(void);
float Drv_ReverseFrame(void);
float Drv_BikePedalStep(void);
int Drv_ExecBlend(void);
int rinRand(void);
int breathSteer(int, int);
int breathMove(int, int);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlRotateAxe(int, int);
int nlAddVector3op(int, int, int);
int nlsndSeqRequest(void);
float nlFastSin(int);
float nlFastCos(int);
int gdFsGet1DirEnt(int, int);
int FcvStoreBuffer(int, int, float);
int GetMenuMode(int);
int LoadBackupData(int);
int PcarEvInit(int);
int Psg_SetMoveSpeed(int, float);
int Put2DObjUp(int, float, float);
int PutStringFixPfont(int, int, float, float, float, float);
int PutVM_Message(int, int, int, float, float);
int ResetFadeColor(void);
int SetCameraMode(int);
int Sound_Request(int, int);
int TrailerInit(int, int);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int buIsExistFile(int, int);
int calcCheckExec(int, int);
int camRestore(void);
int camSetEye(int, int);
int camSetTarget(int, int);
int courseStatusEntry(int, int);
int extRand(void);
int gdFsReadWG(int, int, int);
int hudHidePickUpNag(void);
int menuCursor(int, int, int);
int menuPutSprites(int, int, int, int);
int nlAddVector(int, int);
int nlCloseEvent(int);
int nlGetAverageVector(int, int, int, float, float);
int nlLocate(int, int);
int nlObjPut(int);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutSetFadeColorBase(float, float, float);
int nlObjPutSetGlobalAmbience(float);
int nlObjPutSetLightDirectionV(int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
float nlRandom(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScaleUnitVector(int, int, float);
int nlScaleVector(int, int, float);
int nlSetTranslate(int);
int nlSprPut(int);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int psgPickExitSide(int);
int putLevelCTFontAssist(int, int, int, int);
int putString(int, int, float, float, float);
int set_event(int, int);
int vibIsReady(void);
int Drv_StartBikeReverse(void);
int Drv_StartChoin(void);
int breathExecOne(int a4, int a5);
int LetsMakeAquarium(void);
int windowNameDelete(void);
int windowPause(void);
int ExecScreen(void);
int Drv_ExecDrive(void);
int Put_Stop_and_Brake(int a4, int a5);
int Drv_ExecReverse(void);
int InitRenderTexture2nd(int a4);
int ExecEffectSpray(int a4);
float calcCurvePoint(int a4, int a5, int a6, int a7, int a8, float f4);
int Drv_ExecBikeReverse(void);
float general_spline_point(int a4, int a5, int a6, int a7, int a8, float f4);
int menuItemBoxRecord(int a4, int a5);
int windowCardError(void);
int gdFsGetDirEnt(int a4, int a5, int a6, int a7);
int PutWindow(int a4, float f4, float f5);
int windowCardDriveError(void);
int TrainCarInit(int a4, int a5, int a6);
int drvPredictPath(void);
int menuItemName(int a4);
int menuItemDifficulty(int a4, int a5);
int Drv_ExecBikePedal(void);
int PcarInit(int a4, int a5, int a6);
int ExecBubble(int a4);
int GS_GuestIn(int a4);
int windowLoadData(void);
int CarSel_ChangeCar(void);
int goiToolLight(int a4);
int Put_Here_We_Go(int a4);
int windowGotBike(void);
int camGetOffShot1(void);
int psgEnterState4(int a4, int a5);



































