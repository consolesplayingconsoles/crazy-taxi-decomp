/* Straight-line functions with calls and guards (batch gen_an): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c1534a0(int, int, int);
int FUN_0c1534ca(int);
int Sound_Request(int, int);
int TrafficLevelChange(int);
int ndPuru2Start(int, int, int);
int nlProjectScreen3D(int);
int setTechnicalBonus(int, int);
int technicalCheck(int a4);
int kmiProcessVertex_02(int a4);

int technicalCheck(int a4)
{
    int t0;
    int t1;
    int t2;
    int t52;
    int t3;
    float u4;
    int t7;
    float u8;
    int t9;
    int t10;
    int t13;
    int t18;
    float u19;
    int t20;
    int t21;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    float u32;
    int t33;
    int t34;
    int t35;
    int t36;
    float u40;
    float u41;
    int t42;
    int t49;
    int t43;
    int t44;
    int t48;
    float u45;
    float u46;
    int t47;
    int t53;
    float u54;
    int t57;
    float u58;
    int t59;
    int t60;
    int t63;
    int t68;
    float u69;
    int t70;
    int t71;
    int t76;
    int t77;
    int t78;
    int t79;
    int t80;
    float u82;
    int t83;
    int t84;
    int t85;
    int t86;
    float u90;
    float u91;
    int t92;
    int t99;
    int t93;
    int t94;
    int t98;
    float u95;
    float u96;
    int t97;
    int t103;
    float u104;
    int t107;
    float u108;
    int t109;
    int t110;
    int t113;
    int t118;
    float u119;
    int t120;
    int t121;
    int t126;
    int t127;
    int t128;
    int t129;
    int t130;
    float u132;
    int t133;
    int t134;
    int t135;
    int t136;
    float u140;
    float u141;
    int t142;
    int t149;
    int t143;
    int t144;
    int t148;
    float u145;
    float u146;
    int t147;
    int t152;
    int t102;
    int t51;
    int t50;
    int t37;
    int t101;
    int t100;
    int t87;
    int t151;
    int t150;
    int t137;
    int stk[10] = {0};

    t0 = *(int *)0xC1EE20C;
    if (t0 == 2) {
        t1 = *(int *)0xC1EE214;
        if (t1 != 12) {
            t2 = *(int *)0xC1EE214;
            t52 = t2;
            if (t2 == 9) {
                t3 = *(int *)((a4 + 0x34));
                if ((t3 & 0x1) != 0) {
                    u4 = *(float *)((a4 + 0x70));
                    if (!(u4 > 0.049999997f)) {
                        if (-0.099999994f > u4) {
                            *(unsigned int *)((a4 + 0x124)) = 0xFFFFFFFF;
                            setTechnicalBonus(0xFFFFFFFF, 0x0);
                            TrafficLevelChange(0xFFFFFFFF);
                            t7 = *(int *)0xC2A1B74;
                            if (t7 == 0) {
                                u8 = *(float *)((a4 + 0x30));
                                t9 = 0x6;
                                if ((unsigned int)(int)(u8 * 1.5f) < (unsigned int)0x6) {
                                    t9 = (int)(u8 * 1.5f);
                                }
                                *(unsigned int *)(((int)stk + 4)) = t9;
                                t10 = *(int *)(((t9 << 2) + 0xC0A3788));
                                Sound_Request(t10, 0x1);
                            }
                            *(unsigned int *)0xC2A1B74 = 0x5;
                        } else {
                            t13 = *(signed char *)0xC1EE278;
                            ndPuru2Start((unsigned char)t13, 0x1000000, 0x0);
                        }
                    } else {
                        *(unsigned int *)((a4 + 0x124)) = 0xFFFFFFFF;
                        setTechnicalBonus(0xFFFFFFFF, 0x0);
                        TrafficLevelChange(0xFFFFFFFF);
                        t18 = *(int *)0xC2A1B74;
                        if (t18 == 0) {
                            u19 = *(float *)((a4 + 0x30));
                            t20 = 0x6;
                            if ((unsigned int)(int)(u19 * 1.5f) < (unsigned int)0x6) {
                                t20 = (int)(u19 * 1.5f);
                            }
                            *(unsigned int *)(((int)stk + 4)) = t20;
                            t21 = *(int *)(((t20 << 2) + 0xC0A3788));
                            Sound_Request(t21, 0x1);
                        }
                        *(unsigned int *)0xC2A1B74 = 0x5;
                    }
                }
                t26 = *(int *)((a4 + 0x124));
                if (t26 == -1) {
                    t27 = *(int *)((a4 + 0x68));
                    t28 = 0x68;
                    if (t27 == 0) {
                        *(unsigned int *)((a4 + 0x124)) = 0x0;
                        t28 = 0x124;
                    }
                    t51 = t28;
                } else {
                    t29 = *(int *)((a4 + 0x68));
                    if (t29 != 0) {
                        t30 = *(int *)((a4 + 0x124));
                        if (t30 == 0) {
                            nlProjectScreen3D((0x8C + a4));
                            u32 = *(float *)(((int)stk + 8));
                            if (0.0f > u32) {
                                t33 = *(int *)((a4 + 0x78));
                                t34 = *(int *)(((((t33 & 0x1) << 2) + 0xC0A3778) + 0x0));
                                t37 = t34;
                            } else {
                                t35 = *(int *)((a4 + 0x78));
                                t36 = *(int *)(((((t35 & 0x1) << 2) + 0xC0A3778) + 0x8));
                                t37 = t36;
                            }
                            Sound_Request(t37, 0x2);
                        }
                        u40 = *(float *)0xC045DFC;
                        u41 = *(float *)((a4 + 0x6C));
                        if (u41 > u40) {
                            *(unsigned int *)((a4 + 0x124)) = 0x1;
                        } else {
                            *(unsigned int *)((a4 + 0x124)) = 0xFFFFFFFF;
                        }
                        t50 = 0x124;
                    } else {
                        t42 = *(int *)((a4 + 0x124));
                        t49 = 0x124;
                        if (t42 != 0) {
                            *(unsigned int *)((a4 + 0x124)) = 0x0;
                            t43 = *(int *)0xC2A1B30;
                            t44 = *(int *)((0x58 + t43));
                            t48 = t44;
                            if (t44 == 1) {
                                u45 = *(float *)0xC045E04;
                                u46 = *(float *)((a4 + 0x6C));
                                t47 = setTechnicalBonus(0x0, ((int)(u46 * u45) + 0x1));
                                t48 = t47;
                            }
                            t49 = t48;
                        }
                        t50 = t49;
                    }
                    t51 = t50;
                }
                t52 = t51;
            }
            t102 = t52;
        } else {
            t53 = *(int *)((a4 + 0x34));
            if ((t53 & 0x1) != 0) {
                u54 = *(float *)((a4 + 0x70));
                if (!(u54 > 0.049999997f)) {
                    if (-0.099999994f > u54) {
                        *(unsigned int *)((a4 + 0x124)) = 0xFFFFFFFF;
                        setTechnicalBonus(0xFFFFFFFF, 0x0);
                        TrafficLevelChange(0xFFFFFFFF);
                        t57 = *(int *)0xC2A1B74;
                        if (t57 == 0) {
                            u58 = *(float *)((a4 + 0x30));
                            t59 = 0x6;
                            if ((unsigned int)(int)(u58 * 1.5f) < (unsigned int)0x6) {
                                t59 = (int)(u58 * 1.5f);
                            }
                            *(unsigned int *)(((int)stk + 4)) = t59;
                            t60 = *(int *)(((t59 << 2) + 0xC0A3788));
                            Sound_Request(t60, 0x1);
                        }
                        *(unsigned int *)0xC2A1B74 = 0x5;
                    } else {
                        t63 = *(signed char *)0xC1EE278;
                        ndPuru2Start((unsigned char)t63, 0x1000000, 0x0);
                    }
                } else {
                    *(unsigned int *)((a4 + 0x124)) = 0xFFFFFFFF;
                    setTechnicalBonus(0xFFFFFFFF, 0x0);
                    TrafficLevelChange(0xFFFFFFFF);
                    t68 = *(int *)0xC2A1B74;
                    if (t68 == 0) {
                        u69 = *(float *)((a4 + 0x30));
                        t70 = 0x6;
                        if ((unsigned int)(int)(u69 * 1.5f) < (unsigned int)0x6) {
                            t70 = (int)(u69 * 1.5f);
                        }
                        *(unsigned int *)(((int)stk + 4)) = t70;
                        t71 = *(int *)(((t70 << 2) + 0xC0A3788));
                        Sound_Request(t71, 0x1);
                    }
                    *(unsigned int *)0xC2A1B74 = 0x5;
                }
            }
            t76 = *(int *)((a4 + 0x124));
            if (t76 == -1) {
                t77 = *(int *)((a4 + 0x68));
                t78 = 0x68;
                if (t77 == 0) {
                    *(unsigned int *)((a4 + 0x124)) = 0x0;
                    t78 = 0x124;
                }
                t101 = t78;
            } else {
                t79 = *(int *)((a4 + 0x68));
                if (t79 != 0) {
                    t80 = *(int *)((a4 + 0x124));
                    if (t80 == 0) {
                        nlProjectScreen3D((0x8C + a4));
                        u82 = *(float *)(((int)stk + 8));
                        if (0.0f > u82) {
                            t83 = *(int *)((a4 + 0x78));
                            t84 = *(int *)(((((t83 & 0x1) << 2) + 0xC0A3778) + 0x0));
                            t87 = t84;
                        } else {
                            t85 = *(int *)((a4 + 0x78));
                            t86 = *(int *)(((((t85 & 0x1) << 2) + 0xC0A3778) + 0x8));
                            t87 = t86;
                        }
                        Sound_Request(t87, 0x2);
                    }
                    u90 = *(float *)0xC045DFC;
                    u91 = *(float *)((a4 + 0x6C));
                    if (u91 > u90) {
                        *(unsigned int *)((a4 + 0x124)) = 0x1;
                    } else {
                        *(unsigned int *)((a4 + 0x124)) = 0xFFFFFFFF;
                    }
                    t100 = 0x124;
                } else {
                    t92 = *(int *)((a4 + 0x124));
                    t99 = 0x124;
                    if (t92 != 0) {
                        *(unsigned int *)((a4 + 0x124)) = 0x0;
                        t93 = *(int *)0xC2A1B30;
                        t94 = *(int *)((0x58 + t93));
                        t98 = t94;
                        if (t94 == 1) {
                            u95 = *(float *)0xC045E04;
                            u96 = *(float *)((a4 + 0x6C));
                            t97 = setTechnicalBonus(0x0, ((int)(u96 * u95) + 0x1));
                            t98 = t97;
                        }
                        t99 = t98;
                    }
                    t100 = t99;
                }
                t101 = t100;
            }
            t102 = t101;
        }
        t152 = t102;
    } else {
        t103 = *(int *)((a4 + 0x34));
        if ((t103 & 0x1) != 0) {
            u104 = *(float *)((a4 + 0x70));
            if (!(u104 > 0.049999997f)) {
                if (-0.099999994f > u104) {
                    *(unsigned int *)((a4 + 0x124)) = 0xFFFFFFFF;
                    setTechnicalBonus(0xFFFFFFFF, 0x0);
                    TrafficLevelChange(0xFFFFFFFF);
                    t107 = *(int *)0xC2A1B74;
                    if (t107 == 0) {
                        u108 = *(float *)((a4 + 0x30));
                        t109 = 0x6;
                        if ((unsigned int)(int)(u108 * 1.5f) < (unsigned int)0x6) {
                            t109 = (int)(u108 * 1.5f);
                        }
                        *(unsigned int *)(((int)stk + 4)) = t109;
                        t110 = *(int *)(((t109 << 2) + 0xC0A3788));
                        Sound_Request(t110, 0x1);
                    }
                    *(unsigned int *)0xC2A1B74 = 0x5;
                } else {
                    t113 = *(signed char *)0xC1EE278;
                    ndPuru2Start((unsigned char)t113, 0x1000000, 0x0);
                }
            } else {
                *(unsigned int *)((a4 + 0x124)) = 0xFFFFFFFF;
                setTechnicalBonus(0xFFFFFFFF, 0x0);
                TrafficLevelChange(0xFFFFFFFF);
                t118 = *(int *)0xC2A1B74;
                if (t118 == 0) {
                    u119 = *(float *)((a4 + 0x30));
                    t120 = 0x6;
                    if ((unsigned int)(int)(u119 * 1.5f) < (unsigned int)0x6) {
                        t120 = (int)(u119 * 1.5f);
                    }
                    *(unsigned int *)(((int)stk + 4)) = t120;
                    t121 = *(int *)(((t120 << 2) + 0xC0A3788));
                    Sound_Request(t121, 0x1);
                }
                *(unsigned int *)0xC2A1B74 = 0x5;
            }
        }
        t126 = *(int *)((a4 + 0x124));
        if (t126 == -1) {
            t127 = *(int *)((a4 + 0x68));
            t128 = 0x68;
            if (t127 == 0) {
                *(unsigned int *)((a4 + 0x124)) = 0x0;
                t128 = 0x124;
            }
            t151 = t128;
        } else {
            t129 = *(int *)((a4 + 0x68));
            if (t129 != 0) {
                t130 = *(int *)((a4 + 0x124));
                if (t130 == 0) {
                    nlProjectScreen3D((0x8C + a4));
                    u132 = *(float *)(((int)stk + 8));
                    if (0.0f > u132) {
                        t133 = *(int *)((a4 + 0x78));
                        t134 = *(int *)(((((t133 & 0x1) << 2) + 0xC0A3778) + 0x0));
                        t137 = t134;
                    } else {
                        t135 = *(int *)((a4 + 0x78));
                        t136 = *(int *)(((((t135 & 0x1) << 2) + 0xC0A3778) + 0x8));
                        t137 = t136;
                    }
                    Sound_Request(t137, 0x2);
                }
                u140 = *(float *)0xC045DFC;
                u141 = *(float *)((a4 + 0x6C));
                if (u141 > u140) {
                    *(unsigned int *)((a4 + 0x124)) = 0x1;
                } else {
                    *(unsigned int *)((a4 + 0x124)) = 0xFFFFFFFF;
                }
                t150 = 0x124;
            } else {
                t142 = *(int *)((a4 + 0x124));
                t149 = 0x124;
                if (t142 != 0) {
                    *(unsigned int *)((a4 + 0x124)) = 0x0;
                    t143 = *(int *)0xC2A1B30;
                    t144 = *(int *)((0x58 + t143));
                    t148 = t144;
                    if (t144 == 1) {
                        u145 = *(float *)0xC045E04;
                        u146 = *(float *)((a4 + 0x6C));
                        t147 = setTechnicalBonus(0x0, ((int)(u146 * u145) + 0x1));
                        t148 = t147;
                    }
                    t149 = t148;
                }
                t150 = t149;
            }
            t151 = t150;
        }
        t152 = t151;
    }
    return t152;
}

int kmiProcessVertex_02(int a4)
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
    float u14;
    float u15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    float u23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    float u31;
    int t32;
    int t34;
    int t35;
    int stk[8] = {0};

    t0 = *(int *)((a4 + 0x0));
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t0;
    t1 = *(int *)((a4 + 0x4));
    *(unsigned int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0)) = t1;
    t2 = *(int *)((a4 + 0x8));
    *(unsigned int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0)) = t2;
    t3 = *(int *)0xC2EA820;
    t4 = *(int *)0xC2EA824;
    *(unsigned int *)(((int)stk + 4)) = t4;
    t5 = *(int *)0xC2EA828;
    *(unsigned int *)0xC2EA724 = t3;
    t6 = *(int *)(((int)stk + 4));
    *(unsigned int *)0xC2EA728 = t6;
    *(unsigned int *)0xC2EA72C = t5;
    t7 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t8 = *(int *)((t7 + 0x4));
    *(unsigned int *)0xC2EA730 = t8;
    t9 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t10 = *(int *)((t9 + 0x8));
    *(unsigned int *)0xC2EA734 = t10;
    t11 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t12 = *(int *)((t11 + 0xC));
    *(unsigned int *)0xC2EA738 = t12;
    t13 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    u14 = *(float *)0xC153C30;
    u15 = *(float *)(((0x18 + t13) + 0x0));
    *(unsigned int *)0xC2EA73C = ((((((int)(u15 * u14) << 16) << 8) | ((int)(u15 * u14) << 16)) | ((int)(u15 * u14) << 8)) | (int)(u15 * u14));
    t16 = *(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0));
    t17 = *(int *)((t16 + 0x4));
    *(unsigned int *)0xC2EA740 = t17;
    t18 = *(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0));
    t19 = *(int *)((t18 + 0x8));
    *(unsigned int *)0xC2EA744 = t19;
    t20 = *(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0));
    t21 = *(int *)((t20 + 0xC));
    *(unsigned int *)0xC2EA748 = t21;
    t22 = *(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0));
    u23 = *(float *)(((0x18 + t22) + 0x0));
    *(unsigned int *)0xC2EA74C = ((((((int)(u23 * u14) << 16) << 8) | ((int)(u23 * u14) << 16)) | ((int)(u23 * u14) << 8)) | (int)(u23 * u14));
    t24 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0));
    t25 = *(int *)((t24 + 0x4));
    *(unsigned int *)0xC2EA750 = t25;
    t26 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0));
    t27 = *(int *)((t26 + 0x8));
    *(unsigned int *)0xC2EA754 = t27;
    t28 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0));
    t29 = *(int *)((t28 + 0xC));
    *(unsigned int *)0xC2EA758 = t29;
    t30 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0));
    u31 = *(float *)(((0x18 + t30) + 0x0));
    *(unsigned int *)0xC2EA75C = ((((((int)(u31 * u14) << 16) << 8) | ((int)(u31 * u14) << 16)) | ((int)(u31 * u14) << 8)) | (int)(u31 * u14));
    *(unsigned int *)0xC2EA81C = 0x3C;
    t32 = FUN_0c1534ca(t3);
    FUN_0c1534a0(t32, 0x0, 0x0);
    t34 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t35 = *(int *)((t34 + 0xC));
    *(unsigned int *)0xC2EA830 = t35;
    return 0x0;
}

