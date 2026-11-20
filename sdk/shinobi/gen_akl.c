/* Straight-line functions with calls and guards (batch gen_akl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdGdcReset(int, int);
int gdDcfSoftReset_(int a4, int a5);

int gdDcfSoftReset_(int a4, int a5)
{
    return gdGdcReset(a4, a5);
}
