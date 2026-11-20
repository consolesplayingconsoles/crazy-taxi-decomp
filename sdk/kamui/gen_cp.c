/* Straight-line functions with calls and guards (batch gen_cp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CableControlInit(int);
int GetRotVec4Ang(int, int, int);
int NextWindow(int);
int windowOpenStep(void);
int windowEnterStep(void);
int GetNowLanguage(int);
int convergeRot(int, int, float);
int getNearLinkedLine(int, int, int, int);
int nd_SprPut(int, int, float, float);
int Init_Window_Sprite(int);
int Start_Excellent(void);
int Start_Fault(int);
int Exec_Remain_Arrow(void);
int Put_Remain_Icon(void);
int fcvTranslateCurve(void);
int fcvRotateCurve(void);
int fcvSolveIK(int, int, int, int, int);
float BigOneKeyValue(int, int, float);
int BigOneRotate(int, int, int);
int BigOneHomeAngle(int, int, float);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlMultiViewMatrix(void);
int nlQuickInvertMatrix(void);
int nlTranslateNV(int);
int nlAddVector3op(int, int, int);
int nlLineSendQuadA(int, int, int, int, float, float);
int nlLineSendQuadB(int, int, int, int, float, float);
int nlLineSendQuadC(int, int, int, int, float, float);
int nlLineSendQuadD(int, int, int, int, float, float);
int nlLineSendQuadE(int, int, int, float);
int nlMvClipEdge(int, int, int);
int nlMvPutFaceClip(int, int, int, int, int, int, int, int, int, int, int, int);
int nlMvGetFaceVerts(int, int, int, int);
int kmiUpdateRenderStatus(void);
int kmiStartNextDMA(void);
int kmiStartNextRender(void);
int GetAverageAngle(int, int, float);
int GetCollision2D(int, float);
int KillColliObj(int);
int PutWindow(int, float, float);
int MultiRot4Vec(int);
int Sound_Request(int, int);
extern float _builtin_sqrtf(float);
int carColliReflection(void);
int carEntry(int);
int carResistance(void);
int colliBoxAhead(int, int, int);
int extRand(void);
int getYXZrot(int);
extern int kmiCreateRegionArray();
int kmiDMAHazardReset(void);
int menuPutSprites(int, int, int, int);
int nlAddVector(int, int);
int nlArcTan2(float, float);
int nlCloseEvent(int);
float nlFloor(float);
int nlGetAverageVector(int, int, int, float, float);
int nlGetPushedMatrix(int);
int nlGetTranslate(int);
float nlInnerProduct(int, int);
float nlLength(int, int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRand(void);
float nlRandom(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlRotateV(int, int);
int nlScaleUnitVector(int, int, float);
int nlScaleVector(int, int, float);
float nlScalor(int);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int nlUnitVector(int);
extern int pcarSpawn();
int putString(int, int, float, float, float);
int setTechnicalBonus(int, int, int);
int signalInit(int, int);
int technicalCheck(int);
int trainControlInit(void);
int vsklRotate(int);
void nlUnitRotation(void);
int kmiCopyTextureToTexture(void);
float carGripCurve(float f4);
int windowBoxAdvice(void);
int Exec_DCmini_Game7(void);
int nlMvPutPolygon(int a4, int a5, int a6, int a7);
int breathSteer(int a4, int a5);
int SetSpark(int a4, int a5, int a6);
int nlLineDrawThick(int a4, int a5, int a6, int a7);
int colliBoxSphere(int a4, int a5);
int Put_Window_SpriteXtoY(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7);
int kmiEndOfRenderISR(void);
int trailerExec(int a4);
int BigOneSwimMove(void);
int trafficSectionControl(int a4, int a5, int a6, float f4);
int humanDraw(int a4, int a5, int a6, int a7);
int FcvPlay(int a4, int a5, float f4);
struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o18_int { char p[0x18]; int v; };
struct o4_int { char p[0x4]; int v; };
struct oC_int { char p[0xC]; int v; };



int kmiCopyTextureToTexture(void)
{
    return 0x1;
}



















