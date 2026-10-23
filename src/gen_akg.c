/* Straight-line functions with calls and guards (batch gen_akg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_SetTimeOfst(int a4, int a5);

int ADXT_SetTimeOfst(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x88)) = a5;
    return 0x88;
}
