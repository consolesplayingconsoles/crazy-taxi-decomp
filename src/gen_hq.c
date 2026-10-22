/* Straight-line functions with calls and guards (batch gen_hq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int menuDrawTree(void);

int menuDrawTree(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    int t7;
    int t9;
    int t10;
    int t11;
    int t13;
    float u14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t22;
    int t30;
    int t31;
    int t33;
    int t32;
    int t0;
    int t8;
    int t12;
    int t23;
    int t26;
    int t27;
    float u28;

    *(float *)0xC2A1AD4 = 1.0f;
    *(unsigned int *)0xC2A11F0 = 0xC09DFE8;
    t1 = 0xC09DFE8;
    t2 = 0x0;
    for (;;) {
        t3 = *(int *)0xC2A11D8;
        if ((int)t2 >= (int)t3) {
            break;
        }
        t1 = 0xC2A11D8;
        t1 = (t1 + 0x4);
        t4 = *(int *)((((t2 << 2) + t1) + 0x0));
        t0 = t4;
        t2 = (t2 + 0x1);
        t6 = *(int *)0xC2A11F0;
        t0 = (t0 << 2);
        t0 = (t0 << 1);
        t0 = (t0 + t6);
        t7 = *(int *)((t0 + 0x8));
        t1 = t7;
        *(unsigned int *)0xC2A11F0 = t1;
    }
    t9 = t0;
    t10 = t2;
    t11 = 0x0;
    t13 = 0x0;
    u14 = 1.0f;
    for (;;) {
        t15 = *(int *)0xC2A11F0;
        t16 = *(int *)((t15 + 0x4));
        if ((int)t13 >= (int)t16) {
            break;
        }
        t12 = t13;
        t17 = *(int *)0xC2A11F0;
        t12 = (t12 << 2);
        t12 = (t12 << 1);
        t12 = (t12 + t17);
        t18 = *(int *)((t12 + 0xC));
        t12 = t18;
        if (t12 != 0) {
            t19 = *(int *)0xC2A11D8;
            t20 = *(int *)((((t19 << 2) + 0xC2A11DC) + 0x0));
            t9 = t20;
            if (t13 != t9) {
                t11 = t13;
                t10 = 0x0;
            } else {
                t10 = 0x1;
                t11 = t13;
            }
            t22 = ((int (*)(int, int))(t12))(t10, t11);
            t8 = t22;
        } else {
            t23 = t9;
            t26 = t10;
            t27 = t11;
            u28 = u14;
        }
        u14 = u28;
        t9 = t23;
        t13 = (t13 + 0x1);
        t10 = t26;
        t11 = t27;
    }
    t30 = *(int *)0xC2A11F0;
    t31 = *(int *)((t30 + 0x0));
    t33 = t8;
    if (t31 != 0) {
        t32 = ((int (*)(int, int))(t31))(t10, t11);
        t33 = t32;
    }
    return t33;
}
