/* Straight-line functions with calls and guards (batch gen_bp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXB_EntryData(int, int);
int ADXB_GetFormat(int);
int ADXB_Start(int);
int FUN_0c168862(int);
int FUN_0c16887a(int);
int SJUNI_Lock(void);
int SJUNI_Unlock(int, int);
int FUN_0c010158(void);
int kmiDefaultInterruptHandler(int a4);
int SJUNI_PutChunk(int a4, int a5, int a6);
int SJUNI_UngetChunk(int a4, int a5, int a6);
int adxsjd_decexec_start(int a4);

int FUN_0c010158(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C00FA18;
    t1 = *(int *)(((((unsigned int)((unsigned int)t0 >> 2) >> 1) + 0x8C00F5C0) + 0x0));
    return ((int (*)(int))(t1))(t1);
}

int kmiDefaultInterruptHandler(int a4)
{
    int t0;
    int t1;

    t0 = *(int *)((((a4 << 2) << 1) + 0xC2EA8B0));
    t1 = *(int *)(((0xC2EA8B0 + ((a4 << 2) << 1)) + 0x4));
    return ((int (*)(int))(t0))(t1);
}

int SJUNI_PutChunk(int a4, int a5, int a6)
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
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;

    if ((int)a5 >= 0) {
        if ((int)a5 >= (int)0x4) {
            t0 = *(int *)((a4 + 0x28));
            if (t0 != 0) {
                t1 = *(int *)((a4 + 0x2C));
                t2 = *(int *)((a4 + 0x28));
                return ((int (*)(int, int, int))(t2))(t1, 0xFFFFFFFD, a6);
            }
            return 0;
        }
        t3 = *(int *)((a6 + 0x4));
        if ((int)t3 > 0) {
            t4 = *(int *)((a6 + 0x0));
            if (t4 != 0) {
                t5 = SJUNI_Lock();
                t6 = ((a5 << 2) + (a4 + 0x18));
                t7 = 0x0;
                t8 = a6;
                for (;;) {
                    t9 = *(int *)((t6 + 0x0));
                    if (t9 == 0) break;
                    t10 = *(int *)((t6 + 0x0));
                    t8 = t10;
                    t6 = t8;
                    t7 = t8;
                }
                t11 = *(signed char *)((a4 + 0x5));
                if (t11 == 1) {
                    if (t7 != 0) {
                        t12 = *(int *)((t7 + 0x8));
                        t13 = *(int *)((t7 + 0xC));
                        t14 = *(int *)((a6 + 0x0));
                        if ((t12 + t13) == t14) {
                            t15 = *(int *)((t7 + 0xC));
                            t16 = *(int *)((a6 + 0x4));
                            *(unsigned int *)((t7 + 0xC)) = (t15 + t16);
                        } else {
                            t17 = *(int *)((a4 + 0x14));
                            if (t17 == 0) {
                                t18 = *(int *)((a4 + 0x28));
                                if (t18 != 0) {
                                    t19 = *(int *)((a4 + 0x28));
                                    t20 = *(int *)((a4 + 0x2C));
                                    t21 = ((int (*)(int, int, int, int))(t19))(t20, 0xFFFFFFFD, t8, 0x0);
                                }
                            } else {
                                t23 = *(int *)((t17 + 0x0));
                                *(unsigned int *)((a4 + 0x14)) = t23;
                                *(unsigned int *)((t17 + 0x0)) = 0x0;
                                t24 = *(int *)((a6 + 0x4));
                                *(unsigned int *)(((t17 + 0x8) + 0x4)) = t24;
                                t25 = *(int *)((a6 + 0x0));
                                *(unsigned int *)(((t17 + 0x8) + 0x0)) = t25;
                                *(unsigned int *)((t6 + 0x0)) = t17;
                            }
                        }
                    } else {
                        t26 = *(int *)((a4 + 0x14));
                        if (t26 == 0) {
                            t27 = *(int *)((a4 + 0x28));
                            if (t27 != 0) {
                                t28 = *(int *)((a4 + 0x28));
                                t29 = *(int *)((a4 + 0x2C));
                                t30 = ((int (*)(int, int, int, int))(t28))(t29, 0xFFFFFFFD, t8, 0x0);
                            }
                        } else {
                            t32 = *(int *)((t26 + 0x0));
                            *(unsigned int *)((a4 + 0x14)) = t32;
                            *(unsigned int *)((t26 + 0x0)) = 0x0;
                            t33 = *(int *)((a6 + 0x4));
                            *(unsigned int *)(((t26 + 0x8) + 0x4)) = t33;
                            t34 = *(int *)((a6 + 0x0));
                            *(unsigned int *)(((t26 + 0x8) + 0x0)) = t34;
                            *(unsigned int *)((t6 + 0x0)) = t26;
                        }
                    }
                } else {
                    t35 = *(int *)((a4 + 0x14));
                    if (t35 == 0) {
                        t36 = *(int *)((a4 + 0x28));
                        if (t36 != 0) {
                            t37 = *(int *)((a4 + 0x28));
                            t38 = *(int *)((a4 + 0x2C));
                            t39 = ((int (*)(int, int, int, int))(t37))(t38, 0xFFFFFFFD, t8, 0x0);
                        }
                    } else {
                        t41 = *(int *)((t35 + 0x0));
                        *(unsigned int *)((a4 + 0x14)) = t41;
                        *(unsigned int *)((t35 + 0x0)) = 0x0;
                        t42 = *(int *)((a6 + 0x4));
                        *(unsigned int *)(((t35 + 0x8) + 0x4)) = t42;
                        t43 = *(int *)((a6 + 0x0));
                        *(unsigned int *)(((t35 + 0x8) + 0x0)) = t43;
                        *(unsigned int *)((t6 + 0x0)) = t35;
                    }
                }
                return SJUNI_Unlock(a4, t5);
            }
            return 0;
        }
        return 0;
    }
    t44 = *(int *)((a4 + 0x28));
    if (t44 != 0) {
        t45 = *(int *)((a4 + 0x2C));
        t46 = *(int *)((a4 + 0x28));
        return ((int (*)(int, int, int))(t46))(t45, 0xFFFFFFFD, a6);
    }
    return 0;
}

int SJUNI_UngetChunk(int a4, int a5, int a6)
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
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;

    if ((int)a5 >= 0) {
        if ((int)a5 >= (int)0x4) {
            t0 = *(int *)((a4 + 0x28));
            if (t0 != 0) {
                t1 = *(int *)((a4 + 0x2C));
                t2 = *(int *)((a4 + 0x28));
                return ((int (*)(int, int, int))(t2))(t1, 0xFFFFFFFD, a6);
            }
            return 0;
        }
        t3 = *(int *)((a6 + 0x4));
        if ((int)t3 > 0) {
            t4 = *(int *)((a6 + 0x0));
            if (t4 != 0) {
                t5 = SJUNI_Lock();
                t6 = *(signed char *)((a4 + 0x5));
                t7 = *(int *)((((a5 << 2) + (a4 + 0x18)) + 0x0));
                if (t6 == 1) {
                    if (t7 != 0) {
                        t8 = *(int *)((a6 + 0x0));
                        t9 = *(int *)((a6 + 0x4));
                        t10 = *(int *)((t7 + 0x8));
                        if ((t8 + t9) == t10) {
                            t11 = *(int *)((a6 + 0x0));
                            *(unsigned int *)((t7 + 0x8)) = t11;
                            t12 = *(int *)((a6 + 0x4));
                            t13 = *(int *)((t7 + 0xC));
                            *(unsigned int *)((t7 + 0xC)) = (t13 + t12);
                        } else {
                            t14 = *(int *)((a4 + 0x14));
                            if (t14 == 0) {
                                t15 = *(int *)((a4 + 0x28));
                                if (t15 != 0) {
                                    t16 = *(int *)((a4 + 0x28));
                                    t17 = *(int *)((a4 + 0x2C));
                                    t18 = ((int (*)(int, int))(t16))(t17, 0xFFFFFFFD);
                                }
                            } else {
                                t20 = *(int *)((t14 + 0x0));
                                *(unsigned int *)((a4 + 0x14)) = t20;
                                *(unsigned int *)((t14 + 0x0)) = 0x0;
                                t21 = *(int *)((a6 + 0x4));
                                *(unsigned int *)(((t14 + 0x8) + 0x4)) = t21;
                                t22 = *(int *)((a6 + 0x0));
                                *(unsigned int *)(((t14 + 0x8) + 0x0)) = t22;
                                t23 = *(int *)((((a4 + 0x18) + (a5 << 2)) + 0x0));
                                *(unsigned int *)((t14 + 0x0)) = t23;
                                *(unsigned int *)((((a4 + 0x18) + (a5 << 2)) + 0x0)) = t14;
                            }
                        }
                    } else {
                        t24 = *(int *)((a4 + 0x14));
                        if (t24 == 0) {
                            t25 = *(int *)((a4 + 0x28));
                            if (t25 != 0) {
                                t26 = *(int *)((a4 + 0x28));
                                t27 = *(int *)((a4 + 0x2C));
                                t28 = ((int (*)(int, int))(t26))(t27, 0xFFFFFFFD);
                            }
                        } else {
                            t30 = *(int *)((t24 + 0x0));
                            *(unsigned int *)((a4 + 0x14)) = t30;
                            *(unsigned int *)((t24 + 0x0)) = 0x0;
                            t31 = *(int *)((a6 + 0x4));
                            *(unsigned int *)(((t24 + 0x8) + 0x4)) = t31;
                            t32 = *(int *)((a6 + 0x0));
                            *(unsigned int *)(((t24 + 0x8) + 0x0)) = t32;
                            t33 = *(int *)((((a4 + 0x18) + (a5 << 2)) + 0x0));
                            *(unsigned int *)((t24 + 0x0)) = t33;
                            *(unsigned int *)((((a4 + 0x18) + (a5 << 2)) + 0x0)) = t24;
                        }
                    }
                } else {
                    t34 = *(int *)((a4 + 0x14));
                    if (t34 == 0) {
                        t35 = *(int *)((a4 + 0x28));
                        if (t35 != 0) {
                            t36 = *(int *)((a4 + 0x28));
                            t37 = *(int *)((a4 + 0x2C));
                            t38 = ((int (*)(int, int))(t36))(t37, 0xFFFFFFFD);
                        }
                    } else {
                        t40 = *(int *)((t34 + 0x0));
                        *(unsigned int *)((a4 + 0x14)) = t40;
                        *(unsigned int *)((t34 + 0x0)) = 0x0;
                        t41 = *(int *)((a6 + 0x4));
                        *(unsigned int *)(((t34 + 0x8) + 0x4)) = t41;
                        t42 = *(int *)((a6 + 0x0));
                        *(unsigned int *)(((t34 + 0x8) + 0x0)) = t42;
                        t43 = *(int *)((((a4 + 0x18) + (a5 << 2)) + 0x0));
                        *(unsigned int *)((t34 + 0x0)) = t43;
                        *(unsigned int *)((((a4 + 0x18) + (a5 << 2)) + 0x0)) = t34;
                    }
                }
                return SJUNI_Unlock(a4, t5);
            }
            return 0;
        }
        return 0;
    }
    t44 = *(int *)((a4 + 0x28));
    if (t44 != 0) {
        t45 = *(int *)((a4 + 0x2C));
        t46 = *(int *)((a4 + 0x28));
        return ((int (*)(int, int, int))(t46))(t45, 0xFFFFFFFD, a6);
    }
    return 0;
}

int adxsjd_decexec_start(int a4)
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
    int t41;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
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
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    int t83;
    int t84;
    int t85;
    int t86;
    int t87;
    int t88;
    int t89;
    int t90;
    int t91;
    int t92;
    int t94;
    int t95;
    int t96;
    int t97;
    int t98;
    int t99;
    int t100;
    int t101;
    int t102;
    int t103;
    int t104;
    int t105;
    int t106;

    t0 = *(signed char *)((a4 + 0x3));
    t1 = *(int *)((a4 + 0x4));
    t2 = *(int *)((a4 + 0x8));
    if (t0 == 1) {
        t3 = *(int *)((t2 + 0x0));
        t4 = *(int *)((t3 + 0x24));
        t5 = ((int (*)(int, int))(t4))(t2, 0x1);
        if (t5 == 0) {
            *(unsigned char *)((a4 + 0x1)) = 0x3;
            return 0x3;
        }
        t6 = *(int *)((t2 + 0x0));
        t7 = *(int *)((t6 + 0x18));
        t8 = ((int (*)(int, int, int, int))(t7))(t2, 0x1, 0x7FFFFFFF, (a4 + 0x14));
        t9 = ADXB_GetFormat(t1);
        if (t9 == 0) {
            t10 = *(int *)((a4 + 0x18));
            if ((int)t10 >= (int)0x2) {
                t11 = *(int *)((a4 + 0x14));
                t12 = *(short *)((t11 + 0x0));
                if ((unsigned short)((unsigned char)((int)t12 >> 8) | ((t12 << 8) & 0xFF00)) != 0x8001) {
                    t13 = FUN_0c16887a(a4);
                    t14 = *(int *)((a4 + 0x34));
                    if ((int)t14 >= (int)t13) {
                        *(unsigned char *)((a4 + 0x1)) = 0x3;
                        t15 = *(int *)((t2 + 0x0));
                        t16 = *(int *)((t15 + 0x1C));
                        return ((int (*)(int, int, int))(t16))(t2, 0x1, (a4 + 0x14));
                    }
                    t17 = FUN_0c168862(a4);
                    t18 = *(int *)((a4 + 0xC));
                    t19 = *(int *)((t18 + 0x0));
                    t20 = *(int *)((t19 + 0x24));
                    t21 = ((int (*)(int, int))(t20))(t18, 0x0);
                    if ((int)((unsigned int)t21 >> 1) < (int)t17) {
                        t22 = *(int *)((t2 + 0x0));
                        t23 = *(int *)((t22 + 0x1C));
                        return ((int (*)(int, int, int))(t23))(t2, 0x1, (a4 + 0x14));
                    }
                    t24 = *(int *)((a4 + 0x14));
                    t25 = *(int *)((a4 + 0x18));
                    ADXB_EntryData(t1, t24);
                    return ADXB_Start(t1);
                }
                *(unsigned char *)((a4 + 0x1)) = 0x3;
                t27 = *(int *)((t2 + 0x0));
                t28 = *(int *)((t27 + 0x1C));
                return ((int (*)(int, int, int))(t28))(t2, 0x1, (a4 + 0x14));
            }
            t29 = FUN_0c16887a(a4);
            t30 = *(int *)((a4 + 0x34));
            if ((int)t30 >= (int)t29) {
                *(unsigned char *)((a4 + 0x1)) = 0x3;
                t31 = *(int *)((t2 + 0x0));
                t32 = *(int *)((t31 + 0x1C));
                return ((int (*)(int, int, int))(t32))(t2, 0x1, (a4 + 0x14));
            }
            t33 = FUN_0c168862(a4);
            t34 = *(int *)((a4 + 0xC));
            t35 = *(int *)((t34 + 0x0));
            t36 = *(int *)((t35 + 0x24));
            t37 = ((int (*)(int, int))(t36))(t34, 0x0);
            if ((int)((unsigned int)t37 >> 1) < (int)t33) {
                t38 = *(int *)((t2 + 0x0));
                t39 = *(int *)((t38 + 0x1C));
                return ((int (*)(int, int, int))(t39))(t2, 0x1, (a4 + 0x14));
            }
            t40 = *(int *)((a4 + 0x14));
            t41 = *(int *)((a4 + 0x18));
            ADXB_EntryData(t1, t40);
            return ADXB_Start(t1);
        }
        t43 = FUN_0c16887a(a4);
        t44 = *(int *)((a4 + 0x34));
        if ((int)t44 >= (int)t43) {
            *(unsigned char *)((a4 + 0x1)) = 0x3;
            t45 = *(int *)((t2 + 0x0));
            t46 = *(int *)((t45 + 0x1C));
            return ((int (*)(int, int, int))(t46))(t2, 0x1, (a4 + 0x14));
        }
        t47 = FUN_0c168862(a4);
        t48 = *(int *)((a4 + 0xC));
        t49 = *(int *)((t48 + 0x0));
        t50 = *(int *)((t49 + 0x24));
        t51 = ((int (*)(int, int))(t50))(t48, 0x0);
        if ((int)((unsigned int)t51 >> 1) < (int)t47) {
            t52 = *(int *)((t2 + 0x0));
            t53 = *(int *)((t52 + 0x1C));
            return ((int (*)(int, int, int))(t53))(t2, 0x1, (a4 + 0x14));
        }
        t54 = *(int *)((a4 + 0x14));
        t55 = *(int *)((a4 + 0x18));
        ADXB_EntryData(t1, t54);
        return ADXB_Start(t1);
    }
    t57 = *(int *)((t2 + 0x0));
    t58 = *(int *)((t57 + 0x18));
    t59 = ((int (*)(int, int, int, int))(t58))(t2, 0x1, 0x7FFFFFFF, (a4 + 0x14));
    t60 = ADXB_GetFormat(t1);
    if (t60 == 0) {
        t61 = *(int *)((a4 + 0x18));
        if ((int)t61 >= (int)0x2) {
            t62 = *(int *)((a4 + 0x14));
            t63 = *(short *)((t62 + 0x0));
            if ((unsigned short)((unsigned char)((int)t63 >> 8) | ((t63 << 8) & 0xFF00)) != 0x8001) {
                t64 = FUN_0c16887a(a4);
                t65 = *(int *)((a4 + 0x34));
                if ((int)t65 >= (int)t64) {
                    *(unsigned char *)((a4 + 0x1)) = 0x3;
                    t66 = *(int *)((t2 + 0x0));
                    t67 = *(int *)((t66 + 0x1C));
                    return ((int (*)(int, int, int))(t67))(t2, 0x1, (a4 + 0x14));
                }
                t68 = FUN_0c168862(a4);
                t69 = *(int *)((a4 + 0xC));
                t70 = *(int *)((t69 + 0x0));
                t71 = *(int *)((t70 + 0x24));
                t72 = ((int (*)(int, int))(t71))(t69, 0x0);
                if ((int)((unsigned int)t72 >> 1) < (int)t68) {
                    t73 = *(int *)((t2 + 0x0));
                    t74 = *(int *)((t73 + 0x1C));
                    return ((int (*)(int, int, int))(t74))(t2, 0x1, (a4 + 0x14));
                }
                t75 = *(int *)((a4 + 0x14));
                t76 = *(int *)((a4 + 0x18));
                ADXB_EntryData(t1, t75);
                return ADXB_Start(t1);
            }
            *(unsigned char *)((a4 + 0x1)) = 0x3;
            t78 = *(int *)((t2 + 0x0));
            t79 = *(int *)((t78 + 0x1C));
            return ((int (*)(int, int, int))(t79))(t2, 0x1, (a4 + 0x14));
        }
        t80 = FUN_0c16887a(a4);
        t81 = *(int *)((a4 + 0x34));
        if ((int)t81 >= (int)t80) {
            *(unsigned char *)((a4 + 0x1)) = 0x3;
            t82 = *(int *)((t2 + 0x0));
            t83 = *(int *)((t82 + 0x1C));
            return ((int (*)(int, int, int))(t83))(t2, 0x1, (a4 + 0x14));
        }
        t84 = FUN_0c168862(a4);
        t85 = *(int *)((a4 + 0xC));
        t86 = *(int *)((t85 + 0x0));
        t87 = *(int *)((t86 + 0x24));
        t88 = ((int (*)(int, int))(t87))(t85, 0x0);
        if ((int)((unsigned int)t88 >> 1) < (int)t84) {
            t89 = *(int *)((t2 + 0x0));
            t90 = *(int *)((t89 + 0x1C));
            return ((int (*)(int, int, int))(t90))(t2, 0x1, (a4 + 0x14));
        }
        t91 = *(int *)((a4 + 0x14));
        t92 = *(int *)((a4 + 0x18));
        ADXB_EntryData(t1, t91);
        return ADXB_Start(t1);
    }
    t94 = FUN_0c16887a(a4);
    t95 = *(int *)((a4 + 0x34));
    if ((int)t95 >= (int)t94) {
        *(unsigned char *)((a4 + 0x1)) = 0x3;
        t96 = *(int *)((t2 + 0x0));
        t97 = *(int *)((t96 + 0x1C));
        return ((int (*)(int, int, int))(t97))(t2, 0x1, (a4 + 0x14));
    }
    t98 = FUN_0c168862(a4);
    t99 = *(int *)((a4 + 0xC));
    t100 = *(int *)((t99 + 0x0));
    t101 = *(int *)((t100 + 0x24));
    t102 = ((int (*)(int, int))(t101))(t99, 0x0);
    if ((int)((unsigned int)t102 >> 1) < (int)t98) {
        t103 = *(int *)((t2 + 0x0));
        t104 = *(int *)((t103 + 0x1C));
        return ((int (*)(int, int, int))(t104))(t2, 0x1, (a4 + 0x14));
    }
    t105 = *(int *)((a4 + 0x14));
    t106 = *(int *)((a4 + 0x18));
    ADXB_EntryData(t1, t105);
    return ADXB_Start(t1);
}
