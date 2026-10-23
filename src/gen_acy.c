/* Straight-line functions with calls and guards (batch gen_acy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SetCameraMode(int);
int camRestore(void);
int camSetEye(int, int);
int camSetTarget(int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlSubVector3op(int, int, int);
int camGetOnReturn(int a4, int a5, int a6, float f4, float f5);

int camGetOnReturn(int a4, int a5, int a6, float f4, float f5)
{
    int t1;
    float u6;
    int t12;
    int stk[13];

    int R0;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    float F4;
    float F5;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    F4 = f4;
    F5 = f5;
    L_C064A5C:;
    t1 = *(signed char *)(((*(int *)0xC2AD54C) + 0x149));
    R0 = (t1);
    if (((t1 & 128) != 0)) goto L_C064AD4;
    goto L_C064A70;
    L_C064A70:;
    SetCameraMode(0x1);
    nlSubVector3op((((int)stk + 4) + 0x18), 0xC2AD554, 0xC179840);
    u6 = *(float *)0xC064B4C;
    nlGetAverageVector(0xC179840, (((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC), 1.0f, u6);
    camSetEye((((int)stk + 4) + 0xC), 0x1);
    nlSubVector3op((((int)stk + 4) + 0x18), 0xC2AD560, 0xC17984C);
    nlGetAverageVector(0xC17984C, (((int)stk + 4) + 0x18), ((int)stk + 4), 1.0f, u6);
    camSetTarget(((int)stk + 4), 0x1);
    t12 = *(int *)0xC2AD590;
    R0 = (t12);
    if (((t12 & 1) != 0)) goto L_C064AD4;
    goto L_C064AD0;
    L_C064AD0:;
    R0 = ((camRestore()));
    goto L_C064AD4;
    L_C064AD4:;
    return R0;
}
