/* Straight-line functions with calls and guards (batch gen_qm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Result_Drop_Lowest_Rank(void);

int Result_Drop_Lowest_Rank(void)
{
    int t0;
    int t1;
    int t2;
    int t7;
    int t8;
    int t9;
    int t11;
    int t30;
    int stk[6] = {0};

    t0 = 0x1;
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)0xC1EE210;
        *(unsigned int *)(((int)stk + 4)) = ((short)((short)t2 * (short)0x3C0) + 0xC28C318);
        if ((unsigned int)(*(int *)(((((t1 << 2) << 1) + (((short)((short)t2 * (short)0x3C0) + 0xC28C318) + 0x140)) + 0x4))) > (unsigned int)(*(int *)(((((t0 << 2) << 1) + (((short)((short)t2 * (short)0x3C0) + 0xC28C318) + 0x140)) + 0x4)))) {
            t1 = t0;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x50) {
            break;
        }
    }
    if (t1 != 79) {
        if ((int)t1 < (int)0x4F) {
            t7 = ((t1 << 2) << 1);
            t8 = t1;
            for (;;) {
                t9 = *(int *)0xC1EE210;
                *(unsigned int *)((((((short)((short)t9 * (short)0x3C0) + 0xC28C318) + 0x140) + t7) + 0x0)) = (*(int *)((((((short)((short)t9 * (short)0x3C0) + 0xC28C318) + 0x140) + t7) + 0x8)));
                t11 = *(int *)0xC1EE210;
                t8 = (t8 + 0x1);
                *(unsigned int *)((((((short)((short)t11 * (short)0x3C0) + 0xC28C318) + 0x140) + t7) + 0x4)) = (*(int *)((((((short)((short)t11 * (short)0x3C0) + 0xC28C318) + 0x140) + t7) + 0xC)));
                t7 = (t7 + 0x8);
                if ((int)t8 >= (int)0x4F) {
                    break;
                }
            }
        }
    }
    *(unsigned int *)((((0x140 + ((short)((short)(*(int *)0xC1EE210) * (short)0x3C0) + 0xC28C318)) + 0x278) + 0x0)) = 0x0;
    t30 = *(int *)0xC1EE210;
    *(unsigned int *)(((0x278 + (0x140 + ((short)((short)t30 * (short)0x3C0) + 0xC28C318))) + 0x4)) = 0x0;
    return (0x140 + ((short)((short)t30 * (short)0x3C0) + 0xC28C318));
}
