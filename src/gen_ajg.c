/* Straight-line functions with calls and guards (batch gen_ajg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlIntrSetEORFunction(int a4, int a5);

int nlIntrSetEORFunction(int a4, int a5)
{
    *(unsigned int *)0xC2B75B8 = a5;
    return 0x1;
}
