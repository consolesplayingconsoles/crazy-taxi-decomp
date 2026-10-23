/* Straight-line functions with calls and guards (batch gen_tg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Drv_SetMotion(int, float);
int extRand(void);
int Drv_StartPsgReact(int a4, float f4);

int Drv_StartPsgReact(int a4, float f4)
{
    int t3;
    int t4;
    int t17;
    int stk[14];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R13;
    int R14;
    float F3;
    float F4;
    float F15;
    int T_;
    R4 = a4;
    F4 = f4;
    L_C062EA0:;
    { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 4) + 0x1C)) = *(struct mv2 *)(0xC0D5154); }
    { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 4) + 0x14)) = *(struct mv2 *)(0xC0D515C); }
    { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 4) + 0xC)) = *(struct mv2 *)(0xC0D5164); }
    *(unsigned int *)(((int)stk + 12)) = (*(int *)0xC0D516C);
    *(unsigned int *)(((int)stk + 8)) = (*(int *)0xC0D5170);
    *(unsigned int *)(((int)stk + 4)) = (*(int *)0xC0D5174);
    t3 = extRand();
    t4 = *(int *)0xC2AD01C;
    *(unsigned int *)0xC2AD014 = t4;
    R0 = (t4);
    R14 = (0xC2AD000);
    R4 = (t3);
    F15 = (0.0f);
    if ((t4 == 0)) goto L_C062EFE;
    goto L_C062EF6;
    L_C062EF6:;
    if ((R0 == 1)) goto L_C062F38;
    goto L_C062EFA;
    L_C062EFA:;
    goto L_C062F52;
    L_C062F52:;
    return R0;
    L_C062F38:;
    *(unsigned int *)((R14 + 0x1D0)) = (*(int *)(((int)stk + 8)));
    *(unsigned int *)((R14 + 0x1D4)) = (*(int *)(((int)stk + 4)));
    Drv_SetMotion((*(int *)(((int)stk + 12))), F15);
    goto L_C062F4A;
    L_C062F4A:;
    *(float *)((R14 + 0xF8)) = (*(float *)0xC062FDC);
    R0 = (0xF8);
    goto L_C062F52;
    L_C062EFE:;
    t17 = (int)((unsigned int)R4 % (unsigned int)0x2);
    *(unsigned int *)(((0x1D0 + R14) + 0x0)) = (*(int *)((((t17 << 2) + (((int)stk + 4) + 0x14)) + 0x0)));
    *(unsigned int *)(((0x1D4 + R14) + 0x0)) = (*(int *)((((((int)stk + 4) + 0xC) + (t17 << 2)) + 0x0)));
    Drv_SetMotion((*(int *)((((t17 << 2) + (((int)stk + 4) + 0x1C)) + 0x0))), F15);
    goto L_C062F4A;
}
