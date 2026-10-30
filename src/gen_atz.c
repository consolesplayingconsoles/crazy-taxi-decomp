/* Straight-line functions with calls and guards (batch gen_atz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int FcvPlay(int, int, float);
int FcvPlayBuffer(int, int);
int FcvStoreBuffer(int, int, float);
int IsBoyFriend(int, int);
int Psg_SetPosPtr(int, int, int, int, int, int, int);
int SetEffect(int, int, int);
int SetLandmark(int);
int Sound_Request(int, int);
int Start_PoleMarriageKiss(void);
int Start_Proposal(int, int, Stk3);
int abs(int);
int carSpreadWheelLoad(float, float, float);
int convergeRotLimit(int, int, float, float);
int courseStatusEntry(int, int);
int courseStatusGet(int, int, int, int);
int getYXZrot(int);
int nlAddVector(int, int);
extern int nlArcTan2();
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlGetTranslate(int);
float nlLength(int, int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int nlUnitMatrix(void);
int nlUnitVector(int);
int psgEnterState4(int, int);
int psgFreeIpBuff(int);
int psgPutShadow(int);
float psgRunToPoint(int, int);
int psgSeatMatrix(int);
int psgStepBlend(int);
int psgUpdatePartTracks(int);
int psgFrameState4(int a4);
float cableControlExec(int a4, float f4, float f5);

int psgFrameState4(int a4)
{
    int stk[37];
    register int t5;
    register int t15;
    register float u209;
    register float u210;
    register float u229;
    register float u230;
    register int t345;
    register int t364;
    register int t367;
    register float u392;
    register float u393;
    register float u371;
    register float u395;
    register float u404;
    register float u419;
    register float u447;
    register int t506;
    register int t516;
    register int t582;
    register float t583;
    register int t606;
    register int t634;
    register int t633;
    register int t666;
    register int t686;
    register float u692;
    register int t731;
    register int t744;
    register float u756;
    register int t793;
    register int t644;
    register float u272;
    register float u273;
    register float u246;
    register float u247;
    register float u238;
    register float u239;
    register float u220;
    register float u221;
    register float u497;
    register float u498;
    register float u307;
    register float u308;
    register float u483;
    register float u484;
    register float u341;
    register float u342;
    register float u469;
    register float u470;
    register float u440;
    register float u441;
    register float u381;
    register float u382;
    register float u429;
    register float u430;
    register float u414;
    register float u415;
    register float u457;
    register float u458;
    register int t637;
    register int t594;
    register int t595;
    register int t604;
    register int t678;
    register int t743;

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
                            if (((*(signed char *)((a4 + 0x14A))) & 2) == 0) {
                                if (!(29.0f > (*(float *)((a4 + 0x38))))) {
                                    Sound_Request(0x3A9, 0x2);
                                    *(unsigned char *)(((0x14A + a4) + 0x0)) = ((*(signed char *)(((0x14A + a4) + 0x0))) | 0x2);
                                }
                            }
                        }
                    } else {
                        if (((*(signed char *)((a4 + 0x14A))) & 2) == 0) {
                            if (!(36.0f > (*(float *)((a4 + 0x38))))) {
                                Sound_Request(0x3A9, 0x2);
                                *(unsigned char *)(((0x14A + a4) + 0x0)) = ((*(signed char *)(((0x14A + a4) + 0x0))) | 0x2);
                            }
                        }
                    }
                } else {
                    u209 = *(float *)((a4 + 0x38));
                    u210 = *(float *)((a4 + 0x120));
                    if (!(((-(u210 * 0.5f)) + 66.0f) > u209) && (((-(u210 * 0.5f)) + 66.0f) > u209)) {
                        Sound_Request(0x9A9, 0x2);
                        *(unsigned char *)(((0x14A + a4) + 0x0)) = ((*(signed char *)(((0x14A + a4) + 0x0))) | 0x2);
                    } else {
                        u229 = u209;
                        u230 = (-(u210 * 0.5f));
                        if (!(((-(u210 * 0.5f)) + 90.0f) > u209)) {
                            if (((-(u210 * 0.5f)) + 90.0f) > u209) {
                                Sound_Request(0x9A9, 0x2);
                                *(unsigned char *)(((0x14A + a4) + 0x0)) = ((*(signed char *)(((0x14A + a4) + 0x0))) | 0x2);
                            } else {
                                u220 = u209;
                                u221 = (-(u210 * 0.5f));
                            }
                            u229 = u220;
                            u230 = u221;
                        }
                        u238 = u229;
                        u239 = u230;
                    }
                    u246 = u238;
                    u247 = u239;
                }
                u272 = u246;
                u273 = u247;
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
                    u307 = u272;
                    u308 = u273;
                } else {
                    nlCalcPoint((((int)stk + 16) + 0x18), (((int)stk + 16) + 0xC));
                    nlCalcVector(((((int)stk + 16) + 0x18) + 0xC), ((int)stk + 16));
                    SetEffect((((int)stk + 16) + 0xC), ((int)stk + 16), 0x2);
                }
                u497 = u307;
                u498 = u308;
            } else {
                if ((*(int *)((a4 + 0x34))) == 0xC98B054) {
                    { struct mv6 { int w[6]; }; *(struct mv6 *)((((int)stk + 16) + 0x18)) = *(struct mv6 *)(0xC0D5FBC); }
                    if ((int)(*(float *)((a4 + 0x38))) != 69) {
                        u341 = u272;
                        u342 = u273;
                    } else {
                        nlCalcPoint((((int)stk + 16) + 0x18), (((int)stk + 16) + 0xC));
                        nlCalcVector(((((int)stk + 16) + 0x18) + 0xC), ((int)stk + 16));
                        SetEffect((((int)stk + 16) + 0xC), ((int)stk + 16), 0x2);
                    }
                    u483 = u341;
                    u484 = u342;
                } else {
                    t345 = *(int *)((a4 + 0x34));
                    if ((t345 != 0xC98CEF8) && ((t345 != 0xC98E9AC) && ((t345 != 0xC990460) && ((t345 != 0xC992634) && ((t345 != 0xC998E20) && (t345 != 0xC99AD04)))))) {
                        t364 = *(int *)((a4 + 0x34));
                        if ((t364 != 0xC9944D8) && (t364 != 0xC99697C)) {
                            t367 = *(int *)((a4 + 0x34));
                            u392 = u272;
                            u393 = u273;
                            if ((t367 == 0xC9C0A30) || ((t367 == 0xC9C20A4) || ((t367 == 0xC9BBD68) || (t367 == 0xC9BE3CC)))) {
                                if ((int)(*(float *)((a4 + 0x38))) == 36) {
                                    u371 = 1.0f;
                                    if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                                        u371 = 0.0f;
                                    }
                                    carSpreadWheelLoad(u371, 0.75f, 30.0f);
                                } else {
                                    u381 = u272;
                                    u382 = u273;
                                }
                                u392 = u381;
                                u393 = u382;
                            }
                            u440 = u392;
                            u441 = u393;
                        } else {
                            u395 = *(float *)((a4 + 0x38));
                            if (((int)u395 != 10) && (((int)u395 != 20) && (((int)u395 != 30) && ((int)u395 != 40)))) {
                                if ((int)u395 != 56) {
                                    u414 = u272;
                                    u415 = u273;
                                } else {
                                    u404 = 1.0f;
                                    if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                                        u404 = 0.0f;
                                    }
                                    carSpreadWheelLoad(u404, 0.75f, 30.0f);
                                }
                                u429 = u414;
                                u430 = u415;
                            } else {
                                u419 = 1.0f;
                                if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                                    u419 = 0.0f;
                                }
                                carSpreadWheelLoad(u419, 0.75f, 10.0f);
                            }
                            u440 = u429;
                            u441 = u430;
                        }
                        u469 = u440;
                        u470 = u441;
                    } else {
                        if ((int)(*(float *)((a4 + 0x38))) != 48) {
                            u457 = u272;
                            u458 = u273;
                        } else {
                            u447 = 1.0f;
                            if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                                u447 = 0.0f;
                            }
                            carSpreadWheelLoad(u447, 0.75f, 10.0f);
                        }
                        u469 = u457;
                        u470 = u458;
                    }
                    u483 = u469;
                    u484 = u470;
                }
                u497 = u483;
                u498 = u484;
            }
            if (!((float)((*(int *)(((*(int *)((a4 + 0x34))) + 0x0))) - 2) > (*(float *)((a4 + 0x38))))) {
                t506 = ((int (*)(int, float, float))(nlRotateAZ))((*(int *)((a4 + 0x80))), u497, u498);
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
                t516 = *(int *)((a4 + 0x24));
                *(unsigned int *)((a4 + 0x24)) = (t516 + 0x1);
                psgEnterState4(a4, (t516 + 0x1));
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
            t644 = (nlPopMatrix(0x1));
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
                    t582 = *(int *)((a4 + 0x140));
                    t583 = psgRunToPoint(a4, ((*(int *)((((*(int *)0xC1EE214) << 2) + (*(int *)((0xC13F3B0 + ((*(int *)0xC1EE210) << 2))))))) + (((t582 << 1) + t582) << 2)));
                    psgPutShadow(a4);
                    psgUpdatePartTracks(a4);
                    FcvPlay((*(int *)((a4 + 0x34))), (*(int *)((a4 + 0x0))), (*(float *)((a4 + 0x38))));
                    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x120 + a4) + 0x0))));
                    if (3.0f > t583) {
                        *(unsigned int *)((a4 + 0x24)) = ((*(int *)((a4 + 0x24))) + 0x1);
                        if (((*(int *)0xC1EE20C) == 2) && ((t594 = *(int *)0xC1EE214, t594 == 10) && (t595 = *(int *)((a4 + 0x0)), t595 == 33))) {
                            Start_PoleMarriageKiss();
                        }
                        if (((*(int *)0xC1EE20C) == 2) && (t604 = *(int *)0xC1EE214, t604 == 8)) {
                            t606 = IsBoyFriend((*(int *)((a4 + 0x0))), 0x0);
                            if (t606 != 0) {
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((a4 + 0x4)); }
                                Start_Proposal((*(int *)((a4 + 0x154))), 0x0, *(Stk3 *)(((int)stk + 4)));
                            }
                        }
                    }
                }
                t637 = (nlPopMatrix(0x1));
            } else {
                t634 = t5;
                if (t5 == 3) {
                    t633 = *(signed char *)(((0x149 + a4) + 0x0));
                    *(unsigned char *)(((0x149 + a4) + 0x0)) = (t633 | 0x40);
                    t634 = (t633 | 0x40);
                }
                t637 = t634;
            }
            t644 = t637;
        }
        t793 = t644;
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
            t666 = *(int *)((a4 + 0x34));
            if ((t666 != 0xC956FCC) && ((t666 != 0xC95A230) && ((t666 != 0xC95D7C4) && ((t666 != 0xC960308) && ((t666 != 0xC962F0C) && ((t666 != 0xC9659C0) && ((t666 != 0xC9684A4) && (t666 != 0xC96B138)))))))) {
                if ((float)((*(int *)(((*(int *)((a4 + 0x34))) + 0x0))) - 2) > (*(float *)((a4 + 0x38)))) {
                } else {
                    *(unsigned int *)((a4 + 0x24)) = ((*(int *)((a4 + 0x24))) + 0x1);
                    nlCalcVector(0xC0D5578, (((int)stk + 16) + 0x3C));
                    *(float *)(((int)stk + 80)) = 0.0f;
                    nlUnitVector((((int)stk + 16) + 0x3C));
                    *(unsigned int *)((a4 + 0x10)) = (nlArcTan2((*(float *)(((int)stk + 76))), (*(float *)(((int)stk + 84)))));
                    nlPushMatrix(0xC179180);
                    if (((*(int *)0xC1EE20C) == 2) && (t678 = *(int *)0xC1EE214, t678 == 14)) {
                        if (((*(signed char *)((a4 + 0x14B))) & 4) == 0) {
                            *(unsigned int *)((a4 + 0x10)) = ((*(int *)((a4 + 0x10))) + 0x8000);
                        }
                        t686 = *(signed char *)((a4 + 0x154));
                        nlTranslateV(((signed char)(((t686 << 1) + t686) << 2) + 0xC13F3BC));
                    }
                    u692 = -14.8279991f;
                    if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                        u692 = 14.8279991f;
                    }
                    nlTranslate(u692, 0.0f, -6.46399975f);
                    nlGetTranslate((((int)stk + 16) + 0x30));
                    Psg_SetPosPtr(a4, (((int)stk + 16) + 0x30), 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8));
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
                    t731 = ((int (*)(int))(nlRotateAZ))((*(int *)((a4 + 0x80))));
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
                    if (((*(int *)0xC1EE20C) == 2) && (t743 = *(int *)0xC1EE214, t743 == 14)) {
                        t744 = *(signed char *)((a4 + 0x154));
                        nlTranslateV(((signed char)(((t744 << 1) + t744) << 2) + 0xC13F3BC));
                        if (((*(signed char *)((a4 + 0x14B))) & 4) == 0) {
                            *(unsigned int *)((a4 + 0x10)) = ((*(int *)((a4 + 0x10))) + 0x8000);
                        }
                    }
                    u756 = -14.8279991f;
                    if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                        u756 = 14.8279991f;
                    }
                    nlTranslate(u756, 7.5f, -6.46399975f);
                    nlGetTranslate((((int)stk + 16) + 0x30));
                    Psg_SetPosPtr(a4, (((int)stk + 16) + 0x30), 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8));
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
        t793 = (nlPopMatrix(0x1));
    }
    return t793;
}

float cableControlExec(int a4, float f4, float f5)
{
    int stk[17];

    register int R1;
    register int R2;
    register int R5;
    register int R6;
    register int R7;
    int R12;
    register float F0;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register float w0_0;
    register float w0_1;
    v0_5 = a4;
    w0_0 = f4;
    w0_0 = f5;
    v0_3 = *(int *)(((*(int *)0xC2A1B30) + 0x64));
    v0_6 = (0x64);
    v0_2 = (0xC2A6690);
    v0_4 = (0x121);
    v0_0 = (v0_5);
    v0_5 = (v0_3);
    v0_1 = (0x0);
    if (((int)v0_3 >= 0)) goto L_C047CB2;
    L_C0482AE:;
    return F0;
    L_C047CB2:;
    if (((int)v0_5 <= (int)0x5)) goto L_C047CBC;
    goto L_C0482AE;
    L_C047CBC:;
    v0_3 = (v0_1);
    L_C048140:;
    R12 = (0x2);
    v0_6 = (0xC0785D0);
    if (((int)v0_3 >= (int)0x2)) goto L_C04814C;
    v0_5 = *(int *)(((v0_0 + 0x20) + (v0_3 << 2)));
    v0_6 = (v0_5);
    R12 = (0xB4);
    w0_1 = (0.5f);
    w0_0 = (24.0f);
    if ((v0_5 == 0)) goto L_C047D3A;
    if ((v0_6 == 1)) goto L_C047DC8;
    if ((v0_6 != 2)) goto L_C047D16;
    v0_5 = (v0_0);
    R5 = (v0_1);
    R6 = ((((v0_3 << 1) + v0_3) << 2));
    R7 = ((v0_4 - v0_3));
    v0_6 = ((v0_3 << 2));
    L_C047E72:;
    v0_7 = *(int *)((v0_5 + 0x8));
    v0_5 = (v0_7);
    if (((*(int *)((v0_7 + 0x80))) != R7)) goto L_C047EE2;
    if (((int)(*(int *)((v0_5 + 0xD4))) <= (int)0x122)) goto L_C047EE2;
    if ((!(0.00199999986f > _builtin_fabsf((*(float *)((v0_5 + 0xCC))))))) goto L_C047EE2;
    *(unsigned int *)((((v0_0 + 0x20) + v0_6) + 0x0)) = ((*(int *)((((v0_0 + 0x20) + v0_6) + 0x0))) + 0x1);
    *(unsigned int *)(((int)stk + 8)) = (*(int *)((((R6 + (*(int *)((v0_2 + 0x0)))) + 0xD80) + 0x0)));
    *(int *)((int)stk + 4) = ((v0_0 + 0x48) + v0_6);
    v0_5 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 12)) = (v0_5 + 0x18);
    v0_7 = *(int *)(((int)stk + 8));
    *(unsigned int *)((((v0_0 + 0x48) + v0_6) + 0x0)) = (unsigned short)(((int (*)(float, float))(nlArcTan2))(((*(float *)(((v0_5 + 0x18) + 0x0))) - (*(float *)((v0_7 + 0x0)))), ((*(float *)(((v0_5 + 0x18) + 0x8))) - (*(float *)((v0_7 + 0x8))))));
    *(unsigned int *)((((v0_0 + 0x50) + v0_6) + 0x0)) = R12;
    L_C0480C8:;
    *(unsigned int *)0xC2A4E44 = ((*(int *)0xC2A4E44) & (~((int)0xF << (int)(*(int *)((((v0_0 + 0x18) + (v0_3 << 2)) + 0x0))))));
    *(unsigned int *)0xC2A4E44 = ((*(int *)0xC2A4E44) | ((int)(*(int *)((((v0_0 + 0x20) + (v0_3 << 2)) + 0x0))) << (int)(*(int *)((((v0_0 + 0x18) + (v0_3 << 2)) + 0x0)))));
    v0_5 = (courseStatusGet((v0_4 - v0_3), ((*(int *)(((*(int *)(((((((v0_4 - v0_3) << 1) + (v0_4 - v0_3)) << 2) + (*(int *)((v0_2 + 0x0)))) + 0x4))) + 0x0))) - 17), 0x0, 0x17)) == 0;
    if (v0_5) goto L_C04813E;
    courseStatusEntry((v0_4 - v0_3), ((*(int *)(((*(int *)(((((((v0_4 - v0_3) << 1) + (v0_4 - v0_3)) << 2) + (*(int *)((v0_2 + 0x0)))) + 0x4))) + 0x0))) - 18));
    L_C04813E:;
    v0_3 = ((v0_3 + 0x1));
    goto L_C048140;
    L_C047EE2:;
    v0_7 = (int)(R5 + 0x1) < (int)0x4;
    R5 = ((R5 + 0x1));
    if (v0_7) goto L_C047E72;
    goto L_C0480C8;
    L_C047D16:;
    if ((v0_6 != 3)) goto L_C047D1E;
    v0_5 = *(int *)((((v0_3 << 2) + (v0_0 + 0x50)) + 0x0));
    *(unsigned int *)((((v0_3 << 2) + (v0_0 + 0x50)) + 0x0)) = (v0_5 - 1);
    if (!(((v0_5 - 1) != 0))) goto L_C048078;
    goto L_C0480C8;
    L_C048078:;
    *(unsigned int *)((((v0_3 << 2) + (v0_0 + 0x20)) + 0x0)) = ((*(int *)((((v0_3 << 2) + (v0_0 + 0x20)) + 0x0))) + 0x1);
    goto L_C0480C8;
    L_C047D1E:;
    if ((v0_6 != 4)) goto L_C047D26;
    if (((*(int *)((((v0_0 + 0x40) + (v0_3 << 2)) + 0x0))) != (*(int *)((((v0_0 + 0x48) + (v0_3 << 2)) + 0x0))))) goto L_C047F3C;
    *(unsigned int *)((((v0_0 + 0x20) + (v0_3 << 2)) + 0x0)) = ((*(int *)((((v0_0 + 0x20) + (v0_3 << 2)) + 0x0))) + 0x1);
    *(unsigned int *)((((v0_3 << 2) + (v0_0 + 0x50)) + 0x0)) = R12;
    goto L_C0480C8;
    L_C047F3C:;
    v0_5 = convergeRotLimit((*(int *)((((v0_0 + 0x40) + (v0_3 << 2)) + 0x0))), (*(int *)((((v0_0 + 0x48) + (v0_3 << 2)) + 0x0))), w0_1, w0_0);
    *(unsigned int *)(((int)stk + 8)) = v0_5;
    v0_5 = (int)(abs(v0_5)) < (int)0x18;
    R12 = (v0_0);
    if (v0_5) goto L_C047F98;
    *(unsigned int *)((((v0_3 << 2) + (v0_0 + 0x40)) + 0x0)) = ((*(int *)((((v0_3 << 2) + (v0_0 + 0x40)) + 0x0))) + (*(int *)(((int)stk + 8))));
    L_C047FAC:;
    *(unsigned int *)(((int)stk + 12)) = (signed char)(((v0_3 << 1) + v0_3) << 2);
    v0_5 = (v0_1);
    R5 = ((v0_4 - v0_3));
    L_C047FC0:;
    v0_6 = *(int *)((R12 + 0x8));
    R12 = (v0_6);
    if (((*(int *)((v0_6 + 0x80))) != R5)) goto L_C048058;
    if (((int)(*(int *)((R12 + 0xD4))) <= (int)0x122)) goto L_C048058;
    nlPushUnitMatrix();
    nlRotateAY((unsigned short)(*(short *)((R12 + 0xA6))));
    nlRotateAX((unsigned short)(*(short *)((R12 + 0xA4))));
    nlRotateAZ((unsigned short)(*(short *)((R12 + 0xA8))));
    nlRotateAY((*(int *)(((int)stk + 8))));
    getYXZrot((0xA4 + R12));
    nlSubVector3op((((int)stk + 8) + 0x8), (R12 + 0x14), ((v0_0 + 0x28) + (*(int *)(((int)stk + 12)))));
    nlUnitMatrix();
    nlRotateAY((*(int *)(((int)stk + 8))));
    nlCalcVector((((int)stk + 8) + 0x8), (((int)stk + 8) + 0x8));
    nlAddVector((((int)stk + 8) + 0x8), ((v0_0 + 0x28) + (*(int *)(((int)stk + 12)))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R12 + 0x14)) = *(struct mv3 *)((((int)stk + 8) + 0x8)); }
    nlPopMatrix(0x1);
    goto L_C0480C8;
    L_C048058:;
    v0_6 = (int)(v0_5 + 0x1) < (int)0x4;
    v0_5 = ((v0_5 + 0x1));
    if (v0_6) goto L_C047FC0;
    goto L_C0480C8;
    L_C047F98:;
    *(unsigned int *)((((v0_0 + 0x40) + (v0_3 << 2)) + 0x0)) = (*(int *)((((v0_0 + 0x48) + (v0_3 << 2)) + 0x0)));
    goto L_C047FAC;
    L_C047D26:;
    if ((v0_6 != 5)) goto L_C047D2E;
    v0_5 = *(int *)((((v0_3 << 2) + (v0_0 + 0x50)) + 0x0));
    *(unsigned int *)((((v0_3 << 2) + (v0_0 + 0x50)) + 0x0)) = (v0_5 - 1);
    if (((v0_5 - 1) != 0)) goto L_C0480C8;
    goto L_C048078;
    L_C047D2E:;
    if ((v0_6 != 6)) goto L_C047D36;
    *(unsigned int *)((((v0_3 << 2) + (v0_0 + 0x20)) + 0x0)) = v0_1;
    goto L_C0480C8;
    L_C047D36:;
    goto L_C0480C8;
    L_C047DC8:;
    v0_5 = ((v0_3 << 2));
    if (((*(int *)((((v0_0 + 0x40) + (v0_3 << 2)) + 0x0))) != (*(int *)((((v0_0 + 0x48) + (v0_3 << 2)) + 0x0))))) goto L_C047DE4;
    goto L_C048078;
    L_C047DE4:;
    *(unsigned int *)((((v0_0 + 0x40) + (v0_3 << 2)) + 0x0)) = ((*(int *)((((v0_0 + 0x40) + (v0_3 << 2)) + 0x0))) + (convergeRotLimit((*(int *)((((v0_0 + 0x40) + (v0_3 << 2)) + 0x0))), (*(int *)((((v0_0 + 0x48) + (v0_3 << 2)) + 0x0))), w0_1, w0_0)));
    v0_5 = (int)(abs((short)((*(int *)((((v0_0 + 0x40) + (v0_3 << 2)) + 0x0))) - (*(int *)((((v0_0 + 0x48) + (v0_3 << 2)) + 0x0)))))) < (int)0x18;
    if (v0_5) goto L_C047E28;
    goto L_C0480C8;
    L_C047E28:;
    *(unsigned int *)((((v0_0 + 0x40) + (v0_3 << 2)) + 0x0)) = (*(int *)((((v0_0 + 0x48) + (v0_3 << 2)) + 0x0)));
    goto L_C0480C8;
    L_C047D3A:;
    v0_5 = (courseStatusGet((v0_4 - v0_3), ((*(int *)(((*(int *)(((((((v0_4 - v0_3) << 1) + (v0_4 - v0_3)) << 2) + (*(int *)((v0_2 + 0x0)))) + 0x4))) + 0x0))) - 1), 0x0, 0xFFFFFFF0)) != 0;
    if (v0_5) goto L_C047D64;
    goto L_C0480C8;
    L_C047D64:;
    *(unsigned int *)((((v0_0 + 0x20) + (v0_3 << 2)) + 0x0)) = ((*(int *)((((v0_0 + 0x20) + (v0_3 << 2)) + 0x0))) + 0x1);
    v0_6 = *(int *)((v0_2 + 0x0));
    v0_5 = *(int *)(((((((v0_4 - v0_3) << 1) + (v0_4 - v0_3)) << 2) + v0_6) + 0x0));
    v0_6 = *(int *)(((*(int *)(((((((v0_4 - v0_3) << 1) + (v0_4 - v0_3)) << 2) + v0_6) + 0x4))) + 0x0));
    *(unsigned int *)((((v0_0 + 0x40) + (v0_3 << 2)) + 0x0)) = ((*(int *)((((v0_0 + 0x40) + (v0_3 << 2)) + 0x0))) + 0x8000);
    *(unsigned int *)(((int)stk + 8)) = ((v0_5 + ((((v0_6 - 3) << 1) + (v0_6 - 3)) << 2)) + 0x18);
    *(unsigned int *)((((v0_3 << 2) + (v0_0 + 0x48)) + 0x0)) = (unsigned short)(((int (*)(int, int, int, int, float, float))(nlArcTan2))(0x8000, R5, R6, R7, ((*(float *)((((v0_5 + ((((v0_6 - 3) << 1) + (v0_6 - 3)) << 2)) + 0x18) + 0x0))) - (*(float *)(((v0_5 + ((((v0_6 - 3) << 1) + (v0_6 - 3)) << 2)) + 0x0)))), ((*(float *)((((v0_5 + ((((v0_6 - 3) << 1) + (v0_6 - 3)) << 2)) + 0x18) + 0x8))) - (*(float *)(((v0_5 + ((((v0_6 - 3) << 1) + (v0_6 - 3)) << 2)) + 0x8))))));
    goto L_C0480C8;
    L_C04814C:;
    v0_3 = (courseStatusGet(v0_4, 0x7, 0x0, 0xE)) == 0;
    if (v0_3) goto L_C04816E;
    courseStatusEntry(0xE, ((*(int *)(((*(int *)((((*(int *)((v0_2 + 0x0))) + 0xA8) + 0x4))) + 0x0))) - 2));
    L_C04816E:;
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    *(unsigned int *)(((int)stk + 8)) = v0_1;
    v0_5 = (v0_0);
    R5 = (0x4);
    L_C048196:;
    if ((R5 != 0)) goto L_C048178;
    v0_3 = (v0_1);
    w0_0 = (800.0f);
    L_C048200:;
    if (((int)v0_3 < (int)R12)) goto L_C0481B8;
    v0_3 = (0xC072168);
    if (((*(int *)(((int)stk + 8))) == ((*(int *)((v0_0 + 0x58))) & 0x1))) goto L_C04823A;
    if (((*(int *)(((int)stk + 8))) == 0)) goto L_C048228;
    *(unsigned int *)((v0_0 + 0x58)) = ((*(int *)((v0_0 + 0x58))) | 0x1);
    v0_5 = (0x310A9);
    R5 = (0x1);
    L_C048236:;
    Sound_Request(v0_5, R5);
    L_C04823A:;
    v0_6 = (0x58);
    if (((*(int *)(((int)stk + 12))) == ((*(int *)((v0_0 + 0x58))) & R12))) goto L_C04826C;
    if (((*(int *)(((int)stk + 12))) == 0)) goto L_C04825A;
    *(unsigned int *)((v0_0 + 0x58)) = ((*(int *)((v0_0 + 0x58))) | R12);
    v0_5 = (0x11A9);
    R5 = (0x1);
    L_C048268:;
    v0_6 = ((Sound_Request(v0_5, R5)));
    L_C04826C:;
    v0_3 = (v0_1);
    L_C0482AA:;
    if (((int)v0_3 < (int)R12)) goto L_C048270;
    goto L_C0482AE;
    L_C048270:;
    nlPushMatrix(0x0);
    nlTranslateV(((signed char)(((v0_3 << 1) + v0_3) << 2) + (v0_0 + 0x28)));
    nlRotateAY((*(int *)((((v0_3 << 2) + (v0_0 + 0x40)) + 0x0))));
    nlObjPutUseViewMatrix(0xC62A1E8);
    v0_1 = (0xC078200);
    v0_6 = ((nlPopMatrix(0x1)));
    v0_3 = ((v0_3 + 0x1));
    goto L_C0482AA;
    L_C04825A:;
    *(unsigned int *)((v0_0 + 0x58)) = ((*(int *)((v0_0 + 0x58))) & 0xFFFFFFFD);
    v0_5 = (0x111A9);
    R5 = (0x1);
    goto L_C048268;
    L_C048228:;
    *(unsigned int *)((v0_0 + 0x58)) = ((*(int *)((v0_0 + 0x58))) & 0xFFFFFFFE);
    v0_5 = (0x410A9);
    R5 = (0x1);
    goto L_C048236;
    L_C0481B8:;
    w0_1 = nlLength(((*(int *)0xC2A1B30) + 0x78), ((signed char)(((v0_3 << 1) + v0_3) << 2) + (v0_0 + 0x28)));
    F0 = (w0_1);
    if ((!(w0_0 > w0_1))) goto L_C0481FE;
    if (((*(int *)(((v0_0 + 0x20) + (v0_3 << 2)))) == 1)) goto L_C0481F8;
    if (((*(int *)(((v0_0 + 0x20) + (v0_3 << 2)))) != 4)) goto L_C0481FE;
    L_C0481F8:;
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) | R12);
    L_C0481FE:;
    v0_3 = ((v0_3 + 0x1));
    goto L_C048200;
    L_C048178:;
    v0_2 = *(int *)((v0_5 + 0x8));
    v0_5 = (v0_2);
    if (((*(int *)((v0_2 + 0x78))) != 15)) goto L_C048194;
    if ((!(800.0f > (*(float *)((v0_5 + 0x2C)))))) goto L_C048194;
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) | 0x1);
    L_C048194:;
    R5 = ((R5 - 1));
    goto L_C048196;
}
