/* Straight-line functions with calls and guards (batch gen_im): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Chat_Direction(int);
extern int Chat_Iraira();
int Chat_TellDestination(int);
int Drv_StartAction(int, int, int);
int FcvStoreBuffer(int, int, float);
int extRand(void);
void psgEnterState3(int a4, int a5);
struct o108_float { char p[0x108]; float v; };
struct o10C_float { char p[0x10C]; float v; };
struct o110_int { char p[0x110]; int v; };
struct o110_uint { char p[0x110]; unsigned int v; };
struct o114_float { char p[0x114]; float v; };
struct o118_int { char p[0x118]; int v; };
struct o124_uint { char p[0x124]; unsigned int v; };
struct o128_uint { char p[0x128]; unsigned int v; };
struct o148_int { char p[0x148]; int v; };
struct o149_uchar { char p[0x149]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o86_short { char p[0x86]; short v; };
struct o98_int { char p[0x98]; int v; };
struct oA4_int { char p[0xA4]; int v; };
struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct oC_int { char p[0xC]; int v; };



void psgEnterState3(int a4, int a5)
{
    int t31;
    int t32;
    int t34;
    int t125;
    int t206;
    int t211;
    int t212;
    int t218;
    int t233;
    int t234;
    int t265;
    int t270;
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
    *(unsigned int *)(((int)stk + 176)) = ((((struct o0_int *)0xC0D5C18)->v));
    *(unsigned int *)(((int)stk + 172)) = ((((struct o4_int *)0xC0D5C18)->v));
    *(unsigned int *)(((int)stk + 168)) = ((((struct o8_int *)0xC0D5C18)->v));
    *(unsigned int *)(((int)stk + 164)) = ((((struct oC_int *)0xC0D5C18)->v));
    *(unsigned int *)(((int)stk + 160)) = ((((struct o10_int *)0xC0D5C18)->v));
    *(unsigned int *)(((int)stk + 156)) = ((((struct o14_int *)0xC0D5C18)->v));
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
                if (((int)(((unsigned int)((((struct o148_int *)(a4))->v)) >> 18) & 0x3)) == 0) {
                    if (((*(signed char *)((a4 + 0x14B))) & 16) != 0) {
                        *(unsigned int *)((a4 + 0x34)) = 0xC9726F4;
                    } else {
                        *(unsigned int *)((a4 + 0x34)) = 0xC972E68;
                    }
                } else {
                    *(unsigned int *)((a4 + 0x34)) = (*(int *)((((((int)(((unsigned int)((((struct o148_int *)(a4))->v)) >> 18) & 0x3)) << 2) + (0xEC + ((int)stk + 8))) + 0x0)));
                }
                (((struct o124_uint *)(a4))->v) = (*(int *)(((0xDC + ((int)stk + 8)) + (((int)(((unsigned int)((((struct o148_int *)(a4))->v)) >> 18) & 0x3)) << 2))));
                (((struct o128_uint *)(a4))->v) = (*(int *)(((0xDC + ((int)stk + 8)) + (((int)(((unsigned int)((((struct o148_int *)(a4))->v)) >> 18) & 0x3)) << 2))));
                (((struct o38_float *)(a4))->v) = 0.0f;
                (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0x7F);
                (((struct o108_float *)(a4))->v) = 0.0f;
                (((struct o10C_float *)(a4))->v) = 0.0f;
                (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
            }
                break;
            case 2:
            {
                t31 = (((struct o86_short *)((*(int *)(((int)stk + 8)))))->v);
                t32 = *(short *)(((*(int *)((a4 + 0x28))) + 0x0));
                t34 = (((struct o0_int *)0xC1EE210)->v);
                if (((*(signed char *)((a4 + 0x14A))) & 128) == 0) {
                    if ((t34 == 2) && ((t38 = (((struct o4_int *)0xC1EE210)->v), t38 == 4) || ((t39 = (((struct o4_int *)0xC1EE210)->v), t39 == 12) || (t40 = (((struct o4_int *)0xC1EE210)->v), t40 == 15)))) {
                        (((struct o110_uint *)(a4))->v) = 0xC903E20;
                        (((struct o124_uint *)(a4))->v) = 0xC0D3068;
                        (((struct o128_uint *)(a4))->v) = 0xC0D5730;
                    } else {
                        if ((int)(unsigned short)((t32 - t31) + 0x1000) > (int)0xE000) {
                            (((struct o110_uint *)(a4))->v) = 0xC907360;
                            (((struct o124_uint *)(a4))->v) = 0xC0D3068;
                            (((struct o128_uint *)(a4))->v) = 0xC0D5730;
                        } else {
                            if ((int)(unsigned short)((t32 - t31) + 0x1000) > (int)0xC000) {
                                (((struct o110_uint *)(a4))->v) = 0xC90A900;
                                (((struct o124_uint *)(a4))->v) = 0xC0D3068;
                                (((struct o128_uint *)(a4))->v) = 0xC0D5730;
                            } else {
                                if ((int)(unsigned short)((t32 - t31) + 0x1000) > (int)0xA000) {
                                    (((struct o110_uint *)(a4))->v) = 0xC902298;
                                    (((struct o124_uint *)(a4))->v) = 0xC0D3068;
                                    (((struct o128_uint *)(a4))->v) = 0xC0D5730;
                                } else {
                                    if ((int)(unsigned short)((t32 - t31) + 0x1000) > (int)0x8000) {
                                        (((struct o110_uint *)(a4))->v) = 0xC8FE818;
                                        (((struct o124_uint *)(a4))->v) = 0xC0D3068;
                                        (((struct o128_uint *)(a4))->v) = 0xC0D5730;
                                    } else {
                                        if ((int)(unsigned short)((t32 - t31) + 0x1000) > (int)0x6000) {
                                            (((struct o110_uint *)(a4))->v) = 0xC900390;
                                            (((struct o124_uint *)(a4))->v) = 0xC0D5730;
                                            (((struct o128_uint *)(a4))->v) = 0xC0D3068;
                                        } else {
                                            if ((int)(unsigned short)((t32 - t31) + 0x1000) > (int)0x4000) {
                                                (((struct o110_uint *)(a4))->v) = 0xC908CF8;
                                                (((struct o124_uint *)(a4))->v) = 0xC0D5730;
                                                (((struct o128_uint *)(a4))->v) = 0xC0D3068;
                                            } else {
                                                if ((int)(unsigned short)((t32 - t31) + 0x1000) > (int)0x2000) {
                                                    (((struct o110_uint *)(a4))->v) = 0xC9057E8;
                                                    (((struct o124_uint *)(a4))->v) = 0xC0D5730;
                                                    (((struct o128_uint *)(a4))->v) = 0xC0D3068;
                                                } else {
                                                    (((struct o110_uint *)(a4))->v) = 0xC903E20;
                                                    (((struct o124_uint *)(a4))->v) = 0xC0D3068;
                                                    (((struct o128_uint *)(a4))->v) = 0xC0D5730;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((t34 == 2) && ((t69 = (((struct o4_int *)0xC1EE210)->v), t69 == 4) || ((t70 = (((struct o4_int *)0xC1EE210)->v), t70 == 12) || (t71 = (((struct o4_int *)0xC1EE210)->v), t71 == 15)))) {
                        (((struct o110_uint *)(a4))->v) = 0xC912130;
                        (((struct o124_uint *)(a4))->v) = 0xC0D3068;
                        (((struct o128_uint *)(a4))->v) = 0xC0D5750;
                    } else {
                        if ((int)(unsigned short)((t32 - t31) + 0x1000) > (int)0xE000) {
                            (((struct o110_uint *)(a4))->v) = 0xC916E40;
                            (((struct o124_uint *)(a4))->v) = 0xC0D3068;
                            (((struct o128_uint *)(a4))->v) = 0xC0D57A0;
                        } else {
                            if ((int)(unsigned short)((t32 - t31) + 0x1000) > (int)0xC000) {
                                (((struct o110_uint *)(a4))->v) = 0xC91A5C0;
                                (((struct o124_uint *)(a4))->v) = 0xC0D3068;
                                (((struct o128_uint *)(a4))->v) = 0xC0D5780;
                            } else {
                                if ((int)(unsigned short)((t32 - t31) + 0x1000) > (int)0xA000) {
                                    (((struct o110_uint *)(a4))->v) = 0xC9100A8;
                                    (((struct o124_uint *)(a4))->v) = 0xC0D3068;
                                    (((struct o128_uint *)(a4))->v) = 0xC0D57C0;
                                } else {
                                    if ((int)(unsigned short)((t32 - t31) + 0x1000) > (int)0x8000) {
                                        (((struct o110_uint *)(a4))->v) = 0xC90C478;
                                        (((struct o124_uint *)(a4))->v) = 0xC0D3068;
                                        (((struct o128_uint *)(a4))->v) = 0xC0D5760;
                                    } else {
                                        if ((int)(unsigned short)((t32 - t31) + 0x1000) > (int)0x6000) {
                                            (((struct o110_uint *)(a4))->v) = 0xC90E230;
                                            (((struct o124_uint *)(a4))->v) = 0xC0D57B0;
                                            (((struct o128_uint *)(a4))->v) = 0xC0D3068;
                                        } else {
                                            if ((int)(unsigned short)((t32 - t31) + 0x1000) > (int)0x4000) {
                                                (((struct o110_uint *)(a4))->v) = 0xC918988;
                                                (((struct o124_uint *)(a4))->v) = 0xC0D3068;
                                                (((struct o128_uint *)(a4))->v) = 0xC0D5770;
                                            } else {
                                                if ((int)(unsigned short)((t32 - t31) + 0x1000) > (int)0x2000) {
                                                    (((struct o110_uint *)(a4))->v) = 0xC913CC8;
                                                    (((struct o124_uint *)(a4))->v) = 0xC0D5790;
                                                    (((struct o128_uint *)(a4))->v) = 0xC0D3068;
                                                } else {
                                                    (((struct o110_uint *)(a4))->v) = 0xC912130;
                                                    (((struct o124_uint *)(a4))->v) = 0xC0D3068;
                                                    (((struct o128_uint *)(a4))->v) = 0xC0D5750;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                (((struct o114_float *)(a4))->v) = 10.0f;
                FcvStoreBuffer(((((struct o110_int *)(a4))->v)), ((((struct o118_int *)(a4))->v)), ((((struct o114_float *)(a4))->v)));
                (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) | 0x80);
                (((struct o108_float *)(a4))->v) = 0.0f;
                (((struct o10C_float *)(a4))->v) = 10.0f;
                (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
                if (((*(signed char *)((a4 + 0x14B))) & 1) != 0) {
                    Chat_TellDestination(a4);
                } else {
                    Chat_Direction(a4);
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
                switch (t125) {
                case 0xC8FE818:
                    *(unsigned int *)((a4 + 0x34)) = 0xC8FF7FC;
                    (((struct o124_uint *)(a4))->v) = 0xC0D3068;
                    (((struct o128_uint *)(a4))->v) = 0xC0D5740;
                    break;
                case 0xC900390:
                    *(unsigned int *)((a4 + 0x34)) = 0xC901764;
                    (((struct o124_uint *)(a4))->v) = 0xC0D5740;
                    (((struct o128_uint *)(a4))->v) = 0xC0D3068;
                    break;
                case 0xC902298:
                    *(unsigned int *)((a4 + 0x34)) = 0xC9032DC;
                    (((struct o124_uint *)(a4))->v) = 0xC0D3068;
                    (((struct o128_uint *)(a4))->v) = 0xC0D5740;
                    break;
                case 0xC903E20:
                    *(unsigned int *)((a4 + 0x34)) = 0xC904DA4;
                    (((struct o124_uint *)(a4))->v) = 0xC0D3068;
                    (((struct o128_uint *)(a4))->v) = 0xC0D5740;
                    break;
                case 0xC9057E8:
                    *(unsigned int *)((a4 + 0x34)) = 0xC90682C;
                    (((struct o124_uint *)(a4))->v) = 0xC0D5740;
                    (((struct o128_uint *)(a4))->v) = 0xC0D3068;
                    break;
                case 0xC907360:
                    *(unsigned int *)((a4 + 0x34)) = 0xC9082E4;
                    (((struct o124_uint *)(a4))->v) = 0xC0D3068;
                    (((struct o128_uint *)(a4))->v) = 0xC0D5740;
                    break;
                case 0xC908CF8:
                    *(unsigned int *)((a4 + 0x34)) = 0xC909D3C;
                    (((struct o124_uint *)(a4))->v) = 0xC0D5740;
                    (((struct o128_uint *)(a4))->v) = 0xC0D3068;
                    break;
                case 0xC90A900:
                    *(unsigned int *)((a4 + 0x34)) = 0xC90B914;
                    (((struct o124_uint *)(a4))->v) = 0xC0D3068;
                    (((struct o128_uint *)(a4))->v) = 0xC0D5740;
                    break;
                case 0xC90C478:
                    *(unsigned int *)((a4 + 0x34)) = 0xC90D5DC;
                    (((struct o124_uint *)(a4))->v) = 0xC0D3068;
                    (((struct o128_uint *)(a4))->v) = 0xC0D57D0;
                    break;
                case 0xC90E230:
                    *(unsigned int *)((a4 + 0x34)) = 0xC90F424;
                    (((struct o124_uint *)(a4))->v) = 0xC0D57D0;
                    (((struct o128_uint *)(a4))->v) = 0xC0D3068;
                    break;
                case 0xC9100A8:
                    *(unsigned int *)((a4 + 0x34)) = 0xC91150C;
                    (((struct o124_uint *)(a4))->v) = 0xC0D3068;
                    (((struct o128_uint *)(a4))->v) = 0xC0D57D0;
                    break;
                case 0xC912130:
                    *(unsigned int *)((a4 + 0x34)) = 0xC913174;
                    (((struct o124_uint *)(a4))->v) = 0xC0D3068;
                    (((struct o128_uint *)(a4))->v) = 0xC0D57D0;
                    break;
                case 0xC913CC8:
                    *(unsigned int *)((a4 + 0x34)) = 0xC914F1C;
                    (((struct o124_uint *)(a4))->v) = 0xC0D57D0;
                    (((struct o128_uint *)(a4))->v) = 0xC0D3068;
                    break;
                case 0xC916E40:
                    *(unsigned int *)((a4 + 0x34)) = 0xC917E84;
                    break;
                case 0xC918988:
                    *(unsigned int *)((a4 + 0x34)) = 0xC91984C;
                    (((struct o124_uint *)(a4))->v) = 0xC0D3068;
                    (((struct o128_uint *)(a4))->v) = 0xC0D57D0;
                    break;
                case 0xC91A5C0:
                    *(unsigned int *)((a4 + 0x34)) = 0xC91B2D4;
                    (((struct o124_uint *)(a4))->v) = 0xC0D3068;
                    (((struct o128_uint *)(a4))->v) = 0xC0D57D0;
                    break;
                }
                (((struct o38_float *)(a4))->v) = 0.0f;
                (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0x7F);
                (((struct o108_float *)(a4))->v) = 0.0f;
                (((struct o10C_float *)(a4))->v) = 0.0f;
                (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
            }
                break;
            case 8:
            {
                *(unsigned int *)((a4 + 0x34)) = 0xC945094;
                (((struct o38_float *)(a4))->v) = 0.0f;
                (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0x7F);
                (((struct o108_float *)(a4))->v) = 0.0f;
                (((struct o10C_float *)(a4))->v) = 0.0f;
                (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
                (((struct o124_uint *)(a4))->v) = 0xC0D5720;
                (((struct o128_uint *)(a4))->v) = 0xC0D5728;
                t206 = ((int (*)(int, int, int, int))(Chat_Iraira))(a4, 0x1, 0x0, 0x2000);
            }
                break;
            case 10:
            {
                *(unsigned int *)((a4 + 0x34)) = (*(int *)(((0xC4 + ((int)stk + 8)) + (((extRand()) & 0x1) << 2))));
                (((struct o38_float *)(a4))->v) = 0.0f;
                (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0x7F);
                (((struct o108_float *)(a4))->v) = 0.0f;
                (((struct o10C_float *)(a4))->v) = 0.0f;
                (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
                (((struct o124_uint *)(a4))->v) = 0xC0D5720;
                (((struct o128_uint *)(a4))->v) = 0xC0D5728;
                t211 = ((int (*)(int, int, int))(Chat_Iraira))(a4, 0x1, 0x1);
            }
                break;
            case 12:
            {
                t212 = extRand();
                *(unsigned int *)((a4 + 0x34)) = (*(int *)(((((0x1 & t212) << 2) + (0xBC + ((int)stk + 8))) + 0x0)));
                (((struct o38_float *)(a4))->v) = 0.0f;
                (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0x7F);
                (((struct o108_float *)(a4))->v) = 0.0f;
                (((struct o10C_float *)(a4))->v) = 0.0f;
                (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
                (((struct o124_uint *)(a4))->v) = (*(int *)((((0xB4 + ((int)stk + 8)) + ((0x1 & t212) << 2)) + 0x0)));
                (((struct o128_uint *)(a4))->v) = (*(int *)(((((0x1 & t212) << 2) + (0xAC + ((int)stk + 8))) + 0x0)));
                t218 = ((int (*)(int, int, int))(Chat_Iraira))(a4, 0x1, 0x1);
            }
                break;
            case 14:
            {
                extRand();
                *(unsigned int *)((a4 + 0x34)) = (*(int *)(((0x0 + (0xA8 + ((int)stk + 8))) + 0x0)));
                (((struct o38_float *)(a4))->v) = 0.0f;
                (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0x7F);
                (((struct o108_float *)(a4))->v) = 0.0f;
                (((struct o10C_float *)(a4))->v) = 0.0f;
                (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
                (((struct o124_uint *)(a4))->v) = ((((struct oA4_int *)(((int)stk + 8)))->v));
                (((struct o128_uint *)(a4))->v) = (*(int *)(((0x0 + (0xA0 + ((int)stk + 8))) + 0x0)));
            }
                break;
            case 16:
            {
                extRand();
                *(unsigned int *)((a4 + 0x34)) = (*(int *)(((0x0 + (0x9C + ((int)stk + 8))) + 0x0)));
                (((struct o38_float *)(a4))->v) = 0.0f;
                (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0x7F);
                (((struct o108_float *)(a4))->v) = 0.0f;
                (((struct o10C_float *)(a4))->v) = 0.0f;
                (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
                (((struct o124_uint *)(a4))->v) = ((((struct o98_int *)(((int)stk + 8)))->v));
                (((struct o128_uint *)(a4))->v) = (*(int *)(((0x0 + (0x94 + ((int)stk + 8))) + 0x0)));
            }
                break;
            case 18:
            {
                t233 = (((struct o86_short *)((*(int *)(((int)stk + 8)))))->v);
                t234 = *(short *)(((*(int *)((a4 + 0x28))) + 0x0));
                if ((int)(unsigned short)((t234 - t233) + 0x1000) > (int)0xE000) {
                    *(unsigned int *)((a4 + 0x34)) = 0xC92BB18;
                    (((struct o124_uint *)(a4))->v) = 0xC0D5720;
                    (((struct o128_uint *)(a4))->v) = 0xC0D57F8;
                } else {
                    if ((int)(unsigned short)((t234 - t233) + 0x1000) > (int)0xC000) {
                        *(unsigned int *)((a4 + 0x34)) = 0xC92E500;
                        (((struct o124_uint *)(a4))->v) = 0xC0D5720;
                        (((struct o128_uint *)(a4))->v) = 0xC0D57F8;
                    } else {
                        if ((int)(unsigned short)((t234 - t233) + 0x1000) > (int)0xA000) {
                            *(unsigned int *)((a4 + 0x34)) = 0xC92796C;
                            (((struct o124_uint *)(a4))->v) = 0xC0D5720;
                            (((struct o128_uint *)(a4))->v) = 0xC0D57F8;
                        } else {
                            if ((int)(unsigned short)((t234 - t233) + 0x1000) > (int)0x8000) {
                                *(unsigned int *)((a4 + 0x34)) = 0xC924E04;
                                (((struct o124_uint *)(a4))->v) = 0xC0D5720;
                                (((struct o128_uint *)(a4))->v) = 0xC0D57F8;
                            } else {
                                if ((int)(unsigned short)((t234 - t233) + 0x1000) > (int)0x6000) {
                                    *(unsigned int *)((a4 + 0x34)) = 0xC926538;
                                    (((struct o124_uint *)(a4))->v) = 0xC0D5790;
                                    (((struct o128_uint *)(a4))->v) = 0xC0D5728;
                                } else {
                                    if ((int)(unsigned short)((t234 - t233) + 0x1000) > (int)0x4000) {
                                        *(unsigned int *)((a4 + 0x34)) = 0xC92D18C;
                                        (((struct o124_uint *)(a4))->v) = 0xC0D5790;
                                        (((struct o128_uint *)(a4))->v) = 0xC0D5728;
                                    } else {
                                        if ((int)(unsigned short)((t234 - t233) + 0x1000) > (int)0x2000) {
                                            *(unsigned int *)((a4 + 0x34)) = 0xC92A7A4;
                                            (((struct o124_uint *)(a4))->v) = 0xC0D5790;
                                            (((struct o128_uint *)(a4))->v) = 0xC0D5728;
                                        } else {
                                            *(unsigned int *)((a4 + 0x34)) = 0xC929130;
                                            (((struct o124_uint *)(a4))->v) = 0xC0D5720;
                                            (((struct o128_uint *)(a4))->v) = 0xC0D57F8;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                (((struct o38_float *)(a4))->v) = 0.0f;
                (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0x7F);
                (((struct o108_float *)(a4))->v) = 0.0f;
                (((struct o10C_float *)(a4))->v) = 0.0f;
                (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
                Drv_StartAction(0x7, 0x0, 0x0);
                t265 = ((int (*)(int, int, int))(Chat_Iraira))(a4, 0x0, 0x0);
            }
                break;
            case 20:
            {
                *(unsigned int *)((a4 + 0x34)) = (*(int *)(((((0x3 & (extRand())) << 2) + (((int)stk + 8) + 0x74)) + 0x0)));
                (((struct o38_float *)(a4))->v) = 0.0f;
                (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0x7F);
                (((struct o108_float *)(a4))->v) = 0.0f;
                (((struct o10C_float *)(a4))->v) = 0.0f;
                (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
                (((struct o124_uint *)(a4))->v) = 0xC0D5720;
                (((struct o128_uint *)(a4))->v) = 0xC0D5728;
                t270 = ((int (*)(int, int, int))(Chat_Iraira))(a4, 0x2, 0x2);
            }
                break;
            case 22:
            {
                (((struct o110_uint *)(a4))->v) = 0xC979F64;
                (((struct o114_float *)(a4))->v) = 0.0f;
                FcvStoreBuffer(((((struct o110_int *)(a4))->v)), ((((struct o118_int *)(a4))->v)), ((((struct o114_float *)(a4))->v)));
                (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) | 0x80);
                (((struct o108_float *)(a4))->v) = 0.0f;
                (((struct o10C_float *)(a4))->v) = 15.0f;
                (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
                (((struct o124_uint *)(a4))->v) = 0xC0D5720;
                (((struct o128_uint *)(a4))->v) = 0xC0D5728;
            }
                break;
            case 24:
            {
                (((struct o110_uint *)(a4))->v) = 0xC979F64;
                *(unsigned int *)((a4 + 0x34)) = 0xC979F64;
                (((struct o114_float *)(a4))->v) = 73.0f;
                (((struct o38_float *)(a4))->v) = 73.0f;
                FcvStoreBuffer(((((struct o110_int *)(a4))->v)), ((((struct o118_int *)(a4))->v)), ((((struct o114_float *)(a4))->v)));
                (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0x7F);
                (((struct o108_float *)(a4))->v) = 0.0f;
                (((struct o10C_float *)(a4))->v) = 0.0f;
                (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
                (((struct o124_uint *)(a4))->v) = 0xC0D5720;
                (((struct o128_uint *)(a4))->v) = 0xC0D5728;
            }
                break;
            case 26:
            {
                (((struct o110_uint *)(a4))->v) = (*(int *)(((((int)stk + 8) + 0x60) + (((int)((unsigned int)(*(int *)0xC0E49E0) % (unsigned int)0x5)) << 2))));
                (((struct o114_float *)(a4))->v) = 0.0f;
                FcvStoreBuffer(((((struct o110_int *)(a4))->v)), ((((struct o118_int *)(a4))->v)), ((((struct o114_float *)(a4))->v)));
                (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) | 0x80);
                (((struct o108_float *)(a4))->v) = 0.0f;
                (((struct o10C_float *)(a4))->v) = 15.0f;
                (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
                (((struct o124_uint *)(a4))->v) = 0xC0D5720;
                (((struct o128_uint *)(a4))->v) = 0xC0D5728;
            }
                break;
            case 28:
            {
                (((struct o110_uint *)(a4))->v) = (*(int *)(((((int)stk + 8) + 0x34) + (((int)((unsigned int)(*(int *)0xC0E49E0) % (unsigned int)0xB)) << 2))));
                (((struct o114_float *)(a4))->v) = 0.0f;
                FcvStoreBuffer(((((struct o110_int *)(a4))->v)), ((((struct o118_int *)(a4))->v)), ((((struct o114_float *)(a4))->v)));
                (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) | 0x80);
                (((struct o108_float *)(a4))->v) = 0.0f;
                (((struct o10C_float *)(a4))->v) = 5.0f;
                (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
                (((struct o124_uint *)(a4))->v) = 0xC0D5720;
                (((struct o128_uint *)(a4))->v) = 0xC0D5728;
            }
                break;
            default:
            {
                (((struct o110_uint *)(a4))->v) = (*(int *)(((((int)stk + 8) + 0x24) + ((*(int *)0xC2AE340) << 2))));
                if ((*(int *)0xC2AE340) == 3) {
                    Drv_StartAction(0x8, 0x0, 0x0);
                }
                (((struct o114_float *)(a4))->v) = 0.0f;
                FcvStoreBuffer(((((struct o110_int *)(a4))->v)), ((((struct o118_int *)(a4))->v)), ((((struct o114_float *)(a4))->v)));
                (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) | 0x80);
                (((struct o108_float *)(a4))->v) = 0.0f;
                (((struct o10C_float *)(a4))->v) = 5.0f;
                (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9);
                (((struct o124_uint *)(a4))->v) = (*(int *)(((((*(int *)0xC2AE340) << 2) + (((int)stk + 8) + 0x14)) + 0x0)));
                (((struct o128_uint *)(a4))->v) = (*(int *)(((((*(int *)0xC2AE340) << 2) + (((int)stk + 8) + 0x4)) + 0x0)));
            }
                break;
        }
    }
}
