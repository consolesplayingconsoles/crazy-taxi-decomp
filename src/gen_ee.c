/* Straight-line functions with calls and guards (batch gen_ee): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02f220(int);
int FUN_0c0310a0(void);
int FUN_0c0310ae(int);
int FUN_0c0310c0(int);
int FUN_0c031158(int);
int nlSprPut(int, int, int);
int pfColor(int, int, int, int);
float pfLength(int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFont(int);
int pfSetZ(float);
int pfSize(float, float);
int nd_CarSelMain(int a4);

int nd_CarSelMain(int a4)
{
    int t0;
    int t305;
    int t1;
    int t288;
    int t2;
    int t3;
    int t4;
    float u5;
    int t6;
    float u17;
    int t18;
    float u30;
    float u37;
    int t59;
    int t60;
    int t61;
    int t62;
    int t66;
    int t67;
    int t68;
    int t74;
    float u97;
    int t98;
    int t111;
    int t115;
    int t116;
    int t117;
    int t118;
    float t119;
    float u120;
    float u121;
    float u122;
    int t125;
    int t126;
    int t127;
    int t128;
    int t129;
    float u130;
    float u131;
    int t132;
    float u148;
    float u149;
    int t153;
    int t154;
    int t155;
    int t156;
    float u158;
    float u160;
    int t164;
    float u172;
    float u173;
    int t174;
    float t175;
    float u176;
    float u177;
    int t180;
    int t181;
    int t187;
    int t188;
    int t196;
    int t227;
    int t228;
    int t230;
    int t254;
    int t231;
    int t232;
    int t240;
    int t271;
    int t210;
    int t106;
    int t92;
    int t182;
    int t205;
    int t200;
    int t192;
    int t259;
    int t249;
    int t244;
    int t236;
    int stk[34] = {0};

    t0 = *(int *)0xC1EE234;
    t305 = t0;
    if (t0 != 1) {
    } else {
        t1 = *(int *)0xC1EE238;
        t288 = t1;
        if (t1 != 1) {
        } else {
            t2 = *(int *)0xC26E398;
            t3 = *(int *)0xC0ED2AC;
            if (t2 != -1) {
                if (t2 != 0) {
                    if (t2 != 1) {
                        if (t2 != 2) {
                            if (t2 == 3) {
                                if (t3 == 1) {
                                    t4 = *(signed char *)0xC1EE26D;
                                    if (t4 != 0) {
                                        *(unsigned int *)0xC26E398 = 0x1;
                                    } else {
                                        u5 = *(float *)0xC0ED2B4;
                                        *(float *)0xC0ED2B4 = (u5 - 48.0f);
                                        if (!((u5 - 48.0f) > -300.0f)) {
                                            *(float *)0xC0ED2B4 = -300.0f;
                                            t6 = *(int *)0xC0ED2AC;
                                            if (t6 == 2) {
                                                *(unsigned int *)0xC26E398 = 0x4;
                                            } else {
                                                *(unsigned int *)0xC26E398 = 0xFFFFFFFF;
                                            }
                                        }
                                    }
                                } else {
                                    u17 = *(float *)0xC0ED2B4;
                                    *(float *)0xC0ED2B4 = (u17 - 48.0f);
                                    if (!((u17 - 48.0f) > -300.0f)) {
                                        *(float *)0xC0ED2B4 = -300.0f;
                                        t18 = *(int *)0xC0ED2AC;
                                        if (t18 == 2) {
                                            *(unsigned int *)0xC26E398 = 0x4;
                                        } else {
                                            *(unsigned int *)0xC26E398 = 0xFFFFFFFF;
                                        }
                                    }
                                }
                            } else {
                                if (t2 == 4) {
                                    if (t3 == 3) {
                                        *(unsigned int *)0xC26E398 = 0x5;
                                    } else {
                                        u30 = *(float *)0xC0ED2B4;
                                        *(float *)0xC0ED2B4 = (u30 + 48.0f);
                                        if (!(320.0f > (u30 + 48.0f))) {
                                            *(float *)0xC0ED2B4 = 320.0f;
                                        }
                                    }
                                } else {
                                    if (t2 == 5) {
                                        u37 = *(float *)0xC0ED2B4;
                                        *(float *)0xC0ED2B4 = (u37 - 48.0f);
                                        if (!((u37 - 48.0f) > -300.0f)) {
                                            *(float *)0xC0ED2B4 = -300.0f;
                                            *(unsigned int *)0xC26E398 = 0xFFFFFFFF;
                                        }
                                    }
                                }
                            }
                            t92 = t3;
                        } else {
                            if (t3 == 0) {
                                *(unsigned int *)0xC0ED2B0 = 0xB4;
                            }
                            t59 = *(int *)0xC0ED2B0;
                            *(unsigned int *)0xC0ED2B0 = (t59 - 1);
                            if ((int)(t59 - 1) <= 0) {
                                t60 = *(signed char *)0xC1EE269;
                                if (t60 != 0) {
                                    t61 = *(int *)0xC0ED2B0;
                                    *(unsigned int *)0xC0ED2B0 = (t61 + 0x1);
                                } else {
                                    t62 = *(int *)0xC26E398;
                                    *(unsigned int *)0xC26E398 = (t62 + 0x1);
                                }
                            } else {
                                t66 = *(int *)0xC0ED2B0;
                                if ((int)t66 < (int)0xA0) {
                                    t67 = *(signed char *)0xC1EE26D;
                                    if (t67 == 0) {
                                        t68 = *(signed char *)0xC1EE271;
                                        if (t68 != 0) {
                                            *(unsigned int *)0xC26E398 = 0x3;
                                        }
                                    } else {
                                        *(unsigned int *)0xC26E398 = 0x3;
                                    }
                                } else {
                                    t74 = *(signed char *)0xC1EE26D;
                                    if (t74 != 0) {
                                        *(unsigned int *)0xC0ED2B0 = 0xB4;
                                    }
                                }
                            }
                            t92 = 0xC1EE24C;
                        }
                        t106 = t92;
                    } else {
                        u97 = *(float *)0xC0ED2B4;
                        *(float *)0xC0ED2B4 = (u97 + 48.0f);
                        if (!(16.0f > (u97 + 48.0f))) {
                            *(float *)0xC0ED2B4 = 16.0f;
                            *(unsigned int *)0xC0ED2B0 = 0xB4;
                            t98 = *(int *)0xC26E398;
                            *(unsigned int *)0xC26E398 = (t98 + 0x1);
                        }
                        t106 = t3;
                    }
                    t111 = *(int *)0xC26E398;
                    if ((int)t111 >= (int)0x4) {
                        pfSetFont(0x2);
                        pfSize(1.0f, 1.0f);
                        pfSetZ(0.099999994f);
                        t115 = *(int *)0xC1EE210;
                        t116 = *(int *)0xC0ED2A8;
                        t117 = *(int *)((0xC0ED3B4 + (t115 << 2)));
                        t118 = *(int *)(((t116 << 2) + t117));
                        t119 = pfLength(t118);
                        u120 = *(float *)0xC0ED2B4;
                        u121 = *(float *)0xC031924;
                        u122 = *(float *)0xC031928;
                        pfLocate((u120 - (t119 * u121)), u122);
                        pfColor(0xFFFFFF7F, 0xFF7F7F00, 0xFFFFFF00, 0xFF7F7F00);
                        t125 = *(int *)0xC1EE210;
                        t126 = *(int *)0xC0ED2A8;
                        t127 = *(int *)((0xC0ED3B4 + (t125 << 2)));
                        t128 = *(int *)(((t126 << 2) + t127));
                        t129 = pfPuts(t128);
                        t182 = t129;
                    } else {
                        *(unsigned int *)(((int)stk + 12)) = 0x7A;
                        u130 = *(float *)0xC0ED2B4;
                        *(float *)(((int)stk + 16)) = u130;
                        u131 = *(float *)0xC0ED2B8;
                        *(float *)(((int)stk + 20)) = u131;
                        *(float *)(((int)stk + 24)) = 0.299999982f;
                        *(float *)(((int)stk + 32)) = 1.0f;
                        *(float *)(((int)stk + 28)) = 1.0f;
                        *(float *)(((int)stk + 40)) = 0.0f;
                        *(float *)(((int)stk + 36)) = 0.0f;
                        *(float *)(((int)stk + 48)) = 1.0f;
                        *(float *)(((int)stk + 44)) = 1.0f;
                        *(unsigned int *)(((int)stk + 52)) = 0x0;
                        *(float *)(((int)stk + 56)) = 1.0f;
                        *(unsigned int *)(((int)stk + 64)) = 0x725;
                        *(unsigned int *)(((int)stk + 60)) = 0x0;
                        t132 = *(int *)0xC1EE210;
                        if (t132 != 2) {
                            nlSprPut((((int)stk + 8) + 0x4), t106, 0xB4);
                        }
                        pfSetFont(0x0);
                        u148 = *(float *)0xC0ED2B8;
                        u149 = *(float *)0xC0ED2B4;
                        pfLocate(u149, (u148 + 130.0f));
                        pfSize(1.0f, 1.0f);
                        pfColor(0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00);
                        t153 = *(int *)0xC1EE210;
                        t154 = *(int *)0xC0ED2A8;
                        t155 = *(int *)((0xC0ED3B4 + (t153 << 2)));
                        t156 = *(int *)(((t154 << 2) + t155));
                        pfPuts(t156);
                        u158 = *(float *)0xC26E39C;
                        FUN_0c0310a0();
                        u160 = u158;
                        if (0.0f > u158) {
                            u160 = 0.0f;
                        }
                        if (!(10000.0f > u160)) {
                            FUN_0c031158((int)(u160 / 10000.0f));
                            FUN_0c0310ae(0x2E);
                            *(unsigned int *)(((int)stk + 8)) = (int)(u160 * 0.00999999978f);
                            t164 = (int)((int)(int)(u160 * 0.00999999978f) % (int)0x64);
                            FUN_0c031158(t164);
                            FUN_0c0310c0(0xC08D6D8);
                        } else {
                            FUN_0c031158((int)(u160 * 0.099999994f));
                            FUN_0c0310ae(0x6D);
                        }
                        u172 = *(float *)0xC0ED2B8;
                        u173 = *(float *)0xC0318F8;
                        *(float *)(((int)stk + 4)) = (u172 + u173);
                        t174 = *(int *)0xC08D678;
                        t175 = pfLength(t174);
                        u176 = *(float *)0xC0ED2B4;
                        u177 = *(float *)0xC031904;
                        pfLocate(((u176 - t175) + u177), (u172 + u173));
                        pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
                        t180 = *(int *)0xC08D678;
                        t181 = pfPuts(t180);
                        t182 = t181;
                    }
                    t210 = t182;
                } else {
                    if (t3 == 2) {
                        *(unsigned int *)0xC26E398 = 0x4;
                        *(float *)0xC0ED2B4 = -300.0f;
                        *(float *)0xC0ED2B8 = 128.0f;
                        t205 = 0xC031608;
                    } else {
                        if (t3 == 1) {
                            t187 = *(signed char *)0xC1EE26D;
                            if (t187 != 0) {
                                *(unsigned int *)0xC26E398 = 0x1;
                                *(float *)0xC0ED2B4 = -300.0f;
                                *(float *)0xC0ED2B8 = 128.0f;
                                t192 = 0xC031608;
                            } else {
                                t188 = t3;
                                if (t3 != 4) {
                                } else {
                                    *(unsigned int *)0xC26E398 = 0x1;
                                    *(unsigned int *)0xC0ED2AC = 0x0;
                                    *(float *)0xC0ED2B4 = -300.0f;
                                    *(float *)0xC0ED2B8 = 128.0f;
                                    t188 = 0xC031608;
                                }
                                t192 = t188;
                            }
                            t200 = t192;
                        } else {
                            t196 = t3;
                            if (t3 != 4) {
                            } else {
                                *(unsigned int *)0xC26E398 = 0x1;
                                *(unsigned int *)0xC0ED2AC = 0x0;
                                *(float *)0xC0ED2B4 = -300.0f;
                                *(float *)0xC0ED2B8 = 128.0f;
                                t196 = 0xC031608;
                            }
                            t200 = t196;
                        }
                        t205 = t200;
                    }
                    t210 = t205;
                }
                t271 = t210;
            } else {
                t227 = *(int *)0xC0ED2A8;
                if (t227 != a4) {
                    t228 = FUN_0c02f220(a4);
                    if (t228 == -1) {
                    } else {
                        *(unsigned int *)0xC0ED2A8 = a4;
                    }
                    t259 = t228;
                } else {
                    t230 = *(int *)0xC1EE808;
                    t254 = t2;
                    if (t230 != a4) {
                    } else {
                        if (t3 == 2) {
                            *(unsigned int *)0xC26E398 = 0x4;
                            *(float *)0xC0ED2B4 = -300.0f;
                            *(float *)0xC0ED2B8 = 128.0f;
                            t249 = 0xC031608;
                        } else {
                            if (t3 == 1) {
                                t231 = *(signed char *)0xC1EE26D;
                                if (t231 != 0) {
                                    *(unsigned int *)0xC26E398 = 0x1;
                                    *(float *)0xC0ED2B4 = -300.0f;
                                    *(float *)0xC0ED2B8 = 128.0f;
                                    t236 = 0xC031608;
                                } else {
                                    t232 = t3;
                                    if (t3 != 4) {
                                    } else {
                                        *(unsigned int *)0xC26E398 = 0x1;
                                        *(unsigned int *)0xC0ED2AC = 0x0;
                                        *(float *)0xC0ED2B4 = -300.0f;
                                        *(float *)0xC0ED2B8 = 128.0f;
                                        t232 = 0xC031608;
                                    }
                                    t236 = t232;
                                }
                                t244 = t236;
                            } else {
                                t240 = t3;
                                if (t3 != 4) {
                                } else {
                                    *(unsigned int *)0xC26E398 = 0x1;
                                    *(unsigned int *)0xC0ED2AC = 0x0;
                                    *(float *)0xC0ED2B4 = -300.0f;
                                    *(float *)0xC0ED2B8 = 128.0f;
                                    t240 = 0xC031608;
                                }
                                t244 = t240;
                            }
                            t249 = t244;
                        }
                        t254 = t249;
                    }
                    t259 = t254;
                }
                t271 = t259;
            }
            t288 = t271;
        }
        t305 = t288;
    }
    return t305;
}
