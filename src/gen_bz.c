/* Straight-line functions with calls and guards (batch gen_bz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0208d6(void);
int FUN_0c022102(int);
int FUN_0c02238e(int);
int FUN_0c0376b0(void);
int FUN_0c04bec2(int, ...);
int InitEffect(void);
int SetColliObj(int, int);
int init_CarMain(void);

int init_CarMain(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t26;
    float u27;
    float u28;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    float u37;
    int t38;
    float u40;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    float u50;
    int t51;
    float u52;
    float u53;
    int t55;
    int t56;
    int t57;
    int t58;
    float u59;
    int t60;
    float u61;
    float u62;
    int t69;
    int t70;
    int t71;
    int t72;
    int t73;
    float u74;
    int t75;
    float u76;
    float u77;
    int t87;
    int t88;
    int t89;
    int t90;
    float u91;
    int t100;
    float u102;
    int t106;
    int t107;
    int t108;
    int t109;
    int t110;
    int t111;
    float u112;
    int t113;
    float u114;
    float u115;
    int t117;
    int t118;
    int t119;
    int t120;
    float u121;
    int t122;
    float u123;
    float u124;
    int t131;
    int t132;
    int t133;
    int t134;
    int t135;
    float u136;
    int t137;
    float u138;
    float u139;
    int t149;
    int t150;
    int t151;
    int t152;
    float u153;
    int t159;
    int t160;
    int t161;
    int t162;
    int t163;
    int t164;
    int t165;
    int t166;
    int t167;
    int t168;
    int t169;
    int t170;
    int t171;
    int t172;
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
    int t183;
    int t184;
    int t185;
    int t186;
    int t190;
    int t191;
    int t192;
    float u193;
    float u194;
    int t195;
    int t196;
    int t197;
    int t198;
    int t199;
    int t202;
    int t203;
    int t204;
    int t205;
    int t206;
    int t207;
    int t208;
    int t209;
    int t210;
    int t214;
    float u13;
    int t22;
    int t24;
    float u29;
    float u83;
    float u68;
    float u54;
    float u63;
    float u78;
    float u145;
    float u130;
    float u116;
    float u125;
    float u140;
    float u188;

    *(unsigned int *)0xC0DB000 = 0x0;
    *(unsigned int *)0xC0DAEC0 = 0x0;
    *(unsigned int *)0xC0DAEC4 = 0x0;
    *(unsigned int *)0xC1790C8 = 0x1;
    *(unsigned int *)0xC179120 = 0x3;
    *(unsigned int *)0xC179124 = 0x0;
    *(unsigned int *)0xC179128 = 0x2;
    *(unsigned int *)0xC17912C = 0x0;
    *(unsigned int *)0xC179130 = 0xFFFFFFFF;
    *(unsigned int *)0xC179134 = 0x0;
    t0 = *(int *)0xC179488;
    if ((int)t0 < (int)0x4) {
        t1 = *(int *)0xC179488;
        t2 = *(int *)((0xC0DAFD8 + (t1 << 2)));
        *(unsigned int *)0xC179138 = t2;
        t3 = *(int *)0xC179488;
        t4 = *(int *)((0xC0DAFEC + (t3 << 2)));
        *(unsigned int *)0xC17913C = t4;
        t5 = *(int *)0xC179488;
        t6 = *(int *)((0xC0DAFC4 + (t5 << 2)));
        *(unsigned int *)0xC179140 = t6;
        *(float *)0xC1794B8 = 0.179999992f;
        *(float *)0xC1794BC = 0.174999997f;
        *(float *)0xC1794B0 = 23.0f;
        *(float *)0xC1794B4 = 24.0f;
        *(float *)0xC1794C0 = 4.19999981f;
        u13 = 3.5f;
    } else {
        t7 = *(int *)0xC0DAFE8;
        *(unsigned int *)0xC179138 = t7;
        t8 = *(int *)0xC0DAFFC;
        *(unsigned int *)0xC17913C = t8;
        t9 = *(int *)0xC0DAFD4;
        *(unsigned int *)0xC179140 = t9;
        *(float *)0xC1794B8 = 0.099999994f;
        *(float *)0xC1794BC = 0.0949999988f;
        *(float *)0xC1794B0 = 27.0f;
        *(float *)0xC1794B4 = 26.0f;
        *(float *)0xC1794C0 = 2.79999995f;
        u13 = 2.29999995f;
    }
    *(float *)0xC1794C4 = u13;
    *(float *)0xC1794C8 = 0.0f;
    t14 = *(signed char *)0xC08ADAC;
    *(unsigned char *)0xC179150 = t14;
    t15 = *(signed char *)0xC08ADAD;
    *(unsigned char *)0xC179151 = t15;
    t16 = *(signed char *)0xC08ADAE;
    *(unsigned char *)0xC179152 = t16;
    t17 = *(signed char *)0xC08ADAF;
    *(unsigned char *)0xC179153 = t17;
    t18 = *(signed char *)0xC08ADB0;
    *(unsigned char *)0xC179154 = t18;
    t19 = *(signed char *)0xC08ADB1;
    *(unsigned char *)0xC179155 = t19;
    t20 = *(int *)0xC1EE20C;
    t21 = *(int *)0xC17948C;
    if (t20 != 0) {
        if (t20 == 1) {
            if (t21 != 1) {
                *(float *)0xC179144 = 288.459991f;
                *(float *)0xC179148 = 2304.11987f;
                *(float *)0xC17914C = 4535.48975f;
                *(unsigned short *)0xC179152 = 0x349F;
                *(unsigned short *)0xC179150 = 0xF866;
                t22 = 0x88;
                t24 = 0xFE8C;
            } else {
                *(float *)0xC179144 = -1087.70996f;
                *(float *)0xC179148 = 102.079994f;
                *(float *)0xC17914C = -6556.45996f;
                t22 = 0x86;
                t24 = 0xC69;
            }
            *(unsigned short *)((0xC1790CC + t22)) = t24;
            t26 = *(int *)0xC179488;
            if ((int)t26 < (int)0x4) {
                u27 = *(float *)0xC179148;
                u29 = (u27 + 0.199999988f);
            } else {
                u28 = *(float *)0xC179148;
                u29 = (u28 + 0.099999994f);
            }
            *(float *)0xC179148 = u29;
            t30 = *(int *)0xC17914C;
            *(unsigned int *)0xC179160 = t30;
            t31 = *(int *)0xC179148;
            *(unsigned int *)0xC17915C = t31;
            t32 = *(int *)0xC179144;
            *(unsigned int *)0xC179158 = t32;
        } else {
            if (t20 == 2) {
                *(unsigned short *)0xC179152 = 0x0;
                t33 = *(int *)0xC1EE800;
                t34 = *(int *)(((t33 + 0x4) + 0x8));
                *(unsigned int *)0xC17914C = t34;
                t35 = *(int *)(((t33 + 0x4) + 0x4));
                *(unsigned int *)0xC179148 = t35;
                t36 = *(int *)(((t33 + 0x4) + 0x0));
                *(unsigned int *)0xC179144 = t36;
                u37 = *(float *)0xC179148;
                *(float *)0xC179148 = (u37 + 50.0f);
            } else {
                t38 = *(signed char *)0xC1EE35C;
                if (t38 != 0) {
                    if (t38 != 1) {
                        if (t38 == 2) {
                            *(unsigned short *)0xC179152 = 0x4000;
                            FUN_0c04bec2(0xC179144);
                            u40 = *(float *)0xC179148;
                            *(float *)0xC179148 = (u40 + 20.0f);
                        }
                    } else {
                        if (t21 == 1) {
                            t44 = *(int *)0xC1EE214;
                            if (t44 == 15) {
                                *(unsigned short *)0xC179152 = 0x5000;
                                t45 = *(int *)0xC2A1B2C;
                                t46 = *(int *)0xC2A1B28;
                                t47 = *(int *)(((((((t45 << 1) + t45) << 2) + t46) - 12) + 0x8));
                                *(unsigned int *)0xC17914C = t47;
                                t48 = *(int *)(((((((t45 << 1) + t45) << 2) + t46) - 12) + 0x4));
                                *(unsigned int *)0xC179148 = t48;
                                t49 = *(int *)(((((((t45 << 1) + t45) << 2) + t46) - 12) + 0x0));
                                *(unsigned int *)0xC179144 = t49;
                                u50 = *(float *)0xC17914C;
                                *(float *)0xC17914C = (u50 + 135.0f);
                                t51 = *(int *)0xC179488;
                                if ((int)t51 >= (int)0x4) {
                                    u52 = *(float *)0xC179148;
                                    u54 = (u52 + 0.099999994f);
                                } else {
                                    u53 = *(float *)0xC179148;
                                    u54 = (u53 + 0.199999988f);
                                }
                                u68 = u54;
                            } else {
                                *(unsigned short *)0xC179152 = 0xD000;
                                t55 = *(int *)0xC2A1B28;
                                t56 = *(int *)(((t55 + 0x18) + 0x8));
                                *(unsigned int *)0xC17914C = t56;
                                t57 = *(int *)(((t55 + 0x18) + 0x4));
                                *(unsigned int *)0xC179148 = t57;
                                t58 = *(int *)(((t55 + 0x18) + 0x0));
                                *(unsigned int *)0xC179144 = t58;
                                u59 = *(float *)0xC17914C;
                                *(float *)0xC17914C = (u59 - 140.0f);
                                t60 = *(int *)0xC179488;
                                if ((int)t60 < (int)0x4) {
                                    u61 = *(float *)0xC179148;
                                    u63 = (u61 + 0.199999988f);
                                } else {
                                    u62 = *(float *)0xC179148;
                                    u63 = (u62 + 0.099999994f);
                                }
                                u68 = u63;
                            }
                            u83 = u68;
                        } else {
                            *(unsigned short *)0xC179152 = 0x5000;
                            t69 = *(int *)0xC2A1B2C;
                            t70 = *(int *)0xC2A1B28;
                            t71 = *(int *)(((((((t69 << 1) + t69) << 2) + t70) - 12) + 0x8));
                            *(unsigned int *)0xC17914C = t71;
                            t72 = *(int *)(((((((t69 << 1) + t69) << 2) + t70) - 12) + 0x4));
                            *(unsigned int *)0xC179148 = t72;
                            t73 = *(int *)(((((((t69 << 1) + t69) << 2) + t70) - 12) + 0x0));
                            *(unsigned int *)0xC179144 = t73;
                            u74 = *(float *)0xC17914C;
                            *(float *)0xC17914C = (u74 + 135.0f);
                            t75 = *(int *)0xC179488;
                            if ((int)t75 >= (int)0x4) {
                                u76 = *(float *)0xC179148;
                                u78 = (u76 + 0.099999994f);
                            } else {
                                u77 = *(float *)0xC179148;
                                u78 = (u77 + 0.199999988f);
                            }
                            u83 = u78;
                        }
                        *(float *)0xC179148 = u83;
                    }
                } else {
                    *(unsigned short *)0xC179152 = 0x4000;
                    t87 = *(int *)0xC2A1B28;
                    t88 = *(int *)(((t87 + 0x4B0) + 0x8));
                    *(unsigned int *)0xC17914C = t88;
                    t89 = *(int *)(((t87 + 0x4B0) + 0x4));
                    *(unsigned int *)0xC179148 = t89;
                    t90 = *(int *)(((t87 + 0x4B0) + 0x0));
                    *(unsigned int *)0xC179144 = t90;
                    u91 = *(float *)0xC179148;
                    *(float *)0xC179148 = (u91 + 20.0f);
                }
            }
        }
    } else {
        t100 = *(signed char *)0xC1EE35C;
        if (t100 != 0) {
            if (t100 != 1) {
                if (t100 == 2) {
                    *(unsigned short *)0xC179152 = 0x4000;
                    FUN_0c04bec2(0xC179144);
                    u102 = *(float *)0xC179148;
                    *(float *)0xC179148 = (u102 + 20.0f);
                }
            } else {
                if (t21 == 1) {
                    t106 = *(int *)0xC1EE214;
                    if (t106 == 15) {
                        *(unsigned short *)0xC179152 = 0x5000;
                        t107 = *(int *)0xC2A1B2C;
                        t108 = *(int *)0xC2A1B28;
                        t109 = *(int *)(((((((t107 << 1) + t107) << 2) + t108) - 12) + 0x8));
                        *(unsigned int *)0xC17914C = t109;
                        t110 = *(int *)(((((((t107 << 1) + t107) << 2) + t108) - 12) + 0x4));
                        *(unsigned int *)0xC179148 = t110;
                        t111 = *(int *)(((((((t107 << 1) + t107) << 2) + t108) - 12) + 0x0));
                        *(unsigned int *)0xC179144 = t111;
                        u112 = *(float *)0xC17914C;
                        *(float *)0xC17914C = (u112 + 135.0f);
                        t113 = *(int *)0xC179488;
                        if ((int)t113 >= (int)0x4) {
                            u114 = *(float *)0xC179148;
                            u116 = (u114 + 0.099999994f);
                        } else {
                            u115 = *(float *)0xC179148;
                            u116 = (u115 + 0.199999988f);
                        }
                        u130 = u116;
                    } else {
                        *(unsigned short *)0xC179152 = 0xD000;
                        t117 = *(int *)0xC2A1B28;
                        t118 = *(int *)(((t117 + 0x18) + 0x8));
                        *(unsigned int *)0xC17914C = t118;
                        t119 = *(int *)(((t117 + 0x18) + 0x4));
                        *(unsigned int *)0xC179148 = t119;
                        t120 = *(int *)(((t117 + 0x18) + 0x0));
                        *(unsigned int *)0xC179144 = t120;
                        u121 = *(float *)0xC17914C;
                        *(float *)0xC17914C = (u121 - 140.0f);
                        t122 = *(int *)0xC179488;
                        if ((int)t122 < (int)0x4) {
                            u123 = *(float *)0xC179148;
                            u125 = (u123 + 0.199999988f);
                        } else {
                            u124 = *(float *)0xC179148;
                            u125 = (u124 + 0.099999994f);
                        }
                        u130 = u125;
                    }
                    u145 = u130;
                } else {
                    *(unsigned short *)0xC179152 = 0x5000;
                    t131 = *(int *)0xC2A1B2C;
                    t132 = *(int *)0xC2A1B28;
                    t133 = *(int *)(((((((t131 << 1) + t131) << 2) + t132) - 12) + 0x8));
                    *(unsigned int *)0xC17914C = t133;
                    t134 = *(int *)(((((((t131 << 1) + t131) << 2) + t132) - 12) + 0x4));
                    *(unsigned int *)0xC179148 = t134;
                    t135 = *(int *)(((((((t131 << 1) + t131) << 2) + t132) - 12) + 0x0));
                    *(unsigned int *)0xC179144 = t135;
                    u136 = *(float *)0xC17914C;
                    *(float *)0xC17914C = (u136 + 135.0f);
                    t137 = *(int *)0xC179488;
                    if ((int)t137 >= (int)0x4) {
                        u138 = *(float *)0xC179148;
                        u140 = (u138 + 0.099999994f);
                    } else {
                        u139 = *(float *)0xC179148;
                        u140 = (u139 + 0.199999988f);
                    }
                    u145 = u140;
                }
                *(float *)0xC179148 = u145;
            }
        } else {
            *(unsigned short *)0xC179152 = 0x4000;
            t149 = *(int *)0xC2A1B28;
            t150 = *(int *)(((t149 + 0x4B0) + 0x8));
            *(unsigned int *)0xC17914C = t150;
            t151 = *(int *)(((t149 + 0x4B0) + 0x4));
            *(unsigned int *)0xC179148 = t151;
            t152 = *(int *)(((t149 + 0x4B0) + 0x0));
            *(unsigned int *)0xC179144 = t152;
            u153 = *(float *)0xC179148;
            *(float *)0xC179148 = (u153 + 20.0f);
        }
    }
    t159 = *(int *)0xC179154;
    *(unsigned int *)0xC179168 = t159;
    t160 = *(int *)0xC179150;
    *(unsigned int *)0xC179164 = t160;
    t161 = *(int *)0xC17914C;
    *(unsigned int *)0xC179160 = t161;
    t162 = *(int *)0xC179148;
    *(unsigned int *)0xC17915C = t162;
    t163 = *(int *)0xC179144;
    *(unsigned int *)0xC179158 = t163;
    t164 = *(signed char *)0xC08ADAC;
    *(unsigned char *)0xC179178 = t164;
    t165 = *(signed char *)0xC08ADAD;
    *(unsigned char *)0xC179179 = t165;
    t166 = *(signed char *)0xC08ADAE;
    *(unsigned char *)0xC17917A = t166;
    t167 = *(signed char *)0xC08ADAF;
    *(unsigned char *)0xC17917B = t167;
    t168 = *(signed char *)0xC08ADB0;
    *(unsigned char *)0xC17917C = t168;
    t169 = *(signed char *)0xC08ADB1;
    *(unsigned char *)0xC17917D = t169;
    t170 = *(int *)0xC08AD9C;
    *(unsigned int *)0xC179174 = t170;
    t171 = *(int *)0xC08AD98;
    *(unsigned int *)0xC179170 = t171;
    t172 = *(int *)0xC08AD94;
    *(unsigned int *)0xC17916C = t172;
    t173 = *(short *)0xC179152;
    *(unsigned short *)0xC1791C0 = t173;
    t174 = *(signed char *)0xC08ADAC;
    *(unsigned char *)0xC1791C2 = t174;
    t175 = *(signed char *)0xC08ADAD;
    *(unsigned char *)0xC1791C3 = t175;
    t176 = *(signed char *)0xC08ADAE;
    *(unsigned char *)0xC1791C4 = t176;
    t177 = *(signed char *)0xC08ADAF;
    *(unsigned char *)0xC1791C5 = t177;
    t178 = *(signed char *)0xC08ADB0;
    *(unsigned char *)0xC1791C6 = t178;
    t179 = *(signed char *)0xC08ADB1;
    *(unsigned char *)0xC1791C7 = t179;
    t180 = *(int *)0xC08AD9C;
    *(unsigned int *)0xC1791D0 = t180;
    t181 = *(int *)0xC08AD98;
    *(unsigned int *)0xC1791CC = t181;
    t182 = *(int *)0xC08AD94;
    *(unsigned int *)0xC1791C8 = t182;
    t183 = *(int *)0xC1791D0;
    *(unsigned int *)0xC1791DC = t183;
    t184 = *(int *)0xC1791CC;
    *(unsigned int *)0xC1791D8 = t184;
    t185 = *(int *)0xC1791C8;
    *(unsigned int *)0xC1791D4 = t185;
    *(unsigned short *)0xC1791E0 = 0x0;
    *(float *)0xC1791E4 = (float)0x0;
    *(float *)0xC1791E8 = (float)0x0;
    *(unsigned int *)0xC1791EC = 0x1;
    *(unsigned int *)0xC1791F0 = 0x0;
    t186 = *(int *)0xC179488;
    if ((int)t186 < (int)0x4) {
        *(float *)0xC1791F4 = 204.081635f;
        *(float *)0xC1791F8 = 2.86999989f;
        *(float *)0xC179210 = 15.0f;
        *(float *)0xC1791FC = 15.5f;
        *(float *)0xC179200 = 17.5f;
        *(float *)0xC179204 = 0.0f;
        u188 = 40.0f;
    } else {
        *(float *)0xC1791F4 = 214.285721f;
        *(float *)0xC1791F8 = 3.5999999f;
        *(float *)0xC179210 = 11.0f;
        *(float *)0xC1791FC = 14.5f;
        *(float *)0xC179200 = 13.5f;
        *(float *)0xC179204 = 0.0f;
        u188 = 32.0f;
    }
    *(float *)0xC179208 = u188;
    *(float *)0xC17920C = 25.0f;
    FUN_0c02238e(0xC1790CC);
    *(float *)0xC179228 = 0.0f;
    *(float *)0xC179238 = 0.0f;
    *(float *)0xC179234 = 0.0f;
    *(float *)0xC179230 = 0.0f;
    *(float *)0xC179224 = 0.0f;
    *(float *)0xC17922C = 0.0f;
    *(float *)0xC179220 = 0.0f;
    *(float *)0xC179240 = 0.0f;
    *(float *)0xC17923C = 0.0f;
    *(float *)0xC179244 = 1.0f;
    *(float *)0xC17924C = 0.0f;
    *(float *)0xC179248 = 0.0f;
    *(float *)0xC179250 = 1.0f;
    *(float *)0xC179258 = 0.0f;
    *(float *)0xC179254 = 0.0f;
    *(float *)0xC17925C = 1.0f;
    *(float *)0xC179260 = 1.0f;
    *(unsigned short *)0xC179268 = 0x0;
    *(unsigned short *)0xC179266 = 0x0;
    *(unsigned short *)0xC179264 = 0x0;
    t190 = 0xC023BF8;
    t191 = 0x4;
    t192 = 0xC17926C;
    while (t191 != 0) {
        t190 = 0x30;
        *(unsigned int *)((t192 + 0x0)) = 0x1;
        *(unsigned int *)((t192 + 0x4)) = 0x1;
        u193 = *(float *)0xC1794C4;
        *(float *)((t192 + t190)) = u193;
        t190 = 0x34;
        *(float *)((t192 + t190)) = 0.0f;
        t190 = 0x38;
        *(float *)((t192 + t190)) = 0.0f;
        t190 = 0x3C;
        *(float *)((t192 + t190)) = 0.0f;
        t190 = 0x128;
        u194 = *(float *)((0xC1790CC + t190));
        t190 = 0x8;
        *(float *)((t192 + t190)) = (u194 * 0.25f);
        t190 = 0x10;
        *(float *)((t192 + t190)) = (u194 * 0.25f);
        t190 = 0xC;
        *(float *)((t192 + t190)) = 0.0f;
        t190 = 0x20;
        *(float *)((t192 + t190)) = 0.0f;
        t190 = 0x1C;
        *(float *)((t192 + t190)) = 0.0f;
        t190 = 0x18;
        *(float *)((t192 + t190)) = 0.0f;
        t190 = 0x14;
        *(float *)((t192 + t190)) = 0.0f;
        t190 = 0x28;
        *(float *)((t192 + t190)) = 0.0f;
        t190 = 0x2C;
        *(float *)((t192 + t190)) = 0.0f;
        t190 = 0x40;
        *(float *)((t192 + t190)) = 0.0f;
        t190 = 0xC;
        t195 = 0;
        for (; t195 < (int)t190; t195++) *(unsigned char *)((t192 + 0x74) + t195) = *(unsigned char *)(0xC08AD94 + t195);
        t190 = 0xC;
        t196 = 0;
        for (; t196 < (int)t190; t196++) *(unsigned char *)((t192 + 0x68) + t196) = *(unsigned char *)(0xC08AD94 + t196);
        t190 = 0xC;
        t197 = 0;
        for (; t197 < (int)t190; t197++) *(unsigned char *)((t192 + 0x5C) + t197) = *(unsigned char *)(0xC08AD94 + t197);
        t190 = 0xC;
        t198 = 0;
        for (; t198 < (int)t190; t198++) *(unsigned char *)((t192 + 0x50) + t198) = *(unsigned char *)(0xC08AD94 + t198);
        t190 = 0xC;
        t199 = 0;
        for (; t199 < (int)t190; t199++) *(unsigned char *)((t192 + 0x44) + t199) = *(unsigned char *)(0xC08AD94 + t199);
        t190 = 0x82;
        t191 = (t191 - 1);
        *(unsigned short *)((t192 + t190)) = 0x0;
        t190 = (t190 - 2);
        *(unsigned short *)((t192 + t190)) = 0x0;
        t192 = (t192 + 0x84);
    }
    FUN_0c022102(0xC1790CC);
    t202 = *(int *)0xC08AD9C;
    *(unsigned int *)0xC17911C = t202;
    t203 = *(int *)0xC08AD98;
    *(unsigned int *)0xC179118 = t203;
    t204 = *(int *)0xC08AD94;
    *(unsigned int *)0xC179114 = t204;
    t205 = *(int *)0xC17914C;
    *(unsigned int *)0xC1790D4 = t205;
    t206 = *(int *)0xC179148;
    *(unsigned int *)0xC1790D0 = t206;
    t207 = *(int *)0xC179144;
    *(unsigned int *)0xC1790CC = t207;
    t208 = *(int *)0xC1791D0;
    *(unsigned int *)0xC1790E0 = t208;
    t209 = *(int *)0xC1791CC;
    *(unsigned int *)0xC1790DC = t209;
    t210 = *(int *)0xC1791C8;
    *(unsigned int *)0xC1790D8 = t210;
    *(unsigned int *)0xC1790F4 = 0xC1790FC;
    *(unsigned int *)0xC1790F8 = 0x0;
    SetColliObj(0xC1790CC, 0x0);
    FUN_0c0208d6();
    InitEffect();
    t214 = FUN_0c0376b0();
    *(unsigned int *)0xC179490 = 0x0;
    *(unsigned int *)0xC179494 = 0x0;
    return t214;
}
