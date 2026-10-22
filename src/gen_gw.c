/* Straight-line functions with calls and guards (batch gen_gw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int carSpreadWheelLoad(float, float, float);
int psgStepBlend(int);
int psgUpdatePartTracks(int);
int FcvPlayBuffer(int, int);
int FcvStoreBuffer(int, int, float);
int GetAverageAngle(int, int, float);
int ndPuru2Start(int, int, int);
int nlArcTan2(float, float);
int nlGetAverageVector(int, int, int, float, float);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int psgEnterState2(int);
int psgPutShadow(int);
float psgRunToPoint(int);
int psgFrameState2(int a4);

int psgFrameState2(int a4)
{
    int t0;
    int t186;
    int t1;
    int t3;
    float u6;
    float u7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t14;
    float u16;
    int t17;
    int t21;
    int t22;
    float u23;
    float u24;
    float u25;
    float u26;
    float u27;
    float u28;
    int t35;
    float u37;
    int t38;
    int t39;
    float u40;
    int t41;
    float u42;
    int t48;
    float u49;
    int t55;
    float u56;
    float u65;
    int t66;
    float u67;
    float u76;
    int t77;
    float u78;
    int t84;
    float u85;
    float u94;
    int t95;
    float u96;
    int t102;
    float u103;
    int t119;
    float u120;
    int t121;
    int t122;
    int t123;
    int t131;
    int t132;
    int t133;
    int t134;
    int t135;
    float u145;
    float u146;
    int t147;
    int t148;
    int t149;
    int t150;
    int t185;
    int t196;
    int t199;
    float t201;
    float u204;
    int t205;
    int t207;
    float u209;
    float u210;
    int t211;
    int t212;
    int t213;
    int t214;
    int t215;
    int t225;
    int t243;
    int t256;
    float u258;
    float u259;
    int t260;
    int t268;
    int t269;
    int t244;
    float u29;
    float u30;
    float u31;
    int stk[13] = {0};

    t0 = *(int *)((a4 + 0x24));
    if (t0 != 0) {
        if (t0 != 1) {
            t186 = t0;
            if (t0 == 2) {
                t1 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t1 & 0xBF);
                nlPushMatrix(0x0);
                t3 = *(signed char *)((a4 + 0x149));
                if ((t3 & 128) != 0) {
                    nlSubVector3op((((int)stk + 4) + 0x4), (0x134 + a4), (a4 + 0x4));
                    nlGetAverageVector((a4 + 0x4), (((int)stk + 4) + 0x4), (((int)stk + 4) + 0x4), 1.0f, 0.25f);
                    u6 = *(float *)0xC2AD200;
                    u7 = *(float *)0xC2AD1F8;
                    t8 = nlArcTan2(u7, u6);
                    *(unsigned int *)(((int)stk + 4)) = t8;
                    t9 = *(int *)(((int)stk + 4));
                    t10 = *(int *)((a4 + 0x10));
                    t11 = GetAverageAngle(t10, t9, 0.199999988f);
                    *(unsigned int *)((a4 + 0x10)) = (short)t11;
                    psgStepBlend(a4);
                    psgPutShadow(a4);
                    t14 = *(int *)((a4 + 0x0));
                    FcvPlayBuffer((a4 + 0x3C), t14);
                } else {
                    u16 = *(float *)((a4 + 0x38));
                    t17 = *(int *)((a4 + 0x34));
                    FcvStoreBuffer(t17, (a4 + 0x3C), u16);
                    nlMultiMatrix(0xC179180);
                    nlRotateAY(0x8000);
                    t21 = *(int *)0xC2AE33C;
                    t22 = *(signed char *)((a4 + 0x14B));
                    if ((t22 & 4) != 0) {
                        u23 = *(float *)((((signed char)(((t21 << 1) + t21) << 2) + 0xC0D5588) + 0x0));
                        u24 = *(float *)((((signed char)(((t21 << 1) + t21) << 2) + 0xC0D5588) + 0x8));
                        u25 = *(float *)((((signed char)(((t21 << 1) + t21) << 2) + 0xC0D5588) + 0x4));
                        u29 = (-u23);
                        u30 = (-u25);
                        u31 = (-u24);
                    } else {
                        u26 = *(float *)((((signed char)(((t21 << 1) + t21) << 2) + 0xC0D5588) + 0x0));
                        u27 = *(float *)((((signed char)(((t21 << 1) + t21) << 2) + 0xC0D5588) + 0x8));
                        u28 = *(float *)((((signed char)(((t21 << 1) + t21) << 2) + 0xC0D5588) + 0x4));
                        u29 = u26;
                        u30 = (-u28);
                        u31 = (-u27);
                    }
                    nlTranslate(u29, u30, u31);
                    psgUpdatePartTracks(a4);
                    t35 = *(int *)((a4 + 0x0));
                    FcvPlayBuffer((a4 + 0x3C), t35);
                    u37 = *(float *)((a4 + 0x38));
                    *(float *)((a4 + 0x38)) = (u37 + 1.0f);
                    t38 = *(int *)((a4 + 0x0));
                    if (t38 != 32) {
                    } else {
                        t39 = *(int *)0xC2AE33C;
                        if (t39 != 0) {
                            if (t39 != 1) {
                                if (t39 != 2) {
                                    if (t39 != 3) {
                                    } else {
                                        u40 = *(float *)((a4 + 0x38));
                                        if ((int)u40 != 40) {
                                            if ((int)u40 != 73) {
                                                if ((int)u40 != 95) {
                                                } else {
                                                    t41 = *(signed char *)((a4 + 0x14B));
                                                    u42 = 1.0f;
                                                    if ((t41 & 4) != 0) {
                                                        u42 = 0.0f;
                                                    }
                                                    carSpreadWheelLoad(u42, 0.75f, 90.0f);
                                                }
                                            } else {
                                                t48 = *(signed char *)((a4 + 0x14B));
                                                u49 = 1.0f;
                                                if ((t48 & 4) != 0) {
                                                    u49 = 0.0f;
                                                }
                                                carSpreadWheelLoad(u49, 0.75f, 60.0f);
                                            }
                                        } else {
                                            t55 = *(signed char *)((a4 + 0x14B));
                                            u56 = 0.0f;
                                            if ((t55 & 4) == 0) {
                                                u56 = 1.0f;
                                            }
                                            carSpreadWheelLoad(u56, 0.75f, 30.0f);
                                        }
                                    }
                                } else {
                                    u65 = *(float *)((a4 + 0x38));
                                    if ((int)u65 == 45) {
                                        t66 = *(signed char *)((a4 + 0x14B));
                                        u67 = 1.0f;
                                        if ((t66 & 4) != 0) {
                                            u67 = 0.0f;
                                        }
                                        carSpreadWheelLoad(u67, 0.75f, 90.0f);
                                    }
                                }
                            } else {
                                u76 = *(float *)((a4 + 0x38));
                                if ((int)u76 != 17) {
                                    if ((int)u76 != 45) {
                                    } else {
                                        t77 = *(signed char *)((a4 + 0x14B));
                                        u78 = 1.0f;
                                        if ((t77 & 4) != 0) {
                                            u78 = 0.0f;
                                        }
                                        carSpreadWheelLoad(u78, 0.75f, 90.0f);
                                    }
                                } else {
                                    t84 = *(signed char *)((a4 + 0x14B));
                                    u85 = 1.0f;
                                    if ((t84 & 4) != 0) {
                                        u85 = 0.0f;
                                    }
                                    carSpreadWheelLoad(u85, 0.75f, 30.0f);
                                }
                            }
                        } else {
                            u94 = *(float *)((a4 + 0x38));
                            if ((int)u94 != 23) {
                                if ((int)u94 != 60) {
                                } else {
                                    t95 = *(signed char *)((a4 + 0x14B));
                                    u96 = 1.0f;
                                    if ((t95 & 4) != 0) {
                                        u96 = 0.0f;
                                    }
                                    carSpreadWheelLoad(u96, 0.75f, 90.0f);
                                }
                            } else {
                                t102 = *(signed char *)((a4 + 0x14B));
                                u103 = 1.0f;
                                if ((t102 & 4) != 0) {
                                    u103 = 0.0f;
                                }
                                carSpreadWheelLoad(u103, 0.75f, 30.0f);
                            }
                        }
                    }
                    t119 = *(int *)((a4 + 0x34));
                    u120 = *(float *)((a4 + 0x38));
                    t121 = *(int *)((t119 + 0x0));
                    if (!((float)(t121 - 1) > u120)) {
                        t122 = *(int *)((a4 + 0x0));
                        if (t122 == 32) {
                            t123 = *(signed char *)0xC1EE278;
                            ndPuru2Start((unsigned char)t123, 0x1000, 0x0);
                        }
                        t131 = *(signed char *)(((0x149 + a4) + 0x0));
                        *(unsigned char *)(((0x149 + a4) + 0x0)) = (t131 | 0x40);
                        *(unsigned int *)0xC2AE33C = 0x0;
                        t132 = *(signed char *)(((0x148 + a4) + 0x0));
                        *(unsigned char *)(((0x148 + a4) + 0x0)) = (t132 | 0x80);
                        t133 = *(int *)0xC2AD590;
                        *(unsigned int *)0xC2AD590 = (t133 & 0xFFFFFFFE);
                        t134 = *(int *)0xC1EE20C;
                        if (t134 == 2) {
                            t135 = *(int *)0xC1EE214;
                            if (t135 != 8) {
                            } else {
                                *(unsigned int *)0xC179120 = 0x1;
                            }
                        }
                    } else {
                        u145 = *(float *)0xC06ED24;
                        u146 = *(float *)((a4 + 0x38));
                        if (!(u145 > u146)) {
                            t147 = *(signed char *)(((0x148 + a4) + 0x0));
                            *(unsigned char *)(((0x148 + a4) + 0x0)) = (t147 | 0x80);
                            t148 = *(int *)0xC2AD590;
                            *(unsigned int *)0xC2AD590 = (t148 & 0xFFFFFFFE);
                            t149 = *(int *)0xC1EE20C;
                            if (t149 == 2) {
                                t150 = *(int *)0xC1EE214;
                                if (t150 == 8) {
                                    *(unsigned int *)0xC179120 = 0x1;
                                }
                            }
                        }
                    }
                }
                t185 = nlPopMatrix(0x1);
                t186 = t185;
            }
            t244 = t186;
        } else {
            nlPushMatrix(0x0);
            t196 = *(signed char *)((a4 + 0x149));
            if ((t196 & 128) != 0) {
                psgPutShadow(a4);
                psgStepBlend(a4);
                t199 = *(int *)((a4 + 0x0));
                FcvPlayBuffer((a4 + 0x3C), t199);
            } else {
                t201 = psgRunToPoint(a4);
                psgPutShadow(a4);
                psgUpdatePartTracks(a4);
                u204 = *(float *)((a4 + 0x38));
                t205 = *(int *)((a4 + 0x34));
                FcvStoreBuffer(t205, (a4 + 0x3C), u204);
                t207 = *(int *)((a4 + 0x0));
                FcvPlayBuffer((a4 + 0x3C), t207);
                u209 = *(float *)((a4 + 0x38));
                u210 = *(float *)(((0x120 + a4) + 0x0));
                *(float *)((a4 + 0x38)) = (u209 + u210);
                t211 = *(int *)((a4 + 0x150));
                t212 = *(int *)(((0x150 + a4) + 0x0));
                t213 = (int)((unsigned int)(t211 + 0x1) & 0xFFFFFFFF);
                *(unsigned int *)(((0x150 + a4) + 0x0)) = ((t212 & 0x0) | ((unsigned int)t213 << 0));
                if (!(3.0f > t201)) {
                    t214 = *(int *)(((0x150 + a4) + 0x0));
                    if ((unsigned int)t214 <= (unsigned int)0x258) {
                    } else {
                        t215 = *(int *)((a4 + 0x24));
                        *(unsigned int *)((a4 + 0x24)) = (t215 + 0x1);
                        *(unsigned int *)(((0x150 + a4) + 0x0)) = 0x0;
                        *(volatile int *)((a4 + 0x24));
                        psgEnterState2(a4);
                    }
                } else {
                    t225 = *(int *)((a4 + 0x24));
                    *(unsigned int *)((a4 + 0x24)) = (t225 + 0x1);
                    *(unsigned int *)(((0x150 + a4) + 0x0)) = 0x0;
                    *(volatile int *)((a4 + 0x24));
                    psgEnterState2(a4);
                }
            }
            t243 = nlPopMatrix(0x1);
            t244 = t243;
        }
        t269 = t244;
    } else {
        nlPushMatrix(0x0);
        psgPutShadow(a4);
        psgUpdatePartTracks(a4);
        t256 = *(int *)((a4 + 0x0));
        FcvPlayBuffer((a4 + 0x3C), t256);
        u258 = *(float *)((a4 + 0x38));
        *(float *)((a4 + 0x38)) = (u258 + 1.0f);
        u259 = *(float *)((a4 + 0x38));
        if (!(u259 > 10.0f)) {
        } else {
            t260 = *(int *)((a4 + 0x24));
            *(unsigned int *)((a4 + 0x24)) = (t260 + 0x1);
            psgEnterState2(a4);
            *(unsigned int *)(((0x150 + a4) + 0x0)) = 0x0;
        }
        t268 = nlPopMatrix(0x1);
        t269 = t268;
    }
    return t269;
}
