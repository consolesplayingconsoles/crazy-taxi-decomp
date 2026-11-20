/* Straight-line functions with calls and guards (batch gen_akm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdFsGetErrStat(int a4);
struct o4C_short { char p[0x4C]; short v; };
struct o52_short { char p[0x52]; short v; };


int gdFsGetErrStat(int a4)
{
    if (a4 != 0) {
        if (((((struct o4C_short *)(a4))->v)) == 0) {
            return 0x0;
        }
        return ((((struct o52_short *)(a4))->v));
    }
    return 0x0;
}
