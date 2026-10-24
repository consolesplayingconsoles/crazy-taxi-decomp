/* Straight-line functions with calls and guards (batch gen_mw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_GetNumSmpl(int);
int ADXT_GetStat(int);
int gdc_GetStreamSongTotalTime(int a4);

int gdc_GetStreamSongTotalTime(int a4)
{
    int t1;
    int t7;

    t1 = ADXT_GetStat((*(int *)(((a4 << 2) + 0xC1EE820))));
    t7 = 0x58764;
    if ((int)t1 >= (int)0x2) {
        t7 = (int)((float)(ADXT_GetNumSmpl((*(int *)(((a4 << 2) + 0xC1EE820))))) * 0.0013605441f);
    }
    return t7;
}
