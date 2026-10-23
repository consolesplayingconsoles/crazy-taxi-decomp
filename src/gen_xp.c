/* Straight-line functions with calls and guards (batch gen_xp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Put_Window_SpriteXtoY(int, int, int, int, int, float, float, float, float);
int PutWindow(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7);

int PutWindow(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7)
{
    int t3;
    int stk[11];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R10;
    int R12;
    int R13;
    int R14;
    float F1;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F7;
    float F12;
    float F13;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    F4 = f4;
    F5 = f5;
    F6 = f6;
    F7 = f7;
    L_C03D358:;
    *(float *)(((int)stk + 8)) = F4;
    *(float *)0xC2A1AD4 = ((*(float *)0xC2A1AD4) + 0.0199999996f);
    *(float *)0xC2A1AB0 = 0.799999952f;
    t3 = (int)R4 > (int)0x2;
    R12 = (0xC2A1A84);
    R13 = (R4);
    R14 = (0xC2A1AD4);
    R4 = (0xFFFFFFFF);
    R5 = ((int)(F5 + 72.0f));
    F12 = (8.0f);
    F13 = (0.0199999996f);
    F14 = ((*(float *)0xC2A1AD4));
    F15 = ((*(float *)0xC2A1AB0));
    if (t3) goto L_C03D3FC;
    goto L_C03D3A2;
    L_C03D3A2:;
    R4 = ((Put_Window_SpriteXtoY((int)((*(float *)(((int)stk + 8))) + 160.0f), R5, 0x6, 0x3, (R13), F14, 19.0f, F12, F15)));
    goto L_C03D42A;
    L_C03D42A:;
    *(float *)((R12 + 0x2C)) = 1.0f;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) - F13);
    return R4;
    L_C03D3FC:;
    if ((R13 != 3)) goto L_C03D42A;
    goto L_C03D404;
    L_C03D404:;
    R4 = ((Put_Window_SpriteXtoY((int)((*(float *)(((int)stk + 8))) + (*(float *)0xC03D4D8)), R5, 0x6, 0x3, (R13), F14, (*(float *)0xC03D4D4), F12, F15)));
    goto L_C03D42A;
}
