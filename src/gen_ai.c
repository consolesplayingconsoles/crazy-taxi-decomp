/* Straight-line functions with calls and guards (batch gen_ai): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c060160(void);
int FUN_0c0601f0(void);
int FUN_0c0603a2(void);
int FUN_0c0813d0(int);
float nlLength(int, int);

float FUN_0c0217b4(float f4, float f5)
{
    float u2;
    float u5;
    float u12;
    float u15;
    float u24;
    float u23;
    float u9;
    float u19;

    if (!(f5 > f4)) {
        if (f4 != 0.0f) {
            u2 = (((f4 - f5) / f4) < 0.0f ? -((f4 - f5) / f4) : ((f4 - f5) / f4));
            if (80.0f > (f4 < 0.0f ? -f4 : f4)) {
                u2 = ((((f4 - f5) / f4) < 0.0f ? -((f4 - f5) / f4) : ((f4 - f5) / f4)) * ((f4 / 75.0f) < 0.0f ? -(f4 / 75.0f) : (f4 / 75.0f)));
            }
            u9 = u2;
        } else {
            u5 = 0.0f;
            if (f5 != 0.0f) {
                u5 = (((f5 / 75.0f) < 0.0f ? -(f5 / 75.0f) : (f5 / 75.0f)) * 1.0f);
            }
            u9 = u5;
        }
        u23 = u9;
    } else {
        if (f5 != 0.0f) {
            u12 = (((f5 - f4) / f5) < 0.0f ? -((f5 - f4) / f5) : ((f5 - f4) / f5));
            if (80.0f > (f5 < 0.0f ? -f5 : f5)) {
                u12 = ((((f5 - f4) / f5) < 0.0f ? -((f5 - f4) / f5) : ((f5 - f4) / f5)) * ((f5 / 75.0f) < 0.0f ? -(f5 / 75.0f) : (f5 / 75.0f)));
            }
            u19 = u12;
        } else {
            u15 = (((f4 / 75.0f) < 0.0f ? -(f4 / 75.0f) : (f4 / 75.0f)) * 1.0f);
            if (f4 == 0.0f) {
                u15 = 0.0f;
            }
            u19 = u15;
        }
        u23 = u19;
    }
    u24 = u23;
    if (u23 > 1.0f) {
        u24 = 1.0f;
    }
    return u24;
}

void calcColliCheck(int a4)
{
    float u0;
    float u1;
    float u2;
    int t3;
    int t4;
    float u5;
    float u6;
    float u7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t15;
    int t19;
    int t22;
    int t25;
    int t28;

    u0 = *(float *)((a4 + 0xC4));
    if (u0 == 0.0f) {
        u1 = *(float *)((a4 + 0xCC));
        if (0.00199999986f > (u1 < 0.0f ? -u1 : u1)) {
            u2 = *(float *)((a4 + 0x60));
            if (9.99999941e-08f > (u2 < 0.0f ? -u2 : u2)) {
                t3 = *(short *)((a4 + 0xAA));
                t4 = FUN_0c0813d0(t3);
                if ((int)t4 < (int)0x10) {
                    u5 = *(float *)((a4 + 0x100));
                    if (9.99999941e-08f > (u5 < 0.0f ? -u5 : u5)) {
                        u6 = *(float *)((a4 + 0x104));
                        u7 = *(float *)((a4 + 0x90));
                        if (0.073499985f > ((u7 - u6) < 0.0f ? -(u7 - u6) : (u7 - u6))) {
                            t8 = *(int *)((a4 + 0x84));
                            *(unsigned int *)((a4 + 0x84)) = (t8 & 0xFFFFFFFB);
                            t9 = *(int *)0xC0A4790;
                            *(unsigned int *)(((0x98 + a4) + 0x8)) = t9;
                            t10 = *(int *)0xC0A478C;
                            *(unsigned int *)(((0x98 + a4) + 0x4)) = t10;
                            t11 = *(int *)0xC0A4788;
                            *(unsigned int *)(((0x98 + a4) + 0x0)) = t11;
                        } else {
                            t12 = *(int *)((a4 + 0x84));
                            *(unsigned int *)((a4 + 0x84)) = (t12 | 0x4);
                        }
                    } else {
                        t15 = *(int *)((a4 + 0x84));
                        *(unsigned int *)((a4 + 0x84)) = (t15 | 0x4);
                    }
                } else {
                    t19 = *(int *)((a4 + 0x84));
                    *(unsigned int *)((a4 + 0x84)) = (t19 | 0x4);
                }
            } else {
                t22 = *(int *)((a4 + 0x84));
                *(unsigned int *)((a4 + 0x84)) = (t22 | 0x4);
            }
        } else {
            t25 = *(int *)((a4 + 0x84));
            *(unsigned int *)((a4 + 0x84)) = (t25 | 0x4);
        }
    } else {
        t28 = *(int *)((a4 + 0x84));
        *(unsigned int *)((a4 + 0x84)) = (t28 | 0x4);
    }
}

void calcCheck(int a4)
{
    float t0;
    float u1;
    int t2;
    int t3;
    float u6;
    float u7;
    float u8;
    int t9;
    int t10;
    float u11;
    float u12;
    float u13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t21;
    int t25;
    int t28;
    int t31;
    int t34;
    int t4;

    t0 = nlLength(0xC2A1B34, (0x8C + a4));
    u1 = *(float *)0xC2A1B18;
    if ((u1 + 30.0f) > t0) {
        t2 = *(int *)((a4 + 0x84));
        t4 = (t2 | 0xD);
    } else {
        t3 = *(int *)((a4 + 0x84));
        t4 = (t3 & 0xFFFFFFF2);
    }
    *(unsigned int *)((a4 + 0x84)) = t4;
    u6 = *(float *)((a4 + 0xC4));
    if (u6 == 0.0f) {
        u7 = *(float *)((a4 + 0xCC));
        if (0.00199999986f > (u7 < 0.0f ? -u7 : u7)) {
            u8 = *(float *)((a4 + 0x60));
            if (9.99999941e-08f > (u8 < 0.0f ? -u8 : u8)) {
                t9 = *(short *)((a4 + 0xAA));
                t10 = FUN_0c0813d0(t9);
                if ((int)t10 < (int)0x10) {
                    u11 = *(float *)((a4 + 0x100));
                    if (9.99999941e-08f > (u11 < 0.0f ? -u11 : u11)) {
                        u12 = *(float *)((a4 + 0x104));
                        u13 = *(float *)((a4 + 0x90));
                        if (0.073499985f > ((u13 - u12) < 0.0f ? -(u13 - u12) : (u13 - u12))) {
                            t14 = *(int *)((a4 + 0x84));
                            *(unsigned int *)((a4 + 0x84)) = (t14 & 0xFFFFFFFB);
                            t15 = *(int *)0xC0A4790;
                            *(unsigned int *)(((0x98 + a4) + 0x8)) = t15;
                            t16 = *(int *)0xC0A478C;
                            *(unsigned int *)(((0x98 + a4) + 0x4)) = t16;
                            t17 = *(int *)0xC0A4788;
                            *(unsigned int *)(((0x98 + a4) + 0x0)) = t17;
                        } else {
                            t18 = *(int *)((a4 + 0x84));
                            *(unsigned int *)((a4 + 0x84)) = (t18 | 0x4);
                        }
                    } else {
                        t21 = *(int *)((a4 + 0x84));
                        *(unsigned int *)((a4 + 0x84)) = (t21 | 0x4);
                    }
                } else {
                    t25 = *(int *)((a4 + 0x84));
                    *(unsigned int *)((a4 + 0x84)) = (t25 | 0x4);
                }
            } else {
                t28 = *(int *)((a4 + 0x84));
                *(unsigned int *)((a4 + 0x84)) = (t28 | 0x4);
            }
        } else {
            t31 = *(int *)((a4 + 0x84));
            *(unsigned int *)((a4 + 0x84)) = (t31 | 0x4);
        }
    } else {
        t34 = *(int *)((a4 + 0x84));
        *(unsigned int *)((a4 + 0x84)) = (t34 | 0x4);
    }
}

int FUN_0c05ff66(void)
{
    int t0;
    int t1;
    int t146;
    int t2;
    float u3;
    float u4;
    int t6;
    float u7;
    float u8;
    int t9;
    float u10;
    int t11;
    int t20;
    float u21;
    float u22;
    int t23;
    float u24;
    float u25;
    int t26;
    float u27;
    float u28;
    int t63;
    int t30;
    float u31;
    float u32;
    int t58;
    int t33;
    float u34;
    float u35;
    int t53;
    int t36;
    float u37;
    float u38;
    int t49;
    int t39;
    float u40;
    int t41;
    float u42;
    int t43;
    float u44;
    float u45;
    float u46;
    float u47;
    int t48;
    int t69;
    float u70;
    float u71;
    int t97;
    int t72;
    float u73;
    float u74;
    int t92;
    int t75;
    float u76;
    float u77;
    int t88;
    int t78;
    float u79;
    int t80;
    float u81;
    int t82;
    float u83;
    float u84;
    float u85;
    float u86;
    int t87;
    int t108;
    float u109;
    float u110;
    int t136;
    int t111;
    float u112;
    float u113;
    int t131;
    int t114;
    float u115;
    float u116;
    int t127;
    int t117;
    float u118;
    int t119;
    float u120;
    int t121;
    float u122;
    float u123;
    float u124;
    float u125;
    int t126;
    int t149;
    int t150;
    int t141;
    int t102;

    t0 = FUN_0c0603a2();
    t1 = *(int *)0xC2A9F6C;
    t146 = t0;
    if ((int)t1 < (int)0x2) {
        t2 = *(int *)0xC2A9F64;
        u3 = *(float *)0xC2A9F70;
        u4 = *(float *)((((signed char)(((t2 << 2) + t2) << 2) + 0xC1322C0) + 0x0));
        if (!(100.0f > ((u4 - u3) < 0.0f ? -(u4 - u3) : (u4 - u3)))) {
            FUN_0c060160();
            t6 = *(int *)0xC2A9F64;
            u7 = *(float *)0xC2A9F70;
            u8 = *(float *)((((signed char)(((t6 << 2) + t6) << 2) + 0xC1322C0) + 0x0));
            if (100.0f > ((u8 - u7) < 0.0f ? -(u8 - u7) : (u8 - u7))) {
                t9 = *(int *)0xC2A9F64;
                u10 = *(float *)((((signed char)(((t9 << 2) + t9) << 2) + 0xC1322C0) + 0x0));
                *(float *)0xC2A9F70 = u10;
                *(float *)0xC0E4E48 = u10;
                t11 = *(int *)0xC2A9F6C;
                *(unsigned int *)0xC2A9F6C = (t11 + 0x1);
            }
        }
        t20 = *(int *)0xC2A9F64;
        u21 = *(float *)0xC2A9F74;
        u22 = *(float *)((((signed char)(((t20 << 2) + t20) << 2) + 0xC1322C0) + 0x4));
        if ((1.0f + 1.0f) > ((u22 - u21) < 0.0f ? -(u22 - u21) : (u22 - u21))) {
            t23 = *(signed char *)0xC2A9F64;
            u24 = *(float *)0xC2A9F78;
            u25 = *(float *)((((signed char)(((t23 << 2) + t23) << 2) + 0xC1322C0) + 0x8));
            if ((1.0f + 1.0f) > ((u25 - u24) < 0.0f ? -(u25 - u24) : (u25 - u24))) {
                t26 = *(int *)0xC2A9F64;
                u27 = *(float *)0xC2A9F7C;
                u28 = *(float *)((0xC + ((signed char)(((t26 << 2) + t26) << 2) + 0xC1322C0)));
                t63 = ((signed char)(((t26 << 2) + t26) << 2) + 0xC1322C0);
                if (!((1.0f + 1.0f) > ((u28 - u27) < 0.0f ? -(u28 - u27) : (u28 - u27)))) {
                    FUN_0c0601f0();
                    t30 = *(int *)0xC2A9F64;
                    u31 = *(float *)0xC2A9F74;
                    u32 = *(float *)((((signed char)(((t30 << 2) + t30) << 2) + 0xC1322C0) + 0x4));
                    t58 = 0x4;
                    if ((1.0f + 1.0f) > ((u32 - u31) < 0.0f ? -(u32 - u31) : (u32 - u31))) {
                        t33 = *(signed char *)0xC2A9F64;
                        u34 = *(float *)0xC2A9F78;
                        u35 = *(float *)((((signed char)(((t33 << 2) + t33) << 2) + 0xC1322C0) + 0x8));
                        t53 = 0x8;
                        if ((1.0f + 1.0f) > ((u35 - u34) < 0.0f ? -(u35 - u34) : (u35 - u34))) {
                            t36 = *(int *)0xC2A9F64;
                            u37 = *(float *)0xC2A9F7C;
                            u38 = *(float *)((0xC + ((signed char)(((t36 << 2) + t36) << 2) + 0xC1322C0)));
                            t49 = ((signed char)(((t36 << 2) + t36) << 2) + 0xC1322C0);
                            if ((1.0f + 1.0f) > ((u38 - u37) < 0.0f ? -(u38 - u37) : (u38 - u37))) {
                                t39 = *(int *)0xC2A9F64;
                                u40 = *(float *)((((signed char)(((t39 << 2) + t39) << 2) + 0xC1322C0) + 0x4));
                                *(float *)0xC2A9F74 = u40;
                                t41 = *(int *)0xC2A9F64;
                                u42 = *(float *)((((signed char)(((t41 << 2) + t41) << 2) + 0xC1322C0) + 0x8));
                                *(float *)0xC2A9F78 = u42;
                                t43 = *(int *)0xC2A9F64;
                                u44 = *(float *)((((signed char)(((t43 << 2) + t43) << 2) + 0xC1322C0) + 0xC));
                                *(float *)0xC2A9F7C = u44;
                                u45 = *(float *)0xC2A9F74;
                                u46 = *(float *)0xC2A9F78;
                                u47 = *(float *)0xC2A9F7C;
                                *(unsigned int *)0xC0E4E40 = (0x0 | ((((int)u45 << 16) | ((int)u46 << 8)) | (int)u47));
                                t48 = *(int *)0xC2A9F6C;
                                *(unsigned int *)0xC2A9F6C = (t48 + 0x1);
                                t49 = 0xC;
                            }
                            t53 = t49;
                        }
                        t58 = t53;
                    }
                    t63 = t58;
                }
                t102 = t63;
            } else {
                FUN_0c0601f0();
                t69 = *(int *)0xC2A9F64;
                u70 = *(float *)0xC2A9F74;
                u71 = *(float *)((((signed char)(((t69 << 2) + t69) << 2) + 0xC1322C0) + 0x4));
                t97 = 0x4;
                if ((1.0f + 1.0f) > ((u71 - u70) < 0.0f ? -(u71 - u70) : (u71 - u70))) {
                    t72 = *(signed char *)0xC2A9F64;
                    u73 = *(float *)0xC2A9F78;
                    u74 = *(float *)((((signed char)(((t72 << 2) + t72) << 2) + 0xC1322C0) + 0x8));
                    t92 = 0x8;
                    if ((1.0f + 1.0f) > ((u74 - u73) < 0.0f ? -(u74 - u73) : (u74 - u73))) {
                        t75 = *(int *)0xC2A9F64;
                        u76 = *(float *)0xC2A9F7C;
                        u77 = *(float *)((0xC + ((signed char)(((t75 << 2) + t75) << 2) + 0xC1322C0)));
                        t88 = ((signed char)(((t75 << 2) + t75) << 2) + 0xC1322C0);
                        if ((1.0f + 1.0f) > ((u77 - u76) < 0.0f ? -(u77 - u76) : (u77 - u76))) {
                            t78 = *(int *)0xC2A9F64;
                            u79 = *(float *)((((signed char)(((t78 << 2) + t78) << 2) + 0xC1322C0) + 0x4));
                            *(float *)0xC2A9F74 = u79;
                            t80 = *(int *)0xC2A9F64;
                            u81 = *(float *)((((signed char)(((t80 << 2) + t80) << 2) + 0xC1322C0) + 0x8));
                            *(float *)0xC2A9F78 = u81;
                            t82 = *(int *)0xC2A9F64;
                            u83 = *(float *)((((signed char)(((t82 << 2) + t82) << 2) + 0xC1322C0) + 0xC));
                            *(float *)0xC2A9F7C = u83;
                            u84 = *(float *)0xC2A9F74;
                            u85 = *(float *)0xC2A9F78;
                            u86 = *(float *)0xC2A9F7C;
                            *(unsigned int *)0xC0E4E40 = (0x0 | ((((int)u84 << 16) | ((int)u85 << 8)) | (int)u86));
                            t87 = *(int *)0xC2A9F6C;
                            *(unsigned int *)0xC2A9F6C = (t87 + 0x1);
                            t88 = 0xC;
                        }
                        t92 = t88;
                    }
                    t97 = t92;
                }
                t102 = t97;
            }
            t141 = t102;
        } else {
            FUN_0c0601f0();
            t108 = *(int *)0xC2A9F64;
            u109 = *(float *)0xC2A9F74;
            u110 = *(float *)((((signed char)(((t108 << 2) + t108) << 2) + 0xC1322C0) + 0x4));
            t136 = 0x4;
            if ((1.0f + 1.0f) > ((u110 - u109) < 0.0f ? -(u110 - u109) : (u110 - u109))) {
                t111 = *(signed char *)0xC2A9F64;
                u112 = *(float *)0xC2A9F78;
                u113 = *(float *)((((signed char)(((t111 << 2) + t111) << 2) + 0xC1322C0) + 0x8));
                t131 = 0x8;
                if ((1.0f + 1.0f) > ((u113 - u112) < 0.0f ? -(u113 - u112) : (u113 - u112))) {
                    t114 = *(int *)0xC2A9F64;
                    u115 = *(float *)0xC2A9F7C;
                    u116 = *(float *)((0xC + ((signed char)(((t114 << 2) + t114) << 2) + 0xC1322C0)));
                    t127 = ((signed char)(((t114 << 2) + t114) << 2) + 0xC1322C0);
                    if ((1.0f + 1.0f) > ((u116 - u115) < 0.0f ? -(u116 - u115) : (u116 - u115))) {
                        t117 = *(int *)0xC2A9F64;
                        u118 = *(float *)((((signed char)(((t117 << 2) + t117) << 2) + 0xC1322C0) + 0x4));
                        *(float *)0xC2A9F74 = u118;
                        t119 = *(int *)0xC2A9F64;
                        u120 = *(float *)((((signed char)(((t119 << 2) + t119) << 2) + 0xC1322C0) + 0x8));
                        *(float *)0xC2A9F78 = u120;
                        t121 = *(int *)0xC2A9F64;
                        u122 = *(float *)((((signed char)(((t121 << 2) + t121) << 2) + 0xC1322C0) + 0xC));
                        *(float *)0xC2A9F7C = u122;
                        u123 = *(float *)0xC2A9F74;
                        u124 = *(float *)0xC2A9F78;
                        u125 = *(float *)0xC2A9F7C;
                        *(unsigned int *)0xC0E4E40 = (0x0 | ((((int)u123 << 16) | ((int)u124 << 8)) | (int)u125));
                        t126 = *(int *)0xC2A9F6C;
                        *(unsigned int *)0xC2A9F6C = (t126 + 0x1);
                        t127 = 0xC;
                    }
                    t131 = t127;
                }
                t136 = t131;
            }
            t141 = t136;
        }
        t146 = t141;
    }
    t149 = *(int *)0xC2A9F64;
    t150 = *(int *)0xC2A9F68;
    if (t150 != t149) {
        *(unsigned int *)0xC2A9F68 = t149;
    }
    return t146;
}

int nlArcTan(float f4)
{
    float u0;
    int t1;
    float u2;
    int t3;
    int t4;
    float u5;

    u0 = (1.0f / f4);
    if (!((f4 < 0.0f ? -f4 : f4) > 1.0f)) {
        u0 = f4;
    }
    t1 = 0xD;
    u2 = 0.0f;
    do {
        t3 = (t1 << 1);
        t4 = t1;
        t1 = (t1 - 1);
        u5 = (((float)t3 + u2) + 1.0f);
        u2 = ((((float)t4 * (float)t4) * u0) * u0);
        u2 = (u2 / u5);
    } while ((int)t1 >= (int)0x1);
    if (f4 > 1.0f) {
        return (unsigned short)(0x4000 - ((int)(((((u0 / (u2 + 1.0f)) + 6.28318501f) * 65536.0f) / 6.28318501f) + 0.5f) & 0xFFFF));
    }
    if ((-1.0f) > f4) {
        return (unsigned short)(0xC000 - ((int)(((((u0 / (u2 + 1.0f)) + 6.28318501f) * 65536.0f) / 6.28318501f) + 0.5f) & 0xFFFF));
    }
    return ((int)(((((u0 / (u2 + 1.0f)) + 6.28318501f) * 65536.0f) / 6.28318501f) + 0.5f) & 0xFFFF);
}

float nlFloor(float f4)
{
    if (8388608.0f > (f4 < 0.0f ? -f4 : f4)) {
        if (0.0f > f4) {
            if (((f4 < 0.0f ? -f4 : f4) - (float)(int)(f4 < 0.0f ? -f4 : f4)) != 0.0f) {
                return (float)(0xFFFFFFFF - (int)(f4 < 0.0f ? -f4 : f4));
            }
            return f4;
        }
        return (float)(int)(f4 < 0.0f ? -f4 : f4);
    }
    return f4;
}

float nlRoundOff(float f4)
{
    if (8388608.0f > (f4 < 0.0f ? -f4 : f4)) {
        if (((f4 < 0.0f ? -f4 : f4) - (float)(int)(f4 < 0.0f ? -f4 : f4)) != 0.0f) {
            if (f4 > 0.0f) {
                return (float)(int)(f4 < 0.0f ? -f4 : f4);
            }
            return (float)(-(int)(f4 < 0.0f ? -f4 : f4));
        }
        return f4;
    }
    return f4;
}
