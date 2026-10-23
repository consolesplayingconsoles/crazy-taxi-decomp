/* Straight-line functions with calls and guards (batch gen_hq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckNameEntryPad(float, float);
float nlFastSin(int);
int pfAddNumber(int, int);
int pfCleanString(void);
int pfLocate(float, float);
int pfPuts(int);
float ExecNameEntryScroll(float f4, float f5);

float ExecNameEntryScroll(float f4, float f5)
{
    int t1;
    float u14;
    float u15;
    float t17;
    float u18;
    float u19;
    int t25;
    float u21;

    CheckNameEntryPad(f4, f5);
    t1 = *(int *)0xC2864C4;
    *(unsigned int *)0xC2864C4 = (t1 - 1);
    if ((int)(t1 - 1) <= 0) {
        *(unsigned int *)0xC2864C4 = 0x0;
        *(unsigned int *)0xC2864B4 = 0x0;
        *(unsigned int *)0xC2864B0 = 0x0;
    }
    pfLocate((*(float *)0xC03A168), (*(float *)0xC03A164));
    pfCleanString();
    pfAddNumber(((int)((int)(*(int *)0xC2864C4) / (int)0x3C)), 0x0);
    pfPuts((*(int *)0xC08D678));
    u14 = *(float *)0xC03A188;
    u15 = *(float *)0xC2864D4;
    *(float *)0xC2864D4 = (u15 * u14);
    if (1.0f > (u15 * u14)) {
        t17 = nlFastSin((((*(int *)0xC2864D8) << 8) << 2));
        u18 = *(float *)0xC03A194;
        u19 = *(float *)0xC03A198;
        *(float *)0xC2864D4 = ((-(t17 * u18)) + u19);
        u21 = ((-(t17 * u18)) + u19);
    }
    t25 = *(int *)0xC2864D8;
    *(unsigned int *)0xC2864D8 = (t25 + 0x1);
    if ((int)(t25 + 0x1) > (int)0x10) {
        *(unsigned int *)0xC2864D8 = 0x0;
        *(float *)0xC2864D4 = 1.0f;
        *(unsigned int *)0xC2864CC = 0xC039E58;
        *(unsigned int *)0xC2864B0 = 0x0;
    }
    return u21;
}
