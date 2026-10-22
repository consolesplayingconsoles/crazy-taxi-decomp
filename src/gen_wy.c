/* Straight-line functions with calls and guards (batch gen_wy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float nlRoundUp(float);
int pfAddNumber(int);
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
    int t2;
    float t3;
    int t4;
    int t22;
    float t23;
    int t25;

    t0 = (int)((int)a6 / (int)0xE10);
    t1 = (int)((int)(a6 - (t0 * 0xE10)) / (int)0x3C);
    t2 = (int)((int)(a6 - (t0 * 0xE10)) % (int)0x3C);
    t3 = nlRoundUp((((float)t2 / 60.0f) * 100.0f));
    t4 = (int)t3;
    if ((int)(int)t3 < 0) {
        t4 = 0x0;
    }
    pfCleanString();
    if (t0 != 0) {
        pfAddNumber(t0);
        pfAddString(0xC0D3028);
    }
    if ((int)t1 < (int)0xA) {
        pfAddString(0xC0D302C);
    }
    pfAddNumber(t1);
    pfAddString(0xC0D3030);
    if ((int)t4 < (int)0xA) {
        pfAddString(0xC0D302C);
    }
    pfAddNumber(t4);
    t22 = *(int *)0xC08D678;
    t23 = pfLength(t22);
    pfLocate(((float)a4 - (t23 * 0.5f)), (float)a5);
    t25 = *(int *)0xC08D678;
    pfPuts(t25);
}
