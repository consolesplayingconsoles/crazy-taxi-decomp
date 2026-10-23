/* Straight-line functions with calls and guards (batch gen_ys): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Check_Digit_Disp(int, int);
int End_Ranking(void);
int Money_Array(int, int, int);
int Put_Ranking_Header(int);
int ResetFadeColor(void);
int Reset_Ranking_Wave(void);
int nd_SprPut(int, int, float, float);
int nlObjPutSetFadeColor(float, float, float);
int nlSprPut(int);
int Put_Ranking(int a4);

int Put_Ranking(int a4)
{
    int t16;
    int t41;
    int t29;
    int t230;
    int t46;
    int t48;
    int t50;
    int t61;
    int t63;
    int t77;
    float u78;
    int t80;
    int t84;
    float u85;
    int t117;
    int t119;
    int t121;
    int t122;
    int t123;
    float u124;
    int t127;
    int t131;
    int t132;
    float u133;
    int t144;
    int t152;
    int t164;
    float u166;
    int t187;
    int t191;
    int t210;
    int t225;
    int t220;
    int t215;
    int t35;
    int t47;
    float u49;
    int t120;
    int t137;
    int t138;
    int t140;
    float u141;
    int t173;
    int t174;
    int t175;
    int t176;
    int t216;
    int stk[29];

    { struct mv8 { int w[8]; }; *(struct mv8 *)((((int)stk + 4) + 0x1C)) = *(struct mv8 *)(0xC0D0ACC); }
    if ((*(int *)0xC2A96A4) == 2) {
        *(unsigned int *)0xC2A9690 = ((*(int *)0xC2A9690) - 64);
        *(unsigned int *)0xC2A9694 = ((*(int *)0xC2A9694) + 0x40);
        *(unsigned int *)0xC2A9698 = ((*(int *)0xC2A9698) - 64);
        *(unsigned int *)0xC2A969C = ((*(int *)0xC2A969C) + 0x40);
        *(unsigned int *)0xC2A96A0 = ((*(int *)0xC2A96A0) - 64);
        if ((*(int *)0xC2A9690) == 0xFFFFFD80) {
            *(unsigned int *)0xC2A96A4 = 0x3;
        }
    }
    if ((*(int *)0xC2A96A4) == 3) {
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
            *(unsigned int *)0xC2A96C0 = ((*(int *)0xC2A96C0) + 0x1);
        }
    }
    t41 = 0xC2A96BC;
    if ((*(int *)0xC2A96A4) == 4) {
        t29 = *(int *)0xC2A96BC;
        *(unsigned int *)0xC2A96BC = (t29 + 0x1);
        if ((int)(t29 + 0x1) >= (int)0x3C) {
            End_Ranking();
        } else {
            t35 = 0xC2A96BC;
        }
        t41 = t35;
    }
    Put_Ranking_Header(t41);
    Reset_Ranking_Wave();
    t230 = 0xC2A96A4;
    if ((int)(*(int *)0xC2A96A4) < (int)0x1) {
    } else {
        *(unsigned int *)(((int)stk + 16)) = (((int)stk + 4) + 0x1C);
        *(unsigned int *)(((int)stk + 24)) = (((int)stk + 4) + 0x30);
        *(unsigned int *)(((int)stk + 20)) = (((int)stk + 4) + 0x34);
        *(unsigned int *)(((int)stk + 28)) = (((int)stk + 4) + 0x38);
        t46 = 0xC05837C;
        t48 = 0x0;
        for (;;) {
            t50 = *(int *)0xC2A9684;
            if ((int)(t50 - 10) >= (int)(((t48 << 2) + t48) << 1)) {
                if ((int)(t50 - 10) < (int)0x3C) {
                    t46 = 0xA;
                    t46 = ((int)((int)(t50 - 10) % (int)t46));
                    if (t46 == 0) {
                        *(unsigned int *)0xC2A96A8 = 0x1;
                        *(unsigned short *)0xC2A96AC = 0x0;
                        *(float *)0xC2A96B0 = 0.5f;
                        *(float *)0xC2A96B4 = 0.0f;
                        t46 = (*(int *)0xC2A96B8);
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
                    t46 = ((int)((int)(t61 - 10) / (int)t46));
                    if (t46 == t48) {
                        t46 = t47;
                        t63 = *(int *)((0xC2A9690 + t46));
                        t46 = 0x14;
                        *(float *)0xC2A91E8 = (((float)t63 + (*(float *)0xC2A96B4)) + 0.5f);
                        *(float *)((0xC2A91D8 + t46)) = ((*(float *)0xC2A96B4) + 0.5f);
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
                t46 = (nlSprPut(0xC2A91D8));
                t80 = *(int *)0xC2A96C0;
                t46 = 0xA;
                t46 = ((int)((int)((((t80 << 2) + t80) + t48) + 0x1) / (int)t46));
                *(unsigned int *)(((int)stk + 4)) = t46;
                t46 = 0xA;
                t46 = ((int)((int)((((t80 << 2) + t80) + t48) + 0x1) % (int)t46));
                t84 = t46;
                t46 = (nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f));
                t46 = 0xC058568;
                u85 = *(float *)((t46 + 0x0));
                t46 = 0xC;
                *(float *)((0xC2A91D8 + t46)) = u85;
                if ((*(int *)(((int)stk + 4))) != 0) {
                    t46 = 0xC0D0CD0;
                    *(unsigned int *)0xC2A91D8 = (*(int *)((((*(int *)(((int)stk + 4))) << 2) + t46)));
                    t46 = t47;
                    *(float *)0xC2A91DC = (float)((*(int *)((0xC2A9690 + t46))) + 0x36);
                    t46 = (nlSprPut(0xC2A91D8));
                }
                t46 = 0xC0D0CD0;
                *(unsigned int *)0xC2A91D8 = (*(int *)(((t84 << 2) + t46)));
                t46 = 0x4;
                *(unsigned int *)(((int)stk + 12)) = (t47 + 0xC2A9690);
                *(float *)((0xC2A91D8 + t46)) = (float)((*(int *)(((t47 + 0xC2A9690) + 0x0))) + 0x56);
                t46 = (nlSprPut(0xC2A91D8));
                *(unsigned int *)0xC2A91D8 = 0x4F;
                t46 = 0x4;
                *(float *)((0xC2A91D8 + t46)) = (float)((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))) + 0x72);
                t46 = 0x8;
                *(float *)((0xC2A91D8 + t46)) = (float)((*(int *)(((int)stk + 8))) + 0x64);
                if ((*(int *)(((int)stk + 4))) == 0) {
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
                t46 = (nlSprPut(0xC2A91D8));
                t46 = (ResetFadeColor());
                if ((int)(*(int *)0xC2A9684) < (int)0x46) {
                } else {
                    t46 = 0xC2A9684;
                    t117 = *(int *)((t46 + 0x0));
                    t46 = 0xA;
                    t46 = ((int)((int)(t117 - 70) / (int)t46));
                    if ((int)t46 < (int)t48) {
                    } else {
                        t46 = 0x10;
                        *(unsigned int *)0xC2A920C = 0xA;
                        *(float *)((0xC2A91D8 + t46)) = 1.0f;
                        t46 = 0x14;
                        *(float *)((0xC2A91D8 + t46)) = 1.0f;
                        *(unsigned int *)(((int)stk + 12)) = (t47 + 0xC2A9690);
                        t119 = *(int *)(((int)stk + 8));
                        u49 = (float)(t119 + 0x60);
                        t121 = (t119 + 0x60);
                        t122 = a4;
                        t123 = 0x0;
                        u124 = (float)(t119 + 0x60);
                        for (;;) {
                            if ((int)t123 >= (int)0x3) {
                                break;
                            }
                            t120 = 0xC1EE20C;
                            t121 = (*(short *)((t120 + 0x0)));
                            t120 = 0xC2A96C0;
                            t127 = ((short)t121 * (short)0x3C0);
                            t121 = (*(int *)((t120 + 0x0)));
                            t120 = t121;
                            t121 = (t121 << 2);
                            t46 = t127;
                            t121 = (t121 + t120);
                            t120 = 0xC28C318;
                            t121 = (t121 + t48);
                            t46 = (short)t46;
                            t121 = (t121 << 2);
                            t46 = (t46 + t120);
                            t121 = (t121 << 2);
                            t46 = (t46 + t121);
                            t122 = t46;
                            t122 = (t122 + 0x6);
                            t122 = (t122 + t123);
                            t46 = 0xC0D0AF0;
                            t122 = (*(signed char *)((t122 + 0x0)));
                            t122 = (t122 - 32);
                            t122 = (signed char)t122;
                            t122 = (t122 << 2);
                            t121 = t122;
                            *(unsigned int *)(((int)stk + 4)) = t122;
                            t46 = (*(int *)((t121 + t46)));
                            if (t46 != 0x5F5E0FF) {
                                t121 = t123;
                                t121 = (t121 << 2);
                                t120 = (*(int *)(((int)stk + 12)));
                                t121 = (t121 << 2);
                                t121 = (t121 + t123);
                                t131 = *(int *)((t120 + 0x0));
                                t121 = (t121 << 1);
                                t120 = 0xA4;
                                t46 = 0x4;
                                t121 = (t121 + t131);
                                t122 = 0xC2A91D8;
                                t121 = (t121 + t120);
                                t132 = t121;
                                t121 = 0xC05778A;
                                u124 = (float)t132;
                                *(float *)((0xC2A91D8 + t46)) = u124;
                                t46 = 0x8;
                                *(float *)((0xC2A91D8 + t46)) = u49;
                                t46 = 0x4;
                                u133 = *(float *)((0xC2A91D8 + t46));
                                t46 = 0xC0D0AF0;
                                t46 = (nd_SprPut(t122, (*(int *)(((*(int *)(((int)stk + 4))) + t46))), u133, u49));
                            } else {
                                t137 = t120;
                                t138 = t121;
                                t140 = t122;
                                u141 = u124;
                            }
                            u124 = u141;
                            t120 = t137;
                            t121 = t138;
                            t122 = t140;
                            t123 = (t123 + 0x1);
                        }
                        t46 = 0xC2A96C0;
                        t144 = *(int *)((t46 + 0x0));
                        t46 = (Money_Array((*(int *)(((int)stk + 16))), (*(int *)(((((short)((short)(*(short *)0xC1EE20C) * (short)0x3C0) + 0xC28C318) + (((((t144 << 2) + t144) + t48) << 2) << 2)) + 0x0))), 0x8));
                        t46 = t47;
                        t46 = (nd_SprPut(0xC2A91D8, 0x5B, (float)((*(int *)((0xC2A9690 + t46))) + 0x112), (float)((*(int *)(((int)stk + 8))) + 0x60)));
                        *(unsigned int *)(((int)stk + 12)) = (t47 + 0xC2A9690);
                        u49 = (float)((*(int *)(((int)stk + 8))) + 0x60);
                        t152 = 0x0;
                        for (;;) {
                            *(unsigned int *)(((int)stk + 4)) = 0x0;
                            if ((int)t152 < (int)0x5) {
                                *(unsigned int *)(((int)stk + 4)) = 0x8;
                            }
                            if ((int)t152 < (int)0x2) {
                                *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x8);
                            }
                            t46 = (Check_Digit_Disp((*(int *)(((int)stk + 16))), t152));
                            if (t46 == 1) {
                                t46 = (*(int *)(((int)stk + 4)));
                                t164 = (((((0x8 - t152) * 0x1A) + (*(int *)(((*(int *)(((int)stk + 12))) + 0x0)))) + t46) + 0x116);
                                t46 = 0x4;
                                *(float *)((0xC2A91D8 + t46)) = (float)t164;
                                t46 = 0x8;
                                *(float *)((0xC2A91D8 + t46)) = u49;
                                t46 = 0x4;
                                u166 = *(float *)((0xC2A91D8 + t46));
                                t46 = 0xC0D0CF8;
                                t46 = (nd_SprPut(0xC2A91D8, (*(int *)((((*(int *)((((t152 << 2) + (((int)stk + 4) + 0x1C)) + 0x0))) << 2) + t46))), u166, u49));
                            }
                            t152 = (t152 + 0x1);
                            if ((int)t152 >= (int)0x8) {
                                break;
                            }
                        }
                        if (((*(int *)(((*(int *)(((int)stk + 24))) + 0x0))) == 0) && ((t173 = *(int *)(((int)stk + 20)), t174 = *(int *)((t173 + 0x0)), t174 == 0) && (t175 = *(int *)(((int)stk + 28)), t176 = *(int *)((t175 + 0x0)), t176 == 0))) {
                        } else {
                            t46 = t47;
                            t46 = (nd_SprPut(0xC2A91D8, 0x5A, (float)((*(int *)((0xC2A9690 + t46))) + 0x176), (float)((*(int *)(((int)stk + 8))) + 0x72)));
                        }
                        t46 = (nd_SprPut(0xC2A91D8, 0x5C, (float)((*(int *)(((t47 + 0xC2A9690) + 0x0))) + 0x1CC), (float)((*(int *)(((int)stk + 8))) + 0x72)));
                        t46 = 0xC2A96C0;
                        *(unsigned int *)0xC2A920C = 0xA;
                        t187 = *(int *)((t46 + 0x0));
                        t46 = (*(signed char *)((((((((t187 << 2) + t187) + t48) << 2) << 2) + ((short)((short)(*(short *)0xC1EE20C) * (short)0x3C0) + 0xC28C318)) + 0x5)));
                        t46 = (t46 << 2);
                        *(unsigned int *)0xC2A91D8 = (*(int *)((0xC0D0D20 + t46)));
                        t46 = (*(int *)(((t47 + 0xC2A9690) + 0x0)));
                        t46 = (t46 + 0x24C);
                        t191 = t46;
                        t46 = 0x4;
                        *(float *)((0xC2A91D8 + t46)) = (float)t191;
                        t46 = 0x8;
                        *(float *)((0xC2A91D8 + t46)) = (float)((*(int *)(((int)stk + 8))) + 0x60);
                        t46 = 0x10;
                        *(float *)((0xC2A91D8 + t46)) = 1.0f;
                        t46 = 0x14;
                        *(float *)((0xC2A91D8 + t46)) = 1.0f;
                        t46 = (nlSprPut(0xC2A91D8));
                        *(unsigned int *)0xC2A920C = 0xA;
                    }
                }
            }
            t48 = (t48 + 0x1);
            if ((int)t48 < (int)0x5) continue;
            break;
        }
        t210 = *(int *)0xC2A96A4;
        t225 = t210;
        if (t210 == 1) {
            t220 = 0xC2A9684;
            if ((int)(*(int *)0xC2A9684) >= (int)0x122) {
                t215 = *(int *)0xC2A96C0;
                if (t215 == 3) {
                    *(unsigned int *)0xC2A96A4 = 0x4;
                    t216 = t215;
                } else {
                    *(unsigned int *)0xC2A96A4 = 0x2;
                    t216 = 0xC2A96A4;
                }
                t220 = t216;
            }
            t225 = t220;
        }
        t230 = t225;
    }
    *(unsigned int *)0xC2A9684 = ((*(int *)0xC2A9684) + 0x1);
    return t230;
}
