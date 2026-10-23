/* Straight-line functions with calls and guards (batch gen_yj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int MultiRot4Vec(int);
int nlAddVector(int, int);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlGetTranslate(int);
float nlInnerProduct(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlQuickInvertMatrix(void);
int nlScaleVector(int, int, float);
int nlSubVector3op(int, int, int);
int nlTranslateV(int);
int colliObjPairHit(int a4, int a5, int a6, int a7, int a8, int a9);

int colliObjPairHit(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t18;
    float u19;
    float u20;
    float u21;
    float u22;
    float u24;
    float u36;
    float u44;
    int t207;
    int t196;
    int t185;
    int t173;
    int t51;
    float u53;
    float u54;
    float u61;
    float u69;
    float u65;
    int t162;
    float u106;
    float u107;
    float u108;
    int t110;
    int t116;
    float u112;
    int t114;
    float u127;
    float u128;
    float u129;
    int t131;
    int t138;
    float u133;
    int t135;
    float u46;
    float u48;
    float u49;
    float u55;
    float u56;
    int t121;
    int t144;
    int stk[31];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a6;
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((*(int *)(((int)stk + 8))) + 0x28)));
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((*(int *)(((int)stk + 20))) + 0x28)));
    if (a9 != 0) {
        nlQuickInvertMatrix();
    } else {
        nlTranslateV((*(int *)(((int)stk + 8))));
        MultiRot4Vec((*(int *)(((int)stk + 24))));
        nlTranslateV((a5 + 0x60));
        nlQuickInvertMatrix();
        nlTranslateV((*(int *)(((int)stk + 20))));
        MultiRot4Vec((*(int *)(((int)stk + 4))));
        nlTranslateV((a7 + 0x60));
    }
    *(float *)(((int)stk + 12)) = -3.40282347e+38f;
    *(float *)(((int)stk + 16)) = 3.40282347e+38f;
    t18 = 0x0;
    u19 = 3.40282347e+38f;
    u20 = -3.40282347e+38f;
    u21 = 3.40282347e+38f;
    u22 = -3.40282347e+38f;
    for (;;) {
        nlCalcPoint(((signed char)(((t18 << 1) + t18) << 2) + a7), (((int)stk + 4) + 0x3C));
        u24 = *(float *)(((int)stk + 64));
        if (u24 > (*(float *)(((int)stk + 12)))) {
            *(float *)(((int)stk + 12)) = u24;
        } else {
            if (u19 > u24) {
                u19 = u24;
            }
        }
        if ((*(float *)(((int)stk + 68))) > u22) {
            u22 = (*(float *)(((int)stk + 68)));
        } else {
            if (u21 > (*(float *)(((int)stk + 68)))) {
                u21 = (*(float *)(((int)stk + 68)));
            }
        }
        u36 = *(float *)(((int)stk + 72));
        if (u36 > u20) {
            u20 = u36;
        } else {
            if ((*(float *)(((int)stk + 16))) > u36) {
                *(float *)(((int)stk + 16)) = u36;
            }
        }
        t18 = (t18 + 0x1);
        if ((int)t18 >= (int)0x8) {
            break;
        }
    }
    u44 = *(float *)((a5 + 0x6C));
    t207 = 0x0;
    if (!(u19 > u44)) {
        t196 = 0x0;
        if (!((-u44) > (*(float *)(((int)stk + 12)))) && (u46 = *(float *)((a5 + 0x70)), !(u21 > u46))) {
            t185 = 0x0;
            if (!((-(*(float *)((a5 + 0x70)))) > u22) && (u48 = *(float *)((a5 + 0x74)), u49 = *(float *)(((int)stk + 16)), !(u49 > u48))) {
                t173 = 0x0;
                if ((-(*(float *)((a5 + 0x74)))) > u20) {
                } else {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x30)) = *(struct mv3 *)(0xC0965F0); }
                    *(unsigned int *)(((int)stk + 4)) = 0x0;
                    if ((int)0x0 < (int)0x8) {
                        t51 = 0x0;
                        for (;;) {
                            nlCalcPoint(((signed char)(((t51 << 1) + t51) << 2) + a7), (((int)stk + 4) + 0x3C));
                            u53 = *(float *)(((int)stk + 64));
                            u54 = *(float *)((a5 + 0x6C));
                            if (!(u53 > u54)) {
                                if (!((-u54) > u53) && (u55 = *(float *)((a5 + 0x74)), u56 = *(float *)(((int)stk + 72)), !(u56 > u55))) {
                                    if (!((-(*(float *)((a5 + 0x74)))) > (*(float *)(((int)stk + 72))))) {
                                        u61 = *(float *)(((int)stk + 68));
                                        u69 = 0.0f;
                                        if (!(0.0f > u61)) {
                                            u65 = u61;
                                            if (u61 > (*(float *)((a5 + 0x70)))) {
                                                u65 = (*(float *)((a5 + 0x70)));
                                            }
                                            u69 = u65;
                                        }
                                        *(float *)(((int)stk + 68)) = u69;
                                        nlAddVector((((int)stk + 4) + 0x30), (((int)stk + 4) + 0x3C));
                                        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
                                    }
                                }
                            }
                            t51 = (t51 + 0x1);
                            if ((int)t51 >= (int)0x8) {
                                break;
                            }
                        }
                    }
                    t162 = 0x1;
                    if ((*(int *)(((int)stk + 4))) == 0) {
                    } else {
                        nlScaleVector((((int)stk + 4) + 0x30), (((int)stk + 4) + 0x30), (1.0f / (float)(*(int *)(((int)stk + 4)))));
                        nlGetTranslate((((int)stk + 4) + 0x24));
                        nlSubVector3op((((int)stk + 4) + 0x18), (((int)stk + 4) + 0x30), (((int)stk + 4) + 0x24));
                        *(float *)((a8 + 0x24)) = -3.40282347e+38f;
                        u106 = *(float *)(((int)stk + 28));
                        u107 = *(float *)(((int)stk + 40));
                        if (u106 > 0.0f) {
                            u108 = *(float *)((a5 + 0x6C));
                            t110 = 0xC0965F0;
                            if ((((-u108) - u107) / u106) > (*(float *)((a8 + 0x24)))) {
                                *(float *)((a8 + 0x24)) = (((-u108) - u107) / u106);
                                t110 = 0xC096638;
                            }
                            t121 = t110;
                        } else {
                            t116 = 0xC0965F0;
                            if (0.0f > u106) {
                                u112 = *(float *)((a5 + 0x6C));
                                t114 = 0xC0965F0;
                                if (((u112 - u107) / u106) > (*(float *)((a8 + 0x24)))) {
                                    *(float *)((a8 + 0x24)) = ((u112 - u107) / u106);
                                    t114 = 0xC09662C;
                                }
                                t116 = t114;
                            }
                            t121 = t116;
                        }
                        u127 = *(float *)(((int)stk + 36));
                        u128 = *(float *)(((int)stk + 48));
                        if (u127 > 0.0f) {
                            u129 = *(float *)((a5 + 0x74));
                            t131 = t121;
                            if ((((-u129) - u128) / u127) > (*(float *)((a8 + 0x24)))) {
                                *(float *)((a8 + 0x24)) = (((-u129) - u128) / u127);
                                t131 = 0xC096668;
                            }
                            t144 = t131;
                        } else {
                            t138 = t121;
                            if (0.0f > u127) {
                                u133 = *(float *)((a5 + 0x74));
                                t135 = t121;
                                if (((u133 - u128) / u127) > (*(float *)((a8 + 0x24)))) {
                                    *(float *)((a8 + 0x24)) = ((u133 - u128) / u127);
                                    t135 = 0xC09665C;
                                }
                                t138 = t135;
                            }
                            t144 = t138;
                        }
                        *(float *)((a8 + 0x24)) = ((nlInnerProduct(t144, (((int)stk + 4) + 0x18))) * ((-(*(float *)((a8 + 0x24)))) + 1.0f));
                        nlPushUnitMatrix();
                        nlTranslateV((*(int *)(((int)stk + 8))));
                        MultiRot4Vec((*(int *)(((int)stk + 24))));
                        nlTranslateV((a5 + 0x60));
                        nlCalcPoint((((int)stk + 4) + 0x30), a8);
                        nlCalcVector(t144, (a8 + 0x18));
                        nlCalcVector((((int)stk + 4) + 0x18), (a8 + 0xC));
                        nlPopMatrix(0x1);
                        t162 = 0x2;
                    }
                    t173 = t162;
                }
                t185 = t173;
            }
            t196 = t185;
        }
        t207 = t196;
    }
    return t207;
}
