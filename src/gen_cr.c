/* Straight-line functions with calls and guards (batch gen_cr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c036256(int, int, int);
int FUN_0c044f12(int);
int FUN_0c077210(int, int);
int FUN_0c07f5c0(void);
int GetCollision2D(int, float);
int GetMenuMode(int);
int Put_Motion2D(int);
int calcCheck(int);
int calcCheckExec(int, int);
int carColliReflection(void);
int carEntry(int);
int carResistance(void);
int dropOutCheck(int);
int nlAddVector(int, int);
float nlInnerProduct(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScaleVector(int, int, float);
int nlSubVector3op(int, int, int);
int pcarEnd(int);
int technicalCheck(int);
int FUN_0c031158(int a4, int a5);
int FUN_0c03bea0(int a4, int a5, int a6);
int FUN_0c0417c0(int a4, int a5, int a6);
int nlsndStreamGetParam(int a4, int a5, int a6);
int stopingCarExec(int a4);

int FUN_0c031158(int a4, int a5)
{
    int t3;
    int t0;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t16;
    int t17;
    int t18;
    int t19;
    int t1;
    int t2;

    t3 = a4;
    if ((int)a4 < 0) {
        t0 = *(int *)0xC26E310;
        *(unsigned int *)0xC26E310 = (t0 + 0x1);
        *(unsigned char *)((((t0 + 0x1) - 0x1) + 0x0)) = 0x2D;
        t1 = ((t0 + 0x1) - 0x1);
        t2 = 0x2D;
        t3 = (-a4);
    }
    t4 = t1;
    t5 = t2;
    t6 = t3;
    t7 = 0x0;
    while ((int)t6 >= (int)0xA) {
        t4 = t7;
        t5 = 0xC08106C;
        t4 = (t4 << 2);
        t4 = (t4 + 0xC26E314);
        t8 = (int)((int)t6 % (int)0xA);
        *(unsigned int *)((t4 + 0x0)) = t8;
        t4 = 0xC080F10;
        t9 = (int)((int)t6 / (int)0xA);
        t6 = t9;
        t7 = (t7 + 0x1);
    }
    *(unsigned int *)((0xC26E314 + (t7 << 2))) = t6;
    if ((int)(a5 - (t7 + 0x1)) > 0) {
        t10 = t5;
        t11 = (a5 - (t7 + 0x1));
        while (t11 != 0) {
            t12 = *(int *)0xC26E310;
            t10 = t12;
            t11 = (t11 - 1);
            t10 = (t10 + 0x1);
            *(unsigned int *)0xC26E310 = t10;
            *(unsigned char *)(((t10 - 0x1) + 0x0)) = 0x30;
            t10 = (t10 - 0x1);
        }
    }
    t16 = (t7 + 0x1);
    do {
        t17 = *(int *)0xC26E310;
        t16 = (t16 - 1);
        *(unsigned int *)0xC26E310 = (t17 + 0x1);
        t18 = *(int *)((0xC26E314 + (t16 << 2)));
        *(unsigned char *)((((t17 + 0x1) - 0x1) + 0x0)) = (t18 + 0x30);
    } while (t16 != 0);
    t19 = *(int *)0xC26E310;
    *(unsigned char *)((t19 + 0x0)) = 0x0;
    return (t16 << 2);
}

int FUN_0c03bea0(int a4, int a5, int a6)
{
    int t0;
    int t67;
    int t1;
    int t50;
    int t2;
    int t4;
    int t5;
    int t15;
    int t6;
    int t12;
    int t7;
    int t9;
    int t8;
    int t18;
    int t20;
    int t19;
    int t26;
    int t27;
    int t38;
    int t28;
    int t34;
    int t29;
    int t32;
    int t30;
    int t41;
    int t44;
    int t42;
    int t59;
    int t58;
    int t76;
    int t125;
    int t77;
    int t79;
    int t80;
    int t90;
    int t81;
    int t87;
    int t82;
    int t84;
    int t83;
    int t93;
    int t95;
    int t94;
    int t101;
    int t102;
    int t113;
    int t103;
    int t109;
    int t104;
    int t107;
    int t105;
    int t116;
    int t119;
    int t117;
    int t134;
    int t133;
    int t142;
    int t3;
    int t23;
    int t46;
    int t78;
    int t98;
    int t121;

    t0 = *(int *)0xC2A1214;
    if (t0 == 1) {
        t67 = 0x0;
        if (a4 != 0) {
            t1 = *(int *)((((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x14));
            t50 = 0x0;
            if ((t1 & 4) != 0) {
                t2 = *(int *)((a5 + 0x0));
                if ((int)t2 >= 0) {
                    if ((int)t2 >= (int)a6) {
                        *(unsigned int *)((a5 + 0x0)) = 0x0;
                    }
                    t3 = a6;
                } else {
                    *(unsigned int *)((a5 + 0x0)) = 0x0;
                }
                t4 = *(int *)0xC2A11CC;
                if ((t4 & 0x20) == 0) {
                    t5 = *(int *)0xC2A11D4;
                    t15 = 0x0;
                    if (t5 == 0) {
                        t6 = *(int *)0xC2A11D0;
                        t12 = 0x0;
                        if ((t6 & 0x20) != 0) {
                            t7 = *(int *)((a5 + 0x0));
                            t9 = 0x0;
                            if ((int)t7 > 0) {
                                t8 = *(int *)((a5 + 0x0));
                                *(unsigned int *)((a5 + 0x0)) = (t8 - 1);
                                t9 = 0x1;
                            }
                            t12 = t9;
                        }
                        t15 = t12;
                    }
                    t23 = t15;
                } else {
                    t18 = *(int *)((a5 + 0x0));
                    t20 = 0x0;
                    if ((int)t18 > 0) {
                        t19 = *(int *)((a5 + 0x0));
                        *(unsigned int *)((a5 + 0x0)) = (t19 - 1);
                        t20 = 0x1;
                    }
                    t23 = t20;
                }
                t26 = *(int *)0xC2A11CC;
                if ((t26 & 0x40) == 0) {
                    t27 = *(int *)0xC2A11D4;
                    t38 = t23;
                    if (t27 == 0) {
                        t28 = *(int *)0xC2A11D0;
                        t34 = t23;
                        if ((t28 & 0x40) != 0) {
                            t29 = *(int *)((a5 + 0x0));
                            t32 = t23;
                            if ((int)t29 < (int)(t3 - 1)) {
                                t30 = *(int *)((a5 + 0x0));
                                *(unsigned int *)((a5 + 0x0)) = (t30 + 0x1);
                                t32 = (t23 + 0x1);
                            }
                            t34 = t32;
                        }
                        t38 = t34;
                    }
                    t46 = t38;
                } else {
                    t41 = *(int *)((a5 + 0x0));
                    t44 = t23;
                    if ((int)t41 < (int)(t3 - 1)) {
                        t42 = *(int *)((a5 + 0x0));
                        *(unsigned int *)((a5 + 0x0)) = (t42 + 0x1);
                        t44 = (t23 + 0x1);
                    }
                    t46 = t44;
                }
                t50 = t46;
            }
            t59 = 0x0;
            if (t50 != 0) {
                FUN_0c07f5c0();
                t58 = 0x0;
                if (t50 != 0) {
                    t58 = 0x1;
                }
                t59 = t58;
            }
            t67 = t59;
        }
        t142 = t67;
    } else {
        t76 = *(int *)((((signed char)((short)a4 * (short)0x1C) + 0xC2A11D8) + 0x14));
        t125 = 0x0;
        if ((t76 & 4) != 0) {
            t77 = *(int *)((a5 + 0x0));
            if ((int)t77 >= 0) {
                if ((int)t77 >= (int)a6) {
                    *(unsigned int *)((a5 + 0x0)) = 0x0;
                }
                t78 = a6;
            } else {
                *(unsigned int *)((a5 + 0x0)) = 0x0;
            }
            t79 = *(int *)0xC2A11CC;
            if ((t79 & 0x20) == 0) {
                t80 = *(int *)0xC2A11D4;
                t90 = 0x0;
                if (t80 == 0) {
                    t81 = *(int *)0xC2A11D0;
                    t87 = 0x0;
                    if ((t81 & 0x20) != 0) {
                        t82 = *(int *)((a5 + 0x0));
                        t84 = 0x0;
                        if ((int)t82 > 0) {
                            t83 = *(int *)((a5 + 0x0));
                            *(unsigned int *)((a5 + 0x0)) = (t83 - 1);
                            t84 = 0x1;
                        }
                        t87 = t84;
                    }
                    t90 = t87;
                }
                t98 = t90;
            } else {
                t93 = *(int *)((a5 + 0x0));
                t95 = 0x0;
                if ((int)t93 > 0) {
                    t94 = *(int *)((a5 + 0x0));
                    *(unsigned int *)((a5 + 0x0)) = (t94 - 1);
                    t95 = 0x1;
                }
                t98 = t95;
            }
            t101 = *(int *)0xC2A11CC;
            if ((t101 & 0x40) == 0) {
                t102 = *(int *)0xC2A11D4;
                t113 = t98;
                if (t102 == 0) {
                    t103 = *(int *)0xC2A11D0;
                    t109 = t98;
                    if ((t103 & 0x40) != 0) {
                        t104 = *(int *)((a5 + 0x0));
                        t107 = t98;
                        if ((int)t104 < (int)(t78 - 1)) {
                            t105 = *(int *)((a5 + 0x0));
                            *(unsigned int *)((a5 + 0x0)) = (t105 + 0x1);
                            t107 = (t98 + 0x1);
                        }
                        t109 = t107;
                    }
                    t113 = t109;
                }
                t121 = t113;
            } else {
                t116 = *(int *)((a5 + 0x0));
                t119 = t98;
                if ((int)t116 < (int)(t78 - 1)) {
                    t117 = *(int *)((a5 + 0x0));
                    *(unsigned int *)((a5 + 0x0)) = (t117 + 0x1);
                    t119 = (t98 + 0x1);
                }
                t121 = t119;
            }
            t125 = t121;
        }
        t134 = 0x0;
        if (t125 != 0) {
            FUN_0c07f5c0();
            t133 = 0x0;
            if (t125 != 0) {
                t133 = 0x1;
            }
            t134 = t133;
        }
        t142 = t134;
    }
    return t142;
}

int FUN_0c0417c0(int a4, int a5, int a6)
{
    int t48;
    int t36;
    int t0;
    int t2;
    int t4;
    int t8;
    int t9;
    int t1;
    int t30;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t11;
    int t13;
    int t17;
    int t18;

    t48 = 0xFFFFFFFF;
    if ((int)a4 >= 0) {
        t36 = 0xFFFFFFFF;
        if ((int)a6 >= 0) {
            if (a5 == 0) {
                t0 = GetMenuMode(0x1);
                t11 = t0;
                t13 = 0xA;
                t17 = ((((0xC28A4F8 + (short)((short)a4 * (short)0x788)) + 0x8) + (short)((short)t0 * (short)0x78)) + (signed char)(((a6 << 1) + a6) << 2));
                t18 = (0xC2A1260 + (short)((short)t0 * (short)0x78));
            } else {
                t2 = a5;
                t4 = 0x5;
                t8 = (((0x3C8 + ((short)((short)a4 * (short)0x788) + 0xC28A4F8)) + (short)((short)(a5 - 2) * (short)0x3C)) + (signed char)(((a6 << 1) + a6) << 2));
                t9 = (0xC2A1620 + (short)((short)(a5 - 2) * (short)0x3C));
                if (a5 == 1) {
                    t1 = GetMenuMode(0x1);
                    t2 = t1;
                    t4 = 0xA;
                    t8 = ((((0xC28A4F8 + (short)((short)a4 * (short)0x788)) + 0x1E8) + (short)((short)t1 * (short)0x78)) + (signed char)(((a6 << 1) + a6) << 2));
                    t9 = (0xC2A1440 + (short)((short)t1 * (short)0x78));
                }
                t11 = t2;
                t13 = t4;
                t17 = t8;
                t18 = t9;
            }
            t30 = 0xFFFFFFFF;
            if ((int)t13 > 0) {
                t20 = t11;
                t21 = 0x0;
                for (;;) {
                    t22 = *(int *)((t17 + 0x0));
                    t23 = *(int *)((((((t21 << 1) + t21) << 2) + t18) + 0x0));
                    if (t22 == t23) {
                        t24 = *(int *)((t17 + 0x4));
                        t25 = *(int *)((((((t21 << 1) + t21) << 2) + t18) + 0x4));
                        t20 = t25;
                        if (t24 == t20) {
                            t26 = *(signed char *)((((((t21 << 1) + t21) << 2) + t18) + 0x9));
                            t20 = t26;
                            if (a4 == t20) break;
                            t21 = (t21 + 0x1);
                            if ((int)t21 >= (int)t13) {
                                t20 = 0xFFFFFFFF;
                                return t20;
                            }
                            continue;
                        }
                        t21 = (t21 + 0x1);
                        if ((int)t21 >= (int)t13) {
                            t20 = 0xFFFFFFFF;
                            return t20;
                        }
                        continue;
                    }
                    t21 = (t21 + 0x1);
                    if ((int)t21 >= (int)t13) {
                        t20 = 0xFFFFFFFF;
                        return t20;
                    }
                }
                t30 = t21;
            }
            t36 = t30;
        }
        t48 = t36;
    }
    return t48;
}

int nlsndStreamGetParam(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t4;
    int t3;
    int t5;
    int t9;
    int t8;
    int t7;
    int t54;
    int t44;
    int t40;
    int t11;
    int t10;
    int t12;
    int t15;
    int t13;
    int t14;
    int t20;
    int t25;
    int t30;
    int t35;
    int t48;
    int t49;
    int t58;
    int t2;
    int t6;
    int t59;
    int t50;
    int t36;
    int t31;
    int t26;
    int t21;
    int t17;

    t0 = *(signed char *)((a4 + 0x9));
    t1 = *(int *)((a4 + 0xC));
    t4 = 0x1;
    if ((t0 & 0x3) != 0) {
        t3 = 0x2;
        if ((t0 & 0x3) != 1) {
            if ((t0 & 0x3) == 2) {
                t2 = 0x4;
            }
            t3 = t2;
        }
        t4 = t3;
    }
    t5 = *(signed char *)((a4 + 0x8));
    t9 = 0x10;
    if (t5 != 0) {
        t8 = 0x8;
        if (t5 != 1) {
            t7 = 0x4;
            if (t5 != 2) {
                if (t5 == 3) {
                    t6 = 0x4;
                }
                t7 = t6;
            }
            t8 = t7;
        }
        t9 = t8;
    }
    if (a5 != 0) {
        t54 = t9;
        if (a5 != 1) {
            if (a5 != 2) {
                t44 = t1;
                if (a5 != 3) {
                    t40 = t4;
                    if (a5 != 4) {
                        if (a5 != 5) {
                            if (a5 != 6) {
                                if (a5 != 7) {
                                    if (a5 != 8) {
                                        if (a5 != 9) {
                                            t11 = 0xFFFFFFFF;
                                            if (a5 == 10) {
                                                t10 = *(signed char *)(((a4 + 0x1E) + 0x0));
                                                t11 = (unsigned char)t10;
                                            }
                                            t17 = t11;
                                        } else {
                                            t12 = *(signed char *)((a4 + 0x1F));
                                            t15 = 0x0;
                                            if ((unsigned char)t12 == 0) {
                                                t13 = *(short *)((a4 + 0x16));
                                                t14 = ((unsigned int)((unsigned int)((unsigned int)(unsigned short)t13 >> 2) >> 2) >> 2);
                                                if (((unsigned int)((unsigned int)((unsigned int)(unsigned short)t13 >> 2) >> 2) >> 2) == 0) {
                                                    t14 = 0x1;
                                                }
                                                t15 = t14;
                                            }
                                            t17 = t15;
                                        }
                                        t21 = t17;
                                    } else {
                                        t20 = *(signed char *)(((a4 + 0x33) + 0x0));
                                        t21 = ((int)((unsigned char)t20 & 0xF0) >> 4);
                                    }
                                    t26 = t21;
                                } else {
                                    t25 = *(signed char *)(((a4 + 0x33) + 0x0));
                                    t26 = ((unsigned char)t25 & 0xF);
                                }
                                t31 = t26;
                            } else {
                                t30 = *(signed char *)((((((short)a6 << 2) + a4) + 0x32) + 0x0));
                                t31 = (unsigned char)t30;
                            }
                            t36 = t31;
                        } else {
                            t35 = *(signed char *)((((((short)a6 << 2) + a4) + 0x31) + 0x0));
                            t36 = (unsigned char)t35;
                        }
                        t40 = t36;
                    }
                    t44 = t40;
                }
                t50 = t44;
            } else {
                t48 = (int)((int)((t1 << 2) << 1) / (int)t9);
                t49 = (int)((int)t48 / (int)t4);
                t50 = t49;
            }
            t54 = t50;
        }
        t59 = t54;
    } else {
        t58 = *(short *)(((a4 + 0x2A) + 0x0));
        t59 = (unsigned short)t58;
    }
    return t59;
}

int stopingCarExec(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t6;
    int t7;
    int t8;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    float t17;
    int t21;
    int t23;
    int t25;
    int t27;
    float u30;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    float u39;
    int t43;
    int t44;
    int t45;
    float u47;
    int t48;
    int t49;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    float u64;
    float u65;
    float u66;
    float u67;
    int t69;
    int t77;
    float u79;
    float u80;
    float u81;
    int t84;
    int t86;
    int t88;
    float u91;
    int t94;
    int t95;
    int t96;
    int t97;
    int t98;
    int t99;
    float u100;
    int t104;
    int t105;
    int t106;
    int t108;
    int t109;
    int t110;
    float u112;
    float u113;
    float u114;
    int t117;
    int t119;
    int t121;
    float u124;
    int t127;
    int t128;
    int t129;
    int t130;
    int t131;
    int t132;
    float u133;
    int t137;
    int t138;
    int t139;
    int t152;
    int t153;
    int t154;
    int t155;
    int t156;
    int t157;
    int t158;
    float t159;
    int t163;
    int t165;
    int t167;
    int t169;
    float u172;
    int t175;
    int t176;
    int t177;
    int t178;
    int t179;
    int t180;
    float u181;
    int t185;
    int t186;
    int t187;
    float u189;
    int t190;
    int t191;
    int t201;
    int t202;
    int t203;
    int t204;
    int t205;
    float u206;
    float u207;
    float u208;
    float u209;
    int t211;
    int t219;
    float u221;
    float u222;
    float u223;
    int t226;
    int t228;
    int t230;
    float u233;
    int t236;
    int t237;
    int t238;
    int t239;
    int t240;
    int t241;
    float u242;
    int t246;
    int t247;
    int t248;
    int t250;
    int t251;
    int t252;
    float u254;
    float u255;
    float u256;
    int t259;
    int t261;
    int t263;
    float u266;
    int t269;
    int t270;
    int t271;
    int t272;
    int t273;
    int t274;
    float u275;
    int t279;
    int t280;
    int t281;
    int t289;
    int t147;
    float u20;
    int t145;
    int t143;
    int t141;
    float u162;
    int t287;
    int t285;
    int t283;
    int stk[11] = {0};

    t0 = *(int *)(((0x98 + a4) + 0x8));
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t0;
    t1 = *(int *)(((0x98 + a4) + 0x4));
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t1;
    t2 = *(int *)(((0x98 + a4) + 0x0));
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t2;
    technicalCheck(a4);
    t4 = *(int *)((a4 + 0x84));
    calcCheck(a4);
    t6 = *(int *)((a4 + 0x84));
    if ((t4 ^ t6) != 0) {
        t7 = calcCheckExec(a4, (t4 ^ t6));
        if (t7 == 0) {
            t8 = pcarEnd(a4);
            t147 = t8;
        } else {
            FUN_0c044f12(a4);
            t10 = *(int *)((a4 + 0x84));
            if ((t10 & 8) != 0) {
                t11 = *(int *)(((a4 + 0x14) + 0x8));
                *(unsigned int *)(((0x8C + a4) + 0x8)) = t11;
                t12 = *(int *)(((a4 + 0x14) + 0x4));
                *(unsigned int *)(((0x8C + a4) + 0x4)) = t12;
                t13 = *(int *)(((a4 + 0x14) + 0x0));
                *(unsigned int *)(((0x8C + a4) + 0x0)) = t13;
                t14 = *(int *)(((a4 + 0x20) + 0x8));
                *(unsigned int *)(((0x98 + a4) + 0x8)) = t14;
                t15 = *(int *)(((a4 + 0x20) + 0x4));
                *(unsigned int *)(((0x98 + a4) + 0x4)) = t15;
                t16 = *(int *)(((a4 + 0x20) + 0x0));
                *(unsigned int *)(((0x98 + a4) + 0x0)) = t16;
                t17 = nlInnerProduct((a4 + 0x5C), (a4 + 0x44));
                *(float *)((a4 + 0x100)) = t17;
                u20 = t17;
            }
            t21 = *(int *)((a4 + 0x84));
            if ((t21 & 4) == 0) {
                nlPushUnitMatrix();
                t23 = *(short *)((a4 + 0xA8));
                nlRotateAZ((-(unsigned short)t23));
                t25 = *(short *)((a4 + 0xA4));
                nlRotateAX((-(unsigned short)t25));
                t27 = *(short *)((a4 + 0xA6));
                nlRotateAY((-(unsigned short)t27));
                FUN_0c077210((0x98 + a4), (((int)stk + 4) + 0xC));
                u30 = *(float *)(((int)stk + 24));
                *(float *)((a4 + 0xCC)) = u30;
                nlPopMatrix(0x1);
                carEntry(a4);
                t33 = *(int *)(((0x8C + a4) + 0x8));
                *(unsigned int *)(((a4 + 0x14) + 0x8)) = t33;
                t34 = *(int *)(((0x8C + a4) + 0x4));
                *(unsigned int *)(((a4 + 0x14) + 0x4)) = t34;
                t35 = *(int *)(((0x8C + a4) + 0x0));
                *(unsigned int *)(((a4 + 0x14) + 0x0)) = t35;
                t36 = *(int *)(((0x98 + a4) + 0x8));
                *(unsigned int *)(((a4 + 0x20) + 0x8)) = t36;
                t37 = *(int *)(((0x98 + a4) + 0x4));
                *(unsigned int *)(((a4 + 0x20) + 0x4)) = t37;
                t38 = *(int *)(((0x98 + a4) + 0x0));
                *(unsigned int *)(((a4 + 0x20) + 0x0)) = t38;
                u39 = *(float *)((a4 + 0x100));
                nlScaleVector((((int)stk + 4) + 0xC), (a4 + 0x44), (u39 - u20));
                nlAddVector((a4 + 0x5C), (((int)stk + 4) + 0xC));
                nlScaleVector((a4 + 0x5C), (a4 + 0x5C), 0.996999979f);
                t43 = *(short *)((a4 + 0xA8));
                t44 = *(short *)((a4 + 0xA6));
                t45 = *(short *)((a4 + 0xA4));
                FUN_0c036256((a4 + 0x44), (unsigned short)t45, (unsigned short)t44);
                *(unsigned int *)((a4 + 0x68)) = 0x0;
                t145 = 0x68;
            } else {
                u47 = *(float *)((a4 + 0x9C));
                *(float *)((a4 + 0x9C)) = (u47 - 0.073499985f);
                t48 = *(int *)((a4 + 0x110));
                if ((int)t48 > 0) {
                    t49 = *(int *)((a4 + 0x110));
                    *(unsigned int *)((a4 + 0x110)) = (t49 - 1);
                    carResistance();
                }
                nlScaleVector((0x98 + a4), (0x98 + a4), 0.999799967f);
                nlAddVector((0x8C + a4), (0x98 + a4));
                t59 = GetCollision2D((0x8C + a4), 30.0f);
                t60 = *(int *)((t59 + 0x1C));
                if (t60 != -1) {
                    t61 = *(int *)(((t59 + 0xC) + 0x8));
                    *(unsigned int *)(((0xEC + a4) + 0x8)) = t61;
                    t62 = *(int *)(((t59 + 0xC) + 0x4));
                    *(unsigned int *)(((0xEC + a4) + 0x4)) = t62;
                    t63 = *(int *)(((t59 + 0xC) + 0x0));
                    *(unsigned int *)(((0xEC + a4) + 0x0)) = t63;
                    u64 = *(float *)((t59 + 0x18));
                    *(float *)((a4 + 0x104)) = u64;
                    u65 = *(float *)((a4 + 0x104));
                    u66 = *(float *)((a4 + 0x90));
                    if (u65 > u66) {
                        u67 = *(float *)((a4 + 0x104));
                        *(float *)((a4 + 0x90)) = u67;
                        carColliReflection();
                        t69 = *(int *)((a4 + 0x110));
                        *(unsigned int *)((a4 + 0x110)) = (int)((float)t69 + 5.0f);
                    }
                    t77 = *(int *)((a4 + 0x110));
                    if ((int)t77 > (int)0xA) {
                        *(unsigned int *)((a4 + 0x110)) = 0xA;
                    }
                    nlSubVector3op(((int)stk + 4), (0x98 + a4), ((int)stk + 4));
                    u79 = *(float *)(((((int)stk + 4) + 0x4) + 0x0));
                    u80 = *(float *)((a4 + 0xF8));
                    *(float *)((a4 + 0xF8)) = (u80 - (u79 * (1.0f + 1.0f)));
                    u81 = *(float *)((a4 + 0xF8));
                    *(float *)((a4 + 0xF8)) = (u81 * 0.799999952f);
                    Put_Motion2D(a4);
                    nlPushUnitMatrix();
                    t84 = *(short *)((a4 + 0xA8));
                    nlRotateAZ((-(unsigned short)t84));
                    t86 = *(short *)((a4 + 0xA4));
                    nlRotateAX((-(unsigned short)t86));
                    t88 = *(short *)((a4 + 0xA6));
                    nlRotateAY((-(unsigned short)t88));
                    FUN_0c077210((0x98 + a4), (((int)stk + 4) + 0xC));
                    u91 = *(float *)(((int)stk + 24));
                    *(float *)((a4 + 0xCC)) = u91;
                    nlPopMatrix(0x1);
                    carEntry(a4);
                    t94 = *(int *)(((0x8C + a4) + 0x8));
                    *(unsigned int *)(((a4 + 0x14) + 0x8)) = t94;
                    t95 = *(int *)(((0x8C + a4) + 0x4));
                    *(unsigned int *)(((a4 + 0x14) + 0x4)) = t95;
                    t96 = *(int *)(((0x8C + a4) + 0x0));
                    *(unsigned int *)(((a4 + 0x14) + 0x0)) = t96;
                    t97 = *(int *)(((0x98 + a4) + 0x8));
                    *(unsigned int *)(((a4 + 0x20) + 0x8)) = t97;
                    t98 = *(int *)(((0x98 + a4) + 0x4));
                    *(unsigned int *)(((a4 + 0x20) + 0x4)) = t98;
                    t99 = *(int *)(((0x98 + a4) + 0x0));
                    *(unsigned int *)(((a4 + 0x20) + 0x0)) = t99;
                    u100 = *(float *)((a4 + 0x100));
                    nlScaleVector((((int)stk + 4) + 0xC), (a4 + 0x44), (u100 - u20));
                    nlAddVector((a4 + 0x5C), (((int)stk + 4) + 0xC));
                    nlScaleVector((a4 + 0x5C), (a4 + 0x5C), 0.996999979f);
                    t104 = *(short *)((a4 + 0xA8));
                    t105 = *(short *)((a4 + 0xA6));
                    t106 = *(short *)((a4 + 0xA4));
                    FUN_0c036256((a4 + 0x44), (unsigned short)t106, (unsigned short)t105);
                    *(unsigned int *)((a4 + 0x68)) = 0x0;
                    t143 = 0x68;
                } else {
                    t108 = dropOutCheck(a4);
                    if (t108 != 0) {
                        t109 = pcarEnd(a4);
                        t141 = t109;
                    } else {
                        t110 = *(int *)((a4 + 0x110));
                        if ((int)t110 > (int)0xA) {
                            *(unsigned int *)((a4 + 0x110)) = 0xA;
                        }
                        nlSubVector3op(((int)stk + 4), (0x98 + a4), ((int)stk + 4));
                        u112 = *(float *)(((((int)stk + 4) + 0x4) + 0x0));
                        u113 = *(float *)((a4 + 0xF8));
                        *(float *)((a4 + 0xF8)) = (u113 - (u112 * (1.0f + 1.0f)));
                        u114 = *(float *)((a4 + 0xF8));
                        *(float *)((a4 + 0xF8)) = (u114 * 0.799999952f);
                        Put_Motion2D(a4);
                        nlPushUnitMatrix();
                        t117 = *(short *)((a4 + 0xA8));
                        nlRotateAZ((-(unsigned short)t117));
                        t119 = *(short *)((a4 + 0xA4));
                        nlRotateAX((-(unsigned short)t119));
                        t121 = *(short *)((a4 + 0xA6));
                        nlRotateAY((-(unsigned short)t121));
                        FUN_0c077210((0x98 + a4), (((int)stk + 4) + 0xC));
                        u124 = *(float *)(((int)stk + 24));
                        *(float *)((a4 + 0xCC)) = u124;
                        nlPopMatrix(0x1);
                        carEntry(a4);
                        t127 = *(int *)(((0x8C + a4) + 0x8));
                        *(unsigned int *)(((a4 + 0x14) + 0x8)) = t127;
                        t128 = *(int *)(((0x8C + a4) + 0x4));
                        *(unsigned int *)(((a4 + 0x14) + 0x4)) = t128;
                        t129 = *(int *)(((0x8C + a4) + 0x0));
                        *(unsigned int *)(((a4 + 0x14) + 0x0)) = t129;
                        t130 = *(int *)(((0x98 + a4) + 0x8));
                        *(unsigned int *)(((a4 + 0x20) + 0x8)) = t130;
                        t131 = *(int *)(((0x98 + a4) + 0x4));
                        *(unsigned int *)(((a4 + 0x20) + 0x4)) = t131;
                        t132 = *(int *)(((0x98 + a4) + 0x0));
                        *(unsigned int *)(((a4 + 0x20) + 0x0)) = t132;
                        u133 = *(float *)((a4 + 0x100));
                        nlScaleVector((((int)stk + 4) + 0xC), (a4 + 0x44), (u133 - u20));
                        nlAddVector((a4 + 0x5C), (((int)stk + 4) + 0xC));
                        nlScaleVector((a4 + 0x5C), (a4 + 0x5C), 0.996999979f);
                        t137 = *(short *)((a4 + 0xA8));
                        t138 = *(short *)((a4 + 0xA6));
                        t139 = *(short *)((a4 + 0xA4));
                        FUN_0c036256((a4 + 0x44), (unsigned short)t139, (unsigned short)t138);
                        *(unsigned int *)((a4 + 0x68)) = 0x0;
                        t141 = 0x68;
                    }
                    t143 = t141;
                }
                t145 = t143;
            }
            t147 = t145;
        }
        t289 = t147;
    } else {
        FUN_0c044f12(a4);
        t152 = *(int *)((a4 + 0x84));
        if ((t152 & 8) != 0) {
            t153 = *(int *)(((a4 + 0x14) + 0x8));
            *(unsigned int *)(((0x8C + a4) + 0x8)) = t153;
            t154 = *(int *)(((a4 + 0x14) + 0x4));
            *(unsigned int *)(((0x8C + a4) + 0x4)) = t154;
            t155 = *(int *)(((a4 + 0x14) + 0x0));
            *(unsigned int *)(((0x8C + a4) + 0x0)) = t155;
            t156 = *(int *)(((a4 + 0x20) + 0x8));
            *(unsigned int *)(((0x98 + a4) + 0x8)) = t156;
            t157 = *(int *)(((a4 + 0x20) + 0x4));
            *(unsigned int *)(((0x98 + a4) + 0x4)) = t157;
            t158 = *(int *)(((a4 + 0x20) + 0x0));
            *(unsigned int *)(((0x98 + a4) + 0x0)) = t158;
            t159 = nlInnerProduct((a4 + 0x5C), (a4 + 0x44));
            *(float *)((a4 + 0x100)) = t159;
            u162 = t159;
        }
        t163 = *(int *)((a4 + 0x84));
        if ((t163 & 4) == 0) {
            nlPushUnitMatrix();
            t165 = *(short *)((a4 + 0xA8));
            nlRotateAZ((-(unsigned short)t165));
            t167 = *(short *)((a4 + 0xA4));
            nlRotateAX((-(unsigned short)t167));
            t169 = *(short *)((a4 + 0xA6));
            nlRotateAY((-(unsigned short)t169));
            FUN_0c077210((0x98 + a4), (((int)stk + 4) + 0xC));
            u172 = *(float *)(((int)stk + 24));
            *(float *)((a4 + 0xCC)) = u172;
            nlPopMatrix(0x1);
            carEntry(a4);
            t175 = *(int *)(((0x8C + a4) + 0x8));
            *(unsigned int *)(((a4 + 0x14) + 0x8)) = t175;
            t176 = *(int *)(((0x8C + a4) + 0x4));
            *(unsigned int *)(((a4 + 0x14) + 0x4)) = t176;
            t177 = *(int *)(((0x8C + a4) + 0x0));
            *(unsigned int *)(((a4 + 0x14) + 0x0)) = t177;
            t178 = *(int *)(((0x98 + a4) + 0x8));
            *(unsigned int *)(((a4 + 0x20) + 0x8)) = t178;
            t179 = *(int *)(((0x98 + a4) + 0x4));
            *(unsigned int *)(((a4 + 0x20) + 0x4)) = t179;
            t180 = *(int *)(((0x98 + a4) + 0x0));
            *(unsigned int *)(((a4 + 0x20) + 0x0)) = t180;
            u181 = *(float *)((a4 + 0x100));
            nlScaleVector((((int)stk + 4) + 0xC), (a4 + 0x44), (u181 - u162));
            nlAddVector((a4 + 0x5C), (((int)stk + 4) + 0xC));
            nlScaleVector((a4 + 0x5C), (a4 + 0x5C), 0.996999979f);
            t185 = *(short *)((a4 + 0xA8));
            t186 = *(short *)((a4 + 0xA6));
            t187 = *(short *)((a4 + 0xA4));
            FUN_0c036256((a4 + 0x44), (unsigned short)t187, (unsigned short)t186);
            *(unsigned int *)((a4 + 0x68)) = 0x0;
            t287 = 0x68;
        } else {
            u189 = *(float *)((a4 + 0x9C));
            *(float *)((a4 + 0x9C)) = (u189 - 0.073499985f);
            t190 = *(int *)((a4 + 0x110));
            if ((int)t190 > 0) {
                t191 = *(int *)((a4 + 0x110));
                *(unsigned int *)((a4 + 0x110)) = (t191 - 1);
                carResistance();
            }
            nlScaleVector((0x98 + a4), (0x98 + a4), 0.999799967f);
            nlAddVector((0x8C + a4), (0x98 + a4));
            t201 = GetCollision2D((0x8C + a4), 30.0f);
            t202 = *(int *)((t201 + 0x1C));
            if (t202 != -1) {
                t203 = *(int *)(((t201 + 0xC) + 0x8));
                *(unsigned int *)(((0xEC + a4) + 0x8)) = t203;
                t204 = *(int *)(((t201 + 0xC) + 0x4));
                *(unsigned int *)(((0xEC + a4) + 0x4)) = t204;
                t205 = *(int *)(((t201 + 0xC) + 0x0));
                *(unsigned int *)(((0xEC + a4) + 0x0)) = t205;
                u206 = *(float *)((t201 + 0x18));
                *(float *)((a4 + 0x104)) = u206;
                u207 = *(float *)((a4 + 0x104));
                u208 = *(float *)((a4 + 0x90));
                if (u207 > u208) {
                    u209 = *(float *)((a4 + 0x104));
                    *(float *)((a4 + 0x90)) = u209;
                    carColliReflection();
                    t211 = *(int *)((a4 + 0x110));
                    *(unsigned int *)((a4 + 0x110)) = (int)((float)t211 + 5.0f);
                }
                t219 = *(int *)((a4 + 0x110));
                if ((int)t219 > (int)0xA) {
                    *(unsigned int *)((a4 + 0x110)) = 0xA;
                }
                nlSubVector3op(((int)stk + 4), (0x98 + a4), ((int)stk + 4));
                u221 = *(float *)(((((int)stk + 4) + 0x4) + 0x0));
                u222 = *(float *)((a4 + 0xF8));
                *(float *)((a4 + 0xF8)) = (u222 - (u221 * (1.0f + 1.0f)));
                u223 = *(float *)((a4 + 0xF8));
                *(float *)((a4 + 0xF8)) = (u223 * 0.799999952f);
                Put_Motion2D(a4);
                nlPushUnitMatrix();
                t226 = *(short *)((a4 + 0xA8));
                nlRotateAZ((-(unsigned short)t226));
                t228 = *(short *)((a4 + 0xA4));
                nlRotateAX((-(unsigned short)t228));
                t230 = *(short *)((a4 + 0xA6));
                nlRotateAY((-(unsigned short)t230));
                FUN_0c077210((0x98 + a4), (((int)stk + 4) + 0xC));
                u233 = *(float *)(((int)stk + 24));
                *(float *)((a4 + 0xCC)) = u233;
                nlPopMatrix(0x1);
                carEntry(a4);
                t236 = *(int *)(((0x8C + a4) + 0x8));
                *(unsigned int *)(((a4 + 0x14) + 0x8)) = t236;
                t237 = *(int *)(((0x8C + a4) + 0x4));
                *(unsigned int *)(((a4 + 0x14) + 0x4)) = t237;
                t238 = *(int *)(((0x8C + a4) + 0x0));
                *(unsigned int *)(((a4 + 0x14) + 0x0)) = t238;
                t239 = *(int *)(((0x98 + a4) + 0x8));
                *(unsigned int *)(((a4 + 0x20) + 0x8)) = t239;
                t240 = *(int *)(((0x98 + a4) + 0x4));
                *(unsigned int *)(((a4 + 0x20) + 0x4)) = t240;
                t241 = *(int *)(((0x98 + a4) + 0x0));
                *(unsigned int *)(((a4 + 0x20) + 0x0)) = t241;
                u242 = *(float *)((a4 + 0x100));
                nlScaleVector((((int)stk + 4) + 0xC), (a4 + 0x44), (u242 - u162));
                nlAddVector((a4 + 0x5C), (((int)stk + 4) + 0xC));
                nlScaleVector((a4 + 0x5C), (a4 + 0x5C), 0.996999979f);
                t246 = *(short *)((a4 + 0xA8));
                t247 = *(short *)((a4 + 0xA6));
                t248 = *(short *)((a4 + 0xA4));
                FUN_0c036256((a4 + 0x44), (unsigned short)t248, (unsigned short)t247);
                *(unsigned int *)((a4 + 0x68)) = 0x0;
                t285 = 0x68;
            } else {
                t250 = dropOutCheck(a4);
                if (t250 != 0) {
                    t251 = pcarEnd(a4);
                    t283 = t251;
                } else {
                    t252 = *(int *)((a4 + 0x110));
                    if ((int)t252 > (int)0xA) {
                        *(unsigned int *)((a4 + 0x110)) = 0xA;
                    }
                    nlSubVector3op(((int)stk + 4), (0x98 + a4), ((int)stk + 4));
                    u254 = *(float *)(((((int)stk + 4) + 0x4) + 0x0));
                    u255 = *(float *)((a4 + 0xF8));
                    *(float *)((a4 + 0xF8)) = (u255 - (u254 * (1.0f + 1.0f)));
                    u256 = *(float *)((a4 + 0xF8));
                    *(float *)((a4 + 0xF8)) = (u256 * 0.799999952f);
                    Put_Motion2D(a4);
                    nlPushUnitMatrix();
                    t259 = *(short *)((a4 + 0xA8));
                    nlRotateAZ((-(unsigned short)t259));
                    t261 = *(short *)((a4 + 0xA4));
                    nlRotateAX((-(unsigned short)t261));
                    t263 = *(short *)((a4 + 0xA6));
                    nlRotateAY((-(unsigned short)t263));
                    FUN_0c077210((0x98 + a4), (((int)stk + 4) + 0xC));
                    u266 = *(float *)(((int)stk + 24));
                    *(float *)((a4 + 0xCC)) = u266;
                    nlPopMatrix(0x1);
                    carEntry(a4);
                    t269 = *(int *)(((0x8C + a4) + 0x8));
                    *(unsigned int *)(((a4 + 0x14) + 0x8)) = t269;
                    t270 = *(int *)(((0x8C + a4) + 0x4));
                    *(unsigned int *)(((a4 + 0x14) + 0x4)) = t270;
                    t271 = *(int *)(((0x8C + a4) + 0x0));
                    *(unsigned int *)(((a4 + 0x14) + 0x0)) = t271;
                    t272 = *(int *)(((0x98 + a4) + 0x8));
                    *(unsigned int *)(((a4 + 0x20) + 0x8)) = t272;
                    t273 = *(int *)(((0x98 + a4) + 0x4));
                    *(unsigned int *)(((a4 + 0x20) + 0x4)) = t273;
                    t274 = *(int *)(((0x98 + a4) + 0x0));
                    *(unsigned int *)(((a4 + 0x20) + 0x0)) = t274;
                    u275 = *(float *)((a4 + 0x100));
                    nlScaleVector((((int)stk + 4) + 0xC), (a4 + 0x44), (u275 - u162));
                    nlAddVector((a4 + 0x5C), (((int)stk + 4) + 0xC));
                    nlScaleVector((a4 + 0x5C), (a4 + 0x5C), 0.996999979f);
                    t279 = *(short *)((a4 + 0xA8));
                    t280 = *(short *)((a4 + 0xA6));
                    t281 = *(short *)((a4 + 0xA4));
                    FUN_0c036256((a4 + 0x44), (unsigned short)t281, (unsigned short)t280);
                    *(unsigned int *)((a4 + 0x68)) = 0x0;
                    t283 = 0x68;
                }
                t285 = t283;
            }
            t287 = t285;
        }
        t289 = t287;
    }
    return t289;
}
