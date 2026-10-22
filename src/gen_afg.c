/* Straight-line functions with calls and guards (batch gen_afg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float fcvHermite(int, int, float);
float fcvCalcPosition(int a4, int a5, int a6, float f4);

float fcvCalcPosition(int a4, int a5, int a6, float f4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t7;
    int t8;
    int t9;
    int t24;
    float u4;
    int t5;
    int t6;
    float u10;

    t0 = 0x0;
    t1 = (0x0 + a5);
    t2 = (0x0 + a5);
    t3 = a4;
    for (;;) {
        t7 = 0x0;
        t8 = a5;
        t9 = a6;
        for (;;) {
            if ((int)t7 >= (int)((*(int *)((t3 + 0x0))) - 1)) {
                t0 = (t0 + 0x1);
                t2 = (t2 + 0x4);
                t3 = ((((*(int *)((t3 + 0x0))) << 2) << 2) + t3);
                t3 = (t3 + 0x4);
                t1 = (t1 + 0x4);
                if ((int)t0 >= (int)0x3) {
                    return u4;
                }
                t7 = 0x0;
                continue;
            }
            t9 = t7;
            t8 = t3;
            t9 = (t9 << 2);
            t8 = (t8 + 0x4);
            t9 = (t9 << 2);
            t8 = (t8 + t9);
            u10 = (float)(*(int *)((t8 + 0x0)));
            if (!(u10 > f4)) {
                u10 = (float)(*(int *)((t8 + 0x10)));
                if (u10 > f4) {
                    break;
                }
                t6 = (*(int *)((((t3 + 0x4) + t9) + 0x10)));
                u10 = (float)t6;
                if (u10 == f4) {
                    t5 = 0x14;
                    t9 = (t9 + (t3 + 0x4));
                    u10 = (*(float *)((t9 + t5)));
                    *(float *)((t2 + 0x0)) = u10;
                    t0 = (t0 + 0x1);
                    t2 = (t2 + 0x4);
                    t3 = ((((*(int *)((t3 + 0x0))) << 2) << 2) + t3);
                    t3 = (t3 + 0x4);
                    t1 = (t1 + 0x4);
                    if ((int)t0 >= (int)0x3) {
                        return u4;
                    }
                    t7 = 0x0;
                    continue;
                }
                t7 = (t7 + 0x1);
                continue;
            }
            t6 = (*(int *)((((t3 + 0x4) + t9) + 0x10)));
            u10 = (float)t6;
            if (u10 == f4) {
                t5 = 0x14;
                t9 = (t9 + (t3 + 0x4));
                u10 = (*(float *)((t9 + t5)));
                *(float *)((t2 + 0x0)) = u10;
                t0 = (t0 + 0x1);
                t2 = (t2 + 0x4);
                t3 = ((((*(int *)((t3 + 0x0))) << 2) << 2) + t3);
                t3 = (t3 + 0x4);
                t1 = (t1 + 0x4);
                if ((int)t0 >= (int)0x3) {
                    return u4;
                }
                t7 = 0x0;
                continue;
            }
            t7 = (t7 + 0x1);
        }
        t24 = *(int *)((((t3 + 0x4) + t9) + 0x0));
        u4 = (fcvHermite(((t3 + 0x4) + t9), (((t3 + 0x4) + t9) + 0x10), ((f4 - (float)t24) / (float)((*(int *)(((((t3 + 0x4) + t9) + 0x10) + 0x0))) - t24))));
        *(float *)((t1 + 0x0)) = u4;
        t0 = (t0 + 0x1);
        t2 = (t2 + 0x4);
        t3 = ((((*(int *)((t3 + 0x0))) << 2) << 2) + t3);
        t3 = (t3 + 0x4);
        t1 = (t1 + 0x4);
        if ((int)t0 >= (int)0x3) {
            break;
        }
    }
    return u4;
}
