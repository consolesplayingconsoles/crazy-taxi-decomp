/* Straight-line functions with calls and guards (batch gen_rm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Chat_Geton(int);
int FcvStoreBuffer(int, int, float);
int GetCollisionFirst(int, int, float);
int extRand(void);
int nlGetTranslate(int);
float nlInnerProduct(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlScaleVector(int, int, float);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int nlUnitVector(int);
int psgAllocIpBuff(int);
int psgEnterState2(int a4, int a5);

int psgEnterState2(int a4, int a5)
{
    int t66;
    int t40;
    int t75;
    int t81;
    int t85;
    float u86;
    int t89;
    int t93;
    float u95;
    int t98;
    int t99;
    int t103;
    int t141;
    int t145;
    int t160;
    int t175;
    int t185;
    int t177;
    int t179;
    int t227;
    int t198;
    int t38;
    int t21;
    int t30;
    int t192;
    int stk[29];

    { struct mv5 { int w[5]; }; *(struct mv5 *)((((int)stk + 4) + 0x2C)) = *(struct mv5 *)(0xC0D5BA0); }
    { struct mv5 { int w[5]; }; *(struct mv5 *)((((int)stk + 4) + 0x18)) = *(struct mv5 *)(0xC0D5BB4); }
    if (a5 != 0) {
        if (a5 != 1) {
            t66 = a5;
            if (a5 == 2) {
                if ((*(int *)((a4 + 0x0))) == 35) {
                    if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                        *(unsigned int *)(((0x110 + a4) + 0x0)) = 0xC9DE008;
                    } else {
                        *(unsigned int *)((a4 + 0x110)) = 0xC9DFA4C;
                    }
                } else {
                    if ((*(int *)0xC2AE33C) == 3) {
                        if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                            if (((int)((int)(extRand()) % (int)0x5)) == 0) {
                                t21 = ((*(int *)0xC2AE33C) + 0x1);
                            } else {
                                t21 = (*(int *)0xC2AE33C);
                            }
                            t38 = (*(int *)(((((int)stk + 4) + 0x2C) + (t21 << 2))));
                        } else {
                            if (((int)((int)(extRand()) % (int)0x5)) == 0) {
                                t30 = ((*(int *)0xC2AE33C) + 0x1);
                            } else {
                                t30 = (*(int *)0xC2AE33C);
                            }
                            t38 = (*(int *)(((((int)stk + 4) + 0x18) + (t30 << 2))));
                        }
                        *(unsigned int *)((a4 + 0x110)) = t38;
                    } else {
                        t40 = *(int *)0xC2AE33C;
                        if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                            *(unsigned int *)(((0x110 + a4) + 0x0)) = (*(int *)(((((int)stk + 4) + 0x2C) + (t40 << 2))));
                        } else {
                            *(unsigned int *)(((0x110 + a4) + 0x0)) = (*(int *)(((((int)stk + 4) + 0x18) + (t40 << 2))));
                        }
                    }
                }
                *(float *)((a4 + 0x114)) = 5.0f;
                FcvStoreBuffer((*(int *)((a4 + 0x110))), (*(int *)((a4 + 0x118))), (*(float *)((a4 + 0x114))));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) | 0x80);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = 7.0f;
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
                *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
                *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
                t66 = 0x128;
            }
            t198 = t66;
        } else {
            nlPushMatrix(0xC179180);
            t75 = *(int *)0xC2AE33C;
            nlTranslate(0.0f, 0.0f, (*(float *)((((signed char)(((t75 << 1) + t75) << 2) + 0xC0D5588) + 0x8))));
            nlGetTranslate((((int)stk + 4) + 0xC));
            *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + 7.5f);
            nlScaleVector(((int)stk + 4), 0xC2AD1E0, 20.0f);
            t81 = GetCollisionFirst((((int)stk + 4) + 0xC), ((int)stk + 4), 0.0f);
            t85 = 0x0;
            u86 = 0.0f;
            if ((*(int *)((t81 + 0x1C))) != -1) {
                t85 = 0x1;
                u86 = (*(float *)((t81 + 0x18)));
            }
            nlScaleVector(((int)stk + 4), 0xC2AD1E0, -20.0f);
            t89 = GetCollisionFirst((((int)stk + 4) + 0xC), ((int)stk + 4), 0.0f);
            t93 = t85;
            u95 = 0.0f;
            if ((*(int *)((t89 + 0x1C))) != -1) {
                t93 = (t85 | 0x2);
                u95 = (*(float *)((t89 + 0x18)));
            }
            *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - 7.5f);
            t98 = *(int *)0xC2AE33C;
            if (t93 != 0) {
                if (t93 != 1) {
                    if (t93 != 2) {
                        if (t93 != 3) {
                        } else {
                            if (!(u95 > u86)) {
                                t99 = *(int *)0xC2AE33C;
                                nlTranslate((*(float *)((((signed char)(((t99 << 1) + t99) << 2) + 0xC0D5588) + 0x0))), 0.0f, 0.0f);
                                *(unsigned char *)(((0x14B + a4) + 0x0)) = ((*(signed char *)(((0x14B + a4) + 0x0))) | 0x4);
                            } else {
                                t103 = *(int *)0xC2AE33C;
                                nlTranslate((-(*(float *)((((signed char)(((t103 << 1) + t103) << 2) + 0xC0D5588) + 0x0)))), 0.0f, 0.0f);
                                *(unsigned char *)(((0x14B + a4) + 0x0)) = ((*(signed char *)(((0x14B + a4) + 0x0))) & 0xFB);
                            }
                        }
                    } else {
                        nlTranslate((*(float *)((((signed char)(((t98 << 1) + t98) << 2) + 0xC0D5588) + 0x0))), 0.0f, 0.0f);
                        *(unsigned char *)(((0x14B + a4) + 0x0)) = ((*(signed char *)(((0x14B + a4) + 0x0))) | 0x4);
                    }
                } else {
                    nlTranslate((-(*(float *)((((signed char)(((t98 << 1) + t98) << 2) + 0xC0D5588) + 0x0)))), 0.0f, 0.0f);
                    *(unsigned char *)(((0x14B + a4) + 0x0)) = ((*(signed char *)(((0x14B + a4) + 0x0))) & 0xFB);
                }
            } else {
                nlSubVector3op(((int)stk + 4), (a4 + 0x4), (((int)stk + 4) + 0xC));
                *(float *)(((int)stk + 8)) = 0.0f;
                nlUnitVector(((int)stk + 4));
                if (!((nlInnerProduct(0xC2AD1E0, ((int)stk + 4))) > 0.0f)) {
                    t141 = *(int *)0xC2AE33C;
                    nlTranslate((-(*(float *)((((signed char)(((t141 << 1) + t141) << 2) + 0xC0D5588) + 0x0)))), 0.0f, 0.0f);
                    *(unsigned char *)(((0x14B + a4) + 0x0)) = ((*(signed char *)(((0x14B + a4) + 0x0))) & 0xFB);
                } else {
                    t145 = *(int *)0xC2AE33C;
                    nlTranslate((*(float *)((((signed char)(((t145 << 1) + t145) << 2) + 0xC0D5588) + 0x0))), 0.0f, 0.0f);
                    *(unsigned char *)(((0x14B + a4) + 0x0)) = ((*(signed char *)(((0x14B + a4) + 0x0))) | 0x4);
                }
            }
            t160 = *(signed char *)0xC179488;
            nlTranslateV(((signed char)(((t160 << 1) + t160) << 2) + 0xC0D5654));
            nlGetTranslate((0x134 + a4));
            nlPopMatrix(0x1);
            *(unsigned int *)((a4 + 0x110)) = (*(int *)(((((*(int *)((a4 + 0x0))) - 23) << 2) + 0xC0D5690)));
            *(float *)((a4 + 0x114)) = 0.0f;
            FcvStoreBuffer((*(int *)((a4 + 0x110))), (*(int *)((a4 + 0x118))), (*(float *)((a4 + 0x114))));
            *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) | 0x80);
            *(float *)((a4 + 0x108)) = 0.0f;
            *(float *)((a4 + 0x10C)) = 10.0f;
            *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
            *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
            *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
            if ((*(int *)0xC1EE210) == 2) {
                t175 = *(int *)0xC1EE210;
                t185 = t175;
                if (t175 != 2) {
                } else {
                    t177 = *(int *)0xC1EE788;
                    t179 = t177;
                    if (t177 != 1) {
                    } else {
                        t179 = (Chat_Geton(a4));
                    }
                    t185 = t179;
                }
                t192 = t185;
            } else {
                t192 = (Chat_Geton(a4));
            }
            t198 = t192;
        }
        t227 = t198;
    } else {
        if ((*(int *)((a4 + 0x0))) == 35) {
            *(unsigned int *)0xC2AE33C = 0x4;
        } else {
            *(unsigned int *)0xC2AE33C = ((int)((int)(extRand()) % (int)0x4));
        }
        psgAllocIpBuff(a4);
        *(unsigned int *)((a4 + 0x34)) = 0xC9EF530;
        *(float *)((a4 + 0x38)) = 0.0f;
        FcvStoreBuffer((*(int *)((a4 + 0x34))), (a4 + 0x3C), 0.0f);
        *(float *)((a4 + 0x108)) = 0.0f;
        *(float *)((a4 + 0x10C)) = 0.0f;
        *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
        *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
        *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
        t227 = 0x128;
    }
    return t227;
}
