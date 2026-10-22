/* Straight-line functions with calls and guards (batch gen_ado): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiFatalErrorEntry(int a4);

int kmiFatalErrorEntry(int a4)
{
    return ((int (*)(int))((*(int *)0xC2EA8F0)))(a4);
}
