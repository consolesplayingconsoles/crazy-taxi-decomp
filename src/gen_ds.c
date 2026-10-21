/* Straight-line functions with calls and guards (batch gen_ds): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_GetNumSmpl(int);
int ADXT_GetStat(int);
int FUN_0c02e162(int a4);

int FUN_0c02e162(int a4)
{
    int t0;
    int t1;
    int t7;
    int t2;
    int t3;
    float u4;

    t0 = *(int *)(((a4 << 2) + 0xC1EE820));
    t1 = ADXT_GetStat(t0);
    t7 = 0x58764;
    if ((int)t1 >= (int)0x2) {
        t2 = *(int *)(((a4 << 2) + 0xC1EE820));
        t3 = ADXT_GetNumSmpl(t2);
        u4 = *(float *)0xC02E260;
        t7 = (int)((float)t3 * u4);
    }
    return t7;
}
