/* Straight-line functions with calls and guards (batch gen_an): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c1534a0(int, int, int);
int FUN_0c1534ca(int);
int Sound_Request(int, int);
int TrafficLevelChange(int);
int ndPuru2Start(int, int, int);
int nlProjectScreen3D(int);
int setTechnicalBonus(int, int);

int technicalCheck(int a4)
{
    int t0;
    int t1;
    int t2;
    int t50;
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
    int t41;
    int t47;
    int t42;
    int t43;
    int t46;
    float u44;
    int t45;
    int t51;
    float u52;
    int t55;
    float u56;
    int t57;
    int t58;
    int t61;
    int t66;
    float u67;
    int t68;
    int t69;
    int t74;
    int t75;
    int t76;
    int t77;
    int t78;
    float u80;
    int t81;
    int t82;
    int t83;
    int t84;
    float u88;
    int t89;
    int t95;
    int t90;
    int t91;
    int t94;
    float u92;
    int t93;
    int t99;
    float u100;
    int t103;
    float u104;
    int t105;
    int t106;
    int t109;
    int t114;
    float u115;
    int t116;
    int t117;
    int t122;
    int t123;
    int t124;
    int t125;
    int t126;
    float u128;
    int t129;
    int t130;
    int t131;
    int t132;
    float u136;
    int t137;
    int t143;
    int t138;
    int t139;
    int t142;
    float u140;
    int t141;
    int t146;
    int t98;
    int t49;
    int t48;
    int t37;
    int t97;
    int t96;
    int t85;
    int t145;
    int t144;
    int t133;
    int stk[10];

    t0 = *(int *)0xC1EE20C;
    if (t0 == 2) {
        t1 = *(int *)0xC1EE214;
        if (t1 != 12) {
            t2 = *(int *)0xC1EE214;
            t50 = t2;
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
                    t49 = t28;
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
                        u40 = *(float *)((a4 + 0x6C));
                        if (u40 > 2.5f) {
                            *(unsigned int *)((a4 + 0x124)) = 0x1;
                        } else {
                            *(unsigned int *)((a4 + 0x124)) = 0xFFFFFFFF;
                        }
                        t48 = 0x124;
                    } else {
                        t41 = *(int *)((a4 + 0x124));
                        t47 = 0x124;
                        if (t41 != 0) {
                            *(unsigned int *)((a4 + 0x124)) = 0x0;
                            t42 = *(int *)0xC2A1B30;
                            t43 = *(int *)((0x58 + t42));
                            t46 = t43;
                            if (t43 == 1) {
                                u44 = *(float *)((a4 + 0x6C));
                                t45 = setTechnicalBonus(0x0, ((int)(u44 * 0.199999988f) + 0x1));
                                t46 = t45;
                            }
                            t47 = t46;
                        }
                        t48 = t47;
                    }
                    t49 = t48;
                }
                t50 = t49;
            }
            t98 = t50;
        } else {
            t51 = *(int *)((a4 + 0x34));
            if ((t51 & 0x1) != 0) {
                u52 = *(float *)((a4 + 0x70));
                if (!(u52 > 0.049999997f)) {
                    if (-0.099999994f > u52) {
                        *(unsigned int *)((a4 + 0x124)) = 0xFFFFFFFF;
                        setTechnicalBonus(0xFFFFFFFF, 0x0);
                        TrafficLevelChange(0xFFFFFFFF);
                        t55 = *(int *)0xC2A1B74;
                        if (t55 == 0) {
                            u56 = *(float *)((a4 + 0x30));
                            t57 = 0x6;
                            if ((unsigned int)(int)(u56 * 1.5f) < (unsigned int)0x6) {
                                t57 = (int)(u56 * 1.5f);
                            }
                            *(unsigned int *)(((int)stk + 4)) = t57;
                            t58 = *(int *)(((t57 << 2) + 0xC0A3788));
                            Sound_Request(t58, 0x1);
                        }
                        *(unsigned int *)0xC2A1B74 = 0x5;
                    } else {
                        t61 = *(signed char *)0xC1EE278;
                        ndPuru2Start((unsigned char)t61, 0x1000000, 0x0);
                    }
                } else {
                    *(unsigned int *)((a4 + 0x124)) = 0xFFFFFFFF;
                    setTechnicalBonus(0xFFFFFFFF, 0x0);
                    TrafficLevelChange(0xFFFFFFFF);
                    t66 = *(int *)0xC2A1B74;
                    if (t66 == 0) {
                        u67 = *(float *)((a4 + 0x30));
                        t68 = 0x6;
                        if ((unsigned int)(int)(u67 * 1.5f) < (unsigned int)0x6) {
                            t68 = (int)(u67 * 1.5f);
                        }
                        *(unsigned int *)(((int)stk + 4)) = t68;
                        t69 = *(int *)(((t68 << 2) + 0xC0A3788));
                        Sound_Request(t69, 0x1);
                    }
                    *(unsigned int *)0xC2A1B74 = 0x5;
                }
            }
            t74 = *(int *)((a4 + 0x124));
            if (t74 == -1) {
                t75 = *(int *)((a4 + 0x68));
                t76 = 0x68;
                if (t75 == 0) {
                    *(unsigned int *)((a4 + 0x124)) = 0x0;
                    t76 = 0x124;
                }
                t97 = t76;
            } else {
                t77 = *(int *)((a4 + 0x68));
                if (t77 != 0) {
                    t78 = *(int *)((a4 + 0x124));
                    if (t78 == 0) {
                        nlProjectScreen3D((0x8C + a4));
                        u80 = *(float *)(((int)stk + 8));
                        if (0.0f > u80) {
                            t81 = *(int *)((a4 + 0x78));
                            t82 = *(int *)(((((t81 & 0x1) << 2) + 0xC0A3778) + 0x0));
                            t85 = t82;
                        } else {
                            t83 = *(int *)((a4 + 0x78));
                            t84 = *(int *)(((((t83 & 0x1) << 2) + 0xC0A3778) + 0x8));
                            t85 = t84;
                        }
                        Sound_Request(t85, 0x2);
                    }
                    u88 = *(float *)((a4 + 0x6C));
                    if (u88 > 2.5f) {
                        *(unsigned int *)((a4 + 0x124)) = 0x1;
                    } else {
                        *(unsigned int *)((a4 + 0x124)) = 0xFFFFFFFF;
                    }
                    t96 = 0x124;
                } else {
                    t89 = *(int *)((a4 + 0x124));
                    t95 = 0x124;
                    if (t89 != 0) {
                        *(unsigned int *)((a4 + 0x124)) = 0x0;
                        t90 = *(int *)0xC2A1B30;
                        t91 = *(int *)((0x58 + t90));
                        t94 = t91;
                        if (t91 == 1) {
                            u92 = *(float *)((a4 + 0x6C));
                            t93 = setTechnicalBonus(0x0, ((int)(u92 * 0.199999988f) + 0x1));
                            t94 = t93;
                        }
                        t95 = t94;
                    }
                    t96 = t95;
                }
                t97 = t96;
            }
            t98 = t97;
        }
        t146 = t98;
    } else {
        t99 = *(int *)((a4 + 0x34));
        if ((t99 & 0x1) != 0) {
            u100 = *(float *)((a4 + 0x70));
            if (!(u100 > 0.049999997f)) {
                if (-0.099999994f > u100) {
                    *(unsigned int *)((a4 + 0x124)) = 0xFFFFFFFF;
                    setTechnicalBonus(0xFFFFFFFF, 0x0);
                    TrafficLevelChange(0xFFFFFFFF);
                    t103 = *(int *)0xC2A1B74;
                    if (t103 == 0) {
                        u104 = *(float *)((a4 + 0x30));
                        t105 = 0x6;
                        if ((unsigned int)(int)(u104 * 1.5f) < (unsigned int)0x6) {
                            t105 = (int)(u104 * 1.5f);
                        }
                        *(unsigned int *)(((int)stk + 4)) = t105;
                        t106 = *(int *)(((t105 << 2) + 0xC0A3788));
                        Sound_Request(t106, 0x1);
                    }
                    *(unsigned int *)0xC2A1B74 = 0x5;
                } else {
                    t109 = *(signed char *)0xC1EE278;
                    ndPuru2Start((unsigned char)t109, 0x1000000, 0x0);
                }
            } else {
                *(unsigned int *)((a4 + 0x124)) = 0xFFFFFFFF;
                setTechnicalBonus(0xFFFFFFFF, 0x0);
                TrafficLevelChange(0xFFFFFFFF);
                t114 = *(int *)0xC2A1B74;
                if (t114 == 0) {
                    u115 = *(float *)((a4 + 0x30));
                    t116 = 0x6;
                    if ((unsigned int)(int)(u115 * 1.5f) < (unsigned int)0x6) {
                        t116 = (int)(u115 * 1.5f);
                    }
                    *(unsigned int *)(((int)stk + 4)) = t116;
                    t117 = *(int *)(((t116 << 2) + 0xC0A3788));
                    Sound_Request(t117, 0x1);
                }
                *(unsigned int *)0xC2A1B74 = 0x5;
            }
        }
        t122 = *(int *)((a4 + 0x124));
        if (t122 == -1) {
            t123 = *(int *)((a4 + 0x68));
            t124 = 0x68;
            if (t123 == 0) {
                *(unsigned int *)((a4 + 0x124)) = 0x0;
                t124 = 0x124;
            }
            t145 = t124;
        } else {
            t125 = *(int *)((a4 + 0x68));
            if (t125 != 0) {
                t126 = *(int *)((a4 + 0x124));
                if (t126 == 0) {
                    nlProjectScreen3D((0x8C + a4));
                    u128 = *(float *)(((int)stk + 8));
                    if (0.0f > u128) {
                        t129 = *(int *)((a4 + 0x78));
                        t130 = *(int *)(((((t129 & 0x1) << 2) + 0xC0A3778) + 0x0));
                        t133 = t130;
                    } else {
                        t131 = *(int *)((a4 + 0x78));
                        t132 = *(int *)(((((t131 & 0x1) << 2) + 0xC0A3778) + 0x8));
                        t133 = t132;
                    }
                    Sound_Request(t133, 0x2);
                }
                u136 = *(float *)((a4 + 0x6C));
                if (u136 > 2.5f) {
                    *(unsigned int *)((a4 + 0x124)) = 0x1;
                } else {
                    *(unsigned int *)((a4 + 0x124)) = 0xFFFFFFFF;
                }
                t144 = 0x124;
            } else {
                t137 = *(int *)((a4 + 0x124));
                t143 = 0x124;
                if (t137 != 0) {
                    *(unsigned int *)((a4 + 0x124)) = 0x0;
                    t138 = *(int *)0xC2A1B30;
                    t139 = *(int *)((0x58 + t138));
                    t142 = t139;
                    if (t139 == 1) {
                        u140 = *(float *)((a4 + 0x6C));
                        t141 = setTechnicalBonus(0x0, ((int)(u140 * 0.199999988f) + 0x1));
                        t142 = t141;
                    }
                    t143 = t142;
                }
                t144 = t143;
            }
            t145 = t144;
        }
        t146 = t145;
    }
    return t146;
}

void kmiProcessVertex_02(int a4)
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
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    float u22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    float u30;
    int t31;
    int t33;
    int t34;
    int stk[8];

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
    u14 = *(float *)(((0x18 + t13) + 0x0));
    *(unsigned int *)0xC2EA73C = ((((((int)(u14 * 255.0f) << 16) << 8) | ((int)(u14 * 255.0f) << 16)) | ((int)(u14 * 255.0f) << 8)) | (int)(u14 * 255.0f));
    t15 = *(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0));
    t16 = *(int *)((t15 + 0x4));
    *(unsigned int *)0xC2EA740 = t16;
    t17 = *(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0));
    t18 = *(int *)((t17 + 0x8));
    *(unsigned int *)0xC2EA744 = t18;
    t19 = *(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0));
    t20 = *(int *)((t19 + 0xC));
    *(unsigned int *)0xC2EA748 = t20;
    t21 = *(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0));
    u22 = *(float *)(((0x18 + t21) + 0x0));
    *(unsigned int *)0xC2EA74C = ((((((int)(u22 * 255.0f) << 16) << 8) | ((int)(u22 * 255.0f) << 16)) | ((int)(u22 * 255.0f) << 8)) | (int)(u22 * 255.0f));
    t23 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0));
    t24 = *(int *)((t23 + 0x4));
    *(unsigned int *)0xC2EA750 = t24;
    t25 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0));
    t26 = *(int *)((t25 + 0x8));
    *(unsigned int *)0xC2EA754 = t26;
    t27 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0));
    t28 = *(int *)((t27 + 0xC));
    *(unsigned int *)0xC2EA758 = t28;
    t29 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0));
    u30 = *(float *)(((0x18 + t29) + 0x0));
    *(unsigned int *)0xC2EA75C = ((((((int)(u30 * 255.0f) << 16) << 8) | ((int)(u30 * 255.0f) << 16)) | ((int)(u30 * 255.0f) << 8)) | (int)(u30 * 255.0f));
    *(unsigned int *)0xC2EA81C = 0x3C;
    t31 = FUN_0c1534ca(t3);
    FUN_0c1534a0(t31, 0x0, 0x0);
    t33 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t34 = *(int *)((t33 + 0xC));
    *(unsigned int *)0xC2EA830 = t34;
}
