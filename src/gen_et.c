/* Straight-line functions with calls and guards (batch gen_et): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckKyakuArea(int, int);
int FUN_0c05db72(void);
int FUN_0c07db90(int, int, int);
int FUN_0c1573cc(int);
int FUN_0c157d20(int);
int kmiResetBoard(void);
int kmiWriteRegister(int, int);
int kmytex_FBDeQueueEntry(int, int, int);
int kmytex_FBEnQueueEntry(int, int, int);
int mwRnaErrCallFunc(int, ...);
int mwlRnaIsCopyEnd(int);
int nlObjPutLoadTextureOnce_Sub(int, int, int, int, int);
int kyakuInDestArea(int a4);
int FUN_0c157580(int a4, int a5);
int kmiFBreset(void);
int kmiDiscardRenderPipeline(void);
int kmiFBgetfreememEx(int a4, int a5);
int kmStopDisplayFrameBuffer(void);
int mwlRnaWaitTransEnd(int a4);
int FUN_0c07dc10(int a4);
int FUN_0c07dc60(int a4);
int FUN_0c07a2a0(int a4, int a5);


int FUN_0c157580(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t8;
    int t9;
    int t11;
    int t12;
    int t46;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t34;
    int t35;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t37;
    int t38;
    int t45;
    int t65;
    int t55;
    int t13;
    int t14;
    int t15;
    int t16;
    int t18;
    int t39;
    int t40;
    int t43;
    int stk[10] = {0};

    t0 = *(int *)((a4 + 0x0));
    if (t0 != 0) {
        t1 = *(int *)((a4 + 0x0));
        t2 = t1;
        t3 = 0x0;
        for (;;) {
            t4 = *(int *)((t2 + 0xC));
            t5 = *(int *)((t1 + 0xC));
            t6 = t1;
            if ((int)t4 > (int)t5) {
                t6 = t2;
            }
            t8 = *(int *)((t2 + 0x8));
            t2 = t8;
            t3 = (t3 + 0x1);
            if (t2 == 0) {
                break;
            }
        }
        if ((int)t3 > (int)0x1) {
            t9 = *(int *)((a5 + 0x0));
            if (t9 != t6) {
                kmytex_FBDeQueueEntry(a4, a5, t6);
                t11 = *(int *)((a5 + 0x0));
                t12 = kmytex_FBEnQueueEntry(a5, t6, t11);
                t13 = t12;
            } else {
                t14 = t9;
                t15 = 0x1;
                t16 = t5;
                t18 = a5;
            }
            *(unsigned int *)(((int)stk + 4)) = 0x0;
            t46 = t13;
            if ((int)(t3 - 2) > 0) {
                t20 = t13;
                t21 = t14;
                t22 = t15;
                t23 = t16;
                t24 = t18;
                t25 = (t3 - 2);
                for (;;) {
                    t26 = *(int *)((a4 + 0x0));
                    t34 = t26;
                    t35 = t26;
                    if ((int)t25 > 0) {
                        t27 = 0x0;
                        t28 = t26;
                        t29 = t26;
                        for (;;) {
                            t30 = *(int *)((t29 + 0x8));
                            t29 = t30;
                            t31 = *(int *)((t28 + 0xC));
                            t23 = t31;
                            t32 = *(int *)((t29 + 0xC));
                            t22 = t32;
                            t27 = (t27 + 0x1);
                            if ((int)t22 > (int)t23) {
                                t28 = t29;
                            }
                            if ((int)t27 >= (int)t25) {
                                break;
                            }
                        }
                        t34 = t28;
                        t35 = t29;
                    }
                    if (t35 != t34) {
                        t24 = a5;
                        t37 = kmytex_FBDeQueueEntry(a4, t24, t34);
                        t20 = t37;
                        t24 = t34;
                        t38 = kmytex_FBEnQueueEntry(a5, t24, t35);
                        t20 = t38;
                    } else {
                        t39 = t21;
                        t40 = t22;
                        t43 = t24;
                    }
                    t45 = *(int *)(((int)stk + 4));
                    t21 = t39;
                    t22 = t40;
                    t23 = t45;
                    t24 = t43;
                    t25 = (t25 - 1);
                    t23 = (t23 + 0x1);
                    *(unsigned int *)(((int)stk + 4)) = t23;
                    if ((int)t23 >= (int)(t3 - 2)) {
                        break;
                    }
                }
                t46 = t20;
            }
            t55 = t46;
        }
        t65 = t55;
    }
    return t65;
}

int kmiFBreset(void)
{
    int t0;
    int t1;
    int t2;
    int t7;
    int t8;
    int t9;
    int t14;
    int t15;
    int t16;
    int t21;
    int t22;
    int t23;
    int t28;
    int t29;
    int t30;
    int t31;

    t0 = *(int *)0xC177FC4;
    if (t0 != 0) {
        t1 = t0;
        for (;;) {
            t2 = *(int *)((t1 + 0x8));
            FUN_0c1573cc(t1);
            t1 = t2;
            if (t1 == 0) {
                break;
            }
        }
    }
    t7 = *(int *)0xC177FBC;
    if (t7 != 0) {
        t8 = t7;
        for (;;) {
            t9 = *(int *)((t8 + 0x8));
            FUN_0c1573cc(t8);
            t8 = t9;
            if (t8 == 0) {
                break;
            }
        }
    }
    t14 = *(int *)0xC177FD8;
    if (t14 != 0) {
        t15 = t14;
        for (;;) {
            t16 = *(int *)((t15 + 0x8));
            FUN_0c1573cc(t15);
            t15 = t16;
            if (t15 == 0) {
                break;
            }
        }
    }
    t21 = *(int *)0xC177FD0;
    if (t21 != 0) {
        t22 = t21;
        for (;;) {
            t23 = *(int *)((t22 + 0x8));
            FUN_0c1573cc(t22);
            t22 = t23;
            if (t22 == 0) {
                break;
            }
        }
    }
    t28 = 0xC2BF67C;
    for (;;) {
        *(unsigned short *)((t28 + 0x0)) = 0x0;
        t28 = (t28 + 0x18);
        if ((unsigned int)t28 >= (unsigned int)0xC2D767C) {
            break;
        }
    }
    *(unsigned int *)0xC177FBC = 0x0;
    *(unsigned int *)0xC177FC0 = 0x0;
    *(unsigned int *)0xC177FC4 = 0x0;
    *(unsigned int *)0xC177FC8 = 0x0;
    *(unsigned int *)0xC177FCC = 0x0;
    *(unsigned int *)0xC177FD0 = 0x0;
    *(unsigned int *)0xC177FD4 = 0x0;
    *(unsigned int *)0xC177FD8 = 0x0;
    *(unsigned int *)0xC177FDC = 0x0;
    *(unsigned int *)0xC177FE0 = 0x0;
    t29 = *(int *)0xC177FE4;
    if (t29 != 0) {
        t30 = t29;
        for (;;) {
            t31 = *(int *)((t30 + 0x4));
            FUN_0c157d20(t30);
            t30 = t31;
            if (t30 == 0) {
                break;
            }
        }
    }
    *(unsigned int *)0xC177FE4 = 0x0;
    return 0x0;
}

int kmiDiscardRenderPipeline(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t13;
    int t26;
    int t14;
    int t22;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;

    *(unsigned int *)0xC2EA9CC = 0x0;
    *(unsigned int *)0xC2EA9D0 = 0xFFFFFFFF;
    *(unsigned int *)0xC2EA9D4 = 0xFFFFFFFF;
    *(unsigned int *)0xC2EA9D8 = 0xFFFFFFFF;
    *(unsigned int *)0xC2EA9DC = 0x0;
    *(unsigned int *)0xC2EA9E0 = 0x0;
    *(unsigned int *)0xC2EA9E4 = 0x0;
    *(unsigned int *)0xC2EA9F0 = 0x0;
    t0 = *(int *)0xC2EA888;
    if (t0 != 0) {
        for (;;) {
            t1 = *(int *)0xC2EA8E8;
            t2 = *(int *)0xC2EA8EC;
            t3 = ((int (*)(int))(t1))(t2);
            t4 = *(int *)0xC2EA9F0;
            if ((unsigned int)t4 <= (unsigned int)0xA) {
                t5 = *(int *)0xC2EA888;
                
                continue;
            }
        }
    }
    t13 = *(int *)0xC2EA9C4;
    t26 = 0xC2EA9C4;
    if (t13 == 0) {
        *(unsigned int *)0xC2EA9F0 = 0x0;
        t14 = *(int *)0xC2EA88C;
        t22 = 0xC2EA9C4;
        if (t14 != 0) {
            for (;;) {
                t15 = *(int *)0xC2EA8E8;
                t16 = *(int *)0xC2EA8EC;
                t17 = ((int (*)(int))(t15))(t16);
                t18 = *(int *)0xC2EA9F0;
                if ((unsigned int)t18 <= (unsigned int)0xA) {
                    t19 = *(int *)0xC2EA88C;
                    if (t19 == 0) {
                        t20 = 0xC2EA88C; t21 = t19; break;
                    }
                    continue;
                }
                t20 = t17; break;
            }
            t22 = t20;
        }
        t26 = t22;
    }
    *(unsigned int *)0xC2EA88C = 0x0;
    *(unsigned int *)0xC2EA888 = 0x0;
    return t26;
}

int kmiFBgetfreememEx(int a4, int a5)
{
    int t0;
    int t9;
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    int t10;
    int t23;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t19;
    int t24;
    int t31;
    int t25;
    int t26;
    int t27;
    int t28;
    int t30;
    int t34;
    int t45;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t43;
    int t20;
    int t11;

    t0 = *(int *)0xC177FC4;
    t9 = 0x0;
    if (t0 != 0) {
        t1 = t0;
        t2 = 0x0;
        for (;;) {
            t3 = *(int *)((t1 + 0x10));
            if ((int)t3 > (int)t2) {
                t4 = *(int *)((t1 + 0x10));
                t2 = t4;
            }
            t6 = *(int *)((t1 + 0x8));
            t1 = t6;
            if (t1 == 0) {
                break;
            }
        }
        t9 = t2;
    }
    t10 = *(int *)0xC177FBC;
    t23 = t9;
    if (t10 != 0) {
        t12 = t10;
        t13 = t9;
        for (;;) {
            t14 = *(short *)((t12 + 0x0));
            if (((unsigned short)t14 & 0x4) == 0) {
                t15 = *(int *)((t12 + 0x10));
                t11 = t15;
                if ((int)t11 > (int)t13) {
                    t16 = *(int *)((t12 + 0x10));
                    t13 = t16;
                }
            }
            t19 = *(int *)((t12 + 0x8));
            t12 = t19;
            if (t12 == 0) {
                break;
            }
        }
        t20 = t11;
        t23 = t13;
    }
    t24 = *(int *)0xC177FD8;
    t31 = 0x0;
    if (t24 != 0) {
        t25 = t24;
        t26 = 0x0;
        for (;;) {
            t27 = *(int *)((t25 + 0x10));
            if ((int)t27 > (int)t26) {
                t28 = *(int *)((t25 + 0x10));
                t26 = t28;
            }
            t30 = *(int *)((t25 + 0x8));
            t25 = t30;
            if (t25 == 0) {
                break;
            }
        }
        t31 = t26;
    }
    t34 = *(int *)0xC177FD0;
    t45 = t31;
    if (t34 != 0) {
        t35 = t20;
        t36 = t34;
        t37 = t31;
        for (;;) {
            t38 = *(short *)((t36 + 0x0));
            if (((unsigned short)t38 & 0x4) == 0) {
                t39 = *(int *)((t36 + 0x10));
                t35 = t39;
                if ((int)t35 > (int)t37) {
                    t40 = *(int *)((t36 + 0x10));
                    t37 = t40;
                }
            }
            t43 = *(int *)((t36 + 0x8));
            t36 = t43;
            if (t36 == 0) {
                break;
            }
        }
        t45 = t37;
    }
    *(unsigned int *)((a4 + 0x0)) = t23;
    *(unsigned int *)((a5 + 0x0)) = t45;
    return 0x0;
}

int kmStopDisplayFrameBuffer(void)
{
    int t0;
    int t2;
    int t6;
    int t8;
    int t10;
    int t11;

    t0 = *(int *)0xC2EA948;
    kmiWriteRegister(0x44, (t0 & 0xFFFFFFFE));
    t2 = *(int *)0xC2EA984;
    kmiWriteRegister(0xE8, (t2 | 0x8));
    kmiDiscardRenderPipeline();
    kmiResetBoard();
    t6 = *(int *)0xC2EA948;
    kmiWriteRegister(0x44, (t6 & 0xFFFFFFFE));
    t8 = *(int *)0xC2EA984;
    kmiWriteRegister(0xE8, (t8 | 0x8));
    t10 = *(int *)0xC2EA9F0;
    for (;;) {
        t11 = *(int *)0xC2EA9F0;
        if (t10 != t11) {
            break;
        }
    }
    *(unsigned int *)0xC2EA928 = 0x1;
    return 0x0;
}

int mwlRnaWaitTransEnd(int a4)
{
    int t2;
    int t3;
    int t4;
    int t5;
    int t9;
    int t8;
    int t0;
    int t1;

    *(unsigned int *)0xC17864C = 0x0;
    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        
        t2 = a4;
        t4 = mwlRnaIsCopyEnd(t2);
        t0 = t4;
        if (t0 != 1) {
            t2 = 0x1388;
            for (;;) {
                t2 = (t2 - 0x1);
                if (t2 == 0) {
                    break;
                }
            }
            t5 = *(int *)0xC17864C;
            t1 = t5;
            t3 = (t3 + 0x1);
            t1 = (t1 + 0x1);
            *(unsigned int *)0xC17864C = t1;
            continue;
        }
        break;
    }
    t9 = t0;
    if (t3 == 0xC8) {
        t8 = mwRnaErrCallFunc(0xC1766CC);
        t9 = t8;
    }
    return t9;
}

int FUN_0c07dc10(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = 0x0;
    t1 = a4;
    t2 = 0x0;
    for (;;) {
        t3 = *(int *)((t1 + 0x4));
        if (t3 == -1) {
            break;
        }
        t4 = FUN_0c07db90(a4, t2, 0x0);
        t2 = (t2 + 0x1);
        t1 = (t1 + 0x10);
        t0 = (t0 | t4);
    }
    return t0;
}

int FUN_0c07dc60(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = 0x0;
    t1 = a4;
    t2 = 0x0;
    for (;;) {
        t3 = *(int *)((t1 + 0x4));
        if (t3 == -1) {
            break;
        }
        t4 = FUN_0c07db90(a4, t2, 0x1);
        t2 = (t2 + 0x1);
        t1 = (t1 + 0x10);
        t0 = (t0 | t4);
    }
    return t0;
}

int FUN_0c07a2a0(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int stk[8] = {0};

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    t0 = 0x0;
    for (;;) {
        t1 = *(int *)(((int)stk + 8));
        t2 = *(int *)(((int)stk + 16));
        t3 = *(int *)(((int)stk + 12));
        t4 = nlObjPutLoadTextureOnce_Sub(t3, t2, t1, (((int)stk + 4) + 0x4), 0x1);
        t5 = *(int *)(((int)stk + 8));
        t0 = (t0 | t4);
        if (t5 == 0) {
            break;
        }
    }
    return t0;
}
