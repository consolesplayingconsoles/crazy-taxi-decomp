/* Straight-line functions with calls and guards (batch gen_gh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int getReplayChangePos(int a4, int a5, int a6, int a7);

int getReplayChangePos(int a4, int a5, int a6, int a7)
{
    int t15;
    int t16;
    int t10;
    int t11;
    int t5;
    int t6;
    int t0;
    int t1;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;

    t15 = 0xC0F2B40;
    t16 = 0x28;
    if (a4 == 1) {
    } else {
        t10 = 0xC0F3040;
        t11 = 0x28;
        if (a4 == 2) {
        } else {
            t5 = a4;
            t6 = a7;
            if (a4 == 3) {
                t0 = *(int *)0xC1EE20C;
                t1 = 0xC0F3A40;
                if (t0 == 0) {
                    t1 = 0xC0F3540;
                }
                t5 = t1;
                t6 = 0x28;
            }
            t10 = t5;
            t11 = t6;
        }
        t15 = t10;
        t16 = t11;
    }
    if ((int)a5 > (int)t16) {
        return 0x0;
    }
    t18 = *(int *)((((((a5 << 2) << 2) << 1) + t15) + 0x8));
    t19 = *(int *)0xC2A62A8;
    t20 = *(int *)(((((t18 * 0x3C0) + t19) + 0x7C) + 0x8));
    *(unsigned int *)((a6 + 0x8)) = t20;
    t21 = *(int *)(((((t18 * 0x3C0) + t19) + 0x7C) + 0x4));
    *(unsigned int *)((a6 + 0x4)) = t21;
    t22 = *(int *)(((((t18 * 0x3C0) + t19) + 0x7C) + 0x0));
    *(unsigned int *)((a6 + 0x0)) = t22;
    return 0x1;
}
