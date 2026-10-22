/* Straight-line functions with calls and guards (batch gen_wu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int psgRoadCheck(int);
int psgFrame(int a4);

int psgFrame(int a4)
{
    int t0;
    int t7;
    int t8;
    int t9;
    int stk[11] = {0};

    { struct mv7 { int w[7]; }; *(struct mv7 *)((((int)stk + 4) + 0x4)) = *(struct mv7 *)(0xC0D5F64); }
    t0 = *(int *)((a4 + 0x20));
    if ((t0 != 0) && (t0 != 1)) {
    } else {
        psgRoadCheck(a4);
    }
    t7 = *(int *)((a4 + 0x20));
    t8 = *(int *)((((t7 << 2) + (((int)stk + 4) + 0x4)) + 0x0));
    *(unsigned int *)(((int)stk + 4)) = t8;
    t9 = ((int (*)(int))(t8))(a4);
    return t9;
}
