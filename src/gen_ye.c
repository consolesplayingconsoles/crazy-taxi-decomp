/* Straight-line functions with calls and guards (batch gen_ye): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FcvPlay(int, int, float);
int FcvPlayBuffer(int, int);
int FcvStoreBuffer(int, int, float);
int IsBoyFriend(int, int);
int Psg_SetPosPtr(int, int);
int SetEffect(int, int, int);
int SetLandmark(int);
int Sound_Request(int, int);
int Start_PoleMarriageKiss(void);
int Start_Proposal(int, int);
int carSpreadWheelLoad(float, float, float);
int nlArcTan2(float, float);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlGetTranslate(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
extern int nlRotateAZ();
int nlTranslate(float, float, float);
int nlTranslateV(int);
int nlUnitVector(int);
int psgEnterState4(int, int);
int psgFreeIpBuff(int);
int psgPutShadow(int);
float psgRunToPoint(int, int);
int psgSeatMatrix(int);
int psgStepBlend(int);
int psgUpdatePartTracks(int);
int psgFrameState4(int a4);

int psgFrameState4(int a4)
{
    int t5;
    int t15;
    float u188;
    float u189;
    float u208;
    float u209;
    int t323;
    int t342;
    int t345;
    float u370;
    float u371;
    float u349;
    float u373;
    float u382;
    float u397;
    float u425;
    int t484;
    int t494;
    int t560;
    float t561;
    int t612;
    int t611;
    int t644;
    int t664;
    float u670;
    int t709;
    int t722;
    float u734;
    int t771;
    int t622;
    float u250;
    float u251;
    float u225;
    float u226;
    float u165;
    float u177;
    float u217;
    float u218;
    float u199;
    float u200;
    float u475;
    float u476;
    float u285;
    float u286;
    float u461;
    float u462;
    float u319;
    float u320;
    float u447;
    float u448;
    float u418;
    float u419;
    float u359;
    float u360;
    float u407;
    float u408;
    float u392;
    float u393;
    float u435;
    float u436;
    int t615;
    int t572;
    int t573;
    int t582;
    int t656;
    int t721;
    int stk[37];

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 16) + 0x48)) = *(struct mv3 *)(0xC0D5F98); }
    if (((*(signed char *)((a4 + 0x148))) & 128) == 0) {
        *(unsigned int *)0xC13EEE4 = ((*(int *)0xC13EEE4) + 0x1);
    }
    t5 = *(int *)((a4 + 0x24));
    if (t5 != 0) {
        if (t5 == 1) {
            nlPushMatrix(0x0);
            psgPutShadow(a4);
            psgUpdatePartTracks(a4);
            FcvStoreBuffer((*(int *)((a4 + 0x34))), (a4 + 0x3C), (*(float *)((a4 + 0x38))));
            FcvPlayBuffer((a4 + 0x3C), (*(int *)((a4 + 0x0))));
            *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + 1.0f);
            t15 = *(int *)((a4 + 0x34));
            if ((t15 != 0xC95D7C4) && (t15 != 0xC960308)) {
                if ((t15 != 0xC9A23C8) && (t15 != 0xC9A3E8C)) {
                    if ((t15 != 0xC9BBD68) && ((t15 != 0xC9BE3CC) && ((t15 != 0xC9C0A30) && (t15 != 0xC9C20A4)))) {
                        if ((t15 == 0xC9C3718) || (t15 == 0xC9C51AC)) {
                            if ((((*(signed char *)((a4 + 0x14A))) & 2) == 0) && (u165 = *(float *)((a4 + 0x38)), !(29.0f > u165))) {
                                Sound_Request(0x3A9, 0x2);
                                *(unsigned char *)(((0x14A + a4) + 0x0)) = ((*(signed char *)(((0x14A + a4) + 0x0))) | 0x2);
                            }
                        }
                    } else {
                        if ((((*(signed char *)((a4 + 0x14A))) & 2) == 0) && (u177 = *(float *)((a4 + 0x38)), !(36.0f > u177))) {
                            Sound_Request(0x3A9, 0x2);
                            *(unsigned char *)(((0x14A + a4) + 0x0)) = ((*(signed char *)(((0x14A + a4) + 0x0))) | 0x2);
                        }
                    }
                } else {
                    u188 = *(float *)((a4 + 0x38));
                    u189 = *(float *)((a4 + 0x120));
                    if (!(((-(u189 * 0.5f)) + 66.0f) > u188) && (((-(u189 * 0.5f)) + 66.0f) > u188)) {
                        Sound_Request(0x9A9, 0x2);
                        *(unsigned char *)(((0x14A + a4) + 0x0)) = ((*(signed char *)(((0x14A + a4) + 0x0))) | 0x2);
                    } else {
                        u208 = u188;
                        u209 = (-(u189 * 0.5f));
                        if (!(((-(u189 * 0.5f)) + 90.0f) > u188)) {
                            if (((-(u189 * 0.5f)) + 90.0f) > u188) {
                                Sound_Request(0x9A9, 0x2);
                                *(unsigned char *)(((0x14A + a4) + 0x0)) = ((*(signed char *)(((0x14A + a4) + 0x0))) | 0x2);
                            } else {
                                u199 = u188;
                                u200 = (-(u189 * 0.5f));
                            }
                            u208 = u199;
                            u209 = u200;
                        }
                        u217 = u208;
                        u218 = u209;
                    }
                    u225 = u217;
                    u226 = u218;
                }
                u250 = u225;
                u251 = u226;
            } else {
                if (((*(signed char *)((a4 + 0x14A))) & 2) == 0) {
                    if (57.0f > (*(float *)((a4 + 0x38)))) {
                    } else {
                        Sound_Request(0x9A9, 0x2);
                        *(unsigned char *)(((0x14A + a4) + 0x0)) = ((*(signed char *)(((0x14A + a4) + 0x0))) | 0x2);
                    }
                }
            }
            if ((*(int *)((a4 + 0x34))) == 0xC9891B0) {
                { struct mv6 { int w[6]; }; *(struct mv6 *)((((int)stk + 16) + 0x18)) = *(struct mv6 *)(0xC0D5FA4); }
                if ((int)(*(float *)((a4 + 0x38))) != 69) {
                    u285 = u250;
                    u286 = u251;
                } else {
                    nlCalcPoint((((int)stk + 16) + 0x18), (((int)stk + 16) + 0xC));
                    nlCalcVector(((((int)stk + 16) + 0x18) + 0xC), ((int)stk + 16));
                    SetEffect((((int)stk + 16) + 0xC), ((int)stk + 16), 0x2);
                }
                u475 = u285;
                u476 = u286;
            } else {
                if ((*(int *)((a4 + 0x34))) == 0xC98B054) {
                    { struct mv6 { int w[6]; }; *(struct mv6 *)((((int)stk + 16) + 0x18)) = *(struct mv6 *)(0xC0D5FBC); }
                    if ((int)(*(float *)((a4 + 0x38))) != 69) {
                        u319 = u250;
                        u320 = u251;
                    } else {
                        nlCalcPoint((((int)stk + 16) + 0x18), (((int)stk + 16) + 0xC));
                        nlCalcVector(((((int)stk + 16) + 0x18) + 0xC), ((int)stk + 16));
                        SetEffect((((int)stk + 16) + 0xC), ((int)stk + 16), 0x2);
                    }
                    u461 = u319;
                    u462 = u320;
                } else {
                    t323 = *(int *)((a4 + 0x34));
                    if ((t323 != 0xC98CEF8) && ((t323 != 0xC98E9AC) && ((t323 != 0xC990460) && ((t323 != 0xC992634) && ((t323 != 0xC998E20) && (t323 != 0xC99AD04)))))) {
                        t342 = *(int *)((a4 + 0x34));
                        if ((t342 != 0xC9944D8) && (t342 != 0xC99697C)) {
                            t345 = *(int *)((a4 + 0x34));
                            u370 = u250;
                            u371 = u251;
                            if ((t345 == 0xC9C0A30) || ((t345 == 0xC9C20A4) || ((t345 == 0xC9BBD68) || (t345 == 0xC9BE3CC)))) {
                                if ((int)(*(float *)((a4 + 0x38))) == 36) {
                                    u349 = 1.0f;
                                    if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                                        u349 = 0.0f;
                                    }
                                    carSpreadWheelLoad(u349, 0.75f, 30.0f);
                                } else {
                                    u359 = u250;
                                    u360 = u251;
                                }
                                u370 = u359;
                                u371 = u360;
                            }
                            u418 = u370;
                            u419 = u371;
                        } else {
                            u373 = *(float *)((a4 + 0x38));
                            if (((int)u373 != 10) && (((int)u373 != 20) && (((int)u373 != 30) && ((int)u373 != 40)))) {
                                if ((int)u373 != 56) {
                                    u392 = u250;
                                    u393 = u251;
                                } else {
                                    u382 = 1.0f;
                                    if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                                        u382 = 0.0f;
                                    }
                                    carSpreadWheelLoad(u382, 0.75f, 30.0f);
                                }
                                u407 = u392;
                                u408 = u393;
                            } else {
                                u397 = 1.0f;
                                if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                                    u397 = 0.0f;
                                }
                                carSpreadWheelLoad(u397, 0.75f, 10.0f);
                            }
                            u418 = u407;
                            u419 = u408;
                        }
                        u447 = u418;
                        u448 = u419;
                    } else {
                        if ((int)(*(float *)((a4 + 0x38))) != 48) {
                            u435 = u250;
                            u436 = u251;
                        } else {
                            u425 = 1.0f;
                            if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                                u425 = 0.0f;
                            }
                            carSpreadWheelLoad(u425, 0.75f, 10.0f);
                        }
                        u447 = u435;
                        u448 = u436;
                    }
                    u461 = u447;
                    u462 = u448;
                }
                u475 = u461;
                u476 = u462;
            }
            if (!((float)((*(int *)(((*(int *)((a4 + 0x34))) + 0x0))) - 2) > (*(float *)((a4 + 0x38))))) {
                t484 = ((int (*)(int, float, float))(nlRotateAZ))((*(int *)((a4 + 0x80))), u475, u476);
                nlRotateAY((*(int *)((a4 + 0x7C))));
                nlRotateAX((*(int *)((a4 + 0x78))));
                nlCalcVector(0xC0D5554, (((int)stk + 16) + 0x3C));
                *(float *)(((int)stk + 80)) = 0.0f;
                nlUnitVector((((int)stk + 16) + 0x3C));
                *(unsigned int *)((a4 + 0x10)) = ((nlArcTan2((*(float *)(((int)stk + 76))), (*(float *)(((int)stk + 84))))) - 32768);
                *(unsigned int *)((a4 + 0x78)) = 0x0;
                *(unsigned int *)((a4 + 0x7C)) = 0x0;
                *(unsigned int *)((a4 + 0x80)) = 0x0;
                *(float *)((a4 + 0x11C)) = 0.0f;
                *(float *)((a4 + 0x120)) = 0.5f;
                t494 = *(int *)((a4 + 0x24));
                *(unsigned int *)((a4 + 0x24)) = (t494 + 0x1);
                psgEnterState4(a4, (t494 + 0x1));
                if (((*(signed char *)((a4 + 0x148))) & 128) != 0) {
                } else {
                    *(unsigned char *)(((0x148 + a4) + 0x0)) = ((*(signed char *)(((0x148 + a4) + 0x0))) | 0x80);
                    *(unsigned int *)0xC2AD590 = ((*(int *)0xC2AD590) & 0xFFFFFFFD);
                    SetLandmark(0x3);
                }
            } else {
                if (((*(signed char *)((a4 + 0x148))) & 128) != 0) {
                } else {
                    if ((*(float *)((((((int)(((unsigned int)(*(int *)(((0x148 + a4) + 0x0))) >> 21) & 0x3)) << 2) + (((int)stk + 16) + 0x48)) + 0x0))) > (float)(*(int *)0xC13EEE4)) {
                    } else {
                        *(unsigned char *)(((0x148 + a4) + 0x0)) = ((*(signed char *)(((0x148 + a4) + 0x0))) | 0x80);
                        *(unsigned int *)0xC2AD590 = ((*(int *)0xC2AD590) & 0xFFFFFFFD);
                        SetLandmark(0x3);
                    }
                }
            }
            t622 = (nlPopMatrix(0x1));
        } else {
            if (t5 == 2) {
                nlPushMatrix(0x0);
                if (((*(signed char *)((a4 + 0x149))) & 128) != 0) {
                    psgPutShadow(a4);
                    psgStepBlend(a4);
                    FcvPlayBuffer((a4 + 0x3C), (*(int *)((a4 + 0x0))));
                } else {
                    if ((*(int *)((a4 + 0x118))) != 0) {
                        psgFreeIpBuff(a4);
                    }
                    t560 = *(int *)((a4 + 0x140));
                    t561 = psgRunToPoint(a4, ((*(int *)((((*(int *)0xC1EE214) << 2) + (*(int *)((0xC13F3B0 + ((*(int *)0xC1EE210) << 2))))))) + (((t560 << 1) + t560) << 2)));
                    psgPutShadow(a4);
                    psgUpdatePartTracks(a4);
                    FcvPlay((*(int *)((a4 + 0x34))), (*(int *)((a4 + 0x0))), (*(float *)((a4 + 0x38))));
                    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x120 + a4) + 0x0))));
                    if (3.0f > t561) {
                        *(unsigned int *)((a4 + 0x24)) = ((*(int *)((a4 + 0x24))) + 0x1);
                        if (((*(int *)0xC1EE20C) == 2) && ((t572 = *(int *)0xC1EE214, t572 == 10) && (t573 = *(int *)((a4 + 0x0)), t573 == 33))) {
                            Start_PoleMarriageKiss();
                        }
                        if (((*(int *)0xC1EE20C) == 2) && (t582 = *(int *)0xC1EE214, t582 == 8)) {
                            if ((IsBoyFriend((*(int *)((a4 + 0x0))), 0x0)) != 0) {
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((a4 + 0x4)); }
                                Start_Proposal((*(int *)((a4 + 0x154))), 0x0);
                            }
                        }
                    }
                }
                t615 = (nlPopMatrix(0x1));
            } else {
                t612 = t5;
                if (t5 == 3) {
                    t611 = *(signed char *)(((0x149 + a4) + 0x0));
                    *(unsigned char *)(((0x149 + a4) + 0x0)) = (t611 | 0x40);
                    t612 = (t611 | 0x40);
                }
                t615 = t612;
            }
            t622 = t615;
        }
        t771 = t622;
    } else {
        nlPushMatrix(0x0);
        psgSeatMatrix(a4);
        if (((*(signed char *)((a4 + 0x149))) & 128) != 0) {
            psgStepBlend(a4);
            FcvPlayBuffer((a4 + 0x3C), (*(int *)((a4 + 0x0))));
        } else {
            psgUpdatePartTracks(a4);
            FcvStoreBuffer((*(int *)((a4 + 0x34))), (a4 + 0x3C), (*(float *)((a4 + 0x38))));
            FcvPlayBuffer((a4 + 0x3C), (*(int *)((a4 + 0x0))));
            *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + 1.0f);
            t644 = *(int *)((a4 + 0x34));
            if ((t644 != 0xC956FCC) && ((t644 != 0xC95A230) && ((t644 != 0xC95D7C4) && ((t644 != 0xC960308) && ((t644 != 0xC962F0C) && ((t644 != 0xC9659C0) && ((t644 != 0xC9684A4) && (t644 != 0xC96B138)))))))) {
                if ((float)((*(int *)(((*(int *)((a4 + 0x34))) + 0x0))) - 2) > (*(float *)((a4 + 0x38)))) {
                } else {
                    *(unsigned int *)((a4 + 0x24)) = ((*(int *)((a4 + 0x24))) + 0x1);
                    nlCalcVector(0xC0D5578, (((int)stk + 16) + 0x3C));
                    *(float *)(((int)stk + 80)) = 0.0f;
                    nlUnitVector((((int)stk + 16) + 0x3C));
                    *(unsigned int *)((a4 + 0x10)) = (nlArcTan2((*(float *)(((int)stk + 76))), (*(float *)(((int)stk + 84)))));
                    nlPushMatrix(0xC179180);
                    if (((*(int *)0xC1EE20C) == 2) && (t656 = *(int *)0xC1EE214, t656 == 14)) {
                        if (((*(signed char *)((a4 + 0x14B))) & 4) == 0) {
                            *(unsigned int *)((a4 + 0x10)) = ((*(int *)((a4 + 0x10))) + 0x8000);
                        }
                        t664 = *(signed char *)((a4 + 0x154));
                        nlTranslateV(((signed char)(((t664 << 1) + t664) << 2) + 0xC13F3BC));
                    }
                    u670 = -14.8279991f;
                    if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                        u670 = 14.8279991f;
                    }
                    nlTranslate(u670, 0.0f, -6.46399975f);
                    nlGetTranslate((((int)stk + 16) + 0x30));
                    Psg_SetPosPtr(a4, (((int)stk + 16) + 0x30));
                    nlPopMatrix(0x1);
                    psgEnterState4(a4, (*(int *)((a4 + 0x24))));
                }
            } else {
                if ((float)((*(int *)(((*(int *)((a4 + 0x34))) + 0x0))) - 2) > (*(float *)((a4 + 0x38)))) {
                    if (((*(signed char *)((a4 + 0x148))) & 128) != 0) {
                    } else {
                        if ((int)(*(int *)0xC13EEE4) < (int)0xAA) {
                        } else {
                            *(unsigned char *)(((0x148 + a4) + 0x0)) = ((*(signed char *)(((0x148 + a4) + 0x0))) | 0x80);
                            *(unsigned int *)0xC2AD590 = ((*(int *)0xC2AD590) & 0xFFFFFFFD);
                            SetLandmark(0x3);
                        }
                    }
                } else {
                    t709 = ((int (*)(int))(nlRotateAZ))((*(int *)((a4 + 0x80))));
                    nlRotateAY((*(int *)((a4 + 0x7C))));
                    nlRotateAX((*(int *)((a4 + 0x78))));
                    nlCalcVector(0xC0D5554, (((int)stk + 16) + 0x3C));
                    *(float *)(((int)stk + 80)) = 0.0f;
                    nlUnitVector((((int)stk + 16) + 0x3C));
                    *(unsigned int *)((a4 + 0x10)) = ((nlArcTan2((*(float *)(((int)stk + 76))), (*(float *)(((int)stk + 84))))) - 32768);
                    *(unsigned int *)((a4 + 0x78)) = 0x0;
                    *(unsigned int *)((a4 + 0x7C)) = 0x0;
                    *(unsigned int *)((a4 + 0x80)) = 0x0;
                    nlPushMatrix(0xC179180);
                    if (((*(int *)0xC1EE20C) == 2) && (t721 = *(int *)0xC1EE214, t721 == 14)) {
                        t722 = *(signed char *)((a4 + 0x154));
                        nlTranslateV(((signed char)(((t722 << 1) + t722) << 2) + 0xC13F3BC));
                        if (((*(signed char *)((a4 + 0x14B))) & 4) == 0) {
                            *(unsigned int *)((a4 + 0x10)) = ((*(int *)((a4 + 0x10))) + 0x8000);
                        }
                    }
                    u734 = -14.8279991f;
                    if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                        u734 = 14.8279991f;
                    }
                    nlTranslate(u734, 7.5f, -6.46399975f);
                    nlGetTranslate((((int)stk + 16) + 0x30));
                    Psg_SetPosPtr(a4, (((int)stk + 16) + 0x30));
                    nlPopMatrix(0x1);
                    *(unsigned int *)((a4 + 0x24)) = 0x2;
                    psgEnterState4(a4, 0x2);
                    if (((*(signed char *)((a4 + 0x148))) & 128) != 0) {
                    } else {
                        *(unsigned char *)(((0x148 + a4) + 0x0)) = ((*(signed char *)(((0x148 + a4) + 0x0))) | 0x80);
                        *(unsigned int *)0xC2AD590 = ((*(int *)0xC2AD590) & 0xFFFFFFFD);
                        SetLandmark(0x3);
                    }
                }
            }
        }
        t771 = (nlPopMatrix(0x1));
    }
    return t771;
}
