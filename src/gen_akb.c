/* Straight-line functions with calls and guards (batch gen_akb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_IsCompleted(int a4);

int ADXT_IsCompleted(int a4)
{
    return ((((*(signed char *)((a4 + 0x1))) == 5)) ? 1 : 0);
}
