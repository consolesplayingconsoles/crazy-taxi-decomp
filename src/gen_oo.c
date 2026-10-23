/* Straight-line functions with calls and guards (batch gen_oo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void nlObjPutSetPaletteHeaderAddress(int a4);

void nlObjPutSetPaletteHeaderAddress(int a4)
{
    *(unsigned int *)0xC2B3568 = a4;
}
