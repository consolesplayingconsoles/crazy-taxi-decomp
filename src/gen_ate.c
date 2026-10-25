/* Straight-line functions with calls and guards (batch gen_ate): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXRNA_SetPlaySw(int, int);
int ADXT_GetStat(int);
int mwRnaAdjustBuf(int);
int ADXT_Pause(int a4, int a5);

int ADXT_Pause(int a4, int a5)
{
    int t0;
    int t3;

    t0 = ADXT_GetStat(a4);
    *(unsigned char *)((a4 + 0x72)) = a5;
    if ((t0 != 3) && (t0 != 4)) {
        return t0;
    }
    if (a5 == 1) {
        ADXRNA_SetPlaySw((*(int *)((a4 + 0xC))), 0x0);
        t3 = 0x7A120;
        for (;;) {
            t3 = (t3 - 0x1);
            if (t3 == 0) {
                break;
            }
        }
        return mwRnaAdjustBuf((*(int *)((a4 + 0xC))));
    }
    return ADXRNA_SetPlaySw((*(int *)((a4 + 0xC))), 0x1);
}
