/* Straight-line functions with calls and guards (batch gen_mk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Drv_Put(void);
int drvPredictPath(void);
int Drv_Execute(int a4, int a5, int a6, int a7);

int Drv_Execute(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t12;
    int t3;
    int stk[22];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_C0630D2:;
    t0 = 0xC0D5184;
    t2 = ((int)stk + 4);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC0D5184 + 76)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    R4 = ((((*(int *)0xC2AD010) << 2) + ((int)stk + 4)));
    R5 = (((int)stk + 4));
    R6 = (0xC2AD000);
    if ((((*(signed char *)0xC2AD1DF) & 1) != 0)) goto L_C063138;
    goto L_C0630F4;
    L_C0630F4:;
    R14 = ((*(int *)((R4 + 0x0))));
    goto L_C06313A;
    L_C06313A:;
    t12 = ((int (*)(int, int, int, int))(R14))(R4, R5, R6, R7);
    Drv_Put();
    return (drvPredictPath());
    L_C063138:;
    R14 = ((*(int *)((R4 + 0x28))));
    goto L_C06313A;
}
