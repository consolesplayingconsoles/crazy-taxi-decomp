/* Straight-line functions with calls and guards (batch gen_da): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c07d040(int, int);
int FUN_0c07d450(int, int, int);
int FUN_0c07d4f0(int, int, int, int);
int FUN_0c07d510(int, int, int, int, int);
int FUN_0c0813d0(int);
int GetStopPosCenter(int, int, int);
int PutStringFixPfont(int, int, float, float, float, float);
extern int getNearLineIndex();
int kmLoadTexture(int, int, int, int);
int menuCursor(int, int, int);
int menuEnterStep(void);
int menuOpenStep(void);
int menuPutFrame(void);
int menuPutHelpBar(int, float, float);
int menuPutSprites(int, int, int, int);
float navi_GetRouteTbl(int, int, int);
int nlFastSinCos(int, int, int);
float nlLength(int, int);
int nlMultiMatrix8(int);
int putLevelCTFontAssist(int, int, int, int, int);
int FUN_0c1676e4(int a4, int a5);
int BigOneRotate(int a4, int a5, int a6);
int menuRecordsHandler(void);
int texLoadIndexed(int a4, int a5);
int FUN_0c07cd30(int a4, int a5, int a6, int a7);
float kyakuInitStops(float f4);

int FUN_0c1676e4(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x6);
}

int BigOneRotate(int a4, int a5, int a6)
{
    int t1;
    int t3;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;
    float u15;
    float u16;
    float u17;
    float u18;
    float u19;
    float u20;
    float u21;
    float u22;
    float u23;
    float u24;
    float u25;
    float u26;
    float u27;
    float u28;
    float u29;
    float u30;
    float u31;
    float u32;
    float u33;
    int t34;
    int stk[11] = {0};

    *(unsigned int *)(((int)stk + 28)) = a5;
    *(unsigned int *)(((int)stk + 32)) = a6;
    nlFastSinCos(a4, (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x10));
    t1 = *(int *)(((int)stk + 28));
    nlFastSinCos(t1, (((int)stk + 4) + 0x8), (((int)stk + 4) + 0x14));
    t3 = *(int *)(((int)stk + 32));
    nlFastSinCos(t3, ((int)stk + 4), (((int)stk + 4) + 0x4));
    u5 = *(float *)(((int)stk + 8));
    u6 = *(float *)(((int)stk + 24));
    *(float *)0xC141820 = (u6 * u5);
    u7 = *(float *)(((int)stk + 4));
    u8 = *(float *)(((int)stk + 24));
    *(float *)0xC141824 = (u7 * u8);
    u9 = *(float *)(((int)stk + 12));
    *(float *)0xC141828 = (-u9);
    u10 = *(float *)(((int)stk + 12));
    u11 = *(float *)(((int)stk + 16));
    u12 = *(float *)(((int)stk + 8));
    u13 = *(float *)(((int)stk + 20));
    u14 = *(float *)(((int)stk + 4));
    *(float *)0xC141830 = (((u11 * u10) * u12) - (u14 * u13));
    u15 = *(float *)(((int)stk + 12));
    u16 = *(float *)(((int)stk + 16));
    u17 = *(float *)(((int)stk + 8));
    u18 = *(float *)(((int)stk + 20));
    u19 = *(float *)(((int)stk + 4));
    *(float *)0xC141834 = ((u18 * u17) + u19 * (u16 * u15));
    u20 = *(float *)(((int)stk + 24));
    u21 = *(float *)(((int)stk + 16));
    *(float *)0xC141838 = (u21 * u20);
    u22 = *(float *)(((int)stk + 20));
    u23 = *(float *)(((int)stk + 12));
    u24 = *(float *)(((int)stk + 16));
    u25 = *(float *)(((int)stk + 4));
    u26 = *(float *)(((int)stk + 8));
    *(float *)0xC141840 = ((u24 * u25) + u26 * (u23 * u22));
    u27 = *(float *)(((int)stk + 12));
    u28 = *(float *)(((int)stk + 20));
    u29 = *(float *)(((int)stk + 4));
    u30 = *(float *)(((int)stk + 8));
    u31 = *(float *)(((int)stk + 16));
    *(float *)0xC141844 = (((u27 * u29) * u28) - (u31 * u30));
    u32 = *(float *)(((int)stk + 24));
    u33 = *(float *)(((int)stk + 20));
    *(float *)0xC141848 = (u33 * u32);
    t34 = nlMultiMatrix8(0xC141820);
    return t34;
}

int menuRecordsHandler(void)
{
    int t1;
    int t5;
    int t2;
    int t3;
    int t4;
    int t10;
    int t12;
    int t14;
    int t15;
    int t17;
    int t18;
    float u22;
    float u23;
    int t21;

    menuOpenStep();
    t1 = *(signed char *)0xC28A4F6;
    t5 = 0x0;
    if ((int)((unsigned char)t1 + 0x1) < (int)0x5) {
        t2 = ((unsigned char)t1 + 0x1);
        t3 = 0x0;
        for (;;) {
            t4 = (((int)t2 >= 0) ? (0x1 << (t2 & 31)) : ((-(int)t2 & 31) ? ((int)0x1 >> (-(int)t2 & 31)) : ((int)0x1 >> 31)));
            t2 = (t2 + 0x1);
            t3 = (t3 | t4);
            if ((int)t2 >= (int)0x5) {
                break;
            }
        }
        t5 = t3;
    }
    menuCursor(0x0, 0x6, t5);
    menuPutFrame();
    t10 = *(int *)0xC2A1AD8;
    menuPutSprites(0xC0A0898, 0xC2A1A84, (t10 + 0x8), 0x18);
    t12 = *(int *)0xC2A1AD8;
    menuPutHelpBar(0x0, (float)(-t12), 416.0f);
    t14 = *(int *)0xC2A11D8;
    t15 = *(int *)((((t14 << 2) + 0xC2A11DC) + 0x0));
    putLevelCTFontAssist(0x117, 0xC09F28C, 0x6, t15, t5);
    t17 = 0x1;
    for (;;) {
        t18 = *(int *)0xC2A1ADC;
        if ((t17 & 0x1) != 0) {
            t21 = (t18 - 64);
        } else {
            t21 = (0xFFFFFFC0 - t18);
        }
        u22 = *(float *)((((short)((short)t17 * (short)0x2C) + 0xC09F28C) + 0x0));
        u23 = *(float *)((((short)((short)t17 * (short)0x2C) + 0xC09F28C) + 0x4));
        PutStringFixPfont(0x17, ((short)((short)(t17 - 1) * (short)0x788) + 0xC28A4F8), (u22 + (float)t21), u23, 20.0f, 1.0f);
        t17 = (t17 + 0x1);
        if ((int)t17 >= (int)0x5) {
            break;
        }
    }
    return menuEnterStep();
}

int texLoadIndexed(int a4, int a5)
{
    int t3;
    int t0;
    int t4;
    int t5;
    int t17;
    int t6;
    int t7;
    int t8;
    int t11;
    int t9;
    int t10;

    t3 = a4;
    if ((int)a4 >= 0) {
        t0 = *(int *)0xC2B3184;
        t3 = (a4 + t0);
    }
    t4 = *(int *)0xC2AEC84;
    t5 = *(int *)(((((t3 << 2) << 1) + t4) + 0x0));
    t17 = 0x0;
    if (t5 != 0) {
        t6 = *(int *)(((((t3 << 2) << 1) + t4) + 0x4));
        t7 = *(int *)0xC2B29C0;
        t8 = *(int *)((((t6 * 0x3C) + t7) + 0x28));
        t11 = 0x0;
        if (t8 == 0) {
            t9 = kmLoadTexture(((t6 * 0x3C) + t7), a5, 0x0, 0x0);
            t10 = 0x1;
            if (t9 != 0) {
                t10 = 0x0;
            }
            t11 = t10;
        }
        t17 = t11;
    }
    return t17;
}

int FUN_0c07cd30(int a4, int a5, int a6, int a7)
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
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t39;
    int t40;
    int t62;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t61;
    int t70;
    int t71;
    int t72;
    int t73;
    int t74;
    int t75;
    int t76;
    int t77;
    int t78;
    int t85;
    int t86;
    int t95;
    int t96;
    int t97;
    int t98;
    int t99;
    int t100;
    int t101;
    int t102;
    int t103;
    int t104;
    int t105;
    int t113;
    int t114;
    int t87;
    int t54;
    int t57;
    int t58;
    int t59;
    int t60;
    int t79;
    int t82;
    int t83;
    int t84;
    int t106;
    int t109;
    int t110;
    int t111;
    int t112;
    int stk[12] = {0};

    *(unsigned int *)(((int)stk + 12)) = (a6 + 0x4);
    t0 = *(int *)0xC2B7660;
    *(unsigned int *)(((int)stk + 8)) = (a6 + 0x2);
    t1 = *(int *)0xC2B7668;
    if (a4 == 0) {
        if (a5 != 7) {
            return FUN_0c07d040(t0, a6);
        }
        t2 = *(int *)(((int)stk + 8));
        t3 = *(int *)(((int)stk + 12));
        t4 = *(short *)((a6 + 0x0));
        t5 = *(short *)((t3 + 0x0));
        t6 = *(short *)((t2 + 0x0));
        return FUN_0c07d450((((t4 << 2) << 2) + t0), (((t6 << 2) << 2) + t0), (((t5 << 2) << 2) + t0));
    }
    if (a4 == 7) {
        if (a5 == 7) {
            return a5;
        }
        if (a5 == 0) {
            t7 = *(int *)(((int)stk + 8));
            t8 = *(int *)(((int)stk + 12));
            t9 = *(short *)((a6 + 0x0));
            t10 = *(short *)((t8 + 0x0));
            t11 = *(short *)((t7 + 0x0));
            return FUN_0c07d450((((t9 << 2) << 2) + t0), (((t11 << 2) << 2) + t0), (((t10 << 2) << 2) + t0));
        }
        return FUN_0c07d040(t0, a6);
    }
    t12 = *(int *)0xC2B7664;
    if (a5 != 0) {
        if (a5 == 7) {
            return FUN_0c07d040(t0, a6);
        }
        if (a4 == a5) {
            if (a4 != 1) {
                if (a4 != 2) {
                    if (a4 != 3) {
                        if (a4 != 4) {
                            if (a4 != 5) {
                                if (a4 != 6) {
                                    return a4;
                                }
                                t13 = *(short *)(((a7 + 0x4) + 0x0));
                                *(unsigned int *)(((int)stk + 12)) = ((t13 << 2) << 2);
                                t14 = *(short *)(((a7 + 0x2) + 0x0));
                                *(unsigned int *)(((int)stk + 8)) = ((t14 << 2) << 2);
                                t15 = *(int *)(((int)stk + 8));
                                t16 = *(int *)(((int)stk + 12));
                                return FUN_0c07d4f0((t16 + t12), (t15 + t12), (((t14 << 2) << 2) + t1), (((t13 << 2) << 2) + t1));
                            }
                            t17 = *(short *)(((a7 + 0x2) + 0x0));
                            *(unsigned int *)(((int)stk + 12)) = ((t17 << 2) << 2);
                            t18 = *(short *)((a7 + 0x0));
                            *(unsigned int *)(((int)stk + 8)) = ((t18 << 2) << 2);
                            t19 = *(int *)(((int)stk + 8));
                            t20 = *(int *)(((int)stk + 12));
                            return FUN_0c07d4f0((t20 + t12), (t19 + t12), (((t18 << 2) << 2) + t1), (((t17 << 2) << 2) + t1));
                        }
                        t21 = *(short *)((a7 + 0x0));
                        *(unsigned int *)(((int)stk + 12)) = ((t21 << 2) << 2);
                        t22 = *(short *)(((a7 + 0x4) + 0x0));
                        *(unsigned int *)(((int)stk + 8)) = ((t22 << 2) << 2);
                        t23 = *(int *)(((int)stk + 8));
                        t24 = *(int *)(((int)stk + 12));
                        return FUN_0c07d4f0((t24 + t12), (t23 + t12), (((t22 << 2) << 2) + t1), (((t21 << 2) << 2) + t1));
                    }
                    t25 = *(short *)((a7 + 0x0));
                    *(unsigned int *)(((int)stk + 12)) = ((t25 << 2) << 2);
                    t26 = *(short *)(((a7 + 0x4) + 0x0));
                    *(unsigned int *)(((int)stk + 8)) = ((t26 << 2) << 2);
                    t27 = *(int *)(((int)stk + 8));
                    t28 = *(int *)(((int)stk + 12));
                    return FUN_0c07d4f0((t28 + t12), (t27 + t12), (((t26 << 2) << 2) + t1), (((t25 << 2) << 2) + t1));
                }
                t29 = *(short *)(((a7 + 0x2) + 0x0));
                *(unsigned int *)(((int)stk + 12)) = ((t29 << 2) << 2);
                t30 = *(short *)((a7 + 0x0));
                *(unsigned int *)(((int)stk + 8)) = ((t30 << 2) << 2);
                t31 = *(int *)(((int)stk + 8));
                t32 = *(int *)(((int)stk + 12));
                return FUN_0c07d4f0((t32 + t12), (t31 + t12), (((t30 << 2) << 2) + t1), (((t29 << 2) << 2) + t1));
            }
            t33 = *(short *)(((a7 + 0x4) + 0x0));
            *(unsigned int *)(((int)stk + 12)) = ((t33 << 2) << 2);
            t34 = *(short *)(((a7 + 0x2) + 0x0));
            *(unsigned int *)(((int)stk + 8)) = ((t34 << 2) << 2);
            t35 = *(int *)(((int)stk + 8));
            t36 = *(int *)(((int)stk + 12));
            return FUN_0c07d4f0((t36 + t12), (t35 + t12), (((t34 << 2) << 2) + t1), (((t33 << 2) << 2) + t1));
        }
        t39 = a4;
        t40 = a5;
        if ((0x4 & a4) != 0) {
            t39 = ((~a4) & 0x7);
            t40 = ((~a5) & 0x7);
        }
        if (t39 != 1) {
            if (t39 != 2) {
                t62 = t39;
                if (t39 == 3) {
                    if (t40 == 2) {
                        t42 = *(short *)((a7 + 0x0));
                        *(unsigned int *)(((int)stk + 8)) = ((t42 << 2) << 2);
                        t43 = *(int *)(((int)stk + 12));
                        t44 = *(short *)(((a7 + 0x4) + 0x0));
                        t45 = *(short *)((t43 + 0x0));
                        t46 = *(short *)(((a7 + 0x2) + 0x0));
                        t47 = *(int *)(((int)stk + 8));
                        t54 = (((t42 << 2) << 2) + t1);
                        t57 = t47;
                        t58 = (((t44 << 2) << 2) + t12);
                        t59 = (((t45 << 2) << 2) + t0);
                        t60 = (((t46 << 2) << 2) + t1);
                    } else {
                        t48 = *(short *)(((a7 + 0x4) + 0x0));
                        *(unsigned int *)(((int)stk + 12)) = ((t48 << 2) << 2);
                        t49 = *(int *)(((int)stk + 8));
                        t50 = *(short *)((a7 + 0x0));
                        t51 = *(short *)((t49 + 0x0));
                        t52 = *(short *)(((a7 + 0x2) + 0x0));
                        t53 = *(int *)(((int)stk + 12));
                        t54 = (((t48 << 2) << 2) + t1);
                        t57 = t53;
                        t58 = (((t50 << 2) << 2) + t12);
                        t59 = (((t51 << 2) << 2) + t0);
                        t60 = (((t52 << 2) << 2) + t1);
                    }
                    t61 = FUN_0c07d510((t57 + t12), t58, t59, t60, t54);
                    t62 = t61;
                }
                t87 = t62;
            } else {
                if (t40 == 3) {
                    t70 = *(short *)((a7 + 0x0));
                    *(unsigned int *)(((int)stk + 8)) = ((t70 << 2) << 2);
                    t71 = *(int *)(((int)stk + 12));
                    t72 = *(short *)(((a7 + 0x4) + 0x0));
                    t73 = *(short *)((t71 + 0x0));
                    t74 = *(short *)(((a7 + 0x2) + 0x0));
                    t79 = (((t70 << 2) << 2) + t1);
                    t82 = t74;
                    t83 = (((t73 << 2) << 2) + t0);
                    t84 = (((t72 << 2) << 2) + t1);
                } else {
                    t75 = *(short *)(((a7 + 0x2) + 0x0));
                    *(unsigned int *)(((int)stk + 8)) = ((t75 << 2) << 2);
                    t76 = *(short *)(((a7 + 0x4) + 0x0));
                    t77 = *(short *)((a6 + 0x0));
                    t78 = *(short *)((a7 + 0x0));
                    t79 = (((t75 << 2) << 2) + t1);
                    t82 = t78;
                    t83 = (((t77 << 2) << 2) + t0);
                    t84 = (((t76 << 2) << 2) + t1);
                }
                t85 = *(int *)(((int)stk + 8));
                t86 = FUN_0c07d510((t85 + t12), (((t82 << 2) << 2) + t12), t83, t84, t79);
                t87 = t86;
            }
            t114 = t87;
        } else {
            if (t40 == 3) {
                t95 = *(short *)(((a7 + 0x4) + 0x0));
                *(unsigned int *)(((int)stk + 12)) = ((t95 << 2) << 2);
                t96 = *(int *)(((int)stk + 8));
                t97 = *(short *)(((a7 + 0x2) + 0x0));
                t98 = *(short *)((t96 + 0x0));
                t99 = *(short *)((a7 + 0x0));
                t100 = *(int *)(((int)stk + 12));
                t106 = (((t95 << 2) << 2) + t1);
                t109 = t100;
                t110 = (((t97 << 2) << 2) + t12);
                t111 = (((t98 << 2) << 2) + t0);
                t112 = (((t99 << 2) << 2) + t1);
            } else {
                t101 = *(short *)(((a7 + 0x2) + 0x0));
                *(unsigned int *)(((int)stk + 8)) = ((t101 << 2) << 2);
                t102 = *(short *)((a7 + 0x0));
                t103 = *(short *)((a6 + 0x0));
                t104 = *(short *)(((a7 + 0x4) + 0x0));
                t105 = *(int *)(((int)stk + 8));
                t106 = (((t101 << 2) << 2) + t1);
                t109 = t105;
                t110 = (((t104 << 2) << 2) + t12);
                t111 = (((t103 << 2) << 2) + t0);
                t112 = (((t102 << 2) << 2) + t1);
            }
            t113 = FUN_0c07d510((t109 + t12), t110, t111, t112, t106);
            t114 = t113;
        }
        return t114;
    }
    return FUN_0c07d040(t0, a6);
}

float kyakuInitStops(float f4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t19;
    int t20;
    int t21;
    int t34;
    int t35;
    int t37;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    float u61;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
    int t68;
    int t69;
    int t70;
    int t71;
    int t72;
    int t73;
    int t74;
    int t75;
    float t76;
    int t78;
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
    int t95;
    int t96;
    int t98;
    int t99;
    int t102;
    int t103;
    int t104;
    int t105;
    int t108;
    int t109;
    int t110;
    float t111;
    int t112;
    int t113;
    int t114;
    float t115;
    int t116;
    int t120;
    int t121;
    int t130;
    int t49;
    int t50;
    int t39;
    int t40;
    int t30;
    int t31;
    int t26;
    int t27;
    int t22;
    int t23;
    int t46;
    int t47;
    int t43;
    int t44;
    float u60;
    float u62;
    int t126;
    int t127;
    float u128;
    float u129;
    int t79;
    int t81;
    float u82;
    float u83;
    int t117;
    int t118;
    float u119;
    int t101;
    int t100;
    int stk[20] = {0};

    t0 = 0xFFFFFFFF;
    t1 = 0xC1794F0;
    for (;;) {
        t2 = *(int *)0xC1EE210;
        t3 = *(int *)0xC1EE214;
        t4 = *(int *)((0xC0ED9D4 + (t2 << 2)));
        t5 = *(int *)(((t3 << 2) + t4));
        if ((int)t0 >= (int)t5) {
            break;
        }
        *(unsigned int *)((t1 + 0x0)) = t0;
        if (t0 != -1) {
            t6 = *(int *)((t1 + 0x0));
            GetStopPosCenter(t6, (t1 + 0x4), (t1 + 0x14));
            t8 = *(int *)0xC2A1B2C;
            t9 = *(int *)0xC2A1B28;
            t10 = ((int (*)(int, int, int, int, int))(getNearLineIndex))(0x0, t9, t8, (t1 + 0x10), (t1 + 0x4));
        } else {
            t11 = *(int *)0xC08AD9C;
            *(unsigned int *)(((t1 + 0x4) + 0x8)) = t11;
            t12 = *(int *)0xC08AD98;
            *(unsigned int *)(((t1 + 0x4) + 0x4)) = t12;
            t13 = *(int *)0xC08AD94;
            *(unsigned int *)(((t1 + 0x4) + 0x0)) = t13;
            *(float *)((t1 + 0x14)) = 0.0f;
            *(unsigned int *)((t1 + 0x10)) = 0x0;
        }
        t0 = (t0 + 0x1);
        t1 = (t1 + 0x18);
    }
    t19 = *(int *)0xC1EE20C;
    t20 = *(int *)0xC1EE214;
    t21 = *(int *)0xC17948C;
    if (t19 != 0) {
        if (t19 != 1) {
            t34 = t1;
            t35 = 0xC1EE20C;
            if (t19 == 2) {
                if ((unsigned int)(t20 - 3) < (unsigned int)0xC) {
                    switch (((t20 - 3) << 1)) {
                        case 0:
                        {
                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                            t26 = 0xC0E4978;
                            t27 = 0x1;
                        }
                            break;
                        case 2:
                        {
                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                            t26 = 0xC0E42E8;
                            t27 = 0x1;
                        }
                            break;
                        case 4:
                        {
                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                            t26 = 0xC0E4310;
                            t27 = 0x1;
                        }
                            break;
                        case 6:
                        {
                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                            t26 = 0xC0E4338;
                            t27 = 0x1;
                        }
                            break;
                        case 8:
                        case 16:
                        {
                            if (t20 == 11) {
                                *(unsigned int *)(((int)stk + 20)) = 0x7;
                                t22 = 0xC0E46D0;
                                t23 = 0xC1EE20C;
                            } else {
                                *(unsigned int *)(((int)stk + 20)) = 0x1;
                                t22 = 0xC0E4360;
                                t23 = 0x1;
                            }
                            t26 = t22;
                            t27 = t23;
                        }
                            break;
                        case 10:
                        {
                            *(unsigned int *)(((int)stk + 20)) = 0xA;
                            t26 = 0xC0E4388;
                            t27 = 0xC1EE20C;
                        }
                            break;
                        case 12:
                        {
                            *(unsigned int *)(((int)stk + 20)) = 0x3;
                            t26 = 0xC0E4518;
                            t27 = 0xC1EE20C;
                        }
                            break;
                        case 14:
                        {
                            *(unsigned int *)(((int)stk + 20)) = 0x8;
                            t26 = 0xC0E4590;
                            t27 = 0xC1EE20C;
                        }
                            break;
                        case 18:
                        {
                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                            t26 = 0xC0E47E8;
                            t27 = 0x1;
                        }
                            break;
                        case 20:
                        {
                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                            t26 = 0xC0E4810;
                            t27 = 0x1;
                        }
                            break;
                        default:
                        {
                            *(unsigned int *)(((int)stk + 20)) = 0x7;
                            t26 = 0xC0E4838;
                            t27 = 0xC1EE20C;
                        }
                            break;
                    }
                    t30 = t26;
                    t31 = t27;
                } else {
                    *(unsigned int *)(((int)stk + 20)) = 0xF6;
                    t30 = 0xC0DD678;
                    t31 = 0xF6;
                }
                t34 = t30;
                t35 = t31;
            }
            t39 = t34;
            t40 = t35;
        } else {
            t37 = 0xC0DF608;
            if (t21 == 1) {
                t37 = 0xC0E1C78;
            }
            *(unsigned int *)(((int)stk + 20)) = 0xF6;
            t39 = t37;
            t40 = 0xF6;
        }
        t49 = t39;
        t50 = t40;
    } else {
        if (t20 == 15) {
            *(unsigned int *)(((int)stk + 20)) = 0x1;
            t46 = 0xC0E4950;
            t47 = 0x1;
        } else {
            if (t21 == 1) {
                *(unsigned int *)(((int)stk + 20)) = 0xCA;
                t43 = 0xC0DD678;
                t44 = 0xC1EE20C;
            } else {
                *(unsigned int *)(((int)stk + 20)) = 0xF6;
                t43 = 0xC0DB008;
                t44 = 0xF6;
            }
            t46 = t43;
            t47 = t44;
        }
        t49 = t46;
        t50 = t47;
    }
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    t52 = 0xC02589C;
    t53 = t50;
    t54 = t20;
    t55 = t21;
    t56 = 0xC0DD678;
    t57 = 0xC1EE214;
    t58 = t0;
    t59 = t49;
    u61 = f4;
    for (;;) {
        t63 = *(int *)(((int)stk + 16));
        t64 = *(int *)(((int)stk + 20));
        if ((int)t63 < (int)t64) {
            t65 = *(int *)((t59 + 0x4));
            t52 = t65;
            if (t52 == -1) {
                *(unsigned int *)((t59 + 0x0)) = 0xFFFFFFFF;
                t126 = t55;
                t127 = t56;
                u128 = u60;
                u129 = u61;
            } else {
                t53 = 0xC1EE20C;
                *(unsigned int *)((t59 + 0x0)) = 0x0;
                t66 = *(int *)((t53 + 0x0));
                t52 = t66;
                if (t52 == 1) {
                    t67 = *(int *)0xC2A1B2C;
                    t56 = t67;
                    t68 = *(int *)0xC2A1B28;
                    t55 = t68;
                    t54 = 0x0;
                    t69 = ((int (*)(int, int, int, int, int, float))(getNearLineIndex))(t54, t55, t56, (t59 + 0x14), (t59 + 0x8), u61);
                    t52 = t69;
                    t54 = t59;
                    t54 = (t54 + 0x1C);
                    t57 = t54;
                    t58 = 0x0;
                    *(unsigned int *)(((int)stk + 12)) = t54;
                    *(unsigned int *)(((int)stk + 8)) = (t59 + 0x18);
                    t70 = (t59 + 0x18);
                    for (;;) {
                        if ((int)t58 >= (int)0x3) {
                            break;
                        }
                        t52 = t59;
                        t52 = (t52 + 0x18);
                        t71 = *(signed char *)((t58 + t52));
                        t52 = t71;
                        if (t52 != -1) {
                            t52 = t59;
                            t52 = (t52 + 0x18);
                            t72 = *(signed char *)((t58 + t52));
                            t52 = t72;
                            if (t52 == 26) {
                                t55 = t59;
                                t55 = (t55 + 0x18);
                                t55 = (t55 + t58);
                                t73 = *(signed char *)((t55 + 0x0));
                                t55 = t73;
                                t70 = t55;
                                t55 = (t55 << 1);
                                t55 = (t55 + t70);
                                t56 = 0x1;
                            } else {
                                t74 = *(int *)(((int)stk + 8));
                                t55 = t74;
                                t56 = 0xFFFFFFFF;
                                t75 = *(signed char *)((t55 + 0x0));
                                t55 = t75;
                                t70 = t55;
                                t55 = (t55 << 1);
                                t55 = (t55 + t70);
                            }
                            t55 = (t55 << 2);
                            t53 = 0xC02B8C4;
                            t55 = (t55 << 1);
                            t54 = t59;
                            t55 = (short)t55;
                            t55 = (t55 + 0xC1794F0);
                            t55 = (t55 + 0x1C);
                            t54 = (t54 + 0x8);
                            t76 = navi_GetRouteTbl(t54, t55, t56);
                            t52 = t76;
                            u60 = t76;
                            u61 = t76;
                            *(float *)((t57 + 0x0)) = u61;
                            u82 = u60;
                            u83 = u61;
                        } else {
                            t78 = *(int *)(((int)stk + 12));
                            t53 = t78;
                            *(float *)((t53 + 0x0)) = 0.0f;
                            t79 = t53;
                            t81 = t54;
                        }
                        t84 = *(int *)(((int)stk + 12));
                        u60 = u82;
                        u61 = u83;
                        t53 = t79;
                        t70 = t84;
                        t54 = t81;
                        t58 = (t58 + 0x1);
                        t57 = (t57 + 0x4);
                        t70 = (t70 + 0x4);
                        *(unsigned int *)(((int)stk + 12)) = t70;
                        t85 = *(int *)(((int)stk + 8));
                        t53 = t85;
                        t53 = (t53 + 0x1);
                        *(unsigned int *)(((int)stk + 8)) = t53;
                    }
                } else {
                    t86 = *(int *)0xC2A1B2C;
                    t56 = t86;
                    t87 = *(int *)0xC2A1B28;
                    t55 = t87;
                    t54 = 0x0;
                    t88 = ((int (*)(int, int, int, int, int, float))(getNearLineIndex))(t54, t55, t56, (t59 + 0x14), (t59 + 0x8), u61);
                    t52 = t88;
                    t54 = t59;
                    t54 = (t54 + 0x1C);
                    *(unsigned int *)(((int)stk + 12)) = t54;
                    t58 = 0x0;
                    t57 = t54;
                    t89 = (t59 + 0x18);
                    for (;;) {
                        *(unsigned int *)(((int)stk + 8)) = t89;
                        if ((int)t58 >= (int)0x3) {
                            break;
                        }
                        t52 = t59;
                        t52 = (t52 + 0x18);
                        t90 = *(signed char *)((t58 + t52));
                        t52 = t90;
                        if (t52 != -1) {
                            t54 = t59;
                            t54 = (t54 + 0x18);
                            t54 = (t54 + t58);
                            t91 = *(int *)0xC2A1B2C;
                            t55 = t91;
                            t92 = *(signed char *)((t54 + 0x0));
                            t54 = t92;
                            t89 = t54;
                            t54 = (t54 << 1);
                            t54 = (t54 + t89);
                            t93 = *(int *)((t59 + 0x14));
                            t89 = t93;
                            t54 = (t54 << 2);
                            t54 = (t54 << 1);
                            t54 = (short)t54;
                            t54 = (t54 + 0xC1794F0);
                            t94 = *(int *)((t54 + 0x28));
                            t54 = t94;
                            t54 = (t54 - t89);
                            t89 = 0x0;
                            t95 = (int)((unsigned int)t55 + (unsigned int)t89);
                            t96 = (int)((unsigned int)t95 + ((((int)t89 > (int)t55)) ? 1u : 0u));
                            t55 = t96;
                            t55 = (t55 >> 1);
                            if ((int)t54 > (int)t55) {
                                t98 = *(int *)0xC2A1B2C;
                                t89 = t98;
                                t54 = (t54 - t89);
                            } else {
                                t55 = (-t55);
                                if ((int)t54 < (int)t55) {
                                    t99 = *(int *)0xC2A1B2C;
                                    t53 = t99;
                                    t54 = (t54 + t53);
                                    t100 = t53;
                                }
                                t101 = t100;
                            }
                            t53 = t101;
                            t89 = 0xC0813D0;
                            t102 = FUN_0c0813d0(t54);
                            t52 = t102;
                            t53 = t59;
                            t53 = (t53 + 0x18);
                            t53 = (t53 + t58);
                            t103 = *(signed char *)((t53 + 0x0));
                            t53 = t103;
                            t104 = *(int *)0xC2A1B28;
                            t89 = t53;
                            t53 = (t53 << 1);
                            t53 = (t53 + t89);
                            t53 = (t53 << 2);
                            t53 = (t53 << 1);
                            t53 = (short)t53;
                            t53 = (t53 + 0xC1794F0);
                            t105 = *(int *)((t53 + 0x28));
                            t53 = t105;
                            u62 = (float)t52;
                            u62 = (u62 * 300.0f);
                            t89 = t53;
                            t53 = (t53 << 1);
                            t53 = (t53 + t89);
                            t89 = 0xC081324;
                            t53 = (t53 << 2);
                            t53 = (t53 + t104);
                            t52 = 0xC;
                            t108 = 0;
                            for (; t108 < (int)t52; t108++) *(unsigned char *)((((int)stk + 8) + 0x10) + t108) = *(unsigned char *)(t53 + t108);
                            t109 = *(int *)(((int)stk + 8));
                            t55 = t109;
                            t54 = ((int)stk + 8);
                            t53 = 0xC078AE0;
                            t110 = *(signed char *)((t55 + 0x0));
                            t55 = t110;
                            t89 = t55;
                            t55 = (t55 << 1);
                            t55 = (t55 + t89);
                            t55 = (t55 << 2);
                            t55 = (t55 << 1);
                            t55 = (short)t55;
                            t55 = (t55 + 0xC1794F0);
                            t55 = (t55 + 0x1C);
                            t54 = (t54 + 0x10);
                            t111 = nlLength(t54, t55);
                            t52 = t111;
                            t112 = *(int *)((t59 + 0x14));
                            t53 = t112;
                            u60 = t111;
                            u62 = (u62 + t111);
                            t113 = *(int *)0xC2A1B28;
                            t89 = t53;
                            t53 = (t53 << 1);
                            t53 = (t53 + t89);
                            t53 = (t53 << 2);
                            t53 = (t53 + t113);
                            t52 = 0xC;
                            t114 = 0;
                            for (; t114 < (int)t52; t114++) *(unsigned char *)((((int)stk + 8) + 0x10) + t114) = *(unsigned char *)(t53 + t114);
                            t55 = t59;
                            t54 = ((int)stk + 8);
                            t55 = (t55 + 0x8);
                            t54 = (t54 + 0x10);
                            t115 = nlLength(t54, t55);
                            u60 = t115;
                            u62 = (u62 + u60);
                            t116 = *(int *)(((int)stk + 12));
                            t89 = t116;
                            *(float *)((t89 + 0x0)) = u62;
                            u119 = u60;
                        } else {
                            *(float *)((t57 + 0x0)) = 0.0f;
                            t117 = t52;
                            t118 = t54;
                        }
                        t120 = *(int *)(((int)stk + 12));
                        u60 = u119;
                        t52 = t117;
                        t53 = t120;
                        t54 = t118;
                        t58 = (t58 + 0x1);
                        t57 = (t57 + 0x4);
                        t53 = (t53 + 0x4);
                        *(unsigned int *)(((int)stk + 12)) = t53;
                        t121 = *(int *)(((int)stk + 8));
                        t89 = t121;
                        t89 = (t89 + 0x1);
                    }
                }
            }
            t130 = *(int *)(((int)stk + 16));
            u60 = u128;
            u61 = u129;
            t53 = t130;
            t55 = t126;
            t56 = t127;
            t59 = (t59 + 0x28);
            t53 = (t53 + 0x1);
            *(unsigned int *)(((int)stk + 16)) = t53;
            continue;
        }
        break;
    }
    return u60;
}
