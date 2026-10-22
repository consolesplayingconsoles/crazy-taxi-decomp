/* Straight-line functions with calls and guards (batch gen_ot): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void InitHomingAngle(int a4, int a5);

void InitHomingAngle(int a4, int a5)
{
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x18)) = *(struct mv3 *)(a5); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(a4) = *(struct mv3 *)(a5); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0xC)) = *(struct mv3 *)(0xC0965FC); }
    *(float *)((a4 + 0x24)) = 1.0f;
    *(float *)((a4 + 0x28)) = 0.0f;
}
