/* Straight-line functions with calls and guards (batch gen_fy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CalcHomingVector(int);
int SetCameraAngleRatio(float, float);
int SetCameraDistance(float);
int HomingAngle1(int, int, float);
int CalcHomingAngle(int);
int KyaCamera(void);
int SetNewClippingAngle(float);
int nlSqrt(int, int);
int FUN_0c077210(int, int);
int FUN_0c077890(int, int, int);
int FUN_0c077df0(int);
int FUN_0c078ff0(void);
int FUN_0c0792b0(int, float, float, float);
float FUN_0c089de0(int);
float FUN_0c089de8(int);
int GetAng4Mat(int);
int GetCollision(int, int, float, float);
int ResetSpark(void);
int SetCameraMode(int);
int SetCameraPosRatio(float, float);
int MultiRot4Vec(int);
int SetCameraTargetRatio(float, float);
int camSetAngles(int, int, int, int);
int camSetEye(int, int);
int camSetTarget(int, int);
int camSnapToCar(int);
float getNearLineIndex(int, int, int, int, int);
int getNearLineIndexAll(int);
int nlAddVector(int, int);
int nlGetMatrix(int);
int nlGetTranslate(int);
int nlInvertMatrix(int);
float nlLength(int, int);
int nlLoadMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
extern int nlPushUnitMatrix();
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int nlUnitMatrix(void);
int camUpdate(int a4);

