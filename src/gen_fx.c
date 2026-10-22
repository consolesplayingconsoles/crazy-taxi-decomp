/* Straight-line functions with calls and guards (batch gen_fx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckAreaGrid(int, int);
int ExecEffect(int, int);
int ExecSpark(void);
int putPlayerCarByView(int);
int exec_CarSound(int);
int carWheelForces(void);
int carWheelSlip(int);
int carFlipTravelDir(int);
int carAngularMotion(int);
int carWheelCollision(int);
int carBodyTilt(int);
int carGroundCheck(int);
int navi_GetRouteDataC(int, int);
int TOANG2(int, float);
int GS_TripMetor(float);
int pfCleanString(void);
int pfAddString(int);
int pfAddNumber(int);
float FUN_0c089de0(int);
float FUN_0c089de8(int);
int SetEffect(int, int, int);
extern float _builtin_sqrtf(float);
int carGearbox(int);
int carRumble(int);
int gdc_CoursePointLoadReq(float);
int getAreaFromPos(int, int);
int getNearLineIndex(int, int, int, int);
int nlFastSinCos(int, int, int);
float nlLength(int, int);
float nlScalor(int);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int pfColor(int, int, int, int);
float pfLength(int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFont(int);
int pfSize(float, float);
int putPlayerCar(int);
int replay(int);
int exec_CarMain(void);

