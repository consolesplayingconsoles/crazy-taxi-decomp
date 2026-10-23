/* Straight-line functions with calls and guards (batch gen_vn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int hudLoadRanking(void);

int hudLoadRanking(void)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t6;
    int t7;
    int t8;
    int t13;
    int t14;
    int t15;
    int t17;
    int t26;
    int t27;
    int t28;
    int t30;
    int stk[8];

    t0 = 0x0;
    t1 = 0xC2A8FD8;
    t2 = 0x0;
    for (;;) {
        t4 = *(int *)(((((short)((short)(*(int *)0xC1EE210) * (short)0x3C0) + 0xC28C318) + t0) + 0x0));
        t2 = (t2 + 0x1);
        t0 = (t0 + 0x10);
        *(unsigned int *)((t1 + 0x0)) = t4;
        t1 = (t1 + 0x4);
        if ((int)t2 >= (int)0x14) {
            break;
        }
    }
    t6 = 0x1;
    t7 = 0x0;
    for (;;) {
        t8 = *(int *)0xC1EE210;
        *(unsigned int *)(((int)stk + 4)) = ((short)((short)t8 * (short)0x3C0) + 0xC28C318);
        if ((unsigned int)(*(int *)(((((t7 << 2) << 1) + (((short)((short)t8 * (short)0x3C0) + 0xC28C318) + 0x140)) + 0x4))) > (unsigned int)(*(int *)(((((t6 << 2) << 1) + (((short)((short)t8 * (short)0x3C0) + 0xC28C318) + 0x140)) + 0x4)))) {
            t7 = t6;
        }
        t6 = (t6 + 0x1);
        if ((int)t6 >= (int)0x50) {
            break;
        }
    }
    if ((int)(t7 - 1) >= 0) {
        t13 = 0xC2A9028;
        t14 = 0x0;
        t15 = 0x0;
        for (;;) {
            t14 = (t14 + 0x1);
            t17 = *(int *)((((0x140 + ((short)((short)(*(int *)0xC1EE210) * (short)0x3C0) + 0xC28C318)) + t15) + 0x0));
            t15 = (t15 + 0x8);
            *(unsigned int *)((t13 + 0x0)) = t17;
            t13 = (t13 + 0x4);
            if ((int)t14 > (int)(t7 - 1)) {
                break;
            }
        }
    }
    if ((t7 != 79) && ((int)t7 < (int)0x4F)) {
        t26 = t7;
        t27 = (((t7 << 2) + 0xC2A8FD8) + 0x50);
        t28 = ((t7 << 2) << 1);
        for (;;) {
            t26 = (t26 + 0x1);
            t30 = *(int *)((((0x140 + ((short)((short)(*(int *)0xC1EE210) * (short)0x3C0) + 0xC28C318)) + t28) + 0x8));
            t28 = (t28 + 0x8);
            *(unsigned int *)((t27 + 0x0)) = t30;
            t27 = (t27 + 0x4);
            if ((int)t26 >= (int)0x4F) {
                break;
            }
        }
    }
    *(unsigned int *)0xC2A9164 = 0x0;
    *(unsigned int *)0xC2A9168 = 0x64;
    *(unsigned int *)0xC1EE340 = 0x64;
    return 0x18C;
}
