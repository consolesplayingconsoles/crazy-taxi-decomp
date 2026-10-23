/* Straight-line functions with calls and guards (batch gen_akq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int fmMngGetErr(void);

int fmMngGetErr(void)
{
    int t0;

    t0 = *(int *)0xC178720;
    if (t0 == 0) {
        return 0xFFFFFFF5;
    }
    return (*(int *)((t0 + 0x2C)));
}
