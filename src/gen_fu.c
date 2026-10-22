/* Straight-line functions with calls and guards (batch gen_fu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXSJD_Create(int, int, int);
int ADXT_Destroy(int);
int SJRBF_Create(void);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int buCalcCRC(int, int);
int kmSetHSyncCallback(int, int);
int kmSetVSyncCallback(int, int);
int memmove(int, int, int);
int memset(int, int, int);
int thunk_mwRnaCreate(int, int);
int CheckSecretFlag(int a4, int a5);
int FUN_0c151cac(int a4, int a5, int a6);
int buMakeBackupFileImage(int a4, int a5);
void syChainDeleteHandler(int a4);

int CheckSecretFlag(int a4, int a5)
{
    int t2;
    int t3;
    int t4;
    int t5;
    int t9;
    int t10;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t29;
    int t30;
    int t43;
    int t44;
    int t50;
    int t45;
    int t48;
    int t46;
    int t47;
    int t0;
    int t1;

    t2 = a5;
    t3 = 0x0;
    for (;;) {
        t4 = *(signed char *)0xC28A4E8;
        if (((unsigned char)t4 & (((int)t3 >= 0) ? (0x2 << (t3 & 31)) : ((-(int)t3 & 31) ? ((int)0x2 >> (-(int)t3 & 31)) : ((int)0x2 >> 31)))) == 0) {
            t2 = 0x0;
            for (;;) {
                t1 = 0x3C8;
                t1 = (t1 + 0xC2A1258);
                t5 = *(signed char *)((((short)((short)t2 * (short)0x3C) + t1) + 0x8));
                t0 = t5;
                if (t0 == t3) {
                    t2 = (t2 + 0x1);
                    if ((int)t2 >= (int)0x10) {
                        break;
                    }
                    continue;
                }
                break;
            }
            if ((int)t2 >= (int)0x10) {
                t9 = *(signed char *)0xC28A4E8;
                *(unsigned char *)0xC28A4E8 = (t9 | (((int)t3 >= 0) ? (0x2 << (t3 & 31)) : ((-(int)t3 & 31) ? ((int)0x2 >> (-(int)t3 & 31)) : ((int)0x2 >> 31))));
                t10 = *(int *)0xC2A1234;
                t1 = t10;
                t1 = (t1 | (((int)t3 >= 0) ? (0x2 << (t3 & 31)) : ((-(int)t3 & 31) ? ((int)0x2 >> (-(int)t3 & 31)) : ((int)0x2 >> 31))));
                *(unsigned int *)0xC2A1234 = t1;
            }
        }
        t3 = (t3 + 0x1);
        if ((int)t3 >= (int)0x4) {
            break;
        }
    }
    t16 = *(signed char *)0xC28A4E8;
    if (((unsigned char)t16 & 32) == 0) {
        t17 = 0x0;
        t18 = 0x0;
        for (;;) {
            t19 = 0x0;
            for (;;) {
                t20 = *(signed char *)((((0xC2A1620 + (short)((short)t18 * (short)0x3C)) + (signed char)(((t19 << 1) + t19) << 2)) + 0x8));
                if (t20 != 2) {
                    if (t20 == 6) {
                        t19 = (t19 + 0x1);
                        t17 = (t17 + 0x1);
                        if ((int)t19 >= (int)0x5) {
                            break;
                        }
                        continue;
                    }
                    break;
                }
                t19 = (t19 + 0x1);
                t17 = (t17 + 0x1);
                if ((int)t19 >= (int)0x5) {
                    break;
                }
            }
            t18 = (t18 + 0x1);
            if ((int)t18 >= (int)0x10) {
                break;
            }
        }
        if ((int)t17 >= (int)0x50) {
            t29 = *(signed char *)0xC28A4E8;
            *(unsigned char *)0xC28A4E8 = (t29 | 0x20);
            t30 = *(int *)0xC2A1234;
            *(unsigned int *)0xC2A1234 = (t30 | 0x20);
        }
    }
    t43 = *(short *)0xC2A11C4;
    t44 = *(signed char *)0xC28A4E8;
    t50 = (unsigned char)t44;
    if (((unsigned char)t44 & 1) == 0) {
        t45 = *(int *)((((short)((short)t43 * (short)0x788) + 0xC28A4F8) + 0x4));
        t48 = (unsigned char)t44;
        if ((unsigned short)t45 == 0xFFFF) {
            t46 = *(signed char *)0xC28A4E8;
            *(unsigned char *)0xC28A4E8 = (t46 | 0x1);
            t47 = *(int *)0xC2A1234;
            *(unsigned int *)0xC2A1234 = (t47 | 0x1);
            t48 = (t47 | 0x1);
        }
        t50 = t48;
    }
    return t50;
}

int FUN_0c151cac(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t109;
    int t6;
    int t10;
    int t11;
    int t15;
    int t16;
    int t17;
    int t20;
    int t21;
    int t22;
    int t24;
    int t25;
    int t28;
    float u29;
    int t30;
    int t31;
    int t52;
    int t53;
    int t54;
    int t56;
    int t57;
    int t60;
    float u61;
    int t62;
    int t63;
    int t97;
    int t84;
    int t44;
    int t35;
    int t76;
    int t67;
    int stk[11] = {0};

    *(unsigned int *)(((int)stk + 8)) = (a6 - (((a5 + 0x1F) & 0xFFFFFFE0) - a5));
    t0 = 0x0;
    for (;;) {
        t1 = *(signed char *)((((t0 * 0x8C) + 0xC177AE0) + 0x0));
        if (t1 != 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x8) {
                break;
            }
            continue;
        }
        break;
    }
    t109 = 0x0;
    if (t0 != 8) {
        memset(((t0 * 0x8C) + 0xC177AE0), 0x0, 0x8C);
        *(unsigned char *)((((t0 * 0x8C) + 0xC177AE0) + 0x3)) = a4;
        *(unsigned int *)((((t0 * 0x8C) + 0xC177AE0) + 0x20)) = (((((((a4 << 8) + a4) << 2) << 2) << 1) << 1) + ((a5 + 0x1F) & 0xFFFFFFE0));
        t6 = *(int *)(((int)stk + 8));
        *(unsigned int *)((((t0 * 0x8C) + 0xC177AE0) + 0x24)) = (((((unsigned int)((unsigned int)((unsigned int)((t6 - ((((((a4 << 8) + a4) << 2) << 2) << 1) << 1)) - 36) >> 8) >> 2) >> 1) << 8) << 2) << 1);
        *(unsigned int *)((((t0 * 0x8C) + 0xC177AE0) + 0x28)) = 0x24;
        *(unsigned int *)((((t0 * 0x8C) + 0xC177AE0) + 0x2C)) = ((a5 + 0x1F) & 0xFFFFFFE0);
        *(unsigned int *)((((t0 * 0x8C) + 0xC177AE0) + 0x30)) = 0x2000;
        *(unsigned int *)((((t0 * 0x8C) + 0xC177AE0) + 0x34)) = 0x2020;
        *(volatile int *)((((t0 * 0x8C) + 0xC177AE0) + 0x28));
        *(volatile int *)((((t0 * 0x8C) + 0xC177AE0) + 0x24));
        *(volatile int *)((((t0 * 0x8C) + 0xC177AE0) + 0x20));
        t10 = SJRBF_Create();
        *(unsigned int *)((((t0 * 0x8C) + 0xC177AE0) + 0x10)) = t10;
        *(unsigned int *)((((t0 * 0x8C) + 0xC177AE0) + 0x14)) = t10;
        if (t10 != 0) {
            if ((int)a4 > 0) {
                t11 = 0x0;
                for (;;) {
                    *(unsigned int *)(((int)stk + 8)) = (t11 << 2);
                    *(volatile int *)((((t0 * 0x8C) + 0xC177AE0) + 0x34));
                    *(volatile int *)((((t0 * 0x8C) + 0xC177AE0) + 0x30));
                    *(volatile int *)((((t0 * 0x8C) + 0xC177AE0) + 0x2C));
                    t15 = SJRBF_Create();
                    *(unsigned int *)((((t11 << 2) + (((t0 * 0x8C) + 0xC177AE0) + 0x18)) + 0x0)) = t15;
                    t16 = *(int *)(((int)stk + 8));
                    t17 = *(int *)((((((t0 * 0x8C) + 0xC177AE0) + 0x18) + t16) + 0x0));
                    if (t17 != 0) {
                        t11 = (t11 + 0x1);
                        if ((int)t11 >= (int)a4) {
                            break;
                        }
                        continue;
                    }
                    ADXT_Destroy(((t0 * 0x8C) + 0xC177AE0));
                    return 0x0;
                }
                t20 = *(int *)((((t0 * 0x8C) + 0xC177AE0) + 0x14));
                t21 = ADXSJD_Create(t20, a4, (((t0 * 0x8C) + 0xC177AE0) + 0x18));
                *(unsigned int *)((((t0 * 0x8C) + 0xC177AE0) + 0x4)) = t21;
                if (t21 != 0) {
                    t22 = thunk_mwRnaCreate((((t0 * 0x8C) + 0xC177AE0) + 0x18), a4);
                    *(unsigned int *)((((t0 * 0x8C) + 0xC177AE0) + 0xC)) = t22;
                    if (t22 == 0) {
                        ADXT_Destroy(((t0 * 0x8C) + 0xC177AE0));
                        t35 = 0x0;
                    } else {
                        *(unsigned int *)((((t0 * 0x8C) + 0xC177AE0) + 0x38)) = 0x3C;
                        t24 = *(int *)((((t0 * 0x8C) + 0xC177AE0) + 0x24));
                        t25 = t24;
                        if ((int)t24 < 0) {
                            t25 = (t24 + 0x7FF);
                        }
                        *(unsigned short *)((((t0 * 0x8C) + 0xC177AE0) + 0x3C)) = ((int)t25 >> 11);
                        t28 = *(short *)((((t0 * 0x8C) + 0xC177AE0) + 0x3C));
                        u29 = *(float *)0xC151EC0;
                        *(unsigned short *)((((t0 * 0x8C) + 0xC177AE0) + 0x3E)) = (int)((float)t28 * u29);
                        *(unsigned short *)((((t0 * 0x8C) + 0xC177AE0) + 0x40)) = 0x0;
                        if ((int)a4 > 0) {
                            t30 = (((t0 * 0x8C) + 0xC177AE0) + 0x42);
                            t31 = 0x0;
                            for (;;) {
                                t31 = (t31 + 0x1);
                                *(unsigned short *)((t30 + 0x0)) = 0xFFFFFF80;
                                t30 = (t30 + 0x2);
                                if ((int)t31 >= (int)a4) {
                                    break;
                                }
                            }
                        }
                        *(unsigned char *)((((t0 * 0x8C) + 0xC177AE0) + 0x6C)) = 0x1;
                        *(unsigned int *)((((t0 * 0x8C) + 0xC177AE0) + 0x54)) = 0x0;
                        *(unsigned int *)((((t0 * 0x8C) + 0xC177AE0) + 0x58)) = 0x0;
                        *(unsigned int *)((((t0 * 0x8C) + 0xC177AE0) + 0x5C)) = 0x0;
                        *(unsigned short *)((((t0 * 0x8C) + 0xC177AE0) + 0x60)) = 0x0;
                        *(unsigned int *)((((t0 * 0x8C) + 0xC177AE0) + 0x64)) = 0x0;
                        *(unsigned short *)((((t0 * 0x8C) + 0xC177AE0) + 0x68)) = 0x0;
                        *(unsigned short *)((((t0 * 0x8C) + 0xC177AE0) + 0x6A)) = 0x0;
                        *(unsigned char *)((((t0 * 0x8C) + 0xC177AE0) + 0x6D)) = 0x1;
                        *(unsigned char *)((((t0 * 0x8C) + 0xC177AE0) + 0x72)) = 0x0;
                        *(unsigned int *)((((t0 * 0x8C) + 0xC177AE0) + 0x88)) = 0x0;
                        *(unsigned char *)((((t0 * 0x8C) + 0xC177AE0) + 0x0)) = 0x1;
                        t35 = ((t0 * 0x8C) + 0xC177AE0);
                    }
                    t44 = t35;
                } else {
                    ADXT_Destroy(((t0 * 0x8C) + 0xC177AE0));
                    t44 = 0x0;
                }
                t84 = t44;
            } else {
                t52 = *(int *)((((t0 * 0x8C) + 0xC177AE0) + 0x14));
                t53 = ADXSJD_Create(t52, a4, (((t0 * 0x8C) + 0xC177AE0) + 0x18));
                *(unsigned int *)((((t0 * 0x8C) + 0xC177AE0) + 0x4)) = t53;
                if (t53 != 0) {
                    t54 = thunk_mwRnaCreate((((t0 * 0x8C) + 0xC177AE0) + 0x18), a4);
                    *(unsigned int *)((((t0 * 0x8C) + 0xC177AE0) + 0xC)) = t54;
                    if (t54 == 0) {
                        ADXT_Destroy(((t0 * 0x8C) + 0xC177AE0));
                        t67 = 0x0;
                    } else {
                        *(unsigned int *)((((t0 * 0x8C) + 0xC177AE0) + 0x38)) = 0x3C;
                        t56 = *(int *)((((t0 * 0x8C) + 0xC177AE0) + 0x24));
                        t57 = t56;
                        if ((int)t56 < 0) {
                            t57 = (t56 + 0x7FF);
                        }
                        *(unsigned short *)((((t0 * 0x8C) + 0xC177AE0) + 0x3C)) = ((int)t57 >> 11);
                        t60 = *(short *)((((t0 * 0x8C) + 0xC177AE0) + 0x3C));
                        u61 = *(float *)0xC151EC0;
                        *(unsigned short *)((((t0 * 0x8C) + 0xC177AE0) + 0x3E)) = (int)((float)t60 * u61);
                        *(unsigned short *)((((t0 * 0x8C) + 0xC177AE0) + 0x40)) = 0x0;
                        if ((int)a4 > 0) {
                            t62 = (((t0 * 0x8C) + 0xC177AE0) + 0x42);
                            t63 = 0x0;
                            for (;;) {
                                t63 = (t63 + 0x1);
                                *(unsigned short *)((t62 + 0x0)) = 0xFFFFFF80;
                                t62 = (t62 + 0x2);
                                if ((int)t63 >= (int)a4) {
                                    break;
                                }
                            }
                        }
                        *(unsigned char *)((((t0 * 0x8C) + 0xC177AE0) + 0x6C)) = 0x1;
                        *(unsigned int *)((((t0 * 0x8C) + 0xC177AE0) + 0x54)) = 0x0;
                        *(unsigned int *)((((t0 * 0x8C) + 0xC177AE0) + 0x58)) = 0x0;
                        *(unsigned int *)((((t0 * 0x8C) + 0xC177AE0) + 0x5C)) = 0x0;
                        *(unsigned short *)((((t0 * 0x8C) + 0xC177AE0) + 0x60)) = 0x0;
                        *(unsigned int *)((((t0 * 0x8C) + 0xC177AE0) + 0x64)) = 0x0;
                        *(unsigned short *)((((t0 * 0x8C) + 0xC177AE0) + 0x68)) = 0x0;
                        *(unsigned short *)((((t0 * 0x8C) + 0xC177AE0) + 0x6A)) = 0x0;
                        *(unsigned char *)((((t0 * 0x8C) + 0xC177AE0) + 0x6D)) = 0x1;
                        *(unsigned char *)((((t0 * 0x8C) + 0xC177AE0) + 0x72)) = 0x0;
                        *(unsigned int *)((((t0 * 0x8C) + 0xC177AE0) + 0x88)) = 0x0;
                        *(unsigned char *)((((t0 * 0x8C) + 0xC177AE0) + 0x0)) = 0x1;
                        t67 = ((t0 * 0x8C) + 0xC177AE0);
                    }
                    t76 = t67;
                } else {
                    ADXT_Destroy(((t0 * 0x8C) + 0xC177AE0));
                    t76 = 0x0;
                }
                t84 = t76;
            }
            t97 = t84;
        } else {
            ADXT_Destroy(((t0 * 0x8C) + 0xC177AE0));
            t97 = 0x0;
        }
        t109 = t97;
    }
    return t109;
}

int buMakeBackupFileImage(int a4, int a5)
{
    int t0;
    int t287;
    int t1;
    int t274;
    int t2;
    int t261;
    int t3;
    int t248;
    int t4;
    int t235;
    int t5;
    int t6;
    int t108;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
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
    int t46;
    int t47;
    int t48;
    int t55;
    int t57;
    int t58;
    int t69;
    int t70;
    int t81;
    int t82;
    int t83;
    int t84;
    int t105;
    int t106;
    int t125;
    int t126;
    int t127;
    int t128;
    int t129;
    int t131;
    int t132;
    int t133;
    int t134;
    int t135;
    int t137;
    int t138;
    int t139;
    int t140;
    int t141;
    int t143;
    int t144;
    int t145;
    int t146;
    int t147;
    int t148;
    int t149;
    int t150;
    int t151;
    int t152;
    int t160;
    int t161;
    int t162;
    int t169;
    int t171;
    int t172;
    int t183;
    int t184;
    int t195;
    int t196;
    int t197;
    int t198;
    int t219;
    int t220;
    int t222;
    int stk[12] = {0};

    t0 = *(short *)((a5 + 0x4C));
    t287 = 0xFFFFFF00;
    if (t0 != 0) {
        t1 = *(short *)((a5 + 0x4C));
        t274 = 0xFFFFFF00;
        if ((int)(unsigned short)t1 <= (int)0x3) {
            t2 = *(short *)((a5 + 0x54));
            t261 = 0xFFFFFF00;
            if ((int)(unsigned short)t2 <= (int)0x3) {
                t3 = *(int *)((a5 + 0x44));
                t248 = 0xFFFFFF00;
                if (t3 != 0) {
                    t4 = *(int *)((a5 + 0x48));
                    t235 = 0xFFFFFF00;
                    if (t4 != 0) {
                        t5 = *(short *)((a5 + 0x54));
                        if (t5 != 0) {
                            t6 = *(int *)((a5 + 0x50));
                            t108 = 0xFFFFFF00;
                            if (t6 == 0) {
                            } else {
                                memset(a4, 0x0, 0x60);
                                memset(a4, 0x20, 0x10);
                                memset((a4 + 0x10), 0x20, 0x20);
                                memset((a4 + 0x30), 0x0, 0x10);
                                t11 = a5;
                                t12 = 0x0;
                                t13 = a4;
                                for (;;) {
                                    t14 = *(signed char *)((t11 + 0x0));
                                    if (t14 != 0) {
                                        t15 = *(signed char *)((t11 + 0x0));
                                        t11 = (t11 + 0x1);
                                        t12 = (t12 + 0x1);
                                        *(unsigned char *)((t13 + 0x0)) = t15;
                                        t13 = (t13 + 0x1);
                                        if ((int)t12 >= (int)0x10) {
                                            break;
                                        }
                                        continue;
                                    }
                                    break;
                                }
                                t17 = (a5 + 0x12);
                                t18 = 0x0;
                                t19 = (a4 + 0x10);
                                for (;;) {
                                    t20 = *(signed char *)((t17 + 0x0));
                                    if (t20 != 0) {
                                        t21 = *(signed char *)((t17 + 0x0));
                                        t17 = (t17 + 0x1);
                                        t18 = (t18 + 0x1);
                                        *(unsigned char *)((t19 + 0x0)) = t21;
                                        t19 = (t19 + 0x1);
                                        if ((int)t18 >= (int)0x20) {
                                            break;
                                        }
                                        continue;
                                    }
                                    break;
                                }
                                t23 = 0x0;
                                t24 = (a5 + 0x34);
                                t25 = (a4 + 0x30);
                                for (;;) {
                                    t26 = *(signed char *)((t24 + 0x0));
                                    if (t26 != 0) {
                                        t27 = *(signed char *)((t24 + 0x0));
                                        t24 = (t24 + 0x1);
                                        t23 = (t23 + 0x1);
                                        *(unsigned char *)((t25 + 0x0)) = t27;
                                        t25 = (t25 + 0x1);
                                        if ((int)t23 >= (int)0x10) {
                                            break;
                                        }
                                        continue;
                                    }
                                    break;
                                }
                                t29 = *(short *)((a5 + 0x4C));
                                t30 = *(int *)(((((unsigned short)t29 & 0x3) << 2) + 0xC177AA8));
                                t31 = *(short *)((a5 + 0x54));
                                t32 = *(int *)(((((unsigned short)t31 & 0x3) << 2) + 0xC177AB8));
                                t33 = *(int *)((a5 + 0x5C));
                                t34 = *(short *)((a5 + 0x4E));
                                *(unsigned short *)((a4 + 0x42)) = t34;
                                t35 = *(short *)((a5 + 0x4C));
                                *(unsigned short *)((a4 + 0x40)) = t35;
                                *(unsigned int *)(((int)stk + 4)) = 0x80;
                                t36 = *(short *)((a5 + 0x54));
                                if (t36 != 0) {
                                    t37 = *(int *)((a5 + 0x50));
                                    if (t37 == 0) {
                                        *(unsigned short *)((a4 + 0x44)) = 0x0;
                                        *(unsigned int *)(((int)stk + 12)) = 0x0;
                                    } else {
                                        t38 = *(short *)((a5 + 0x54));
                                        *(unsigned short *)((a4 + 0x44)) = t38;
                                        *(unsigned int *)(((int)stk + 12)) = (t30 + 0x80);
                                    }
                                } else {
                                    *(unsigned short *)((a4 + 0x44)) = 0x0;
                                    *(unsigned int *)(((int)stk + 12)) = 0x0;
                                }
                                t46 = *(int *)((a5 + 0x5C));
                                if (t46 != 0) {
                                    t47 = *(int *)((a5 + 0x58));
                                    if (t47 == 0) {
                                        *(unsigned int *)((a4 + 0x48)) = 0x0;
                                        *(unsigned int *)(((int)stk + 8)) = 0x0;
                                    } else {
                                        t48 = *(int *)((a5 + 0x5C));
                                        *(unsigned int *)((a4 + 0x48)) = t48;
                                        *(unsigned int *)(((int)stk + 8)) = ((t30 + t32) + 0x80);
                                    }
                                } else {
                                    *(unsigned int *)((a4 + 0x48)) = 0x0;
                                    *(unsigned int *)(((int)stk + 8)) = 0x0;
                                }
                                if (t30 != 0) {
                                    t55 = *(int *)((a5 + 0x44));
                                    memmove((a4 + 0x60), t55, 0x20);
                                    t57 = *(int *)(((int)stk + 4));
                                    t58 = *(int *)((a5 + 0x48));
                                    memmove((t57 + a4), t58, t30);
                                }
                                if (t32 != 0) {
                                    t69 = *(int *)(((int)stk + 12));
                                    t70 = *(int *)((a5 + 0x50));
                                    memmove((t69 + a4), t70, t32);
                                }
                                t81 = *(int *)((a5 + 0x5C));
                                if (t81 != 0) {
                                    t82 = *(int *)((a5 + 0x5C));
                                    t83 = *(int *)(((int)stk + 8));
                                    t84 = *(int *)((a5 + 0x58));
                                    memmove((t83 + a4), t84, t82);
                                }
                                if ((0x1FF & ((t33 + (t30 + t32)) + 0x80)) != 0) {
                                    memset((a4 + ((t33 + (t30 + t32)) + 0x80)), 0x0, (0x200 - (0x1FF & ((t33 + (t30 + t32)) + 0x80))));
                                }
                                t105 = buCalcCRC(a4, ((t33 + (t30 + t32)) + 0x80));
                                *(unsigned short *)(((0x46 + a4) + 0x0)) = t105;
                                t106 = 0x0;
                                if ((0x1FF & ((t33 + (t30 + t32)) + 0x80)) != 0) {
                                    t106 = 0x1;
                                }
                                t108 = (t106 + ((unsigned int)((unsigned int)((t33 + (t30 + t32)) + 0x80) >> 8) >> 1));
                            }
                            t222 = t108;
                        } else {
                            memset(a4, 0x0, 0x60);
                            memset(a4, 0x20, 0x10);
                            memset((a4 + 0x10), 0x20, 0x20);
                            memset((a4 + 0x30), 0x0, 0x10);
                            t125 = a5;
                            t126 = 0x0;
                            t127 = a4;
                            for (;;) {
                                t128 = *(signed char *)((t125 + 0x0));
                                if (t128 != 0) {
                                    t129 = *(signed char *)((t125 + 0x0));
                                    t125 = (t125 + 0x1);
                                    t126 = (t126 + 0x1);
                                    *(unsigned char *)((t127 + 0x0)) = t129;
                                    t127 = (t127 + 0x1);
                                    if ((int)t126 >= (int)0x10) {
                                        break;
                                    }
                                    continue;
                                }
                                break;
                            }
                            t131 = (a5 + 0x12);
                            t132 = 0x0;
                            t133 = (a4 + 0x10);
                            for (;;) {
                                t134 = *(signed char *)((t131 + 0x0));
                                if (t134 != 0) {
                                    t135 = *(signed char *)((t131 + 0x0));
                                    t131 = (t131 + 0x1);
                                    t132 = (t132 + 0x1);
                                    *(unsigned char *)((t133 + 0x0)) = t135;
                                    t133 = (t133 + 0x1);
                                    if ((int)t132 >= (int)0x20) {
                                        break;
                                    }
                                    continue;
                                }
                                break;
                            }
                            t137 = 0x0;
                            t138 = (a5 + 0x34);
                            t139 = (a4 + 0x30);
                            for (;;) {
                                t140 = *(signed char *)((t138 + 0x0));
                                if (t140 != 0) {
                                    t141 = *(signed char *)((t138 + 0x0));
                                    t138 = (t138 + 0x1);
                                    t137 = (t137 + 0x1);
                                    *(unsigned char *)((t139 + 0x0)) = t141;
                                    t139 = (t139 + 0x1);
                                    if ((int)t137 >= (int)0x10) {
                                        break;
                                    }
                                    continue;
                                }
                                break;
                            }
                            t143 = *(short *)((a5 + 0x4C));
                            t144 = *(int *)(((((unsigned short)t143 & 0x3) << 2) + 0xC177AA8));
                            t145 = *(short *)((a5 + 0x54));
                            t146 = *(int *)(((((unsigned short)t145 & 0x3) << 2) + 0xC177AB8));
                            t147 = *(int *)((a5 + 0x5C));
                            t148 = *(short *)((a5 + 0x4E));
                            *(unsigned short *)((a4 + 0x42)) = t148;
                            t149 = *(short *)((a5 + 0x4C));
                            *(unsigned short *)((a4 + 0x40)) = t149;
                            *(unsigned int *)(((int)stk + 4)) = 0x80;
                            t150 = *(short *)((a5 + 0x54));
                            if (t150 != 0) {
                                t151 = *(int *)((a5 + 0x50));
                                if (t151 == 0) {
                                    *(unsigned short *)((a4 + 0x44)) = 0x0;
                                    *(unsigned int *)(((int)stk + 12)) = 0x0;
                                } else {
                                    t152 = *(short *)((a5 + 0x54));
                                    *(unsigned short *)((a4 + 0x44)) = t152;
                                    *(unsigned int *)(((int)stk + 12)) = (t144 + 0x80);
                                }
                            } else {
                                *(unsigned short *)((a4 + 0x44)) = 0x0;
                                *(unsigned int *)(((int)stk + 12)) = 0x0;
                            }
                            t160 = *(int *)((a5 + 0x5C));
                            if (t160 != 0) {
                                t161 = *(int *)((a5 + 0x58));
                                if (t161 == 0) {
                                    *(unsigned int *)((a4 + 0x48)) = 0x0;
                                    *(unsigned int *)(((int)stk + 8)) = 0x0;
                                } else {
                                    t162 = *(int *)((a5 + 0x5C));
                                    *(unsigned int *)((a4 + 0x48)) = t162;
                                    *(unsigned int *)(((int)stk + 8)) = ((t144 + t146) + 0x80);
                                }
                            } else {
                                *(unsigned int *)((a4 + 0x48)) = 0x0;
                                *(unsigned int *)(((int)stk + 8)) = 0x0;
                            }
                            if (t144 != 0) {
                                t169 = *(int *)((a5 + 0x44));
                                memmove((a4 + 0x60), t169, 0x20);
                                t171 = *(int *)(((int)stk + 4));
                                t172 = *(int *)((a5 + 0x48));
                                memmove((t171 + a4), t172, t144);
                            }
                            if (t146 != 0) {
                                t183 = *(int *)(((int)stk + 12));
                                t184 = *(int *)((a5 + 0x50));
                                memmove((t183 + a4), t184, t146);
                            }
                            t195 = *(int *)((a5 + 0x5C));
                            if (t195 != 0) {
                                t196 = *(int *)((a5 + 0x5C));
                                t197 = *(int *)(((int)stk + 8));
                                t198 = *(int *)((a5 + 0x58));
                                memmove((t197 + a4), t198, t196);
                            }
                            if ((0x1FF & ((t147 + (t144 + t146)) + 0x80)) != 0) {
                                memset((a4 + ((t147 + (t144 + t146)) + 0x80)), 0x0, (0x200 - (0x1FF & ((t147 + (t144 + t146)) + 0x80))));
                            }
                            t219 = buCalcCRC(a4, ((t147 + (t144 + t146)) + 0x80));
                            *(unsigned short *)(((0x46 + a4) + 0x0)) = t219;
                            t220 = 0x0;
                            if ((0x1FF & ((t147 + (t144 + t146)) + 0x80)) != 0) {
                                t220 = 0x1;
                            }
                            t222 = (t220 + ((unsigned int)((unsigned int)((t147 + (t144 + t146)) + 0x80) >> 8) >> 1));
                        }
                        t235 = t222;
                    }
                    t248 = t235;
                }
                t261 = t248;
            }
            t274 = t261;
        }
        t287 = t274;
    }
    return t287;
}

void syChainDeleteHandler(int a4)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t9;
    int t10;
    int t11;
    int t13;
    int t14;
    int t15;
    int t18;
    int t19;
    int t27;
    int t72;
    int t1;
    int stk[9] = {0};

    t0 = _builtin_get_imask();
    *(unsigned short *)(((int)stk + 4)) = t0;
    _builtin_set_imask(0xF);
    t2 = 0x1;
    for (;;) {
        t3 = *(int *)(((((t2 << 2) << 2) + 0xC2EAC10) + 0x4));
        if (t3 == (((a4 << 2) << 2) + 0xC2EAC10)) {
            t4 = *(int *)(((((t2 << 2) << 2) + 0xC2EAC10) + 0xC));
            t1 = t4;
            if ((t1 & 0x80000000) == 0) {
                t2 = (t2 + 0x1);
                if ((unsigned int)t2 >= (unsigned int)0x100) {
                    break;
                }
                continue;
            }
            break;
        }
        t2 = (t2 + 0x1);
        if ((unsigned int)t2 >= (unsigned int)0x100) {
            break;
        }
    }
    if (t2 != 0x100) {
        t9 = *(int *)(((((a4 << 2) << 2) + 0xC2EAC10) + 0x4));
        *(unsigned int *)(((((t2 << 2) << 2) + 0xC2EAC10) + 0x4)) = t9;
        *(unsigned int *)(((((a4 << 2) << 2) + 0xC2EAC10) + 0xC)) = 0x0;
    } else {
        t10 = 0x1;
        for (;;) {
            t11 = *(int *)((0xC2EBC10 + (t10 << 2)));
            if (t11 == (((a4 << 2) << 2) + 0xC2EAC10)) {
                break;
            }
            t10 = (t10 + 0x1);
            if ((unsigned int)t10 >= (unsigned int)0xC0) {
                t13 = *(short *)(((int)stk + 4));
                _builtin_set_imask(((unsigned int)((((unsigned short)t13 & 0xF) << 2) << 2) >> 4));
                return;
            }
        }
        t14 = *(int *)(((((a4 << 2) << 2) + 0xC2EAC10) + 0x4));
        *(unsigned int *)((((t10 << 2) + 0xC2EBC10) + 0x0)) = t14;
        *(unsigned int *)(((((a4 << 2) << 2) + 0xC2EAC10) + 0xC)) = 0x0;
        t15 = *(int *)((((t10 << 2) + 0xC2EBC10) + 0x0));
        if (t15 == 0) {
            if (t10 == 0x90) {
                kmSetVSyncCallback(0x0, 0x0);
            } else {
                if (t10 == 0x92) {
                    kmSetHSyncCallback(0x0, 0x0);
                } else {
                    if (((int)(short)((t10 << 2) << 2) >> 8) == 10) {
                        t18 = *(int *)0xA05F6920;
                        *(unsigned int *)0xA05F6920 = (t18 & (~(((int)(((unsigned int)((unsigned int)((unsigned int)(unsigned char)((t10 << 2) << 2) >> 2) >> 2) >> 1) + 0xC) >= 0) ? (0x1 << ((((unsigned int)((unsigned int)((unsigned int)(unsigned char)((t10 << 2) << 2) >> 2) >> 2) >> 1) + 0xC) & 31)) : ((-(int)(((unsigned int)((unsigned int)((unsigned int)(unsigned char)((t10 << 2) << 2) >> 2) >> 2) >> 1) + 0xC) & 31) ? ((int)0x1 >> (-(int)(((unsigned int)((unsigned int)((unsigned int)(unsigned char)((t10 << 2) << 2) >> 2) >> 2) >> 1) + 0xC) & 31)) : ((int)0x1 >> 31)))));
                    } else {
                        if (((int)(short)((t10 << 2) << 2) >> 8) == 11) {
                            t19 = *(int *)0xA05F6924;
                            *(unsigned int *)0xA05F6924 = (t19 & (~(((int)((unsigned int)((unsigned int)((unsigned int)(unsigned char)((t10 << 2) << 2) >> 2) >> 2) >> 1) >= 0) ? (0x1 << (((unsigned int)((unsigned int)((unsigned int)(unsigned char)((t10 << 2) << 2) >> 2) >> 2) >> 1) & 31)) : ((-(int)((unsigned int)((unsigned int)((unsigned int)(unsigned char)((t10 << 2) << 2) >> 2) >> 2) >> 1) & 31) ? ((int)0x1 >> (-(int)((unsigned int)((unsigned int)((unsigned int)(unsigned char)((t10 << 2) << 2) >> 2) >> 2) >> 1) & 31)) : ((int)0x1 >> 31)))));
                        }
                    }
                    t27 = (int)_builtin_get_vbr();
                    *(unsigned int *)((((t27 + ((unsigned int)((unsigned int)(((t10 << 2) << 2) - 512) >> 2) >> 1)) + 0x200) + 0x0)) = 0xC16DD08;
                }
            }
        }
    }
    t72 = *(short *)(((int)stk + 4));
    _builtin_set_imask(((unsigned int)((((unsigned short)t72 & 0xF) << 2) << 2) >> 4));
}
