/* Straight-line functions with calls and guards (batch gen_alt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdc_PlayStreamSong(int);
int gdc_VolStreamSong(int);
int nlSetBackColor(int, int, int, float);
int pfSetFont(int);
int pfSize(float, float);
int InitEndRoll(float f4);

int InitEndRoll(float f4)
{
    nlSetBackColor(0x0, 0x0, 0x0, f4);
    pfSetFont(0x0);
    pfSize(1.0f, 1.0f);
    gdc_PlayStreamSong(0x3);
    gdc_VolStreamSong(0x6E);
    *(unsigned int *)0xC2864E0 = 0x0;
    *(unsigned int *)0xC2864E4 = 0x2;
    return 0xC2864E4;
}
