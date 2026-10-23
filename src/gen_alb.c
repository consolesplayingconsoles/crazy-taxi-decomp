/* Straight-line functions with calls and guards (batch gen_alb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int hudSplitFareDigits(int a4, int a5);

int hudSplitFareDigits(int a4, int a5)
{
    int t1;
    int t2;
    int t3;
    int t6;
    int t25;
    int t41;
    int t42;
    int t0;
    int t4;
    int t19;
    int t43;

    *(unsigned int *)0xC2A8E88 = 0x0;
    t1 = 0xC2A8E88;
    t2 = 0x6;
    for (;;) {
        t3 = *(int *)((a5 + (t2 << 2)));
        if ((t3 != 0) && ((t3 != 10) && (t0 = 0xC2A8E90, t4 = *(int *)((t0 + 0x0)), t1 = t4, (int)t2 > (int)t1))) {
            *(unsigned int *)0xC2A8E90 = t2;
        }
        t6 = *(int *)0xC2A8E90;
        t0 = (*(int *)((a4 + (t2 << 2))));
        t1 = (*(int *)((a5 + (t2 << 2))));
        if ((int)t1 >= (int)t0) {
            if (((int)t6 > (int)t2) && (t19 = *(int *)(((t2 << 2) + 0xC2A8E50)), t19 == 10)) {
                t1 = (*(int *)((a4 + (t2 << 2))));
                t25 = *(int *)((a5 + (t2 << 2)));
                if ((t25 == t1) && (t25 == 0)) {
                    *(unsigned int *)((0xC2A8E34 + (t2 << 2))) = 0x1;
                } else {
                    t0 = (*(int *)((a4 + (t2 << 2))));
                    t1 = (*(int *)((a5 + (t2 << 2))));
                    t1 = (t1 - t0);
                    t1 = (t1 + 0x1);
                    *(unsigned int *)((0xC2A8E34 + (t2 << 2))) = t1;
                }
            } else {
                t0 = (*(int *)((a4 + (t2 << 2))));
                t1 = (*(int *)((a5 + (t2 << 2))));
                t1 = (t1 - t0);
                *(unsigned int *)((0xC2A8E34 + (t2 << 2))) = t1;
            }
        } else {
            t0 = (*(int *)((a4 + (t2 << 2))));
            t1 = (*(int *)((a5 + (t2 << 2))));
            if ((int)t1 < (int)t0) {
                if ((int)t6 < (int)t2) {
                    t0 = (*(int *)((a4 + (t2 << 2))));
                    t1 = (*(int *)((a5 + (t2 << 2))));
                    t1 = (t1 - t0);
                    t1 = (t1 + 0xB);
                    *(unsigned int *)((0xC2A8E34 + (t2 << 2))) = t1;
                } else {
                    t0 = (*(int *)((a4 + (t2 << 2))));
                    t1 = (*(int *)((a5 + (t2 << 2))));
                    t1 = (t1 - t0);
                    t1 = (t1 + 0xA);
                    *(unsigned int *)((0xC2A8E34 + (t2 << 2))) = t1;
                }
            }
        }
        t1 = (*(int *)((0xC2A8E34 + (t2 << 2))));
        t41 = (t2 << 2);
        t42 = (t2 << 2);
        t2 = (t2 - 1);
        if (t1 == 0) {
            *(unsigned int *)((0xC2A8E6C + t42)) = 0x1;
            t43 = t42;
        } else {
            *(unsigned int *)((0xC2A8E6C + t41)) = 0x0;
            t43 = t41;
        }
        if ((int)t2 < 0) {
            break;
        }
    }
    return t43;
}
