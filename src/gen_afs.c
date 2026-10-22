/* Straight-line functions with calls and guards (batch gen_afs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c077a00(int, int, int);
int gdc_CourseStartLoadReq(void);
int gdc_FadeManStreamSong(void);
int gdc_StopStreamSongAll(void);
int nd_CarSelExec(void);
int gameState5(void);

int gameState5(void)
{
    int stk[11] = {0};

    *(unsigned int *)0xC1EE240 = ((*(int *)0xC1EE240) + 0x1);
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 1.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0xC)) = *(struct mv3 *)(0xC08AD94); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0xC08AD94); }
    *(float *)(((int)stk + 12)) = 10.0f;
    FUN_0c077a00((((int)stk + 4) + 0xC), ((int)stk + 4), (((int)stk + 4) + 0x18));
    nd_CarSelExec();
    if ((*(int *)0xC2A7518) == 4) {
        *(unsigned int *)0xC1EE238 = 0x0;
        gdc_StopStreamSongAll();
    }
    gdc_FadeManStreamSong();
    return (gdc_CourseStartLoadReq());
}
