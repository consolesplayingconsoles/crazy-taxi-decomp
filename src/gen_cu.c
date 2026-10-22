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

