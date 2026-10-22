/* Straight-line functions with calls and guards (batch gen_vh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ResetFadeColor(void);
int ReturnBreakPinNum(void);
int nd_SprPut(int, int, float, float);
int nlObjPutSetFadeColor(float, float, float);
int Put_Pin_Count(void);

int Put_Pin_Count(void)
{
    float u1;
    float u2;
    float u4;
    int t7;
    int t8;
    int t9;
    int t10;
    float u11;
    int t12;
    int t13;
    int t14;
    float u15;
    int t24;
    int t25;
    float u26;
    float u28;
    float u30;
    float u32;
    int t33;
    int stk[8] = {0};

    nlObjPutSetFadeColor(0.0f, 1.0f, 1.0f);
    *(float *)0xC2A98A8 = 1.0f;
    *(float *)0xC2A98AC = 1.0f;
    u1 = 66.0f;
    u2 = 477.0f;
    nd_SprPut(0xC2A9898, 0x1EA, u2, u1);
    u4 = 501.0f;
    nd_SprPut(0xC2A9898, 0x1EB, u4, u1);
    ResetFadeColor();
    t7 = ReturnBreakPinNum();
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x8) + 0x4);
    t8 = (int)((int)t7 / (int)0xA);
    *(unsigned int *)((((((int)stk + 4) + 0x8) + 0x4) + 0x0)) = t8;
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0x8);
    t9 = (int)((int)t7 % (int)0xA);
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x0)) = t9;
    t10 = *(int *)(((int)stk + 4));
    u11 = 90.0f;
    t12 = *(int *)((t10 + 0x0));
    if (t12 != 0) {
        t13 = *(int *)(((int)stk + 4));
        t14 = *(int *)((t13 + 0x0));
        u15 = 474.0f;
        nd_SprPut(0xC2A9898, (t14 + 0x50), u15, u11);
    }
    t24 = *(int *)(((int)stk + 8));
    t25 = *(int *)((t24 + 0x0));
    u26 = 498.0f;
    nd_SprPut(0xC2A9898, (t25 + 0x50), u26, u11);
    u28 = 523.0f;
    nd_SprPut(0xC2A9898, 0x1E1, u28, u11);
    u30 = 550.0f;
    nd_SprPut(0xC2A9898, 0x57, u30, u11);
    u32 = 574.0f;
    t33 = nd_SprPut(0xC2A9898, 0x50, u32, u11);
    return t33;
}
