/* Straight-line functions with calls and guards (batch gen_aak): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdGdcGetDrvStat(int, int);
int gdDcfGetDrvStat_(int a4, int a5);

int gdDcfGetDrvStat_(int a4, int a5)
{
    register int t0;

    t0 = gdGdcGetDrvStat(a4, a5);
    if (t0 == 1) {
        return 0x0;
    }
    return 0x1;
}
