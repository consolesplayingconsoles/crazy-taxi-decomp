/* Straight-line functions with calls and guards (batch gen_akc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_GetErrCode(int a4);
struct o60_short { char p[0x60]; short v; };


int ADXT_GetErrCode(int a4)
{
    return ((((struct o60_short *)(a4))->v));
}
