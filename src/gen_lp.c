/* Straight-line functions with calls and guards (batch gen_lp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void ExecWindow(int a4, int a5);

void ExecWindow(int a4, int a5)
{
    int t0;
    float u1;
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t9;
    int t10;
    int t12;
    int t13;
    int t14;
    int t16;
    float u17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t25;
    int t33;
    int t34;
    int t35;
    int t3;
    int t15;
    int t26;
    int t29;
    int t30;
    float u31;

    t0 = *(int *)0xC2A1210;
    if (t0 != 0) {
        u1 = *(float *)0xC03B898;
        *(float *)0xC2A1AD4 = u1;
        t2 = *(int *)0xC2A1210;
        *(unsigned int *)0xC2A120C = t2;
        t4 = t2;
        t5 = 0x0;
        for (;;) {
            t6 = *(int *)0xC2A11F4;
            if ((int)t5 >= (int)t6) {
                break;
            }
            t4 = 0xC2A11F4;
            t4 = (t4 + 0x4);
            t7 = *(int *)((((t5 << 2) + t4) + 0x0));
            t3 = t7;
            t5 = (t5 + 0x1);
            t9 = *(int *)0xC2A120C;
            t3 = (t3 << 2);
            t3 = (t3 << 1);
            t3 = (t3 + t9);
            t10 = *(int *)((t3 + 0x8));
            t4 = t10;
            *(unsigned int *)0xC2A120C = t4;
        }
        t12 = t3;
        t13 = t5;
        t14 = 0x0;
        t16 = 0x0;
        u17 = u1;
        for (;;) {
            t18 = *(int *)0xC2A120C;
            t19 = *(int *)((t18 + 0x4));
            if ((int)t16 >= (int)t19) {
                break;
            }
            t15 = t16;
            t20 = *(int *)0xC2A120C;
            t15 = (t15 << 2);
            t15 = (t15 << 1);
            t15 = (t15 + t20);
            t21 = *(int *)((t15 + 0xC));
            t15 = t21;
            if (t15 != 0) {
                t22 = *(int *)0xC2A11F4;
                t23 = *(int *)((((t22 << 2) + 0xC2A11F8) + 0x0));
                t12 = t23;
                if (t16 != t12) {
                    t14 = t16;
                    t13 = 0x0;
                } else {
                    t13 = 0x1;
                    t14 = t16;
                }
                t25 = ((int (*)(int, int))(t15))(t13, t14);
            } else {
                t26 = t12;
                t29 = t13;
                t30 = t14;
                u31 = u17;
            }
            u17 = u31;
            t12 = t26;
            t16 = (t16 + 0x1);
            t13 = t29;
            t14 = t30;
        }
        t33 = *(int *)0xC2A120C;
        t34 = *(int *)((t33 + 0x0));
        if (t34 != 0) {
            t35 = ((int (*)(int, int))(t34))(t13, t14);
        }
    }
}
