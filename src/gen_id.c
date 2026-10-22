/* Straight-line functions with calls and guards (batch gen_id): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c16e544(void);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int syG2AicaFifoWaitEmpty(void);
int syG2DmaResumeAll(void);
int syG2DmaSuspendAll(void);
int syG2Write(int a4, int a5, int a6, int a7, int a8, int a9);

int syG2Write(int a4, int a5, int a6, int a7, int a8, int a9)
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
    int t24;
    int t31;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t49;
    int t53;
    int t60;
    int t62;
    int t63;
    int t64;
    int t65;
    int t78;
    int t81;
    int t82;
    int t89;
    int t91;
    int t92;
    int t93;
    int t94;
    int t108;
    int t109;
    int t110;
    int t5;
    int t11;
    int t22;
    int t23;
    int t27;
    int t51;
    int t52;
    int t56;
    int t80;
    int t85;
    int stk[13] = {0};

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    t0 = *(int *)0xC178700;
    t1 = *(int *)((0xD4 + t0));
    if (t1 == 1) {
        t2 = _builtin_get_imask();
        *(unsigned int *)(((int)stk + 16)) = t2;
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
    t19 = *(int *)(((int)stk + 8));
    if (t19 != 1) {
        if (t19 != 2) {
            if (t19 == 4) {
                t20 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 8)) = t20;
                *(unsigned int *)(((int)stk + 4)) = a4;
                *(unsigned int *)(((int)stk + 12)) = (t9 << 2);
                if ((int)a7 > 0) {
                    t24 = 0x0;
                    for (;;) {
                        if ((t24 & 0x7) == 0) {
                            FUN_0c16e544();
                            syG2AicaFifoWaitEmpty();
                        } else {
                            t27 = t22;
                        }
                        t31 = *(int *)(((int)stk + 4));
                        t22 = t27;
                        t23 = t31;
                        t24 = (t24 + 0x1);
                        t33 = *(int *)(((int)stk + 8));
                        t22 = t33;
                        t34 = *(int *)((t23 + 0x0));
                        *(unsigned int *)((t22 + 0x0)) = t34;
                        t35 = *(int *)(((int)stk + 4));
                        t22 = t35;
                        t36 = *(int *)(((int)stk + 12));
                        t23 = t36;
                        t22 = (t22 + t23);
                        *(unsigned int *)(((int)stk + 4)) = t22;
                        t37 = *(int *)(((int)stk + 8));
                        *(unsigned int *)(((int)stk + 8)) = (t37 + (t15 << 2));
                        if ((int)t24 >= (int)a7) {
                            break;
                        }
                    }
                }
            }
        } else {
            t49 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 8)) = t49;
            *(unsigned int *)(((int)stk + 4)) = a4;
            if ((int)a7 > 0) {
                t53 = 0x0;
                for (;;) {
                    if ((t53 & 0x7) == 0) {
                        FUN_0c16e544();
                        syG2AicaFifoWaitEmpty();
                    } else {
                        t56 = t51;
                    }
                    t60 = *(int *)(((int)stk + 4));
                    t51 = t56;
                    t52 = t60;
                    t53 = (t53 + 0x1);
                    t62 = *(int *)(((int)stk + 8));
                    t51 = t62;
                    t63 = *(short *)((t52 + 0x0));
                    *(unsigned short *)((t51 + 0x0)) = t63;
                    t64 = *(int *)(((int)stk + 4));
                    t52 = t64;
                    t52 = (t52 + (t9 << 1));
                    *(unsigned int *)(((int)stk + 4)) = t52;
                    t65 = *(int *)(((int)stk + 8));
                    *(unsigned int *)(((int)stk + 8)) = (t65 + (t15 << 1));
                    if ((int)t53 >= (int)a7) {
                        break;
                    }
                }
            }
        }
    } else {
        t78 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 8)) = t78;
        *(unsigned int *)(((int)stk + 4)) = a4;
        if ((int)a7 > 0) {
            t81 = t78;
            t82 = 0x0;
            for (;;) {
                if ((t82 & 0x7) == 0) {
                    FUN_0c16e544();
                    syG2AicaFifoWaitEmpty();
                } else {
                    t85 = t80;
                }
                t89 = *(int *)(((int)stk + 4));
                t80 = t85;
                t81 = t89;
                t82 = (t82 + 0x1);
                t91 = *(int *)(((int)stk + 8));
                t80 = t91;
                t92 = *(signed char *)((t81 + 0x0));
                *(unsigned char *)((t80 + 0x0)) = t92;
                t93 = *(int *)(((int)stk + 4));
                t81 = t93;
                t81 = (t81 + t9);
                *(unsigned int *)(((int)stk + 4)) = t81;
                t94 = *(int *)(((int)stk + 8));
                *(unsigned int *)(((int)stk + 8)) = (t94 + t15);
                if ((int)t82 >= (int)a7) {
                    break;
                }
            }
        }
    }
    syG2DmaResumeAll();
    t108 = *(int *)0xC178700;
    t109 = *(int *)((0xD4 + t108));
    if (t109 == 1) {
        t110 = *(int *)(((int)stk + 16));
        _builtin_set_imask(((unsigned int)(((t110 & 0xF) << 2) << 2) >> 4));
    }
    return 0x0;
}
