/* Straight-line functions with calls and guards (batch gen_ajl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c07f7a0(void);

int FUN_0c07f7a0(void)
{
    int t0;
    int t1;

    t0 = *(int *)0xC2B76E4;
    t1 = *(int *)(((t0 + 0x10) + 0x0));
    if (t1 != 0) {
        *(unsigned int *)(((t0 + 0x10) + 0x0)) = 0x0;
    }
    return t1;
}
