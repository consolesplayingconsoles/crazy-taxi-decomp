/* Straight-line functions with calls and guards (batch gen_oe): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c077df0(int);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlTranslate(float, float, float);
int FUN_0c0589b8(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);

int FUN_0c0589b8(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    int t6;
    int t7;
    int t9;
    int t11;
    int t13;
    int t16;
    int t23;
    int stk[20] = {0};

    stk[8] = a8;
    stk[9] = a9;
    stk[10] = a10;
    stk[11] = a11;
    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    FUN_0c077df0(0x3);
    nlPushMatrix(0xC0D09D0);
    FUN_0c077df0(0x2);
    nlPushUnitMatrix();
    FUN_0c077df0(0x1);
    nlPushUnitMatrix();
    t6 = *(int *)(((int)stk + 12));
    t7 = *(int *)(((int)stk + 4));
    nlTranslate((float)(t7 - 320), (float)(0xF0 - t6), -0.299999982f);
    t9 = *(short *)(((((int)stk + 4) + 0x1C) + 0x2));
    nlRotateAY((unsigned short)t9);
    t11 = *(short *)(((((int)stk + 4) + 0x1C) + 0x0));
    nlRotateAX((unsigned short)t11);
    t13 = *(short *)(((((int)stk + 4) + 0x1C) + 0x4));
    nlRotateAZ((unsigned short)t13);
    nlScale(f4, f4, 1.0f);
    t16 = *(int *)(((int)stk + 8));
    nlObjPut(t16);
    nlPopMatrix(0x1);
    FUN_0c077df0(0x2);
    nlPopMatrix(0x1);
    FUN_0c077df0(0x3);
    nlPopMatrix(0x1);
    t23 = FUN_0c077df0(0x1);
    return t23;
}
