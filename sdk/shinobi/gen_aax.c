/* Straight-line functions with calls and guards (batch gen_aax): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdGdcG1DmaEnd(int a4, int a5);

int gdGdcG1DmaEnd(int a4, int a5)
{
    return ((int (*)(int, int, int, int))((*(int *)0x8C0000BC)))(a4, a5, 0x0, 0x5);
}
