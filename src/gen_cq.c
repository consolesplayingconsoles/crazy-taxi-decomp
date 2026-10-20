/* Straight-line functions with calls and guards (batch gen_cq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c05324e(void);
int FUN_0c0532ea(int);
int FUN_0c05a350(int);
int FUN_0c07e580(int, int, float, float, float, float);
float FUN_0c089de0(int);
int FUN_0c1566a0(int, int);
int FUN_0c1568cc(int, int, int);
int GetMenuMode(int);
int Sound_Request(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
int free(void);
float nlCos(int);
int nlGetMatrix(int);
int nlLoadMatrix(int, int);
float nlScalor(int);
float nlSin(int);
int nlSprPutPosSet(float, float, float, float);
int nlSpriteF2C(float);
int nlsndIcsControl(int, int, int);
int GS_GuestOut(void);
int FUN_0c14f7ac(int a4, int a5);
int FUN_0c059310(void);
int FUN_0c156742(int a4, int a5);
int InitSetObject(float f4);
int FUN_0c05a0f0(void);
float FUN_0c077b80(int a4, int a5, float f4, float f5);
int FUN_0c020a10(int a4);
int nlSprPut(int a4);

int GS_GuestOut(void)
{
    int t0;
    int t1;
    int t2;
    int t27;
    int t3;
    int t4;
    int t5;
    int t6;
    int t12;
    int t13;
    int t14;
    int t36;
    int t37;
    int t38;
    int t32;
    int t22;

    t0 = *(int *)0xC1EE210;
    if (t0 != 2) {
        t1 = *(int *)0xC1EE7CC;
        t2 = *(int *)0xC1EE7D4;
        t27 = 0x0;
        if ((int)t1 > (int)t2) {
            t3 = *(int *)0xC1EE7D8;
            if ((int)t1 < (int)t3) {
                t4 = *(int *)0xC1EE210;
                if (t4 != 2) {
                    t5 = GetMenuMode(0x1);
                    if (t5 == 0) {
                        t6 = *(int *)0xC1EE798;
                        *(unsigned int *)0xC1EE798 = (t6 + 0x78);
                    }
                }
                t22 = 0x1;
            } else {
                t12 = *(int *)0xC1EE210;
                if (t12 != 2) {
                    t13 = GetMenuMode(0x1);
                    if (t13 == 0) {
                        t14 = *(int *)0xC1EE798;
                        *(unsigned int *)0xC1EE798 = (t14 + 0x12C);
                    }
                }
                t22 = 0x2;
            }
            t27 = t22;
        }
        t32 = t27;
    }
    *(unsigned int *)0xC1EE78C = 0x0;
    t36 = *(int *)0xC1EE79C;
    *(unsigned int *)0xC1EE79C = (t36 + 0x1);
    *(unsigned int *)0xC1EE7DC = 0x1;
    t37 = *(int *)0xC1EE7E0;
    *(unsigned int *)0xC1EE7E0 = (t37 + 0x1);
    t38 = *(int *)0xC1EE7CC;
    *(unsigned int *)0xC1EE7B0 = (((t38 << 2) + t38) << 1);
    *(unsigned int *)0xC1EE7A0 = 0x0;
    *(unsigned int *)0xC1EE7CC = 0x0;
    FUN_0c05324e();
    FUN_0c0532ea(t32);
    *(unsigned int *)0xC1EE7E8 = 0x384;
    *(unsigned int *)0xC1EE7F4 = 0x0;
    return t32;
}

int FUN_0c14f7ac(int a4, int a5)
{
    int t0;
    int t1;
    int t3;
    int t2;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t16;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t1 = *(int *)(((a4 - 32) + 0x4));
    t3 = (((unsigned int)((unsigned int)((unsigned int)(a5 + 0x1F) >> 2) >> 2) >> 1) + 0x1);
    if ((unsigned int)(((unsigned int)((unsigned int)((unsigned int)(a5 + 0x1F) >> 2) >> 2) >> 1) + 0x1) > (unsigned int)t1) {
        t2 = *(int *)(((a4 - 32) + 0x4));
        t3 = t2;
    }
    free();
    t5 = *(int *)0xC2B9358;
    t6 = *(int *)((t5 + 0x0));
    t7 = t6;
    t8 = t5;
    for (;;) {
        t9 = *(int *)((t7 + 0x4));
        if ((unsigned int)t9 >= (unsigned int)(((unsigned int)((unsigned int)((unsigned int)(a5 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) break;
        if (t7 == t5) {
            _builtin_set_imask(((unsigned int)((((unsigned short)t0 & 0xF) << 2) << 2) >> 4));
            return 0x0;
        }
        t8 = t7;
        t10 = *(int *)((t7 + 0x0));
        t7 = t10;
    }
    t11 = *(int *)((t7 + 0x4));
    if (t11 == (((unsigned int)((unsigned int)((unsigned int)(a5 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) {
        t12 = *(int *)((t7 + 0x0));
        *(unsigned int *)((t8 + 0x0)) = t12;
        t16 = t7;
    } else {
        *(unsigned int *)((t7 + 0x4)) = (t11 - (((unsigned int)((unsigned int)((unsigned int)(a5 + 0x1F) >> 2) >> 2) >> 1) + 0x1));
        t16 = (t7 + ((((t11 - (((unsigned int)((unsigned int)((unsigned int)(a5 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) << 2) << 2) << 1));
    }
    if (a4 != (t16 + 0x20)) {
        if ((unsigned int)a4 < (unsigned int)(t16 + 0x20)) {
            if ((unsigned int)(((((t3 << 2) << 2) << 1) + t16) + 0x20) > (unsigned int)(t16 + 0x20)) {
                t17 = (((((t3 << 2) << 2) << 1) + t16) + 0x20);
                t18 = a4;
                do {
                    t19 = t18;
                    t18 = (t18 - 32);
                    t20 = t17;
                    t17 = (t17 - 32);
                    t21 = *(int *)((t19 + 0x1C));
                    *(unsigned int *)((t20 + 0x1C)) = t21;
                    t22 = *(int *)((t19 + 0x18));
                    *(unsigned int *)((t20 + 0x18)) = t22;
                    t23 = *(int *)((t19 + 0x14));
                    *(unsigned int *)((t20 + 0x14)) = t23;
                    t24 = *(int *)((t19 + 0x10));
                    *(unsigned int *)((t20 + 0x10)) = t24;
                    t25 = *(int *)((t19 + 0xC));
                    *(unsigned int *)((t20 + 0xC)) = t25;
                    t26 = *(int *)((t19 + 0x8));
                    *(unsigned int *)((t20 + 0x8)) = t26;
                    t27 = *(int *)((t19 + 0x4));
                    *(unsigned int *)((t20 + 0x4)) = t27;
                    t28 = *(int *)((t19 + 0x0));
                    *(unsigned int *)((t20 + 0x0)) = t28;
                } while ((unsigned int)t17 > (unsigned int)(t16 + 0x20));
            }
        } else {
            if ((unsigned int)a4 > (unsigned int)(t16 + 0x20)) {
                if ((unsigned int)(t16 + 0x20) < (unsigned int)(((((t3 << 2) << 2) << 1) + t16) + 0x20)) {
                    t34 = (t16 + 0x20);
                    t35 = a4;
                    do {
                        t36 = t35;
                        t35 = (t35 + 0x20);
                        t37 = t34;
                        t34 = (t34 + 0x20);
                        t38 = *(int *)((t36 + 0x1C));
                        *(unsigned int *)((t37 + 0x1C)) = t38;
                        t39 = *(int *)((t36 + 0x18));
                        *(unsigned int *)((t37 + 0x18)) = t39;
                        t40 = *(int *)((t36 + 0x14));
                        *(unsigned int *)((t37 + 0x14)) = t40;
                        t41 = *(int *)((t36 + 0x10));
                        *(unsigned int *)((t37 + 0x10)) = t41;
                        t42 = *(int *)((t36 + 0xC));
                        *(unsigned int *)((t37 + 0xC)) = t42;
                        t43 = *(int *)((t36 + 0x8));
                        *(unsigned int *)((t37 + 0x8)) = t43;
                        t44 = *(int *)((t36 + 0x4));
                        *(unsigned int *)((t37 + 0x4)) = t44;
                        t45 = *(int *)((t36 + 0x0));
                        *(unsigned int *)((t37 + 0x0)) = t45;
                    } while ((unsigned int)t34 < (unsigned int)(((((t3 << 2) << 2) << 1) + t16) + 0x20));
                }
            }
        }
    }
    *(unsigned int *)((t16 + 0x4)) = (((unsigned int)((unsigned int)((unsigned int)(a5 + 0x1F) >> 2) >> 2) >> 1) + 0x1);
    *(unsigned int *)0xC2B9358 = t8;
    _builtin_set_imask(((unsigned int)((((unsigned short)t0 & 0xF) << 2) << 2) >> 4));
    return (t16 + 0x20);
}

int FUN_0c059310(void)
{
    int t0;
    int t7;
    int t3;
    int t1;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t17;
    int t15;
    int t19;
    int t20;
    int t21;
    int t22;
    int stk[10] = {0};

    t0 = *(int *)0xC2A97D8;
    t7 = ((((0x5 - t0) << 1) + (0x5 - t0)) + 0x14);
    if ((int)t0 > (int)0x5) {
        t3 = 0x28;
        if (t0 != 0x3E7) {
            t1 = 0x14;
            if (t0 == 99) {
                t1 = 0x28;
            }
            t3 = t1;
        }
        t7 = t3;
    }
    t8 = 0x0;
    t9 = 0xC2A982C;
    t10 = 0xC2A97AC;
    t11 = ((0x0 + t7) + 0x1);
    do {
        *(unsigned int *)(((int)stk + 4)) = ((t8 + t7) + 0x1);
        *(unsigned int *)(((t8 << 2) + 0xC2A97EC)) = ((t8 + t7) + 0x1);
        t12 = *(int *)(((int)stk + 4));
        t13 = *(int *)((0xC2A97AC + (t8 << 2)));
        t14 = (int)((int)t12 % (int)0xA);
        t17 = 0x0;
        if ((int)(t13 - t14) < 0) {
            t15 = *(int *)((0xC2A97AC + (t8 << 2)));
            *(unsigned int *)((0xC2A97AC + (t8 << 2))) = (t15 + 0xA);
            t17 = 0x1;
        }
        t19 = *(int *)((0xC2A97AC + (t8 << 2)));
        t20 = (int)((int)t11 % (int)0xA);
        t21 = (int)((int)(t19 - t20) % (int)0xA);
        *(unsigned int *)(((0xC2A980C + (t8 << 2)) + 0x0)) = t21;
        if ((int)t17 > 0) {
            t22 = *(int *)((t10 + 0x0));
            *(unsigned int *)((t10 + 0x0)) = (t22 - 10);
        }
        t8 = (t8 + 0x1);
        *(unsigned int *)((t9 + 0x0)) = 0x0;
        t10 = (t10 + 0x4);
        t9 = (t9 + 0x4);
        t11 = (t11 + 0x1);
    } while ((int)t8 < (int)0x8);
    return t21;
}

int FUN_0c156742(int a4, int a5)
{
    int t0;
    int t1;
    int t3;
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
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
    int t68;
    int t69;
    int t70;
    int t71;
    int t72;
    int t73;
    int t74;
    int t75;
    int t76;
    int t77;
    int t78;
    int t4;
    int t6;
    int t5;
    int t2;
    int stk[11] = {0};

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    t0 = ((~(((~a4) + 0x1) & 0x1F)) + 0x1);
    if ((int)a4 >= 0) {
        t0 = (a4 & 0x1F);
    }
    t1 = a4;
    if (t0 != 0) {
        t1 = (a4 + (0x20 - t0));
        t2 = (0x20 - t0);
    }
    t3 = *(int *)0xC177FC4;
    if (t3 != 0) {
        t7 = t0;
        t8 = t2;
        t9 = t0;
        t10 = 0x0;
        t11 = t3;
        for (;;) {
            t12 = *(int *)((t11 + 0x10));
            if ((int)t12 >= (int)t1) {
                t13 = *(int *)(((int)stk + 4));
                t9 = t13;
                t14 = *(int *)((t11 + 0x10));
                t8 = t14;
                t15 = *(int *)((t11 + 0xC));
                t16 = *(int *)((t9 + 0x18));
                t9 = t16;
                t17 = (t15 + t8);
                t8 = t9;
                if ((t8 & 0x1) != 0) {
                    if ((0x8 & t9) == 0) {
                        if ((0x20 & t9) == 0) {
                            t18 = *(int *)(((int)stk + 4));
                            t9 = t11;
                            t19 = FUN_0c1566a0(t9, t1);
                            t7 = t19;
                            t9 = t7;
                            if ((int)t9 >= 0) {
                                if ((int)t9 <= (int)(t17 - t1)) {
                                    t20 = t9;
                                    for (;;) {
                                        t21 = *(int *)0xC177FB0;
                                        t9 = 0x1;
                                        t22 = FUN_0c1568cc(t9, (t21 + t20), t1);
                                        t7 = t22;
                                        t9 = t7;
                                        if (t9 != 0) {
                                            t20 = (t20 + 0x800);
                                            if ((int)t20 > (int)(t17 - t1)) break;
                                            continue;
                                        }
                                        t7 = t20;
                                        return t7;
                                    }
                                    *(unsigned int *)(((int)stk + 8)) = 0x2;
                                    if (t10 == 0) {
                                        t23 = *(int *)((t11 + 0xC));
                                        if ((int)t23 <= (int)(t17 - t1)) {
                                            t24 = t23;
                                            do {
                                                t25 = *(int *)0xC177FB0;
                                                t9 = 0x1;
                                                t26 = FUN_0c1568cc(t9, (t25 + t24), t1);
                                                t7 = t26;
                                                t9 = t7;
                                                if (t9 == 0) {
                                                    t10 = t24;
                                                    t24 = (t17 - t1);
                                                }
                                                t24 = (t24 + 0x20);
                                            } while ((int)t24 <= (int)(t17 - t1));
                                        }
                                    }
                                    t31 = *(int *)((t11 + 0x8));
                                    t11 = t31;
                                    if (t11 == 0) {
                                        t32 = *(int *)(((int)stk + 8));
                                        t7 = t32;
                                        if (t7 == 2) {
                                            if (t10 != 0) {
                                                t7 = t10;
                                                return t7;
                                            }
                                            t7 = 0xFFFFFFFF;
                                            return t7;
                                        }
                                        t7 = 0xFFFFFFFF;
                                        return t7;
                                    }
                                    continue;
                                }
                                *(unsigned int *)(((int)stk + 8)) = 0x2;
                                if (t10 == 0) {
                                    t33 = *(int *)((t11 + 0xC));
                                    if ((int)t33 <= (int)(t17 - t1)) {
                                        t34 = t33;
                                        do {
                                            t35 = *(int *)0xC177FB0;
                                            t9 = 0x1;
                                            t36 = FUN_0c1568cc(t9, (t35 + t34), t1);
                                            t7 = t36;
                                            t9 = t7;
                                            if (t9 == 0) {
                                                t10 = t34;
                                                t34 = (t17 - t1);
                                            }
                                            t34 = (t34 + 0x20);
                                        } while ((int)t34 <= (int)(t17 - t1));
                                    }
                                }
                                t41 = *(int *)((t11 + 0x8));
                                t11 = t41;
                                if (t11 == 0) {
                                    t42 = *(int *)(((int)stk + 8));
                                    t7 = t42;
                                    if (t7 == 2) {
                                        if (t10 != 0) {
                                            t7 = t10;
                                            return t7;
                                        }
                                        t7 = 0xFFFFFFFF;
                                        return t7;
                                    }
                                    t7 = 0xFFFFFFFF;
                                    return t7;
                                }
                                continue;
                            }
                            *(unsigned int *)(((int)stk + 8)) = 0x2;
                            if (t10 == 0) {
                                t43 = *(int *)((t11 + 0xC));
                                if ((int)t43 <= (int)(t17 - t1)) {
                                    t44 = t43;
                                    do {
                                        t45 = *(int *)0xC177FB0;
                                        t9 = 0x1;
                                        t46 = FUN_0c1568cc(t9, (t45 + t44), t1);
                                        t7 = t46;
                                        t9 = t7;
                                        if (t9 == 0) {
                                            t10 = t44;
                                            t44 = (t17 - t1);
                                        }
                                        t44 = (t44 + 0x20);
                                    } while ((int)t44 <= (int)(t17 - t1));
                                }
                            }
                            t51 = *(int *)((t11 + 0x8));
                            t11 = t51;
                            if (t11 == 0) {
                                t52 = *(int *)(((int)stk + 8));
                                t7 = t52;
                                if (t7 == 2) {
                                    if (t10 != 0) {
                                        t7 = t10;
                                        return t7;
                                    }
                                    t7 = 0xFFFFFFFF;
                                    return t7;
                                }
                                t7 = 0xFFFFFFFF;
                                return t7;
                            }
                            continue;
                        }
                        *(unsigned int *)(((int)stk + 8)) = 0x1;
                        t53 = *(int *)((t11 + 0xC));
                        if ((int)t53 <= (int)(t17 - t1)) {
                            t54 = t53;
                            do {
                                t55 = *(int *)0xC177FB0;
                                t9 = 0x1;
                                t56 = FUN_0c1568cc(t9, (t55 + t54), t1);
                                t7 = t56;
                                t9 = t7;
                                if (t9 == 0) {
                                    t7 = t54;
                                    return t7;
                                }
                                t54 = (t54 + 0x20);
                            } while ((int)t54 <= (int)(t17 - t1));
                            t57 = *(int *)((t11 + 0x8));
                            t11 = t57;
                            if (t11 == 0) {
                                t58 = *(int *)(((int)stk + 8));
                                t7 = t58;
                                if (t7 == 2) {
                                    if (t10 != 0) {
                                        t7 = t10;
                                        return t7;
                                    }
                                    t7 = 0xFFFFFFFF;
                                    return t7;
                                }
                                t7 = 0xFFFFFFFF;
                                return t7;
                            }
                            continue;
                        }
                        t59 = *(int *)((t11 + 0x8));
                        t11 = t59;
                        if (t11 == 0) {
                            t60 = *(int *)(((int)stk + 8));
                            t7 = t60;
                            if (t7 == 2) {
                                if (t10 != 0) {
                                    t7 = t10;
                                    return t7;
                                }
                                t7 = 0xFFFFFFFF;
                                return t7;
                            }
                            t7 = 0xFFFFFFFF;
                            return t7;
                        }
                        continue;
                    }
                    *(unsigned int *)(((int)stk + 8)) = 0x1;
                    t61 = *(int *)((t11 + 0xC));
                    if ((int)t61 <= (int)(t17 - t1)) {
                        t62 = t61;
                        do {
                            t63 = *(int *)0xC177FB0;
                            t9 = 0x1;
                            t64 = FUN_0c1568cc(t9, (t63 + t62), t1);
                            t7 = t64;
                            t9 = t7;
                            if (t9 == 0) {
                                t7 = t62;
                                return t7;
                            }
                            t62 = (t62 + 0x20);
                        } while ((int)t62 <= (int)(t17 - t1));
                        t65 = *(int *)((t11 + 0x8));
                        t11 = t65;
                        if (t11 == 0) {
                            t66 = *(int *)(((int)stk + 8));
                            t7 = t66;
                            if (t7 == 2) {
                                if (t10 != 0) {
                                    t7 = t10;
                                    return t7;
                                }
                                t7 = 0xFFFFFFFF;
                                return t7;
                            }
                            t7 = 0xFFFFFFFF;
                            return t7;
                        }
                        continue;
                    }
                    t67 = *(int *)((t11 + 0x8));
                    t11 = t67;
                    if (t11 == 0) {
                        t68 = *(int *)(((int)stk + 8));
                        t7 = t68;
                        if (t7 == 2) {
                            if (t10 != 0) {
                                t7 = t10;
                                return t7;
                            }
                            t7 = 0xFFFFFFFF;
                            return t7;
                        }
                        t7 = 0xFFFFFFFF;
                        return t7;
                    }
                    continue;
                }
                *(unsigned int *)(((int)stk + 8)) = 0x1;
                t69 = *(int *)((t11 + 0xC));
                if ((int)t69 <= (int)(t17 - t1)) {
                    t70 = t69;
                    do {
                        t71 = *(int *)0xC177FB0;
                        t9 = 0x1;
                        t72 = FUN_0c1568cc(t9, (t71 + t70), t1);
                        t7 = t72;
                        t9 = t7;
                        if (t9 == 0) {
                            t7 = t70;
                            return t7;
                        }
                        t70 = (t70 + 0x20);
                    } while ((int)t70 <= (int)(t17 - t1));
                    t73 = *(int *)((t11 + 0x8));
                    t11 = t73;
                    if (t11 == 0) {
                        t74 = *(int *)(((int)stk + 8));
                        t7 = t74;
                        if (t7 == 2) {
                            if (t10 != 0) {
                                t7 = t10;
                                return t7;
                            }
                            t7 = 0xFFFFFFFF;
                            return t7;
                        }
                        t7 = 0xFFFFFFFF;
                        return t7;
                    }
                    continue;
                }
                t75 = *(int *)((t11 + 0x8));
                t11 = t75;
                if (t11 == 0) {
                    t76 = *(int *)(((int)stk + 8));
                    t7 = t76;
                    if (t7 == 2) {
                        if (t10 != 0) {
                            t7 = t10;
                            return t7;
                        }
                        t7 = 0xFFFFFFFF;
                        return t7;
                    }
                    t7 = 0xFFFFFFFF;
                    return t7;
                }
                continue;
            }
            t77 = *(int *)((t11 + 0x8));
            t11 = t77;
            if (t11 == 0) {
                t78 = *(int *)(((int)stk + 8));
                t7 = t78;
                if (t7 == 2) {
                    if (t10 != 0) {
                        t7 = t10;
                        return t7;
                    }
                    t7 = 0xFFFFFFFF;
                    return t7;
                }
                t7 = 0xFFFFFFFF;
                return t7;
            }
        }
    }
    t4 = *(int *)(((int)stk + 8));
    t6 = 0xFFFFFFFF;
    if (t4 == 2) {
        t5 = 0xFFFFFFFF;
        if (0x0 != 0) {
            t5 = 0x0;
        }
        t6 = t5;
    }
    return t6;
}

int InitSetObject(float f4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    float u5;
    int t6;
    int t7;
    int t8;
    int t9;
    float u10;
    int t11;
    int t12;
    float t13;
    float u14;
    float u15;
    int t17;
    int t18;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t37;
    int t38;
    int t23;
    int t58;
    int t53;
    int t49;
    int t45;
    int t42;
    int t39;
    int stk[13] = {0};

    t0 = 0xC038498;
    t1 = 0x0;
    t2 = 0xC0EDBC0;
    t3 = 0xC0EDBC0;
    t4 = 0xC0EDBC0;
    u5 = f4;
    while ((int)t1 < (int)0x1C) {
        t6 = *(int *)((t3 + 0x0));
        *(unsigned int *)(((int)stk + 4)) = t6;
        t7 = *(int *)((t3 + 0x4));
        t8 = 0x0;
        t9 = t7;
        u10 = 0.0f;
        for (;;) {
            t11 = *(int *)((t2 + 0x8));
            if ((int)t8 >= (int)t11) break;
            t12 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t12 + 0xC);
            t13 = nlScalor(((t12 + 0xC) - 12));
            t0 = t13;
            t0 = 0x4;
            u14 = *(float *)((t9 + t0));
            u5 = t13;
            if (u14 > 0.0f) {
                u15 = *(float *)((t9 + t0));
                u5 = (u5 + u15);
            }
            t9 = (t9 + 0x8);
            if (u5 > u10) {
                u10 = u5;
            }
            t8 = (t8 + 0x1);
        }
        t0 = 0x1C;
        *(float *)((t4 + t0)) = u10;
        t0 = 0x20;
        t2 = (t2 + 0x24);
        t3 = (t3 + 0x24);
        t1 = (t1 + 0x1);
        *(float *)((t4 + t0)) = (2.5f / (u10 * u10));
        t4 = (t4 + 0x24);
    }
    t17 = *(int *)0xC1EE20C;
    if (t17 == 2) {
        t18 = *(int *)0xC1EE214;
        if (t18 != 9) {
            *(float *)0xC2757E8 = 3.40282347e+38f;
            *(float *)0xC2757EC = 3.40282347e+38f;
        } else {
            *(float *)0xC2757E8 = 1800.0f;
            *(float *)0xC2757EC = 2000.0f;
        }
        t23 = 0xC1EE214;
    } else {
        *(float *)0xC2757E8 = 1800.0f;
        *(float *)0xC2757EC = 2000.0f;
    }
    t26 = t23;
    t27 = 0x0;
    t28 = 0x0;
    while ((int)t28 < (int)0x3F) {
        t29 = *(int *)0xC0EDBB8;
        t26 = t29;
        t28 = (t28 + 0x1);
        t26 = (t26 + t27);
        t27 = (t27 + 0x20);
        *(unsigned int *)((t26 + 0x1C)) = 0x0;
    }
    t30 = *(int *)0xC1EE20C;
    if (t30 == 0) {
        t31 = *(int *)0xC0EDBB8;
        *(unsigned int *)(((t31 + 0x300) + 0x14)) = 0x0;
        t32 = *(int *)0xC0EDBB8;
        *(unsigned short *)(((0x300 + t32) + 0x10)) = 0x0;
    }
    t37 = *(int *)0xC1EE20C;
    if (t37 == 2) {
        t38 = *(int *)0xC1EE214;
        if (t38 == 3) {
            *(unsigned int *)0xC2757F0 = 0x0;
            *(unsigned int *)0xC2757F4 = 0x1;
            t53 = t38;
        } else {
            if (t38 == 1) {
                *(unsigned int *)0xC2757F0 = 0x1;
                *(unsigned int *)0xC2757F4 = 0x3;
                t49 = t38;
            } else {
                if (t38 == 8) {
                    *(unsigned int *)0xC2757F0 = 0x3;
                    *(unsigned int *)0xC2757F4 = 0x4;
                    t45 = t38;
                } else {
                    if (t38 == 9) {
                        *(unsigned int *)0xC2757F0 = 0x4;
                        *(unsigned int *)0xC2757F4 = 0xA;
                        t42 = t38;
                    } else {
                        if (t38 == 14) {
                            *(unsigned int *)0xC2757F0 = 0xA;
                            *(unsigned int *)0xC2757F4 = 0x18;
                            t39 = t38;
                        } else {
                            *(unsigned int *)0xC2757F0 = 0x18;
                            *(unsigned int *)0xC2757F4 = 0x3A;
                            t39 = 0x18;
                        }
                        t42 = t39;
                    }
                    t45 = t42;
                }
                t49 = t45;
            }
            t53 = t49;
        }
        t58 = t53;
    } else {
        if (t37 == 1) {
            *(unsigned int *)0xC2757F0 = 0x0;
            *(unsigned int *)0xC2757F4 = 0x3F;
        } else {
            *(unsigned int *)0xC2757F0 = 0x0;
            *(unsigned int *)0xC2757F4 = 0x3A;
        }
        t58 = t37;
    }
    return t58;
}

int FUN_0c05a0f0(void)
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
    int t12;
    int t13;
    int t14;
    int t21;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    float u38;
    int t43;
    int t45;
    int t46;
    float u47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    float u54;
    int t55;
    int t63;
    int t64;
    int t70;
    int t65;
    int t66;
    int t67;
    int t28;
    int stk[14] = {0};

    t0 = *(int *)0xC2A978C;
    t1 = (int)((int)(t0 + 0x1) % (int)0x4);
    *(unsigned int *)0xC2A978C = t1;
    if (t1 == 0) {
        *(unsigned int *)(((int)stk + 4)) = 0xC2A982C;
        *(unsigned int *)(((int)stk + 8)) = 0xC130E00;
        t2 = t1;
        t3 = 0x0;
        t4 = 0xC2A982C;
        t5 = 0x0;
        do {
            t6 = *(int *)((0xC2A97EC + (t3 << 2)));
            if ((int)t6 > 0) {
                t7 = *(int *)((0xC2A97EC + t5));
                *(unsigned int *)((0xC2A97EC + t5)) = (t7 - 1);
                t8 = *(int *)(((t5 + 0xC2A980C) + 0x0));
                t9 = (int)((int)(t8 + 0x1) % (int)0xA);
                *(unsigned int *)(((t5 + 0xC2A980C) + 0x0)) = t9;
            } else {
                t10 = *(int *)((t4 + 0x0));
                if (t10 == 0) {
                    Sound_Request(0x205A9, 0x0);
                    t12 = *(int *)(((int)stk + 8));
                    t2 = t12;
                    t13 = *(int *)((t2 + 0x0));
                    *(unsigned int *)((t2 + 0x0)) = (t13 + 0x1);
                    t14 = *(int *)(((int)stk + 4));
                    t2 = t14;
                    *(unsigned int *)((t2 + 0x0)) = 0x1;
                }
            }
            t21 = *(int *)(((int)stk + 4));
            t3 = (t3 + 0x1);
            t4 = (t4 + 0x4);
            *(unsigned int *)(((int)stk + 4)) = (t21 + 0x4);
            t5 = (t5 + 0x4);
        } while ((int)t3 < (int)0x8);
        t28 = t3;
    }
    t29 = t28;
    t30 = 0x0;
    for (;;) {
        if ((int)t30 >= (int)0x5) {
            t29 = 0xFFFFFFFC;
        }
        if ((int)t30 <= (int)0x4) {
            t29 = 0x10;
        }
        if ((int)t30 <= (int)0x1) {
            t29 = 0x20;
        }
        t31 = FUN_0c05a350(t30);
        if (t31 == 1) {
            *(unsigned int *)(((int)stk + 4)) = (t30 << 2);
            t32 = *(int *)((0xC2A980C + (t30 << 2)));
            t33 = *(int *)(((t32 << 2) + 0xC130E18));
            *(unsigned int *)0xC2A96F8 = t33;
            *(unsigned int *)0xC2A972C = 0x200E;
            *(float *)0xC2A9714 = 0.0f;
            t34 = *(int *)(((int)stk + 4));
            t35 = *(int *)((t34 + 0xC2A982C));
            if (t35 == 0) {
                t36 = *(int *)0xC2A978C;
                *(float *)0xC2A971C = (1.0f - ((float)t36 * 0.25f));
                t37 = *(int *)0xC2A978C;
                u38 = *(float *)0xC2A9758;
                *(float *)0xC2A970C = ((u38 - ((float)t37 * 0.25f)) + 1.0f);
            } else {
                *(float *)0xC2A971C = 1.0f;
                *(float *)0xC2A970C = 1.0f;
            }
            *(float *)0xC2A96FC = (float)(((((((0x7 - t30) << 2) << 2) + (0x7 - t30)) << 1) + t29) + 0x7A);
            t43 = *(int *)0xC2A9748;
            *(float *)0xC2A9700 = (float)(t43 + 0xF8);
            *(unsigned int *)0xC2A9720 = 0x0;
            nlSprPut(0xC2A96F8);
            t45 = *(int *)(((int)stk + 4));
            t46 = *(int *)((t45 + 0xC2A982C));
            if (t46 == 0) {
                u47 = *(float *)0xC2A9700;
                t48 = *(int *)0xC2A9748;
                *(float *)0xC2A9700 = (u47 - (float)(t48 + 0x40));
                t49 = *(int *)(((int)stk + 4));
                t50 = *(int *)((0xC2A980C + t49));
                t51 = (int)((int)(t50 + 0x1) % (int)0xA);
                t52 = *(int *)((0xC130E18 + (t51 << 2)));
                *(unsigned int *)0xC2A96F8 = t52;
                *(unsigned int *)0xC2A972C = 0x2006;
                t53 = *(int *)0xC2A978C;
                u54 = *(float *)0xC2A9758;
                *(float *)0xC2A970C = (u54 + 0.25f * (float)t53);
                t55 = *(int *)0xC2A978C;
                *(float *)0xC2A9714 = (1.0f - ((float)t55 * 0.25f));
                *(float *)0xC2A971C = 1.0f;
                nlSprPut(0xC2A96F8);
            }
        }
        t30 = (t30 + 0x1);
        if ((int)t30 < (int)0x8) continue;
        break;
    }
    t63 = *(int *)0xC2A96F4;
    t64 = *(int *)0xC2A97A8;
    t70 = 0xC2A96F4;
    if ((int)t63 < (int)t64) {
        t65 = *(int *)0xC2A984C;
        t66 = *(int *)((0xC2A982C + (t65 << 2)));
        if (t66 == 1) {
            t67 = *(int *)0xC2A984C;
            *(unsigned int *)0xC2A984C = (t67 + 0x1);
        }
        t70 = t66;
    }
    return t70;
}

float FUN_0c077b80(int a4, int a5, float f4, float f5)
{
    int t2;
    int t0;
    int t4;
    int t5;
    int t6;
    float u7;
    float u8;
    int t9;
    int t10;
    float u11;
    int t12;
    float u13;
    float u14;
    int t19;
    int t20;
    float u23;
    int t24;
    int t25;
    int t26;
    float u27;
    float u28;
    int t29;
    int t30;
    float u31;
    int t32;
    float u33;
    float u34;
    int t37;
    int t38;
    int t39;
    float u40;
    int t42;
    int t1;
    int t3;
    float u17;
    int stk[17] = {0};

    *(unsigned int *)(((int)stk + 12)) = a4;
    t2 = a4;
    if (a4 == 0) {
        t0 = nlGetMatrix(0x0);
        t1 = t0;
        t2 = t0;
    } else {
        t3 = a5;
    }
    t4 = t1;
    t5 = t3;
    t6 = 0x0;
    u7 = f4;
    u8 = f5;
    for (;;) {
        if ((int)t6 >= (int)0x4) {
            t6 = 0x0;
            *(unsigned int *)(((int)stk + 8)) = (a5 + 0x4);
            t9 = (a5 + 0x4);
            t10 = 0x0;
            u11 = 1.0f;
            while ((int)t6 < (int)0x4) {
                t10 = t6;
                u8 = (-1.0f);
                if ((int)t10 < (int)0x4) {
                    do {
                        t4 = t10;
                        t12 = *(signed char *)((a5 + t4));
                        t9 = t2;
                        t4 = t12;
                        t4 = (t4 << 2);
                        t4 = (t4 << 2);
                        t4 = (t4 + t9);
                        t9 = t12;
                        u13 = *(float *)(((t6 << 2) + t4));
                        t9 = (t9 << 2);
                        t9 = (t9 + (((int)stk + 4) + 0xC));
                        u14 = *(float *)((t9 + 0x0));
                        u7 = (u13 < 0.0f ? -u13 : u13);
                        u7 = (u7 * u14);
                        if (u7 > u8) {
                            t5 = t10;
                            u8 = u7;
                        }
                        t10 = (t10 + 0x1);
                    } while ((int)t10 < (int)0x4);
                    u17 = u14;
                }
                t19 = *(signed char *)(((t5 + a5) + 0x0));
                t10 = t19;
                if (t5 != t6) {
                    t20 = *(signed char *)(((t6 + a5) + 0x0));
                    u11 = (-u11);
                    *(unsigned char *)(((t5 + a5) + 0x0)) = t20;
                    *(unsigned char *)(((t6 + a5) + 0x0)) = t10;
                }
                t4 = t2;
                t4 = (t4 + ((t10 << 2) << 2));
                u23 = *(float *)(((t6 << 2) + t4));
                u7 = u23;
                u11 = (u11 * u7);
                if (u7 != 0.0f) {
                    t24 = ((t6 + 0x1) + a5);
                    t25 = ((t10 << 2) << 2);
                    t26 = (t5 + a5);
                    u27 = u17;
                    u28 = 0.0f;
                    for (;;) {
                        t29 = *(int *)(((int)stk + 8));
                        if ((unsigned int)t24 >= (unsigned int)t29) break;
                        t30 = *(signed char *)((t24 + 0x0));
                        t10 = t30;
                        t24 = (t24 + 0x1);
                        t4 = t2;
                        t5 = (t6 + 0x1);
                        t10 = (t10 << 2);
                        t10 = (t10 << 2);
                        t4 = (t4 + t10);
                        u31 = *(float *)(((t6 << 2) + t4));
                        u8 = u31;
                        u8 = (u8 / u7);
                        *(float *)(((t6 << 2) + t4)) = u8;
                        if ((int)t5 < (int)0x4) {
                            do {
                                t26 = t5;
                                t26 = (t26 << 2);
                                u27 = u8;
                                t4 = t2;
                                *(unsigned int *)(((int)stk + 4)) = t4;
                                t4 = (t4 + t10);
                                t32 = *(int *)(((int)stk + 4));
                                t9 = t32;
                                t5 = (t5 + 0x1);
                                t9 = (t9 + t25);
                                t9 = (t9 + t26);
                                u33 = *(float *)((t9 + 0x0));
                                u28 = u33;
                                u27 = (u27 * u28);
                                u34 = *(float *)((t26 + t4));
                                u28 = u34;
                                u28 = (u28 - u27);
                                *(float *)((t26 + t4)) = u28;
                            } while ((int)t5 < (int)0x4);
                        }
                    }
                    t6 = (t6 + 0x1);
                    continue;
                }
                return u11;
            }
            t37 = *(int *)(((int)stk + 12));
            if (t37 == 0) {
                t38 = nlLoadMatrix(t2, t5);
                t4 = t38;
                return u11;
            }
            return u11;
        }
        t4 = t6;
        t5 = 0x0;
        *(unsigned char *)((a5 + t4)) = t4;
        u7 = 0.0f;
        t39 = ((t4 << 2) << 2);
        while ((int)t5 < (int)0x4) {
            t4 = t2;
            t4 = (t4 + t39);
            u40 = *(float *)(((t5 << 2) + t4));
            u8 = (u40 < 0.0f ? -u40 : u40);
            t5 = (t5 + 0x1);
            if (u8 > u7) {
                u7 = u8;
            }
        }
        if (u7 == 0.0f) break;
        t42 = ((t6 << 2) + (((int)stk + 4) + 0xC));
        t6 = (t6 + 0x1);
        *(float *)((t42 + 0x0)) = (1.0f / u7);
    }
    return 0.0f;
}

int FUN_0c020a10(int a4)
{
    int t0;
    float u1;
    int t3;
    int t7;
    int t8;
    int t9;
    float t10;
    int t11;
    int t13;
    int t25;
    int t26;
    float u27;
    float t28;
    int t29;
    int t30;
    int t31;
    int t34;
    int t35;
    int t55;
    int t56;
    int t57;
    int t58;
    float u59;
    float u60;
    int t61;
    int t62;
    int t64;
    int t65;
    int t66;
    int t67;
    int t68;
    float u69;
    int t70;
    int t71;
    int t72;
    int t74;
    int t75;
    int t76;
    int t77;
    int t78;
    float u79;
    int t80;
    int t81;
    float u82;
    int t83;
    int t84;
    int t86;
    int t87;
    int t88;
    int t89;
    int t90;
    float u91;
    int t92;
    int t93;
    int t94;
    int t96;
    int t97;
    int t98;
    int t99;
    int t100;
    float u101;
    int t102;
    int t103;
    float u104;
    float u105;
    int t106;
    int t108;
    int t109;
    int t110;
    int t111;
    int t112;
    float u113;
    int t114;
    int t115;
    int t116;
    int t117;
    int t119;
    int t120;
    int t121;
    int t122;
    int t123;
    float u124;
    int t125;
    int t126;
    int t127;
    float u128;
    float u129;
    int t130;
    int t132;
    int t133;
    int t134;
    int t135;
    int t136;
    float u137;
    int t138;
    int t139;
    int t140;
    int t141;
    int t143;
    int t144;
    int t145;
    int t146;
    int t147;
    float u148;
    int t149;
    int t150;
    float u151;
    int t152;
    int t154;
    int t155;
    int t156;
    int t157;
    int t158;
    float u159;
    int t160;
    int t161;
    int t162;
    int t164;
    int t165;
    int t166;
    int t167;
    int t168;
    float u169;
    int t170;
    int t171;
    int t172;
    int t173;
    int t175;
    int t176;
    int t177;
    int t178;
    int t179;
    float u180;
    int t181;
    int t182;
    int t183;
    int t185;
    int t186;
    int t187;
    int t188;
    int t189;
    float u190;
    int t191;
    int t192;
    float u193;
    int t194;
    int t195;
    int t197;
    int t198;
    int t199;
    int t200;
    int t201;
    float u202;
    int t203;
    int t204;
    int t205;
    int t207;
    int t208;
    int t209;
    int t210;
    int t211;
    float u212;
    int t213;
    int t214;
    float u215;
    float u216;
    int t217;
    int t219;
    int t220;
    int t221;
    int t222;
    int t223;
    float u224;
    int t225;
    int t226;
    int t227;
    int t228;
    int t230;
    int t231;
    int t232;
    int t233;
    int t234;
    float u235;
    int t236;
    int t237;
    int t238;
    float u239;
    float u240;
    int t241;
    int t243;
    int t244;
    int t245;
    int t246;
    int t247;
    float u248;
    int t249;
    int t250;
    int t251;
    int t252;
    int t254;
    int t255;
    int t256;
    int t257;
    int t258;
    float u259;
    int t260;
    int t261;
    float u262;
    float u263;
    float u264;
    float u265;
    int t266;
    int t268;
    int t269;
    int t270;
    int t271;
    int t272;
    float u273;
    int t274;
    int t275;
    int t276;
    int t278;
    int t279;
    int t280;
    int t281;
    int t282;
    float u283;
    int t284;
    int t285;
    int t286;
    int t288;
    int t289;
    int t290;
    int t291;
    int t292;
    float u293;
    int t294;
    int t295;
    int t296;
    int t298;
    int t299;
    int t300;
    int t301;
    int t302;
    float u303;
    int t304;
    int t305;
    int t306;
    int t308;
    int t309;
    int t310;
    int t311;
    int t312;
    float u313;
    int t314;
    int t315;
    float u316;
    float u317;
    int t318;
    int t320;
    int t321;
    int t322;
    int t323;
    int t324;
    float u325;
    int t326;
    int t327;
    int t328;
    int t330;
    int t331;
    int t332;
    int t333;
    int t334;
    float u335;
    int t336;
    int t337;
    int t338;
    int t340;
    int t341;
    int t342;
    int t343;
    int t344;
    float u345;
    int t346;
    int t347;
    int t348;
    int t350;
    int t351;
    int t352;
    int t353;
    int t354;
    float u355;
    int t356;
    int t357;
    float u358;
    float u359;
    int t360;
    float u361;
    int t362;
    float u368;
    float u369;
    int t370;
    int t381;
    float u382;
    float u383;
    int t384;
    float u395;
    int t402;
    float u403;
    int t404;
    float u410;
    float u411;
    int t412;
    int t423;
    float u424;
    float u425;
    int t426;
    float u443;
    float u444;
    int t451;
    float u445;
    float u446;
    float u447;
    int t448;
    float u459;
    float u460;
    float u461;
    int t462;
    int t484;
    int t486;
    int t487;
    int t489;
    int t490;
    float u488;
    int t492;
    int t494;
    int t51;
    int t22;
    int t17;
    int t476;
    int t465;
    int t493;

    t0 = *(int *)0xC179488;
    if ((int)t0 < (int)0x4) {
        u1 = *(float *)((a4 + 0x158));
        t3 = ((int)(((u1 < 0.0f ? -u1 : u1) + -4500.0f) * 0.022499999f) + 0x12);
        if (4500.0f > (u1 < 0.0f ? -u1 : u1)) {
            t3 = (int)((u1 < 0.0f ? -u1 : u1) * 0.00399999972f);
        }
        t7 = t3;
        if ((int)t3 <= 0) {
            t7 = 0x2;
        }
        t8 = t7;
        if ((int)t7 > (int)0x62) {
            t8 = 0x62;
        }
        t9 = *(int *)0xC1EE330;
        t10 = FUN_0c089de0((unsigned short)(((t9 << 8) << 2) << 2));
        t11 = *(int *)0xC2A11B0;
        if (t11 == 1) {
            nlsndIcsControl(0x0, 0xA6, 0x0);
        } else {
            t13 = *(int *)0xC1794AC;
            if ((t13 & 0x1) == 0) {
                t17 = 0xC2A11B0;
            } else {
                nlsndIcsControl(0x0, 0xA6, (t8 + (int)t10));
            }
            t22 = t17;
        }
        t51 = t22;
    } else {
        t25 = *(int *)((a4 + 0x54));
        if (t25 != 0) {
            if (t25 != 3) {
                t26 = *(int *)0xC1EE330;
                u27 = *(float *)((a4 + 0x158));
                t28 = FUN_0c089de0((unsigned short)(t26 << 13));
                t29 = (int)((((u27 * 0.0149999997f) < 0.0f ? -(u27 * 0.0149999997f) : (u27 * 0.0149999997f)) - (t28 * 0.799999952f)) + 1.79999995f);
                if ((int)(int)((((u27 * 0.0149999997f) < 0.0f ? -(u27 * 0.0149999997f) : (u27 * 0.0149999997f)) - (t28 * 0.799999952f)) + 1.79999995f) <= 0) {
                    t29 = 0x1;
                }
                t30 = t29;
                if ((int)t29 > (int)0x7F) {
                    t30 = 0x7F;
                }
                t31 = *(int *)0xC2A11B0;
                if (t31 == 1) {
                    nlsndIcsControl(0x0, 0xA6, 0x0);
                    nlsndIcsControl(0x3, 0xA6, 0x0);
                } else {
                    t34 = *(int *)0xC1794AC;
                    t35 = 0x3;
                    if ((t34 & 0x1) != 0) {
                        t35 = 0x0;
                    }
                    nlsndIcsControl(t35, 0xA6, t30);
                }
            } else {
                nlsndIcsControl(0x0, 0xA6, 0x0);
                nlsndIcsControl(0x3, 0xA6, 0x0);
            }
        } else {
            nlsndIcsControl(0x0, 0xA6, 0x0);
            nlsndIcsControl(0x3, 0xA6, 0x0);
        }
    }
    t55 = t51;
    t56 = (0x1A0 + a4);
    t57 = 0x0;
    for (;;) {
        t58 = *(int *)((t56 + 0x0));
        if (t58 != 3) {
            if (t58 != 9) {
                if (t58 == 8) break;
                t57 = (t57 + 0x1);
                t55 = 0x84;
                t56 = (t56 + t55);
                if ((int)t57 >= (int)0x4) {
                    if (0x0 == 1) {
                        u59 = *(float *)((a4 + 0x180));
                        if (!(u59 > 0.299999982f)) {
                            u60 = *(float *)((a4 + 0x18C));
                            if (u60 > 0.199999988f) {
                                t61 = *(signed char *)0xC1794A8;
                                if (t61 != 0) {
                                    if (t61 != 1) {
                                        if (t61 != 2) {
                                            if (t61 != 3) {
                                                t56 = 0x0;
                                                t62 = *(int *)0xC2A11B0;
                                                if (t62 == 1) {
                                                    t56 = 0x0;
                                                    nlsndIcsControl(0x1, 0xA6, t56);
                                                    t56 = 0x0;
                                                    t64 = nlsndIcsControl(0x2, 0xA6, t56);
                                                    t65 = *(int *)0xC1794AC;
                                                    t55 = t65;
                                                    t55 = (t55 + 0x1);
                                                    *(unsigned int *)0xC1794AC = t55;
                                                    return t64;
                                                }
                                                t66 = *(int *)0xC1794AC;
                                                t55 = t66;
                                                if ((t55 & 0x1) != 0) {
                                                    t67 = nlsndIcsControl(0x1, 0xA6, t56);
                                                    t68 = *(int *)0xC1794AC;
                                                    t55 = t68;
                                                    t55 = (t55 + 0x1);
                                                    *(unsigned int *)0xC1794AC = t55;
                                                    return t67;
                                                }
                                                u69 = *(float *)0xC1794A4;
                                                t56 = (int)u69;
                                                t70 = nlsndIcsControl(0x2, 0xA6, t56);
                                                t71 = *(int *)0xC1794AC;
                                                t55 = t71;
                                                t55 = (t55 + 0x1);
                                                *(unsigned int *)0xC1794AC = t55;
                                                return t70;
                                            }
                                            t56 = 0x0;
                                            t72 = *(int *)0xC2A11B0;
                                            if (t72 == 1) {
                                                t56 = 0x0;
                                                nlsndIcsControl(0x1, 0xA6, t56);
                                                t56 = 0x0;
                                                t74 = nlsndIcsControl(0x2, 0xA6, t56);
                                                t75 = *(int *)0xC1794AC;
                                                t55 = t75;
                                                t55 = (t55 + 0x1);
                                                *(unsigned int *)0xC1794AC = t55;
                                                return t74;
                                            }
                                            t76 = *(int *)0xC1794AC;
                                            t55 = t76;
                                            if ((t55 & 0x1) != 0) {
                                                t77 = nlsndIcsControl(0x1, 0xA6, t56);
                                                t78 = *(int *)0xC1794AC;
                                                t55 = t78;
                                                t55 = (t55 + 0x1);
                                                *(unsigned int *)0xC1794AC = t55;
                                                return t77;
                                            }
                                            u79 = *(float *)0xC1794A4;
                                            t56 = (int)u79;
                                            t80 = nlsndIcsControl(0x2, 0xA6, t56);
                                            t81 = *(int *)0xC1794AC;
                                            t55 = t81;
                                            t55 = (t55 + 0x1);
                                            *(unsigned int *)0xC1794AC = t55;
                                            return t80;
                                        }
                                        u82 = *(float *)0xC1794A4;
                                        *(float *)0xC1794A4 = (u82 - 1.0f);
                                        if (!((u82 - 1.0f) > 5.0f)) {
                                            t83 = *(signed char *)0xC1794A8;
                                            t55 = t83;
                                            t55 = (t55 + 0x1);
                                            *(unsigned char *)0xC1794A8 = t55;
                                            *(float *)0xC1794A4 = 5.0f;
                                            t56 = 0x0;
                                            t84 = *(int *)0xC2A11B0;
                                            if (t84 == 1) {
                                                t56 = 0x0;
                                                nlsndIcsControl(0x1, 0xA6, t56);
                                                t56 = 0x0;
                                                t86 = nlsndIcsControl(0x2, 0xA6, t56);
                                                t87 = *(int *)0xC1794AC;
                                                t55 = t87;
                                                t55 = (t55 + 0x1);
                                                *(unsigned int *)0xC1794AC = t55;
                                                return t86;
                                            }
                                            t88 = *(int *)0xC1794AC;
                                            t55 = t88;
                                            if ((t55 & 0x1) != 0) {
                                                t89 = nlsndIcsControl(0x1, 0xA6, t56);
                                                t90 = *(int *)0xC1794AC;
                                                t55 = t90;
                                                t55 = (t55 + 0x1);
                                                *(unsigned int *)0xC1794AC = t55;
                                                return t89;
                                            }
                                            u91 = *(float *)0xC1794A4;
                                            t56 = (int)u91;
                                            t92 = nlsndIcsControl(0x2, 0xA6, t56);
                                            t93 = *(int *)0xC1794AC;
                                            t55 = t93;
                                            t55 = (t55 + 0x1);
                                            *(unsigned int *)0xC1794AC = t55;
                                            return t92;
                                        }
                                        t56 = 0x0;
                                        t94 = *(int *)0xC2A11B0;
                                        if (t94 == 1) {
                                            t56 = 0x0;
                                            nlsndIcsControl(0x1, 0xA6, t56);
                                            t56 = 0x0;
                                            t96 = nlsndIcsControl(0x2, 0xA6, t56);
                                            t97 = *(int *)0xC1794AC;
                                            t55 = t97;
                                            t55 = (t55 + 0x1);
                                            *(unsigned int *)0xC1794AC = t55;
                                            return t96;
                                        }
                                        t98 = *(int *)0xC1794AC;
                                        t55 = t98;
                                        if ((t55 & 0x1) != 0) {
                                            t99 = nlsndIcsControl(0x1, 0xA6, t56);
                                            t100 = *(int *)0xC1794AC;
                                            t55 = t100;
                                            t55 = (t55 + 0x1);
                                            *(unsigned int *)0xC1794AC = t55;
                                            return t99;
                                        }
                                        u101 = *(float *)0xC1794A4;
                                        t56 = (int)u101;
                                        t102 = nlsndIcsControl(0x2, 0xA6, t56);
                                        t103 = *(int *)0xC1794AC;
                                        t55 = t103;
                                        t55 = (t55 + 0x1);
                                        *(unsigned int *)0xC1794AC = t55;
                                        return t102;
                                    }
                                    u104 = *(float *)0xC1794A4;
                                    if (35.0f > u104) {
                                        u105 = *(float *)0xC1794A4;
                                        *(float *)0xC1794A4 = (u105 + 0.25f);
                                        t56 = 0x0;
                                        t106 = *(int *)0xC2A11B0;
                                        if (t106 == 1) {
                                            t56 = 0x0;
                                            nlsndIcsControl(0x1, 0xA6, t56);
                                            t56 = 0x0;
                                            t108 = nlsndIcsControl(0x2, 0xA6, t56);
                                            t109 = *(int *)0xC1794AC;
                                            t55 = t109;
                                            t55 = (t55 + 0x1);
                                            *(unsigned int *)0xC1794AC = t55;
                                            return t108;
                                        }
                                        t110 = *(int *)0xC1794AC;
                                        t55 = t110;
                                        if ((t55 & 0x1) != 0) {
                                            t111 = nlsndIcsControl(0x1, 0xA6, t56);
                                            t112 = *(int *)0xC1794AC;
                                            t55 = t112;
                                            t55 = (t55 + 0x1);
                                            *(unsigned int *)0xC1794AC = t55;
                                            return t111;
                                        }
                                        u113 = *(float *)0xC1794A4;
                                        t56 = (int)u113;
                                        t114 = nlsndIcsControl(0x2, 0xA6, t56);
                                        t115 = *(int *)0xC1794AC;
                                        t55 = t115;
                                        t55 = (t55 + 0x1);
                                        *(unsigned int *)0xC1794AC = t55;
                                        return t114;
                                    }
                                    t116 = *(signed char *)0xC1794A8;
                                    t55 = t116;
                                    t55 = (t55 + 0x1);
                                    *(unsigned char *)0xC1794A8 = t55;
                                    t56 = 0x0;
                                    t117 = *(int *)0xC2A11B0;
                                    if (t117 == 1) {
                                        t56 = 0x0;
                                        nlsndIcsControl(0x1, 0xA6, t56);
                                        t56 = 0x0;
                                        t119 = nlsndIcsControl(0x2, 0xA6, t56);
                                        t120 = *(int *)0xC1794AC;
                                        t55 = t120;
                                        t55 = (t55 + 0x1);
                                        *(unsigned int *)0xC1794AC = t55;
                                        return t119;
                                    }
                                    t121 = *(int *)0xC1794AC;
                                    t55 = t121;
                                    if ((t55 & 0x1) != 0) {
                                        t122 = nlsndIcsControl(0x1, 0xA6, t56);
                                        t123 = *(int *)0xC1794AC;
                                        t55 = t123;
                                        t55 = (t55 + 0x1);
                                        *(unsigned int *)0xC1794AC = t55;
                                        return t122;
                                    }
                                    u124 = *(float *)0xC1794A4;
                                    t56 = (int)u124;
                                    t125 = nlsndIcsControl(0x2, 0xA6, t56);
                                    t126 = *(int *)0xC1794AC;
                                    t55 = t126;
                                    t55 = (t55 + 0x1);
                                    *(unsigned int *)0xC1794AC = t55;
                                    return t125;
                                }
                                *(float *)0xC1794A4 = 0.0f;
                                t127 = *(signed char *)0xC1794A8;
                                t55 = t127;
                                t55 = (t55 + 0x1);
                                *(unsigned char *)0xC1794A8 = t55;
                                u128 = *(float *)0xC1794A4;
                                if (35.0f > u128) {
                                    u129 = *(float *)0xC1794A4;
                                    *(float *)0xC1794A4 = (u129 + 0.25f);
                                    t56 = 0x0;
                                    t130 = *(int *)0xC2A11B0;
                                    if (t130 == 1) {
                                        t56 = 0x0;
                                        nlsndIcsControl(0x1, 0xA6, t56);
                                        t56 = 0x0;
                                        t132 = nlsndIcsControl(0x2, 0xA6, t56);
                                        t133 = *(int *)0xC1794AC;
                                        t55 = t133;
                                        t55 = (t55 + 0x1);
                                        *(unsigned int *)0xC1794AC = t55;
                                        return t132;
                                    }
                                    t134 = *(int *)0xC1794AC;
                                    t55 = t134;
                                    if ((t55 & 0x1) != 0) {
                                        t135 = nlsndIcsControl(0x1, 0xA6, t56);
                                        t136 = *(int *)0xC1794AC;
                                        t55 = t136;
                                        t55 = (t55 + 0x1);
                                        *(unsigned int *)0xC1794AC = t55;
                                        return t135;
                                    }
                                    u137 = *(float *)0xC1794A4;
                                    t56 = (int)u137;
                                    t138 = nlsndIcsControl(0x2, 0xA6, t56);
                                    t139 = *(int *)0xC1794AC;
                                    t55 = t139;
                                    t55 = (t55 + 0x1);
                                    *(unsigned int *)0xC1794AC = t55;
                                    return t138;
                                }
                                t140 = *(signed char *)0xC1794A8;
                                t55 = t140;
                                t55 = (t55 + 0x1);
                                *(unsigned char *)0xC1794A8 = t55;
                                t56 = 0x0;
                                t141 = *(int *)0xC2A11B0;
                                if (t141 == 1) {
                                    t56 = 0x0;
                                    nlsndIcsControl(0x1, 0xA6, t56);
                                    t56 = 0x0;
                                    t143 = nlsndIcsControl(0x2, 0xA6, t56);
                                    t144 = *(int *)0xC1794AC;
                                    t55 = t144;
                                    t55 = (t55 + 0x1);
                                    *(unsigned int *)0xC1794AC = t55;
                                    return t143;
                                }
                                t145 = *(int *)0xC1794AC;
                                t55 = t145;
                                if ((t55 & 0x1) != 0) {
                                    t146 = nlsndIcsControl(0x1, 0xA6, t56);
                                    t147 = *(int *)0xC1794AC;
                                    t55 = t147;
                                    t55 = (t55 + 0x1);
                                    *(unsigned int *)0xC1794AC = t55;
                                    return t146;
                                }
                                u148 = *(float *)0xC1794A4;
                                t56 = (int)u148;
                                t149 = nlsndIcsControl(0x2, 0xA6, t56);
                                t150 = *(int *)0xC1794AC;
                                t55 = t150;
                                t55 = (t55 + 0x1);
                                *(unsigned int *)0xC1794AC = t55;
                                return t149;
                            }
                            u151 = *(float *)0xC1794A4;
                            *(float *)0xC1794A4 = (u151 - 1.0f);
                            if (!((u151 - 1.0f) > 0.0f)) {
                                *(float *)0xC1794A4 = 0.0f;
                                *(unsigned char *)0xC1794A8 = 0x0;
                                t56 = 0x0;
                                t152 = *(int *)0xC2A11B0;
                                if (t152 == 1) {
                                    t56 = 0x0;
                                    nlsndIcsControl(0x1, 0xA6, t56);
                                    t56 = 0x0;
                                    t154 = nlsndIcsControl(0x2, 0xA6, t56);
                                    t155 = *(int *)0xC1794AC;
                                    t55 = t155;
                                    t55 = (t55 + 0x1);
                                    *(unsigned int *)0xC1794AC = t55;
                                    return t154;
                                }
                                t156 = *(int *)0xC1794AC;
                                t55 = t156;
                                if ((t55 & 0x1) != 0) {
                                    t157 = nlsndIcsControl(0x1, 0xA6, t56);
                                    t158 = *(int *)0xC1794AC;
                                    t55 = t158;
                                    t55 = (t55 + 0x1);
                                    *(unsigned int *)0xC1794AC = t55;
                                    return t157;
                                }
                                u159 = *(float *)0xC1794A4;
                                t56 = (int)u159;
                                t160 = nlsndIcsControl(0x2, 0xA6, t56);
                                t161 = *(int *)0xC1794AC;
                                t55 = t161;
                                t55 = (t55 + 0x1);
                                *(unsigned int *)0xC1794AC = t55;
                                return t160;
                            }
                            t56 = 0x0;
                            t162 = *(int *)0xC2A11B0;
                            if (t162 == 1) {
                                t56 = 0x0;
                                nlsndIcsControl(0x1, 0xA6, t56);
                                t56 = 0x0;
                                t164 = nlsndIcsControl(0x2, 0xA6, t56);
                                t165 = *(int *)0xC1794AC;
                                t55 = t165;
                                t55 = (t55 + 0x1);
                                *(unsigned int *)0xC1794AC = t55;
                                return t164;
                            }
                            t166 = *(int *)0xC1794AC;
                            t55 = t166;
                            if ((t55 & 0x1) != 0) {
                                t167 = nlsndIcsControl(0x1, 0xA6, t56);
                                t168 = *(int *)0xC1794AC;
                                t55 = t168;
                                t55 = (t55 + 0x1);
                                *(unsigned int *)0xC1794AC = t55;
                                return t167;
                            }
                            u169 = *(float *)0xC1794A4;
                            t56 = (int)u169;
                            t170 = nlsndIcsControl(0x2, 0xA6, t56);
                            t171 = *(int *)0xC1794AC;
                            t55 = t171;
                            t55 = (t55 + 0x1);
                            *(unsigned int *)0xC1794AC = t55;
                            return t170;
                        }
                        t172 = *(signed char *)0xC1794A8;
                        if (t172 != 0) {
                            if (t172 != 1) {
                                if (t172 != 2) {
                                    if (t172 != 3) {
                                        t56 = 0x0;
                                        t173 = *(int *)0xC2A11B0;
                                        if (t173 == 1) {
                                            t56 = 0x0;
                                            nlsndIcsControl(0x1, 0xA6, t56);
                                            t56 = 0x0;
                                            t175 = nlsndIcsControl(0x2, 0xA6, t56);
                                            t176 = *(int *)0xC1794AC;
                                            t55 = t176;
                                            t55 = (t55 + 0x1);
                                            *(unsigned int *)0xC1794AC = t55;
                                            return t175;
                                        }
                                        t177 = *(int *)0xC1794AC;
                                        t55 = t177;
                                        if ((t55 & 0x1) != 0) {
                                            t178 = nlsndIcsControl(0x1, 0xA6, t56);
                                            t179 = *(int *)0xC1794AC;
                                            t55 = t179;
                                            t55 = (t55 + 0x1);
                                            *(unsigned int *)0xC1794AC = t55;
                                            return t178;
                                        }
                                        u180 = *(float *)0xC1794A4;
                                        t56 = (int)u180;
                                        t181 = nlsndIcsControl(0x2, 0xA6, t56);
                                        t182 = *(int *)0xC1794AC;
                                        t55 = t182;
                                        t55 = (t55 + 0x1);
                                        *(unsigned int *)0xC1794AC = t55;
                                        return t181;
                                    }
                                    t56 = 0x0;
                                    t183 = *(int *)0xC2A11B0;
                                    if (t183 == 1) {
                                        t56 = 0x0;
                                        nlsndIcsControl(0x1, 0xA6, t56);
                                        t56 = 0x0;
                                        t185 = nlsndIcsControl(0x2, 0xA6, t56);
                                        t186 = *(int *)0xC1794AC;
                                        t55 = t186;
                                        t55 = (t55 + 0x1);
                                        *(unsigned int *)0xC1794AC = t55;
                                        return t185;
                                    }
                                    t187 = *(int *)0xC1794AC;
                                    t55 = t187;
                                    if ((t55 & 0x1) != 0) {
                                        t188 = nlsndIcsControl(0x1, 0xA6, t56);
                                        t189 = *(int *)0xC1794AC;
                                        t55 = t189;
                                        t55 = (t55 + 0x1);
                                        *(unsigned int *)0xC1794AC = t55;
                                        return t188;
                                    }
                                    u190 = *(float *)0xC1794A4;
                                    t56 = (int)u190;
                                    t191 = nlsndIcsControl(0x2, 0xA6, t56);
                                    t192 = *(int *)0xC1794AC;
                                    t55 = t192;
                                    t55 = (t55 + 0x1);
                                    *(unsigned int *)0xC1794AC = t55;
                                    return t191;
                                }
                                u193 = *(float *)0xC1794A4;
                                *(float *)0xC1794A4 = (u193 - 1.0f);
                                if (!((u193 - 1.0f) > 5.0f)) {
                                    t194 = *(signed char *)0xC1794A8;
                                    t55 = t194;
                                    t55 = (t55 + 0x1);
                                    *(unsigned char *)0xC1794A8 = t55;
                                    *(float *)0xC1794A4 = 5.0f;
                                    t56 = 0x0;
                                    t195 = *(int *)0xC2A11B0;
                                    if (t195 == 1) {
                                        t56 = 0x0;
                                        nlsndIcsControl(0x1, 0xA6, t56);
                                        t56 = 0x0;
                                        t197 = nlsndIcsControl(0x2, 0xA6, t56);
                                        t198 = *(int *)0xC1794AC;
                                        t55 = t198;
                                        t55 = (t55 + 0x1);
                                        *(unsigned int *)0xC1794AC = t55;
                                        return t197;
                                    }
                                    t199 = *(int *)0xC1794AC;
                                    t55 = t199;
                                    if ((t55 & 0x1) != 0) {
                                        t200 = nlsndIcsControl(0x1, 0xA6, t56);
                                        t201 = *(int *)0xC1794AC;
                                        t55 = t201;
                                        t55 = (t55 + 0x1);
                                        *(unsigned int *)0xC1794AC = t55;
                                        return t200;
                                    }
                                    u202 = *(float *)0xC1794A4;
                                    t56 = (int)u202;
                                    t203 = nlsndIcsControl(0x2, 0xA6, t56);
                                    t204 = *(int *)0xC1794AC;
                                    t55 = t204;
                                    t55 = (t55 + 0x1);
                                    *(unsigned int *)0xC1794AC = t55;
                                    return t203;
                                }
                                t56 = 0x0;
                                t205 = *(int *)0xC2A11B0;
                                if (t205 == 1) {
                                    t56 = 0x0;
                                    nlsndIcsControl(0x1, 0xA6, t56);
                                    t56 = 0x0;
                                    t207 = nlsndIcsControl(0x2, 0xA6, t56);
                                    t208 = *(int *)0xC1794AC;
                                    t55 = t208;
                                    t55 = (t55 + 0x1);
                                    *(unsigned int *)0xC1794AC = t55;
                                    return t207;
                                }
                                t209 = *(int *)0xC1794AC;
                                t55 = t209;
                                if ((t55 & 0x1) != 0) {
                                    t210 = nlsndIcsControl(0x1, 0xA6, t56);
                                    t211 = *(int *)0xC1794AC;
                                    t55 = t211;
                                    t55 = (t55 + 0x1);
                                    *(unsigned int *)0xC1794AC = t55;
                                    return t210;
                                }
                                u212 = *(float *)0xC1794A4;
                                t56 = (int)u212;
                                t213 = nlsndIcsControl(0x2, 0xA6, t56);
                                t214 = *(int *)0xC1794AC;
                                t55 = t214;
                                t55 = (t55 + 0x1);
                                *(unsigned int *)0xC1794AC = t55;
                                return t213;
                            }
                            u215 = *(float *)0xC1794A4;
                            if (35.0f > u215) {
                                u216 = *(float *)0xC1794A4;
                                *(float *)0xC1794A4 = (u216 + 0.25f);
                                t56 = 0x0;
                                t217 = *(int *)0xC2A11B0;
                                if (t217 == 1) {
                                    t56 = 0x0;
                                    nlsndIcsControl(0x1, 0xA6, t56);
                                    t56 = 0x0;
                                    t219 = nlsndIcsControl(0x2, 0xA6, t56);
                                    t220 = *(int *)0xC1794AC;
                                    t55 = t220;
                                    t55 = (t55 + 0x1);
                                    *(unsigned int *)0xC1794AC = t55;
                                    return t219;
                                }
                                t221 = *(int *)0xC1794AC;
                                t55 = t221;
                                if ((t55 & 0x1) != 0) {
                                    t222 = nlsndIcsControl(0x1, 0xA6, t56);
                                    t223 = *(int *)0xC1794AC;
                                    t55 = t223;
                                    t55 = (t55 + 0x1);
                                    *(unsigned int *)0xC1794AC = t55;
                                    return t222;
                                }
                                u224 = *(float *)0xC1794A4;
                                t56 = (int)u224;
                                t225 = nlsndIcsControl(0x2, 0xA6, t56);
                                t226 = *(int *)0xC1794AC;
                                t55 = t226;
                                t55 = (t55 + 0x1);
                                *(unsigned int *)0xC1794AC = t55;
                                return t225;
                            }
                            t227 = *(signed char *)0xC1794A8;
                            t55 = t227;
                            t55 = (t55 + 0x1);
                            *(unsigned char *)0xC1794A8 = t55;
                            t56 = 0x0;
                            t228 = *(int *)0xC2A11B0;
                            if (t228 == 1) {
                                t56 = 0x0;
                                nlsndIcsControl(0x1, 0xA6, t56);
                                t56 = 0x0;
                                t230 = nlsndIcsControl(0x2, 0xA6, t56);
                                t231 = *(int *)0xC1794AC;
                                t55 = t231;
                                t55 = (t55 + 0x1);
                                *(unsigned int *)0xC1794AC = t55;
                                return t230;
                            }
                            t232 = *(int *)0xC1794AC;
                            t55 = t232;
                            if ((t55 & 0x1) != 0) {
                                t233 = nlsndIcsControl(0x1, 0xA6, t56);
                                t234 = *(int *)0xC1794AC;
                                t55 = t234;
                                t55 = (t55 + 0x1);
                                *(unsigned int *)0xC1794AC = t55;
                                return t233;
                            }
                            u235 = *(float *)0xC1794A4;
                            t56 = (int)u235;
                            t236 = nlsndIcsControl(0x2, 0xA6, t56);
                            t237 = *(int *)0xC1794AC;
                            t55 = t237;
                            t55 = (t55 + 0x1);
                            *(unsigned int *)0xC1794AC = t55;
                            return t236;
                        }
                        *(float *)0xC1794A4 = 0.0f;
                        t238 = *(signed char *)0xC1794A8;
                        t55 = t238;
                        t55 = (t55 + 0x1);
                        *(unsigned char *)0xC1794A8 = t55;
                        u239 = *(float *)0xC1794A4;
                        if (35.0f > u239) {
                            u240 = *(float *)0xC1794A4;
                            *(float *)0xC1794A4 = (u240 + 0.25f);
                            t56 = 0x0;
                            t241 = *(int *)0xC2A11B0;
                            if (t241 == 1) {
                                t56 = 0x0;
                                nlsndIcsControl(0x1, 0xA6, t56);
                                t56 = 0x0;
                                t243 = nlsndIcsControl(0x2, 0xA6, t56);
                                t244 = *(int *)0xC1794AC;
                                t55 = t244;
                                t55 = (t55 + 0x1);
                                *(unsigned int *)0xC1794AC = t55;
                                return t243;
                            }
                            t245 = *(int *)0xC1794AC;
                            t55 = t245;
                            if ((t55 & 0x1) != 0) {
                                t246 = nlsndIcsControl(0x1, 0xA6, t56);
                                t247 = *(int *)0xC1794AC;
                                t55 = t247;
                                t55 = (t55 + 0x1);
                                *(unsigned int *)0xC1794AC = t55;
                                return t246;
                            }
                            u248 = *(float *)0xC1794A4;
                            t56 = (int)u248;
                            t249 = nlsndIcsControl(0x2, 0xA6, t56);
                            t250 = *(int *)0xC1794AC;
                            t55 = t250;
                            t55 = (t55 + 0x1);
                            *(unsigned int *)0xC1794AC = t55;
                            return t249;
                        }
                        t251 = *(signed char *)0xC1794A8;
                        t55 = t251;
                        t55 = (t55 + 0x1);
                        *(unsigned char *)0xC1794A8 = t55;
                        t56 = 0x0;
                        t252 = *(int *)0xC2A11B0;
                        if (t252 == 1) {
                            t56 = 0x0;
                            nlsndIcsControl(0x1, 0xA6, t56);
                            t56 = 0x0;
                            t254 = nlsndIcsControl(0x2, 0xA6, t56);
                            t255 = *(int *)0xC1794AC;
                            t55 = t255;
                            t55 = (t55 + 0x1);
                            *(unsigned int *)0xC1794AC = t55;
                            return t254;
                        }
                        t256 = *(int *)0xC1794AC;
                        t55 = t256;
                        if ((t55 & 0x1) != 0) {
                            t257 = nlsndIcsControl(0x1, 0xA6, t56);
                            t258 = *(int *)0xC1794AC;
                            t55 = t258;
                            t55 = (t55 + 0x1);
                            *(unsigned int *)0xC1794AC = t55;
                            return t257;
                        }
                        u259 = *(float *)0xC1794A4;
                        t56 = (int)u259;
                        t260 = nlsndIcsControl(0x2, 0xA6, t56);
                        t261 = *(int *)0xC1794AC;
                        t55 = t261;
                        t55 = (t55 + 0x1);
                        *(unsigned int *)0xC1794AC = t55;
                        return t260;
                    }
                    *(float *)0xC1794A4 = 0.0f;
                    *(unsigned char *)0xC1794A8 = 0x0;
                    u262 = *(float *)((a4 + 0x180));
                    if (!(u262 > 0.5f)) {
                        u263 = *(float *)((a4 + 0x18C));
                        if (u263 > 0.349999994f) {
                            u264 = *(float *)((a4 + 0x180));
                            u265 = *(float *)((a4 + 0x18C));
                            if (((u264 + -0.5f) / 0.5f) > ((u265 + -0.349999994f) / 0.649999976f)) {
                                t56 = (int)(((u264 + -0.5f) / 0.5f) * 90.0f);
                                if ((int)t56 > (int)0x7F) {
                                    t56 = 0x7F;
                                    t266 = *(int *)0xC2A11B0;
                                    if (t266 == 1) {
                                        t56 = 0x0;
                                        nlsndIcsControl(0x1, 0xA6, t56);
                                        t56 = 0x0;
                                        t268 = nlsndIcsControl(0x2, 0xA6, t56);
                                        t269 = *(int *)0xC1794AC;
                                        t55 = t269;
                                        t55 = (t55 + 0x1);
                                        *(unsigned int *)0xC1794AC = t55;
                                        return t268;
                                    }
                                    t270 = *(int *)0xC1794AC;
                                    t55 = t270;
                                    if ((t55 & 0x1) != 0) {
                                        t271 = nlsndIcsControl(0x1, 0xA6, t56);
                                        t272 = *(int *)0xC1794AC;
                                        t55 = t272;
                                        t55 = (t55 + 0x1);
                                        *(unsigned int *)0xC1794AC = t55;
                                        return t271;
                                    }
                                    u273 = *(float *)0xC1794A4;
                                    t56 = (int)u273;
                                    t274 = nlsndIcsControl(0x2, 0xA6, t56);
                                    t275 = *(int *)0xC1794AC;
                                    t55 = t275;
                                    t55 = (t55 + 0x1);
                                    *(unsigned int *)0xC1794AC = t55;
                                    return t274;
                                }
                                t276 = *(int *)0xC2A11B0;
                                if (t276 == 1) {
                                    t56 = 0x0;
                                    nlsndIcsControl(0x1, 0xA6, t56);
                                    t56 = 0x0;
                                    t278 = nlsndIcsControl(0x2, 0xA6, t56);
                                    t279 = *(int *)0xC1794AC;
                                    t55 = t279;
                                    t55 = (t55 + 0x1);
                                    *(unsigned int *)0xC1794AC = t55;
                                    return t278;
                                }
                                t280 = *(int *)0xC1794AC;
                                t55 = t280;
                                if ((t55 & 0x1) != 0) {
                                    t281 = nlsndIcsControl(0x1, 0xA6, t56);
                                    t282 = *(int *)0xC1794AC;
                                    t55 = t282;
                                    t55 = (t55 + 0x1);
                                    *(unsigned int *)0xC1794AC = t55;
                                    return t281;
                                }
                                u283 = *(float *)0xC1794A4;
                                t56 = (int)u283;
                                t284 = nlsndIcsControl(0x2, 0xA6, t56);
                                t285 = *(int *)0xC1794AC;
                                t55 = t285;
                                t55 = (t55 + 0x1);
                                *(unsigned int *)0xC1794AC = t55;
                                return t284;
                            }
                            t56 = (int)(((u265 + -0.349999994f) / 0.649999976f) * 90.0f);
                            if ((int)t56 > (int)0x7F) {
                                t56 = 0x7F;
                                t286 = *(int *)0xC2A11B0;
                                if (t286 == 1) {
                                    t56 = 0x0;
                                    nlsndIcsControl(0x1, 0xA6, t56);
                                    t56 = 0x0;
                                    t288 = nlsndIcsControl(0x2, 0xA6, t56);
                                    t289 = *(int *)0xC1794AC;
                                    t55 = t289;
                                    t55 = (t55 + 0x1);
                                    *(unsigned int *)0xC1794AC = t55;
                                    return t288;
                                }
                                t290 = *(int *)0xC1794AC;
                                t55 = t290;
                                if ((t55 & 0x1) != 0) {
                                    t291 = nlsndIcsControl(0x1, 0xA6, t56);
                                    t292 = *(int *)0xC1794AC;
                                    t55 = t292;
                                    t55 = (t55 + 0x1);
                                    *(unsigned int *)0xC1794AC = t55;
                                    return t291;
                                }
                                u293 = *(float *)0xC1794A4;
                                t56 = (int)u293;
                                t294 = nlsndIcsControl(0x2, 0xA6, t56);
                                t295 = *(int *)0xC1794AC;
                                t55 = t295;
                                t55 = (t55 + 0x1);
                                *(unsigned int *)0xC1794AC = t55;
                                return t294;
                            }
                            t296 = *(int *)0xC2A11B0;
                            if (t296 == 1) {
                                t56 = 0x0;
                                nlsndIcsControl(0x1, 0xA6, t56);
                                t56 = 0x0;
                                t298 = nlsndIcsControl(0x2, 0xA6, t56);
                                t299 = *(int *)0xC1794AC;
                                t55 = t299;
                                t55 = (t55 + 0x1);
                                *(unsigned int *)0xC1794AC = t55;
                                return t298;
                            }
                            t300 = *(int *)0xC1794AC;
                            t55 = t300;
                            if ((t55 & 0x1) != 0) {
                                t301 = nlsndIcsControl(0x1, 0xA6, t56);
                                t302 = *(int *)0xC1794AC;
                                t55 = t302;
                                t55 = (t55 + 0x1);
                                *(unsigned int *)0xC1794AC = t55;
                                return t301;
                            }
                            u303 = *(float *)0xC1794A4;
                            t56 = (int)u303;
                            t304 = nlsndIcsControl(0x2, 0xA6, t56);
                            t305 = *(int *)0xC1794AC;
                            t55 = t305;
                            t55 = (t55 + 0x1);
                            *(unsigned int *)0xC1794AC = t55;
                            return t304;
                        }
                        t56 = 0x0;
                        t306 = *(int *)0xC2A11B0;
                        if (t306 == 1) {
                            t56 = 0x0;
                            nlsndIcsControl(0x1, 0xA6, t56);
                            t56 = 0x0;
                            t308 = nlsndIcsControl(0x2, 0xA6, t56);
                            t309 = *(int *)0xC1794AC;
                            t55 = t309;
                            t55 = (t55 + 0x1);
                            *(unsigned int *)0xC1794AC = t55;
                            return t308;
                        }
                        t310 = *(int *)0xC1794AC;
                        t55 = t310;
                        if ((t55 & 0x1) != 0) {
                            t311 = nlsndIcsControl(0x1, 0xA6, t56);
                            t312 = *(int *)0xC1794AC;
                            t55 = t312;
                            t55 = (t55 + 0x1);
                            *(unsigned int *)0xC1794AC = t55;
                            return t311;
                        }
                        u313 = *(float *)0xC1794A4;
                        t56 = (int)u313;
                        t314 = nlsndIcsControl(0x2, 0xA6, t56);
                        t315 = *(int *)0xC1794AC;
                        t55 = t315;
                        t55 = (t55 + 0x1);
                        *(unsigned int *)0xC1794AC = t55;
                        return t314;
                    }
                    u316 = *(float *)((a4 + 0x180));
                    u317 = *(float *)((a4 + 0x18C));
                    if (((u316 + -0.5f) / 0.5f) > ((u317 + -0.349999994f) / 0.649999976f)) {
                        t56 = (int)(((u316 + -0.5f) / 0.5f) * 90.0f);
                        if ((int)t56 > (int)0x7F) {
                            t56 = 0x7F;
                            t318 = *(int *)0xC2A11B0;
                            if (t318 == 1) {
                                t56 = 0x0;
                                nlsndIcsControl(0x1, 0xA6, t56);
                                t56 = 0x0;
                                t320 = nlsndIcsControl(0x2, 0xA6, t56);
                                t321 = *(int *)0xC1794AC;
                                t55 = t321;
                                t55 = (t55 + 0x1);
                                *(unsigned int *)0xC1794AC = t55;
                                return t320;
                            }
                            t322 = *(int *)0xC1794AC;
                            t55 = t322;
                            if ((t55 & 0x1) != 0) {
                                t323 = nlsndIcsControl(0x1, 0xA6, t56);
                                t324 = *(int *)0xC1794AC;
                                t55 = t324;
                                t55 = (t55 + 0x1);
                                *(unsigned int *)0xC1794AC = t55;
                                return t323;
                            }
                            u325 = *(float *)0xC1794A4;
                            t56 = (int)u325;
                            t326 = nlsndIcsControl(0x2, 0xA6, t56);
                            t327 = *(int *)0xC1794AC;
                            t55 = t327;
                            t55 = (t55 + 0x1);
                            *(unsigned int *)0xC1794AC = t55;
                            return t326;
                        }
                        t328 = *(int *)0xC2A11B0;
                        if (t328 == 1) {
                            t56 = 0x0;
                            nlsndIcsControl(0x1, 0xA6, t56);
                            t56 = 0x0;
                            t330 = nlsndIcsControl(0x2, 0xA6, t56);
                            t331 = *(int *)0xC1794AC;
                            t55 = t331;
                            t55 = (t55 + 0x1);
                            *(unsigned int *)0xC1794AC = t55;
                            return t330;
                        }
                        t332 = *(int *)0xC1794AC;
                        t55 = t332;
                        if ((t55 & 0x1) != 0) {
                            t333 = nlsndIcsControl(0x1, 0xA6, t56);
                            t334 = *(int *)0xC1794AC;
                            t55 = t334;
                            t55 = (t55 + 0x1);
                            *(unsigned int *)0xC1794AC = t55;
                            return t333;
                        }
                        u335 = *(float *)0xC1794A4;
                        t56 = (int)u335;
                        t336 = nlsndIcsControl(0x2, 0xA6, t56);
                        t337 = *(int *)0xC1794AC;
                        t55 = t337;
                        t55 = (t55 + 0x1);
                        *(unsigned int *)0xC1794AC = t55;
                        return t336;
                    }
                    t56 = (int)(((u317 + -0.349999994f) / 0.649999976f) * 90.0f);
                    if ((int)t56 > (int)0x7F) {
                        t56 = 0x7F;
                        t338 = *(int *)0xC2A11B0;
                        if (t338 == 1) {
                            t56 = 0x0;
                            nlsndIcsControl(0x1, 0xA6, t56);
                            t56 = 0x0;
                            t340 = nlsndIcsControl(0x2, 0xA6, t56);
                            t341 = *(int *)0xC1794AC;
                            t55 = t341;
                            t55 = (t55 + 0x1);
                            *(unsigned int *)0xC1794AC = t55;
                            return t340;
                        }
                        t342 = *(int *)0xC1794AC;
                        t55 = t342;
                        if ((t55 & 0x1) != 0) {
                            t343 = nlsndIcsControl(0x1, 0xA6, t56);
                            t344 = *(int *)0xC1794AC;
                            t55 = t344;
                            t55 = (t55 + 0x1);
                            *(unsigned int *)0xC1794AC = t55;
                            return t343;
                        }
                        u345 = *(float *)0xC1794A4;
                        t56 = (int)u345;
                        t346 = nlsndIcsControl(0x2, 0xA6, t56);
                        t347 = *(int *)0xC1794AC;
                        t55 = t347;
                        t55 = (t55 + 0x1);
                        *(unsigned int *)0xC1794AC = t55;
                        return t346;
                    }
                    t348 = *(int *)0xC2A11B0;
                    if (t348 == 1) {
                        t56 = 0x0;
                        nlsndIcsControl(0x1, 0xA6, t56);
                        t56 = 0x0;
                        t350 = nlsndIcsControl(0x2, 0xA6, t56);
                        t351 = *(int *)0xC1794AC;
                        t55 = t351;
                        t55 = (t55 + 0x1);
                        *(unsigned int *)0xC1794AC = t55;
                        return t350;
                    }
                    t352 = *(int *)0xC1794AC;
                    t55 = t352;
                    if ((t55 & 0x1) != 0) {
                        t353 = nlsndIcsControl(0x1, 0xA6, t56);
                        t354 = *(int *)0xC1794AC;
                        t55 = t354;
                        t55 = (t55 + 0x1);
                        *(unsigned int *)0xC1794AC = t55;
                        return t353;
                    }
                    u355 = *(float *)0xC1794A4;
                    t56 = (int)u355;
                    t356 = nlsndIcsControl(0x2, 0xA6, t56);
                    t357 = *(int *)0xC1794AC;
                    t55 = t357;
                    t55 = (t55 + 0x1);
                    *(unsigned int *)0xC1794AC = t55;
                    return t356;
                }
                continue;
            }
            break;
        }
        break;
    }
    if (0x1 == 1) {
        u358 = *(float *)((a4 + 0x180));
        if (!(u358 > 0.299999982f)) {
            u359 = *(float *)((a4 + 0x18C));
            if (u359 > 0.199999988f) {
                t360 = *(signed char *)0xC1794A8;
                if (t360 != 0) {
                    if (t360 != 1) {
                        if (t360 == 2) {
                            u361 = *(float *)0xC1794A4;
                            *(float *)0xC1794A4 = (u361 - 1.0f);
                            if (!((u361 - 1.0f) > 5.0f)) {
                                t362 = *(signed char *)0xC1794A8;
                                *(unsigned char *)0xC1794A8 = (t362 + 0x1);
                                *(float *)0xC1794A4 = 5.0f;
                            }
                        }
                    } else {
                        u368 = *(float *)0xC1794A4;
                        if (35.0f > u368) {
                            u369 = *(float *)0xC1794A4;
                            *(float *)0xC1794A4 = (u369 + 0.25f);
                        } else {
                            t370 = *(signed char *)0xC1794A8;
                            *(unsigned char *)0xC1794A8 = (t370 + 0x1);
                        }
                    }
                } else {
                    *(float *)0xC1794A4 = 0.0f;
                    t381 = *(signed char *)0xC1794A8;
                    *(unsigned char *)0xC1794A8 = (t381 + 0x1);
                    u382 = *(float *)0xC1794A4;
                    if (35.0f > u382) {
                        u383 = *(float *)0xC1794A4;
                        *(float *)0xC1794A4 = (u383 + 0.25f);
                    } else {
                        t384 = *(signed char *)0xC1794A8;
                        *(unsigned char *)0xC1794A8 = (t384 + 0x1);
                    }
                }
            } else {
                u395 = *(float *)0xC1794A4;
                *(float *)0xC1794A4 = (u395 - 1.0f);
                if (!((u395 - 1.0f) > 0.0f)) {
                    *(float *)0xC1794A4 = 0.0f;
                    *(unsigned char *)0xC1794A8 = 0x0;
                }
            }
        } else {
            t402 = *(signed char *)0xC1794A8;
            if (t402 != 0) {
                if (t402 != 1) {
                    if (t402 == 2) {
                        u403 = *(float *)0xC1794A4;
                        *(float *)0xC1794A4 = (u403 - 1.0f);
                        if (!((u403 - 1.0f) > 5.0f)) {
                            t404 = *(signed char *)0xC1794A8;
                            *(unsigned char *)0xC1794A8 = (t404 + 0x1);
                            *(float *)0xC1794A4 = 5.0f;
                        }
                    }
                } else {
                    u410 = *(float *)0xC1794A4;
                    if (35.0f > u410) {
                        u411 = *(float *)0xC1794A4;
                        *(float *)0xC1794A4 = (u411 + 0.25f);
                    } else {
                        t412 = *(signed char *)0xC1794A8;
                        *(unsigned char *)0xC1794A8 = (t412 + 0x1);
                    }
                }
            } else {
                *(float *)0xC1794A4 = 0.0f;
                t423 = *(signed char *)0xC1794A8;
                *(unsigned char *)0xC1794A8 = (t423 + 0x1);
                u424 = *(float *)0xC1794A4;
                if (35.0f > u424) {
                    u425 = *(float *)0xC1794A4;
                    *(float *)0xC1794A4 = (u425 + 0.25f);
                } else {
                    t426 = *(signed char *)0xC1794A8;
                    *(unsigned char *)0xC1794A8 = (t426 + 0x1);
                }
            }
        }
        t476 = 0x0;
    } else {
        *(float *)0xC1794A4 = 0.0f;
        *(unsigned char *)0xC1794A8 = 0x0;
        u443 = *(float *)((a4 + 0x180));
        if (!(u443 > 0.5f)) {
            u444 = *(float *)((a4 + 0x18C));
            t451 = 0x0;
            if (u444 > 0.349999994f) {
                u445 = *(float *)((a4 + 0x180));
                u446 = *(float *)((a4 + 0x18C));
                u447 = ((u446 + -0.349999994f) / 0.649999976f);
                if (((u445 + -0.5f) / 0.5f) > ((u446 + -0.349999994f) / 0.649999976f)) {
                    u447 = ((u445 + -0.5f) / 0.5f);
                }
                t448 = (int)(u447 * 90.0f);
                if ((int)(int)(u447 * 90.0f) > (int)0x7F) {
                    t448 = 0x7F;
                }
                t451 = t448;
            }
            t465 = t451;
        } else {
            u459 = *(float *)((a4 + 0x180));
            u460 = *(float *)((a4 + 0x18C));
            u461 = ((u460 + -0.349999994f) / 0.649999976f);
            if (((u459 + -0.5f) / 0.5f) > ((u460 + -0.349999994f) / 0.649999976f)) {
                u461 = ((u459 + -0.5f) / 0.5f);
            }
            t462 = (int)(u461 * 90.0f);
            if ((int)(int)(u461 * 90.0f) > (int)0x7F) {
                t462 = 0x7F;
            }
            t465 = t462;
        }
        t476 = t465;
    }
    t484 = *(int *)0xC2A11B0;
    if (t484 == 1) {
        nlsndIcsControl(0x1, 0xA6, 0x0);
        t486 = nlsndIcsControl(0x2, 0xA6, 0x0);
        t493 = t486;
    } else {
        t487 = *(int *)0xC1794AC;
        t489 = 0x1;
        t490 = t476;
        if ((t487 & 0x1) == 0) {
            u488 = *(float *)0xC1794A4;
            t489 = 0x2;
            t490 = (int)u488;
        }
        t492 = nlsndIcsControl(t489, 0xA6, t490);
        t493 = t492;
    }
    t494 = *(int *)0xC1794AC;
    *(unsigned int *)0xC1794AC = (t494 + 0x1);
    return t493;
}

int nlSprPut(int a4)
{
    int t0;
    int t1;
    int t162;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t21;
    float u7;
    int t11;
    int t8;
    int t9;
    float u12;
    float u16;
    float u23;
    float u24;
    float u25;
    float u26;
    float u27;
    int t28;
    float t29;
    int t30;
    float t31;
    float u32;
    float u33;
    float u35;
    float u36;
    float u37;
    float u38;
    int t39;
    int t40;
    float u41;
    float u42;
    float u43;
    float u44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t52;
    int t53;
    int t55;
    int t56;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t71;
    int t77;
    float u78;
    float u79;
    float u80;
    int t81;
    int t82;
    int t83;
    int t84;
    int t85;
    int t90;
    float u91;
    float u92;
    float u94;
    float u95;
    float u96;
    float u97;
    float u99;
    float u100;
    int t101;
    int t102;
    int t105;
    int t109;
    int t110;
    int t111;
    int t112;
    int t113;
    int t115;
    int t114;
    int t116;
    int t117;
    int t118;
    int t119;
    int t120;
    int t121;
    int t122;
    int t125;
    int t126;
    int t127;
    int t128;
    int t129;
    int t130;
    int t131;
    int t132;
    int t133;
    int t134;
    int t135;
    int t136;
    int t137;
    int t138;
    int t139;
    int t140;
    int t141;
    int t142;
    int t143;
    int t144;
    int t145;
    int t146;
    float u22;
    int t18;
    float u19;
    int t14;
    float u15;
    float u76;
    int t67;
    int t86;
    int t123;
    int stk[28] = {0};

    t0 = *(int *)((a4 + 0x0));
    t1 = *(int *)0xC2B76BC;
    t162 = 0xFFFFFFFF;
    if ((int)t0 < (int)t1) {
        t2 = *(int *)((a4 + 0x0));
        t3 = *(int *)0xC2B76B8;
        t4 = *(short *)(((t2 << 1) + t3));
        if (t4 != -1) {
            t5 = *(int *)((a4 + 0x30));
            t6 = *(int *)0xC2B76C8;
            t21 = 0x0;
            if (t5 != 0) {
                if (t5 != 2) {
                    if (t5 != 4) {
                        u7 = *(float *)((a4 + 0x2C));
                        t11 = 0x1;
                        if (!(1.0f > u7)) {
                            t8 = *(short *)((((((t4 << 2) << 2) << 1) + t6) + 0x14));
                            t9 = 0x0;
                            if (t8 != 0) {
                                t9 = 0x1;
                            }
                            t11 = t9;
                        }
                        t14 = t11;
                        u15 = u7;
                    } else {
                        u12 = *(float *)((a4 + 0x2C));
                        t14 = 0x1;
                        u15 = u12;
                    }
                    t18 = t14;
                    u19 = u15;
                } else {
                    u16 = *(float *)((a4 + 0x2C));
                    t18 = 0x1;
                    u19 = u16;
                }
                t21 = t18;
                u22 = u19;
            }
            u23 = *(float *)((a4 + 0x10));
            u24 = *(float *)((((((t4 << 2) << 2) << 1) + t6) + 0x18));
            u25 = *(float *)((a4 + 0x14));
            u26 = *(float *)((((((t4 << 2) << 2) << 1) + t6) + 0x1C));
            *(float *)(((int)stk + 8)) = ((u26 * u25) * 0.5f);
            u27 = *(float *)((a4 + 0xC));
            t28 = *(int *)((a4 + 0x28));
            t29 = nlSin(t28);
            *(float *)(((int)stk + 12)) = t29;
            t30 = *(int *)((a4 + 0x28));
            t31 = nlCos(t30);
            u32 = *(float *)(((int)stk + 12));
            u33 = *(float *)(((int)stk + 8));
            nlSprPutPosSet(((u24 * u23) * 0.5f), u33, u32, t31);
            u35 = *(float *)0xC14A828;
            u36 = *(float *)0xC2B76D0;
            u37 = *(float *)0xC14A824;
            u38 = *(float *)0xC2B76CC;
            t39 = 0x4;
            t40 = 0x0;
            u41 = u35;
            u42 = u37;
            while ((unsigned int)t40 < (unsigned int)0x10) {
                t39 = t40;
                u43 = *(float *)(((((int)stk + 4) + 0x2C) + t39));
                u42 = u43;
                t40 = (t40 + 0x4);
                u42 = (u42 * (u38 * u37));
                *(float *)(((((int)stk + 4) + 0x2C) + t39)) = u42;
                u44 = *(float *)(((((int)stk + 4) + 0x1C) + t39));
                u41 = u44;
                u41 = (u41 * (u36 * u35));
                *(float *)(((((int)stk + 4) + 0x1C) + t39)) = u41;
            }
            t45 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x0));
            *(unsigned int *)((((((t4 << 2) << 2) << 1) + t6) + 0x0)) = (t45 & 0xF8FCFFFF);
            t46 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x4));
            *(unsigned int *)((((((t4 << 2) << 2) << 1) + t6) + 0x4)) = (t46 & 0x1FFFFFFF);
            t47 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x8));
            *(unsigned int *)((((((t4 << 2) << 2) << 1) + t6) + 0x8)) = (t47 & 0x3278FFF);
            t48 = *(int *)((a4 + 0x34));
            if ((t48 & 0x800) == 0) {
                t49 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x8));
                *(unsigned int *)((((((t4 << 2) << 2) << 1) + t6) + 0x8)) = (t49 | 0x800000);
            }
            t52 = *(int *)((a4 + 0x34));
            if ((t52 & 0x1000) != 0) {
                t53 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x8));
                *(unsigned int *)((((((t4 << 2) << 2) << 1) + t6) + 0x8)) = (t53 | 0x2000);
            }
            t55 = *(int *)((a4 + 0x34));
            if ((t55 & 0x10000) != 0) {
                t56 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x8));
                *(unsigned int *)((((((t4 << 2) << 2) << 1) + t6) + 0x8)) = (t56 | 0x1000);
            }
            t58 = *(int *)((a4 + 0x34));
            t59 = (0x7 & ((int)t58 >> 8));
            if ((0x7 & ((int)t58 >> 8)) == 0) {
                t59 = 0x4;
            }
            t60 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x4));
            *(unsigned int *)((((((t4 << 2) << 2) << 1) + t6) + 0x4)) = (t60 | (t59 << 29));
            if (t21 != 0) {
                t61 = *(int *)((a4 + 0x30));
                if (t61 == 4) {
                    t62 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x8));
                    *(unsigned int *)((((((t4 << 2) << 2) << 1) + t6) + 0x8)) = (t62 | 0x94100000);
                    t63 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x0));
                    t67 = (t63 | 0x4000000);
                } else {
                    t64 = *(int *)0xC14A648;
                    t65 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x8));
                    *(unsigned int *)((((((t4 << 2) << 2) << 1) + t6) + 0x8)) = (t65 | ((((t64 ^ 0xFC) << 16) << 8) | 0x100000));
                    t66 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x0));
                    t67 = (t66 | 0x2000000);
                }
                *(unsigned int *)((((((t4 << 2) << 2) << 1) + t6) + 0x0)) = t67;
                u76 = u22;
            } else {
                t71 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x8));
                *(unsigned int *)((((((t4 << 2) << 2) << 1) + t6) + 0x8)) = (t71 | 0x20080000);
                u76 = 1.0f;
            }
            t77 = *(int *)((a4 + 0x34));
            if ((0x2000 & t77) != 0) {
                u78 = *(float *)0xC14A948;
                u79 = *(float *)0xC14A950;
                u80 = *(float *)0xC14A94C;
                t81 = FUN_0c07e580((t59 << 29), 0x2000, u76, u78, u80, u79);
                *(unsigned int *)((((((t4 << 2) << 2) << 1) + t6) + 0x10)) = t81;
            } else {
                t82 = *(int *)((a4 + 0x34));
                if ((t82 & 0x4000) != 0) {
                    t83 = nlSpriteF2C(u76);
                    t84 = *(int *)((a4 + 0x38));
                    t86 = (((t83 << 16) << 8) | t84);
                } else {
                    t85 = FUN_0c07e580((t59 << 29), 0x2000, u76, 1.0f, 1.0f, 1.0f);
                    t86 = t85;
                }
                *(unsigned int *)((((((t4 << 2) << 2) << 1) + t6) + 0x10)) = t86;
            }
            t90 = *(int *)((a4 + 0x34));
            u91 = *(float *)((a4 + 0x18));
            u92 = *(float *)((a4 + 0x20));
            u94 = u92;
            u95 = u91;
            if ((0x10 & (t90 & 0x30)) != 0) {
                u94 = (1.0f - u92);
                u95 = (1.0f - u91);
            }
            u96 = *(float *)((a4 + 0x1C));
            u97 = *(float *)((a4 + 0x24));
            u99 = u96;
            u100 = u97;
            if (((t90 & 0x30) & 0x20) == 0) {
                u99 = (1.0f - u96);
                u100 = (1.0f - u97);
            }
            t101 = *(int *)((a4 + 0x34));
            if ((t101 & 0xC000) != 0x8000) {
                if ((t101 & 0xC000) == 0xC000) {
                    t102 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x0));
                    *(unsigned int *)((((((t4 << 2) << 2) << 1) + t6) + 0x0)) = (t102 | 0x30000);
                }
            } else {
                t105 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x0));
                *(unsigned int *)((((((t4 << 2) << 2) << 1) + t6) + 0x0)) = (t105 | 0x20000);
            }
            *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = u95;
            t109 = *(int *)(((((int)stk + 4) + 0x18) + 0x0));
            *(unsigned int *)(((int)stk + 24)) = (t109 & 0xFFFF0000);
            *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = u94;
            t110 = *(int *)(((((int)stk + 4) + 0x18) + 0x0));
            *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = u99;
            t111 = *(int *)(((((int)stk + 4) + 0x18) + 0x0));
            *(unsigned int *)(((int)stk + 4)) = ((unsigned int)t111 >> 16);
            *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = u100;
            t112 = *(int *)(((((int)stk + 4) + 0x18) + 0x0));
            *(unsigned int *)(((int)stk + 16)) = ((unsigned int)t112 >> 16);
            t113 = *(int *)((a4 + 0x30));
            t115 = t113;
            if (t113 == -1) {
                t114 = 0x0;
                if (t21 != 0) {
                    t114 = 0x2;
                }
                t115 = t114;
            }
            *(unsigned int *)(((int)stk + 20)) = (t115 << 2);
            t116 = *(int *)0xC2B8CBC;
            t117 = *(int *)(((t115 << 2) + t116));
            *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t117 >> 16) >> 8);
            *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t117 >> 16) >> 8);
            t118 = *(int *)((a4 + 0x34));
            if ((t118 & 0x4000) != 0) {
                t119 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x0));
                t120 = *(int *)0xC2B7948;
                t123 = ((t119 | t120) | 0x4);
            } else {
                t121 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x0));
                t122 = *(int *)0xC2B7948;
                t123 = (t121 | t122);
            }
            *(unsigned int *)((((0x3FFFFFF & t117) | 0xE0000000) + 0x0)) = t123;
            t125 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x4));
            *(unsigned int *)((((0x3FFFFFF & t117) | 0xE0000000) + 0x4)) = t125;
            t126 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x8));
            t127 = *(int *)0xC2B794C;
            *(unsigned int *)((((0x3FFFFFF & t117) | 0xE0000000) + 0x8)) = (t126 | t127);
            t128 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0xC));
            *(unsigned int *)((((0x3FFFFFF & t117) | 0xE0000000) + 0xC)) = t128;
            t129 = *(int *)((((((t4 << 2) << 2) << 1) + t6) + 0x10));
            *(unsigned int *)((((0x3FFFFFF & t117) | 0xE0000000) + 0x10)) = t129;
            t130 = nlSpriteF2C(u76);
            t131 = *(int *)((a4 + 0x3C));
            *(unsigned int *)((((0x3FFFFFF & t117) | 0xE0000000) + 0x14)) = (((t130 << 16) << 8) | t131);
            _builtin_prefetch((void *)((0x3FFFFFF & t117) | 0xE0000000));
            *(unsigned int *)(((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0x0)) = 0xF0000000;
            t132 = *(int *)(((((int)stk + 4) + 0x2C) + 0x0));
            *(unsigned int *)(((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0x4)) = t132;
            t133 = *(int *)(((((int)stk + 4) + 0x1C) + 0x0));
            *(unsigned int *)(((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0x8)) = t133;
            *(float *)(((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0xC)) = (1.0f / u27);
            t134 = *(int *)(((((int)stk + 4) + 0x2C) + 0x4));
            *(unsigned int *)(((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0x10)) = t134;
            t135 = *(int *)(((((int)stk + 4) + 0x1C) + 0x4));
            *(unsigned int *)(((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0x14)) = t135;
            *(float *)(((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0x18)) = (1.0f / u27);
            t136 = *(int *)(((((int)stk + 4) + 0x2C) + 0x8));
            *(unsigned int *)(((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0x1C)) = t136;
            t137 = *(int *)(((((int)stk + 4) + 0x1C) + 0x8));
            *(unsigned int *)(((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0x20)) = t137;
            *(float *)(((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0x24)) = (1.0f / u27);
            t138 = *(int *)(((((int)stk + 4) + 0x2C) + 0xC));
            *(unsigned int *)(((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0x28)) = t138;
            t139 = *(int *)(((((int)stk + 4) + 0x1C) + 0xC));
            *(unsigned int *)(((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0x2C)) = t139;
            *(unsigned int *)(((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0x30)) = (t4 | 0x53500000);
            t140 = *(int *)(((int)stk + 4));
            t141 = *(int *)(((int)stk + 24));
            *(unsigned int *)(((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0x34)) = (t141 | t140);
            t142 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0x38)) = (t142 | (t110 & 0xFFFF0000));
            t143 = *(int *)(((int)stk + 16));
            *(unsigned int *)(((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0x3C)) = ((t110 & 0xFFFF0000) | t143);
            _builtin_prefetch((void *)(((0x3FFFFFF & t117) | 0xE0000000) + 0x20));
            _builtin_prefetch((void *)((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0x20));
            t144 = *(int *)(((int)stk + 20));
            t145 = *(int *)0xC2B8CBC;
            t146 = *(int *)(((t144 + t145) + 0x0));
            *(unsigned int *)(((t144 + t145) + 0x0)) = ((t146 & 0xFC000000) | ((((((0x3FFFFFF & t117) | 0xE0000000) + 0x20) + 0x20) + 0x20) & 0x3FFFFFF));
        }
        t162 = 0x0;
    }
    return t162;
}
