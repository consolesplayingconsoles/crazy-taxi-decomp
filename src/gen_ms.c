/* Straight-line functions with calls and guards (batch gen_ms): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdc_FadeStopStreamSong(int, int);
int gdc_StopStreamSongAll(void);
int pfOffsetOff(void);
int pfSetFilterMode(int);
int ExecNameEntryDecide(void);

int ExecNameEntryDecide(void)
{
    int t0;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t16;

    t0 = *(int *)0xC2864C4;
    *(unsigned int *)0xC2864C4 = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        t3 = *(int *)0xC1EE340;
        t4 = (((t3 - 1) << 2) << 2);
        t5 = 0x3C0;
        t6 = 0xC2864D0;
        t7 = 0x3;
        t8 = ((((short)((short)(*(short *)0xC1EE210) * (short)0x3C0) + 0xC28C318) + (((t3 - 1) << 2) << 2)) + 0x6);
        for (;;) {
            if (t7 == 0) {
                break;
            }
            t4 = (*(signed char *)((t6 + 0x0)));
            if (t4 == 0) {
                *(unsigned char *)((t6 + 0x0)) = 0x20;
            }
            t5 = (*(signed char *)((t6 + 0x0)));
            t6 = (t6 + 0x1);
            t7 = (t7 - 1);
            *(unsigned char *)((t8 + 0x0)) = t5;
            t8 = (t8 + 0x1);
        }
        *(unsigned int *)0xC1789C0 = ((*(int *)0xC1789C0) + 0x1);
        gdc_StopStreamSongAll();
        pfSetFilterMode(0x0);
        t16 = pfOffsetOff();
        *(unsigned int *)0xC1EE238 = 0x2;
        return t16;
    }
    if ((*(int *)0xC2864C4) == 0xC8) {
        return gdc_FadeStopStreamSong(0x0, 0x12C);
    }
    return 0xC8;
}
