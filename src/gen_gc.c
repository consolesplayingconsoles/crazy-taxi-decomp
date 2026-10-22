/* Straight-line functions with calls and guards (batch gen_gc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SJ_SplitChunk(int, int, int);
int mwRnaErrCallFunc(int, ...);
int mwlRnaAddWrPos(int a4);

int mwlRnaAddWrPos(int a4)
{
    int t3;
    int t4;
    int t5;
    int t6;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t0;
    int t1;
    int t2;
    int t9;
    int t10;
    int t11;
    int t12;
    int t15;
    int stk[16] = {0};

    t3 = a4;
    t4 = 0x0;
    for (;;) {
        t5 = *(signed char *)((a4 + 0x3));
        if ((int)t4 >= (int)(unsigned char)t5) {
            break;
        }
        t2 = a4;
        t1 = t4;
        t2 = (t2 + 0x10);
        t1 = (t1 << 2);
        t1 = (t1 + t2);
        t6 = *(int *)((t1 + 0x0));
        t0 = t6;
        if (t0 == 0) {
            mwRnaErrCallFunc(0xC1766A8);
        } else {
            t9 = t0;
            t10 = t1;
            t11 = t2;
            t12 = t3;
        }
        t0 = t9;
        t4 = (t4 + 0x1);
        t1 = t10;
        t2 = t11;
        t3 = t12;
    }
    t16 = 0xC171826;
    t17 = 0x0;
    for (;;) {
        t18 = *(signed char *)((a4 + 0x3));
        if ((int)t17 >= (int)(unsigned char)t18) {
            break;
        }
        t19 = *(int *)((((a4 + 0x18) + ((t17 << 2) << 1)) + 0x0));
        *(unsigned int *)(((int)stk + 24)) = t19;
        t20 = *(int *)(((((t17 << 2) << 1) + (a4 + 0x18)) + 0x4));
        *(unsigned int *)(((int)stk + 28)) = t20;
        t21 = *(int *)((a4 + 0x3C));
        t22 = *(int *)((a4 + 0x8));
        t23 = (int)((int)(t21 * t22) / (int)0x8);
        SJ_SplitChunk((((int)stk + 8) + 0x10), t23, (((int)stk + 8) + 0x8));
        t15 = a4;
        t16 = t17;
        t15 = (t15 + 0x10);
        t16 = (t16 << 2);
        t15 = (t15 + t16);
        t25 = *(int *)((t15 + 0x0));
        t15 = t25;
        t26 = *(int *)((t15 + 0x0));
        t27 = *(int *)((t26 + 0x20));
        t28 = ((int (*)(int, int, int))(t27))(t15, 0x0, (((int)stk + 8) + 0x8));
        t15 = a4;
        t15 = (t15 + 0x10);
        t15 = (t15 + t16);
        t29 = *(int *)((t15 + 0x0));
        t15 = t29;
        t30 = *(int *)((t15 + 0x0));
        t31 = *(int *)((t30 + 0x1C));
        t32 = ((int (*)(int, int, int))(t31))(t15, 0x1, ((int)stk + 8));
        t17 = (t17 + 0x1);
    }
    t33 = *(int *)((a4 + 0x2C));
    t34 = *(int *)((a4 + 0x3C));
    t35 = *(int *)((a4 + 0x28));
    t36 = (int)((int)(t33 + t34) % (int)t35);
    *(unsigned int *)((a4 + 0x2C)) = t36;
    t37 = *(int *)((a4 + 0x34));
    t38 = *(int *)((a4 + 0x3C));
    *(unsigned int *)((a4 + 0x34)) = (t37 + t38);
    t39 = *(int *)((a4 + 0x4C));
    t40 = *(int *)((a4 + 0x3C));
    *(unsigned int *)((a4 + 0x4C)) = (t39 + t40);
    *(unsigned int *)((a4 + 0x3C)) = 0x0;
    return 0x4C;
}
