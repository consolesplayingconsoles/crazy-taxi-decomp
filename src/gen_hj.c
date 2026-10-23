/* Straight-line functions with calls and guards (batch gen_hj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Sound_Request(int, int);
int abs(int);
int calcCurvePoint(int, int, int, int, int, float, float, float, float);
int courseStatusGet(int, int, int, int);
int getCoursePointMove(int, int, int);
int getNearLineIndex(int, int, int, int, int, float, float, float, float);
int getNearLinkedLine(int, int, int, int, int, float, float, float, float);
int getSteering(int, int);
int nlAddVector(int, int);
int nlCalcVector(int, int);
int nlGetAverageVector(int, int, int, float, float);
float nlInnerProduct(int, int);
float nlLength(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRand(void);
int nlRotateAY(int, float, float);
int nlScaleUnitVector(int, int, float);
int nlSubVector(int, int);
int nlUnitVector(int);
int pcarLaneChange(int, int, int, int, float);
int pcarTurnSelect(int);
float pcarDrive(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7);

