/* Straight-line functions with calls and guards (batch gen_uy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdc_CourseBlockFind(int a4, int a5, int a6, int a7);

int gdc_CourseBlockFind(int a4, int a5, int a6, int a7)
{
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t9;
    int t10;
    int t11;
    int t13;
    int t14;
    int t15;
    int t19;
    int t20;
    int t27;
    int t22;
    int t29;
    int t30;
    int t0;
    int t1;
    int t7;
    int t8;
    int t26;

    t2 = 0xC26C5DC;
    t3 = 0x0;
    t4 = a7;
    t5 = 0x0;
    t6 = 0xFFFFFFFF;
    t9 = 0xFFFFFFFF;
    for (;;) {
        t10 = *(signed char *)((t2 + 0x0));
        if ((t10 == 0) && ((int)t8 <= (int)a4)) {
            if (t9 == -1) {
                t11 = *(int *)((t2 + 0x8));
                t8 = t11;
                t9 = t3;
                t13 = *(int *)((t2 + 0xC));
                t4 = t13;
                t8 = (t8 + 0x1);
                t7 = 0x1;
            } else {
                t14 = *(int *)((t2 + 0x8));
                t1 = t14;
                t7 = (t7 + 0x1);
                t15 = *(int *)((t2 + 0xC));
                t1 = (t1 + 0x1);
                t4 = (t4 + t15);
                t8 = (t8 + t1);
            }
            t19 = *(int *)((t2 + 0x8));
            t1 = t19;
            t3 = (t3 + t1);
            t20 = (t1 + 0x1);
            t1 = (t1 + 0x1);
            t2 = (t2 + ((((t20 << 1) + t1) << 2) << 1));
        } else {
            if (t9 != -1) {
                t27 = t1;
                if ((int)t8 >= (int)a4) {
                    t0 = t4;
                    t1 = 0xC080F10;
                    t22 = (int)((int)t0 / (int)t7);
                    t4 = t22;
                    if ((t6 == -1) || ((int)t4 > (int)t5)) {
                        t5 = t4;
                        t6 = t9;
                    }
                    t27 = 0xC080F10;
                } else {
                    t26 = t0;
                }
                t0 = t26;
                t8 = 0x0;
                t1 = t27;
                t9 = 0xFFFFFFFF;
            }
            t29 = *(signed char *)((t2 + 0x0));
            if (t29 != 0) {
                t30 = *(int *)((t2 + 0x8));
                t0 = t30;
                t1 = (t0 + 0x1);
                t2 = (t2 + (((((t0 + 0x1) << 1) + t1) << 2) << 1));
                t3 = (t3 + t0);
            } else {
                t3 = (t3 - 1);
            }
        }
        t1 = 0x120;
        t3 = (t3 + 0x1);
        if ((int)t3 > (int)t1) {
            break;
        }
    }
    return t6;
}
