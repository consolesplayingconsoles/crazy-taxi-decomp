/* Straight-line functions with calls and guards (batch gen_qk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int PutNameEntryDrum(int, float);
int PutNameEntryName(void);
int PutNameEntryRank(int);
int PutNameEntryScreen(void);
int gdc_FadeManStreamSong(void);
int pfOffsetColor(int, int, int, int);
int pfOffsetOff(void);
int gameState15(void);

int gameState15(void)
{
    int t0;
    int t11;

    t0 = *(int *)0xC1EE340;
    if (((int)t0 >= (int)0x1) && ((int)t0 <= (int)0x14)) {
    } else {
        *(unsigned int *)0xC1EE340 = 0x1;
    }
    pfOffsetColor(0x3F3F3F, 0x3F3F3F, 0x3F3F3F, 0x3F3F3F);
    PutNameEntryScreen();
    PutNameEntryDrum((*(int *)0xC2864A0), ((float)(*(int *)0xC2864A4) / 16.0f));
    PutNameEntryName();
    PutNameEntryRank((*(int *)0xC1EE340));
    t11 = ((int (*)(void))((*(int *)0xC2864CC)))();
    pfOffsetOff();
    return gdc_FadeManStreamSong();
}
