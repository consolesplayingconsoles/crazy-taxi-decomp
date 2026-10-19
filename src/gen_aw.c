/* Straight-line functions with calls and guards (batch gen_aw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02e2ca(int);
int FUN_0c03bea0(int, int, int);
int FUN_0c051746(void);
int FUN_0c05187a(void);
int FUN_0c072dd4(void);
int FUN_0c1573a0(void);
int FUN_0c1573cc(int);
int FUN_0c1573f2(int, int, int);
int FUN_0c15748a(int, int, int);
int SetSEvolume(void);
int Sound_Request(int, int);
int humanDraw(int, int, int, int);
int kmytex_FBDeQueueEntry(int, int, int);
int kmytex_FBEnQueueEntry(int, int, int);
int menuPutSprites(int, int, int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int putString(int, int, float, float, float);

void FUN_0c089270(int a4, int a5, int a6)
{
    int t8;
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    if ((short)(0x8 - a6) != 0) {
        t8 = 0x0;
        if ((int)(a5 - 1) >= 0) {
            t0 = (a4 + (a5 - 1));
            t1 = (a5 - 1);
            t2 = 0x0;
            do {
                t3 = *(signed char *)((t0 + 0x0));
                t4 = *(signed char *)((t0 + 0x0));
                t1 = (t1 - 1);
                *(unsigned char *)((t0 + 0x0)) = (((int)(short)a6 >= 0) ? (t3 << ((short)a6 & 31)) : ((-(int)(short)a6 & 31) ? ((unsigned int)t3 >> (-(int)(short)a6 & 31)) : 0));
                t5 = *(signed char *)((t0 + 0x0));
                *(unsigned char *)((t0 + 0x0)) = (t5 | t2);
                t2 = (unsigned char)(t4 & (((int)(short)(0x8 - a6) >= 0) ? (0xFF << ((short)(0x8 - a6) & 31)) : ((-(int)(short)(0x8 - a6) & 31) ? ((int)0xFF >> (-(int)(short)(0x8 - a6) & 31)) : ((int)0xFF >> 31))));
                t2 = (((int)(-(short)(0x8 - a6)) >= 0) ? (t2 << ((-(short)(0x8 - a6)) & 31)) : ((-(int)(-(short)(0x8 - a6)) & 31) ? ((unsigned int)t2 >> (-(int)(-(short)(0x8 - a6)) & 31)) : 0));
                t0 = (t0 - 1);
            } while ((int)t1 >= 0);
            t8 = t2;
        }
        if ((unsigned char)t8 != 0) {
            return;
        }
        return;
    }
}

int selectDrawDriver(int a4)
{
    int t2;
    int t3;
    float u4;
    float u7;
    int t10;
    int t12;
    int t13;
    int t14;
    int t15;
    int t17;
    int t18;
    int t19;
    int t20;
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
    int t47;
    int t48;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;

    nlPushUnitMatrix();
    nlTranslateV(0xC2A7520);
    t2 = *(int *)0xC2A759C;
    if (t2 != 1) {
        t3 = *(int *)0xC2A759C;
        if (t3 == 2) {
            u4 = *(float *)0xC2A7508;
            nlTranslate(u4, 0.0f, 0.0f);
        }
    } else {
        u7 = *(float *)0xC2A7508;
        nlTranslate(u7, 0.0f, 0.0f);
    }
    t10 = *(short *)0xC2A752C;
    nlRotateAY((unsigned short)t10);
    t12 = *(int *)0xC2A7518;
    if ((int)t12 <= (int)0x1) {
        t13 = *(int *)(((((a4 << 2) << 2) + 0xC130748) + 0xC));
        t14 = *(int *)((((a4 << 2) + 0xC2A7538) + 0x0));
        t15 = *(int *)(((((a4 << 2) << 2) + 0xC130748) + 0x4));
        humanDraw(t15, t13, t14, 0x0);
        t17 = *(int *)(((((a4 << 2) << 2) + 0xC130748) + 0x4));
        t18 = *(int *)((t17 + 0x0));
        t19 = *(int *)((((a4 << 2) + 0xC2A7538) + 0x0));
        if ((unsigned int)(t18 - 1) > (unsigned int)t19) {
            t20 = *(int *)((((a4 << 2) + 0xC2A7538) + 0x0));
            *(unsigned int *)((((a4 << 2) + 0xC2A7538) + 0x0)) = (t20 + 0x1);
        } else {
            *(unsigned int *)((((a4 << 2) + 0xC2A7538) + 0x0)) = 0x0;
        }
    } else {
        FUN_0c051746();
        FUN_0c05187a();
        t25 = *(int *)0xC2A7518;
        t26 = *(int *)0xC2A751C;
        if (t25 == 3) {
            t27 = *(int *)((t26 + 0x0));
            t28 = *(int *)((t26 + 0x0));
            t29 = *(int *)(((((t27 << 2) << 2) + 0xC130748) + 0x8));
            t30 = *(int *)((t29 + 0x0));
            t31 = *(int *)((0xC2A7538 + (t28 << 2)));
            if ((unsigned int)(t30 - 1) > (unsigned int)t31) {
                if ((int)t25 >= (int)0x3) {
                    t32 = *(int *)((t26 + 0x0));
                    if (t32 == a4) {
                        t33 = *(int *)((t26 + 0x0));
                        t34 = *(int *)((0xC2A7538 + (t33 << 2)));
                        *(unsigned int *)((0xC2A7538 + (t33 << 2))) = (t34 + 0x1);
                        t35 = *(int *)0xC2A751C;
                        t36 = *(int *)((t35 + 0x0));
                        t37 = *(int *)((0xC2A7538 + (t36 << 2)));
                        if (t37 == 30) {
                            t38 = *(int *)0xC17948C;
                            if (t38 != 0) {
                                t39 = *(int *)0xC2A75C0;
                                if (t39 == 4) {
                                    Sound_Request(0x501A9, 0x0);
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((int)t25 >= (int)0x2) {
                t47 = *(int *)((t26 + 0x0));
                t48 = *(int *)((0xC2A7538 + (t47 << 2)));
                *(unsigned int *)((0xC2A7538 + (t47 << 2))) = (t48 + 0x1);
            }
        }
        t51 = *(int *)0xC2A751C;
        t52 = *(int *)((t51 + 0x0));
        t53 = *(int *)((t51 + 0x0));
        t54 = *(int *)(((((t52 << 2) << 2) + 0xC130748) + 0x8));
        t55 = *(int *)((0xC2A7538 + (t53 << 2)));
        t56 = *(int *)((t54 + 0x0));
        if ((unsigned int)(t56 - 1) <= (unsigned int)t55) {
            *(unsigned int *)0xC2A7518 = 0x4;
            t57 = *(int *)0xC2A751C;
            t58 = *(int *)0xC2A75C0;
            t59 = *(int *)((t57 + 0x0));
            *(unsigned int *)((t57 + 0x0)) = (t59 + t58);
        }
    }
    return nlPopMatrix(0x1);
}

int FUN_0c03d80a(int a4, int a5)
{
    int t0;
    int t2;
    float u4;
    float u5;
    int t7;
    int t8;
    int t9;
    int t15;
    int t20;
    int t16;
    int t17;
    int t18;
    int t19;
    int stk[12];

    t0 = *(int *)0xC2A1ADC;
    t2 = 0xC28A4ED;
    u4 = 290.0f;
    u5 = (float)(t0 + 0x1DE);
    if (a5 == 4) {
        t2 = 0xC28A4EC;
        u4 = 256.0f;
        u5 = (float)(0x1DE - t0);
    }
    t7 = *(signed char *)((t2 + 0x0));
    *(unsigned int *)(((int)stk + 4)) = (unsigned char)t7;
    if (a4 != 0) {
        t8 = FUN_0c03bea0(0x0, ((int)stk + 4), 0x9);
        if (t8 == 1) {
            t9 = *(int *)(((int)stk + 4));
            *(unsigned char *)((t2 + 0x0)) = t9;
            SetSEvolume();
            FUN_0c072dd4();
            FUN_0c02e2ca(0x7F);
        }
    }
    putString(0x28, 0xC0A2058, (u5 + -82.0f), (u4 + -7.0f), 1.0f);
    t15 = putString(0x20, 0xC0A205C, (u5 + 82.0f), (u4 + -7.0f), 1.0f);
    t20 = t15;
    if ((int)0x8 > 0) {
        t16 = 0x0;
        do {
            t17 = *(int *)(((int)stk + 4));
            t18 = 0xC0A0868;
            if ((int)t16 < (int)t17) {
                t18 = 0xC0A0858;
            }
            t19 = menuPutSprites(t18, 0xC2A1A84, (int)((float)(((((t16 - 3) << 2) + (t16 - 3)) << 2) - 10) + u5), (int)u4);
            t16 = (t16 + 0x1);
        } while ((int)t16 < (int)0x8);
        t20 = t19;
    }
    return t20;
}

int FUN_0c15762c(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t166;
    int t163;
    int t2;
    int t3;
    int t4;
    int t14;
    int t13;
    int t11;
    int t9;
    int t7;
    int t5;
    int t15;
    int t26;
    int t24;
    int t22;
    int t20;
    int t18;
    int t16;
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
    int t42;
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
    int t57;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    int t65;
    int t69;
    int t70;
    int t71;
    int t73;
    int t74;
    int t75;
    int t76;
    int t77;
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
    int t97;
    int t98;
    int t99;
    int t100;
    int t101;
    int t102;
    int t107;
    int t108;
    int t109;
    int t110;
    int t111;
    int t112;
    int t113;
    int t116;
    int t117;
    int t118;
    int t120;
    int t121;
    int t122;
    int t123;
    int t124;
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
    int t144;
    int t145;
    int t146;
    int t147;
    int t148;
    int t149;
    int t154;
    int t155;
    int t156;
    int t157;
    int t158;
    int t159;
    int t160;

    t0 = *(int *)((a4 + 0x0));
    t1 = *(int *)((a6 + 0x0));
    t166 = 0x0;
    if (t0 != 0) {
        t163 = 0x0;
        if (t1 != 0) {
            t2 = t0;
            t3 = t1;
            for (;;) {
                t4 = *(short *)((t3 + 0x0));
                t14 = 0x1;
                if ((0x20 & (unsigned short)t4) == 0) {
                    t13 = 0x1;
                    if ((0x40 & (unsigned short)t4) == 0) {
                        t11 = 0x0;
                        if ((0x2 & (unsigned short)t4) == 0) {
                            t9 = 0x1;
                            if ((0x80 & (unsigned short)t4) == 0) {
                                t7 = 0x0;
                                if ((0x2 & (unsigned short)t4) == 0) {
                                    t5 = 0x0;
                                    if ((0x100 & (unsigned short)t4) != 0) {
                                        t5 = 0x1;
                                    }
                                    t7 = t5;
                                }
                                t9 = t7;
                            }
                            t11 = t9;
                        }
                        t13 = t11;
                    }
                    t14 = t13;
                }
                t15 = *(short *)((t3 + 0x0));
                t26 = 0x2;
                if ((0x200 & (unsigned short)t15) == 0) {
                    t24 = 0x2;
                    if ((0x400 & (unsigned short)t15) == 0) {
                        t22 = t14;
                        if ((0x2 & (unsigned short)t15) == 0) {
                            t20 = 0x2;
                            if ((0x800 & (unsigned short)t15) == 0) {
                                t18 = t14;
                                if ((0x2 & (unsigned short)t15) == 0) {
                                    t16 = t14;
                                    if ((0x1000 & (unsigned short)t15) != 0) {
                                        t16 = 0x2;
                                    }
                                    t18 = t16;
                                }
                                t20 = t18;
                            }
                            t22 = t20;
                        }
                        t24 = t22;
                    }
                    t26 = t24;
                }
                if (t26 == 0) {
                    if (t2 != 0) {
                        t28 = *(int *)((t2 + 0xC));
                        t29 = *(int *)((t3 + 0xC));
                        if ((int)t28 < (int)t29) {
                            for (;;) {
                                t30 = *(int *)((t2 + 0x8));
                                t2 = t30;
                                if (t2 != 0) {
                                    t31 = *(int *)((t2 + 0xC));
                                    t32 = *(int *)((t3 + 0xC));
                                    if ((int)t31 >= (int)t32) break;
                                    continue;
                                }
                                return 0x0;
                            }
                            if (t2 != 0) {
                                if (t3 != 0) {
                                    t33 = *(int *)((t2 + 0xC));
                                    t34 = *(int *)((t3 + 0xC));
                                    if ((int)t33 > (int)t34) {
                                        for (;;) {
                                            t35 = *(int *)((t3 + 0x8));
                                            t3 = t35;
                                            if (t3 != 0) {
                                                t36 = *(int *)((t2 + 0xC));
                                                t37 = *(int *)((t3 + 0xC));
                                                if ((int)t36 <= (int)t37) break;
                                                continue;
                                            }
                                            return 0x0;
                                        }
                                        if (t3 != 0) {
                                            if (t2 != 0) continue;
                                            return 0x0;
                                        }
                                        return 0x0;
                                    }
                                    if (t3 != 0) {
                                        if (t2 != 0) continue;
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        if (t2 != 0) {
                            if (t3 != 0) {
                                t38 = *(int *)((t2 + 0xC));
                                t39 = *(int *)((t3 + 0xC));
                                if ((int)t38 > (int)t39) {
                                    for (;;) {
                                        t40 = *(int *)((t3 + 0x8));
                                        t3 = t40;
                                        if (t3 != 0) {
                                            t41 = *(int *)((t2 + 0xC));
                                            t42 = *(int *)((t3 + 0xC));
                                            if ((int)t41 <= (int)t42) break;
                                            continue;
                                        }
                                        return 0x0;
                                    }
                                    if (t3 != 0) {
                                        if (t2 != 0) continue;
                                        return 0x0;
                                    }
                                    return 0x0;
                                }
                                if (t3 != 0) {
                                    if (t2 != 0) continue;
                                    return 0x0;
                                }
                                return 0x0;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                t43 = *(int *)((t2 + 0xC));
                t44 = *(int *)((t2 + 0x10));
                t45 = *(int *)((t3 + 0xC));
                if ((t43 + t44) != t45) {
                    if (t3 != 0) {
                        t46 = *(int *)((t2 + 0xC));
                        t47 = *(int *)((t3 + 0xC));
                        if ((int)t46 > (int)t47) {
                            t48 = t47;
                            t49 = t46;
                            for (;;) {
                                t50 = *(int *)((t3 + 0x8));
                                t3 = t50;
                                if (t3 != 0) {
                                    t51 = *(int *)((t2 + 0xC));
                                    t49 = t51;
                                    t52 = *(int *)((t3 + 0xC));
                                    t48 = t52;
                                    if ((int)t49 <= (int)t48) break;
                                    continue;
                                }
                                break;
                            }
                        }
                    }
                    if (t3 == 0) {
                        return 0x0;
                    }
                    if (t2 != 0) continue;
                    return 0x0;
                }
                t57 = *(int *)((t2 + 0xC));
                t58 = ((~(((~t57) + 0x1) & 0x1F)) + 0x1);
                if ((int)t57 >= 0) {
                    t58 = (t57 & 0x1F);
                }
                if (t58 != 0) {
                    t59 = FUN_0c1573a0();
                    if (t59 == 0) break;
                    t60 = *(int *)((t2 + 0xC));
                    *(unsigned int *)((t59 + 0xC)) = t60;
                    t61 = *(int *)((t2 + 0xC));
                    *(unsigned int *)((t2 + 0xC)) = ((t61 + 0x1F) & 0xFFFFFFE0);
                    t62 = *(int *)((t2 + 0xC));
                    t63 = *(int *)((t59 + 0xC));
                    *(unsigned int *)((t59 + 0x10)) = (t62 - t63);
                    t64 = *(int *)((t2 + 0x10));
                    *(unsigned int *)((t2 + 0x10)) = (t64 - (t62 - t63));
                    t65 = *(int *)((t2 + 0x4));
                    if (t65 == 0) {
                        FUN_0c1573f2(a4, a5, t59);
                    } else {
                        kmytex_FBEnQueueEntry(a5, t59, t65);
                    }
                    t69 = *(int *)((t3 + 0xC));
                    t70 = *(int *)((t3 + 0x10));
                    t71 = *(int *)((t2 + 0xC));
                    FUN_0c15748a(t71, t69, t70);
                    t73 = *(int *)((t3 + 0xC));
                    t74 = *(int *)((t2 + 0xC));
                    *(unsigned int *)((t3 + 0xC)) = t74;
                    t75 = *(int *)((t3 + 0x10));
                    t76 = *(int *)((t2 + 0xC));
                    *(unsigned int *)((t2 + 0xC)) = (t76 + t75);
                    if (t26 == 1) {
                        t77 = *(int *)((t3 + 0xC));
                        t78 = *(int *)((t3 + 0x14));
                        *(unsigned int *)((t78 + 0x1C)) = t77;
                    } else {
                        t79 = *(int *)((t3 + 0xC));
                        t80 = *(int *)((t3 + 0x14));
                        *(unsigned int *)((t80 + 0x8)) = t79;
                        t81 = t80;
                        t82 = 0x0;
                        t83 = 0x0;
                        do {
                            t84 = *(int *)((t3 + 0x14));
                            t85 = *(int *)((((t84 + 0xC) + t82) + 0x0));
                            if (t85 != 0) {
                                t86 = *(int *)((t3 + 0x14));
                                t87 = *(int *)((((t86 + 0xC) + t83) + 0x0));
                                t88 = *(int *)((t87 + 0x1C));
                                t81 = t88;
                                t81 = (t81 - (((unsigned int)(t73 - t74) >> 2) << 2));
                                *(unsigned int *)((t87 + 0x1C)) = t81;
                            }
                            t82 = (t82 + 0x4);
                            t83 = (t83 + 0x4);
                        } while ((unsigned int)t82 < (unsigned int)0x40);
                    }
                    t97 = *(int *)((t2 + 0x8));
                    if (t97 != 0) {
                        t98 = *(int *)((t2 + 0xC));
                        t99 = *(int *)((t2 + 0x10));
                        t100 = *(int *)((t97 + 0xC));
                        if ((t98 + t99) == t100) {
                            t101 = *(int *)((t2 + 0x10));
                            t102 = *(int *)((t97 + 0x10));
                            *(unsigned int *)((t2 + 0x10)) = (t101 + t102);
                            kmytex_FBDeQueueEntry(a4, a5, t97);
                            FUN_0c1573cc(t97);
                        }
                    }
                    if (t3 != 0) {
                        t107 = *(int *)((t2 + 0xC));
                        t108 = *(int *)((t3 + 0xC));
                        if ((int)t107 > (int)t108) {
                            t109 = t108;
                            t110 = t107;
                            for (;;) {
                                t111 = *(int *)((t3 + 0x8));
                                t3 = t111;
                                if (t3 != 0) {
                                    t112 = *(int *)((t2 + 0xC));
                                    t110 = t112;
                                    t113 = *(int *)((t3 + 0xC));
                                    t109 = t113;
                                    if ((int)t110 <= (int)t109) break;
                                    continue;
                                }
                                break;
                            }
                        }
                    }
                    if (t3 == 0) {
                        return 0x0;
                    }
                    if (t2 != 0) continue;
                    return 0x0;
                }
                t116 = *(int *)((t3 + 0xC));
                t117 = *(int *)((t3 + 0x10));
                t118 = *(int *)((t2 + 0xC));
                FUN_0c15748a(t118, t116, t117);
                t120 = *(int *)((t3 + 0xC));
                t121 = *(int *)((t2 + 0xC));
                *(unsigned int *)((t3 + 0xC)) = t121;
                t122 = *(int *)((t3 + 0x10));
                t123 = *(int *)((t2 + 0xC));
                *(unsigned int *)((t2 + 0xC)) = (t123 + t122);
                if (t26 == 1) {
                    t124 = *(int *)((t3 + 0xC));
                    t125 = *(int *)((t3 + 0x14));
                    *(unsigned int *)((t125 + 0x1C)) = t124;
                } else {
                    t126 = *(int *)((t3 + 0xC));
                    t127 = *(int *)((t3 + 0x14));
                    *(unsigned int *)((t127 + 0x8)) = t126;
                    t128 = t127;
                    t129 = 0x0;
                    t130 = 0x0;
                    do {
                        t131 = *(int *)((t3 + 0x14));
                        t132 = *(int *)((((t131 + 0xC) + t129) + 0x0));
                        if (t132 != 0) {
                            t133 = *(int *)((t3 + 0x14));
                            t134 = *(int *)((((t133 + 0xC) + t130) + 0x0));
                            t135 = *(int *)((t134 + 0x1C));
                            t128 = t135;
                            t128 = (t128 - (((unsigned int)(t120 - t121) >> 2) << 2));
                            *(unsigned int *)((t134 + 0x1C)) = t128;
                        }
                        t129 = (t129 + 0x4);
                        t130 = (t130 + 0x4);
                    } while ((unsigned int)t129 < (unsigned int)0x40);
                }
                t144 = *(int *)((t2 + 0x8));
                if (t144 != 0) {
                    t145 = *(int *)((t2 + 0xC));
                    t146 = *(int *)((t2 + 0x10));
                    t147 = *(int *)((t144 + 0xC));
                    if ((t145 + t146) == t147) {
                        t148 = *(int *)((t2 + 0x10));
                        t149 = *(int *)((t144 + 0x10));
                        *(unsigned int *)((t2 + 0x10)) = (t148 + t149);
                        kmytex_FBDeQueueEntry(a4, a5, t144);
                        FUN_0c1573cc(t144);
                    }
                }
                if (t3 != 0) {
                    t154 = *(int *)((t2 + 0xC));
                    t155 = *(int *)((t3 + 0xC));
                    if ((int)t154 > (int)t155) {
                        t156 = t155;
                        t157 = t154;
                        for (;;) {
                            t158 = *(int *)((t3 + 0x8));
                            t3 = t158;
                            if (t3 != 0) {
                                t159 = *(int *)((t2 + 0xC));
                                t157 = t159;
                                t160 = *(int *)((t3 + 0xC));
                                t156 = t160;
                                if ((int)t157 <= (int)t156) break;
                                continue;
                            }
                            break;
                        }
                    }
                }
                if (t3 == 0) {
                    return 0x0;
                }
                if (t2 != 0) continue;
                return 0x0;
            }
            t163 = 0x3;
        }
        t166 = t163;
    }
    return t166;
}
