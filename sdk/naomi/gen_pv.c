/* Straight-line functions with calls and guards (batch gen_pv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void nlIntrSetTexOverflowFunction(int a4, int a5);

void nlIntrSetTexOverflowFunction(int a4, int a5)
{
    *(unsigned int *)0xC2B75E8 = a5;
}
