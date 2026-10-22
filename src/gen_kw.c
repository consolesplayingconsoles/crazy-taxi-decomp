/* Straight-line functions with calls and guards (batch gen_kw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Chk_DispCredit(void);
int Start_Ranking(void);
int Voice_Request(int, int, int, int);
int exec_loop_Replay(void);
int gdc_FadeManStreamSong(void);
int gdc_FadeStopStreamSong(int, int);
int gdc_StopStreamSongAll(void);
int replayChangeControl(int);
int AdvStateReplay(void);

int AdvStateReplay(void)
{
    int t2;
    int t8;
    int t17;
    int t9;
    int t14;

    *(unsigned int *)0xC1EE240 = ((*(int *)0xC1EE240) + 0x1);
    t2 = 0x2;
    if ((*(int *)0xC1EE20C) == 0) {
        t2 = 0x1;
    }
    if ((replayChangeControl(t2)) == 0) {
        exec_loop_Replay();
    }
    t8 = *(int *)0xC1EE774;
    if ((t8 == 0) && (t9 = *(int *)0xC1EE33C, (int)t9 >= (int)0xBB8)) {
        Start_Ranking();
        *(unsigned int *)0xC1EE774 = ((*(int *)0xC1EE774) + 0x1);
    } else {
        if ((t8 == 1) && (t14 = *(int *)0xC1EE33C, (int)t14 >= (int)0x105E)) {
            Voice_Request(0xC0E52E0, 0x0, 0x7F, 0x0);
            t17 = 0x384;
            if ((*(int *)0xC1EE20C) == 0) {
                t17 = 0x44C;
            }
            gdc_FadeStopStreamSong(0x0, t17);
            *(unsigned int *)0xC1EE774 = ((*(int *)0xC1EE774) + 0x1);
        } else {
            if (t8 == 2) {
                gdc_FadeManStreamSong();
            }
        }
    }
    if ((int)(*(int *)0xC1EE33C) >= (int)0x1298) {
        *(unsigned int *)0xC1EE238 = 0x8;
        if ((int)(*(int *)0xC2A4E54) > 0) {
            *(unsigned int *)0xC2A4E54 = ((*(int *)0xC2A4E54) - 1);
        }
        return gdc_StopStreamSongAll();
    }
    return Chk_DispCredit();
}
