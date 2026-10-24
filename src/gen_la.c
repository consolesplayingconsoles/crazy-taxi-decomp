/* Straight-line functions with calls and guards (batch gen_la): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern float getNearLineIndex();
float navi_GetRouteDataB(int a4, int a5);

float navi_GetRouteDataB(int a4, int a5)
{
    int t0;
    int t2;
    int t3;
    float u4;
    float t8;
    float t17;
    float u23;
    int stk[13];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1EE1D4) = *(struct mv3 *)(a4); }
    t0 = *(int *)0xC2A6690;
    if (a5 == -1) {
        t2 = 0x0;
        t3 = (0xEF4 + t0);
        u4 = 999999.9f;
        for (;;) {
            t8 = ((float (*)(int, int, int, int))(getNearLineIndex))(0x0, (*(int *)((t3 + 0x0))), (*(int *)(((*(int *)((t3 + 0x4))) + 0x0))), (((int)stk + 4) + 0x4));
            if (u4 > t8) {
                u4 = t8;
                *(unsigned int *)0xC1EE1E8 = (int)t8;
                *(unsigned int *)0xC1EE1E0 = t2;
                *(unsigned int *)0xC1EE1E4 = (*(int *)(((int)stk + 8)));
            }
            t2 = (t2 + 0x1);
            t3 = (t3 + 0xC);
            if ((int)t2 > (int)0x8) {
                break;
            }
        }
        u23 = t8;
    } else {
        *(unsigned int *)(((int)stk + 12)) = (((((a5 << 1) + a5) << 2) + t0) + 0xEF4);
        t17 = ((float (*)(int, int, int, int, int))(getNearLineIndex))(0x0, (*(int *)(((*(int *)(((int)stk + 12))) + 0x0))), (*(int *)(((*(int *)(((((((a5 << 1) + a5) << 2) + t0) + 0xEF4) + 0x4))) + 0x0))), 0xC1EE1E4, a4);
        *(unsigned int *)0xC1EE1E8 = (int)t17;
        *(unsigned int *)0xC1EE1E0 = a5;
        u23 = t17;
    }
    return u23;
}
