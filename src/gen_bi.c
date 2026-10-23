/* Straight-line functions with calls and guards (batch gen_bi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int carSpreadWheelLoad(float, float, float);
int Drv_CallActionStart(int, int);
int Drv_SetMotion(int, float);
int rinRand(void);
int psgStepBlend(int);
int psgUpdatePartTracks(int);
int nlCalcPoint(int, int);
int FcvPlayBuffer(int, int);
int FcvStoreBuffer(int, int, float);
int GetAverageAngle(int, int, float);
int GetCollision2D(int, float);
int InitHomingVector(int, int);
int PcarEvInit(int);
int carBalance(int);
int Sound_Request(int, int);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int calcCheckExec(int, int);
int camSnapToCar(int);
int extRand(void);
int ndPuru2Start(int, int, int);
int nlAddVector(int, int);
int nlArcTan2(float, float);
int nlCloseEvent(int);
int nlGetAverageVector(int, int, int, float, float);
int nlGetMatrix(int);
int nlInvertMatrix(int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int psgEnterState2(int);
int psgPutShadow(int);
float psgRunToPoint(int);
int set_event(int, int);
int Chat_HeyTaxi(int a4);
int Drv_StartAction(int a4, int a5, int a6);
int Chat_DamnIt(int a4);
int Chat_DontPass(int a4);
int Chat_Choin(int a4, int a5);
void initCamera(int a4);
int nlTriPutSetAttrib(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int StopingCarInit(int a4, int a5, int a6);
int psgFrameState2(int a4);
int Drv_StartGetOff(void);

int Chat_HeyTaxi(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(signed char *)0xC2AD1DF;
    if ((t0 & 2) == 0) {
        t1 = *(int *)(((a4 + 0x148) + 0x0));
        t2 = (int)(((unsigned int)t1 >> 29) & 0x7);
        t3 = *(int *)(((t2 << 2) + 0xC13ED50));
        return Sound_Request(t3, 0x1);
    }
    return t0;
}








