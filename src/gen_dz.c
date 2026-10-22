/* Straight-line functions with calls and guards (batch gen_dz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Bezier(int, int, float);
int FUN_0c049aa8(int, int, float);
int FUN_0c05778a(int, int, float, float);
int FUN_0c074680(void);
int nlSqrt(int, int);
int FUN_0c077210(int, int);
int FUN_0c078a70(int, int, int);
int FUN_0c079f10(void);
int FUN_0c089978(int, int);
int FUN_0c089e00(int);
int FUN_0c15e85c(int, int, int);
int GetCollision2D(int, float);
int ResetFadeColor(void);
int SetCameraMode(int);
extern float _builtin_sqrtf(float);
int _mult64(int, int, int, int);
int _pow10(int, int, int);
int camRestore(void);
int camSetEye(int, int);
int camSetTarget(int, int);
int carBalance(int);
int get_fat(int, int);
int kmiCopyToPVRMemory(int);
int kmiCreateDummyRegionforAvoidCacheBug(void);
int kmiCreateDummyTranslucentObject(int, int);
int memmove(int, int, int);
int memset(int, int, int);
int nlAddVector(int, int);
int nlArcTan(float);
int nlArcTan2(float, float);
float nlCos(int);
int nlFastSinCos(int, int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlGetMatrix(int);
float nlInnerProduct(int, int);
int nlMultiMatrix(int);
int nlObjPut(int);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSetTranslate(int);
float nlSin(int);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
float nlTan(int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int nlTriPutSetAttrib(int, int, int, int, int, int, int, int, int, int, float, float, float, float, float, float, float, float);
int nlTriPutSetAttribFaceColor(int, float, float, float);
int nlTriPutSetClipping(int, float, float, float, float);
int nlTriPutSetPoint(int, int, float, float, float, float, float, float, float, float);
int nlTriPutTextureInit(int, int, int);
int nlUnitMatrix(void);
int nlUnitVector(int);
int search_fat_dir(int, int);
int set_fat(int, int);
int vmsfs_write_retry(int, int, int);
int write_fat(int);
int write_sys(int);
int FUN_0c034fa8(int a4);
int FUN_0c05d862(void);
int FUN_0c064788(void);
int FUN_0c0648e0(void);
int FUN_0c064a5c(void);
int FUN_0c065bb8(void);
int FUN_0c0792b0(int a4, float f4, float f5, float f6);
int Put_Motion2D(int a4, int a5);
int Put_SEGA_LOGO2(void);
int _power(int a4, int a5, int a6);
int carMultiCollision(int a4, float f4);
int carSteering(int a4);
int getSteering(int a4, int a5);
int getYXZrot(int a4);
int kmiCreateRegionArray(int a4, int a5, int a6, int a7, int a8, int a9);
int nd_CarSel_PutCar(int a4, int a5, int a6, int a7);
int write_dir(int a4);

int FUN_0c034fa8(int a4)
{
    int t0;
    int t3;
    int t8;
    float u9;
    float u10;
    float u13;
    float u14;
    int t15;
    int t16;
    int t17;
    float u19;
    float u20;
    float u21;
    float u22;
    float u23;
    float u24;
    float u25;
    float u27;
    float u28;
    float u29;
    float u31;
    float u32;
    float u33;
    float u34;
    float u35;
    int t37;
    int stk[23] = {0};

    t0 = *(int *)0xC0ED8A0;
    if (t0 != 0) {
        nlTriPutTextureInit(0xC270E78, 0xFFFFFFFF, 0x0);
        nlTriPutSetAttrib(0xC270E78, 0x2, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x22, 0.5f, 0.5f, 1.0f, 0.0f, 0.699999988f, 0.0f, 0.0f, 0.0f);
        t3 = *(int *)0xC270E98;
        *(unsigned int *)0xC270E98 = (t3 | 0xC0);
        *(unsigned int *)0xC0ED8A0 = 0x0;
    }
    t8 = *(int *)((a4 + 0x18));
    u9 = 0.0f;
    u10 = 0.699999988f;
    if ((t8 & 1) != 0) {
        u9 = 0.699999988f;
        u10 = 0.0f;
    }
    nlTriPutSetAttribFaceColor(0xC270E78, 1.0f, u9, u10);
    u13 = *(float *)((a4 + 0x8));
    *(float *)(((int)stk + 36)) = u13;
    u14 = *(float *)((a4 + 0xC));
    *(float *)(((int)stk + 40)) = u14;
    t15 = 0x0;
    t16 = 0x0;
    t17 = 0x0;
    for (;;) {
        nlFastSinCos(t16, ((int)stk + 28), (((int)stk + 28) + 0x4));
        u19 = *(float *)((a4 + 0x10));
        u20 = *(float *)(((int)stk + 32));
        u21 = *(float *)(((int)stk + 36));
        u22 = *(float *)(((int)stk + 40));
        u23 = *(float *)(((int)stk + 28));
        u24 = *(float *)(((int)stk + 32));
        u25 = *(float *)((a4 + 0x14));
        nlTriPutSetPoint(0xC270E78, t17, (u21 + u19 * u20), u25, (u22 + u19 * u23), u24, 0.0f, u23, 0.0f, 0.0f);
        u27 = *(float *)(((int)stk + 32));
        u28 = *(float *)((a4 + 0x18));
        u29 = *(float *)(((int)stk + 28));
        nlTriPutSetPoint(0xC270E78, (t17 + 0x1), (u21 + u19 * u20), u28, (u22 + u19 * u23), u27, 0.0f, u29, 0.0f, 0.0f);
        t15 = (t15 + 0x1);
        t17 = (t17 + 0x2);
        t16 = (t16 + 0x1000);
        if ((int)t15 > (int)0x10) {
            break;
        }
    }
    u31 = *(float *)((a4 + 0x14));
    u32 = *(float *)((a4 + 0x18));
    u33 = *(float *)((a4 + 0x10));
    u34 = *(float *)(((int)stk + 40));
    u35 = *(float *)(((int)stk + 36));
    nlTriPutSetClipping(0xC270E78, u35, ((u31 + u32) * 0.5f), u34, (u33 + 0.5f * (u31 - u32)));
    t37 = nlObjPutUseViewMatrix(0xC270E78);
    return t37;
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

int FUN_0c064788(void)
{
    int t6;
    int t11;
    int t12;
    int t13;
    int t14;
    int t22;
    int t24;
    int t23;
    int stk[15] = {0};

    SetCameraMode(0x1);
    nlGetAverageVector(0xC2AD554, 0xC2AD1F8, (((int)stk + 4) + 0x18), 1.0f, 20.0f);
    nlGetAverageVector((((int)stk + 4) + 0x18), 0xC2AD1EC, (((int)stk + 4) + 0x18), 1.0f, 10.0f);
    nlSubVector3op((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x18), 0xC179840);
    nlGetAverageVector(0xC179840, (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x18), 1.0f, 0.099999994f);
    camSetEye((((int)stk + 4) + 0x18), 0x1);
    t6 = *(int *)0xC2AD54C;
    nlGetAverageVector((t6 + 0x4), 0xC2AD1EC, ((int)stk + 4), 1.0f, 10.0f);
    nlSubVector3op((((int)stk + 4) + 0xC), ((int)stk + 4), 0xC17984C);
    nlGetAverageVector(0xC17984C, (((int)stk + 4) + 0xC), ((int)stk + 4), 1.0f, 0.299999982f);
    camSetTarget(((int)stk + 4), 0x1);
    t11 = *(int *)0xC2AD54C;
    t12 = *(int *)((t11 + 0x20));
    if (t12 == 2) {
        t13 = *(int *)0xC2AD54C;
        t14 = *(int *)((t13 + 0x24));
        if (t14 == 2) {
            *(unsigned int *)0xC2AD57C = 0x4;
        }
    }
    t22 = *(int *)0xC2AD590;
    t24 = t22;
    if ((t22 & 1) == 0) {
        t23 = camRestore();
        t24 = t23;
    }
    return t24;
}

int FUN_0c0648e0(void)
{
    int t1;
    int t2;
    float u5;
    int t6;
    float t8;
    float u9;
    float u12;
    float u13;
    float u16;
    int t19;
    float u20;
    int t21;
    int t27;
    int t28;
    int t29;
    int t30;
    int t38;
    int t40;
    int t39;
    int stk[19] = {0};

    SetCameraMode(0x1);
    t1 = *(int *)0xC2AD54C;
    t2 = *(int *)0xC2AD548;
    nlSubVector3op((((int)stk + 4) + 0x18), (t1 + 0x4), (t2 + 0x4));
    nlUnitVector((((int)stk + 4) + 0x18));
    u5 = *(float *)0xC064A24;
    t6 = *(int *)0xC2AD548;
    nlGetAverageVector((t6 + 0x4), (((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC), 1.0f, u5);
    t8 = nlInnerProduct(0xC2AD1F8, (((int)stk + 4) + 0x18));
    u9 = (t8 * (-1.0f));
    if (t8 > 0.0f) {
        u9 = 0.0f;
    }
    u12 = *(float *)0xC064A30;
    u13 = *(float *)0xC064A34;
    nlGetAverageVector((((int)stk + 4) + 0xC), 0xC2AD1EC, (((int)stk + 4) + 0xC), 1.0f, (u13 + u12 * u9));
    nlSubVector3op((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC), 0xC179840);
    u16 = *(float *)0xC064A40;
    nlGetAverageVector(0xC179840, (((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC), 1.0f, u16);
    camSetEye((((int)stk + 4) + 0xC), 0x1);
    t19 = *(int *)0xC2AD54C;
    u20 = *(float *)0xC064A48;
    t21 = *(int *)0xC2AD548;
    nlGetAverageVector((t21 + 0x4), (t19 + 0x4), ((int)stk + 4), u20, u20);
    nlGetAverageVector(((int)stk + 4), 0xC2AD1EC, ((int)stk + 4), 1.0f, u12);
    nlSubVector3op((((int)stk + 4) + 0x18), ((int)stk + 4), 0xC17984C);
    nlGetAverageVector(0xC17984C, (((int)stk + 4) + 0x18), ((int)stk + 4), 1.0f, u16);
    camSetTarget(((int)stk + 4), 0x1);
    t27 = *(int *)0xC2AD54C;
    t28 = *(int *)((t27 + 0x20));
    if (t28 == 2) {
        t29 = *(int *)0xC2AD54C;
        t30 = *(int *)((t29 + 0x24));
        if (t30 == 2) {
            *(unsigned int *)0xC2AD57C = 0x4;
        }
    }
    t38 = *(int *)0xC2AD590;
    t40 = t38;
    if ((t38 & 1) == 0) {
        t39 = camRestore();
        t40 = t39;
    }
    return t40;
}

int FUN_0c064a5c(void)
{
    int t0;
    int t1;
    int t15;
    float u4;
    int t10;
    int t12;
    int t11;
    int stk[13] = {0};

    t0 = *(int *)0xC2AD54C;
    t1 = *(signed char *)((t0 + 0x149));
    t15 = t1;
    if ((t1 & 128) == 0) {
        SetCameraMode(0x1);
        nlSubVector3op((((int)stk + 4) + 0x18), 0xC2AD554, 0xC179840);
        u4 = *(float *)0xC064B4C;
        nlGetAverageVector(0xC179840, (((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC), 1.0f, u4);
        camSetEye((((int)stk + 4) + 0xC), 0x1);
        nlSubVector3op((((int)stk + 4) + 0x18), 0xC2AD560, 0xC17984C);
        nlGetAverageVector(0xC17984C, (((int)stk + 4) + 0x18), ((int)stk + 4), 1.0f, u4);
        camSetTarget(((int)stk + 4), 0x1);
        t10 = *(int *)0xC2AD590;
        t12 = t10;
        if ((t10 & 1) == 0) {
            t11 = camRestore();
            t12 = t11;
        }
        t15 = t12;
    }
    return t15;
}

int FUN_0c065bb8(void)
{
    int t2;
    int t13;
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
    float u40;
    float u41;
    float u42;
    float u43;
    int t49;
    int t50;
    int t51;
    int t54;
    int t57;
    int t59;
    int t85;
    int t87;
    int t86;
    int stk[47] = {0};

    SetCameraMode(0x1);
    nlPushMatrix(0xC179180);
    t2 = *(int *)0xC2AD578;
    if ((int)t2 <= (int)0x7) {
        if ((int)t2 > (int)0x6E) {
            nlSubVector3op((((int)stk + 4) + 0x74), 0xC2AD554, 0xC179840);
            nlGetAverageVector(0xC179840, (((int)stk + 4) + 0x74), (0x8C + ((int)stk + 4)), 1.0f, 0.049999997f);
            camSetEye((0x8C + ((int)stk + 4)), 0x1);
            nlSubVector3op((((int)stk + 4) + 0x74), 0xC2AD560, 0xC17984C);
            nlGetAverageVector(0xC17984C, (((int)stk + 4) + 0x74), (0x80 + ((int)stk + 4)), 1.0f, 0.049999997f);
            camSetTarget((0x80 + ((int)stk + 4)), 0x1);
        }
    } else {
        t13 = *(int *)0xC2AD578;
        if ((int)t13 >= (int)0x50) {
            if ((int)t2 > (int)0x6E) {
                nlSubVector3op((((int)stk + 4) + 0x74), 0xC2AD554, 0xC179840);
                nlGetAverageVector(0xC179840, (((int)stk + 4) + 0x74), (0x8C + ((int)stk + 4)), 1.0f, 0.049999997f);
                camSetEye((0x8C + ((int)stk + 4)), 0x1);
                nlSubVector3op((((int)stk + 4) + 0x74), 0xC2AD560, 0xC17984C);
                nlGetAverageVector(0xC17984C, (((int)stk + 4) + 0x74), (0x80 + ((int)stk + 4)), 1.0f, 0.049999997f);
                camSetTarget((0x80 + ((int)stk + 4)), 0x1);
            }
        } else {
            t26 = *(int *)0xC0D5410;
            *(unsigned int *)(((((int)stk + 4) + 0x50) + 0x14)) = t26;
            t27 = *(int *)0xC0D540C;
            *(unsigned int *)(((((int)stk + 4) + 0x50) + 0x10)) = t27;
            t28 = *(int *)0xC0D5408;
            *(unsigned int *)(((((int)stk + 4) + 0x50) + 0xC)) = t28;
            t29 = *(int *)0xC0D5404;
            *(unsigned int *)(((((int)stk + 4) + 0x50) + 0x8)) = t29;
            t30 = *(int *)0xC0D5400;
            *(unsigned int *)(((((int)stk + 4) + 0x50) + 0x4)) = t30;
            t31 = *(int *)0xC0D53FC;
            *(unsigned int *)(((((int)stk + 4) + 0x50) + 0x0)) = t31;
            t32 = *(int *)0xC0D541C;
            *(unsigned int *)(((((int)stk + 4) + 0x44) + 0x8)) = t32;
            t33 = *(int *)0xC0D5418;
            *(unsigned int *)(((((int)stk + 4) + 0x44) + 0x4)) = t33;
            t34 = *(int *)0xC0D5414;
            *(unsigned int *)(((((int)stk + 4) + 0x44) + 0x0)) = t34;
            t35 = *(int *)0xC0D5428;
            *(unsigned int *)(((((int)stk + 4) + 0x38) + 0x8)) = t35;
            t36 = *(int *)0xC0D5424;
            *(unsigned int *)(((((int)stk + 4) + 0x38) + 0x4)) = t36;
            t37 = *(int *)0xC0D5420;
            *(unsigned int *)(((((int)stk + 4) + 0x38) + 0x0)) = t37;
            t38 = *(int *)0xC2AD54C;
            t39 = *(signed char *)((t38 + 0x14B));
            if ((t39 & 4) == 0) {
                u40 = *(float *)(((((int)stk + 4) + 0x50) + 0x0));
                *(float *)(((((int)stk + 4) + 0x50) + 0x0)) = (u40 * (-1.0f));
                u41 = *(float *)(((((int)stk + 4) + 0x50) + 0xC));
                *(float *)(((((int)stk + 4) + 0x50) + 0xC)) = (u41 * (-1.0f));
                u42 = *(float *)(((int)stk + 72));
                *(float *)(((int)stk + 72)) = (u42 * (-1.0f));
                u43 = *(float *)(((int)stk + 60));
                *(float *)(((int)stk + 60)) = (u43 * (-1.0f));
            }
            *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x8);
            t49 = *(int *)0xC2AD55C;
            *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x8)) = t49;
            t50 = *(int *)0xC2AD558;
            *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x4)) = t50;
            t51 = *(int *)0xC2AD554;
            *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x0)) = t51;
            *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 4) + 0x8) + 0x24);
            nlSqrt((((int)stk + 4) + 0x44), ((((int)stk + 4) + 0x8) + 0x24));
            FUN_0c077210((((int)stk + 4) + 0x50), (((int)stk + 4) + 0x74));
            t54 = *(int *)(((int)stk + 4));
            FUN_0c078a70(((((int)stk + 4) + 0x8) + 0xC), t54, (((int)stk + 4) + 0x74));
            FUN_0c077210(((((int)stk + 4) + 0x50) + 0xC), (((int)stk + 4) + 0x74));
            t57 = *(int *)(((int)stk + 8));
            FUN_0c078a70(((((int)stk + 4) + 0x8) + 0x18), t57, (((int)stk + 4) + 0x74));
            t59 = *(int *)0xC2AD578;
            Bezier((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x74), ((float)(t59 - 7) / 72.0f));
            nlSubVector3op((((int)stk + 4) + 0x68), (((int)stk + 4) + 0x74), 0xC179840);
            nlGetAverageVector(0xC179840, (((int)stk + 4) + 0x68), (0x8C + ((int)stk + 4)), 1.0f, 0.299999982f);
            camSetEye((0x8C + ((int)stk + 4)), 0x1);
            nlSqrt((((int)stk + 4) + 0x38), (((int)stk + 4) + 0x74));
            nlSubVector3op((((int)stk + 4) + 0x68), (((int)stk + 4) + 0x74), 0xC17984C);
            nlGetAverageVector(0xC17984C, (((int)stk + 4) + 0x68), (0x80 + ((int)stk + 4)), 1.0f, 0.049999997f);
            camSetTarget((0x80 + ((int)stk + 4)), 0x1);
        }
    }
    nlPopMatrix(0x1);
    t85 = *(int *)0xC2AD590;
    t87 = t85;
    if ((t85 & 2) == 0) {
        t86 = camRestore();
        t87 = t86;
    }
    return t87;
}

int FUN_0c0792b0(int a4, float f4, float f5, float f6)
{
    int t0;
    float t1;
    float u2;
    float t3;
    float u4;
    int t5;
    float t6;
    float t7;
    float u12;
    float u13;
    float u14;
    float u23;
    int t15;
    float t16;
    float u17;
    int t25;
    float t26;
    float u27;
    float u28;
    float u29;
    float u30;
    float u31;
    float u32;
    float u33;
    float t35;
    float u36;
    int t37;
    float t38;
    float t39;
    float u40;
    float t41;
    int t42;
    float t43;
    float u44;
    float u45;
    float u46;
    float u47;
    float u48;
    int t50;
    int stk[34] = {0};

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(float *)(((int)stk + 16)) = f4;
    *(float *)(((int)stk + 4)) = f6;
    t0 = *(int *)(((int)stk + 8));
    t1 = nlTan((t0 >> 1));
    *(float *)(((int)stk + 12)) = (1.0f / t1);
    u2 = *(float *)0xC14A81C;
    if (u2 != 0.0f) {
        t3 = nlTan((t0 >> 1));
        u4 = *(float *)0xC14A81C;
        t5 = nlArcTan((t3 * (u4 + 1.0f)));
        t6 = nlCos(t5);
        *(float *)(((int)stk + 24)) = (1.0f / t6);
    } else {
        t7 = nlCos((t0 >> 1));
        *(float *)(((int)stk + 24)) = (1.0f / t7);
    }
    u12 = *(float *)0xC14A820;
    u13 = *(float *)(((int)stk + 12));
    u14 = *(float *)(((int)stk + 16));
    u23 = (1.0f / (u14 * u13));
    if (u12 != 0.0f) {
        t15 = nlArcTan((1.0f / (u14 * u13)));
        *(unsigned int *)(((int)stk + 8)) = t15;
        t16 = nlTan(t15);
        u17 = *(float *)0xC14A820;
        u23 = (t16 * (u17 + 1.0f));
    }
    t25 = nlArcTan(u23);
    t26 = nlCos(t25);
    *(float *)0xC14A81C = 0.0f;
    *(float *)0xC14A820 = 0.0f;
    u27 = *(float *)(((int)stk + 24));
    u28 = *(float *)(((int)stk + 12));
    *(float *)0xC14A810 = ((u28 * u27) * 0.5f);
    *(float *)0xC14A814 = (((u14 * u13) * (1.0f / t26)) * 0.5f);
    u29 = *(float *)0xC14A824;
    u30 = *(float *)0xC14A810;
    *(float *)0xC2B3490 = (u29 * u30);
    u31 = *(float *)0xC14A814;
    u32 = *(float *)0xC14A828;
    *(float *)0xC2B3494 = (u32 * u31);
    u33 = *(float *)0xC2B3490;
    if (u33 > (u32 * u31)) {
        *(float *)0xC14A818 = u33;
    } else {
        *(float *)0xC14A818 = (u32 * u31);
    }
    t35 = nlTan((t0 >> 1));
    u36 = *(float *)(((int)stk + 16));
    t37 = nlArcTan((t35 / u36));
    *(float *)(((int)stk + 20)) = (float)t37;
    *(float *)0xC2B3464 = 0.0f;
    *(float *)0xC2B3454 = 0.0f;
    *(float *)0xC2B3480 = 0.0f;
    *(float *)0xC2B3470 = 0.0f;
    t38 = nlCos((t0 >> 1));
    *(float *)0xC2B3450 = t38;
    *(float *)0xC2B3460 = (-t38);
    t39 = nlSin((t0 >> 1));
    *(float *)0xC2B3468 = t39;
    *(float *)0xC2B3458 = t39;
    u40 = *(float *)(((int)stk + 20));
    *(unsigned int *)(((int)stk + 8)) = (int)u40;
    t41 = nlCos((int)u40);
    *(float *)0xC2B3474 = t41;
    *(float *)0xC2B3484 = (-t41);
    t42 = *(int *)(((int)stk + 8));
    t43 = nlSin(t42);
    *(float *)0xC2B3488 = t43;
    *(float *)0xC2B3478 = t43;
    *(float *)0xC2B346C = 0.0f;
    *(float *)0xC2B345C = 0.0f;
    *(float *)0xC2B348C = 0.0f;
    *(float *)0xC2B347C = 0.0f;
    u44 = *(float *)(((int)stk + 12));
    *(float *)(((int)stk + 28)) = u44;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = (u14 * u13);
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = 0.0f;
    *(float *)(((int)stk + 60)) = 0.0f;
    *(float *)(((int)stk + 64)) = 0.0f;
    u45 = *(float *)(((int)stk + 4));
    *(float *)(((int)stk + 68)) = ((f5 + u45) / (f5 - u45));
    *(float *)(((int)stk + 72)) = (-1.0f);
    *(float *)(((int)stk + 76)) = 0.0f;
    *(float *)(((int)stk + 80)) = 0.0f;
    u46 = *(float *)(((int)stk + 4));
    *(float *)(((int)stk + 84)) = (((f5 * u46) * (1.0f + 1.0f)) / (f5 - u45));
    *(float *)(((int)stk + 88)) = 0.0f;
    *(float *)0xC2B7BDC = f5;
    u47 = *(float *)(((int)stk + 4));
    *(float *)0xC2B7BE0 = u47;
    *(float *)0xC2B7BE4 = (1.0f / f5);
    *(float *)0xC2B3174 = f5;
    *(float *)0xC2B315C = (-f5);
    u48 = *(float *)(((int)stk + 4));
    *(float *)0xC2B3178 = u48;
    *(float *)0xC2B3170 = (1.0f / f5);
    nlMultiMatrix((((int)stk + 4) + 0x18));
    t50 = FUN_0c079f10();
    return t50;
}


int Put_SEGA_LOGO2(void)
{
    int t2;
    float u5;
    float u6;
    int t9;
    float u14;
    int t15;
    int t16;
    int t19;
    int t28;
    int t30;
    int t32;
    int t34;
    float u39;
    float u40;
    int t45;
    int t65;
    int t20;
    int t17;
    int stk[42] = {0};

    nlPushMatrix(0x0);
    nlTranslate(0.0f, 0.0f, -50.0f);
    t2 = *(int *)0xC2A93F4;
    if ((int)t2 >= (int)0x78) {
        nlObjPut(0xC464170);
        *(unsigned int *)0xC2A9300 = 0x200A;
        nlObjPutSetFadeColor(0.0f, 0.0f, 0.0f);
        u5 = *(float *)0xC058FB0;
        u6 = *(float *)0xC058FB4;
        FUN_0c05778a(0xC2A92CC, 0xED, u6, u5);
        nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
    } else {
        t9 = 0x0;
        for (;;) {
            nlPushUnitMatrix();
            nlRotateAZ((t9 * 0x1999));
            *(unsigned int *)(((int)stk + 4)) = (signed char)(((t9 << 1) + t9) << 2);
            nlSqrt(0xC2A93F8, ((signed char)(((t9 << 1) + t9) << 2) + (((int)stk + 4) + 0x4)));
            nlPopMatrix(0x1);
            u14 = *(float *)0xC2A93FC;
            if (u14 > 0.0f) {
                if ((int)t9 >= (int)0x3) {
                    if ((int)t9 > (int)0x7) {
                        t15 = *(short *)((((unsigned char)(((t9 << 2) + t9) << 2) + 0xC2A932C) + 0xC));
                        t17 = (t15 - 0x222);
                    } else {
                        t16 = *(short *)((((unsigned char)(((t9 << 2) + t9) << 2) + 0xC2A932C) + 0xC));
                        t17 = (t16 + 0x222);
                    }
                    t20 = t17;
                } else {
                    t19 = *(short *)((((unsigned char)(((t9 << 2) + t9) << 2) + 0xC2A932C) + 0xC));
                    t20 = (t19 - 0x222);
                }
                *(unsigned short *)((((unsigned char)(((t9 << 2) + t9) << 2) + 0xC2A932C) + 0xC)) = t20;
            }
            nlPushMatrix(0x0);
            t28 = *(int *)(((int)stk + 4));
            nlTranslateV((t28 + (((int)stk + 4) + 0x4)));
            t30 = *(short *)((((unsigned char)(((t9 << 2) + t9) << 2) + 0xC2A932C) + 0xC));
            nlRotateAX((unsigned short)t30);
            t32 = *(int *)((((t9 << 2) + 0xC130D58) + 0x0));
            FUN_0c089e00(t32);
            t34 = *(int *)((((t9 << 2) + 0xC130D58) + 0x0));
            nlObjPut(t34);
            nlPopMatrix(0x1);
            t9 = (t9 + 0x1);
            if ((int)t9 >= (int)0xA) {
                break;
            }
        }
        u39 = *(float *)0xC2A93FC;
        if (u39 > 0.0f) {
            u40 = *(float *)0xC2A93FC;
            *(float *)0xC2A93FC = (u40 - 0.299999982f);
        }
        t45 = *(int *)0xC2A93F4;
        *(unsigned int *)0xC2A93F4 = (t45 + 0x1);
    }
    FUN_0c074680();
    t65 = nlPopMatrix(0x1);
    return t65;
}

int _power(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t5;
    int t8;
    int t13;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t34;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t37;
    int t38;
    int t40;
    int t41;
    int t42;
    int t44;
    int t45;
    int t46;
    int t47;
    int t57;
    int t58;
    int t59;
    int t60;
    int t14;
    int t15;
    int t9;
    int t10;
    int t33;
    int t30;
    int stk[19] = {0};

    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    t0 = 0x1;
    t1 = (-a4);
    if ((int)a4 >= 0) {
        t0 = 0x0;
        t1 = a4;
    }
    t3 = (int)((int)t1 / (int)0x1B);
    t4 = (int)((int)t1 % (int)0x1B);
    if (t0 == 1) {
        if (t4 != 0) {
            t5 = *(short *)0xC0DAEA8;
            *(unsigned short *)(((int)stk + 4)) = t5;
            memmove((((int)stk + 4) + 0x1C), 0xC0DAE58, 0x8);
            *(unsigned char *)(((((int)stk + 4) + 0x1C) + 0x8)) = 0x0;
            t9 = 0x0;
            t10 = (0x1B - t4);
        } else {
            memset((((int)stk + 4) + 0x1C), 0x0, 0x9);
            t8 = *(signed char *)(((((int)stk + 4) + 0x1C) + 0x0));
            *(unsigned char *)(((((int)stk + 4) + 0x1C) + 0x0)) = (t8 | 0x80);
            *(unsigned short *)(((int)stk + 4)) = 0x0;
            t9 = (t8 | 0x80);
            t10 = t4;
        }
        t14 = t9;
        t15 = t10;
    } else {
        memset((((int)stk + 4) + 0x1C), 0x0, 0x9);
        t13 = *(signed char *)(((((int)stk + 4) + 0x1C) + 0x0));
        *(unsigned char *)(((((int)stk + 4) + 0x1C) + 0x0)) = (t13 | 0x80);
        *(unsigned short *)(((int)stk + 4)) = 0x0;
        t14 = (t13 | 0x80);
        t15 = t4;
    }
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0x1C);
    t17 = t14;
    t18 = (((int)stk + 4) + 0x1C);
    t19 = 0xC0DAE18;
    t20 = 0x0;
    t21 = t3;
    t22 = ((((t0 << 2) << 2) << 2) + 0xC0DAE18);
    t23 = (((t0 << 2) << 2) + 0xC0DAE98);
    for (;;) {
        t34 = t19;
        if ((t21 & 0x1) != 0) {
            t24 = *(short *)((t23 + 0x0));
            t25 = _mult64(((int)stk + 4), (((int)stk + 4) + 0x1C), t24, t22);
            t17 = t25;
            t19 = 0xB4;
            t26 = FUN_0c089978((((int)stk + 4) + 0x1C), 0x40);
            t17 = t26;
            if (t17 != 0) {
                t27 = *(short *)(((int)stk + 4));
                t19 = t27;
                t19 = (t19 + 0x1);
                *(unsigned short *)(((int)stk + 4)) = t19;
                t28 = *(int *)(((int)stk + 8));
                t29 = *(signed char *)((t28 + 0x0));
                t17 = t29;
                t17 = (t17 | 0x80);
                *(unsigned char *)((t28 + 0x0)) = t17;
                t30 = t19;
            }
            t34 = t30;
        } else {
            t33 = t18;
        }
        t18 = t33;
        t19 = t34;
        t20 = (t20 + 0x1);
        t21 = (t21 >> 1);
        t23 = (t23 + 0x2);
        t22 = (t22 + 0x8);
        if ((int)t20 >= (int)0x8) {
            break;
        }
    }
    if (t15 != 0) {
        t37 = *(int *)(((int)stk + 12));
        t38 = *(int *)(((int)stk + 16));
        _pow10(t15, t37, t38);
        t40 = *(int *)(((int)stk + 12));
        t41 = *(short *)((t40 + 0x0));
        t42 = *(int *)(((int)stk + 16));
        _mult64(((int)stk + 4), (((int)stk + 4) + 0x1C), t41, t42);
        t44 = FUN_0c089978((((int)stk + 4) + 0x1C), 0x40);
        if (t44 == 1) {
            t45 = *(short *)(((int)stk + 4));
            *(unsigned short *)(((int)stk + 4)) = (t45 + 0x1);
            t46 = *(int *)(((int)stk + 8));
            t47 = *(signed char *)((t46 + 0x0));
            *(unsigned char *)((t46 + 0x0)) = (t47 | 0x80);
        }
    }
    t57 = *(short *)(((int)stk + 4));
    t58 = *(int *)(((int)stk + 12));
    *(unsigned short *)((t58 + 0x0)) = t57;
    t59 = *(int *)(((int)stk + 16));
    t60 = memmove(t59, (((int)stk + 4) + 0x1C), 0x8);
    return t60;
}

int carMultiCollision(int a4, float f4)
{
    int t2;
    int t4;
    int t6;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    float u17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    float u23;
    int t30;
    int t31;
    int t36;
    float u32;
    float u34;
    float u35;
    int stk[11] = {0};

    nlPushUnitMatrix();
    nlSetTranslate((0x8C + a4));
    t2 = *(short *)((a4 + 0xA6));
    nlRotateAY((unsigned short)t2);
    t4 = *(short *)((a4 + 0xA4));
    nlRotateAX((unsigned short)t4);
    t6 = *(short *)((a4 + 0xA8));
    nlRotateAZ((unsigned short)t6);
    t8 = *(int *)0xC0A4790;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t8;
    t9 = *(int *)0xC0A478C;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t9;
    t10 = *(int *)0xC0A4788;
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t10;
    t11 = *(int *)0xC0A4790;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x8)) = t11;
    t12 = *(int *)0xC0A478C;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x4)) = t12;
    t13 = *(int *)0xC0A4788;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = t13;
    *(float *)(((int)stk + 24)) = (-f4);
    *(float *)(((int)stk + 12)) = f4;
    nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC));
    nlSqrt(((int)stk + 4), ((int)stk + 4));
    nlPopMatrix(0x1);
    u17 = *(float *)0xC043B48;
    t18 = GetCollision2D((((int)stk + 4) + 0xC), u17);
    t19 = *(int *)((t18 + 0x1C));
    if (t19 != -1) {
        t20 = *(int *)(((t18 + 0xC) + 0x8));
        *(unsigned int *)(((0xEC + a4) + 0x8)) = t20;
        t21 = *(int *)(((t18 + 0xC) + 0x4));
        *(unsigned int *)(((0xEC + a4) + 0x4)) = t21;
        t22 = *(int *)(((t18 + 0xC) + 0x0));
        *(unsigned int *)(((0xEC + a4) + 0x0)) = t22;
        u23 = *(float *)((t18 + 0x18));
        *(float *)((a4 + 0x104)) = u23;
    }
    t30 = GetCollision2D(((int)stk + 4), u17);
    t31 = *(int *)((t30 + 0x1C));
    t36 = t31;
    if (t31 != -1) {
        u32 = *(float *)0xC043B50;
        nlGetAverageVector((0xEC + a4), (t30 + 0xC), (0xEC + a4), u32, u32);
        u34 = *(float *)((a4 + 0x104));
        u35 = *(float *)((t30 + 0x18));
        *(float *)((a4 + 0x104)) = ((u35 + u34) * u32);
        t36 = 0x104;
    }
    return t36;
}

int carSteering(int a4)
{
    int t1;
    int t3;
    int t5;
    int t7;
    int t8;
    float u9;
    int t11;
    float t12;
    float u13;
    float u14;
    int t15;
    int t16;
    float u27;
    int t30;
    float u24;
    int stk[11] = {0};

    nlPushUnitMatrix();
    t1 = *(short *)((a4 + 0xA6));
    nlRotateAY((unsigned short)t1);
    t3 = *(short *)((a4 + 0xA4));
    nlRotateAX((unsigned short)t3);
    t5 = *(short *)((a4 + 0xA8));
    nlRotateAZ((unsigned short)t5);
    t7 = *(int *)((a4 + 0xC0));
    if (t7 != 0) {
        t8 = *(short *)((a4 + 0x78));
        u9 = *(float *)(((short)((short)t8 * (short)0xA8) + 0xC0A26C0));
        nlTranslate(0.0f, 0.0f, (-u9));
        t11 = *(int *)((a4 + 0xC0));
        t12 = nlTan(t11);
        u13 = *(float *)((a4 + 0xCC));
        u14 = *(float *)((a4 + 0xCC));
        t15 = nlArcTan2((u14 * (1.0f / _builtin_sqrtf(((u13 * u13) + (u9 / t12) * (u9 / t12))))), (((u9 / t12) < 0.0f ? -(u9 / t12) : (u9 / t12)) * (1.0f / _builtin_sqrtf(((u13 * u13) + (u9 / t12) * (u9 / t12))))));
        t16 = t15;
        if (0.0f > (u9 / t12)) {
            t16 = (-t15);
        }
        nlRotateAY(t16);
        nlTranslate(0.0f, 0.0f, u9);
        u24 = (1.0f / _builtin_sqrtf(((u13 * u13) + (u9 / t12) * (u9 / t12))));
    }
    getYXZrot((0xA4 + a4));
    *(float *)(((int)stk + 8)) = 0.0f;
    *(float *)(((int)stk + 4)) = 0.0f;
    u27 = *(float *)((a4 + 0xC4));
    *(float *)(((int)stk + 12)) = u27;
    FUN_0c077210(((int)stk + 4), ((int)stk + 4));
    nlPopMatrix(0x1);
    t30 = nlAddVector((0x98 + a4), ((int)stk + 4));
    return t30;
}

int getSteering(int a4, int a5)
{
    int t1;
    int t3;
    int t5;
    int t7;
    int t8;
    int t9;
    float u13;
    int t14;
    float u15;
    int t16;
    int t17;
    int t18;
    int t21;
    int t19;
    int t24;
    int t27;
    int t25;
    int stk[8] = {0};

    *(unsigned int *)(((int)stk + 4)) = a5;
    nlPushUnitMatrix();
    t1 = *(short *)((a4 + 0xA8));
    nlRotateAZ((-(unsigned short)t1));
    t3 = *(short *)((a4 + 0xA4));
    nlRotateAX((-(unsigned short)t3));
    t5 = *(short *)((a4 + 0xA6));
    nlRotateAY((-(unsigned short)t5));
    t7 = *(int *)(((0xE0 + a4) + 0x8));
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = t7;
    t8 = *(int *)(((0xE0 + a4) + 0x4));
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = t8;
    t9 = *(int *)(((0xE0 + a4) + 0x0));
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t9;
    nlSubVector((((int)stk + 4) + 0x4), (0x8C + a4));
    FUN_0c077210((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x4));
    nlPopMatrix(0x1);
    u13 = *(float *)(((int)stk + 16));
    t14 = *(int *)(((int)stk + 4));
    u15 = *(float *)(((int)stk + 8));
    t16 = nlArcTan2(u15, u13);
    *(unsigned int *)((t14 + 0x0)) = (short)t16;
    t17 = *(int *)(((int)stk + 4));
    t18 = *(int *)((t17 + 0x0));
    t21 = 0xFFFFEC00;
    if ((int)(int)((float)t18 * 0.599999964f) < (int)0xFFFFEC00) {
    } else {
        t19 = (int)((float)t18 * 0.599999964f);
        if ((int)(int)((float)t18 * 0.599999964f) > (int)0x1400) {
            t19 = 0x1400;
        }
        t21 = t19;
    }
    t24 = *(int *)((a4 + 0xC0));
    t27 = 0xFFFFFFC0;
    if ((int)(int)((float)(t21 - t24) * 0.399999976f) < (int)0xFFFFFFC0) {
    } else {
        t25 = (int)((float)(t21 - t24) * 0.399999976f);
        if ((int)(int)((float)(t21 - t24) * 0.399999976f) > (int)0x40) {
            t25 = 0x40;
        }
        t27 = t25;
    }
    return t27;
}

int getYXZrot(int a4)
{
    float u2;
    float u3;
    int t4;
    float u5;
    float u6;
    float u7;
    int t8;
    int t10;
    int t12;
    float u16;
    float u17;
    int t18;
    int t19;
    int stk[22] = {0};

    nlPushMatrix(0x0);
    nlGetMatrix(((int)stk + 4));
    u2 = *(float *)(((int)stk + 44));
    u3 = *(float *)(((int)stk + 36));
    t4 = nlArcTan2(u3, u2);
    *(unsigned short *)((a4 + 0x2)) = t4;
    u5 = *(float *)(((int)stk + 36));
    u6 = *(float *)(((int)stk + 44));
    u7 = *(float *)(((int)stk + 40));
    t8 = nlArcTan2(u7, _builtin_sqrtf(((u6 * u6) + u5 * u5)));
    *(unsigned short *)((a4 + 0x0)) = (-t8);
    nlUnitMatrix();
    t10 = *(short *)((a4 + 0x0));
    nlRotateAX((-(unsigned short)t10));
    t12 = *(short *)((a4 + 0x2));
    nlRotateAY((-(unsigned short)t12));
    nlMultiMatrix(((int)stk + 4));
    nlGetMatrix(((int)stk + 4));
    u16 = *(float *)(((int)stk + 4));
    u17 = *(float *)(((int)stk + 8));
    t18 = nlArcTan2(u17, u16);
    *(unsigned short *)((a4 + 0x4)) = t18;
    t19 = nlPopMatrix(0x1);
    return t19;
}

int kmiCreateRegionArray(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t5;
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
    int t30;
    int t24;
    int t27;
    int t25;
    int t51;
    int t52;
    int t54;
    int t63;
    int t65;
    int t67;
    int t69;
    int t71;
    int t73;
    int t74;
    int t75;
    int t76;
    int t77;
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    int t83;
    int t84;
    int t85;
    int t86;
    int t87;
    int t88;
    int t89;
    int t90;
    int t91;
    int t92;
    int t93;
    int t94;
    int t220;
    int t95;
    int t96;
    int t97;
    int t98;
    int t99;
    int t100;
    int t105;
    int t106;
    int t107;
    int t108;
    int t114;
    int t129;
    int t115;
    int t116;
    int t124;
    int t117;
    int t118;
    int t119;
    int t131;
    int t132;
    int t133;
    int t134;
    int t135;
    int t138;
    int t136;
    int t139;
    int t140;
    int t141;
    int t142;
    int t143;
    int t144;
    int t145;
    int t146;
    int t147;
    int t148;
    int t150;
    int t151;
    int t152;
    int t153;
    int t154;
    int t155;
    int t156;
    int t157;
    int t163;
    int t164;
    int t165;
    int t166;
    int t173;
    int t174;
    int t175;
    int t176;
    int t177;
    int t178;
    int t179;
    int t180;
    int t181;
    int t182;
    int t184;
    int t185;
    int t186;
    int t187;
    int t188;
    int t189;
    int t190;
    int t191;
    int t192;
    int t193;
    int t194;
    int t195;
    int t196;
    int t197;
    int t198;
    int t202;
    int t203;
    int t204;
    int t205;
    int t207;
    int t209;
    int t211;
    int t216;
    int t219;
    int t217;
    int t213;
    int stk[57] = {0};

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 88)) = 0x0;
    t0 = *(int *)0xC2EA844;
    t1 = 0x0;
    if (t0 == 1) {
        t1 = 0x1;
    }
    t3 = *(int *)0xC2EA88C;
    if (t3 == 0) {
        t4 = *(int *)(((int)stk + 4));
        t5 = *(int *)(((int)stk + 8));
        FUN_0c15e85c(t5, t4, a8);
    }
    t14 = *(int *)(((int)stk + 8));
    t15 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 8)) = (t14 * t15);
    t16 = *(int *)(((int)stk + 16));
    t17 = *(int *)(((((a8 << 2) << 2) << 1) + 0xC2EAAF0));
    *(unsigned int *)(((int)stk + 12)) = ((t16 * (((((t14 * t15) << 1) + (t14 * t15)) << 2) << 1)) + t17);
    t18 = *(int *)0xC2EA684;
    if ((t18 & 32) != 0) {
        t19 = *(int *)0xC2EAAE4;
        if (t19 != 0) {
            t20 = *(int *)(((((a8 << 2) << 2) << 1) + 0xC2EAAEC));
            t21 = *(int *)(((0xC2EAAEC + (((a8 << 2) << 2) << 1)) + 0x4));
            t22 = kmiCreateDummyTranslucentObject((t21 + ((((((t14 * t15) << 1) + (t14 * t15)) << 2) << 1) << 2)), t20);
            *(unsigned int *)(((int)stk + 24)) = t22;
            t23 = *(int *)0xC2EAB30;
            t30 = 0x0;
            if (t23 == 0) {
                t24 = *(int *)0xC2EAB38;
                t27 = 0x0;
                if (t24 != 0) {
                    t25 = 0x0;
                    if (t1 != 0) {
                        t25 = 0x1;
                    }
                    t27 = t25;
                }
                t30 = t27;
            }
            *(unsigned int *)(((int)stk + 88)) = t30;
        }
    }
    t51 = *(int *)0xC2EA684;
    if ((t51 & 128) != 0) {
        t52 = *(int *)(((int)stk + 12));
        kmiCreateDummyRegionforAvoidCacheBug();
        t54 = *(int *)(((int)stk + 12));
        *(unsigned int *)(((int)stk + 12)) = (t54 + 0x18);
    }
    t63 = *(int *)0xC2EAB30;
    if (t63 == 0) {
        *(unsigned int *)(((int)stk + 76)) = 0x80000000;
    } else {
        *(unsigned int *)(((int)stk + 76)) = 0x0;
    }
    t65 = *(int *)0xC2EAB34;
    if (t65 == 0) {
        *(unsigned int *)(((int)stk + 80)) = 0x80000000;
    } else {
        *(unsigned int *)(((int)stk + 80)) = 0x0;
    }
    t67 = *(int *)0xC2EAB38;
    if (t67 == 0) {
        *(unsigned int *)(((int)stk + 84)) = 0x80000000;
    } else {
        *(unsigned int *)(((int)stk + 84)) = 0x0;
    }
    t69 = *(int *)0xC2EAB3C;
    if (t69 == 0) {
        *(unsigned int *)(((int)stk + 96)) = 0x80000000;
    } else {
        *(unsigned int *)(((int)stk + 96)) = 0x0;
    }
    t71 = *(int *)0xC2EAB40;
    if (t71 == 0) {
        *(unsigned int *)(((int)stk + 92)) = 0x80000000;
    } else {
        *(unsigned int *)(((int)stk + 92)) = 0x0;
    }
    t73 = *(int *)0xC2EAB30;
    t74 = *(int *)((0xC1784A4 + (t73 << 2)));
    *(unsigned int *)(((int)stk + 56)) = (t74 << 2);
    t75 = *(int *)0xC2EAB34;
    t76 = *(int *)((0xC1784A4 + (t75 << 2)));
    *(unsigned int *)(((int)stk + 68)) = (t76 << 2);
    t77 = *(int *)0xC2EAB38;
    t78 = *(int *)((0xC1784A4 + (t77 << 2)));
    *(unsigned int *)(((int)stk + 64)) = (t78 << 2);
    t79 = *(int *)0xC2EAB3C;
    t80 = *(int *)((0xC1784A4 + (t79 << 2)));
    *(unsigned int *)(((int)stk + 60)) = (t80 << 2);
    t81 = *(int *)0xC2EAB40;
    t82 = *(int *)((0xC1784A4 + (t81 << 2)));
    *(unsigned int *)(((int)stk + 72)) = (t82 << 2);
    t83 = *(int *)(((((a8 << 2) << 2) << 1) + 0xC2EAAF8));
    *(unsigned int *)(((int)stk + 28)) = t83;
    t84 = *(int *)0xC2EAB30;
    t85 = *(int *)(((int)stk + 8));
    t86 = *(int *)((0xC1784A4 + (t84 << 2)));
    t87 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 36)) = (((t86 * t85) << 2) + t87);
    t88 = *(int *)0xC2EAB34;
    t89 = *(int *)((0xC1784A4 + (t88 << 2)));
    *(unsigned int *)(((int)stk + 32)) = ((((t86 * t85) << 2) + t87) + ((t89 * t85) << 2));
    t90 = *(int *)0xC2EAB38;
    t91 = *(int *)((0xC1784A4 + (t90 << 2)));
    t92 = *(int *)(((int)stk + 32));
    *(unsigned int *)(((int)stk + 40)) = (((t91 * t85) << 2) + t92);
    t93 = *(int *)0xC2EAB3C;
    t94 = *(int *)((0xC1784A4 + (t93 << 2)));
    *(unsigned int *)(((int)stk + 48)) = ((((t91 * t85) << 2) + t92) + ((t94 * t85) << 2));
    *(unsigned int *)(((int)stk + 52)) = (t85 - 1);
    *(unsigned int *)(((int)stk + 44)) = ((t1 & 0x1) << 29);
    t220 = (t93 << 2);
    if ((unsigned int)0x0 >= (unsigned int)t85) {
    } else {
        t95 = 0x0;
        t96 = 0x0;
        for (;;) {
            if (a9 != 0) {
                if (a9 != 1) {
                } else {
                    t95 = 0xC2EAADC;
                    t97 = *(int *)((t95 + 0x0));
                    t98 = (int)((unsigned int)t96 % (unsigned int)t97);
                    *(unsigned int *)(((int)stk + 16)) = t98;
                    t99 = *(int *)((t95 + 0x0));
                    t100 = (int)((unsigned int)t96 / (unsigned int)t99);
                    *(unsigned int *)(((int)stk + 20)) = t100;
                }
            } else {
                t95 = 0xC080FC4;
                t105 = *(int *)0xC2EAAE0;
                t106 = (int)((unsigned int)t96 / (unsigned int)t105);
                t95 = 0xC2EAAE0;
                *(unsigned int *)(((int)stk + 16)) = t106;
                t107 = *(int *)((t95 + 0x0));
                t95 = 0xC081134;
                t108 = (int)((unsigned int)t96 % (unsigned int)t107);
                *(unsigned int *)(((int)stk + 20)) = t108;
            }
            t95 = 0xC2EA848;
            t114 = *(int *)((t95 + 0x0));
            t129 = 0x0;
            if (t114 == 1) {
                t115 = *(int *)(((int)stk + 16));
                t116 = *(int *)0xC2EA84C;
                t124 = 0x80000000;
                if ((unsigned int)t116 >= (unsigned int)t115) {
                    t117 = *(int *)(((int)stk + 20));
                    t118 = *(int *)0xC2EA850;
                    t119 = 0x0;
                    if ((unsigned int)t118 < (unsigned int)t117) {
                        t119 = 0x80000000;
                    }
                    t124 = t119;
                }
                t129 = t124;
            }
            t131 = *(int *)0xC2EAADC;
            t95 = t131;
            t132 = *(int *)(((int)stk + 20));
            t133 = *(int *)(((int)stk + 16));
            t134 = *(int *)(((int)stk + 52));
            t135 = (t132 * t95);
            t95 = t134;
            t138 = ((((t96 == t95)) ? 1 : 0) & 0x1);
            t136 = (int)(((unsigned int)t138 >> 1) | ((unsigned int)t138 << 31));
            t95 = t136;
            t139 = *(int *)(((int)stk + 44));
            t95 = (t95 | ((t132 & 0x3F) << 8));
            t95 = (t95 | ((t133 & 0x3F) << 2));
            t95 = (t95 | t139);
            *(unsigned int *)(((int)stk + 172)) = t95;
            t140 = *(int *)(((int)stk + 56));
            t141 = *(int *)(((int)stk + 28));
            t95 = t141;
            t142 = *(int *)(((int)stk + 76));
            *(unsigned int *)(((int)stk + 176)) = ((((t140 * (t135 + t133)) + t95) | t142) | t129);
            t143 = *(int *)(((int)stk + 68));
            t144 = *(int *)(((int)stk + 36));
            t145 = *(int *)(((int)stk + 80));
            *(unsigned int *)(((int)stk + 180)) = ((((t143 * (t135 + t133)) + t144) | t145) | t129);
            t146 = *(int *)(((int)stk + 64));
            t95 = t146;
            t147 = *(int *)(((int)stk + 32));
            t148 = *(int *)(((int)stk + 84));
            t95 = (t95 * (t135 + t133));
            t95 = (t95 + t147);
            t95 = (t95 | t148);
            t95 = (t95 | t129);
            *(unsigned int *)(((int)stk + 184)) = t95;
            t150 = *(int *)(((int)stk + 60));
            t151 = *(int *)(((int)stk + 40));
            t95 = t151;
            t152 = *(int *)(((int)stk + 96));
            *(unsigned int *)(((int)stk + 188)) = ((((t150 * (t135 + t133)) + t95) | t152) | t129);
            t153 = *(int *)0xC1784B4;
            if (t153 != 0) {
                t154 = *(int *)(((int)stk + 184));
                *(unsigned int *)(((int)stk + 192)) = t154;
            } else {
                t155 = *(int *)(((int)stk + 48));
                t95 = t155;
                t156 = *(int *)(((int)stk + 72));
                t157 = *(int *)(((int)stk + 92));
                *(unsigned int *)(((int)stk + 192)) = ((((t156 * (t135 + t133)) + t95) | t157) | t129);
            }
            t163 = *(int *)0xC2EA854;
            t95 = t163;
            if (t95 != 0) {
                t95 = 0xC2EA858;
                t164 = *(int *)((t95 + 0x0));
                if (t164 == 1) {
                    t165 = *(int *)(((int)stk + 180));
                    *(unsigned int *)(((0xB8 + ((int)stk + 4)) + 0x0)) = t165;
                } else {
                    t166 = *(int *)(((int)stk + 188));
                    *(unsigned int *)(((int)stk + 180)) = t166;
                }
            }
            t95 = 0xC2EA684;
            t173 = *(int *)((t95 + 0x0));
            if ((t173 & 32) == 0) {
                t174 = *(int *)(((int)stk + 12));
                t175 = kmiCopyToPVRMemory((((((t96 << 1) + t96) << 2) << 1) + t174));
                t217 = t175;
            } else {
                t176 = *(int *)0xC2EAAE4;
                t177 = *(int *)(((int)stk + 172));
                if (t176 == 0) {
                    *(unsigned int *)(((int)stk + 148)) = t177;
                    t178 = *(int *)(((int)stk + 172));
                    *(unsigned int *)(((int)stk + 172)) = (t178 & 0x7FFFFFFF);
                    t179 = *(int *)(((int)stk + 172));
                    t95 = (t179 & 0xBFFFFFFF);
                    t95 = (t95 | 0x10000000);
                    *(unsigned int *)(((int)stk + 172)) = t95;
                    t180 = *(int *)(((int)stk + 148));
                    t95 = t180;
                    t95 = (t95 | 0x40000000);
                    *(unsigned int *)(((int)stk + 148)) = t95;
                    t95 = 0xEFFFFFFF;
                    t181 = *(int *)(((int)stk + 148));
                    *(unsigned int *)(((0x90 + ((int)stk + 4)) + 0x0)) = (t181 & t95);
                    *(unsigned int *)(((int)stk + 152)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 156)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 160)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 164)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 168)) = 0x80000000;
                    t182 = *(int *)(((int)stk + 12));
                    *(unsigned int *)(((int)stk + 4)) = (((((t96 << 1) + t96) << 2) << 2) + t182);
                    kmiCopyToPVRMemory((((((t96 << 1) + t96) << 2) << 2) + t182));
                    t184 = *(int *)(((int)stk + 4));
                    t213 = (t184 + 0x18);
                } else {
                    t95 = 0xA8;
                    *(unsigned int *)(((int)stk + 148)) = t177;
                    *(unsigned int *)(((int)stk + 124)) = t177;
                    *(unsigned int *)(((int)stk + 100)) = t177;
                    t95 = (t95 + ((int)stk + 4));
                    t185 = *(int *)(((int)stk + 172));
                    *(unsigned int *)(((int)stk + 172)) = (t185 & 0x7FFFFFFF);
                    t186 = *(int *)(((int)stk + 148));
                    *(unsigned int *)(((int)stk + 148)) = (t186 & 0x7FFFFFFF);
                    t187 = *(int *)(((int)stk + 124));
                    *(unsigned int *)(((int)stk + 124)) = (t187 & 0x7FFFFFFF);
                    t188 = *(int *)(((int)stk + 172));
                    *(unsigned int *)((t95 + 0x0)) = (t188 & 0xBFFFFFFF);
                    t189 = *(int *)(((int)stk + 148));
                    t95 = t189;
                    t95 = (t95 | 0x40000000);
                    *(unsigned int *)(((int)stk + 148)) = t95;
                    t190 = *(int *)(((int)stk + 124));
                    t95 = t190;
                    t95 = (t95 | 0x40000000);
                    *(unsigned int *)(((int)stk + 124)) = t95;
                    t191 = *(int *)(((int)stk + 100));
                    t95 = t191;
                    t95 = (t95 | 0x40000000);
                    *(unsigned int *)(((int)stk + 100)) = t95;
                    t192 = *(int *)(((int)stk + 172));
                    t95 = t192;
                    t95 = (t95 | 0x10000000);
                    *(unsigned int *)(((int)stk + 172)) = t95;
                    t193 = *(int *)(((int)stk + 148));
                    t95 = t193;
                    t95 = (t95 | 0x10000000);
                    *(unsigned int *)(((int)stk + 148)) = t95;
                    t194 = *(int *)(((int)stk + 124));
                    t95 = t194;
                    t95 = (t95 | 0x10000000);
                    *(unsigned int *)(((int)stk + 124)) = t95;
                    t195 = *(int *)(((int)stk + 100));
                    t95 = 0xEFFFFFFF;
                    *(unsigned int *)(((((int)stk + 4) + 0x60) + 0x0)) = (t195 & t95);
                    t196 = *(int *)(((int)stk + 148));
                    *(unsigned int *)(((0x90 + ((int)stk + 4)) + 0x0)) = (t196 & 0xDFFFFFFF);
                    t197 = *(int *)(((int)stk + 88));
                    if (t197 != 0) {
                        t198 = *(int *)(((int)stk + 24));
                        *(unsigned int *)(((int)stk + 176)) = t198;
                    }
                    *(unsigned int *)(((int)stk + 152)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 156)) = 0x80000000;
                    t202 = *(int *)(((int)stk + 24));
                    t95 = t202;
                    *(unsigned int *)(((int)stk + 160)) = t95;
                    *(unsigned int *)(((int)stk + 164)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 168)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 128)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 132)) = 0x80000000;
                    t203 = *(int *)(((int)stk + 184));
                    t95 = t203;
                    *(unsigned int *)(((int)stk + 136)) = t95;
                    t204 = *(int *)(((int)stk + 188));
                    *(unsigned int *)(((int)stk + 140)) = t204;
                    *(unsigned int *)(((int)stk + 144)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 184)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 188)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 104)) = 0x80000000;
                    t95 = t96;
                    t95 = (t95 << 1);
                    *(unsigned int *)(((int)stk + 108)) = 0x80000000;
                    t95 = (t95 + t96);
                    *(unsigned int *)(((int)stk + 112)) = 0x80000000;
                    t95 = (t95 << 2);
                    t95 = (t95 << 2);
                    *(unsigned int *)(((int)stk + 116)) = 0x80000000;
                    t95 = (t95 << 1);
                    *(unsigned int *)(((int)stk + 120)) = 0x80000000;
                    t205 = *(int *)(((int)stk + 12));
                    t95 = (t95 + t205);
                    *(unsigned int *)(((int)stk + 4)) = t95;
                    kmiCopyToPVRMemory(t95);
                    t207 = *(int *)(((int)stk + 4));
                    kmiCopyToPVRMemory((t207 + 0x18));
                    t209 = *(int *)(((int)stk + 4));
                    kmiCopyToPVRMemory((t209 + 0x30));
                    t211 = *(int *)(((int)stk + 4));
                    t213 = (t211 + 0x48);
                }
                t216 = kmiCopyToPVRMemory(t213);
                t217 = t216;
            }
            t219 = *(int *)(((int)stk + 8));
            t95 = t219;
            t96 = (t96 + 0x1);
            if ((unsigned int)t96 < (unsigned int)t95) continue;
            break;
        }
        t220 = t217;
    }
    return t220;
}

int nd_CarSel_PutCar(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t9;
    int t10;
    int t11;
    int t12;
    int t16;
    int t18;
    int t24;
    int t30;
    int t36;
    int t39;
    int stk[14] = {0};

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned short *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 12)) = a7;
    t0 = *(int *)(((int)stk + 4));
    nlPushMatrix(0x0);
    t2 = *(int *)((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0x0));
    nlObjPutUseViewMatrix(t2);
    t4 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 20)) = (t4 << 2);
    t5 = *(int *)(((int)stk + 8));
    t6 = *(int *)((0xC1309B8 + (t4 << 2)));
    t7 = *(int *)(((t5 << 2) + t6));
    nlObjPutUseViewMatrix(t7);
    t9 = *(int *)(((int)stk + 20));
    t10 = *(int *)(((int)stk + 12));
    t11 = *(int *)((t9 + 0xC1309E8));
    t12 = *(int *)(((t10 << 2) + t11));
    nlObjPutUseViewMatrix(t12);
    nlPushMatrix(0x0);
    nlTranslateV((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0x14));
    t16 = *(short *)(((int)stk + 16));
    nlRotateAX((unsigned short)t16);
    t18 = *(int *)((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0x4));
    nlObjPutUseViewMatrix(t18);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslateV((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0x20));
    nlRotateAX((unsigned short)t16);
    t24 = *(int *)((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0x8));
    nlObjPutUseViewMatrix(t24);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslateV((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0x2C));
    nlRotateAX((unsigned short)t16);
    t30 = *(int *)((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0xC));
    nlObjPutUseViewMatrix(t30);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslateV((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0x38));
    nlRotateAX((unsigned short)t16);
    t36 = *(int *)((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0x10));
    nlObjPutUseViewMatrix(t36);
    nlPopMatrix(0x1);
    t39 = nlPopMatrix(0x1);
    return t39;
}

int write_dir(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;
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
    int t18;
    int t20;
    int t21;
    int t22;
    int t23;
    int t27;
    int t29;
    int t3;
    int t5;
    int t6;
    int stk[12] = {0};

    t0 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
    t1 = *(int *)((t0 + 0x18));
    t2 = *(int *)((t0 + 0x14));
    *(unsigned int *)(((int)stk + 8)) = t1;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    t4 = 0x0;
    t7 = (unsigned short)t2;
    for (;;) {
        t8 = *(int *)(((int)stk + 8));
        if ((int)t4 >= (int)t8) {
            t9 = *(int *)(((int)stk + 12));
            if (t9 != 0) {
                t10 = write_fat(a4);
                if ((int)t10 >= 0) {
                    t11 = write_sys(a4);
                    if ((int)t11 < 0) {
                        return t11;
                    }
                    return 0x0;
                }
                return t10;
            }
            return 0x0;
        }
        t12 = *(signed char *)((((((a4 * 0x148) + 0xC2EE990) + 0x48) + t4) + 0x0));
        if (t12 != 0) {
            *(unsigned int *)(((int)stk + 4)) = ((t4 << 8) << 1);
            for (;;) {
                t13 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x28));
                t14 = *(int *)(((int)stk + 4));
                t15 = vmsfs_write_retry(a4, t7, (t13 + t14));
                if (t15 == 0) {
                    break;
                }
                if (t15 != 0xFFFFFF01) {
                    *(unsigned int *)(((int)stk + 12)) = 0x1;
                    t16 = get_fat(a4, t7);
                    t5 = (unsigned short)t16;
                    set_fat(a4, t7);
                    t18 = search_fat_dir(a4, 0xFFFC);
                    t6 = t18;
                    if ((int)t6 < 0) {
                        return 0xFFFFFF04;
                    }
                    set_fat(a4, t6);
                    if (t4 == 0) {
                        t20 = *(int *)0xC2EE98C;
                        t21 = *(int *)((t20 + 0x10));
                        t22 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                        t23 = ((int (*)(int, int, int))(t21))(t22, 0x4A, t6);
                    } else {
                        set_fat(a4, t3);
                    }
                    t3 = t7;
                    t7 = t6;
                    continue;
                }
                return t15;
            }
            t27 = get_fat(a4, t7);
            t3 = t7;
            *(unsigned char *)((((((a4 * 0x148) + 0xC2EE990) + 0x48) + t4) + 0x0)) = 0x0;
            t5 = (unsigned short)t27;
            t7 = t5;
            t4 = (t4 + 0x1);
            continue;
        }
        t29 = get_fat(a4, t7);
        t3 = t7;
        t5 = (unsigned short)t29;
        t7 = t5;
        t4 = (t4 + 0x1);
    }
}
