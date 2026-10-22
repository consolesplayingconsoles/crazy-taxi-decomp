/* Straight-line functions with calls and guards (batch gen_adj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_GetStat(int);
int gdc_GetStreamStat(int a4, int a5);

int gdc_GetStreamStat(int a4, int a5)
{
    int t4;

    if (a4 == 1) {
        t4 = (ADXT_GetStat((*(int *)(((a5 << 2) + 0xC1EE810)))));
    } else {
        t4 = (ADXT_GetStat((*(int *)(((a5 << 2) + 0xC1EE820)))));
    }
    return t4;
}
