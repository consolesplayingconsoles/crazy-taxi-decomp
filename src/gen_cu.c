/* Straight-line functions with calls and guards (batch gen_cu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03bf42(void);
int FUN_0c03bf76(void);
int FUN_0c04d3ee(int, ...);
int FUN_0c05bb24(void);
int FUN_0c05bb76(int);
int FUN_0c05d662(void);
int FUN_0c05d708(void);
int FUN_0c05d862(void);
int nlSqrt(int, int);
int FUN_0c077210(int, int);
int FUN_0c077df0(int);
int FUN_0c078480(int, int);
int FUN_0c078a70(int, int, int);
int FUN_0c079a60(float, float, float, float);
int FUN_0c079f10(void);
int SetCameraMode(int);
int camRestore(void);
int camSetEye(int, int);
int camSetTarget(int, int);
int kmRenderTexture(int);
int memmove(int, int, int);
int menuCursor(int, int, int);
int menuPutSprites(int, int, int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
int nlScaleVector(int, int, float);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
float nlUnitVector(int);
int nlPow(float f4, float f5);
int FUN_0c0110e6(void);
int FUN_0c076f70(void);
int FUN_0c03ec76(void);
int FUN_0c05d28e(int a4);
int FUN_0c0655f0(void);

int nlPow(float f4, float f5)
{
    if (f4 == 0.0f) {
        if (!(f5 > 0.0f)) {
            return ((int (*)(int, float, float))(0xC075F60))((int)f5, f4, f5);
        }
        return ((int (*)(int, float, float))(0xC075F46))((int)f5, f4, f5);
    }
    return ((int (*)(int, float, float))(0xC075EF0))((int)f5, f4, f5);
}

int FUN_0c0110e6(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = *(int *)0xAC00F728;
    *(unsigned char *)((t0 + 0x3C)) = 0xFFFFFFC0;
    t1 = *(int *)0xAC00F730;
    *(unsigned char *)((t1 + 0xC)) = 0xFFFFFF80;
    t2 = *(int *)0xAC00F730;
    *(unsigned char *)((t2 + 0x24)) = 0xFFFFFF80;
    t3 = *(int *)0xAC00F728;
    *(unsigned char *)((t3 + 0x14)) = 0x43;
    t4 = ((int (*)(int, int))(0xC0118F8))(0xFFFFFF80, 0xAC00F730);
    t5 = *(int *)0xAC00F728;
    *(unsigned char *)((t5 + 0x3C)) = 0x0;
    return 0x3C;
}

int FUN_0c076f70(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t11;
    int t12;
    float u13;
    float u14;
    float u15;
    float u16;
    int t18;

    t0 = *(int *)0xC2B31C4;
    t1 = *(int *)0xC2B31BC;
    if ((int)t0 >= 0) {
        t2 = *(int *)0xC2B29C0;
        t3 = *(int *)(((t1 + ((t0 << 2) << 2)) + 0x4));
        t4 = *(int *)((((t3 * 0x3C) + t2) + 0x28));
        if (t4 == 0) {
            kmRenderTexture(((t3 * 0x3C) + t2));
        }
        t11 = *(short *)(((t1 + ((t0 << 2) << 2)) + 0xC));
        *(unsigned int *)0xA05F8068 = ((t11 - 1) << 16);
        t12 = *(short *)(((t1 + ((t0 << 2) << 2)) + 0xE));
        *(unsigned int *)0xA05F806C = ((t12 - 1) << 16);
        *(unsigned int *)0xC2B31C4 = 0xFFFFFFFF;
        u13 = *(float *)0xC2B31D4;
        u14 = *(float *)0xC2B31D0;
        u15 = *(float *)0xC2B31CC;
        u16 = *(float *)0xC2B31C8;
        FUN_0c079a60(u16, u15, u14, u13);
        t18 = *(signed char *)0xC2B31D8;
        FUN_0c077df0(0x3);
        FUN_0c079f10();
        return FUN_0c077df0(t18);
    }
    return ((int (*)(int))(0xC077004))(t0);
}

int FUN_0c03ec76(void)
{
    int t1;
    int t2;
    int t18;
    int t3;
    int t4;
    int t5;
    int t12;
    int t6;
    int t7;
    int t8;
    int t19;
    int t20;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t33;
    int t39;
    int t40;
    int t41;
    int t43;
    int t44;
    int t45;
    int t46;

    FUN_0c03bf42();
    t1 = *(int *)0xC2A11D8;
    t2 = *(int *)((((t1 << 2) + 0xC2A11DC) + 0x0));
    t18 = 0x0;
    if ((int)t2 > (int)0x1) {
        t3 = *(int *)0xC2A11D8;
        t4 = *(int *)((0xC2A11DC + (t3 << 2)));
        t5 = *(signed char *)0xC28A4F6;
        t12 = (~(((int)(unsigned char)t5 >= 0) ? (0x1 << ((unsigned char)t5 & 31)) : ((-(int)(unsigned char)t5 & 31) ? ((int)0x1 >> (-(int)(unsigned char)t5 & 31)) : ((int)0x1 >> 31))));
        if (t4 != 2) {
            t6 = *(int *)0xC2A11D8;
            t7 = *(int *)((((t6 << 2) + 0xC2A11DC) + 0x0));
            t8 = 0xF;
            if ((int)t7 <= (int)0x4) {
                t8 = (((int)(unsigned char)t5 >= 0) ? (0xFFFFFFFF << ((unsigned char)t5 & 31)) : ((-(int)(unsigned char)t5 & 31) ? ((unsigned int)0xFFFFFFFF >> (-(int)(unsigned char)t5 & 31)) : 0));
            }
            t12 = t8;
        }
        t18 = t12;
    }
    t19 = *(int *)0xC2A11F4;
    t20 = *(int *)((((t19 << 2) + 0xC2A11F8) + 0x0));
    menuCursor(0x1, 0x4, t18);
    t22 = *(int *)0xC2A11F4;
    t23 = *(int *)((((t22 << 2) + 0xC2A11F8) + 0x0));
    *(unsigned int *)0xC2A11C4 = t23;
    t24 = *(int *)0xC1EE330;
    if ((t24 & 16) == 0) {
        t25 = *(int *)0xC2A11F4;
        t26 = *(int *)((((t25 << 2) + 0xC2A11F8) + 0x0));
        if (t26 != t20) {
            t27 = *(int *)0xC2A11C4;
            menuPutSprites(0xC0A1D98, 0xC2A1A84, 0x190, (((((t27 << 2) + t27) << 2) << 2) + 0x88));
        }
    } else {
        t33 = *(int *)0xC2A11C4;
        menuPutSprites(0xC0A1D98, 0xC2A1A84, 0x190, (((((t33 << 2) + t33) << 2) << 2) + 0x88));
    }
    t39 = *(int *)0xC2A1208;
    if ((t39 & 4) != 0) {
        t40 = *(int *)0xC2A11CC;
        if ((t40 & 2) != 0) {
            t41 = *(int *)0xC2A11C4;
            memmove(0xC2A1248, ((short)((short)t41 * (short)0x788) + 0xC28A4F8), 0x4);
            t43 = *(int *)0xC2A11D8;
            t44 = *(int *)((0xC2A11DC + (t43 << 2)));
            if (t44 != 2) {
                t45 = *(int *)0xC2A11D8;
                t46 = *(int *)((0xC2A11DC + (t45 << 2)));
                if (t46 == 3) {
                    return ((int (*)(int))(0xC040ACC))(0xC2A11D8);
                }
                if (t46 == 4) {
                    return ((int (*)(int))(0xC040A94))(0xC2A11D8);
                }
                return FUN_0c03bf76();
            }
            return ((int (*)(int))(0xC040A94))(0xC2A11D8);
        }
        return FUN_0c03bf76();
    }
    return FUN_0c03bf76();
}

int FUN_0c05d28e(int a4)
{
    int t0;
    int t1;
    int t2;
    float u3;
    float u4;
    int t25;
    int t26;
    int t28;
    int t29;
    int t35;
    int t37;
    int t38;
    int t44;
    float u45;
    float u46;
    int t64;
    int t65;
    int t95;
    int t96;
    int t110;
    int t115;
    int t116;
    int t117;
    int t118;
    int t119;
    int t120;
    int t121;
    int t122;
    float u125;
    int t127;
    int t128;
    int t129;
    int t133;
    int t131;
    int stk[12] = {0};

    t0 = *(int *)0xC1EE214;
    if (t0 == 14) {
        t1 = *(int *)0xC2A9A2C;
        if ((int)t1 < (int)0x7) {
            t2 = *(int *)0xC1EE794;
            if (t2 != 0) {
                u3 = *(float *)0xC179148;
                if (-10.0f > u3) {
                    u4 = *(float *)0xC17914C;
                    if (4000.0f > u4) {
                        *(unsigned int *)0xC2A991C = 0x0;
                    }
                } else {
                    *(unsigned int *)0xC2A991C = 0x0;
                }
            }
        }
    }
    t25 = *(int *)0xC2A991C;
    if (t25 == 0) {
        t26 = *(int *)0xC1794D0;
        if ((int)t26 >= (int)a4) {
            FUN_0c05bb24();
            *(unsigned int *)0xC2A991C = 0x1;
            *(unsigned int *)0xC179120 = 0x0;
            t28 = *(int *)0xC1EE214;
            if (t28 == 14) {
                t29 = *(int *)0xC1EE794;
                if ((int)t29 <= 0) {
                    *(unsigned int *)0xC179120 = 0x0;
                }
            }
        } else {
            t35 = *(int *)0xC1EE794;
            if (t35 == 0) {
                FUN_0c05bb76(0x0);
                *(unsigned int *)0xC2A991C = 0x1;
                *(unsigned int *)0xC179120 = 0x0;
                t37 = *(int *)0xC1EE214;
                if (t37 == 14) {
                    t38 = *(int *)0xC1EE794;
                    if ((int)t38 <= 0) {
                        *(unsigned int *)0xC179120 = 0x0;
                    }
                }
            } else {
                t44 = *(int *)0xC1EE214;
                if (t44 == 14) {
                    u45 = *(float *)0xC179148;
                    if (-10.0f > u45) {
                        u46 = *(float *)0xC17914C;
                        if (!(4000.0f > u46)) {
                            FUN_0c05bb76(0x3);
                            *(unsigned int *)0xC2A991C = 0x1;
                        }
                    }
                    t64 = *(int *)0xC1EE214;
                    if (t64 == 14) {
                        t65 = *(int *)0xC1EE794;
                        if ((int)t65 <= 0) {
                            *(unsigned int *)0xC179120 = 0x0;
                        }
                    }
                }
            }
        }
    } else {
        t95 = *(int *)0xC1EE214;
        if (t95 == 14) {
            t96 = *(int *)0xC1EE794;
            if ((int)t96 <= 0) {
                *(unsigned int *)0xC179120 = 0x0;
            }
        }
    }
    t110 = *(int *)0xC1EE214;
    if (t110 != 9) {
        FUN_0c05d708();
    } else {
        FUN_0c05d662();
    }
    FUN_0c05d862();
    t115 = *(int *)0xC1EE214;
    if (t115 == 10) {
        t116 = *(int *)0xC131978;
        *(unsigned int *)((((int)stk + 16) + 0x8)) = t116;
        t117 = *(int *)0xC131974;
        *(unsigned int *)((((int)stk + 16) + 0x4)) = t117;
        t118 = *(int *)0xC131970;
        *(unsigned int *)((((int)stk + 16) + 0x0)) = t118;
        t119 = *(int *)0xC17914C;
        *(unsigned int *)((((int)stk + 4) + 0x8)) = t119;
        t120 = *(int *)0xC179148;
        *(unsigned int *)((((int)stk + 4) + 0x4)) = t120;
        t121 = *(int *)0xC179144;
        *(unsigned int *)((((int)stk + 4) + 0x0)) = t121;
        t122 = FUN_0c04d3ee(0x0, 0xC2A991C, 0xC1EE214);
        *(unsigned short *)0xC2A9B94 = (t122 + 0x8000);
        nlPushMatrix(0x0);
        nlTranslateV(0xC131970);
        u125 = *(float *)0xC05D4C8;
        nlTranslate(0.0f, 0.0f, u125);
        t127 = *(short *)0xC2A992C;
        if (((unsigned short)t127 & 0x100) == 0x100) {
            t128 = *(short *)0xC2A9A64;
            t131 = t128;
        } else {
            t129 = *(short *)0xC2A9B94;
            t131 = t129;
        }
        nlRotateAY((unsigned short)t131);
        t133 = *(short *)0xC2A992C;
        if (((unsigned short)t133 & 0x100) == 0x100) {
            return ((int (*)(int))(0xC05D440))(0xC9C6C40);
        }
        return ((int (*)(void))(0xC05D452))();
    }
    return t115;
}

int FUN_0c0655f0(void)
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
    int t10;
    int t11;
    int t12;
    int t13;
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
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t31;
    int t33;
    int t34;
    float u35;
    float u36;
    float u37;
    float u38;
    int t41;
    int t42;
    float u43;
    float u44;
    float u45;
    float u46;
    int t50;
    int t60;
    int t61;
    int t62;
    float t66;
    float u69;
    int t71;
    int t72;
    int t75;
    int t76;
    int t80;
    int t81;
    float u82;
    float u83;
    float u84;
    float u85;
    int t88;
    int t89;
    float u90;
    float u91;
    float u92;
    float u93;
    int t97;
    int t132;
    int t133;
    float u134;
    float u135;
    float u136;
    float u137;
    int t139;
    int t140;
    float u141;
    float u142;
    float u143;
    float u144;
    int t150;
    int t151;
    float u152;
    float u153;
    float u154;
    float u155;
    int t157;
    int t158;
    float u159;
    float u160;
    float u161;
    float u162;
    int t169;
    int t170;
    int t180;
    int t181;
    float u182;
    float u183;
    float u184;
    float u185;
    int t188;
    int t189;
    float u190;
    float u191;
    float u192;
    float u193;
    int t197;
    int t204;
    int t206;
    int t205;
    int stk[56] = {0};

    t0 = *(int *)0xC0D53BC;
    *(unsigned int *)(((((int)stk + 4) + 0x78) + 0x38)) = t0;
    t1 = *(int *)0xC0D53B8;
    *(unsigned int *)(((((int)stk + 4) + 0x78) + 0x34)) = t1;
    t2 = *(int *)0xC0D53B4;
    *(unsigned int *)(((((int)stk + 4) + 0x78) + 0x30)) = t2;
    t3 = *(int *)0xC0D53B0;
    *(unsigned int *)(((((int)stk + 4) + 0x78) + 0x2C)) = t3;
    t4 = *(int *)0xC0D53AC;
    *(unsigned int *)(((((int)stk + 4) + 0x78) + 0x28)) = t4;
    t5 = *(int *)0xC0D53A8;
    *(unsigned int *)(((((int)stk + 4) + 0x78) + 0x24)) = t5;
    t6 = *(int *)0xC0D53A4;
    *(unsigned int *)(((((int)stk + 4) + 0x78) + 0x20)) = t6;
    t7 = *(int *)0xC0D53A0;
    *(unsigned int *)(((((int)stk + 4) + 0x78) + 0x1C)) = t7;
    t8 = *(int *)0xC0D539C;
    *(unsigned int *)(((((int)stk + 4) + 0x78) + 0x18)) = t8;
    t9 = *(int *)0xC0D5398;
    *(unsigned int *)(((((int)stk + 4) + 0x78) + 0x14)) = t9;
    t10 = *(int *)0xC0D5394;
    *(unsigned int *)(((((int)stk + 4) + 0x78) + 0x10)) = t10;
    t11 = *(int *)0xC0D5390;
    *(unsigned int *)(((((int)stk + 4) + 0x78) + 0xC)) = t11;
    t12 = *(int *)0xC0D538C;
    *(unsigned int *)(((((int)stk + 4) + 0x78) + 0x8)) = t12;
    t13 = *(int *)0xC0D5388;
    *(unsigned int *)(((((int)stk + 4) + 0x78) + 0x4)) = t13;
    t14 = *(int *)0xC0D5384;
    *(unsigned int *)(((((int)stk + 4) + 0x78) + 0x0)) = t14;
    t15 = *(int *)0xC0D53F8;
    *(unsigned int *)(((((int)stk + 4) + 0x3C) + 0x38)) = t15;
    t16 = *(int *)0xC0D53F4;
    *(unsigned int *)(((((int)stk + 4) + 0x3C) + 0x34)) = t16;
    t17 = *(int *)0xC0D53F0;
    *(unsigned int *)(((((int)stk + 4) + 0x3C) + 0x30)) = t17;
    t18 = *(int *)0xC0D53EC;
    *(unsigned int *)(((((int)stk + 4) + 0x3C) + 0x2C)) = t18;
    t19 = *(int *)0xC0D53E8;
    *(unsigned int *)(((((int)stk + 4) + 0x3C) + 0x28)) = t19;
    t20 = *(int *)0xC0D53E4;
    *(unsigned int *)(((((int)stk + 4) + 0x3C) + 0x24)) = t20;
    t21 = *(int *)0xC0D53E0;
    *(unsigned int *)(((((int)stk + 4) + 0x3C) + 0x20)) = t21;
    t22 = *(int *)0xC0D53DC;
    *(unsigned int *)(((((int)stk + 4) + 0x3C) + 0x1C)) = t22;
    t23 = *(int *)0xC0D53D8;
    *(unsigned int *)(((((int)stk + 4) + 0x3C) + 0x18)) = t23;
    t24 = *(int *)0xC0D53D4;
    *(unsigned int *)(((((int)stk + 4) + 0x3C) + 0x14)) = t24;
    t25 = *(int *)0xC0D53D0;
    *(unsigned int *)(((((int)stk + 4) + 0x3C) + 0x10)) = t25;
    t26 = *(int *)0xC0D53CC;
    *(unsigned int *)(((((int)stk + 4) + 0x3C) + 0xC)) = t26;
    t27 = *(int *)0xC0D53C8;
    *(unsigned int *)(((((int)stk + 4) + 0x3C) + 0x8)) = t27;
    t28 = *(int *)0xC0D53C4;
    *(unsigned int *)(((((int)stk + 4) + 0x3C) + 0x4)) = t28;
    t29 = *(int *)0xC0D53C0;
    *(unsigned int *)(((((int)stk + 4) + 0x3C) + 0x0)) = t29;
    SetCameraMode(0x1);
    t31 = *(int *)0xC2AD580;
    if (t31 != 0) {
        if (t31 != 1) {
            if (t31 == 2) {
                nlPushMatrix(0xC179180);
                t33 = *(int *)0xC2AD54C;
                t34 = *(signed char *)((t33 + 0x14B));
                u35 = (-1.0f);
                if ((t34 & 4) != 0) {
                    u35 = 1.0f;
                }
                u36 = *(float *)((((((int)stk + 4) + 0x78) + 0x24) + 0x0));
                *(float *)(((int)stk + 16)) = (u35 * u36);
                u37 = *(float *)((((((int)stk + 4) + 0x78) + 0x24) + 0x4));
                *(float *)(((int)stk + 20)) = u37;
                u38 = *(float *)((((((int)stk + 4) + 0x78) + 0x24) + 0x8));
                *(float *)(((int)stk + 24)) = u38;
                nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x30));
                camSetEye((((int)stk + 4) + 0x30), 0x0);
                t41 = *(int *)0xC2AD54C;
                t42 = *(signed char *)((t41 + 0x14B));
                u43 = (-1.0f);
                if ((t42 & 4) != 0) {
                    u43 = 1.0f;
                }
                u44 = *(float *)((((((int)stk + 4) + 0x3C) + 0x24) + 0x0));
                *(float *)(((int)stk + 16)) = (u43 * u44);
                u45 = *(float *)((((((int)stk + 4) + 0x3C) + 0x24) + 0x4));
                *(float *)(((int)stk + 20)) = u45;
                u46 = *(float *)((((((int)stk + 4) + 0x3C) + 0x24) + 0x8));
                *(float *)(((int)stk + 24)) = u46;
                nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x24));
                camSetTarget((((int)stk + 4) + 0x24), 0x0);
                nlPopMatrix(0x1);
                t50 = *(int *)0xC2AD580;
                *(unsigned int *)0xC2AD580 = (t50 + 0x1);
            } else {
                if (t31 == 3) {
                    nlPushMatrix(0xC179180);
                    nlSqrt(((((int)stk + 4) + 0x3C) + 0x18), (((int)stk + 4) + 0x24));
                    nlSubVector3op((((int)stk + 4) + 0x18), (((int)stk + 4) + 0x24), 0xC17984C);
                    nlScaleVector((((int)stk + 4) + 0x18), (((int)stk + 4) + 0x18), 0.00999999978f);
                    FUN_0c078a70((((int)stk + 4) + 0x24), 0xC17984C, (((int)stk + 4) + 0x18));
                    camSetTarget((((int)stk + 4) + 0x24), 0x0);
                    nlPopMatrix(0x1);
                    nlSubVector3op((((int)stk + 4) + 0x18), 0xC179840, 0xC17984C);
                    nlPushUnitMatrix();
                    t60 = *(int *)0xC2AD54C;
                    t61 = *(signed char *)((t60 + 0x14B));
                    t62 = 0xFFFFFE00;
                    if ((t61 & 4) != 0) {
                        t62 = 0x200;
                    }
                    FUN_0c078480(0xC2AD1EC, t62);
                    FUN_0c077210((((int)stk + 4) + 0x18), (((int)stk + 4) + 0x18));
                    nlPopMatrix(0x1);
                    t66 = nlUnitVector((((int)stk + 4) + 0x18));
                    nlScaleVector((((int)stk + 4) + 0x18), (((int)stk + 4) + 0x18), (t66 + -0.049999997f));
                    FUN_0c078a70((((int)stk + 4) + 0x30), 0xC17984C, (((int)stk + 4) + 0x18));
                    u69 = *(float *)(((int)stk + 56));
                    *(float *)(((int)stk + 56)) = (u69 - 0.199999988f);
                    camSetEye((((int)stk + 4) + 0x30), 0x0);
                    t71 = *(int *)0xC2AD578;
                    if ((int)t71 >= (int)0x78) {
                        t72 = *(int *)0xC2AD580;
                        *(unsigned int *)0xC2AD580 = (t72 + 0x1);
                    }
                } else {
                    if (t31 == 4) {
                        t75 = *(int *)0xC2AD578;
                        if ((int)t75 >= (int)0x7B) {
                            t76 = *(int *)0xC2AD580;
                            *(unsigned int *)0xC2AD580 = (t76 + 0x1);
                        }
                    } else {
                        if (t31 == 5) {
                            nlPushMatrix(0xC179180);
                            t80 = *(int *)0xC2AD54C;
                            t81 = *(signed char *)((t80 + 0x14B));
                            u82 = (-1.0f);
                            if ((t81 & 4) != 0) {
                                u82 = 1.0f;
                            }
                            u83 = *(float *)((((((int)stk + 4) + 0x78) + 0x30) + 0x0));
                            *(float *)(((int)stk + 16)) = (u82 * u83);
                            u84 = *(float *)((((((int)stk + 4) + 0x78) + 0x30) + 0x4));
                            *(float *)(((int)stk + 20)) = u84;
                            u85 = *(float *)((((((int)stk + 4) + 0x78) + 0x30) + 0x8));
                            *(float *)(((int)stk + 24)) = u85;
                            nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x30));
                            camSetEye((((int)stk + 4) + 0x30), 0x0);
                            t88 = *(int *)0xC2AD54C;
                            t89 = *(signed char *)((t88 + 0x14B));
                            u90 = (-1.0f);
                            if ((t89 & 4) != 0) {
                                u90 = 1.0f;
                            }
                            u91 = *(float *)((((((int)stk + 4) + 0x3C) + 0x30) + 0x0));
                            *(float *)(((int)stk + 16)) = (u90 * u91);
                            u92 = *(float *)((((((int)stk + 4) + 0x3C) + 0x30) + 0x4));
                            *(float *)(((int)stk + 20)) = u92;
                            u93 = *(float *)((((((int)stk + 4) + 0x3C) + 0x30) + 0x8));
                            *(float *)(((int)stk + 24)) = u93;
                            nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x24));
                            camSetTarget((((int)stk + 4) + 0x24), 0x0);
                            nlPopMatrix(0x1);
                            t97 = *(int *)0xC2AD580;
                            *(unsigned int *)0xC2AD580 = (t97 + 0x1);
                        } else {
                            if (t31 == 6) {
                                nlSubVector3op((((int)stk + 4) + 0x18), 0xC2AD554, 0xC179840);
                                nlGetAverageVector(0xC179840, (((int)stk + 4) + 0x18), (((int)stk + 4) + 0x30), 1.0f, 0.0799999982f);
                                camSetEye((((int)stk + 4) + 0x30), 0x0);
                                nlSubVector3op((((int)stk + 4) + 0x18), 0xC2AD560, 0xC17984C);
                                nlGetAverageVector(0xC17984C, (((int)stk + 4) + 0x18), (((int)stk + 4) + 0x24), 1.0f, 0.0799999982f);
                                camSetTarget((((int)stk + 4) + 0x24), 0x0);
                            }
                        }
                    }
                }
            }
        } else {
            nlPushMatrix(0xC179180);
            t132 = *(int *)0xC2AD54C;
            t133 = *(signed char *)((t132 + 0x14B));
            u134 = (-1.0f);
            if ((t133 & 4) != 0) {
                u134 = 1.0f;
            }
            u135 = *(float *)(((((int)stk + 4) + 0x78) + 0x0));
            *(float *)(((int)stk + 52)) = (u134 * u135);
            u136 = *(float *)(((((int)stk + 4) + 0x78) + 0x4));
            *(float *)(((int)stk + 56)) = u136;
            u137 = *(float *)(((((int)stk + 4) + 0x78) + 0x8));
            *(float *)(((int)stk + 60)) = u137;
            nlSqrt((((int)stk + 4) + 0x30), (((int)stk + 4) + 0xC));
            t139 = *(int *)0xC2AD54C;
            t140 = *(signed char *)((t139 + 0x14B));
            u141 = (-1.0f);
            if ((t140 & 4) != 0) {
                u141 = 1.0f;
            }
            u142 = *(float *)((((((int)stk + 4) + 0x78) + 0xC) + 0x0));
            *(float *)(((int)stk + 52)) = (u141 * u142);
            u143 = *(float *)((((((int)stk + 4) + 0x78) + 0xC) + 0x4));
            *(float *)(((int)stk + 56)) = u143;
            u144 = *(float *)((((((int)stk + 4) + 0x78) + 0xC) + 0x8));
            *(float *)(((int)stk + 60)) = u144;
            nlSqrt((((int)stk + 4) + 0x30), ((int)stk + 4));
            nlSubVector(((int)stk + 4), (((int)stk + 4) + 0xC));
            nlScaleVector((((int)stk + 4) + 0x18), ((int)stk + 4), 0.0166666657f);
            FUN_0c078a70((((int)stk + 4) + 0x30), 0xC179840, (((int)stk + 4) + 0x18));
            camSetEye((((int)stk + 4) + 0x30), 0x0);
            t150 = *(int *)0xC2AD54C;
            t151 = *(signed char *)((t150 + 0x14B));
            u152 = (-1.0f);
            if ((t151 & 4) != 0) {
                u152 = 1.0f;
            }
            u153 = *(float *)(((((int)stk + 4) + 0x3C) + 0x0));
            *(float *)(((int)stk + 40)) = (u152 * u153);
            u154 = *(float *)(((((int)stk + 4) + 0x3C) + 0x4));
            *(float *)(((int)stk + 44)) = u154;
            u155 = *(float *)(((((int)stk + 4) + 0x3C) + 0x8));
            *(float *)(((int)stk + 48)) = u155;
            nlSqrt((((int)stk + 4) + 0x24), (((int)stk + 4) + 0xC));
            t157 = *(int *)0xC2AD54C;
            t158 = *(signed char *)((t157 + 0x14B));
            u159 = (-1.0f);
            if ((t158 & 4) != 0) {
                u159 = 1.0f;
            }
            u160 = *(float *)((((((int)stk + 4) + 0x3C) + 0xC) + 0x0));
            *(float *)(((int)stk + 40)) = (u159 * u160);
            u161 = *(float *)((((((int)stk + 4) + 0x3C) + 0xC) + 0x4));
            *(float *)(((int)stk + 44)) = u161;
            u162 = *(float *)((((((int)stk + 4) + 0x3C) + 0xC) + 0x8));
            *(float *)(((int)stk + 48)) = u162;
            nlSqrt((((int)stk + 4) + 0x24), ((int)stk + 4));
            nlSubVector(((int)stk + 4), (((int)stk + 4) + 0xC));
            nlScaleVector((((int)stk + 4) + 0x18), ((int)stk + 4), 0.0166666657f);
            FUN_0c078a70((((int)stk + 4) + 0x24), 0xC17984C, (((int)stk + 4) + 0x18));
            camSetTarget((((int)stk + 4) + 0x24), 0x0);
            nlPopMatrix(0x1);
            t169 = *(int *)0xC2AD578;
            if ((int)t169 >= (int)0x3C) {
                t170 = *(int *)0xC2AD580;
                *(unsigned int *)0xC2AD580 = (t170 + 0x1);
            }
        }
    } else {
        nlPushMatrix(0xC179180);
        t180 = *(int *)0xC2AD54C;
        t181 = *(signed char *)((t180 + 0x14B));
        u182 = (-1.0f);
        if ((t181 & 4) != 0) {
            u182 = 1.0f;
        }
        u183 = *(float *)(((((int)stk + 4) + 0x78) + 0x0));
        *(float *)(((int)stk + 16)) = (u182 * u183);
        u184 = *(float *)(((((int)stk + 4) + 0x78) + 0x4));
        *(float *)(((int)stk + 20)) = u184;
        u185 = *(float *)(((((int)stk + 4) + 0x78) + 0x8));
        *(float *)(((int)stk + 24)) = u185;
        nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x30));
        camSetEye((((int)stk + 4) + 0x30), 0x0);
        t188 = *(int *)0xC2AD54C;
        t189 = *(signed char *)((t188 + 0x14B));
        u190 = (-1.0f);
        if ((t189 & 4) != 0) {
            u190 = 1.0f;
        }
        u191 = *(float *)(((((int)stk + 4) + 0x3C) + 0x0));
        *(float *)(((int)stk + 16)) = (u190 * u191);
        u192 = *(float *)(((((int)stk + 4) + 0x3C) + 0x4));
        *(float *)(((int)stk + 20)) = u192;
        u193 = *(float *)(((((int)stk + 4) + 0x3C) + 0x8));
        *(float *)(((int)stk + 24)) = u193;
        nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x24));
        camSetTarget((((int)stk + 4) + 0x24), 0x0);
        nlPopMatrix(0x1);
        t197 = *(int *)0xC2AD580;
        *(unsigned int *)0xC2AD580 = (t197 + 0x1);
    }
    t204 = *(int *)0xC2AD590;
    t206 = t204;
    if ((t204 & 2) == 0) {
        t205 = camRestore();
        t206 = t205;
    }
    return t206;
}
