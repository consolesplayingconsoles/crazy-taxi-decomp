/* Straight-line functions with calls and guards (batch gen_bp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXB_EntryData(int, int);
int ADXB_GetFormat(int);
int ADXB_Start(int);
int ADXSJD_GetBlkSmpl(int);
int ADXSJD_GetTotalNumSmpl(int);
int SJUNI_Lock(void);
int SJUNI_Unlock(int, int);
int bootJumpVector(void);
int kmiDefaultInterruptHandler(int a4);
int SJUNI_PutChunk(int a4, int a5, int a6);
int SJUNI_UngetChunk(int a4, int a5, int a6);
int adxsjd_decexec_start(int a4);

int bootJumpVector(void)
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

