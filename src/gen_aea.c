/* Straight-line functions with calls and guards (batch gen_aea): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetAverageAngle(int, int, float);
int nlGetAverageVector(int, int, int, float, float);
int nlGetTranslate(int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int sklRotate(int);
int SklIpPlay(int a4, int a5, int a6, int a7, int a8, int a9, float f4);

int SklIpPlay(int a4, int a5, int a6, int a7, int a8, int a9, float f4)
{
    int t0;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t17;
    int t20;
    int t23;
    int stk[20];
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    float R1032;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1032 = *(float *)((int)stk + 32);

    R1008 = a4;
    R1012 = a5;
    R1004 = a6;
    R1016 = a7;
    t0 = *(int *)(((a8 << 2) + 0xC1331B0));
    R1012 = (((int)((int)(R1012) % (int)((unsigned short)(*(short *)(((R1008) + 0x0))) - 1))) + 0x1);
    R1016 = (((int)((int)(R1016) % (int)((unsigned short)(*(short *)(((R1004) + 0x0))) - 1))) + 0x1);
    t10 = R1012;
    t11 = R1008;
    t12 = *(int *)(((R1008) + 0x8));
    t13 = R1004;
    t14 = *(int *)((t13 + 0x8));
    t15 = R1016;
    nlPushMatrix(0x0);
    t17 = R1004;
    t20 = R1016;
    t23 = R1012;
    nlGetAverageVector((((R1008) - (*(int *)(((R1008) + 0x4)))) + (((t23 << 1) + t23) << 2)), ((t17 - (*(int *)((t17 + 0x4)))) + (((t20 << 1) + t20) << 2)), (((int)stk + 4) + 0x18), (1.0f - f4), f4);
    if (a9 == 0) {
        nlTranslateV((((int)stk + 4) + 0x18));
    } else {
        nlTranslate(0.0f, (R1032), 0.0f);
    }
    *(unsigned short *)(((int)stk + 20)) = (GetAverageAngle((*(short *)((((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x0))), (*(short *)((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x0))), (1.0f - f4)));
    *(unsigned short *)(((int)stk + 22)) = (GetAverageAngle((*(short *)((((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x2))), (*(short *)((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x2))), (1.0f - f4)));
    *(unsigned short *)(((int)stk + 24)) = (GetAverageAngle((*(short *)((((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x4))), (*(short *)((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x4))), (1.0f - f4)));
    sklRotate((((int)stk + 4) + 0x10));
    nlPushMatrix(0x0);
    R1004 = (((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x30);
    R1008 = (((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x30);
    *(unsigned short *)(((int)stk + 20)) = (GetAverageAngle((*(short *)(((R1004) + 0x0))), (*(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x30) + 0x0))), (1.0f - f4)));
    *(unsigned short *)(((int)stk + 22)) = (GetAverageAngle((*(short *)(((R1004) + 0x2))), (*(short *)(((R1008) + 0x2))), (1.0f - f4)));
    *(unsigned short *)(((int)stk + 24)) = (GetAverageAngle((*(short *)(((R1004) + 0x4))), (*(short *)(((R1008) + 0x4))), (1.0f - f4)));
    sklRotate((((int)stk + 4) + 0x10));
    R1004 = (t0 + 0x20);
    if ((*(int *)(((t0 + 0x20) + 0x0))) != 0) {
        nlObjPutUseViewMatrix((*(int *)(((t0 + 0x20) + 0x0))));
    }
    if (a8 != 1) {
        if (a8 != 3) {
            if (a8 != 12) {
                if (a8 != 17) {
                    if (a8 != 18) {
                        if (a8 != 19) {
                            if (a8 != 20) {
                                if (a8 != 21) {
                                    if (a8 != 23) {
                                        if (a8 != 29) {
                                            if (a8 != 34) {
                                                if (a8 != 37) {
                                                    if (a8 != 53) {
                                                        if (a8 != 54) {
                                                            if (a8 != 59) {
                                                                if (a8 != 61) {
                                                                } else {
                                                                    nlObjPutUseViewMatrix(0xC49AFA8);
                                                                }
                                                            } else {
                                                                nlObjPutUseViewMatrix(0xC56E778);
                                                            }
                                                        } else {
                                                            nlObjPutUseViewMatrix(0xC4D35A8);
                                                        }
                                                    } else {
                                                        nlObjPutUseViewMatrix(0xC55C470);
                                                    }
                                                } else {
                                                    nlObjPutUseViewMatrix(0xC5027E8);
                                                }
                                            } else {
                                                nlObjPutUseViewMatrix(0xC4EE460);
                                            }
                                        } else {
                                            nlObjPutUseViewMatrix(0xC4D35A8);
                                        }
                                    } else {
                                        nlObjPutUseViewMatrix(0xC4B15B8);
                                    }
                                } else {
                                    nlObjPutUseViewMatrix(0xC4AAA40);
                                }
                            } else {
                                nlObjPutUseViewMatrix(0xC4A87C8);
                            }
                        } else {
                            nlObjPutUseViewMatrix(0xC4A68B0);
                        }
                    } else {
                        nlObjPutUseViewMatrix(0xC4A49E0);
                    }
                } else {
                    nlObjPutUseViewMatrix(0xC4A2C40);
                }
            } else {
                nlObjPutUseViewMatrix(0xC5A0878);
            }
        } else {
            nlObjPutUseViewMatrix(0xC495C20);
        }
    } else {
        nlObjPutUseViewMatrix(0xC567178);
    }
    nlPushMatrix(0x0);
    nlTranslateV(0xC0D5430);
    R1004 = (((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x6);
    R1008 = (((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x6);
    *(unsigned short *)(((int)stk + 20)) = (GetAverageAngle((*(short *)(((R1004) + 0x0))), (*(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x6) + 0x0))), (1.0f - f4)));
    *(unsigned short *)(((int)stk + 22)) = (GetAverageAngle((*(short *)(((R1004) + 0x2))), (*(short *)(((R1008) + 0x2))), (1.0f - f4)));
    *(unsigned short *)(((int)stk + 24)) = (GetAverageAngle((*(short *)(((R1004) + 0x4))), (*(short *)(((R1008) + 0x4))), (1.0f - f4)));
    sklRotate((((int)stk + 4) + 0x10));
    R1004 = (t0 + 0x4);
    if ((*(int *)(((t0 + 0x4) + 0x0))) != 0) {
        nlObjPutUseViewMatrix((*(int *)(((t0 + 0x4) + 0x0))));
    }
    if ((unsigned int)(a8 - 1) < (unsigned int)0x3E) {
        switch (((a8 - 1) << 1)) {
            case 0:
            {
                nlObjPutUseViewMatrix(0xC5634F8);
                nlObjPutUseViewMatrix(0xC5638B8);
                nlObjPutUseViewMatrix(0xC563D68);
            }
                break;
            case 2:
            {
                nlObjPutUseViewMatrix(0xC572F28);
                nlObjPutUseViewMatrix(0xC572D08);
                nlObjPutUseViewMatrix(0xC573600);
            }
                break;
            case 4:
            {
                nlObjPutUseViewMatrix(0xC492DA0);
                nlObjPutUseViewMatrix(0xC493068);
            }
                break;
            case 6:
            {
                nlObjPutUseViewMatrix(0xC5849B0);
            }
                break;
            case 8:
            case 10:
            case 12:
            case 14:
            case 16:
            case 18:
            case 22:
            case 34:
            case 46:
            case 48:
            case 50:
            case 54:
            case 56:
            case 60:
            case 62:
            case 64:
            case 70:
            case 72:
            case 74:
            case 82:
            case 88:
            case 96:
            case 104:
            {
            }
                break;
            case 20:
            {
                nlObjPutUseViewMatrix(0xC59E200);
            }
                break;
            case 24:
            {
                nlObjPutUseViewMatrix(0xC5A1B78);
            }
                break;
            case 26:
            {
                nlObjPutUseViewMatrix(0xC5A3430);
                nlObjPutUseViewMatrix(0xC5A3788);
            }
                break;
            case 28:
            {
                nlObjPutUseViewMatrix(0xC5A5CD0);
                nlObjPutUseViewMatrix(0xC5A6028);
            }
                break;
            case 30:
            {
                nlObjPutUseViewMatrix(0xC5A8688);
            }
                break;
            case 32:
            {
                nlObjPutUseViewMatrix(0xC4A1DC0);
            }
                break;
            case 36:
            {
                nlObjPutUseViewMatrix(0xC4A5A30);
            }
                break;
            case 38:
            {
                nlObjPutUseViewMatrix(0xC4A7900);
            }
                break;
            case 40:
            {
                nlObjPutUseViewMatrix(0xC4A9818);
            }
                break;
            case 42:
            {
                nlObjPutUseViewMatrix(0xC4ABD18);
            }
                break;
            case 44:
            {
                nlObjPutUseViewMatrix(0xC4AF058);
            }
                break;
            case 52:
            {
                nlObjPutUseViewMatrix(0xC4C5B10);
                nlObjPutUseViewMatrix(0xC4C5CF8);
                nlObjPutUseViewMatrix(0xC4C5EF8);
            }
                break;
            case 58:
            {
                nlObjPutUseViewMatrix(0xC4D6B70);
                nlObjPutUseViewMatrix(0xC4D6D60);
            }
                break;
            case 66:
            {
                nlObjPutUseViewMatrix(0xC4EC4E8);
            }
                break;
            case 68:
            {
                nlObjPutUseViewMatrix(0xC4F6420);
            }
                break;
            case 76:
            {
                nlObjPutUseViewMatrix(0xC50B4E0);
            }
                break;
            case 78:
            {
                nlObjPutUseViewMatrix(0xC511448);
                nlObjPutUseViewMatrix(0xC5116E8);
            }
                break;
            case 80:
            {
                nlObjPutUseViewMatrix(0xC516FD0);
            }
                break;
            case 84:
            {
                nlObjPutUseViewMatrix(0xC5227D0);
            }
                break;
            case 86:
            {
                nlObjPutUseViewMatrix(0xC527BC8);
            }
                break;
            case 90:
            {
                nlObjPutUseViewMatrix(0xC532F58);
            }
                break;
            case 92:
            {
                nlObjPutUseViewMatrix(0xC5386F8);
            }
                break;
            case 94:
            {
                nlObjPutUseViewMatrix(0xC53E200);
            }
                break;
            case 98:
            {
                nlObjPutUseViewMatrix(0xC549570);
            }
                break;
            case 100:
            {
                nlObjPutUseViewMatrix(0xC54EB48);
            }
                break;
            case 102:
            {
                nlObjPutUseViewMatrix(0xC5548A0);
            }
                break;
            case 106:
            {
                nlObjPutUseViewMatrix(0xC4A9818);
            }
                break;
            case 108:
            {
                nlObjPutUseViewMatrix(0xC4A9818);
            }
                break;
            case 110:
            {
                nlObjPutUseViewMatrix(0xC5227D0);
                nlObjPutUseViewMatrix(0xC4A9818);
            }
                break;
            case 112:
            {
                nlObjPutUseViewMatrix(0xC4A9818);
            }
                break;
            case 114:
            {
                nlObjPutUseViewMatrix(0xC5548A0);
                nlObjPutUseViewMatrix(0xC4A9818);
            }
                break;
            case 116:
            {
                nlObjPutUseViewMatrix(0xC569030);
                nlObjPutUseViewMatrix(0xC5693F0);
                nlObjPutUseViewMatrix(0xC5698A0);
            }
                break;
            case 118:
            {
                nlObjPutUseViewMatrix(0xC579890);
                nlObjPutUseViewMatrix(0xC579670);
                nlObjPutUseViewMatrix(0xC5794F0);
            }
                break;
            case 120:
            {
                nlObjPutUseViewMatrix(0xC4970A0);
                nlObjPutUseViewMatrix(0xC497368);
            }
                break;
            default:
            {
                nlObjPutUseViewMatrix(0xC58B1E0);
            }
                break;
        }
    }
    if ((*(int *)0xC13ED9C) != 0) {
        nlGetTranslate(0xC13EDA4);
    }
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslateV(0xC0D543C);
    R1004 = (((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x18);
    R1008 = (((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x18);
    *(unsigned short *)(((int)stk + 20)) = (GetAverageAngle((*(short *)(((R1004) + 0x0))), (*(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x18) + 0x0))), (1.0f - f4)));
    *(unsigned short *)(((int)stk + 22)) = (GetAverageAngle((*(short *)(((R1004) + 0x2))), (*(short *)(((R1008) + 0x2))), (1.0f - f4)));
    *(unsigned short *)(((int)stk + 24)) = (GetAverageAngle((*(short *)(((R1004) + 0x4))), (*(short *)(((R1008) + 0x4))), (1.0f - f4)));
    sklRotate((((int)stk + 4) + 0x10));
    R1004 = (t0 + 0x10);
    if ((*(int *)(((t0 + 0x10) + 0x0))) != 0) {
        nlObjPutUseViewMatrix((*(int *)(((t0 + 0x10) + 0x0))));
    }
    if (a8 != 1) {
        if (a8 != 2) {
            if (a8 != 4) {
                if (a8 != 25) {
                    if (a8 != 32) {
                        if (a8 != 42) {
                            if (a8 != 59) {
                                if (a8 != 60) {
                                    if (a8 != 62) {
                                    } else {
                                        nlObjPutUseViewMatrix(0xC58DAC0);
                                    }
                                } else {
                                    nlObjPutUseViewMatrix(0xC57CEC8);
                                }
                            } else {
                                nlObjPutUseViewMatrix(0xC56C0E8);
                            }
                        } else {
                            nlObjPutUseViewMatrix(0xC51D520);
                        }
                    } else {
                        nlObjPutUseViewMatrix(0xC4E21F8);
                    }
                } else {
                    nlObjPutUseViewMatrix(0xC4BB208);
                }
            } else {
                nlObjPutUseViewMatrix(0xC586508);
            }
        } else {
            nlObjPutUseViewMatrix(0xC574EA0);
        }
    } else {
        nlObjPutUseViewMatrix(0xC5654D8);
    }
    nlTranslateV(0xC0D5448);
    R1004 = (((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x12);
    R1008 = (((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x12);
    *(unsigned short *)(((int)stk + 20)) = (GetAverageAngle((*(short *)(((R1004) + 0x0))), (*(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x12) + 0x0))), (1.0f - f4)));
    *(unsigned short *)(((int)stk + 22)) = (GetAverageAngle((*(short *)(((R1004) + 0x2))), (*(short *)(((R1008) + 0x2))), (1.0f - f4)));
    *(unsigned short *)(((int)stk + 24)) = (GetAverageAngle((*(short *)(((R1004) + 0x4))), (*(short *)(((R1008) + 0x4))), (1.0f - f4)));
    sklRotate((((int)stk + 4) + 0x10));
    R1004 = (t0 + 0xC);
    if ((*(int *)(((t0 + 0xC) + 0x0))) != 0) {
        nlObjPutUseViewMatrix((*(int *)(((t0 + 0xC) + 0x0))));
    }
    if (a8 != 4) {
        if (a8 != 5) {
            if (a8 != 62) {
            } else {
                nlObjPutUseViewMatrix(0xC58C9E8);
            }
        } else {
            nlObjPutUseViewMatrix(0xC594548);
        }
    } else {
        nlObjPutUseViewMatrix(0xC585FA0);
    }
    nlTranslateV(0xC0D5454);
    R1008 = (((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0xC);
    R1004 = (((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0xC);
    *(unsigned short *)(((int)stk + 20)) = (GetAverageAngle((*(short *)(((R1008) + 0x0))), (*(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0xC) + 0x0))), (1.0f - f4)));
    *(unsigned short *)(((int)stk + 22)) = (GetAverageAngle((*(short *)(((R1008) + 0x2))), (*(short *)(((R1004) + 0x2))), (1.0f - f4)));
    *(unsigned short *)(((int)stk + 24)) = (GetAverageAngle((*(short *)(((R1008) + 0x4))), (*(short *)(((R1004) + 0x4))), (1.0f - f4)));
    sklRotate((((int)stk + 4) + 0x10));
    R1004 = (t0 + 0x8);
    if ((*(int *)(((t0 + 0x8) + 0x0))) != 0) {
        nlObjPutUseViewMatrix((*(int *)(((t0 + 0x8) + 0x0))));
    }
    if ((*(int *)0xC13ED98) != 0) {
        if (a8 != 33) {
            if (a8 != 36) {
            } else {
                nlObjPutUseViewMatrix(0xC4FDD38);
            }
        } else {
            nlObjPutUseViewMatrix(0xC4EA2A8);
        }
    }
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslateV(0xC0D5460);
    R1008 = (((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x2A);
    R1004 = (((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x2A);
    *(unsigned short *)(((int)stk + 20)) = (GetAverageAngle((*(short *)(((R1008) + 0x0))), (*(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x2A) + 0x0))), (1.0f - f4)));
    *(unsigned short *)(((int)stk + 22)) = (GetAverageAngle((*(short *)(((R1008) + 0x2))), (*(short *)(((R1004) + 0x2))), (1.0f - f4)));
    *(unsigned short *)(((int)stk + 24)) = (GetAverageAngle((*(short *)(((R1008) + 0x4))), (*(short *)(((R1004) + 0x4))), (1.0f - f4)));
    sklRotate((((int)stk + 4) + 0x10));
    R1004 = (t0 + 0x1C);
    if ((*(int *)(((t0 + 0x1C) + 0x0))) != 0) {
        nlObjPutUseViewMatrix((*(int *)(((t0 + 0x1C) + 0x0))));
    }
    if (a8 != 1) {
        if (a8 != 2) {
            if (a8 != 4) {
                if (a8 != 25) {
                    if (a8 != 32) {
                        if (a8 != 42) {
                            if (a8 != 59) {
                                if (a8 != 60) {
                                    if (a8 != 62) {
                                    } else {
                                        nlObjPutUseViewMatrix(0xC58FB18);
                                    }
                                } else {
                                    nlObjPutUseViewMatrix(0xC57F2C8);
                                }
                            } else {
                                nlObjPutUseViewMatrix(0xC56DCC0);
                            }
                        } else {
                            nlObjPutUseViewMatrix(0xC51DA80);
                        }
                    } else {
                        nlObjPutUseViewMatrix(0xC4E2720);
                    }
                } else {
                    nlObjPutUseViewMatrix(0xC4BB7A8);
                }
            } else {
                nlObjPutUseViewMatrix(0xC587E40);
            }
        } else {
            nlObjPutUseViewMatrix(0xC5768B8);
        }
    } else {
        nlObjPutUseViewMatrix(0xC566CB0);
    }
    nlTranslateV(0xC0D546C);
    R1004 = (((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x24);
    R1008 = (((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x24);
    *(unsigned short *)(((int)stk + 20)) = (GetAverageAngle((*(short *)(((R1004) + 0x0))), (*(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x24) + 0x0))), (1.0f - f4)));
    *(unsigned short *)(((int)stk + 22)) = (GetAverageAngle((*(short *)(((R1004) + 0x2))), (*(short *)(((R1008) + 0x2))), (1.0f - f4)));
    *(unsigned short *)(((int)stk + 24)) = (GetAverageAngle((*(short *)(((R1004) + 0x4))), (*(short *)(((R1008) + 0x4))), (1.0f - f4)));
    sklRotate((((int)stk + 4) + 0x10));
    R1004 = (t0 + 0x18);
    if ((*(int *)(((t0 + 0x18) + 0x0))) != 0) {
        nlObjPutUseViewMatrix((*(int *)(((t0 + 0x18) + 0x0))));
    }
    nlTranslateV(0xC0D5478);
    R1004 = (((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x1E);
    R1008 = (((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x1E);
    *(unsigned short *)(((int)stk + 20)) = (GetAverageAngle((*(short *)(((R1004) + 0x0))), (*(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x1E) + 0x0))), (1.0f - f4)));
    *(unsigned short *)(((int)stk + 22)) = (GetAverageAngle((*(short *)(((R1004) + 0x2))), (*(short *)(((R1008) + 0x2))), (1.0f - f4)));
    *(unsigned short *)(((int)stk + 24)) = (GetAverageAngle((*(short *)(((R1004) + 0x4))), (*(short *)(((R1008) + 0x4))), (1.0f - f4)));
    sklRotate((((int)stk + 4) + 0x10));
    R1004 = (t0 + 0x14);
    if ((*(int *)(((t0 + 0x14) + 0x0))) != 0) {
        nlObjPutUseViewMatrix((*(int *)(((t0 + 0x14) + 0x0))));
    }
    if (((*(int *)0xC13ED98) != 0) && (a8 == 35)) {
        nlObjPutUseViewMatrix(0xC4FA698);
    }
    nlPopMatrix(0x1);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    R1008 = (((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x5A);
    R1004 = (((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x5A);
    *(unsigned short *)(((int)stk + 20)) = (GetAverageAngle((*(short *)(((R1008) + 0x0))), (*(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x5A) + 0x0))), (1.0f - f4)));
    *(unsigned short *)(((int)stk + 22)) = (GetAverageAngle((*(short *)(((R1008) + 0x2))), (*(short *)(((R1004) + 0x2))), (1.0f - f4)));
    *(unsigned short *)(((int)stk + 24)) = (GetAverageAngle((*(short *)(((R1008) + 0x4))), (*(short *)(((R1004) + 0x4))), (1.0f - f4)));
    sklRotate((((int)stk + 4) + 0x10));
    R1004 = (t0 + 0x3C);
    if ((*(int *)(((t0 + 0x3C) + 0x0))) != 0) {
        nlObjPutUseViewMatrix((*(int *)(((t0 + 0x3C) + 0x0))));
    }
    if (a8 != 2) {
        if (a8 != 3) {
            if (a8 != 14) {
                if (a8 != 15) {
                    if (a8 != 29) {
                        if (a8 != 31) {
                            if (a8 != 35) {
                                if (a8 != 37) {
                                    if (a8 != 39) {
                                        if (a8 != 44) {
                                            if (a8 != 45) {
                                                if (a8 != 46) {
                                                    if (a8 != 51) {
                                                        if (a8 != 54) {
                                                            if (a8 != 55) {
                                                                if (a8 != 60) {
                                                                    if (a8 != 61) {
                                                                    } else {
                                                                        nlObjPutUseViewMatrix(0xC499990);
                                                                    }
                                                                } else {
                                                                    nlObjPutUseViewMatrix(0xC5836A0);
                                                                }
                                                            } else {
                                                                nlObjPutUseViewMatrix(0xC4DCDE0);
                                                            }
                                                        } else {
                                                            nlObjPutUseViewMatrix(0xC4D2010);
                                                        }
                                                    } else {
                                                        nlObjPutUseViewMatrix(0xC550020);
                                                    }
                                                } else {
                                                    nlObjPutUseViewMatrix(0xC533FA8);
                                                }
                                            } else {
                                                nlObjPutUseViewMatrix(0xC52E6C8);
                                            }
                                        } else {
                                            nlObjPutUseViewMatrix(0xC528C18);
                                        }
                                    } else {
                                        nlObjPutUseViewMatrix(0xC50C828);
                                    }
                                } else {
                                    nlObjPutUseViewMatrix(0xC501220);
                                }
                            } else {
                                nlObjPutUseViewMatrix(0xC4F7C78);
                            }
                        } else {
                            nlObjPutUseViewMatrix(0xC4DCDE0);
                        }
                    } else {
                        nlObjPutUseViewMatrix(0xC4D2010);
                    }
                } else {
                    nlObjPutUseViewMatrix(0xC5A8088);
                }
            } else {
                nlObjPutUseViewMatrix(0xC5A57E8);
            }
        } else {
            nlObjPutUseViewMatrix(0xC4948E0);
        }
    } else {
        nlObjPutUseViewMatrix(0xC5786B8);
    }
    if ((*(int *)0xC13EDA0) != 0) {
        nlGetTranslate(0xC13EDB0);
    }
    nlPushMatrix(0x0);
    nlTranslateV(0xC0D5484);
    R1008 = (((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x42);
    R1004 = (((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x42);
    *(unsigned short *)(((int)stk + 20)) = (GetAverageAngle((*(short *)(((R1008) + 0x0))), (*(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x42) + 0x0))), (1.0f - f4)));
    *(unsigned short *)(((int)stk + 22)) = (GetAverageAngle((*(short *)(((R1008) + 0x2))), (*(short *)(((R1004) + 0x2))), (1.0f - f4)));
    *(unsigned short *)(((int)stk + 24)) = (GetAverageAngle((*(short *)(((R1008) + 0x4))), (*(short *)(((R1004) + 0x4))), (1.0f - f4)));
    sklRotate((((int)stk + 4) + 0x10));
    R1004 = (t0 + 0x2C);
    if ((*(int *)(((t0 + 0x2C) + 0x0))) != 0) {
        nlObjPutUseViewMatrix((*(int *)(((t0 + 0x2C) + 0x0))));
    }
    if (a8 != 25) {
        if (a8 != 35) {
            if (a8 != 42) {
                if (a8 != 44) {
                } else {
                    nlObjPutUseViewMatrix(0xC529218);
                }
            } else {
                nlObjPutUseViewMatrix(0xC51E450);
            }
        } else {
            nlObjPutUseViewMatrix(0xC4F8138);
        }
    } else {
        nlObjPutUseViewMatrix(0xC4BC440);
    }
    nlTranslateV(0xC0D5490);
    R1008 = (((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x3C);
    R1004 = (((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x3C);
    *(unsigned short *)(((int)stk + 20)) = (GetAverageAngle((*(short *)(((R1008) + 0x0))), (*(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x3C) + 0x0))), (1.0f - f4)));
    *(unsigned short *)(((int)stk + 22)) = (GetAverageAngle((*(short *)(((R1008) + 0x2))), (*(short *)(((R1004) + 0x2))), (1.0f - f4)));
    *(unsigned short *)(((int)stk + 24)) = (GetAverageAngle((*(short *)(((R1008) + 0x4))), (*(short *)(((R1004) + 0x4))), (1.0f - f4)));
    sklRotate((((int)stk + 4) + 0x10));
    R1004 = (t0 + 0x28);
    if ((*(int *)(((t0 + 0x28) + 0x0))) != 0) {
        nlObjPutUseViewMatrix((*(int *)(((t0 + 0x28) + 0x0))));
    }
    nlTranslateV(0xC0D549C);
    R1004 = (((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x36);
    R1008 = (((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x36);
    *(unsigned short *)(((int)stk + 20)) = (GetAverageAngle((*(short *)(((R1004) + 0x0))), (*(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x36) + 0x0))), (1.0f - f4)));
    *(unsigned short *)(((int)stk + 22)) = (GetAverageAngle((*(short *)(((R1004) + 0x2))), (*(short *)(((R1008) + 0x2))), (1.0f - f4)));
    *(unsigned short *)(((int)stk + 24)) = (GetAverageAngle((*(short *)(((R1004) + 0x4))), (*(short *)(((R1008) + 0x4))), (1.0f - f4)));
    sklRotate((((int)stk + 4) + 0x10));
    R1004 = (t0 + 0x24);
    if ((*(int *)(((t0 + 0x24) + 0x0))) != 0) {
        nlObjPutUseViewMatrix((*(int *)(((t0 + 0x24) + 0x0))));
    }
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslateV(0xC0D54A8);
    R1008 = (((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x54);
    R1004 = (((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x54);
    *(unsigned short *)(((int)stk + 20)) = (GetAverageAngle((*(short *)(((R1008) + 0x0))), (*(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x54) + 0x0))), (1.0f - f4)));
    *(unsigned short *)(((int)stk + 22)) = (GetAverageAngle((*(short *)(((R1008) + 0x2))), (*(short *)(((R1004) + 0x2))), (1.0f - f4)));
    *(unsigned short *)(((int)stk + 24)) = (GetAverageAngle((*(short *)(((R1008) + 0x4))), (*(short *)(((R1004) + 0x4))), (1.0f - f4)));
    sklRotate((((int)stk + 4) + 0x10));
    R1004 = (t0 + 0x38);
    if ((*(int *)(((t0 + 0x38) + 0x0))) != 0) {
        nlObjPutUseViewMatrix((*(int *)(((t0 + 0x38) + 0x0))));
    }
    if (a8 != 25) {
        if (a8 != 35) {
            if (a8 != 42) {
                if (a8 != 44) {
                } else {
                    nlObjPutUseViewMatrix(0xC5296D8);
                }
            } else {
                nlObjPutUseViewMatrix(0xC51E990);
            }
        } else {
            nlObjPutUseViewMatrix(0xC4F85A8);
        }
    } else {
        nlObjPutUseViewMatrix(0xC4BC8C8);
    }
    nlTranslateV(0xC0D54B4);
    R1004 = (((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x4E);
    *(unsigned short *)(((int)stk + 20)) = (GetAverageAngle((*(short *)(((((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x4E) + 0x0))), (*(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x4E) + 0x0))), (1.0f - f4)));
    *(unsigned short *)(((int)stk + 22)) = (GetAverageAngle((*(short *)(((R1004) + 0x2))), (*(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x4E) + 0x2))), (1.0f - f4)));
    *(unsigned short *)(((int)stk + 24)) = (GetAverageAngle((*(short *)(((R1004) + 0x4))), (*(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x4E) + 0x4))), (1.0f - f4)));
    sklRotate((((int)stk + 4) + 0x10));
    if ((*(int *)(((t0 + 0x34) + 0x0))) != 0) {
        nlObjPutUseViewMatrix((*(int *)(((t0 + 0x34) + 0x0))));
    }
    nlTranslateV(0xC0D54C0);
    *(unsigned short *)(((int)stk + 20)) = (GetAverageAngle((*(short *)(((((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x48) + 0x0))), (*(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x48) + 0x0))), (1.0f - f4)));
    *(unsigned short *)(((int)stk + 22)) = (GetAverageAngle((*(short *)(((((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x48) + 0x2))), (*(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x48) + 0x2))), (1.0f - f4)));
    *(unsigned short *)(((int)stk + 24)) = (GetAverageAngle((*(short *)(((((t11 - t12) + ((((t10 << 2) << 2) << 1) + (((t10 << 2) << 2) << 2))) + 0x48) + 0x4))), (*(short *)(((((t13 - t14) + ((((t15 << 2) << 2) << 1) + (((t15 << 2) << 2) << 2))) + 0x48) + 0x4))), (1.0f - f4)));
    sklRotate((((int)stk + 4) + 0x10));
    if ((*(int *)(((t0 + 0x30) + 0x0))) != 0) {
        nlObjPutUseViewMatrix((*(int *)(((t0 + 0x30) + 0x0))));
    }
    nlPopMatrix(0x1);
    nlPopMatrix(0x1);
    return (nlPopMatrix(0x1));
}
