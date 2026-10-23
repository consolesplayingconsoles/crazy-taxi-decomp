/* Straight-line functions with calls and guards (batch gen_el): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CalcHomingAngle(int);
int CalcHomingVector(int);
int GetAng4Mat(int);
int GetCollision(int, int, float, float);
int HomingAngle1(int, int, float);
int KyaCamera(int);
int MultiRot4Vec(int);
int ResetSpark(void);
int SetCameraAngleRatio(float, float);
int SetCameraDistance(float);
int SetCameraMode(int);
int SetCameraPosRatio(float, float);
int SetCameraTargetRatio(float, float);
int SetNewClippingAngle(float);
int camSetAngles(int, int, int, int);
int camSetEye(int, int);
int camSetTarget(int, int);
int camSnapToCar(int);
float getNearLineIndex(int, int, int, int, int);
int getNearLineIndexAll(int);
int nlAddVector(int, int);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
float nlFastCos(int);
float nlFastSin(int);
int nlGetMatrix(int);
int nlGetTranslate(int);
int nlInvertMatrix(int);
float nlLength(int, int);
int nlLoadMatrix(int);
int nlLookAt(int, int, int);
int nlMakeModelViewMatrix(void);
int nlMatrixMode(int);
int nlPerspectiveX(int, float, float, float);
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
int camUpdate(int a4);

int camUpdate(int a4)
{
    int t61;
    int t93;
    int t152;
    int t321;
    int t324;
    int t322;
    int t425;
    int t428;
    int t426;
    int t504;
    int t500;
    int t619;
    int t615;
    float t681;
    int t682;
    float u683;
    int t689;
    int t699;
    float u709;
    float u717;
    int t719;
    float u720;
    float u721;
    float u722;
    int t725;
    int t729;
    float u736;
    float u744;
    float t761;
    int t772;
    float u775;
    int t777;
    int t778;
    int t779;
    int t781;
    int t786;
    int t787;
    int t789;
    int t790;
    int t791;
    int t798;
    float u801;
    int t803;
    int t804;
    int t806;
    int t811;
    int t812;
    int t814;
    int t815;
    int t816;
    int t851;
    float u852;
    float u854;
    int t858;
    int t868;
    int t879;
    int t882;
    float u883;
    float u885;
    int t888;
    int t898;
    float u908;
    int t909;
    float u910;
    float u911;
    float u912;
    int t914;
    int t924;
    int t933;
    float u934;
    float u935;
    float u936;
    int t939;
    int t949;
    float u989;
    float u997;
    int t1009;
    float u1012;
    int t1014;
    int t1015;
    int t1016;
    int t1018;
    int t1023;
    int t1024;
    int t1026;
    int t1027;
    int t1028;
    int t1035;
    float u1038;
    int t1040;
    int t1041;
    int t1043;
    int t1048;
    int t1049;
    int t1051;
    int t1052;
    int t1053;
    int t1182;
    float u1234;
    float u1237;
    int t1258;
    float u1363;
    float u1376;
    int t1386;
    float u1402;
    float u1405;
    float u1415;
    float u1422;
    int t1477;
    int t6;
    float u73;
    float u132;
    int t239;
    int t343;
    int t678;
    float u684;
    int t730;
    float u846;
    float u847;
    float u773;
    float u774;
    int t792;
    float u799;
    float u800;
    int t817;
    float u853;
    float u884;
    float u902;
    float u903;
    float u904;
    float u928;
    float u929;
    float u930;
    float u1010;
    float u1011;
    int t1029;
    float u1036;
    float u1037;
    int t1054;
    int t1222;
    int t1223;
    int t1248;
    float u1249;
    int t1271;
    int t1320;
    float u1321;
    int t1329;
    float u1330;
    float u1410;
    float u1444;
    int stk[29];

    *(unsigned int *)(((((int)stk + 8) + 0x60) + 0x0)) = a4;
    *(unsigned int *)(((int)stk + 88)) = ((short)((short)(*(short *)(((int)stk + 104))) * (short)0x3BC) + 0xC1790CC);
    if (((*(int *)0xC1EE2B4) & 8) != 0) {
        *(unsigned int *)0xC0E49F0 = 0x1;
    }
    if (((*(int *)0xC1EE234) == 1) && (t6 = *(int *)0xC0E49F0, t6 != 0)) {
        if (((*(int *)0xC1EE2B8) & 4) != 0) {
            *(unsigned int *)0xC179860 = 0x0;
            camSnapToCar((*(int *)(((int)stk + 104))));
            ResetSpark();
            *(unsigned int *)0xC0E4A14 = 0x1;
        } else {
            if (((*(int *)0xC1EE2B8) & 0x200) != 0) {
                *(unsigned int *)0xC179860 = 0x7;
                camSnapToCar((*(int *)(((int)stk + 104))));
                ResetSpark();
                *(unsigned int *)0xC0E4A14 = 0x1;
            } else {
                if (((*(int *)0xC1EE2B8) & 2) != 0) {
                    if ((*(int *)0xC179860) == 1) {
                        *(unsigned int *)0xC179860 = 0x2;
                    } else {
                        *(unsigned int *)0xC179860 = 0x1;
                    }
                    camSnapToCar((*(int *)(((int)stk + 104))));
                    ResetSpark();
                    *(unsigned int *)0xC0E4A14 = 0x1;
                }
            }
        }
    }
    nlPushUnitMatrix();
    t61 = *(int *)0xC179860;
    if (t61 != 0) {
        if (t61 == 1) {
            *(float *)0xC1798A4 = 40.0f;
            if ((*(int *)0xC0E4A14) != 0) {
                SetCameraAngleRatio(0.949999988f, 0.099999994f);
                SetCameraTargetRatio(1.0f, 0.099999994f);
                SetCameraDistance(120.0f);
                SetCameraMode(0x2);
                if ((int)(*(int *)0xC179488) < (int)0x4) {
                    u73 = (*(float *)((((*(int *)0xC179488) << 2) + 0xC08AA64)));
                } else {
                    u73 = (*(float *)0xC08AA74);
                }
                *(float *)0xC0E4A04 = u73;
            }
            nlTranslateV(((*(int *)(((int)stk + 88))) + 0x78));
            nlRotateAY((unsigned short)(*(short *)(((*(int *)(((int)stk + 88))) + 0x86))));
            nlRotateAX((unsigned short)(*(short *)(((*(int *)(((int)stk + 88))) + 0x84))));
            nlRotateAZ((unsigned short)(*(short *)(((*(int *)(((int)stk + 88))) + 0x88))));
            if ((int)(*(int *)0xC179488) < (int)0x4) {
                t93 = *(signed char *)0xC179488;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x54)) = *(struct mv3 *)(((signed char)(((t93 << 1) + t93) << 2) + 0xC0E4D54)); }
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x54)) = *(struct mv3 *)(0xC0E4D84); }
            }
            if ((*(int *)0xC179860) == 2) {
                *(float *)(((int)stk + 100)) = (-(*(float *)(((int)stk + 100))));
            }
            nlCalcPoint((((int)stk + 8) + 0x54), (((int)stk + 8) + 0x54));
            if ((*(int *)0xC179860) == 2) {
                camSetAngles(((unsigned short)(*(short *)(((*(int *)(((int)stk + 88))) + 0x84))) + 0xFE00), (unsigned short)(*(short *)(((*(int *)(((int)stk + 88))) + 0x86))), (unsigned short)(*(short *)(((*(int *)(((int)stk + 88))) + 0x88))), 0x2);
            } else {
                camSetAngles(((-(unsigned short)(*(short *)(((*(int *)(((int)stk + 88))) + 0x84)))) + 0xFE00), ((unsigned short)(*(short *)(((*(int *)(((int)stk + 88))) + 0x86))) + 0x8000), (-(unsigned short)(*(short *)(((*(int *)(((int)stk + 88))) + 0x88)))), 0x2);
            }
            camSetTarget((((int)stk + 8) + 0x54), 0x2);
            SetCameraMode(0x2);
        } else {
            if (t61 == 2) {
                *(float *)0xC1798A4 = 40.0f;
                if ((*(int *)0xC0E4A14) != 0) {
                    SetCameraAngleRatio(0.949999988f, 0.099999994f);
                    SetCameraTargetRatio(1.0f, 0.099999994f);
                    SetCameraDistance(120.0f);
                    SetCameraMode(0x2);
                    if ((int)(*(int *)0xC179488) < (int)0x4) {
                        u132 = (*(float *)((((*(int *)0xC179488) << 2) + 0xC08AA64)));
                    } else {
                        u132 = (*(float *)0xC08AA74);
                    }
                    *(float *)0xC0E4A04 = u132;
                }
                nlTranslateV(((*(int *)(((int)stk + 88))) + 0x78));
                nlRotateAY((unsigned short)(*(short *)(((*(int *)(((int)stk + 88))) + 0x86))));
                nlRotateAX((unsigned short)(*(short *)(((*(int *)(((int)stk + 88))) + 0x84))));
                nlRotateAZ((unsigned short)(*(short *)(((*(int *)(((int)stk + 88))) + 0x88))));
                if ((int)(*(int *)0xC179488) < (int)0x4) {
                    t152 = *(signed char *)0xC179488;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x54)) = *(struct mv3 *)(((signed char)(((t152 << 1) + t152) << 2) + 0xC0E4D54)); }
                } else {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x54)) = *(struct mv3 *)(0xC0E4D84); }
                }
                if ((*(int *)0xC179860) == 2) {
                    *(float *)(((int)stk + 100)) = (-(*(float *)(((int)stk + 100))));
                }
                nlCalcPoint((((int)stk + 8) + 0x54), (((int)stk + 8) + 0x54));
                if ((*(int *)0xC179860) == 2) {
                    camSetAngles(((unsigned short)(*(short *)(((*(int *)(((int)stk + 88))) + 0x84))) + 0xFE00), (unsigned short)(*(short *)(((*(int *)(((int)stk + 88))) + 0x86))), (unsigned short)(*(short *)(((*(int *)(((int)stk + 88))) + 0x88))), 0x2);
                } else {
                    camSetAngles(((-(unsigned short)(*(short *)(((*(int *)(((int)stk + 88))) + 0x84)))) + 0xFE00), ((unsigned short)(*(short *)(((*(int *)(((int)stk + 88))) + 0x86))) + 0x8000), (-(unsigned short)(*(short *)(((*(int *)(((int)stk + 88))) + 0x88)))), 0x2);
                }
                camSetTarget((((int)stk + 8) + 0x54), 0x2);
                SetCameraMode(0x2);
            } else {
                if (t61 == 3) {
                    if ((*(int *)0xC0E4A14) != 0) {
                        *(float *)0xC1798A4 = 60.0f;
                        SetCameraAngleRatio(0.599999964f, 0.099999994f);
                        SetCameraTargetRatio(0.799999952f, 0.099999994f);
                        SetCameraDistance(600.0f);
                        SetCameraMode(0x2);
                    }
                    if (((*(int *)0xC1EE2B4) & 4) != 0) {
                        *(float *)0xC0E4A04 = ((*(float *)0xC0E4A04) - 5.0f);
                    }
                    if (((*(int *)0xC1EE2B4) & 2) != 0) {
                        *(float *)0xC0E4A04 = ((*(float *)0xC0E4A04) + 5.0f);
                    }
                    if (300.0f > (*(float *)0xC0E4A04)) {
                        *(float *)0xC0E4A04 = 300.0f;
                    }
                    nlTranslateV(((*(int *)(((int)stk + 88))) + 0x78));
                    nlRotateAY((unsigned short)(*(short *)(((*(int *)(((int)stk + 88))) + 0x86))));
                    nlRotateAX((unsigned short)(*(short *)(((*(int *)(((int)stk + 88))) + 0x84))));
                    *(float *)(((int)stk + 92)) = 0.0f;
                    *(float *)(((int)stk + 96)) = 0.0f;
                    *(float *)(((int)stk + 100)) = 120.0f;
                    nlCalcPoint((((int)stk + 8) + 0x54), (((int)stk + 8) + 0x54));
                    camSetAngles(0xCC00, ((unsigned short)(*(short *)(((*(int *)(((int)stk + 88))) + 0x86))) + 0x8000), 0x0, 0x2);
                    camSetTarget((((int)stk + 8) + 0x54), 0x2);
                } else {
                    if (t61 == 4) {
                        if ((*(int *)0xC0E4A14) != 0) {
                            SetCameraDistance(60.0f);
                        }
                        SetCameraMode(0x4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x44)) = *(struct mv3 *)(0xC08AA78); }
                        *(unsigned short *)0xC179858 = ((*(short *)0xC179858) & 0xFF00);
                        *(unsigned short *)0xC17985A = ((*(short *)0xC17985A) & 0xFF00);
                        *(unsigned short *)0xC17985C = 0x0;
                        if (((*(int *)0xC1EE280) & 2) != 0) {
                            if ((((*(int *)0xC1EE280) & 0x400) != 0) && (t239 = *(int *)0xC1EE280, (t239 & 0x200) != 0)) {
                                if (((*(int *)0xC1EE280) & 16) != 0) {
                                    *(float *)0xC0E4E34 = ((*(float *)0xC0E4E34) + 0.199999988f);
                                }
                                if (((*(int *)0xC1EE280) & 32) == 0) {
                                } else {
                                    *(float *)0xC0E4E34 = ((*(float *)0xC0E4E34) - 0.199999988f);
                                }
                            } else {
                                if (((*(int *)0xC1EE280) & 128) != 0) {
                                    *(float *)(((int)stk + 76)) = 1.0f;
                                }
                                if (((*(int *)0xC1EE280) & 64) != 0) {
                                    *(float *)(((int)stk + 76)) = (-1.0f);
                                }
                                if (((*(int *)0xC1EE280) & 16) != 0) {
                                    *(float *)(((int)stk + 80)) = 1.0f;
                                }
                                if (((*(int *)0xC1EE280) & 32) != 0) {
                                    *(float *)(((int)stk + 80)) = (-1.0f);
                                }
                                if (((*(int *)0xC1EE280) & 0x400) != 0) {
                                    *(float *)(((int)stk + 84)) = (-1.0f);
                                }
                                if (((*(int *)0xC1EE280) & 0x200) != 0) {
                                    *(float *)(((int)stk + 84)) = 1.0f;
                                }
                            }
                        } else {
                            if (((*(int *)0xC1EE280) & 16) != 0) {
                                *(unsigned short *)0xC179858 = ((*(short *)0xC179858) + 0x100);
                            }
                            if (((*(int *)0xC1EE280) & 32) != 0) {
                                *(unsigned short *)0xC179858 = ((*(short *)0xC179858) - 0x100);
                            }
                            if (((*(int *)0xC1EE280) & 128) != 0) {
                                *(unsigned short *)0xC17985A = ((*(short *)0xC17985A) - 0x100);
                            }
                            if (((*(int *)0xC1EE280) & 64) != 0) {
                                *(unsigned short *)0xC17985A = ((*(short *)0xC17985A) + 0x100);
                            }
                            if (((*(int *)0xC1EE280) & 0x400) != 0) {
                                *(float *)(((int)stk + 84)) = -10.0f;
                            }
                            if (((*(int *)0xC1EE280) & 0x200) != 0) {
                                *(float *)(((int)stk + 84)) = 10.0f;
                            }
                            t321 = *(short *)0xC179858;
                            *(unsigned int *)(((int)stk + 72)) = t321;
                            t324 = 0xFFFFC000;
                            if ((int)t321 < (int)0xFFFFC000) {
                            } else {
                                t322 = t321;
                                if ((int)t321 > (int)0x4000) {
                                    t322 = 0x4000;
                                }
                                t324 = t322;
                            }
                            *(unsigned int *)(((int)stk + 72)) = t324;
                            *(unsigned short *)0xC179858 = (*(short *)(((int)stk + 72)));
                        }
                        if (((*(int *)0xC1EE280) & 0x400) != 0) {
                            if ((((*(int *)0xC1EE280) & 0x10000) != 0) && (t343 = *(int *)0xC1EE280, (t343 & 0x20000) != 0)) {
                                if (((*(int *)0xC1EE280) & 16) != 0) {
                                    *(float *)0xC0E4E34 = ((*(float *)0xC0E4E34) + 0.199999988f);
                                }
                                if (((*(int *)0xC1EE280) & 32) == 0) {
                                } else {
                                    *(float *)0xC0E4E34 = ((*(float *)0xC0E4E34) - 0.199999988f);
                                }
                            } else {
                                if (((*(int *)0xC1EE280) & 128) != 0) {
                                    *(float *)(((int)stk + 76)) = 1.0f;
                                }
                                if (((*(int *)0xC1EE280) & 64) != 0) {
                                    *(float *)(((int)stk + 76)) = (-1.0f);
                                }
                                if (((*(int *)0xC1EE280) & 16) != 0) {
                                    *(float *)(((int)stk + 80)) = 1.0f;
                                }
                                if (((*(int *)0xC1EE280) & 32) != 0) {
                                    *(float *)(((int)stk + 80)) = (-1.0f);
                                }
                                if (((*(int *)0xC1EE280) & 0x10000) != 0) {
                                    *(float *)(((int)stk + 84)) = (-1.0f);
                                }
                                if (((*(int *)0xC1EE280) & 0x20000) != 0) {
                                    *(float *)(((int)stk + 84)) = 1.0f;
                                }
                            }
                        } else {
                            if (((*(int *)0xC1EE280) & 16) != 0) {
                                *(unsigned short *)0xC179858 = ((*(short *)0xC179858) + 0x100);
                            }
                            if (((*(int *)0xC1EE280) & 32) != 0) {
                                *(unsigned short *)0xC179858 = ((*(short *)0xC179858) - 0x100);
                            }
                            if (((*(int *)0xC1EE280) & 128) != 0) {
                                *(unsigned short *)0xC17985A = ((*(short *)0xC17985A) - 0x100);
                            }
                            if (((*(int *)0xC1EE280) & 64) != 0) {
                                *(unsigned short *)0xC17985A = ((*(short *)0xC17985A) + 0x100);
                            }
                            if (((*(int *)0xC1EE280) & 0x10000) != 0) {
                                *(float *)(((int)stk + 84)) = -10.0f;
                            }
                            if (((*(int *)0xC1EE280) & 0x20000) != 0) {
                                *(float *)(((int)stk + 84)) = 10.0f;
                            }
                            t425 = *(short *)0xC179858;
                            *(unsigned int *)(((int)stk + 72)) = t425;
                            t428 = 0xFFFFC000;
                            if ((int)t425 < (int)0xFFFFC000) {
                            } else {
                                t426 = t425;
                                if ((int)t425 > (int)0x4000) {
                                    t426 = 0x4000;
                                }
                                t428 = t426;
                            }
                            *(unsigned int *)(((int)stk + 72)) = t428;
                            *(unsigned short *)0xC179858 = (*(short *)(((int)stk + 72)));
                        }
                        nlPushUnitMatrix();
                        nlRotateAY((unsigned short)(*(short *)0xC17985A));
                        nlRotateAX((unsigned short)(*(short *)0xC179858));
                        nlCalcVector((((int)stk + 8) + 0x44), (((int)stk + 8) + 0x44));
                        nlPopMatrix(0x1);
                        nlAddVector(0xC179840, (((int)stk + 8) + 0x44));
                        *(float *)0xC1798A4 = (*(float *)0xC0E4E34);
                    } else {
                        if (t61 == 5) {
                            if ((*(int *)0xC0E4A14) != 0) {
                                *(float *)0xC1798A4 = 60.0f;
                                SetCameraAngleRatio(0.399999976f, 0.099999994f);
                                SetCameraTargetRatio(0.799999952f, 0.099999994f);
                                SetCameraDistance(60.0f);
                                SetCameraMode(0x2);
                            }
                            if (((*(int *)0xC1EE2B4) & 16) != 0) {
                                *(unsigned int *)0xC0E4A08 = ((*(int *)0xC0E4A08) - 0x100);
                            }
                            if (((*(int *)0xC1EE2B4) & 32) != 0) {
                                *(unsigned int *)0xC0E4A08 = ((*(int *)0xC0E4A08) + 0x100);
                            }
                            if (((*(int *)0xC1EE2B4) & 128) != 0) {
                                *(unsigned int *)0xC0E4A0C = ((*(int *)0xC0E4A0C) - 0x100);
                            }
                            if (((*(int *)0xC1EE2B4) & 64) != 0) {
                                *(unsigned int *)0xC0E4A0C = ((*(int *)0xC0E4A0C) + 0x100);
                            }
                            if (((*(int *)0xC1EE2B4) & 4) != 0) {
                                *(float *)0xC0E4A04 = ((*(float *)0xC0E4A04) - 1.0f);
                            }
                            if (((*(int *)0xC1EE2B4) & 2) != 0) {
                                *(float *)0xC0E4A04 = ((*(float *)0xC0E4A04) + 1.0f);
                            }
                            if (1.0f > (*(float *)0xC0E4A04)) {
                                *(float *)0xC0E4A04 = 1.0f;
                            }
                            t504 = 0xFFFFC000;
                            if ((int)(*(int *)0xC0E4A08) < (int)0xFFFFC000) {
                            } else {
                                t500 = 0x4000;
                                if ((int)(*(int *)0xC0E4A08) > (int)0x4000) {
                                } else {
                                    t500 = (*(int *)0xC0E4A08);
                                }
                                t504 = t500;
                            }
                            *(unsigned int *)0xC0E4A08 = t504;
                            if ((*(int *)0xC0E49F8) != 0) {
                                if ((*(int *)0xC179860) == 6) {
                                    if ((*(int *)0xC0E4A00) != 0) {
                                        MultiRot4Vec((*(int *)0xC0E4A00));
                                    } else {
                                        if ((*(int *)0xC0E49FC) != 0) {
                                            nlRotateAY((unsigned short)(*(short *)(((*(int *)0xC0E49FC) + 0x2))));
                                            nlRotateAX((unsigned short)(*(short *)(((*(int *)0xC0E49FC) + 0x0))));
                                            nlRotateAZ((unsigned short)(*(short *)(((*(int *)0xC0E49FC) + 0x4))));
                                        }
                                    }
                                }
                                nlRotateAY((*(int *)0xC0E4A0C));
                                nlRotateAX((*(int *)0xC0E4A08));
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC179914) = *(struct mv3 *)((*(int *)0xC0E49F8)); }
                                nlAddVector(0xC179914, 0xC1798BC);
                                GetAng4Mat(0xC179940);
                            }
                            *(float *)0xC1798BC = 0.0f;
                            *(float *)0xC1798C0 = 5.0f;
                            *(float *)0xC1798C4 = 0.0f;
                        } else {
                            if (t61 == 6) {
                                if ((*(int *)0xC0E4A14) != 0) {
                                    *(float *)0xC1798A4 = 60.0f;
                                    SetCameraAngleRatio(0.399999976f, 0.099999994f);
                                    SetCameraTargetRatio(0.799999952f, 0.099999994f);
                                    SetCameraDistance(60.0f);
                                    SetCameraMode(0x2);
                                }
                                if (((*(int *)0xC1EE2B4) & 16) != 0) {
                                    *(unsigned int *)0xC0E4A08 = ((*(int *)0xC0E4A08) - 0x100);
                                }
                                if (((*(int *)0xC1EE2B4) & 32) != 0) {
                                    *(unsigned int *)0xC0E4A08 = ((*(int *)0xC0E4A08) + 0x100);
                                }
                                if (((*(int *)0xC1EE2B4) & 128) != 0) {
                                    *(unsigned int *)0xC0E4A0C = ((*(int *)0xC0E4A0C) - 0x100);
                                }
                                if (((*(int *)0xC1EE2B4) & 64) != 0) {
                                    *(unsigned int *)0xC0E4A0C = ((*(int *)0xC0E4A0C) + 0x100);
                                }
                                if (((*(int *)0xC1EE2B4) & 4) != 0) {
                                    *(float *)0xC0E4A04 = ((*(float *)0xC0E4A04) - 1.0f);
                                }
                                if (((*(int *)0xC1EE2B4) & 2) != 0) {
                                    *(float *)0xC0E4A04 = ((*(float *)0xC0E4A04) + 1.0f);
                                }
                                if (1.0f > (*(float *)0xC0E4A04)) {
                                    *(float *)0xC0E4A04 = 1.0f;
                                }
                                t619 = 0xFFFFC000;
                                if ((int)(*(int *)0xC0E4A08) < (int)0xFFFFC000) {
                                } else {
                                    t615 = 0x4000;
                                    if ((int)(*(int *)0xC0E4A08) > (int)0x4000) {
                                    } else {
                                        t615 = (*(int *)0xC0E4A08);
                                    }
                                    t619 = t615;
                                }
                                *(unsigned int *)0xC0E4A08 = t619;
                                if ((*(int *)0xC0E49F8) != 0) {
                                    if ((*(int *)0xC179860) == 6) {
                                        if ((*(int *)0xC0E4A00) != 0) {
                                            MultiRot4Vec((*(int *)0xC0E4A00));
                                        } else {
                                            if ((*(int *)0xC0E49FC) != 0) {
                                                nlRotateAY((unsigned short)(*(short *)(((*(int *)0xC0E49FC) + 0x2))));
                                                nlRotateAX((unsigned short)(*(short *)(((*(int *)0xC0E49FC) + 0x0))));
                                                nlRotateAZ((unsigned short)(*(short *)(((*(int *)0xC0E49FC) + 0x4))));
                                            }
                                        }
                                    }
                                    nlRotateAY((*(int *)0xC0E4A0C));
                                    nlRotateAX((*(int *)0xC0E4A08));
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC179914) = *(struct mv3 *)((*(int *)0xC0E49F8)); }
                                    nlAddVector(0xC179914, 0xC1798BC);
                                    GetAng4Mat(0xC179940);
                                }
                                *(float *)0xC1798BC = 0.0f;
                                *(float *)0xC1798C0 = 5.0f;
                                *(float *)0xC1798C4 = 0.0f;
                            } else {
                                if (t61 == 7) {
                                    *(unsigned int *)0xC179930 = 0x0;
                                    if (((*(int *)0xC1EE20C) == 2) && (t678 = *(int *)0xC1EE214, t678 == 3)) {
                                        camSetTarget(((*(int *)(((int)stk + 88))) + 0x78), 0x2);
                                        t681 = nlLength(0xC1798D0, 0xC1798FC);
                                        *(float *)(((int)stk + 48)) = t681;
                                        *(unsigned int *)(((int)stk + 80)) = 0xFFFFFFFF;
                                        t682 = 0x0;
                                        u683 = t681;
                                        for (;;) {
                                            *(unsigned int *)(((int)stk + 84)) = t682;
                                            if ((int)t682 >= (int)0x9) {
                                                break;
                                            }
                                            t682 = 0xC078AE0;
                                            t689 = *(signed char *)(((int)stk + 84));
                                            u683 = (nlLength(((signed char)(((t689 << 1) + t689) << 2) + 0xC0E4CE8), ((*(int *)(((int)stk + 88))) + 0x78)));
                                            u683 = (u683 * (1.19999993f));
                                            *(float *)(((int)stk + 44)) = u683;
                                            u684 = (*(float *)(((int)stk + 48)));
                                            if (u684 > u683) {
                                                u684 = (*(float *)(((int)stk + 44)));
                                                *(float *)(((int)stk + 48)) = u684;
                                                *(unsigned int *)(((int)stk + 80)) = (*(int *)(((int)stk + 84)));
                                            }
                                            t682 = (*(int *)(((int)stk + 84)));
                                            t682 = (t682 + 0x1);
                                        }
                                        if ((*(int *)(((int)stk + 80))) != -1) {
                                            t699 = *(signed char *)(((int)stk + 80));
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x38)) = *(struct mv3 *)(((signed char)(((t699 << 1) + t699) << 2) + 0xC0E4CE8)); }
                                            camSetEye((((int)stk + 8) + 0x38), 0x2);
                                        }
                                        u709 = *(float *)(((int)stk + 48));
                                        *(float *)(((int)stk + 48)) = (u709 - 50.0f);
                                        if ((u709 - 50.0f) > 550.0f) {
                                            *(float *)(((int)stk + 48)) = 550.0f;
                                        }
                                        if (0.0f > (*(float *)(((int)stk + 48)))) {
                                            *(float *)(((int)stk + 48)) = 0.0f;
                                        }
                                        u717 = 6.0f;
                                        u717 = u717 + 45.0f * (((550.0f - (*(float *)(((int)stk + 48)))) / 550.0f) * ((550.0f - (*(float *)(((int)stk + 48)))) / 550.0f));
                                        *(float *)0xC1798A4 = u717;
                                        if ((*(int *)0xC0E4A14) == 0) {
                                        } else {
                                            *(float *)(((int)stk + 40)) = 99999.0f;
                                            *(unsigned int *)(((int)stk + 84)) = 0x0;
                                            t719 = 0xC0E4A14;
                                            u720 = 45.0f;
                                            u721 = u717;
                                            u722 = 99999.0f;
                                            for (;;) {
                                                if ((int)(*(int *)(((int)stk + 84))) >= (int)0x9) {
                                                    break;
                                                }
                                                t725 = *(signed char *)(((int)stk + 84));
                                                u720 = (nlLength(((signed char)(((t725 << 1) + t725) << 2) + 0xC0E4CE8), ((*(int *)(((int)stk + 88))) + 0x78)));
                                                u722 = 1.0f;
                                                u720 = (u720 * u722);
                                                *(float *)(((int)stk + 48)) = u720;
                                                u721 = (*(float *)(((int)stk + 40)));
                                                if (u721 > u720) {
                                                    t719 = ((int)stk + 8);
                                                    u721 = (*(float *)(((int)stk + 48)));
                                                    t719 = (t719 + 0x38);
                                                    *(float *)(((int)stk + 40)) = u721;
                                                    t729 = *(signed char *)(((int)stk + 80));
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t719) = *(struct mv3 *)(((signed char)(((t729 << 1) + t729) << 2) + 0xC0E4CE8)); }
                                                    t730 = t719;
                                                }
                                                t719 = t730;
                                                t719 = (*(int *)(((int)stk + 84)));
                                                t719 = (t719 + 0x1);
                                                *(unsigned int *)(((int)stk + 84)) = t719;
                                            }
                                            *(float *)(((int)stk + 48)) = (*(float *)(((int)stk + 40)));
                                            u736 = *(float *)(((int)stk + 48));
                                            *(float *)(((int)stk + 48)) = (u736 - 50.0f);
                                            if ((u736 - 50.0f) > 550.0f) {
                                                *(float *)(((int)stk + 48)) = 550.0f;
                                            }
                                            if (0.0f > (*(float *)(((int)stk + 48)))) {
                                                *(float *)(((int)stk + 48)) = 0.0f;
                                            }
                                            u744 = 6.0f;
                                            u744 = u744 + 45.0f * (((550.0f - (*(float *)(((int)stk + 48)))) / 550.0f) * ((550.0f - (*(float *)(((int)stk + 48)))) / 550.0f));
                                            *(float *)0xC1798A4 = u744;
                                            camSetEye((((int)stk + 8) + 0x38), 0x0);
                                            camSetTarget(((*(int *)(((int)stk + 88))) + 0x78), 0x0);
                                            SetCameraTargetRatio(0.799999952f, 0.099999994f);
                                            SetCameraMode(0x1);
                                        }
                                    } else {
                                        camSetTarget(((*(int *)(((int)stk + 88))) + 0x78), 0x2);
                                        t761 = nlLength(0xC1798D0, 0xC1798FC);
                                        *(float *)(((int)stk + 48)) = t761;
                                        if (!(t761 > 980.0f)) {
                                            u846 = t761;
                                            u847 = 980.0f;
                                        } else {
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x38)) = *(struct mv3 *)(((*(int *)(((int)stk + 88))) + 0x78)); }
                                            *(float *)(((int)stk + 52)) = ((nlFastSin((unsigned short)(*(short *)(((*(int *)(((int)stk + 88))) + 0xF4))))) * 950.0f);
                                            *(float *)(((int)stk + 56)) = 0.0f;
                                            *(float *)(((int)stk + 60)) = ((nlFastCos((unsigned short)(*(short *)(((*(int *)(((int)stk + 88))) + 0xF4))))) * 950.0f);
                                            GetCollision((((int)stk + 8) + 0x38), (((int)stk + 8) + 0x2C), 1.0f, 0.0f);
                                            if ((int)(*(int *)0xC179490) >= (int)0x11) {
                                                *(float *)(((int)stk + 32)) = 99999.8984f;
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0xC)) = *(struct mv3 *)((((int)stk + 8) + 0x38)); }
                                                *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                t772 = (((int)stk + 8) + 0xC);
                                                u775 = 99999.8984f;
                                                for (;;) {
                                                    if ((int)(*(int *)(((int)stk + 84))) >= (int)0x2) {
                                                        break;
                                                    }
                                                    t772 = ((int)stk + 8);
                                                    t772 = (t772 + 0xC);
                                                    t777 = t772;
                                                    t778 = *(int *)(((int)stk + 84));
                                                    t772 = 0xC2A6690;
                                                    t779 = *(int *)((t772 + 0x0));
                                                    t781 = *(int *)(((int)stk + 84));
                                                    u773 = (getNearLineIndex(0x0, (*(int *)((((((t781 << 1) + t781) << 2) + t779) + 0xEDC))), (*(int *)(((*(int *)((((((t778 << 1) + t778) << 2) + t779) + 0xEE0))) + 0x0))), (((int)stk + 4) + 0x24), t777));
                                                    u774 = u773;
                                                    *(float *)(((int)stk + 36)) = u773;
                                                    u775 = (*(float *)(((int)stk + 32)));
                                                    if (u775 > u774) {
                                                        *(float *)(((int)stk + 32)) = u774;
                                                        t786 = *(int *)(((int)stk + 84));
                                                        t787 = *(int *)(((int)stk + 40));
                                                        t772 = (*(int *)0xC2A6690);
                                                        t789 = ((((t786 << 1) + t786) << 2) + t772);
                                                        t772 = t787;
                                                        t790 = ((t787 << 1) + t772);
                                                        t772 = 0xEDC;
                                                        t772 = (t772 + t789);
                                                        t791 = *(int *)((t772 + 0x0));
                                                        t772 = ((int)stk + 8);
                                                        t772 = (t772 + 0x38);
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t772) = *(struct mv3 *)((t791 + (t790 << 2))); }
                                                        t792 = t772;
                                                    }
                                                    t772 = t792;
                                                    t772 = (*(int *)(((int)stk + 84)));
                                                    t772 = (t772 + 0x1);
                                                    *(unsigned int *)(((int)stk + 84)) = t772;
                                                }
                                            } else {
                                                if ((*(int *)0xC1EE20C) == 1) {
                                                    *(float *)(((int)stk + 8)) = 99999.8984f;
                                                    *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                    t798 = 0xC1EE20C;
                                                    u801 = 99999.8984f;
                                                    for (;;) {
                                                        if ((int)(*(int *)(((int)stk + 84))) >= (int)0x2) {
                                                            break;
                                                        }
                                                        t798 = ((int)stk + 8);
                                                        t798 = (t798 + 0x14);
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t798) = *(struct mv3 *)((((int)stk + 8) + 0x38)); }
                                                        t803 = *(int *)(((int)stk + 84));
                                                        t798 = 0xC2A6690;
                                                        t804 = *(int *)((t798 + 0x0));
                                                        t806 = *(int *)(((int)stk + 84));
                                                        u799 = (getNearLineIndex(0x0, (*(int *)((((((t806 << 1) + t806) << 2) + t804) + 0xEC4))), (*(int *)(((*(int *)((((((t803 << 1) + t803) << 2) + t804) + 0xEC8))) + 0x0))), (((int)stk + 4) + 0x24), (((int)stk + 8) + 0x14)));
                                                        u800 = u799;
                                                        *(float *)(((int)stk + 12)) = u799;
                                                        u801 = (*(float *)(((int)stk + 8)));
                                                        if (u801 > u800) {
                                                            *(float *)(((int)stk + 8)) = u800;
                                                            t811 = *(int *)(((int)stk + 84));
                                                            t812 = *(int *)(((int)stk + 40));
                                                            t798 = (*(int *)0xC2A6690);
                                                            t814 = ((((t811 << 1) + t811) << 2) + t798);
                                                            t798 = t812;
                                                            t815 = ((t812 << 1) + t798);
                                                            t798 = 0xEC4;
                                                            t798 = (t798 + t814);
                                                            t816 = *(int *)((t798 + 0x0));
                                                            t798 = ((int)stk + 8);
                                                            t798 = (t798 + 0x8);
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(t798) = *(struct mv3 *)((t816 + (t815 << 2))); }
                                                            t817 = t798;
                                                        }
                                                        t798 = t817;
                                                        t798 = (*(int *)(((int)stk + 84)));
                                                        t798 = (t798 + 0x1);
                                                        *(unsigned int *)(((int)stk + 84)) = t798;
                                                    }
                                                    getNearLineIndexAll((((int)stk + 8) + 0x38));
                                                    if ((nlLength((((int)stk + 8) + 0x38), ((*(int *)(((int)stk + 88))) + 0x78))) > (*(float *)(((int)stk + 8)))) {
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x38)) = *(struct mv3 *)((((int)stk + 8) + 0x8)); }
                                                    }
                                                } else {
                                                    getNearLineIndexAll((((int)stk + 8) + 0x38));
                                                }
                                            }
                                            *(float *)(((int)stk + 68)) = ((*(float *)(((int)stk + 68))) + 20.0f);
                                            camSetEye((((int)stk + 8) + 0x38), 0x2);
                                        }
                                        if ((*(int *)0xC1EE20C) == 0) {
                                            *(unsigned int *)(((int)stk + 80)) = 0xFFFFFFFF;
                                            *(unsigned int *)(((int)stk + 84)) = 0x0;
                                            t851 = 0xFFFFFFFF;
                                            u852 = u846;
                                            u854 = u847;
                                            for (;;) {
                                                if ((int)(*(int *)(((int)stk + 84))) >= (int)0xB) {
                                                    break;
                                                }
                                                t858 = *(signed char *)(((int)stk + 84));
                                                u852 = (nlLength(((unsigned char)(((t858 << 1) + t858) << 2) + 0xC0E4A18), ((*(int *)(((int)stk + 88))) + 0x78)));
                                                u854 = 1.0f;
                                                u852 = (u852 * u854);
                                                *(float *)(((int)stk + 44)) = u852;
                                                u853 = (*(float *)(((int)stk + 48)));
                                                if (u853 > u852) {
                                                    u853 = (*(float *)(((int)stk + 44)));
                                                    *(float *)(((int)stk + 48)) = u853;
                                                    *(unsigned int *)(((int)stk + 80)) = (*(int *)(((int)stk + 84)));
                                                }
                                                t851 = (*(int *)(((int)stk + 84)));
                                                t851 = (t851 + 0x1);
                                                *(unsigned int *)(((int)stk + 84)) = t851;
                                            }
                                            if ((*(int *)(((int)stk + 80))) == -1) {
                                            } else {
                                                t868 = *(signed char *)(((int)stk + 80));
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x38)) = *(struct mv3 *)(((unsigned char)(((t868 << 1) + t868) << 2) + 0xC0E4A18)); }
                                                camSetEye((((int)stk + 8) + 0x38), 0x2);
                                            }
                                        } else {
                                            if ((*(int *)0xC1EE20C) != 1) {
                                            } else {
                                                *(unsigned int *)(((int)stk + 80)) = 0xFFFFFFFF;
                                                t879 = *(int *)0xC179490;
                                                if ((int)t879 >= (int)0x11) {
                                                    *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                    t882 = t879;
                                                    u883 = u846;
                                                    u885 = u847;
                                                    for (;;) {
                                                        if ((int)(*(int *)(((int)stk + 84))) >= (int)0xA) {
                                                            break;
                                                        }
                                                        t888 = *(signed char *)(((int)stk + 84));
                                                        u883 = (nlLength(((signed char)(((t888 << 1) + t888) << 2) + 0xC0E4C70), ((*(int *)(((int)stk + 88))) + 0x78)));
                                                        u885 = 1.0f;
                                                        u883 = (u883 * u885);
                                                        *(float *)(((int)stk + 44)) = u883;
                                                        u884 = (*(float *)(((int)stk + 48)));
                                                        if (u884 > u883) {
                                                            u884 = (*(float *)(((int)stk + 44)));
                                                            *(float *)(((int)stk + 48)) = u884;
                                                            *(unsigned int *)(((int)stk + 80)) = (*(int *)(((int)stk + 84)));
                                                        }
                                                        if ((*(int *)(((int)stk + 80))) != -1) {
                                                            t882 = (*(signed char *)(((int)stk + 80)));
                                                            t898 = t882;
                                                            t882 = (t882 << 1);
                                                            t882 = (t882 + t898);
                                                            t882 = (t882 << 2);
                                                            t882 = (signed char)t882;
                                                            t882 = (t882 + 0xC0E4C70);
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x38)) = *(struct mv3 *)(t882); }
                                                            camSetEye((((int)stk + 8) + 0x38), 0x2);
                                                        } else {
                                                            u902 = u883;
                                                            u903 = u884;
                                                            u904 = u885;
                                                        }
                                                        u883 = u902;
                                                        u884 = u903;
                                                        u885 = u904;
                                                        t882 = (*(int *)(((int)stk + 84)));
                                                        t882 = (t882 + 0x1);
                                                        *(unsigned int *)(((int)stk + 84)) = t882;
                                                    }
                                                } else {
                                                    u908 = *(float *)(((*(int *)(((int)stk + 88))) + 0x7C));
                                                    if (-40.0f > u908) {
                                                        t909 = 0x0;
                                                        u910 = u846;
                                                        u911 = u908;
                                                        u912 = -40.0f;
                                                        for (;;) {
                                                            *(unsigned int *)(((int)stk + 84)) = t909;
                                                            if ((int)t909 >= (int)0x1C) {
                                                                break;
                                                            }
                                                            t914 = *(short *)(((int)stk + 84));
                                                            u910 = (nlLength(((short)(((t914 << 1) + t914) << 2) + 0xC0E4B20), ((*(int *)(((int)stk + 88))) + 0x78)));
                                                            u912 = 1.0f;
                                                            u910 = (u910 * u912);
                                                            *(float *)(((int)stk + 44)) = u910;
                                                            u911 = (*(float *)(((int)stk + 48)));
                                                            if (u911 > u910) {
                                                                u911 = (*(float *)(((int)stk + 44)));
                                                                *(float *)(((int)stk + 48)) = u911;
                                                                *(unsigned int *)(((int)stk + 80)) = (*(int *)(((int)stk + 84)));
                                                            }
                                                            if ((*(int *)(((int)stk + 80))) != -1) {
                                                                t909 = (*(short *)(((int)stk + 80)));
                                                                t924 = t909;
                                                                t909 = (t909 << 1);
                                                                t909 = (t909 + t924);
                                                                t909 = (t909 << 2);
                                                                t909 = (short)t909;
                                                                t909 = (t909 + 0xC0E4B20);
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x38)) = *(struct mv3 *)(t909); }
                                                                camSetEye((((int)stk + 8) + 0x38), 0x2);
                                                            } else {
                                                                u928 = u910;
                                                                u929 = u911;
                                                                u930 = u912;
                                                            }
                                                            u910 = u928;
                                                            u911 = u929;
                                                            u912 = u930;
                                                            t909 = (*(int *)(((int)stk + 84)));
                                                            t909 = (t909 + 0x1);
                                                        }
                                                    } else {
                                                        t933 = 0x0;
                                                        u934 = u846;
                                                        u935 = u908;
                                                        u936 = -40.0f;
                                                        for (;;) {
                                                            *(unsigned int *)(((int)stk + 84)) = t933;
                                                            if ((int)t933 >= (int)0xB) {
                                                                break;
                                                            }
                                                            t939 = *(signed char *)(((int)stk + 84));
                                                            u934 = (nlLength(((unsigned char)(((t939 << 1) + t939) << 2) + 0xC0E4A9C), ((*(int *)(((int)stk + 88))) + 0x78)));
                                                            u936 = 1.0f;
                                                            u934 = (u934 * u936);
                                                            *(float *)(((int)stk + 44)) = u934;
                                                            u935 = (*(float *)(((int)stk + 48)));
                                                            if (u935 > u934) {
                                                                u935 = (*(float *)(((int)stk + 44)));
                                                                *(float *)(((int)stk + 48)) = u935;
                                                                *(unsigned int *)(((int)stk + 80)) = (*(int *)(((int)stk + 84)));
                                                            }
                                                            t933 = (*(int *)(((int)stk + 84)));
                                                            t933 = (t933 + 0x1);
                                                        }
                                                        if ((*(int *)(((int)stk + 80))) != -1) {
                                                            t949 = *(signed char *)(((int)stk + 80));
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x38)) = *(struct mv3 *)(((unsigned char)(((t949 << 1) + t949) << 2) + 0xC0E4A9C)); }
                                                            camSetEye((((int)stk + 8) + 0x38), 0x2);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        u989 = *(float *)(((int)stk + 48));
                                        *(float *)(((int)stk + 48)) = (u989 - 50.0f);
                                        if ((u989 - 50.0f) > 550.0f) {
                                            *(float *)(((int)stk + 48)) = 550.0f;
                                        }
                                        if (0.0f > (*(float *)(((int)stk + 48)))) {
                                            *(float *)(((int)stk + 48)) = 0.0f;
                                        }
                                        u997 = 6.0f;
                                        u997 = u997 + 45.0f * (((550.0f - (*(float *)(((int)stk + 48)))) / 550.0f) * ((550.0f - (*(float *)(((int)stk + 48)))) / 550.0f));
                                        *(float *)0xC1798A4 = u997;
                                        if ((*(int *)0xC0E4A14) == 0) {
                                        } else {
                                            *(float *)0xC1798A4 = 60.0f;
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x38)) = *(struct mv3 *)(((*(int *)(((int)stk + 88))) + 0x78)); }
                                            *(float *)(((int)stk + 52)) = ((nlFastSin((unsigned short)(*(short *)(((*(int *)(((int)stk + 88))) + 0xF4))))) * 300.0f);
                                            *(float *)(((int)stk + 56)) = 0.0f;
                                            *(float *)(((int)stk + 60)) = ((nlFastCos((unsigned short)(*(short *)(((*(int *)(((int)stk + 88))) + 0xF4))))) * 300.0f);
                                            GetCollision((((int)stk + 8) + 0x38), (((int)stk + 8) + 0x2C), 1.0f, 0.0f);
                                            if ((int)(*(int *)0xC179490) >= (int)0x14) {
                                                *(float *)(((int)stk + 32)) = 99999.8984f;
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0xC)) = *(struct mv3 *)((((int)stk + 8) + 0x38)); }
                                                *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                t1009 = (((int)stk + 8) + 0xC);
                                                u1012 = 99999.8984f;
                                                for (;;) {
                                                    if ((int)(*(int *)(((int)stk + 84))) >= (int)0x2) {
                                                        break;
                                                    }
                                                    t1009 = ((int)stk + 8);
                                                    t1009 = (t1009 + 0xC);
                                                    t1014 = t1009;
                                                    t1015 = *(int *)(((int)stk + 84));
                                                    t1009 = 0xC2A6690;
                                                    t1016 = *(int *)((t1009 + 0x0));
                                                    t1018 = *(int *)(((int)stk + 84));
                                                    u1010 = (getNearLineIndex(0x0, (*(int *)((((((t1018 << 1) + t1018) << 2) + t1016) + 0xED0))), (*(int *)(((*(int *)((((((t1015 << 1) + t1015) << 2) + t1016) + 0xEE0))) + 0x0))), (((int)stk + 4) + 0x24), t1014));
                                                    u1011 = u1010;
                                                    *(float *)(((int)stk + 36)) = u1010;
                                                    u1012 = (*(float *)(((int)stk + 32)));
                                                    if (u1012 > u1011) {
                                                        *(float *)(((int)stk + 32)) = u1011;
                                                        t1023 = *(int *)(((int)stk + 84));
                                                        t1024 = *(int *)(((int)stk + 40));
                                                        t1009 = (*(int *)0xC2A6690);
                                                        t1026 = ((((t1023 << 1) + t1023) << 2) + t1009);
                                                        t1009 = t1024;
                                                        t1027 = ((t1024 << 1) + t1009);
                                                        t1009 = 0xEDC;
                                                        t1009 = (t1009 + t1026);
                                                        t1028 = *(int *)((t1009 + 0x0));
                                                        t1009 = ((int)stk + 8);
                                                        t1009 = (t1009 + 0x38);
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1009) = *(struct mv3 *)((t1028 + (t1027 << 2))); }
                                                        t1029 = t1009;
                                                    }
                                                    t1009 = t1029;
                                                    t1009 = (*(int *)(((int)stk + 84)));
                                                    t1009 = (t1009 + 0x1);
                                                    *(unsigned int *)(((int)stk + 84)) = t1009;
                                                }
                                            } else {
                                                if ((*(int *)0xC1EE20C) == 1) {
                                                    *(float *)(((int)stk + 8)) = 99999.8984f;
                                                    *(unsigned int *)(((int)stk + 84)) = 0x0;
                                                    t1035 = 0xC1EE20C;
                                                    u1038 = 99999.8984f;
                                                    for (;;) {
                                                        if ((int)(*(int *)(((int)stk + 84))) >= (int)0x2) {
                                                            break;
                                                        }
                                                        t1035 = ((int)stk + 8);
                                                        t1035 = (t1035 + 0x14);
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1035) = *(struct mv3 *)((((int)stk + 8) + 0x38)); }
                                                        t1040 = *(int *)(((int)stk + 84));
                                                        t1035 = 0xC2A6690;
                                                        t1041 = *(int *)((t1035 + 0x0));
                                                        t1043 = *(int *)(((int)stk + 84));
                                                        u1036 = (getNearLineIndex(0x0, (*(int *)((((((t1043 << 1) + t1043) << 2) + t1041) + 0xEC4))), (*(int *)(((*(int *)((((((t1040 << 1) + t1040) << 2) + t1041) + 0xEC8))) + 0x0))), (((int)stk + 4) + 0x24), (((int)stk + 8) + 0x14)));
                                                        u1037 = u1036;
                                                        *(float *)(((int)stk + 12)) = u1036;
                                                        u1038 = (*(float *)(((int)stk + 8)));
                                                        if (u1038 > u1037) {
                                                            *(float *)(((int)stk + 8)) = u1037;
                                                            t1048 = *(int *)(((int)stk + 84));
                                                            t1049 = *(int *)(((int)stk + 40));
                                                            t1035 = (*(int *)0xC2A6690);
                                                            t1051 = ((((t1048 << 1) + t1048) << 2) + t1035);
                                                            t1035 = t1049;
                                                            t1052 = ((t1049 << 1) + t1035);
                                                            t1035 = 0xEC4;
                                                            t1035 = (t1035 + t1051);
                                                            t1053 = *(int *)((t1035 + 0x0));
                                                            t1035 = ((int)stk + 8);
                                                            t1035 = (t1035 + 0x8);
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(t1035) = *(struct mv3 *)((t1053 + (t1052 << 2))); }
                                                            t1054 = t1035;
                                                        }
                                                        t1035 = t1054;
                                                        t1035 = (*(int *)(((int)stk + 84)));
                                                        t1035 = (t1035 + 0x1);
                                                        *(unsigned int *)(((int)stk + 84)) = t1035;
                                                    }
                                                    getNearLineIndexAll((((int)stk + 8) + 0x38));
                                                    if ((nlLength((((int)stk + 8) + 0x38), ((*(int *)(((int)stk + 88))) + 0x78))) > (*(float *)(((int)stk + 8)))) {
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x38)) = *(struct mv3 *)((((int)stk + 8) + 0x8)); }
                                                    }
                                                } else {
                                                    getNearLineIndexAll((((int)stk + 8) + 0x38));
                                                }
                                            }
                                            *(float *)(((int)stk + 68)) = ((*(float *)(((int)stk + 68))) + 20.0f);
                                            camSetEye((((int)stk + 8) + 0x38), 0x0);
                                            camSetTarget(((*(int *)(((int)stk + 88))) + 0x78), 0x0);
                                            SetCameraTargetRatio(0.799999952f, 0.099999994f);
                                            SetCameraMode(0x1);
                                        }
                                    }
                                } else {
                                    if (t61 == 8) {
                                    } else {
                                        if (t61 == 10) {
                                            KyaCamera(0x0);
                                        } else {
                                            if (t61 == 11) {
                                                KyaCamera(0x1);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        *(float *)0xC1798A4 = 60.0f;
        if ((*(int *)0xC0E4A14) != 0) {
            *(float *)0xC1798A4 = 60.0f;
            t1182 = *(int *)(((int)stk + 88));
            *(unsigned char *)0xC1798AC = (*(signed char *)(((t1182 + 0x84) + 0x0)));
            *(unsigned char *)0xC1798AD = (*(signed char *)(((t1182 + 0x84) + 0x1)));
            *(unsigned char *)0xC1798AE = (*(signed char *)(((t1182 + 0x84) + 0x2)));
            *(unsigned char *)0xC1798AF = (*(signed char *)(((t1182 + 0x84) + 0x3)));
            *(unsigned char *)0xC1798B0 = (*(signed char *)(((t1182 + 0x84) + 0x4)));
            *(unsigned char *)0xC1798B1 = (*(signed char *)(((t1182 + 0x84) + 0x5)));
            camSetAngles((unsigned short)(*(short *)(((*(int *)(((int)stk + 88))) + 0x84))), (unsigned short)(*(short *)(((*(int *)(((int)stk + 88))) + 0x86))), (unsigned short)(*(short *)(((*(int *)(((int)stk + 88))) + 0x88))), 0x0);
            nlPushUnitMatrix();
            nlTranslateV(((*(int *)(((int)stk + 88))) + 0x78));
            nlRotateAY((unsigned short)(*(short *)0xC1798AE));
            nlRotateAX((unsigned short)(*(short *)0xC1798AC));
            *(float *)(((int)stk + 92)) = 0.0f;
            *(float *)(((int)stk + 96)) = 5.0f;
            *(float *)(((int)stk + 100)) = 17.0f;
            nlCalcPoint((((int)stk + 8) + 0x54), (((int)stk + 8) + 0x54));
            camSetTarget((((int)stk + 8) + 0x54), 0x0);
            SetCameraMode(0x1);
            nlPopMatrix(0x1);
            *(unsigned int *)0xC179954 = 0x28;
        }
        HomingAngle1((*(short *)(((*(int *)(((int)stk + 88))) + 0x86))), 0xC1798AE, 0.149999991f);
        if ((*(int *)((0x3B0 + (*(int *)(((int)stk + 88)))))) == 4) {
            if ((*(float *)0xC179958) == 0.0f) {
                if (((*(float *)((0x15C + (*(int *)(((int)stk + 88)))))) > -0.099999994f) && (t1222 = *(int *)(((int)stk + 88)), t1223 = *(int *)((0x120 + t1222)), t1223 != 0)) {
                    *(unsigned int *)0xC179964 = 0x1;
                } else {
                    *(unsigned int *)0xC179964 = 0x0;
                }
            }
            u1234 = *(float *)0xC179958;
            *(float *)0xC179958 = (u1234 + 0.00999999978f);
            if ((u1234 + 0.00999999978f) > 0.149999991f) {
                *(float *)0xC179958 = 0.149999991f;
            }
        } else {
            u1237 = *(float *)0xC179958;
            *(float *)0xC179958 = (u1237 - 0.00999999978f);
            if (0.0f > (u1237 - 0.00999999978f)) {
                *(float *)0xC179958 = 0.0f;
            }
        }
        if (((*(float *)(((*(int *)(((int)stk + 88))) + 0x15C))) > -0.099999994f) && (t1248 = *(int *)(((int)stk + 88)), u1249 = *(float *)((t1248 + 0x15C)), 0.099999994f > u1249)) {
            t1258 = *(int *)(((int)stk + 88));
            *(volatile float *)((t1258 + 0x15C));
            HomingAngle1((*(short *)((t1258 + 0xF4))), 0xC17995C, 0.149999991f);
        } else {
            if ((*(float *)0xC179958) == 0.0f) {
                HomingAngle1((*(short *)(((*(int *)(((int)stk + 88))) + 0xF4))), 0xC17995C, 0.149999991f);
            } else {
                if ((0.0f > (*(float *)(((*(int *)(((int)stk + 88))) + 0x15C)))) && (t1271 = *(int *)0xC179964, t1271 != 0)) {
                    *(unsigned short *)0xC17995C = ((*(short *)(((*(int *)(((int)stk + 88))) + 0xF4))) + 0x8000);
                } else {
                    *(unsigned short *)0xC17995C = (*(short *)((0xF4 + (*(int *)(((int)stk + 88))))));
                }
            }
        }
        HomingAngle1((*(short *)0xC17995C), 0xC1798AE, (*(float *)0xC179958));
        HomingAngle1((*(short *)(((*(int *)(((int)stk + 88))) + 0x84))), 0xC1798AC, 0.099999994f);
        if ((*(float *)0xC179958) == 0.0f) {
            if ((*(int *)0xC179960) != 0) {
                if (((*(int *)(((*(int *)(((int)stk + 88))) + 0x120))) != 0) && (t1320 = *(int *)(((int)stk + 88)), u1321 = *(float *)((t1320 + 0x15C)), !(-0.099999994f > u1321))) {
                    *(unsigned int *)0xC179960 = 0x0;
                }
            } else {
                if (((*(int *)((0x120 + (*(int *)(((int)stk + 88)))))) == 0) && (t1329 = *(int *)(((int)stk + 88)), u1330 = *(float *)((t1329 + 0x15C)), 0.099999994f > u1330)) {
                    *(unsigned int *)0xC179960 = 0x1;
                }
            }
        }
        if ((*(int *)0xC179960) != 0) {
            if ((*(float *)(((*(int *)(((int)stk + 88))) + 0x15C))) > 0.0f) {
                *(float *)0xC0E4DD8 = 0.0f;
            } else {
                *(float *)0xC0E4DD8 = (*(float *)(((*(int *)(((int)stk + 88))) + 0x15C)));
            }
            u1363 = (*(float *)0xC1798B4);
            u1363 = u1363 + 0.199999988f * ((5.0f - ((*(float *)0xC0E4DD8) * 5.0f)) - (*(float *)0xC1798B4));
            *(float *)0xC1798B4 = u1363;
        } else {
            if (0.0f > (*(float *)(((*(int *)(((int)stk + 88))) + 0x15C)))) {
                *(float *)0xC0E4DD8 = 0.0f;
            } else {
                *(float *)0xC0E4DD8 = (*(float *)(((*(int *)(((int)stk + 88))) + 0x15C)));
            }
            u1376 = ((*(float *)0xC0E4D9C) * (*(float *)0xC0E4E30));
            u1376 = u1376 + (*(float *)0xC0E4DA0) * ((*(float *)0xC0E4DD8) - (*(float *)0xC1798B4));
            *(float *)0xC0E4E30 = u1376;
            *(float *)0xC1798B4 = ((*(float *)0xC1798B4) + u1376);
        }
        t1386 = *(int *)(((int)stk + 88));
        nlTranslate((*(float *)((t1386 + 0x78))), (*(float *)((t1386 + 0x7C))), (*(float *)((t1386 + 0x80))));
        nlRotateAY((unsigned short)(*(short *)0xC1798AE));
        nlRotateAX((unsigned short)(*(short *)0xC1798AC));
        *(float *)0xC0E4DDC = (*(float *)(((*(int *)(((int)stk + 88))) + 0x100)));
        if ((*(float *)0xC0E4DDC) > 0.0f) {
            *(float *)0xC0E4DDC = 0.0f;
        }
        *(float *)(((int)stk + 92)) = 0.0f;
        if ((*(int *)0xC179960) != 0) {
            *(float *)(((int)stk + 96)) = 5.0f;
            u1402 = 17.0f;
            u1402 = u1402 + (*(float *)0xC0E4DA8) * (*(float *)0xC0E4DD8);
            u1410 = u1402;
        } else {
            u1405 = 5.0f;
            u1405 = u1405 + (*(float *)0xC0E4D98) * (*(float *)0xC0E4DDC);
            *(float *)(((int)stk + 96)) = u1405;
            u1410 = 17.0f;
        }
        *(float *)(((int)stk + 100)) = u1410;
        nlCalcPoint((((int)stk + 8) + 0x54), 0xC179914);
        if ((*(int *)0xC179960) != 0) {
            u1415 = 15.0f;
            u1415 = u1415 + 0.466666609f * (*(float *)0xC1798B4);
            *(float *)(((int)stk + 96)) = u1415;
            *(float *)(((int)stk + 100)) = ((((*(float *)0xC0E4DD8) * (*(float *)0xC0E4DA4)) - (*(float *)0xC1798B4)) + -60.0f);
        } else {
            u1422 = ((*(float *)0xC1798B4) * 0.333333313f);
            u1422 = u1422 + (*(float *)0xC0E4D90) * (*(float *)0xC0E4DDC);
            *(float *)(((int)stk + 96)) = (u1422 + 15.0f);
            *(float *)(((int)stk + 100)) = ((((*(float *)0xC0E4DDC) * (*(float *)0xC0E4D94)) - (*(float *)0xC1798B4)) + -60.0f);
        }
        nlCalcPoint((((int)stk + 8) + 0x54), (((int)stk + 8) + 0x54));
        nlSubVector3op((((int)stk + 8) + 0x44), (((int)stk + 8) + 0x54), 0xC179914);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x54)) = *(struct mv3 *)(0xC179914); }
        GetCollision((((int)stk + 8) + 0x54), (((int)stk + 8) + 0x44), 0.0f, 5.0f);
        camSetEye((((int)stk + 8) + 0x54), 0x2);
        if ((int)(*(int *)0xC179954) > 0) {
            if ((int)(*(int *)0xC179954) < (int)0xA) {
                SetCameraPosRatio(0.199999988f, 0.0f);
                u1444 = 0.199999988f;
            } else {
                SetCameraPosRatio(0.099999994f, 0.0f);
                u1444 = 0.099999994f;
            }
            SetCameraTargetRatio(u1444, 0.0f);
            *(unsigned int *)0xC179954 = ((*(int *)0xC179954) - 1);
        } else {
            SetCameraPosRatio(0.5f, 0.099999994f);
            SetCameraTargetRatio(0.799999952f, 0.299999982f);
        }
        *(unsigned int *)0xC179948 = (int)((float)(*(short *)(((*(int *)(((int)stk + 88))) + 0x88))) * 0.25f);
        SetCameraAngleRatio(0.125f, 0.125f);
        CalcHomingAngle(0xC179928);
        SetCameraMode(0x1);
    }
    nlPopMatrix(0x1);
    *(unsigned int *)0xC0E49F8 = ((*(int *)(((int)stk + 88))) + 0x78);
    *(unsigned int *)0xC0E49FC = (0x84 + (*(int *)(((int)stk + 88))));
    *(unsigned int *)0xC0E4A00 = 0x0;
    *(unsigned int *)0xC0E4A14 = 0x0;
    nlMatrixMode(0x3);
    nlUnitMatrix();
    nlPerspectiveX(((int)((((*(float *)0xC1798A4) * 65536.0f) / 360.0f) + 0.5f) & 0xFFFF), (*(float *)0xC0E49F4), 0.299999982f, 300.0f);
    *(float *)0xC0E49F4 = 1.33333325f;
    nlPushUnitMatrix();
    t1477 = *(int *)0xC1798B8;
    if (t1477 != 0) {
        if (t1477 == 1) {
            CalcHomingVector(0xC1798D0);
            CalcHomingVector(0xC1798FC);
            nlLookAt(0xC1798D0, 0xC1798FC, (*(int *)0xC179930));
            nlGetMatrix(0xC179864);
            nlInvertMatrix(0x0);
            GetAng4Mat((((int)stk + 8) + 0x44));
            *(unsigned int *)0xC179934 = ((*(int *)(((int)stk + 76))) - (*(int *)0xC179928));
            *(unsigned int *)0xC179938 = ((*(int *)(((int)stk + 80))) - (*(int *)0xC17992C));
            *(unsigned int *)0xC179928 = (*(int *)(((int)stk + 76)));
            *(unsigned int *)0xC17992C = (*(int *)(((int)stk + 80)));
            *(float *)0xC0E4A04 = (nlLength(0xC1798D0, 0xC1798FC));
        } else {
            if (t1477 == 2) {
                CalcHomingVector(0xC1798FC);
                CalcHomingAngle(0xC179928);
                nlTranslateV(0xC1798FC);
                nlRotateAY((*(int *)0xC17992C));
                nlRotateAX((*(int *)0xC179928));
                nlRotateAZ((*(int *)0xC179930));
                nlTranslate(0.0f, 0.0f, (*(float *)0xC0E4A04));
                nlGetTranslate((((int)stk + 8) + 0x44));
                nlSubVector3op(0xC1798DC, (((int)stk + 8) + 0x44), 0xC1798D0);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1798D0) = *(struct mv3 *)((((int)stk + 8) + 0x44)); }
                nlInvertMatrix(0x0);
                nlGetMatrix(0xC179864);
            } else {
                if (t1477 != 4) {
                } else {
                    camSetEye(0xC179840, 0x0);
                    camSetAngles((unsigned short)(*(short *)0xC179858), (unsigned short)(*(short *)0xC17985A), (unsigned short)(*(short *)0xC17985C), 0x0);
                    CalcHomingVector(0xC1798D0);
                    CalcHomingAngle(0xC179928);
                    nlTranslateV(0xC1798D0);
                    nlRotateAY((*(int *)0xC17992C));
                    nlRotateAX((*(int *)0xC179928));
                    nlRotateAZ((*(int *)0xC179930));
                    nlPushMatrix(0x0);
                    nlTranslate(0.0f, 0.0f, (-(*(float *)0xC0E4A04)));
                    nlGetTranslate((((int)stk + 8) + 0x44));
                    nlSubVector3op(0xC179908, (((int)stk + 8) + 0x44), 0xC1798FC);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1798FC) = *(struct mv3 *)((((int)stk + 8) + 0x44)); }
                    nlPopMatrix(0x1);
                    nlInvertMatrix(0x0);
                    nlGetMatrix(0xC179864);
                }
            }
        }
    } else {
        CalcHomingVector(0xC1798D0);
        CalcHomingAngle(0xC179928);
        nlTranslateV(0xC1798D0);
        nlRotateAY((*(int *)0xC17992C));
        nlRotateAX((*(int *)0xC179928));
        nlRotateAZ((*(int *)0xC179930));
        nlPushMatrix(0x0);
        nlTranslate(0.0f, 0.0f, (-(*(float *)0xC0E4A04)));
        nlGetTranslate((((int)stk + 8) + 0x44));
        nlSubVector3op(0xC179908, (((int)stk + 8) + 0x44), 0xC1798FC);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1798FC) = *(struct mv3 *)((((int)stk + 8) + 0x44)); }
        nlPopMatrix(0x1);
        nlInvertMatrix(0x0);
        nlGetMatrix(0xC179864);
    }
    nlPopMatrix(0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC179840) = *(struct mv3 *)(0xC1798D0); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC17984C) = *(struct mv3 *)(0xC1798FC); }
    *(unsigned short *)0xC179858 = (*(short *)0xC179928);
    *(unsigned short *)0xC17985A = (*(short *)0xC17992C);
    *(unsigned short *)0xC17985C = (*(short *)0xC179930);
    nlMatrixMode(0x2);
    nlLoadMatrix(0xC179864);
    nlMatrixMode(0x1);
    nlMakeModelViewMatrix();
    return (SetNewClippingAngle((*(float *)0xC1798A4)));
}
