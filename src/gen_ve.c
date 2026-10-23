/* Straight-line functions with calls and guards (batch gen_ve): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Chk_DispCredit(int);
int Start_Ranking(void);
int Voice_Request(int, int, int, int);
int exec_loop_Replay(void);
int gdc_FadeManStreamSong(void);
int gdc_FadeStopStreamSong(int, int);
int gdc_StopStreamSongAll(void);
int replayChangeControl(int, int, int, int, float);
int AdvStateReplay2(int a4, int a5, int a6, int a7, float f4);

int AdvStateReplay2(int a4, int a5, int a6, int a7, float f4)
{
    int t5;
    int t6;
    int t11;

    *(unsigned int *)0xC1EE240 = ((*(int *)0xC1EE240) + 0x1);
    if ((replayChangeControl(0x2, a5, a6, a7, f4)) == 0) {
        exec_loop_Replay();
    }
    t5 = *(int *)0xC1EE774;
    if ((t5 == 0) && (t6 = *(int *)0xC1EE33C, (int)t6 >= (int)0x8AC)) {
        Start_Ranking();
        *(unsigned int *)0xC1EE774 = ((*(int *)0xC1EE774) + 0x1);
    } else {
        if ((t5 == 1) && (t11 = *(int *)0xC1EE33C, (int)t11 >= (int)0xD3E)) {
            Voice_Request(0xC0E52E0, 0x0, 0x7F, 0x0);
            gdc_FadeStopStreamSong(0x0, 0x654);
            *(unsigned int *)0xC1EE774 = ((*(int *)0xC1EE774) + 0x1);
        } else {
            if (t5 == 2) {
                gdc_FadeManStreamSong();
            }
        }
    }
    if ((int)(*(int *)0xC1EE33C) >= (int)0xF78) {
        *(unsigned int *)0xC1EE238 = 0x8;
        if ((int)(*(int *)0xC2A4E54) > 0) {
            *(unsigned int *)0xC2A4E54 = ((*(int *)0xC2A4E54) - 1);
        }
        return gdc_StopStreamSongAll();
    }
    return Chk_DispCredit(0x0);
}
