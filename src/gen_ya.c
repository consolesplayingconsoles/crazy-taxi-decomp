/* Straight-line functions with calls and guards (batch gen_ya): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int EndPsg_ClearIpBuff(void);
int EndPsg_Start(int, int, int);
int Initialize_Replay_Part(void);
int SetAdvCamera(int, int);
int camSetMode(int);
int camSnapToCar(int);
int gdc_CourseAdvLoadReq(int, int, int);
int gdc_CoursePointLoadReq(float);
int getGoiToolFlag(int);
int nlLocate(int, int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushUnitMatrix(void);
int nlRand(void);
int nlRotateAY(int);
int nlSetTranslate(int);
int replay(int);
int setReplayType(int);
int replayChangeControl(int a4, int a5, int a6, int a7, float f4);

