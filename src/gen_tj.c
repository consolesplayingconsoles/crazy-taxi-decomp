/* Straight-line functions with calls and guards (batch gen_tj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckColliWallBox(int, int, float);
float nlLength(int, int);
float ExecColliObj(int a4, int a5, float f4);

float ExecColliObj(int a4, int a5, float f4)
{
    int t3;
    int t4;
    int t119;
    int t120;
    float u124;
    int t18;
    int t19;
    int t20;
    float u26;
    int t40;
    int t66;
    int t68;
    int t70;
    int t73;
    int t74;
    int t105;
    int t106;
    int t107;
    float u108;
    int t125;
    int t126;
    int t127;
    int t128;
    int t129;
    int t130;
    int t131;
    float u132;
    float u133;
    float u134;
    float u135;
    int t136;
    int t138;
    int t140;
    int t142;
    int t151;
    int t165;
    int t175;
    int t180;
    int t181;
    int t219;
    int t220;
    int t221;
    int t222;
    int t223;
    int t224;
    int t225;
    float u226;
    float u227;
    float u228;
    int t238;
    int t240;
    int t251;
    int t255;
    int t280;
    int t281;
    int t282;
    int t283;
    float u284;
    int t294;
    int t0;
    int t1;
    int t2;
    int t112;
    int t114;
    int t115;
    int t116;
    int t117;
    float u121;
    float u122;
    float u123;
    int t21;
    int t22;
    float u23;
    float u24;
    float u25;
    int t80;
    int t82;
    float u83;
    float u84;
    int t198;
    int t199;
    int t200;
    float u201;
    float u202;
    int t265;
    int t266;
    int t267;
    float u268;
    float u269;
    int t301;
    int t302;

    *(unsigned int *)0xC26ECD8 = 0x0;
    t3 = a4;
    t4 = a5;
    for (;;) {
        if ((int)(*(int *)0xC26ECD8) >= (int)0x16) {
            break;
        }
        t1 = (*(int *)0xC26ECD8);
        t0 = 0xC26EC7C;
        t1 = (t1 << 2);
        if ((*(int *)((t1 + t0))) != 0) {
            t0 = (*(int *)0xC26ECD8);
            t0 = (t0 << 2);
            t3 = (*(int *)((0xC26EBCC + t0)));
            for (;;) {
                if (t3 == 0) {
                    break;
                }
                t4 = (*(int *)((t3 + 0x0)));
                t2 = 0x0;
                *(unsigned int *)((t4 + 0x24)) = t2;
                *(unsigned int *)((t4 + 0x20)) = t2;
                t3 = (*(int *)((t3 + 0xC)));
            }
        }
        t2 = (*(int *)0xC26ECD8);
        t2 = (t2 + 0x1);
        *(unsigned int *)0xC26ECD8 = t2;
    }
    t119 = 0xC26EC7C;
    t120 = t3;
    u124 = f4;
    if ((*(int *)0xC26EC7C) == 0) {
        t112 = t0;
    } else {
        *(unsigned int *)0xC26ECD8 = 0x0;
        *(unsigned int *)0xC26ECF8 = 0xC26ED00;
        t18 = *(int *)(((*(int *)0xC26EBCC) + 0x0));
        *(unsigned int *)0xC26ECDC = 0x1;
        t19 = 0x1;
        t20 = t3;
        u26 = f4;
        for (;;) {
            if ((int)(*(int *)0xC26ECDC) < (int)0x15) {
                t19 = 0xC26ECDC;
                if ((*(int *)((((*(int *)((t19 + 0x0))) << 2) + 0xC26EC7C))) == 0) {
                } else {
                    t20 = (*(int *)0xC26ECD8);
                    t19 = 0x1C;
                    t20 = ((short)t20 * (short)t19);
                    t20 = (short)t20;
                    t20 = (*(int *)((t20 + 0xC0ED458)));
                    t19 = ((short)(*(short *)0xC26ECDC) * (short)t19);
                    t19 = (short)t19;
                    t19 = (*(int *)((t19 + 0xC0ED458)));
                    t20 = (t20 & t19);
                    if ((t20 & 0xFFFF0000) != 0) {
                    } else {
                        if ((unsigned short)t20 != 0) {
                            t19 = 0x78;
                            t19 = ((short)(*(short *)0xC26ECDC) * (short)t19);
                            t19 = (short)t19;
                            t19 = (t19 + 0xC26ED00);
                            *(unsigned int *)0xC26ECFC = t19;
                            t19 = 0x1C;
                            u24 = (*(float *)0xC0ED440);
                            t40 = ((short)(*(short *)0xC26ECDC) * (short)t19);
                            t19 = 0xC26ECF0;
                            t20 = t40;
                            t20 = (short)t20;
                            t20 = (t20 + 0xC0ED440);
                            u25 = (*(float *)((t20 + 0x4)));
                            u24 = (u24 + u25);
                            *(float *)0xC26ECEC = u24;
                            u24 = (*(float *)((t20 + 0x0)));
                            u25 = (*(float *)0xC0ED444);
                            u24 = (u24 + u25);
                            *(float *)((t19 + 0x0)) = u24;
                            u25 = (*(float *)0xC26ECEC);
                            if (u25 > u24) {
                                u25 = (*(float *)0xC26ECEC);
                                *(float *)0xC26ECE4 = u25;
                            } else {
                                u25 = (*(float *)((t19 + 0x0)));
                                *(float *)0xC26ECE4 = u25;
                            }
                            t19 = (*(int *)0xC26ECD8);
                            t19 = ((short)t19 * (short)0x1C);
                            t19 = (short)t19;
                            u24 = (*(float *)((t19 + 0xC0ED444)));
                            t19 = 0xC26ECE8;
                            u25 = (*(float *)(((short)((short)(*(short *)0xC26ECDC) * (short)0x1C) + 0xC0ED444)));
                            u24 = (u24 + u25);
                            *(float *)((t19 + 0x0)) = u24;
                            u24 = (*(float *)((t19 + 0x0)));
                            u25 = (*(float *)0xC26ECE4);
                            if (u24 > u25) {
                                *(float *)0xC26ECE4 = u24;
                            }
                            t19 = 0x1C;
                            t19 = ((short)(*(short *)0xC26ECDC) * (short)t19);
                            t19 = (short)t19;
                            t19 = (t19 + 0xC0ED440);
                            u26 = (*(float *)((t19 + 0x8)));
                            t19 = 0x1C;
                            u24 = u26;
                            t66 = ((short)(*(int *)0xC26ECD8) * (short)t19);
                            t19 = 0xC26ECDC;
                            u25 = (*(float *)((((short)t66 + 0xC0ED440) + 0x8)));
                            u25 = (u25 + u26);
                            u24 = (u24 / u25);
                            *(float *)0xC26ECF4 = u24;
                            t68 = *(int *)0xC26ECD8;
                            t21 = (*(int *)((t19 + 0x0)));
                            t21 = (t21 << 2);
                            t70 = *(int *)((t19 + 0x0));
                            t21 = (t21 + (0xC26E4E8 + (short)((short)t68 * (short)0x54)));
                            t21 = (*(int *)((t21 + 0x0)));
                            t22 = (*(int *)((0xC26EBCC + (t70 << 2))));
                            t73 = (t70 << 2);
                            t74 = (0xC26E4E8 + (short)((short)t68 * (short)0x54));
                            for (;;) {
                                if (t22 == 0) {
                                    break;
                                }
                                t19 = 0xC078AE0;
                                t20 = t18;
                                u23 = (nlLength(t20, (*(int *)((t22 + 0x0)))));
                                t19 = 0xC26ECE4;
                                t74 = 0xC26ECE0;
                                *(float *)((t74 + 0x0)) = u23;
                                u25 = (*(float *)((t19 + 0x0)));
                                if (u25 > u23) {
                                    t20 = t18;
                                    t73 = (((int (*)(int, int))(t21))(t20, (*(int *)((t22 + 0x0)))));
                                    t80 = t73;
                                } else {
                                    t82 = t19;
                                    u83 = u23;
                                    u84 = u25;
                                }
                                u23 = u83;
                                u25 = u84;
                                t73 = t80;
                                t74 = 0xC26ECE0;
                                t19 = t82;
                                t73 = 0x18;
                                t19 = (*(int *)((t22 + 0x0)));
                                u25 = (*(float *)((t74 + 0x0)));
                                *(float *)((t19 + t73)) = u25;
                                t22 = (*(int *)((t22 + 0xC)));
                            }
                        }
                    }
                }
                t19 = (*(int *)0xC26ECDC);
                t19 = (t19 + 0x1);
                *(unsigned int *)0xC26ECDC = t19;
                continue;
            }
            break;
        }
        t105 = 0x54;
        t106 = t21;
        t107 = (*(int *)0xC26EC20);
        u108 = u23;
        for (;;) {
            if (t107 == 0) {
                break;
            }
            t106 = (*(int *)((t107 + 0x0)));
            u108 = (nlLength(t18, t106));
            t105 = 0x18;
            *(float *)((t106 + t105)) = u108;
            t107 = (*(int *)((t107 + 0xC)));
        }
        t112 = t105;
        t114 = 0xC0ED440;
        t115 = t18;
        t116 = t106;
        t117 = t107;
        t119 = t19;
        t120 = t20;
        u121 = u108;
        u122 = u24;
        u123 = u25;
        u124 = u26;
    }
    *(unsigned int *)0xC26ECD8 = 0x1;
    t125 = t112;
    t126 = t119;
    t127 = t120;
    t128 = t4;
    t129 = t115;
    t130 = t116;
    t131 = t117;
    u132 = u121;
    u133 = u122;
    u134 = u123;
    u135 = u124;
    for (;;) {
        t136 = *(int *)0xC26ECD8;
        if ((int)t136 < (int)0x15) {
            t125 = 0xC26EC7C;
            t126 = (*(int *)(((t136 << 2) + t125)));
            if (t126 != 0) {
                t138 = *(int *)0xC26ECD8;
                t126 = 0x78;
                t125 = 0xC26ECF8;
                *(unsigned int *)((t125 + 0x0)) = ((short)((short)t138 * (short)t126) + 0xC26ED00);
                t140 = ((short)((short)t138 * (short)t126) + 0xC26ED00);
                t126 = (*(int *)0xC26ECD8);
                t126 = (t126 + 0x1);
                *(unsigned int *)0xC26ECDC = t126;
                t142 = t140;
                for (;;) {
                    t125 = 0xC26ECDC;
                    t126 = 0x15;
                    if ((int)(*(int *)((t125 + 0x0))) < (int)t126) {
                        t128 = (*(int *)((t125 + 0x0)));
                        t125 = 0xC26EC7C;
                        t126 = t128;
                        t126 = (t126 << 2);
                        t142 = (*(int *)((t126 + t125)));
                        if (t142 == 0) {
                        } else {
                            t127 = (*(int *)0xC26ECD8);
                            t126 = 0x1C;
                            t125 = 0xC0ED458;
                            t127 = ((short)t127 * (short)t126);
                            t127 = (short)t127;
                            t127 = (*(int *)((t127 + t125)));
                            t126 = ((short)t128 * (short)t126);
                            t126 = (short)t126;
                            t126 = (*(int *)((t126 + t125)));
                            t127 = (t127 & t126);
                            t142 = t127;
                            if ((t142 & 0xFFFF0000) != 0) {
                            } else {
                                if ((unsigned short)t127 == 0) {
                                } else {
                                    t126 = 0x78;
                                    t142 = 0xC26ED00;
                                    t151 = ((short)t128 * (short)t126);
                                    t126 = 0x1C;
                                    t125 = 0x4;
                                    t128 = t151;
                                    t128 = (short)t128;
                                    t128 = (t128 + t142);
                                    t142 = 0xC0ED440;
                                    *(unsigned int *)0xC26ECFC = t128;
                                    t127 = (*(int *)0xC26ECD8);
                                    t128 = (*(short *)0xC26ECDC);
                                    t127 = ((short)t127 * (short)t126);
                                    t127 = (short)t127;
                                    t127 = (t127 + t142);
                                    t128 = ((short)t128 * (short)t126);
                                    u133 = (*(float *)((t127 + 0x0)));
                                    t128 = (short)t128;
                                    t128 = (t128 + t142);
                                    u134 = (*(float *)((t128 + t125)));
                                    u133 = (u133 + u134);
                                    *(float *)0xC26ECEC = u133;
                                    u133 = (*(float *)((t128 + 0x0)));
                                    u134 = (*(float *)((t127 + t125)));
                                    u133 = (u133 + u134);
                                    *(float *)0xC26ECF0 = u133;
                                    t126 = 0xC26ECEC;
                                    u134 = (*(float *)((t126 + 0x0)));
                                    if (u134 > u133) {
                                        t125 = 0xC26ECEC;
                                        t142 = 0xC26ECE4;
                                        u134 = (*(float *)((t125 + 0x0)));
                                        *(float *)((t142 + 0x0)) = u134;
                                    } else {
                                        t126 = 0xC26ECE4;
                                        u134 = (*(float *)0xC26ECF0);
                                        *(float *)((t126 + 0x0)) = u134;
                                    }
                                    t142 = (*(int *)0xC26ECD8);
                                    t126 = 0x1C;
                                    t125 = 0xC26ECDC;
                                    t165 = *(short *)((t125 + 0x0));
                                    t125 = 0xC0ED444;
                                    t142 = ((short)t142 * (short)t126);
                                    t142 = (short)t142;
                                    u133 = (*(float *)((t142 + t125)));
                                    t126 = ((short)t165 * (short)t126);
                                    t142 = 0xC26ECE4;
                                    t126 = (short)t126;
                                    u134 = (*(float *)((t126 + t125)));
                                    t126 = 0xC26ECE8;
                                    u133 = (u133 + u134);
                                    *(float *)((t126 + 0x0)) = u133;
                                    u133 = (*(float *)((t126 + 0x0)));
                                    u134 = (*(float *)((t142 + 0x0)));
                                    if (u133 > u134) {
                                        t125 = 0xC26ECE4;
                                        *(float *)((t125 + 0x0)) = u133;
                                    }
                                    t126 = 0x1C;
                                    t125 = 0x8;
                                    t142 = (*(short *)0xC26ECDC);
                                    t175 = ((short)t142 * (short)t126);
                                    t142 = 0xC0ED440;
                                    t126 = t175;
                                    t126 = (short)t126;
                                    t126 = (t126 + t142);
                                    u135 = (*(float *)((t126 + t125)));
                                    t126 = 0x1C;
                                    u133 = u135;
                                    t180 = ((short)(*(int *)0xC26ECD8) * (short)t126);
                                    t126 = 0xC26ECDC;
                                    t181 = ((short)t180 + t142);
                                    t142 = 0xC26E4E8;
                                    u134 = (*(float *)((t181 + t125)));
                                    u134 = (u134 + u135);
                                    u133 = (u133 / u134);
                                    *(float *)0xC26ECF4 = u133;
                                    t125 = (*(int *)0xC26ECD8);
                                    t129 = (*(int *)((t126 + 0x0)));
                                    t129 = (t129 << 2);
                                    t125 = ((short)t125 * (short)0x54);
                                    t125 = (short)t125;
                                    t142 = (t142 + t125);
                                    t125 = (*(int *)0xC26ECD8);
                                    t129 = (t129 + t142);
                                    t129 = (*(int *)((t129 + 0x0)));
                                    t125 = (t125 << 2);
                                    t130 = (*(int *)((0xC26EBCC + t125)));
                                    for (;;) {
                                        if (t130 == 0) {
                                            break;
                                        }
                                        t126 = 0xC26ECDC;
                                        t125 = (*(int *)((t126 + 0x0)));
                                        t125 = (t125 << 2);
                                        t131 = (*(int *)((0xC26EBCC + t125)));
                                        for (;;) {
                                            if (t131 == 0) {
                                                break;
                                            }
                                            t128 = (*(int *)((t131 + 0x0)));
                                            t127 = (*(int *)((t130 + 0x0)));
                                            u132 = (nlLength(t127, t128));
                                            t126 = 0xC26ECE4;
                                            t142 = 0xC26ECE0;
                                            *(float *)((t142 + 0x0)) = u132;
                                            u134 = (*(float *)((t126 + 0x0)));
                                            if (u134 > u132) {
                                                t128 = (*(int *)((t131 + 0x0)));
                                                t127 = (*(int *)((t130 + 0x0)));
                                                t125 = (((int (*)(int, int))(t129))(t127, t128));
                                                t198 = t125;
                                            } else {
                                                t199 = t142;
                                                t200 = t126;
                                                u201 = u132;
                                                u202 = u134;
                                            }
                                            u132 = u201;
                                            u134 = u202;
                                            t125 = t198;
                                            t131 = (*(int *)((t131 + 0xC)));
                                            t142 = t199;
                                            t126 = t200;
                                        }
                                        t130 = (*(int *)((t130 + 0xC)));
                                    }
                                }
                            }
                        }
                        t126 = 0xC26ECDC;
                        t142 = (*(int *)((t126 + 0x0)));
                        t142 = (t142 + 0x1);
                        *(unsigned int *)((t126 + 0x0)) = t142;
                        continue;
                    }
                    break;
                }
            }
            t126 = (*(int *)0xC26ECD8);
            t126 = (t126 + 0x1);
            *(unsigned int *)0xC26ECD8 = t126;
            continue;
        }
        break;
    }
    t219 = 0xC03303C;
    t220 = 0x1;
    t221 = t127;
    t222 = t114;
    t223 = t129;
    t224 = t130;
    t225 = t131;
    u226 = u132;
    u227 = u133;
    u228 = u134;
    for (;;) {
        *(unsigned int *)0xC26ECD8 = t220;
        if ((int)t220 >= (int)0x15) {
            break;
        }
        t219 = 0xC26EC7C;
        t220 = (*(int *)((((*(int *)0xC26ECD8) << 2) + t219)));
        if ((int)t220 >= (int)0x2) {
            t220 = (*(int *)0xC26ECD8);
            t219 = 0xC0ED458;
            t220 = ((short)t220 * (short)0x1C);
            t220 = (short)t220;
            t220 = (*(int *)((t220 + t219)));
            if ((t220 & 0xFFFF0000) == 0) {
                t220 = 0x78;
                t238 = ((short)(*(int *)0xC26ECD8) * (short)t220);
                t220 = 0xC26ECF8;
                t219 = 0xC26ECFC;
                *(unsigned int *)((t219 + 0x0)) = ((short)t238 + 0xC26ED00);
                t219 = 0x4;
                *(unsigned int *)((t220 + 0x0)) = ((short)t238 + 0xC26ED00);
                t220 = 0x1C;
                t221 = (*(int *)0xC26ECD8);
                t240 = ((short)t221 * (short)t220);
                t220 = 0xC26ECEC;
                t221 = t240;
                t221 = (short)t221;
                t221 = (t221 + 0xC0ED440);
                u227 = (*(float *)((t221 + 0x0)));
                u228 = (*(float *)((t221 + t219)));
                u227 = (u227 + u228);
                *(float *)0xC26ECF0 = u227;
                *(float *)((t220 + 0x0)) = u227;
                t220 = 0xC26ECE8;
                *(float *)0xC26ECE4 = u227;
                u228 = (*(float *)((t221 + t219)));
                u228 = (u228 * (1.0f + 1.0f));
                *(float *)((t220 + 0x0)) = u228;
                u227 = (*(float *)0xC26ECE4);
                if (u228 > u227) {
                    t219 = 0xC26ECE4;
                    u228 = (*(float *)((t220 + 0x0)));
                    *(float *)((t219 + 0x0)) = u228;
                }
                t220 = 0xC26ECF4;
                *(float *)((t220 + 0x0)) = 0.5f;
                t219 = (*(int *)0xC26ECD8);
                t222 = (*(int *)0xC26ECD8);
                t222 = (t222 << 2);
                t219 = ((short)t219 * (short)0x54);
                t219 = (short)t219;
                t251 = (0xC26E4E8 + t219);
                t219 = (*(int *)0xC26ECD8);
                t222 = (t222 + t251);
                t222 = (*(int *)((t222 + 0x0)));
                *(unsigned int *)0xC26ECDC = t219;
                t219 = (*(int *)0xC26ECD8);
                t219 = (t219 << 2);
                t224 = (*(int *)((0xC26EBCC + t219)));
                t255 = 0x54;
                for (;;) {
                    t223 = (*(int *)((t224 + 0xC)));
                    if (t223 == 0) {
                        break;
                    }
                    t225 = (*(int *)((t224 + 0xC)));
                    for (;;) {
                        if (t225 == 0) {
                            break;
                        }
                        t221 = (*(int *)((t224 + 0x0)));
                        u226 = (nlLength(t221, (*(int *)((t225 + 0x0)))));
                        t220 = 0xC26ECE4;
                        t255 = 0xC26ECE0;
                        *(float *)((t255 + 0x0)) = u226;
                        u228 = (*(float *)((t220 + 0x0)));
                        if (u228 > u226) {
                            t221 = (*(int *)((t224 + 0x0)));
                            t219 = (((int (*)(int, int))(t222))(t221, (*(int *)((t225 + 0x0)))));
                            t265 = t219;
                        } else {
                            t266 = t255;
                            t267 = t220;
                            u268 = u226;
                            u269 = u228;
                        }
                        u226 = u268;
                        u228 = u269;
                        t219 = t265;
                        t225 = (*(int *)((t225 + 0xC)));
                        t255 = t266;
                        t220 = t267;
                    }
                    t224 = t223;
                }
            }
        }
        t220 = (*(int *)0xC26ECD8);
        t220 = (t220 + 0x1);
    }
    t280 = t219;
    t281 = t220;
    t282 = 0x0;
    t283 = t225;
    u284 = u228;
    for (;;) {
        *(unsigned int *)0xC26ECD8 = t282;
        if ((int)t282 >= (int)0xF) {
            break;
        }
        t281 = (*(int *)0xC26ECD8);
        t280 = 0xC26EC7C;
        t281 = (t281 << 2);
        if ((*(int *)((t281 + t280))) != 0) {
            t282 = (*(int *)0xC26ECD8);
            t280 = 0xC0ED444;
            t281 = 0xC26ECE4;
            t282 = ((short)t282 * (short)0x1C);
            t282 = (short)t282;
            u284 = (*(float *)((t282 + t280)));
            *(float *)((t281 + 0x0)) = u284;
            t280 = (*(int *)0xC26ECD8);
            t280 = (t280 << 2);
            t283 = (*(int *)((0xC26EBCC + t280)));
            t294 = 0x1C;
            for (;;) {
                if (t283 == 0) {
                    break;
                }
                t294 = 0xC26ECE4;
                t280 = (CheckColliWallBox((*(int *)((t283 + 0x0))), (*(int *)0xC26ECD8), (*(float *)((t294 + 0x0)))));
                if (t280 != 0) {
                    t294 = (*(int *)((t283 + 0x0)));
                    t282 = (*(int *)((t294 + 0x20)));
                    t282 = (t282 | 0x80000000);
                    *(unsigned int *)((t294 + 0x20)) = t282;
                    t301 = t282;
                    t302 = t294;
                }
                t283 = (*(int *)((t283 + 0xC)));
                t282 = t301;
                t294 = t302;
            }
        }
        t282 = (*(int *)0xC26ECD8);
        t282 = (t282 + 0x1);
    }
    return u226;
}
