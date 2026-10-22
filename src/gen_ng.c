/* Straight-line functions with calls and guards (batch gen_ng): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0753f0(void);
int FUN_0c075420(void);

int FUN_0c075420(void)
{
    int t0;

    t0 = FUN_0c0753f0();
    *(unsigned int *)0xC2AEEA8 = t0;
    return t0;
}
