/* Straight-line functions with calls and guards (batch gen_ath): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXRNA_GetNumData(int, int, int, int);
int ADXRNA_SetPlaySw(int, int);
int adxt_stat_decend(int a4, int a5, int a6, int a7);

int adxt_stat_decend(int a4, int a5, int a6, int a7)
{
    int t1;
    int t4;

    t1 = ADXRNA_GetNumData((*(int *)((a4 + 0xC))), a5, a6, a7);
    t4 = t1;
    if ((int)t1 <= 0) {
        ADXRNA_SetPlaySw((*(int *)((a4 + 0xC))), 0x0);
        *(unsigned char *)((a4 + 0x1)) = 0x5;
        t4 = 0x5;
    }
    return t4;
}
