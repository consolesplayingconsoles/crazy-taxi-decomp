/* Straight-line functions with calls and guards (batch gen_air): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void nlSysTextureWaitDMA(void);

void nlSysTextureWaitDMA(void)
{
    *(unsigned int *)0xC2AECD4 = ((*(int *)0xC2AECD4) & 0xFFEFFFFF);
}
