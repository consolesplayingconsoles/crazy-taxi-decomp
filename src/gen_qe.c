/* Straight-line functions with calls and guards (batch gen_qe): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c06b0ce(void);

int FUN_0c06b0ce(void)
{
    int t0;

    t0 = *(int *)0xC13EEC8;
    *(unsigned int *)0xC13EEC8 = ((t0 * 0x41C64E6D) + 0x3039);
    return (((unsigned int)((t0 * 0x41C64E6D) + 0x3039) >> 16) & 0x7FFFF);
}
