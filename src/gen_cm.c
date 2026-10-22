/* Straight-line functions with calls and guards (batch gen_cm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c034872(int, int);
int FUN_0c03495c(int, int);
int FUN_0c0349d8(int, int);
int FUN_0c034a4a(int, int, int, float);
int FUN_0c034b5e(int, int, int, int);
int nlSqrt(int, int);
int FUN_0c078310(void);
int PutCollisionEffect(int, int, int);
int SetCameraPosVelocity(int);
float nlFloor(float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlTranslateV(int);
int CheckColliWallBox(int a4, int a5, float f4);

int CheckColliWallBox(int a4, int a5, float f4)
{
    float u0;
    float u1;
    float t2;
    float u3;
    float u4;
    float t5;
    int t6;
    int t7;
    int t8;
    int t230;
    int t9;
    int t227;
    int t10;
    int t11;
    int t224;
    float u12;
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
    float u24;
    int t25;
    int t26;
    float u27;
    int t28;
    int t29;
    float u30;
    int t31;
    float u32;
    int t33;
    float u34;
    int t35;
    float u36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t51;
    int t53;
    int t54;
    int t56;
    int t57;
    int t60;
    int t61;
    float u62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t69;
    int t71;
    int t73;
    int t74;
    int t77;
    float u78;
    int t79;
    int t80;
    int t81;
    int t82;
    float u83;
    int t84;
    int t85;
    int t86;
    int t87;
    int t88;
    int t90;
    float u91;
    float u92;
    float u93;
    float u94;
    int t95;
    float u96;
    float u97;
    float u98;
    float u99;
    int t100;
    int t102;
    float u103;
    float u104;
    float u105;
    float u106;
    float u107;
    int t110;
    int t118;
    int t119;
    int t121;
    float u122;
    float u123;
    float u124;
    float u125;
    float u126;
    float u127;
    int t128;
    float u129;
    float u130;
    float u131;
    float u132;
    float u133;
    int t134;
    float u135;
    float u136;
    float u137;
    int t138;
    int t140;
    float u141;
    float u142;
    float u143;
    float u144;
    float u145;
    int t148;
    int t156;
    int t157;
    int t160;
    int t161;
    int t164;
    int t166;
    int t168;
    int t169;
    int t170;
    int t173;
    int t174;
    float u175;
    int t176;
    int t177;
    int t178;
    int t179;
    float u180;
    int t181;
    int t182;
    int t183;
    int t184;
    int t185;
    int t187;
    float u188;
    float u189;
    float u190;
    float u191;
    int t192;
    float u193;
    float u194;
    float u195;
    float u196;
    int t197;
    int t199;
    float u200;
    float u201;
    float u202;
    float u203;
    float u204;
    int t207;
    int t215;
    int t216;
    int t219;
    int t221;
    int t220;
    int stk[45] = {0};

    *(unsigned int *)(((int)stk + 12)) = a5;
    *(float *)(((int)stk + 28)) = f4;
    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)0xC270478;
    t2 = nlFloor((u0 / u1));
    u3 = *(float *)0xC270478;
    u4 = *(float *)((a4 + 0x8));
    t5 = nlFloor((u4 / u3));
    t6 = *(int *)0xC27045C;
    t7 = *(int *)0xC270460;
    t8 = *(int *)0xC27046C;
    t230 = 0x0;
    if ((int)((t8 * ((int)t5 - t7)) + ((int)t2 - t6)) >= 0) {
        t9 = *(int *)0xC270474;
        t227 = 0x0;
        if ((int)((t8 * ((int)t5 - t7)) + ((int)t2 - t6)) < (int)t9) {
            t10 = *(int *)0xC270458;
            t11 = *(int *)(((((t8 * ((int)t5 - t7)) + ((int)t2 - t6)) << 2) + t10));
            t224 = 0x0;
            if (t11 != 0) {
                *(unsigned int *)(((int)stk + 32)) = 0x0;
                *(unsigned int *)(((int)stk + 112)) = a4;
                u12 = *(float *)(((int)stk + 28));
                *(float *)(((int)stk + 132)) = u12;
                *(unsigned int *)(((int)stk + 4)) = (((t8 * ((int)t5 - t7)) + ((int)t2 - t6)) << 2);
                t13 = *(int *)0xC270458;
                t14 = *(int *)(((((t8 * ((int)t5 - t7)) + ((int)t2 - t6)) << 2) + t13));
                t15 = *(short *)((t14 + 0x0));
                t16 = t13;
                t17 = t11;
                t18 = 0xC270458;
                t19 = ((t8 * ((int)t5 - t7)) + ((int)t2 - t6));
                t20 = 0x0;
                t21 = 0x0;
                t22 = t15;
                t23 = (t14 + 0x4);
                u24 = u12;
                for (;;) {
                    if (t22 == 0) break;
                    t25 = *(int *)((t23 + 0x0));
                    t19 = ((int)stk + 4);
                    t19 = (t19 + 0x6C);
                    t26 = FUN_0c034872(t19, t25);
                    t16 = t26;
                    if (t16 != 0) {
                        t16 = 0x7C;
                        u24 = 0.0f;
                        u27 = *(float *)((((int)stk + 4) + t16));
                        if (u24 > u27) {
                            t28 = *(int *)((t23 + 0x0));
                            t16 = t28;
                            t29 = *(int *)((t16 + 0x14));
                            t16 = t29;
                            if ((t16 & 1) == 0) {
                                if (t20 != 0) {
                                    t16 = 0x7C;
                                    u24 = 0.0f;
                                    u30 = *(float *)((((int)stk + 4) + t16));
                                    if (u24 > u30) {
                                        t22 = (t22 - 1);
                                        t23 = (t23 + 0x4);
                                        continue;
                                    }
                                    t31 = *(int *)((t23 + 0x0));
                                    t18 = t31;
                                    t17 = t21;
                                    t16 = 0xC270A58;
                                    t19 = 0xF;
                                    t21 = (t21 + 0x1);
                                    t17 = (t17 << 2);
                                    *(unsigned int *)((t17 + t16)) = t18;
                                    if ((int)t21 <= (int)t19) {
                                        t22 = (t22 - 1);
                                        t23 = (t23 + 0x4);
                                        continue;
                                    }
                                    break;
                                }
                                t16 = 0x7C;
                                u24 = 0.0f;
                                u32 = *(float *)((((int)stk + 4) + t16));
                                if (!(u24 > u32)) {
                                    t21 = 0x0;
                                    t20 = 0x1;
                                }
                                t33 = *(int *)((t23 + 0x0));
                                t18 = t33;
                                t17 = t21;
                                t16 = 0xC270A58;
                                t19 = 0xF;
                                t21 = (t21 + 0x1);
                                t17 = (t17 << 2);
                                *(unsigned int *)((t17 + t16)) = t18;
                                if ((int)t21 <= (int)t19) {
                                    t22 = (t22 - 1);
                                    t23 = (t23 + 0x4);
                                    continue;
                                }
                                break;
                            }
                            t22 = (t22 - 1);
                            t23 = (t23 + 0x4);
                            continue;
                        }
                        if (t20 != 0) {
                            t16 = 0x7C;
                            u24 = 0.0f;
                            u34 = *(float *)((((int)stk + 4) + t16));
                            if (u24 > u34) {
                                t22 = (t22 - 1);
                                t23 = (t23 + 0x4);
                                continue;
                            }
                            t35 = *(int *)((t23 + 0x0));
                            t18 = t35;
                            t17 = t21;
                            t16 = 0xC270A58;
                            t19 = 0xF;
                            t21 = (t21 + 0x1);
                            t17 = (t17 << 2);
                            *(unsigned int *)((t17 + t16)) = t18;
                            if ((int)t21 <= (int)t19) {
                                t22 = (t22 - 1);
                                t23 = (t23 + 0x4);
                                continue;
                            }
                            break;
                        }
                        t16 = 0x7C;
                        u24 = 0.0f;
                        u36 = *(float *)((((int)stk + 4) + t16));
                        if (!(u24 > u36)) {
                            t21 = 0x0;
                            t20 = 0x1;
                        }
                        t37 = *(int *)((t23 + 0x0));
                        t18 = t37;
                        t17 = t21;
                        t16 = 0xC270A58;
                        t19 = 0xF;
                        t21 = (t21 + 0x1);
                        t17 = (t17 << 2);
                        *(unsigned int *)((t17 + t16)) = t18;
                        if ((int)t21 <= (int)t19) {
                            t22 = (t22 - 1);
                            t23 = (t23 + 0x4);
                            continue;
                        }
                        break;
                    }
                    t22 = (t22 - 1);
                    t23 = (t23 + 0x4);
                }
                t38 = *(int *)(((int)stk + 4));
                t39 = *(int *)0xC270458;
                t40 = *(int *)((t39 + t38));
                t41 = *(short *)((t40 + 0x2));
                *(unsigned int *)(((int)stk + 16)) = t41;
                t42 = *(int *)(((int)stk + 12));
                *(unsigned int *)(((int)stk + 4)) = ((short)((short)t42 * (short)0x1C) + 0xC2708B4);
                *(unsigned int *)(((int)stk + 24)) = (((int)stk + 4) + 0x54);
                *(unsigned int *)(((int)stk + 20)) = (((int)stk + 4) + 0x60);
                t43 = t23;
                for (;;) {
                    t44 = *(int *)(((int)stk + 16));
                    if (t44 != 0) {
                        t45 = *(int *)((t43 + 0x0));
                        t46 = FUN_0c0349d8((((int)stk + 4) + 0x6C), t45);
                        if (t46 == 0) {
                            t47 = *(int *)(((int)stk + 16));
                            t43 = (t43 + 0x4);
                            *(unsigned int *)(((int)stk + 16)) = (t47 - 1);
                            continue;
                        }
                        t48 = *(int *)((a4 + 0x28));
                        *(unsigned int *)(((int)stk + 8)) = t48;
                        nlPushUnitMatrix();
                        nlTranslateV(a4);
                        t51 = *(int *)(((int)stk + 8));
                        SetCameraPosVelocity(t51);
                        t53 = *(int *)(((int)stk + 24));
                        t54 = *(int *)(((int)stk + 4));
                        nlSqrt(t54, t53);
                        t56 = *(int *)(((int)stk + 4));
                        t57 = *(int *)(((int)stk + 20));
                        nlSqrt((t56 + 0xC), t57);
                        nlPopMatrix(0x1);
                        t60 = *(int *)(((int)stk + 4));
                        t61 = *(int *)((t43 + 0x0));
                        u62 = *(float *)((t60 + 0x18));
                        t63 = FUN_0c034a4a((((int)stk + 4) + 0x6C), t61, (((int)stk + 4) + 0x54), u62);
                        if (t63 != 0) break;
                        t64 = *(int *)(((int)stk + 16));
                        t43 = (t43 + 0x4);
                        *(unsigned int *)(((int)stk + 16)) = (t64 - 1);
                        continue;
                    }
                    if (t21 == 0) {
                        t65 = *(int *)(((int)stk + 32));
                        return t65;
                    }
                    t66 = *(int *)((a4 + 0x28));
                    *(unsigned int *)(((int)stk + 20)) = t66;
                    nlPushUnitMatrix();
                    nlTranslateV(a4);
                    t69 = *(int *)(((int)stk + 20));
                    SetCameraPosVelocity(t69);
                    t71 = *(int *)(((int)stk + 12));
                    t43 = 0x0;
                    *(unsigned int *)(((int)stk + 4)) = (0xC27047C + (short)(((((t71 << 2) << 1) + t71) << 2) << 1));
                    t73 = 0x1;
                    while ((int)t43 < (int)0x4) {
                        t73 = t43;
                        t73 = (t73 << 1);
                        t73 = (t73 + t43);
                        t73 = (t73 << 2);
                        t74 = *(int *)(((int)stk + 4));
                        t73 = (signed char)t73;
                        nlSqrt((t74 + t73), ((((int)stk + 4) + 0x3C) + t73));
                        t43 = (t43 + 0x1);
                    }
                    nlPopMatrix(0x1);
                    *(unsigned int *)(((int)stk + 4)) = 0x0;
                    t77 = t73;
                    u78 = 3.40282347e+38f;
                    for (;;) {
                        t79 = *(int *)(((int)stk + 4));
                        if ((int)t79 >= (int)0x4) break;
                        t80 = *(int *)(((int)stk + 4));
                        t43 = 0xC270A58;
                        *(unsigned int *)(((int)stk + 112)) = ((signed char)(((t80 << 1) + t80) << 2) + (((int)stk + 4) + 0x3C));
                        *(unsigned int *)(((int)stk + 8)) = 0x0;
                        t77 = 0xC270A58;
                        if ((int)t21 > 0) {
                            do {
                                t81 = *(int *)((t77 + 0x0));
                                t82 = FUN_0c03495c((((int)stk + 4) + 0x6C), t81);
                                if (t82 != 0) {
                                    u83 = *(float *)(((int)stk + 128));
                                    if (u78 > u83) {
                                        if (0.0f > u83) {
                                            u78 = u83;
                                            t84 = *(int *)(((((int)stk + 4) + 0x70) + 0x4));
                                            *(unsigned int *)(((((int)stk + 4) + 0x34) + 0x4)) = t84;
                                            t85 = *(int *)(((((int)stk + 4) + 0x70) + 0x0));
                                            *(unsigned int *)(((((int)stk + 4) + 0x34) + 0x0)) = t85;
                                            t86 = *(int *)(((int)stk + 4));
                                            *(unsigned int *)(((int)stk + 16)) = t86;
                                            t87 = *(int *)((t43 + 0x0));
                                            *(unsigned int *)(((int)stk + 24)) = t87;
                                        }
                                    }
                                }
                                t88 = *(int *)(((int)stk + 8));
                                t43 = (t43 + 0x4);
                                *(unsigned int *)(((int)stk + 8)) = (t88 + 0x1);
                                t77 = (t77 + 0x4);
                            } while ((int)(t88 + 0x1) < (int)t21);
                        }
                        t90 = *(int *)(((int)stk + 4));
                        *(unsigned int *)(((int)stk + 4)) = (t90 + 0x1);
                    }
                    if (0.0f > u78) {
                        u91 = *(float *)((a4 + 0x0));
                        u92 = *(float *)(((int)stk + 56));
                        *(float *)((a4 + 0x0)) = (u91 - (u92 * u78));
                        u93 = *(float *)(((((int)stk + 4) + 0x38) + 0x0));
                        u94 = *(float *)((a4 + 0x8));
                        *(float *)((a4 + 0x8)) = (u94 - (u93 * u78));
                        t95 = *(int *)(((int)stk + 16));
                        u96 = *(float *)((a4 + 0x0));
                        u97 = *(float *)((((signed char)(((t95 << 1) + t95) << 2) + (((int)stk + 4) + 0x3C)) + 0x0));
                        *(float *)(((int)stk + 48)) = (u97 - u96);
                        u98 = *(float *)((((signed char)(((t95 << 1) + t95) << 2) + (((int)stk + 4) + 0x3C)) + 0x8));
                        u99 = *(float *)((a4 + 0x8));
                        *(float *)(((int)stk + 52)) = (u98 - u99);
                        t100 = *(int *)(((int)stk + 12));
                        FUN_0c034b5e(a4, (((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x34), t100);
                        t102 = *(int *)(((int)stk + 12));
                        if (t102 == 0) {
                            u103 = *(float *)((a4 + 0x0));
                            u104 = *(float *)(((int)stk + 48));
                            *(float *)(((int)stk + 36)) = (u104 + u103);
                            u105 = *(float *)((a4 + 0x4));
                            *(float *)(((int)stk + 40)) = u105;
                            u106 = *(float *)((a4 + 0x8));
                            u107 = *(float *)(((int)stk + 52));
                            *(float *)(((int)stk + 44)) = (u107 + u106);
                            nlPushUnitMatrix();
                            nlTranslateV(a4);
                            t110 = *(int *)(((int)stk + 20));
                            SetCameraPosVelocity(t110);
                            nlPushMatrix(0x0);
                            FUN_0c078310();
                            nlSqrt((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x20));
                            nlPopMatrix(0x1);
                            *(float *)(((int)stk + 40)) = 5.0f;
                            nlSqrt((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x20));
                            nlPopMatrix(0x1);
                            t118 = *(int *)(((int)stk + 24));
                            t119 = *(int *)((t118 + 0x18));
                            PutCollisionEffect((((int)stk + 4) + 0x20), (a4 + 0xC), (t119 & 0x1));
                            return 0x1;
                        }
                        return 0x1;
                    }
                    t121 = *(int *)(((int)stk + 32));
                    return t121;
                }
                u122 = *(float *)((a4 + 0x0));
                u123 = *(float *)(((int)stk + 124));
                u124 = *(float *)(((int)stk + 116));
                *(float *)((a4 + 0x0)) = (u122 + u123 * u124);
                u125 = *(float *)(((((int)stk + 4) + 0x78) + 0x0));
                u126 = *(float *)((a4 + 0x8));
                u127 = *(float *)(((((int)stk + 4) + 0x74) + 0x0));
                *(float *)((a4 + 0x8)) = (u126 + u125 * u127);
                t128 = *(int *)((t43 + 0x0));
                u129 = *(float *)((a4 + 0x0));
                u130 = *(float *)((t128 + 0x8));
                u131 = *(float *)((t128 + 0x10));
                u132 = *(float *)(((int)stk + 116));
                *(float *)(((int)stk + 80)) = ((u130 - u129) + u131 * u132);
                u133 = *(float *)((a4 + 0x8));
                t134 = *(int *)((t43 + 0x0));
                u135 = *(float *)((t134 + 0xC));
                u136 = *(float *)((t134 + 0x10));
                u137 = *(float *)(((int)stk + 120));
                *(float *)(((int)stk + 84)) = ((u135 - u133) + u136 * u137);
                t138 = *(int *)(((int)stk + 12));
                FUN_0c034b5e(a4, (((int)stk + 4) + 0x4C), (((int)stk + 4) + 0x70), t138);
                t140 = *(int *)(((int)stk + 12));
                if (t140 == 0) {
                    u141 = *(float *)((a4 + 0x0));
                    u142 = *(float *)(((int)stk + 80));
                    *(float *)(((int)stk + 68)) = (u142 + u141);
                    u143 = *(float *)((a4 + 0x4));
                    *(float *)(((int)stk + 72)) = u143;
                    u144 = *(float *)((a4 + 0x8));
                    u145 = *(float *)(((int)stk + 84));
                    *(float *)(((int)stk + 76)) = (u145 + u144);
                    nlPushUnitMatrix();
                    nlTranslateV(a4);
                    t148 = *(int *)(((int)stk + 8));
                    SetCameraPosVelocity(t148);
                    nlPushMatrix(0x0);
                    FUN_0c078310();
                    nlSqrt((((int)stk + 4) + 0x40), (((int)stk + 4) + 0x40));
                    nlPopMatrix(0x1);
                    *(float *)(((int)stk + 72)) = 5.0f;
                    nlSqrt((((int)stk + 4) + 0x40), (((int)stk + 4) + 0x40));
                    nlPopMatrix(0x1);
                    t156 = *(int *)((t43 + 0x0));
                    t157 = *(int *)((t156 + 0x18));
                    PutCollisionEffect((((int)stk + 4) + 0x40), (a4 + 0xC), (t157 & 0x1));
                }
                *(unsigned int *)(((int)stk + 32)) = 0x1;
                if (t21 == 0) {
                    t160 = *(int *)(((int)stk + 32));
                    t221 = t160;
                } else {
                    t161 = *(int *)((a4 + 0x28));
                    *(unsigned int *)(((int)stk + 20)) = t161;
                    nlPushUnitMatrix();
                    nlTranslateV(a4);
                    t164 = *(int *)(((int)stk + 20));
                    SetCameraPosVelocity(t164);
                    t166 = *(int *)(((int)stk + 12));
                    *(unsigned int *)(((int)stk + 4)) = (0xC27047C + (short)(((((t166 << 2) << 1) + t166) << 2) << 1));
                    t168 = 0x1;
                    t169 = 0x0;
                    while ((int)t169 < (int)0x4) {
                        t168 = t169;
                        t168 = (t168 << 1);
                        t168 = (t168 + t169);
                        t168 = (t168 << 2);
                        t170 = *(int *)(((int)stk + 4));
                        t168 = (signed char)t168;
                        nlSqrt((t170 + t168), ((((int)stk + 4) + 0x3C) + t168));
                        t169 = (t169 + 0x1);
                    }
                    nlPopMatrix(0x1);
                    *(unsigned int *)(((int)stk + 4)) = 0x0;
                    t173 = t168;
                    t174 = t169;
                    u175 = 3.40282347e+38f;
                    for (;;) {
                        t176 = *(int *)(((int)stk + 4));
                        if ((int)t176 >= (int)0x4) break;
                        t177 = *(int *)(((int)stk + 4));
                        t174 = 0xC270A58;
                        *(unsigned int *)(((int)stk + 112)) = ((signed char)(((t177 << 1) + t177) << 2) + (((int)stk + 4) + 0x3C));
                        *(unsigned int *)(((int)stk + 8)) = 0x0;
                        t173 = 0xC270A58;
                        if ((int)t21 > 0) {
                            do {
                                t178 = *(int *)((t173 + 0x0));
                                t179 = FUN_0c03495c((((int)stk + 4) + 0x6C), t178);
                                if (t179 != 0) {
                                    u180 = *(float *)(((int)stk + 128));
                                    if (u175 > u180) {
                                        if (0.0f > u180) {
                                            u175 = u180;
                                            t181 = *(int *)(((((int)stk + 4) + 0x70) + 0x4));
                                            *(unsigned int *)(((((int)stk + 4) + 0x34) + 0x4)) = t181;
                                            t182 = *(int *)(((((int)stk + 4) + 0x70) + 0x0));
                                            *(unsigned int *)(((((int)stk + 4) + 0x34) + 0x0)) = t182;
                                            t183 = *(int *)(((int)stk + 4));
                                            *(unsigned int *)(((int)stk + 16)) = t183;
                                            t184 = *(int *)((t174 + 0x0));
                                            *(unsigned int *)(((int)stk + 24)) = t184;
                                        }
                                    }
                                }
                                t185 = *(int *)(((int)stk + 8));
                                t174 = (t174 + 0x4);
                                *(unsigned int *)(((int)stk + 8)) = (t185 + 0x1);
                                t173 = (t173 + 0x4);
                            } while ((int)(t185 + 0x1) < (int)t21);
                        }
                        t187 = *(int *)(((int)stk + 4));
                        *(unsigned int *)(((int)stk + 4)) = (t187 + 0x1);
                    }
                    if (0.0f > u175) {
                        u188 = *(float *)((a4 + 0x0));
                        u189 = *(float *)(((int)stk + 56));
                        *(float *)((a4 + 0x0)) = (u188 - (u189 * u175));
                        u190 = *(float *)(((((int)stk + 4) + 0x38) + 0x0));
                        u191 = *(float *)((a4 + 0x8));
                        *(float *)((a4 + 0x8)) = (u191 - (u190 * u175));
                        t192 = *(int *)(((int)stk + 16));
                        u193 = *(float *)((a4 + 0x0));
                        u194 = *(float *)((((signed char)(((t192 << 1) + t192) << 2) + (((int)stk + 4) + 0x3C)) + 0x0));
                        *(float *)(((int)stk + 48)) = (u194 - u193);
                        u195 = *(float *)((((signed char)(((t192 << 1) + t192) << 2) + (((int)stk + 4) + 0x3C)) + 0x8));
                        u196 = *(float *)((a4 + 0x8));
                        *(float *)(((int)stk + 52)) = (u195 - u196);
                        t197 = *(int *)(((int)stk + 12));
                        FUN_0c034b5e(a4, (((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x34), t197);
                        t199 = *(int *)(((int)stk + 12));
                        if (t199 == 0) {
                            u200 = *(float *)((a4 + 0x0));
                            u201 = *(float *)(((int)stk + 48));
                            *(float *)(((int)stk + 36)) = (u201 + u200);
                            u202 = *(float *)((a4 + 0x4));
                            *(float *)(((int)stk + 40)) = u202;
                            u203 = *(float *)((a4 + 0x8));
                            u204 = *(float *)(((int)stk + 52));
                            *(float *)(((int)stk + 44)) = (u204 + u203);
                            nlPushUnitMatrix();
                            nlTranslateV(a4);
                            t207 = *(int *)(((int)stk + 20));
                            SetCameraPosVelocity(t207);
                            nlPushMatrix(0x0);
                            FUN_0c078310();
                            nlSqrt((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x20));
                            nlPopMatrix(0x1);
                            *(float *)(((int)stk + 40)) = 5.0f;
                            nlSqrt((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x20));
                            nlPopMatrix(0x1);
                            t215 = *(int *)(((int)stk + 24));
                            t216 = *(int *)((t215 + 0x18));
                            PutCollisionEffect((((int)stk + 4) + 0x20), (a4 + 0xC), (t216 & 0x1));
                        }
                        t220 = 0x1;
                    } else {
                        t219 = *(int *)(((int)stk + 32));
                        t220 = t219;
                    }
                    t221 = t220;
                }
                t224 = t221;
            }
            t227 = t224;
        }
        t230 = t227;
    }
    return t230;
}
