/* Straight-line functions with calls and guards (batch gen_qb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c05f854(void);

int FUN_0c05f854(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t8;
    int t5;
    int t7;
    int t11;
    int t12;
    int t0;
    int t14;

    t1 = 0x0;
    for (;;) {
        t2 = *(int *)0xC2A9C70;
        t3 = *(int *)((t2 + 0x8));
        if (t3 != 0) {
            t4 = *(int *)((t2 + 0x8));
            t0 = t4;
            t8 = t2;
            if (((((int)t1 >= 0) ? (0x1 << (t1 & 31)) : ((-(int)t1 & 31) ? ((int)0x1 >> (-(int)t1 & 31)) : ((int)0x1 >> 31))) & t0) != 0) {
                t5 = *(int *)((0xC2A9CE4 + (t1 << 2)));
                if (t5 == 0) {
                    *(unsigned int *)((0xC2A9C9C + (t1 << 2))) = 0x0;
                    *(unsigned int *)((0xC2A9CE4 + (t1 << 2))) = 0x1;
                }
                t7 = *(int *)((0xC2A9C9C + (t1 << 2)));
                *(unsigned int *)((0xC2A9C9C + (t1 << 2))) = (t7 + 0x1);
                t8 = (t1 << 2);
            }
            t14 = t8;
        } else {
            t11 = *(int *)((0xC2A9CE4 + (t1 << 2)));
            t12 = t11;
            if (t11 == 1) {
                *(unsigned int *)((0xC2A9CE4 + (t1 << 2))) = 0x0;
                t12 = (t1 << 2);
            }
            t14 = t12;
        }
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x12) {
            break;
        }
    }
    return t14;
}
