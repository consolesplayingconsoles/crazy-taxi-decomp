/* Straight-line functions with calls and guards (batch gen_fz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0210d4(int);
int FUN_0c021244(int);
int FUN_0c021600(int, int);
float FUN_0c021836(float);
int FUN_0c077210(int, int);
extern float _builtin_sqrtf(float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c021970(int a4);

int FUN_0c021970(int a4)
{
    int t2;
    float u3;
    float u4;
    int t5;
    int t6;
    int t7;
    float u9;
    float u10;
    float u13;
    float u15;
    float u16;
    float u17;
    int t18;
    float u20;
    float u21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    float u32;
    float u37;
    float u38;
    float u39;
    float u44;
    float u45;
    int t47;
    float u48;
    float u49;
    int t58;
    int t59;
    int t60;
    int t61;
    int t63;
    int t65;
    float u67;
    float u69;
    float u70;
    float u72;
    float u73;
    float u74;
    float u79;
    float u80;
    int t81;
    float u82;
    float u83;
    float u84;
    float t85;
    float u86;
    float u87;
    float u88;
    float u89;
    float t90;
    float u91;
    float u92;
    float u93;
    float u97;
    float u99;
    float u100;
    float u101;
    float u102;
    int t103;
    float u104;
    float u115;
    float u116;
    float u117;
    float u118;
    float u119;
    float u120;
    int t124;
    float u125;
    float u126;
    float u127;
    float u128;
    int t129;
    float u130;
    float u131;
    float u132;
    float u133;
    float u134;
    float u135;
    float u136;
    float u137;
    int t143;
    float u144;
    float u146;
    float u149;
    float u150;
    float u151;
    float u152;
    float t153;
    float u154;
    float u155;
    float u156;
    float u157;
    float t158;
    float u159;
    float u210;
    int t169;
    float u170;
    float t171;
    float u172;
    float u173;
    float t174;
    float u175;
    int t180;
    float u181;
    float t182;
    float u183;
    float u184;
    float t185;
    float u186;
    float u190;
    float t191;
    float u192;
    float u193;
    float t194;
    float u195;
    float u213;
    float u214;
    float u215;
    float u216;
    float u217;
    float u218;
    float u219;
    float u220;
    float u223;
    float u221;
    float u231;
    float u232;
    float u233;
    float u234;
    float u235;
    float u242;
    float u243;
    float u244;
    int t245;
    float u246;
    float u247;
    float u248;
    float u249;
    float u250;
    float u251;
    float u252;
    float u253;
    float u254;
    float u255;
    float u259;
    float u275;
    float u276;
    int t278;
    int t279;
    int t283;
    int t285;
    float u287;
    float u288;
    int t292;
    int t293;
    int t294;
    int t295;
    int t297;
    int t299;
    float u301;
    float u302;
    float u303;
    float u304;
    float u307;
    float u308;
    float u309;
    float u310;
    float u312;
    float u313;
    float u314;
    float u315;
    float u316;
    float u317;
    float u318;
    float u319;
    float u320;
    float u326;
    float u332;
    float u333;
    float u8;
    float u11;
    int t29;
    float u34;
    float u42;
    float u76;
    float u95;
    int t162;
    float u164;
    float u166;
    int t207;
    float u209;
    float u204;
    float u178;
    float u201;
    float u188;
    float u197;
    float u238;
    float u227;
    int stk[24] = {0};

    FUN_0c0210d4(a4);
    FUN_0c021244(a4);
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    t2 = *(int *)((a4 + 0x120));
    u3 = *(float *)(((t2 << 2) + 0xC08A8D4));
    u4 = *(float *)((a4 + 0x154));
    *(float *)(((int)stk + 40)) = (u4 * u3);
    t5 = (t2 << 2);
    t6 = 0x0;
    t7 = (0x1A0 + a4);
    u9 = (u4 * u3);
    u10 = u3;
    for (;;) {
        if ((int)t6 < (int)0x4) {
            u13 = 39.7499962f;
            if ((int)t6 <= (int)0x1) {
                u13 = 26.4999981f;
            }
            t5 = 0x1;
            u15 = *(float *)((a4 + 0x11C));
            u10 = u15;
            u10 = (u10 * u13);
            u10 = (-u10);
            *(float *)(((int)stk + 24)) = u10;
            u16 = *(float *)((t7 + 0x24));
            u10 = u16;
            u17 = *(float *)(((int)stk + 40));
            u9 = u17;
            u9 = (u9 * u10);
            *(float *)((t7 + 0x1C)) = u9;
            t18 = 0x16C;
            if ((int)t6 <= (int)t5) {
                t18 = 0x168;
            }
            u20 = *(float *)((a4 + t18));
            u10 = u20;
            *(float *)(((int)stk + 20)) = u10;
            u10 = 0.0f;
            u21 = *(float *)((a4 + 0x15C));
            u9 = u21;
            if (!(u10 > u9)) {
                t22 = *(short *)((a4 + 0x86));
                t5 = t22;
                t23 = *(short *)((t7 + 0x80));
                t24 = *(short *)((a4 + 0xF4));
                t29 = ((t23 + t5) - t24);
            } else {
                t25 = *(short *)((t7 + 0x80));
                t26 = *(short *)((a4 + 0x86));
                t5 = t26;
                t27 = *(short *)((a4 + 0xF4));
                t29 = (((-t25) - t5) + t27);
            }
            FUN_0c021600(t7, t29);
            if ((int)t6 >= (int)0x2) {
                u32 = *(float *)((t7 + 0x20));
                u10 = u32;
                u10 = (u10 * 1.01999998f);
                *(float *)((t7 + 0x20)) = u10;
                u34 = u10;
            }
            u10 = u34;
            u37 = *(float *)((a4 + 0x15C));
            u10 = u37;
            u10 = _builtin_fabsf(u10);
            if (0.349999994f > u10) {
                u38 = *(float *)((t7 + 0x20));
                u9 = u38;
                u39 = *(float *)(((0x15C + a4) + 0x0));
                u10 = u39;
                u10 = _builtin_fabsf(u10);
                u10 = (u10 / 0.349999994f);
                u9 = (u9 * u10);
                *(float *)((t7 + 0x20)) = u9;
                u42 = u9;
            }
            u9 = u42;
            u44 = *(float *)((t7 + 0x20));
            u9 = u44;
            u45 = *(float *)(((0x12C + a4) + 0x0));
            u10 = u45;
            u9 = (u9 * u10);
            *(float *)((t7 + 0x20)) = u9;
            t47 = *(int *)((a4 + 0x3B0));
            if (t47 == 2) {
                u48 = *(float *)((t7 + 0x20));
                u9 = u48;
                u10 = 0.799999952f;
                u9 = (u9 * u10);
                *(float *)((t7 + 0x20)) = u9;
                if ((int)t6 >= (int)0x2) {
                    u49 = *(float *)((t7 + 0x1C));
                    u9 = u49;
                    u9 = (u9 * 3.0f);
                    *(float *)((t7 + 0x1C)) = u9;
                }
            }
            t5 = 0xC078250;
            nlPushMatrix(0x0);
            t58 = *(short *)((a4 + 0xF4));
            t59 = *(short *)((a4 + 0x86));
            t5 = t59;
            t5 = (unsigned short)t5;
            t60 = *(short *)((t7 + 0x80));
            t61 = ((unsigned short)t58 - t5);
            t5 = t60;
            t5 = (unsigned short)t5;
            nlRotateAY((t61 - t5));
            t63 = *(short *)((a4 + 0x84));
            nlRotateAX((unsigned short)t63);
            t5 = 0xC078690;
            t65 = *(short *)((a4 + 0x88));
            nlRotateAZ((unsigned short)t65);
            *(float *)0xC1EE14C = 0.0f;
            t5 = 0xC077210;
            *(float *)0xC1EE148 = 0.0f;
            u67 = *(float *)((a4 + 0x160));
            u10 = u67;
            *(float *)0xC1EE150 = u10;
            FUN_0c077210(0xC1EE148, 0xC1EE154);
            u69 = *(float *)0xC1EE15C;
            u10 = u69;
            *(float *)(((int)stk + 12)) = u10;
            u70 = *(float *)0xC1EE154;
            u11 = u70;
            nlPopMatrix(0x1);
            u10 = 0.0f;
            u72 = *(float *)(((int)stk + 20));
            u9 = u72;
            if (u9 != u10) {
                u10 = 0.0f;
                u8 = 1.0f;
                u8 = (u8 + u8);
                u73 = *(float *)(((int)stk + 24));
                u74 = (u73 * u8);
                if (u10 > u9) {
                    u74 = (-(u73 * u8));
                }
                *(float *)(((int)stk + 8)) = u74;
                u76 = u8;
            } else {
                *(float *)(((int)stk + 8)) = 0.0f;
            }
            u8 = u76;
            u79 = *(float *)(((int)stk + 12));
            u10 = u79;
            u80 = *(float *)(((int)stk + 20));
            u9 = u80;
            u9 = (u9 - u10);
            *(float *)(((int)stk + 4)) = u9;
            t81 = *(int *)((t7 + 0x0));
            if (t81 != -1) {
                u82 = *(float *)(((int)stk + 4));
                u9 = u82;
                u10 = 0.0f;
                if (u9 != u10) {
                    if (u9 > u10) {
                        u83 = *(float *)(((int)stk + 4));
                        u9 = u83;
                        u84 = *(float *)((a4 + 0x12C));
                        u10 = u84;
                        u9 = (u9 * u10);
                        u10 = 6.28299999f;
                        u9 = (u9 * u10);
                        u9 = _builtin_fabsf(u9);
                        t85 = FUN_0c021836(u9);
                        u9 = 1.0f;
                        u86 = *(float *)((t7 + 0x2C));
                        u10 = u86;
                        u9 = (u9 + u9);
                        u10 = (u10 * t85);
                        u87 = *(float *)(((int)stk + 8));
                        u8 = u87;
                        u10 = (u10 * u9);
                        u8 = (u8 - u10);
                        *(float *)(((int)stk + 8)) = u8;
                        u95 = u8;
                    } else {
                        u88 = *(float *)(((int)stk + 4));
                        u9 = u88;
                        u89 = *(float *)((a4 + 0x12C));
                        u10 = u89;
                        u9 = (u9 * u10);
                        u10 = 6.28299999f;
                        u9 = (u9 * u10);
                        u9 = _builtin_fabsf(u9);
                        t90 = FUN_0c021836(u9);
                        u91 = *(float *)((t7 + 0x2C));
                        u10 = u91;
                        u92 = *(float *)(((int)stk + 8));
                        u9 = u92;
                        u10 = (u10 * t90);
                        u93 = u9;
                        u93 = u93 + (1.0f + 1.0f) * u10;
                        u9 = u93;
                        *(float *)(((int)stk + 8)) = u9;
                    }
                    u8 = u95;
                    u97 = *(float *)((t7 + 0x28));
                    u10 = u97;
                    u99 = *(float *)((t7 + 0x10));
                    u9 = u99;
                    u9 = (u9 * u10);
                    u100 = *(float *)(((int)stk + 4));
                    u10 = u100;
                    u10 = (u10 / 3600.0f);
                    u9 = (u9 * u10);
                    u101 = *(float *)((a4 + 0x12C));
                    u10 = u101;
                    u9 = (u9 * u10);
                    u10 = 2.5f;
                    u102 = *(float *)(((int)stk + 8));
                    u8 = u102;
                    u9 = (u9 * u10);
                    u8 = (u8 - u9);
                    *(float *)(((int)stk + 8)) = u8;
                    t103 = *(int *)((a4 + 0x3B0));
                    if (t103 == 4) {
                        u9 = 0.799999952f;
                        u104 = *(float *)(((int)stk + 8));
                        u8 = u104;
                        u8 = (u8 * u9);
                        *(float *)(((int)stk + 8)) = u8;
                    }
                }
            }
            t5 = 0x1;
            if ((int)t6 <= (int)t5) {
                u115 = *(float *)(((int)stk + 8));
                u10 = u115;
                u116 = *(float *)((t7 + 0x1C));
                u9 = u116;
                u8 = 6.28317976f;
                u9 = (u9 + u10);
                u117 = *(float *)(((int)stk + 32));
                u9 = (u9 / u8);
                *(float *)(((int)stk + 32)) = (u117 + u9);
            } else {
                u118 = *(float *)(((int)stk + 8));
                u10 = u118;
                u119 = *(float *)((t7 + 0x1C));
                u9 = u119;
                u8 = 6.28317976f;
                u9 = (u9 + u10);
                u120 = *(float *)(((int)stk + 28));
                u9 = (u9 / u8);
                *(float *)(((int)stk + 28)) = (u120 + u9);
            }
            t124 = *(int *)((a4 + 0x3B0));
            if (t124 == 2) {
                u125 = *(float *)((t7 + 0x28));
                u10 = u125;
                u126 = *(float *)((t7 + 0x10));
                u9 = u126;
                u9 = (u9 * u10);
                u127 = *(float *)(((int)stk + 4));
                u10 = u127;
                u10 = (u10 / 3600.0f);
                u9 = (u9 * u10);
                u128 = *(float *)((a4 + 0x12C));
                u10 = u128;
                u9 = (u9 * u10);
                u9 = (u9 * 13.0f);
                *(float *)((t7 + 0x18)) = u9;
            } else {
                t129 = *(int *)((a4 + 0x3B0));
                if (t129 == 4) {
                    u130 = *(float *)((t7 + 0x28));
                    u10 = u130;
                    u131 = *(float *)((t7 + 0x10));
                    u9 = u131;
                    u9 = (u9 * u10);
                    u132 = *(float *)(((int)stk + 4));
                    u10 = u132;
                    u10 = (u10 / 3600.0f);
                    u9 = (u9 * u10);
                    u133 = *(float *)((a4 + 0x12C));
                    u10 = u133;
                    u9 = (u9 * u10);
                    u10 = 2.5f;
                    u9 = (u9 * u10);
                } else {
                    u134 = *(float *)((t7 + 0x28));
                    u10 = u134;
                    u135 = *(float *)((t7 + 0x10));
                    u9 = u135;
                    u9 = (u9 * u10);
                    u136 = *(float *)(((int)stk + 4));
                    u10 = u136;
                    u10 = (u10 / 3600.0f);
                    u9 = (u9 * u10);
                    u137 = *(float *)((a4 + 0x12C));
                    u10 = u137;
                    u9 = (u9 * u10);
                    u9 = (u9 * 5.5f);
                }
                *(float *)((t7 + 0x18)) = u9;
            }
            t143 = *(int *)((a4 + 0x120));
            t5 = t143;
            if (t5 == 0) {
                u10 = 0.0f;
                u144 = *(float *)((t7 + 0x18));
                u9 = u144;
                if (!(u9 > u10)) {
                } else {
                    *(float *)((t7 + 0x18)) = 0.0f;
                }
            } else {
                u10 = 0.0f;
                u146 = *(float *)((t7 + 0x18));
                u9 = u146;
                if (u10 > u9) {
                    *(float *)((t7 + 0x18)) = 0.0f;
                }
            }
            u10 = 0.0f;
            u149 = *(float *)(((int)stk + 12));
            u9 = u149;
            if (u9 != u10) {
                if (u9 > u10) {
                    u150 = *(float *)(((int)stk + 24));
                    u10 = u150;
                    *(float *)(((int)stk + 16)) = u10;
                    u151 = *(float *)(((int)stk + 12));
                    u10 = u151;
                    u10 = _builtin_fabsf(u10);
                    u152 = *(float *)((a4 + 0x12C));
                    u9 = u152;
                    u10 = (u10 * u9);
                    t153 = FUN_0c021836((u10 * 6.28299999f));
                    u154 = *(float *)((t7 + 0x2C));
                    u10 = u154;
                    u10 = (u10 * t153);
                    u10 = (u10 * 1.5f);
                    u10 = (-u10);
                } else {
                    u155 = *(float *)(((int)stk + 24));
                    u10 = u155;
                    u10 = (-u10);
                    *(float *)(((int)stk + 16)) = u10;
                    u156 = *(float *)(((int)stk + 12));
                    u10 = u156;
                    u10 = _builtin_fabsf(u10);
                    u157 = *(float *)((a4 + 0x12C));
                    u9 = u157;
                    u10 = (u10 * u9);
                    t158 = FUN_0c021836((u10 * 6.28299999f));
                    u159 = *(float *)((t7 + 0x2C));
                    u10 = u159;
                    u10 = (u10 * t158);
                    u10 = (u10 * 1.5f);
                }
                *(float *)(((int)stk + 44)) = u10;
            } else {
                *(float *)(((int)stk + 16)) = 0.0f;
                *(float *)(((int)stk + 44)) = 0.0f;
                t162 = t5;
                u164 = u8;
                u166 = u9;
            }
            u8 = u164;
            u9 = u166;
            u10 = 0.0f;
            t5 = t162;
            u210 = 0.0f;
            if (u11 != u10) {
                t169 = *(int *)((a4 + 0x3B0));
                if (t169 == 2) {
                    if (u11 > u10) {
                        u11 = _builtin_fabsf(u11);
                        u170 = *(float *)((a4 + 0x12C));
                        u10 = u170;
                        u11 = (u11 * u10);
                        t171 = FUN_0c021836((u11 * 6.28299999f));
                        u172 = *(float *)((t7 + 0x2C));
                        u10 = u172;
                        u10 = (u10 * t171);
                        u9 = 32.0f;
                        u10 = (u10 * u9);
                        u178 = (-u10);
                    } else {
                        u11 = _builtin_fabsf(u11);
                        u173 = *(float *)((a4 + 0x12C));
                        u10 = u173;
                        u11 = (u11 * u10);
                        t174 = FUN_0c021836((u11 * 6.28299999f));
                        u175 = *(float *)((t7 + 0x2C));
                        u10 = u175;
                        u9 = 32.0f;
                        u10 = (u10 * t174);
                        u178 = (u10 * u9);
                    }
                    u204 = u178;
                } else {
                    t180 = *(int *)((a4 + 0x3B0));
                    if (t180 == 4) {
                        if (u11 > u10) {
                            u11 = _builtin_fabsf(u11);
                            u181 = *(float *)((a4 + 0x12C));
                            u10 = u181;
                            u11 = (u11 * u10);
                            t182 = FUN_0c021836((u11 * 6.28299999f));
                            u183 = *(float *)((t7 + 0x2C));
                            u10 = u183;
                            u10 = (u10 * t182);
                            u9 = 1.0f;
                            u10 = (u10 * u9);
                            u188 = (-u10);
                        } else {
                            u11 = _builtin_fabsf(u11);
                            u184 = *(float *)((a4 + 0x12C));
                            u10 = u184;
                            u11 = (u11 * u10);
                            t185 = FUN_0c021836((u11 * 6.28299999f));
                            u9 = 1.0f;
                            u186 = *(float *)((t7 + 0x2C));
                            u10 = u186;
                            u10 = (u10 * t185);
                            u188 = (u10 * u9);
                        }
                        u201 = u188;
                    } else {
                        if (u11 > u10) {
                            u11 = _builtin_fabsf(u11);
                            u190 = *(float *)((a4 + 0x12C));
                            u10 = u190;
                            u11 = (u11 * u10);
                            t191 = FUN_0c021836((u11 * 6.28299999f));
                            u192 = *(float *)((t7 + 0x2C));
                            u10 = u192;
                            u9 = 7.0f;
                            u10 = (u10 * t191);
                            u10 = (u10 * u9);
                            u197 = (-u10);
                        } else {
                            u11 = _builtin_fabsf(u11);
                            u193 = *(float *)((a4 + 0x12C));
                            u10 = u193;
                            u11 = (u11 * u10);
                            t194 = FUN_0c021836((u11 * 6.28299999f));
                            u195 = *(float *)((t7 + 0x2C));
                            u10 = u195;
                            u9 = 7.0f;
                            u10 = (u10 * t194);
                            u197 = (u10 * u9);
                        }
                        u201 = u197;
                    }
                    u204 = u201;
                }
                u210 = u204;
            } else {
                t207 = t5;
                u209 = u8;
            }
            u8 = u209;
            t5 = t207;
            u10 = 0.0f;
            u213 = *(float *)((t7 + 0x1C));
            u9 = u213;
            if (u9 == u10) {
                u214 = *(float *)((t7 + 0x20));
                u9 = u214;
                if (u9 != u10) {
                    u215 = *(float *)(((int)stk + 16));
                    u10 = u215;
                    u216 = *(float *)((t7 + 0x1C));
                    u217 = *(float *)((t7 + 0x20));
                    u218 = (u216 + u10);
                    u10 = u217;
                    u10 = (u10 * u217);
                    u219 = u10;
                    u219 = u219 + u218 * u218;
                    u10 = u219;
                    u10 = _builtin_sqrtf(u10);
                    u227 = u10;
                } else {
                    u10 = 0.0f;
                    u220 = *(float *)((t7 + 0x1C));
                    u9 = u220;
                    u223 = 0.0f;
                    if (u9 == u10) {
                        u221 = *(float *)((t7 + 0x20));
                        u223 = u221;
                    }
                    u227 = u223;
                }
                u238 = u227;
            } else {
                u231 = *(float *)(((int)stk + 16));
                u10 = u231;
                u232 = *(float *)((t7 + 0x1C));
                u233 = *(float *)((t7 + 0x20));
                u234 = (u232 + u10);
                u10 = u233;
                u10 = (u10 * u233);
                u235 = u10;
                u235 = u235 + u234 * u234;
                u10 = u235;
                u10 = _builtin_sqrtf(u10);
                u238 = u10;
            }
            u10 = 0.0f;
            u242 = *(float *)((t7 + 0x14));
            u9 = u242;
            if (u9 == u10) {
                u9 = 1.0f;
                *(float *)((t7 + 0x20)) = 0.0f;
                *(float *)(((int)stk + 16)) = 0.0f;
                *(float *)((t7 + 0x18)) = 0.0f;
                *(float *)((t7 + 0x40)) = u9;
            } else {
                u243 = *(float *)((t7 + 0x14));
                u9 = u238;
                u9 = (u9 - u243);
                u9 = (u9 / u243);
                *(float *)((t7 + 0x40)) = u9;
                u244 = *(float *)((t7 + 0x14));
                u9 = u244;
                if (u238 > u9) {
                    if (u238 != u10) {
                        t245 = *(int *)((a4 + 0x3B0));
                        if (t245 == 2) {
                            u246 = *(float *)(((0x14 + t7) + 0x0));
                            u10 = u246;
                            u10 = (u10 / u238);
                            u247 = *(float *)((t7 + 0x18));
                            u9 = u247;
                            u10 = (u10 * 1.93999994f);
                            u9 = (u9 * u10);
                            *(float *)((t7 + 0x18)) = u9;
                            u248 = *(float *)(((0x14 + t7) + 0x0));
                            u10 = u248;
                            u10 = (u10 / u238);
                            u249 = *(float *)((t7 + 0x20));
                            u9 = u249;
                            u10 = (u10 * 0.0599999987f);
                            u9 = (u9 * u10);
                            *(float *)((t7 + 0x20)) = u9;
                            u250 = *(float *)((t7 + 0x14));
                            u10 = u250;
                            u10 = (u10 / u238);
                            u10 = (u10 * 1.93999994f);
                        } else {
                            u251 = *(float *)(((0x14 + t7) + 0x0));
                            u10 = u251;
                            u252 = *(float *)((t7 + 0x18));
                            u9 = u252;
                            u10 = (u10 / u238);
                            u9 = (u9 * u10);
                            *(float *)((t7 + 0x18)) = u9;
                            u253 = *(float *)(((0x14 + t7) + 0x0));
                            u10 = u253;
                            u254 = *(float *)((t7 + 0x20));
                            u9 = u254;
                            u10 = (u10 / u238);
                            u9 = (u9 * u10);
                            *(float *)((t7 + 0x20)) = u9;
                            u255 = *(float *)((t7 + 0x14));
                            u10 = u255;
                            u10 = (u10 / u238);
                        }
                        u259 = *(float *)(((int)stk + 16));
                        u9 = u259;
                        u9 = (u9 * u10);
                        *(float *)(((int)stk + 16)) = u9;
                    }
                }
            }
            t5 = 0xC078250;
            u275 = *(float *)((a4 + 0x170));
            u9 = u275;
            u276 = *(float *)(((0x40 + t7) + 0x0));
            u10 = u276;
            u9 = (u9 + u10);
            *(float *)((a4 + 0x170)) = u9;
            nlPushMatrix(0x0);
            t278 = *(int *)((a4 + 0x3B0));
            if (t278 != 2) {
                t279 = *(short *)((t7 + 0x80));
                nlRotateAY((unsigned short)t279);
            }
            t283 = *(short *)((a4 + 0x84));
            nlRotateAX((unsigned short)t283);
            t5 = 0xC078690;
            t285 = *(short *)((a4 + 0x88));
            nlRotateAZ((unsigned short)t285);
            u287 = *(float *)((t7 + 0x20));
            u10 = u287;
            t5 = 0xC077210;
            *(float *)0xC1EE148 = u10;
            *(float *)0xC1EE14C = 0.0f;
            u288 = *(float *)((t7 + 0x18));
            u10 = u288;
            *(float *)0xC1EE150 = u10;
            FUN_0c077210(0xC1EE148, (t7 + 0x44));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            t292 = *(short *)((a4 + 0x86));
            t293 = *(short *)((a4 + 0xF4));
            t5 = t293;
            t5 = (unsigned short)t5;
            t294 = *(short *)((t7 + 0x80));
            t295 = ((unsigned short)t292 - t5);
            t5 = t294;
            t5 = (unsigned short)t5;
            nlRotateAY((t295 + t5));
            t297 = *(short *)((a4 + 0x84));
            nlRotateAX((unsigned short)t297);
            t5 = 0xC078690;
            t299 = *(short *)((a4 + 0x88));
            nlRotateAZ((unsigned short)t299);
            u301 = *(float *)((t7 + 0x20));
            u10 = u301;
            t5 = 0xC077210;
            u10 = (u10 + u210);
            *(float *)0xC1EE148 = u10;
            *(float *)0xC1EE14C = 0.0f;
            u302 = *(float *)(((int)stk + 44));
            u10 = u302;
            u303 = *(float *)((t7 + 0x18));
            u9 = u303;
            u304 = *(float *)(((int)stk + 16));
            u8 = u304;
            u9 = (u9 + u10);
            u9 = (u9 + u8);
            *(float *)0xC1EE150 = u9;
            FUN_0c077210(0xC1EE148, (t7 + 0x50));
            nlPopMatrix(0x1);
            t5 = 0x84;
            u10 = 6.28317976f;
            u307 = *(float *)((t7 + 0x58));
            u9 = u307;
            u308 = *(float *)(((int)stk + 36));
            u8 = u308;
            u9 = (u9 / u10);
            t6 = (t6 + 0x1);
            t7 = (t7 + t5);
            u8 = (u8 + u9);
            *(float *)(((int)stk + 36)) = u8;
            continue;
        }
        break;
    }
    u309 = *(float *)((a4 + 0x170));
    *(float *)((a4 + 0x170)) = (u309 * 0.25f);
    u310 = *(float *)((a4 + 0x170));
    if (u310 > 1.0f) {
        *(float *)((a4 + 0x170)) = 1.0f;
    }
    u312 = *(float *)((a4 + 0x168));
    u313 = *(float *)(((((int)stk + 4) + 0x1C) + 0x0));
    *(float *)((a4 + 0x168)) = (u312 + u313);
    u314 = *(float *)((a4 + 0x16C));
    u315 = *(float *)(((((int)stk + 4) + 0x18) + 0x0));
    *(float *)((a4 + 0x16C)) = (u314 + u315);
    u316 = *(float *)((a4 + 0x160));
    u317 = *(float *)(((((int)stk + 4) + 0x20) + 0x0));
    u318 = *(float *)((a4 + 0x160));
    *(float *)((a4 + 0x160)) = (u316 + u317);
    if (u318 > 0.0f) {
        u319 = *(float *)((a4 + 0x160));
        if (!(0.0f > u319)) {
            if (0.0f > u318) {
                u320 = *(float *)((a4 + 0x160));
                if (u320 > 0.0f) {
                    *(float *)((a4 + 0x160)) = 0.0f;
                }
            }
        } else {
            *(float *)((a4 + 0x160)) = 0.0f;
        }
    } else {
        if (0.0f > u318) {
            u326 = *(float *)((a4 + 0x160));
            if (u326 > 0.0f) {
                *(float *)((a4 + 0x160)) = 0.0f;
            }
        }
    }
    u332 = *(float *)((a4 + 0x160));
    u333 = *(float *)((a4 + 0x12C));
    *(float *)((a4 + 0x15C)) = (((u332 / 3600.0f) * u333) * 6.28299999f);
    return 0x15C;
}
