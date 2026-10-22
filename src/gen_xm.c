/* Straight-line functions with calls and guards (batch gen_xm): generated from the code and checked by tests. Calls are
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
    int t26;
    int t27;
    int t30;
    int t31;
    int t33;
    int t41;
    int t42;
    int t43;
    int t3;
    int t15;
    int t34;
    int t37;
    int t38;
    float u39;

    t0 = *(int *)0xC2A1210;
    if (t0 != 0) {
        u1 = 0.19999999f;
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
            t26 = *(int *)0xC2A120C;
            t15 = (t15 << 2);
            t15 = (t15 << 1);
            t15 = (t15 + t26);
            t27 = *(int *)((t15 + 0xC));
            t15 = t27;
            if (t15 != 0) {
                t30 = *(int *)0xC2A11F4;
                t31 = *(int *)((((t30 << 2) + 0xC2A11F8) + 0x0));
                t12 = t31;
                if (t16 != t12) {
                    t14 = t16;
                    t13 = 0x0;
                } else {
                    t13 = 0x1;
                    t14 = t16;
                }
                t33 = ((int (*)(int, int))(t15))(t13, t14);
            } else {
                t34 = t12;
                t37 = t13;
                t38 = t14;
                u39 = u17;
            }
            u17 = u39;
            t12 = t34;
            t16 = (t16 + 0x1);
            t13 = t37;
            t14 = t38;
        }
        t41 = *(int *)0xC2A120C;
        t42 = *(int *)((t41 + 0x0));
        if (t42 != 0) {
            t43 = ((int (*)(int, int))(t42))(t13, t14);
        }
    }
}
