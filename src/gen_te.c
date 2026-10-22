/* Straight-line functions with calls and guards (batch gen_te): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int InsertRankRecord(int a4, int a5, int a6, int a7);

int InsertRankRecord(int a4, int a5, int a6, int a7)
{
    int t38;
    int t41;
    int t2;
    int t3;
    int t12;
    int t13;
    int t21;
    int t22;
    int t42;
    int t0;
    int t1;
    int t14;
    int t15;
    int t23;
    int t24;

    t38 = 0x0;
    t41 = (a7 - 1);
    if ((int)(a7 - 1) >= 0) {
        t2 = (a7 - 1);
        t3 = 0x0;
        for (;;) {
            if ((int)a4 > 0) {
                t12 = *(int *)((a5 + 0x0));
                t13 = *(int *)((((((t2 << 1) + t2) << 2) + a6) + 0x0));
                if (((unsigned int)t12 <= (unsigned int)t13) && (((t12 != t13) || (t14 = *(int *)((a5 + 0x4)), t15 = *(int *)((((((t2 << 1) + t2) << 2) + a6) + 0x4)), t1 = t15, (int)t14 >= (int)t1)) && (t13 != -1))) {
                    break;
                }
                if ((int)t2 < (int)(a7 - 1)) {
                    t0 = ((((t2 << 1) + t2) << 2) + a6);
                    t1 = ((((t2 << 1) + t2) << 2) + a6);
                    t0 = (t0 + 0xC);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
                }
                t2 = (t2 - 1);
                t3 = (t3 + 0x1);
                if ((int)t2 < 0) {
                    break;
                }
                continue;
            }
            t21 = *(int *)((a5 + 0x0));
            t22 = *(int *)((((((t2 << 1) + t2) << 2) + a6) + 0x0));
            if (((unsigned int)t21 >= (unsigned int)t22) && (((t21 != t22) || (t23 = *(int *)((a5 + 0x4)), t24 = *(int *)((((((t2 << 1) + t2) << 2) + a6) + 0x4)), t1 = t24, (int)t23 >= (int)t1)) && (t22 != -1))) {
                break;
            }
            if ((int)t2 < (int)(a7 - 1)) {
                t0 = ((((t2 << 1) + t2) << 2) + a6);
                t1 = ((((t2 << 1) + t2) << 2) + a6);
                t0 = (t0 + 0xC);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
            }
            t2 = (t2 - 1);
            t3 = (t3 + 0x1);
            if ((int)t2 < 0) {
                break;
            }
        }
        t38 = t3;
        t41 = t2;
    }
    t42 = 0xFFFFFFFF;
    if (t38 != 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((t41 << 1) + t41) << 2) + a6) + 0xC)) = *(struct mv3 *)(a5); }
        t42 = (t41 + 0x1);
    }
    return t42;
}
