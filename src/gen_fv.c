/* Straight-line functions with calls and guards (batch gen_fv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c04988a(int);
int FUN_0c04ac8c(int);
int FUN_0c077210(int, int);
int TOANG(int, int, float, float, float);
int nlAddVector(int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlInvertMatrix(int);
float nlLength(int, int);
int nlLoadMatrix(int);
int nlLocate(int, int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
extern int nlPushUnitMatrix();
int nlSubVector(int, int);
void FUN_0c04af54(int a4);

void FUN_0c04af54(int a4)
{
    int t1;
    int t2;
    int t3;
    float u4;
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
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
    int t68;
    int t69;
    int t70;
    int t71;
    int t72;
    int t73;
    int t74;
    int t75;
    int t76;
    int t77;
    int t78;
    int t79;
    int t81;
    int t82;
    int t85;
    int t94;
    int t95;
    int t96;
    int t97;
    int t98;
    int t99;
    int t100;
    int t101;
    int t102;
    int t103;
    int t104;
    int t105;
    int t123;
    int t124;
    int t125;
    int t126;
    int t127;
    int t128;
    int t129;
    int t130;
    int t131;
    int t132;
    int t145;
    int t146;
    int t147;
    int t148;
    int t149;
    int t150;
    int t151;
    int t152;
    int t153;
    int t166;
    int t167;
    int t168;
    int t169;
    int t170;
    int t171;
    int t172;
    int t173;
    int t176;
    int t177;
    int t178;
    int t191;
    int t192;
    int t193;
    int t194;
    int t195;
    int t196;
    int t197;
    int t199;
    int t201;
    int t202;
    int t203;
    int t204;
    int t205;
    int t206;
    int t207;
    int t216;
    int t217;
    int t218;
    int t219;
    int t220;
    int t221;
    int t222;
    int t231;
    int t232;
    int t233;
    int t234;
    int t235;
    int t236;
    int t237;
    int t248;
    int t250;
    int t257;
    int t258;
    int t259;
    int t260;
    int t261;
    int t262;
    int t263;
    int t264;
    int t265;
    int t266;
    int t267;
    int t268;
    int t270;
    int t272;
    int t273;
    int t274;
    int t276;
    int t277;
    int t279;
    int t280;
    int t299;
    int t300;
    int t301;
    int t307;
    int t308;
    int t309;
    int t310;
    int t311;
    int t312;
    int t321;
    int t323;
    int t329;
    int t330;
    int t331;
    int t333;
    int t334;
    int t335;
    int t336;
    int t337;
    int t338;
    int t339;
    int t340;
    int t348;
    int t349;
    int t352;
    int t353;
    int t354;
    int t361;
    int t362;
    int t363;
    int t364;
    int t365;
    int t366;
    int t375;
    int t377;
    int t420;
    int t421;
    int t393;
    int t394;
    int t395;
    int t396;
    int t397;
    int t402;
    int t403;
    int t423;
    int t424;
    int t425;
    int t426;
    int t427;
    int t428;
    int t440;
    int t442;
    int t458;
    int t461;
    int t462;
    int t463;
    int t469;
    int t470;
    int t471;
    int t478;
    int t472;
    int t473;
    int t485;
    int t480;
    int t481;
    int t487;
    int t488;
    int t608;
    int t609;
    int t610;
    int t489;
    int t490;
    int t491;
    int t492;
    int t493;
    int t499;
    int t500;
    int t501;
    int t502;
    int t503;
    int t504;
    int t506;
    int t507;
    int t508;
    int t523;
    int t524;
    int t525;
    int t526;
    int t529;
    int t530;
    int t543;
    int t544;
    int t545;
    int t546;
    int t555;
    int t556;
    int t557;
    int t558;
    int t567;
    int t568;
    int t569;
    int t570;
    int t571;
    int t572;
    int t573;
    int t578;
    int t579;
    int t600;
    int t601;
    int t602;
    int t580;
    int t581;
    int t582;
    int t583;
    int t620;
    int t621;
    int t622;
    int t623;
    int t624;
    int t625;
    int t638;
    int t640;
    int t668;
    int t669;
    int t670;
    int t671;
    int t672;
    int t673;
    int t678;
    int t679;
    float t680;
    float u681;
    float u683;
    float u685;
    int t700;
    int t701;
    int t702;
    int t703;
    int t704;
    int t705;
    float u707;
    float u708;
    float u709;
    int t711;
    int t712;
    int t713;
    int t714;
    int t716;
    int t717;
    int t718;
    int t720;
    int t731;
    int t732;
    int t737;
    int t739;
    int t740;
    int t742;
    int t743;
    int t745;
    int t746;
    int t748;
    int t749;
    float u751;
    int t752;
    int t753;
    int t19;
    int t189;
    int t226;
    int t211;
    int t413;
    int t414;
    int t616;
    int t617;
    int t618;
    int t564;
    int t565;
    int t552;
    int t553;
    int t540;
    int t541;
    int t520;
    int t521;
    int t592;
    int t593;
    int t594;
    int t715;
    int stk[61] = {0};

    if (a4 == 0) {
        FUN_0c04ac8c(0x0);
        *(unsigned int *)0xC2A6294 = 0x0;
        *(unsigned int *)0xC2A6290 = 0x0;
        *(unsigned int *)0xC2A628C = 0x0;
        *(unsigned int *)0xC2A6288 = 0x1;
        t1 = *(int *)0xC179848;
        *(unsigned int *)0xC2A6284 = t1;
        t2 = *(int *)0xC179844;
        *(unsigned int *)0xC2A6280 = t2;
        t3 = *(int *)0xC179840;
        *(unsigned int *)0xC2A627C = t3;
        u4 = *(float *)0xC2A6284;
        *(float *)0xC2A6284 = (u4 + 10.0f);
        t5 = 0xC2A627C;
        t6 = 0x41200000;
        t7 = 0xC2A5AFC;
        t8 = 0x0;
        for (;;) {
            if ((int)t8 >= (int)0x3C) {
                break;
            }
            t6 = 0x0;
            t5 = t7;
            *(unsigned int *)((t7 + 0x0)) = t6;
            t6 = 0xC081324;
            t5 = (t5 + 0x4);
            t9 = *(int *)0xC0A4790;
            *(unsigned int *)((t5 + 0x8)) = t9;
            t10 = *(int *)0xC0A478C;
            *(unsigned int *)((t5 + 0x4)) = t10;
            t11 = *(int *)0xC0A4788;
            *(unsigned int *)((t5 + 0x0)) = t11;
            t5 = t7;
            t5 = (t5 + 0x10);
            t12 = *(int *)0xC0A4790;
            *(unsigned int *)((t5 + 0x8)) = t12;
            t13 = *(int *)0xC0A478C;
            *(unsigned int *)((t5 + 0x4)) = t13;
            t14 = *(int *)0xC0A4788;
            *(unsigned int *)((t5 + 0x0)) = t14;
            *(unsigned int *)((t7 + 0x1C)) = 0xFFFFFFFF;
            t7 = (t7 + 0x20);
            t8 = (t8 + 0x1);
        }
        t15 = *(int *)0xC2A1B30;
        t16 = t15;
        t17 = (t15 + 956);
        t18 = 0xC2A62D0;
        for (;;) { t19 = *(int *)t16; t16 = (t16 + 4); if ((unsigned int)t17 < (unsigned int)t16) break; *(unsigned int *)t18 = t19; t18 = (t18 + 4); }
    } else {
        t20 = *(int *)0xC2A4E60;
        if (t20 == 0) {
            *(unsigned int *)(((int)stk + 60)) = 0x1;
            t21 = FUN_0c04988a(((int)stk + 60));
            if (t21 == 16) {
                *(unsigned int *)(((int)stk + 60)) = 0x2;
                t22 = FUN_0c04988a(((int)stk + 60));
                if (t22 == 0) {
                    t23 = *(int *)0xC2A628C;
                    t24 = *(int *)((0xC2A5AFC + (((t23 << 2) << 2) << 1)));
                    if ((t24 & 1) != 0) {
                        t25 = *(int *)0xC2A628C;
                        t26 = *(int *)0xC2A6290;
                        t27 = *(int *)((((((t25 << 2) << 2) << 1) + 0xC2A5AFC) + 0x1C));
                        if ((int)t26 >= (int)t27) {
                            t28 = *(int *)0xC2A628C;
                            t29 = *(int *)((((((t28 << 2) << 2) << 1) + 0xC2A5AFC) + 0x20));
                            if ((t29 & 1) != 0) {
                                t30 = *(int *)0xC2A628C;
                                *(unsigned int *)0xC2A628C = (t30 + 0x1);
                                if ((int)(t30 + 0x1) >= (int)0x3C) {
                                    *(unsigned int *)0xC2A628C = 0x0;
                                }
                                *(unsigned int *)0xC2A6290 = 0x0;
                            }
                        }
                    }
                }
            }
        }
        t63 = *(int *)0xC2A1B30;
        t64 = *(int *)(((t63 + 0xB4) + 0x3C));
        *(unsigned int *)(((((int)stk + 60) + 0x10) + 0x3C)) = t64;
        t65 = *(int *)(((t63 + 0xB4) + 0x38));
        *(unsigned int *)(((((int)stk + 60) + 0x10) + 0x38)) = t65;
        t66 = *(int *)(((t63 + 0xB4) + 0x34));
        *(unsigned int *)(((((int)stk + 60) + 0x10) + 0x34)) = t66;
        t67 = *(int *)(((t63 + 0xB4) + 0x30));
        *(unsigned int *)(((((int)stk + 60) + 0x10) + 0x30)) = t67;
        t68 = *(int *)(((t63 + 0xB4) + 0x2C));
        *(unsigned int *)(((((int)stk + 60) + 0x10) + 0x2C)) = t68;
        t69 = *(int *)(((t63 + 0xB4) + 0x28));
        *(unsigned int *)(((((int)stk + 60) + 0x10) + 0x28)) = t69;
        t70 = *(int *)(((t63 + 0xB4) + 0x24));
        *(unsigned int *)(((((int)stk + 60) + 0x10) + 0x24)) = t70;
        t71 = *(int *)(((t63 + 0xB4) + 0x20));
        *(unsigned int *)(((((int)stk + 60) + 0x10) + 0x20)) = t71;
        t72 = *(int *)(((t63 + 0xB4) + 0x1C));
        *(unsigned int *)(((((int)stk + 60) + 0x10) + 0x1C)) = t72;
        t73 = *(int *)(((t63 + 0xB4) + 0x18));
        *(unsigned int *)(((((int)stk + 60) + 0x10) + 0x18)) = t73;
        t74 = *(int *)(((t63 + 0xB4) + 0x14));
        *(unsigned int *)(((((int)stk + 60) + 0x10) + 0x14)) = t74;
        t75 = *(int *)(((t63 + 0xB4) + 0x10));
        *(unsigned int *)(((((int)stk + 60) + 0x10) + 0x10)) = t75;
        t76 = *(int *)(((t63 + 0xB4) + 0xC));
        *(unsigned int *)(((((int)stk + 60) + 0x10) + 0xC)) = t76;
        t77 = *(int *)(((t63 + 0xB4) + 0x8));
        *(unsigned int *)(((((int)stk + 60) + 0x10) + 0x8)) = t77;
        t78 = *(int *)(((t63 + 0xB4) + 0x4));
        *(unsigned int *)(((((int)stk + 60) + 0x10) + 0x4)) = t78;
        t79 = *(int *)(((t63 + 0xB4) + 0x0));
        *(unsigned int *)(((((int)stk + 60) + 0x10) + 0x0)) = t79;
        nlInvertMatrix((((int)stk + 60) + 0x10));
        t81 = *(int *)0xC1EE284;
        if ((t81 & 16) != 0) {
            t82 = *(int *)0xC2A628C;
            *(unsigned int *)0xC2A628C = (t82 + 0x1);
            if ((int)(t82 + 0x1) >= (int)0x3C) {
                *(unsigned int *)0xC2A628C = 0x0;
            }
        } else {
            if ((t81 & 32) != 0) {
                t85 = *(int *)0xC2A628C;
                *(unsigned int *)0xC2A628C = (t85 - 1);
                if ((int)(t85 - 1) < 0) {
                    *(unsigned int *)0xC2A628C = 0x3B;
                }
            }
        }
        t94 = *(int *)0xC2A628C;
        t95 = *(int *)(((((((t94 << 2) << 2) << 1) + 0xC2A5AFC) + 0x4) + 0x8));
        *(unsigned int *)(((((int)stk + 60) + 0x5C) + 0x8)) = t95;
        t96 = *(int *)(((((((t94 << 2) << 2) << 1) + 0xC2A5AFC) + 0x4) + 0x4));
        *(unsigned int *)(((((int)stk + 60) + 0x5C) + 0x4)) = t96;
        t97 = *(int *)(((((((t94 << 2) << 2) << 1) + 0xC2A5AFC) + 0x4) + 0x0));
        *(unsigned int *)(((((int)stk + 60) + 0x5C) + 0x0)) = t97;
        t98 = *(int *)(((((((t94 << 2) << 2) << 1) + 0xC2A5AFC) + 0x10) + 0x8));
        *(unsigned int *)(((((int)stk + 60) + 0x74) + 0x8)) = t98;
        t99 = *(int *)(((((((t94 << 2) << 2) << 1) + 0xC2A5AFC) + 0x10) + 0x4));
        *(unsigned int *)(((((int)stk + 60) + 0x74) + 0x4)) = t99;
        t100 = *(int *)(((((((t94 << 2) << 2) << 1) + 0xC2A5AFC) + 0x10) + 0x0));
        *(unsigned int *)(((((int)stk + 60) + 0x74) + 0x0)) = t100;
        t101 = *(int *)((((((t94 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0));
        if ((t101 & 0x8) != 0) {
            t102 = *(int *)0xC2A628C;
            t103 = *(int *)((0xC2A5AFC + (((t102 << 2) << 2) << 1)));
            if ((t103 & 16) != 0) {
                t104 = ((int (*)(int))(nlPushUnitMatrix))(((((t94 << 2) << 2) << 1) + 0xC2A5AFC));
                t105 = *(int *)0xC2A1B30;
                nlLoadMatrix((t105 + 0xB4));
                FUN_0c077210((((int)stk + 60) + 0x5C), (((int)stk + 60) + 0x5C));
                FUN_0c077210((((int)stk + 60) + 0x74), (((int)stk + 60) + 0x74));
                nlPopMatrix(0x1);
            }
            nlAddVector((((int)stk + 60) + 0x5C), 0xC2A6348);
            nlAddVector((((int)stk + 60) + 0x74), 0xC2A6348);
        }
        *(unsigned int *)(((int)stk + 72)) = 0xC1EE280;
        t123 = *(int *)0xC1EE284;
        if ((0x10 & t123) == 0) {
            if ((0x20 & t123) != 0) {
                t124 = *(int *)0xC1EE284;
                if ((t124 & 32) != 0) {
                    t125 = *(int *)0xC2A628C;
                    t126 = *(int *)((0xC2A5AFC + (((t125 << 2) << 2) << 1)));
                    if ((t126 & 1) != 0) {
                        t127 = *(int *)(((((int)stk + 60) + 0x5C) + 0x8));
                        *(unsigned int *)0xC179848 = t127;
                        t128 = *(int *)(((((int)stk + 60) + 0x5C) + 0x4));
                        *(unsigned int *)0xC179844 = t128;
                        t129 = *(int *)(((((int)stk + 60) + 0x5C) + 0x0));
                        *(unsigned int *)0xC179840 = t129;
                        t130 = *(int *)(((((int)stk + 60) + 0x74) + 0x8));
                        *(unsigned int *)0xC2A6284 = t130;
                        t131 = *(int *)(((((int)stk + 60) + 0x74) + 0x4));
                        *(unsigned int *)0xC2A6280 = t131;
                        t132 = *(int *)(((((int)stk + 60) + 0x74) + 0x0));
                        *(unsigned int *)0xC2A627C = t132;
                    }
                }
                *(unsigned int *)0xC2A6290 = 0x0;
                *(unsigned int *)0xC2A6288 = 0x1;
            }
        } else {
            t145 = *(int *)0xC1EE284;
            if ((t145 & 32) != 0) {
                t146 = *(int *)0xC2A628C;
                t147 = *(int *)((0xC2A5AFC + (((t146 << 2) << 2) << 1)));
                if ((t147 & 1) != 0) {
                    t148 = *(int *)(((((int)stk + 60) + 0x5C) + 0x8));
                    *(unsigned int *)0xC179848 = t148;
                    t149 = *(int *)(((((int)stk + 60) + 0x5C) + 0x4));
                    *(unsigned int *)0xC179844 = t149;
                    t150 = *(int *)(((((int)stk + 60) + 0x5C) + 0x0));
                    *(unsigned int *)0xC179840 = t150;
                    t151 = *(int *)(((((int)stk + 60) + 0x74) + 0x8));
                    *(unsigned int *)0xC2A6284 = t151;
                    t152 = *(int *)(((((int)stk + 60) + 0x74) + 0x4));
                    *(unsigned int *)0xC2A6280 = t152;
                    t153 = *(int *)(((((int)stk + 60) + 0x74) + 0x0));
                    *(unsigned int *)0xC2A627C = t153;
                }
            }
            *(unsigned int *)0xC2A6290 = 0x0;
            *(unsigned int *)0xC2A6288 = 0x1;
        }
        t166 = *(int *)0xC179848;
        *(unsigned int *)(((((int)stk + 60) + 0x68) + 0x8)) = t166;
        t167 = *(int *)0xC179844;
        *(unsigned int *)(((((int)stk + 60) + 0x68) + 0x4)) = t167;
        t168 = *(int *)0xC179840;
        *(unsigned int *)(((((int)stk + 60) + 0x68) + 0x0)) = t168;
        t169 = *(int *)0xC2A6284;
        *(unsigned int *)(((0x80 + ((int)stk + 60)) + 0x8)) = t169;
        t170 = *(int *)0xC2A6280;
        *(unsigned int *)(((0x80 + ((int)stk + 60)) + 0x4)) = t170;
        t171 = *(int *)0xC2A627C;
        *(unsigned int *)(((0x80 + ((int)stk + 60)) + 0x0)) = t171;
        t172 = *(int *)0xC2A628C;
        t173 = *(int *)((((((t172 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0));
        if ((t173 & 0x8) != 0) {
            nlSubVector((((int)stk + 60) + 0x68), 0xC2A6348);
            nlSubVector((0x80 + ((int)stk + 60)), 0xC2A6348);
            t176 = *(int *)0xC2A628C;
            t177 = *(int *)((0xC2A5AFC + (((t176 << 2) << 2) << 1)));
            if ((t177 & 16) != 0) {
                t178 = ((int (*)(void))(nlPushUnitMatrix))();
                nlLoadMatrix((((int)stk + 60) + 0x10));
                FUN_0c077210((((int)stk + 60) + 0x68), (((int)stk + 60) + 0x68));
                FUN_0c077210((0x80 + ((int)stk + 60)), (0x80 + ((int)stk + 60)));
                nlPopMatrix(0x1);
            }
        } else {
            t189 = t123;
        }
        t191 = *(int *)0xC2A6288;
        if (t191 == 0) {
            *(unsigned int *)(((int)stk + 60)) = 0x2;
            t192 = FUN_0c04988a(((int)stk + 60));
            if (t192 == 0) {
                t193 = *(int *)0xC2A628C;
                t194 = *(int *)((0xC2A5AFC + (((t193 << 2) << 2) << 1)));
                if ((t194 & 2) != 0) {
                    t195 = *(int *)0xC2A628C;
                    *(unsigned int *)(((int)stk + 64)) = ((((t195 << 2) << 2) << 1) + 0xC2A5AFC);
                    t196 = *(int *)0xC2A6290;
                    t197 = *(int *)((((((t195 << 2) << 2) << 1) + 0xC2A5AFC) + 0x1C));
                    nlGetAverageVector((((((t195 << 2) << 2) << 1) + 0xC2A5AFC) + 0x4), (((int)stk + 60) + 0x68), (((int)stk + 60) + 0x68), (1.0f / (float)(t197 - t196)), (1.0f - (1.0f / (float)(t197 - t196))));
                    t199 = *(int *)0xC2A628C;
                    nlGetAverageVector((((((t199 << 2) << 2) << 1) + 0xC2A5AFC) + 0x10), (0x80 + ((int)stk + 60)), (0x80 + ((int)stk + 60)), (1.0f / (float)(t197 - t196)), (1.0f - (1.0f / (float)(t197 - t196))));
                } else {
                    t201 = *(int *)0xC2A628C;
                    t202 = *(int *)(((((((t201 << 2) << 2) << 1) + 0xC2A5AFC) + 0x4) + 0x8));
                    *(unsigned int *)(((((int)stk + 60) + 0x68) + 0x8)) = t202;
                    t203 = *(int *)(((((((t201 << 2) << 2) << 1) + 0xC2A5AFC) + 0x4) + 0x4));
                    *(unsigned int *)(((((int)stk + 60) + 0x68) + 0x4)) = t203;
                    t204 = *(int *)(((((((t201 << 2) << 2) << 1) + 0xC2A5AFC) + 0x4) + 0x0));
                    *(unsigned int *)(((((int)stk + 60) + 0x68) + 0x0)) = t204;
                    t205 = *(int *)(((((((t201 << 2) << 2) << 1) + 0xC2A5AFC) + 0x10) + 0x8));
                    *(unsigned int *)(((0x80 + ((int)stk + 60)) + 0x8)) = t205;
                    t206 = *(int *)(((((((t201 << 2) << 2) << 1) + 0xC2A5AFC) + 0x10) + 0x4));
                    *(unsigned int *)(((0x80 + ((int)stk + 60)) + 0x4)) = t206;
                    t207 = *(int *)(((((((t201 << 2) << 2) << 1) + 0xC2A5AFC) + 0x10) + 0x0));
                    *(unsigned int *)(((0x80 + ((int)stk + 60)) + 0x0)) = t207;
                    t211 = ((((t201 << 2) << 2) << 1) + 0xC2A5AFC);
                }
                t226 = t211;
            } else {
                t216 = *(int *)0xC2A628C;
                t217 = *(int *)(((((((t216 << 2) << 2) << 1) + 0xC2A5AFC) + 0x4) + 0x8));
                *(unsigned int *)(((((int)stk + 60) + 0x68) + 0x8)) = t217;
                t218 = *(int *)(((((((t216 << 2) << 2) << 1) + 0xC2A5AFC) + 0x4) + 0x4));
                *(unsigned int *)(((((int)stk + 60) + 0x68) + 0x4)) = t218;
                t219 = *(int *)(((((((t216 << 2) << 2) << 1) + 0xC2A5AFC) + 0x4) + 0x0));
                *(unsigned int *)(((((int)stk + 60) + 0x68) + 0x0)) = t219;
                t220 = *(int *)(((((((t216 << 2) << 2) << 1) + 0xC2A5AFC) + 0x10) + 0x8));
                *(unsigned int *)(((0x80 + ((int)stk + 60)) + 0x8)) = t220;
                t221 = *(int *)(((((((t216 << 2) << 2) << 1) + 0xC2A5AFC) + 0x10) + 0x4));
                *(unsigned int *)(((0x80 + ((int)stk + 60)) + 0x4)) = t221;
                t222 = *(int *)(((((((t216 << 2) << 2) << 1) + 0xC2A5AFC) + 0x10) + 0x0));
                *(unsigned int *)(((0x80 + ((int)stk + 60)) + 0x0)) = t222;
                t226 = ((((t216 << 2) << 2) << 1) + 0xC2A5AFC);
            }
            t231 = *(int *)0xC2A6290;
            *(unsigned int *)0xC2A6290 = (t231 + 0x1);
            t232 = *(int *)0xC2A628C;
            t233 = *(int *)((((((t232 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0));
            if ((t233 & 0x8) != 0) {
                t234 = *(int *)0xC2A628C;
                t235 = *(int *)((0xC2A5AFC + (((t234 << 2) << 2) << 1)));
                if ((t235 & 16) != 0) {
                    t236 = ((int (*)(int))(nlPushUnitMatrix))(t226);
                    t237 = *(int *)0xC2A1B30;
                    nlLoadMatrix((t237 + 0xB4));
                    FUN_0c077210((((int)stk + 60) + 0x68), (((int)stk + 60) + 0x68));
                    FUN_0c077210((0x80 + ((int)stk + 60)), (0x80 + ((int)stk + 60)));
                    nlPopMatrix(0x1);
                }
                t248 = *(int *)0xC2A1B30;
                nlAddVector((((int)stk + 60) + 0x68), (t248 + 0x78));
                t250 = *(int *)0xC2A1B30;
                nlAddVector((0x80 + ((int)stk + 60)), (t250 + 0x78));
            }
        } else {
            if (t191 != 1) {
                if (t191 == 2) {
                    t257 = *(int *)0xC1EE250;
                    if ((t257 & 0x8) != 0) {
                        t258 = *(int *)0xC2A628C;
                        t259 = *(int *)0xC179848;
                        *(unsigned int *)(((((((t258 << 2) << 2) << 1) + 0xC2A5AFC) + 0x4) + 0x8)) = t259;
                        t260 = *(int *)0xC179844;
                        *(unsigned int *)(((((((t258 << 2) << 2) << 1) + 0xC2A5AFC) + 0x4) + 0x4)) = t260;
                        t261 = *(int *)0xC179840;
                        *(unsigned int *)(((((((t258 << 2) << 2) << 1) + 0xC2A5AFC) + 0x4) + 0x0)) = t261;
                        t262 = *(int *)0xC2A628C;
                        t263 = *(int *)0xC2A6284;
                        *(unsigned int *)(((((((t262 << 2) << 2) << 1) + 0xC2A5AFC) + 0x10) + 0x8)) = t263;
                        t264 = *(int *)0xC2A6280;
                        *(unsigned int *)(((((((t262 << 2) << 2) << 1) + 0xC2A5AFC) + 0x10) + 0x4)) = t264;
                        t265 = *(int *)0xC2A627C;
                        *(unsigned int *)(((((((t262 << 2) << 2) << 1) + 0xC2A5AFC) + 0x10) + 0x0)) = t265;
                        t266 = *(int *)0xC2A628C;
                        t267 = *(int *)((((((t266 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0));
                        if ((t267 & 0x8) != 0) {
                            t268 = *(int *)0xC2A628C;
                            nlSubVector((((((t268 << 2) << 2) << 1) + 0xC2A5AFC) + 0x4), 0xC2A6348);
                            t270 = *(int *)0xC2A628C;
                            nlSubVector((((((t270 << 2) << 2) << 1) + 0xC2A5AFC) + 0x10), 0xC2A6348);
                            t272 = *(int *)0xC2A628C;
                            t273 = *(int *)((0xC2A5AFC + (((t272 << 2) << 2) << 1)));
                            if ((t273 & 16) != 0) {
                                t274 = ((int (*)(void))(nlPushUnitMatrix))();
                                nlLoadMatrix((((int)stk + 60) + 0x10));
                                t276 = *(int *)0xC2A628C;
                                *(unsigned int *)(((int)stk + 64)) = ((((t276 << 2) << 2) << 1) + 0xC2A5AFC);
                                t277 = *(int *)(((int)stk + 64));
                                FUN_0c077210((t277 + 0x4), (((((t276 << 2) << 2) << 1) + 0xC2A5AFC) + 0x4));
                                t279 = *(int *)0xC2A628C;
                                *(unsigned int *)(((int)stk + 64)) = ((((t279 << 2) << 2) << 1) + 0xC2A5AFC);
                                t280 = *(int *)(((int)stk + 64));
                                FUN_0c077210((t280 + 0x10), (((((t279 << 2) << 2) << 1) + 0xC2A5AFC) + 0x10));
                                nlPopMatrix(0x1);
                            }
                        }
                        *(unsigned int *)0xC2A6294 = 0x14;
                    }
                    t299 = *(int *)0xC2A6294;
                    if (t299 != 0) {
                        t300 = *(int *)0xC2A6294;
                        *(unsigned int *)0xC2A6294 = (t300 - 1);
                        if ((t300 - 1) == 0) {
                            t301 = *(int *)0xC2A6288;
                            *(unsigned int *)0xC2A6288 = (t301 + 0x1);
                        }
                        nlLocate(0x2C, 0x29);
                        nlPrintf(0xC0C328C);
                        t307 = *(int *)0xC2A628C;
                        t308 = *(int *)((((((t307 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0));
                        if ((t308 & 0x8) != 0) {
                            t309 = *(int *)0xC2A628C;
                            t310 = *(int *)((0xC2A5AFC + (((t309 << 2) << 2) << 1)));
                            if ((t310 & 16) != 0) {
                                t311 = ((int (*)(void))(nlPushUnitMatrix))();
                                t312 = *(int *)0xC2A1B30;
                                nlLoadMatrix((t312 + 0xB4));
                                FUN_0c077210((((int)stk + 60) + 0x68), (((int)stk + 60) + 0x68));
                                FUN_0c077210((0x80 + ((int)stk + 60)), (0x80 + ((int)stk + 60)));
                                nlPopMatrix(0x1);
                            }
                            t321 = *(int *)0xC2A1B30;
                            nlAddVector((((int)stk + 60) + 0x68), (t321 + 0x78));
                            t323 = *(int *)0xC2A1B30;
                            nlAddVector((0x80 + ((int)stk + 60)), (t323 + 0x78));
                        }
                    } else {
                        t329 = *(int *)0xC2A6284;
                        *(unsigned int *)(((((int)stk + 60) + 0x50) + 0x8)) = t329;
                        t330 = *(int *)0xC2A6280;
                        *(unsigned int *)(((((int)stk + 60) + 0x50) + 0x4)) = t330;
                        t331 = *(int *)0xC2A627C;
                        *(unsigned int *)(((((int)stk + 60) + 0x50) + 0x0)) = t331;
                        FUN_0c04ac8c(0x1);
                        t333 = *(int *)0xC179848;
                        *(unsigned int *)(((((int)stk + 60) + 0x68) + 0x8)) = t333;
                        t334 = *(int *)0xC179844;
                        *(unsigned int *)(((((int)stk + 60) + 0x68) + 0x4)) = t334;
                        t335 = *(int *)0xC179840;
                        *(unsigned int *)(((((int)stk + 60) + 0x68) + 0x0)) = t335;
                        t336 = *(int *)0xC2A6284;
                        *(unsigned int *)(((0x80 + ((int)stk + 60)) + 0x8)) = t336;
                        t337 = *(int *)0xC2A6280;
                        *(unsigned int *)(((0x80 + ((int)stk + 60)) + 0x4)) = t337;
                        t338 = *(int *)0xC2A627C;
                        *(unsigned int *)(((0x80 + ((int)stk + 60)) + 0x0)) = t338;
                        t339 = *(int *)0xC2A628C;
                        t340 = *(int *)((0xC2A5AFC + (((t339 << 2) << 2) << 1)));
                        if ((t340 & 4) != 0) {
                            nlSubVector((((int)stk + 60) + 0x50), (0x80 + ((int)stk + 60)));
                            nlSubVector((((int)stk + 60) + 0x68), (((int)stk + 60) + 0x50));
                        }
                        t348 = *(int *)0xC2A628C;
                        t349 = *(int *)((((((t348 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0));
                        if ((t349 & 0x8) == 0) {
                        } else {
                            nlSubVector((((int)stk + 60) + 0x68), 0xC2A6348);
                            nlSubVector((0x80 + ((int)stk + 60)), 0xC2A6348);
                            t352 = *(int *)0xC2A628C;
                            t353 = *(int *)((0xC2A5AFC + (((t352 << 2) << 2) << 1)));
                            if ((t353 & 16) == 0) {
                            } else {
                                t354 = ((int (*)(void))(nlPushUnitMatrix))();
                                nlLoadMatrix((((int)stk + 60) + 0x10));
                                FUN_0c077210((((int)stk + 60) + 0x68), (((int)stk + 60) + 0x68));
                                FUN_0c077210((0x80 + ((int)stk + 60)), (0x80 + ((int)stk + 60)));
                                nlPopMatrix(0x1);
                            }
                            t361 = *(int *)0xC2A628C;
                            t362 = *(int *)((((((t361 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0));
                            if ((t362 & 0x8) != 0) {
                                t363 = *(int *)0xC2A628C;
                                t364 = *(int *)((0xC2A5AFC + (((t363 << 2) << 2) << 1)));
                                if ((t364 & 16) != 0) {
                                    t365 = ((int (*)(void))(nlPushUnitMatrix))();
                                    t366 = *(int *)0xC2A1B30;
                                    nlLoadMatrix((t366 + 0xB4));
                                    FUN_0c077210((((int)stk + 60) + 0x68), (((int)stk + 60) + 0x68));
                                    FUN_0c077210((0x80 + ((int)stk + 60)), (0x80 + ((int)stk + 60)));
                                    nlPopMatrix(0x1);
                                }
                                t375 = *(int *)0xC2A1B30;
                                nlAddVector((((int)stk + 60) + 0x68), (t375 + 0x78));
                                t377 = *(int *)0xC2A1B30;
                                nlAddVector((0x80 + ((int)stk + 60)), (t377 + 0x78));
                            }
                        }
                    }
                } else {
                    t420 = 0xC1EE24C;
                    t421 = t189;
                    if (t191 == 3) {
                        t393 = *(int *)0xC1EE250;
                        if ((t393 & 0x8) != 0) {
                            t394 = *(int *)0xC2A628C;
                            t395 = *(int *)0xC2A6290;
                            *(unsigned int *)((((((t394 << 2) << 2) << 1) + 0xC2A5AFC) + 0x1C)) = t395;
                            t396 = *(int *)0xC2A628C;
                            t397 = *(int *)((((((t396 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0));
                            *(unsigned int *)((((((t396 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0)) = (t397 | 0x1);
                            *(unsigned int *)0xC2A6294 = 0x14;
                        }
                        t402 = *(int *)0xC2A6294;
                        if (t402 == 0) {
                            t413 = 0xC1EE24C;
                            t414 = t189;
                        } else {
                            t403 = *(int *)0xC2A6294;
                            *(unsigned int *)0xC2A6294 = (t403 - 1);
                            if ((t403 - 1) == 0) {
                                *(unsigned int *)0xC2A6288 = 0x1;
                            }
                            nlLocate(0x2C, 0x29);
                            nlPrintf(0xC0C329C);
                        }
                        t420 = t413;
                        t421 = t414;
                    }
                    t423 = *(int *)0xC2A628C;
                    t424 = *(int *)((((((t423 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0));
                    if ((t424 & 0x8) != 0) {
                        t425 = *(int *)0xC2A628C;
                        t426 = *(int *)((0xC2A5AFC + (((t425 << 2) << 2) << 1)));
                        if ((t426 & 16) != 0) {
                            t427 = ((int (*)(int, int))(nlPushUnitMatrix))(t420, t421);
                            t428 = *(int *)0xC2A1B30;
                            nlLoadMatrix((t428 + 0xB4));
                            FUN_0c077210((((int)stk + 60) + 0x68), (((int)stk + 60) + 0x68));
                            FUN_0c077210((0x80 + ((int)stk + 60)), (0x80 + ((int)stk + 60)));
                            nlPopMatrix(0x1);
                        }
                        t440 = *(int *)0xC2A1B30;
                        nlAddVector((((int)stk + 60) + 0x68), (t440 + 0x78));
                        t442 = *(int *)0xC2A1B30;
                        nlAddVector((0x80 + ((int)stk + 60)), (t442 + 0x78));
                    }
                }
            } else {
                t458 = *(int *)0xC1EE250;
                if ((t458 & 0x8) != 0) {
                    *(unsigned int *)0xC2A6294 = 0x14;
                }
                t461 = *(int *)0xC2A6294;
                if (t461 != 0) {
                    t462 = *(int *)0xC2A6294;
                    *(unsigned int *)0xC2A6294 = (t462 - 1);
                    if ((t462 - 1) == 0) {
                        t463 = *(int *)0xC2A6288;
                        *(unsigned int *)0xC2A6288 = (t463 + 0x1);
                    }
                    nlLocate(0x2C, 0x29);
                    nlPrintf(0xC0C327C);
                } else {
                    t469 = *(int *)0xC2A628C;
                    t470 = *(int *)0xC1EE250;
                    t471 = *(int *)((((((t469 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0));
                    t478 = 0x0;
                    if ((0x20 & t470) != 0) {
                        t472 = *(int *)0xC0F4278;
                        t473 = 0x0;
                        if ((int)t472 < (int)0x4) {
                            t473 = 0x1;
                        }
                        t478 = t473;
                    }
                    t485 = 0x0;
                    if ((0x10 & t470) != 0) {
                        t480 = *(int *)0xC0F4278;
                        t481 = 0x0;
                        if ((int)t480 > 0) {
                            t481 = 0x1;
                        }
                        t485 = t481;
                    }
                    t487 = *(int *)0xC0F4278;
                    *(unsigned int *)0xC0F4278 = (t487 + (t478 - t485));
                    t488 = *(int *)0xC1EE250;
                    t608 = t471;
                    t609 = 0xC1EE24C;
                    t610 = t470;
                    if ((t488 & 128) == 0) {
                    } else {
                        t489 = *(int *)0xC0F4278;
                        if (t489 != 0) {
                            if (t489 != 1) {
                                if (t489 != 2) {
                                    if (t489 != 3) {
                                        if (t489 == 4) {
                                            t490 = *(int *)0xC2A628C;
                                            t491 = *(int *)((((((t490 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0));
                                            *(unsigned int *)((((((t490 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0)) = (t491 & 0xFFFFFFDF);
                                            t492 = *(int *)0xC2A628C;
                                            t493 = *(int *)((((((t492 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0));
                                            *(unsigned int *)((((((t492 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0)) = (t493 | ((t471 + 0x20) & 0x20));
                                        }
                                        t520 = 0xC1EE24C;
                                        t521 = t470;
                                    } else {
                                        t499 = *(int *)0xC2A628C;
                                        t500 = *(int *)((0xC2A5AFC + (((t499 << 2) << 2) << 1)));
                                        if ((t500 & 16) != 0) {
                                            t501 = *(int *)0xC2A628C;
                                            t502 = *(int *)((((((t501 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0));
                                            *(unsigned int *)((((((t501 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0)) = (t502 & 0xFFFFFFEF);
                                            t503 = ((int (*)(int, int, int))(nlPushUnitMatrix))(t471, 0xC1EE24C, t470);
                                            t504 = *(int *)0xC2A1B30;
                                            nlLoadMatrix((t504 + 0xB4));
                                        } else {
                                            t506 = *(int *)0xC2A628C;
                                            t507 = *(int *)((((((t506 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0));
                                            *(unsigned int *)((((((t506 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0)) = (t507 | 0x10);
                                            t508 = ((int (*)(int, int, int))(nlPushUnitMatrix))(t471, 0xC1EE24C, t470);
                                            nlLoadMatrix((((int)stk + 60) + 0x10));
                                        }
                                        FUN_0c077210((((int)stk + 60) + 0x68), (((int)stk + 60) + 0x68));
                                        FUN_0c077210((0x80 + ((int)stk + 60)), (0x80 + ((int)stk + 60)));
                                        nlPopMatrix(0x1);
                                    }
                                    t540 = t520;
                                    t541 = t521;
                                } else {
                                    t523 = *(int *)0xC2A628C;
                                    t524 = *(int *)((((((t523 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0));
                                    if ((t524 & 0x8) != 0) {
                                        t525 = *(int *)0xC2A628C;
                                        t526 = *(int *)((((((t525 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0));
                                        *(unsigned int *)((((((t525 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0)) = (t526 & 0xFFFFFFF7);
                                        nlAddVector((((int)stk + 60) + 0x68), 0xC2A6348);
                                        nlAddVector((0x80 + ((int)stk + 60)), 0xC2A6348);
                                    } else {
                                        t529 = *(int *)0xC2A628C;
                                        t530 = *(int *)((((((t529 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0));
                                        *(unsigned int *)((((((t529 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0)) = (t530 | 0x8);
                                        nlSubVector((((int)stk + 60) + 0x68), 0xC2A6348);
                                        nlSubVector((0x80 + ((int)stk + 60)), 0xC2A6348);
                                    }
                                }
                                t552 = t540;
                                t553 = t541;
                            } else {
                                t543 = *(int *)0xC2A628C;
                                t544 = *(int *)((((((t543 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0));
                                *(unsigned int *)((((((t543 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0)) = (t544 & 0xFFFFFFFB);
                                t545 = *(int *)0xC2A628C;
                                t546 = *(int *)((((((t545 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0));
                                *(unsigned int *)((((((t545 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0)) = (t546 | ((t471 + 0x4) & 0x4));
                                t552 = 0xC1EE24C;
                                t553 = t470;
                            }
                            t564 = t552;
                            t565 = t553;
                        } else {
                            t555 = *(int *)0xC2A628C;
                            t556 = *(int *)((((((t555 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0));
                            *(unsigned int *)((((((t555 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0)) = (t556 & 0xFFFFFFFD);
                            t557 = *(int *)0xC2A628C;
                            t558 = *(int *)((((((t557 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0));
                            *(unsigned int *)((((((t557 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0)) = (t558 | ((t471 + 0x2) & 0x2));
                            t564 = 0xC1EE24C;
                            t565 = t470;
                        }
                        t567 = *(int *)0xC2A628C;
                        t568 = *(int *)(((((((t567 - 1) << 2) << 2) << 1) + 0xC2A5AFC) + 0x0));
                        *(unsigned int *)(((int)stk + 60)) = (t568 & 0x8);
                        t569 = *(int *)0xC2A628C;
                        t570 = *(int *)((((((t569 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0));
                        t571 = *(int *)(((int)stk + 60));
                        *(unsigned int *)(((int)stk + 60)) = (t571 ^ (t570 & 0x8));
                        if ((t571 ^ (t570 & 0x8)) != 0) {
                            t572 = *(int *)0xC2A628C;
                            t573 = *(int *)((((((t572 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0));
                            *(unsigned int *)((((((t572 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0)) = (t573 & 0xFFFFFFFD);
                        }
                        t578 = *(int *)0xC2A628C;
                        *(unsigned int *)(((int)stk + 68)) = ((((t578 << 2) << 2) << 1) + 0xC2A5AFC);
                        t579 = *(int *)((((((t578 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0));
                        t600 = t579;
                        t601 = t564;
                        t602 = t565;
                        if ((t579 & 0x8) != 0) {
                        } else {
                            if ((0x10 & t579) == 0) {
                                t592 = t579;
                                t593 = t564;
                                t594 = t565;
                            } else {
                                t580 = *(int *)0xC2A628C;
                                t581 = *(int *)((((((t580 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0));
                                *(unsigned int *)((((((t580 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0)) = (t581 & 0xFFFFFFEF);
                                t582 = ((int (*)(int, int, int))(nlPushUnitMatrix))(t579, t564, t565);
                                t583 = *(int *)0xC2A1B30;
                                nlLoadMatrix((t583 + 0xB4));
                                FUN_0c077210((((int)stk + 60) + 0x68), (((int)stk + 60) + 0x68));
                                FUN_0c077210((0x80 + ((int)stk + 60)), (0x80 + ((int)stk + 60)));
                                nlPopMatrix(0x1);
                            }
                            t600 = t592;
                            t601 = t593;
                            t602 = t594;
                        }
                        t608 = t600;
                        t609 = t601;
                        t610 = t602;
                    }
                    t616 = t608;
                    t617 = t609;
                    t618 = t610;
                }
                t620 = *(int *)0xC2A628C;
                t621 = *(int *)((((((t620 << 2) << 2) << 1) + 0xC2A5AFC) + 0x0));
                if ((t621 & 0x8) != 0) {
                    t622 = *(int *)0xC2A628C;
                    t623 = *(int *)((0xC2A5AFC + (((t622 << 2) << 2) << 1)));
                    if ((t623 & 16) != 0) {
                        t624 = ((int (*)(int, int, int))(nlPushUnitMatrix))(t616, t617, t618);
                        t625 = *(int *)0xC2A1B30;
                        nlLoadMatrix((t625 + 0xB4));
                        FUN_0c077210((((int)stk + 60) + 0x68), (((int)stk + 60) + 0x68));
                        FUN_0c077210((0x80 + ((int)stk + 60)), (0x80 + ((int)stk + 60)));
                        nlPopMatrix(0x1);
                    }
                    t638 = *(int *)0xC2A1B30;
                    nlAddVector((((int)stk + 60) + 0x68), (t638 + 0x78));
                    t640 = *(int *)0xC2A1B30;
                    nlAddVector((0x80 + ((int)stk + 60)), (t640 + 0x78));
                }
            }
        }
        t668 = *(int *)0xC2A628C;
        t669 = *(int *)((0xC2A5AFC + (((t668 << 2) << 2) << 1)));
        if ((t669 & 4) != 0) {
            t670 = *(int *)0xC2A1B30;
            t671 = *(int *)(((t670 + 0x78) + 0x8));
            *(unsigned int *)(((0x80 + ((int)stk + 60)) + 0x8)) = t671;
            t672 = *(int *)(((t670 + 0x78) + 0x4));
            *(unsigned int *)(((0x80 + ((int)stk + 60)) + 0x4)) = t672;
            t673 = *(int *)(((t670 + 0x78) + 0x0));
            *(unsigned int *)(((0x80 + ((int)stk + 60)) + 0x0)) = t673;
        }
        t678 = *(int *)0xC2A628C;
        t679 = *(int *)((0xC2A5AFC + (((t678 << 2) << 2) << 1)));
        if ((t679 & 32) != 0) {
            t680 = nlLength((((int)stk + 60) + 0x68), (0x80 + ((int)stk + 60)));
            u681 = (t680 - 50.0f);
            if ((t680 - 50.0f) > 550.0f) {
                u681 = 550.0f;
            }
            u683 = u681;
            if (0.0f > u681) {
                u683 = 0.0f;
            }
            u685 = 5.0f;
            u685 = u685 + 35.0f * (((550.0f - u683) / 550.0f) * ((550.0f - u683) / 550.0f));
            *(float *)0xC1798A4 = u685;
        } else {
            *(float *)0xC1798A4 = 46.0f;
        }
        t700 = *(int *)(((((int)stk + 60) + 0x68) + 0x8));
        *(unsigned int *)0xC179848 = t700;
        t701 = *(int *)(((((int)stk + 60) + 0x68) + 0x4));
        *(unsigned int *)0xC179844 = t701;
        t702 = *(int *)(((((int)stk + 60) + 0x68) + 0x0));
        *(unsigned int *)0xC179840 = t702;
        t703 = *(int *)(((0x80 + ((int)stk + 60)) + 0x8));
        *(unsigned int *)0xC2A6284 = t703;
        t704 = *(int *)(((0x80 + ((int)stk + 60)) + 0x4));
        *(unsigned int *)0xC2A6280 = t704;
        t705 = *(int *)(((0x80 + ((int)stk + 60)) + 0x0));
        *(unsigned int *)0xC2A627C = t705;
        nlSubVector((0x80 + ((int)stk + 60)), (((int)stk + 60) + 0x68));
        u707 = *(float *)(((int)stk + 196));
        u708 = *(float *)(((int)stk + 192));
        u709 = *(float *)(((int)stk + 188));
        TOANG(0xC179858, 0xC17985A, u709, u708, (-u707));
        t711 = *(int *)0xC2A1B30;
        t712 = t711;
        t713 = (t711 + 956);
        t714 = 0xC2A62D0;
        for (;;) { t715 = *(int *)t712; t712 = (t712 + 4); if ((unsigned int)t713 < (unsigned int)t712) break; *(unsigned int *)t714 = t715; t714 = (t714 + 4); }
        t716 = *(int *)0xC2A4E60;
        if (t716 != 1) {
        } else {
            t717 = *(int *)0xC2A6288;
            if (t717 == 1) {
                t718 = *(int *)0xC0F4278;
                nlLocate(0x1F, (t718 + 0x2A));
                t720 = *(int *)0xC1EE330;
                if ((t720 & 24) != 0) {
                    nlPrintf(0xC0C3228);
                }
            }
            nlLocate(0x1E, 0x28);
            t731 = *(int *)0xC1EE330;
            if ((t731 & 16) != 0) {
                t732 = *(int *)0xC2A6288;
                nlPrintf(0xC0C32AC, ((((t732 << 2) << 2) << 1) + 0xC0C0D20));
            } else {
                nlPrintf(0xC0C32B4);
            }
            t737 = *(int *)0xC2A628C;
            nlPrintf(0xC0C32B8, t737, 0x3C);
            t739 = *(int *)0xC2A628C;
            t740 = *(int *)((0xC2A5AFC + (((t739 << 2) << 2) << 1)));
            nlPrintf(0xC0C32CC, ((((((t740 >> 1) & 0x1) << 2) << 2) << 1) + 0xC0C09A0));
            t742 = *(int *)0xC2A628C;
            t743 = *(int *)((0xC2A5AFC + (((t742 << 2) << 2) << 1)));
            nlPrintf(0xC0C32E0, (((((((t743 >> 1) >> 1) & 0x1) << 2) << 2) << 1) + 0xC0C09A0));
            t745 = *(int *)0xC2A628C;
            t746 = *(int *)((0xC2A5AFC + (((t745 << 2) << 2) << 1)));
            nlPrintf(0xC0C32F4, ((((((((t746 >> 1) >> 1) >> 1) & 0x1) << 2) << 2) << 1) + 0xC0C09A0));
            t748 = *(int *)0xC2A628C;
            t749 = *(int *)((0xC2A5AFC + (((t748 << 2) << 2) << 1)));
            nlPrintf(0xC0C3308, (((((((int)t749 >> 4) & 0x1) << 2) << 2) << 1) + 0xC0C09A0));
            u751 = *(float *)0xC1798A4;
            *(float *)(((int)stk + 12)) = u751;
            t752 = *(int *)0xC2A628C;
            t753 = *(int *)((0xC2A5AFC + (((t752 << 2) << 2) << 1)));
            nlPrintf(0xC0C331C, (0xC0C09A0 + ((((((int)t753 >> 5) & 0x1) << 2) << 2) << 1)), u751);
        }
    }
}

