/* Straight-line functions with calls and guards (batch gen_lv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdc_CourseStartLoadReq(void);
int gdc_FadeManStreamSong(void);
int gdc_StopStreamSongAll(void);
int nd_CarSelExec(int);
int nlLookAtUp(int, int, int, float, float, float);
int gameState5(float f4, float f5, float f6);

int gameState5(float f4, float f5, float f6)
{
    int stk[11];

    *(unsigned int *)0xC1EE240 = ((*(int *)0xC1EE240) + 0x1);
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 1.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0xC)) = *(struct mv3 *)(0xC08AD94); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0xC08AD94); }
    *(float *)(((int)stk + 12)) = 10.0f;
    nlLookAtUp((((int)stk + 4) + 0xC), ((int)stk + 4), (((int)stk + 4) + 0x18), 0.0f, f5, f6);
    nd_CarSelExec(0xC179488);
    if ((*(int *)0xC2A7518) == 4) {
        *(unsigned int *)0xC1EE238 = 0x0;
        gdc_StopStreamSongAll();
    }
    gdc_FadeManStreamSong();
    return (gdc_CourseStartLoadReq());
}
