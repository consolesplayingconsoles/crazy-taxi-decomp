/* Straight-line functions with calls and guards (batch gen_wh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Chat_Getoff(int);
int FcvStoreBuffer(int, int, float);
int Psg_SetMoveSpeed(int, float);
int psgPickExitSide(int);
int rinRand(void);
int psgEnterState4(int a4, int a5);
struct o108_float { char p[0x108]; float v; };
struct o10C_float { char p[0x10C]; float v; };
struct o110_int { char p[0x110]; int v; };
struct o110_uint { char p[0x110]; unsigned int v; };
struct o114_float { char p[0x114]; float v; };
struct o118_int { char p[0x118]; int v; };
struct o120_float { char p[0x120]; float v; };
struct o124_uint { char p[0x124]; unsigned int v; };
struct o128_uint { char p[0x128]; unsigned int v; };
struct o148_int { char p[0x148]; int v; };
struct o148_uint { char p[0x148]; unsigned int v; };
struct o149_uchar { char p[0x149]; unsigned char v; };
struct o14B_uchar { char p[0x14B]; unsigned char v; };
struct o154_int { char p[0x154]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };



int psgEnterState4(int a4, int a5)
{
    int t36;
    int t51;
    int t65;
    int t83;
    int t84;
    int t88;
    int t94;
    int t114;
    int t115;
    int t119;
    int t125;
    int t136;
    int t148;
    int t150;
    int t154;
    int t160;
    int t192;
    int t203;
    int t205;
    int t228;
    int t242;
    int t266;
    int t267;
    int t336;
    int t365;
    int t377;
    int t389;
    int t390;
    int t403;
    int t415;
    int t434;
    int t495;
    int t518;
    int t528;
    int t537;
    int t581;
    int t590;
    int t612;
    int t33;
    int t106;
    int t107;
    int t157;
    int t163;
    int t264;
    int t290;
    int t291;
    int t315;
    int t378;
    int t379;
    int t380;
    int t469;
    int t507;
    int t508;
    int t514;
    int t597;
    int stk[156];

    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x228 + ((int)stk + 4))) = *(struct mv8 *)(0xC0D5CC0); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x208 + ((int)stk + 4))) = *(struct mv8 *)(0xC0D5CE0); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x1FC + ((int)stk + 4))) = *(struct mv3 *)(0xC0D5D00); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x1F0 + ((int)stk + 4))) = *(struct mv3 *)(0xC0D5D0C); }
    *(unsigned int *)(((int)stk + 4)) = 0x3;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x1E4 + ((int)stk + 4))) = *(struct mv3 *)(0xC0D5D18); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x1D8 + ((int)stk + 4))) = *(struct mv3 *)(0xC0D5D24); }
    *(unsigned int *)(((int)stk + 16)) = 0x3;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x1CC + ((int)stk + 4))) = *(struct mv3 *)(0xC0D5D30); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x1C0 + ((int)stk + 4))) = *(struct mv3 *)(0xC0D5D3C); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x1B4 + ((int)stk + 4))) = *(struct mv3 *)(0xC0D5D48); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x1A8 + ((int)stk + 4))) = *(struct mv3 *)(0xC0D5D54); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x19C + ((int)stk + 4))) = *(struct mv3 *)(0xC0D5D60); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x190 + ((int)stk + 4))) = *(struct mv3 *)(0xC0D5D6C); }
    { struct mv2 { int w[2]; }; *(struct mv2 *)((0x188 + ((int)stk + 4))) = *(struct mv2 *)(0xC0D5D78); }
    { struct mv2 { int w[2]; }; *(struct mv2 *)((0x180 + ((int)stk + 4))) = *(struct mv2 *)(0xC0D5D80); }
    { struct mv2 { int w[2]; }; *(struct mv2 *)((0x178 + ((int)stk + 4))) = *(struct mv2 *)(0xC0D5D88); }
    { struct mv2 { int w[2]; }; *(struct mv2 *)((0x170 + ((int)stk + 4))) = *(struct mv2 *)(0xC0D5D90); }
    { struct mv2 { int w[2]; }; *(struct mv2 *)((0x168 + ((int)stk + 4))) = *(struct mv2 *)(0xC0D5D98); }
    { struct mv2 { int w[2]; }; *(struct mv2 *)((0x160 + ((int)stk + 4))) = *(struct mv2 *)(0xC0D5DA0); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((0x150 + ((int)stk + 4))) = *(struct mv4 *)(0xC0D5DA8); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((0x140 + ((int)stk + 4))) = *(struct mv4 *)(0xC0D5DB8); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((0x130 + ((int)stk + 4))) = *(struct mv4 *)(0xC0D5DC8); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((0x120 + ((int)stk + 4))) = *(struct mv4 *)(0xC0D5DD8); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((0x110 + ((int)stk + 4))) = *(struct mv4 *)(0xC0D5DE8); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((0x100 + ((int)stk + 4))) = *(struct mv4 *)(0xC0D5DF8); }
    { struct mv9 { int w[9]; }; *(struct mv9 *)((0xDC + ((int)stk + 4))) = *(struct mv9 *)(0xC0D5E08); }
    { struct mv9 { int w[9]; }; *(struct mv9 *)((0xB8 + ((int)stk + 4))) = *(struct mv9 *)(0xC0D5E2C); }
    { struct mv9 { int w[9]; }; *(struct mv9 *)((0x94 + ((int)stk + 4))) = *(struct mv9 *)(0xC0D5E50); }
    { struct mv9 { int w[9]; }; *(struct mv9 *)((((int)stk + 4) + 0x70)) = *(struct mv9 *)(0xC0D5E74); }
    { struct mv9 { int w[9]; }; *(struct mv9 *)((((int)stk + 4) + 0x4C)) = *(struct mv9 *)(0xC0D5E98); }
    { struct mv9 { int w[9]; }; *(struct mv9 *)((((int)stk + 4) + 0x28)) = *(struct mv9 *)(0xC0D5EBC); }
    *(unsigned int *)(((int)stk + 8)) = 0x3;
    *(unsigned int *)(((int)stk + 12)) = 0x9;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x1C)) = *(struct mv3 *)(0xC0D5EE0); }
    if (a5 != 0) {
        if (a5 == 1) {
            *(unsigned int *)((a4 + 0x34)) = ((((struct o4_int *)0xC2AE348)->v));
            (((struct o38_float *)(a4))->v) = 0.0f;
            (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0x7F);
            (((struct o108_float *)(a4))->v) = 0.0f;
            (((struct o10C_float *)(a4))->v) = 0.0f;
            (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
            (((struct o124_uint *)(a4))->v) = ((((struct oC_int *)0xC2AE348)->v));
            (((struct o128_uint *)(a4))->v) = ((((struct o14_int *)0xC2AE348)->v));
            t612 = 0x128;
        } else {
            t612 = a5;
            if (a5 == 2) {
                FcvStoreBuffer(0xC9EF530, (a4 + 0x3C), 0.0f);
                (((struct o110_uint *)(a4))->v) = (*(int *)(((((*(int *)((a4 + 0x0))) - 23) << 2) + 0xC0D5690)));
                (((struct o114_float *)(a4))->v) = 5.0f;
                FcvStoreBuffer(((((struct o110_int *)(a4))->v)), ((((struct o118_int *)(a4))->v)), ((((struct o114_float *)(a4))->v)));
                (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) | 0x80);
                (((struct o108_float *)(a4))->v) = 0.0f;
                (((struct o10C_float *)(a4))->v) = 1e+01f;
                (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
                (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) | 0x40);
                t612 = (Psg_SetMoveSpeed(a4, 0.0f));
            }
        }
    } else {
        *(unsigned int *)0xC13EEE4 = 0x0;
        if ((((((struct o0_int *)0xC1EE20C)->v)) == 2) && (t33 = (((struct o8_int *)0xC1EE20C)->v), t33 == 14)) {
            t36 = (((struct o154_int *)(a4))->v);
            if ((t36 != 0) && ((t36 != 1) && ((t36 != 3) && (t36 != 5)))) {
                (((struct o14B_uchar *)(a4))->v) = ((*(signed char *)(((0x14B + a4) + 0x0))) & 0xFB);
            } else {
                (((struct o14B_uchar *)(a4))->v) = ((*(signed char *)(((0x14B + a4) + 0x0))) | 0x4);
            }
        } else {
            (((struct o148_uint *)(a4))->v) = ((((((struct o148_int *)(a4))->v)) & 0xFBFFFFFF) | ((unsigned int)((int)((unsigned int)(psgPickExitSide(a4)) & 0x1)) << 26));
        }
        t51 = rinRand();
        if (((int)(((unsigned int)((((struct o148_int *)(a4))->v)) >> 21) & 0x3)) != 0) {
            t65 = (int)((int)t51 % (int)(*(int *)(((int)stk + 16))));
            if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                (((struct o110_uint *)(a4))->v) = (*(int *)((((t65 << 2) + (0x1E4 + ((int)stk + 4))) + 0x0)));
            } else {
                (((struct o110_uint *)(a4))->v) = (*(int *)((((t65 << 2) + (0x1D8 + ((int)stk + 4))) + 0x0)));
            }
            (((struct o8_uint *)0xC2AE348)->v) = 0xC0D3068;
            (((struct o10_uint *)0xC2AE348)->v) = 0xC0D3068;
        } else {
            if (((((struct o4_int *)0xC1EE20C)->v)) != 2) {
                t83 = (int)((int)t51 % (int)0x7);
                t84 = (int)((int)t51 % (int)0x8);
                if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                    t88 = *(int *)((a4 + 0x0));
                    if ((t88 != 25) && ((t88 != 26) && ((t88 != 28) && ((t88 != 29) && ((t88 != 31) && ((t88 != 32) && ((t88 != 33) && ((t88 != 36) && ((t88 != 37) && ((t88 != 40) && ((t88 != 41) && ((t88 != 42) && ((t88 != 45) && ((t88 != 49) && ((t88 != 50) && ((t88 != 53) && ((t88 != 54) && ((t88 != 55) && (t88 != 57))))))))))))))))))) {
                        (((struct o110_uint *)(a4))->v) = (*(int *)((((t84 << 2) + (0x228 + ((int)stk + 4))) + 0x0)));
                    } else {
                        (((struct o110_uint *)(a4))->v) = (*(int *)((((t83 << 2) + (0x228 + ((int)stk + 4))) + 0x0)));
                    }
                } else {
                    t94 = *(int *)((a4 + 0x0));
                    if ((t94 != 25) && ((t94 != 26) && ((t94 != 28) && ((t94 != 29) && ((t94 != 31) && ((t94 != 32) && ((t94 != 33) && ((t94 != 36) && ((t94 != 37) && ((t94 != 40) && ((t94 != 41) && ((t94 != 42) && ((t94 != 45) && ((t94 != 49) && ((t94 != 50) && ((t94 != 53) && ((t94 != 54) && ((t94 != 55) && (t94 != 57))))))))))))))))))) {
                        (((struct o110_uint *)(a4))->v) = (*(int *)((((t84 << 2) + (0x208 + ((int)stk + 4))) + 0x0)));
                    } else {
                        (((struct o110_uint *)(a4))->v) = (*(int *)((((t83 << 2) + (0x208 + ((int)stk + 4))) + 0x0)));
                    }
                }
            } else {
                if ((((((struct o8_int *)0xC1EE20C)->v)) != 14) && ((t106 = (((struct o8_int *)0xC1EE20C)->v), t106 != 10) && (t107 = (((struct o8_int *)0xC1EE20C)->v), t107 != 11))) {
                    t114 = (int)((int)t51 % (int)0x7);
                    t115 = (int)((int)t51 % (int)0x8);
                    if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                        t119 = *(int *)((a4 + 0x0));
                        if ((t119 != 25) && ((t119 != 26) && ((t119 != 28) && ((t119 != 29) && ((t119 != 31) && ((t119 != 32) && ((t119 != 33) && ((t119 != 36) && ((t119 != 37) && ((t119 != 40) && ((t119 != 41) && ((t119 != 42) && ((t119 != 45) && ((t119 != 49) && ((t119 != 50) && ((t119 != 53) && ((t119 != 54) && ((t119 != 55) && (t119 != 57))))))))))))))))))) {
                            (((struct o110_uint *)(a4))->v) = (*(int *)((((t115 << 2) + (0x228 + ((int)stk + 4))) + 0x0)));
                        } else {
                            (((struct o110_uint *)(a4))->v) = (*(int *)((((t114 << 2) + (0x228 + ((int)stk + 4))) + 0x0)));
                        }
                    } else {
                        t125 = *(int *)((a4 + 0x0));
                        if ((t125 != 25) && ((t125 != 26) && ((t125 != 28) && ((t125 != 29) && ((t125 != 31) && ((t125 != 32) && ((t125 != 33) && ((t125 != 36) && ((t125 != 37) && ((t125 != 40) && ((t125 != 41) && ((t125 != 42) && ((t125 != 45) && ((t125 != 49) && ((t125 != 50) && ((t125 != 53) && ((t125 != 54) && ((t125 != 55) && (t125 != 57))))))))))))))))))) {
                            (((struct o110_uint *)(a4))->v) = (*(int *)((((t115 << 2) + (0x208 + ((int)stk + 4))) + 0x0)));
                        } else {
                            (((struct o110_uint *)(a4))->v) = (*(int *)((((t114 << 2) + (0x208 + ((int)stk + 4))) + 0x0)));
                        }
                    }
                } else {
                    t136 = (((struct o8_int *)0xC1EE20C)->v);
                    if (t136 == 14) {
                        if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                            (((struct o110_uint *)(a4))->v) = 0xC94DB88;
                        } else {
                            (((struct o110_uint *)(a4))->v) = 0xC94F70C;
                        }
                    } else {
                        if (t136 == 11) {
                            if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                                (((struct o110_uint *)(a4))->v) = 0xC94AA20;
                            } else {
                                (((struct o110_uint *)(a4))->v) = 0xC94C2D4;
                            }
                        } else {
                            t148 = (int)((int)t51 % (int)0x2);
                            t150 = (int)((int)t51 % (int)(*(int *)(((int)stk + 4))));
                            if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                                t154 = *(int *)((a4 + 0x0));
                                if ((t154 != 25) && ((t154 != 26) && ((t154 != 28) && ((t154 != 29) && ((t154 != 31) && ((t154 != 32) && ((t154 != 33) && ((t154 != 36) && ((t154 != 37) && ((t154 != 40) && ((t154 != 41) && ((t154 != 42) && ((t154 != 45) && ((t154 != 49) && ((t154 != 50) && ((t154 != 53) && ((t154 != 54) && ((t154 != 55) && (t154 != 57))))))))))))))))))) {
                                    t157 = (*(int *)((((t150 << 2) + (0x1FC + ((int)stk + 4))) + 0x0)));
                                } else {
                                    t157 = (*(int *)((((t148 << 2) + (0x1FC + ((int)stk + 4))) + 0x0)));
                                }
                                (((struct o110_uint *)(a4))->v) = t157;
                            } else {
                                t160 = *(int *)((a4 + 0x0));
                                if ((t160 != 25) && ((t160 != 26) && ((t160 != 28) && ((t160 != 29) && ((t160 != 31) && ((t160 != 32) && ((t160 != 33) && ((t160 != 36) && ((t160 != 37) && ((t160 != 40) && ((t160 != 41) && ((t160 != 42) && ((t160 != 45) && ((t160 != 49) && ((t160 != 50) && ((t160 != 53) && ((t160 != 54) && ((t160 != 55) && (t160 != 57))))))))))))))))))) {
                                    t163 = (*(int *)((((t150 << 2) + (0x1F0 + ((int)stk + 4))) + 0x0)));
                                } else {
                                    t163 = (*(int *)((((t148 << 2) + (0x1F0 + ((int)stk + 4))) + 0x0)));
                                }
                                (((struct o110_uint *)(a4))->v) = t163;
                            }
                        }
                    }
                }
            }
            t192 = (((struct o110_int *)(a4))->v);
            if ((t192 != 0xC962F0C) && (t192 != 0xC9659C0)) {
                (((struct o8_uint *)0xC2AE348)->v) = 0xC0D3068;
                (((struct o10_uint *)0xC2AE348)->v) = 0xC0D3068;
            } else {
                (((struct o8_uint *)0xC2AE348)->v) = 0xC0D3068;
                (((struct o10_uint *)0xC2AE348)->v) = 0xC0D58C0;
            }
        }
        (((struct o0_uint *)0xC2AE348)->v) = ((((struct o110_int *)(a4))->v));
        t203 = rinRand();
        t205 = (int)(((unsigned int)((((struct o148_int *)(a4))->v)) >> 21) & 0x3);
        if (t205 != 0) {
            if (t205 == 1) {
                t228 = (int)((int)t203 % (int)0x4);
                if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                    (((struct o4_uint *)0xC2AE348)->v) = (*(int *)((((t228 << 2) + (0x150 + ((int)stk + 4))) + 0x0)));
                    (((struct oC_uint *)0xC2AE348)->v) = (*(int *)((((0x140 + ((int)stk + 4)) + (t228 << 2)) + 0x0)));
                    (((struct o14_uint *)0xC2AE348)->v) = (*(int *)((((t228 << 2) + (0x130 + ((int)stk + 4))) + 0x0)));
                } else {
                    (((struct o4_uint *)0xC2AE348)->v) = (*(int *)((((t228 << 2) + (0x120 + ((int)stk + 4))) + 0x0)));
                    (((struct oC_uint *)0xC2AE348)->v) = (*(int *)((((0x110 + ((int)stk + 4)) + (t228 << 2)) + 0x0)));
                    (((struct o14_uint *)0xC2AE348)->v) = (*(int *)((((t228 << 2) + (0x100 + ((int)stk + 4))) + 0x0)));
                }
            } else {
                if (t205 == 2) {
                    t242 = *(int *)((a4 + 0x0));
                    if (t242 != 32) {
                        if ((t242 != 33) && ((t242 != 35) && (t242 != 36))) {
                            *(unsigned int *)(((int)stk + 4)) = (((int)((int)t203 % (int)(*(int *)(((int)stk + 12))))) << 2);
                            if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                                (((struct o4_uint *)0xC2AE348)->v) = (*(int *)((((*(int *)(((int)stk + 4))) + (0xDC + ((int)stk + 4))) + 0x0)));
                                (((struct oC_uint *)0xC2AE348)->v) = (*(int *)((((*(int *)(((int)stk + 4))) + (0xB8 + ((int)stk + 4))) + 0x0)));
                                t264 = (*(int *)(((0x94 + ((int)stk + 4)) + (*(int *)(((int)stk + 4))))));
                            } else {
                                (((struct o4_uint *)0xC2AE348)->v) = (*(int *)((((*(int *)(((int)stk + 4))) + (((int)stk + 4) + 0x70)) + 0x0)));
                                (((struct oC_uint *)0xC2AE348)->v) = (*(int *)((((*(int *)(((int)stk + 4))) + (((int)stk + 4) + 0x4C)) + 0x0)));
                                t264 = (*(int *)((((*(int *)(((int)stk + 4))) + (((int)stk + 4) + 0x28)) + 0x0)));
                            }
                            (((struct o14_uint *)0xC2AE348)->v) = t264;
                        } else {
                            t266 = (int)((int)t203 % (int)0x8);
                            t267 = t266;
                            if ((int)t266 >= (int)0x3) {
                                t267 = (t266 + 0x1);
                            }
                            if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                                (((struct o4_uint *)0xC2AE348)->v) = (*(int *)((((t267 << 2) + (0xDC + ((int)stk + 4))) + 0x0)));
                                (((struct oC_uint *)0xC2AE348)->v) = (*(int *)((((0xB8 + ((int)stk + 4)) + (t267 << 2)) + 0x0)));
                                (((struct o14_uint *)0xC2AE348)->v) = (*(int *)((((t267 << 2) + (0x94 + ((int)stk + 4))) + 0x0)));
                            } else {
                                (((struct o4_uint *)0xC2AE348)->v) = (*(int *)((((t267 << 2) + (((int)stk + 4) + 0x70)) + 0x0)));
                                (((struct oC_uint *)0xC2AE348)->v) = (*(int *)((((((int)stk + 4) + 0x4C) + (t267 << 2)) + 0x0)));
                                (((struct o14_uint *)0xC2AE348)->v) = (*(int *)((((t267 << 2) + (((int)stk + 4) + 0x28)) + 0x0)));
                            }
                        }
                    } else {
                        if (((((((struct o4_int *)0xC1EE20C)->v)) == 2) && (t290 = (((struct o8_int *)0xC1EE20C)->v), t290 == 14)) || (t291 = *(signed char *)((a4 + 0x14B)), (t291 & 4) != 0)) {
                            (((struct o4_uint *)0xC2AE348)->v) = 0xC9944D8;
                        } else {
                            (((struct o4_uint *)0xC2AE348)->v) = 0xC99697C;
                        }
                        (((struct oC_uint *)0xC2AE348)->v) = 0xC0D3068;
                        (((struct o14_uint *)0xC2AE348)->v) = 0xC0D3068;
                    }
                }
            }
        } else {
            if ((((((struct o4_int *)0xC1EE20C)->v)) == 2) && (t315 = (((struct o8_int *)0xC1EE20C)->v), t315 == 14)) {
                t336 = (int)((int)t203 % (int)0x2);
                (((struct o4_uint *)0xC2AE348)->v) = (*(int *)((((t336 << 2) + (0x188 + ((int)stk + 4))) + 0x0)));
                (((struct oC_uint *)0xC2AE348)->v) = (*(int *)((((0x180 + ((int)stk + 4)) + (t336 << 2)) + 0x0)));
                (((struct o14_uint *)0xC2AE348)->v) = (*(int *)(((0x178 + ((int)stk + 4)) + (t336 << 2))));
            } else {
                if (((*(signed char *)((a4 + 0x14B))) & 4) == 0) {
                    if (((((struct o0_int *)0xC2AE348)->v)) == 0xC9702C0) {
                        if ((*(int *)((a4 + 0x0))) == 52) {
                            (((struct o4_uint *)0xC2AE348)->v) = 0xC9B38F4;
                            (((struct oC_uint *)0xC2AE348)->v) = 0xC0D5998;
                            (((struct o14_uint *)0xC2AE348)->v) = 0xC0D5998;
                        } else {
                            t365 = (int)((int)t203 % (int)0x2);
                            (((struct o4_uint *)0xC2AE348)->v) = (*(int *)((((t365 << 2) + (0x170 + ((int)stk + 4))) + 0x0)));
                            (((struct oC_uint *)0xC2AE348)->v) = (*(int *)((((0x168 + ((int)stk + 4)) + (t365 << 2)) + 0x0)));
                            (((struct o14_uint *)0xC2AE348)->v) = (*(int *)((((t365 << 2) + (0x160 + ((int)stk + 4))) + 0x0)));
                        }
                    } else {
                        t377 = *(int *)0xC2AD000;
                        if (((((((struct o4_int *)0xC1EE20C)->v)) == 2) && (t378 = (((struct o8_int *)0xC1EE20C)->v), t378 == 10)) || ((t379 = (((struct o8_int *)0xC1EE20C)->v), t379 == 14) || (t380 = (((struct o8_int *)0xC1EE20C)->v), t380 == 11))) {
                            if (t377 != 3) {
                                t389 = *(int *)((a4 + 0x0));
                                if ((t389 != 23) && ((t389 != 27) && ((t389 != 29) && ((t389 != 30) && ((t389 != 34) && ((t389 != 39) && ((t389 != 40) && ((t389 != 43) && ((t389 != 50) && ((t389 != 54) && (t389 != 56))))))))))) {
                                    t390 = (int)((int)t203 % (int)0x2);
                                    (((struct o4_uint *)0xC2AE348)->v) = (*(int *)((((t390 << 2) + (0x170 + ((int)stk + 4))) + 0x0)));
                                    (((struct oC_uint *)0xC2AE348)->v) = (*(int *)((((0x168 + ((int)stk + 4)) + (t390 << 2)) + 0x0)));
                                    (((struct o14_uint *)0xC2AE348)->v) = (*(int *)((((t390 << 2) + (0x160 + ((int)stk + 4))) + 0x0)));
                                } else {
                                    (((struct o4_uint *)0xC2AE348)->v) = (*(int *)(((int)stk + 436)));
                                    (((struct oC_uint *)0xC2AE348)->v) = (*(int *)(((int)stk + 424)));
                                    (((struct o14_uint *)0xC2AE348)->v) = (*(int *)(((int)stk + 412)));
                                }
                            } else {
                                t403 = (int)((int)t203 % (int)0x2);
                                (((struct o4_uint *)0xC2AE348)->v) = (*(int *)((((t403 << 2) + (0x170 + ((int)stk + 4))) + 0x0)));
                                (((struct oC_uint *)0xC2AE348)->v) = (*(int *)((((0x168 + ((int)stk + 4)) + (t403 << 2)) + 0x0)));
                                (((struct o14_uint *)0xC2AE348)->v) = (*(int *)((((t403 << 2) + (0x160 + ((int)stk + 4))) + 0x0)));
                            }
                        } else {
                            if (t377 == 3) {
                                t415 = *(int *)((a4 + 0x0));
                                if (t415 != 24) {
                                    t469 = 0x0;
                                    if ((t415 != 33) && ((t415 != 35) && (t415 != 36))) {
                                        if ((t415 != 42) && (t415 != 48)) {
                                            t469 = ((int)((int)t203 % (int)0x2));
                                        } else {
                                            t469 = ((int)((int)t203 % (int)(*(int *)(((int)stk + 8)))));
                                        }
                                    }
                                } else {
                                    t469 = ((int)((int)t203 % (int)(*(int *)(((int)stk + 8)))));
                                }
                            } else {
                                t434 = *(int *)((a4 + 0x0));
                                if ((t434 != 23) && ((t434 != 27) && (t434 != 29))) {
                                    t469 = 0x0;
                                    if (t434 != 33) {
                                        if (t434 != 34) {
                                            t469 = 0x0;
                                            if ((t434 != 35) && (t434 != 36)) {
                                                if ((t434 != 39) && ((t434 != 40) && ((t434 != 43) && ((t434 != 50) && ((t434 != 54) && (t434 != 56)))))) {
                                                    t469 = ((int)((int)t203 % (int)0x2));
                                                } else {
                                                    t469 = ((int)((int)t203 % (int)(*(int *)(((int)stk + 8)))));
                                                }
                                            }
                                        } else {
                                            t469 = ((int)((int)t203 % (int)(*(int *)(((int)stk + 8)))));
                                        }
                                    }
                                } else {
                                    t469 = ((int)((int)t203 % (int)(*(int *)(((int)stk + 8)))));
                                }
                            }
                            (((struct o4_uint *)0xC2AE348)->v) = (*(int *)((((t469 << 2) + (0x1A8 + ((int)stk + 4))) + 0x0)));
                            (((struct oC_uint *)0xC2AE348)->v) = (*(int *)((((0x19C + ((int)stk + 4)) + (t469 << 2)) + 0x0)));
                            (((struct o14_uint *)0xC2AE348)->v) = (*(int *)((((t469 << 2) + (0x190 + ((int)stk + 4))) + 0x0)));
                        }
                    }
                } else {
                    if (((((struct o0_int *)0xC2AE348)->v)) == 0xC96DE8C) {
                        if ((*(int *)((a4 + 0x0))) == 52) {
                            (((struct o4_uint *)0xC2AE348)->v) = 0xC9B1170;
                            (((struct oC_uint *)0xC2AE348)->v) = 0xC0D5998;
                            (((struct o14_uint *)0xC2AE348)->v) = 0xC0D5998;
                        } else {
                            t495 = (int)((int)t203 % (int)0x2);
                            (((struct o4_uint *)0xC2AE348)->v) = (*(int *)((((t495 << 2) + (0x188 + ((int)stk + 4))) + 0x0)));
                            (((struct oC_uint *)0xC2AE348)->v) = (*(int *)((((0x180 + ((int)stk + 4)) + (t495 << 2)) + 0x0)));
                            (((struct o14_uint *)0xC2AE348)->v) = (*(int *)(((0x178 + ((int)stk + 4)) + (t495 << 2))));
                        }
                    } else {
                        if (((((((struct o4_int *)0xC1EE20C)->v)) == 2) && (t507 = (((struct o8_int *)0xC1EE20C)->v), t507 == 10)) || (t508 = (((struct o8_int *)0xC1EE20C)->v), t508 == 11)) {
                            if ((((((struct o8_int *)0xC1EE20C)->v)) == 11) && (t514 = *(int *)0xC179488, (int)t514 < (int)0x4)) {
                                (((struct o4_uint *)0xC2AE348)->v) = (*(int *)(((int)stk + 472)));
                                (((struct oC_uint *)0xC2AE348)->v) = (*(int *)(((int)stk + 460)));
                                (((struct o14_uint *)0xC2AE348)->v) = (*(int *)(((int)stk + 448)));
                            } else {
                                t518 = (int)((int)t203 % (int)0x2);
                                (((struct o4_uint *)0xC2AE348)->v) = (*(int *)((((t518 << 2) + (0x188 + ((int)stk + 4))) + 0x0)));
                                (((struct oC_uint *)0xC2AE348)->v) = (*(int *)((((0x180 + ((int)stk + 4)) + (t518 << 2)) + 0x0)));
                                (((struct o14_uint *)0xC2AE348)->v) = (*(int *)(((0x178 + ((int)stk + 4)) + (t518 << 2))));
                            }
                        } else {
                            t528 = *(int *)((a4 + 0x0));
                            t537 = 0x2;
                            if (t528 != 30) {
                                t537 = 0x0;
                                if ((t528 != 33) && ((t528 != 35) && (t528 != 36))) {
                                    t537 = ((int)((int)t203 % (int)0x2));
                                }
                            }
                            (((struct o4_uint *)0xC2AE348)->v) = (*(int *)((((t537 << 2) + (0x1CC + ((int)stk + 4))) + 0x0)));
                            (((struct oC_uint *)0xC2AE348)->v) = (*(int *)((((0x1C0 + ((int)stk + 4)) + (t537 << 2)) + 0x0)));
                            (((struct o14_uint *)0xC2AE348)->v) = (*(int *)((((t537 << 2) + (0x1B4 + ((int)stk + 4))) + 0x0)));
                        }
                    }
                }
            }
        }
        (((struct o114_float *)(a4))->v) = 0.0f;
        FcvStoreBuffer(((((struct o110_int *)(a4))->v)), ((((struct o118_int *)(a4))->v)), ((((struct o114_float *)(a4))->v)));
        (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) | 0x80);
        (((struct o108_float *)(a4))->v) = 0.0f;
        (((struct o10C_float *)(a4))->v) = 15.0f;
        (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
        (((struct o124_uint *)(a4))->v) = ((((struct o8_int *)0xC2AE348)->v));
        (((struct o128_uint *)(a4))->v) = ((((struct o10_int *)0xC2AE348)->v));
        (((struct o120_float *)(a4))->v) = (float)(*(int *)((((((struct o0_int *)0xC2AE348)->v)) + 0x0)));
        t581 = (((struct o0_int *)0xC2AE348)->v);
        if ((t581 != 0xC956FCC) && ((t581 != 0xC95A230) && ((t581 != 0xC95D7C4) && ((t581 != 0xC960308) && ((t581 != 0xC962F0C) && ((t581 != 0xC9659C0) && ((t581 != 0xC9684A4) && (t581 != 0xC96B138)))))))) {
            t590 = (((struct o4_int *)0xC2AE348)->v);
            if ((t590 != 0xC9BBD68) && (t590 != 0xC9BE3CC)) {
                t597 = (*(int *)((((((struct o4_int *)0xC2AE348)->v)) + 0x0)));
            } else {
                t597 = (*(int *)0xC9C0A30);
            }
            (((struct o120_float *)(a4))->v) = (((((struct o120_float *)(a4))->v)) + (float)t597);
        }
        (((struct o120_float *)(a4))->v) = (((((struct o120_float *)(a4))->v)) / (*(float *)(((((int)stk + 0) + 0x20) + (((int)(((unsigned int)((((struct o148_int *)(a4))->v)) >> 21) & 0x3)) << 2)))));
        t612 = (Chat_Getoff(a4));
    }
    return t612;
}
