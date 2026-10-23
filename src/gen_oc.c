/* Straight-line functions with calls and guards (batch gen_oc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdc_CourseStartLoadReq(void);
int gdc_FadeManStreamSong(void);
int gdc_StopStreamSongAll(void);
int nd_CarSelExec(void);
int nlLookAtUp(int, int, int);
int gameState5(int a4, int a5, int a6, float f4);

int gameState5(int a4, int a5, int a6, float f4)
{
    int stk[11];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    float F3;
    float F4;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    F4 = f4;
    L_C02CD46:;
    *(unsigned int *)0xC1EE240 = ((*(int *)0xC1EE240) + 0x1);
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 1.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0xC)) = *(struct mv3 *)(0xC08AD94); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0xC08AD94); }
    *(float *)(((int)stk + 12)) = 10.0f;
    nlLookAtUp((((int)stk + 4) + 0xC), ((int)stk + 4), (((int)stk + 4) + 0x18));
    nd_CarSelExec();
    if (((*(int *)0xC2A7518) != 4)) goto L_C02CDA8;
    goto L_C02CD9C;
    L_C02CD9C:;
    *(unsigned int *)0xC1EE238 = 0x0;
    gdc_StopStreamSongAll();
    goto L_C02CDA8;
    L_C02CDA8:;
    gdc_FadeManStreamSong();
    return (gdc_CourseStartLoadReq());
}
