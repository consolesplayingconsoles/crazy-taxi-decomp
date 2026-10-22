/* Straight-line functions with calls and guards (batch gen_lz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Drv_SetMotion(int, float);
float Drv_FacePsgFrame(int);
int Drv_CheckSideClear(int, int);
float nlInnerProduct(int, int);
int nlSubVector3op(int, int, int);
float nlUnitVector(int);
int Drv_StartGetOn(int a4);

int Drv_StartGetOn(int a4)
{
    int t0;
    int t1;
    int t2;
    float t4;
    int t6;
    float u7;
    int t8;
    int t11;
    float u12;
    int t14;
    int t13;
    float t40;
    float t41;
    float t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t74;
    int t75;
    int t76;
    int t77;
    int t78;
    int t109;
    int t110;
    int t111;
    int t112;
    int t113;
    int t114;
    int t115;
    int t116;
    int t117;
    int t118;
    int t119;
    int t120;
    int t121;
    int t122;
    int t123;
    int t124;
    int t125;
    int t126;
    int t127;
    int t128;
    int t145;
    int t146;
    int t147;
    int t148;
    int t149;
    int t150;
    int t151;
    int t152;
    int t153;
    int t154;
    int t155;
    int t156;
    int t157;
    int t158;
    int t159;
    int t160;
    int t161;
    int t162;
    int t163;
    int t164;
    int t186;
    int t187;
    int t188;
    int t28;
    int t18;
    int t104;
    int t105;
    int t106;
    int t107;
    int t69;
    int t70;
    int t71;
    int t72;
    int t61;
    int t62;
    int t63;
    int t64;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t96;
    int t97;
    int t98;
    int t99;
    int t88;
    int t89;
    int t90;
    int t91;
    int t79;
    int t80;
    int t81;
    int t82;
    int t83;
    int t183;
    int t143;
    int t139;
    int t135;
    int t131;
    int t179;
    int t175;
    int t171;
    int t165;
    int t167;
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
            t4 = Drv_FacePsgFrame(t0);
            Drv_SetMotion(t2, t4);
            t6 = *(signed char *)0xC2AD1DF;
            *(unsigned char *)0xC2AD1DF = (t6 | 0x80);
            *(float *)0xC2AD0F4 = 0.0f;
            u7 = *(float *)0xC0627F4;
            *(float *)0xC2AD0F8 = u7;
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
                t11 = *(signed char *)0xC2AD1DF;
                *(unsigned char *)0xC2AD1DF = (t11 | 0x80);
                *(float *)0xC2AD0F4 = 0.0f;
                u12 = *(float *)0xC062804;
                *(float *)0xC2AD0F8 = u12;
                t18 = 0xF8;
            } else {
                t14 = a4;
                if (a4 == 3) {
                    *(unsigned int *)0xC2AD020 = 0xC8E8E0C;
                    *(unsigned int *)0xC2AD1D0 = 0xC0D3068;
                    *(unsigned int *)0xC2AD1D4 = 0xC0D4A30;
                    *(float *)0xC2AD024 = 0.0f;
                    t13 = *(signed char *)0xC2AD1DF;
                    *(unsigned char *)0xC2AD1DF = (t13 & 0x7F);
                    *(float *)0xC2AD0F4 = 0.0f;
                    *(float *)0xC2AD0F8 = 0.0f;
                    t14 = 0xF8;
                }
                t18 = t14;
            }
            t28 = t18;
        }
        t188 = t28;
    } else {
        nlSubVector3op(((int)stk + 4), (t0 + 0x4), 0xC2AD004);
        *(float *)(((int)stk + 8)) = 0.0f;
        t40 = nlUnitVector(((int)stk + 4));
        t41 = nlInnerProduct(0xC2AD1F8, ((int)stk + 4));
        t42 = nlInnerProduct(0xC2AD1E0, ((int)stk + 4));
        t43 = Drv_CheckSideClear(t0, ((int)stk + 4));
        t44 = *(int *)0xC2AD1DC;
        t45 = (int)((unsigned int)t43 & 0x1);
        *(unsigned int *)0xC2AD1DC = ((t44 & 0xDFFFFFFF) | ((unsigned int)t45 << 29));
        t46 = *(int *)0xC2AD000;
        if (t46 == 3) {
            t47 = *(signed char *)((t0 + 0x14B));
            if ((t47 & 2) != 0) {
                t48 = *(signed char *)0xC2AD1DF;
                *(unsigned char *)0xC2AD1DF = ((t48 & 0xE7) | 0x18);
                t69 = (0xCC + ((int)stk + 4));
                t70 = (0xAC + ((int)stk + 4));
                t71 = (((int)stk + 4) + 0xC);
                t72 = (0x8C + ((int)stk + 4));
            } else {
                if (t40 > 80.0f) {
                    t49 = *(signed char *)0xC2AD1DF;
                    *(unsigned char *)0xC2AD1DF = ((t49 & 0xE7) | 0x10);
                    t61 = (0x12C + ((int)stk + 4));
                    t62 = (0x10C + ((int)stk + 4));
                    t63 = (((int)stk + 4) + 0x2C);
                    t64 = (0xEC + ((int)stk + 4));
                } else {
                    if (t40 > 40.0f) {
                        t50 = *(signed char *)0xC2AD1DF;
                        t52 = ((t50 & 0xE7) | 0x8);
                        t53 = (0x18C + ((int)stk + 4));
                        t54 = (0x16C + ((int)stk + 4));
                        t55 = (((int)stk + 4) + 0x4C);
                        t56 = (0x14C + ((int)stk + 4));
                    } else {
                        t51 = *(signed char *)0xC2AD1DF;
                        t52 = (t51 & 0xE7);
                        t53 = (0x1EC + ((int)stk + 4));
                        t54 = (0x1CC + ((int)stk + 4));
                        t55 = (((int)stk + 4) + 0x6C);
                        t56 = (0x1AC + ((int)stk + 4));
                    }
                    *(unsigned char *)0xC2AD1DF = t52;
                    t61 = t53;
                    t62 = t54;
                    t63 = t55;
                    t64 = t56;
                }
                t69 = t61;
                t70 = t62;
                t71 = t63;
                t72 = t64;
            }
            t104 = t69;
            t105 = t70;
            t106 = t71;
            t107 = t72;
        } else {
            t74 = *(signed char *)((t0 + 0x14B));
            if ((t74 & 2) != 0) {
                t75 = *(signed char *)0xC2AD1DF;
                *(unsigned char *)0xC2AD1DF = ((t75 & 0xE7) | 0x18);
                t96 = (0x2CC + ((int)stk + 4));
                t97 = (0x2AC + ((int)stk + 4));
                t98 = (0x20C + ((int)stk + 4));
                t99 = (0x28C + ((int)stk + 4));
            } else {
                if (t40 > 80.0f) {
                    t76 = *(signed char *)0xC2AD1DF;
                    *(unsigned char *)0xC2AD1DF = ((t76 & 0xE7) | 0x10);
                    t88 = (0x32C + ((int)stk + 4));
                    t89 = (0x30C + ((int)stk + 4));
                    t90 = (0x22C + ((int)stk + 4));
                    t91 = (0x2EC + ((int)stk + 4));
                } else {
                    if (t40 > 40.0f) {
                        t77 = *(signed char *)0xC2AD1DF;
                        t79 = ((t77 & 0xE7) | 0x8);
                        t80 = (0x38C + ((int)stk + 4));
                        t81 = (0x36C + ((int)stk + 4));
                        t82 = (0x24C + ((int)stk + 4));
                        t83 = (0x34C + ((int)stk + 4));
                    } else {
                        t78 = *(signed char *)0xC2AD1DF;
                        t79 = (t78 & 0xE7);
                        t80 = (0x3EC + ((int)stk + 4));
                        t81 = (0x3CC + ((int)stk + 4));
                        t82 = (0x26C + ((int)stk + 4));
                        t83 = (0x3AC + ((int)stk + 4));
                    }
                    *(unsigned char *)0xC2AD1DF = t79;
                    t88 = t80;
                    t89 = t81;
                    t90 = t82;
                    t91 = t83;
                }
                t96 = t88;
                t97 = t89;
                t98 = t90;
                t99 = t91;
            }
            t104 = t96;
            t105 = t97;
            t106 = t98;
            t107 = t99;
        }
        if (t41 > 0.0f) {
            if (t42 > 0.923879504f) {
                t109 = *(int *)((t105 + 0x0));
                t110 = *(int *)((t104 + 0x0));
                *(unsigned int *)0xC2AD1D0 = t109;
                t111 = *(int *)(((t107 + 0x10) + 0x0));
                *(unsigned int *)0xC2AD1D4 = t111;
                t112 = *(int *)((t106 + 0x0));
                *(unsigned int *)0xC2AD01C = t112;
                t143 = t110;
            } else {
                if (t42 > 0.382683426f) {
                    t113 = *(int *)((t105 + 0x4));
                    t114 = *(int *)((t104 + 0x4));
                    *(unsigned int *)0xC2AD1D0 = t113;
                    t115 = *(int *)((t107 + 0x4));
                    *(unsigned int *)0xC2AD1D4 = t115;
                    t116 = *(int *)((t106 + 0x4));
                    *(unsigned int *)0xC2AD01C = t116;
                    t139 = t114;
                } else {
                    if (t42 > -0.382683426f) {
                        t117 = *(int *)((t105 + 0x8));
                        t118 = *(int *)((t104 + 0x8));
                        *(unsigned int *)0xC2AD1D0 = t117;
                        t119 = *(int *)((t107 + 0x8));
                        *(unsigned int *)0xC2AD1D4 = t119;
                        t120 = *(int *)((t106 + 0x8));
                        *(unsigned int *)0xC2AD01C = t120;
                        t135 = t118;
                    } else {
                        if (t42 > -0.923879504f) {
                            t121 = *(int *)((t105 + 0xC));
                            t122 = *(int *)((t104 + 0xC));
                            *(unsigned int *)0xC2AD1D0 = t121;
                            t123 = *(int *)((t107 + 0xC));
                            *(unsigned int *)0xC2AD1D4 = t123;
                            t124 = *(int *)((t106 + 0xC));
                            *(unsigned int *)0xC2AD01C = t124;
                            t131 = t122;
                        } else {
                            t125 = *(int *)((t105 + 0x10));
                            t126 = *(int *)((t104 + 0x10));
                            *(unsigned int *)0xC2AD1D0 = t125;
                            t127 = *(int *)(((t107 + 0x10) + 0x0));
                            *(unsigned int *)0xC2AD1D4 = t127;
                            t128 = *(int *)((t106 + 0x10));
                            *(unsigned int *)0xC2AD01C = t128;
                            t131 = t126;
                        }
                        t135 = t131;
                    }
                    t139 = t135;
                }
                t143 = t139;
            }
            t183 = t143;
        } else {
            if (t42 > 0.923879504f) {
                t145 = *(int *)((t105 + 0x0));
                t146 = *(int *)((t104 + 0x0));
                *(unsigned int *)0xC2AD1D0 = t145;
                t147 = *(int *)((t107 + 0x0));
                *(unsigned int *)0xC2AD1D4 = t147;
                t148 = *(int *)((t106 + 0x0));
                *(unsigned int *)0xC2AD01C = t148;
                t179 = t146;
            } else {
                if (t42 > 0.382683426f) {
                    t149 = *(int *)((t105 + 0x1C));
                    t150 = *(int *)((t104 + 0x1C));
                    *(unsigned int *)0xC2AD1D0 = t149;
                    t151 = *(int *)((t107 + 0x1C));
                    *(unsigned int *)0xC2AD1D4 = t151;
                    t152 = *(int *)((t106 + 0x1C));
                    *(unsigned int *)0xC2AD01C = t152;
                    t175 = t150;
                } else {
                    if (t42 > -0.382683426f) {
                        t153 = *(int *)((t105 + 0x18));
                        t154 = *(int *)((t104 + 0x18));
                        *(unsigned int *)0xC2AD1D0 = t153;
                        t155 = *(int *)((t107 + 0x18));
                        *(unsigned int *)0xC2AD1D4 = t155;
                        t156 = *(int *)((t106 + 0x18));
                        *(unsigned int *)0xC2AD01C = t156;
                        t171 = t154;
                    } else {
                        if (t42 > -0.923879504f) {
                            t157 = *(int *)((t105 + 0x14));
                            t158 = *(int *)((t104 + 0x14));
                            *(unsigned int *)0xC2AD1D0 = t157;
                            t159 = *(int *)((t107 + 0x14));
                            *(unsigned int *)0xC2AD1D4 = t159;
                            t160 = *(int *)((t106 + 0x14));
                            t165 = t160;
                            t167 = t158;
                        } else {
                            t161 = *(int *)((t105 + 0x10));
                            t162 = *(int *)((t104 + 0x10));
                            *(unsigned int *)0xC2AD1D0 = t161;
                            t163 = *(int *)(((t107 + 0x10) + 0x0));
                            *(unsigned int *)0xC2AD1D4 = t163;
                            t164 = *(int *)((t106 + 0x10));
                            t165 = t164;
                            t167 = t162;
                        }
                        *(unsigned int *)0xC2AD01C = t165;
                        t171 = t167;
                    }
                    t175 = t171;
                }
                t179 = t175;
            }
            t183 = t179;
        }
        Drv_SetMotion(t183, 0.0f);
        t186 = *(signed char *)0xC2AD1DF;
        *(unsigned char *)0xC2AD1DF = (t186 | 0x80);
        *(float *)0xC2AD0F4 = 0.0f;
        *(float *)0xC2AD0F8 = 15.0f;
        t187 = *(signed char *)0xC2AD1DF;
        *(unsigned char *)0xC2AD1DF = (t187 | 0x2);
        t188 = (t187 | 0x2);
    }
    return t188;
}
