/* Straight-line functions with calls and guards (batch gen_ew): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0111e8(int a4, int a5);
int FUN_0c0112c6(int a4, int a5);

int FUN_0c0111e8(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t13;
    int stk[7] = {0};

    *(unsigned int *)(((int)stk + 4)) = (a5 + a4);
    t0 = *(signed char *)(((a5 + a4) + 0x0));
    *(unsigned char *)(((int)stk + 8)) = t0;
    t1 = *(int *)0xAC00F728;
    *(unsigned char *)((t1 + 0x18)) = 0x0;
    t2 = *(int *)0xAC00F728;
    *(unsigned char *)((t2 + 0x1C)) = 0x1;
    t3 = *(int *)0xAC00F728;
    *(unsigned char *)((t3 + 0x20)) = (short)((unsigned int)a5 >> 16);
    t4 = *(int *)0xAC00F728;
    *(unsigned char *)((t4 + 0x24)) = ((int)a5 >> 8);
    t5 = *(int *)0xAC00F728;
    *(unsigned char *)((t5 + 0x28)) = a5;
    t6 = *(int *)0xAC00F728;
    *(unsigned char *)((t6 + 0x2C)) = 0x0;
    t7 = ((int (*)(int, int))(0xAC01193A))(0x0, a5);
    t8 = *(int *)0xAC00F728;
    *(unsigned char *)((t8 + 0x14)) = 0x36;
    t9 = ((int (*)(void))(0xAC011958))();
    t10 = ((int (*)(void))(0xAC011958))();
    t11 = ((int (*)(void))(0xAC011958))();
    t12 = ((int (*)(void))(0xAC011958))();
    t14 = a4;
    for (;;) {
        t15 = *(int *)0xAC00F728;
        t16 = *(signed char *)((t15 + 0x8));
        if ((t16 & 0x4) != 0) {
            t17 = *(signed char *)((t15 + 0x0));
            t13 = t17;
            *(unsigned char *)((t14 + 0x0)) = t13;
            t14 = (t14 + 0x1);
            t18 = *(int *)0xAC00F728;
            t13 = t18;
            t19 = *(signed char *)((t13 + 0x4));
            *(unsigned char *)((t14 + 0x0)) = t19;
            t14 = (t14 + 0x1);
            continue;
        }
        t20 = *(signed char *)((t15 + 0x8));
        if ((t20 & 0x40) == 0) {
            break;
        }
    }
    t21 = ((int (*)(int, int, int))(0xAC0118F8))(t15, 0x4, 0x40);
    t22 = *(signed char *)(((int)stk + 8));
    t23 = *(int *)(((int)stk + 4));
    *(unsigned char *)((t23 + 0x0)) = t22;
    return t22;
}

int FUN_0c0112c6(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t12;
    int t13;

    t0 = *(int *)0xAC00F728;
    *(unsigned char *)((t0 + 0x18)) = 0x0;
    t1 = *(int *)0xAC00F728;
    *(unsigned char *)((t1 + 0x1C)) = 0x1;
    t2 = *(int *)0xAC00F728;
    *(unsigned char *)((t2 + 0x20)) = (short)((unsigned int)a5 >> 16);
    t3 = *(int *)0xAC00F728;
    *(unsigned char *)((t3 + 0x24)) = ((int)a5 >> 8);
    t4 = *(int *)0xAC00F728;
    *(unsigned char *)((t4 + 0x28)) = a5;
    t5 = *(int *)0xAC00F728;
    *(unsigned char *)((t5 + 0x2C)) = 0x0;
    t6 = ((int (*)(int, int))(0xAC01193A))(0x0, a5);
    t7 = *(int *)0xAC00F728;
    *(unsigned char *)((t7 + 0x14)) = 0x34;
    t8 = ((int (*)(void))(0xAC011958))();
    t9 = ((int (*)(void))(0xAC011958))();
    t10 = ((int (*)(void))(0xAC011958))();
    t11 = ((int (*)(void))(0xAC011958))();
    t14 = a4;
    for (;;) {
        t15 = *(int *)0xAC00F728;
        t16 = *(signed char *)((t15 + 0x8));
        if ((t16 & 0x4) != 0) {
            t17 = *(signed char *)((t14 + 0x0));
            t14 = (t14 + 0x1);
            t13 = t17;
            *(unsigned char *)((t15 + 0x0)) = t13;
            t18 = *(signed char *)((t14 + 0x0));
            t14 = (t14 + 0x1);
            t19 = *(int *)0xAC00F728;
            t12 = t19;
            *(unsigned char *)((t12 + 0x4)) = t18;
            continue;
        }
        t20 = *(signed char *)((t15 + 0x8));
        if ((t20 & 0x40) == 0) {
            break;
        }
    }
    t21 = ((int (*)(int, int, int))(0xAC0118F8))(t15, 0x40, 0x4);
    return t21;
}
