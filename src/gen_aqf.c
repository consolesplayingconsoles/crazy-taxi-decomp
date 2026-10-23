/* Straight-line functions with calls and guards (batch gen_aqf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int Chat_Iraira();
int extRand(void);
int psgEnterState5(int a4, int a5, int a6, float f4, float f5);

int psgEnterState5(int a4, int a5, int a6, float f4, float f5)
{
    int t8;
    int t18;
    int stk[20];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R9;
    int R12;
    int R13;
    int R14;
    float F3;
    float F5;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    F5 = f5;
    L_C06D63E:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x30)) = *(struct mv3 *)(0xC0D5EEC); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x24)) = *(struct mv3 *)(0xC0D5EF8); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x18)) = *(struct mv3 *)(0xC0D5F04); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0xC)) = *(struct mv3 *)(0xC0D5F10); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0xC0D5F1C); }
    R0 = (R5);
    R13 = (0xC061B14);
    R14 = (R4);
    F15 = (0.0f);
    if ((R5 == 0)) goto L_C06D69C;
    goto L_C06D690;
    L_C06D690:;
    if ((R0 == 1)) goto L_C06D720;
    goto L_C06D694;
    L_C06D694:;
    if ((R0 == 2)) goto L_C06D77E;
    goto L_C06D698;
    L_C06D698:;
    goto L_C06D7CC;
    L_C06D7CC:;
    return R0;
    L_C06D77E:;
    t8 = (int)((unsigned int)(extRand()) % (unsigned int)0x3);
    *(unsigned int *)((R14 + 0x34)) = (*(int *)((((t8 << 2) + ((int)stk + 4)) + 0x0)));
    *(float *)((R14 + 0x38)) = F15;
    *(unsigned char *)(((0x149 + R14) + 0x0)) = ((*(signed char *)(((0x149 + R14) + 0x0))) & 0x7F);
    *(float *)((R14 + 0x108)) = F15;
    *(float *)((R14 + 0x10C)) = F15;
    *(unsigned char *)(((0x149 + R14) + 0x0)) = ((*(signed char *)(((0x149 + R14) + 0x0))) & 0xF9);
    *(unsigned int *)((R14 + 0x124)) = 0xC0D5720;
    *(unsigned int *)((R14 + 0x128)) = 0xC0D5728;
    R4 = (((t8 << 2) + ((int)stk + 4)));
    R5 = (0x2);
    R6 = (0x2);
    goto L_C06D7C8;
    L_C06D7C8:;
    R0 = ((((int (*)(int, int, int))(Chat_Iraira))(R14, R5, R6)));
    goto L_C06D7CC;
    L_C06D720:;
    t18 = (int)((unsigned int)(extRand()) % (unsigned int)0x3);
    *(unsigned int *)((R14 + 0x34)) = (*(int *)((((t18 << 2) + (((int)stk + 4) + 0x30)) + 0x0)));
    *(float *)((R14 + 0x38)) = F15;
    *(unsigned char *)(((0x149 + R14) + 0x0)) = ((*(signed char *)(((0x149 + R14) + 0x0))) & 0x7F);
    *(float *)((R14 + 0x108)) = F15;
    *(float *)((R14 + 0x10C)) = F15;
    *(unsigned char *)(((0x149 + R14) + 0x0)) = ((*(signed char *)(((0x149 + R14) + 0x0))) & 0xF9);
    *(unsigned int *)(((0x124 + R14) + 0x0)) = (*(int *)((((((int)stk + 4) + 0x24) + (t18 << 2)) + 0x0)));
    *(unsigned int *)((R14 + 0x128)) = (*(int *)((((t18 << 2) + (((int)stk + 4) + 0x18)) + 0x0)));
    R4 = (((t18 << 2) + (((int)stk + 4) + 0x18)));
    R6 = (0x1);
    goto L_C06D77A;
    L_C06D77A:;
    R5 = (0x1);
    goto L_C06D7C8;
    L_C06D69C:;
    *(unsigned int *)((R14 + 0x34)) = 0xC945094;
    *(float *)((R14 + 0x38)) = F15;
    *(unsigned char *)(((0x149 + R14) + 0x0)) = ((*(signed char *)(((0x149 + R14) + 0x0))) & 0x7F);
    *(float *)((R14 + 0x108)) = F15;
    *(float *)((R14 + 0x10C)) = F15;
    *(unsigned char *)(((0x149 + R14) + 0x0)) = ((*(signed char *)(((0x149 + R14) + 0x0))) & 0xF9);
    *(unsigned int *)((R14 + 0x124)) = 0xC0D5720;
    *(unsigned int *)((R14 + 0x128)) = 0xC0D5728;
    R6 = (0x0);
    goto L_C06D77A;
}
