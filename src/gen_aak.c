/* Straight-line functions with calls and guards (batch gen_aak): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdGdcGetDrvStat(void);
void gdDcfGetDrvStat_(void);

void gdDcfGetDrvStat_(void)
{
    if ((gdGdcGetDrvStat()) == 1) {
        return;
    }
}
