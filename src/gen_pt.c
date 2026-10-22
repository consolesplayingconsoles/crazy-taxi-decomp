/* Straight-line functions with calls and guards (batch gen_pt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void FUN_0c07b4f0(void);

void FUN_0c07b4f0(void)
{
    int t0;
    int t1;

    *(unsigned int *)0xC2B7620 = 0x5;
    t0 = *(int *)0xC2B75C8;
    if (t0 != 0) {
        t1 = ((int (*)(void))(t0))();
    }
    *(unsigned int *)0xA05F705C = 0x3;
}
