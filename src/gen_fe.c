/* Straight-line functions with calls and guards (batch gen_fe): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0789c0(int);
int ResetFadeColor(void);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int nlLocate(int, int);
int nlObjPut(int);
int nlObjPutSetFadeColor(float, float, float);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlScale(float, float, float);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int FUN_0c04a52a(int a4);
int kmiGetVertexBasePointer(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int Chat_TellDestination(int a4);

int FUN_0c04a52a(int a4)
{
    int t0;
    int t1;
    int t8;
    int t2;
    int t3;
    int t4;
    int t15;
    int t11;
    int t12;
    int t17;
    int t18;
    int t25;
    int t19;
    int t20;
    int t21;
    int t32;
    int t28;
    int t29;
    int t34;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t53;
    int t47;
    int t48;
    int t59;
    int t55;
    int t56;
    int t61;
    int t62;
    int t69;
    int t63;
    int t64;
    int t75;
    int t71;
    int t72;
    int t77;
    int t84;
    int t88;
    int t90;
    int t91;
    int t97;
    int t98;
    int t99;
    int t101;
    int t102;
    int t103;
    int t104;
    int t105;
    int t106;
    int t107;
    int t108;
    int t115;
    int t116;
    int t117;
    int t118;
    int t119;
    int t120;
    int t121;
    int t122;
    int t123;
    int t124;
    int t125;
    int t126;
    int t136;
    int t146;
    int t150;
    int t151;
    int t152;
    int t153;
    int t154;
    int t161;
    int t162;
    int t163;
    int t164;
    int t165;
    int t166;
    int t167;
    int t168;
    int t169;
    int t170;
    int t171;
    int t172;
    int t182;
    int t192;
    int t198;
    int t199;
    int t201;
    int t202;
    int t203;
    int t204;
    int t205;
    int t206;
    int t207;
    int t38;
    int t80;
    int t100;
    int t195;
    int t149;
    int t112;
    int t144;
    int t158;
    int t190;
    int stk[25] = {0};

    if (a4 == 0) {
        *(unsigned int *)0xC2A62B4 = 0x0;
        *(unsigned int *)0xC2A62B0 = 0x0;
    } else {
        t0 = *(int *)0xC2A4E58;
        if ((int)t0 < (int)0x1E) {
            *(unsigned int *)(((int)stk + 48)) = 0xC1EE280;
            t1 = *(int *)0xC1EE284;
            t8 = 0x0;
            if ((0x10 & t1) != 0) {
                t2 = *(int *)0xC2A6694;
                t3 = *(int *)0xC2A62B0;
                t4 = 0x0;
                if ((int)t3 < (int)(t2 - 1)) {
                    t4 = 0x1;
                }
                t8 = t4;
            }
            t15 = 0x0;
            if ((0x20 & t1) != 0) {
                t11 = *(int *)0xC2A62B0;
                t12 = 0x0;
                if ((int)t11 > 0) {
                    t12 = 0x1;
                }
                t15 = t12;
            }
            t17 = *(int *)0xC2A62B0;
            t38 = (t17 + (t8 - t15));
        } else {
            *(unsigned int *)(((int)stk + 44)) = 0xC1EE280;
            t18 = *(int *)0xC1EE280;
            t25 = 0x0;
            if ((0x10 & t18) != 0) {
                t19 = *(int *)0xC2A6694;
                t20 = *(int *)0xC2A62B0;
                t21 = 0x0;
                if ((int)t20 < (int)(t19 - 1)) {
                    t21 = 0x1;
                }
                t25 = t21;
            }
            t32 = 0x0;
            if ((0x20 & t18) != 0) {
                t28 = *(int *)0xC2A62B0;
                t29 = 0x0;
                if ((int)t28 > 0) {
                    t29 = 0x1;
                }
                t32 = t29;
            }
            t34 = *(int *)0xC2A62B0;
            t38 = (t34 + (t25 - t32));
        }
        *(unsigned int *)0xC2A62B0 = t38;
        t41 = *(int *)0xC2A6690;
        t42 = *(int *)((((((t38 << 1) + t38) << 2) + t41) + 0x0));
        *(unsigned int *)(((int)stk + 28)) = t42;
        t43 = *(int *)((((((t38 << 1) + t38) << 2) + t41) + 0x4));
        t44 = *(int *)0xC2A4E58;
        t45 = *(int *)((t43 + 0x0));
        if ((int)t44 < (int)0x1E) {
            *(unsigned int *)(((int)stk + 40)) = 0xC1EE280;
            t46 = *(int *)0xC1EE284;
            t53 = 0x0;
            if ((0x80 & t46) != 0) {
                t47 = *(int *)0xC2A62B4;
                t48 = 0x0;
                if ((int)t47 < (int)(t45 - 1)) {
                    t48 = 0x1;
                }
                t53 = t48;
            }
            t59 = 0x0;
            if ((0x40 & t46) != 0) {
                t55 = *(int *)0xC2A62B4;
                t56 = 0x0;
                if ((int)t55 > 0) {
                    t56 = 0x1;
                }
                t59 = t56;
            }
            t61 = *(int *)0xC2A62B4;
            t80 = (t61 + (t53 - t59));
        } else {
            *(unsigned int *)(((int)stk + 36)) = 0xC1EE280;
            t62 = *(int *)0xC1EE280;
            t69 = 0x0;
            if ((0x80 & t62) != 0) {
                t63 = *(int *)0xC2A62B4;
                t64 = 0x0;
                if ((int)t63 < (int)(t45 - 1)) {
                    t64 = 0x1;
                }
                t69 = t64;
            }
            t75 = 0x0;
            if ((0x40 & t62) != 0) {
                t71 = *(int *)0xC2A62B4;
                t72 = 0x0;
                if ((int)t71 > 0) {
                    t72 = 0x1;
                }
                t75 = t72;
            }
            t77 = *(int *)0xC2A62B4;
            t80 = (t77 + (t69 - t75));
        }
        *(unsigned int *)0xC2A62B4 = t80;
        t84 = (int)((int)t80 % (int)t45);
        *(unsigned int *)0xC2A62B4 = t84;
        nlPushUnitMatrix();
        nlTranslate(0.0f, 0.0f, -10.0f);
        nlRotateAX(0x4000);
        t88 = *(int *)0xC1EE24C;
        if ((t88 & 8) != 0) {
            nlScale(0.0014999999f, 0.0014999999f, 0.0014999999f);
            t90 = *(int *)0xC2A62B4;
            t91 = *(int *)(((int)stk + 28));
            FUN_0c0789c0(((((t90 << 1) + t90) << 2) + t91));
        } else {
            nlScale(0.00039999999f, 0.00039999999f, 0.00039999999f);
        }
        *(unsigned int *)(((int)stk + 32)) = 0xC1EE24C;
        t97 = 0xC04A738;
        t98 = a4;
        t99 = 0x0;
        t101 = 0xC1EE24C;
        for (;;) {
            t102 = *(int *)0xC2A6694;
            if ((int)t99 >= (int)t102) {
                break;
            }
            t103 = *(int *)0xC2A62B0;
            t98 = t103;
            if ((int)t98 < (int)0x1) {
                if (t99 == t98) {
                    t104 = *(int *)0xC2A6690;
                    t105 = *(int *)((((((t99 << 1) + t99) << 2) + t104) + 0x0));
                    *(unsigned int *)(((int)stk + 28)) = t105;
                    t106 = *(int *)((((((t99 << 1) + t99) << 2) + t104) + 0x4));
                    t100 = t106;
                    t107 = *(int *)((t100 + 0x0));
                    t100 = t107;
                    if (t99 == t98) {
                        t108 = nlObjPutSetFadeColor(1.0f, 0.0f, 0.0f);
                        t97 = t108;
                    } else {
                        t112 = t98;
                    }
                    t98 = t112;
                    t101 = 0x0;
                    if ((int)t100 > 0) {
                        for (;;) {
                            t98 = 0x0;
                            t115 = nlPushMatrix(t98);
                            t97 = t115;
                            t98 = t101;
                            t98 = (t98 << 1);
                            t98 = (t98 + t101);
                            t98 = (t98 << 2);
                            t116 = *(int *)(((int)stk + 28));
                            t98 = (t98 + t116);
                            t117 = nlTranslateV(t98);
                            t97 = t117;
                            t118 = nlScale(5.0f, 5.0f, 5.0f);
                            t97 = t118;
                            t98 = 0xC5B4960;
                            t119 = nlObjPut(t98);
                            t97 = t119;
                            t120 = *(int *)(((int)stk + 32));
                            t97 = t120;
                            t121 = *(int *)((t97 + 0x0));
                            t97 = t121;
                            if ((t97 & 8) == 0) {
                                t122 = *(int *)0xC2A62B4;
                                if (t101 == t122) {
                                    t123 = *(int *)0xC1EE330;
                                    t97 = t123;
                                    if ((t97 & 24) == 0) {
                                        t124 = nlTranslate(0.0f, 0.099999994f, 0.0f);
                                        t97 = t124;
                                        t125 = nlScale((1.0f + 1.0f), (1.0f + 1.0f), (1.0f + 1.0f));
                                        t97 = t125;
                                        t98 = 0xC5B4960;
                                        t126 = nlObjPut(t98);
                                        t97 = t126;
                                    }
                                }
                            }
                            t98 = 0x1;
                            t136 = nlPopMatrix(t98);
                            t97 = t136;
                            if ((int)t100 > (int)0xBB8) {
                                t101 = (t101 + 0x2);
                            }
                            if ((int)t100 > (int)0x7D0) {
                                t101 = (t101 + 0x2);
                            }
                            if ((int)t100 > (int)0x3E8) {
                                t101 = (t101 + 0x2);
                            }
                            if ((int)t100 > (int)0x1F4) {
                                t101 = (t101 + 0x2);
                            }
                            t101 = (t101 + 0x5);
                            if ((int)t101 >= (int)t100) {
                                break;
                            }
                        }
                    } else {
                        t144 = t98;
                    }
                    t98 = t144;
                    t146 = ResetFadeColor();
                    t97 = t146;
                } else {
                    t149 = t98;
                }
                t195 = t149;
            } else {
                t150 = *(int *)0xC2A6690;
                t151 = *(int *)((((((t99 << 1) + t99) << 2) + t150) + 0x0));
                *(unsigned int *)(((int)stk + 28)) = t151;
                t152 = *(int *)((((((t99 << 1) + t99) << 2) + t150) + 0x4));
                t100 = t152;
                t153 = *(int *)((t100 + 0x0));
                t100 = t153;
                if (t99 == t98) {
                    t154 = nlObjPutSetFadeColor(1.0f, 0.0f, 0.0f);
                    t97 = t154;
                } else {
                    t158 = t98;
                }
                t98 = t158;
                t101 = 0x0;
                if ((int)t100 > 0) {
                    for (;;) {
                        t98 = 0x0;
                        t161 = nlPushMatrix(t98);
                        t97 = t161;
                        t98 = t101;
                        t98 = (t98 << 1);
                        t98 = (t98 + t101);
                        t98 = (t98 << 2);
                        t162 = *(int *)(((int)stk + 28));
                        t98 = (t98 + t162);
                        t163 = nlTranslateV(t98);
                        t97 = t163;
                        t164 = nlScale(5.0f, 5.0f, 5.0f);
                        t97 = t164;
                        t98 = 0xC5B4960;
                        t165 = nlObjPut(t98);
                        t97 = t165;
                        t166 = *(int *)(((int)stk + 32));
                        t97 = t166;
                        t167 = *(int *)((t97 + 0x0));
                        t97 = t167;
                        if ((t97 & 8) == 0) {
                            t168 = *(int *)0xC2A62B4;
                            if (t101 == t168) {
                                t169 = *(int *)0xC1EE330;
                                t97 = t169;
                                if ((t97 & 24) == 0) {
                                    t170 = nlTranslate(0.0f, 0.099999994f, 0.0f);
                                    t97 = t170;
                                    t171 = nlScale((1.0f + 1.0f), (1.0f + 1.0f), (1.0f + 1.0f));
                                    t97 = t171;
                                    t98 = 0xC5B4960;
                                    t172 = nlObjPut(t98);
                                    t97 = t172;
                                }
                            }
                        }
                        t98 = 0x1;
                        t182 = nlPopMatrix(t98);
                        t97 = t182;
                        if ((int)t100 > (int)0xBB8) {
                            t101 = (t101 + 0x2);
                        }
                        if ((int)t100 > (int)0x7D0) {
                            t101 = (t101 + 0x2);
                        }
                        if ((int)t100 > (int)0x3E8) {
                            t101 = (t101 + 0x2);
                        }
                        if ((int)t100 > (int)0x1F4) {
                            t101 = (t101 + 0x2);
                        }
                        t101 = (t101 + 0x5);
                        if ((int)t101 >= (int)t100) {
                            break;
                        }
                    }
                } else {
                    t190 = t98;
                }
                t98 = t190;
                t192 = ResetFadeColor();
                t97 = t192;
            }
            t99 = (t99 + 0x1);
            t98 = t195;
        }
        nlPopMatrix(0x1);
        nlLocate(0x1E, 0x28);
        t198 = *(int *)0xC2A62B0;
        t199 = *(int *)0xC2A62B0;
        nlPrintf(0xC0C322C, t199, ((((t198 << 2) << 2) << 1) + 0xC0C0DA0));
        t201 = *(int *)0xC2A62B0;
        t202 = *(int *)0xC2A6690;
        t203 = *(int *)((((((t201 << 1) + t201) << 2) + t202) + 0x4));
        t204 = *(int *)((t203 + 0x0));
        t205 = *(int *)0xC2A62B4;
        t206 = nlPrintf(0xC0C323C, t205, t204);
        t207 = t206;
    }
    return t207;
}

int kmiGetVertexBasePointer(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t22;
    int t23;
    int t24;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t43;
    int t44;
    int t45;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t64;
    int t65;
    int t66;
    int t73;
    int t74;
    int t75;
    int t76;
    int t77;
    int t78;
    int t85;
    int t86;
    int t87;
    int t94;
    int t95;
    int t96;
    int t97;
    int t98;
    int t99;
    int t106;
    int t107;
    int t108;
    int t109;
    int t116;
    int t117;
    int t118;
    int t119;
    int t120;
    int t121;
    int t29;
    int t20;
    int t17;
    int t26;
    int t50;
    int t41;
    int t38;
    int t47;
    int t71;
    int t62;
    int t59;
    int t68;
    int t92;
    int t83;
    int t80;
    int t89;
    int t114;
    int t104;
    int t101;
    int t111;
    int stk[16] = {0};

    *(unsigned int *)0xC2EAB44 = (a4 << 2);
    *(unsigned int *)0xC2EAB48 = (a5 << 2);
    *(unsigned int *)0xC2EAB4C = (a6 << 2);
    *(unsigned int *)0xC2EAB50 = (a7 << 2);
    *(unsigned int *)0xC2EAB54 = (a8 << 2);
    *(unsigned int *)(((int)stk + 12)) = (((int)stk + 4) + 0x18);
    t0 = *(int *)0xC2EAAC0;
    *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x0)) = t0;
    *(unsigned int *)(((int)stk + 8)) = 0xC2B8CCC;
    *(unsigned int *)(((int)stk + 16)) = 0xC2B8CCC;
    t1 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 20)) = t1;
    *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 4) + 0x18) + 0x4);
    if ((unsigned int)a10 > (unsigned int)0x0) {
        t2 = ((((int)stk + 4) + 0x18) + 0x4);
        t3 = 0x0;
        t4 = 0xC2B8CCC;
        t5 = 0x0;
        for (;;) {
            t6 = *(int *)(((((int)stk + 4) + 0x18) + (t5 << 2)));
            if ((t6 & 31) != 0) {
                t3 = t5;
                t3 = (t3 << 2);
                t3 = (t3 + (((int)stk + 4) + 0x18));
                t2 = 0xFFFFFFE0;
                *(unsigned int *)(((int)stk + 4)) = t3;
                t7 = *(int *)((t3 + 0x0));
                t4 = t7;
                t4 = (t4 + 0x1F);
                t4 = (t4 & t2);
                *(unsigned int *)((t3 + 0x0)) = t4;
            }
            t3 = t5;
            t3 = (t3 << 2);
            t4 = t5;
            t3 = (t3 + t4);
            t3 = (t3 << 2);
            t4 = 0xC2EA9C4;
            t3 = (t3 + 0xC2B8CCC);
            *(unsigned int *)(((int)stk + 4)) = t3;
            t10 = *(int *)((t4 + 0x0));
            if (t10 == 1) {
                t2 = 0xC2EAAA0;
                t11 = *(int *)((t2 + 0x0));
                if (t11 == 32) {
                    t12 = *(int *)(((int)stk + 4));
                    t3 = t12;
                    *(unsigned int *)((t3 + 0x0)) = 0x10000000;
                    t20 = 0x0;
                } else {
                    t3 = 0x0;
                    if ((unsigned int)a4 > (unsigned int)t3) {
                        t13 = *(int *)(((((int)stk + 4) + 0x18) + (t5 << 2)));
                        t4 = t13;
                        t14 = *(int *)(((int)stk + 4));
                        t2 = t14;
                        t4 = (t4 + 0x0);
                        *(unsigned int *)((t2 + 0x0)) = t4;
                        t17 = (((0x0 + a4) + 0x17) & 0xFFFFFFF8);
                    } else {
                        t15 = *(int *)(((int)stk + 4));
                        t2 = t15;
                        *(unsigned int *)((t2 + 0x0)) = 0x0;
                        t17 = 0x0;
                    }
                    t20 = t17;
                }
                t29 = t20;
            } else {
                t3 = 0x0;
                if ((unsigned int)a4 > (unsigned int)t3) {
                    t22 = *(int *)(((((int)stk + 4) + 0x18) + (t5 << 2)));
                    t4 = t22;
                    t23 = *(int *)(((int)stk + 4));
                    t2 = t23;
                    t4 = (t4 + 0x0);
                    *(unsigned int *)((t2 + 0x0)) = t4;
                    t26 = (((0x0 + a4) + 0x17) & 0xFFFFFFF8);
                } else {
                    t24 = *(int *)(((int)stk + 4));
                    t2 = t24;
                    *(unsigned int *)((t2 + 0x0)) = 0x0;
                    t26 = 0x0;
                }
                t29 = t26;
            }
            t4 = t5;
            t4 = (t4 << 2);
            t3 = t5;
            t4 = (t4 + t3);
            t4 = (t4 << 2);
            t3 = 0xC2EA9C4;
            t4 = (t4 + 0xC2B8CCC);
            *(unsigned int *)(((int)stk + 4)) = t4;
            t31 = *(int *)((t3 + 0x0));
            if (t31 == 1) {
                t2 = 0xC2EAAA0;
                t32 = *(int *)((t2 + 0x0));
                if (t32 == 33) {
                    t33 = *(int *)(((int)stk + 4));
                    t3 = t33;
                    *(unsigned int *)((t3 + 0x4)) = 0x10000000;
                    t41 = t29;
                } else {
                    t3 = 0x0;
                    if ((unsigned int)a5 > (unsigned int)t3) {
                        t34 = *(int *)(((((int)stk + 4) + 0x18) + (t5 << 2)));
                        t4 = t34;
                        t35 = *(int *)(((int)stk + 4));
                        t2 = t35;
                        t4 = (t4 + (t29 << 2));
                        *(unsigned int *)((t2 + 0x4)) = t4;
                        t38 = (((t29 + a5) + 0x17) & 0xFFFFFFF8);
                    } else {
                        t36 = *(int *)(((int)stk + 4));
                        t2 = t36;
                        *(unsigned int *)((t2 + 0x4)) = 0x0;
                        t38 = t29;
                    }
                    t41 = t38;
                }
                t50 = t41;
            } else {
                t3 = 0x0;
                if ((unsigned int)a5 > (unsigned int)t3) {
                    t43 = *(int *)(((((int)stk + 4) + 0x18) + (t5 << 2)));
                    t4 = t43;
                    t44 = *(int *)(((int)stk + 4));
                    t2 = t44;
                    t4 = (t4 + (t29 << 2));
                    *(unsigned int *)((t2 + 0x4)) = t4;
                    t47 = (((t29 + a5) + 0x17) & 0xFFFFFFF8);
                } else {
                    t45 = *(int *)(((int)stk + 4));
                    t2 = t45;
                    *(unsigned int *)((t2 + 0x4)) = 0x0;
                    t47 = t29;
                }
                t50 = t47;
            }
            t4 = t5;
            t4 = (t4 << 2);
            t3 = t5;
            t4 = (t4 + t3);
            t4 = (t4 << 2);
            t3 = 0xC2EA9C4;
            t4 = (t4 + 0xC2B8CCC);
            *(unsigned int *)(((int)stk + 4)) = t4;
            t52 = *(int *)((t3 + 0x0));
            if (t52 == 1) {
                t2 = 0xC2EAAA0;
                t53 = *(int *)((t2 + 0x0));
                if (t53 == 34) {
                    t54 = *(int *)(((int)stk + 4));
                    t3 = t54;
                    *(unsigned int *)((t3 + 0x8)) = 0x10000000;
                    t62 = t50;
                } else {
                    t3 = 0x0;
                    if ((unsigned int)a6 > (unsigned int)t3) {
                        t55 = *(int *)(((((int)stk + 4) + 0x18) + (t5 << 2)));
                        t4 = t55;
                        t56 = *(int *)(((int)stk + 4));
                        t2 = t56;
                        t4 = (t4 + (t50 << 2));
                        *(unsigned int *)((t2 + 0x8)) = t4;
                        t59 = (((t50 + a6) + 0x17) & 0xFFFFFFF8);
                    } else {
                        t57 = *(int *)(((int)stk + 4));
                        t2 = t57;
                        *(unsigned int *)((t2 + 0x8)) = 0x0;
                        t59 = t50;
                    }
                    t62 = t59;
                }
                t71 = t62;
            } else {
                t3 = 0x0;
                if ((unsigned int)a6 > (unsigned int)t3) {
                    t64 = *(int *)(((((int)stk + 4) + 0x18) + (t5 << 2)));
                    t4 = t64;
                    t65 = *(int *)(((int)stk + 4));
                    t2 = t65;
                    t4 = (t4 + (t50 << 2));
                    *(unsigned int *)((t2 + 0x8)) = t4;
                    t68 = (((t50 + a6) + 0x17) & 0xFFFFFFF8);
                } else {
                    t66 = *(int *)(((int)stk + 4));
                    t2 = t66;
                    *(unsigned int *)((t2 + 0x8)) = 0x0;
                    t68 = t50;
                }
                t71 = t68;
            }
            t4 = t5;
            t4 = (t4 << 2);
            t3 = t5;
            t4 = (t4 + t3);
            t4 = (t4 << 2);
            t3 = 0xC2EA9C4;
            t4 = (t4 + 0xC2B8CCC);
            *(unsigned int *)(((int)stk + 4)) = t4;
            t73 = *(int *)((t3 + 0x0));
            if (t73 == 1) {
                t2 = 0xC2EAAA0;
                t74 = *(int *)((t2 + 0x0));
                if (t74 == 35) {
                    t75 = *(int *)(((int)stk + 4));
                    t3 = t75;
                    *(unsigned int *)((t3 + 0xC)) = 0x10000000;
                    t83 = t71;
                } else {
                    t3 = 0x0;
                    if ((unsigned int)a7 > (unsigned int)t3) {
                        t76 = *(int *)(((((int)stk + 4) + 0x18) + (t5 << 2)));
                        t4 = t76;
                        t77 = *(int *)(((int)stk + 4));
                        t2 = t77;
                        t4 = (t4 + (t71 << 2));
                        *(unsigned int *)((t2 + 0xC)) = t4;
                        t80 = (((t71 + a7) + 0x17) & 0xFFFFFFF8);
                    } else {
                        t78 = *(int *)(((int)stk + 4));
                        t2 = t78;
                        *(unsigned int *)((t2 + 0xC)) = 0x0;
                        t80 = t71;
                    }
                    t83 = t80;
                }
                t92 = t83;
            } else {
                t3 = 0x0;
                if ((unsigned int)a7 > (unsigned int)t3) {
                    t85 = *(int *)(((((int)stk + 4) + 0x18) + (t5 << 2)));
                    t4 = t85;
                    t86 = *(int *)(((int)stk + 4));
                    t2 = t86;
                    t4 = (t4 + (t71 << 2));
                    *(unsigned int *)((t2 + 0xC)) = t4;
                    t89 = (((t71 + a7) + 0x17) & 0xFFFFFFF8);
                } else {
                    t87 = *(int *)(((int)stk + 4));
                    t2 = t87;
                    *(unsigned int *)((t2 + 0xC)) = 0x0;
                    t89 = t71;
                }
                t92 = t89;
            }
            t4 = 0xC2EA9C4;
            t94 = *(int *)((t4 + 0x0));
            if (t94 == 1) {
                t2 = 0xC2EAAA0;
                t95 = *(int *)((t2 + 0x0));
                if (t95 == 36) {
                    t4 = t5;
                    t4 = (t4 << 2);
                    t3 = t5;
                    t4 = (t4 + t3);
                    t4 = (t4 << 2);
                    t4 = (t4 + 0xC2B8CCC);
                    *(unsigned int *)((t4 + 0x10)) = 0x10000000;
                    t104 = t92;
                } else {
                    t4 = a8;
                    t3 = 0x0;
                    if ((unsigned int)t4 > (unsigned int)t3) {
                        t96 = *(int *)(((int)stk + 20));
                        t2 = t92;
                        t97 = *(int *)(((int)stk + 8));
                        t4 = t97;
                        t2 = (t2 << 2);
                        t98 = *(int *)((t96 + 0x0));
                        t2 = (t2 + t98);
                        *(unsigned int *)((t4 + 0x10)) = t2;
                        t4 = a8;
                        t101 = (((t92 + t4) + 0x17) & 0xFFFFFFF8);
                    } else {
                        t99 = *(int *)(((int)stk + 16));
                        t4 = t99;
                        *(unsigned int *)((t4 + 0x10)) = 0x0;
                        t101 = t92;
                    }
                    t104 = t101;
                }
                t114 = t104;
            } else {
                t4 = a8;
                t3 = 0x0;
                if ((unsigned int)t4 > (unsigned int)t3) {
                    t106 = *(int *)(((int)stk + 20));
                    t2 = t92;
                    t107 = *(int *)(((int)stk + 8));
                    t4 = t107;
                    t2 = (t2 << 2);
                    t108 = *(int *)((t106 + 0x0));
                    t2 = (t2 + t108);
                    *(unsigned int *)((t4 + 0x10)) = t2;
                    t4 = a8;
                    t111 = (((t92 + t4) + 0x17) & 0xFFFFFFF8);
                } else {
                    t109 = *(int *)(((int)stk + 16));
                    t4 = t109;
                    *(unsigned int *)((t4 + 0x10)) = 0x0;
                    t111 = t92;
                }
                t114 = t111;
            }
            t116 = *(int *)(((int)stk + 12));
            t3 = t116;
            t117 = *(int *)(((int)stk + 24));
            t4 = t117;
            t118 = *(int *)((t3 + 0x0));
            t2 = t118;
            t5 = (t5 + 0x1);
            *(unsigned int *)((t4 + 0x0)) = ((t114 << 2) + t2);
            t119 = *(int *)(((int)stk + 16));
            t4 = t119;
            t4 = (t4 + 0x14);
            *(unsigned int *)(((int)stk + 16)) = t4;
            t120 = *(int *)(((int)stk + 20));
            t3 = t120;
            t3 = (t3 + 0x4);
            *(unsigned int *)(((int)stk + 20)) = t3;
            t121 = *(int *)(((int)stk + 8));
            t2 = t121;
            t2 = (t2 + 0x14);
            *(unsigned int *)(((int)stk + 8)) = t2;
            t4 = a10;
            if ((unsigned int)t5 < (unsigned int)t4) continue;
            break;
        }
    }
    return 0x0;
}

int Chat_TellDestination(int a4)
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
    int t53;
    int t54;
    int t60;
    int t61;
    int t62;
    int t68;
    int t69;
    int t70;
    int t76;
    int t77;
    int t78;
    int t84;
    int t85;
    int t86;
    int t92;
    int t93;
    int t94;
    int t100;
    int t101;
    int t102;
    int t108;
    int t109;
    int t110;
    int t116;
    int t117;
    int t118;
    int t124;
    int t125;
    int t126;
    int t132;
    int t133;
    int t134;
    int t140;
    int t141;
    int t142;
    int t148;
    int t149;
    int t150;
    int t156;
    int t157;
    int t158;
    int t164;
    int t165;
    int t166;
    int t172;
    int t173;
    int t174;
    int t203;
    int t204;
    int t205;
    int t206;
    int t207;
    int t208;
    int t210;
    int t213;
    int stk[42] = {0};

    t0 = *(int *)0xC0D3C58;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8C)) = t0;
    t1 = *(int *)0xC0D3C54;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x88)) = t1;
    t2 = *(int *)0xC0D3C50;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x84)) = t2;
    t3 = *(int *)0xC0D3C4C;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x80)) = t3;
    t4 = *(int *)0xC0D3C48;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x7C)) = t4;
    t5 = *(int *)0xC0D3C44;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x78)) = t5;
    t6 = *(int *)0xC0D3C40;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x74)) = t6;
    t7 = *(int *)0xC0D3C3C;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x70)) = t7;
    t8 = *(int *)0xC0D3C38;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x6C)) = t8;
    t9 = *(int *)0xC0D3C34;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x68)) = t9;
    t10 = *(int *)0xC0D3C30;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x64)) = t10;
    t11 = *(int *)0xC0D3C2C;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x60)) = t11;
    t12 = *(int *)0xC0D3C28;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x5C)) = t12;
    t13 = *(int *)0xC0D3C24;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x58)) = t13;
    t14 = *(int *)0xC0D3C20;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x54)) = t14;
    t15 = *(int *)0xC0D3C1C;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x50)) = t15;
    t16 = *(int *)0xC0D3C18;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4C)) = t16;
    t17 = *(int *)0xC0D3C14;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x48)) = t17;
    t18 = *(int *)0xC0D3C10;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x44)) = t18;
    t19 = *(int *)0xC0D3C0C;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x40)) = t19;
    t20 = *(int *)0xC0D3C08;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x3C)) = t20;
    t21 = *(int *)0xC0D3C04;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x38)) = t21;
    t22 = *(int *)0xC0D3C00;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x34)) = t22;
    t23 = *(int *)0xC0D3BFC;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x30)) = t23;
    t24 = *(int *)0xC0D3BF8;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x2C)) = t24;
    t25 = *(int *)0xC0D3BF4;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x28)) = t25;
    t26 = *(int *)0xC0D3BF0;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x24)) = t26;
    t27 = *(int *)0xC0D3BEC;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x20)) = t27;
    t28 = *(int *)0xC0D3BE8;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x1C)) = t28;
    t29 = *(int *)0xC0D3BE4;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x18)) = t29;
    t30 = *(int *)0xC0D3BE0;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x14)) = t30;
    t31 = *(int *)0xC0D3BDC;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x10)) = t31;
    t32 = *(int *)0xC0D3BD8;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0xC)) = t32;
    t33 = *(int *)0xC0D3BD4;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = t33;
    t34 = *(int *)0xC0D3BD0;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = t34;
    t35 = *(int *)0xC0D3BCC;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t35;
    t36 = *(int *)0xC1EE210;
    if (t36 == 0) {
        t37 = *(int *)((a4 + 0x140));
        t38 = *(int *)(((0x148 + a4) + 0x0));
        t39 = (int)(((unsigned int)t38 >> 29) & 0x7);
        t40 = *(int *)((0xC0D3088 + ((t39 + ((t37 << 2) + t37)) << 2)));
        *(unsigned int *)0xC13EC08 = t40;
    } else {
        if (t36 == 2) {
            t41 = *(int *)0xC13EB98;
            t42 = *(int *)(((0x148 + a4) + 0x0));
            t43 = (int)(((unsigned int)t42 >> 29) & 0x7);
            t44 = *(int *)((0xC0D331C + ((t43 + ((t41 << 2) + t41)) << 2)));
            *(unsigned int *)0xC13EC08 = t44;
            t45 = *(int *)0xC13EB98;
            t46 = (int)((int)(t45 + 0x1) % (int)0x5);
            *(unsigned int *)0xC13EB98 = t46;
        } else {
            if (t36 != 1) {
            } else {
                t47 = *(int *)((a4 + 0x140));
                if (t47 != 1) {
                    if (t47 != 2) {
                        if (t47 != 3) {
                            if (t47 != 4) {
                                if (t47 != 5) {
                                    if (t47 != 13) {
                                        if (t47 != 15) {
                                            if (t47 != 16) {
                                                if (t47 != 17) {
                                                    if (t47 != 18) {
                                                        if (t47 != 22) {
                                                            if (t47 != 23) {
                                                                if (t47 != 24) {
                                                                    if (t47 != 25) {
                                                                        if (t47 != 26) {
                                                                            if (t47 != 27) {
                                                                                t48 = *(int *)0xC13EB98;
                                                                                t49 = *(int *)(((0x148 + a4) + 0x0));
                                                                                t50 = (int)(((unsigned int)t49 >> 29) & 0x7);
                                                                                t51 = *(int *)((0xC0D331C + ((t50 + ((t48 << 2) + t48)) << 2)));
                                                                                *(unsigned int *)0xC13EC08 = t51;
                                                                            } else {
                                                                                t52 = *(int *)(((0x148 + a4) + 0x0));
                                                                                t53 = (int)(((unsigned int)t52 >> 29) & 0x7);
                                                                                t54 = *(int *)((0xC0D3088 + ((t53 + 0x55) << 2)));
                                                                                *(unsigned int *)0xC13EC08 = t54;
                                                                            }
                                                                        } else {
                                                                            t60 = *(int *)(((0x148 + a4) + 0x0));
                                                                            t61 = (int)(((unsigned int)t60 >> 29) & 0x7);
                                                                            t62 = *(int *)((0xC0D3088 + ((t61 + 0x55) << 2)));
                                                                            *(unsigned int *)0xC13EC08 = t62;
                                                                        }
                                                                    } else {
                                                                        t68 = *(int *)(((0x148 + a4) + 0x0));
                                                                        t69 = (int)(((unsigned int)t68 >> 29) & 0x7);
                                                                        t70 = *(int *)((0xC0D3088 + ((t69 + 0x55) << 2)));
                                                                        *(unsigned int *)0xC13EC08 = t70;
                                                                    }
                                                                } else {
                                                                    t76 = *(int *)(((0x148 + a4) + 0x0));
                                                                    t77 = (int)(((unsigned int)t76 >> 29) & 0x7);
                                                                    t78 = *(int *)((0xC0D3088 + ((t77 + 0x55) << 2)));
                                                                    *(unsigned int *)0xC13EC08 = t78;
                                                                }
                                                            } else {
                                                                t84 = *(int *)(((0x148 + a4) + 0x0));
                                                                t85 = (int)(((unsigned int)t84 >> 29) & 0x7);
                                                                t86 = *(int *)((0xC0D3088 + ((t85 + 0x55) << 2)));
                                                                *(unsigned int *)0xC13EC08 = t86;
                                                            }
                                                        } else {
                                                            t92 = *(int *)(((0x148 + a4) + 0x0));
                                                            t93 = (int)(((unsigned int)t92 >> 29) & 0x7);
                                                            t94 = *(int *)((0xC0D3088 + ((t93 + 0x82) << 2)));
                                                            *(unsigned int *)0xC13EC08 = t94;
                                                        }
                                                    } else {
                                                        t100 = *(int *)(((0x148 + a4) + 0x0));
                                                        t101 = (int)(((unsigned int)t100 >> 29) & 0x7);
                                                        t102 = *(int *)((0xC0D3088 + ((t101 + 0x96) << 2)));
                                                        *(unsigned int *)0xC13EC08 = t102;
                                                    }
                                                } else {
                                                    t108 = *(int *)(((0x148 + a4) + 0x0));
                                                    t109 = (int)(((unsigned int)t108 >> 29) & 0x7);
                                                    t110 = *(int *)((0xC0D3088 + ((t109 + 0x2D) << 2)));
                                                    *(unsigned int *)0xC13EC08 = t110;
                                                }
                                            } else {
                                                t116 = *(int *)(((0x148 + a4) + 0x0));
                                                t117 = (int)(((unsigned int)t116 >> 29) & 0x7);
                                                t118 = *(int *)((0xC0D3088 + ((t117 + 0x23) << 2)));
                                                *(unsigned int *)0xC13EC08 = t118;
                                            }
                                        } else {
                                            t124 = *(int *)(((0x148 + a4) + 0x0));
                                            t125 = (int)(((unsigned int)t124 >> 29) & 0x7);
                                            t126 = *(int *)((0xC0D3088 + ((t125 + 0x6E) << 2)));
                                            *(unsigned int *)0xC13EC08 = t126;
                                        }
                                    } else {
                                        t132 = *(int *)(((0x148 + a4) + 0x0));
                                        t133 = (int)(((unsigned int)t132 >> 29) & 0x7);
                                        t134 = *(int *)((0xC0D3088 + ((t133 + 0x5F) << 2)));
                                        *(unsigned int *)0xC13EC08 = t134;
                                    }
                                } else {
                                    t140 = *(int *)(((0x148 + a4) + 0x0));
                                    t141 = (int)(((unsigned int)t140 >> 29) & 0x7);
                                    t142 = *(int *)((0xC0D3088 + ((t141 + 0x46) << 2)));
                                    *(unsigned int *)0xC13EC08 = t142;
                                }
                            } else {
                                t148 = *(int *)(((0x148 + a4) + 0x0));
                                t149 = (int)(((unsigned int)t148 >> 29) & 0x7);
                                t150 = *(int *)((0xC0D3088 + ((t149 + 0x41) << 2)));
                                *(unsigned int *)0xC13EC08 = t150;
                            }
                        } else {
                            t156 = *(int *)(((0x148 + a4) + 0x0));
                            t157 = (int)(((unsigned int)t156 >> 29) & 0x7);
                            t158 = *(int *)((0xC0D3088 + ((t157 + 0x3C) << 2)));
                            *(unsigned int *)0xC13EC08 = t158;
                        }
                    } else {
                        t164 = *(int *)(((0x148 + a4) + 0x0));
                        t165 = (int)(((unsigned int)t164 >> 29) & 0x7);
                        t166 = *(int *)((0xC0D3088 + ((t165 + 0x37) << 2)));
                        *(unsigned int *)0xC13EC08 = t166;
                    }
                } else {
                    t172 = *(int *)(((0x148 + a4) + 0x0));
                    t173 = (int)(((unsigned int)t172 >> 29) & 0x7);
                    t174 = *(int *)((0xC0D3088 + ((t173 + 0x28) << 2)));
                    *(unsigned int *)0xC13EC08 = t174;
                }
            }
        }
    }
    *(unsigned int *)0xC13EC0C = 0x2;
    *(unsigned int *)0xC13EC10 = 0x7FFFFFFF;
    *(unsigned int *)(((int)stk + 4)) = 0xC13EC20;
    t203 = *(signed char *)0xC2AD000;
    t204 = *(int *)0xC13EB90;
    t205 = (int)((int)t204 % (int)0x3);
    t206 = *(int *)((((unsigned char)(((((((t203 + 0xFF) << 1) + (t203 + 0xFF)) + t205) << 1) + ((((t203 + 0xFF) << 1) + (t203 + 0xFF)) + t205)) << 2) + (((int)stk + 4) + 0x4)) + 0x8));
    *(unsigned int *)0xC13EC28 = t206;
    t207 = *(int *)((((unsigned char)(((((((t203 + 0xFF) << 1) + (t203 + 0xFF)) + t205) << 1) + ((((t203 + 0xFF) << 1) + (t203 + 0xFF)) + t205)) << 2) + (((int)stk + 4) + 0x4)) + 0x4));
    *(unsigned int *)0xC13EC24 = t207;
    t208 = *(int *)((((unsigned char)(((((((t203 + 0xFF) << 1) + (t203 + 0xFF)) + t205) << 1) + ((((t203 + 0xFF) << 1) + (t203 + 0xFF)) + t205)) << 2) + (((int)stk + 4) + 0x4)) + 0x0));
    *(unsigned int *)0xC13EC20 = t208;
    Voice_ShutUp(0x1);
    t210 = *(int *)(((int)stk + 4));
    Voice_Request(t210, 0x1, 0x7F, 0x0);
    Voice_ShutUp(0x2);
    t213 = Voice_Request(0xC13EC08, 0x2, 0x7F, 0x0);
    return t213;
}
