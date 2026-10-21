/* Straight-line functions with calls and guards (batch gen_ed): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02d918(void);
int FUN_0c031408(int);
int FUN_0c040cea(int);
int FUN_0c056e80(void);
int ResetFadeColor(void);
int Sound_Request(int, int);
int menuPutSprites(int, int, int, int);
int nlObjPutSetFadeColor(float, float, float);
int nlSprPut(int);
int pfColor(int, int, int, int);
float pfLength(int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFont(int);
int pfSetZ(float);
int pfSize(float, float);
int Put_TotalDrum(void);
int putLevelCTFontAssist(int a4, int a5, int a6, int a7, float f4);

int Put_TotalDrum(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t22;
    int t18;
    int t30;
    int t35;
    int t31;
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
    int t89;
    int t90;
    int t91;
    int t92;
    int t93;
    int t94;
    int t95;
    int t96;
    int t97;
    int t138;
    int t139;
    int t140;
    int t144;
    int t145;
    int t142;
    int t148;
    int t149;
    int t150;
    int t151;
    float u160;
    float u161;
    float u162;
    float u155;
    float u156;
    float u157;
    int t169;
    int t170;
    int t171;
    int t172;
    int t183;
    float u192;
    float u193;
    float u194;
    float u187;
    float u188;
    float u189;
    int t206;
    float u213;
    float u214;
    float u215;
    float u216;
    float u219;
    float u221;
    float u222;
    int t223;
    int t224;
    float u225;
    int t226;
    float u237;
    int t238;
    float u239;
    int t240;
    int t248;
    float u249;
    int t250;
    int t261;
    float u262;
    int t263;
    int t271;
    float u272;
    int t273;
    int t284;
    float u285;
    float u286;
    float u288;
    int t293;
    float u294;
    int t295;
    int t296;
    int t133;
    int t39;
    int t26;
    int t128;
    int t84;
    float u245;
    float u268;

    t0 = *(int *)0xC2A8E98;
    if (t0 == 0) {
        t1 = *(int *)0xC2A8EB0;
        if ((int)t1 <= (int)0x3) {
            t2 = *(int *)0xC2A8C78;
            t3 = *(int *)((t2 + 0x0));
            *(unsigned int *)0xC2A8E30 = t3;
        }
    }
    t13 = *(int *)0xC2A8E30;
    if ((int)t13 <= 0) {
        t14 = *(int *)0xC2A75E0;
        if ((t14 & 0x80) == 0x80) {
            t15 = *(int *)0xC2A8EB0;
            if (t15 == 2) {
                t16 = *(int *)0xC2A8F70;
                if (t16 != 1) {
                    t17 = *(int *)0xC2A8EB0;
                    t22 = t17;
                    if (t17 != 3) {
                    } else {
                        t18 = *(int *)0xC2A8E88;
                        if (t18 != 7) {
                        } else {
                            *(unsigned int *)0xC2A8EB0 = 0x4;
                            *(unsigned int *)0xC2A8F64 = 0x0;
                            *(unsigned int *)0xC2A8F60 = 0x0;
                        }
                        t22 = t18;
                    }
                    t26 = t22;
                } else {
                    *(unsigned int *)0xC2A8EB0 = 0x6;
                    t26 = t16;
                }
                t39 = t26;
            } else {
                t30 = *(int *)0xC2A8EB0;
                t35 = t30;
                if (t30 != 3) {
                } else {
                    t31 = *(int *)0xC2A8E88;
                    if (t31 != 7) {
                    } else {
                        *(unsigned int *)0xC2A8EB0 = 0x4;
                        *(unsigned int *)0xC2A8F64 = 0x0;
                        *(unsigned int *)0xC2A8F60 = 0x0;
                    }
                    t35 = t31;
                }
                t39 = t35;
            }
            t133 = t39;
        } else {
            t43 = *(int *)0xC2A8EB0;
            if (t43 == 2) {
                t44 = *(int *)0xC2A8F70;
                if (t44 == 1) {
                    *(unsigned int *)0xC2A8EB0 = 0x6;
                    t84 = t44;
                } else {
                    t45 = *(int *)0xC2A8EB0;
                    if (t45 != 3) {
                    } else {
                        t46 = *(int *)0xC2A8EDC;
                        if (t46 != 0) {
                        } else {
                            t47 = *(int *)0xC2A8EE0;
                            if (t47 != 0) {
                            } else {
                                t48 = *(int *)0xC2A8EE4;
                                if (t48 != 0) {
                                } else {
                                    t49 = *(int *)0xC2A8EE8;
                                    if (t49 != 0) {
                                    } else {
                                        t50 = *(int *)0xC2A8EEC;
                                        if (t50 != 0) {
                                        } else {
                                            t51 = *(int *)0xC2A8EF0;
                                            if (t51 != 0) {
                                            } else {
                                                t52 = *(int *)0xC2A8EF4;
                                                if (t52 != 0) {
                                                } else {
                                                    t53 = *(int *)0xC2A8EF8;
                                                    if (t53 != 0) {
                                                    } else {
                                                        *(unsigned int *)0xC2A8EB0 = 0x4;
                                                        *(unsigned int *)0xC2A8F64 = 0x0;
                                                        *(unsigned int *)0xC2A8F60 = 0x0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    t84 = t45;
                }
                t128 = t84;
            } else {
                t89 = *(int *)0xC2A8EB0;
                if (t89 != 3) {
                } else {
                    t90 = *(int *)0xC2A8EDC;
                    if (t90 != 0) {
                    } else {
                        t91 = *(int *)0xC2A8EE0;
                        if (t91 != 0) {
                        } else {
                            t92 = *(int *)0xC2A8EE4;
                            if (t92 != 0) {
                            } else {
                                t93 = *(int *)0xC2A8EE8;
                                if (t93 != 0) {
                                } else {
                                    t94 = *(int *)0xC2A8EEC;
                                    if (t94 != 0) {
                                    } else {
                                        t95 = *(int *)0xC2A8EF0;
                                        if (t95 != 0) {
                                        } else {
                                            t96 = *(int *)0xC2A8EF4;
                                            if (t96 != 0) {
                                            } else {
                                                t97 = *(int *)0xC2A8EF8;
                                                if (t97 != 0) {
                                                } else {
                                                    *(unsigned int *)0xC2A8EB0 = 0x4;
                                                    *(unsigned int *)0xC2A8F64 = 0x0;
                                                    *(unsigned int *)0xC2A8F60 = 0x0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                t128 = t89;
            }
            t133 = t128;
        }
        return t133;
    }
    t138 = *(int *)0xC2A8E30;
    t139 = (int)((int)t138 / (int)0x3C);
    t140 = t139;
    if ((int)t139 > (int)0x3E7) {
        t140 = 0x3E7;
    }
    t144 = 0x0;
    t145 = t140;
    if ((int)t139 >= (int)0x64) {
        t142 = (int)((int)t140 / (int)0x64);
        t144 = t142;
        t145 = (t140 - (t142 * 0x64));
    }
    t148 = (int)((int)t145 / (int)0xA);
    t149 = (int)((int)t145 % (int)0xA);
    t150 = *(int *)0xC2A8E98;
    if (t150 == 0) {
        t151 = FUN_0c02d918();
        if (t151 == 2) {
            nlObjPutSetFadeColor(0.0f, 1.0f, 0.0f);
        } else {
            if (t151 == 1) {
                nlObjPutSetFadeColor(1.0f, 0.901960731f, 0.0f);
            } else {
                u160 = 0.988235235f;
                u161 = 0.0f;
                u162 = 0.0f;
                if (t151 != 0) {
                    u155 = 0.988235235f;
                    u156 = 0.0f;
                    u157 = 0.0f;
                    if (t151 == -1) {
                        u155 = 0.686274469f;
                        u156 = 0.0980392098f;
                        u157 = 0.56078428f;
                    }
                    u160 = u155;
                    u161 = u156;
                    u162 = u157;
                }
                nlObjPutSetFadeColor(u160, u161, u162);
            }
        }
        t169 = *(int *)0xC2A8E30;
        t170 = *(int *)0xC1EE7D4;
        if ((int)t169 <= (int)t170) {
            t171 = *(int *)0xC2A8E30;
            t172 = (int)((int)t171 % (int)0x3C);
            if (t172 == 0) {
                Sound_Request(0x4A9, 0x0);
            }
        }
    } else {
        t183 = *(int *)0xC2A760C;
        if (t183 == 2) {
            nlObjPutSetFadeColor(0.0f, 1.0f, 0.0f);
        } else {
            if (t183 == 1) {
                nlObjPutSetFadeColor(1.0f, 0.901960731f, 0.0f);
            } else {
                u192 = 0.988235235f;
                u193 = 0.0f;
                u194 = 0.0f;
                if (t183 != 0) {
                    u187 = 0.988235235f;
                    u188 = 0.0f;
                    u189 = 0.0f;
                    if (t183 == -1) {
                        u187 = 0.686274469f;
                        u188 = 0.0980392098f;
                        u189 = 0.56078428f;
                    }
                    u192 = u187;
                    u193 = u188;
                    u194 = u189;
                }
                nlObjPutSetFadeColor(u192, u193, u194);
            }
        }
    }
    t206 = *(int *)0xC2A8EB0;
    if (t206 == 3) {
        *(float *)0xC2A8098 = 0.0f;
        FUN_0c056e80();
    }
    u213 = *(float *)0xC2A7604;
    *(unsigned int *)0xC2A8DF4 = (int)u213;
    u214 = *(float *)0xC2A7608;
    *(unsigned int *)0xC2A8DF8 = (int)u214;
    u215 = *(float *)0xC056F04;
    u216 = *(float *)0xC2A8C64;
    if (u216 > u215) {
        *(float *)0xC2A8C64 = u215;
    }
    u219 = *(float *)0xC2A8C68;
    if (u219 > u215) {
        *(float *)0xC2A8C68 = u215;
    }
    u221 = *(float *)0xC2A8C64;
    *(float *)0xC2A807C = u221;
    u222 = *(float *)0xC2A8C68;
    *(float *)0xC2A8080 = u222;
    *(float *)0xC2A8098 = 1.0f;
    *(unsigned int *)0xC2A8094 = 0x0;
    if (t144 != 0) {
        t223 = *(int *)0xC2A8DF4;
        *(float *)0xC2A8070 = (float)t223;
        t224 = *(int *)0xC2A8DF8;
        *(float *)0xC2A8074 = (float)t224;
        u225 = *(float *)0xC056F10;
        *(float *)0xC2A8078 = u225;
        t226 = *(int *)(((t144 << 2) + 0xC0D0C08));
        *(unsigned int *)0xC2A806C = t226;
        nlSprPut(0xC2A806C);
    }
    u237 = *(float *)0xC056F1C;
    if (t144 == 0) {
        if (t148 != 0) {
            if (t144 != 0) {
                t238 = *(int *)0xC2A8DF4;
                u239 = *(float *)0xC2A8C64;
                u245 = ((float)t238 + u237 * u239);
            } else {
                t240 = *(int *)0xC2A8DF4;
                u245 = (float)t240;
            }
            *(float *)0xC2A8070 = u245;
            t248 = *(int *)0xC2A8DF8;
            *(float *)0xC2A8074 = (float)t248;
            u249 = *(float *)0xC056F20;
            *(float *)0xC2A8078 = u249;
            t250 = *(int *)(((t148 << 2) + 0xC0D0C08));
            *(unsigned int *)0xC2A806C = t250;
            nlSprPut(0xC2A806C);
        }
    } else {
        if (t144 != 0) {
            t261 = *(int *)0xC2A8DF4;
            u262 = *(float *)0xC2A8C64;
            u268 = ((float)t261 + u237 * u262);
        } else {
            t263 = *(int *)0xC2A8DF4;
            u268 = (float)t263;
        }
        *(float *)0xC2A8070 = u268;
        t271 = *(int *)0xC2A8DF8;
        *(float *)0xC2A8074 = (float)t271;
        u272 = *(float *)0xC056F20;
        *(float *)0xC2A8078 = u272;
        t273 = *(int *)(((t148 << 2) + 0xC0D0C08));
        *(unsigned int *)0xC2A806C = t273;
        nlSprPut(0xC2A806C);
    }
    t284 = *(int *)0xC2A8DF4;
    u285 = *(float *)0xC2A8C64;
    if (t144 != 0) {
        u286 = *(float *)0xC056F24;
        *(float *)0xC2A8070 = ((float)t284 + u286 * u285);
    } else {
        u288 = (float)t284;
        if (t148 != 0) {
            u288 = ((float)t284 + u237 * u285);
        }
        *(float *)0xC2A8070 = u288;
    }
    t293 = *(int *)0xC2A8DF8;
    *(float *)0xC2A8074 = (float)t293;
    u294 = *(float *)0xC056F28;
    *(float *)0xC2A8078 = u294;
    t295 = *(int *)(((t149 << 2) + 0xC0D0C08));
    *(unsigned int *)0xC2A806C = t295;
    t296 = *(int *)0xC2A8E30;
    if ((int)t296 > 0) {
        nlSprPut(0xC2A806C);
    }
    *(float *)0xC2A8098 = 1.0f;
    return ResetFadeColor();
}

int putLevelCTFontAssist(int a4, int a5, int a6, int a7, float f4)
{
    float u1;
    int t3;
    int t4;
    int t5;
    int t7;
    int t8;
    int t9;
    int t10;
    float u12;
    int t15;
    int t16;
    int t18;
    float u19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t26;
    int t38;
    float u39;
    float t40;
    float u41;
    float t42;
    int t58;
    float u63;
    int t64;
    int t65;
    int t66;
    int t67;
    float u68;
    int t69;
    int t70;
    int t71;
    int t72;
    float u73;
    float u74;
    int t75;
    float u76;
    int t77;
    int t78;
    float u87;
    float u104;
    int t105;
    int t109;
    int t110;
    int t120;
    float u121;
    float u122;
    int t123;
    int t124;
    int t125;
    float u129;
    int t130;
    float u131;
    int t132;
    int t133;
    int t134;
    int t135;
    int t136;
    float u140;
    int t141;
    float u142;
    int t143;
    int t144;
    int t145;
    float u151;
    int t313;
    int t315;
    float u316;
    float u169;
    int t170;
    int t171;
    int t172;
    int t173;
    int t174;
    int t176;
    int t194;
    float u195;
    float t196;
    float u197;
    float t198;
    int t214;
    float u219;
    int t220;
    int t221;
    int t222;
    int t223;
    float u224;
    int t225;
    int t226;
    int t227;
    int t228;
    float u229;
    float u230;
    int t231;
    float u232;
    int t233;
    int t234;
    float u243;
    float u260;
    int t261;
    int t265;
    int t266;
    int t276;
    float u277;
    float u278;
    int t279;
    int t280;
    int t281;
    float u285;
    int t286;
    float u287;
    int t288;
    int t289;
    int t290;
    int t291;
    int t292;
    float u296;
    int t297;
    float u298;
    int t299;
    int t300;
    int t301;
    float u307;
    int t6;
    float u11;
    float u13;
    float u14;
    int t318;
    int t319;
    int t321;
    float u322;
    float u323;
    int t163;
    int t164;
    int t166;
    float u167;
    float u168;
    int t157;
    int t159;
    float u160;
    float u161;
    int t33;
    int t34;
    int t36;
    int t28;
    int t29;
    int t31;
    int t50;
    int t51;
    float u55;
    int t43;
    int t44;
    float u48;
    int t60;
    float u61;
    int t98;
    float u101;
    int t93;
    float u95;
    int t88;
    float u90;
    int t79;
    int t82;
    float u83;
    int t152;
    int t154;
    float u155;
    int t146;
    int t148;
    int t149;
    float u150;
    int t127;
    int t138;
    int t139;
    int t186;
    int t187;
    int t189;
    int t190;
    float u191;
    float u192;
    int t178;
    int t179;
    int t181;
    int t182;
    float u183;
    float u184;
    int t206;
    int t207;
    float u211;
    int t199;
    int t200;
    float u204;
    int t216;
    float u217;
    int t254;
    float u257;
    int t249;
    float u251;
    int t244;
    float u246;
    int t235;
    int t238;
    float u239;
    int t308;
    int t310;
    float u311;
    int t302;
    int t304;
    int t305;
    float u306;
    int t283;
    int t294;
    int t295;
    int stk[21] = {0};

    *(unsigned int *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 16)) = a7;
    FUN_0c031408(0x1);
    u1 = *(float *)0xC2A1AD4;
    pfSetZ(u1);
    t3 = pfSetFont((0x3 & a4));
    t4 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 24)) = (t4 - 1);
    *(unsigned int *)(((int)stk + 28)) = (0x200 & a4);
    t5 = t3;
    t7 = (t4 - 1);
    t8 = a4;
    t9 = a5;
    t10 = 0x0;
    u12 = f4;
    for (;;) {
        t15 = *(int *)(((int)stk + 12));
        if ((int)t10 < (int)t15) {
            t8 = 0x1000;
            *(unsigned int *)(((int)stk + 4)) = (a4 & t8);
            if ((a4 & t8) != 0) {
                t7 = 0xC040CEA;
                t6 = 0xC2A11C4;
                t16 = *(int *)((t6 + 0x0));
                t8 = t16;
                t18 = FUN_0c040cea(t8);
                t5 = t18;
                t8 = t5;
                t8 = (t8 << 2);
                if (((((int)t10 >= 0) ? (0x1 << (t10 & 31)) : ((-(int)t10 & 31) ? ((int)0x1 >> (-(int)t10 & 31)) : ((int)0x1 >> 31))) & t8) == 0) {
                    t7 = (t10 * 0x2C);
                    t7 = (t7 + a5);
                    if ((t7 + 0xC) == 0) {
                    } else {
                        t8 = 0x10;
                        t5 = 0x8;
                        t6 = (t10 * 0x2C);
                        t6 = (t6 + a5);
                        u19 = *(float *)((t6 + t5));
                        u14 = u19;
                        if ((a4 & t8) != 0) {
                            t9 = 0xFF000000;
                            t8 = 0xFF000000;
                            t20 = pfColor(t8, t9, 0xFF000000, 0xFF000000);
                            t5 = t20;
                        } else {
                            t8 = 0x20;
                            if ((a4 & t8) != 0) {
                                t21 = *(int *)(((int)stk + 16));
                                t6 = t21;
                                if (t10 == t6) {
                                    t7 = 0xC03102A;
                                    t9 = 0xFFFFC500;
                                    t8 = 0xFFFFC500;
                                    t22 = pfColor(t8, t9, 0xFFFFC500, 0xFFFFC500);
                                    t5 = t22;
                                } else {
                                    t5 = 0x50;
                                    t7 = 0x1;
                                    t23 = *(int *)((((int)stk + 4) + t5));
                                    t7 = (((int)t10 >= 0) ? (t7 << (t10 & 31)) : ((-(int)t10 & 31) ? ((int)t7 >> (-(int)t10 & 31)) : ((int)t7 >> 31)));
                                    t24 = 0xFFFFFFFF;
                                    if ((t7 & t23) != 0) {
                                        t24 = 0xFF707070;
                                    }
                                    t9 = t24;
                                    t8 = t24;
                                    t26 = pfColor(t8, t9, t24, t24);
                                    t5 = t26;
                                }
                            } else {
                                t28 = t6;
                                t29 = t7;
                                t31 = t8;
                            }
                            t33 = t28;
                            t34 = t29;
                            t36 = t31;
                        }
                        t6 = t33;
                        t7 = t34;
                        t8 = t36;
                        u12 = u14;
                        t38 = pfSize(u12, u14);
                        t5 = t38;
                        t8 = 0x4;
                        t7 = (t10 * 0x2C);
                        t7 = (t7 + a5);
                        u39 = *(float *)((t7 + 0x0));
                        u13 = u39;
                        if ((a4 & t8) != 0) {
                            t8 = (t10 * 0x2C);
                            t8 = (t8 + a5);
                            t8 = (t8 + 0xC);
                            t40 = pfLength(t8);
                            t5 = t40;
                            t5 = 0xC03C4E4;
                            u41 = *(float *)((t5 + 0x0));
                            u12 = u41;
                            u13 = (u13 - (t40 * u12));
                            t50 = t5;
                            u55 = u12;
                        } else {
                            t7 = a4;
                            t8 = 0x8;
                            if ((t7 & t8) != 0) {
                                t8 = (t10 * 0x2C);
                                t8 = (t8 + a5);
                                t8 = (t8 + 0xC);
                                t42 = pfLength(t8);
                                u12 = t42;
                                u13 = (u13 - u12);
                                u48 = u12;
                            } else {
                                t43 = t5;
                                t44 = t7;
                            }
                            t50 = t43;
                            t51 = t44;
                            u55 = u48;
                        }
                        u12 = u55;
                        t5 = t50;
                        t7 = t51;
                        t8 = 0x2000;
                        t7 = a4;
                        u12 = 0.0f;
                        u14 = u12;
                        if ((t7 & t8) == 0) {
                            t7 = t10;
                            t9 = 0xC2A1ADC;
                            t58 = *(int *)((t9 + 0x0));
                            t8 = t58;
                            if ((t7 & 0x1) == 0) {
                                t8 = (-t8);
                            }
                            u11 = (float)t8;
                            u14 = u11;
                            t60 = t9;
                            u61 = u11;
                        }
                        u11 = u61;
                        t9 = t60;
                        t5 = 0x4;
                        u12 = u13;
                        *(unsigned int *)(((int)stk + 8)) = ((t10 * 0x2C) + a5);
                        u63 = *(float *)((((t10 * 0x2C) + a5) + t5));
                        u12 = (u12 + u14);
                        t64 = pfLocate(u12, u63);
                        t5 = t64;
                        t65 = *(int *)(((int)stk + 8));
                        t8 = t65;
                        t8 = (t8 + 0xC);
                        t66 = pfPuts(t8);
                        t5 = t66;
                        t67 = *(int *)(((int)stk + 4));
                        t7 = t67;
                        if (t7 != 0) {
                            t8 = 0x2;
                            if ((int)t10 >= (int)t8) {
                                t7 = 0x11;
                                if ((int)t10 <= (int)t7) {
                                    t7 = 0xC2A1AAC;
                                    t5 = 0xC2A11C4;
                                    t8 = 0xC28A4E8;
                                    u68 = *(float *)0xC2A1AD4;
                                    u11 = u68;
                                    u11 = (u11 - 0.00999999978f);
                                    *(float *)0xC2A1AD4 = u11;
                                    *(unsigned int *)((t7 + 0x0)) = 0x800;
                                    t69 = *(short *)((t5 + 0x0));
                                    t6 = t69;
                                    t7 = t8;
                                    t7 = (t7 + 0x10);
                                    t70 = ((short)t6 * (short)0x788);
                                    t6 = t10;
                                    t6 = (t6 - 2);
                                    t71 = ((short)t70 + t7);
                                    t7 = 0x1;
                                    t72 = *(int *)((t71 + 0x4));
                                    t7 = (((int)t6 >= 0) ? (t7 << (t6 & 31)) : ((-(int)t6 & 31) ? ((int)t7 >> (-(int)t6 & 31)) : ((int)t7 >> 31)));
                                    if ((t7 & t72) != 0) {
                                        t5 = 0xC03C610;
                                        u73 = *(float *)((t5 + 0x0));
                                        u13 = u73;
                                        t5 = 0x4;
                                        t8 = 0xC0A0790;
                                        t9 = 0xC2A1A84;
                                        *(unsigned int *)(((int)stk + 8)) = ((t10 * 0x2C) + a5);
                                        u74 = *(float *)((((t10 * 0x2C) + a5) + t5));
                                        u11 = u74;
                                        t75 = *(int *)(((int)stk + 8));
                                        u11 = (u11 + u13);
                                        u76 = *(float *)((t75 + 0x0));
                                        t77 = (int)u11;
                                        u11 = u76;
                                        u11 = (u11 + u14);
                                        t78 = menuPutSprites(t8, t9, (int)u11, t77);
                                        t5 = t78;
                                    } else {
                                        t79 = t6;
                                        t82 = t8;
                                        u83 = u11;
                                    }
                                    u11 = u83;
                                    t6 = t79;
                                    t7 = 0xC2A1AAC;
                                    t8 = t82;
                                    *(unsigned int *)((t7 + 0x0)) = 0x0;
                                    u87 = *(float *)0xC2A1AD4;
                                    u11 = u87;
                                    u11 = (u11 + 0.00999999978f);
                                    *(float *)0xC2A1AD4 = u11;
                                    t88 = t6;
                                    u90 = u11;
                                }
                                t93 = t88;
                                u95 = u90;
                            }
                            t98 = t93;
                            u101 = u95;
                        }
                        u11 = u101;
                        t6 = t98;
                        t8 = 0x1F00;
                        if ((a4 & t8) == 0) {
                            t152 = t6;
                        } else {
                            u104 = *(float *)0xC2A1AD4;
                            u11 = u104;
                            u11 = (u11 + 0.00999999978f);
                            *(float *)0xC2A1AD4 = u11;
                            t105 = *(int *)(((int)stk + 4));
                            if (t105 != 0) {
                                if (t10 == 0) {
                                    t8 = 0xC0A1C18;
                                    *(unsigned int *)(((int)stk + 32)) = t8;
                                    t8 = 0xC0A1C38;
                                    *(unsigned int *)(((int)stk + 20)) = t8;
                                } else {
                                    t5 = t10;
                                    if (t5 != 1) {
                                        t5 = t10;
                                        if (t5 != 18) {
                                            t8 = 0xC0A1CD8;
                                            *(unsigned int *)(((int)stk + 32)) = t8;
                                            t8 = 0xC0A1CF8;
                                            *(unsigned int *)(((int)stk + 20)) = t8;
                                        } else {
                                            t8 = 0xC0A1C58;
                                            *(unsigned int *)(((int)stk + 32)) = t8;
                                            t8 = 0xC0A1C78;
                                            *(unsigned int *)(((int)stk + 20)) = t8;
                                        }
                                    } else {
                                        t8 = 0xC0A1C58;
                                        *(unsigned int *)(((int)stk + 32)) = t8;
                                        t8 = 0xC0A1C78;
                                        *(unsigned int *)(((int)stk + 20)) = t8;
                                    }
                                }
                            } else {
                                t8 = 0x400;
                                t7 = a4;
                                if ((t7 & t8) != 0) {
                                    t8 = 0xC0A1C98;
                                    *(unsigned int *)(((int)stk + 32)) = t8;
                                    t8 = 0xC0A1CB8;
                                    *(unsigned int *)(((int)stk + 20)) = t8;
                                } else {
                                    t109 = *(int *)(((int)stk + 28));
                                    t7 = t109;
                                    if (t7 == 0) {
                                        t110 = *(int *)(((int)stk + 24));
                                        if (t10 == t110) {
                                            t8 = 0xC0A1C58;
                                            *(unsigned int *)(((int)stk + 32)) = t8;
                                            t8 = 0xC0A1C78;
                                            *(unsigned int *)(((int)stk + 20)) = t8;
                                        } else {
                                            t8 = 0x100;
                                            t7 = a4;
                                            if ((t7 & t8) != 0) {
                                                t8 = 0xC0A1BD8;
                                                *(unsigned int *)(((int)stk + 32)) = t8;
                                                t8 = 0xC0A1BF8;
                                                *(unsigned int *)(((int)stk + 20)) = t8;
                                            } else {
                                                t7 = 0x800;
                                                if ((t7 & a4) != 0) {
                                                    t8 = 0xC0A1B98;
                                                    *(unsigned int *)(((int)stk + 32)) = t8;
                                                    t8 = 0xC0A1BB8;
                                                    *(unsigned int *)(((int)stk + 20)) = t8;
                                                }
                                            }
                                        }
                                    } else {
                                        t8 = 0xC0A1C58;
                                        *(unsigned int *)(((int)stk + 32)) = t8;
                                        t8 = 0xC0A1C78;
                                        *(unsigned int *)(((int)stk + 20)) = t8;
                                    }
                                }
                            }
                            t120 = *(int *)(((int)stk + 16));
                            t5 = 0xC03C728;
                            u121 = *(float *)((t5 + 0x0));
                            u13 = u121;
                            if (t10 != t120) {
                                t5 = 0xC03C72C;
                                t6 = 0x1;
                                u122 = *(float *)((t5 + 0x0));
                                u12 = u122;
                                t5 = 0x50;
                                t6 = (((int)t10 >= 0) ? (t6 << (t10 & 31)) : ((-(int)t10 & 31) ? ((int)t6 >> (-(int)t10 & 31)) : ((int)t6 >> 31)));
                                *(float *)0xC2A1AB0 = u12;
                                t123 = *(int *)(((int)stk + 20));
                                t7 = t123;
                                *(unsigned int *)(((int)stk + 4)) = t7;
                                t124 = *(int *)((((int)stk + 4) + t5));
                                t5 = t124;
                                if ((t6 & t5) != 0) {
                                    t9 = 0x0;
                                    t8 = t7;
                                    t125 = a6;
                                    for (;;) {
                                        if ((int)t9 >= (int)0x3) {
                                            break;
                                        }
                                        t125 = 0x9;
                                        t5 = t125;
                                        *(unsigned char *)((t8 + 0x2)) = t5;
                                        t8 = (t8 + 0x8);
                                        t9 = (t9 + 0x1);
                                    }
                                    t127 = t9;
                                }
                                t9 = t127;
                                t5 = 0x4;
                                t9 = 0xC2A1A84;
                                *(unsigned int *)(((int)stk + 8)) = ((t10 * 0x2C) + a5);
                                u129 = *(float *)((((t10 * 0x2C) + a5) + t5));
                                u11 = u129;
                                t130 = *(int *)(((int)stk + 8));
                                u11 = (u11 + u13);
                                u131 = *(float *)((t130 + 0x0));
                                t132 = (int)u11;
                                u11 = u131;
                                u11 = (u11 + u14);
                                t133 = *(int *)(((int)stk + 20));
                                t8 = t133;
                                t134 = menuPutSprites(t8, t9, (int)u11, t132);
                                t5 = t134;
                                t5 = 0x50;
                                t7 = 0x1;
                                t135 = *(int *)((((int)stk + 4) + t5));
                                t7 = (((int)t10 >= 0) ? (t7 << (t10 & 31)) : ((-(int)t10 & 31) ? ((int)t7 >> (-(int)t10 & 31)) : ((int)t7 >> 31)));
                                if ((t7 & t135) != 0) {
                                    t9 = 0x0;
                                    t136 = *(int *)(((int)stk + 4));
                                    t8 = t136;
                                    for (;;) {
                                        if ((int)t9 >= (int)0x3) {
                                            break;
                                        }
                                        t5 = 0x0;
                                        *(unsigned char *)((t8 + 0x2)) = t5;
                                        t8 = (t8 + 0x8);
                                        t9 = (t9 + 0x1);
                                    }
                                    t138 = t8;
                                    t139 = t9;
                                }
                                t8 = t138;
                                t9 = t139;
                                u12 = 1.0f;
                                *(float *)0xC2A1AB0 = u12;
                                t146 = t7;
                                t148 = t8;
                                t149 = t9;
                                u150 = u12;
                            } else {
                                t5 = 0x4;
                                t9 = 0xC2A1A84;
                                *(unsigned int *)(((int)stk + 4)) = ((t10 * 0x2C) + a5);
                                u140 = *(float *)((((t10 * 0x2C) + a5) + t5));
                                u11 = u140;
                                t141 = *(int *)(((int)stk + 4));
                                u11 = (u11 + u13);
                                u142 = *(float *)((t141 + 0x0));
                                t143 = (int)u11;
                                u11 = u142;
                                u11 = (u11 + u14);
                                t144 = *(int *)(((int)stk + 32));
                                t8 = t144;
                                t145 = menuPutSprites(t8, t9, (int)u11, t143);
                                t5 = t145;
                            }
                            u151 = *(float *)0xC2A1AD4;
                            u11 = u151;
                            u12 = u150;
                            t7 = t146;
                            t8 = t148;
                            t9 = t149;
                            u11 = (u11 - 0.00999999978f);
                            *(float *)0xC2A1AD4 = u11;
                            t154 = t9;
                            u155 = u12;
                        }
                        t157 = t152;
                        t159 = t154;
                        u160 = u11;
                        u161 = u155;
                    }
                    t163 = t157;
                    t164 = t7;
                    t166 = t159;
                    u167 = u160;
                    u168 = u161;
                }
                t318 = t163;
                t319 = t164;
                t321 = t166;
                u322 = u167;
                u323 = u168;
            } else {
                t7 = (t10 * 0x2C);
                t7 = (t7 + a5);
                t313 = t6;
                t315 = t9;
                u316 = u12;
                if ((t7 + 0xC) == 0) {
                } else {
                    t8 = 0x10;
                    t5 = 0x8;
                    t6 = (t10 * 0x2C);
                    t6 = (t6 + a5);
                    u169 = *(float *)((t6 + t5));
                    u14 = u169;
                    if ((a4 & t8) != 0) {
                        t9 = 0xFF000000;
                        t8 = 0xFF000000;
                        t170 = pfColor(t8, t9, 0xFF000000, 0xFF000000);
                        t5 = t170;
                    } else {
                        t8 = 0x20;
                        if ((a4 & t8) != 0) {
                            t171 = *(int *)(((int)stk + 16));
                            t6 = t171;
                            if (t10 == t6) {
                                t9 = 0xFFFFC500;
                                t8 = 0xFFFFC500;
                                t172 = pfColor(t8, t9, 0xFFFFC500, 0xFFFFC500);
                                t5 = t172;
                            } else {
                                t5 = 0x50;
                                t7 = 0x1;
                                t173 = *(int *)((((int)stk + 4) + t5));
                                t7 = (((int)t10 >= 0) ? (t7 << (t10 & 31)) : ((-(int)t10 & 31) ? ((int)t7 >> (-(int)t10 & 31)) : ((int)t7 >> 31)));
                                t174 = 0xFFFFFFFF;
                                if ((t7 & t173) != 0) {
                                    t174 = 0xFF707070;
                                }
                                t9 = t174;
                                t8 = t174;
                                t176 = pfColor(t8, t9, t174, t174);
                                t5 = t176;
                            }
                        } else {
                            t178 = t6;
                            t179 = t7;
                            t181 = t8;
                            t182 = t9;
                            u183 = u11;
                            u184 = u12;
                        }
                        t186 = t178;
                        t187 = t179;
                        t189 = t181;
                        t190 = t182;
                        u191 = u183;
                        u192 = u184;
                    }
                    u11 = u191;
                    u12 = u192;
                    t6 = t186;
                    t7 = t187;
                    t8 = t189;
                    t9 = t190;
                    u12 = u14;
                    t194 = pfSize(u12, u14);
                    t5 = t194;
                    t8 = 0x4;
                    t7 = (t10 * 0x2C);
                    t7 = (t7 + a5);
                    u195 = *(float *)((t7 + 0x0));
                    u13 = u195;
                    if ((a4 & t8) != 0) {
                        t8 = (t10 * 0x2C);
                        t8 = (t8 + a5);
                        t8 = (t8 + 0xC);
                        t196 = pfLength(t8);
                        t5 = 0xC03C4E4;
                        u197 = *(float *)((t5 + 0x0));
                        u12 = u197;
                        u13 = (u13 - (t196 * u12));
                        t206 = t5;
                        u211 = u12;
                    } else {
                        t7 = a4;
                        t8 = 0x8;
                        if ((t7 & t8) != 0) {
                            t8 = (t10 * 0x2C);
                            t8 = (t8 + a5);
                            t8 = (t8 + 0xC);
                            t198 = pfLength(t8);
                            u12 = t198;
                            u13 = (u13 - u12);
                            u204 = u12;
                        } else {
                            t199 = t5;
                            t200 = t7;
                        }
                        t206 = t199;
                        t207 = t200;
                        u211 = u204;
                    }
                    u12 = u211;
                    t5 = t206;
                    t7 = t207;
                    t8 = 0x2000;
                    t7 = a4;
                    u12 = 0.0f;
                    u14 = u12;
                    if ((t7 & t8) == 0) {
                        t7 = t10;
                        t9 = 0xC2A1ADC;
                        t214 = *(int *)((t9 + 0x0));
                        t8 = t214;
                        if ((t7 & 0x1) == 0) {
                            t8 = (-t8);
                        }
                        u11 = (float)t8;
                        u14 = u11;
                        t216 = t9;
                        u217 = u11;
                    }
                    u11 = u217;
                    t9 = t216;
                    t5 = 0x4;
                    u12 = u13;
                    *(unsigned int *)(((int)stk + 8)) = ((t10 * 0x2C) + a5);
                    u219 = *(float *)((((t10 * 0x2C) + a5) + t5));
                    u12 = (u12 + u14);
                    t220 = pfLocate(u12, u219);
                    t5 = t220;
                    t221 = *(int *)(((int)stk + 8));
                    t8 = t221;
                    t8 = (t8 + 0xC);
                    t222 = pfPuts(t8);
                    t5 = t222;
                    t223 = *(int *)(((int)stk + 4));
                    t7 = t223;
                    if (t7 != 0) {
                        t8 = 0x2;
                        if ((int)t10 >= (int)t8) {
                            t7 = 0x11;
                            if ((int)t10 <= (int)t7) {
                                t7 = 0xC2A1AAC;
                                t5 = 0xC2A11C4;
                                t8 = 0xC28A4E8;
                                u224 = *(float *)0xC2A1AD4;
                                u11 = u224;
                                u11 = (u11 - 0.00999999978f);
                                *(float *)0xC2A1AD4 = u11;
                                *(unsigned int *)((t7 + 0x0)) = 0x800;
                                t225 = *(short *)((t5 + 0x0));
                                t6 = t225;
                                t7 = t8;
                                t7 = (t7 + 0x10);
                                t226 = ((short)t6 * (short)0x788);
                                t6 = t10;
                                t6 = (t6 - 2);
                                t227 = ((short)t226 + t7);
                                t7 = 0x1;
                                t228 = *(int *)((t227 + 0x4));
                                t7 = (((int)t6 >= 0) ? (t7 << (t6 & 31)) : ((-(int)t6 & 31) ? ((int)t7 >> (-(int)t6 & 31)) : ((int)t7 >> 31)));
                                if ((t7 & t228) != 0) {
                                    t5 = 0xC03C610;
                                    u229 = *(float *)((t5 + 0x0));
                                    u13 = u229;
                                    t5 = 0x4;
                                    t8 = 0xC0A0790;
                                    t9 = 0xC2A1A84;
                                    *(unsigned int *)(((int)stk + 8)) = ((t10 * 0x2C) + a5);
                                    u230 = *(float *)((((t10 * 0x2C) + a5) + t5));
                                    u11 = u230;
                                    t231 = *(int *)(((int)stk + 8));
                                    u11 = (u11 + u13);
                                    u232 = *(float *)((t231 + 0x0));
                                    t233 = (int)u11;
                                    u11 = u232;
                                    u11 = (u11 + u14);
                                    t234 = menuPutSprites(t8, t9, (int)u11, t233);
                                    t5 = t234;
                                } else {
                                    t235 = t6;
                                    t238 = t8;
                                    u239 = u11;
                                }
                                u11 = u239;
                                t6 = t235;
                                t7 = 0xC2A1AAC;
                                t8 = t238;
                                *(unsigned int *)((t7 + 0x0)) = 0x0;
                                u243 = *(float *)0xC2A1AD4;
                                u11 = u243;
                                u11 = (u11 + 0.00999999978f);
                                *(float *)0xC2A1AD4 = u11;
                                t244 = t6;
                                u246 = u11;
                            }
                            t249 = t244;
                            u251 = u246;
                        }
                        t254 = t249;
                        u257 = u251;
                    }
                    u11 = u257;
                    t6 = t254;
                    t8 = 0x1F00;
                    if ((a4 & t8) == 0) {
                        t308 = t6;
                    } else {
                        u260 = *(float *)0xC2A1AD4;
                        u11 = u260;
                        u11 = (u11 + 0.00999999978f);
                        *(float *)0xC2A1AD4 = u11;
                        t261 = *(int *)(((int)stk + 4));
                        if (t261 != 0) {
                            if (t10 == 0) {
                                t8 = 0xC0A1C18;
                                *(unsigned int *)(((int)stk + 32)) = t8;
                                t8 = 0xC0A1C38;
                                *(unsigned int *)(((int)stk + 20)) = t8;
                            } else {
                                t5 = t10;
                                if (t5 != 1) {
                                    t5 = t10;
                                    if (t5 != 18) {
                                        t8 = 0xC0A1CD8;
                                        *(unsigned int *)(((int)stk + 32)) = t8;
                                        t8 = 0xC0A1CF8;
                                        *(unsigned int *)(((int)stk + 20)) = t8;
                                    } else {
                                        t8 = 0xC0A1C58;
                                        *(unsigned int *)(((int)stk + 32)) = t8;
                                        t8 = 0xC0A1C78;
                                        *(unsigned int *)(((int)stk + 20)) = t8;
                                    }
                                } else {
                                    t8 = 0xC0A1C58;
                                    *(unsigned int *)(((int)stk + 32)) = t8;
                                    t8 = 0xC0A1C78;
                                    *(unsigned int *)(((int)stk + 20)) = t8;
                                }
                            }
                        } else {
                            t8 = 0x400;
                            t7 = a4;
                            if ((t7 & t8) != 0) {
                                t8 = 0xC0A1C98;
                                *(unsigned int *)(((int)stk + 32)) = t8;
                                t8 = 0xC0A1CB8;
                                *(unsigned int *)(((int)stk + 20)) = t8;
                            } else {
                                t265 = *(int *)(((int)stk + 28));
                                t7 = t265;
                                if (t7 == 0) {
                                    t266 = *(int *)(((int)stk + 24));
                                    if (t10 == t266) {
                                        t8 = 0xC0A1C58;
                                        *(unsigned int *)(((int)stk + 32)) = t8;
                                        t8 = 0xC0A1C78;
                                        *(unsigned int *)(((int)stk + 20)) = t8;
                                    } else {
                                        t8 = 0x100;
                                        t7 = a4;
                                        if ((t7 & t8) != 0) {
                                            t8 = 0xC0A1BD8;
                                            *(unsigned int *)(((int)stk + 32)) = t8;
                                            t8 = 0xC0A1BF8;
                                            *(unsigned int *)(((int)stk + 20)) = t8;
                                        } else {
                                            t7 = 0x800;
                                            if ((t7 & a4) != 0) {
                                                t8 = 0xC0A1B98;
                                                *(unsigned int *)(((int)stk + 32)) = t8;
                                                t8 = 0xC0A1BB8;
                                                *(unsigned int *)(((int)stk + 20)) = t8;
                                            }
                                        }
                                    }
                                } else {
                                    t8 = 0xC0A1C58;
                                    *(unsigned int *)(((int)stk + 32)) = t8;
                                    t8 = 0xC0A1C78;
                                    *(unsigned int *)(((int)stk + 20)) = t8;
                                }
                            }
                        }
                        t276 = *(int *)(((int)stk + 16));
                        t5 = 0xC03C728;
                        u277 = *(float *)((t5 + 0x0));
                        u13 = u277;
                        if (t10 != t276) {
                            t5 = 0xC03C72C;
                            t6 = 0x1;
                            u278 = *(float *)((t5 + 0x0));
                            u12 = u278;
                            t5 = 0x50;
                            t6 = (((int)t10 >= 0) ? (t6 << (t10 & 31)) : ((-(int)t10 & 31) ? ((int)t6 >> (-(int)t10 & 31)) : ((int)t6 >> 31)));
                            *(float *)0xC2A1AB0 = u12;
                            t279 = *(int *)(((int)stk + 20));
                            t7 = t279;
                            *(unsigned int *)(((int)stk + 4)) = t7;
                            t280 = *(int *)((((int)stk + 4) + t5));
                            t5 = t280;
                            if ((t6 & t5) != 0) {
                                t9 = 0x0;
                                t8 = t7;
                                t281 = a6;
                                for (;;) {
                                    if ((int)t9 >= (int)0x3) {
                                        break;
                                    }
                                    t281 = 0x9;
                                    t5 = t281;
                                    *(unsigned char *)((t8 + 0x2)) = t5;
                                    t8 = (t8 + 0x8);
                                    t9 = (t9 + 0x1);
                                }
                                t283 = t9;
                            }
                            t9 = t283;
                            t5 = 0x4;
                            t9 = 0xC2A1A84;
                            *(unsigned int *)(((int)stk + 8)) = ((t10 * 0x2C) + a5);
                            u285 = *(float *)((((t10 * 0x2C) + a5) + t5));
                            u11 = u285;
                            t286 = *(int *)(((int)stk + 8));
                            u11 = (u11 + u13);
                            u287 = *(float *)((t286 + 0x0));
                            t288 = (int)u11;
                            u11 = u287;
                            u11 = (u11 + u14);
                            t289 = *(int *)(((int)stk + 20));
                            t8 = t289;
                            t290 = menuPutSprites(t8, t9, (int)u11, t288);
                            t5 = t290;
                            t5 = 0x50;
                            t7 = 0x1;
                            t291 = *(int *)((((int)stk + 4) + t5));
                            t7 = (((int)t10 >= 0) ? (t7 << (t10 & 31)) : ((-(int)t10 & 31) ? ((int)t7 >> (-(int)t10 & 31)) : ((int)t7 >> 31)));
                            if ((t7 & t291) != 0) {
                                t9 = 0x0;
                                t292 = *(int *)(((int)stk + 4));
                                t8 = t292;
                                for (;;) {
                                    if ((int)t9 >= (int)0x3) {
                                        break;
                                    }
                                    t5 = 0x0;
                                    *(unsigned char *)((t8 + 0x2)) = t5;
                                    t8 = (t8 + 0x8);
                                    t9 = (t9 + 0x1);
                                }
                                t294 = t8;
                                t295 = t9;
                            }
                            t8 = t294;
                            t9 = t295;
                            u12 = 1.0f;
                            *(float *)0xC2A1AB0 = u12;
                            t302 = t7;
                            t304 = t8;
                            t305 = t9;
                            u306 = u12;
                        } else {
                            t5 = 0x4;
                            t9 = 0xC2A1A84;
                            *(unsigned int *)(((int)stk + 4)) = ((t10 * 0x2C) + a5);
                            u296 = *(float *)((((t10 * 0x2C) + a5) + t5));
                            u11 = u296;
                            t297 = *(int *)(((int)stk + 4));
                            u11 = (u11 + u13);
                            u298 = *(float *)((t297 + 0x0));
                            t299 = (int)u11;
                            u11 = u298;
                            u11 = (u11 + u14);
                            t300 = *(int *)(((int)stk + 32));
                            t8 = t300;
                            t301 = menuPutSprites(t8, t9, (int)u11, t299);
                            t5 = t301;
                        }
                        u307 = *(float *)0xC2A1AD4;
                        u11 = u307;
                        u12 = u306;
                        t7 = t302;
                        t8 = t304;
                        t9 = t305;
                        u11 = (u11 - 0.00999999978f);
                        *(float *)0xC2A1AD4 = u11;
                        t310 = t9;
                        u311 = u12;
                    }
                    t313 = t308;
                    t315 = t310;
                    u316 = u311;
                }
                t318 = t313;
                t319 = t7;
                t321 = t315;
                u322 = u11;
                u323 = u316;
            }
            u11 = u322;
            u12 = u323;
            t6 = t318;
            t10 = (t10 + 0x1);
            t7 = t319;
            t9 = t321;
            continue;
        }
        break;
    }
    return FUN_0c031408(0x0);
}
