/* Straight-line functions with calls and guards (batch gen_eh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c031408(int);
int FUN_0c03bf42(void);
int FUN_0c03bf76(void);
int FUN_0c041016(int);
int FUN_0c05778a(int, int, float, float);
int FUN_0c074320(void);
int FUN_0c074510(int);
int FUN_0c0745e0(int);
int FUN_0c074ca0(int);
int FUN_0c075570(int);
int FUN_0c079a60(float, float, float, float);
int FUN_0c0813e0(int, int, int);
int PutVM_Message(int, int, int, float, float);
int ResetFadeColor(void);
extern void _builtin_set_imask(int);
int kmInitDevice(void);
int kmSetCullingRegister(float);
int kmSetDisplayMode(int, int, int, int);
int kmSetPALEXTCallback(int);
int kmSetWaitVsyncCount(int);
int memmove(int, int, int);
int menuCursor(int, int, int);
int nlObjPutSetFadeColor(float, float, float);
int pfColor(int, int, int, int);
float pfLength(int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFont(int);
int pfSetZ(float);
int pfSize(float, float);
int putLevelCTFontAssist(int, int, int, int, int);
int FUN_0c03c792(int a4, int a5, int a6, int a7);
void FUN_0c074740(int a4, int a5, int a6);
int FUN_0c05d862(void);
int FUN_0c03f038(void);

int FUN_0c03c792(int a4, int a5, int a6, int a7)
{
    float u1;
    float u4;
    float u30;
    float u37;
    int t31;
    float u32;
    float t41;
    float u42;
    float u50;
    int t53;
    float u65;
    int t54;
    int t55;
    float u56;
    float t57;
    float u67;
    float t68;
    float u69;
    float t70;
    float u71;
    float t72;
    float u73;
    float u84;
    float u95;
    float u98;
    float u96;
    float u100;
    float u46;
    float u43;
    float u80;
    float u75;

    if (((a5 + (a7 * 0x2C)) + 0xC) == 0) {
        return 0;
    }
    FUN_0c031408(0x1);
    u1 = *(float *)0xC2A1AD4;
    pfSetZ(u1);
    pfSetFont((0x3 & a4));
    u4 = *(float *)(((a5 + (a7 * 0x2C)) + 0x8));
    pfSize(u4, u4);
    if ((0x10 & a4) != 0) {
        pfColor(0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000);
    } else {
        if ((0x20 & a4) != 0) {
            pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
        } else {
            if ((0x40 & a4) != 0) {
                pfColor(0xFFFFC500, 0xFFFFC500, 0xFFFFC500, 0xFFFFC500);
            } else {
                if ((0x80 & a4) != 0) {
                    pfColor(0xFF707070, 0xFF707070, 0xFF707070, 0xFF707070);
                }
            }
        }
    }
    u30 = *(float *)(((a5 + (a7 * 0x2C)) + 0x0));
    u37 = u30;
    if ((0x2000 & a4) == 0) {
        t31 = *(int *)0xC2A1ADC;
        u32 = (u30 - (float)t31);
        if ((0x4000 & a4) != 0) {
            u32 = (u30 + (float)t31);
        }
        u37 = u32;
    }
    t41 = pfLength(((a5 + (a7 * 0x2C)) + 0xC));
    if ((0x4 & a4) != 0) {
        u42 = *(float *)0xC03CAA0;
        u46 = (-(t41 * u42));
    } else {
        if ((0x8 & a4) != 0) {
            u43 = (-t41);
        }
        u46 = u43;
    }
    u50 = *(float *)(((a5 + (a7 * 0x2C)) + 0x4));
    pfLocate((u37 + u46), u50);
    pfPuts(((a5 + (a7 * 0x2C)) + 0xC));
    if ((a4 & 0x8000) != 0) {
        t53 = *(int *)0xC1EE330;
        if ((t53 & 16) != 0) {
            u65 = t41;
            if ((int)a6 > 0) {
                t54 = 0x0;
                t55 = (0x0 + ((a5 + (a7 * 0x2C)) - (a7 * 0x2C)));
                u56 = t41;
                for (;;) {
                    t57 = pfLength((t55 + 0xC));
                    t54 = (t54 + 0x1);
                    if (t57 > u56) {
                        u56 = t57;
                    }
                    t55 = (t55 + 0x2C);
                    if ((int)t54 >= (int)a6) {
                        break;
                    }
                }
                u65 = u56;
            }
            u67 = *(float *)0xC03CAA0;
            if ((int)a7 > 0) {
                if ((0x4 & a4) != 0) {
                    t68 = pfLength(0xC0A2024);
                    u69 = *(float *)0xC03CAB8;
                    u80 = (((-(u65 * u67)) - t68) + u69);
                } else {
                    if ((0x8 & a4) != 0) {
                        t70 = pfLength(0xC0A2024);
                        u71 = *(float *)0xC03CAB8;
                        u75 = (((-u65) - t70) + u71);
                    } else {
                        t72 = pfLength(0xC0A2024);
                        u73 = *(float *)0xC03CAB8;
                        u75 = ((-t72) + u73);
                    }
                    u80 = u75;
                }
                u84 = *(float *)((((a5 + (a7 * 0x2C)) - (a7 * 0x2C)) + 0x4));
                pfLocate((u37 + u80), u84);
                pfPuts(0xC0A2028);
            }
            if ((int)a7 < (int)(a6 - 1)) {
                u95 = *(float *)0xC03CAC0;
                u98 = ((u65 * u67) + u95);
                if ((0x4 & a4) != 0) {
                } else {
                    u96 = (u65 + u95);
                    if ((0x8 & a4) != 0) {
                        u96 = u95;
                    }
                    u98 = u96;
                }
                u100 = *(float *)((((a5 + (a7 * 0x2C)) - (a7 * 0x2C)) + 0x4));
                pfLocate((u37 + u98), u100);
                pfPuts(0xC0A2024);
            }
        }
    }
    return FUN_0c031408(0x0);
}

void FUN_0c074740(int a4, int a5, int a6)
{
    int t5;
    int t12;
    int t13;
    int t15;
    int t19;
    int t20;
    int t21;
    int t22;
    int t24;
    int t25;
    int t28;
    int t29;
    int t30;
    int t33;
    int t31;
    float u41;

    *(unsigned int *)0xC2AED98 = 0x0;
    if (a4 == 0) {
        *(unsigned int *)0xC2AED98 = 0x1;
    }
    *(unsigned int *)0xC2AED9C = 0x0;
    if (a4 != 25) {
        if (a4 != 24) {
            if (a4 != 26) {
                if (a4 == 27) {
                    *(unsigned int *)0xC2AED9C = 0x1;
                }
            } else {
                *(unsigned int *)0xC2AED9C = 0x1;
            }
        } else {
            *(unsigned int *)0xC2AED9C = 0x1;
        }
    } else {
        *(unsigned int *)0xC2AED9C = 0x1;
    }
    _builtin_set_imask(0xE);
    t5 = *(int *)0xA05F689C;
    if ((int)t5 >= (int)0x8) {
        *(unsigned int *)0xC2AED40 = 0x1;
    } else {
        *(unsigned int *)0xC2AED40 = 0x0;
    }
    _builtin_set_gbr((void *)(0xC2B7BC0));
    FUN_0c074320();
    *(unsigned short *)0xC2B3194 = 0x0;
    *(unsigned short *)0xC2B3196 = 0x0;
    if ((0x80 & a5) != 0) {
        *(unsigned short *)0xC2B3194 = 0x1;
    }
    if ((0x8000 & a5) != 0) {
        *(unsigned short *)0xC2B3196 = 0x1;
    }
    t12 = *(int *)((((a5 & 0xF) << 2) + 0xC0D63D4));
    *(unsigned int *)0xC2AEDB8 = t12;
    t13 = *(int *)(((((a4 << 1) + a4) << 2) + 0xC0D6284));
    kmInitDevice();
    t15 = *(int *)0xC2AED9C;
    if (t15 == 1) {
        kmSetPALEXTCallback(0xC074310);
    }
    t19 = *(short *)0xC2B3196;
    t20 = *(short *)0xC2B3194;
    t21 = *(int *)0xC2AEDB8;
    t22 = *(int *)((((((a4 << 1) + a4) << 2) + 0xC0D6284) + 0x4));
    kmSetDisplayMode(t22, t21, t20, t19);
    t24 = *(short *)((((((a4 << 1) + a4) << 2) + 0xC0D6284) + 0x8));
    *(unsigned short *)0xC2B3190 = t24;
    t25 = *(short *)((((((a4 << 1) + a4) << 2) + 0xC0D6284) + 0xA));
    *(unsigned short *)0xC2B3192 = t25;
    FUN_0c0745e0(0xC2AF388);
    FUN_0c074510(0xC2B29C8);
    *(unsigned int *)0xC2B2FC8 = 0xC2B29C8;
    *(unsigned int *)0xC2B2FCC = 0x0;
    *(unsigned int *)0xC2B3180 = 0xFFFFFFFF;
    *(unsigned int *)0xC2B3188 = 0x0;
    *(unsigned int *)0xC2B3198 = 0x0;
    *(unsigned int *)0xC2B317C = 0x0;
    *(float *)0xC2B31AC = 0.0f;
    *(float *)0xC2B31B0 = 0.0f;
    *(float *)0xC2B31B4 = 0.0f;
    *(float *)0xC2B31B8 = 0.0f;
    *(unsigned int *)0xC2B319C = 0x0;
    *(unsigned int *)0xC2B31A0 = 0x0;
    *(unsigned int *)0xC2B31A4 = 0x0;
    *(unsigned int *)0xC2B31A8 = 0x0;
    *(float *)0xC2B7BE8 = 1.0f;
    *(unsigned int *)0xC2B7C04 = 0x0;
    t28 = *(short *)0xC2B3192;
    t29 = *(short *)0xC2B3190;
    if (0x0 != 0) {
        t30 = *(short *)0xC2B3196;
        t33 = (short)t28;
        if (t30 == 1) {
            t31 = ((short)t28 + (short)t28);
            if ((int)((short)t28 + (short)t28) > (int)0x1E0) {
                t31 = 0x1E0;
            }
            t33 = t31;
        }
        FUN_0c079a60(0.0f, 0.0f, (float)t29, (float)t33);
    } else {
        FUN_0c079a60(0.0f, 0.0f, (float)t29, (float)(short)t28);
    }
    u41 = *(float *)0xC074A34;
    kmSetCullingRegister(u41);
    *(unsigned int *)0xFF000038 = 0xC;
    *(unsigned int *)0xFF00003C = 0xC;
    *(unsigned int *)0xC2AEDA0 = a6;
    kmSetWaitVsyncCount(a6);
    FUN_0c074ca0(0x200000);
    FUN_0c075570(0x0);
    *(unsigned int *)0xC2AEDC0 = 0x0;
    _builtin_set_imask(0x0);
}

int FUN_0c05d862(void)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    float u221;
    float u222;
    float u223;
    int t10;
    float u214;
    float u215;
    float u216;
    float u207;
    float u208;
    float u209;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    float u59;
    float u60;
    float u61;
    int t16;
    int t17;
    float u33;
    float u34;
    float u35;
    int t18;
    float u26;
    float u27;
    float u28;
    int t19;
    float u20;
    float u21;
    float u22;
    int t37;
    float u45;
    float u46;
    float u47;
    int t38;
    float u39;
    float u40;
    float u41;
    int t63;
    int t64;
    float u80;
    float u81;
    float u82;
    int t65;
    float u73;
    float u74;
    float u75;
    int t66;
    float u67;
    float u68;
    float u69;
    int t84;
    float u92;
    float u93;
    float u94;
    int t85;
    float u86;
    float u87;
    float u88;
    int t110;
    int t111;
    float u127;
    float u128;
    float u129;
    int t112;
    float u120;
    float u121;
    float u122;
    int t113;
    float u114;
    float u115;
    float u116;
    int t131;
    float u139;
    float u140;
    float u141;
    int t132;
    float u133;
    float u134;
    float u135;
    int t157;
    int t158;
    float u174;
    float u175;
    float u176;
    int t159;
    float u167;
    float u168;
    float u169;
    int t160;
    float u161;
    float u162;
    float u163;
    int t178;
    float u186;
    float u187;
    float u188;
    int t179;
    float u180;
    float u181;
    float u182;
    int t225;
    float u429;
    float u430;
    float u431;
    float u422;
    float u423;
    float u424;
    int t226;
    int t227;
    int t228;
    int t229;
    int t230;
    float u274;
    float u275;
    float u276;
    int t231;
    int t232;
    float u248;
    float u249;
    float u250;
    int t233;
    float u241;
    float u242;
    float u243;
    int t234;
    float u235;
    float u236;
    float u237;
    int t252;
    float u260;
    float u261;
    float u262;
    int t253;
    float u254;
    float u255;
    float u256;
    int t278;
    int t279;
    float u295;
    float u296;
    float u297;
    int t280;
    float u288;
    float u289;
    float u290;
    int t281;
    float u282;
    float u283;
    float u284;
    int t299;
    float u307;
    float u308;
    float u309;
    int t300;
    float u301;
    float u302;
    float u303;
    int t325;
    int t326;
    float u342;
    float u343;
    float u344;
    int t327;
    float u335;
    float u336;
    float u337;
    int t328;
    float u329;
    float u330;
    float u331;
    int t346;
    float u354;
    float u355;
    float u356;
    int t347;
    float u348;
    float u349;
    float u350;
    int t372;
    int t373;
    float u389;
    float u390;
    float u391;
    int t374;
    float u382;
    float u383;
    float u384;
    int t375;
    float u376;
    float u377;
    float u378;
    int t393;
    float u401;
    float u402;
    float u403;
    int t394;
    float u395;
    float u396;
    float u397;
    float u638;
    float u639;
    float u640;
    int t440;
    int t442;
    int t443;
    int t444;
    int t445;
    float u489;
    float u490;
    float u491;
    int t446;
    int t447;
    float u463;
    float u464;
    float u465;
    int t448;
    float u456;
    float u457;
    float u458;
    int t449;
    float u450;
    float u451;
    float u452;
    int t467;
    float u475;
    float u476;
    float u477;
    int t468;
    float u469;
    float u470;
    float u471;
    int t493;
    int t494;
    float u510;
    float u511;
    float u512;
    int t495;
    float u503;
    float u504;
    float u505;
    int t496;
    float u497;
    float u498;
    float u499;
    int t514;
    float u522;
    float u523;
    float u524;
    int t515;
    float u516;
    float u517;
    float u518;
    int t540;
    int t541;
    float u557;
    float u558;
    float u559;
    int t542;
    float u550;
    float u551;
    float u552;
    int t543;
    float u544;
    float u545;
    float u546;
    int t561;
    float u569;
    float u570;
    float u571;
    int t562;
    float u563;
    float u564;
    float u565;
    int t587;
    int t588;
    float u604;
    float u605;
    float u606;
    int t589;
    float u597;
    float u598;
    float u599;
    int t590;
    float u591;
    float u592;
    float u593;
    int t608;
    float u616;
    float u617;
    float u618;
    int t609;
    float u610;
    float u611;
    float u612;
    int t650;
    int t652;
    int t655;
    int t658;
    int t659;
    int t2;
    float u646;
    float u647;
    float u648;
    float u436;
    float u437;
    float u438;
    float u200;
    float u201;
    float u202;
    float u153;
    float u154;
    float u155;
    float u106;
    float u107;
    float u108;
    float u52;
    float u53;
    float u54;
    float u99;
    float u100;
    float u101;
    float u146;
    float u147;
    float u148;
    float u193;
    float u194;
    float u195;
    float u415;
    float u416;
    float u417;
    float u368;
    float u369;
    float u370;
    float u321;
    float u322;
    float u323;
    float u267;
    float u268;
    float u269;
    float u314;
    float u315;
    float u316;
    float u361;
    float u362;
    float u363;
    float u408;
    float u409;
    float u410;
    float u630;
    float u631;
    float u632;
    float u583;
    float u584;
    float u585;
    float u536;
    float u537;
    float u538;
    float u482;
    float u483;
    float u484;
    float u529;
    float u530;
    float u531;
    float u576;
    float u577;
    float u578;
    float u623;
    float u624;
    float u625;

    t0 = *(int *)0xC2A9968;
    *(unsigned int *)0xC2A9968 = (t0 + 0x1);
    t1 = 0xC05D8F0;
    t3 = 0x1;
    for (;;) {
        t4 = *(int *)0xC2A9900;
        if ((int)t3 <= (int)t4) {
            t5 = *(int *)0xC1EE214;
            t1 = t5;
            if (t1 != 14) {
                t6 = t1;
                t1 = 0xC2A9A38;
                t7 = *(int *)((t1 + 0x0));
                t1 = 0x3C;
                t8 = (int)((int)t7 % (int)t1);
                t1 = t8;
                if ((int)t1 < (int)0x1E) {
                    t9 = *(int *)0xC2A9928;
                    t1 = t9;
                    u221 = 0.299999982f;
                    u222 = 0.299999982f;
                    u223 = 0.299999982f;
                    if (t1 != t3) {
                        t10 = *(int *)0xC2A98EC;
                        u214 = 0.299999982f;
                        u215 = 0.299999982f;
                        u216 = 0.299999982f;
                        if ((int)t10 >= (int)t3) {
                            t1 = t6;
                            u207 = 1.0f;
                            u208 = 1.0f;
                            u209 = 1.0f;
                            if (t1 == 14) {
                                t11 = *(int *)0xC2A9A38;
                                t1 = 0x3C;
                                t12 = (int)((int)t11 % (int)t1);
                                t1 = t12;
                                if ((int)t1 < (int)0x1E) {
                                    t1 = 0x1;
                                    t13 = *(int *)0xC2A9A2C;
                                    if ((int)t13 >= (int)t1) {
                                        t14 = *(int *)0xC2A9A2C;
                                        if ((0x8 - t14) == t3) {
                                            t15 = *(int *)0xC2A9A34;
                                            t1 = t15;
                                            u59 = 0.299999982f;
                                            u60 = 0.299999982f;
                                            u61 = 0.299999982f;
                                            if (t1 != 1) {
                                                t1 = 0xC2A9A2C;
                                                t16 = *(int *)((t1 + 0x0));
                                                if ((int)(0x8 - t16) < (int)t3) {
                                                    t17 = *(int *)0xC2A9A34;
                                                    t1 = t17;
                                                    u33 = 0.299999982f;
                                                    u34 = 0.299999982f;
                                                    u35 = 0.299999982f;
                                                    if (t1 != 1) {
                                                        t1 = 0xC2A9A2C;
                                                        t18 = *(int *)((t1 + 0x0));
                                                        u26 = 1.0f;
                                                        u27 = 1.0f;
                                                        u28 = 1.0f;
                                                        if ((int)(0x7 - t18) < (int)t3) {
                                                            t19 = *(int *)0xC2A9A34;
                                                            u20 = 1.0f;
                                                            u21 = 1.0f;
                                                            u22 = 1.0f;
                                                            if (t19 == 0) {
                                                                u20 = 0.299999982f;
                                                                u21 = 0.299999982f;
                                                                u22 = 0.299999982f;
                                                            }
                                                            u26 = u20;
                                                            u27 = u21;
                                                            u28 = u22;
                                                        }
                                                        u33 = u26;
                                                        u34 = u27;
                                                        u35 = u28;
                                                    }
                                                    u52 = u33;
                                                    u53 = u34;
                                                    u54 = u35;
                                                } else {
                                                    t1 = 0xC2A9A2C;
                                                    t37 = *(int *)((t1 + 0x0));
                                                    u45 = 1.0f;
                                                    u46 = 1.0f;
                                                    u47 = 1.0f;
                                                    if ((int)(0x7 - t37) < (int)t3) {
                                                        t38 = *(int *)0xC2A9A34;
                                                        u39 = 1.0f;
                                                        u40 = 1.0f;
                                                        u41 = 1.0f;
                                                        if (t38 == 0) {
                                                            u39 = 0.299999982f;
                                                            u40 = 0.299999982f;
                                                            u41 = 0.299999982f;
                                                        }
                                                        u45 = u39;
                                                        u46 = u40;
                                                        u47 = u41;
                                                    }
                                                    u52 = u45;
                                                    u53 = u46;
                                                    u54 = u47;
                                                }
                                                u59 = u52;
                                                u60 = u53;
                                                u61 = u54;
                                            }
                                            u106 = u59;
                                            u107 = u60;
                                            u108 = u61;
                                        } else {
                                            t1 = 0xC2A9A2C;
                                            t63 = *(int *)((t1 + 0x0));
                                            if ((int)(0x8 - t63) < (int)t3) {
                                                t64 = *(int *)0xC2A9A34;
                                                t1 = t64;
                                                u80 = 0.299999982f;
                                                u81 = 0.299999982f;
                                                u82 = 0.299999982f;
                                                if (t1 != 1) {
                                                    t1 = 0xC2A9A2C;
                                                    t65 = *(int *)((t1 + 0x0));
                                                    u73 = 1.0f;
                                                    u74 = 1.0f;
                                                    u75 = 1.0f;
                                                    if ((int)(0x7 - t65) < (int)t3) {
                                                        t66 = *(int *)0xC2A9A34;
                                                        u67 = 1.0f;
                                                        u68 = 1.0f;
                                                        u69 = 1.0f;
                                                        if (t66 == 0) {
                                                            u67 = 0.299999982f;
                                                            u68 = 0.299999982f;
                                                            u69 = 0.299999982f;
                                                        }
                                                        u73 = u67;
                                                        u74 = u68;
                                                        u75 = u69;
                                                    }
                                                    u80 = u73;
                                                    u81 = u74;
                                                    u82 = u75;
                                                }
                                                u99 = u80;
                                                u100 = u81;
                                                u101 = u82;
                                            } else {
                                                t1 = 0xC2A9A2C;
                                                t84 = *(int *)((t1 + 0x0));
                                                u92 = 1.0f;
                                                u93 = 1.0f;
                                                u94 = 1.0f;
                                                if ((int)(0x7 - t84) < (int)t3) {
                                                    t85 = *(int *)0xC2A9A34;
                                                    u86 = 1.0f;
                                                    u87 = 1.0f;
                                                    u88 = 1.0f;
                                                    if (t85 == 0) {
                                                        u86 = 0.299999982f;
                                                        u87 = 0.299999982f;
                                                        u88 = 0.299999982f;
                                                    }
                                                    u92 = u86;
                                                    u93 = u87;
                                                    u94 = u88;
                                                }
                                                u99 = u92;
                                                u100 = u93;
                                                u101 = u94;
                                            }
                                            u106 = u99;
                                            u107 = u100;
                                            u108 = u101;
                                        }
                                        u153 = u106;
                                        u154 = u107;
                                        u155 = u108;
                                    } else {
                                        t1 = 0xC2A9A2C;
                                        t110 = *(int *)((t1 + 0x0));
                                        if ((int)(0x8 - t110) < (int)t3) {
                                            t111 = *(int *)0xC2A9A34;
                                            t1 = t111;
                                            u127 = 0.299999982f;
                                            u128 = 0.299999982f;
                                            u129 = 0.299999982f;
                                            if (t1 != 1) {
                                                t1 = 0xC2A9A2C;
                                                t112 = *(int *)((t1 + 0x0));
                                                u120 = 1.0f;
                                                u121 = 1.0f;
                                                u122 = 1.0f;
                                                if ((int)(0x7 - t112) < (int)t3) {
                                                    t113 = *(int *)0xC2A9A34;
                                                    u114 = 1.0f;
                                                    u115 = 1.0f;
                                                    u116 = 1.0f;
                                                    if (t113 == 0) {
                                                        u114 = 0.299999982f;
                                                        u115 = 0.299999982f;
                                                        u116 = 0.299999982f;
                                                    }
                                                    u120 = u114;
                                                    u121 = u115;
                                                    u122 = u116;
                                                }
                                                u127 = u120;
                                                u128 = u121;
                                                u129 = u122;
                                            }
                                            u146 = u127;
                                            u147 = u128;
                                            u148 = u129;
                                        } else {
                                            t1 = 0xC2A9A2C;
                                            t131 = *(int *)((t1 + 0x0));
                                            u139 = 1.0f;
                                            u140 = 1.0f;
                                            u141 = 1.0f;
                                            if ((int)(0x7 - t131) < (int)t3) {
                                                t132 = *(int *)0xC2A9A34;
                                                u133 = 1.0f;
                                                u134 = 1.0f;
                                                u135 = 1.0f;
                                                if (t132 == 0) {
                                                    u133 = 0.299999982f;
                                                    u134 = 0.299999982f;
                                                    u135 = 0.299999982f;
                                                }
                                                u139 = u133;
                                                u140 = u134;
                                                u141 = u135;
                                            }
                                            u146 = u139;
                                            u147 = u140;
                                            u148 = u141;
                                        }
                                        u153 = u146;
                                        u154 = u147;
                                        u155 = u148;
                                    }
                                    u200 = u153;
                                    u201 = u154;
                                    u202 = u155;
                                } else {
                                    t1 = 0xC2A9A2C;
                                    t157 = *(int *)((t1 + 0x0));
                                    if ((int)(0x8 - t157) < (int)t3) {
                                        t158 = *(int *)0xC2A9A34;
                                        t1 = t158;
                                        u174 = 0.299999982f;
                                        u175 = 0.299999982f;
                                        u176 = 0.299999982f;
                                        if (t1 != 1) {
                                            t1 = 0xC2A9A2C;
                                            t159 = *(int *)((t1 + 0x0));
                                            u167 = 1.0f;
                                            u168 = 1.0f;
                                            u169 = 1.0f;
                                            if ((int)(0x7 - t159) < (int)t3) {
                                                t160 = *(int *)0xC2A9A34;
                                                u161 = 1.0f;
                                                u162 = 1.0f;
                                                u163 = 1.0f;
                                                if (t160 == 0) {
                                                    u161 = 0.299999982f;
                                                    u162 = 0.299999982f;
                                                    u163 = 0.299999982f;
                                                }
                                                u167 = u161;
                                                u168 = u162;
                                                u169 = u163;
                                            }
                                            u174 = u167;
                                            u175 = u168;
                                            u176 = u169;
                                        }
                                        u193 = u174;
                                        u194 = u175;
                                        u195 = u176;
                                    } else {
                                        t1 = 0xC2A9A2C;
                                        t178 = *(int *)((t1 + 0x0));
                                        u186 = 1.0f;
                                        u187 = 1.0f;
                                        u188 = 1.0f;
                                        if ((int)(0x7 - t178) < (int)t3) {
                                            t179 = *(int *)0xC2A9A34;
                                            u180 = 1.0f;
                                            u181 = 1.0f;
                                            u182 = 1.0f;
                                            if (t179 == 0) {
                                                u180 = 0.299999982f;
                                                u181 = 0.299999982f;
                                                u182 = 0.299999982f;
                                            }
                                            u186 = u180;
                                            u187 = u181;
                                            u188 = u182;
                                        }
                                        u193 = u186;
                                        u194 = u187;
                                        u195 = u188;
                                    }
                                    u200 = u193;
                                    u201 = u194;
                                    u202 = u195;
                                }
                                u207 = u200;
                                u208 = u201;
                                u209 = u202;
                            }
                            u214 = u207;
                            u215 = u208;
                            u216 = u209;
                        }
                        u221 = u214;
                        u222 = u215;
                        u223 = u216;
                    }
                    u436 = u221;
                    u437 = u222;
                    u438 = u223;
                } else {
                    t225 = *(int *)0xC2A98EC;
                    u429 = 0.299999982f;
                    u430 = 0.299999982f;
                    u431 = 0.299999982f;
                    if ((int)t225 >= (int)t3) {
                        t1 = t6;
                        u422 = 1.0f;
                        u423 = 1.0f;
                        u424 = 1.0f;
                        if (t1 == 14) {
                            t226 = *(int *)0xC2A9A38;
                            t1 = 0x3C;
                            t227 = (int)((int)t226 % (int)t1);
                            t1 = t227;
                            if ((int)t1 < (int)0x1E) {
                                t1 = 0x1;
                                t228 = *(int *)0xC2A9A2C;
                                if ((int)t228 >= (int)t1) {
                                    t229 = *(int *)0xC2A9A2C;
                                    if ((0x8 - t229) == t3) {
                                        t230 = *(int *)0xC2A9A34;
                                        t1 = t230;
                                        u274 = 0.299999982f;
                                        u275 = 0.299999982f;
                                        u276 = 0.299999982f;
                                        if (t1 != 1) {
                                            t1 = 0xC2A9A2C;
                                            t231 = *(int *)((t1 + 0x0));
                                            if ((int)(0x8 - t231) < (int)t3) {
                                                t232 = *(int *)0xC2A9A34;
                                                t1 = t232;
                                                u248 = 0.299999982f;
                                                u249 = 0.299999982f;
                                                u250 = 0.299999982f;
                                                if (t1 != 1) {
                                                    t1 = 0xC2A9A2C;
                                                    t233 = *(int *)((t1 + 0x0));
                                                    u241 = 1.0f;
                                                    u242 = 1.0f;
                                                    u243 = 1.0f;
                                                    if ((int)(0x7 - t233) < (int)t3) {
                                                        t234 = *(int *)0xC2A9A34;
                                                        u235 = 1.0f;
                                                        u236 = 1.0f;
                                                        u237 = 1.0f;
                                                        if (t234 == 0) {
                                                            u235 = 0.299999982f;
                                                            u236 = 0.299999982f;
                                                            u237 = 0.299999982f;
                                                        }
                                                        u241 = u235;
                                                        u242 = u236;
                                                        u243 = u237;
                                                    }
                                                    u248 = u241;
                                                    u249 = u242;
                                                    u250 = u243;
                                                }
                                                u267 = u248;
                                                u268 = u249;
                                                u269 = u250;
                                            } else {
                                                t1 = 0xC2A9A2C;
                                                t252 = *(int *)((t1 + 0x0));
                                                u260 = 1.0f;
                                                u261 = 1.0f;
                                                u262 = 1.0f;
                                                if ((int)(0x7 - t252) < (int)t3) {
                                                    t253 = *(int *)0xC2A9A34;
                                                    u254 = 1.0f;
                                                    u255 = 1.0f;
                                                    u256 = 1.0f;
                                                    if (t253 == 0) {
                                                        u254 = 0.299999982f;
                                                        u255 = 0.299999982f;
                                                        u256 = 0.299999982f;
                                                    }
                                                    u260 = u254;
                                                    u261 = u255;
                                                    u262 = u256;
                                                }
                                                u267 = u260;
                                                u268 = u261;
                                                u269 = u262;
                                            }
                                            u274 = u267;
                                            u275 = u268;
                                            u276 = u269;
                                        }
                                        u321 = u274;
                                        u322 = u275;
                                        u323 = u276;
                                    } else {
                                        t1 = 0xC2A9A2C;
                                        t278 = *(int *)((t1 + 0x0));
                                        if ((int)(0x8 - t278) < (int)t3) {
                                            t279 = *(int *)0xC2A9A34;
                                            t1 = t279;
                                            u295 = 0.299999982f;
                                            u296 = 0.299999982f;
                                            u297 = 0.299999982f;
                                            if (t1 != 1) {
                                                t1 = 0xC2A9A2C;
                                                t280 = *(int *)((t1 + 0x0));
                                                u288 = 1.0f;
                                                u289 = 1.0f;
                                                u290 = 1.0f;
                                                if ((int)(0x7 - t280) < (int)t3) {
                                                    t281 = *(int *)0xC2A9A34;
                                                    u282 = 1.0f;
                                                    u283 = 1.0f;
                                                    u284 = 1.0f;
                                                    if (t281 == 0) {
                                                        u282 = 0.299999982f;
                                                        u283 = 0.299999982f;
                                                        u284 = 0.299999982f;
                                                    }
                                                    u288 = u282;
                                                    u289 = u283;
                                                    u290 = u284;
                                                }
                                                u295 = u288;
                                                u296 = u289;
                                                u297 = u290;
                                            }
                                            u314 = u295;
                                            u315 = u296;
                                            u316 = u297;
                                        } else {
                                            t1 = 0xC2A9A2C;
                                            t299 = *(int *)((t1 + 0x0));
                                            u307 = 1.0f;
                                            u308 = 1.0f;
                                            u309 = 1.0f;
                                            if ((int)(0x7 - t299) < (int)t3) {
                                                t300 = *(int *)0xC2A9A34;
                                                u301 = 1.0f;
                                                u302 = 1.0f;
                                                u303 = 1.0f;
                                                if (t300 == 0) {
                                                    u301 = 0.299999982f;
                                                    u302 = 0.299999982f;
                                                    u303 = 0.299999982f;
                                                }
                                                u307 = u301;
                                                u308 = u302;
                                                u309 = u303;
                                            }
                                            u314 = u307;
                                            u315 = u308;
                                            u316 = u309;
                                        }
                                        u321 = u314;
                                        u322 = u315;
                                        u323 = u316;
                                    }
                                    u368 = u321;
                                    u369 = u322;
                                    u370 = u323;
                                } else {
                                    t1 = 0xC2A9A2C;
                                    t325 = *(int *)((t1 + 0x0));
                                    if ((int)(0x8 - t325) < (int)t3) {
                                        t326 = *(int *)0xC2A9A34;
                                        t1 = t326;
                                        u342 = 0.299999982f;
                                        u343 = 0.299999982f;
                                        u344 = 0.299999982f;
                                        if (t1 != 1) {
                                            t1 = 0xC2A9A2C;
                                            t327 = *(int *)((t1 + 0x0));
                                            u335 = 1.0f;
                                            u336 = 1.0f;
                                            u337 = 1.0f;
                                            if ((int)(0x7 - t327) < (int)t3) {
                                                t328 = *(int *)0xC2A9A34;
                                                u329 = 1.0f;
                                                u330 = 1.0f;
                                                u331 = 1.0f;
                                                if (t328 == 0) {
                                                    u329 = 0.299999982f;
                                                    u330 = 0.299999982f;
                                                    u331 = 0.299999982f;
                                                }
                                                u335 = u329;
                                                u336 = u330;
                                                u337 = u331;
                                            }
                                            u342 = u335;
                                            u343 = u336;
                                            u344 = u337;
                                        }
                                        u361 = u342;
                                        u362 = u343;
                                        u363 = u344;
                                    } else {
                                        t1 = 0xC2A9A2C;
                                        t346 = *(int *)((t1 + 0x0));
                                        u354 = 1.0f;
                                        u355 = 1.0f;
                                        u356 = 1.0f;
                                        if ((int)(0x7 - t346) < (int)t3) {
                                            t347 = *(int *)0xC2A9A34;
                                            u348 = 1.0f;
                                            u349 = 1.0f;
                                            u350 = 1.0f;
                                            if (t347 == 0) {
                                                u348 = 0.299999982f;
                                                u349 = 0.299999982f;
                                                u350 = 0.299999982f;
                                            }
                                            u354 = u348;
                                            u355 = u349;
                                            u356 = u350;
                                        }
                                        u361 = u354;
                                        u362 = u355;
                                        u363 = u356;
                                    }
                                    u368 = u361;
                                    u369 = u362;
                                    u370 = u363;
                                }
                                u415 = u368;
                                u416 = u369;
                                u417 = u370;
                            } else {
                                t1 = 0xC2A9A2C;
                                t372 = *(int *)((t1 + 0x0));
                                if ((int)(0x8 - t372) < (int)t3) {
                                    t373 = *(int *)0xC2A9A34;
                                    t1 = t373;
                                    u389 = 0.299999982f;
                                    u390 = 0.299999982f;
                                    u391 = 0.299999982f;
                                    if (t1 != 1) {
                                        t1 = 0xC2A9A2C;
                                        t374 = *(int *)((t1 + 0x0));
                                        u382 = 1.0f;
                                        u383 = 1.0f;
                                        u384 = 1.0f;
                                        if ((int)(0x7 - t374) < (int)t3) {
                                            t375 = *(int *)0xC2A9A34;
                                            u376 = 1.0f;
                                            u377 = 1.0f;
                                            u378 = 1.0f;
                                            if (t375 == 0) {
                                                u376 = 0.299999982f;
                                                u377 = 0.299999982f;
                                                u378 = 0.299999982f;
                                            }
                                            u382 = u376;
                                            u383 = u377;
                                            u384 = u378;
                                        }
                                        u389 = u382;
                                        u390 = u383;
                                        u391 = u384;
                                    }
                                    u408 = u389;
                                    u409 = u390;
                                    u410 = u391;
                                } else {
                                    t1 = 0xC2A9A2C;
                                    t393 = *(int *)((t1 + 0x0));
                                    u401 = 1.0f;
                                    u402 = 1.0f;
                                    u403 = 1.0f;
                                    if ((int)(0x7 - t393) < (int)t3) {
                                        t394 = *(int *)0xC2A9A34;
                                        u395 = 1.0f;
                                        u396 = 1.0f;
                                        u397 = 1.0f;
                                        if (t394 == 0) {
                                            u395 = 0.299999982f;
                                            u396 = 0.299999982f;
                                            u397 = 0.299999982f;
                                        }
                                        u401 = u395;
                                        u402 = u396;
                                        u403 = u397;
                                    }
                                    u408 = u401;
                                    u409 = u402;
                                    u410 = u403;
                                }
                                u415 = u408;
                                u416 = u409;
                                u417 = u410;
                            }
                            u422 = u415;
                            u423 = u416;
                            u424 = u417;
                        }
                        u429 = u422;
                        u430 = u423;
                        u431 = u424;
                    }
                    u436 = u429;
                    u437 = u430;
                    u438 = u431;
                }
                u646 = u436;
                u647 = u437;
                u648 = u438;
            } else {
                u638 = 1.0f;
                u639 = 1.0f;
                u640 = 1.0f;
                if (t1 == 14) {
                    t440 = *(int *)0xC2A9A38;
                    t1 = 0x3C;
                    t442 = (int)((int)t440 % (int)t1);
                    t1 = t442;
                    if ((int)t1 < (int)0x1E) {
                        t1 = 0x1;
                        t443 = *(int *)0xC2A9A2C;
                        if ((int)t443 >= (int)t1) {
                            t444 = *(int *)0xC2A9A2C;
                            if ((0x8 - t444) == t3) {
                                t445 = *(int *)0xC2A9A34;
                                t1 = t445;
                                u489 = 0.299999982f;
                                u490 = 0.299999982f;
                                u491 = 0.299999982f;
                                if (t1 != 1) {
                                    t1 = 0xC2A9A2C;
                                    t446 = *(int *)((t1 + 0x0));
                                    if ((int)(0x8 - t446) < (int)t3) {
                                        t447 = *(int *)0xC2A9A34;
                                        t1 = t447;
                                        u463 = 0.299999982f;
                                        u464 = 0.299999982f;
                                        u465 = 0.299999982f;
                                        if (t1 != 1) {
                                            t1 = 0xC2A9A2C;
                                            t448 = *(int *)((t1 + 0x0));
                                            u456 = 1.0f;
                                            u457 = 1.0f;
                                            u458 = 1.0f;
                                            if ((int)(0x7 - t448) < (int)t3) {
                                                t449 = *(int *)0xC2A9A34;
                                                u450 = 1.0f;
                                                u451 = 1.0f;
                                                u452 = 1.0f;
                                                if (t449 == 0) {
                                                    u450 = 0.299999982f;
                                                    u451 = 0.299999982f;
                                                    u452 = 0.299999982f;
                                                }
                                                u456 = u450;
                                                u457 = u451;
                                                u458 = u452;
                                            }
                                            u463 = u456;
                                            u464 = u457;
                                            u465 = u458;
                                        }
                                        u482 = u463;
                                        u483 = u464;
                                        u484 = u465;
                                    } else {
                                        t1 = 0xC2A9A2C;
                                        t467 = *(int *)((t1 + 0x0));
                                        u475 = 1.0f;
                                        u476 = 1.0f;
                                        u477 = 1.0f;
                                        if ((int)(0x7 - t467) < (int)t3) {
                                            t468 = *(int *)0xC2A9A34;
                                            u469 = 1.0f;
                                            u470 = 1.0f;
                                            u471 = 1.0f;
                                            if (t468 == 0) {
                                                u469 = 0.299999982f;
                                                u470 = 0.299999982f;
                                                u471 = 0.299999982f;
                                            }
                                            u475 = u469;
                                            u476 = u470;
                                            u477 = u471;
                                        }
                                        u482 = u475;
                                        u483 = u476;
                                        u484 = u477;
                                    }
                                    u489 = u482;
                                    u490 = u483;
                                    u491 = u484;
                                }
                                u536 = u489;
                                u537 = u490;
                                u538 = u491;
                            } else {
                                t1 = 0xC2A9A2C;
                                t493 = *(int *)((t1 + 0x0));
                                if ((int)(0x8 - t493) < (int)t3) {
                                    t494 = *(int *)0xC2A9A34;
                                    t1 = t494;
                                    u510 = 0.299999982f;
                                    u511 = 0.299999982f;
                                    u512 = 0.299999982f;
                                    if (t1 != 1) {
                                        t1 = 0xC2A9A2C;
                                        t495 = *(int *)((t1 + 0x0));
                                        u503 = 1.0f;
                                        u504 = 1.0f;
                                        u505 = 1.0f;
                                        if ((int)(0x7 - t495) < (int)t3) {
                                            t496 = *(int *)0xC2A9A34;
                                            u497 = 1.0f;
                                            u498 = 1.0f;
                                            u499 = 1.0f;
                                            if (t496 == 0) {
                                                u497 = 0.299999982f;
                                                u498 = 0.299999982f;
                                                u499 = 0.299999982f;
                                            }
                                            u503 = u497;
                                            u504 = u498;
                                            u505 = u499;
                                        }
                                        u510 = u503;
                                        u511 = u504;
                                        u512 = u505;
                                    }
                                    u529 = u510;
                                    u530 = u511;
                                    u531 = u512;
                                } else {
                                    t1 = 0xC2A9A2C;
                                    t514 = *(int *)((t1 + 0x0));
                                    u522 = 1.0f;
                                    u523 = 1.0f;
                                    u524 = 1.0f;
                                    if ((int)(0x7 - t514) < (int)t3) {
                                        t515 = *(int *)0xC2A9A34;
                                        u516 = 1.0f;
                                        u517 = 1.0f;
                                        u518 = 1.0f;
                                        if (t515 == 0) {
                                            u516 = 0.299999982f;
                                            u517 = 0.299999982f;
                                            u518 = 0.299999982f;
                                        }
                                        u522 = u516;
                                        u523 = u517;
                                        u524 = u518;
                                    }
                                    u529 = u522;
                                    u530 = u523;
                                    u531 = u524;
                                }
                                u536 = u529;
                                u537 = u530;
                                u538 = u531;
                            }
                            u583 = u536;
                            u584 = u537;
                            u585 = u538;
                        } else {
                            t1 = 0xC2A9A2C;
                            t540 = *(int *)((t1 + 0x0));
                            if ((int)(0x8 - t540) < (int)t3) {
                                t541 = *(int *)0xC2A9A34;
                                t1 = t541;
                                u557 = 0.299999982f;
                                u558 = 0.299999982f;
                                u559 = 0.299999982f;
                                if (t1 != 1) {
                                    t1 = 0xC2A9A2C;
                                    t542 = *(int *)((t1 + 0x0));
                                    u550 = 1.0f;
                                    u551 = 1.0f;
                                    u552 = 1.0f;
                                    if ((int)(0x7 - t542) < (int)t3) {
                                        t543 = *(int *)0xC2A9A34;
                                        u544 = 1.0f;
                                        u545 = 1.0f;
                                        u546 = 1.0f;
                                        if (t543 == 0) {
                                            u544 = 0.299999982f;
                                            u545 = 0.299999982f;
                                            u546 = 0.299999982f;
                                        }
                                        u550 = u544;
                                        u551 = u545;
                                        u552 = u546;
                                    }
                                    u557 = u550;
                                    u558 = u551;
                                    u559 = u552;
                                }
                                u576 = u557;
                                u577 = u558;
                                u578 = u559;
                            } else {
                                t1 = 0xC2A9A2C;
                                t561 = *(int *)((t1 + 0x0));
                                u569 = 1.0f;
                                u570 = 1.0f;
                                u571 = 1.0f;
                                if ((int)(0x7 - t561) < (int)t3) {
                                    t562 = *(int *)0xC2A9A34;
                                    u563 = 1.0f;
                                    u564 = 1.0f;
                                    u565 = 1.0f;
                                    if (t562 == 0) {
                                        u563 = 0.299999982f;
                                        u564 = 0.299999982f;
                                        u565 = 0.299999982f;
                                    }
                                    u569 = u563;
                                    u570 = u564;
                                    u571 = u565;
                                }
                                u576 = u569;
                                u577 = u570;
                                u578 = u571;
                            }
                            u583 = u576;
                            u584 = u577;
                            u585 = u578;
                        }
                        u630 = u583;
                        u631 = u584;
                        u632 = u585;
                    } else {
                        t1 = 0xC2A9A2C;
                        t587 = *(int *)((t1 + 0x0));
                        if ((int)(0x8 - t587) < (int)t3) {
                            t588 = *(int *)0xC2A9A34;
                            t1 = t588;
                            u604 = 0.299999982f;
                            u605 = 0.299999982f;
                            u606 = 0.299999982f;
                            if (t1 != 1) {
                                t1 = 0xC2A9A2C;
                                t589 = *(int *)((t1 + 0x0));
                                u597 = 1.0f;
                                u598 = 1.0f;
                                u599 = 1.0f;
                                if ((int)(0x7 - t589) < (int)t3) {
                                    t590 = *(int *)0xC2A9A34;
                                    u591 = 1.0f;
                                    u592 = 1.0f;
                                    u593 = 1.0f;
                                    if (t590 == 0) {
                                        u591 = 0.299999982f;
                                        u592 = 0.299999982f;
                                        u593 = 0.299999982f;
                                    }
                                    u597 = u591;
                                    u598 = u592;
                                    u599 = u593;
                                }
                                u604 = u597;
                                u605 = u598;
                                u606 = u599;
                            }
                            u623 = u604;
                            u624 = u605;
                            u625 = u606;
                        } else {
                            t1 = 0xC2A9A2C;
                            t608 = *(int *)((t1 + 0x0));
                            u616 = 1.0f;
                            u617 = 1.0f;
                            u618 = 1.0f;
                            if ((int)(0x7 - t608) < (int)t3) {
                                t609 = *(int *)0xC2A9A34;
                                u610 = 1.0f;
                                u611 = 1.0f;
                                u612 = 1.0f;
                                if (t609 == 0) {
                                    u610 = 0.299999982f;
                                    u611 = 0.299999982f;
                                    u612 = 0.299999982f;
                                }
                                u616 = u610;
                                u617 = u611;
                                u618 = u612;
                            }
                            u623 = u616;
                            u624 = u617;
                            u625 = u618;
                        }
                        u630 = u623;
                        u631 = u624;
                        u632 = u625;
                    }
                    u638 = u630;
                    u639 = u631;
                    u640 = u632;
                }
                u646 = u638;
                u647 = u639;
                u648 = u640;
            }
            t650 = nlObjPutSetFadeColor(u646, u647, u648);
            t1 = t650;
            t1 = 0x10;
            if ((int)t3 >= (int)0x5) {
                t2 = 0x24;
            } else {
                t2 = 0x0;
            }
            *(float *)((0xC2A9898 + t1)) = 1.0f;
            t1 = 0x14;
            *(float *)((0xC2A9898 + t1)) = 1.0f;
            t652 = FUN_0c05778a(0xC2A9898, 0x1E5, (float)(((((((t3 - 1) << 2) << 1) + (t3 - 1)) << 2) - (t2 << 2)) + 0x1D2), (float)(t2 + 0x4E));
            t1 = t652;
            t3 = (t3 + 0x1);
            continue;
        }
        break;
    }
    ResetFadeColor();
    t655 = *(int *)0xC2A9A38;
    if (t655 == 0xB3) {
        *(unsigned int *)0xC2A9A34 = 0x0;
    }
    t658 = *(int *)0xC2A9A38;
    if ((int)t658 < (int)0xB4) {
        t659 = *(int *)0xC2A9A38;
        *(unsigned int *)0xC2A9A38 = (t659 + 0x1);
    }
    nlObjPutSetFadeColor(0.0f, 1.0f, 0.0f);
    *(float *)0xC2A98A8 = 1.0f;
    *(float *)0xC2A98AC = 1.0f;
    FUN_0c05778a(0xC2A9898, 0x1EE, 490.0f, 45.0f);
    FUN_0c05778a(0xC2A9898, 0x1EF, 586.0f, 45.0f);
    return ResetFadeColor();
}

int FUN_0c03f038(void)
{
    int t0;
    int t1;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t13;
    int t14;
    int t15;
    int t21;
    int t22;
    int t23;
    int t24;
    int t26;
    int t27;
    int t28;
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
    float u44;
    int t65;
    int t52;
    int t53;
    float u55;
    int t30;
    int stk[22] = {0};

    t0 = FUN_0c03bf42();
    if (t0 == 1) {
        t1 = *(short *)0xC2A11C4;
        memmove(0xC2A124C, ((short)((short)t1 * (short)0x788) + 0xC28A4F8), 0x4);
    }
    menuCursor(0x1, 0x2, 0x0);
    t6 = FUN_0c0813e0(0xC2A124C, 0xC0A2044, 0x4);
    if (t6 == 0) {
        t7 = *(int *)0xC2A11DC;
        if ((int)t7 > (int)0x1) {
            t8 = *(int *)0xC2A11F4;
            t9 = *(int *)((((t8 << 2) + 0xC2A11F8) + 0x0));
            t10 = FUN_0c041016(0x0);
            putLevelCTFontAssist(0x2024, (0xC09E1B4 + (short)((short)t10 * (short)0x58)), 0x2, t9, 0x0);
            PutVM_Message(0x20, 0x15, 0xC2A1248, 197.0f, 208.0f);
        } else {
            t13 = *(int *)0xC2A11F4;
            t14 = *(int *)((((t13 << 2) + 0xC2A11F8) + 0x0));
            t15 = FUN_0c041016(0x0);
            putLevelCTFontAssist(0x2024, (0xC09E1B4 + (short)((short)t15 * (short)0x58)), 0x2, t14, 0x0);
            PutVM_Message(0x20, 0x22, 0xC2A1248, 197.0f, 208.0f);
        }
    } else {
        t21 = *(int *)0xC2A11DC;
        if ((int)t21 <= (int)0x1) {
            t22 = *(int *)0xC2A11F4;
            t23 = *(int *)((((t22 << 2) + 0xC2A11F8) + 0x0));
            t24 = FUN_0c041016(0x0);
            putLevelCTFontAssist(0x2024, (0xC09E1B4 + (short)((short)t24 * (short)0x58)), 0x2, t23, 0x0);
            t52 = 0x22;
            t53 = 0xC2A1248;
            u55 = 197.0f;
        } else {
            t26 = *(int *)0xC2A11F4;
            t27 = *(int *)((((t26 << 2) + 0xC2A11F8) + 0x0));
            t28 = FUN_0c041016(0x0);
            putLevelCTFontAssist(0x2024, (0xC09E1B4 + (short)((short)t28 * (short)0x58)), 0x2, t27, 0x0);
            t31 = 0x0;
            t32 = 0xC2A124C;
            t33 = ((int)stk + 12);
            for (;;) {
                if ((int)t31 >= (int)0x3) {
                    break;
                }
                t34 = *(signed char *)((t32 + 0x0));
                t30 = t34;
                t32 = (t32 + 0x1);
                t31 = (t31 + 0x1);
                *(unsigned char *)((t33 + 0x0)) = t30;
                t33 = (t33 + 0x1);
            }
            t35 = 0x0;
            t36 = t33;
            for (;;) {
                t37 = FUN_0c041016(0x0);
                t38 = *(int *)((0xC0EF7A8 + (t37 << 2)));
                if ((int)t35 >= (int)t38) {
                    break;
                }
                *(unsigned char *)((t36 + 0x0)) = 0x20;
                t35 = (t35 + 0x1);
                t36 = (t36 + 0x1);
            }
            t39 = t38;
            t40 = 0x0;
            t41 = 0xC2A1248;
            t42 = t36;
            for (;;) {
                if ((int)t40 >= (int)0x3) {
                    break;
                }
                t43 = *(signed char *)((t41 + 0x0));
                t39 = t43;
                t41 = (t41 + 0x1);
                t40 = (t40 + 0x1);
                *(unsigned char *)((t42 + 0x0)) = t39;
                t42 = (t42 + 0x1);
            }
            *(unsigned char *)((t42 + 0x0)) = 0x0;
            u44 = *(float *)0xC03F2B4;
            t52 = 0x1C;
            t53 = ((int)stk + 12);
            u55 = u44;
        }
        PutVM_Message(0x20, t52, t53, u55, 208.0f);
    }
    t65 = FUN_0c03bf76();
    return t65;
}
