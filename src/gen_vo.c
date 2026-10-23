/* Straight-line functions with calls and guards (batch gen_vo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ResetFadeColor(void);
int ReturnBreakPinNum(void);
extern int nd_SprPut();
int nlObjPutSetFadeColor(float, float, float);
int Put_Pin_Count(void);

int Put_Pin_Count(void)
{
    float u1;
    int t3;
    int t5;
    int t7;
    float u11;
    int t16;
    int t27;
    int t29;
    int t31;
    int t22;
    int stk[8];

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
    u11 = *(float *)0xC05C974;
    if ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) != 0) {
        t16 = ((int (*)(int, int, int, float, float))(nd_SprPut))(0xC2A9898, ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + 0x50), (((int)stk + 4) + 0x8), (*(float *)0xC05C978), u11);
    } else {
        t22 = (((int)stk + 4) + 0x8);
    }
    t27 = ((int (*)(int, int, int, float, float))(nd_SprPut))(0xC2A9898, ((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) + 0x50), t22, (*(float *)0xC05C97C), u11);
    t29 = ((int (*)(int, int, float, float))(nd_SprPut))(0xC2A9898, 0x1E1, (*(float *)0xC05C980), u11);
    t31 = ((int (*)(int, int, float, float))(nd_SprPut))(0xC2A9898, 0x57, (*(float *)0xC05C984), u11);
    return (((int (*)(int, int, float, float))(nd_SprPut))(0xC2A9898, 0x50, (*(float *)0xC05C988), u11));
}
