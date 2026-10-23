/* Straight-line functions with calls and guards (batch gen_qm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Init_DramRoll(void);

int Init_DramRoll(void)
{
    int t0;
    int t6;
    int t2;
    int t7;
    int t8;
    int t9;
    int t10;
    int t16;
    int t21;
    int stk[10];

    t0 = *(int *)0xC2A97D8;
    t6 = ((((0x5 - t0) << 1) + (0x5 - t0)) + 0x14);
    if ((int)t0 > (int)0x5) {
        t2 = 0x28;
        if ((t0 != 0x3E7) && (t0 != 99)) {
            t2 = 0x14;
        }
        t6 = t2;
    }
    t7 = 0x0;
    t8 = 0xC2A982C;
    t9 = 0xC2A97AC;
    t10 = ((0x0 + t6) + 0x1);
    for (;;) {
        *(unsigned int *)(((int)stk + 4)) = ((t7 + t6) + 0x1);
        *(unsigned int *)(((t7 << 2) + 0xC2A97EC)) = ((t7 + t6) + 0x1);
        t16 = 0x0;
        if ((int)((*(int *)((0xC2A97AC + (t7 << 2)))) - ((int)((int)(*(int *)(((int)stk + 4))) % (int)0xA))) < 0) {
            *(unsigned int *)((0xC2A97AC + (t7 << 2))) = ((*(int *)((0xC2A97AC + (t7 << 2)))) + 0xA);
            t16 = 0x1;
        }
        t21 = (int)((int)((*(int *)((0xC2A97AC + (t7 << 2)))) - ((int)((int)t10 % (int)0xA))) % (int)0xA);
        *(unsigned int *)(((0xC2A980C + (t7 << 2)) + 0x0)) = t21;
        if ((int)t16 > 0) {
            *(unsigned int *)((t9 + 0x0)) = ((*(int *)((t9 + 0x0))) - 10);
        }
        t7 = (t7 + 0x1);
        *(unsigned int *)((t8 + 0x0)) = 0x0;
        t9 = (t9 + 0x4);
        t8 = (t8 + 0x4);
        t10 = (t10 + 0x1);
        if ((int)t7 >= (int)0x8) {
            break;
        }
    }
    return t21;
}
