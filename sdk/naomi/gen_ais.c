/* Straight-line functions with calls and guards (batch gen_ais): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlSysTextureNoWaitDMA(void);

int nlSysTextureNoWaitDMA(void)
{
    int t0;

    t0 = *(int *)0xC2AECD4;
    *(unsigned int *)0xC2AECD4 = (t0 | 0x100000);
    return (t0 | 0x100000);
}
