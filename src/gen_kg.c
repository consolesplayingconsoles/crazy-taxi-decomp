/* Straight-line functions with calls and guards (batch gen_kg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SetCameraMode(int);
int camRestore(void);
int camSetEye(int, int);
int camSetTarget(int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlSubVector3op(int, int, int);
int camGetOnNear(int a4, int a5, int a6, float f4, float f5);

int camGetOnNear(int a4, int a5, int a6, float f4, float f5)
{
    int t19;
    int stk[15];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R13;
    int R14;
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
    L_C064788:;
    SetCameraMode(0x1);
    nlGetAverageVector(0xC2AD554, 0xC2AD1F8, (((int)stk + 4) + 0x18), 1.0f, 20.0f);
    nlGetAverageVector((((int)stk + 4) + 0x18), 0xC2AD1EC, (((int)stk + 4) + 0x18), 1.0f, 10.0f);
    nlSubVector3op((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x18), 0xC179840);
    nlGetAverageVector(0xC179840, (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x18), 1.0f, 0.099999994f);
    camSetEye((((int)stk + 4) + 0x18), 0x1);
    nlGetAverageVector(((*(int *)0xC2AD54C) + 0x4), 0xC2AD1EC, ((int)stk + 4), 1.0f, 10.0f);
    nlSubVector3op((((int)stk + 4) + 0xC), ((int)stk + 4), 0xC17984C);
    nlGetAverageVector(0xC17984C, (((int)stk + 4) + 0xC), ((int)stk + 4), 1.0f, 0.299999982f);
    camSetTarget(((int)stk + 4), 0x1);
    R13 = (0xC2AD54C);
    R14 = (0xC078A90);
    if (((*(int *)(((*(int *)0xC2AD54C) + 0x20))) != 2)) goto L_C064836;
    goto L_C064828;
    L_C064828:;
    if (((*(int *)(((*(int *)((R13 + 0x0))) + 0x24))) != 2)) goto L_C064836;
    goto L_C064830;
    L_C064830:;
    *(unsigned int *)0xC2AD57C = 0x4;
    goto L_C064836;
    L_C064836:;
    t19 = *(int *)0xC2AD590;
    R0 = (t19);
    if (((t19 & 1) != 0)) goto L_C064842;
    goto L_C06483E;
    L_C06483E:;
    R0 = ((camRestore()));
    goto L_C064842;
    L_C064842:;
    return R0;
}
