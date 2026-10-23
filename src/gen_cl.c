/* Straight-line functions with calls and guards (batch gen_cl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int psgUpdatePartTracks(int);
int nlCalcVector(int, int);
int FcvPlayBuffer(int, int);
int Psg_ChoinIt(int);
int Put_Combo_Entry(int, int);
int ResetFadeColor(void);
int Sound_Request(int, int);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
extern float _builtin_fipr(float *, float *);
extern float _builtin_sqrtf(float);
static float iaFsrra(float x)
{
    return _builtin_fsrra(x);
}
int nlArcTan2(float, float);
int nlGetMatrix(int);
float nlInnerProduct(int, int);
int nlMultiMatrix(int);
int nlObjPutSetFadeColor(float, float, float);
float nlRandom(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlSprPut(int);
int nlTranslateV(int);
int nlUnitMatrix(void);
int set_event(int, int);
float nlUnitVector(int a4);
float nlSinfReduce(int a4, float f4);
float fcvHermiteAngle(int a4, int a5, float f4);
int CheckColliWallEdge(int a4, int a5);
int GetAng4Mat(int a4);
int Put_TimeUp(void);
float CheckColliPoleEdge(int a4, int a5, int a6, float f4);
int nlPerspectiveProj(int a4, int a5, int a6);
int setTechnicalBonus(int a4, int a5);
int Put_TotalDrum_Money(void);
int psgJolt(int a4, int a5, float f4);











