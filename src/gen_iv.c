/* Straight-line functions with calls and guards (batch gen_iv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int syG2AicaFifoWaitEmpty(void);
int syG2DmaResumeAll(void);
int syG2DmaSuspendAll(void);
int syG2FifoWaitEmpty(void);
int syG2Write(int a4, int a5, int a6, int a7, int a8, int a9);

int syG2Write(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t9;
    int t7;
    int t15;
    int t13;
    int t19;
    int t24;
    int t53;
    int t78;
    int t81;
    int t82;
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
    int stk[13];

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    if ((*(int *)((0xD4 + (*(int *)0xC178700)))) == 1) {
        *(unsigned int *)(((int)stk + 16)) = (_builtin_get_imask());
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
    syG2FifoWaitEmpty();
    t19 = *(int *)(((int)stk + 8));
    if (t19 != 1) {
        if (t19 != 2) {
            if (t19 == 4) {
                *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 4)));
                *(unsigned int *)(((int)stk + 4)) = a4;
                *(unsigned int *)(((int)stk + 12)) = (t9 << 2);
                if ((int)a7 > 0) {
                    t24 = 0x0;
                    for (;;) {
                        if ((t24 & 0x7) == 0) {
                            syG2FifoWaitEmpty();
                            syG2AicaFifoWaitEmpty();
                        } else {
                            t27 = t22;
                        }
                        t22 = t27;
                        t23 = (*(int *)(((int)stk + 4)));
                        t24 = (t24 + 0x1);
                        t22 = (*(int *)(((int)stk + 8)));
                        *(unsigned int *)((t22 + 0x0)) = (*(int *)((t23 + 0x0)));
                        t22 = (*(int *)(((int)stk + 4)));
                        t23 = (*(int *)(((int)stk + 12)));
                        t22 = (t22 + t23);
                        *(unsigned int *)(((int)stk + 4)) = t22;
                        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + (t15 << 2));
                        if ((int)t24 >= (int)a7) {
                            break;
                        }
                    }
                }
            }
        } else {
            *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 4)));
            *(unsigned int *)(((int)stk + 4)) = a4;
            if ((int)a7 > 0) {
                t53 = 0x0;
                for (;;) {
                    if ((t53 & 0x7) == 0) {
                        syG2FifoWaitEmpty();
                        syG2AicaFifoWaitEmpty();
                    } else {
                        t56 = t51;
                    }
                    t51 = t56;
                    t52 = (*(int *)(((int)stk + 4)));
                    t53 = (t53 + 0x1);
                    t51 = (*(int *)(((int)stk + 8)));
                    *(unsigned short *)((t51 + 0x0)) = (*(short *)((t52 + 0x0)));
                    t52 = (*(int *)(((int)stk + 4)));
                    t52 = (t52 + (t9 << 1));
                    *(unsigned int *)(((int)stk + 4)) = t52;
                    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + (t15 << 1));
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
                    syG2FifoWaitEmpty();
                    syG2AicaFifoWaitEmpty();
                } else {
                    t85 = t80;
                }
                t80 = t85;
                t81 = (*(int *)(((int)stk + 4)));
                t82 = (t82 + 0x1);
                t80 = (*(int *)(((int)stk + 8)));
                *(unsigned char *)((t80 + 0x0)) = (*(signed char *)((t81 + 0x0)));
                t81 = (*(int *)(((int)stk + 4)));
                t81 = (t81 + t9);
                *(unsigned int *)(((int)stk + 4)) = t81;
                *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + t15);
                if ((int)t82 >= (int)a7) {
                    break;
                }
            }
        }
    }
    syG2DmaResumeAll();
    if ((*(int *)((0xD4 + (*(int *)0xC178700)))) == 1) {
        _builtin_set_imask(((unsigned int)((((*(int *)(((int)stk + 16))) & 0xF) << 2) << 2) >> 4));
    }
    return 0x0;
}
