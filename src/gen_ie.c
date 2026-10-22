/* Straight-line functions with calls and guards (batch gen_ie): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckSoftReset(void);
int FUN_0c074300(int);
int FUN_0c074680(int, int, int);
int FUN_0c075700(int, int);
int Init_Fog(void);
int PAL_FreeTexture(void);
int frameFlip(void);
int gdc_FileLoad(int, int, int);
int getSwitch(void);
int nlInitPrint(void);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutSetReplaceTextureDirName(int, int);
int nlSetCommonTextureOffset(int);
extern int nlSprPut();
int InitSys(void);

int InitSys(void)
{
    int t3;
    int t4;
    int t8;
    int t9;
    int t13;
    int t14;
    float u15;
    float u16;
    float u17;
    int t18;
    int t19;
    float u20;
    float u21;
    float u22;
    float u23;
    int t24;
    float u25;
    float u26;
    int t27;
    int t28;
    int t31;
    int t32;
    int t35;
    int t36;
    int t37;
    int t44;
    int t45;
    float u47;
    int t48;
    int t49;
    int t50;
    int t53;
    float u54;
    int t55;
    int t56;
    int t57;
    int t60;
    int t61;
    int t64;
    int t67;
    int t70;
    int t73;
    int t76;
    int t79;
    int t82;
    int t85;
    int t86;
    float u87;
    int t88;
    int t89;
    int t90;
    int t91;
    int t92;
    int t94;
    int t96;
    int t97;
    int t100;
    int t101;
    int t102;
    int t103;
    int t112;
    int t113;
    int t114;
    int t115;
    int t116;
    int t117;
    float u118;
    float u119;
    int t120;
    float u121;
    int t122;
    int t123;
    int t124;
    int t125;
    float u126;
    int t127;
    int t128;
    int t129;
    int t130;
    int t133;
    int t134;
    float u135;
    float u136;
    int t137;
    float u138;
    int t139;
    int t140;
    int t141;
    int t142;
    float u143;
    int t144;
    int t145;
    int t146;
    int t147;
    int t158;
    int t159;
    int t160;
    int t161;
    int t162;
    int t163;
    int t166;
    int t169;
    int t172;
    int t175;
    int t176;
    int t177;
    float u178;
    float u179;
    float u180;
    float u181;
    int t182;
    float u183;
    float u184;
    int t185;
    int t186;
    int t189;
    int t190;
    int t193;
    int t194;
    int t195;
    int t202;
    int t203;
    float u205;
    int t206;
    int t207;
    int t208;
    int t211;
    float u212;
    int t213;
    int t214;
    int t215;
    int t218;
    int t219;
    int t222;
    int t225;
    int t228;
    int t231;
    int t234;
    int t237;
    int t240;
    int t243;
    int t244;
    float u245;
    int t246;
    int t247;
    int t248;
    int t249;
    int t250;
    int t252;
    int t254;
    int t255;
    int t258;
    int t259;
    int t260;
    int t261;
    int t274;
    int t275;
    int t282;
    int t280;
    int t278;
    int t276;
    int t284;
    int t285;
    int t286;
    int t287;
    int t288;
    int t289;
    int t290;
    int t291;
    int t294;
    int t297;
    int t300;
    int t303;
    int t304;
    int t305;
    float u306;
    float u307;
    float u308;
    float u309;
    int t310;
    float u311;
    float u312;
    int t313;
    int t314;
    int t317;
    int t318;
    int t321;
    int t322;
    int t323;
    int t330;
    int t331;
    float u333;
    int t334;
    int t335;
    int t336;
    int t339;
    float u340;
    int t341;
    int t342;
    int t343;
    int t346;
    int t347;
    int t350;
    int t353;
    int t356;
    int t359;
    int t362;
    int t365;
    int t368;
    int t371;
    int t372;
    float u373;
    int t374;
    int t375;
    int t376;
    int t377;
    int t378;
    int t380;
    int t382;
    int t383;
    int t386;
    int t387;
    int t388;
    int t389;
    int t402;
    int t403;
    int t5;
    int t6;
    float u10;
    float u11;
    float u12;
    int t83;
    int t77;
    int t71;
    int t65;
    int t173;
    int t170;
    int t167;
    int t164;
    int t241;
    int t235;
    int t229;
    int t223;
    int t301;
    int t298;
    int t295;
    int t292;
    int t369;
    int t363;
    int t357;
    int t351;

    Init_Fog();
    FUN_0c074680(0xFFFFC500, 0xFFFFC500, 0xFFFFC500);
    nlSetCommonTextureOffset(0x0);
    t3 = nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
    t4 = t3;
    t8 = 0xC1EE24C;
    t9 = 0xFFFFC500;
    for (;;) {
        t13 = *(int *)0xC1EE160;
        if ((int)t13 < (int)0xA) {
            t9 = 0xC02A2FC;
            t14 = getSwitch();
            t4 = t14;
            t4 = 0xC02ACB4;
            t8 = 0xC1EE164;
            u15 = *(float *)((t4 + 0x0));
            u10 = u15;
            t4 = 0xC02ACB8;
            u16 = *(float *)((t4 + 0x0));
            u11 = u16;
            t4 = 0xC02ACBC;
            u17 = *(float *)((t4 + 0x0));
            u12 = u17;
            t18 = *(int *)0xC1EE160;
            t4 = t18;
            t9 = 0xC1EE16C;
            t5 = 0x80;
            t6 = 0xC1EE168;
            if (t4 != 0) {
                if (t4 != 1) {
                    if (t4 == 2) {
                        t4 = 0x4;
                        t19 = *(int *)((t6 + 0x0));
                        *(unsigned int *)((t6 + 0x0)) = (t19 - 1);
                        *(unsigned int *)((t9 + 0x0)) = 0xCA;
                        *(float *)((t9 + t4)) = u11;
                        t4 = 0xC02AEA0;
                        u20 = *(float *)((t4 + 0x0));
                        t4 = 0x8;
                        *(float *)((t9 + t4)) = u20;
                        t4 = 0xC02AEA4;
                        u21 = *(float *)((t4 + 0x0));
                        t4 = 0xC;
                        *(float *)((t9 + t4)) = u21;
                        t4 = 0xC02AEA8;
                        u22 = *(float *)((t4 + 0x0));
                        t4 = 0x10;
                        *(float *)((t9 + t4)) = u22;
                        t4 = 0xC02AEAC;
                        u23 = *(float *)((t4 + 0x0));
                        t4 = 0x14;
                        *(float *)((t9 + t4)) = u23;
                        t24 = ((int (*)(int))(nlSprPut))(0xC1EE16C);
                        t4 = t24;
                        t4 = 0x14;
                        *(float *)((t9 + t4)) = 1.0f;
                        t4 = 0x10;
                        *(float *)((t9 + t4)) = 1.0f;
                        t4 = 0xC;
                        *(float *)((t9 + t4)) = u10;
                        t4 = 0xC02AEB4;
                        *(unsigned int *)((t9 + 0x0)) = 0xC9;
                        u25 = *(float *)((t4 + 0x0));
                        t4 = 0x4;
                        *(float *)((t9 + t4)) = u25;
                        t4 = 0xC02AEB8;
                        u26 = *(float *)((t4 + 0x0));
                        t4 = 0x8;
                        *(float *)((t9 + t4)) = u26;
                        t27 = ((int (*)(int))(nlSprPut))(0xC1EE16C);
                        t4 = t27;
                        t28 = *(int *)0xC1EE250;
                        if (t28 != 0) {
                            *(unsigned int *)((t6 + 0x0)) = 0x708;
                        }
                        t31 = *(int *)0xC1EE250;
                        if ((t31 & 0x40) != 0) {
                            t32 = *(int *)((t8 + 0x0));
                            *(unsigned int *)((t8 + 0x0)) = (t32 - 1);
                            if ((int)(t32 - 1) < 0) {
                                *(unsigned int *)((t8 + 0x0)) = 0x2;
                            }
                        } else {
                            t35 = *(int *)0xC1EE250;
                            if ((t35 & t5) != 0) {
                                t36 = *(int *)((t8 + 0x0));
                                t4 = 0x3;
                                t37 = (int)((int)(t36 + 0x1) % (int)t4);
                                t4 = t37;
                                *(unsigned int *)((t8 + 0x0)) = t4;
                            }
                        }
                        t44 = *(int *)((t8 + 0x0));
                        t45 = 0xC3;
                        if (t44 == 0) {
                            t45 = 0xC4;
                        }
                        t4 = 0xC02AEC0;
                        *(unsigned int *)((t9 + 0x0)) = t45;
                        u47 = *(float *)((t4 + 0x0));
                        t4 = 0x4;
                        *(float *)((t9 + t4)) = u47;
                        t4 = 0x8;
                        *(float *)((t9 + t4)) = u12;
                        t48 = ((int (*)(int))(nlSprPut))(0xC1EE16C);
                        t4 = t48;
                        t49 = *(int *)((t8 + 0x0));
                        t4 = t49;
                        t50 = 0xC5;
                        if (t4 == 1) {
                            t50 = 0xC6;
                        }
                        t4 = 0x4;
                        *(unsigned int *)((t9 + 0x0)) = t50;
                        *(float *)((t9 + t4)) = u11;
                        t4 = 0x8;
                        *(float *)((t9 + t4)) = u12;
                        t53 = ((int (*)(int))(nlSprPut))(0xC1EE16C);
                        t4 = t53;
                        t4 = 0xC02AF80;
                        u54 = *(float *)((t4 + 0x0));
                        t55 = *(int *)0xC2A11C0;
                        t4 = t55;
                        t56 = *(int *)((t8 + 0x0));
                        if (t4 != 1) {
                            if (t4 != 2) {
                                if (t4 != 3) {
                                    if (t4 != 4) {
                                        t4 = t56;
                                        t57 = 0xD0;
                                        if (t4 == 2) {
                                            t57 = 0xD1;
                                        }
                                        t4 = 0x4;
                                        *(unsigned int *)((t9 + 0x0)) = t57;
                                        *(float *)((t9 + t4)) = u54;
                                        t4 = 0x8;
                                        *(float *)((t9 + t4)) = u12;
                                        t60 = ((int (*)(int))(nlSprPut))(0xC1EE16C);
                                        t4 = t60;
                                        t65 = 0xC08AD1A;
                                    } else {
                                        t4 = t56;
                                        t61 = 0xDF;
                                        if (t4 == 2) {
                                            t61 = 0xE0;
                                        }
                                        t4 = 0x4;
                                        *(unsigned int *)((t9 + 0x0)) = t61;
                                        *(float *)((t9 + t4)) = u54;
                                        t4 = 0x8;
                                        *(float *)((t9 + t4)) = u12;
                                        t64 = ((int (*)(int))(nlSprPut))(0xC1EE16C);
                                        t4 = t64;
                                        t65 = 0xC08AD2C;
                                    }
                                    t71 = t65;
                                } else {
                                    t4 = t56;
                                    t67 = 0xD5;
                                    if (t4 == 2) {
                                        t67 = 0xD6;
                                    }
                                    t4 = 0x4;
                                    *(unsigned int *)((t9 + 0x0)) = t67;
                                    *(float *)((t9 + t4)) = u54;
                                    t4 = 0x8;
                                    *(float *)((t9 + t4)) = u12;
                                    t70 = ((int (*)(int))(nlSprPut))(0xC1EE16C);
                                    t4 = t70;
                                    t71 = 0xC08AD20;
                                }
                                t77 = t71;
                            } else {
                                t4 = t56;
                                t73 = 0xDA;
                                if (t4 == 2) {
                                    t73 = 0xDB;
                                }
                                t4 = 0x4;
                                *(unsigned int *)((t9 + 0x0)) = t73;
                                *(float *)((t9 + t4)) = u54;
                                t4 = 0x8;
                                *(float *)((t9 + t4)) = u12;
                                t76 = ((int (*)(int))(nlSprPut))(0xC1EE16C);
                                t4 = t76;
                                t77 = 0xC08AD26;
                            }
                            t83 = t77;
                        } else {
                            t4 = t56;
                            t79 = 0xD0;
                            if (t4 == 2) {
                                t79 = 0xD1;
                            }
                            t4 = 0x4;
                            *(unsigned int *)((t9 + 0x0)) = t79;
                            *(float *)((t9 + t4)) = u54;
                            t4 = 0x8;
                            *(float *)((t9 + t4)) = u12;
                            t82 = ((int (*)(int))(nlSprPut))(0xC1EE16C);
                            t4 = t82;
                            t83 = 0xC08AD1A;
                        }
                        t85 = *(int *)((t8 + 0x0));
                        t4 = t85;
                        t4 = (t4 << 1);
                        t86 = *(short *)((t83 + t4));
                        t4 = 0x4;
                        *(unsigned int *)((t9 + 0x0)) = (unsigned short)t86;
                        *(float *)((t9 + t4)) = u11;
                        t4 = 0xC02B0B0;
                        u87 = *(float *)((t4 + 0x0));
                        t4 = 0x8;
                        *(float *)((t9 + t4)) = u87;
                        t88 = ((int (*)(int))(nlSprPut))(0xC1EE16C);
                        t4 = t88;
                        t9 = 0xC1EE21C;
                        t89 = *(int *)0xC1EE250;
                        if ((t89 & 0xC) != 0) {
                            t90 = PAL_FreeTexture();
                            t4 = t90;
                            t91 = *(int *)((t8 + 0x0));
                            t4 = t91;
                            if (t4 != 0) {
                                if (t4 != 1) {
                                    if (t4 != 2) {
                                    } else {
                                        *(unsigned int *)0xC1EE160 = 0x3;
                                        *(unsigned int *)((t6 + 0x0)) = 0x12C;
                                        t92 = FUN_0c075700(0x9, t5);
                                        t4 = t92;
                                    }
                                } else {
                                    *(unsigned int *)0xC1EE160 = 0xA;
                                    *(unsigned int *)((t9 + 0xC)) = 0x0;
                                    t94 = FUN_0c075700(0x9, t5);
                                    t4 = t94;
                                }
                            } else {
                                *(unsigned int *)((t9 + 0xC)) = 0x2;
                                t96 = FUN_0c074300(0x1);
                                t4 = t96;
                                t97 = FUN_0c075700(0x1A, t5);
                                t4 = t97;
                                *(unsigned int *)0xC1EE160 = 0xA;
                            }
                        } else {
                            t100 = *(int *)((t6 + 0x0));
                            if ((int)t100 < 0) {
                                t101 = PAL_FreeTexture();
                                t4 = t101;
                                *(unsigned int *)((t9 + 0xC)) = 0x2;
                                t102 = FUN_0c074300(0x1);
                                t4 = t102;
                                t103 = FUN_0c075700(0x1A, t5);
                                t4 = t103;
                                *(unsigned int *)0xC1EE160 = 0xA;
                            }
                        }
                    } else {
                        if (t4 == 3) {
                            t112 = nlInitPrint();
                            t4 = t112;
                            t113 = nlSetCommonTextureOffset(0xBE);
                            t4 = t113;
                            t114 = nlObjPutSetReplaceTextureDirName(0xC146C48, 0x0);
                            t4 = t114;
                            t115 = *(int *)0xC1EE160;
                            *(unsigned int *)0xC1EE160 = (t115 + 0x1);
                            t116 = *(int *)((t6 + 0x0));
                            if ((int)t116 > 0) {
                                t4 = 0xC02B0CC;
                                t117 = *(int *)((t6 + 0x0));
                                *(unsigned int *)((t6 + 0x0)) = (t117 - 1);
                                *(unsigned int *)((t9 + 0x0)) = 0xC7;
                                u118 = *(float *)((t4 + 0x0));
                                t4 = 0x4;
                                *(float *)((t9 + t4)) = u118;
                                t4 = 0xC02B0D0;
                                u119 = *(float *)((t4 + 0x0));
                                t4 = 0x8;
                                *(float *)((t9 + t4)) = u119;
                                t120 = ((int (*)(int))(nlSprPut))(0xC1EE16C);
                                t4 = t120;
                                t4 = 0xC02B0D4;
                                *(unsigned int *)((t9 + 0x0)) = 0xC8;
                                u121 = *(float *)((t4 + 0x0));
                                t4 = 0x4;
                                *(float *)((t9 + t4)) = u121;
                                t4 = 0x8;
                                *(float *)((t9 + t4)) = u12;
                                t122 = ((int (*)(int))(nlSprPut))(0xC1EE16C);
                                t4 = t122;
                                t4 = 0x3C;
                                t123 = *(int *)((t6 + 0x0));
                                t124 = (int)((int)t123 / (int)t4);
                                t4 = t124;
                                t4 = (t4 << 1);
                                t125 = *(short *)((0xC08AD10 + t4));
                                t4 = 0x4;
                                *(unsigned int *)((t9 + 0x0)) = (unsigned short)t125;
                                *(float *)((t9 + t4)) = u11;
                                t4 = 0xC02B0E0;
                                u126 = *(float *)((t4 + 0x0));
                                t4 = 0x8;
                                *(float *)((t9 + t4)) = u126;
                                t127 = ((int (*)(int, int))(nlSprPut))(0xC1EE16C, 0xC08AD10);
                                t4 = t127;
                            } else {
                                t128 = PAL_FreeTexture();
                                t4 = t128;
                                t129 = FUN_0c074300(0x1);
                                t4 = t129;
                                t130 = FUN_0c075700(0x1A, t5);
                                t4 = t130;
                                *(unsigned int *)0xC1EE160 = 0x1;
                            }
                        } else {
                            if (t4 == 4) {
                                t133 = *(int *)((t6 + 0x0));
                                if ((int)t133 > 0) {
                                    t4 = 0xC02B0CC;
                                    t134 = *(int *)((t6 + 0x0));
                                    *(unsigned int *)((t6 + 0x0)) = (t134 - 1);
                                    *(unsigned int *)((t9 + 0x0)) = 0xC7;
                                    u135 = *(float *)((t4 + 0x0));
                                    t4 = 0x4;
                                    *(float *)((t9 + t4)) = u135;
                                    t4 = 0xC02B0D0;
                                    u136 = *(float *)((t4 + 0x0));
                                    t4 = 0x8;
                                    *(float *)((t9 + t4)) = u136;
                                    t137 = ((int (*)(int))(nlSprPut))(0xC1EE16C);
                                    t4 = t137;
                                    t4 = 0xC02B0D4;
                                    *(unsigned int *)((t9 + 0x0)) = 0xC8;
                                    u138 = *(float *)((t4 + 0x0));
                                    t4 = 0x4;
                                    *(float *)((t9 + t4)) = u138;
                                    t4 = 0x8;
                                    *(float *)((t9 + t4)) = u12;
                                    t139 = ((int (*)(int))(nlSprPut))(0xC1EE16C);
                                    t4 = t139;
                                    t4 = 0x3C;
                                    t140 = *(int *)((t6 + 0x0));
                                    t141 = (int)((int)t140 / (int)t4);
                                    t4 = t141;
                                    t4 = (t4 << 1);
                                    t142 = *(short *)((0xC08AD10 + t4));
                                    t4 = 0x4;
                                    *(unsigned int *)((t9 + 0x0)) = (unsigned short)t142;
                                    *(float *)((t9 + t4)) = u11;
                                    t4 = 0xC02B0E0;
                                    u143 = *(float *)((t4 + 0x0));
                                    t4 = 0x8;
                                    *(float *)((t9 + t4)) = u143;
                                    t144 = ((int (*)(int, int))(nlSprPut))(0xC1EE16C, 0xC08AD10);
                                    t4 = t144;
                                } else {
                                    t145 = PAL_FreeTexture();
                                    t4 = t145;
                                    t146 = FUN_0c074300(0x1);
                                    t4 = t146;
                                    t147 = FUN_0c075700(0x1A, t5);
                                    t4 = t147;
                                    *(unsigned int *)0xC1EE160 = 0x1;
                                }
                            }
                        }
                    }
                } else {
                    *(unsigned int *)((t6 + 0x0)) = 0x708;
                    t158 = nlInitPrint();
                    t4 = t158;
                    t159 = nlSetCommonTextureOffset(0xBE);
                    t4 = t159;
                    t160 = nlObjPutSetReplaceTextureDirName(0xC146C48, 0x0);
                    t4 = t160;
                    t161 = *(int *)0xC2A11C0;
                    t4 = t161;
                    if (t4 != 1) {
                        if (t4 != 2) {
                            if (t4 != 3) {
                                if (t4 != 4) {
                                    t162 = nlSetCommonTextureOffset(0xCD);
                                    t4 = t162;
                                    t164 = 0xC146D38;
                                } else {
                                    t163 = nlSetCommonTextureOffset(0xDC);
                                    t4 = t163;
                                    t164 = 0xC146E58;
                                }
                                t167 = t164;
                            } else {
                                t166 = nlSetCommonTextureOffset(0xD2);
                                t4 = t166;
                                t167 = 0xC146D98;
                            }
                            t170 = t167;
                        } else {
                            t169 = nlSetCommonTextureOffset(0xD7);
                            t4 = t169;
                            t170 = 0xC146DF8;
                        }
                        t173 = t170;
                    } else {
                        t172 = nlSetCommonTextureOffset(0xCD);
                        t4 = t172;
                        t173 = 0xC146D38;
                    }
                    t175 = nlObjPutSetReplaceTextureDirName(t173, 0x0);
                    t4 = t175;
                    t176 = *(int *)0xC1EE160;
                    *(unsigned int *)0xC1EE160 = (t176 + 0x1);
                    t4 = 0x4;
                    t177 = *(int *)((t6 + 0x0));
                    *(unsigned int *)((t6 + 0x0)) = (t177 - 1);
                    *(unsigned int *)((t9 + 0x0)) = 0xCA;
                    *(float *)((t9 + t4)) = u11;
                    t4 = 0xC02AEA0;
                    u178 = *(float *)((t4 + 0x0));
                    t4 = 0x8;
                    *(float *)((t9 + t4)) = u178;
                    t4 = 0xC02AEA4;
                    u179 = *(float *)((t4 + 0x0));
                    t4 = 0xC;
                    *(float *)((t9 + t4)) = u179;
                    t4 = 0xC02AEA8;
                    u180 = *(float *)((t4 + 0x0));
                    t4 = 0x10;
                    *(float *)((t9 + t4)) = u180;
                    t4 = 0xC02AEAC;
                    u181 = *(float *)((t4 + 0x0));
                    t4 = 0x14;
                    *(float *)((t9 + t4)) = u181;
                    t182 = ((int (*)(int))(nlSprPut))(0xC1EE16C);
                    t4 = t182;
                    t4 = 0x14;
                    *(float *)((t9 + t4)) = 1.0f;
                    t4 = 0x10;
                    *(float *)((t9 + t4)) = 1.0f;
                    t4 = 0xC;
                    *(float *)((t9 + t4)) = u10;
                    t4 = 0xC02AEB4;
                    *(unsigned int *)((t9 + 0x0)) = 0xC9;
                    u183 = *(float *)((t4 + 0x0));
                    t4 = 0x4;
                    *(float *)((t9 + t4)) = u183;
                    t4 = 0xC02AEB8;
                    u184 = *(float *)((t4 + 0x0));
                    t4 = 0x8;
                    *(float *)((t9 + t4)) = u184;
                    t185 = ((int (*)(int))(nlSprPut))(0xC1EE16C);
                    t4 = t185;
                    t186 = *(int *)0xC1EE250;
                    if (t186 != 0) {
                        *(unsigned int *)((t6 + 0x0)) = 0x708;
                    }
                    t189 = *(int *)0xC1EE250;
                    if ((t189 & 0x40) != 0) {
                        t190 = *(int *)((t8 + 0x0));
                        *(unsigned int *)((t8 + 0x0)) = (t190 - 1);
                        if ((int)(t190 - 1) < 0) {
                            *(unsigned int *)((t8 + 0x0)) = 0x2;
                        }
                    } else {
                        t193 = *(int *)0xC1EE250;
                        if ((t193 & t5) != 0) {
                            t194 = *(int *)((t8 + 0x0));
                            t4 = 0x3;
                            t195 = (int)((int)(t194 + 0x1) % (int)t4);
                            t4 = t195;
                            *(unsigned int *)((t8 + 0x0)) = t4;
                        }
                    }
                    t202 = *(int *)((t8 + 0x0));
                    t203 = 0xC3;
                    if (t202 == 0) {
                        t203 = 0xC4;
                    }
                    t4 = 0xC02AEC0;
                    *(unsigned int *)((t9 + 0x0)) = t203;
                    u205 = *(float *)((t4 + 0x0));
                    t4 = 0x4;
                    *(float *)((t9 + t4)) = u205;
                    t4 = 0x8;
                    *(float *)((t9 + t4)) = u12;
                    t206 = ((int (*)(int))(nlSprPut))(0xC1EE16C);
                    t4 = t206;
                    t207 = *(int *)((t8 + 0x0));
                    t4 = t207;
                    t208 = 0xC5;
                    if (t4 == 1) {
                        t208 = 0xC6;
                    }
                    t4 = 0x4;
                    *(unsigned int *)((t9 + 0x0)) = t208;
                    *(float *)((t9 + t4)) = u11;
                    t4 = 0x8;
                    *(float *)((t9 + t4)) = u12;
                    t211 = ((int (*)(int))(nlSprPut))(0xC1EE16C);
                    t4 = t211;
                    t4 = 0xC02AF80;
                    u212 = *(float *)((t4 + 0x0));
                    t213 = *(int *)0xC2A11C0;
                    t4 = t213;
                    t214 = *(int *)((t8 + 0x0));
                    if (t4 != 1) {
                        if (t4 != 2) {
                            if (t4 != 3) {
                                if (t4 != 4) {
                                    t4 = t214;
                                    t215 = 0xD0;
                                    if (t4 == 2) {
                                        t215 = 0xD1;
                                    }
                                    t4 = 0x4;
                                    *(unsigned int *)((t9 + 0x0)) = t215;
                                    *(float *)((t9 + t4)) = u212;
                                    t4 = 0x8;
                                    *(float *)((t9 + t4)) = u12;
                                    t218 = ((int (*)(int))(nlSprPut))(0xC1EE16C);
                                    t4 = t218;
                                    t223 = 0xC08AD1A;
                                } else {
                                    t4 = t214;
                                    t219 = 0xDF;
                                    if (t4 == 2) {
                                        t219 = 0xE0;
                                    }
                                    t4 = 0x4;
                                    *(unsigned int *)((t9 + 0x0)) = t219;
                                    *(float *)((t9 + t4)) = u212;
                                    t4 = 0x8;
                                    *(float *)((t9 + t4)) = u12;
                                    t222 = ((int (*)(int))(nlSprPut))(0xC1EE16C);
                                    t4 = t222;
                                    t223 = 0xC08AD2C;
                                }
                                t229 = t223;
                            } else {
                                t4 = t214;
                                t225 = 0xD5;
                                if (t4 == 2) {
                                    t225 = 0xD6;
                                }
                                t4 = 0x4;
                                *(unsigned int *)((t9 + 0x0)) = t225;
                                *(float *)((t9 + t4)) = u212;
                                t4 = 0x8;
                                *(float *)((t9 + t4)) = u12;
                                t228 = ((int (*)(int))(nlSprPut))(0xC1EE16C);
                                t4 = t228;
                                t229 = 0xC08AD20;
                            }
                            t235 = t229;
                        } else {
                            t4 = t214;
                            t231 = 0xDA;
                            if (t4 == 2) {
                                t231 = 0xDB;
                            }
                            t4 = 0x4;
                            *(unsigned int *)((t9 + 0x0)) = t231;
                            *(float *)((t9 + t4)) = u212;
                            t4 = 0x8;
                            *(float *)((t9 + t4)) = u12;
                            t234 = ((int (*)(int))(nlSprPut))(0xC1EE16C);
                            t4 = t234;
                            t235 = 0xC08AD26;
                        }
                        t241 = t235;
                    } else {
                        t4 = t214;
                        t237 = 0xD0;
                        if (t4 == 2) {
                            t237 = 0xD1;
                        }
                        t4 = 0x4;
                        *(unsigned int *)((t9 + 0x0)) = t237;
                        *(float *)((t9 + t4)) = u212;
                        t4 = 0x8;
                        *(float *)((t9 + t4)) = u12;
                        t240 = ((int (*)(int))(nlSprPut))(0xC1EE16C);
                        t4 = t240;
                        t241 = 0xC08AD1A;
                    }
                    t243 = *(int *)((t8 + 0x0));
                    t4 = t243;
                    t4 = (t4 << 1);
                    t244 = *(short *)((t241 + t4));
                    t4 = 0x4;
                    *(unsigned int *)((t9 + 0x0)) = (unsigned short)t244;
                    *(float *)((t9 + t4)) = u11;
                    t4 = 0xC02B0B0;
                    u245 = *(float *)((t4 + 0x0));
                    t4 = 0x8;
                    *(float *)((t9 + t4)) = u245;
                    t246 = ((int (*)(int))(nlSprPut))(0xC1EE16C);
                    t4 = t246;
                    t9 = 0xC1EE21C;
                    t247 = *(int *)0xC1EE250;
                    if ((t247 & 0xC) != 0) {
                        t248 = PAL_FreeTexture();
                        t4 = t248;
                        t249 = *(int *)((t8 + 0x0));
                        t4 = t249;
                        if (t4 != 0) {
                            if (t4 != 1) {
                                if (t4 != 2) {
                                } else {
                                    *(unsigned int *)0xC1EE160 = 0x3;
                                    *(unsigned int *)((t6 + 0x0)) = 0x12C;
                                    t250 = FUN_0c075700(0x9, t5);
                                    t4 = t250;
                                }
                            } else {
                                *(unsigned int *)0xC1EE160 = 0xA;
                                *(unsigned int *)((t9 + 0xC)) = 0x0;
                                t252 = FUN_0c075700(0x9, t5);
                                t4 = t252;
                            }
                        } else {
                            *(unsigned int *)((t9 + 0xC)) = 0x2;
                            t254 = FUN_0c074300(0x1);
                            t4 = t254;
                            t255 = FUN_0c075700(0x1A, t5);
                            t4 = t255;
                            *(unsigned int *)0xC1EE160 = 0xA;
                        }
                    } else {
                        t258 = *(int *)((t6 + 0x0));
                        if ((int)t258 < 0) {
                            t259 = PAL_FreeTexture();
                            t4 = t259;
                            *(unsigned int *)((t9 + 0xC)) = 0x2;
                            t260 = FUN_0c074300(0x1);
                            t4 = t260;
                            t261 = FUN_0c075700(0x1A, t5);
                            t4 = t261;
                            *(unsigned int *)0xC1EE160 = 0xA;
                        }
                    }
                }
            } else {
                *(unsigned int *)((t8 + 0x0)) = 0x0;
                t274 = gdc_FileLoad(0xC390000, 0xC08AD34, 0x0);
                t4 = t274;
                t275 = *(int *)0xC2A11C0;
                t4 = t275;
                t282 = 0xC08AD64;
                if (t4 != 1) {
                    t280 = 0xC08AD40;
                    if (t4 != 2) {
                        t278 = 0xC08AD4C;
                        if (t4 != 3) {
                            t276 = 0xC08AD58;
                            if (t4 != 4) {
                                t276 = 0xC08AD64;
                            }
                            t278 = t276;
                        }
                        t280 = t278;
                    }
                    t282 = t280;
                }
                t284 = gdc_FileLoad(0xCB40000, t282, 0x0);
                t4 = t284;
                t4 = 0xC;
                *(float *)((t9 + t4)) = u10;
                t4 = 0x18;
                *(float *)((t9 + t4)) = 0.0f;
                t4 = 0x1C;
                *(float *)((t9 + t4)) = 0.0f;
                t4 = 0x20;
                *(float *)((t9 + t4)) = 1.0f;
                t4 = 0x24;
                *(float *)((t9 + t4)) = 1.0f;
                t4 = 0x2C;
                *(unsigned int *)((t9 + 0x28)) = 0x0;
                *(unsigned int *)((t9 + 0x34)) = 0x80A;
                *(float *)((t9 + t4)) = 1.0f;
                t4 = 0x14;
                *(unsigned int *)((t9 + 0x30)) = 0xFFFFFFFF;
                *(float *)((t9 + t4)) = 1.0f;
                t4 = 0x10;
                *(float *)((t9 + t4)) = 1.0f;
                t285 = *(int *)0xC1EE160;
                *(unsigned int *)0xC1EE160 = (t285 + 0x1);
                *(unsigned int *)((t6 + 0x0)) = 0x708;
                t286 = nlInitPrint();
                t4 = t286;
                t287 = nlSetCommonTextureOffset(0xBE);
                t4 = t287;
                t288 = nlObjPutSetReplaceTextureDirName(0xC146C48, 0x0);
                t4 = t288;
                t289 = *(int *)0xC2A11C0;
                t4 = t289;
                if (t4 != 1) {
                    if (t4 != 2) {
                        if (t4 != 3) {
                            if (t4 != 4) {
                                t290 = nlSetCommonTextureOffset(0xCD);
                                t4 = t290;
                                t292 = 0xC146D38;
                            } else {
                                t291 = nlSetCommonTextureOffset(0xDC);
                                t4 = t291;
                                t292 = 0xC146E58;
                            }
                            t295 = t292;
                        } else {
                            t294 = nlSetCommonTextureOffset(0xD2);
                            t4 = t294;
                            t295 = 0xC146D98;
                        }
                        t298 = t295;
                    } else {
                        t297 = nlSetCommonTextureOffset(0xD7);
                        t4 = t297;
                        t298 = 0xC146DF8;
                    }
                    t301 = t298;
                } else {
                    t300 = nlSetCommonTextureOffset(0xCD);
                    t4 = t300;
                    t301 = 0xC146D38;
                }
                t303 = nlObjPutSetReplaceTextureDirName(t301, 0x0);
                t4 = t303;
                t304 = *(int *)0xC1EE160;
                *(unsigned int *)0xC1EE160 = (t304 + 0x1);
                t4 = 0x4;
                t305 = *(int *)((t6 + 0x0));
                *(unsigned int *)((t6 + 0x0)) = (t305 - 1);
                *(unsigned int *)((t9 + 0x0)) = 0xCA;
                *(float *)((t9 + t4)) = u11;
                t4 = 0xC02AEA0;
                u306 = *(float *)((t4 + 0x0));
                t4 = 0x8;
                *(float *)((t9 + t4)) = u306;
                t4 = 0xC02AEA4;
                u307 = *(float *)((t4 + 0x0));
                t4 = 0xC;
                *(float *)((t9 + t4)) = u307;
                t4 = 0xC02AEA8;
                u308 = *(float *)((t4 + 0x0));
                t4 = 0x10;
                *(float *)((t9 + t4)) = u308;
                t4 = 0xC02AEAC;
                u309 = *(float *)((t4 + 0x0));
                t4 = 0x14;
                *(float *)((t9 + t4)) = u309;
                t310 = ((int (*)(int))(nlSprPut))(0xC1EE16C);
                t4 = t310;
                t4 = 0x14;
                *(float *)((t9 + t4)) = 1.0f;
                t4 = 0x10;
                *(float *)((t9 + t4)) = 1.0f;
                t4 = 0xC;
                *(float *)((t9 + t4)) = u10;
                t4 = 0xC02AEB4;
                *(unsigned int *)((t9 + 0x0)) = 0xC9;
                u311 = *(float *)((t4 + 0x0));
                t4 = 0x4;
                *(float *)((t9 + t4)) = u311;
                t4 = 0xC02AEB8;
                u312 = *(float *)((t4 + 0x0));
                t4 = 0x8;
                *(float *)((t9 + t4)) = u312;
                t313 = ((int (*)(int))(nlSprPut))(0xC1EE16C);
                t4 = t313;
                t314 = *(int *)0xC1EE250;
                if (t314 != 0) {
                    *(unsigned int *)((t6 + 0x0)) = 0x708;
                }
                t317 = *(int *)0xC1EE250;
                if ((t317 & 0x40) != 0) {
                    t318 = *(int *)((t8 + 0x0));
                    *(unsigned int *)((t8 + 0x0)) = (t318 - 1);
                    if ((int)(t318 - 1) < 0) {
                        *(unsigned int *)((t8 + 0x0)) = 0x2;
                    }
                } else {
                    t321 = *(int *)0xC1EE250;
                    if ((t321 & t5) != 0) {
                        t322 = *(int *)((t8 + 0x0));
                        t4 = 0x3;
                        t323 = (int)((int)(t322 + 0x1) % (int)t4);
                        t4 = t323;
                        *(unsigned int *)((t8 + 0x0)) = t4;
                    }
                }
                t330 = *(int *)((t8 + 0x0));
                t331 = 0xC3;
                if (t330 == 0) {
                    t331 = 0xC4;
                }
                t4 = 0xC02AEC0;
                *(unsigned int *)((t9 + 0x0)) = t331;
                u333 = *(float *)((t4 + 0x0));
                t4 = 0x4;
                *(float *)((t9 + t4)) = u333;
                t4 = 0x8;
                *(float *)((t9 + t4)) = u12;
                t334 = ((int (*)(int))(nlSprPut))(0xC1EE16C);
                t4 = t334;
                t335 = *(int *)((t8 + 0x0));
                t4 = t335;
                t336 = 0xC5;
                if (t4 == 1) {
                    t336 = 0xC6;
                }
                t4 = 0x4;
                *(unsigned int *)((t9 + 0x0)) = t336;
                *(float *)((t9 + t4)) = u11;
                t4 = 0x8;
                *(float *)((t9 + t4)) = u12;
                t339 = ((int (*)(int))(nlSprPut))(0xC1EE16C);
                t4 = t339;
                t4 = 0xC02AF80;
                u340 = *(float *)((t4 + 0x0));
                t341 = *(int *)0xC2A11C0;
                t4 = t341;
                t342 = *(int *)((t8 + 0x0));
                if (t4 != 1) {
                    if (t4 != 2) {
                        if (t4 != 3) {
                            if (t4 != 4) {
                                t4 = t342;
                                t343 = 0xD0;
                                if (t4 == 2) {
                                    t343 = 0xD1;
                                }
                                t4 = 0x4;
                                *(unsigned int *)((t9 + 0x0)) = t343;
                                *(float *)((t9 + t4)) = u340;
                                t4 = 0x8;
                                *(float *)((t9 + t4)) = u12;
                                t346 = ((int (*)(int))(nlSprPut))(0xC1EE16C);
                                t4 = t346;
                                t351 = 0xC08AD1A;
                            } else {
                                t4 = t342;
                                t347 = 0xDF;
                                if (t4 == 2) {
                                    t347 = 0xE0;
                                }
                                t4 = 0x4;
                                *(unsigned int *)((t9 + 0x0)) = t347;
                                *(float *)((t9 + t4)) = u340;
                                t4 = 0x8;
                                *(float *)((t9 + t4)) = u12;
                                t350 = ((int (*)(int))(nlSprPut))(0xC1EE16C);
                                t4 = t350;
                                t351 = 0xC08AD2C;
                            }
                            t357 = t351;
                        } else {
                            t4 = t342;
                            t353 = 0xD5;
                            if (t4 == 2) {
                                t353 = 0xD6;
                            }
                            t4 = 0x4;
                            *(unsigned int *)((t9 + 0x0)) = t353;
                            *(float *)((t9 + t4)) = u340;
                            t4 = 0x8;
                            *(float *)((t9 + t4)) = u12;
                            t356 = ((int (*)(int))(nlSprPut))(0xC1EE16C);
                            t4 = t356;
                            t357 = 0xC08AD20;
                        }
                        t363 = t357;
                    } else {
                        t4 = t342;
                        t359 = 0xDA;
                        if (t4 == 2) {
                            t359 = 0xDB;
                        }
                        t4 = 0x4;
                        *(unsigned int *)((t9 + 0x0)) = t359;
                        *(float *)((t9 + t4)) = u340;
                        t4 = 0x8;
                        *(float *)((t9 + t4)) = u12;
                        t362 = ((int (*)(int))(nlSprPut))(0xC1EE16C);
                        t4 = t362;
                        t363 = 0xC08AD26;
                    }
                    t369 = t363;
                } else {
                    t4 = t342;
                    t365 = 0xD0;
                    if (t4 == 2) {
                        t365 = 0xD1;
                    }
                    t4 = 0x4;
                    *(unsigned int *)((t9 + 0x0)) = t365;
                    *(float *)((t9 + t4)) = u340;
                    t4 = 0x8;
                    *(float *)((t9 + t4)) = u12;
                    t368 = ((int (*)(int))(nlSprPut))(0xC1EE16C);
                    t4 = t368;
                    t369 = 0xC08AD1A;
                }
                t371 = *(int *)((t8 + 0x0));
                t4 = t371;
                t4 = (t4 << 1);
                t372 = *(short *)((t369 + t4));
                t4 = 0x4;
                *(unsigned int *)((t9 + 0x0)) = (unsigned short)t372;
                *(float *)((t9 + t4)) = u11;
                t4 = 0xC02B0B0;
                u373 = *(float *)((t4 + 0x0));
                t4 = 0x8;
                *(float *)((t9 + t4)) = u373;
                t374 = ((int (*)(int))(nlSprPut))(0xC1EE16C);
                t4 = t374;
                t9 = 0xC1EE21C;
                t375 = *(int *)0xC1EE250;
                if ((t375 & 0xC) != 0) {
                    t376 = PAL_FreeTexture();
                    t4 = t376;
                    t377 = *(int *)((t8 + 0x0));
                    t4 = t377;
                    if (t4 != 0) {
                        if (t4 != 1) {
                            if (t4 != 2) {
                            } else {
                                *(unsigned int *)0xC1EE160 = 0x3;
                                *(unsigned int *)((t6 + 0x0)) = 0x12C;
                                t378 = FUN_0c075700(0x9, t5);
                                t4 = t378;
                            }
                        } else {
                            *(unsigned int *)0xC1EE160 = 0xA;
                            *(unsigned int *)((t9 + 0xC)) = 0x0;
                            t380 = FUN_0c075700(0x9, t5);
                            t4 = t380;
                        }
                    } else {
                        *(unsigned int *)((t9 + 0xC)) = 0x2;
                        t382 = FUN_0c074300(0x1);
                        t4 = t382;
                        t383 = FUN_0c075700(0x1A, t5);
                        t4 = t383;
                        *(unsigned int *)0xC1EE160 = 0xA;
                    }
                } else {
                    t386 = *(int *)((t6 + 0x0));
                    if ((int)t386 < 0) {
                        t387 = PAL_FreeTexture();
                        t4 = t387;
                        *(unsigned int *)((t9 + 0xC)) = 0x2;
                        t388 = FUN_0c074300(0x1);
                        t4 = t388;
                        t389 = FUN_0c075700(0x1A, t5);
                        t4 = t389;
                        *(unsigned int *)0xC1EE160 = 0xA;
                    }
                }
            }
            t9 = 0xC041068;
            t402 = CheckSoftReset();
            t4 = t402;
            t9 = 0xC074370;
            t403 = frameFlip();
            t4 = t403;
            continue;
        }
        break;
    }
    nlSetCommonTextureOffset(0x0);
    nlInitPrint();
    return FUN_0c074680(0xFF000000, 0xFF000000, 0xFF000000);
}
