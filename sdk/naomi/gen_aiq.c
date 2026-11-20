/* Straight-line functions with calls and guards (batch gen_aiq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void nlFlushTileClip(int a4, int a5);

void nlFlushTileClip(int a4, int a5)
{
    *(unsigned int *)(((*(int *)0xC2AF36C) + 0x0)) = ((a5 << 16) | 0x800000);
}
