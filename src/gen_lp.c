/* Straight-line functions with calls and guards (batch gen_lp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ResetFadeColor(void);
int ReturnBreakPinNum(void);
extern int nd_SprPut();
int nlObjPutSetFadeColor(float, float, float);
int Put_Pin_Count(int a4, int a5, int a6, float f4, float f5, float f6);

int Put_Pin_Count(int a4, int a5, int a6, float f4, float f5, float f6)
{
    float u1;
    int t3;
    int t5;
    int t7;
    int t20;
    int t24;
    int t26;
    int t28;
    int stk[8];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R14;
    float F4;
    float F5;
    float F6;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    F4 = f4;
    F5 = f5;
    F6 = f6;
    L_C05C81C:;
    nlObjPutSetFadeColor(0.0f, 1.0f, 1.0f);
    *(float *)0xC2A98A8 = 1.0f;
    *(float *)0xC2A98AC = 1.0f;
    u1 = *(float *)0xC05C954;
    t3 = ((int (*)(int, int, float, float))(nd_SprPut))(0xC2A9898, 0x1EA, (*(float *)0xC05C95C), u1);
    t5 = ((int (*)(int, int, float, float))(nd_SprPut))(0xC2A9898, 0x1EB, (*(float *)0xC05C960), u1);
    ResetFadeColor();
    t7 = ReturnBreakPinNum();
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x8) + 0x4);
    *(unsigned int *)((((((int)stk + 4) + 0x8) + 0x4) + 0x0)) = ((int)((int)t7 / (int)0xA));
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0x8);
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x0)) = ((int)((int)t7 % (int)0xA));
    R14 = (0xC05778A);
    R6 = ((((int)stk + 4) + 0x8));
    F15 = ((*(float *)0xC05C974));
    if (((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) == 0)) goto L_C05C8AA;
    goto L_C05C89A;
    L_C05C89A:;
    t20 = ((int (*)(int, int, int, float, float))(nd_SprPut))(0xC2A9898, ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + 0x50), R6, (*(float *)0xC05C978), F15);
    goto L_C05C8AA;
    L_C05C8AA:;
    t24 = ((int (*)(int, int, int, float, float))(nd_SprPut))(0xC2A9898, ((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) + 0x50), R6, (*(float *)0xC05C97C), F15);
    t26 = ((int (*)(int, int, float, float))(nd_SprPut))(0xC2A9898, 0x1E1, (*(float *)0xC05C980), F15);
    t28 = ((int (*)(int, int, float, float))(nd_SprPut))(0xC2A9898, 0x57, (*(float *)0xC05C984), F15);
    return (((int (*)(int, int, float, float))(nd_SprPut))(0xC2A9898, 0x50, (*(float *)0xC05C988), F15));
}
