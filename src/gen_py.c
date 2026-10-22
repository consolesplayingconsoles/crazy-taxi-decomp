/* Straight-line functions with calls and guards (batch gen_py): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int menuDrawTree(void);

int menuDrawTree(void)
{
    int t1;
    int t2;
    int t9;
    int t10;
    int t11;
    int t13;
    float u14;
    int t39;
    int t41;
    int t0;
    int t8;
    int t12;
    int t31;
    int t34;
    int t35;
    float u36;

    *(float *)0xC2A1AD4 = 1.0f;
    *(unsigned int *)0xC2A11F0 = 0xC09DFE8;
    t1 = 0xC09DFE8;
    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)(*(int *)0xC2A11D8)) {
            break;
        }
        t1 = 0xC2A11D8;
        t1 = (t1 + 0x4);
        t0 = (*(int *)((((t2 << 2) + t1) + 0x0)));
        t2 = (t2 + 0x1);
        t0 = (t0 << 2);
        t0 = (t0 << 1);
        t0 = (t0 + (*(int *)0xC2A11F0));
        t1 = (*(int *)((t0 + 0x8)));
        *(unsigned int *)0xC2A11F0 = t1;
    }
    t9 = t0;
    t10 = t2;
    t11 = 0x0;
    t13 = 0x0;
    u14 = 1.0f;
    for (;;) {
        if ((int)t13 >= (int)(*(int *)(((*(int *)0xC2A11F0) + 0x4)))) {
            break;
        }
        t12 = t13;
        t12 = (t12 << 2);
        t12 = (t12 << 1);
        t12 = (t12 + (*(int *)0xC2A11F0));
        t12 = (*(int *)((t12 + 0xC)));
        if (t12 != 0) {
            t9 = (*(int *)(((((*(int *)0xC2A11D8) << 2) + 0xC2A11DC) + 0x0)));
            if (t13 != t9) {
                t11 = t13;
                t10 = 0x0;
            } else {
                t10 = 0x1;
                t11 = t13;
            }
            t8 = (((int (*)(int, int))(t12))(t10, t11));
        } else {
            t31 = t9;
            t34 = t10;
            t35 = t11;
            u36 = u14;
        }
        u14 = u36;
        t9 = t31;
        t13 = (t13 + 0x1);
        t10 = t34;
        t11 = t35;
    }
    t39 = *(int *)(((*(int *)0xC2A11F0) + 0x0));
    t41 = t8;
    if (t39 != 0) {
        t41 = (((int (*)(int, int))(t39))(t10, t11));
    }
    return t41;
}
