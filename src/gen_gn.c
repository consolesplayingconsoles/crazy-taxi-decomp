/* Straight-line functions with calls and guards (batch gen_gn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c16e544(void);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int syG2DmaResumeAll(void);
int syG2DmaSuspendAll(void);
int syG2Read(int a4, int a5, int a6, int a7, int a8, int a9);

int syG2Read(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t0;
    int t1;
    int t2;
    int t9;
    int t7;
    int t15;
    int t13;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t34;
    int t35;
    int t36;
    int t37;
    int t48;
    int t49;
    int t50;
    int t51;
    int t63;
    int t64;
    int t65;
    int t5;
    int t11;
    int stk[10] = {0};

    *(unsigned int *)(((int)stk + 4)) = a6;
    t0 = *(int *)0xC178700;
    t1 = *(int *)((0xD4 + t0));
    if (t1 == 1) {
        t2 = _builtin_get_imask();
        *(unsigned int *)(((int)stk + 8)) = t2;
        _builtin_set_imask(0xF);
    }
    t9 = 0x0;
    if (a8 != 0) {
        t7 = 0x1;
        if (a8 != 1) {
            if (a8 != 2) {
            } else {
                t5 = 0xFFFFFFFF;
            }
            t7 = t5;
        }
        t9 = t7;
    }
    t15 = 0x0;
    if (a9 != 0) {
        t13 = 0x1;
        if (a9 != 1) {
            if (a9 != 2) {
            } else {
                t11 = 0xFFFFFFFF;
            }
            t13 = t11;
        }
        t15 = t13;
    }
    syG2DmaSuspendAll();
    FUN_0c16e544();
    t19 = *(int *)(((int)stk + 4));
    if (t19 != 1) {
        if (t19 != 2) {
            if (t19 == 4) {
                if ((int)a7 > 0) {
                    t20 = a5;
                    t21 = a4;
                    t22 = 0x0;
                    for (;;) {
                        t23 = *(int *)((t21 + 0x0));
                        t22 = (t22 + 0x1);
                        t21 = (t21 + (t9 << 2));
                        *(unsigned int *)((t20 + 0x0)) = t23;
                        t20 = (t20 + (t15 << 2));
                        if ((int)t22 >= (int)a7) {
                            break;
                        }
                    }
                }
            }
        } else {
            if ((int)a7 > 0) {
                t34 = a5;
                t35 = 0x0;
                t36 = a4;
                for (;;) {
                    t37 = *(short *)((t36 + 0x0));
                    t35 = (t35 + 0x1);
                    t36 = (t36 + (t9 << 1));
                    *(unsigned short *)((t34 + 0x0)) = t37;
                    t34 = (t34 + (t15 << 1));
                    if ((int)t35 >= (int)a7) {
                        break;
                    }
                }
            }
        }
    } else {
        if ((int)a7 > 0) {
            t48 = 0x0;
            t49 = a4;
            t50 = a5;
            for (;;) {
                t51 = *(signed char *)((t49 + 0x0));
                t48 = (t48 + 0x1);
                t49 = (t49 + t9);
                *(unsigned char *)((t50 + 0x0)) = t51;
                t50 = (t50 + t15);
                if ((int)t48 >= (int)a7) {
                    break;
                }
            }
        }
    }
    syG2DmaResumeAll();
    t63 = *(int *)0xC178700;
    t64 = *(int *)((0xD4 + t63));
    if (t64 == 1) {
        t65 = *(int *)(((int)stk + 8));
        _builtin_set_imask(((unsigned int)(((t65 & 0xF) << 2) << 2) >> 4));
    }
    return 0x0;
}
