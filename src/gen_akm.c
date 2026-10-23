/* Straight-line functions with calls and guards (batch gen_akm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdFsGetErrStat(int a4);

int gdFsGetErrStat(int a4)
{
    if (a4 != 0) {
        if ((*(short *)((a4 + 0x4C))) == 0) {
            return 0x0;
        }
        return (*(short *)((a4 + 0x52)));
    }
    return 0x0;
}
