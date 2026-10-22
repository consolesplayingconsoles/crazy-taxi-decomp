/* Straight-line functions with calls and guards (batch gen_aha): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int camGetOnScript(void);

int camGetOnScript(void)
{
    int t1;
    int t2;
    int stk[8] = {0};

    { struct mv5 { int w[5]; }; *(struct mv5 *)((((int)stk + 4) + 0x4)) = *(struct mv5 *)(0xC0D5280); }
    t1 = *(int *)(((((int)stk + 4) + 0x4) + ((*(int *)0xC2AD57C) << 2)));
    *(unsigned int *)(((int)stk + 4)) = t1;
    t2 = ((int (*)(int))(t1))((((int)stk + 4) + 0x4));
    *(unsigned int *)0xC2AD578 = ((*(int *)0xC2AD578) + 0x1);
    return t2;
}
