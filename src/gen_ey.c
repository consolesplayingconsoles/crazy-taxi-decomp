/* Straight-line functions with calls and guards (batch gen_ey): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Chat_Direction(void);
int Chat_Iraira(void);
int Chat_TellDestination(void);
int Drv_StartAction(int, int, int);
int FcvStoreBuffer(int, int, float);
int extRand(void);
void psgEnterState3(int a4, int a5);

void psgEnterState3(int a4, int a5)
{
    int t31;
    int t32;
    int t34;
    int t125;
    int t212;
    int t233;
    int t234;
    int t38;
    int t39;
    int t40;
    int t69;
    int t70;
    int t71;
    int stk[75];

    { struct mv4 { int w[4]; }; *(struct mv4 *)((0xEC + ((int)stk + 8))) = *(struct mv4 *)(0xC0D5BC8); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((0xDC + ((int)stk + 8))) = *(struct mv4 *)(0xC0D5BD8); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((0xCC + ((int)stk + 8))) = *(struct mv4 *)(0xC0D5BE8); }
    { struct mv2 { int w[2]; }; *(struct mv2 *)((0xC4 + ((int)stk + 8))) = *(struct mv2 *)(0xC0D5BF8); }
    { struct mv2 { int w[2]; }; *(struct mv2 *)((0xBC + ((int)stk + 8))) = *(struct mv2 *)(0xC0D5C00); }
    { struct mv2 { int w[2]; }; *(struct mv2 *)((0xB4 + ((int)stk + 8))) = *(struct mv2 *)(0xC0D5C08); }
    { struct mv2 { int w[2]; }; *(struct mv2 *)((0xAC + ((int)stk + 8))) = *(struct mv2 *)(0xC0D5C10); }
    *(unsigned int *)(((int)stk + 176)) = (*(int *)0xC0D5C18);
    *(unsigned int *)(((int)stk + 172)) = (*(int *)0xC0D5C1C);
    *(unsigned int *)(((int)stk + 168)) = (*(int *)0xC0D5C20);
    *(unsigned int *)(((int)stk + 164)) = (*(int *)0xC0D5C24);
    *(unsigned int *)(((int)stk + 160)) = (*(int *)0xC0D5C28);
    *(unsigned int *)(((int)stk + 156)) = (*(int *)0xC0D5C2C);
    { struct mv4 { int w[4]; }; *(struct mv4 *)((0x84 + ((int)stk + 8))) = *(struct mv4 *)(0xC0D5C30); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 8) + 0x74)) = *(struct mv4 *)(0xC0D5C40); }
    { struct mv5 { int w[5]; }; *(struct mv5 *)((((int)stk + 8) + 0x60)) = *(struct mv5 *)(0xC0D5C50); }
    { struct mv11 { int w[11]; }; *(struct mv11 *)((((int)stk + 8) + 0x34)) = *(struct mv11 *)(0xC0D5C64); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 8) + 0x24)) = *(struct mv4 *)(0xC0D5C90); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 8) + 0x14)) = *(struct mv4 *)(0xC0D5CA0); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 8) + 0x4)) = *(struct mv4 *)(0xC0D5CB0); }
    *(unsigned int *)(((int)stk + 8)) = 0xC1790CC;
    if ((unsigned int)a5 >= (unsigned int)0x10) {
    } else {
        switch ((a5 << 1)) {
            case 0:
            {
                if (((int)(((unsigned int)(*(int *)(((0x148 + a4) + 0x0))) >> 18) & 0x3)) == 0) {
                    if (((*(signed char *)((a4 + 0x14B))) & 16) != 0) {
                        *(unsigned int *)((a4 + 0x34)) = 0xC9726F4;
                    } else {
                        *(unsigned int *)((a4 + 0x34)) = 0xC972E68;
                    }
                } else {
                    *(unsigned int *)((a4 + 0x34)) = (*(int *)((((((int)(((unsigned int)(*(int *)(((0x148 + a4) + 0x0))) >> 18) & 0x3)) << 2) + (0xEC + ((int)stk + 8))) + 0x0)));
                }
                *(unsigned int *)((a4 + 0x124)) = (*(int *)(((0xDC + ((int)stk + 8)) + (((int)(((unsigned int)(*(int *)(((0x148 + a4) + 0x0))) >> 18) & 0x3)) << 2))));
                *(unsigned int *)((a4 + 0x128)) = (*(int *)(((0xDC + ((int)stk + 8)) + (((int)(((unsigned int)(*(int *)(((0x148 + a4) + 0x0))) >> 18) & 0x3)) << 2))));
                *(float *)((a4 + 0x38)) = 0.0f;
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0x7F);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = 0.0f;
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
            }
                break;
            case 2:
            {
                t31 = *(short *)(((*(int *)(((int)stk + 8))) + 0x86));
                t32 = *(short *)(((*(int *)((a4 + 0x28))) + 0x0));
                t34 = *(int *)0xC1EE210;
                if (((*(signed char *)((a4 + 0x14A))) & 128) == 0) {
                    if ((t34 == 2) && ((t38 = *(int *)0xC1EE214, t38 == 4) || ((t39 = *(int *)0xC1EE214, t39 == 12) || (t40 = *(int *)0xC1EE214, t40 == 15)))) {
                        *(unsigned int *)((a4 + 0x110)) = 0xC903E20;
                        *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                        *(unsigned int *)((a4 + 0x128)) = 0xC0D5730;
                    } else {
                        if ((int)(unsigned short)((t32 - t31) + 0x1000) > (int)0xE000) {
                            *(unsigned int *)((a4 + 0x110)) = 0xC907360;
                            *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                            *(unsigned int *)((a4 + 0x128)) = 0xC0D5730;
                        } else {
                            if ((int)(unsigned short)((t32 - t31) + 0x1000) > (int)0xC000) {
                                *(unsigned int *)(((0x110 + a4) + 0x0)) = 0xC90A900;
                                *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                *(unsigned int *)((a4 + 0x128)) = 0xC0D5730;
                            } else {
                                if ((int)(unsigned short)((t32 - t31) + 0x1000) > (int)0xA000) {
                                    *(unsigned int *)((a4 + 0x110)) = 0xC902298;
                                    *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                    *(unsigned int *)((a4 + 0x128)) = 0xC0D5730;
                                } else {
                                    if ((int)(unsigned short)((t32 - t31) + 0x1000) > (int)0x8000) {
                                        *(unsigned int *)((a4 + 0x110)) = 0xC8FE818;
                                        *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                        *(unsigned int *)((a4 + 0x128)) = 0xC0D5730;
                                    } else {
                                        if ((int)(unsigned short)((t32 - t31) + 0x1000) > (int)0x6000) {
                                            *(unsigned int *)((a4 + 0x110)) = 0xC900390;
                                            *(unsigned int *)((a4 + 0x124)) = 0xC0D5730;
                                            *(unsigned int *)((a4 + 0x128)) = 0xC0D3068;
                                        } else {
                                            if ((int)(unsigned short)((t32 - t31) + 0x1000) > (int)0x4000) {
                                                *(unsigned int *)(((0x110 + a4) + 0x0)) = 0xC908CF8;
                                                *(unsigned int *)((a4 + 0x124)) = 0xC0D5730;
                                                *(unsigned int *)((a4 + 0x128)) = 0xC0D3068;
                                            } else {
                                                if ((int)(unsigned short)((t32 - t31) + 0x1000) > (int)0x2000) {
                                                    *(unsigned int *)(((0x110 + a4) + 0x0)) = 0xC9057E8;
                                                    *(unsigned int *)((a4 + 0x124)) = 0xC0D5730;
                                                    *(unsigned int *)((a4 + 0x128)) = 0xC0D3068;
                                                } else {
                                                    *(unsigned int *)((a4 + 0x110)) = 0xC903E20;
                                                    *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                                    *(unsigned int *)((a4 + 0x128)) = 0xC0D5730;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((t34 == 2) && ((t69 = *(int *)0xC1EE214, t69 == 4) || ((t70 = *(int *)0xC1EE214, t70 == 12) || (t71 = *(int *)0xC1EE214, t71 == 15)))) {
                        *(unsigned int *)((a4 + 0x110)) = 0xC912130;
                        *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                        *(unsigned int *)((a4 + 0x128)) = 0xC0D5750;
                    } else {
                        if ((int)(unsigned short)((t32 - t31) + 0x1000) > (int)0xE000) {
                            *(unsigned int *)((a4 + 0x110)) = 0xC916E40;
                            *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                            *(unsigned int *)((a4 + 0x128)) = 0xC0D57A0;
                        } else {
                            if ((int)(unsigned short)((t32 - t31) + 0x1000) > (int)0xC000) {
                                *(unsigned int *)(((0x110 + a4) + 0x0)) = 0xC91A5C0;
                                *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                *(unsigned int *)((a4 + 0x128)) = 0xC0D5780;
                            } else {
                                if ((int)(unsigned short)((t32 - t31) + 0x1000) > (int)0xA000) {
                                    *(unsigned int *)((a4 + 0x110)) = 0xC9100A8;
                                    *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                    *(unsigned int *)((a4 + 0x128)) = 0xC0D57C0;
                                } else {
                                    if ((int)(unsigned short)((t32 - t31) + 0x1000) > (int)0x8000) {
                                        *(unsigned int *)((a4 + 0x110)) = 0xC90C478;
                                        *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                        *(unsigned int *)((a4 + 0x128)) = 0xC0D5760;
                                    } else {
                                        if ((int)(unsigned short)((t32 - t31) + 0x1000) > (int)0x6000) {
                                            *(unsigned int *)((a4 + 0x110)) = 0xC90E230;
                                            *(unsigned int *)((a4 + 0x124)) = 0xC0D57B0;
                                            *(unsigned int *)((a4 + 0x128)) = 0xC0D3068;
                                        } else {
                                            if ((int)(unsigned short)((t32 - t31) + 0x1000) > (int)0x4000) {
                                                *(unsigned int *)(((0x110 + a4) + 0x0)) = 0xC918988;
                                                *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                                *(unsigned int *)((a4 + 0x128)) = 0xC0D5770;
                                            } else {
                                                if ((int)(unsigned short)((t32 - t31) + 0x1000) > (int)0x2000) {
                                                    *(unsigned int *)(((0x110 + a4) + 0x0)) = 0xC913CC8;
                                                    *(unsigned int *)((a4 + 0x124)) = 0xC0D5790;
                                                    *(unsigned int *)((a4 + 0x128)) = 0xC0D3068;
                                                } else {
                                                    *(unsigned int *)((a4 + 0x110)) = 0xC912130;
                                                    *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                                    *(unsigned int *)((a4 + 0x128)) = 0xC0D5750;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                *(float *)((a4 + 0x114)) = 10.0f;
                FcvStoreBuffer((*(int *)((a4 + 0x110))), (*(int *)((a4 + 0x118))), (*(float *)((a4 + 0x114))));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) | 0x80);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = 10.0f;
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
                if (((*(signed char *)((a4 + 0x14B))) & 1) != 0) {
                    Chat_TellDestination();
                } else {
                    Chat_Direction();
                }
            }
                break;
            case 4:
            {
            }
                break;
            case 6:
            {
                t125 = *(int *)((a4 + 0x34));
                if (t125 != 0xC8FE818) {
                    if (t125 != 0xC900390) {
                        if (t125 != 0xC902298) {
                            if (t125 == 0xC903E20) {
                                *(unsigned int *)((a4 + 0x34)) = 0xC904DA4;
                                *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                *(unsigned int *)((a4 + 0x128)) = 0xC0D5740;
                            } else {
                                if (t125 != 0xC9057E8) {
                                    if (t125 != 0xC907360) {
                                        if (t125 != 0xC908CF8) {
                                            if (t125 != 0xC90A900) {
                                                if (t125 != 0xC90C478) {
                                                    if (t125 != 0xC90E230) {
                                                        if (t125 != 0xC9100A8) {
                                                            if (t125 != 0xC912130) {
                                                                if (t125 != 0xC913CC8) {
                                                                    if (t125 != 0xC916E40) {
                                                                        if (t125 != 0xC918988) {
                                                                            if (t125 != 0xC91A5C0) {
                                                                            } else {
                                                                                *(unsigned int *)((a4 + 0x34)) = 0xC91B2D4;
                                                                                *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                                                                *(unsigned int *)((a4 + 0x128)) = 0xC0D57D0;
                                                                            }
                                                                        } else {
                                                                            *(unsigned int *)((a4 + 0x34)) = 0xC91984C;
                                                                            *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                                                            *(unsigned int *)((a4 + 0x128)) = 0xC0D57D0;
                                                                        }
                                                                    } else {
                                                                        *(unsigned int *)((a4 + 0x34)) = 0xC917E84;
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)((a4 + 0x34)) = 0xC914F1C;
                                                                    *(unsigned int *)((a4 + 0x124)) = 0xC0D57D0;
                                                                    *(unsigned int *)((a4 + 0x128)) = 0xC0D3068;
                                                                }
                                                            } else {
                                                                *(unsigned int *)((a4 + 0x34)) = 0xC913174;
                                                                *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                                                *(unsigned int *)((a4 + 0x128)) = 0xC0D57D0;
                                                            }
                                                        } else {
                                                            *(unsigned int *)((a4 + 0x34)) = 0xC91150C;
                                                            *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                                            *(unsigned int *)((a4 + 0x128)) = 0xC0D57D0;
                                                        }
                                                    } else {
                                                        *(unsigned int *)((a4 + 0x34)) = 0xC90F424;
                                                        *(unsigned int *)((a4 + 0x124)) = 0xC0D57D0;
                                                        *(unsigned int *)((a4 + 0x128)) = 0xC0D3068;
                                                    }
                                                } else {
                                                    *(unsigned int *)((a4 + 0x34)) = 0xC90D5DC;
                                                    *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                                    *(unsigned int *)((a4 + 0x128)) = 0xC0D57D0;
                                                }
                                            } else {
                                                *(unsigned int *)((a4 + 0x34)) = 0xC90B914;
                                                *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                                *(unsigned int *)((a4 + 0x128)) = 0xC0D5740;
                                            }
                                        } else {
                                            *(unsigned int *)((a4 + 0x34)) = 0xC909D3C;
                                            *(unsigned int *)((a4 + 0x124)) = 0xC0D5740;
                                            *(unsigned int *)((a4 + 0x128)) = 0xC0D3068;
                                        }
                                    } else {
                                        *(unsigned int *)((a4 + 0x34)) = 0xC9082E4;
                                        *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                                        *(unsigned int *)((a4 + 0x128)) = 0xC0D5740;
                                    }
                                } else {
                                    *(unsigned int *)((a4 + 0x34)) = 0xC90682C;
                                    *(unsigned int *)((a4 + 0x124)) = 0xC0D5740;
                                    *(unsigned int *)((a4 + 0x128)) = 0xC0D3068;
                                }
                            }
                        } else {
                            *(unsigned int *)((a4 + 0x34)) = 0xC9032DC;
                            *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                            *(unsigned int *)((a4 + 0x128)) = 0xC0D5740;
                        }
                    } else {
                        *(unsigned int *)((a4 + 0x34)) = 0xC901764;
                        *(unsigned int *)((a4 + 0x124)) = 0xC0D5740;
                        *(unsigned int *)((a4 + 0x128)) = 0xC0D3068;
                    }
                } else {
                    *(unsigned int *)((a4 + 0x34)) = 0xC8FF7FC;
                    *(unsigned int *)((a4 + 0x124)) = 0xC0D3068;
                    *(unsigned int *)((a4 + 0x128)) = 0xC0D5740;
                }
                *(float *)((a4 + 0x38)) = 0.0f;
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0x7F);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = 0.0f;
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
            }
                break;
            case 8:
            {
                *(unsigned int *)((a4 + 0x34)) = 0xC945094;
                *(float *)((a4 + 0x38)) = 0.0f;
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0x7F);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = 0.0f;
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
                *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
                *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
                Chat_Iraira();
            }
                break;
            case 10:
            {
                *(unsigned int *)((a4 + 0x34)) = (*(int *)(((0xC4 + ((int)stk + 8)) + (((extRand()) & 0x1) << 2))));
                *(float *)((a4 + 0x38)) = 0.0f;
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0x7F);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = 0.0f;
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
                *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
                *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
                Chat_Iraira();
            }
                break;
            case 12:
            {
                t212 = extRand();
                *(unsigned int *)((a4 + 0x34)) = (*(int *)(((((0x1 & t212) << 2) + (0xBC + ((int)stk + 8))) + 0x0)));
                *(float *)((a4 + 0x38)) = 0.0f;
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0x7F);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = 0.0f;
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
                *(unsigned int *)(((0x124 + a4) + 0x0)) = (*(int *)((((0xB4 + ((int)stk + 8)) + ((0x1 & t212) << 2)) + 0x0)));
                *(unsigned int *)((a4 + 0x128)) = (*(int *)(((((0x1 & t212) << 2) + (0xAC + ((int)stk + 8))) + 0x0)));
                Chat_Iraira();
            }
                break;
            case 14:
            {
                extRand();
                *(unsigned int *)((a4 + 0x34)) = (*(int *)(((0x0 + (0xA8 + ((int)stk + 8))) + 0x0)));
                *(float *)((a4 + 0x38)) = 0.0f;
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0x7F);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = 0.0f;
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
                *(unsigned int *)(((0x124 + a4) + 0x0)) = (*(int *)((((0xA4 + ((int)stk + 8)) + 0x0) + 0x0)));
                *(unsigned int *)((a4 + 0x128)) = (*(int *)(((0x0 + (0xA0 + ((int)stk + 8))) + 0x0)));
            }
                break;
            case 16:
            {
                extRand();
                *(unsigned int *)((a4 + 0x34)) = (*(int *)(((0x0 + (0x9C + ((int)stk + 8))) + 0x0)));
                *(float *)((a4 + 0x38)) = 0.0f;
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0x7F);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = 0.0f;
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
                *(unsigned int *)(((0x124 + a4) + 0x0)) = (*(int *)((((0x98 + ((int)stk + 8)) + 0x0) + 0x0)));
                *(unsigned int *)((a4 + 0x128)) = (*(int *)(((0x0 + (0x94 + ((int)stk + 8))) + 0x0)));
            }
                break;
            case 18:
            {
                t233 = *(short *)(((*(int *)(((int)stk + 8))) + 0x86));
                t234 = *(short *)(((*(int *)((a4 + 0x28))) + 0x0));
                if ((int)(unsigned short)((t234 - t233) + 0x1000) > (int)0xE000) {
                    *(unsigned int *)((a4 + 0x34)) = 0xC92BB18;
                    *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
                    *(unsigned int *)((a4 + 0x128)) = 0xC0D57F8;
                } else {
                    if ((int)(unsigned short)((t234 - t233) + 0x1000) > (int)0xC000) {
                        *(unsigned int *)((a4 + 0x34)) = 0xC92E500;
                        *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
                        *(unsigned int *)((a4 + 0x128)) = 0xC0D57F8;
                    } else {
                        if ((int)(unsigned short)((t234 - t233) + 0x1000) > (int)0xA000) {
                            *(unsigned int *)((a4 + 0x34)) = 0xC92796C;
                            *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
                            *(unsigned int *)((a4 + 0x128)) = 0xC0D57F8;
                        } else {
                            if ((int)(unsigned short)((t234 - t233) + 0x1000) > (int)0x8000) {
                                *(unsigned int *)((a4 + 0x34)) = 0xC924E04;
                                *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
                                *(unsigned int *)((a4 + 0x128)) = 0xC0D57F8;
                            } else {
                                if ((int)(unsigned short)((t234 - t233) + 0x1000) > (int)0x6000) {
                                    *(unsigned int *)((a4 + 0x34)) = 0xC926538;
                                    *(unsigned int *)((a4 + 0x124)) = 0xC0D5790;
                                    *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
                                } else {
                                    if ((int)(unsigned short)((t234 - t233) + 0x1000) > (int)0x4000) {
                                        *(unsigned int *)((a4 + 0x34)) = 0xC92D18C;
                                        *(unsigned int *)((a4 + 0x124)) = 0xC0D5790;
                                        *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
                                    } else {
                                        if ((int)(unsigned short)((t234 - t233) + 0x1000) > (int)0x2000) {
                                            *(unsigned int *)((a4 + 0x34)) = 0xC92A7A4;
                                            *(unsigned int *)((a4 + 0x124)) = 0xC0D5790;
                                            *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
                                        } else {
                                            *(unsigned int *)((a4 + 0x34)) = 0xC929130;
                                            *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
                                            *(unsigned int *)((a4 + 0x128)) = 0xC0D57F8;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                *(float *)((a4 + 0x38)) = 0.0f;
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0x7F);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = 0.0f;
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
                Drv_StartAction(0x7, 0x0, 0x0);
                Chat_Iraira();
            }
                break;
            case 20:
            {
                *(unsigned int *)((a4 + 0x34)) = (*(int *)(((((0x3 & (extRand())) << 2) + (((int)stk + 8) + 0x74)) + 0x0)));
                *(float *)((a4 + 0x38)) = 0.0f;
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0x7F);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = 0.0f;
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
                *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
                *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
                Chat_Iraira();
            }
                break;
            case 22:
            {
                *(unsigned int *)((a4 + 0x110)) = 0xC979F64;
                *(float *)((a4 + 0x114)) = 0.0f;
                FcvStoreBuffer((*(int *)((a4 + 0x110))), (*(int *)((a4 + 0x118))), (*(float *)((a4 + 0x114))));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) | 0x80);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = 15.0f;
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
                *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
                *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
            }
                break;
            case 24:
            {
                *(unsigned int *)((a4 + 0x110)) = 0xC979F64;
                *(unsigned int *)((a4 + 0x34)) = 0xC979F64;
                *(float *)((a4 + 0x114)) = 73.0f;
                *(float *)((a4 + 0x38)) = 73.0f;
                FcvStoreBuffer((*(int *)((a4 + 0x110))), (*(int *)((a4 + 0x118))), (*(float *)((a4 + 0x114))));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0x7F);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = 0.0f;
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
                *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
                *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
            }
                break;
            case 26:
            {
                *(unsigned int *)((a4 + 0x110)) = (*(int *)(((((int)stk + 8) + 0x60) + (((int)((unsigned int)(*(int *)0xC0E49E0) % (unsigned int)0x5)) << 2))));
                *(float *)((a4 + 0x114)) = 0.0f;
                FcvStoreBuffer((*(int *)((a4 + 0x110))), (*(int *)((a4 + 0x118))), (*(float *)((a4 + 0x114))));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) | 0x80);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = 15.0f;
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
                *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
                *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
            }
                break;
            case 28:
            {
                *(unsigned int *)((a4 + 0x110)) = (*(int *)(((((int)stk + 8) + 0x34) + (((int)((unsigned int)(*(int *)0xC0E49E0) % (unsigned int)0xB)) << 2))));
                *(float *)((a4 + 0x114)) = 0.0f;
                FcvStoreBuffer((*(int *)((a4 + 0x110))), (*(int *)((a4 + 0x118))), (*(float *)((a4 + 0x114))));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) | 0x80);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = 5.0f;
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
                *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
                *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
            }
                break;
            default:
            {
                *(unsigned int *)((a4 + 0x110)) = (*(int *)(((((int)stk + 8) + 0x24) + ((*(int *)0xC2AE340) << 2))));
                if ((*(int *)0xC2AE340) == 3) {
                    Drv_StartAction(0x8, 0x0, 0x0);
                }
                *(float *)((a4 + 0x114)) = 0.0f;
                FcvStoreBuffer((*(int *)((a4 + 0x110))), (*(int *)((a4 + 0x118))), (*(float *)((a4 + 0x114))));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) | 0x80);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = 5.0f;
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
                *(unsigned int *)((a4 + 0x124)) = (*(int *)(((((*(int *)0xC2AE340) << 2) + (((int)stk + 8) + 0x14)) + 0x0)));
                *(unsigned int *)((a4 + 0x128)) = (*(int *)(((((*(int *)0xC2AE340) << 2) + (((int)stk + 8) + 0x4)) + 0x0)));
            }
                break;
        }
    }
}
