/* Straight-line functions with calls and guards (batch gen_mj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Drv_CheckSideClear(int, int);
float Drv_FacePsgFrame(int);
int Drv_SetMotion(int, float);
float nlInnerProduct(int, int);
int nlSubVector3op(int, int, int);
float nlUnitVector(int);
int Drv_StartGetOn(int a4);

int Drv_StartGetOn(int a4)
{
    int t0;
    int t1;
    int t2;
    int t8;
    int t14;
    float t40;
    float t41;
    float t42;
    int t112;
    int t116;
    int t120;
    int t124;
    int t128;
    int t148;
    int t152;
    int t156;
    int t160;
    int t164;
    int t189;
    int t190;
    int t28;
    int t18;
    int t106;
    int t107;
    int t108;
    int t109;
    int t71;
    int t72;
    int t73;
    int t74;
    int t63;
    int t64;
    int t65;
    int t66;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t98;
    int t99;
    int t100;
    int t101;
    int t90;
    int t91;
    int t92;
    int t93;
    int t81;
    int t82;
    int t83;
    int t84;
    int t85;
    int t185;
    int t145;
    int t141;
    int t137;
    int t133;
    int t181;
    int t177;
    int t173;
    int t167;
    int t169;
    int stk[268] = {0};

    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x3EC + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4CF4); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x3CC + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4D14); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x3AC + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4D34); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x38C + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4D54); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x36C + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4D74); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x34C + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4D94); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x32C + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4DB4); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x30C + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4DD4); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x2EC + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4DF4); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x2CC + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4E14); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x2AC + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4E34); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x28C + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4E54); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x26C + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4E74); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x24C + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4E94); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x22C + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4EB4); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x20C + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4ED4); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x1EC + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4EF4); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x1CC + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4F14); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x1AC + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4F34); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x18C + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4F54); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x16C + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4F74); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x14C + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4F94); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x12C + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4FB4); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x10C + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4FD4); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0xEC + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4FF4); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0xCC + ((int)stk + 4))) = *(struct mv8 *)(0xC0D5014); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0xAC + ((int)stk + 4))) = *(struct mv8 *)(0xC0D5034); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x8C + ((int)stk + 4))) = *(struct mv8 *)(0xC0D5054); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((((int)stk + 4) + 0x6C)) = *(struct mv8 *)(0xC0D5074); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((((int)stk + 4) + 0x4C)) = *(struct mv8 *)(0xC0D5094); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((((int)stk + 4) + 0x2C)) = *(struct mv8 *)(0xC0D50B4); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((((int)stk + 4) + 0xC)) = *(struct mv8 *)(0xC0D50D4); }
    t0 = *(int *)0xC2AD018;
    t1 = *(signed char *)0xC2AD1DF;
    if (a4 != 0) {
        if (a4 == 1) {
            t2 = 0xC8E7070;
            if ((-(((((t1 & 32) == 0)) ? 1 : 0) - 1)) != 0) {
                t2 = 0xC8E68CC;
            }
            *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
            *(unsigned int *)0xC2AD1D4 = 0xC0D3080;
            Drv_SetMotion(t2, (Drv_FacePsgFrame(t0)));
            *(unsigned char *)0xC2AD1DF = ((*(signed char *)0xC2AD1DF) | 0x80);
            *(float *)0xC2AD0F4 = 0.0f;
            *(float *)0xC2AD0F8 = (30.0f);
            t28 = 0xF8;
        } else {
            if (a4 == 2) {
                t8 = 0xC8AB4C8;
                if ((-(((((t1 & 32) == 0)) ? 1 : 0) - 1)) != 0) {
                    t8 = 0xC8AA754;
                }
                *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                *(unsigned int *)0xC2AD1D4 = 0xC0D4A10;
                Drv_SetMotion(t8, 0.0f);
                *(unsigned char *)0xC2AD1DF = ((*(signed char *)0xC2AD1DF) | 0x80);
                *(float *)0xC2AD0F4 = 0.0f;
                *(float *)0xC2AD0F8 = (10.0f);
                t18 = 0xF8;
            } else {
                t14 = a4;
                if (a4 == 3) {
                    *(unsigned int *)0xC2AD020 = 0xC8E8E0C;
                    *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                    *(unsigned int *)0xC2AD1D4 = 0xC0D4A30;
                    *(float *)0xC2AD024 = 0.0f;
                    *(unsigned char *)0xC2AD1DF = ((*(signed char *)0xC2AD1DF) & 0x7F);
                    *(float *)0xC2AD0F4 = 0.0f;
                    *(float *)0xC2AD0F8 = 0.0f;
                    t14 = 0xF8;
                }
                t18 = t14;
            }
            t28 = t18;
        }
        t190 = t28;
    } else {
        nlSubVector3op(((int)stk + 4), (t0 + 0x4), 0xC2AD004);
        *(float *)(((int)stk + 8)) = 0.0f;
        t40 = nlUnitVector(((int)stk + 4));
        t41 = nlInnerProduct(0xC2AD1F8, ((int)stk + 4));
        t42 = nlInnerProduct(0xC2AD1E0, ((int)stk + 4));
        *(unsigned int *)0xC2AD1DC = (((*(int *)0xC2AD1DC) & 0xDFFFFFFF) | ((unsigned int)((int)((unsigned int)(Drv_CheckSideClear(t0, ((int)stk + 4))) & 0x1)) << 29));
        if ((*(int *)0xC2AD000) == 3) {
            if (((*(signed char *)((t0 + 0x14B))) & 2) != 0) {
                *(unsigned char *)0xC2AD1DF = (((*(signed char *)0xC2AD1DF) & 0xE7) | 0x18);
                t71 = (0xCC + ((int)stk + 4));
                t72 = (0xAC + ((int)stk + 4));
                t73 = (((int)stk + 4) + 0xC);
                t74 = (0x8C + ((int)stk + 4));
            } else {
                if (t40 > 80.0f) {
                    *(unsigned char *)0xC2AD1DF = (((*(signed char *)0xC2AD1DF) & 0xE7) | 0x10);
                    t63 = (0x12C + ((int)stk + 4));
                    t64 = (0x10C + ((int)stk + 4));
                    t65 = (((int)stk + 4) + 0x2C);
                    t66 = (0xEC + ((int)stk + 4));
                } else {
                    if (t40 > 40.0f) {
                        t54 = (((*(signed char *)0xC2AD1DF) & 0xE7) | 0x8);
                        t55 = (0x18C + ((int)stk + 4));
                        t56 = (0x16C + ((int)stk + 4));
                        t57 = (((int)stk + 4) + 0x4C);
                        t58 = (0x14C + ((int)stk + 4));
                    } else {
                        t54 = ((*(signed char *)0xC2AD1DF) & 0xE7);
                        t55 = (0x1EC + ((int)stk + 4));
                        t56 = (0x1CC + ((int)stk + 4));
                        t57 = (((int)stk + 4) + 0x6C);
                        t58 = (0x1AC + ((int)stk + 4));
                    }
                    *(unsigned char *)0xC2AD1DF = t54;
                    t63 = t55;
                    t64 = t56;
                    t65 = t57;
                    t66 = t58;
                }
                t71 = t63;
                t72 = t64;
                t73 = t65;
                t74 = t66;
            }
            t106 = t71;
            t107 = t72;
            t108 = t73;
            t109 = t74;
        } else {
            if (((*(signed char *)((t0 + 0x14B))) & 2) != 0) {
                *(unsigned char *)0xC2AD1DF = (((*(signed char *)0xC2AD1DF) & 0xE7) | 0x18);
                t98 = (0x2CC + ((int)stk + 4));
                t99 = (0x2AC + ((int)stk + 4));
                t100 = (0x20C + ((int)stk + 4));
                t101 = (0x28C + ((int)stk + 4));
            } else {
                if (t40 > 80.0f) {
                    *(unsigned char *)0xC2AD1DF = (((*(signed char *)0xC2AD1DF) & 0xE7) | 0x10);
                    t90 = (0x32C + ((int)stk + 4));
                    t91 = (0x30C + ((int)stk + 4));
                    t92 = (0x22C + ((int)stk + 4));
                    t93 = (0x2EC + ((int)stk + 4));
                } else {
                    if (t40 > 40.0f) {
                        t81 = (((*(signed char *)0xC2AD1DF) & 0xE7) | 0x8);
                        t82 = (0x38C + ((int)stk + 4));
                        t83 = (0x36C + ((int)stk + 4));
                        t84 = (0x24C + ((int)stk + 4));
                        t85 = (0x34C + ((int)stk + 4));
                    } else {
                        t81 = ((*(signed char *)0xC2AD1DF) & 0xE7);
                        t82 = (0x3EC + ((int)stk + 4));
                        t83 = (0x3CC + ((int)stk + 4));
                        t84 = (0x26C + ((int)stk + 4));
                        t85 = (0x3AC + ((int)stk + 4));
                    }
                    *(unsigned char *)0xC2AD1DF = t81;
                    t90 = t82;
                    t91 = t83;
                    t92 = t84;
                    t93 = t85;
                }
                t98 = t90;
                t99 = t91;
                t100 = t92;
                t101 = t93;
            }
            t106 = t98;
            t107 = t99;
            t108 = t100;
            t109 = t101;
        }
        if (t41 > 0.0f) {
            if (t42 > 0.923879504f) {
                t112 = *(int *)((t106 + 0x0));
                *(unsigned int *)0xC2AD1D0 = (*(int *)((t107 + 0x0)));
                *(unsigned int *)0xC2AD1D4 = (*(int *)(((t109 + 0x10) + 0x0)));
                *(unsigned int *)0xC2AD01C = (*(int *)((t108 + 0x0)));
                t145 = t112;
            } else {
                if (t42 > 0.382683426f) {
                    t116 = *(int *)((t106 + 0x4));
                    *(unsigned int *)0xC2AD1D0 = (*(int *)((t107 + 0x4)));
                    *(unsigned int *)0xC2AD1D4 = (*(int *)((t109 + 0x4)));
                    *(unsigned int *)0xC2AD01C = (*(int *)((t108 + 0x4)));
                    t141 = t116;
                } else {
                    if (t42 > -0.382683426f) {
                        t120 = *(int *)((t106 + 0x8));
                        *(unsigned int *)0xC2AD1D0 = (*(int *)((t107 + 0x8)));
                        *(unsigned int *)0xC2AD1D4 = (*(int *)((t109 + 0x8)));
                        *(unsigned int *)0xC2AD01C = (*(int *)((t108 + 0x8)));
                        t137 = t120;
                    } else {
                        if (t42 > -0.923879504f) {
                            t124 = *(int *)((t106 + 0xC));
                            *(unsigned int *)0xC2AD1D0 = (*(int *)((t107 + 0xC)));
                            *(unsigned int *)0xC2AD1D4 = (*(int *)((t109 + 0xC)));
                            *(unsigned int *)0xC2AD01C = (*(int *)((t108 + 0xC)));
                            t133 = t124;
                        } else {
                            t128 = *(int *)((t106 + 0x10));
                            *(unsigned int *)0xC2AD1D0 = (*(int *)((t107 + 0x10)));
                            *(unsigned int *)0xC2AD1D4 = (*(int *)(((t109 + 0x10) + 0x0)));
                            *(unsigned int *)0xC2AD01C = (*(int *)((t108 + 0x10)));
                            t133 = t128;
                        }
                        t137 = t133;
                    }
                    t141 = t137;
                }
                t145 = t141;
            }
            t185 = t145;
        } else {
            if (t42 > 0.923879504f) {
                t148 = *(int *)((t106 + 0x0));
                *(unsigned int *)0xC2AD1D0 = (*(int *)((t107 + 0x0)));
                *(unsigned int *)0xC2AD1D4 = (*(int *)((t109 + 0x0)));
                *(unsigned int *)0xC2AD01C = (*(int *)((t108 + 0x0)));
                t181 = t148;
            } else {
                if (t42 > 0.382683426f) {
                    t152 = *(int *)((t106 + 0x1C));
                    *(unsigned int *)0xC2AD1D0 = (*(int *)((t107 + 0x1C)));
                    *(unsigned int *)0xC2AD1D4 = (*(int *)((t109 + 0x1C)));
                    *(unsigned int *)0xC2AD01C = (*(int *)((t108 + 0x1C)));
                    t177 = t152;
                } else {
                    if (t42 > -0.382683426f) {
                        t156 = *(int *)((t106 + 0x18));
                        *(unsigned int *)0xC2AD1D0 = (*(int *)((t107 + 0x18)));
                        *(unsigned int *)0xC2AD1D4 = (*(int *)((t109 + 0x18)));
                        *(unsigned int *)0xC2AD01C = (*(int *)((t108 + 0x18)));
                        t173 = t156;
                    } else {
                        if (t42 > -0.923879504f) {
                            t160 = *(int *)((t106 + 0x14));
                            *(unsigned int *)0xC2AD1D0 = (*(int *)((t107 + 0x14)));
                            *(unsigned int *)0xC2AD1D4 = (*(int *)((t109 + 0x14)));
                            t167 = (*(int *)((t108 + 0x14)));
                            t169 = t160;
                        } else {
                            t164 = *(int *)((t106 + 0x10));
                            *(unsigned int *)0xC2AD1D0 = (*(int *)((t107 + 0x10)));
                            *(unsigned int *)0xC2AD1D4 = (*(int *)(((t109 + 0x10) + 0x0)));
                            t167 = (*(int *)((t108 + 0x10)));
                            t169 = t164;
                        }
                        *(unsigned int *)0xC2AD01C = t167;
                        t173 = t169;
                    }
                    t177 = t173;
                }
                t181 = t177;
            }
            t185 = t181;
        }
        Drv_SetMotion(t185, 0.0f);
        *(unsigned char *)0xC2AD1DF = ((*(signed char *)0xC2AD1DF) | 0x80);
        *(float *)0xC2AD0F4 = 0.0f;
        *(float *)0xC2AD0F8 = 15.0f;
        t189 = *(signed char *)0xC2AD1DF;
        *(unsigned char *)0xC2AD1DF = (t189 | 0x2);
        t190 = (t189 | 0x2);
    }
    return t190;
}
