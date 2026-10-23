/* Straight-line functions with calls and guards (batch gen_ln): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void selectLoadAxes(void);

void selectLoadAxes(void)
{
    int stk[14];

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x24)) = *(struct mv3 *)(0xC0D080C); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x18)) = *(struct mv3 *)(0xC0D0818); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0xC)) = *(struct mv3 *)(0xC0D0824); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0xC0D0830); }
}
