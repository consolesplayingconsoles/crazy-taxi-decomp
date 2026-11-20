/* Straight-line functions with calls and guards (batch gen_fi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXPD_EntryMono(int, int, int, int);
int ADXPD_EntrySte(int, int, int, int);
int ADXPD_Start(int);
int ADXB_EvokeExpandSte(int a4, int a5);
int ADXB_EvokeExpandMono(int a4, int a5);

int ADXB_EvokeExpandMono(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)(((a4 + 0x50) + 0x20));
    t1 = *(int *)(((a4 + 0x50) + 0x14));
    t2 = *(int *)((a4 + 0x50));
    t3 = *(int *)((a4 + 0x8));
    ADXPD_EntryMono(t3, t2, a5, (t1 + (t0 << 1)));
    return ADXPD_Start(t3);
}
