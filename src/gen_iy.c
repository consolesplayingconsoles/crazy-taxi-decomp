/* Straight-line functions with calls and guards (batch gen_iy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0103aa(int, int);
int FUN_0c010402(int, int);
int FUN_0c0105d4(void);
int FUN_0c010630(void);
int FUN_0c01089a(int);
int FUN_0c010a98(void);
int FUN_0c011088(void);
int FUN_0c0110e6(void);
void FUN_0c010170(void);

void FUN_0c010170(void)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t11;
    int t12;
    int t13;
    int t15;
    int t16;
    int t17;
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
    int t37;
    int t38;
    int t39;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t47;
    int t48;
    int t49;
    int t50;
    int t52;
    int t53;
    int t54;
    int t56;
    int t57;
    int t58;
    int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    int t66;
    int t67;
    int t68;
    int t69;
    int t70;
    int t71;
    int t72;
    int t74;
    int t75;
    int t76;
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    int t84;
    int t85;
    int t86;
    int t87;
    int t88;
    int t89;
    int t90;
    int t91;
    int t92;
    int t93;
    int t96;
    int t97;
    int t98;
    int t100;
    int t101;
    int t102;
    int t104;
    int t105;
    int t106;
    int t108;
    int t109;
    int t110;
    int t111;
    int t112;
    int t114;
    int t115;
    int t116;
    int t117;
    int t118;
    int t119;
    int t120;
    int t122;
    int t123;
    int t124;
    int t126;
    int t127;
    int t128;
    int t129;
    int t130;
    int t132;
    int t133;
    int t134;
    int t135;
    int t137;
    int t138;
    int t139;
    int t141;
    int t142;
    int t143;
    int t145;
    int t146;
    int t147;
    int t148;
    int t149;
    int t151;
    int t152;
    int t153;
    int t154;
    int t155;
    int t156;
    int t157;
    int t159;
    int t160;
    int t161;
    int t163;
    int t164;
    int t165;
    int t166;
    int t167;
    int t169;
    int t170;
    int t171;
    int t172;
    int stk[6] = {0};

    t0 = ((int (*)(void))(0xAC010A88))();
    FUN_0c010a98();
    t2 = ((int (*)(void))(0xAC010C18))();
    *(unsigned int *)0xAC00F718 = 0x2;
    t3 = *(short *)0x8C000070;
    if (t3 == 0x3030) {
        *(unsigned int *)0xAC00F71C = 0x8F;
        *(unsigned int *)0xAC00F700 = 0xC011BB0;
        *(unsigned int *)0xAC00F704 = 0xC011BF8;
        t4 = 0x1AF8;
        t5 = 0xAC00F71C;
        t6 = 0x0;
        for (;;) {
            if ((int)t6 >= (int)0x3) {
                break;
            }
            t4 = 0xC01023C;
            t5 = 0xFF;
            t7 = ((int (*)(int))(((0x7EA + t4) | 0xA0000000)))(t5);
            t4 = t7;
            t5 = 0x20000;
            for (;;) {
                t5 = (t5 - 0x1);
                if (t5 == 0) {
                    break;
                }
            }
            t4 = 0xC010250;
            t5 = 0x0;
            t8 = ((int (*)(int))(((0x7D6 + t4) | 0xA0000000)))(t5);
            t4 = t8;
            t5 = 0x20000;
            for (;;) {
                t5 = (t5 - 0x1);
                if (t5 == 0) {
                    break;
                }
            }
            t6 = (t6 + 0x1);
        }
        FUN_0c010630();
        *(unsigned char *)0xAC00F710 = 0x1;
        *(unsigned int *)0xAC00F714 = 0x0;
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        for (;;) {
            FUN_0c0105d4();
            t11 = *(int *)(((int)stk + 4));
            t12 = FUN_0c01089a((t11 & 0x1));
            if (t12 != 0) {
                t13 = FUN_0c0103aa((t11 & 0x1), (((int)stk + 4) + 0x4));
                if (t13 != 0xFF) {
                    FUN_0c010402(t13, (((int)stk + 4) + 0x4));
                    t15 = *(int *)0xAC00F714;
                    if (t15 == 0) {
                        t16 = *(int *)0xAC00F71C;
                        if ((t16 & 128) != 0) {
                            t17 = *(int *)0xAC00F708;
                            if (t17 != 0) {
                                FUN_0c0110e6();
                                t19 = ((int (*)(int))(0xAC010A26))(0xFF);
                                t20 = ((int (*)(void))(0xAC010A3A))();
                                t21 = *(int *)0xAC00F708;
                                if (t21 != 0) {
                                    FUN_0c011088();
                                    *(unsigned int *)0xAC00F714 = 0x1;
                                    t23 = *(int *)(((int)stk + 4));
                                    *(unsigned int *)(((int)stk + 4)) = (t23 + 0x1);
                                    continue;
                                }
                                *(unsigned int *)0xAC00F714 = 0x1;
                                t24 = *(int *)(((int)stk + 4));
                                *(unsigned int *)(((int)stk + 4)) = (t24 + 0x1);
                                continue;
                            }
                            t25 = ((int (*)(int))(0xAC010A26))(0xFF);
                            t26 = ((int (*)(void))(0xAC010A3A))();
                            t27 = *(int *)0xAC00F708;
                            if (t27 != 0) {
                                FUN_0c011088();
                                *(unsigned int *)0xAC00F714 = 0x1;
                                t29 = *(int *)(((int)stk + 4));
                                *(unsigned int *)(((int)stk + 4)) = (t29 + 0x1);
                                continue;
                            }
                            *(unsigned int *)0xAC00F714 = 0x1;
                            t30 = *(int *)(((int)stk + 4));
                            *(unsigned int *)(((int)stk + 4)) = (t30 + 0x1);
                            continue;
                        }
                        t31 = *(int *)(((int)stk + 4));
                        *(unsigned int *)(((int)stk + 4)) = (t31 + 0x1);
                        continue;
                    }
                    t32 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t32 + 0x1);
                    continue;
                }
                t33 = *(int *)0xAC00F714;
                if (t33 == 0) {
                    t34 = *(int *)0xAC00F71C;
                    if ((t34 & 128) != 0) {
                        t35 = *(int *)0xAC00F708;
                        if (t35 != 0) {
                            FUN_0c0110e6();
                            t37 = ((int (*)(int))(0xAC010A26))(0xFF);
                            t38 = ((int (*)(void))(0xAC010A3A))();
                            t39 = *(int *)0xAC00F708;
                            if (t39 != 0) {
                                FUN_0c011088();
                                *(unsigned int *)0xAC00F714 = 0x1;
                                t41 = *(int *)(((int)stk + 4));
                                *(unsigned int *)(((int)stk + 4)) = (t41 + 0x1);
                                continue;
                            }
                            *(unsigned int *)0xAC00F714 = 0x1;
                            t42 = *(int *)(((int)stk + 4));
                            *(unsigned int *)(((int)stk + 4)) = (t42 + 0x1);
                            continue;
                        }
                        t43 = ((int (*)(int))(0xAC010A26))(0xFF);
                        t44 = ((int (*)(void))(0xAC010A3A))();
                        t45 = *(int *)0xAC00F708;
                        if (t45 != 0) {
                            FUN_0c011088();
                            *(unsigned int *)0xAC00F714 = 0x1;
                            t47 = *(int *)(((int)stk + 4));
                            *(unsigned int *)(((int)stk + 4)) = (t47 + 0x1);
                            continue;
                        }
                        *(unsigned int *)0xAC00F714 = 0x1;
                        t48 = *(int *)(((int)stk + 4));
                        *(unsigned int *)(((int)stk + 4)) = (t48 + 0x1);
                        continue;
                    }
                    t49 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t49 + 0x1);
                    continue;
                }
                t50 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 4)) = (t50 + 0x1);
                continue;
            }
            if (0xFF != 0xFF) {
                FUN_0c010402(0xFF, (((int)stk + 4) + 0x4));
                t52 = *(int *)0xAC00F714;
                if (t52 == 0) {
                    t53 = *(int *)0xAC00F71C;
                    if ((t53 & 128) != 0) {
                        t54 = *(int *)0xAC00F708;
                        if (t54 != 0) {
                            FUN_0c0110e6();
                            t56 = ((int (*)(int))(0xAC010A26))(0xFF);
                            t57 = ((int (*)(void))(0xAC010A3A))();
                            t58 = *(int *)0xAC00F708;
                            if (t58 != 0) {
                                FUN_0c011088();
                                *(unsigned int *)0xAC00F714 = 0x1;
                                t60 = *(int *)(((int)stk + 4));
                                *(unsigned int *)(((int)stk + 4)) = (t60 + 0x1);
                                continue;
                            }
                            *(unsigned int *)0xAC00F714 = 0x1;
                            t61 = *(int *)(((int)stk + 4));
                            *(unsigned int *)(((int)stk + 4)) = (t61 + 0x1);
                            continue;
                        }
                        t62 = ((int (*)(int))(0xAC010A26))(0xFF);
                        t63 = ((int (*)(void))(0xAC010A3A))();
                        t64 = *(int *)0xAC00F708;
                        if (t64 != 0) {
                            FUN_0c011088();
                            *(unsigned int *)0xAC00F714 = 0x1;
                            t66 = *(int *)(((int)stk + 4));
                            *(unsigned int *)(((int)stk + 4)) = (t66 + 0x1);
                            continue;
                        }
                        *(unsigned int *)0xAC00F714 = 0x1;
                        t67 = *(int *)(((int)stk + 4));
                        *(unsigned int *)(((int)stk + 4)) = (t67 + 0x1);
                        continue;
                    }
                    t68 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t68 + 0x1);
                    continue;
                }
                t69 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 4)) = (t69 + 0x1);
                continue;
            }
            t70 = *(int *)0xAC00F714;
            if (t70 == 0) {
                t71 = *(int *)0xAC00F71C;
                if ((t71 & 128) != 0) {
                    t72 = *(int *)0xAC00F708;
                    if (t72 != 0) {
                        FUN_0c0110e6();
                        t74 = ((int (*)(int))(0xAC010A26))(0xFF);
                        t75 = ((int (*)(void))(0xAC010A3A))();
                        t76 = *(int *)0xAC00F708;
                        if (t76 != 0) {
                            FUN_0c011088();
                            *(unsigned int *)0xAC00F714 = 0x1;
                            t78 = *(int *)(((int)stk + 4));
                            *(unsigned int *)(((int)stk + 4)) = (t78 + 0x1);
                            continue;
                        }
                        *(unsigned int *)0xAC00F714 = 0x1;
                        t79 = *(int *)(((int)stk + 4));
                        *(unsigned int *)(((int)stk + 4)) = (t79 + 0x1);
                        continue;
                    }
                    t80 = ((int (*)(int))(0xAC010A26))(0xFF);
                    t81 = ((int (*)(void))(0xAC010A3A))();
                    t82 = *(int *)0xAC00F708;
                    if (t82 != 0) {
                        FUN_0c011088();
                        *(unsigned int *)0xAC00F714 = 0x1;
                        t84 = *(int *)(((int)stk + 4));
                        *(unsigned int *)(((int)stk + 4)) = (t84 + 0x1);
                        continue;
                    }
                    *(unsigned int *)0xAC00F714 = 0x1;
                    t85 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t85 + 0x1);
                    continue;
                }
                t86 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 4)) = (t86 + 0x1);
                continue;
            }
            t87 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t87 + 0x1);
        }
    }
    t88 = *(signed char *)0xA30100C0;
    *(unsigned int *)0xAC00F71C = (unsigned char)t88;
    *(unsigned int *)0xAC00F700 = 0xC011BB0;
    *(unsigned int *)0xAC00F704 = 0xC011BF8;
    t89 = 0x1AF8;
    t90 = 0xAC00F71C;
    t91 = 0x0;
    for (;;) {
        if ((int)t91 >= (int)0x3) {
            break;
        }
        t89 = 0xC01023C;
        t90 = 0xFF;
        t92 = ((int (*)(int))(((0x7EA + t89) | 0xA0000000)))(t90);
        t89 = t92;
        t90 = 0x20000;
        for (;;) {
            t90 = (t90 - 0x1);
            if (t90 == 0) {
                break;
            }
        }
        t89 = 0xC010250;
        t90 = 0x0;
        t93 = ((int (*)(int))(((0x7D6 + t89) | 0xA0000000)))(t90);
        t89 = t93;
        t90 = 0x20000;
        for (;;) {
            t90 = (t90 - 0x1);
            if (t90 == 0) {
                break;
            }
        }
        t91 = (t91 + 0x1);
    }
    FUN_0c010630();
    *(unsigned char *)0xAC00F710 = 0x1;
    *(unsigned int *)0xAC00F714 = 0x0;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    for (;;) {
        FUN_0c0105d4();
        t96 = *(int *)(((int)stk + 4));
        t97 = FUN_0c01089a((t96 & 0x1));
        if (t97 != 0) {
            t98 = FUN_0c0103aa((t96 & 0x1), (((int)stk + 4) + 0x4));
            if (t98 != 0xFF) {
                FUN_0c010402(t98, (((int)stk + 4) + 0x4));
                t100 = *(int *)0xAC00F714;
                if (t100 == 0) {
                    t101 = *(int *)0xAC00F71C;
                    if ((t101 & 128) != 0) {
                        t102 = *(int *)0xAC00F708;
                        if (t102 != 0) {
                            FUN_0c0110e6();
                            t104 = ((int (*)(int))(0xAC010A26))(0xFF);
                            t105 = ((int (*)(void))(0xAC010A3A))();
                            t106 = *(int *)0xAC00F708;
                            if (t106 != 0) {
                                FUN_0c011088();
                                *(unsigned int *)0xAC00F714 = 0x1;
                                t108 = *(int *)(((int)stk + 4));
                                *(unsigned int *)(((int)stk + 4)) = (t108 + 0x1);
                                continue;
                            }
                            *(unsigned int *)0xAC00F714 = 0x1;
                            t109 = *(int *)(((int)stk + 4));
                            *(unsigned int *)(((int)stk + 4)) = (t109 + 0x1);
                            continue;
                        }
                        t110 = ((int (*)(int))(0xAC010A26))(0xFF);
                        t111 = ((int (*)(void))(0xAC010A3A))();
                        t112 = *(int *)0xAC00F708;
                        if (t112 != 0) {
                            FUN_0c011088();
                            *(unsigned int *)0xAC00F714 = 0x1;
                            t114 = *(int *)(((int)stk + 4));
                            *(unsigned int *)(((int)stk + 4)) = (t114 + 0x1);
                            continue;
                        }
                        *(unsigned int *)0xAC00F714 = 0x1;
                        t115 = *(int *)(((int)stk + 4));
                        *(unsigned int *)(((int)stk + 4)) = (t115 + 0x1);
                        continue;
                    }
                    t116 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t116 + 0x1);
                    continue;
                }
                t117 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 4)) = (t117 + 0x1);
                continue;
            }
            t118 = *(int *)0xAC00F714;
            if (t118 == 0) {
                t119 = *(int *)0xAC00F71C;
                if ((t119 & 128) != 0) {
                    t120 = *(int *)0xAC00F708;
                    if (t120 != 0) {
                        FUN_0c0110e6();
                        t122 = ((int (*)(int))(0xAC010A26))(0xFF);
                        t123 = ((int (*)(void))(0xAC010A3A))();
                        t124 = *(int *)0xAC00F708;
                        if (t124 != 0) {
                            FUN_0c011088();
                            *(unsigned int *)0xAC00F714 = 0x1;
                            t126 = *(int *)(((int)stk + 4));
                            *(unsigned int *)(((int)stk + 4)) = (t126 + 0x1);
                            continue;
                        }
                        *(unsigned int *)0xAC00F714 = 0x1;
                        t127 = *(int *)(((int)stk + 4));
                        *(unsigned int *)(((int)stk + 4)) = (t127 + 0x1);
                        continue;
                    }
                    t128 = ((int (*)(int))(0xAC010A26))(0xFF);
                    t129 = ((int (*)(void))(0xAC010A3A))();
                    t130 = *(int *)0xAC00F708;
                    if (t130 != 0) {
                        FUN_0c011088();
                        *(unsigned int *)0xAC00F714 = 0x1;
                        t132 = *(int *)(((int)stk + 4));
                        *(unsigned int *)(((int)stk + 4)) = (t132 + 0x1);
                        continue;
                    }
                    *(unsigned int *)0xAC00F714 = 0x1;
                    t133 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t133 + 0x1);
                    continue;
                }
                t134 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 4)) = (t134 + 0x1);
                continue;
            }
            t135 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t135 + 0x1);
            continue;
        }
        if (0xFF != 0xFF) {
            FUN_0c010402(0xFF, (((int)stk + 4) + 0x4));
            t137 = *(int *)0xAC00F714;
            if (t137 == 0) {
                t138 = *(int *)0xAC00F71C;
                if ((t138 & 128) != 0) {
                    t139 = *(int *)0xAC00F708;
                    if (t139 != 0) {
                        FUN_0c0110e6();
                        t141 = ((int (*)(int))(0xAC010A26))(0xFF);
                        t142 = ((int (*)(void))(0xAC010A3A))();
                        t143 = *(int *)0xAC00F708;
                        if (t143 != 0) {
                            FUN_0c011088();
                            *(unsigned int *)0xAC00F714 = 0x1;
                            t145 = *(int *)(((int)stk + 4));
                            *(unsigned int *)(((int)stk + 4)) = (t145 + 0x1);
                            continue;
                        }
                        *(unsigned int *)0xAC00F714 = 0x1;
                        t146 = *(int *)(((int)stk + 4));
                        *(unsigned int *)(((int)stk + 4)) = (t146 + 0x1);
                        continue;
                    }
                    t147 = ((int (*)(int))(0xAC010A26))(0xFF);
                    t148 = ((int (*)(void))(0xAC010A3A))();
                    t149 = *(int *)0xAC00F708;
                    if (t149 != 0) {
                        FUN_0c011088();
                        *(unsigned int *)0xAC00F714 = 0x1;
                        t151 = *(int *)(((int)stk + 4));
                        *(unsigned int *)(((int)stk + 4)) = (t151 + 0x1);
                        continue;
                    }
                    *(unsigned int *)0xAC00F714 = 0x1;
                    t152 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t152 + 0x1);
                    continue;
                }
                t153 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 4)) = (t153 + 0x1);
                continue;
            }
            t154 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t154 + 0x1);
            continue;
        }
        t155 = *(int *)0xAC00F714;
        if (t155 == 0) {
            t156 = *(int *)0xAC00F71C;
            if ((t156 & 128) != 0) {
                t157 = *(int *)0xAC00F708;
                if (t157 != 0) {
                    FUN_0c0110e6();
                    t159 = ((int (*)(int))(0xAC010A26))(0xFF);
                    t160 = ((int (*)(void))(0xAC010A3A))();
                    t161 = *(int *)0xAC00F708;
                    if (t161 != 0) {
                        FUN_0c011088();
                        *(unsigned int *)0xAC00F714 = 0x1;
                        t163 = *(int *)(((int)stk + 4));
                        *(unsigned int *)(((int)stk + 4)) = (t163 + 0x1);
                        continue;
                    }
                    *(unsigned int *)0xAC00F714 = 0x1;
                    t164 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t164 + 0x1);
                    continue;
                }
                t165 = ((int (*)(int))(0xAC010A26))(0xFF);
                t166 = ((int (*)(void))(0xAC010A3A))();
                t167 = *(int *)0xAC00F708;
                if (t167 != 0) {
                    FUN_0c011088();
                    *(unsigned int *)0xAC00F714 = 0x1;
                    t169 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t169 + 0x1);
                    continue;
                }
                *(unsigned int *)0xAC00F714 = 0x1;
                t170 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 4)) = (t170 + 0x1);
                continue;
            }
            t171 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t171 + 0x1);
            continue;
        }
        t172 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 4)) = (t172 + 0x1);
    }
}
