/* Straight-line functions with calls and guards (batch gen_afb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FcvPlayBuffer(int, int);
int FcvStoreBuffer(int, int, float);
int GetAverageAngle(int, int, float);
int carSpreadWheelLoad(float, float, float);
int ndPuru2Start(int, int, int);
int nlArcTan2(float, float);
int nlGetAverageVector(int, int, int, float, float);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int psgEnterState2(int, int);
int psgPutShadow(int);
float psgRunToPoint(int, int);
int psgStepBlend(int);
int psgUpdatePartTracks(int);
int psgFrameState2(int a4);

int psgFrameState2(int a4)
{
    int t0;
    int t196;
    int t21;
    int t40;
    float u41;
    float u49;
    float u56;
    float u63;
    float u75;
    float u84;
    float u89;
    float u96;
    float u105;
    float u110;
    float u117;
    float t210;
    int t256;
    int t265;
    int t241;
    float u29;
    float u30;
    float u31;
    int t168;
    int t223;
    int stk[13];

    t0 = *(int *)((a4 + 0x24));
    if (t0 != 0) {
        if (t0 != 1) {
            t196 = t0;
            if (t0 == 2) {
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xBF);
                nlPushMatrix(0x0);
                if (((*(signed char *)((a4 + 0x149))) & 128) != 0) {
                    nlSubVector3op((((int)stk + 4) + 0x4), (0x134 + a4), (a4 + 0x4));
                    nlGetAverageVector((a4 + 0x4), (((int)stk + 4) + 0x4), (((int)stk + 4) + 0x4), 1.0f, 0.25f);
                    *(unsigned int *)(((int)stk + 4)) = (nlArcTan2((*(float *)0xC2AD1F8), (*(float *)0xC2AD200)));
                    *(unsigned int *)((a4 + 0x10)) = (short)(GetAverageAngle((*(int *)((a4 + 0x10))), (*(int *)(((int)stk + 4))), 0.199999988f));
                    psgStepBlend(a4);
                    psgPutShadow(a4);
                    FcvPlayBuffer((a4 + 0x3C), (*(int *)((a4 + 0x0))));
                } else {
                    FcvStoreBuffer((*(int *)((a4 + 0x34))), (a4 + 0x3C), (*(float *)((a4 + 0x38))));
                    nlMultiMatrix(0xC179180);
                    nlRotateAY(0x8000);
                    t21 = *(int *)0xC2AE33C;
                    if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                        u29 = (-(*(float *)((((signed char)(((t21 << 1) + t21) << 2) + 0xC0D5588) + 0x0))));
                        u30 = (-(*(float *)((((signed char)(((t21 << 1) + t21) << 2) + 0xC0D5588) + 0x4))));
                        u31 = (-(*(float *)((((signed char)(((t21 << 1) + t21) << 2) + 0xC0D5588) + 0x8))));
                    } else {
                        u29 = (*(float *)((((signed char)(((t21 << 1) + t21) << 2) + 0xC0D5588) + 0x0)));
                        u30 = (-(*(float *)((((signed char)(((t21 << 1) + t21) << 2) + 0xC0D5588) + 0x4))));
                        u31 = (-(*(float *)((((signed char)(((t21 << 1) + t21) << 2) + 0xC0D5588) + 0x8))));
                    }
                    nlTranslate(u29, u30, u31);
                    psgUpdatePartTracks(a4);
                    FcvPlayBuffer((a4 + 0x3C), (*(int *)((a4 + 0x0))));
                    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + 1.0f);
                    if ((*(int *)((a4 + 0x0))) != 32) {
                    } else {
                        t40 = *(int *)0xC2AE33C;
                        if (t40 != 0) {
                            if (t40 != 1) {
                                if (t40 != 2) {
                                    if (t40 != 3) {
                                    } else {
                                        u41 = *(float *)((a4 + 0x38));
                                        if ((int)u41 != 40) {
                                            if ((int)u41 != 73) {
                                                if ((int)u41 != 95) {
                                                } else {
                                                    u49 = 1.0f;
                                                    if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                                                        u49 = 0.0f;
                                                    }
                                                    carSpreadWheelLoad(u49, 0.75f, 90.0f);
                                                }
                                            } else {
                                                u56 = 1.0f;
                                                if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                                                    u56 = 0.0f;
                                                }
                                                carSpreadWheelLoad(u56, 0.75f, 60.0f);
                                            }
                                        } else {
                                            u63 = 0.0f;
                                            if (((*(signed char *)((a4 + 0x14B))) & 4) == 0) {
                                                u63 = 1.0f;
                                            }
                                            carSpreadWheelLoad(u63, 0.75f, 30.0f);
                                        }
                                    }
                                } else {
                                    if ((int)(*(float *)((a4 + 0x38))) == 45) {
                                        u75 = 1.0f;
                                        if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                                            u75 = 0.0f;
                                        }
                                        carSpreadWheelLoad(u75, 0.75f, 90.0f);
                                    }
                                }
                            } else {
                                u84 = *(float *)((a4 + 0x38));
                                if ((int)u84 != 17) {
                                    if ((int)u84 != 45) {
                                    } else {
                                        u89 = 1.0f;
                                        if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                                            u89 = 0.0f;
                                        }
                                        carSpreadWheelLoad(u89, 0.75f, 90.0f);
                                    }
                                } else {
                                    u96 = 1.0f;
                                    if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                                        u96 = 0.0f;
                                    }
                                    carSpreadWheelLoad(u96, 0.75f, 30.0f);
                                }
                            }
                        } else {
                            u105 = *(float *)((a4 + 0x38));
                            if ((int)u105 != 23) {
                                if ((int)u105 != 60) {
                                } else {
                                    u110 = 1.0f;
                                    if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                                        u110 = 0.0f;
                                    }
                                    carSpreadWheelLoad(u110, 0.75f, 90.0f);
                                }
                            } else {
                                u117 = 1.0f;
                                if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                                    u117 = 0.0f;
                                }
                                carSpreadWheelLoad(u117, 0.75f, 30.0f);
                            }
                        }
                    }
                    if (!((float)((*(int *)(((*(int *)((a4 + 0x34))) + 0x0))) - 1) > (*(float *)((a4 + 0x38))))) {
                        if ((*(int *)((a4 + 0x0))) == 32) {
                            ndPuru2Start((unsigned char)(*(signed char *)0xC1EE278), 0x1000, 0x0);
                        }
                        *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) | 0x40);
                        *(unsigned int *)0xC2AE33C = 0x0;
                        *(unsigned char *)(((0x148 + a4) + 0x0)) = ((*(signed char *)(((0x148 + a4) + 0x0))) | 0x80);
                        *(unsigned int *)0xC2AD590 = ((*(int *)0xC2AD590) & 0xFFFFFFFE);
                        if ((*(int *)0xC1EE20C) == 2) {
                            if ((*(int *)0xC1EE214) != 8) {
                            } else {
                                *(unsigned int *)0xC179120 = 0x1;
                            }
                        }
                    } else {
                        if (!(48.0f > (*(float *)((a4 + 0x38))))) {
                            *(unsigned char *)(((0x148 + a4) + 0x0)) = ((*(signed char *)(((0x148 + a4) + 0x0))) | 0x80);
                            *(unsigned int *)0xC2AD590 = ((*(int *)0xC2AD590) & 0xFFFFFFFE);
                            if (((*(int *)0xC1EE20C) == 2) && (t168 = *(int *)0xC1EE214, t168 == 8)) {
                                *(unsigned int *)0xC179120 = 0x1;
                            }
                        }
                    }
                }
                t196 = (nlPopMatrix(0x1));
            }
            t241 = t196;
        } else {
            nlPushMatrix(0x0);
            if (((*(signed char *)((a4 + 0x149))) & 128) != 0) {
                psgPutShadow(a4);
                psgStepBlend(a4);
                FcvPlayBuffer((a4 + 0x3C), (*(int *)((a4 + 0x0))));
            } else {
                t210 = psgRunToPoint(a4, (0x134 + a4));
                psgPutShadow(a4);
                psgUpdatePartTracks(a4);
                FcvStoreBuffer((*(int *)((a4 + 0x34))), (a4 + 0x3C), (*(float *)((a4 + 0x38))));
                FcvPlayBuffer((a4 + 0x3C), (*(int *)((a4 + 0x0))));
                *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x120 + a4) + 0x0))));
                *(unsigned int *)(((0x150 + a4) + 0x0)) = (((*(int *)(((0x150 + a4) + 0x0))) & 0x0) | ((unsigned int)((int)((unsigned int)((*(int *)((a4 + 0x150))) + 0x1) & 0xFFFFFFFF)) << 0));
                if (!(3.0f > t210) && (t223 = *(int *)(((0x150 + a4) + 0x0)), (unsigned int)t223 <= (unsigned int)0x258)) {
                } else {
                    *(unsigned int *)((a4 + 0x24)) = ((*(int *)((a4 + 0x24))) + 0x1);
                    *(unsigned int *)(((0x150 + a4) + 0x0)) = 0x0;
                    psgEnterState2(a4, (*(int *)((a4 + 0x24))));
                }
            }
            t241 = (nlPopMatrix(0x1));
        }
        t265 = t241;
    } else {
        nlPushMatrix(0x0);
        psgPutShadow(a4);
        psgUpdatePartTracks(a4);
        FcvPlayBuffer((a4 + 0x3C), (*(int *)((a4 + 0x0))));
        *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + 1.0f);
        if (!((*(float *)((a4 + 0x38))) > 10.0f)) {
        } else {
            t256 = *(int *)((a4 + 0x24));
            *(unsigned int *)((a4 + 0x24)) = (t256 + 0x1);
            psgEnterState2(a4, (t256 + 0x1));
            *(unsigned int *)(((0x150 + a4) + 0x0)) = 0x0;
        }
        t265 = (nlPopMatrix(0x1));
    }
    return t265;
}
