/* Straight-line functions with calls and guards (batch gen_pi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Put_TotalDrum_SetDigits(int a4, int a5);

int Put_TotalDrum_SetDigits(int a4, int a5)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t10;
    int t11;
    int t12;
    int t13;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t28;
    int t23;
    int t24;
    int t25;
    int t31;
    int t0;
    int t21;

    *(unsigned int *)0xC2A8DDC = 0x0;
    t1 = 0xC2A8DDC;
    t2 = 0x7;
    t3 = 0x0;
    for (;;) {
        t4 = *(int *)((a5 + (t2 << 2)));
        if (t4 != 0) {
            if (t4 != 10) {
                t0 = 0xC2A8DE4;
                t5 = *(int *)((t0 + 0x0));
                t1 = t5;
                if ((int)t2 > (int)t1) {
                    *(unsigned int *)0xC2A8DE4 = t2;
                }
            }
        }
        t1 = t2;
        t1 = (t1 + 0xB);
        *(unsigned int *)((0xC2A8D7C + (t2 << 2))) = t1;
        t10 = *(int *)((a5 + (t2 << 2)));
        t1 = t10;
        t1 = (t1 - t2);
        t1 = (t1 - 1);
        if ((int)t1 < 0) {
            t11 = *(int *)0xC2A8DE4;
            t0 = t11;
            t3 = 0x1;
            if ((int)t0 < (int)t2) {
                t12 = *(int *)((a5 + (t2 << 2)));
                t1 = t12;
                t1 = (t1 + 0xB);
                *(unsigned int *)((a5 + (t2 << 2))) = t1;
            } else {
                t13 = *(int *)((a5 + (t2 << 2)));
                t1 = t13;
                t1 = (t1 + 0xA);
                *(unsigned int *)((a5 + (t2 << 2))) = t1;
            }
        }
        t16 = *(int *)0xC2A8DE4;
        t0 = t16;
        if ((int)t0 < (int)t2) {
            t17 = *(int *)((a5 + (t2 << 2)));
            t1 = 0xC08106C;
            t18 = (int)((int)((t17 - t2) - 1) % (int)0xB);
            t21 = t18;
        } else {
            t19 = *(int *)((a5 + (t2 << 2)));
            t20 = (int)((int)((t19 - t2) - 1) % (int)0xA);
            t21 = t20;
        }
        *(unsigned int *)(((0xC2A8D9C + (t2 << 2)) + 0x0)) = t21;
        t28 = 0xC08106C;
        if (t3 == 1) {
            t23 = *(int *)0xC2A8DE4;
            t1 = t23;
            if ((int)t1 < (int)t2) {
                t24 = *(int *)((a5 + (t2 << 2)));
                t1 = t24;
                t1 = (t1 - 11);
                *(unsigned int *)((a5 + (t2 << 2))) = t1;
            } else {
                t25 = *(int *)((a5 + (t2 << 2)));
                t1 = t25;
                t1 = (t1 - 10);
                *(unsigned int *)((a5 + (t2 << 2))) = t1;
            }
            t28 = t1;
        }
        t31 = (t2 << 2);
        t1 = t28;
        t2 = (t2 - 1);
        *(unsigned int *)((t31 + 0xC2A8DBC)) = 0x0;
        if ((int)t2 < 0) {
            break;
        }
    }
    return 0xC2A8DBC;
}
