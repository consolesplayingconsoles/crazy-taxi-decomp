/* Straight-line functions with calls and guards (batch gen_cr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetRotVec4Ang(int, int, int);
int pcarRejoinLane(int);
int nlCalcVector(int, int);
int nlsndSeqRequest(void);
int GetCollision2D(int, float);
int GetMenuMode(int);
int carBalance(int);
int calcCheck(int);
int calcCheckExec(int, int);
int carColliReflection(void);
int carEntry(int);
int carResistance(void);
int dropOutCheck(int);
int nlAddVector(int, int);
float nlInnerProduct(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScaleVector(int, int, float);
int nlSubVector3op(int, int, int);
int pcarEnd(int);
int technicalCheck(int);
int pfAddNumber(int a4, int a5);
int menuChangeValue(int a4, int a5, int a6);
int SeachRankTotal(int a4, int a5, int a6);
int nlsndStreamGetParam(int a4, int a5, int a6);
int stopingCarExec(int a4);

int pfAddNumber(int a4, int a5)
{
    int t3;
    int t0;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t16;
    int t17;
    int t18;
    int t19;
    int t1;
    int t2;

    t3 = a4;
    if ((int)a4 < 0) {
        t0 = *(int *)0xC26E310;
        *(unsigned int *)0xC26E310 = (t0 + 0x1);
        *(unsigned char *)((((t0 + 0x1) - 0x1) + 0x0)) = 0x2D;
        t1 = ((t0 + 0x1) - 0x1);
        t2 = 0x2D;
        t3 = (-a4);
    }
    t4 = t1;
    t5 = t2;
    t6 = t3;
    t7 = 0x0;
    while ((int)t6 >= (int)0xA) {
        t4 = t7;
        t5 = 0xC08106C;
        t4 = (t4 << 2);
        t4 = (t4 + 0xC26E314);
        t8 = (int)((int)t6 % (int)0xA);
        *(unsigned int *)((t4 + 0x0)) = t8;
        t4 = 0xC080F10;
        t9 = (int)((int)t6 / (int)0xA);
        t6 = t9;
        t7 = (t7 + 0x1);
    }
    *(unsigned int *)((0xC26E314 + (t7 << 2))) = t6;
    if ((int)(a5 - (t7 + 0x1)) > 0) {
        t10 = t5;
        t11 = (a5 - (t7 + 0x1));
        while (t11 != 0) {
            t12 = *(int *)0xC26E310;
            t10 = t12;
            t11 = (t11 - 1);
            t10 = (t10 + 0x1);
            *(unsigned int *)0xC26E310 = t10;
            *(unsigned char *)(((t10 - 0x1) + 0x0)) = 0x30;
            t10 = (t10 - 0x1);
        }
    }
    t16 = (t7 + 0x1);
    do {
        t17 = *(int *)0xC26E310;
        t16 = (t16 - 1);
        *(unsigned int *)0xC26E310 = (t17 + 0x1);
        t18 = *(int *)((0xC26E314 + (t16 << 2)));
        *(unsigned char *)((((t17 + 0x1) - 0x1) + 0x0)) = (t18 + 0x30);
    } while (t16 != 0);
    t19 = *(int *)0xC26E310;
    *(unsigned char *)((t19 + 0x0)) = 0x0;
    return (t16 << 2);
}




