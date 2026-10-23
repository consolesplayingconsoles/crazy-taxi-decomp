/* Straight-line functions with calls and guards (batch gen_im): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int fcvRotateCurve(void);
int fcvSolveIK(int, int, int, int, int);
int fcvTranslateCurve(void);
float nlFloor(float);
int nlGetPushedMatrix(int);
int nlGetTranslate(int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlTranslate(float, float, float);
int FcvPlay(int a4, int a5, float f4);

int FcvPlay(int a4, int a5, float f4)
{
    int t1;
    int stk[32];

    t1 = *(int *)(((a5 << 2) + 0xC1331B0));
    nlFloor((f4 / (float)((*(int *)((a4 + 0x0))) - 1)));
    *(volatile int *)((a4 + 0x0));
    nlPushMatrix(0x0);
    nlPushMatrix(0x0);
    *(volatile int *)((a4 + 0x18));
    fcvTranslateCurve();
    nlGetTranslate((((int)stk + 8) + 0x3C));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    *(volatile int *)((a4 + 0x24));
    fcvTranslateCurve();
    nlGetTranslate((((int)stk + 8) + 0x30));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    *(volatile int *)((a4 + 0x34));
    fcvTranslateCurve();
    nlGetTranslate((((int)stk + 8) + 0x24));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    *(volatile int *)((a4 + 0x40));
    fcvTranslateCurve();
    nlGetTranslate((((int)stk + 8) + 0x18));
    nlPopMatrix(0x1);
    *(volatile int *)((a4 + 0x4));
    fcvTranslateCurve();
    *(volatile int *)((a4 + 0x8));
    fcvRotateCurve();
    nlRotateAY(0x4000);
    nlPushMatrix(0x0);
    *(volatile int *)((a4 + 0xC));
    fcvRotateCurve();
    *(unsigned int *)(((int)stk + 8)) = (t1 + 0x20);
    if ((*(int *)(((t1 + 0x20) + 0x0))) != 0) {
        nlObjPutUseViewMatrix((*(int *)(((t1 + 0x20) + 0x0))));
    }
    if (a5 != 1) {
        if (a5 != 3) {
            if (a5 != 12) {
                if (a5 != 17) {
                    if (a5 != 18) {
                        if (a5 != 19) {
                            if (a5 != 20) {
                                if (a5 != 21) {
                                    if (a5 != 23) {
                                        if (a5 != 29) {
                                            if (a5 != 34) {
                                                if (a5 != 37) {
                                                    if (a5 != 53) {
                                                        if (a5 != 54) {
                                                            if (a5 != 59) {
                                                                if (a5 != 61) {
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
    nlRotateAZ(0xFFFFC000);
    nlTranslate(0.0f, 4.4849f, 0.0f);
    *(volatile int *)((a4 + 0x10));
    fcvRotateCurve();
    *(unsigned int *)(((int)stk + 8)) = (t1 + 0x4);
    if ((*(int *)(((t1 + 0x4) + 0x0))) != 0) {
        nlObjPutUseViewMatrix((*(int *)(((t1 + 0x4) + 0x0))));
    }
    if ((unsigned int)(a5 - 1) < (unsigned int)0x3E) {
        switch (((a5 - 1) << 1)) {
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
    nlGetPushedMatrix(0x0);
    nlTranslate(3.66109991f, 0.055999998f, -1.78759992f);
    nlGetTranslate((((int)stk + 8) + 0xC));
    *(volatile int *)((a4 + 0x14));
    fcvRotateCurve();
    nlPushMatrix(0x0);
    fcvSolveIK(0x0, (((int)stk + 4) + 0x10), (((int)stk + 4) + 0x40), (((int)stk + 4) + 0x8), (((int)stk + 8) + 0x8));
    nlRotateAZ((*(int *)(((int)stk + 12))));
    *(unsigned int *)(((int)stk + 8)) = (t1 + 0x10);
    if ((*(int *)(((t1 + 0x10) + 0x0))) != 0) {
        nlObjPutUseViewMatrix((*(int *)(((t1 + 0x10) + 0x0))));
    }
    if (a5 != 1) {
        if (a5 != 2) {
            if (a5 != 4) {
                if (a5 != 25) {
                    if (a5 != 32) {
                        if (a5 != 42) {
                            if (a5 != 59) {
                                if (a5 != 60) {
                                    if (a5 != 62) {
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
    nlTranslate(2.5079999f, 0.0f, 0.0f);
    nlRotateAZ((*(int *)(((int)stk + 16))));
    *(unsigned int *)(((int)stk + 8)) = (t1 + 0xC);
    if ((*(int *)(((t1 + 0xC) + 0x0))) != 0) {
        nlObjPutUseViewMatrix((*(int *)(((t1 + 0xC) + 0x0))));
    }
    if (a5 != 4) {
        if (a5 != 5) {
            if (a5 != 62) {
            } else {
                nlObjPutUseViewMatrix(0xC58C9E8);
            }
        } else {
            nlObjPutUseViewMatrix(0xC594548);
        }
    } else {
        nlObjPutUseViewMatrix(0xC585FA0);
    }
    nlTranslate(2.5144999f, 0.0f, 0.0f);
    *(volatile int *)((a4 + 0x1C));
    fcvRotateCurve();
    *(unsigned int *)(((int)stk + 8)) = (t1 + 0x8);
    if ((*(int *)(((t1 + 0x8) + 0x0))) != 0) {
        nlObjPutUseViewMatrix((*(int *)(((t1 + 0x8) + 0x0))));
    }
    if ((*(int *)0xC13ED98) != 0) {
        if (a5 != 33) {
            if (a5 != 36) {
            } else {
                nlObjPutUseViewMatrix(0xC4FDD38);
            }
        } else {
            nlObjPutUseViewMatrix(0xC4EA2A8);
        }
    }
    nlPopMatrix(0x1);
    nlGetPushedMatrix(0x0);
    nlTranslate(3.66109991f, 0.055999998f, 1.78759992f);
    nlGetTranslate((((int)stk + 8) + 0xC));
    *(volatile int *)((a4 + 0x20));
    fcvRotateCurve();
    nlPushMatrix(0x0);
    fcvSolveIK(0x0, (((int)stk + 4) + 0x10), (((int)stk + 4) + 0x34), (((int)stk + 4) + 0x8), (((int)stk + 8) + 0x8));
    nlRotateAZ((*(int *)(((int)stk + 12))));
    *(unsigned int *)(((int)stk + 8)) = (t1 + 0x1C);
    if ((*(int *)(((t1 + 0x1C) + 0x0))) != 0) {
        nlObjPutUseViewMatrix((*(int *)(((t1 + 0x1C) + 0x0))));
    }
    if (a5 != 1) {
        if (a5 != 2) {
            if (a5 != 4) {
                if (a5 != 25) {
                    if (a5 != 32) {
                        if (a5 != 42) {
                            if (a5 != 59) {
                                if (a5 != 60) {
                                    if (a5 != 62) {
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
    nlTranslate(2.5079999f, 0.0f, 0.0f);
    nlRotateAZ((*(int *)(((int)stk + 16))));
    *(unsigned int *)(((int)stk + 8)) = (t1 + 0x18);
    if ((*(int *)(((t1 + 0x18) + 0x0))) != 0) {
        nlObjPutUseViewMatrix((*(int *)(((t1 + 0x18) + 0x0))));
    }
    nlTranslate(2.5144999f, 0.0f, 0.0f);
    *(volatile int *)((a4 + 0x28));
    fcvRotateCurve();
    *(unsigned int *)(((int)stk + 8)) = (t1 + 0x14);
    if ((*(int *)(((t1 + 0x14) + 0x0))) != 0) {
        nlObjPutUseViewMatrix((*(int *)(((t1 + 0x14) + 0x0))));
    }
    if (((*(int *)0xC13ED98) != 0) && (a5 == 35)) {
        nlObjPutUseViewMatrix(0xC4FA698);
    }
    nlPopMatrix(0x2);
    nlGetPushedMatrix(0x0);
    *(volatile int *)((a4 + 0x2C));
    fcvRotateCurve();
    *(unsigned int *)(((int)stk + 8)) = (t1 + 0x3C);
    if ((*(int *)(((t1 + 0x3C) + 0x0))) != 0) {
        nlObjPutUseViewMatrix((*(int *)(((t1 + 0x3C) + 0x0))));
    }
    if (a5 != 2) {
        if (a5 != 3) {
            if (a5 != 14) {
                if (a5 != 15) {
                    if (a5 != 29) {
                        if (a5 != 31) {
                            if (a5 != 35) {
                                if (a5 != 37) {
                                    if (a5 != 39) {
                                        if (a5 != 44) {
                                            if (a5 != 45) {
                                                if (a5 != 46) {
                                                    if (a5 != 51) {
                                                        if (a5 != 54) {
                                                            if (a5 != 55) {
                                                                if (a5 != 60) {
                                                                    if (a5 != 61) {
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
    nlTranslate(1.1602999f, 0.148599997f, -1.17639995f);
    nlGetTranslate((((int)stk + 8) + 0xC));
    *(volatile int *)((a4 + 0x30));
    fcvRotateCurve();
    nlPushMatrix(0x0);
    fcvSolveIK(0x1, (((int)stk + 4) + 0x10), (((int)stk + 4) + 0x28), (((int)stk + 4) + 0x8), (((int)stk + 8) + 0x8));
    nlRotateAZ((*(int *)(((int)stk + 12))));
    *(unsigned int *)(((int)stk + 8)) = (t1 + 0x2C);
    if ((*(int *)(((t1 + 0x2C) + 0x0))) != 0) {
        nlObjPutUseViewMatrix((*(int *)(((t1 + 0x2C) + 0x0))));
    }
    if (a5 != 25) {
        if (a5 != 35) {
            if (a5 != 42) {
                if (a5 != 44) {
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
    nlTranslate(4.05099964f, 0.0f, 0.0f);
    nlRotateAZ((*(int *)(((int)stk + 16))));
    *(unsigned int *)(((int)stk + 8)) = (t1 + 0x28);
    if ((*(int *)(((t1 + 0x28) + 0x0))) != 0) {
        nlObjPutUseViewMatrix((*(int *)(((t1 + 0x28) + 0x0))));
    }
    nlTranslate(4.24659967f, 0.0f, 0.0f);
    *(volatile int *)((a4 + 0x38));
    fcvRotateCurve();
    *(unsigned int *)(((int)stk + 8)) = (t1 + 0x24);
    if ((*(int *)(((t1 + 0x24) + 0x0))) != 0) {
        nlObjPutUseViewMatrix((*(int *)(((t1 + 0x24) + 0x0))));
    }
    nlPopMatrix(0x1);
    nlGetPushedMatrix(0x0);
    nlTranslate(1.1602999f, 0.148599997f, 1.17639995f);
    nlGetTranslate((((int)stk + 8) + 0xC));
    *(volatile int *)((a4 + 0x3C));
    fcvRotateCurve();
    nlPushMatrix(0x0);
    fcvSolveIK(0x1, (((int)stk + 4) + 0x10), (((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x8), (((int)stk + 8) + 0x8));
    nlRotateAZ((*(int *)(((int)stk + 12))));
    *(unsigned int *)(((int)stk + 8)) = (t1 + 0x38);
    if ((*(int *)(((t1 + 0x38) + 0x0))) != 0) {
        nlObjPutUseViewMatrix((*(int *)(((t1 + 0x38) + 0x0))));
    }
    if (a5 != 25) {
        if (a5 != 35) {
            if (a5 != 42) {
                if (a5 != 44) {
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
    nlTranslate(4.05099964f, 0.0f, 0.0f);
    nlRotateAZ((*(int *)(((int)stk + 16))));
    if ((*(int *)(((t1 + 0x34) + 0x0))) != 0) {
        nlObjPutUseViewMatrix((*(int *)(((t1 + 0x34) + 0x0))));
    }
    nlTranslate(4.24659967f, 0.0f, 0.0f);
    *(volatile int *)((a4 + 0x44));
    fcvRotateCurve();
    if ((*(int *)(((t1 + 0x30) + 0x0))) != 0) {
        nlObjPutUseViewMatrix((*(int *)(((t1 + 0x30) + 0x0))));
    }
    return (nlPopMatrix(0x4));
}
