/* Straight-line functions with calls and guards (batch gen_c): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int psgRoadCheck(int, int, int, int, float, float, float);
int psgFrame(int a4, int a5, int a6, int a7, float f4, float f5, float f6);

int psgFrame(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int t0;
    int t8;
    int stk[11];

    { struct mv7 { int w[7]; }; *(struct mv7 *)((((int)stk + 4) + 0x4)) = *(struct mv7 *)(0xC0D5F64); }
    t0 = *(int *)((a4 + 0x20));
    if ((t0 != 0) && (t0 != 1)) {
    } else {
        psgRoadCheck(a4, a5, a6, a7, f4, f5, f6);
    }
    t8 = *(int *)(((((*(int *)((a4 + 0x20))) << 2) + (((int)stk + 4) + 0x4)) + 0x0));
    *(unsigned int *)(((int)stk + 4)) = t8;
    return (((int (*)(int))(t8))(a4));
}
