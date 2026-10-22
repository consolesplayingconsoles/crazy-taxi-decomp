/* Straight-line functions with calls and guards (batch gen_rd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void FUN_0c07250c(int a4, int a5);

void FUN_0c07250c(int a4, int a5)
{
    { struct mv3 { int w[3]; }; *(struct mv3 *)(a4) = *(struct mv3 *)(a5); }
    *(unsigned int *)((a4 + 0x14)) = 0x0;
    *(unsigned int *)((a4 + 0x10)) = 0x0;
    *(unsigned int *)((a4 + 0xC)) = 0x0;
    *(float *)((a4 + 0x18)) = 0.0f;
    *(float *)((a4 + 0x1C)) = 0.0f;
    *(unsigned int *)((a4 + 0x20)) = 0xF0;
    *(unsigned int *)((a4 + 0x24)) = 0x0;
}
