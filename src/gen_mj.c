/* Straight-line functions with calls and guards (batch gen_mj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Sound_Request(int, int);
int abs(int);
int convergeRotLimit(int, int, float, float);
int courseStatusEntry(int, int);
int courseStatusGet(int, int, int, int);
int getYXZrot(int);
int nlAddVector(int, int);
int nlArcTan2(float, float);
int nlCalcVector(int, int);
float nlLength(int, int, float, float);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSubVector3op(int, int, int);
int nlTranslateV(int);
int nlUnitMatrix(void);
void cableControlExec(int a4, int a5, int a6, int a7, float f4, float f5);

