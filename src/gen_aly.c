/* Straight-line functions with calls and guards (batch gen_aly): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int selectInitIconSprite(int a4, int a5, int a6, int a7, float f4, float f5, float f6);

int selectInitIconSprite(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int t9;
    int stk[1];

    int R0;
    int R1;
    int R4;
    int R5;
    int R6;
    int R7;
    float F4;
    float F5;
    float F6;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    F4 = f4;
    F5 = f5;
    F6 = f6;
    L_C051C62:;
    R1 = (0xA);
    R4 = (0xC2A7410);
    R5 = (0x3);
    R6 = (0x2);
    R7 = (0x0);
    F4 = (1.0f);
    F5 = (0.0f);
    F6 = (500.8f);
    goto L_C051C74;
    L_C051C74:;
    *(float *)((R4 + 0x4)) = F5;
    *(float *)((R4 + 0x8)) = F5;
    *(float *)((R4 + 0xC)) = F6;
    *(float *)((R4 + 0x10)) = F4;
    *(float *)((R4 + 0x14)) = F4;
    *(float *)((R4 + 0x18)) = F5;
    *(float *)((R4 + 0x1C)) = F5;
    *(float *)((R4 + 0x20)) = F4;
    *(float *)((R4 + 0x24)) = F4;
    *(unsigned int *)((R4 + 0x28)) = R7;
    *(unsigned int *)((R4 + 0x34)) = R1;
    *(float *)((R4 + 0x2C)) = F4;
    t9 = (R5 - 0x1) != 0;
    *(unsigned int *)((R4 + 0x30)) = R6;
    R0 = (0x2C);
    R5 = ((R5 - 0x1));
    if (t9) goto L_C051C74;
    goto L_C051CA6;
    L_C051CA6:;
    return R0;
}
