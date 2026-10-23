/* Straight-line functions with calls and guards (batch gen_ck): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nd_SprPut(int, int, float, float);
int nlCalcVector(int, int);
int nlRotateRX(void);
int nlObjPutMvClosedVolumeUseViewMatrix(void);
int PutStringFixPfont(int, int, float, float, float, float);
int ResetFadeColor(void);
int SetFadeColorBaseMulti(float, float, float);
int Sound_Request(int, int);
extern float _builtin_fipr(float *, float *);
extern float _builtin_sqrtf(float);
int courseStatusGet(int, int, int, int);
int extRand(void);
int getNearLineIndex(int, int, int, int);
int getSteering(int);
static float iaFsrra(float x)
{
    return _builtin_fsrra(x);
}
int nlAddVector(int, int);
int nlFastSinCos(int, int, int);
int nlLocate(int, int);
int nlMultiMatrix(int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
float nlScalor(int);
int nlSprPut(int);
int nlSubVector(int, int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
float pfLength(int);
int pfSetFont(int);
int putString(int, int, float, float, float);
float nlUnitVectorsd(int a4, int a5);
float fcvHermite(int a4, int a5, float f4);
float carCalcInertia(int a4);
float BigOneKeyValue(int a4, int a5, float f4);
int sklRotate(int a4);
int PutNameEntryDrum(int a4, float f4);
void goiToolCamera(int a4);
int Put_Window_SpriteXandY(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7);
int putRecordUnit(int a4, int a5, int a6, int a7, int a8, float f4, float f5);
int putCarModel(int a4, int a5);
int trainCarDrive(int a4, int a5, int a6, int a7);











