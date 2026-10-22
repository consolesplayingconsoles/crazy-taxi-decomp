/* Straight-line functions with calls and guards (batch gen_lh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c157ba0(int, int);
int FUN_0c157d20(int);
int FUN_0c157d58(int, int);
int kmiFBfree(int);
int kmiVQFBfree(int a4, int a5);

int kmiVQFBfree(int a4, int a5)
{
    int t1;
    int t2;
    int t30;
    int t4;
    int t5;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t24;
    int t62;
    int t35;
    int t42;
    int t36;
    int t37;
    int t38;
    int t53;
    int t46;
    int t47;
    int t50;
    int t28;
    int t3;
    int t6;
    int t7;
    int stk[12] = {0};

    FUN_0c157ba0(((int)stk + 4), a4);
    t1 = *(int *)0xC177FE4;
    t2 = *(int *)(((int)stk + 20));
    t30 = 0x0;
    if (t1 != 0) {
        t4 = t1;
        t5 = a5;
        t8 = 0x0;
        for (;;) {
            t9 = *(short *)((t4 + 0x0));
            t10 = *(int *)(((int)stk + 4));
            if (((unsigned short)t9 & 0xF000) == t10) {
                t5 = 0x0;
                if ((unsigned int)0x0 < (unsigned int)t2) {
                    for (;;) {
                        t3 = t5;
                        t3 = (t3 << 2);
                        t3 = (t3 + (t4 + 0xC));
                        t11 = *(int *)((t3 + 0x0));
                        if (t11 != 0) {
                            t12 = *(int *)(((int)stk + 8));
                            t7 = t12;
                            t13 = *(int *)((t4 + 0x8));
                            t7 = ((unsigned int)t7 >> 2);
                            t14 = *(int *)((a4 + 0x1C));
                            t7 = (t5 * t7);
                            t7 = (t7 << 2);
                            t7 = (t7 + t13);
                            if (t7 == t14) {
                                t6 = t5;
                                t8 = t4;
                                t4 = 0x0;
                                t5 = t2;
                            }
                        }
                        t5 = (t5 + 0x1);
                        if ((unsigned int)t5 >= (unsigned int)t2) {
                            break;
                        }
                    }
                }
            }
            if (t8 == 0) {
                t24 = *(int *)((t4 + 0x4));
                t4 = t24;
            }
            if (t4 == 0) {
                break;
            }
        }
        t28 = t6;
        t30 = t8;
    }
    t62 = 0x7;
    if (t30 != 0) {
        *(unsigned int *)((((t28 << 2) + (t30 + 0xC)) + 0x0)) = 0x0;
        t35 = *(int *)(((int)stk + 20));
        t42 = 0x0;
        if ((unsigned int)0x0 < (unsigned int)t35) {
            t36 = 0x0;
            t37 = 0x0;
            for (;;) {
                t38 = *(int *)((((t36 << 2) + (t30 + 0xC)) + 0x0));
                t36 = (t36 + 0x1);
                if (t38 != 0) {
                    t37 = 0x1;
                }
                if ((unsigned int)t36 >= (unsigned int)t35) {
                    break;
                }
            }
            t42 = t37;
        }
        t53 = 0x0;
        if (t42 == 0) {
            t46 = *(int *)((t30 + 0x8));
            t47 = kmiFBfree(t46);
            t50 = t47;
            if (t47 != 0) {
            } else {
                FUN_0c157d58(0xC177FE4, t30);
                FUN_0c157d20(t30);
                t50 = 0x0;
            }
            t53 = t50;
        }
        t62 = t53;
    }
    return t62;
}
