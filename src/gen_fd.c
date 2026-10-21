/* Straight-line functions with calls and guards (batch gen_fd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c05423a(int);
int FUN_0c0543fc(void);
int FUN_0c05778a(int, int, float, float);
int ResetFadeColor(void);
int Sound_Request(int, int);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int nlCloseEvent(int);
int nlObjPutSetFadeColor(float, float, float);
int nlSprPut(int);
int pfColor(int, int, int, int);
float pfLength(int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFont(int);
int pfSize(float, float);
int FUN_0c053dec(void);
int FUN_0c056460(int a4);

int FUN_0c053dec(void)
{
    int t0;
    int t1;
    int t195;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t9;
    int t14;
    int t16;
    int t17;
    int t18;
    int t19;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t54;
    float u62;
    float u64;
    int t65;
    int t66;
    int t67;
    int t68;
    int t69;
    int t70;
    int t71;
    int t77;
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    int t84;
    int t92;
    int t93;
    float u97;
    float u99;
    int t107;
    int t108;
    int t109;
    int t110;
    int t111;
    int t112;
    int t113;
    int t119;
    int t120;
    int t121;
    int t122;
    int t123;
    int t124;
    int t126;
    int t134;
    int t135;
    float u139;
    float u141;
    int t156;
    int t157;
    int t158;
    int t185;
    int t190;
    int t186;
    int t209;
    int t210;
    int t211;
    int t212;
    int t213;
    int t216;
    int t221;
    int t223;
    int t224;
    int t225;
    int t226;
    int t234;
    int t235;
    int t236;
    int t237;
    int t238;
    int t239;
    int t240;
    int t251;
    int t252;
    int t253;
    int t254;
    int t255;
    int t256;
    int t257;
    int t258;
    int t259;
    int t261;
    float u269;
    float u271;
    int t272;
    int t273;
    int t274;
    int t275;
    int t276;
    int t277;
    int t278;
    int t284;
    int t285;
    int t286;
    int t287;
    int t288;
    int t289;
    int t291;
    int t299;
    int t300;
    float u304;
    float u306;
    int t314;
    int t315;
    int t316;
    int t317;
    int t318;
    int t319;
    int t320;
    int t326;
    int t327;
    int t328;
    int t329;
    int t330;
    int t331;
    int t333;
    int t341;
    int t342;
    float u346;
    float u348;
    int t363;
    int t364;
    int t365;
    int t392;
    int t397;
    int t393;
    int t402;
    int t11;
    int t7;
    float u147;
    float u105;
    int t72;
    float u101;
    int t114;
    float u143;
    int t218;
    int t214;
    float u354;
    float u312;
    int t279;
    float u308;
    int t321;
    float u350;
    int stk[23] = {0};

    *(unsigned int *)(((int)stk + 8)) = 0x0;
    t0 = *(int *)0xC1EE20C;
    if (t0 == 2) {
        t1 = *(int *)0xC1EE214;
        t195 = t0;
        if (t1 == 0) {
        } else {
            t2 = *(int *)0xC1EE210;
            t3 = *(int *)0xC2A8C54;
            if (t2 == 2) {
                t4 = *(int *)0xC2A9904;
                if (t4 != 0) {
                    t5 = *(int *)((t3 + 0x0));
                    t7 = (t5 + 0x1);
                } else {
                    t6 = *(int *)((t3 + 0x0));
                    t7 = t6;
                }
                t11 = t7;
            } else {
                t9 = *(int *)((t3 + 0x0));
                t11 = t9;
            }
            t14 = t11;
            if ((int)t11 >= (int)0x57E40) {
                t14 = 0x57E3F;
            }
            t16 = (int)((int)t14 / (int)0xE10);
            t17 = (int)((int)(t14 - (t16 * 0xE10)) / (int)0x3C);
            t18 = (int)((int)t14 % (int)0x3C);
            t19 = (int)((int)(t18 * 0x64) / (int)0x3C);
            if (t14 == 0x258) {
                Voice_ShutUp(0x0);
                Voice_Request(0xC130B78, 0x0, 0x7F, 0x0);
            }
            *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0xC);
            t27 = (int)((int)t16 / (int)0xA);
            *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = t27;
            *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 4) + 0xC) + 0x4);
            t28 = (int)((int)t16 % (int)0xA);
            *(unsigned int *)((((((int)stk + 4) + 0xC) + 0x4) + 0x0)) = t28;
            t29 = (int)((int)t17 / (int)0xA);
            *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x8)) = t29;
            t30 = (int)((int)t17 % (int)0xA);
            *(unsigned int *)(((((int)stk + 4) + 0xC) + 0xC)) = t30;
            t31 = (int)((int)t19 / (int)0xA);
            *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x10)) = t31;
            t32 = (int)((int)t19 % (int)0xA);
            *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x14)) = t32;
            t33 = *(int *)0xC1EE210;
            if (t33 != 2) {
                FUN_0c05423a(0xA);
            }
            *(unsigned int *)0xC2A7FB0 = 0x200E;
            *(float *)0xC2A7FA0 = 1.0f;
            *(unsigned int *)0xC2A7FA4 = 0x0;
            *(float *)0xC2A7F88 = 0.0399999991f;
            if ((int)t14 <= (int)0x258) {
                nlObjPutSetFadeColor(1.0f, 0.0f, 0.0f);
            } else {
                nlObjPutSetFadeColor(1.0f, 1.0f, 0.0f);
            }
            *(float *)0xC2A7F84 = 84.0f;
            t44 = *(int *)(((int)stk + 4));
            t45 = *(int *)((t44 + 0x0));
            if (t45 == 0) {
                t46 = *(int *)(((int)stk + 12));
                t47 = *(int *)((t46 + 0x0));
                if (t47 == 0) {
                    t48 = 0xC054080;
                    t49 = 0x2;
                    for (;;) {
                        if ((int)t49 >= (int)0x6) {
                            break;
                        }
                        t48 = 0xC130BEC;
                        t50 = *(int *)((((t49 - 2) << 2) + t48));
                        t48 = 0x4;
                        *(float *)((0xC2A7F7C + t48)) = (float)t50;
                        t48 = t49;
                        t48 = (t48 << 2);
                        t51 = *(int *)(((((int)stk + 4) + 0xC) + t48));
                        t48 = 0xC0D0C08;
                        t52 = *(int *)(((t51 << 2) + t48));
                        *(unsigned int *)0xC2A7F7C = t52;
                        if ((int)t49 >= (int)0x4) {
                            t48 = 0x10;
                            *(float *)((0xC2A7F7C + t48)) = 0.5f;
                            t48 = 0x14;
                            *(float *)((0xC2A7F7C + t48)) = 0.5f;
                        } else {
                            t48 = 0x10;
                            *(float *)((0xC2A7F7C + t48)) = 1.0f;
                            t48 = 0x14;
                            *(float *)((0xC2A7F7C + t48)) = 1.0f;
                        }
                        t54 = nlSprPut(0xC2A7F7C);
                        t48 = t54;
                        t49 = (t49 + 0x1);
                    }
                    pfSetFont(0x2);
                    pfSize(1.0f, 1.0f);
                    if ((int)t14 <= (int)0x258) {
                        pfColor(0xFFFF0000, 0xFFFF0000, 0xFFFF0000, 0xFFFF0000);
                    } else {
                        pfColor(0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00);
                    }
                    u62 = *(float *)0xC05428C;
                    FUN_0c05778a(0xC2A7F7C, 0x10, u62, 34.0f);
                    u64 = *(float *)0xC054298;
                    u105 = u64;
                } else {
                    t65 = *(int *)(((int)stk + 4));
                    t66 = *(int *)((t65 + 0x0));
                    if (t66 != 0) {
                        t67 = *(int *)0xC130BD4;
                        *(float *)0xC2A7F80 = (float)t67;
                        t68 = *(int *)(((int)stk + 4));
                        t69 = *(int *)((t68 + 0x0));
                        t70 = *(int *)(((t69 << 2) + 0xC0D0C08));
                        *(unsigned int *)0xC2A7F7C = t70;
                        *(float *)0xC2A7F8C = 1.0f;
                        *(float *)0xC2A7F90 = 1.0f;
                        t71 = nlSprPut(0xC2A7F7C);
                        t72 = t71;
                    } else {
                        *(unsigned int *)(((int)stk + 8)) = 0x24;
                        t72 = 0xC054080;
                    }
                    t77 = t72;
                    t78 = 0x1;
                    for (;;) {
                        if ((int)t78 >= (int)0x6) {
                            break;
                        }
                        t77 = 0xC130BD4;
                        t79 = *(int *)(((int)stk + 8));
                        t80 = *(int *)(((t78 << 2) + t77));
                        *(float *)0xC2A7F80 = (float)(t80 - t79);
                        t77 = (t78 << 2);
                        t81 = *(int *)(((((int)stk + 4) + 0xC) + t77));
                        t77 = 0xC0D0C08;
                        t82 = *(int *)(((t81 << 2) + t77));
                        *(unsigned int *)0xC2A7F7C = t82;
                        if ((int)t78 >= (int)0x4) {
                            t77 = 0x10;
                            *(float *)((0xC2A7F7C + t77)) = 0.5f;
                            t77 = 0x14;
                            *(float *)((0xC2A7F7C + t77)) = 0.5f;
                        } else {
                            t77 = 0x10;
                            *(float *)((0xC2A7F7C + t77)) = 1.0f;
                            t77 = 0x14;
                            *(float *)((0xC2A7F7C + t77)) = 1.0f;
                        }
                        t84 = nlSprPut(0xC2A7F7C);
                        t77 = t84;
                        t78 = (t78 + 0x1);
                    }
                    pfSetFont(0x2);
                    pfSize(1.0f, 1.0f);
                    if ((int)t14 <= (int)0x258) {
                        pfColor(0xFFFF0000, 0xFFFF0000, 0xFFFF0000, 0xFFFF0000);
                    } else {
                        pfColor(0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00);
                    }
                    t92 = *(int *)(((int)stk + 4));
                    t93 = *(int *)((t92 + 0x0));
                    if (t93 != 0) {
                        FUN_0c05778a(0xC2A7F7C, 0x10, 96.0f, 34.0f);
                        FUN_0c05778a(0xC2A7F7C, 0x10, 174.0f, 34.0f);
                        u101 = 182.0f;
                    } else {
                        FUN_0c05778a(0xC2A7F7C, 0x10, 64.0f, 34.0f);
                        u97 = *(float *)0xC05428C;
                        FUN_0c05778a(0xC2A7F7C, 0x10, u97, 34.0f);
                        u99 = *(float *)0xC054298;
                        u101 = u99;
                    }
                    u105 = u101;
                }
                u147 = u105;
            } else {
                t107 = *(int *)(((int)stk + 4));
                t108 = *(int *)((t107 + 0x0));
                if (t108 != 0) {
                    t109 = *(int *)0xC130BD4;
                    *(float *)0xC2A7F80 = (float)t109;
                    t110 = *(int *)(((int)stk + 4));
                    t111 = *(int *)((t110 + 0x0));
                    t112 = *(int *)(((t111 << 2) + 0xC0D0C08));
                    *(unsigned int *)0xC2A7F7C = t112;
                    *(float *)0xC2A7F8C = 1.0f;
                    *(float *)0xC2A7F90 = 1.0f;
                    t113 = nlSprPut(0xC2A7F7C);
                    t114 = t113;
                } else {
                    *(unsigned int *)(((int)stk + 8)) = 0x24;
                    t114 = 0xC054080;
                }
                t119 = t114;
                t120 = 0x1;
                for (;;) {
                    if ((int)t120 >= (int)0x6) {
                        break;
                    }
                    t119 = 0xC130BD4;
                    t121 = *(int *)(((int)stk + 8));
                    t122 = *(int *)(((t120 << 2) + t119));
                    *(float *)0xC2A7F80 = (float)(t122 - t121);
                    t119 = (t120 << 2);
                    t123 = *(int *)(((((int)stk + 4) + 0xC) + t119));
                    t119 = 0xC0D0C08;
                    t124 = *(int *)(((t123 << 2) + t119));
                    *(unsigned int *)0xC2A7F7C = t124;
                    if ((int)t120 >= (int)0x4) {
                        t119 = 0x10;
                        *(float *)((0xC2A7F7C + t119)) = 0.5f;
                        t119 = 0x14;
                        *(float *)((0xC2A7F7C + t119)) = 0.5f;
                    } else {
                        t119 = 0x10;
                        *(float *)((0xC2A7F7C + t119)) = 1.0f;
                        t119 = 0x14;
                        *(float *)((0xC2A7F7C + t119)) = 1.0f;
                    }
                    t126 = nlSprPut(0xC2A7F7C);
                    t119 = t126;
                    t120 = (t120 + 0x1);
                }
                pfSetFont(0x2);
                pfSize(1.0f, 1.0f);
                if ((int)t14 <= (int)0x258) {
                    pfColor(0xFFFF0000, 0xFFFF0000, 0xFFFF0000, 0xFFFF0000);
                } else {
                    pfColor(0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00);
                }
                t134 = *(int *)(((int)stk + 4));
                t135 = *(int *)((t134 + 0x0));
                if (t135 != 0) {
                    FUN_0c05778a(0xC2A7F7C, 0x10, 96.0f, 34.0f);
                    FUN_0c05778a(0xC2A7F7C, 0x10, 174.0f, 34.0f);
                    u143 = 182.0f;
                } else {
                    FUN_0c05778a(0xC2A7F7C, 0x10, 64.0f, 34.0f);
                    u139 = *(float *)0xC05428C;
                    FUN_0c05778a(0xC2A7F7C, 0x10, u139, 34.0f);
                    u141 = *(float *)0xC054298;
                    u143 = u141;
                }
                u147 = u143;
            }
            FUN_0c05778a(0xC2A7F7C, 0x10, u147, 34.0f);
            if ((int)t14 <= (int)0x258) {
                nlObjPutSetFadeColor(1.0f, 0.0f, 0.0f);
            }
            FUN_0c0543fc();
            ResetFadeColor();
            if ((int)t14 <= (int)0x258) {
                if ((int)t14 > 0) {
                    t156 = (int)((int)t14 % (int)0x3C);
                    if (t156 == 0) {
                        t157 = *(int *)0xC2A8E98;
                        if (t157 == 0) {
                            t158 = *(int *)0xC2A8CB0;
                            if (t158 == 0) {
                                Sound_Request(0x505A9, 0x0);
                                *(unsigned int *)0xC2A8CB0 = 0x1;
                            }
                        }
                    }
                }
            }
            t185 = (int)((int)t14 % (int)0x3C);
            t190 = t185;
            if (t185 != 0) {
                t186 = *(int *)0xC2A8CB0;
                if (t186 == 1) {
                    *(unsigned int *)0xC2A8CB0 = 0x0;
                }
                t190 = t186;
            }
            t195 = t190;
        }
        t402 = t195;
    } else {
        t209 = *(int *)0xC1EE210;
        t210 = *(int *)0xC2A8C54;
        if (t209 == 2) {
            t211 = *(int *)0xC2A9904;
            if (t211 != 0) {
                t212 = *(int *)((t210 + 0x0));
                t214 = (t212 + 0x1);
            } else {
                t213 = *(int *)((t210 + 0x0));
                t214 = t213;
            }
            t218 = t214;
        } else {
            t216 = *(int *)((t210 + 0x0));
            t218 = t216;
        }
        t221 = t218;
        if ((int)t218 >= (int)0x57E40) {
            t221 = 0x57E3F;
        }
        t223 = (int)((int)t221 / (int)0xE10);
        t224 = (int)((int)(t221 - (t223 * 0xE10)) / (int)0x3C);
        t225 = (int)((int)t221 % (int)0x3C);
        t226 = (int)((int)(t225 * 0x64) / (int)0x3C);
        if (t221 == 0x258) {
            Voice_ShutUp(0x0);
            Voice_Request(0xC130B78, 0x0, 0x7F, 0x0);
        }
        *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0xC);
        t234 = (int)((int)t223 / (int)0xA);
        *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = t234;
        *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 4) + 0xC) + 0x4);
        t235 = (int)((int)t223 % (int)0xA);
        *(unsigned int *)((((((int)stk + 4) + 0xC) + 0x4) + 0x0)) = t235;
        t236 = (int)((int)t224 / (int)0xA);
        *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x8)) = t236;
        t237 = (int)((int)t224 % (int)0xA);
        *(unsigned int *)(((((int)stk + 4) + 0xC) + 0xC)) = t237;
        t238 = (int)((int)t226 / (int)0xA);
        *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x10)) = t238;
        t239 = (int)((int)t226 % (int)0xA);
        *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x14)) = t239;
        t240 = *(int *)0xC1EE210;
        if (t240 != 2) {
            FUN_0c05423a(0xA);
        }
        *(unsigned int *)0xC2A7FB0 = 0x200E;
        *(float *)0xC2A7FA0 = 1.0f;
        *(unsigned int *)0xC2A7FA4 = 0x0;
        *(float *)0xC2A7F88 = 0.0399999991f;
        if ((int)t221 <= (int)0x258) {
            nlObjPutSetFadeColor(1.0f, 0.0f, 0.0f);
        } else {
            nlObjPutSetFadeColor(1.0f, 1.0f, 0.0f);
        }
        *(float *)0xC2A7F84 = 84.0f;
        t251 = *(int *)(((int)stk + 4));
        t252 = *(int *)((t251 + 0x0));
        if (t252 == 0) {
            t253 = *(int *)(((int)stk + 12));
            t254 = *(int *)((t253 + 0x0));
            if (t254 == 0) {
                t255 = 0xC054080;
                t256 = 0x2;
                for (;;) {
                    if ((int)t256 >= (int)0x6) {
                        break;
                    }
                    t255 = 0xC130BEC;
                    t257 = *(int *)((((t256 - 2) << 2) + t255));
                    t255 = 0x4;
                    *(float *)((0xC2A7F7C + t255)) = (float)t257;
                    t255 = t256;
                    t255 = (t255 << 2);
                    t258 = *(int *)(((((int)stk + 4) + 0xC) + t255));
                    t255 = 0xC0D0C08;
                    t259 = *(int *)(((t258 << 2) + t255));
                    *(unsigned int *)0xC2A7F7C = t259;
                    if ((int)t256 >= (int)0x4) {
                        t255 = 0x10;
                        *(float *)((0xC2A7F7C + t255)) = 0.5f;
                        t255 = 0x14;
                        *(float *)((0xC2A7F7C + t255)) = 0.5f;
                    } else {
                        t255 = 0x10;
                        *(float *)((0xC2A7F7C + t255)) = 1.0f;
                        t255 = 0x14;
                        *(float *)((0xC2A7F7C + t255)) = 1.0f;
                    }
                    t261 = nlSprPut(0xC2A7F7C);
                    t255 = t261;
                    t256 = (t256 + 0x1);
                }
                pfSetFont(0x2);
                pfSize(1.0f, 1.0f);
                if ((int)t221 <= (int)0x258) {
                    pfColor(0xFFFF0000, 0xFFFF0000, 0xFFFF0000, 0xFFFF0000);
                } else {
                    pfColor(0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00);
                }
                u269 = *(float *)0xC05428C;
                FUN_0c05778a(0xC2A7F7C, 0x10, u269, 34.0f);
                u271 = *(float *)0xC054298;
                u312 = u271;
            } else {
                t272 = *(int *)(((int)stk + 4));
                t273 = *(int *)((t272 + 0x0));
                if (t273 != 0) {
                    t274 = *(int *)0xC130BD4;
                    *(float *)0xC2A7F80 = (float)t274;
                    t275 = *(int *)(((int)stk + 4));
                    t276 = *(int *)((t275 + 0x0));
                    t277 = *(int *)(((t276 << 2) + 0xC0D0C08));
                    *(unsigned int *)0xC2A7F7C = t277;
                    *(float *)0xC2A7F8C = 1.0f;
                    *(float *)0xC2A7F90 = 1.0f;
                    t278 = nlSprPut(0xC2A7F7C);
                    t279 = t278;
                } else {
                    *(unsigned int *)(((int)stk + 8)) = 0x24;
                    t279 = 0xC054080;
                }
                t284 = t279;
                t285 = 0x1;
                for (;;) {
                    if ((int)t285 >= (int)0x6) {
                        break;
                    }
                    t284 = 0xC130BD4;
                    t286 = *(int *)(((int)stk + 8));
                    t287 = *(int *)(((t285 << 2) + t284));
                    *(float *)0xC2A7F80 = (float)(t287 - t286);
                    t284 = (t285 << 2);
                    t288 = *(int *)(((((int)stk + 4) + 0xC) + t284));
                    t284 = 0xC0D0C08;
                    t289 = *(int *)(((t288 << 2) + t284));
                    *(unsigned int *)0xC2A7F7C = t289;
                    if ((int)t285 >= (int)0x4) {
                        t284 = 0x10;
                        *(float *)((0xC2A7F7C + t284)) = 0.5f;
                        t284 = 0x14;
                        *(float *)((0xC2A7F7C + t284)) = 0.5f;
                    } else {
                        t284 = 0x10;
                        *(float *)((0xC2A7F7C + t284)) = 1.0f;
                        t284 = 0x14;
                        *(float *)((0xC2A7F7C + t284)) = 1.0f;
                    }
                    t291 = nlSprPut(0xC2A7F7C);
                    t284 = t291;
                    t285 = (t285 + 0x1);
                }
                pfSetFont(0x2);
                pfSize(1.0f, 1.0f);
                if ((int)t221 <= (int)0x258) {
                    pfColor(0xFFFF0000, 0xFFFF0000, 0xFFFF0000, 0xFFFF0000);
                } else {
                    pfColor(0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00);
                }
                t299 = *(int *)(((int)stk + 4));
                t300 = *(int *)((t299 + 0x0));
                if (t300 != 0) {
                    FUN_0c05778a(0xC2A7F7C, 0x10, 96.0f, 34.0f);
                    FUN_0c05778a(0xC2A7F7C, 0x10, 174.0f, 34.0f);
                    u308 = 182.0f;
                } else {
                    FUN_0c05778a(0xC2A7F7C, 0x10, 64.0f, 34.0f);
                    u304 = *(float *)0xC05428C;
                    FUN_0c05778a(0xC2A7F7C, 0x10, u304, 34.0f);
                    u306 = *(float *)0xC054298;
                    u308 = u306;
                }
                u312 = u308;
            }
            u354 = u312;
        } else {
            t314 = *(int *)(((int)stk + 4));
            t315 = *(int *)((t314 + 0x0));
            if (t315 != 0) {
                t316 = *(int *)0xC130BD4;
                *(float *)0xC2A7F80 = (float)t316;
                t317 = *(int *)(((int)stk + 4));
                t318 = *(int *)((t317 + 0x0));
                t319 = *(int *)(((t318 << 2) + 0xC0D0C08));
                *(unsigned int *)0xC2A7F7C = t319;
                *(float *)0xC2A7F8C = 1.0f;
                *(float *)0xC2A7F90 = 1.0f;
                t320 = nlSprPut(0xC2A7F7C);
                t321 = t320;
            } else {
                *(unsigned int *)(((int)stk + 8)) = 0x24;
                t321 = 0xC054080;
            }
            t326 = t321;
            t327 = 0x1;
            for (;;) {
                if ((int)t327 >= (int)0x6) {
                    break;
                }
                t326 = 0xC130BD4;
                t328 = *(int *)(((int)stk + 8));
                t329 = *(int *)(((t327 << 2) + t326));
                *(float *)0xC2A7F80 = (float)(t329 - t328);
                t326 = (t327 << 2);
                t330 = *(int *)(((((int)stk + 4) + 0xC) + t326));
                t326 = 0xC0D0C08;
                t331 = *(int *)(((t330 << 2) + t326));
                *(unsigned int *)0xC2A7F7C = t331;
                if ((int)t327 >= (int)0x4) {
                    t326 = 0x10;
                    *(float *)((0xC2A7F7C + t326)) = 0.5f;
                    t326 = 0x14;
                    *(float *)((0xC2A7F7C + t326)) = 0.5f;
                } else {
                    t326 = 0x10;
                    *(float *)((0xC2A7F7C + t326)) = 1.0f;
                    t326 = 0x14;
                    *(float *)((0xC2A7F7C + t326)) = 1.0f;
                }
                t333 = nlSprPut(0xC2A7F7C);
                t326 = t333;
                t327 = (t327 + 0x1);
            }
            pfSetFont(0x2);
            pfSize(1.0f, 1.0f);
            if ((int)t221 <= (int)0x258) {
                pfColor(0xFFFF0000, 0xFFFF0000, 0xFFFF0000, 0xFFFF0000);
            } else {
                pfColor(0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00);
            }
            t341 = *(int *)(((int)stk + 4));
            t342 = *(int *)((t341 + 0x0));
            if (t342 != 0) {
                FUN_0c05778a(0xC2A7F7C, 0x10, 96.0f, 34.0f);
                FUN_0c05778a(0xC2A7F7C, 0x10, 174.0f, 34.0f);
                u350 = 182.0f;
            } else {
                FUN_0c05778a(0xC2A7F7C, 0x10, 64.0f, 34.0f);
                u346 = *(float *)0xC05428C;
                FUN_0c05778a(0xC2A7F7C, 0x10, u346, 34.0f);
                u348 = *(float *)0xC054298;
                u350 = u348;
            }
            u354 = u350;
        }
        FUN_0c05778a(0xC2A7F7C, 0x10, u354, 34.0f);
        if ((int)t221 <= (int)0x258) {
            nlObjPutSetFadeColor(1.0f, 0.0f, 0.0f);
        }
        FUN_0c0543fc();
        ResetFadeColor();
        if ((int)t221 <= (int)0x258) {
            if ((int)t221 > 0) {
                t363 = (int)((int)t221 % (int)0x3C);
                if (t363 == 0) {
                    t364 = *(int *)0xC2A8E98;
                    if (t364 == 0) {
                        t365 = *(int *)0xC2A8CB0;
                        if (t365 == 0) {
                            Sound_Request(0x505A9, 0x0);
                            *(unsigned int *)0xC2A8CB0 = 0x1;
                        }
                    }
                }
            }
        }
        t392 = (int)((int)t221 % (int)0x3C);
        t397 = t392;
        if (t392 != 0) {
            t393 = *(int *)0xC2A8CB0;
            if (t393 == 1) {
                *(unsigned int *)0xC2A8CB0 = 0x0;
            }
            t397 = t393;
        }
        t402 = t397;
    }
    return t402;
}

int FUN_0c056460(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t8;
    float t9;
    int t10;
    int t11;
    float u12;
    float u13;
    float u14;
    float t24;
    int t25;
    int t26;
    float u27;
    float u28;
    float u29;
    float t39;
    int t40;
    int t41;
    float u42;
    float u43;
    float u44;
    float t54;
    int t55;
    int t56;
    float u57;
    float u58;
    float u59;
    int t69;
    int t70;
    int t71;
    int t72;
    int t73;
    int t82;
    int t83;
    int t85;
    int t86;
    int t87;
    int t88;
    int t89;
    int t90;
    int t91;
    int t92;
    int t93;
    int t98;
    int t94;
    int t95;
    int t104;
    float u105;
    int t107;
    int t108;
    int t114;
    int t115;
    int t116;
    float u117;
    int t124;
    float u125;
    int t132;
    float u133;
    float u134;
    float u147;
    int t148;
    int t149;
    float u18;
    float u33;
    float u48;
    float u63;
    int stk[22] = {0};

    t0 = *(int *)0xC0D0940;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x8)) = t0;
    t1 = *(int *)0xC0D093C;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x4)) = t1;
    t2 = *(int *)0xC0D0938;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x0)) = t2;
    t3 = *(int *)((a4 + 0x20));
    if ((int)t3 >= (int)0x50) {
        *(unsigned int *)0xC2A91B8 = 0x63;
        t4 = nlCloseEvent(a4);
        *(unsigned int *)0xC2A91B4 = 0x0;
        t149 = t4;
    } else {
        pfSetFont(0x0);
        pfColor(0xFFFFAA00, 0xFFFFFF00, 0xFFFFAA00, 0xFFFFFF00);
        pfSize(1.0f, 1.0f);
        t8 = *(int *)((a4 + 0x18));
        if (t8 != 0) {
            if (t8 != 1) {
                if (t8 != 2) {
                    if (t8 == 3) {
                        t9 = pfLength(0xC0D0990);
                        *(float *)(((int)stk + 12)) = (t9 * 0.5f);
                        t10 = *(int *)((a4 + 0x18));
                        t11 = *(int *)0xC2A91B8;
                        if (t11 != t10) {
                            u12 = *(float *)(((int)stk + 12));
                            u13 = *(float *)((a4 + 0x14));
                            u18 = (((-u12) + u13) + 530.0f);
                        } else {
                            u14 = *(float *)(((int)stk + 12));
                            u18 = (530.0f - u14);
                        }
                        pfLocate(u18, 136.0f);
                        pfPuts(0xC0D09A0);
                    }
                } else {
                    t24 = pfLength(0xC0D0970);
                    *(float *)(((int)stk + 8)) = t24;
                    t25 = *(int *)((a4 + 0x18));
                    t26 = *(int *)0xC2A91B8;
                    if (t26 != t25) {
                        u27 = *(float *)(((int)stk + 8));
                        u28 = *(float *)((a4 + 0x14));
                        u33 = (((-(u27 * 0.5f)) + u28) + 530.0f);
                    } else {
                        u29 = *(float *)(((int)stk + 8));
                        u33 = (530.0f - (u29 * 0.5f));
                    }
                    pfLocate(u33, 136.0f);
                    pfPuts(0xC0D0980);
                }
            } else {
                t39 = pfLength(0xC0D0954);
                *(float *)(((int)stk + 4)) = t39;
                t40 = *(int *)0xC2A91B8;
                t41 = *(int *)((a4 + 0x18));
                if (t40 != t41) {
                    u42 = *(float *)(((int)stk + 4));
                    u43 = *(float *)((a4 + 0x14));
                    u48 = (((-(u42 * 0.5f)) + u43) + 530.0f);
                } else {
                    u44 = *(float *)(((int)stk + 4));
                    u48 = (530.0f - (u44 * 0.5f));
                }
                pfLocate(u48, 136.0f);
                pfPuts(0xC0D0960);
            }
        } else {
            t54 = pfLength(0xC0D0944);
            *(float *)(((int)stk + 16)) = t54;
            t55 = *(int *)((a4 + 0x18));
            t56 = *(int *)0xC2A91B8;
            if (t56 != t55) {
                u57 = *(float *)(((int)stk + 16));
                u58 = *(float *)((a4 + 0x14));
                u63 = (((-(u57 * 0.5f)) + u58) + 530.0f);
            } else {
                u59 = *(float *)(((int)stk + 16));
                u63 = (530.0f - (u59 * 0.5f));
            }
            pfLocate(u63, 136.0f);
            pfPuts(0xC0D0944);
        }
        t69 = *(int *)((a4 + 0x1C));
        *(unsigned int *)0xC2A7610 = t69;
        t70 = *(int *)0xC1EE794;
        if ((int)t70 > 0) {
            t71 = *(int *)0xC2A7610;
            t72 = *(int *)0xC2A7614;
            if ((int)t72 < (int)t71) {
                t73 = *(int *)0xC2A7610;
                *(unsigned int *)0xC2A7614 = t73;
            }
        }
        t82 = *(int *)((a4 + 0x1C));
        if ((int)t82 <= (int)0x1) {
        } else {
            t83 = *(int *)((a4 + 0x1C));
            if ((int)t83 > (int)0x3E7) {
                *(unsigned int *)((a4 + 0x1C)) = 0x3E7;
            }
            t85 = *(int *)((a4 + 0x1C));
            t86 = (int)((int)t85 / (int)0x64);
            *(unsigned int *)((((((int)stk + 4) + 0x14) + 0x8) + 0x0)) = t86;
            t87 = *(int *)((a4 + 0x1C));
            t88 = (int)((int)t87 / (int)0xA);
            t89 = (int)((int)t88 % (int)0xA);
            *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x4)) = t89;
            t90 = *(int *)((((((int)stk + 4) + 0x14) + 0x8) + 0x0));
            t91 = *(int *)((a4 + 0x1C));
            t92 = (int)((int)(t91 - (t90 * 0x64)) % (int)0xA);
            *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x0)) = t92;
            t93 = *(int *)((((((int)stk + 4) + 0x14) + 0x8) + 0x0));
            t98 = 0x0;
            if (t93 == 0) {
                t94 = *(int *)(((((int)stk + 4) + 0x14) + 0x4));
                t95 = 0x18;
                if (t94 == 0) {
                    t95 = 0x30;
                }
                t98 = t95;
            }
            pfColor(0xFFFFFF00, 0xFFFFFFFF, 0xFFFFFF00, 0xFFFFFFFF);
            pfSize(1.0f, 1.0f);
            pfLocate((float)(t98 + 0x1E0), 166.0f);
            pfPuts(0xC0D09B0);
            *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 4) + 0x14) + 0x8);
            t104 = *(int *)((((((int)stk + 4) + 0x14) + 0x8) + 0x0));
            *(unsigned int *)0xC2A88DC = (t104 + 0x50);
            u105 = *(float *)((a4 + 0x14));
            *(float *)0xC2A88E0 = (u105 + 564.0f);
            *(float *)0xC2A88E4 = 166.0f;
            nlObjPutSetFadeColor(1.0f, 1.0f, 0.0f);
            t107 = *(int *)(((int)stk + 20));
            t108 = *(int *)((t107 + 0x0));
            if (t108 != 0) {
                nlSprPut(0xC2A88DC);
            }
            t114 = *(int *)((((((int)stk + 4) + 0x14) + 0x4) + 0x0));
            if (t114 == 0) {
                t115 = *(int *)(((((int)stk + 4) + 0x14) + 0x8));
                if (t115 != 0) {
                    t116 = *(int *)((((((int)stk + 4) + 0x14) + 0x4) + 0x0));
                    *(unsigned int *)0xC2A88DC = (t116 + 0x50);
                    u117 = *(float *)((a4 + 0x14));
                    *(float *)0xC2A88E0 = (u117 + 586.0f);
                    nlSprPut(0xC2A88DC);
                }
            } else {
                t124 = *(int *)((((((int)stk + 4) + 0x14) + 0x4) + 0x0));
                *(unsigned int *)0xC2A88DC = (t124 + 0x50);
                u125 = *(float *)((a4 + 0x14));
                *(float *)0xC2A88E0 = (u125 + 586.0f);
                nlSprPut(0xC2A88DC);
            }
            t132 = *(int *)(((((int)stk + 4) + 0x14) + 0x0));
            *(unsigned int *)0xC2A88DC = (t132 + 0x50);
            u133 = *(float *)0xC0568C4;
            u134 = *(float *)((a4 + 0x14));
            *(float *)0xC2A88E0 = (u134 + u133);
            nlSprPut(0xC2A88DC);
            ResetFadeColor();
        }
        u147 = *(float *)((a4 + 0x14));
        *(float *)((a4 + 0x14)) = (u147 * 0.699999988f);
        t148 = *(int *)((a4 + 0x20));
        *(unsigned int *)((a4 + 0x20)) = (t148 + 0x1);
        t149 = 0x14;
    }
    return t149;
}
