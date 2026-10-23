extern int ExecNameEntrySelect();
/* Straight-line functions with calls and guards (batch gen_ct): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Exec_Balloon(void);
int pfCleanString(void);
int pfAddNumber(int);
int CheckNameEntryPad(void);
int nlCalcVector(int, int);
int abs(int);
float nlFastSin(int);
int GetCollision2D(int, float);
int KillColliObj(int);
int PcarEvInit(int);
int calcCheckExec(int, int);
int courseStatusEntry(int, int);
int extRand(void);
int getCoursePointMove(int, int, int);
float getNearLineIndex(int, int, int, int);
int nlAddVector(int, int);
int nlCloseEvent(int);
float nlFloor(float);
float nlLength(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
int nlSetEventNext(int, int, int);
int pfLocate(float, float);
int pfPuts(int);
int Exec_Balloon_Event(void);
float navi_GetRouteDataC(int a4, int a5, float f4);
float ExecNameEntryScroll(void);
float psgUpdatePartTracks(int a4);
int TrainInit(int a4, int a5);
int courseStatusGet(int a4, int a5, int a6, int a7);
int TrailerInit(int a4, int a5);
float getNearCoursePoint(int a4, int a5, int a6, int a7);



float ExecNameEntryScroll(void)
{
    int t1;
    float u4;
    float u5;
    int t8;
    int t9;
    int t11;
    float u13;
    float u14;
    int t15;
    float t16;
    float u17;
    float u18;
    int t23;
    float u20;

    CheckNameEntryPad();
    t1 = *(int *)0xC2864C4;
    *(unsigned int *)0xC2864C4 = (t1 - 1);
    if ((int)(t1 - 1) <= 0) {
        *(unsigned int *)0xC2864C4 = 0x0;
        *(unsigned int *)0xC2864B4 = 0x0;
        *(unsigned int *)0xC2864B0 = 0x0;
    }
    u4 = 420.0f;
    u5 = 560.0f;
    pfLocate(u5, u4);
    pfCleanString();
    t8 = *(int *)0xC2864C4;
    t9 = (int)((int)t8 / (int)0x3C);
    pfAddNumber(t9);
    t11 = *(int *)0xC08D678;
    pfPuts(t11);
    u13 = 0.9f;
    u14 = *(float *)0xC2864D4;
    *(float *)0xC2864D4 = (u14 * u13);
    if (1.0f > (u14 * u13)) {
        t15 = *(int *)0xC2864D8;
        t16 = nlFastSin(((t15 << 8) << 2));
        u17 = 0.5f;
        u18 = 1.5f;
        *(float *)0xC2864D4 = ((-(t16 * u17)) + u18);
        u20 = ((-(t16 * u17)) + u18);
    }
    t23 = *(int *)0xC2864D8;
    *(unsigned int *)0xC2864D8 = (t23 + 0x1);
    if ((int)(t23 + 0x1) > (int)0x10) {
        *(unsigned int *)0xC2864D8 = 0x0;
        *(float *)0xC2864D4 = 1.0f;
        *(unsigned int *)0xC2864CC = ((int)ExecNameEntrySelect);
        *(unsigned int *)0xC2864B0 = 0x0;
    }
    return u20;
}





