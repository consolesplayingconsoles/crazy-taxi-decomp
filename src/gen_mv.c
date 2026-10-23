/* Straight-line functions with calls and guards (batch gen_mv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float nlRoundUp(float);
int pfAddNumber(int, int);
int pfAddString(int);
int pfCleanString(void);
float pfLength(int);
int pfLocate(float, float);
int pfPuts(int);
void pfCrazyBoxRecordTimePut(int a4, int a5, int a6);

void pfCrazyBoxRecordTimePut(int a4, int a5, int a6)
{
    int t0;
    int t1;
    float t3;
    int t4;

    t0 = (int)((int)a6 / (int)0xE10);
    t1 = (int)((int)(a6 - (t0 * 0xE10)) / (int)0x3C);
    t3 = nlRoundUp((((float)((int)((int)(a6 - (t0 * 0xE10)) % (int)0x3C)) / 60.0f) * 100.0f));
    t4 = (int)t3;
    if ((int)(int)t3 < 0) {
        t4 = 0x0;
    }
    pfCleanString();
    if (t0 != 0) {
        pfAddNumber(t0, 0x0);
        pfAddString(0xC0D3028);
    }
    if ((int)t1 < (int)0xA) {
        pfAddString(0xC0D302C);
    }
    pfAddNumber(t1, 0x0);
    pfAddString(0xC0D3030);
    if ((int)t4 < (int)0xA) {
        pfAddString(0xC0D302C);
    }
    pfAddNumber(t4, 0x0);
    pfLocate(((float)a4 - ((pfLength((*(int *)0xC08D678))) * 0.5f)), (float)a5);
    pfPuts((*(int *)0xC08D678));
}
