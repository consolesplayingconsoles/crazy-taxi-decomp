/* Draft: generated C that the check did not accept (DIFFERS case 1: calls). Not proven equivalent. */



void menuDrawTree(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;

    *(float *)0xC2A1AD4 = 1.0f;
    *(unsigned int *)0xC2A11F0 = 0xC09DFE8;
    t0 = 0xC09DFE8;
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)0xC2A11D8;
        if ((int)t1 >= (int)t2) break;
        t0 = 0xC2A11D8;
        t0 = (t0 + 0x4);
        t3 = *(int *)((((t1 << 2) + t0) + 0x0));
        t1 = (t1 + 0x1);
        t5 = *(int *)0xC2A11F0;
        t6 = *(int *)(((((t3 << 2) << 1) + t5) + 0x8));
        t0 = t6;
        *(unsigned int *)0xC2A11F0 = t0;
    }
    t7 = 0x0;
    for (;;) {
        t8 = *(int *)0xC2A11F0;
        t9 = *(int *)((t8 + 0x4));
        if ((int)t7 >= (int)t9) break;
        t10 = *(int *)0xC2A11F0;
        t11 = *(int *)(((((t7 << 2) << 1) + t10) + 0xC));
        if (t11 != 0) {
            t12 = *(int *)0xC2A11D8;
            t13 = *(int *)((((t12 << 2) + 0xC2A11DC) + 0x0));
            t14 = 0x1;
            if (t7 != t13) {
                t14 = 0x0;
            }
            t15 = ((int (*)(int, int))(t11))(t14, t7);
        }
        t7 = (t7 + 0x1);
    }
    t16 = *(int *)0xC2A11F0;
    t17 = *(int *)((t16 + 0x0));
    if (t17 != 0) {
        t18 = ((int (*)(int, int))(t17))(t1, 0x0);
    }
}

