/* Straight-line functions with calls and guards (batch gen_ja): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c15887e(int, int, int);
extern void _builtin_prefetch(void *);
int kmiDMAtoTARequest(int, int, int, int);
int kmiFatalErrorEntry(int);
int kmiReadRegister(int);
int kmiReqRestOfDMA(int);
int kmiWriteRegister(int, int);
void kmFlipFrameBuffer(void);

void kmFlipFrameBuffer(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t8;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t43;
    int t376;
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
    int t55;
    int t56;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    int t66;
    int t67;
    int t69;
    int t71;
    int t73;
    int t75;
    int t79;
    int t80;
    int t81;
    int t82;
    int t83;
    int t86;
    int t87;
    int t89;
    int t91;
    int t93;
    int t95;
    int t99;
    int t100;
    int t101;
    int t102;
    int t103;
    int t104;
    int t105;
    int t106;
    int t107;
    int t108;
    int t111;
    int t112;
    int t114;
    int t116;
    int t118;
    int t120;
    int t124;
    int t125;
    int t126;
    int t127;
    int t128;
    int t131;
    int t132;
    int t134;
    int t136;
    int t138;
    int t140;
    int t144;
    int t145;
    int t146;
    int t147;
    int t149;
    int t150;
    int t151;
    int t152;
    int t153;
    int t154;
    int t157;
    int t158;
    int t160;
    int t162;
    int t164;
    int t166;
    int t170;
    int t171;
    int t172;
    int t173;
    int t174;
    int t177;
    int t178;
    int t180;
    int t182;
    int t184;
    int t186;
    int t190;
    int t191;
    int t192;
    int t193;
    int t194;
    int t195;
    int t196;
    int t197;
    int t198;
    int t199;
    int t202;
    int t203;
    int t205;
    int t207;
    int t209;
    int t211;
    int t215;
    int t216;
    int t217;
    int t218;
    int t219;
    int t222;
    int t223;
    int t225;
    int t227;
    int t229;
    int t231;
    int t235;
    int t236;
    int t237;
    int t238;
    int t240;
    int t241;
    int t242;
    int t243;
    int t244;
    int t245;
    int t248;
    int t249;
    int t251;
    int t253;
    int t255;
    int t257;
    int t261;
    int t262;
    int t263;
    int t264;
    int t265;
    int t268;
    int t269;
    int t271;
    int t273;
    int t275;
    int t277;
    int t281;
    int t282;
    int t283;
    int t284;
    int t285;
    int t286;
    int t287;
    int t288;
    int t289;
    int t290;
    int t293;
    int t294;
    int t296;
    int t298;
    int t300;
    int t302;
    int t306;
    int t307;
    int t308;
    int t309;
    int t310;
    int t313;
    int t314;
    int t316;
    int t318;
    int t320;
    int t322;
    int t326;
    int t327;
    int t328;
    int t329;
    int t330;
    int t331;
    int t332;
    int t333;
    int t334;
    int t335;
    int t338;
    int t339;
    int t341;
    int t343;
    int t345;
    int t347;
    int t351;
    int t352;
    int t353;
    int t354;
    int t355;
    int t358;
    int t359;
    int t361;
    int t363;
    int t365;
    int t367;
    int t371;
    int t372;
    int t373;
    int t374;
    int t379;
    int t479;
    int t380;
    int t381;
    int t382;
    int t383;
    int t384;
    int t386;
    int t387;
    int t388;
    int t389;
    int t390;
    int t391;
    int t394;
    int t395;
    int t397;
    int t399;
    int t401;
    int t403;
    int t407;
    int t408;
    int t409;
    int t410;
    int t411;
    int t414;
    int t415;
    int t417;
    int t419;
    int t421;
    int t423;
    int t427;
    int t428;
    int t429;
    int t430;
    int t431;
    int t432;
    int t433;
    int t434;
    int t435;
    int t436;
    int t439;
    int t440;
    int t442;
    int t444;
    int t446;
    int t448;
    int t452;
    int t453;
    int t454;
    int t455;
    int t456;
    int t459;
    int t460;
    int t462;
    int t464;
    int t466;
    int t468;
    int t472;
    int t473;
    int t474;
    int t475;
    int t494;
    int t495;
    int t496;
    int t497;
    int t498;
    int t499;
    int t502;
    int t503;
    int t505;
    int t507;
    int t509;
    int t511;
    int t515;
    int t516;
    int t517;
    int t518;
    int t531;
    int t534;
    int t535;
    int t537;
    int t539;
    int t541;
    int t543;
    int t547;
    int t548;
    int t549;
    int t550;
    int stk[12] = {0};

    t0 = *(int *)0xC178278;
    if (t0 == 0) {
        t1 = *(int *)0xC2EA9C4;
        if (t1 == 0) {
            t2 = *(int *)0xC2EA9DC;
            *(unsigned int *)(((t2 << 2) + 0xC2EA9CC)) = 0x1;
            *(unsigned int *)0xC2EA9F4 = 0x1;
        } else {
            t3 = *(int *)0xFFD8000C;
            *(unsigned int *)0xC2F91F0 = t3;
            t4 = *(int *)0xC2EA9DC;
            *(unsigned int *)0xC2EA9E4 = t4;
            *(unsigned int *)0xC2EA88C = 0x1;
            *(unsigned int *)0xC2EA9EC = 0x0;
            t5 = *(int *)0xC2EAAE8;
            *(unsigned int *)0xC2EA9E8 = t5;
            *(unsigned int *)0xC2EA9F4 = 0x1;
            *(unsigned int *)0xC2F91AC = 0x0;
            *(unsigned int *)(((t4 << 2) + 0xC2EA9CC)) = 0x2;
            t6 = *(int *)0xC2EAAA0;
            if ((t6 & 32) != 0) {
                *(unsigned int *)0xFF000038 = 0x10;
                *(unsigned int *)0xFF00003C = 0x10;
                FUN_0c15887e(0xE0000000, 0xC175D78, 0x4);
                _builtin_prefetch((void *)0xE0000000);
                t8 = *(int *)0xC2EAAA4;
                kmiReqRestOfDMA(t8);
            } else {
                t10 = *(int *)0xC2EA9DC;
                t11 = *(int *)0xC2EA9DC;
                t12 = *(int *)0xC2EAAA4;
                t13 = *(int *)0xC2EAAA4;
                for (;;) {
                    t14 = *(int *)(((((t11 << 2) + 0xC2EAA50) + ((t12 << 2) << 2)) + 0x0));
                    t15 = *(int *)(((((t10 << 2) + 0xC2EAA00) + ((t13 << 2) << 2)) + 0x0));
                    t16 = kmiDMAtoTARequest(0x10000000, t15, (t14 + 0x20), 0x10);
                    if (t16 != 0x100) {
                        break;
                    }
                }
                t17 = *(int *)0xC2EAAA4;
                kmiReqRestOfDMA(t17);
            }
        }
    }
    *(unsigned int *)0xC2EA9F0 = 0x0;
    t43 = *(int *)0xC2EA9F4;
    t376 = 0x0;
    if (t43 != 0) {
        for (;;) {
            t44 = *(int *)0xC2EA8E8;
            t45 = *(int *)0xC2EA8EC;
            t46 = ((int (*)(int))(t44))(t45);
            t47 = *(int *)0xC2EA8A4;
            t48 = *(int *)0xC2EA8A8;
            t49 = *(int *)0xC2EA9F0;
            if ((unsigned int)t49 > (unsigned int)((t48 + t47) + 0x1)) {
                break;
            }
            t50 = *(int *)0xC2EA9F4;
            if (t50 == 0) {
                if (0x0 != 0) {
                    *(unsigned int *)0xC2EA888 = 0x0;
                    *(unsigned int *)0xC2EA9F0 = 0x0;
                    t51 = *(int *)0xC2EA9F4;
                    if (t51 != 0) {
                        for (;;) {
                            t52 = *(int *)0xC2EA8E8;
                            t53 = *(int *)0xC2EA8EC;
                            t54 = ((int (*)(int))(t52))(t53);
                            t55 = *(int *)0xC2EA9F0;
                            if ((unsigned int)t55 > (unsigned int)0x14) {
                                break;
                            }
                            t56 = *(int *)0xC2EA9F4;
                            if (t56 == 0) {
                                if (0x0 != 0) {
                                    kmiFatalErrorEntry(0x4);
                                    t58 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)0xC2EA9DC = (t58 + 0x1);
                                    t59 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)0xC2EA9DC = (t59 & 0x3);
                                    t60 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)(((t60 << 2) + 0xC2EA9CC)) = 0x0;
                                    t61 = *(int *)0xC2EA9C4;
                                    if (t61 != 1) {
                                        t62 = *(int *)0xC178278;
                                        if (t62 == 1) {
                                            t63 = *(int *)0xC2EA9DC;
                                            *(unsigned int *)(((int)stk + 12)) = (t63 & 0x1);
                                            kmiWriteRegister(0x8, 0x1);
                                            kmiWriteRegister(0x8, 0x0);
                                            t66 = *(int *)(((int)stk + 12));
                                            t67 = *(int *)(((((t66 << 2) << 2) << 1) + 0xC2EAAF8));
                                            kmiWriteRegister(0x124, t67);
                                            t69 = *(int *)(((((t66 << 2) << 2) << 1) + 0xC2EAAFC));
                                            kmiWriteRegister(0x12C, t69);
                                            t71 = *(int *)(((((t66 << 2) << 2) << 1) + 0xC2EAB04));
                                            kmiWriteRegister(0x128, t71);
                                            t73 = *(int *)(((((t66 << 2) << 2) << 1) + 0xC2EAB08));
                                            kmiWriteRegister(0x130, t73);
                                            t75 = *(int *)(((((t66 << 2) << 2) << 1) + 0xC2EAB00));
                                            kmiWriteRegister(0x164, t75);
                                            kmiWriteRegister(0x144, 0x80000000);
                                            kmiReadRegister(0x144);
                                            *(unsigned int *)0xC2EA9EC = 0x0;
                                            t79 = *(int *)0xC2EAAE8;
                                            *(unsigned int *)0xC2EA9E8 = t79;
                                            t80 = *(int *)0xC178278;
                                            if (t80 != 0) {
                                                t81 = *(int *)0xC2EA9DC;
                                                *(unsigned int *)0xC2EA9E4 = t81;
                                                t82 = *(int *)0xC2EA9DC;
                                                *(unsigned int *)(((t82 << 2) + 0xC2EA9CC)) = 0x2;
                                                *(unsigned int *)0xC2EA88C = 0x1;
                                                *(unsigned int *)0xC2EA9FC = 0x1;
                                                return;
                                            }
                                            return;
                                        }
                                        return;
                                    }
                                    t83 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)(((int)stk + 12)) = (t83 & 0x1);
                                    kmiWriteRegister(0x8, 0x1);
                                    kmiWriteRegister(0x8, 0x0);
                                    t86 = *(int *)(((int)stk + 12));
                                    t87 = *(int *)(((((t86 << 2) << 2) << 1) + 0xC2EAAF8));
                                    kmiWriteRegister(0x124, t87);
                                    t89 = *(int *)(((((t86 << 2) << 2) << 1) + 0xC2EAAFC));
                                    kmiWriteRegister(0x12C, t89);
                                    t91 = *(int *)(((((t86 << 2) << 2) << 1) + 0xC2EAB04));
                                    kmiWriteRegister(0x128, t91);
                                    t93 = *(int *)(((((t86 << 2) << 2) << 1) + 0xC2EAB08));
                                    kmiWriteRegister(0x130, t93);
                                    t95 = *(int *)(((((t86 << 2) << 2) << 1) + 0xC2EAB00));
                                    kmiWriteRegister(0x164, t95);
                                    kmiWriteRegister(0x144, 0x80000000);
                                    kmiReadRegister(0x144);
                                    *(unsigned int *)0xC2EA9EC = 0x0;
                                    t99 = *(int *)0xC2EAAE8;
                                    *(unsigned int *)0xC2EA9E8 = t99;
                                    t100 = *(int *)0xC178278;
                                    if (t100 != 0) {
                                        t101 = *(int *)0xC2EA9DC;
                                        *(unsigned int *)0xC2EA9E4 = t101;
                                        t102 = *(int *)0xC2EA9DC;
                                        *(unsigned int *)(((t102 << 2) + 0xC2EA9CC)) = 0x2;
                                        *(unsigned int *)0xC2EA88C = 0x1;
                                        *(unsigned int *)0xC2EA9FC = 0x1;
                                        return;
                                    }
                                    return;
                                }
                                t103 = *(int *)0xC2EA9DC;
                                *(unsigned int *)0xC2EA9DC = (t103 + 0x1);
                                t104 = *(int *)0xC2EA9DC;
                                *(unsigned int *)0xC2EA9DC = (t104 & 0x3);
                                t105 = *(int *)0xC2EA9DC;
                                *(unsigned int *)(((t105 << 2) + 0xC2EA9CC)) = 0x0;
                                t106 = *(int *)0xC2EA9C4;
                                if (t106 != 1) {
                                    t107 = *(int *)0xC178278;
                                    if (t107 == 1) {
                                        t108 = *(int *)0xC2EA9DC;
                                        *(unsigned int *)(((int)stk + 12)) = (t108 & 0x1);
                                        kmiWriteRegister(0x8, 0x1);
                                        kmiWriteRegister(0x8, 0x0);
                                        t111 = *(int *)(((int)stk + 12));
                                        t112 = *(int *)(((((t111 << 2) << 2) << 1) + 0xC2EAAF8));
                                        kmiWriteRegister(0x124, t112);
                                        t114 = *(int *)(((((t111 << 2) << 2) << 1) + 0xC2EAAFC));
                                        kmiWriteRegister(0x12C, t114);
                                        t116 = *(int *)(((((t111 << 2) << 2) << 1) + 0xC2EAB04));
                                        kmiWriteRegister(0x128, t116);
                                        t118 = *(int *)(((((t111 << 2) << 2) << 1) + 0xC2EAB08));
                                        kmiWriteRegister(0x130, t118);
                                        t120 = *(int *)(((((t111 << 2) << 2) << 1) + 0xC2EAB00));
                                        kmiWriteRegister(0x164, t120);
                                        kmiWriteRegister(0x144, 0x80000000);
                                        kmiReadRegister(0x144);
                                        *(unsigned int *)0xC2EA9EC = 0x0;
                                        t124 = *(int *)0xC2EAAE8;
                                        *(unsigned int *)0xC2EA9E8 = t124;
                                        t125 = *(int *)0xC178278;
                                        if (t125 != 0) {
                                            t126 = *(int *)0xC2EA9DC;
                                            *(unsigned int *)0xC2EA9E4 = t126;
                                            t127 = *(int *)0xC2EA9DC;
                                            *(unsigned int *)(((t127 << 2) + 0xC2EA9CC)) = 0x2;
                                            *(unsigned int *)0xC2EA88C = 0x1;
                                            *(unsigned int *)0xC2EA9FC = 0x1;
                                            return;
                                        }
                                        return;
                                    }
                                    return;
                                }
                                t128 = *(int *)0xC2EA9DC;
                                *(unsigned int *)(((int)stk + 12)) = (t128 & 0x1);
                                kmiWriteRegister(0x8, 0x1);
                                kmiWriteRegister(0x8, 0x0);
                                t131 = *(int *)(((int)stk + 12));
                                t132 = *(int *)(((((t131 << 2) << 2) << 1) + 0xC2EAAF8));
                                kmiWriteRegister(0x124, t132);
                                t134 = *(int *)(((((t131 << 2) << 2) << 1) + 0xC2EAAFC));
                                kmiWriteRegister(0x12C, t134);
                                t136 = *(int *)(((((t131 << 2) << 2) << 1) + 0xC2EAB04));
                                kmiWriteRegister(0x128, t136);
                                t138 = *(int *)(((((t131 << 2) << 2) << 1) + 0xC2EAB08));
                                kmiWriteRegister(0x130, t138);
                                t140 = *(int *)(((((t131 << 2) << 2) << 1) + 0xC2EAB00));
                                kmiWriteRegister(0x164, t140);
                                kmiWriteRegister(0x144, 0x80000000);
                                kmiReadRegister(0x144);
                                *(unsigned int *)0xC2EA9EC = 0x0;
                                t144 = *(int *)0xC2EAAE8;
                                *(unsigned int *)0xC2EA9E8 = t144;
                                t145 = *(int *)0xC178278;
                                if (t145 != 0) {
                                    t146 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)0xC2EA9E4 = t146;
                                    t147 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)(((t147 << 2) + 0xC2EA9CC)) = 0x2;
                                    *(unsigned int *)0xC2EA88C = 0x1;
                                    *(unsigned int *)0xC2EA9FC = 0x1;
                                    return;
                                }
                                return;
                            }
                        }
                        if (0x1 != 0) {
                            kmiFatalErrorEntry(0x4);
                            t149 = *(int *)0xC2EA9DC;
                            *(unsigned int *)0xC2EA9DC = (t149 + 0x1);
                            t150 = *(int *)0xC2EA9DC;
                            *(unsigned int *)0xC2EA9DC = (t150 & 0x3);
                            t151 = *(int *)0xC2EA9DC;
                            *(unsigned int *)(((t151 << 2) + 0xC2EA9CC)) = 0x0;
                            t152 = *(int *)0xC2EA9C4;
                            if (t152 != 1) {
                                t153 = *(int *)0xC178278;
                                if (t153 == 1) {
                                    t154 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)(((int)stk + 12)) = (t154 & 0x1);
                                    kmiWriteRegister(0x8, 0x1);
                                    kmiWriteRegister(0x8, 0x0);
                                    t157 = *(int *)(((int)stk + 12));
                                    t158 = *(int *)(((((t157 << 2) << 2) << 1) + 0xC2EAAF8));
                                    kmiWriteRegister(0x124, t158);
                                    t160 = *(int *)(((((t157 << 2) << 2) << 1) + 0xC2EAAFC));
                                    kmiWriteRegister(0x12C, t160);
                                    t162 = *(int *)(((((t157 << 2) << 2) << 1) + 0xC2EAB04));
                                    kmiWriteRegister(0x128, t162);
                                    t164 = *(int *)(((((t157 << 2) << 2) << 1) + 0xC2EAB08));
                                    kmiWriteRegister(0x130, t164);
                                    t166 = *(int *)(((((t157 << 2) << 2) << 1) + 0xC2EAB00));
                                    kmiWriteRegister(0x164, t166);
                                    kmiWriteRegister(0x144, 0x80000000);
                                    kmiReadRegister(0x144);
                                    *(unsigned int *)0xC2EA9EC = 0x0;
                                    t170 = *(int *)0xC2EAAE8;
                                    *(unsigned int *)0xC2EA9E8 = t170;
                                    t171 = *(int *)0xC178278;
                                    if (t171 != 0) {
                                        t172 = *(int *)0xC2EA9DC;
                                        *(unsigned int *)0xC2EA9E4 = t172;
                                        t173 = *(int *)0xC2EA9DC;
                                        *(unsigned int *)(((t173 << 2) + 0xC2EA9CC)) = 0x2;
                                        *(unsigned int *)0xC2EA88C = 0x1;
                                        *(unsigned int *)0xC2EA9FC = 0x1;
                                        return;
                                    }
                                    return;
                                }
                                return;
                            }
                            t174 = *(int *)0xC2EA9DC;
                            *(unsigned int *)(((int)stk + 12)) = (t174 & 0x1);
                            kmiWriteRegister(0x8, 0x1);
                            kmiWriteRegister(0x8, 0x0);
                            t177 = *(int *)(((int)stk + 12));
                            t178 = *(int *)(((((t177 << 2) << 2) << 1) + 0xC2EAAF8));
                            kmiWriteRegister(0x124, t178);
                            t180 = *(int *)(((((t177 << 2) << 2) << 1) + 0xC2EAAFC));
                            kmiWriteRegister(0x12C, t180);
                            t182 = *(int *)(((((t177 << 2) << 2) << 1) + 0xC2EAB04));
                            kmiWriteRegister(0x128, t182);
                            t184 = *(int *)(((((t177 << 2) << 2) << 1) + 0xC2EAB08));
                            kmiWriteRegister(0x130, t184);
                            t186 = *(int *)(((((t177 << 2) << 2) << 1) + 0xC2EAB00));
                            kmiWriteRegister(0x164, t186);
                            kmiWriteRegister(0x144, 0x80000000);
                            kmiReadRegister(0x144);
                            *(unsigned int *)0xC2EA9EC = 0x0;
                            t190 = *(int *)0xC2EAAE8;
                            *(unsigned int *)0xC2EA9E8 = t190;
                            t191 = *(int *)0xC178278;
                            if (t191 != 0) {
                                t192 = *(int *)0xC2EA9DC;
                                *(unsigned int *)0xC2EA9E4 = t192;
                                t193 = *(int *)0xC2EA9DC;
                                *(unsigned int *)(((t193 << 2) + 0xC2EA9CC)) = 0x2;
                                *(unsigned int *)0xC2EA88C = 0x1;
                                *(unsigned int *)0xC2EA9FC = 0x1;
                                return;
                            }
                            return;
                        }
                        t194 = *(int *)0xC2EA9DC;
                        *(unsigned int *)0xC2EA9DC = (t194 + 0x1);
                        t195 = *(int *)0xC2EA9DC;
                        *(unsigned int *)0xC2EA9DC = (t195 & 0x3);
                        t196 = *(int *)0xC2EA9DC;
                        *(unsigned int *)(((t196 << 2) + 0xC2EA9CC)) = 0x0;
                        t197 = *(int *)0xC2EA9C4;
                        if (t197 != 1) {
                            t198 = *(int *)0xC178278;
                            if (t198 == 1) {
                                t199 = *(int *)0xC2EA9DC;
                                *(unsigned int *)(((int)stk + 12)) = (t199 & 0x1);
                                kmiWriteRegister(0x8, 0x1);
                                kmiWriteRegister(0x8, 0x0);
                                t202 = *(int *)(((int)stk + 12));
                                t203 = *(int *)(((((t202 << 2) << 2) << 1) + 0xC2EAAF8));
                                kmiWriteRegister(0x124, t203);
                                t205 = *(int *)(((((t202 << 2) << 2) << 1) + 0xC2EAAFC));
                                kmiWriteRegister(0x12C, t205);
                                t207 = *(int *)(((((t202 << 2) << 2) << 1) + 0xC2EAB04));
                                kmiWriteRegister(0x128, t207);
                                t209 = *(int *)(((((t202 << 2) << 2) << 1) + 0xC2EAB08));
                                kmiWriteRegister(0x130, t209);
                                t211 = *(int *)(((((t202 << 2) << 2) << 1) + 0xC2EAB00));
                                kmiWriteRegister(0x164, t211);
                                kmiWriteRegister(0x144, 0x80000000);
                                kmiReadRegister(0x144);
                                *(unsigned int *)0xC2EA9EC = 0x0;
                                t215 = *(int *)0xC2EAAE8;
                                *(unsigned int *)0xC2EA9E8 = t215;
                                t216 = *(int *)0xC178278;
                                if (t216 != 0) {
                                    t217 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)0xC2EA9E4 = t217;
                                    t218 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)(((t218 << 2) + 0xC2EA9CC)) = 0x2;
                                    *(unsigned int *)0xC2EA88C = 0x1;
                                    *(unsigned int *)0xC2EA9FC = 0x1;
                                    return;
                                }
                                return;
                            }
                            return;
                        }
                        t219 = *(int *)0xC2EA9DC;
                        *(unsigned int *)(((int)stk + 12)) = (t219 & 0x1);
                        kmiWriteRegister(0x8, 0x1);
                        kmiWriteRegister(0x8, 0x0);
                        t222 = *(int *)(((int)stk + 12));
                        t223 = *(int *)(((((t222 << 2) << 2) << 1) + 0xC2EAAF8));
                        kmiWriteRegister(0x124, t223);
                        t225 = *(int *)(((((t222 << 2) << 2) << 1) + 0xC2EAAFC));
                        kmiWriteRegister(0x12C, t225);
                        t227 = *(int *)(((((t222 << 2) << 2) << 1) + 0xC2EAB04));
                        kmiWriteRegister(0x128, t227);
                        t229 = *(int *)(((((t222 << 2) << 2) << 1) + 0xC2EAB08));
                        kmiWriteRegister(0x130, t229);
                        t231 = *(int *)(((((t222 << 2) << 2) << 1) + 0xC2EAB00));
                        kmiWriteRegister(0x164, t231);
                        kmiWriteRegister(0x144, 0x80000000);
                        kmiReadRegister(0x144);
                        *(unsigned int *)0xC2EA9EC = 0x0;
                        t235 = *(int *)0xC2EAAE8;
                        *(unsigned int *)0xC2EA9E8 = t235;
                        t236 = *(int *)0xC178278;
                        if (t236 != 0) {
                            t237 = *(int *)0xC2EA9DC;
                            *(unsigned int *)0xC2EA9E4 = t237;
                            t238 = *(int *)0xC2EA9DC;
                            *(unsigned int *)(((t238 << 2) + 0xC2EA9CC)) = 0x2;
                            *(unsigned int *)0xC2EA88C = 0x1;
                            *(unsigned int *)0xC2EA9FC = 0x1;
                            return;
                        }
                        return;
                    }
                    if (0x0 != 0) {
                        kmiFatalErrorEntry(0x4);
                        t240 = *(int *)0xC2EA9DC;
                        *(unsigned int *)0xC2EA9DC = (t240 + 0x1);
                        t241 = *(int *)0xC2EA9DC;
                        *(unsigned int *)0xC2EA9DC = (t241 & 0x3);
                        t242 = *(int *)0xC2EA9DC;
                        *(unsigned int *)(((t242 << 2) + 0xC2EA9CC)) = 0x0;
                        t243 = *(int *)0xC2EA9C4;
                        if (t243 != 1) {
                            t244 = *(int *)0xC178278;
                            if (t244 == 1) {
                                t245 = *(int *)0xC2EA9DC;
                                *(unsigned int *)(((int)stk + 12)) = (t245 & 0x1);
                                kmiWriteRegister(0x8, 0x1);
                                kmiWriteRegister(0x8, 0x0);
                                t248 = *(int *)(((int)stk + 12));
                                t249 = *(int *)(((((t248 << 2) << 2) << 1) + 0xC2EAAF8));
                                kmiWriteRegister(0x124, t249);
                                t251 = *(int *)(((((t248 << 2) << 2) << 1) + 0xC2EAAFC));
                                kmiWriteRegister(0x12C, t251);
                                t253 = *(int *)(((((t248 << 2) << 2) << 1) + 0xC2EAB04));
                                kmiWriteRegister(0x128, t253);
                                t255 = *(int *)(((((t248 << 2) << 2) << 1) + 0xC2EAB08));
                                kmiWriteRegister(0x130, t255);
                                t257 = *(int *)(((((t248 << 2) << 2) << 1) + 0xC2EAB00));
                                kmiWriteRegister(0x164, t257);
                                kmiWriteRegister(0x144, 0x80000000);
                                kmiReadRegister(0x144);
                                *(unsigned int *)0xC2EA9EC = 0x0;
                                t261 = *(int *)0xC2EAAE8;
                                *(unsigned int *)0xC2EA9E8 = t261;
                                t262 = *(int *)0xC178278;
                                if (t262 != 0) {
                                    t263 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)0xC2EA9E4 = t263;
                                    t264 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)(((t264 << 2) + 0xC2EA9CC)) = 0x2;
                                    *(unsigned int *)0xC2EA88C = 0x1;
                                    *(unsigned int *)0xC2EA9FC = 0x1;
                                    return;
                                }
                                return;
                            }
                            return;
                        }
                        t265 = *(int *)0xC2EA9DC;
                        *(unsigned int *)(((int)stk + 12)) = (t265 & 0x1);
                        kmiWriteRegister(0x8, 0x1);
                        kmiWriteRegister(0x8, 0x0);
                        t268 = *(int *)(((int)stk + 12));
                        t269 = *(int *)(((((t268 << 2) << 2) << 1) + 0xC2EAAF8));
                        kmiWriteRegister(0x124, t269);
                        t271 = *(int *)(((((t268 << 2) << 2) << 1) + 0xC2EAAFC));
                        kmiWriteRegister(0x12C, t271);
                        t273 = *(int *)(((((t268 << 2) << 2) << 1) + 0xC2EAB04));
                        kmiWriteRegister(0x128, t273);
                        t275 = *(int *)(((((t268 << 2) << 2) << 1) + 0xC2EAB08));
                        kmiWriteRegister(0x130, t275);
                        t277 = *(int *)(((((t268 << 2) << 2) << 1) + 0xC2EAB00));
                        kmiWriteRegister(0x164, t277);
                        kmiWriteRegister(0x144, 0x80000000);
                        kmiReadRegister(0x144);
                        *(unsigned int *)0xC2EA9EC = 0x0;
                        t281 = *(int *)0xC2EAAE8;
                        *(unsigned int *)0xC2EA9E8 = t281;
                        t282 = *(int *)0xC178278;
                        if (t282 != 0) {
                            t283 = *(int *)0xC2EA9DC;
                            *(unsigned int *)0xC2EA9E4 = t283;
                            t284 = *(int *)0xC2EA9DC;
                            *(unsigned int *)(((t284 << 2) + 0xC2EA9CC)) = 0x2;
                            *(unsigned int *)0xC2EA88C = 0x1;
                            *(unsigned int *)0xC2EA9FC = 0x1;
                            return;
                        }
                        return;
                    }
                    t285 = *(int *)0xC2EA9DC;
                    *(unsigned int *)0xC2EA9DC = (t285 + 0x1);
                    t286 = *(int *)0xC2EA9DC;
                    *(unsigned int *)0xC2EA9DC = (t286 & 0x3);
                    t287 = *(int *)0xC2EA9DC;
                    *(unsigned int *)(((t287 << 2) + 0xC2EA9CC)) = 0x0;
                    t288 = *(int *)0xC2EA9C4;
                    if (t288 != 1) {
                        t289 = *(int *)0xC178278;
                        if (t289 == 1) {
                            t290 = *(int *)0xC2EA9DC;
                            *(unsigned int *)(((int)stk + 12)) = (t290 & 0x1);
                            kmiWriteRegister(0x8, 0x1);
                            kmiWriteRegister(0x8, 0x0);
                            t293 = *(int *)(((int)stk + 12));
                            t294 = *(int *)(((((t293 << 2) << 2) << 1) + 0xC2EAAF8));
                            kmiWriteRegister(0x124, t294);
                            t296 = *(int *)(((((t293 << 2) << 2) << 1) + 0xC2EAAFC));
                            kmiWriteRegister(0x12C, t296);
                            t298 = *(int *)(((((t293 << 2) << 2) << 1) + 0xC2EAB04));
                            kmiWriteRegister(0x128, t298);
                            t300 = *(int *)(((((t293 << 2) << 2) << 1) + 0xC2EAB08));
                            kmiWriteRegister(0x130, t300);
                            t302 = *(int *)(((((t293 << 2) << 2) << 1) + 0xC2EAB00));
                            kmiWriteRegister(0x164, t302);
                            kmiWriteRegister(0x144, 0x80000000);
                            kmiReadRegister(0x144);
                            *(unsigned int *)0xC2EA9EC = 0x0;
                            t306 = *(int *)0xC2EAAE8;
                            *(unsigned int *)0xC2EA9E8 = t306;
                            t307 = *(int *)0xC178278;
                            if (t307 != 0) {
                                t308 = *(int *)0xC2EA9DC;
                                *(unsigned int *)0xC2EA9E4 = t308;
                                t309 = *(int *)0xC2EA9DC;
                                *(unsigned int *)(((t309 << 2) + 0xC2EA9CC)) = 0x2;
                                *(unsigned int *)0xC2EA88C = 0x1;
                                *(unsigned int *)0xC2EA9FC = 0x1;
                                return;
                            }
                            return;
                        }
                        return;
                    }
                    t310 = *(int *)0xC2EA9DC;
                    *(unsigned int *)(((int)stk + 12)) = (t310 & 0x1);
                    kmiWriteRegister(0x8, 0x1);
                    kmiWriteRegister(0x8, 0x0);
                    t313 = *(int *)(((int)stk + 12));
                    t314 = *(int *)(((((t313 << 2) << 2) << 1) + 0xC2EAAF8));
                    kmiWriteRegister(0x124, t314);
                    t316 = *(int *)(((((t313 << 2) << 2) << 1) + 0xC2EAAFC));
                    kmiWriteRegister(0x12C, t316);
                    t318 = *(int *)(((((t313 << 2) << 2) << 1) + 0xC2EAB04));
                    kmiWriteRegister(0x128, t318);
                    t320 = *(int *)(((((t313 << 2) << 2) << 1) + 0xC2EAB08));
                    kmiWriteRegister(0x130, t320);
                    t322 = *(int *)(((((t313 << 2) << 2) << 1) + 0xC2EAB00));
                    kmiWriteRegister(0x164, t322);
                    kmiWriteRegister(0x144, 0x80000000);
                    kmiReadRegister(0x144);
                    *(unsigned int *)0xC2EA9EC = 0x0;
                    t326 = *(int *)0xC2EAAE8;
                    *(unsigned int *)0xC2EA9E8 = t326;
                    t327 = *(int *)0xC178278;
                    if (t327 != 0) {
                        t328 = *(int *)0xC2EA9DC;
                        *(unsigned int *)0xC2EA9E4 = t328;
                        t329 = *(int *)0xC2EA9DC;
                        *(unsigned int *)(((t329 << 2) + 0xC2EA9CC)) = 0x2;
                        *(unsigned int *)0xC2EA88C = 0x1;
                        *(unsigned int *)0xC2EA9FC = 0x1;
                        return;
                    }
                    return;
                }
                t330 = *(int *)0xC2EA9DC;
                *(unsigned int *)0xC2EA9DC = (t330 + 0x1);
                t331 = *(int *)0xC2EA9DC;
                *(unsigned int *)0xC2EA9DC = (t331 & 0x3);
                t332 = *(int *)0xC2EA9DC;
                *(unsigned int *)(((t332 << 2) + 0xC2EA9CC)) = 0x0;
                t333 = *(int *)0xC2EA9C4;
                if (t333 != 1) {
                    t334 = *(int *)0xC178278;
                    if (t334 == 1) {
                        t335 = *(int *)0xC2EA9DC;
                        *(unsigned int *)(((int)stk + 12)) = (t335 & 0x1);
                        kmiWriteRegister(0x8, 0x1);
                        kmiWriteRegister(0x8, 0x0);
                        t338 = *(int *)(((int)stk + 12));
                        t339 = *(int *)(((((t338 << 2) << 2) << 1) + 0xC2EAAF8));
                        kmiWriteRegister(0x124, t339);
                        t341 = *(int *)(((((t338 << 2) << 2) << 1) + 0xC2EAAFC));
                        kmiWriteRegister(0x12C, t341);
                        t343 = *(int *)(((((t338 << 2) << 2) << 1) + 0xC2EAB04));
                        kmiWriteRegister(0x128, t343);
                        t345 = *(int *)(((((t338 << 2) << 2) << 1) + 0xC2EAB08));
                        kmiWriteRegister(0x130, t345);
                        t347 = *(int *)(((((t338 << 2) << 2) << 1) + 0xC2EAB00));
                        kmiWriteRegister(0x164, t347);
                        kmiWriteRegister(0x144, 0x80000000);
                        kmiReadRegister(0x144);
                        *(unsigned int *)0xC2EA9EC = 0x0;
                        t351 = *(int *)0xC2EAAE8;
                        *(unsigned int *)0xC2EA9E8 = t351;
                        t352 = *(int *)0xC178278;
                        if (t352 != 0) {
                            t353 = *(int *)0xC2EA9DC;
                            *(unsigned int *)0xC2EA9E4 = t353;
                            t354 = *(int *)0xC2EA9DC;
                            *(unsigned int *)(((t354 << 2) + 0xC2EA9CC)) = 0x2;
                            *(unsigned int *)0xC2EA88C = 0x1;
                            *(unsigned int *)0xC2EA9FC = 0x1;
                            return;
                        }
                        return;
                    }
                    return;
                }
                t355 = *(int *)0xC2EA9DC;
                *(unsigned int *)(((int)stk + 12)) = (t355 & 0x1);
                kmiWriteRegister(0x8, 0x1);
                kmiWriteRegister(0x8, 0x0);
                t358 = *(int *)(((int)stk + 12));
                t359 = *(int *)(((((t358 << 2) << 2) << 1) + 0xC2EAAF8));
                kmiWriteRegister(0x124, t359);
                t361 = *(int *)(((((t358 << 2) << 2) << 1) + 0xC2EAAFC));
                kmiWriteRegister(0x12C, t361);
                t363 = *(int *)(((((t358 << 2) << 2) << 1) + 0xC2EAB04));
                kmiWriteRegister(0x128, t363);
                t365 = *(int *)(((((t358 << 2) << 2) << 1) + 0xC2EAB08));
                kmiWriteRegister(0x130, t365);
                t367 = *(int *)(((((t358 << 2) << 2) << 1) + 0xC2EAB00));
                kmiWriteRegister(0x164, t367);
                kmiWriteRegister(0x144, 0x80000000);
                kmiReadRegister(0x144);
                *(unsigned int *)0xC2EA9EC = 0x0;
                t371 = *(int *)0xC2EAAE8;
                *(unsigned int *)0xC2EA9E8 = t371;
                t372 = *(int *)0xC178278;
                if (t372 != 0) {
                    t373 = *(int *)0xC2EA9DC;
                    *(unsigned int *)0xC2EA9E4 = t373;
                    t374 = *(int *)0xC2EA9DC;
                    *(unsigned int *)(((t374 << 2) + 0xC2EA9CC)) = 0x2;
                    *(unsigned int *)0xC2EA88C = 0x1;
                    *(unsigned int *)0xC2EA9FC = 0x1;
                    return;
                }
                return;
            }
        }
        t376 = 0x1;
    }
    if (t376 != 0) {
        *(unsigned int *)0xC2EA888 = 0x0;
        *(unsigned int *)0xC2EA9F0 = 0x0;
        t379 = *(int *)0xC2EA9F4;
        t479 = 0x0;
        if (t379 != 0) {
            for (;;) {
                t380 = *(int *)0xC2EA8E8;
                t381 = *(int *)0xC2EA8EC;
                t382 = ((int (*)(int))(t380))(t381);
                t383 = *(int *)0xC2EA9F0;
                if ((unsigned int)t383 > (unsigned int)0x14) {
                    break;
                }
                t384 = *(int *)0xC2EA9F4;
                if (t384 == 0) {
                    if (0x0 != 0) {
                        kmiFatalErrorEntry(0x4);
                        t386 = *(int *)0xC2EA9DC;
                        *(unsigned int *)0xC2EA9DC = (t386 + 0x1);
                        t387 = *(int *)0xC2EA9DC;
                        *(unsigned int *)0xC2EA9DC = (t387 & 0x3);
                        t388 = *(int *)0xC2EA9DC;
                        *(unsigned int *)(((t388 << 2) + 0xC2EA9CC)) = 0x0;
                        t389 = *(int *)0xC2EA9C4;
                        if (t389 != 1) {
                            t390 = *(int *)0xC178278;
                            if (t390 == 1) {
                                t391 = *(int *)0xC2EA9DC;
                                *(unsigned int *)(((int)stk + 12)) = (t391 & 0x1);
                                kmiWriteRegister(0x8, 0x1);
                                kmiWriteRegister(0x8, 0x0);
                                t394 = *(int *)(((int)stk + 12));
                                t395 = *(int *)(((((t394 << 2) << 2) << 1) + 0xC2EAAF8));
                                kmiWriteRegister(0x124, t395);
                                t397 = *(int *)(((((t394 << 2) << 2) << 1) + 0xC2EAAFC));
                                kmiWriteRegister(0x12C, t397);
                                t399 = *(int *)(((((t394 << 2) << 2) << 1) + 0xC2EAB04));
                                kmiWriteRegister(0x128, t399);
                                t401 = *(int *)(((((t394 << 2) << 2) << 1) + 0xC2EAB08));
                                kmiWriteRegister(0x130, t401);
                                t403 = *(int *)(((((t394 << 2) << 2) << 1) + 0xC2EAB00));
                                kmiWriteRegister(0x164, t403);
                                kmiWriteRegister(0x144, 0x80000000);
                                kmiReadRegister(0x144);
                                *(unsigned int *)0xC2EA9EC = 0x0;
                                t407 = *(int *)0xC2EAAE8;
                                *(unsigned int *)0xC2EA9E8 = t407;
                                t408 = *(int *)0xC178278;
                                if (t408 != 0) {
                                    t409 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)0xC2EA9E4 = t409;
                                    t410 = *(int *)0xC2EA9DC;
                                    *(unsigned int *)(((t410 << 2) + 0xC2EA9CC)) = 0x2;
                                    *(unsigned int *)0xC2EA88C = 0x1;
                                    *(unsigned int *)0xC2EA9FC = 0x1;
                                    return;
                                }
                                return;
                            }
                            return;
                        }
                        t411 = *(int *)0xC2EA9DC;
                        *(unsigned int *)(((int)stk + 12)) = (t411 & 0x1);
                        kmiWriteRegister(0x8, 0x1);
                        kmiWriteRegister(0x8, 0x0);
                        t414 = *(int *)(((int)stk + 12));
                        t415 = *(int *)(((((t414 << 2) << 2) << 1) + 0xC2EAAF8));
                        kmiWriteRegister(0x124, t415);
                        t417 = *(int *)(((((t414 << 2) << 2) << 1) + 0xC2EAAFC));
                        kmiWriteRegister(0x12C, t417);
                        t419 = *(int *)(((((t414 << 2) << 2) << 1) + 0xC2EAB04));
                        kmiWriteRegister(0x128, t419);
                        t421 = *(int *)(((((t414 << 2) << 2) << 1) + 0xC2EAB08));
                        kmiWriteRegister(0x130, t421);
                        t423 = *(int *)(((((t414 << 2) << 2) << 1) + 0xC2EAB00));
                        kmiWriteRegister(0x164, t423);
                        kmiWriteRegister(0x144, 0x80000000);
                        kmiReadRegister(0x144);
                        *(unsigned int *)0xC2EA9EC = 0x0;
                        t427 = *(int *)0xC2EAAE8;
                        *(unsigned int *)0xC2EA9E8 = t427;
                        t428 = *(int *)0xC178278;
                        if (t428 != 0) {
                            t429 = *(int *)0xC2EA9DC;
                            *(unsigned int *)0xC2EA9E4 = t429;
                            t430 = *(int *)0xC2EA9DC;
                            *(unsigned int *)(((t430 << 2) + 0xC2EA9CC)) = 0x2;
                            *(unsigned int *)0xC2EA88C = 0x1;
                            *(unsigned int *)0xC2EA9FC = 0x1;
                            return;
                        }
                        return;
                    }
                    t431 = *(int *)0xC2EA9DC;
                    *(unsigned int *)0xC2EA9DC = (t431 + 0x1);
                    t432 = *(int *)0xC2EA9DC;
                    *(unsigned int *)0xC2EA9DC = (t432 & 0x3);
                    t433 = *(int *)0xC2EA9DC;
                    *(unsigned int *)(((t433 << 2) + 0xC2EA9CC)) = 0x0;
                    t434 = *(int *)0xC2EA9C4;
                    if (t434 != 1) {
                        t435 = *(int *)0xC178278;
                        if (t435 == 1) {
                            t436 = *(int *)0xC2EA9DC;
                            *(unsigned int *)(((int)stk + 12)) = (t436 & 0x1);
                            kmiWriteRegister(0x8, 0x1);
                            kmiWriteRegister(0x8, 0x0);
                            t439 = *(int *)(((int)stk + 12));
                            t440 = *(int *)(((((t439 << 2) << 2) << 1) + 0xC2EAAF8));
                            kmiWriteRegister(0x124, t440);
                            t442 = *(int *)(((((t439 << 2) << 2) << 1) + 0xC2EAAFC));
                            kmiWriteRegister(0x12C, t442);
                            t444 = *(int *)(((((t439 << 2) << 2) << 1) + 0xC2EAB04));
                            kmiWriteRegister(0x128, t444);
                            t446 = *(int *)(((((t439 << 2) << 2) << 1) + 0xC2EAB08));
                            kmiWriteRegister(0x130, t446);
                            t448 = *(int *)(((((t439 << 2) << 2) << 1) + 0xC2EAB00));
                            kmiWriteRegister(0x164, t448);
                            kmiWriteRegister(0x144, 0x80000000);
                            kmiReadRegister(0x144);
                            *(unsigned int *)0xC2EA9EC = 0x0;
                            t452 = *(int *)0xC2EAAE8;
                            *(unsigned int *)0xC2EA9E8 = t452;
                            t453 = *(int *)0xC178278;
                            if (t453 != 0) {
                                t454 = *(int *)0xC2EA9DC;
                                *(unsigned int *)0xC2EA9E4 = t454;
                                t455 = *(int *)0xC2EA9DC;
                                *(unsigned int *)(((t455 << 2) + 0xC2EA9CC)) = 0x2;
                                *(unsigned int *)0xC2EA88C = 0x1;
                                *(unsigned int *)0xC2EA9FC = 0x1;
                                return;
                            }
                            return;
                        }
                        return;
                    }
                    t456 = *(int *)0xC2EA9DC;
                    *(unsigned int *)(((int)stk + 12)) = (t456 & 0x1);
                    kmiWriteRegister(0x8, 0x1);
                    kmiWriteRegister(0x8, 0x0);
                    t459 = *(int *)(((int)stk + 12));
                    t460 = *(int *)(((((t459 << 2) << 2) << 1) + 0xC2EAAF8));
                    kmiWriteRegister(0x124, t460);
                    t462 = *(int *)(((((t459 << 2) << 2) << 1) + 0xC2EAAFC));
                    kmiWriteRegister(0x12C, t462);
                    t464 = *(int *)(((((t459 << 2) << 2) << 1) + 0xC2EAB04));
                    kmiWriteRegister(0x128, t464);
                    t466 = *(int *)(((((t459 << 2) << 2) << 1) + 0xC2EAB08));
                    kmiWriteRegister(0x130, t466);
                    t468 = *(int *)(((((t459 << 2) << 2) << 1) + 0xC2EAB00));
                    kmiWriteRegister(0x164, t468);
                    kmiWriteRegister(0x144, 0x80000000);
                    kmiReadRegister(0x144);
                    *(unsigned int *)0xC2EA9EC = 0x0;
                    t472 = *(int *)0xC2EAAE8;
                    *(unsigned int *)0xC2EA9E8 = t472;
                    t473 = *(int *)0xC178278;
                    if (t473 != 0) {
                        t474 = *(int *)0xC2EA9DC;
                        *(unsigned int *)0xC2EA9E4 = t474;
                        t475 = *(int *)0xC2EA9DC;
                        *(unsigned int *)(((t475 << 2) + 0xC2EA9CC)) = 0x2;
                        *(unsigned int *)0xC2EA88C = 0x1;
                        *(unsigned int *)0xC2EA9FC = 0x1;
                        return;
                    }
                    return;
                }
            }
            t479 = 0x1;
        }
        if (t479 != 0) {
            kmiFatalErrorEntry(0x4);
        }
    }
    t494 = *(int *)0xC2EA9DC;
    *(unsigned int *)0xC2EA9DC = (t494 + 0x1);
    t495 = *(int *)0xC2EA9DC;
    *(unsigned int *)0xC2EA9DC = (t495 & 0x3);
    t496 = *(int *)0xC2EA9DC;
    *(unsigned int *)(((t496 << 2) + 0xC2EA9CC)) = 0x0;
    t497 = *(int *)0xC2EA9C4;
    if (t497 != 1) {
        t498 = *(int *)0xC178278;
        if (t498 == 1) {
            t499 = *(int *)0xC2EA9DC;
            *(unsigned int *)(((int)stk + 12)) = (t499 & 0x1);
            kmiWriteRegister(0x8, 0x1);
            kmiWriteRegister(0x8, 0x0);
            t502 = *(int *)(((int)stk + 12));
            t503 = *(int *)(((((t502 << 2) << 2) << 1) + 0xC2EAAF8));
            kmiWriteRegister(0x124, t503);
            t505 = *(int *)(((((t502 << 2) << 2) << 1) + 0xC2EAAFC));
            kmiWriteRegister(0x12C, t505);
            t507 = *(int *)(((((t502 << 2) << 2) << 1) + 0xC2EAB04));
            kmiWriteRegister(0x128, t507);
            t509 = *(int *)(((((t502 << 2) << 2) << 1) + 0xC2EAB08));
            kmiWriteRegister(0x130, t509);
            t511 = *(int *)(((((t502 << 2) << 2) << 1) + 0xC2EAB00));
            kmiWriteRegister(0x164, t511);
            kmiWriteRegister(0x144, 0x80000000);
            kmiReadRegister(0x144);
            *(unsigned int *)0xC2EA9EC = 0x0;
            t515 = *(int *)0xC2EAAE8;
            *(unsigned int *)0xC2EA9E8 = t515;
            t516 = *(int *)0xC178278;
            if (t516 != 0) {
                t517 = *(int *)0xC2EA9DC;
                *(unsigned int *)0xC2EA9E4 = t517;
                t518 = *(int *)0xC2EA9DC;
                *(unsigned int *)(((t518 << 2) + 0xC2EA9CC)) = 0x2;
                *(unsigned int *)0xC2EA88C = 0x1;
                *(unsigned int *)0xC2EA9FC = 0x1;
            }
        }
    } else {
        t531 = *(int *)0xC2EA9DC;
        *(unsigned int *)(((int)stk + 12)) = (t531 & 0x1);
        kmiWriteRegister(0x8, 0x1);
        kmiWriteRegister(0x8, 0x0);
        t534 = *(int *)(((int)stk + 12));
        t535 = *(int *)(((((t534 << 2) << 2) << 1) + 0xC2EAAF8));
        kmiWriteRegister(0x124, t535);
        t537 = *(int *)(((((t534 << 2) << 2) << 1) + 0xC2EAAFC));
        kmiWriteRegister(0x12C, t537);
        t539 = *(int *)(((((t534 << 2) << 2) << 1) + 0xC2EAB04));
        kmiWriteRegister(0x128, t539);
        t541 = *(int *)(((((t534 << 2) << 2) << 1) + 0xC2EAB08));
        kmiWriteRegister(0x130, t541);
        t543 = *(int *)(((((t534 << 2) << 2) << 1) + 0xC2EAB00));
        kmiWriteRegister(0x164, t543);
        kmiWriteRegister(0x144, 0x80000000);
        kmiReadRegister(0x144);
        *(unsigned int *)0xC2EA9EC = 0x0;
        t547 = *(int *)0xC2EAAE8;
        *(unsigned int *)0xC2EA9E8 = t547;
        t548 = *(int *)0xC178278;
        if (t548 != 0) {
            t549 = *(int *)0xC2EA9DC;
            *(unsigned int *)0xC2EA9E4 = t549;
            t550 = *(int *)0xC2EA9DC;
            *(unsigned int *)(((t550 << 2) + 0xC2EA9CC)) = 0x2;
            *(unsigned int *)0xC2EA88C = 0x1;
            *(unsigned int *)0xC2EA9FC = 0x1;
        }
    }
}
