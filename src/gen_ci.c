/* Straight-line functions with calls and guards (batch gen_ci): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Chat_Getoff(void);
int FcvStoreBuffer(int, int, float);
int Psg_SetMoveSpeed(int, float);
int psgPickExitSide(int);
int rinRand(void);
int psgEnterState4(int a4, int a5);

int psgEnterState4(int a4, int a5)
{
    int t18;
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
    int t426;
    int t434;
    int t457;
    int t445;
    int t495;
    int t518;
    int t528;
    int t537;
    int t533;
    int t581;
    int t590;
    int t612;
    int t25;
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
    int t433;
    int t419;
    int t464;
    int t452;
    int t438;
    int t507;
    int t508;
    int t514;
    int t597;
    int stk[157];

    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x228 + ((int)stk + 8))) = *(struct mv8 *)(0xC0D5CC0); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x208 + ((int)stk + 8))) = *(struct mv8 *)(0xC0D5CE0); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x1FC + ((int)stk + 8))) = *(struct mv3 *)(0xC0D5D00); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x1F0 + ((int)stk + 8))) = *(struct mv3 *)(0xC0D5D0C); }
    *(unsigned int *)(((int)stk + 8)) = 0x3;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x1E4 + ((int)stk + 8))) = *(struct mv3 *)(0xC0D5D18); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x1D8 + ((int)stk + 8))) = *(struct mv3 *)(0xC0D5D24); }
    *(unsigned int *)(((int)stk + 20)) = 0x3;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x1CC + ((int)stk + 8))) = *(struct mv3 *)(0xC0D5D30); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x1C0 + ((int)stk + 8))) = *(struct mv3 *)(0xC0D5D3C); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x1B4 + ((int)stk + 8))) = *(struct mv3 *)(0xC0D5D48); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x1A8 + ((int)stk + 8))) = *(struct mv3 *)(0xC0D5D54); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x19C + ((int)stk + 8))) = *(struct mv3 *)(0xC0D5D60); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x190 + ((int)stk + 8))) = *(struct mv3 *)(0xC0D5D6C); }
    { struct mv2 { int w[2]; }; *(struct mv2 *)((0x188 + ((int)stk + 8))) = *(struct mv2 *)(0xC0D5D78); }
    { struct mv2 { int w[2]; }; *(struct mv2 *)((0x180 + ((int)stk + 8))) = *(struct mv2 *)(0xC0D5D80); }
    { struct mv2 { int w[2]; }; *(struct mv2 *)((0x178 + ((int)stk + 8))) = *(struct mv2 *)(0xC0D5D88); }
    { struct mv2 { int w[2]; }; *(struct mv2 *)((0x170 + ((int)stk + 8))) = *(struct mv2 *)(0xC0D5D90); }
    { struct mv2 { int w[2]; }; *(struct mv2 *)((0x168 + ((int)stk + 8))) = *(struct mv2 *)(0xC0D5D98); }
    { struct mv2 { int w[2]; }; *(struct mv2 *)((0x160 + ((int)stk + 8))) = *(struct mv2 *)(0xC0D5DA0); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((0x150 + ((int)stk + 8))) = *(struct mv4 *)(0xC0D5DA8); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((0x140 + ((int)stk + 8))) = *(struct mv4 *)(0xC0D5DB8); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((0x130 + ((int)stk + 8))) = *(struct mv4 *)(0xC0D5DC8); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((0x120 + ((int)stk + 8))) = *(struct mv4 *)(0xC0D5DD8); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((0x110 + ((int)stk + 8))) = *(struct mv4 *)(0xC0D5DE8); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((0x100 + ((int)stk + 8))) = *(struct mv4 *)(0xC0D5DF8); }
    { struct mv9 { int w[9]; }; *(struct mv9 *)((0xDC + ((int)stk + 8))) = *(struct mv9 *)(0xC0D5E08); }
    { struct mv9 { int w[9]; }; *(struct mv9 *)((0xB8 + ((int)stk + 8))) = *(struct mv9 *)(0xC0D5E2C); }
    { struct mv9 { int w[9]; }; *(struct mv9 *)((0x94 + ((int)stk + 8))) = *(struct mv9 *)(0xC0D5E50); }
    { struct mv9 { int w[9]; }; *(struct mv9 *)((((int)stk + 8) + 0x70)) = *(struct mv9 *)(0xC0D5E74); }
    { struct mv9 { int w[9]; }; *(struct mv9 *)((((int)stk + 8) + 0x4C)) = *(struct mv9 *)(0xC0D5E98); }
    { struct mv9 { int w[9]; }; *(struct mv9 *)((((int)stk + 8) + 0x28)) = *(struct mv9 *)(0xC0D5EBC); }
    *(unsigned int *)(((int)stk + 12)) = 0x3;
    *(unsigned int *)(((int)stk + 16)) = 0x9;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x1C)) = *(struct mv3 *)(0xC0D5EE0); }
    if (a5 != 0) {
        if (a5 == 1) {
            *(unsigned int *)((a4 + 0x34)) = (*(int *)0xC2AE34C);
            *(float *)((a4 + 0x38)) = 0.0f;
            *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0x7F);
            *(float *)((a4 + 0x108)) = 0.0f;
            *(float *)((a4 + 0x10C)) = 0.0f;
            *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
            *(unsigned int *)((a4 + 0x124)) = (*(int *)0xC2AE354);
            *(unsigned int *)((a4 + 0x128)) = (*(int *)0xC2AE35C);
            t25 = 0x128;
        } else {
            t18 = a5;
            if (a5 == 2) {
                FcvStoreBuffer(0xC9EF530, (a4 + 0x3C), 0.0f);
                *(unsigned int *)((a4 + 0x110)) = (*(int *)(((((*(int *)((a4 + 0x0))) - 23) << 2) + 0xC0D5690)));
                *(float *)((a4 + 0x114)) = (*(float *)0xC06D6EC);
                FcvStoreBuffer((*(int *)((a4 + 0x110))), (*(int *)((a4 + 0x118))), (*(float *)((a4 + 0x114))));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) | 0x80);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = (*(float *)0xC06D6F0);
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) | 0x40);
                t18 = (Psg_SetMoveSpeed(a4, 0.0f));
            }
            t25 = t18;
        }
        t612 = t25;
    } else {
        *(unsigned int *)0xC13EEE4 = 0x0;
        if (((*(int *)0xC1EE20C) == 2) && (t33 = *(int *)0xC1EE214, t33 == 14)) {
            t36 = *(int *)((a4 + 0x154));
            if ((t36 != 0) && ((t36 != 1) && ((t36 != 3) && (t36 != 5)))) {
                *(unsigned char *)(((0x14B + a4) + 0x0)) = ((*(signed char *)(((0x14B + a4) + 0x0))) & 0xFB);
            } else {
                *(unsigned char *)(((0x14B + a4) + 0x0)) = ((*(signed char *)(((0x14B + a4) + 0x0))) | 0x4);
            }
        } else {
            *(unsigned int *)(((0x148 + a4) + 0x0)) = (((*(int *)(((0x148 + a4) + 0x0))) & 0xFBFFFFFF) | ((unsigned int)((int)((unsigned int)(psgPickExitSide(a4)) & 0x1)) << 26));
        }
        t51 = rinRand();
        if (((int)(((unsigned int)(*(int *)(((0x148 + a4) + 0x0))) >> 21) & 0x3)) != 0) {
            t65 = (int)((int)t51 % (int)(*(int *)(((int)stk + 20))));
            if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                *(unsigned int *)(((0x110 + a4) + 0x0)) = (*(int *)((((t65 << 2) + (0x1E4 + ((int)stk + 8))) + 0x0)));
            } else {
                *(unsigned int *)(((0x110 + a4) + 0x0)) = (*(int *)((((t65 << 2) + (0x1D8 + ((int)stk + 8))) + 0x0)));
            }
            *(unsigned int *)0xC2AE350 = 0xC0D3068;
            *(unsigned int *)0xC2AE358 = 0xC0D3068;
        } else {
            if ((*(int *)0xC1EE210) != 2) {
                t83 = (int)((int)t51 % (int)0x7);
                t84 = (int)((int)t51 % (int)0x8);
                if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                    t88 = *(int *)((a4 + 0x0));
                    if ((t88 != 25) && ((t88 != 26) && ((t88 != 28) && ((t88 != 29) && ((t88 != 31) && ((t88 != 32) && ((t88 != 33) && ((t88 != 36) && ((t88 != 37) && ((t88 != 40) && ((t88 != 41) && ((t88 != 42) && ((t88 != 45) && ((t88 != 49) && ((t88 != 50) && ((t88 != 53) && ((t88 != 54) && ((t88 != 55) && (t88 != 57))))))))))))))))))) {
                        *(unsigned int *)(((0x110 + a4) + 0x0)) = (*(int *)((((t84 << 2) + (0x228 + ((int)stk + 8))) + 0x0)));
                    } else {
                        *(unsigned int *)(((0x110 + a4) + 0x0)) = (*(int *)((((t83 << 2) + (0x228 + ((int)stk + 8))) + 0x0)));
                    }
                } else {
                    t94 = *(int *)((a4 + 0x0));
                    if ((t94 != 25) && ((t94 != 26) && ((t94 != 28) && ((t94 != 29) && ((t94 != 31) && ((t94 != 32) && ((t94 != 33) && ((t94 != 36) && ((t94 != 37) && ((t94 != 40) && ((t94 != 41) && ((t94 != 42) && ((t94 != 45) && ((t94 != 49) && ((t94 != 50) && ((t94 != 53) && ((t94 != 54) && ((t94 != 55) && (t94 != 57))))))))))))))))))) {
                        *(unsigned int *)(((0x110 + a4) + 0x0)) = (*(int *)((((t84 << 2) + (0x208 + ((int)stk + 8))) + 0x0)));
                    } else {
                        *(unsigned int *)(((0x110 + a4) + 0x0)) = (*(int *)((((t83 << 2) + (0x208 + ((int)stk + 8))) + 0x0)));
                    }
                }
            } else {
                if (((*(int *)0xC1EE214) != 14) && ((t106 = *(int *)0xC1EE214, t106 != 10) && (t107 = *(int *)0xC1EE214, t107 != 11))) {
                    t114 = (int)((int)t51 % (int)0x7);
                    t115 = (int)((int)t51 % (int)0x8);
                    if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                        t119 = *(int *)((a4 + 0x0));
                        if ((t119 != 25) && ((t119 != 26) && ((t119 != 28) && ((t119 != 29) && ((t119 != 31) && ((t119 != 32) && ((t119 != 33) && ((t119 != 36) && ((t119 != 37) && ((t119 != 40) && ((t119 != 41) && ((t119 != 42) && ((t119 != 45) && ((t119 != 49) && ((t119 != 50) && ((t119 != 53) && ((t119 != 54) && ((t119 != 55) && (t119 != 57))))))))))))))))))) {
                            *(unsigned int *)(((0x110 + a4) + 0x0)) = (*(int *)((((t115 << 2) + (0x228 + ((int)stk + 8))) + 0x0)));
                        } else {
                            *(unsigned int *)(((0x110 + a4) + 0x0)) = (*(int *)((((t114 << 2) + (0x228 + ((int)stk + 8))) + 0x0)));
                        }
                    } else {
                        t125 = *(int *)((a4 + 0x0));
                        if ((t125 != 25) && ((t125 != 26) && ((t125 != 28) && ((t125 != 29) && ((t125 != 31) && ((t125 != 32) && ((t125 != 33) && ((t125 != 36) && ((t125 != 37) && ((t125 != 40) && ((t125 != 41) && ((t125 != 42) && ((t125 != 45) && ((t125 != 49) && ((t125 != 50) && ((t125 != 53) && ((t125 != 54) && ((t125 != 55) && (t125 != 57))))))))))))))))))) {
                            *(unsigned int *)(((0x110 + a4) + 0x0)) = (*(int *)((((t115 << 2) + (0x208 + ((int)stk + 8))) + 0x0)));
                        } else {
                            *(unsigned int *)(((0x110 + a4) + 0x0)) = (*(int *)((((t114 << 2) + (0x208 + ((int)stk + 8))) + 0x0)));
                        }
                    }
                } else {
                    t136 = *(int *)0xC1EE214;
                    if (t136 == 14) {
                        if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                            *(unsigned int *)(((0x110 + a4) + 0x0)) = 0xC94DB88;
                        } else {
                            *(unsigned int *)((a4 + 0x110)) = 0xC94F70C;
                        }
                    } else {
                        if (t136 == 11) {
                            if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                                *(unsigned int *)(((0x110 + a4) + 0x0)) = 0xC94AA20;
                            } else {
                                *(unsigned int *)((a4 + 0x110)) = 0xC94C2D4;
                            }
                        } else {
                            t148 = (int)((int)t51 % (int)0x2);
                            t150 = (int)((int)t51 % (int)(*(int *)(((int)stk + 8))));
                            if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                                t154 = *(int *)((a4 + 0x0));
                                if ((t154 != 25) && ((t154 != 26) && ((t154 != 28) && ((t154 != 29) && ((t154 != 31) && ((t154 != 32) && ((t154 != 33) && ((t154 != 36) && ((t154 != 37) && ((t154 != 40) && ((t154 != 41) && ((t154 != 42) && ((t154 != 45) && ((t154 != 49) && ((t154 != 50) && ((t154 != 53) && ((t154 != 54) && ((t154 != 55) && (t154 != 57))))))))))))))))))) {
                                    t157 = (*(int *)((((t150 << 2) + (0x1FC + ((int)stk + 8))) + 0x0)));
                                } else {
                                    t157 = (*(int *)((((t148 << 2) + (0x1FC + ((int)stk + 8))) + 0x0)));
                                }
                                *(unsigned int *)((a4 + 0x110)) = t157;
                            } else {
                                t160 = *(int *)((a4 + 0x0));
                                if ((t160 != 25) && ((t160 != 26) && ((t160 != 28) && ((t160 != 29) && ((t160 != 31) && ((t160 != 32) && ((t160 != 33) && ((t160 != 36) && ((t160 != 37) && ((t160 != 40) && ((t160 != 41) && ((t160 != 42) && ((t160 != 45) && ((t160 != 49) && ((t160 != 50) && ((t160 != 53) && ((t160 != 54) && ((t160 != 55) && (t160 != 57))))))))))))))))))) {
                                    t163 = (*(int *)((((t150 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0)));
                                } else {
                                    t163 = (*(int *)((((t148 << 2) + (0x1F0 + ((int)stk + 8))) + 0x0)));
                                }
                                *(unsigned int *)((a4 + 0x110)) = t163;
                            }
                        }
                    }
                }
            }
            t192 = *(int *)((a4 + 0x110));
            if ((t192 != 0xC962F0C) && (t192 != 0xC9659C0)) {
                *(unsigned int *)0xC2AE350 = 0xC0D3068;
                *(unsigned int *)0xC2AE358 = 0xC0D3068;
            } else {
                *(unsigned int *)0xC2AE350 = 0xC0D3068;
                *(unsigned int *)0xC2AE358 = 0xC0D58C0;
            }
        }
        *(unsigned int *)0xC2AE348 = (*(int *)((a4 + 0x110)));
        t203 = rinRand();
        t205 = (int)(((unsigned int)(*(int *)(((0x148 + a4) + 0x0))) >> 21) & 0x3);
        if (t205 != 0) {
            if (t205 == 1) {
                t228 = (int)((int)t203 % (int)0x4);
                if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                    *(unsigned int *)0xC2AE34C = (*(int *)((((t228 << 2) + (0x150 + ((int)stk + 8))) + 0x0)));
                    *(unsigned int *)0xC2AE354 = (*(int *)((((0x140 + ((int)stk + 8)) + (t228 << 2)) + 0x0)));
                    *(unsigned int *)0xC2AE35C = (*(int *)((((t228 << 2) + (0x130 + ((int)stk + 8))) + 0x0)));
                } else {
                    *(unsigned int *)0xC2AE34C = (*(int *)((((t228 << 2) + (0x120 + ((int)stk + 8))) + 0x0)));
                    *(unsigned int *)0xC2AE354 = (*(int *)((((0x110 + ((int)stk + 8)) + (t228 << 2)) + 0x0)));
                    *(unsigned int *)0xC2AE35C = (*(int *)((((t228 << 2) + (0x100 + ((int)stk + 8))) + 0x0)));
                }
            } else {
                if (t205 == 2) {
                    t242 = *(int *)((a4 + 0x0));
                    if (t242 != 32) {
                        if ((t242 != 33) && ((t242 != 35) && (t242 != 36))) {
                            *(unsigned int *)(((int)stk + 8)) = (((int)((int)t203 % (int)(*(int *)(((int)stk + 16))))) << 2);
                            if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                                *(unsigned int *)0xC2AE34C = (*(int *)((((*(int *)(((int)stk + 8))) + (0xDC + ((int)stk + 8))) + 0x0)));
                                *(unsigned int *)0xC2AE354 = (*(int *)((((*(int *)(((int)stk + 8))) + (0xB8 + ((int)stk + 8))) + 0x0)));
                                t264 = (*(int *)(((0x94 + ((int)stk + 8)) + (*(int *)(((int)stk + 8))))));
                            } else {
                                *(unsigned int *)0xC2AE34C = (*(int *)((((*(int *)(((int)stk + 8))) + (((int)stk + 8) + 0x70)) + 0x0)));
                                *(unsigned int *)0xC2AE354 = (*(int *)((((*(int *)(((int)stk + 8))) + (((int)stk + 8) + 0x4C)) + 0x0)));
                                t264 = (*(int *)((((*(int *)(((int)stk + 8))) + (((int)stk + 8) + 0x28)) + 0x0)));
                            }
                            *(unsigned int *)0xC2AE35C = t264;
                        } else {
                            t266 = (int)((int)t203 % (int)0x8);
                            t267 = t266;
                            if ((int)t266 >= (int)0x3) {
                                t267 = (t266 + 0x1);
                            }
                            if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                                *(unsigned int *)0xC2AE34C = (*(int *)((((t267 << 2) + (0xDC + ((int)stk + 8))) + 0x0)));
                                *(unsigned int *)0xC2AE354 = (*(int *)((((0xB8 + ((int)stk + 8)) + (t267 << 2)) + 0x0)));
                                *(unsigned int *)0xC2AE35C = (*(int *)((((t267 << 2) + (0x94 + ((int)stk + 8))) + 0x0)));
                            } else {
                                *(unsigned int *)0xC2AE34C = (*(int *)((((t267 << 2) + (((int)stk + 8) + 0x70)) + 0x0)));
                                *(unsigned int *)0xC2AE354 = (*(int *)((((((int)stk + 8) + 0x4C) + (t267 << 2)) + 0x0)));
                                *(unsigned int *)0xC2AE35C = (*(int *)((((t267 << 2) + (((int)stk + 8) + 0x28)) + 0x0)));
                            }
                        }
                    } else {
                        if ((((*(int *)0xC1EE210) == 2) && (t290 = *(int *)0xC1EE214, t290 == 14)) || (t291 = *(signed char *)((a4 + 0x14B)), (t291 & 4) != 0)) {
                            *(unsigned int *)0xC2AE34C = 0xC9944D8;
                        } else {
                            *(unsigned int *)0xC2AE34C = 0xC99697C;
                        }
                        *(unsigned int *)0xC2AE354 = 0xC0D3068;
                        *(unsigned int *)0xC2AE35C = 0xC0D3068;
                    }
                }
            }
        } else {
            if (((*(int *)0xC1EE210) == 2) && (t315 = *(int *)0xC1EE214, t315 == 14)) {
                t336 = (int)((int)t203 % (int)0x2);
                *(unsigned int *)0xC2AE34C = (*(int *)((((t336 << 2) + (0x188 + ((int)stk + 8))) + 0x0)));
                *(unsigned int *)0xC2AE354 = (*(int *)((((0x180 + ((int)stk + 8)) + (t336 << 2)) + 0x0)));
                *(unsigned int *)0xC2AE35C = (*(int *)(((0x178 + ((int)stk + 8)) + (t336 << 2))));
            } else {
                if (((*(signed char *)((a4 + 0x14B))) & 4) == 0) {
                    if ((*(int *)0xC2AE348) == 0xC9702C0) {
                        if ((*(int *)((a4 + 0x0))) == 52) {
                            *(unsigned int *)0xC2AE34C = 0xC9B38F4;
                            *(unsigned int *)0xC2AE354 = 0xC0D5998;
                            *(unsigned int *)0xC2AE35C = 0xC0D5998;
                        } else {
                            t365 = (int)((int)t203 % (int)0x2);
                            *(unsigned int *)0xC2AE34C = (*(int *)((((t365 << 2) + (0x170 + ((int)stk + 8))) + 0x0)));
                            *(unsigned int *)0xC2AE354 = (*(int *)((((0x168 + ((int)stk + 8)) + (t365 << 2)) + 0x0)));
                            *(unsigned int *)0xC2AE35C = (*(int *)((((t365 << 2) + (0x160 + ((int)stk + 8))) + 0x0)));
                        }
                    } else {
                        t377 = *(int *)0xC2AD000;
                        if ((((*(int *)0xC1EE210) == 2) && (t378 = *(int *)0xC1EE214, t378 == 10)) || ((t379 = *(int *)0xC1EE214, t379 == 14) || (t380 = *(int *)0xC1EE214, t380 == 11))) {
                            if (t377 != 3) {
                                t389 = *(int *)((a4 + 0x0));
                                if ((t389 != 23) && ((t389 != 27) && ((t389 != 29) && ((t389 != 30) && ((t389 != 34) && ((t389 != 39) && ((t389 != 40) && ((t389 != 43) && ((t389 != 50) && ((t389 != 54) && (t389 != 56))))))))))) {
                                    t390 = (int)((int)t203 % (int)0x2);
                                    *(unsigned int *)0xC2AE34C = (*(int *)((((t390 << 2) + (0x170 + ((int)stk + 8))) + 0x0)));
                                    *(unsigned int *)0xC2AE354 = (*(int *)((((0x168 + ((int)stk + 8)) + (t390 << 2)) + 0x0)));
                                    *(unsigned int *)0xC2AE35C = (*(int *)((((t390 << 2) + (0x160 + ((int)stk + 8))) + 0x0)));
                                } else {
                                    *(unsigned int *)0xC2AE34C = (*(int *)(((int)stk + 440)));
                                    *(unsigned int *)0xC2AE354 = (*(int *)(((int)stk + 428)));
                                    *(unsigned int *)0xC2AE35C = (*(int *)(((int)stk + 416)));
                                }
                            } else {
                                t403 = (int)((int)t203 % (int)0x2);
                                *(unsigned int *)0xC2AE34C = (*(int *)((((t403 << 2) + (0x170 + ((int)stk + 8))) + 0x0)));
                                *(unsigned int *)0xC2AE354 = (*(int *)((((0x168 + ((int)stk + 8)) + (t403 << 2)) + 0x0)));
                                *(unsigned int *)0xC2AE35C = (*(int *)((((t403 << 2) + (0x160 + ((int)stk + 8))) + 0x0)));
                            }
                        } else {
                            if (t377 == 3) {
                                t415 = *(int *)((a4 + 0x0));
                                if (t415 != 24) {
                                    t426 = 0x0;
                                    if ((t415 != 33) && ((t415 != 35) && (t415 != 36))) {
                                        if ((t415 != 42) && (t415 != 48)) {
                                            t419 = ((int)((int)t203 % (int)0x2));
                                        } else {
                                            t419 = ((int)((int)t203 % (int)(*(int *)(((int)stk + 12)))));
                                        }
                                        t426 = t419;
                                    }
                                    t433 = t426;
                                } else {
                                    t433 = ((int)((int)t203 % (int)(*(int *)(((int)stk + 12)))));
                                }
                                t469 = t433;
                            } else {
                                t434 = *(int *)((a4 + 0x0));
                                if ((t434 != 23) && ((t434 != 27) && (t434 != 29))) {
                                    t457 = 0x0;
                                    if (t434 != 33) {
                                        if (t434 != 34) {
                                            t445 = 0x0;
                                            if ((t434 != 35) && (t434 != 36)) {
                                                if ((t434 != 39) && ((t434 != 40) && ((t434 != 43) && ((t434 != 50) && ((t434 != 54) && (t434 != 56)))))) {
                                                    t438 = ((int)((int)t203 % (int)0x2));
                                                } else {
                                                    t438 = ((int)((int)t203 % (int)(*(int *)(((int)stk + 12)))));
                                                }
                                                t445 = t438;
                                            }
                                            t452 = t445;
                                        } else {
                                            t452 = ((int)((int)t203 % (int)(*(int *)(((int)stk + 12)))));
                                        }
                                        t457 = t452;
                                    }
                                    t464 = t457;
                                } else {
                                    t464 = ((int)((int)t203 % (int)(*(int *)(((int)stk + 12)))));
                                }
                                t469 = t464;
                            }
                            *(unsigned int *)0xC2AE34C = (*(int *)((((t469 << 2) + (0x1A8 + ((int)stk + 8))) + 0x0)));
                            *(unsigned int *)0xC2AE354 = (*(int *)((((0x19C + ((int)stk + 8)) + (t469 << 2)) + 0x0)));
                            *(unsigned int *)0xC2AE35C = (*(int *)((((t469 << 2) + (0x190 + ((int)stk + 8))) + 0x0)));
                        }
                    }
                } else {
                    if ((*(int *)0xC2AE348) == 0xC96DE8C) {
                        if ((*(int *)((a4 + 0x0))) == 52) {
                            *(unsigned int *)0xC2AE34C = 0xC9B1170;
                            *(unsigned int *)0xC2AE354 = 0xC0D5998;
                            *(unsigned int *)0xC2AE35C = 0xC0D5998;
                        } else {
                            t495 = (int)((int)t203 % (int)0x2);
                            *(unsigned int *)0xC2AE34C = (*(int *)((((t495 << 2) + (0x188 + ((int)stk + 8))) + 0x0)));
                            *(unsigned int *)0xC2AE354 = (*(int *)((((0x180 + ((int)stk + 8)) + (t495 << 2)) + 0x0)));
                            *(unsigned int *)0xC2AE35C = (*(int *)(((0x178 + ((int)stk + 8)) + (t495 << 2))));
                        }
                    } else {
                        if ((((*(int *)0xC1EE210) == 2) && (t507 = *(int *)0xC1EE214, t507 == 10)) || (t508 = *(int *)0xC1EE214, t508 == 11)) {
                            if (((*(int *)0xC1EE214) == 11) && (t514 = *(int *)0xC179488, (int)t514 < (int)0x4)) {
                                *(unsigned int *)0xC2AE34C = (*(int *)(((int)stk + 476)));
                                *(unsigned int *)0xC2AE354 = (*(int *)(((int)stk + 464)));
                                *(unsigned int *)0xC2AE35C = (*(int *)(((int)stk + 452)));
                            } else {
                                t518 = (int)((int)t203 % (int)0x2);
                                *(unsigned int *)0xC2AE34C = (*(int *)((((t518 << 2) + (0x188 + ((int)stk + 8))) + 0x0)));
                                *(unsigned int *)0xC2AE354 = (*(int *)((((0x180 + ((int)stk + 8)) + (t518 << 2)) + 0x0)));
                                *(unsigned int *)0xC2AE35C = (*(int *)(((0x178 + ((int)stk + 8)) + (t518 << 2))));
                            }
                        } else {
                            t528 = *(int *)((a4 + 0x0));
                            t537 = 0x2;
                            if (t528 != 30) {
                                t533 = 0x0;
                                if ((t528 != 33) && ((t528 != 35) && (t528 != 36))) {
                                    t533 = ((int)((int)t203 % (int)0x2));
                                }
                                t537 = t533;
                            }
                            *(unsigned int *)0xC2AE34C = (*(int *)((((t537 << 2) + (0x1CC + ((int)stk + 8))) + 0x0)));
                            *(unsigned int *)0xC2AE354 = (*(int *)((((0x1C0 + ((int)stk + 8)) + (t537 << 2)) + 0x0)));
                            *(unsigned int *)0xC2AE35C = (*(int *)((((t537 << 2) + (0x1B4 + ((int)stk + 8))) + 0x0)));
                        }
                    }
                }
            }
        }
        *(float *)((a4 + 0x114)) = 0.0f;
        FcvStoreBuffer((*(int *)((a4 + 0x110))), (*(int *)((a4 + 0x118))), (*(float *)((a4 + 0x114))));
        *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) | 0x80);
        *(float *)((a4 + 0x108)) = 0.0f;
        *(float *)((a4 + 0x10C)) = 15.0f;
        *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
        *(unsigned int *)((a4 + 0x124)) = (*(int *)0xC2AE350);
        *(unsigned int *)((a4 + 0x128)) = (*(int *)0xC2AE358);
        *(float *)((a4 + 0x120)) = (float)(*(int *)(((*(int *)0xC2AE348) + 0x0)));
        t581 = *(int *)0xC2AE348;
        if ((t581 != 0xC956FCC) && ((t581 != 0xC95A230) && ((t581 != 0xC95D7C4) && ((t581 != 0xC960308) && ((t581 != 0xC962F0C) && ((t581 != 0xC9659C0) && ((t581 != 0xC9684A4) && (t581 != 0xC96B138)))))))) {
            t590 = *(int *)0xC2AE34C;
            if ((t590 != 0xC9BBD68) && (t590 != 0xC9BE3CC)) {
                t597 = (*(int *)(((*(int *)0xC2AE34C) + 0x0)));
            } else {
                t597 = (*(int *)0xC9C0A30);
            }
            *(float *)((a4 + 0x120)) = ((*(float *)((a4 + 0x120))) + (float)t597);
        }
        *(float *)(((0x120 + a4) + 0x0)) = ((*(float *)(((0x120 + a4) + 0x0))) / (*(float *)(((((int)stk + 4) + 0x20) + (((int)(((unsigned int)(*(int *)(((0x148 + a4) + 0x0))) >> 21) & 0x3)) << 2)))));
        t612 = (Chat_Getoff());
    }
    return t612;
}
