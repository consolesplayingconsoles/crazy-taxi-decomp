/* Straight-line functions with calls and guards (batch gen_ry): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int fcvHermiteAngle(int, int, float);
int fcvCalcAngle(int a4, int a5, int a6, float f4);

int fcvCalcAngle(int a4, int a5, int a6, float f4)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    int t7;
    int t8;
    int t26;
    int t0;
    int t5;
    float u9;

    t1 = 0x0;
    t2 = (0x0 + a5);
    t3 = (0x0 + a5);
    t4 = a4;
    for (;;) {
        t6 = 0x0;
        t7 = a5;
        t8 = a6;
        for (;;) {
            if ((int)t6 >= (int)((*(int *)((t4 + 0x0))) - 1)) {
                t1 = (t1 + 0x1);
                t3 = (t3 + 0x4);
                t4 = ((((*(int *)((t4 + 0x0))) << 2) << 2) + t4);
                t4 = (t4 + 0x4);
                t2 = (t2 + 0x4);
                if ((int)t1 >= (int)0x3) {
                    return t0;
                }
                t6 = 0x0;
                continue;
            }
            t8 = t6;
            t7 = t4;
            t8 = (t8 << 2);
            t7 = (t7 + 0x4);
            t8 = (t8 << 2);
            t7 = (t7 + t8);
            t5 = (*(int *)((t7 + 0x0)));
            u9 = (float)t5;
            if (!(u9 > f4)) {
                t5 = (*(int *)((t7 + 0x10)));
                u9 = (float)t5;
                if (u9 > f4) {
                    break;
                }
                t5 = t4;
                t5 = (t5 + 0x4);
                t5 = (t5 + t8);
                u9 = (float)(*(int *)((t5 + 0x10)));
                if (u9 == f4) {
                    t5 = t4;
                    t5 = (t5 + 0x4);
                    t8 = (t8 + t5);
                    *(unsigned int *)((t3 + 0x0)) = (*(int *)((t8 + 0x14)));
                    t1 = (t1 + 0x1);
                    t3 = (t3 + 0x4);
                    t4 = ((((*(int *)((t4 + 0x0))) << 2) << 2) + t4);
                    t4 = (t4 + 0x4);
                    t2 = (t2 + 0x4);
                    if ((int)t1 >= (int)0x3) {
                        return t0;
                    }
                    t6 = 0x0;
                    continue;
                }
                t6 = (t6 + 0x1);
                continue;
            }
            t5 = t4;
            t5 = (t5 + 0x4);
            t5 = (t5 + t8);
            u9 = (float)(*(int *)((t5 + 0x10)));
            if (u9 == f4) {
                t5 = t4;
                t5 = (t5 + 0x4);
                t8 = (t8 + t5);
                *(unsigned int *)((t3 + 0x0)) = (*(int *)((t8 + 0x14)));
                t1 = (t1 + 0x1);
                t3 = (t3 + 0x4);
                t4 = ((((*(int *)((t4 + 0x0))) << 2) << 2) + t4);
                t4 = (t4 + 0x4);
                t2 = (t2 + 0x4);
                if ((int)t1 >= (int)0x3) {
                    return t0;
                }
                t6 = 0x0;
                continue;
            }
            t6 = (t6 + 0x1);
        }
        t26 = *(int *)((((t4 + 0x4) + t8) + 0x0));
        t0 = (fcvHermiteAngle(((t4 + 0x4) + t8), (((t4 + 0x4) + t8) + 0x10), ((f4 - (float)t26) / (float)((*(int *)(((((t4 + 0x4) + t8) + 0x10) + 0x0))) - t26))));
        *(unsigned int *)((t2 + 0x0)) = t0;
        t1 = (t1 + 0x1);
        t3 = (t3 + 0x4);
        t4 = ((((*(int *)((t4 + 0x0))) << 2) << 2) + t4);
        t4 = (t4 + 0x4);
        t2 = (t2 + 0x4);
        if ((int)t1 >= (int)0x3) {
            break;
        }
    }
    return t0;
}
