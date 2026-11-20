/* Straight-line functions with calls and guards (batch gen_bh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXB_ExecOneAdx(int);
int ADXB_ExecOneAiff(int);
int ADXB_ExecOneAu(int);
int ADXB_ExecOneSpsd(int);
int ADXB_ExecOneWav(int);
int ADXF_Close(int);
int ADXF_GetStat(int);
int ADXF_LoadPartition(int, int, int, int);
int CheckClipping(float);
int gdc_LandmarkReq(int);
int ResetPinFlag(void);
int ResetBreakBeachFlag(void);
int menuChangeValue(int, int, int);
int putMenuValue(int, int, int, int);
int pedGetSubwayFlag(void);
int pedCarNotInSubway(void);
int nd_StartWait_PutDriver(void);
int End_Pass_Judgement(void);
int Put_Remain_Time_Gauge(int, int);
int Put_Remain_Time_Frame(void);
int Put_Remain_Time_Add(void);
int hudJudgementWobble(void);
int Money_Array(int, int, int);
int nd_SprPut(int, int, float, float);
int End_Ranking(void);
int Put_Ranking_Header(void);
int Reset_Ranking_Wave(void);
int Check_Digit_Disp(int, int);
int Init_DCmini_Standard_Sprite(void);
int Init_Window_Sprite(int);
int Init_DCmini_CarPos(void);
int Start_JumpDistance(int);
int Reset_JumpDistance(void);
int Start_Excellent(void);
int Start_Fault(int);
int Check_Bowling_Pins(void);
int Put_Bowling_Message(void);
int Put_Bowling_Pins(void);
int Init_Balloon(void);
int Proposal_Initialize(void);
int psgUpdatePartTracks(int);
int psgPutMarker(int, int);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlMatrixMode(int);
float nlScalor2(int);
int adxf_purge_all(void);
int GetAverageAngle(int, int, float);
int InitArrow(int);
int MakeKyakuTakeArea(int, int, int, float);
int Psg_SetPosPtr(int, int);
int Put_Max_Combo(void);
int ResetFadeColor(void);
int Sound_Request(int, int);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
extern int _builtin_tas(char *);
int frame_make(void);
int gdFsCreateHnG(int);
int gdFsSetGlobalErrG(int);
int humanDraw(int, int, int, int);
int kdSetGunCallback(void);
int menuCursor(int, int, int);
int menuEnterStep(void);
int menuOpenStep(void);
int menuPutFrame(void);
int menuPutHelpBar(int, float, float);
int menuPutSprites(int, int, int, int);
int mpdrv_dpf(int, ...);
int mpdrv_v2p(int);
int mwRnaErrCallFunc(int, ...);
int mwRnaSetOutPan(int, int);
int ndPuru2Start(int, int, int);
int nd_CarSel_PutCar(int, int, int, int);
int nlAddVector(int, int);
int nlArcTan2(float, float);
int nlGetAverageVector(int, int, int, float, float);
int nlGetPushedMatrix(int);
float nlInnerProduct(int, int);
float nlLength(int, int);
int nlLoadMatrix(int);
int nlObjPutSetFadeColor(float, float, float);
int nlPerspective(int, float, float, float);
int nlPopMatrix(int);
int nlProjectScreen3D(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
int nlScaleVector(int, int, float);
int nlSetCommonTextureOffset(int);
int nlSprPut(int);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nlTranslateV(int);
int nlUnitMatrix(void);
float nlUnitVector(int);
int padPortAConnected(void);
int pedDodgeCheck(int, float, float);
int pedDraw(int, float, float);
int pedPickIdle(int);
int pedStand(int);
int pfColor(int, int, int, int);
int pfSetFont(int);
int pfSize(float, float);
int psgPlayBlend(int, int);
int psgPutShadow(int);
int psgSetState(int, int, int, int);
int putLevelCTFontAssist(int, int, int, int);
int putString(int, int, float, float, float);
int syCfgGetLanguage(int);
int syCfgGetSoundMode(int);
int texLoadIndexed(int);
int vibIsReady(void);
int ndPuru2Stop(void);
int vmsfs_fwrite1(int, int);
int vmsfs_xwrite1(int, int);
int pdGunSetCallback(void);
int camGetOffScript(void);
int gdFsOpenRangeG(int a4, int a5);
int Put_GearBox(void);
int mwRnaSetNumChan(int a4, int a5);
int nlCommonTextureConvertUVnum(int a4);
int ADXB_ExecHndl(int a4);
int gdc_SetStreamAFS(void);
int sysCfgRead(void);
int nd_StartWait_PutCar(void);
int vmsfs_fwrite(int a4, int a5, int a6);
int adxf_purge_all_tail_0c1697c2(int a4);
int psgRoadCheck(int a4);
int gdc_LandmarkLoadExec(void);
int PutStringFixPfont(int a4, int a5, float f4, float f5, float f6, float f7);
int menuItemVibration(int a4);
int menuRuleHandler(void);
int Exec_DCmini_Game4(void);
int Exec_Bowling_Pins(void);
int gdc_Err(void);
int menuItemController(int a4);
int hudDrawJudgement(void);
int nlsndInit(int a4, int a5);
int Exec_Crazy_Jump(void);
int mpdrv_frame_send(void);
int pedUpdate(int a4);
int carRumble(int a4);
int hudDrawFareFrame(void);
int psgFrameState6(int a4);
int Put_Remain_Time(void);
int Init_DCmini(void);
int Put_JumpDistance(void);
int Put_Ranking(void);
struct oA8_short { char p[0xA8]; short v; };


int nlCommonTextureConvertUVnum(int a4)
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


