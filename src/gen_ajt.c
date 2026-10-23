/* Straight-line functions with calls and guards (batch gen_ajt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void nlSetGP_FogControl(int a4);

void nlSetGP_FogControl(int a4)
{
    *(unsigned int *)0xC2B794C = ((*(int *)0xC2B794C) & 0xFF3FFFFF);
    *(unsigned int *)0xC2B794C = ((*(int *)0xC2B794C) | (a4 << 22));
}
