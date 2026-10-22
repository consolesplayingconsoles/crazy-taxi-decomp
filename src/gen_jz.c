/* Straight-line functions with calls and guards (batch gen_jz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlGetAverageVector(int, int, int, float, float);
int nlGetPushedMatrix(int);
int nlGetTranslate(int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int nlUnitVector(int);
int vsklRotate(int);
int VSklIpPlay(int a4, int a5, int a6, int a7, int a8, int a9, float f4);

int VSklIpPlay(int a4, int a5, int a6, int a7, int a8, int a9, float f4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    float u10;
    int t26;
    int t27;
    int t120;
    int t121;
    int t190;
    int t203;
    int t204;
    int t261;
    int t262;
    int t289;
    int t290;
    int t296;
    int t321;
    int t322;
    int t379;
    int t380;
    int t392;
    int t393;
    int t399;
    int t418;
    int t419;
    int t510;
    int t523;
    int t524;
    int t556;
    int t557;
    int t569;
    int t570;
    int t583;
    int t584;
    int t616;
    int t617;
    int t629;
    int t630;
    int t635;
    int stk[19] = {0};

    t0 = *(int *)(((a8 << 2) + 0xC1331B0));
    t1 = *(int *)((a4 + 0x0));
    t2 = (int)((unsigned int)a5 % (unsigned int)(t1 - 1));
    t3 = *(int *)((a6 + 0x0));
    t4 = (int)((unsigned int)a7 % (unsigned int)(t3 - 1));
    t5 = *(int *)((a4 + 0x8));
    t6 = *(int *)((a6 + 0x8));
    nlPushMatrix(0x0);
    nlGetAverageVector((((((((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1)) << 1) + (((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1))) << 2) + t5), (((((((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1)) << 1) + (((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1))) << 2) + t6), (((int)stk + 4) + 0x10), (1.0f - f4), f4);
    if (a9 == 0) {
        nlTranslateV((((int)stk + 4) + 0x10));
    } else {
        u10 = *(float *)(((int)stk + 24));
        nlTranslate(0.0f, u10, 0.0f);
    }
    nlGetAverageVector(((((((((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1)) << 1) + (((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1))) << 2) + t5) + 0xC), ((((((((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1)) << 1) + (((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1))) << 2) + t6) + 0xC), (((int)stk + 4) + 0x10), (1.0f - f4), f4);
    nlUnitVector((((int)stk + 4) + 0x10));
    nlGetAverageVector(((((((((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1)) << 1) + (((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1))) << 2) + t5) + 0x18), ((((((((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1)) << 1) + (((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1))) << 2) + t6) + 0x18), (((int)stk + 4) + 0x4), (1.0f - f4), f4);
    nlUnitVector((((int)stk + 4) + 0x4));
    vsklRotate((((int)stk + 4) + 0x10));
    nlPushMatrix(0x0);
    nlGetAverageVector((0xC0 + ((((((((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1)) << 1) + (((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1))) << 2) + t5) + 0xC)), (0xC0 + ((((((((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1)) << 1) + (((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1))) << 2) + t6) + 0xC)), (((int)stk + 4) + 0x10), (1.0f - f4), f4);
    nlGetAverageVector((0xCC + ((((((((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1)) << 1) + (((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1))) << 2) + t5) + 0xC)), (0xCC + ((((((((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1)) << 1) + (((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1))) << 2) + t6) + 0xC)), (((int)stk + 4) + 0x4), (1.0f - f4), f4);
    nlUnitVector((((int)stk + 4) + 0x10));
    nlUnitVector((((int)stk + 4) + 0x4));
    vsklRotate((((int)stk + 4) + 0x10));
    *(unsigned int *)(((int)stk + 4)) = (t0 + 0x20);
    t26 = *(int *)(((t0 + 0x20) + 0x0));
    if (t26 != 0) {
        t27 = *(int *)(((t0 + 0x20) + 0x0));
        nlObjPutUseViewMatrix(t27);
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
    nlGetAverageVector((((((((((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1)) << 1) + (((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1))) << 2) + t5) + 0xC) + 0x18), (((((((((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1)) << 1) + (((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1))) << 2) + t6) + 0xC) + 0x18), (((int)stk + 4) + 0x10), (1.0f - f4), f4);
    nlGetAverageVector((((((((((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1)) << 1) + (((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1))) << 2) + t5) + 0xC) + 0x24), (((((((((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1)) << 1) + (((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1))) << 2) + t6) + 0xC) + 0x24), (((int)stk + 4) + 0x4), (1.0f - f4), f4);
    nlUnitVector((((int)stk + 4) + 0x10));
    nlUnitVector((((int)stk + 4) + 0x4));
    vsklRotate((((int)stk + 4) + 0x10));
    *(unsigned int *)(((int)stk + 4)) = (t0 + 0x4);
    t120 = *(int *)(((t0 + 0x4) + 0x0));
    if (t120 != 0) {
        t121 = *(int *)(((t0 + 0x4) + 0x0));
        nlObjPutUseViewMatrix(t121);
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
    t190 = *(int *)0xC13ED9C;
    if (t190 != 0) {
        nlGetTranslate(0xC13EDA4);
    }
    nlGetPushedMatrix(0x0);
    nlTranslateV(0xC0D543C);
    nlGetAverageVector((((((((((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1)) << 1) + (((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1))) << 2) + t5) + 0xC) + 0x60), (((((((((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1)) << 1) + (((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1))) << 2) + t6) + 0xC) + 0x60), (((int)stk + 4) + 0x10), (1.0f - f4), f4);
    nlGetAverageVector((((((((((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1)) << 1) + (((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1))) << 2) + t5) + 0xC) + 0x6C), (((((((((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1)) << 1) + (((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1))) << 2) + t6) + 0xC) + 0x6C), (((int)stk + 4) + 0x4), (1.0f - f4), f4);
    nlUnitVector((((int)stk + 4) + 0x10));
    nlUnitVector((((int)stk + 4) + 0x4));
    vsklRotate((((int)stk + 4) + 0x10));
    *(unsigned int *)(((int)stk + 4)) = (t0 + 0x10);
    t203 = *(int *)(((t0 + 0x10) + 0x0));
    if (t203 != 0) {
        t204 = *(int *)(((t0 + 0x10) + 0x0));
        nlObjPutUseViewMatrix(t204);
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
    nlGetAverageVector((((((((((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1)) << 1) + (((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1))) << 2) + t5) + 0xC) + 0x48), (((((((((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1)) << 1) + (((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1))) << 2) + t6) + 0xC) + 0x48), (((int)stk + 4) + 0x10), (1.0f - f4), f4);
    nlGetAverageVector((((((((((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1)) << 1) + (((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1))) << 2) + t5) + 0xC) + 0x54), (((((((((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1)) << 1) + (((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1))) << 2) + t6) + 0xC) + 0x54), (((int)stk + 4) + 0x4), (1.0f - f4), f4);
    nlUnitVector((((int)stk + 4) + 0x10));
    nlUnitVector((((int)stk + 4) + 0x4));
    vsklRotate((((int)stk + 4) + 0x10));
    *(unsigned int *)(((int)stk + 4)) = (t0 + 0xC);
    t261 = *(int *)(((t0 + 0xC) + 0x0));
    if (t261 != 0) {
        t262 = *(int *)(((t0 + 0xC) + 0x0));
        nlObjPutUseViewMatrix(t262);
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
    nlGetAverageVector((((((((((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1)) << 1) + (((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1))) << 2) + t5) + 0xC) + 0x30), (((((((((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1)) << 1) + (((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1))) << 2) + t6) + 0xC) + 0x30), (((int)stk + 4) + 0x10), (1.0f - f4), f4);
    nlGetAverageVector((((((((((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1)) << 1) + (((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1))) << 2) + t5) + 0xC) + 0x3C), (((((((((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1)) << 1) + (((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1))) << 2) + t6) + 0xC) + 0x3C), (((int)stk + 4) + 0x4), (1.0f - f4), f4);
    nlUnitVector((((int)stk + 4) + 0x10));
    nlUnitVector((((int)stk + 4) + 0x4));
    vsklRotate((((int)stk + 4) + 0x10));
    *(unsigned int *)(((int)stk + 4)) = (t0 + 0x8);
    t289 = *(int *)(((t0 + 0x8) + 0x0));
    if (t289 != 0) {
        t290 = *(int *)(((t0 + 0x8) + 0x0));
        nlObjPutUseViewMatrix(t290);
    }
    t296 = *(int *)0xC13ED98;
    if (t296 != 0) {
        if (a8 != 33) {
            if (a8 != 36) {
            } else {
                nlObjPutUseViewMatrix(0xC4FDD38);
            }
        } else {
            nlObjPutUseViewMatrix(0xC4EA2A8);
        }
    }
    nlGetPushedMatrix(0x0);
    nlTranslateV(0xC0D5460);
    nlGetAverageVector((0xA8 + ((((((((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1)) << 1) + (((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1))) << 2) + t5) + 0xC)), (0xA8 + ((((((((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1)) << 1) + (((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1))) << 2) + t6) + 0xC)), (((int)stk + 4) + 0x10), (1.0f - f4), f4);
    nlGetAverageVector((0xB4 + ((((((((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1)) << 1) + (((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1))) << 2) + t5) + 0xC)), (0xB4 + ((((((((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1)) << 1) + (((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1))) << 2) + t6) + 0xC)), (((int)stk + 4) + 0x4), (1.0f - f4), f4);
    nlUnitVector((((int)stk + 4) + 0x10));
    nlUnitVector((((int)stk + 4) + 0x4));
    vsklRotate((((int)stk + 4) + 0x10));
    *(unsigned int *)(((int)stk + 4)) = (t0 + 0x1C);
    t321 = *(int *)(((t0 + 0x1C) + 0x0));
    if (t321 != 0) {
        t322 = *(int *)(((t0 + 0x1C) + 0x0));
        nlObjPutUseViewMatrix(t322);
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
    nlGetAverageVector((0x90 + ((((((((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1)) << 1) + (((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1))) << 2) + t5) + 0xC)), (0x90 + ((((((((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1)) << 1) + (((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1))) << 2) + t6) + 0xC)), (((int)stk + 4) + 0x10), (1.0f - f4), f4);
    nlGetAverageVector((0x9C + ((((((((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1)) << 1) + (((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1))) << 2) + t5) + 0xC)), (0x9C + ((((((((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1)) << 1) + (((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1))) << 2) + t6) + 0xC)), (((int)stk + 4) + 0x4), (1.0f - f4), f4);
    nlUnitVector((((int)stk + 4) + 0x10));
    nlUnitVector((((int)stk + 4) + 0x4));
    vsklRotate((((int)stk + 4) + 0x10));
    *(unsigned int *)(((int)stk + 4)) = (t0 + 0x18);
    t379 = *(int *)(((t0 + 0x18) + 0x0));
    if (t379 != 0) {
        t380 = *(int *)(((t0 + 0x18) + 0x0));
        nlObjPutUseViewMatrix(t380);
    }
    nlTranslateV(0xC0D5478);
    nlGetAverageVector((((((((((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1)) << 1) + (((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1))) << 2) + t5) + 0xC) + 0x78), (((((((((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1)) << 1) + (((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1))) << 2) + t6) + 0xC) + 0x78), (((int)stk + 4) + 0x10), (1.0f - f4), f4);
    nlGetAverageVector((0x84 + ((((((((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1)) << 1) + (((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1))) << 2) + t5) + 0xC)), (0x84 + ((((((((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1)) << 1) + (((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1))) << 2) + t6) + 0xC)), (((int)stk + 4) + 0x4), (1.0f - f4), f4);
    nlUnitVector((((int)stk + 4) + 0x10));
    nlUnitVector((((int)stk + 4) + 0x4));
    vsklRotate((((int)stk + 4) + 0x10));
    *(unsigned int *)(((int)stk + 4)) = (t0 + 0x14);
    t392 = *(int *)(((t0 + 0x14) + 0x0));
    if (t392 != 0) {
        t393 = *(int *)(((t0 + 0x14) + 0x0));
        nlObjPutUseViewMatrix(t393);
    }
    t399 = *(int *)0xC13ED98;
    if (t399 != 0) {
        if (a8 == 35) {
            nlObjPutUseViewMatrix(0xC4FA698);
        }
    }
    nlPopMatrix(0x2);
    nlPushMatrix(0x0);
    nlGetAverageVector((0x168 + ((((((((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1)) << 1) + (((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1))) << 2) + t5) + 0xC)), (0x168 + ((((((((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1)) << 1) + (((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1))) << 2) + t6) + 0xC)), (((int)stk + 4) + 0x10), (1.0f - f4), f4);
    nlGetAverageVector((0x174 + ((((((((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1)) << 1) + (((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1))) << 2) + t5) + 0xC)), (0x174 + ((((((((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1)) << 1) + (((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1))) << 2) + t6) + 0xC)), (((int)stk + 4) + 0x4), (1.0f - f4), f4);
    nlUnitVector((((int)stk + 4) + 0x10));
    nlUnitVector((((int)stk + 4) + 0x4));
    vsklRotate((((int)stk + 4) + 0x10));
    *(unsigned int *)(((int)stk + 4)) = (t0 + 0x3C);
    t418 = *(int *)(((t0 + 0x3C) + 0x0));
    if (t418 != 0) {
        t419 = *(int *)(((t0 + 0x3C) + 0x0));
        nlObjPutUseViewMatrix(t419);
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
    t510 = *(int *)0xC13EDA0;
    if (t510 != 0) {
        nlGetTranslate(0xC13EDB0);
    }
    nlPushMatrix(0x0);
    nlTranslateV(0xC0D5484);
    nlGetAverageVector((0x108 + ((((((((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1)) << 1) + (((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1))) << 2) + t5) + 0xC)), (0x108 + ((((((((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1)) << 1) + (((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1))) << 2) + t6) + 0xC)), (((int)stk + 4) + 0x10), (1.0f - f4), f4);
    nlGetAverageVector((0x114 + ((((((((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1)) << 1) + (((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1))) << 2) + t5) + 0xC)), (0x114 + ((((((((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1)) << 1) + (((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1))) << 2) + t6) + 0xC)), (((int)stk + 4) + 0x4), (1.0f - f4), f4);
    nlUnitVector((((int)stk + 4) + 0x10));
    nlUnitVector((((int)stk + 4) + 0x4));
    vsklRotate((((int)stk + 4) + 0x10));
    *(unsigned int *)(((int)stk + 4)) = (t0 + 0x2C);
    t523 = *(int *)(((t0 + 0x2C) + 0x0));
    if (t523 != 0) {
        t524 = *(int *)(((t0 + 0x2C) + 0x0));
        nlObjPutUseViewMatrix(t524);
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
    nlGetAverageVector((0xF0 + ((((((((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1)) << 1) + (((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1))) << 2) + t5) + 0xC)), (0xF0 + ((((((((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1)) << 1) + (((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1))) << 2) + t6) + 0xC)), (((int)stk + 4) + 0x10), (1.0f - f4), f4);
    nlGetAverageVector((0xFC + ((((((((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1)) << 1) + (((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1))) << 2) + t5) + 0xC)), (0xFC + ((((((((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1)) << 1) + (((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1))) << 2) + t6) + 0xC)), (((int)stk + 4) + 0x4), (1.0f - f4), f4);
    nlUnitVector((((int)stk + 4) + 0x10));
    nlUnitVector((((int)stk + 4) + 0x4));
    vsklRotate((((int)stk + 4) + 0x10));
    *(unsigned int *)(((int)stk + 4)) = (t0 + 0x28);
    t556 = *(int *)(((t0 + 0x28) + 0x0));
    if (t556 != 0) {
        t557 = *(int *)(((t0 + 0x28) + 0x0));
        nlObjPutUseViewMatrix(t557);
    }
    nlTranslateV(0xC0D549C);
    nlGetAverageVector((0xD8 + ((((((((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1)) << 1) + (((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1))) << 2) + t5) + 0xC)), (0xD8 + ((((((((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1)) << 1) + (((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1))) << 2) + t6) + 0xC)), (((int)stk + 4) + 0x10), (1.0f - f4), f4);
    nlGetAverageVector((0xE4 + ((((((((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1)) << 1) + (((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1))) << 2) + t5) + 0xC)), (0xE4 + ((((((((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1)) << 1) + (((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1))) << 2) + t6) + 0xC)), (((int)stk + 4) + 0x4), (1.0f - f4), f4);
    nlUnitVector((((int)stk + 4) + 0x10));
    nlUnitVector((((int)stk + 4) + 0x4));
    vsklRotate((((int)stk + 4) + 0x10));
    *(unsigned int *)(((int)stk + 4)) = (t0 + 0x24);
    t569 = *(int *)(((t0 + 0x24) + 0x0));
    if (t569 != 0) {
        t570 = *(int *)(((t0 + 0x24) + 0x0));
        nlObjPutUseViewMatrix(t570);
    }
    nlGetPushedMatrix(0x0);
    nlTranslateV(0xC0D54A8);
    nlGetAverageVector((0x150 + ((((((((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1)) << 1) + (((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1))) << 2) + t5) + 0xC)), (0x150 + ((((((((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1)) << 1) + (((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1))) << 2) + t6) + 0xC)), (((int)stk + 4) + 0x10), (1.0f - f4), f4);
    nlGetAverageVector((0x15C + ((((((((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1)) << 1) + (((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1))) << 2) + t5) + 0xC)), (0x15C + ((((((((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1)) << 1) + (((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1))) << 2) + t6) + 0xC)), (((int)stk + 4) + 0x4), (1.0f - f4), f4);
    nlUnitVector((((int)stk + 4) + 0x10));
    nlUnitVector((((int)stk + 4) + 0x4));
    vsklRotate((((int)stk + 4) + 0x10));
    *(unsigned int *)(((int)stk + 4)) = (t0 + 0x38);
    t583 = *(int *)(((t0 + 0x38) + 0x0));
    if (t583 != 0) {
        t584 = *(int *)(((t0 + 0x38) + 0x0));
        nlObjPutUseViewMatrix(t584);
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
    nlGetAverageVector((0x138 + ((((((((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1)) << 1) + (((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1))) << 2) + t5) + 0xC)), (0x138 + ((((((((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1)) << 1) + (((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1))) << 2) + t6) + 0xC)), (((int)stk + 4) + 0x10), (1.0f - f4), f4);
    nlGetAverageVector((0x144 + ((((((((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1)) << 1) + (((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1))) << 2) + t5) + 0xC)), (0x144 + ((((((((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1)) << 1) + (((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1))) << 2) + t6) + 0xC)), (((int)stk + 4) + 0x4), (1.0f - f4), f4);
    nlUnitVector((((int)stk + 4) + 0x10));
    nlUnitVector((((int)stk + 4) + 0x4));
    vsklRotate((((int)stk + 4) + 0x10));
    *(unsigned int *)(((int)stk + 4)) = (t0 + 0x34);
    t616 = *(int *)(((t0 + 0x34) + 0x0));
    if (t616 != 0) {
        t617 = *(int *)(((t0 + 0x34) + 0x0));
        nlObjPutUseViewMatrix(t617);
    }
    nlTranslateV(0xC0D54C0);
    nlGetAverageVector((0x120 + ((((((((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1)) << 1) + (((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1))) << 2) + t5) + 0xC)), (0x120 + ((((((((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1)) << 1) + (((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1))) << 2) + t6) + 0xC)), (((int)stk + 4) + 0x10), (1.0f - f4), f4);
    nlGetAverageVector((0x12C + ((((((((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1)) << 1) + (((((t2 + 0x1) << 2) << 2) << 1) + (t2 + 0x1))) << 2) + t5) + 0xC)), (0x12C + ((((((((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1)) << 1) + (((((t4 + 0x1) << 2) << 2) << 1) + (t4 + 0x1))) << 2) + t6) + 0xC)), (((int)stk + 4) + 0x4), (1.0f - f4), f4);
    nlUnitVector((((int)stk + 4) + 0x10));
    nlUnitVector((((int)stk + 4) + 0x4));
    vsklRotate((((int)stk + 4) + 0x10));
    t629 = *(int *)(((t0 + 0x30) + 0x0));
    if (t629 != 0) {
        t630 = *(int *)(((t0 + 0x30) + 0x0));
        nlObjPutUseViewMatrix(t630);
    }
    t635 = nlPopMatrix(0x3);
    return t635;
}
