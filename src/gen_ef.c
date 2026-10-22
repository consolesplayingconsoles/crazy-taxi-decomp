/* Straight-line functions with calls and guards (batch gen_ef): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0391fc(void);
int FUN_0c049aa8(int, int, float);
int nlSqrt(int, int);
int FUN_0c077210(int, int);
int FUN_0c07b9e0(void);
int FcvPlay(int, int, float);
int GetRotVec(int);
int carBalance(int);
int getYXZrot(int);
int nlArcTan2(float, float);
int nlGetMatrix(int);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutSetFadeColorBase(float, float, float);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSetTranslate(int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int FUN_0c0200e4(int a4);
int Put_Motion2D(int a4, int a5);
int FUN_0c050752(void);

int FUN_0c0200e4(int a4)
{
    int t0;
    int t57;
    int t1;
    int t2;
    int t51;
    int t3;
    int t4;
    int t45;
    int t5;
    int t6;
    int t7;
    int t8;
    int t22;
    int t9;
    int t10;
    int t16;
    int t11;
    int t12;
    int t13;
    int t26;
    int t27;
    int t33;
    int t28;
    int t29;
    int t30;
    int t61;
    int t91;
    int t62;
    int t63;
    int t85;
    int t64;
    int t65;
    int t79;
    int t66;
    int t67;
    int t73;
    int t68;
    int t69;
    int t70;
    int t97;
    int t99;
    int t101;
    int t104;
    int t106;
    int t110;
    int t111;
    int t112;
    int t113;
    float u119;
    int t120;
    int t121;
    int t122;
    int t123;
    int t129;
    int t130;
    int t131;
    int t132;
    int t133;
    int t139;
    int t143;
    int t144;
    int t145;
    int t148;
    int t149;
    int t150;
    int t151;
    float u152;
    int t153;
    float u154;
    int t155;
    float u162;
    float u163;
    float u164;
    float u165;
    int t167;
    int t170;
    int t172;
    int t39;
    int t116;
    int t126;
    int t136;
    int t146;
    int t156;

    t0 = *(int *)0xC179860;
    t57 = 0x0;
    if (t0 == 0) {
        t1 = *(short *)0xC17985A;
        t2 = *(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x86));
        t51 = 0x0;
        if ((int)(unsigned short)(t1 - t2) > (int)0x6800) {
            t3 = *(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x86));
            t4 = *(short *)0xC17985A;
            t45 = 0x0;
            if ((int)(unsigned short)(t4 - t3) < (int)0x9800) {
                t5 = *(short *)0xC179858;
                t6 = *(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x84));
                if ((int)(unsigned short)(t5 - t6) >= (int)0x380) {
                    t7 = *(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x84));
                    t8 = *(short *)0xC179858;
                    t22 = 0x0;
                    if ((int)(unsigned short)(t8 - t7) > (int)0xD000) {
                        t9 = *(short *)0xC17985C;
                        t10 = *(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x88));
                        t16 = 0x1;
                        if ((int)(unsigned short)(t9 - t10) >= (int)0x1800) {
                            t11 = *(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x88));
                            t12 = *(short *)0xC17985C;
                            t13 = 0x0;
                            if ((int)(unsigned short)(t12 - t11) > (int)0xE800) {
                                t13 = 0x1;
                            }
                            t16 = t13;
                        }
                        t22 = t16;
                    }
                    t39 = t22;
                } else {
                    t26 = *(short *)0xC17985C;
                    t27 = *(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x88));
                    t33 = 0x1;
                    if ((int)(unsigned short)(t26 - t27) >= (int)0x1800) {
                        t28 = *(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x88));
                        t29 = *(short *)0xC17985C;
                        t30 = 0x0;
                        if ((int)(unsigned short)(t29 - t28) > (int)0xE800) {
                            t30 = 0x1;
                        }
                        t33 = t30;
                    }
                    t39 = t33;
                }
                t45 = t39;
            }
            t51 = t45;
        }
        t57 = t51;
    }
    t61 = *(int *)0xC179860;
    t91 = 0x0;
    if (t61 == 0) {
        t62 = *(short *)0xC17985A;
        t63 = *(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x86));
        t85 = 0x0;
        if ((int)(unsigned short)(t62 - t63) > (int)0x6800) {
            t64 = *(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x86));
            t65 = *(short *)0xC17985A;
            t79 = 0x0;
            if ((int)(unsigned short)(t65 - t64) < (int)0x9800) {
                t66 = *(short *)0xC17985C;
                t67 = *(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x88));
                t73 = 0x1;
                if ((int)(unsigned short)(t66 - t67) >= (int)0x2000) {
                    t68 = *(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x88));
                    t69 = *(short *)0xC17985C;
                    t70 = 0x0;
                    if ((int)(unsigned short)(t69 - t68) > (int)0xE000) {
                        t70 = 0x1;
                    }
                    t73 = t70;
                }
                t79 = t73;
            }
            t85 = t79;
        }
        t91 = t85;
    }
    nlPushMatrix(0x0);
    nlSetTranslate((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x78));
    t97 = *(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x86));
    nlRotateAY((unsigned short)t97);
    t99 = *(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x84));
    nlRotateAX((unsigned short)t99);
    t101 = *(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x88));
    nlRotateAZ((unsigned short)t101);
    nlPushMatrix(0x0);
    t104 = *(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0xAC));
    nlRotateAX((unsigned short)t104);
    t106 = *(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0xB0));
    nlRotateAZ((unsigned short)t106);
    nlTranslate(0.0f, -2.29999995f, 0.0f);
    nlGetMatrix((0xB4 + ((short)((short)a4 * (short)0x3BC) + 0xC1790CC)));
    if (t57 == 1) {
        t110 = *(int *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x74));
        t111 = *(int *)((t110 + 0x34));
        t116 = t111;
    } else {
        t112 = *(int *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x74));
        t113 = *(int *)((t112 + 0x10));
        t116 = t113;
    }
    nlObjPutUseViewMatrix(t116);
    u119 = *(float *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x11C));
    if (u119 == 0.0f) {
        t120 = *(int *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x74));
        t121 = *(int *)((t120 + 0x14));
        t126 = t121;
    } else {
        t122 = *(int *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x74));
        t123 = *(int *)((t122 + 0x18));
        t126 = t123;
    }
    nlObjPutUseViewMatrix(t126);
    t129 = *(int *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x58));
    if (t129 == 0) {
        t130 = *(int *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x74));
        t131 = *(int *)((t130 + 0x20));
        t136 = t131;
    } else {
        t132 = *(int *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x74));
        t133 = *(int *)((t132 + 0x1C));
        t136 = t133;
    }
    nlObjPutUseViewMatrix(t136);
    t139 = *(int *)0xC179488;
    FUN_0c0391fc();
    GetRotVec((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x30));
    nlPopMatrix(0x1);
    t143 = *(int *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x6C));
    if (t91 == 1) {
        t144 = *(int *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x74));
        t146 = (t144 + 0x24);
    } else {
        t145 = *(int *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x74));
        t146 = t145;
    }
    t148 = t146;
    t149 = t143;
    t150 = 0x0;
    t151 = (0x1A0 + ((short)((short)a4 * (short)0x3BC) + 0xC1790CC));
    for (;;) {
        if ((int)t150 < (int)0x2) {
            u152 = *(float *)(((0x168 + ((short)((short)a4 * (short)0x3BC) + 0xC1790CC)) + 0x0));
            t153 = *(short *)((t151 + 0x82));
            t156 = (t153 + (int)(u152 * 18.2041664f));
        } else {
            u154 = *(float *)(((0x16C + ((short)((short)a4 * (short)0x3BC) + 0xC1790CC)) + 0x0));
            t155 = *(short *)((t151 + 0x82));
            t156 = (t155 + (int)(u154 * 18.2041664f));
        }
        *(unsigned short *)((t151 + 0x82)) = t156;
        nlPushMatrix(0x0);
        u162 = *(float *)((t149 + 0x8));
        u163 = *(float *)((t151 + 0x30));
        u164 = *(float *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x12C));
        u165 = *(float *)((t149 + 0x0));
        nlTranslate(u165, ((u164 - u163) + -0.699999988f), u162);
        t167 = *(short *)((t151 + 0x80));
        nlRotateAY((unsigned short)t167);
        nlSqrt(((signed char)(((t150 << 1) + t150) << 2) + 0xC08A8A4), (t151 + 0x5C));
        t170 = *(short *)((t151 + 0x82));
        nlRotateAX((unsigned short)t170);
        t172 = *(int *)((t148 + 0x0));
        t148 = (t148 + 0x4);
        nlObjPutUseViewMatrix(t172);
        nlPopMatrix(0x1);
        t150 = (t150 + 0x1);
        t151 = (t151 + 0x84);
        t149 = (t149 + 0xC);
        if ((int)t150 >= (int)0x4) {
            break;
        }
    }
    return nlPopMatrix(0x1);
}


int FUN_0c050752(void)
{
    int t0;
    int t11;
    int t13;
    int t16;
    float u19;
    int t29;
    float u31;
    float u32;
    float u36;
    int t40;
    float u42;
    int t44;
    int t46;
    int t55;
    int t56;
    int t57;
    int t60;
    int t63;
    int t64;
    int t65;
    int t74;
    int t75;
    int t89;
    int t90;
    int t91;
    int t100;
    int t101;
    int t114;
    int t115;
    int t116;
    int t118;
    int t49;
    int t80;
    float u82;
    int t69;
    float u71;
    int t106;
    float u108;
    int t95;
    float u97;

    t0 = *(int *)0xC2A720C;
    if (t0 != 2) {
        if (t0 == 3) {
            *(unsigned int *)0xC130468 = 0x1;
        } else {
            if (t0 != 0) {
                if (t0 == 1) {
                    *(unsigned int *)0xC130468 = 0x0;
                } else {
                    *(unsigned int *)0xC130468 = 0x2;
                }
            } else {
                *(unsigned int *)0xC130468 = 0x0;
            }
        }
    } else {
        *(unsigned int *)0xC130468 = 0x1;
    }
    nlObjPutSetFadeColorBase(1.0f, 1.0f, 0.0f);
    nlPushMatrix(0x0);
    t11 = *(int *)0xC130468;
    if (t11 == 0) {
        nlTranslate(-20.0f, 0.0f, -160.0f);
        t13 = *(signed char *)0xC2A72D8;
        nlTranslateV(((signed char)(((t13 << 1) + t13) << 2) + 0xC0CF624));
        nlRotateAY(0x8000);
        t16 = *(int *)0xC2A7208;
        if ((int)t16 <= (int)0x33) {
            nlObjPutSetFadeColor(1.0f, 0.0f, 0.0f);
            nlPushMatrix(0x0);
            u19 = *(float *)0xC2A72C4;
            nlTranslate(0.0f, u19, 0.0f);
            nlRotateAY(0x8000);
            nlObjPutUseViewMatrix(0xC46D618);
            nlPopMatrix(0x1);
        }
        nlObjPutSetFadeColor(1.0f, 1.0f, 0.0f);
        t29 = *(short *)0xC2A72C0;
        nlRotateAY((-(unsigned short)t29));
        u31 = *(float *)0xC2A72C4;
        u32 = *(float *)0xC2A72C8;
        *(float *)0xC2A72C4 = (u31 + u32);
        if (35.0f > (u31 + u32)) {
            *(float *)0xC2A72C4 = 35.0f;
            *(float *)0xC2A72C8 = 0.699999988f;
        }
        u36 = *(float *)0xC2A72C8;
        *(float *)0xC2A72C8 = (u36 - 0.0249999985f);
        FUN_0c07b9e0();
    } else {
        if (t11 == 1) {
            nlTranslateV(0xC2A72CC);
            nlRotateAY(0x4000);
            t40 = *(signed char *)0xC2A72D8;
            nlTranslateV(((signed char)(((t40 << 1) + t40) << 2) + 0xC0CF654));
            t49 = 0x8000;
        } else {
            u42 = *(float *)0xC050A34;
            nlTranslate(u42, 0.0f, -160.0f);
            t44 = *(signed char *)0xC2A72D8;
            nlTranslateV(((signed char)(((t44 << 1) + t44) << 2) + 0xC0CF684));
            t46 = *(short *)0xC2A72C0;
            t49 = ((unsigned short)t46 + 0x8000);
        }
        nlRotateAY(t49);
    }
    t55 = *(int *)0xC2A720C;
    t56 = *(int *)0xC2A7208;
    if (t55 == 1) {
        t57 = *(int *)0xC2A7208;
        if ((int)t57 > (int)0x33) {
            if (t56 == 52) {
                *(unsigned int *)0xC12FFC0 = 0x0;
            }
            nlRotateAY(0x4000);
            t60 = *(int *)0xC12FFC0;
            FcvPlay(0xC9CE170, 0x0, (float)t60);
        } else {
            if (t55 == 3) {
                if ((int)t56 > (int)0xAB) {
                    if (t56 == 0xAC) {
                        *(unsigned int *)0xC12FFC0 = 0x0;
                    }
                    t63 = *(int *)0xC12FFC0;
                    t69 = 0xC954D58;
                    u71 = (float)t63;
                } else {
                    t64 = *(int *)0xC12FFC0;
                    t65 = *(int *)(((t55 << 2) + 0xC12FFFC));
                    t69 = t65;
                    u71 = (float)t64;
                }
                t80 = t69;
                u82 = u71;
            } else {
                t74 = *(int *)0xC12FFC0;
                t75 = *(int *)(((t55 << 2) + 0xC12FFFC));
                t80 = t75;
                u82 = (float)t74;
            }
            FcvPlay(t80, 0x0, u82);
        }
    } else {
        if (t55 == 3) {
            if ((int)t56 > (int)0xAB) {
                if (t56 == 0xAC) {
                    *(unsigned int *)0xC12FFC0 = 0x0;
                }
                t89 = *(int *)0xC12FFC0;
                t95 = 0xC954D58;
                u97 = (float)t89;
            } else {
                t90 = *(int *)0xC12FFC0;
                t91 = *(int *)(((t55 << 2) + 0xC12FFFC));
                t95 = t91;
                u97 = (float)t90;
            }
            t106 = t95;
            u108 = u97;
        } else {
            t100 = *(int *)0xC12FFC0;
            t101 = *(int *)(((t55 << 2) + 0xC12FFFC));
            t106 = t101;
            u108 = (float)t100;
        }
        FcvPlay(t106, 0x0, u108);
    }
    t114 = *(int *)0xC2A720C;
    t115 = *(int *)0xC12FFC0;
    t116 = (t115 + 0x1);
    if (t114 == 4) {
        t116 = (t115 + 0x2);
    }
    t118 = (int)((int)t116 % (int)0xC8);
    *(unsigned int *)0xC12FFC0 = t118;
    nlPopMatrix(0x1);
    return nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
}
