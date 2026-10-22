/* Straight-line functions with calls and guards (batch gen_fx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckAreaGrid(int, int);
int ExecEffect(int, int);
int ExecSpark(void);
int FUN_0c0200e4(int);
int FUN_0c020a10(int);
int FUN_0c021970(void);
int FUN_0c022250(int);
int FUN_0c022358(int);
int FUN_0c022410(int);
int FUN_0c0227c8(int);
int FUN_0c0230bc(int);
int FUN_0c0231b4(int);
int FUN_0c02b146(int, int);
int FUN_0c02bbf4(int, float);
int FUN_0c02da42(float);
int FUN_0c0310a0(void);
int FUN_0c0310c0(int);
int FUN_0c031158(int);
float FUN_0c089de0(int);
float FUN_0c089de8(int);
int SetEffect(int, int, int);
extern float _builtin_sqrtf(float);
int carGearbox(int);
int carRumble(int);
int gdc_CoursePointLoadReq(float);
int getAreaFromPos(int, int);
int getNearLineIndex(int, int, int, int);
int nlFastSinCos(int, int, int);
float nlLength(int, int);
float nlScalor(int);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int pfColor(int, int, int, int);
float pfLength(int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFont(int);
int pfSize(float, float);
int putPlayerCar(int);
int replay(int);
int exec_CarMain(void);

int exec_CarMain(void)
{
    int t2;
    float u8;
    float u9;
    float u12;
    float u14;
    float u17;
    int t28;
    int t30;
    float u32;
    float u33;
    float u34;
    float u35;
    float u37;
    float u39;
    float u40;
    float u41;
    float u42;
    float u44;
    int t46;
    int t51;
    int t57;
    float u58;
    int t64;
    int t65;
    int t67;
    int t68;
    int t69;
    int t70;
    int t72;
    float u73;
    float u81;
    float u89;
    float u97;
    int t105;
    int t107;
    int t108;
    int t112;
    float t113;
    int t114;
    float u115;
    float u116;
    int t117;
    float u119;
    float u120;
    float u121;
    float u122;
    int t123;
    float u124;
    float u125;
    float u126;
    float u127;
    float u128;
    float u132;
    float u133;
    float u135;
    float u137;
    float u138;
    float u139;
    float u140;
    int t142;
    int t143;
    int t144;
    float u159;
    float u160;
    float u153;
    int t145;
    float u148;
    float u155;
    float u162;
    int t163;
    int t164;
    float u168;
    float u165;
    int t170;
    int t171;
    float u175;
    float u172;
    float u192;
    float u206;
    float u208;
    float u209;
    float u210;
    float u211;
    int t213;
    int t214;
    int t215;
    float u230;
    float u231;
    float u224;
    int t216;
    float u219;
    float u226;
    float u233;
    int t234;
    int t235;
    float u239;
    float u236;
    int t241;
    int t242;
    float u246;
    float u243;
    float u263;
    float u276;
    float u277;
    int t278;
    int t281;
    float u283;
    float u284;
    float u285;
    float u286;
    float u291;
    float u292;
    float u293;
    float u294;
    float u295;
    float u299;
    float u300;
    float u302;
    float u304;
    float u305;
    float u306;
    float u307;
    int t309;
    int t310;
    int t311;
    float u326;
    float u327;
    float u320;
    int t312;
    float u315;
    float u322;
    float u329;
    int t330;
    int t331;
    float u335;
    float u332;
    int t337;
    int t338;
    float u342;
    float u339;
    float u359;
    float u373;
    float u375;
    float u376;
    float u377;
    float u378;
    int t380;
    int t381;
    int t382;
    float u397;
    float u398;
    float u391;
    int t383;
    float u386;
    float u393;
    float u400;
    int t401;
    int t402;
    float u406;
    float u403;
    int t408;
    int t409;
    float u413;
    float u410;
    float u430;
    float u443;
    float u444;
    int t445;
    int t448;
    float u450;
    float u451;
    float u452;
    float u453;
    float u472;
    int t473;
    int t477;
    int t478;
    float u480;
    float u481;
    float u482;
    float u483;
    int t500;
    int t501;
    int t502;
    int t503;
    int t504;
    int t505;
    int t524;
    float u528;
    float u529;
    int t532;
    float t533;
    int t536;
    int t546;
    int t547;
    float u548;
    float u549;
    int t550;
    int t551;
    int t552;
    int t553;
    int t554;
    int t555;
    float u556;
    int t557;
    int t558;
    int t559;
    int t585;
    int t586;
    int t587;
    int t589;
    int t590;
    int t591;
    int t592;
    int t593;
    float t594;
    int t596;
    int t597;
    int t611;
    int t612;
    int t613;
    int t629;
    int t614;
    int t615;
    int t616;
    int t617;
    float t618;
    float u619;
    float u620;
    int t621;
    float t622;
    float u623;
    float u624;
    int t625;
    int t626;
    int t627;
    int t628;
    int t634;
    int t635;
    int t636;
    int t637;
    int t638;
    float t639;
    float u640;
    float u641;
    int t642;
    float t643;
    float u644;
    float u645;
    int t646;
    int t647;
    int t648;
    int t649;
    int t650;
    int t651;
    int t652;
    int t653;
    float t654;
    float u655;
    float u656;
    int t657;
    float t658;
    float u659;
    float u660;
    int t661;
    int t662;
    int t663;
    int t664;
    int t680;
    int t665;
    int t666;
    int t667;
    int t668;
    float t669;
    float u670;
    float u671;
    int t672;
    float t673;
    float u674;
    float u675;
    int t676;
    int t677;
    int t678;
    int t679;
    int t704;
    int t705;
    int t706;
    int t707;
    int t708;
    float t709;
    float u710;
    float u711;
    int t712;
    float t713;
    float u714;
    float u715;
    int t716;
    int t717;
    int t718;
    int t719;
    int t720;
    int t721;
    int t722;
    int t723;
    float t724;
    float u725;
    float u726;
    int t727;
    float t728;
    float u729;
    float u730;
    int t731;
    int t732;
    int t733;
    int t734;
    int t750;
    int t735;
    int t736;
    int t737;
    int t738;
    float t739;
    float u740;
    float u741;
    int t742;
    float t743;
    float u744;
    float u745;
    int t746;
    int t747;
    int t748;
    int t749;
    float u189;
    float u190;
    float u180;
    float u260;
    float u261;
    float u251;
    float u356;
    float u357;
    float u347;
    float u427;
    float u428;
    float u418;
    int t768;
    int t698;
    int t692;
    int t686;
    int t762;
    int t756;
    int stk[24] = {0};

    nlUnitMatrix();
    FUN_0c0231b4(0xC1790CC);
    t2 = *(int *)0xC179488;
    if ((int)t2 < (int)0x4) {
        FUN_0c0200e4(0x0);
    } else {
        putPlayerCar(0x0);
    }
    replay(0x5);
    u8 = *(float *)0xC1EE2F4;
    if (u8 > 0.0f) {
        u9 = (0.0399999991f - u8);
        if ((0.0399999991f - u8) > 0.0f) {
            u9 = 0.0f;
        }
        u12 = u9;
        if (u9 > -0.0599999987f) {
            u12 = ((-(u9 * u9)) / 0.0599999987f);
        }
        *(unsigned short *)0xC1791E0 = (int)(u12 * 4500.0f);
    } else {
        if (0.0f > u8) {
            u14 = (-0.0399999991f - u8);
            if (0.0f > (-0.0399999991f - u8)) {
                u14 = 0.0f;
            }
            u17 = u14;
            if (0.0599999987f > u14) {
                u17 = ((u14 * u14) / 0.0599999987f);
            }
            *(unsigned short *)0xC1791E0 = (int)(u17 * 4500.0f);
        } else {
            *(unsigned short *)0xC1791E0 = 0x0;
        }
    }
    t28 = *(short *)0xC1791E0;
    if ((int)t28 > (int)0x1100) {
        *(unsigned short *)0xC1791E0 = 0x1100;
    }
    t30 = *(short *)0xC1791E0;
    if ((int)t30 < (int)0xFFFFEF00) {
        *(unsigned short *)0xC1791E0 = 0xFFFFEF00;
    }
    u32 = *(float *)0xC1EE2F8;
    *(float *)0xC1791E4 = u32;
    u33 = *(float *)0xC1791E4;
    *(float *)0xC1791E4 = (u33 * 1.19999993f);
    u34 = *(float *)0xC1791E4;
    *(float *)0xC1791E4 = (u34 - 0.199999988f);
    u35 = *(float *)0xC1791E4;
    if (0.0f > u35) {
        *(float *)0xC1791E4 = 0.0f;
    }
    u37 = *(float *)0xC1791E4;
    if (u37 > 1.0f) {
        *(float *)0xC1791E4 = 1.0f;
    }
    u39 = *(float *)0xC1EE2FC;
    *(float *)0xC1791E8 = u39;
    u40 = *(float *)0xC1791E8;
    *(float *)0xC1791E8 = (u40 * 1.29999995f);
    u41 = *(float *)0xC1791E8;
    *(float *)0xC1791E8 = (u41 - 0.299999982f);
    u42 = *(float *)0xC1791E8;
    if (0.0f > u42) {
        *(float *)0xC1791E8 = 0.0f;
    }
    u44 = *(float *)0xC1791E8;
    if (u44 > 1.0f) {
        *(float *)0xC1791E8 = 1.0f;
    }
    t46 = *(int *)0xC179120;
    if (t46 != 0) {
        if (t46 == 3) {
            *(unsigned int *)0xC1791F0 = 0x0;
        }
    } else {
        *(unsigned int *)0xC1791F0 = 0x0;
    }
    t51 = *(int *)0xC179120;
    if (t51 == 1) {
        *(unsigned int *)0xC1791F0 = 0x1;
        *(unsigned int *)0xC179120 = 0x2;
    }
    carRumble(0xC1790CC);
    t57 = *(int *)0xC179120;
    if (t57 == 0) {
        u58 = *(float *)0xC1791E4;
        *(float *)0xC1791E4 = (u58 * 0.00999999978f);
    }
    t64 = *(int *)0xC2A1B28;
    t65 = *(int *)0xC2A1B2C;
    getNearLineIndex(0x0, t64, t65, 0xC17912C);
    t67 = *(int *)0xC1EE20C;
    if (t67 == 1) {
        t68 = *(int *)0xC179130;
        t69 = getAreaFromPos(0xC179144, t68);
        *(unsigned int *)0xC179130 = t69;
        t70 = *(int *)0xC179130;
        if ((int)t70 < 0) {
            *(unsigned int *)0xC179130 = 0x0;
        }
        t72 = *(int *)0xC179130;
        if (t72 != 73) {
            if (t72 != 74) {
                if (t72 != 81) {
                    if (t72 == 82) {
                        u73 = *(float *)0xC179148;
                        if (280.0f > u73) {
                            *(unsigned int *)0xC179494 = 0x1;
                        } else {
                            *(unsigned int *)0xC179494 = 0x0;
                        }
                    } else {
                        *(unsigned int *)0xC179494 = 0x0;
                    }
                } else {
                    u81 = *(float *)0xC179148;
                    if (280.0f > u81) {
                        *(unsigned int *)0xC179494 = 0x1;
                    } else {
                        *(unsigned int *)0xC179494 = 0x0;
                    }
                }
            } else {
                u89 = *(float *)0xC179148;
                if (280.0f > u89) {
                    *(unsigned int *)0xC179494 = 0x1;
                } else {
                    *(unsigned int *)0xC179494 = 0x0;
                }
            }
        } else {
            u97 = *(float *)0xC179148;
            if (280.0f > u97) {
                *(unsigned int *)0xC179494 = 0x1;
            } else {
                *(unsigned int *)0xC179494 = 0x0;
            }
        }
        t105 = *(int *)0xC179130;
        FUN_0c02b146(0xC179144, t105);
    } else {
        t107 = *(int *)0xC179130;
        t108 = CheckAreaGrid(0xC179144, t107);
        *(unsigned int *)0xC179130 = t108;
    }
    t112 = *(int *)0xC1790EC;
    if ((t112 & 0x80067FFE) == 0) {
        *(unsigned int *)0xC0DAEC0 = 0x0;
    } else {
        t113 = nlLength(0xC179144, 0xC1790CC);
        if (t113 > 17.5f) {
            t114 = *(int *)0xC0DAEC0;
            if ((int)t114 < (int)0x5) {
                u115 = *(float *)0xC179228;
                *(float *)0xC179228 = (u115 * 0.849999964f);
                u116 = *(float *)0xC1791CC;
                *(float *)0xC1791CC = (u116 * 0.849999964f);
                t117 = *(short *)0xC1791C0;
                nlFastSinCos((unsigned short)t117, 0xC1791C8, 0xC1791D0);
                u119 = *(float *)0xC1791C8;
                u120 = *(float *)0xC179228;
                *(float *)0xC1791C8 = (u119 * u120);
                u121 = *(float *)0xC1791D0;
                u122 = *(float *)0xC179228;
                *(float *)0xC1791D0 = (u121 * u122);
                t123 = *(int *)0xC0DAEC0;
                *(unsigned int *)0xC0DAEC0 = (t123 + 0x1);
            } else {
                u124 = *(float *)0xC1790CC;
                *(float *)0xC179144 = u124;
                *(float *)0xC179158 = u124;
                u125 = *(float *)0xC1790D4;
                *(float *)0xC17914C = u125;
                *(float *)0xC179160 = u125;
                u126 = *(float *)0xC1790D0;
                u127 = *(float *)0xC179148;
                if (18.0f > ((u127 - u126) < 0.0f ? -(u127 - u126) : (u127 - u126))) {
                    u128 = *(float *)0xC1790D0;
                    *(float *)0xC179148 = u128;
                    *(float *)0xC17915C = u128;
                }
                u132 = *(float *)0xC1790D8;
                if (u132 == 0.0f) {
                    u133 = *(float *)0xC1790E0;
                    if (u133 == 0.0f) {
                        *(float *)0xC179228 = 0.0f;
                    } else {
                        *(volatile float *)0xC1790E0;
                        u135 = *(float *)0xC1790D8;
                        FUN_0c02bbf4(((int)stk + 16), (-u135));
                        u137 = *(float *)0xC1790D8;
                        u138 = *(float *)0xC1790E0;
                        u139 = (u138 * u138);
                        u139 = u139 + u137 * u137;
                        u140 = (_builtin_sqrtf(u139) * 0.974999964f);
                        if ((_builtin_sqrtf(u139) * 0.974999964f) > 14.0f) {
                            u140 = 14.0f;
                        }
                        t142 = *(int *)0xC1790EC;
                        if ((t142 & 0x7FFE) != 0) {
                            t143 = *(short *)(((int)stk + 16));
                            *(unsigned short *)0xC1791C0 = t143;
                            u189 = _builtin_sqrtf(u139);
                            u190 = u140;
                        } else {
                            t144 = *(int *)0xC1790EC;
                            u159 = _builtin_sqrtf(u139);
                            u160 = u140;
                            if ((t144 & 0x80000000) != 0) {
                                u153 = (u140 * 0.849999964f);
                                if (u140 > 6.0f) {
                                    t145 = *(int *)0xC1EE234;
                                    u148 = (u140 * 0.849999964f);
                                    if (t145 != 0) {
                                        u148 = (u140 * 0.699999988f);
                                    }
                                    u153 = u148;
                                }
                                u155 = *(float *)0xC1791CC;
                                *(float *)0xC1791CC = (u155 * 0.949999988f);
                                u159 = 0.949999988f;
                                u160 = u153;
                            }
                            u162 = *(float *)0xC179228;
                            if (0.0f > u162) {
                                t163 = *(short *)(((int)stk + 16));
                                t164 = *(short *)0xC1791C0;
                                u168 = (-u160);
                                if ((int)(unsigned short)(t164 - t163) > (int)0x4000) {
                                    u165 = (-u160);
                                    if ((int)(unsigned short)(t164 - t163) < (int)0xC000) {
                                        u165 = u160;
                                    }
                                    u168 = u165;
                                }
                                u180 = u168;
                            } else {
                                t170 = *(short *)(((int)stk + 16));
                                t171 = *(short *)0xC1791C0;
                                u175 = u160;
                                if ((int)(unsigned short)(t171 - t170) > (int)0x4000) {
                                    u172 = u160;
                                    if ((int)(unsigned short)(t171 - t170) < (int)0xC000) {
                                        u172 = (-u160);
                                    }
                                    u175 = u172;
                                }
                                u180 = u175;
                            }
                            u189 = 0.0f;
                            u190 = u180;
                        }
                        *(float *)0xC179228 = u190;
                        u192 = *(float *)0xC179118;
                        *(unsigned short *)0xC179264 = (int)(u192 * 7822.67041f);
                    }
                } else {
                    *(volatile float *)0xC1790E0;
                    u206 = *(float *)0xC1790D8;
                    FUN_0c02bbf4(((int)stk + 16), (-u206));
                    u208 = *(float *)0xC1790D8;
                    u209 = *(float *)0xC1790E0;
                    u210 = (u209 * u209);
                    u210 = u210 + u208 * u208;
                    u211 = (_builtin_sqrtf(u210) * 0.974999964f);
                    if ((_builtin_sqrtf(u210) * 0.974999964f) > 14.0f) {
                        u211 = 14.0f;
                    }
                    t213 = *(int *)0xC1790EC;
                    if ((t213 & 0x7FFE) != 0) {
                        t214 = *(short *)(((int)stk + 16));
                        *(unsigned short *)0xC1791C0 = t214;
                        u260 = _builtin_sqrtf(u210);
                        u261 = u211;
                    } else {
                        t215 = *(int *)0xC1790EC;
                        u230 = _builtin_sqrtf(u210);
                        u231 = u211;
                        if ((t215 & 0x80000000) != 0) {
                            u224 = (u211 * 0.849999964f);
                            if (u211 > 6.0f) {
                                t216 = *(int *)0xC1EE234;
                                u219 = (u211 * 0.849999964f);
                                if (t216 != 0) {
                                    u219 = (u211 * 0.699999988f);
                                }
                                u224 = u219;
                            }
                            u226 = *(float *)0xC1791CC;
                            *(float *)0xC1791CC = (u226 * 0.949999988f);
                            u230 = 0.949999988f;
                            u231 = u224;
                        }
                        u233 = *(float *)0xC179228;
                        if (0.0f > u233) {
                            t234 = *(short *)(((int)stk + 16));
                            t235 = *(short *)0xC1791C0;
                            u239 = (-u231);
                            if ((int)(unsigned short)(t235 - t234) > (int)0x4000) {
                                u236 = (-u231);
                                if ((int)(unsigned short)(t235 - t234) < (int)0xC000) {
                                    u236 = u231;
                                }
                                u239 = u236;
                            }
                            u251 = u239;
                        } else {
                            t241 = *(short *)(((int)stk + 16));
                            t242 = *(short *)0xC1791C0;
                            u246 = u231;
                            if ((int)(unsigned short)(t242 - t241) > (int)0x4000) {
                                u243 = u231;
                                if ((int)(unsigned short)(t242 - t241) < (int)0xC000) {
                                    u243 = (-u231);
                                }
                                u246 = u243;
                            }
                            u251 = u246;
                        }
                        u260 = 0.0f;
                        u261 = u251;
                    }
                    *(float *)0xC179228 = u261;
                    u263 = *(float *)0xC179118;
                    *(unsigned short *)0xC179264 = (int)(u263 * 7822.67041f);
                }
                u276 = *(float *)0xC179228;
                u277 = *(float *)0xC1791F8;
                *(float *)0xC17922C = ((u276 * 3600.0f) / (u277 * 6.28299999f));
                t278 = *(int *)0xC1790EC;
                if ((t278 & 0x80047FFE) != 0) {
                    *(unsigned int *)0xC17947C = 0x0;
                }
                t281 = *(short *)0xC1791C0;
                nlFastSinCos((unsigned short)t281, 0xC1791C8, 0xC1791D0);
                u283 = *(float *)0xC1791C8;
                u284 = *(float *)0xC179228;
                *(float *)0xC1791C8 = (u283 * u284);
                u285 = *(float *)0xC1791D0;
                u286 = *(float *)0xC179228;
                *(float *)0xC1791D0 = (u285 * u286);
            }
        } else {
            u291 = *(float *)0xC1790CC;
            *(float *)0xC179144 = u291;
            *(float *)0xC179158 = u291;
            u292 = *(float *)0xC1790D4;
            *(float *)0xC17914C = u292;
            *(float *)0xC179160 = u292;
            u293 = *(float *)0xC1790D0;
            u294 = *(float *)0xC179148;
            if (18.0f > ((u294 - u293) < 0.0f ? -(u294 - u293) : (u294 - u293))) {
                u295 = *(float *)0xC1790D0;
                *(float *)0xC179148 = u295;
                *(float *)0xC17915C = u295;
            }
            u299 = *(float *)0xC1790D8;
            if (u299 == 0.0f) {
                u300 = *(float *)0xC1790E0;
                if (u300 == 0.0f) {
                    *(float *)0xC179228 = 0.0f;
                } else {
                    *(volatile float *)0xC1790E0;
                    u302 = *(float *)0xC1790D8;
                    FUN_0c02bbf4(((int)stk + 16), (-u302));
                    u304 = *(float *)0xC1790D8;
                    u305 = *(float *)0xC1790E0;
                    u306 = (u305 * u305);
                    u306 = u306 + u304 * u304;
                    u307 = (_builtin_sqrtf(u306) * 0.974999964f);
                    if ((_builtin_sqrtf(u306) * 0.974999964f) > 14.0f) {
                        u307 = 14.0f;
                    }
                    t309 = *(int *)0xC1790EC;
                    if ((t309 & 0x7FFE) != 0) {
                        t310 = *(short *)(((int)stk + 16));
                        *(unsigned short *)0xC1791C0 = t310;
                        u356 = _builtin_sqrtf(u306);
                        u357 = u307;
                    } else {
                        t311 = *(int *)0xC1790EC;
                        u326 = _builtin_sqrtf(u306);
                        u327 = u307;
                        if ((t311 & 0x80000000) != 0) {
                            u320 = (u307 * 0.849999964f);
                            if (u307 > 6.0f) {
                                t312 = *(int *)0xC1EE234;
                                u315 = (u307 * 0.849999964f);
                                if (t312 != 0) {
                                    u315 = (u307 * 0.699999988f);
                                }
                                u320 = u315;
                            }
                            u322 = *(float *)0xC1791CC;
                            *(float *)0xC1791CC = (u322 * 0.949999988f);
                            u326 = 0.949999988f;
                            u327 = u320;
                        }
                        u329 = *(float *)0xC179228;
                        if (0.0f > u329) {
                            t330 = *(short *)(((int)stk + 16));
                            t331 = *(short *)0xC1791C0;
                            u335 = (-u327);
                            if ((int)(unsigned short)(t331 - t330) > (int)0x4000) {
                                u332 = (-u327);
                                if ((int)(unsigned short)(t331 - t330) < (int)0xC000) {
                                    u332 = u327;
                                }
                                u335 = u332;
                            }
                            u347 = u335;
                        } else {
                            t337 = *(short *)(((int)stk + 16));
                            t338 = *(short *)0xC1791C0;
                            u342 = u327;
                            if ((int)(unsigned short)(t338 - t337) > (int)0x4000) {
                                u339 = u327;
                                if ((int)(unsigned short)(t338 - t337) < (int)0xC000) {
                                    u339 = (-u327);
                                }
                                u342 = u339;
                            }
                            u347 = u342;
                        }
                        u356 = 0.0f;
                        u357 = u347;
                    }
                    *(float *)0xC179228 = u357;
                    u359 = *(float *)0xC179118;
                    *(unsigned short *)0xC179264 = (int)(u359 * 7822.67041f);
                }
            } else {
                *(volatile float *)0xC1790E0;
                u373 = *(float *)0xC1790D8;
                FUN_0c02bbf4(((int)stk + 16), (-u373));
                u375 = *(float *)0xC1790D8;
                u376 = *(float *)0xC1790E0;
                u377 = (u376 * u376);
                u377 = u377 + u375 * u375;
                u378 = (_builtin_sqrtf(u377) * 0.974999964f);
                if ((_builtin_sqrtf(u377) * 0.974999964f) > 14.0f) {
                    u378 = 14.0f;
                }
                t380 = *(int *)0xC1790EC;
                if ((t380 & 0x7FFE) != 0) {
                    t381 = *(short *)(((int)stk + 16));
                    *(unsigned short *)0xC1791C0 = t381;
                    u427 = _builtin_sqrtf(u377);
                    u428 = u378;
                } else {
                    t382 = *(int *)0xC1790EC;
                    u397 = _builtin_sqrtf(u377);
                    u398 = u378;
                    if ((t382 & 0x80000000) != 0) {
                        u391 = (u378 * 0.849999964f);
                        if (u378 > 6.0f) {
                            t383 = *(int *)0xC1EE234;
                            u386 = (u378 * 0.849999964f);
                            if (t383 != 0) {
                                u386 = (u378 * 0.699999988f);
                            }
                            u391 = u386;
                        }
                        u393 = *(float *)0xC1791CC;
                        *(float *)0xC1791CC = (u393 * 0.949999988f);
                        u397 = 0.949999988f;
                        u398 = u391;
                    }
                    u400 = *(float *)0xC179228;
                    if (0.0f > u400) {
                        t401 = *(short *)(((int)stk + 16));
                        t402 = *(short *)0xC1791C0;
                        u406 = (-u398);
                        if ((int)(unsigned short)(t402 - t401) > (int)0x4000) {
                            u403 = (-u398);
                            if ((int)(unsigned short)(t402 - t401) < (int)0xC000) {
                                u403 = u398;
                            }
                            u406 = u403;
                        }
                        u418 = u406;
                    } else {
                        t408 = *(short *)(((int)stk + 16));
                        t409 = *(short *)0xC1791C0;
                        u413 = u398;
                        if ((int)(unsigned short)(t409 - t408) > (int)0x4000) {
                            u410 = u398;
                            if ((int)(unsigned short)(t409 - t408) < (int)0xC000) {
                                u410 = (-u398);
                            }
                            u413 = u410;
                        }
                        u418 = u413;
                    }
                    u427 = 0.0f;
                    u428 = u418;
                }
                *(float *)0xC179228 = u428;
                u430 = *(float *)0xC179118;
                *(unsigned short *)0xC179264 = (int)(u430 * 7822.67041f);
            }
            u443 = *(float *)0xC179228;
            u444 = *(float *)0xC1791F8;
            *(float *)0xC17922C = ((u443 * 3600.0f) / (u444 * 6.28299999f));
            t445 = *(int *)0xC1790EC;
            if ((t445 & 0x80047FFE) != 0) {
                *(unsigned int *)0xC17947C = 0x0;
            }
            t448 = *(short *)0xC1791C0;
            nlFastSinCos((unsigned short)t448, 0xC1791C8, 0xC1791D0);
            u450 = *(float *)0xC1791C8;
            u451 = *(float *)0xC179228;
            *(float *)0xC1791C8 = (u450 * u451);
            u452 = *(float *)0xC1791D0;
            u453 = *(float *)0xC179228;
            *(float *)0xC1791D0 = (u452 * u453);
        }
    }
    FUN_0c022358(0xC1790CC);
    FUN_0c022250(0xC1790CC);
    FUN_0c022358(0xC1790CC);
    carGearbox(0xC1790CC);
    FUN_0c021970();
    FUN_0c022410(0xC1790CC);
    u472 = *(float *)0xC179228;
    if (!((u472 < 0.0f ? -u472 : u472) > 0.049999997f)) {
        t473 = *(short *)0xC179152;
        *(unsigned short *)0xC1791C0 = t473;
    }
    t477 = *(int *)0xC179120;
    if (t477 != 0) {
        if (t477 == 3) {
            *(float *)0xC179228 = 0.0f;
            *(float *)0xC1791D0 = 0.0f;
            *(float *)0xC1791C8 = 0.0f;
            *(float *)0xC17922C = 0.0f;
            *(float *)0xC179238 = 0.0f;
            *(float *)0xC179234 = 0.0f;
        } else {
            t478 = *(short *)0xC1791C0;
            nlFastSinCos((unsigned short)t478, 0xC1791C8, 0xC1791D0);
            u480 = *(float *)0xC1791C8;
            u481 = *(float *)0xC179228;
            *(float *)0xC1791C8 = (u480 * u481);
            u482 = *(float *)0xC1791D0;
            u483 = *(float *)0xC179228;
            *(float *)0xC1791D0 = (u482 * u483);
        }
    } else {
        *(float *)0xC179228 = 0.0f;
        *(float *)0xC1791D0 = 0.0f;
        *(float *)0xC1791C8 = 0.0f;
        *(float *)0xC17922C = 0.0f;
        *(float *)0xC179238 = 0.0f;
        *(float *)0xC179234 = 0.0f;
    }
    FUN_0c0227c8(0xC1790CC);
    FUN_0c0230bc(0xC1790CC);
    t500 = *(int *)0xC1EE234;
    t501 = *(int *)0xC0DB000;
    if (t500 == 1) {
        t502 = *(int *)0xC0E49F0;
        if (t502 != 0) {
            t503 = *(int *)0xC1EE2B8;
            if ((t503 & 0x400) != 0) {
                if ((int)t501 < (int)0x5) {
                    t504 = *(int *)0xC0DB000;
                    *(unsigned int *)0xC0DB000 = (t504 + 0x1);
                } else {
                    if (1) {
                        t505 = *(int *)0xC0DB000;
                        *(unsigned int *)0xC0DB000 = (t505 - 1);
                    }
                }
            }
        }
    }
    t524 = *(int *)0xC0DB000;
    if ((int)t524 >= (int)0x5) {
        pfSetFont(0x0);
        pfSize(1.19999993f, 1.19999993f);
        FUN_0c0310a0();
        u528 = *(float *)0xC1791F8;
        u529 = *(float *)0xC17922C;
        FUN_0c031158((int)((((u529 * u528) * 0.0376979932f) < 0.0f ? -((u529 * u528) * 0.0376979932f) : ((u529 * u528) * 0.0376979932f)) * 0.799999952f));
        FUN_0c0310c0(0xC08A9AC);
        t532 = *(int *)0xC08D678;
        t533 = pfLength(t532);
        pfLocate(((-t533) + 540.0f), 425.0f);
        pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
        t536 = *(int *)0xC08D678;
        pfPuts(t536);
    }
    t546 = *(int *)0xC1EE20C;
    if (t546 == 1) {
        t547 = *(int *)0xC179130;
        if ((int)t547 < (int)0x34) {
            u548 = *(float *)0xC179148;
            if (!(u548 > -35.0f)) {
                u549 = *(float *)0xC17915C;
                if (u549 > -35.0f) {
                    *(unsigned int *)(((int)stk + 20)) = 0x4;
                    t550 = 0x90;
                    t551 = 0x4;
                    t552 = 0xC17926C;
                    for (;;) {
                        t553 = *(int *)(((int)stk + 20));
                        if (t553 == 0) {
                            break;
                        }
                        t551 = t552;
                        t551 = (t551 + 0x5C);
                        t550 = 0xC;
                        t554 = 0;
                        for (; t554 < (int)t550; t554++) *(unsigned char *)((((int)stk + 16) + 0x8) + t554) = *(unsigned char *)(t551 + t554);
                        t551 = 0xFC;
                        t551 = (t551 + 0xC1790CC);
                        t550 = 0xC;
                        t555 = 0;
                        for (; t555 < (int)t550; t555++) *(unsigned char *)((((int)stk + 16) + 0x14) + t555) = *(unsigned char *)(t551 + t555);
                        t550 = 0xC024540;
                        u556 = *(float *)((t550 + 0x0));
                        t550 = 0x18;
                        *(float *)((((int)stk + 16) + t550)) = u556;
                        t550 = 0xC;
                        *(float *)((((int)stk + 16) + t550)) = -35.0f;
                        t557 = SetEffect((((int)stk + 16) + 0x8), (((int)stk + 16) + 0x14), 0x3);
                        t550 = t557;
                        t550 = 0x18;
                        *(float *)((((int)stk + 16) + t550)) = 1.0f;
                        t558 = SetEffect((((int)stk + 16) + 0x8), (((int)stk + 16) + 0x14), 0x3);
                        t550 = t558;
                        t559 = *(int *)(((int)stk + 20));
                        t551 = t559;
                        t551 = (t551 - 1);
                        *(unsigned int *)(((int)stk + 20)) = t551;
                        t552 = (t552 + 0x84);
                    }
                }
            }
        }
    }
    t585 = *(int *)0xC17914C;
    *(unsigned int *)0xC1790D4 = t585;
    t586 = *(int *)0xC179148;
    *(unsigned int *)0xC1790D0 = t586;
    t587 = *(int *)0xC179144;
    *(unsigned int *)0xC1790CC = t587;
    nlSubVector3op(0xC1790D8, 0xC179144, 0xC179158);
    *(float *)0xC17911C = 0.0f;
    *(float *)0xC179114 = 0.0f;
    t589 = *(int *)0xC179154;
    *(unsigned int *)0xC179168 = t589;
    t590 = *(int *)0xC179150;
    *(unsigned int *)0xC179164 = t590;
    t591 = *(int *)0xC17914C;
    *(unsigned int *)0xC179160 = t591;
    t592 = *(int *)0xC179148;
    *(unsigned int *)0xC17915C = t592;
    t593 = *(int *)0xC179144;
    *(unsigned int *)0xC179158 = t593;
    t594 = nlScalor(0xC1790D8);
    FUN_0c02da42(t594);
    t596 = *(int *)0xC1EE234;
    if (t596 == 1) {
        t597 = *(int *)0xC2A4E50;
        if (t597 == 0) {
            FUN_0c020a10(0xC1790CC);
        }
    }
    ExecEffect(0xC17926C, 0xC1791C8);
    ExecSpark();
    t611 = *(int *)0xC1EE234;
    if (t611 != 0) {
        t612 = *(int *)0xC2A4E50;
        if (t612 != 1) {
            t613 = *(int *)0xC1EE20C;
            t629 = t613;
            if (t613 != 2) {
                t614 = *(int *)0xC17914C;
                *(unsigned int *)(((((int)stk + 16) + 0x14) + 0x8)) = t614;
                t615 = *(int *)0xC179148;
                *(unsigned int *)(((((int)stk + 16) + 0x14) + 0x4)) = t615;
                t616 = *(int *)0xC179144;
                *(unsigned int *)(((((int)stk + 16) + 0x14) + 0x0)) = t616;
                t617 = *(short *)0xC1791C0;
                t618 = FUN_0c089de0((unsigned short)t617);
                u619 = *(float *)(((int)stk + 36));
                u620 = u619;
                u620 = u620 + 600.0f * t618;
                *(float *)(((int)stk + 36)) = u620;
                t621 = *(short *)0xC1791C0;
                t622 = FUN_0c089de8((unsigned short)t621);
                u623 = *(float *)(((int)stk + 44));
                u624 = u623;
                u624 = u624 + 600.0f * t622;
                *(float *)(((int)stk + 44)) = u624;
                t625 = *(int *)(((((int)stk + 16) + 0x14) + 0x8));
                *(unsigned int *)((((int)stk + 4) + 0x8)) = t625;
                t626 = *(int *)(((((int)stk + 16) + 0x14) + 0x4));
                *(unsigned int *)((((int)stk + 4) + 0x4)) = t626;
                t627 = *(int *)(((((int)stk + 16) + 0x14) + 0x0));
                *(unsigned int *)((((int)stk + 4) + 0x0)) = t627;
                t628 = gdc_CoursePointLoadReq(1800.0f);
                t629 = t628;
            }
            t698 = t629;
        } else {
            t634 = *(int *)0xC1790C8;
            if (t634 == 1) {
                t635 = *(int *)0xC17914C;
                *(unsigned int *)(((((int)stk + 16) + 0x14) + 0x8)) = t635;
                t636 = *(int *)0xC179148;
                *(unsigned int *)(((((int)stk + 16) + 0x14) + 0x4)) = t636;
                t637 = *(int *)0xC179144;
                *(unsigned int *)(((((int)stk + 16) + 0x14) + 0x0)) = t637;
                t638 = *(short *)0xC1791C0;
                t639 = FUN_0c089de0((unsigned short)t638);
                u640 = *(float *)(((int)stk + 36));
                u641 = u640;
                u641 = u641 + 200.0f * t639;
                *(float *)(((int)stk + 36)) = u641;
                t642 = *(short *)0xC1791C0;
                t643 = FUN_0c089de8((unsigned short)t642);
                u644 = *(float *)(((int)stk + 44));
                u645 = u644;
                u645 = u645 + 200.0f * t643;
                *(float *)(((int)stk + 44)) = u645;
                t646 = *(int *)(((((int)stk + 16) + 0x14) + 0x8));
                *(unsigned int *)((((int)stk + 4) + 0x8)) = t646;
                t647 = *(int *)(((((int)stk + 16) + 0x14) + 0x4));
                *(unsigned int *)((((int)stk + 4) + 0x4)) = t647;
                t648 = *(int *)(((((int)stk + 16) + 0x14) + 0x0));
                *(unsigned int *)((((int)stk + 4) + 0x0)) = t648;
                t649 = gdc_CoursePointLoadReq(520.0f);
                t692 = t649;
            } else {
                if (t634 == 2) {
                    t650 = *(int *)0xC17914C;
                    *(unsigned int *)(((((int)stk + 16) + 0x14) + 0x8)) = t650;
                    t651 = *(int *)0xC179148;
                    *(unsigned int *)(((((int)stk + 16) + 0x14) + 0x4)) = t651;
                    t652 = *(int *)0xC179144;
                    *(unsigned int *)(((((int)stk + 16) + 0x14) + 0x0)) = t652;
                    t653 = *(short *)0xC1791C0;
                    t654 = FUN_0c089de0(((unsigned short)t653 - 3072));
                    u655 = *(float *)(((int)stk + 36));
                    u656 = u655;
                    u656 = u656 + 220.0f * t654;
                    *(float *)(((int)stk + 36)) = u656;
                    t657 = *(short *)0xC1791C0;
                    t658 = FUN_0c089de8(((unsigned short)t657 - 3072));
                    u659 = *(float *)(((int)stk + 44));
                    u660 = u659;
                    u660 = u660 + 220.0f * t658;
                    *(float *)(((int)stk + 44)) = u660;
                    t661 = *(int *)(((((int)stk + 16) + 0x14) + 0x8));
                    *(unsigned int *)((((int)stk + 4) + 0x8)) = t661;
                    t662 = *(int *)(((((int)stk + 16) + 0x14) + 0x4));
                    *(unsigned int *)((((int)stk + 4) + 0x4)) = t662;
                    t663 = *(int *)(((((int)stk + 16) + 0x14) + 0x0));
                    *(unsigned int *)((((int)stk + 4) + 0x0)) = t663;
                    t664 = gdc_CoursePointLoadReq(560.0f);
                    t686 = t664;
                } else {
                    t680 = t634;
                    if (t634 == 3) {
                        t665 = *(int *)0xC17914C;
                        *(unsigned int *)(((((int)stk + 16) + 0x14) + 0x8)) = t665;
                        t666 = *(int *)0xC179148;
                        *(unsigned int *)(((((int)stk + 16) + 0x14) + 0x4)) = t666;
                        t667 = *(int *)0xC179144;
                        *(unsigned int *)(((((int)stk + 16) + 0x14) + 0x0)) = t667;
                        t668 = *(short *)0xC1791C0;
                        t669 = FUN_0c089de0((unsigned short)t668);
                        u670 = *(float *)(((int)stk + 36));
                        u671 = u670;
                        u671 = u671 + 30.0f * t669;
                        *(float *)(((int)stk + 36)) = u671;
                        t672 = *(short *)0xC1791C0;
                        t673 = FUN_0c089de8((unsigned short)t672);
                        u674 = *(float *)(((int)stk + 44));
                        u675 = u674;
                        u675 = u675 + 30.0f * t673;
                        *(float *)(((int)stk + 44)) = u675;
                        t676 = *(int *)(((((int)stk + 16) + 0x14) + 0x8));
                        *(unsigned int *)((((int)stk + 4) + 0x8)) = t676;
                        t677 = *(int *)(((((int)stk + 16) + 0x14) + 0x4));
                        *(unsigned int *)((((int)stk + 4) + 0x4)) = t677;
                        t678 = *(int *)(((((int)stk + 16) + 0x14) + 0x0));
                        *(unsigned int *)((((int)stk + 4) + 0x0)) = t678;
                        t679 = gdc_CoursePointLoadReq(50.0f);
                        t680 = t679;
                    }
                    t686 = t680;
                }
                t692 = t686;
            }
            t698 = t692;
        }
        t768 = t698;
    } else {
        t704 = *(int *)0xC1790C8;
        if (t704 == 1) {
            t705 = *(int *)0xC17914C;
            *(unsigned int *)(((((int)stk + 16) + 0x14) + 0x8)) = t705;
            t706 = *(int *)0xC179148;
            *(unsigned int *)(((((int)stk + 16) + 0x14) + 0x4)) = t706;
            t707 = *(int *)0xC179144;
            *(unsigned int *)(((((int)stk + 16) + 0x14) + 0x0)) = t707;
            t708 = *(short *)0xC1791C0;
            t709 = FUN_0c089de0((unsigned short)t708);
            u710 = *(float *)(((int)stk + 36));
            u711 = u710;
            u711 = u711 + 200.0f * t709;
            *(float *)(((int)stk + 36)) = u711;
            t712 = *(short *)0xC1791C0;
            t713 = FUN_0c089de8((unsigned short)t712);
            u714 = *(float *)(((int)stk + 44));
            u715 = u714;
            u715 = u715 + 200.0f * t713;
            *(float *)(((int)stk + 44)) = u715;
            t716 = *(int *)(((((int)stk + 16) + 0x14) + 0x8));
            *(unsigned int *)((((int)stk + 4) + 0x8)) = t716;
            t717 = *(int *)(((((int)stk + 16) + 0x14) + 0x4));
            *(unsigned int *)((((int)stk + 4) + 0x4)) = t717;
            t718 = *(int *)(((((int)stk + 16) + 0x14) + 0x0));
            *(unsigned int *)((((int)stk + 4) + 0x0)) = t718;
            t719 = gdc_CoursePointLoadReq(520.0f);
            t762 = t719;
        } else {
            if (t704 == 2) {
                t720 = *(int *)0xC17914C;
                *(unsigned int *)(((((int)stk + 16) + 0x14) + 0x8)) = t720;
                t721 = *(int *)0xC179148;
                *(unsigned int *)(((((int)stk + 16) + 0x14) + 0x4)) = t721;
                t722 = *(int *)0xC179144;
                *(unsigned int *)(((((int)stk + 16) + 0x14) + 0x0)) = t722;
                t723 = *(short *)0xC1791C0;
                t724 = FUN_0c089de0(((unsigned short)t723 - 3072));
                u725 = *(float *)(((int)stk + 36));
                u726 = u725;
                u726 = u726 + 220.0f * t724;
                *(float *)(((int)stk + 36)) = u726;
                t727 = *(short *)0xC1791C0;
                t728 = FUN_0c089de8(((unsigned short)t727 - 3072));
                u729 = *(float *)(((int)stk + 44));
                u730 = u729;
                u730 = u730 + 220.0f * t728;
                *(float *)(((int)stk + 44)) = u730;
                t731 = *(int *)(((((int)stk + 16) + 0x14) + 0x8));
                *(unsigned int *)((((int)stk + 4) + 0x8)) = t731;
                t732 = *(int *)(((((int)stk + 16) + 0x14) + 0x4));
                *(unsigned int *)((((int)stk + 4) + 0x4)) = t732;
                t733 = *(int *)(((((int)stk + 16) + 0x14) + 0x0));
                *(unsigned int *)((((int)stk + 4) + 0x0)) = t733;
                t734 = gdc_CoursePointLoadReq(560.0f);
                t756 = t734;
            } else {
                t750 = t704;
                if (t704 == 3) {
                    t735 = *(int *)0xC17914C;
                    *(unsigned int *)(((((int)stk + 16) + 0x14) + 0x8)) = t735;
                    t736 = *(int *)0xC179148;
                    *(unsigned int *)(((((int)stk + 16) + 0x14) + 0x4)) = t736;
                    t737 = *(int *)0xC179144;
                    *(unsigned int *)(((((int)stk + 16) + 0x14) + 0x0)) = t737;
                    t738 = *(short *)0xC1791C0;
                    t739 = FUN_0c089de0((unsigned short)t738);
                    u740 = *(float *)(((int)stk + 36));
                    u741 = u740;
                    u741 = u741 + 30.0f * t739;
                    *(float *)(((int)stk + 36)) = u741;
                    t742 = *(short *)0xC1791C0;
                    t743 = FUN_0c089de8((unsigned short)t742);
                    u744 = *(float *)(((int)stk + 44));
                    u745 = u744;
                    u745 = u745 + 30.0f * t743;
                    *(float *)(((int)stk + 44)) = u745;
                    t746 = *(int *)(((((int)stk + 16) + 0x14) + 0x8));
                    *(unsigned int *)((((int)stk + 4) + 0x8)) = t746;
                    t747 = *(int *)(((((int)stk + 16) + 0x14) + 0x4));
                    *(unsigned int *)((((int)stk + 4) + 0x4)) = t747;
                    t748 = *(int *)(((((int)stk + 16) + 0x14) + 0x0));
                    *(unsigned int *)((((int)stk + 4) + 0x0)) = t748;
                    t749 = gdc_CoursePointLoadReq(50.0f);
                    t750 = t749;
                }
                t756 = t750;
            }
            t762 = t756;
        }
        t768 = t762;
    }
    return t768;
}
