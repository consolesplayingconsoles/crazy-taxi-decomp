/* Straight-line functions with calls and guards (batch gen_ff): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c087bb0(int a4, int a5, int a6, int a7);

int FUN_0c087bb0(int a4, int a5, int a6, int a7)
{
    int t10;
    int t8;
    int t6;
    int t4;
    int t2;
    int t14;
    int t12;
    int t16;
    int t20;
    int t39;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t36;
    int t65;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t62;
    int t73;
    int t103;
    int t104;
    int t106;
    int t78;
    int t80;
    int t74;
    int t76;
    int t83;
    int t92;
    int t94;
    int t152;
    int t155;
    int t108;
    int t125;
    int t128;
    int t109;
    int t110;
    int t112;
    int t130;
    int t131;
    int t133;
    int t157;
    int t174;
    int t177;
    int t158;
    int t159;
    int t161;
    int t179;
    int t180;
    int t182;
    int t206;
    int t207;
    int t226;
    int t227;
    int t231;
    int t232;
    int t233;
    int t234;
    int t235;
    int t236;
    int t237;
    int t249;
    int t250;
    int t258;
    int t259;
    int t260;
    int t261;
    int t262;
    int t263;
    int t280;
    int t281;
    int t282;
    int t283;
    int t284;
    int t285;
    int t302;
    int t307;
    int t310;
    int t303;
    int t304;
    int t305;
    int t306;
    int t0;
    int t18;
    int t70;
    int t44;
    int t97;
    int t98;
    int t100;
    int t87;
    int t88;
    int t90;
    int t201;
    int t204;
    int t146;
    int t149;
    int t119;
    int t122;
    int t114;
    int t116;
    int t140;
    int t143;
    int t135;
    int t137;
    int t195;
    int t198;
    int t168;
    int t171;
    int t163;
    int t165;
    int t189;
    int t192;
    int t184;
    int t186;
    int t228;
    int t297;
    int t275;
    int t253;
    int t244;
    int t270;
    int t292;
    int stk[13] = {0};

    *(unsigned char *)((a5 + 0x0)) = 0x0;
    t10 = 0x10;
    if (a6 != 88) {
        t8 = 0xA;
        if (a6 != 100) {
            t6 = 0xA;
            if (a6 != 105) {
                t4 = 0x8;
                if (a6 != 111) {
                    t2 = 0xA;
                    if (a6 != 117) {
                        if (a6 != 120) {
                        } else {
                            t0 = 0x10;
                        }
                        t2 = t0;
                    }
                    t4 = t2;
                }
                t6 = t4;
            }
            t8 = t6;
        }
        t10 = t8;
    }
    if (a6 != 100) {
        t14 = a4;
        if (a6 == 105) {
            t12 = a4;
            if ((int)a4 < 0) {
                t12 = (-a4);
            }
            t14 = t12;
        }
        t18 = t14;
    } else {
        t16 = a4;
        if ((int)a4 < 0) {
            t16 = (-a4);
        }
        t18 = t16;
    }
    if (t18 == 0) {
        t20 = *(int *)((a7 + 0x8));
        if (t20 != 0) {
            *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x0)) = 0x30;
            t44 = 0x1;
        } else {
            t39 = 0x0;
            if ((unsigned int)t18 > (unsigned int)0x0) {
                t21 = t18;
                t22 = 0x0;
                for (;;) {
                    *(unsigned int *)(((int)stk + 4)) = (t22 + (((int)stk + 4) + 0x4));
                    t23 = (int)((unsigned int)t21 % (unsigned int)t10);
                    *(unsigned char *)(((t22 + (((int)stk + 4) + 0x4)) + 0x0)) = t23;
                    t24 = *(int *)(((int)stk + 4));
                    t25 = *(signed char *)((t24 + 0x0));
                    if ((int)t25 <= (int)0x9) {
                        t26 = *(signed char *)(((((int)stk + 4) + 0x4) + t22));
                        *(unsigned char *)(((((int)stk + 4) + 0x4) + t22)) = (t26 + 0x30);
                    } else {
                        *(unsigned int *)(((int)stk + 4)) = (t22 + (((int)stk + 4) + 0x4));
                        if (a6 == 120) {
                            t27 = *(signed char *)(((t22 + (((int)stk + 4) + 0x4)) + 0x0));
                            *(unsigned char *)(((t22 + (((int)stk + 4) + 0x4)) + 0x0)) = (t27 + 0x57);
                        } else {
                            t28 = *(signed char *)(((t22 + (((int)stk + 4) + 0x4)) + 0x0));
                            *(unsigned char *)(((t22 + (((int)stk + 4) + 0x4)) + 0x0)) = (t28 + 0x37);
                        }
                    }
                    t36 = (int)((unsigned int)t21 / (unsigned int)t10);
                    t21 = t36;
                    t22 = (t22 + 0x1);
                    if ((unsigned int)t21 <= (unsigned int)0x0) {
                        break;
                    }
                }
                t39 = t22;
            }
            t44 = t39;
        }
        t70 = t44;
    } else {
        t65 = 0x0;
        if ((unsigned int)t18 > (unsigned int)0x0) {
            t47 = t18;
            t48 = 0x0;
            for (;;) {
                *(unsigned int *)(((int)stk + 4)) = (t48 + (((int)stk + 4) + 0x4));
                t49 = (int)((unsigned int)t47 % (unsigned int)t10);
                *(unsigned char *)(((t48 + (((int)stk + 4) + 0x4)) + 0x0)) = t49;
                t50 = *(int *)(((int)stk + 4));
                t51 = *(signed char *)((t50 + 0x0));
                if ((int)t51 <= (int)0x9) {
                    t52 = *(signed char *)(((((int)stk + 4) + 0x4) + t48));
                    *(unsigned char *)(((((int)stk + 4) + 0x4) + t48)) = (t52 + 0x30);
                } else {
                    *(unsigned int *)(((int)stk + 4)) = (t48 + (((int)stk + 4) + 0x4));
                    if (a6 == 120) {
                        t53 = *(signed char *)(((t48 + (((int)stk + 4) + 0x4)) + 0x0));
                        *(unsigned char *)(((t48 + (((int)stk + 4) + 0x4)) + 0x0)) = (t53 + 0x57);
                    } else {
                        t54 = *(signed char *)(((t48 + (((int)stk + 4) + 0x4)) + 0x0));
                        *(unsigned char *)(((t48 + (((int)stk + 4) + 0x4)) + 0x0)) = (t54 + 0x37);
                    }
                }
                t62 = (int)((unsigned int)t47 / (unsigned int)t10);
                t47 = t62;
                t48 = (t48 + 0x1);
                if ((unsigned int)t47 <= (unsigned int)0x0) {
                    break;
                }
            }
            t65 = t48;
        }
        t70 = t65;
    }
    t73 = *(signed char *)((a7 + 0x0));
    t103 = 0x0;
    t104 = t70;
    t106 = a5;
    if ((t73 & 4) != 0) {
        if (a6 != 88) {
            if (a6 != 111) {
                t78 = 0x0;
                t80 = a5;
                if (a6 != 120) {
                } else {
                    t74 = 0x0;
                    t76 = a5;
                    if (a4 != 0) {
                        *(unsigned char *)((a5 + 0x0)) = 0x30;
                        *(unsigned char *)(((a5 + 0x1) + 0x0)) = a6;
                        t74 = 0x2;
                        t76 = ((a5 + 0x1) + 0x1);
                    }
                    t78 = t74;
                    t80 = t76;
                }
                t87 = t78;
                t88 = t70;
                t90 = t80;
            } else {
                t83 = t70;
                if (a4 != 0) {
                    *(unsigned char *)(((((int)stk + 4) + 0x4) + t70)) = 0x30;
                    t83 = (t70 + 0x1);
                }
                t87 = 0x0;
                t88 = t83;
                t90 = a5;
            }
            t97 = t87;
            t98 = t88;
            t100 = t90;
        } else {
            t92 = 0x0;
            t94 = a5;
            if (a4 != 0) {
                *(unsigned char *)((a5 + 0x0)) = 0x30;
                *(unsigned char *)(((a5 + 0x1) + 0x0)) = a6;
                t92 = 0x2;
                t94 = ((a5 + 0x1) + 0x1);
            }
            t97 = t92;
            t98 = t70;
            t100 = t94;
        }
        t103 = t97;
        t104 = t98;
        t106 = t100;
    }
    *(unsigned int *)(((int)stk + 4)) = t104;
    if (a6 != 100) {
        t152 = (t103 + t104);
        t155 = t106;
        if (a6 == 105) {
            t108 = *(int *)((a7 + 0x8));
            if (t108 == 0) {
                t125 = (t103 + t104);
                t128 = t106;
                if (a4 != 0) {
                    if ((int)a4 >= 0) {
                        t109 = *(signed char *)((a7 + 0x0));
                        if ((t109 & 8) != 0) {
                            *(unsigned char *)((t106 + 0x0)) = 0x2B;
                            t114 = ((t103 + t104) + 0x1);
                            t116 = (t106 + 0x1);
                        } else {
                            t110 = (t103 + t104);
                            t112 = t106;
                            if ((t109 & 16) != 0) {
                                *(unsigned char *)((t106 + 0x0)) = 0x20;
                                t110 = ((t103 + t104) + 0x1);
                                t112 = (t106 + 0x1);
                            }
                            t114 = t110;
                            t116 = t112;
                        }
                        t119 = t114;
                        t122 = t116;
                    } else {
                        *(unsigned char *)((t106 + 0x0)) = 0x2D;
                        t119 = ((t103 + t104) + 0x1);
                        t122 = (t106 + 0x1);
                    }
                    t125 = t119;
                    t128 = t122;
                }
                t146 = t125;
                t149 = t128;
            } else {
                if ((int)a4 >= 0) {
                    t130 = *(signed char *)((a7 + 0x0));
                    if ((t130 & 8) != 0) {
                        *(unsigned char *)((t106 + 0x0)) = 0x2B;
                        t135 = ((t103 + t104) + 0x1);
                        t137 = (t106 + 0x1);
                    } else {
                        t131 = (t103 + t104);
                        t133 = t106;
                        if ((t130 & 16) != 0) {
                            *(unsigned char *)((t106 + 0x0)) = 0x20;
                            t131 = ((t103 + t104) + 0x1);
                            t133 = (t106 + 0x1);
                        }
                        t135 = t131;
                        t137 = t133;
                    }
                    t140 = t135;
                    t143 = t137;
                } else {
                    *(unsigned char *)((t106 + 0x0)) = 0x2D;
                    t140 = ((t103 + t104) + 0x1);
                    t143 = (t106 + 0x1);
                }
                t146 = t140;
                t149 = t143;
            }
            t152 = t146;
            t155 = t149;
        }
        t201 = t152;
        t204 = t155;
    } else {
        t157 = *(int *)((a7 + 0x8));
        if (t157 == 0) {
            t174 = (t103 + t104);
            t177 = t106;
            if (a4 != 0) {
                if ((int)a4 >= 0) {
                    t158 = *(signed char *)((a7 + 0x0));
                    if ((t158 & 8) != 0) {
                        *(unsigned char *)((t106 + 0x0)) = 0x2B;
                        t163 = ((t103 + t104) + 0x1);
                        t165 = (t106 + 0x1);
                    } else {
                        t159 = (t103 + t104);
                        t161 = t106;
                        if ((t158 & 16) != 0) {
                            *(unsigned char *)((t106 + 0x0)) = 0x20;
                            t159 = ((t103 + t104) + 0x1);
                            t161 = (t106 + 0x1);
                        }
                        t163 = t159;
                        t165 = t161;
                    }
                    t168 = t163;
                    t171 = t165;
                } else {
                    *(unsigned char *)((t106 + 0x0)) = 0x2D;
                    t168 = ((t103 + t104) + 0x1);
                    t171 = (t106 + 0x1);
                }
                t174 = t168;
                t177 = t171;
            }
            t195 = t174;
            t198 = t177;
        } else {
            if ((int)a4 >= 0) {
                t179 = *(signed char *)((a7 + 0x0));
                if ((t179 & 8) != 0) {
                    *(unsigned char *)((t106 + 0x0)) = 0x2B;
                    t184 = ((t103 + t104) + 0x1);
                    t186 = (t106 + 0x1);
                } else {
                    t180 = (t103 + t104);
                    t182 = t106;
                    if ((t179 & 16) != 0) {
                        *(unsigned char *)((t106 + 0x0)) = 0x20;
                        t180 = ((t103 + t104) + 0x1);
                        t182 = (t106 + 0x1);
                    }
                    t184 = t180;
                    t186 = t182;
                }
                t189 = t184;
                t192 = t186;
            } else {
                *(unsigned char *)((t106 + 0x0)) = 0x2D;
                t189 = ((t103 + t104) + 0x1);
                t192 = (t106 + 0x1);
            }
            t195 = t189;
            t198 = t192;
        }
        t201 = t195;
        t204 = t198;
    }
    t206 = *(signed char *)((a5 + 0x0));
    if (t206 != 43) {
        if (t206 != 45) {
            if (t206 == 32) {
                *(unsigned int *)((a7 + 0x14)) = (a5 + 0x1);
            } else {
                t207 = *(signed char *)((a7 + 0x0));
                if ((t207 & 4) != 0) {
                    if (a6 != 88) {
                        if (a6 != 111) {
                            if (a6 != 120) {
                            } else {
                                *(unsigned int *)((a7 + 0x14)) = (a5 + 0x2);
                            }
                        } else {
                            *(unsigned int *)((a7 + 0x14)) = (a5 + 0x1);
                        }
                    } else {
                        *(unsigned int *)((a7 + 0x14)) = (a5 + 0x2);
                    }
                } else {
                    *(unsigned int *)((a7 + 0x14)) = a5;
                }
            }
        } else {
            *(unsigned int *)((a7 + 0x14)) = (a5 + 0x1);
        }
    } else {
        *(unsigned int *)((a7 + 0x14)) = (a5 + 0x1);
    }
    t226 = *(int *)((a7 + 0x8));
    if ((int)t226 > (int)t201) {
        t227 = *(int *)((a7 + 0x8));
        *(unsigned int *)((a7 + 0x20)) = (t227 - t201);
        t228 = t227;
    } else {
        *(unsigned int *)((a7 + 0x20)) = 0x0;
        t228 = t201;
    }
    t231 = *(signed char *)((a5 + 0x0));
    if (t231 != 43) {
        if (t231 != 45) {
            if (t231 == 32) {
                t232 = *(int *)((a7 + 0x4));
                if ((int)t232 > (int)t228) {
                    t233 = *(signed char *)((a7 + 0x1));
                    if (t233 == 48) {
                        t234 = *(int *)((a7 + 0x4));
                        t235 = *(int *)((a7 + 0x20));
                        *(unsigned int *)((a7 + 0x20)) = (t235 + (t234 - t228));
                        *(unsigned int *)((a7 + 0x28)) = 0x0;
                    } else {
                        t236 = *(int *)((a7 + 0x4));
                        if ((int)t236 > (int)t228) {
                            t237 = *(int *)((a7 + 0x4));
                            *(unsigned int *)((a7 + 0x28)) = (t237 - t228);
                        } else {
                            *(unsigned int *)((a7 + 0x28)) = 0x0;
                        }
                    }
                    t244 = t233;
                } else {
                    *(unsigned int *)((a7 + 0x28)) = 0x0;
                    t244 = t231;
                }
                t253 = t244;
            } else {
                t249 = *(int *)((a7 + 0x4));
                if ((int)t249 > (int)t228) {
                    t250 = *(int *)((a7 + 0x4));
                    *(unsigned int *)((a7 + 0x28)) = (t250 - t228);
                } else {
                    *(unsigned int *)((a7 + 0x28)) = 0x0;
                }
                t253 = t231;
            }
            t275 = t253;
        } else {
            t258 = *(int *)((a7 + 0x4));
            if ((int)t258 > (int)t228) {
                t259 = *(signed char *)((a7 + 0x1));
                if (t259 == 48) {
                    t260 = *(int *)((a7 + 0x4));
                    t261 = *(int *)((a7 + 0x20));
                    *(unsigned int *)((a7 + 0x20)) = (t261 + (t260 - t228));
                    *(unsigned int *)((a7 + 0x28)) = 0x0;
                } else {
                    t262 = *(int *)((a7 + 0x4));
                    if ((int)t262 > (int)t228) {
                        t263 = *(int *)((a7 + 0x4));
                        *(unsigned int *)((a7 + 0x28)) = (t263 - t228);
                    } else {
                        *(unsigned int *)((a7 + 0x28)) = 0x0;
                    }
                }
                t270 = t259;
            } else {
                *(unsigned int *)((a7 + 0x28)) = 0x0;
                t270 = t231;
            }
            t275 = t270;
        }
        t297 = t275;
    } else {
        t280 = *(int *)((a7 + 0x4));
        if ((int)t280 > (int)t228) {
            t281 = *(signed char *)((a7 + 0x1));
            if (t281 == 48) {
                t282 = *(int *)((a7 + 0x4));
                t283 = *(int *)((a7 + 0x20));
                *(unsigned int *)((a7 + 0x20)) = (t283 + (t282 - t228));
                *(unsigned int *)((a7 + 0x28)) = 0x0;
            } else {
                t284 = *(int *)((a7 + 0x4));
                if ((int)t284 > (int)t228) {
                    t285 = *(int *)((a7 + 0x4));
                    *(unsigned int *)((a7 + 0x28)) = (t285 - t228);
                } else {
                    *(unsigned int *)((a7 + 0x28)) = 0x0;
                }
            }
            t292 = t281;
        } else {
            *(unsigned int *)((a7 + 0x28)) = 0x0;
            t292 = t231;
        }
        t297 = t292;
    }
    t302 = *(int *)(((int)stk + 4));
    t307 = t297;
    t310 = t204;
    if ((int)(t302 - 1) >= 0) {
        t303 = (t302 - 1);
        t304 = t204;
        for (;;) {
            t305 = *(signed char *)(((((int)stk + 4) + 0x4) + t303));
            t306 = t303;
            t303 = (t303 - 1);
            *(unsigned char *)((t304 + 0x0)) = t305;
            t304 = (t304 + 0x1);
            if ((int)t303 < 0) {
                break;
            }
        }
        t307 = t306;
        t310 = t304;
    }
    *(unsigned char *)((t310 + 0x0)) = 0x0;
    return t307;
}
