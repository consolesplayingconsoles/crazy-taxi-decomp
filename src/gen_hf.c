/* Straight-line functions with calls and guards (batch gen_hf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlSqrt(int, int);
int GetCollision2D(int, float);
float getNearLineIndex(int, int, int, int);
int getNearLineIndexAll(int);
int nlFastSinCos(int, int, int);
float nlLength(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSetTranslate(int);
void FUN_0c0231b4(int a4);

void FUN_0c0231b4(int a4)
{
    int t2;
    int t4;
    int t6;
    int t8;
    int t9;
    int t10;
    float u11;
    float u13;
    int t14;
    float u15;
    float u16;
    float u17;
    int t20;
    int t21;
    int t22;
    int t23;
    float u26;
    float u27;
    int t28;
    float u29;
    float u30;
    int t31;
    float u32;
    float u33;
    float u34;
    int t35;
    float u41;
    float u42;
    float u43;
    int t62;
    int t71;
    int t73;
    float u75;
    int t80;
    int t81;
    float u83;
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
    int t104;
    int t105;
    int t106;
    int t107;
    int t108;
    float u109;
    int t110;
    int t111;
    int t112;
    int t113;
    int t114;
    float t115;
    int t116;
    int t117;
    int t118;
    int t119;
    int t120;
    int t121;
    int t126;
    int t127;
    int t128;
    float u129;
    int t130;
    int t131;
    int t132;
    int t133;
    int t134;
    int t135;
    int t136;
    int t137;
    float t138;
    int t139;
    int t140;
    int t141;
    int t142;
    int t143;
    int t144;
    int t149;
    int t150;
    int t151;
    int t152;
    int t153;
    float t155;
    int t156;
    int t157;
    int t158;
    int t159;
    int t160;
    int t161;
    float u186;
    int t187;
    int t188;
    int t189;
    int t203;
    int t204;
    int t205;
    int t206;
    int t207;
    int t208;
    float u226;
    float u236;
    float u227;
    float u228;
    float u233;
    float u238;
    float u265;
    float u239;
    float u240;
    int t245;
    float u247;
    float u248;
    float u249;
    float u250;
    int t251;
    int t252;
    int t253;
    float u254;
    float u255;
    float u256;
    float u257;
    float u231;
    float u229;
    int stk[28] = {0};

    *(unsigned int *)(((int)stk + 24)) = 0x0;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)0xC179490 = 0xFFFFFFFF;
    nlPushMatrix(0x0);
    nlSetTranslate((a4 + 0x78));
    t2 = *(short *)((a4 + 0x86));
    nlRotateAY((unsigned short)t2);
    t4 = *(short *)((a4 + 0x84));
    nlRotateAX((unsigned short)t4);
    t6 = *(short *)((a4 + 0x88));
    nlRotateAZ((unsigned short)t6);
    *(unsigned int *)(((int)stk + 8)) = (0x1A0 + a4);
    t8 = *(int *)((a4 + 0x6C));
    t9 = 0x4;
    t10 = t8;
    u11 = 0.0f;
    for (;;) {
        nlPushMatrix(0x0);
        u13 = *(float *)((t10 + 0x0));
        *(float *)0xC1EE148 = u13;
        t14 = *(int *)(((int)stk + 8));
        u15 = *(float *)((t14 + 0x30));
        u16 = *(float *)((a4 + 0x12C));
        *(float *)0xC1EE14C = ((u16 - u15) + -0.699999988f);
        u17 = *(float *)((t10 + 0x8));
        *(float *)0xC1EE150 = u17;
        nlSqrt(0xC1EE148, 0xC1EE154);
        nlPopMatrix(0x1);
        t20 = GetCollision2D(0xC1EE154, 20.0f);
        t21 = *(int *)((t20 + 0x1C));
        if (t21 != -1) {
            t22 = *(int *)0xC179490;
            if (t22 == -1) {
                t23 = *(int *)((t20 + 0x1C));
                *(unsigned int *)0xC179490 = t23;
            }
            u26 = *(float *)((t20 + 0x18));
            u27 = *(float *)0xC1EE158;
            if (u26 > u27) {
                t28 = *(int *)(((int)stk + 12));
                *(unsigned int *)(((int)stk + 12)) = (t28 + 0x1);
                u29 = *(float *)((t20 + 0x18));
                if ((u29 - u27) > u11) {
                    u30 = *(float *)((t20 + 0x18));
                    if (!(25.0f > ((u30 - u27) + 1.0f))) {
                        t31 = *(int *)0xC0DAEC4;
                        if ((int)t31 > (int)0x1E) {
                            u32 = *(float *)((t20 + 0x18));
                            *(unsigned short *)((a4 + 0x19A)) = 0x0;
                            *(unsigned short *)((a4 + 0x198)) = 0x0;
                            *(unsigned short *)((a4 + 0x19C)) = 0x0;
                            u11 = (u32 - u27);
                            u11 = (u11 + 1.0f);
                            u33 = *(float *)((a4 + 0x100));
                            *(float *)((a4 + 0x100)) = (u33 * 0.099999994f);
                            u34 = *(float *)((a4 + 0x15C));
                            *(float *)((a4 + 0x15C)) = (u34 * 0.099999994f);
                            *(unsigned int *)0xC0DAEC4 = 0x0;
                        } else {
                            t35 = *(int *)0xC0DAEC4;
                            *(unsigned int *)0xC0DAEC4 = (t35 + 0x1);
                        }
                    } else {
                        u41 = *(float *)((t20 + 0x18));
                        *(unsigned short *)((a4 + 0x19A)) = 0x0;
                        *(unsigned short *)((a4 + 0x198)) = 0x0;
                        *(unsigned short *)((a4 + 0x19C)) = 0x0;
                        u11 = (u41 - u27);
                        u11 = (u11 + 1.0f);
                        u42 = *(float *)((a4 + 0x100));
                        *(float *)((a4 + 0x100)) = (u42 * 0.099999994f);
                        u43 = *(float *)((a4 + 0x15C));
                        *(float *)((a4 + 0x15C)) = (u43 * 0.099999994f);
                        *(unsigned int *)0xC0DAEC4 = 0x0;
                    }
                }
            }
        } else {
            t62 = *(int *)(((int)stk + 24));
            *(unsigned int *)(((int)stk + 24)) = (t62 + 0x1);
        }
        t9 = (t9 - 0x1);
        t71 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t71 + 0x84);
        t10 = (t10 + 0xC);
        if (t9 != 0) continue;
        break;
    }
    nlPopMatrix(0x1);
    t73 = *(int *)(((int)stk + 12));
    if (t73 == 0) {
        *(unsigned int *)0xC0DAEC4 = 0x0;
    }
    if (u11 > 0.0f) {
        *(unsigned int *)0xC0DAEC4 = 0x0;
        u75 = *(float *)((a4 + 0x7C));
        *(float *)((a4 + 0x7C)) = (u75 + u11);
        *(float *)((a4 + 0x90)) = (u75 + u11);
    }
    t80 = *(int *)(((int)stk + 24));
    if ((int)t80 <= (int)0x3) {
    } else {
        t81 = *(int *)0xC1EE20C;
        if (t81 == 2) {
            getNearLineIndexAll((a4 + 0x78));
            u83 = *(float *)((a4 + 0x7C));
            *(float *)((a4 + 0x7C)) = (u83 + 30.0f);
            t84 = *(int *)(((a4 + 0x78) + 0x8));
            t85 = *(int *)(((a4 + 0x78) + 0x4));
            *(unsigned int *)(((0x8C + a4) + 0x8)) = t84;
            t86 = *(int *)(((a4 + 0x78) + 0x0));
            *(unsigned int *)(((0x8C + a4) + 0x4)) = t85;
            *(unsigned int *)(((0x8C + a4) + 0x0)) = t86;
            t87 = *(int *)0xC1EE20C;
            if (t87 == 2) {
                t88 = *(int *)0xC1EE214;
                if (t88 == 3) {
                    t89 = *(signed char *)0xC08ADAC;
                    *(unsigned char *)(((0x84 + a4) + 0x0)) = t89;
                    t90 = *(signed char *)0xC08ADAD;
                    *(unsigned char *)(((0x84 + a4) + 0x1)) = t90;
                    t91 = *(signed char *)0xC08ADAE;
                    *(unsigned char *)(((0x84 + a4) + 0x2)) = t91;
                    t92 = *(signed char *)0xC08ADAF;
                    *(unsigned char *)(((0x84 + a4) + 0x3)) = t92;
                    t93 = *(signed char *)0xC08ADB0;
                    *(unsigned char *)(((0x84 + a4) + 0x4)) = t93;
                    t94 = *(signed char *)0xC08ADB1;
                    *(unsigned char *)(((0x84 + a4) + 0x5)) = t94;
                    *(float *)((a4 + 0x160)) = 0.0f;
                }
            }
        } else {
            if (t81 != 1) {
                getNearLineIndexAll((a4 + 0x78));
            } else {
                t104 = *(int *)0xC179490;
                if ((int)t104 >= (int)0x14) {
                    t105 = *(int *)(((a4 + 0x78) + 0x8));
                    t106 = *(int *)(((a4 + 0x78) + 0x4));
                    *(unsigned int *)(((((int)stk + 8) + 0x2C) + 0x8)) = t105;
                    t107 = *(int *)(((a4 + 0x78) + 0x0));
                    *(unsigned int *)(((((int)stk + 8) + 0x2C) + 0x4)) = t106;
                    *(unsigned int *)(((((int)stk + 8) + 0x2C) + 0x0)) = t107;
                    *(unsigned int *)(((int)stk + 12)) = 0x0;
                    *(unsigned int *)(((int)stk + 8)) = 0x0;
                    t108 = 0x0;
                    u109 = 99999.8984f;
                    for (;;) {
                        t110 = *(int *)0xC2A6690;
                        t111 = *(int *)(((int)stk + 8));
                        t112 = *(int *)((((t111 + t110) + 0xEDC) + 0x4));
                        t113 = *(int *)((((t111 + t110) + 0xEDC) + 0x0));
                        t114 = *(int *)((t112 + 0x0));
                        t115 = getNearLineIndex(0x0, t113, t114, (((int)stk + 4) + 0x10));
                        if (u109 > t115) {
                            t116 = *(int *)0xC2A6690;
                            t117 = *(int *)(((int)stk + 20));
                            u109 = t115;
                            t118 = *(int *)((((t116 + t108) + 0xEDC) + 0x0));
                            t119 = *(int *)(((t118 + (((t117 << 1) + t117) << 2)) + 0x8));
                            t120 = *(int *)(((t118 + (((t117 << 1) + t117) << 2)) + 0x4));
                            *(unsigned int *)(((a4 + 0x78) + 0x8)) = t119;
                            t121 = *(int *)(((t118 + (((t117 << 1) + t117) << 2)) + 0x0));
                            *(unsigned int *)(((a4 + 0x78) + 0x4)) = t120;
                            *(unsigned int *)(((a4 + 0x78) + 0x0)) = t121;
                        }
                        t126 = *(int *)(((int)stk + 12));
                        t108 = (t108 + 0xC);
                        *(unsigned int *)(((int)stk + 12)) = (t126 + 0x1);
                        t127 = *(int *)(((int)stk + 8));
                        *(unsigned int *)(((int)stk + 8)) = (t127 + 0xC);
                        if ((int)(t126 + 0x1) >= (int)0x2) {
                            break;
                        }
                    }
                } else {
                    *(unsigned int *)(((int)stk + 12)) = 0x0;
                    *(unsigned int *)(((int)stk + 8)) = 0x0;
                    t128 = 0x0;
                    u129 = 99999.8984f;
                    for (;;) {
                        t130 = *(int *)(((a4 + 0x78) + 0x8));
                        t131 = *(int *)(((a4 + 0x78) + 0x4));
                        *(unsigned int *)(((((int)stk + 8) + 0x2C) + 0x8)) = t130;
                        t132 = *(int *)(((a4 + 0x78) + 0x0));
                        *(unsigned int *)(((((int)stk + 8) + 0x2C) + 0x4)) = t131;
                        *(unsigned int *)(((((int)stk + 8) + 0x2C) + 0x0)) = t132;
                        t133 = *(int *)0xC2A6690;
                        t134 = *(int *)(((int)stk + 8));
                        t135 = *(int *)((((t134 + t133) + 0xEC4) + 0x4));
                        t136 = *(int *)((((t134 + t133) + 0xEC4) + 0x0));
                        t137 = *(int *)((t135 + 0x0));
                        t138 = getNearLineIndex(0x0, t136, t137, (((int)stk + 4) + 0xC));
                        if (u129 > t138) {
                            t139 = *(int *)0xC2A6690;
                            t140 = *(int *)(((int)stk + 16));
                            u129 = t138;
                            t141 = *(int *)((((t139 + t128) + 0xEC4) + 0x0));
                            t142 = *(int *)(((t141 + (((t140 << 1) + t140) << 2)) + 0x8));
                            t143 = *(int *)(((t141 + (((t140 << 1) + t140) << 2)) + 0x4));
                            *(unsigned int *)(((((int)stk + 8) + 0x20) + 0x8)) = t142;
                            t144 = *(int *)(((t141 + (((t140 << 1) + t140) << 2)) + 0x0));
                            *(unsigned int *)(((((int)stk + 8) + 0x20) + 0x4)) = t143;
                            *(unsigned int *)(((((int)stk + 8) + 0x20) + 0x0)) = t144;
                        }
                        t149 = *(int *)(((int)stk + 12));
                        t128 = (t128 + 0xC);
                        *(unsigned int *)(((int)stk + 12)) = (t149 + 0x1);
                        t150 = *(int *)(((int)stk + 8));
                        *(unsigned int *)(((int)stk + 8)) = (t150 + 0xC);
                        if ((int)(t149 + 0x1) >= (int)0x2) {
                            break;
                        }
                    }
                    t151 = *(int *)(((a4 + 0x78) + 0x8));
                    t152 = *(int *)(((a4 + 0x78) + 0x4));
                    *(unsigned int *)(((((int)stk + 8) + 0x2C) + 0x8)) = t151;
                    t153 = *(int *)(((a4 + 0x78) + 0x0));
                    *(unsigned int *)(((((int)stk + 8) + 0x2C) + 0x4)) = t152;
                    *(unsigned int *)(((((int)stk + 8) + 0x2C) + 0x0)) = t153;
                    getNearLineIndexAll((((int)stk + 8) + 0x2C));
                    t155 = nlLength((((int)stk + 8) + 0x2C), (a4 + 0x78));
                    if (t155 > u129) {
                        t156 = *(int *)(((((int)stk + 8) + 0x20) + 0x8));
                        t157 = *(int *)(((((int)stk + 8) + 0x20) + 0x4));
                        *(unsigned int *)(((a4 + 0x78) + 0x8)) = t156;
                        t158 = *(int *)(((((int)stk + 8) + 0x20) + 0x0));
                        *(unsigned int *)(((a4 + 0x78) + 0x4)) = t157;
                        *(unsigned int *)(((a4 + 0x78) + 0x0)) = t158;
                    } else {
                        t159 = *(int *)(((((int)stk + 8) + 0x2C) + 0x8));
                        t160 = *(int *)(((((int)stk + 8) + 0x2C) + 0x4));
                        *(unsigned int *)(((a4 + 0x78) + 0x8)) = t159;
                        t161 = *(int *)(((((int)stk + 8) + 0x2C) + 0x0));
                        *(unsigned int *)(((a4 + 0x78) + 0x4)) = t160;
                        *(unsigned int *)(((a4 + 0x78) + 0x0)) = t161;
                    }
                }
            }
            u186 = *(float *)((a4 + 0x7C));
            *(float *)((a4 + 0x7C)) = (u186 + 30.0f);
            t187 = *(int *)(((a4 + 0x78) + 0x8));
            t188 = *(int *)(((a4 + 0x78) + 0x4));
            *(unsigned int *)(((0x8C + a4) + 0x8)) = t187;
            t189 = *(int *)(((a4 + 0x78) + 0x0));
            *(unsigned int *)(((0x8C + a4) + 0x4)) = t188;
            *(unsigned int *)(((0x8C + a4) + 0x0)) = t189;
        }
        *(float *)((a4 + 0x160)) = 0.0f;
        *(float *)((a4 + 0x15C)) = 0.0f;
        t203 = *(int *)0xC08AD9C;
        t204 = *(int *)0xC08AD98;
        *(unsigned int *)(((0xFC + a4) + 0x8)) = t203;
        t205 = *(int *)0xC08AD94;
        *(unsigned int *)(((0xFC + a4) + 0x4)) = t204;
        *(unsigned int *)(((0xFC + a4) + 0x0)) = t205;
        t206 = *(int *)0xC08AD9C;
        t207 = *(int *)0xC08AD98;
        *(unsigned int *)(((0x108 + a4) + 0x8)) = t206;
        t208 = *(int *)0xC08AD94;
        *(unsigned int *)(((0x108 + a4) + 0x4)) = t207;
        *(unsigned int *)(((0x108 + a4) + 0x0)) = t208;
    }
    u226 = *(float *)((a4 + 0x100));
    u236 = _builtin_fabsf(u226);
    if (_builtin_fabsf(u226) > 16.5f) {
        u227 = *(float *)((a4 + 0x100));
        if (u227 > 18.0f) {
            *(float *)((a4 + 0x100)) = 18.0f;
            u231 = u227;
        } else {
            if (-18.0f > u227) {
                *(float *)((a4 + 0x100)) = -18.0f;
                u229 = u227;
            } else {
                u228 = *(float *)((a4 + 0x100));
                *(float *)((a4 + 0x100)) = (u228 * 0.849999964f);
                u229 = (u228 * 0.849999964f);
            }
            u231 = u229;
        }
        u233 = *(float *)((a4 + 0x100));
        *(float *)((a4 + 0x10C)) = u233;
        u236 = u231;
    }
    u238 = *(float *)((a4 + 0x15C));
    u265 = _builtin_fabsf(u238);
    if (_builtin_fabsf(u238) > 14.5f) {
        u239 = *(float *)((a4 + 0x15C));
        if (u239 > 18.0f) {
            *(float *)((a4 + 0x15C)) = 18.0f;
        } else {
            if (-18.0f > u239) {
                *(float *)((a4 + 0x15C)) = -18.0f;
            } else {
                u240 = *(float *)((a4 + 0x15C));
                *(float *)((a4 + 0x15C)) = (u240 * 0.849999964f);
            }
        }
        t245 = *(short *)((a4 + 0xF4));
        nlFastSinCos((unsigned short)t245, (0xFC + a4), (0x104 + a4));
        u247 = *(float *)((a4 + 0xFC));
        u248 = *(float *)(((0x15C + a4) + 0x0));
        *(float *)((a4 + 0xFC)) = (u247 * u248);
        u249 = *(float *)((a4 + 0x104));
        u250 = *(float *)(((0x15C + a4) + 0x0));
        *(float *)((a4 + 0x104)) = (u249 * u250);
        t251 = *(int *)(((0xFC + a4) + 0x8));
        t252 = *(int *)(((0xFC + a4) + 0x4));
        *(unsigned int *)(((0x108 + a4) + 0x8)) = t251;
        t253 = *(int *)(((0xFC + a4) + 0x0));
        *(unsigned int *)(((0x108 + a4) + 0x4)) = t252;
        *(unsigned int *)(((0x108 + a4) + 0x0)) = t253;
        u254 = *(float *)0xC02375C;
        u255 = *(float *)((a4 + 0x15C));
        u256 = *(float *)0xC023760;
        u257 = *(float *)((a4 + 0x12C));
        *(float *)((a4 + 0x160)) = ((u255 * u254) / (u257 * u256));
        u265 = u254;
    }
}
