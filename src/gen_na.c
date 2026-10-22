/* Straight-line functions with calls and guards (batch gen_na): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Money_Array(int, int, int);
int nd_SprPut(int, int, float, float);
int End_Ranking(void);
int Put_Ranking_Header(void);
int Reset_Ranking_Wave(void);
int Check_Digit_Disp(int, int);
int ResetFadeColor(void);
int nlObjPutSetFadeColor(float, float, float);
int nlSprPut(int);
int Put_Ranking(int a4);

int Put_Ranking(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t15;
    int t16;
    int t17;
    int t28;
    int t29;
    int t45;
    int t240;
    int t46;
    int t48;
    int t50;
    int t51;
    int t52;
    int t61;
    int t62;
    int t63;
    float u64;
    float u65;
    int t77;
    float u78;
    int t79;
    int t80;
    int t81;
    int t82;
    int t83;
    int t84;
    float u85;
    int t86;
    int t87;
    int t88;
    int t89;
    int t90;
    int t94;
    int t95;
    int t96;
    int t97;
    int t98;
    int t99;
    int t100;
    int t112;
    int t113;
    int t114;
    int t115;
    int t116;
    int t117;
    int t119;
    int t120;
    int t121;
    float u122;
    int t123;
    int t124;
    int t125;
    int t126;
    int t127;
    int t128;
    int t129;
    int t130;
    float u131;
    int t132;
    int t133;
    int t134;
    int t141;
    int t142;
    int t143;
    int t144;
    int t145;
    int t146;
    int t147;
    int t148;
    int t149;
    int t150;
    int t153;
    int t156;
    int t157;
    int t158;
    int t159;
    int t160;
    int t162;
    int t163;
    float u164;
    int t165;
    int t166;
    int t169;
    int t170;
    int t171;
    int t172;
    int t173;
    int t174;
    int t175;
    int t176;
    int t177;
    int t182;
    int t183;
    int t184;
    int t189;
    int t190;
    int t191;
    int t196;
    int t197;
    int t198;
    int t199;
    int t200;
    int t201;
    int t202;
    int t203;
    int t204;
    int t205;
    int t206;
    int t223;
    int t235;
    int t224;
    int t230;
    int t225;
    int t253;
    int t47;
    float u49;
    int t118;
    int t135;
    int t136;
    int t138;
    float u139;
    int t226;
    int stk[29] = {0};

    { struct mv8 { int w[8]; }; *(struct mv8 *)((((int)stk + 4) + 0x1C)) = *(struct mv8 *)(0xC0D0ACC); }
    t0 = *(int *)0xC2A96A4;
    if (t0 == 2) {
        t1 = *(int *)0xC2A9690;
        *(unsigned int *)0xC2A9690 = (t1 - 64);
        t2 = *(int *)0xC2A9694;
        *(unsigned int *)0xC2A9694 = (t2 + 0x40);
        t3 = *(int *)0xC2A9698;
        *(unsigned int *)0xC2A9698 = (t3 - 64);
        t4 = *(int *)0xC2A969C;
        *(unsigned int *)0xC2A969C = (t4 + 0x40);
        t5 = *(int *)0xC2A96A0;
        *(unsigned int *)0xC2A96A0 = (t5 - 64);
        t6 = *(int *)0xC2A9690;
        if (t6 == 0xFFFFFD80) {
            *(unsigned int *)0xC2A96A4 = 0x3;
        }
    }
    t15 = *(int *)0xC2A96A4;
    if (t15 == 3) {
        t16 = *(int *)0xC2A96BC;
        *(unsigned int *)0xC2A96BC = (t16 + 0x1);
        if ((int)(t16 + 0x1) >= (int)0x3C) {
            *(unsigned int *)0xC2A9690 = 0x0;
            *(unsigned int *)0xC2A9694 = 0x0;
            *(unsigned int *)0xC2A9698 = 0x0;
            *(unsigned int *)0xC2A969C = 0x0;
            *(unsigned int *)0xC2A96A0 = 0x0;
            *(unsigned int *)0xC2A96A4 = 0x1;
            *(unsigned int *)0xC2A96BC = 0x0;
            *(unsigned int *)0xC2A9684 = 0xA;
            t17 = *(int *)0xC2A96C0;
            *(unsigned int *)0xC2A96C0 = (t17 + 0x1);
        }
    }
    t28 = *(int *)0xC2A96A4;
    if (t28 == 4) {
        t29 = *(int *)0xC2A96BC;
        *(unsigned int *)0xC2A96BC = (t29 + 0x1);
        if ((int)(t29 + 0x1) >= (int)0x3C) {
            End_Ranking();
        }
    }
    Put_Ranking_Header();
    Reset_Ranking_Wave();
    t45 = *(int *)0xC2A96A4;
    t240 = 0xC2A96A4;
    if ((int)t45 < (int)0x1) {
    } else {
        *(unsigned int *)(((int)stk + 16)) = (((int)stk + 4) + 0x1C);
        *(unsigned int *)(((int)stk + 24)) = (((int)stk + 4) + 0x30);
        *(unsigned int *)(((int)stk + 20)) = (((int)stk + 4) + 0x34);
        *(unsigned int *)(((int)stk + 28)) = (((int)stk + 4) + 0x38);
        t46 = 0xC05837C;
        t48 = 0x0;
        for (;;) {
            t50 = *(int *)0xC2A9684;
            if ((int)(t50 - 10) < (int)(((t48 << 2) + t48) << 1)) {
            } else {
                if ((int)(t50 - 10) < (int)0x3C) {
                    t46 = 0xA;
                    t51 = (int)((int)(t50 - 10) % (int)t46);
                    t46 = t51;
                    if (t46 == 0) {
                        *(unsigned int *)0xC2A96A8 = 0x1;
                        *(unsigned short *)0xC2A96AC = 0x0;
                        *(float *)0xC2A96B0 = 0.5f;
                        *(float *)0xC2A96B4 = 0.0f;
                        t52 = *(int *)0xC2A96B8;
                        t46 = t52;
                        t46 = (t46 + 0x1);
                        *(unsigned int *)0xC2A96B8 = t46;
                    }
                }
                *(unsigned int *)0xC2A91D8 = 0x4B;
                t61 = *(int *)0xC2A9684;
                t47 = t48;
                t47 = (t47 << 2);
                if ((int)(t61 - 10) < (int)0x3C) {
                    t46 = 0xA;
                    t62 = (int)((int)(t61 - 10) / (int)t46);
                    t46 = t62;
                    if (t46 == t48) {
                        t46 = t47;
                        t63 = *(int *)((0xC2A9690 + t46));
                        t46 = 0x14;
                        u64 = *(float *)0xC2A96B4;
                        *(float *)0xC2A91E8 = (((float)t63 + u64) + 0.5f);
                        u65 = *(float *)0xC2A96B4;
                        *(float *)((0xC2A91D8 + t46)) = (u65 + 0.5f);
                    } else {
                        t46 = 0x10;
                        *(float *)((0xC2A91D8 + t46)) = 0.5f;
                        t46 = 0x14;
                        *(float *)((0xC2A91D8 + t46)) = 0.5f;
                    }
                } else {
                    t46 = 0x10;
                    *(float *)((0xC2A91D8 + t46)) = 0.5f;
                    t46 = 0x14;
                    *(float *)((0xC2A91D8 + t46)) = 0.5f;
                }
                t46 = t47;
                t77 = *(int *)((0xC2A9690 + t46));
                t46 = 0x8;
                *(float *)0xC2A91DC = (float)(t77 + 0x4E);
                *(unsigned int *)(((int)stk + 8)) = (t48 * 0x3C);
                *(float *)((0xC2A91D8 + t46)) = (float)((t48 * 0x3C) + 0x60);
                t46 = 0xC058550;
                u78 = *(float *)((t46 + 0x0));
                t46 = 0xC;
                *(float *)((0xC2A91D8 + t46)) = u78;
                *(unsigned int *)0xC2A920C = 0xA;
                *(unsigned int *)0xC2A9200 = 0x0;
                t79 = nlSprPut(0xC2A91D8);
                t46 = t79;
                t80 = *(int *)0xC2A96C0;
                t46 = 0xA;
                t81 = (int)((int)((((t80 << 2) + t80) + t48) + 0x1) / (int)t46);
                t46 = t81;
                *(unsigned int *)(((int)stk + 4)) = t46;
                t46 = 0xA;
                t82 = (int)((int)((((t80 << 2) + t80) + t48) + 0x1) % (int)t46);
                t46 = t82;
                t83 = nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
                t84 = t46;
                t46 = t83;
                t46 = 0xC058568;
                u85 = *(float *)((t46 + 0x0));
                t46 = 0xC;
                *(float *)((0xC2A91D8 + t46)) = u85;
                t86 = *(int *)(((int)stk + 4));
                if (t86 != 0) {
                    t87 = *(int *)(((int)stk + 4));
                    t46 = 0xC0D0CD0;
                    t88 = *(int *)(((t87 << 2) + t46));
                    *(unsigned int *)0xC2A91D8 = t88;
                    t46 = t47;
                    t89 = *(int *)((0xC2A9690 + t46));
                    *(float *)0xC2A91DC = (float)(t89 + 0x36);
                    t90 = nlSprPut(0xC2A91D8);
                    t46 = t90;
                }
                t46 = 0xC0D0CD0;
                t94 = *(int *)(((t84 << 2) + t46));
                *(unsigned int *)0xC2A91D8 = t94;
                t46 = 0x4;
                *(unsigned int *)(((int)stk + 12)) = (t47 + 0xC2A9690);
                t95 = *(int *)(((t47 + 0xC2A9690) + 0x0));
                *(float *)((0xC2A91D8 + t46)) = (float)(t95 + 0x56);
                t96 = nlSprPut(0xC2A91D8);
                t46 = t96;
                *(unsigned int *)0xC2A91D8 = 0x4F;
                t46 = 0x4;
                t97 = *(int *)(((int)stk + 12));
                t98 = *(int *)((t97 + 0x0));
                *(float *)((0xC2A91D8 + t46)) = (float)(t98 + 0x72);
                t46 = 0x8;
                t99 = *(int *)(((int)stk + 8));
                *(float *)((0xC2A91D8 + t46)) = (float)(t99 + 0x64);
                t100 = *(int *)(((int)stk + 4));
                if (t100 == 0) {
                    t46 = t84;
                    if (t46 == 1) {
                        *(unsigned int *)0xC2A91D8 = 0x4E;
                    } else {
                        if (t46 == 2) {
                            *(unsigned int *)0xC2A91D8 = 0x4C;
                        } else {
                            t46 = t84;
                            if (t46 == 3) {
                                *(unsigned int *)0xC2A91D8 = 0x4D;
                            }
                        }
                    }
                }
                t112 = nlSprPut(0xC2A91D8);
                t46 = t112;
                t113 = ResetFadeColor();
                t46 = t113;
                t114 = *(int *)0xC2A9684;
                if ((int)t114 < (int)0x46) {
                } else {
                    t46 = 0xC2A9684;
                    t115 = *(int *)((t46 + 0x0));
                    t46 = 0xA;
                    t116 = (int)((int)(t115 - 70) / (int)t46);
                    t46 = t116;
                    if ((int)t46 < (int)t48) {
                    } else {
                        t46 = 0x10;
                        *(unsigned int *)0xC2A920C = 0xA;
                        *(float *)((0xC2A91D8 + t46)) = 1.0f;
                        t46 = 0x14;
                        *(float *)((0xC2A91D8 + t46)) = 1.0f;
                        *(unsigned int *)(((int)stk + 12)) = (t47 + 0xC2A9690);
                        t117 = *(int *)(((int)stk + 8));
                        u49 = (float)(t117 + 0x60);
                        t119 = (t117 + 0x60);
                        t120 = a4;
                        t121 = 0x0;
                        u122 = (float)(t117 + 0x60);
                        for (;;) {
                            if ((int)t121 >= (int)0x3) {
                                break;
                            }
                            t118 = 0xC1EE20C;
                            t123 = *(short *)((t118 + 0x0));
                            t119 = t123;
                            t118 = 0xC2A96C0;
                            t124 = *(int *)((t118 + 0x0));
                            t125 = ((short)t119 * (short)0x3C0);
                            t119 = t124;
                            t118 = t119;
                            t119 = (t119 << 2);
                            t46 = t125;
                            t119 = (t119 + t118);
                            t118 = 0xC28C318;
                            t119 = (t119 + t48);
                            t46 = (short)t46;
                            t119 = (t119 << 2);
                            t46 = (t46 + t118);
                            t119 = (t119 << 2);
                            t46 = (t46 + t119);
                            t120 = t46;
                            t120 = (t120 + 0x6);
                            t120 = (t120 + t121);
                            t46 = 0xC0D0AF0;
                            t126 = *(signed char *)((t120 + 0x0));
                            t120 = t126;
                            t120 = (t120 - 32);
                            t120 = (signed char)t120;
                            t120 = (t120 << 2);
                            t119 = t120;
                            *(unsigned int *)(((int)stk + 4)) = t120;
                            t127 = *(int *)((t119 + t46));
                            t46 = t127;
                            if (t46 != 0x5F5E0FF) {
                                t119 = t121;
                                t119 = (t119 << 2);
                                t128 = *(int *)(((int)stk + 12));
                                t118 = t128;
                                t119 = (t119 << 2);
                                t119 = (t119 + t121);
                                t129 = *(int *)((t118 + 0x0));
                                t119 = (t119 << 1);
                                t118 = 0xA4;
                                t46 = 0x4;
                                t119 = (t119 + t129);
                                t120 = 0xC2A91D8;
                                t119 = (t119 + t118);
                                t130 = t119;
                                t119 = 0xC05778A;
                                u122 = (float)t130;
                                *(float *)((0xC2A91D8 + t46)) = u122;
                                t46 = 0x8;
                                *(float *)((0xC2A91D8 + t46)) = u49;
                                t46 = 0x4;
                                u131 = *(float *)((0xC2A91D8 + t46));
                                t46 = 0xC0D0AF0;
                                t132 = *(int *)(((int)stk + 4));
                                t133 = *(int *)((t132 + t46));
                                t134 = nd_SprPut(t120, t133, u131, u49);
                                t46 = t134;
                            } else {
                                t135 = t118;
                                t136 = t119;
                                t138 = t120;
                                u139 = u122;
                            }
                            u122 = u139;
                            t118 = t135;
                            t119 = t136;
                            t120 = t138;
                            t121 = (t121 + 0x1);
                        }
                        t141 = *(short *)0xC1EE20C;
                        t46 = 0xC2A96C0;
                        t142 = *(int *)((t46 + 0x0));
                        t143 = *(int *)(((((short)((short)t141 * (short)0x3C0) + 0xC28C318) + (((((t142 << 2) + t142) + t48) << 2) << 2)) + 0x0));
                        t144 = *(int *)(((int)stk + 16));
                        t145 = Money_Array(t144, t143, 0x8);
                        t46 = t145;
                        t146 = *(int *)(((int)stk + 8));
                        t46 = t47;
                        t147 = *(int *)((0xC2A9690 + t46));
                        t148 = nd_SprPut(0xC2A91D8, 0x5B, (float)(t147 + 0x112), (float)(t146 + 0x60));
                        t46 = t148;
                        *(unsigned int *)(((int)stk + 12)) = (t47 + 0xC2A9690);
                        t149 = *(int *)(((int)stk + 8));
                        u49 = (float)(t149 + 0x60);
                        t150 = 0x0;
                        for (;;) {
                            *(unsigned int *)(((int)stk + 4)) = 0x0;
                            if ((int)t150 < (int)0x5) {
                                *(unsigned int *)(((int)stk + 4)) = 0x8;
                            }
                            if ((int)t150 < (int)0x2) {
                                t153 = *(int *)(((int)stk + 4));
                                *(unsigned int *)(((int)stk + 4)) = (t153 + 0x8);
                            }
                            t156 = *(int *)(((int)stk + 16));
                            t157 = Check_Digit_Disp(t156, t150);
                            t46 = t157;
                            if (t46 == 1) {
                                t158 = *(int *)(((int)stk + 12));
                                t159 = *(int *)(((int)stk + 4));
                                t46 = t159;
                                t160 = *(int *)((t158 + 0x0));
                                t162 = (((((0x8 - t150) * 0x1A) + t160) + t46) + 0x116);
                                t46 = 0x4;
                                *(float *)((0xC2A91D8 + t46)) = (float)t162;
                                t46 = 0x8;
                                *(float *)((0xC2A91D8 + t46)) = u49;
                                t46 = 0x4;
                                t163 = *(int *)((((t150 << 2) + (((int)stk + 4) + 0x1C)) + 0x0));
                                u164 = *(float *)((0xC2A91D8 + t46));
                                t46 = 0xC0D0CF8;
                                t165 = *(int *)(((t163 << 2) + t46));
                                t166 = nd_SprPut(0xC2A91D8, t165, u164, u49);
                                t46 = t166;
                            }
                            t150 = (t150 + 0x1);
                            if ((int)t150 >= (int)0x8) {
                                break;
                            }
                        }
                        t169 = *(int *)(((int)stk + 24));
                        t170 = *(int *)((t169 + 0x0));
                        if (t170 == 0) {
                            t171 = *(int *)(((int)stk + 20));
                            t172 = *(int *)((t171 + 0x0));
                            if (t172 == 0) {
                                t173 = *(int *)(((int)stk + 28));
                                t174 = *(int *)((t173 + 0x0));
                                if (t174 != 0) {
                                    t175 = *(int *)(((int)stk + 8));
                                    t46 = t47;
                                    t176 = *(int *)((0xC2A9690 + t46));
                                    t177 = nd_SprPut(0xC2A91D8, 0x5A, (float)(t176 + 0x176), (float)(t175 + 0x72));
                                    t46 = t177;
                                }
                            } else {
                                t182 = *(int *)(((int)stk + 8));
                                t46 = t47;
                                t183 = *(int *)((0xC2A9690 + t46));
                                t184 = nd_SprPut(0xC2A91D8, 0x5A, (float)(t183 + 0x176), (float)(t182 + 0x72));
                                t46 = t184;
                            }
                        } else {
                            t189 = *(int *)(((int)stk + 8));
                            t46 = t47;
                            t190 = *(int *)((0xC2A9690 + t46));
                            t191 = nd_SprPut(0xC2A91D8, 0x5A, (float)(t190 + 0x176), (float)(t189 + 0x72));
                            t46 = t191;
                        }
                        t196 = *(int *)(((int)stk + 8));
                        t197 = *(int *)(((t47 + 0xC2A9690) + 0x0));
                        t198 = nd_SprPut(0xC2A91D8, 0x5C, (float)(t197 + 0x1CC), (float)(t196 + 0x72));
                        t46 = t198;
                        t46 = 0xC2A96C0;
                        *(unsigned int *)0xC2A920C = 0xA;
                        t199 = *(short *)0xC1EE20C;
                        t200 = *(int *)((t46 + 0x0));
                        t201 = *(signed char *)((((((((t200 << 2) + t200) + t48) << 2) << 2) + ((short)((short)t199 * (short)0x3C0) + 0xC28C318)) + 0x5));
                        t46 = t201;
                        t46 = (t46 << 2);
                        t202 = *(int *)((0xC0D0D20 + t46));
                        *(unsigned int *)0xC2A91D8 = t202;
                        t203 = *(int *)(((t47 + 0xC2A9690) + 0x0));
                        t46 = t203;
                        t46 = (t46 + 0x24C);
                        t204 = t46;
                        t46 = 0x4;
                        *(float *)((0xC2A91D8 + t46)) = (float)t204;
                        t205 = *(int *)(((int)stk + 8));
                        t46 = 0x8;
                        *(float *)((0xC2A91D8 + t46)) = (float)(t205 + 0x60);
                        t46 = 0x10;
                        *(float *)((0xC2A91D8 + t46)) = 1.0f;
                        t46 = 0x14;
                        *(float *)((0xC2A91D8 + t46)) = 1.0f;
                        t206 = nlSprPut(0xC2A91D8);
                        t46 = t206;
                        *(unsigned int *)0xC2A920C = 0xA;
                    }
                }
            }
            t48 = (t48 + 0x1);
            if ((int)t48 < (int)0x5) continue;
            break;
        }
        t223 = *(int *)0xC2A96A4;
        t235 = t223;
        if (t223 == 1) {
            t224 = *(int *)0xC2A9684;
            t230 = 0xC2A9684;
            if ((int)t224 >= (int)0x122) {
                t225 = *(int *)0xC2A96C0;
                if (t225 == 3) {
                    *(unsigned int *)0xC2A96A4 = 0x4;
                    t226 = t225;
                } else {
                    *(unsigned int *)0xC2A96A4 = 0x2;
                    t226 = 0xC2A96A4;
                }
                t230 = t226;
            }
            t235 = t230;
        }
        t240 = t235;
    }
    t253 = *(int *)0xC2A9684;
    *(unsigned int *)0xC2A9684 = (t253 + 0x1);
    return t240;
}
