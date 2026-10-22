/* Straight-line functions with calls and guards (batch gen_dt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckColliWallBox(int, int, float);
int GetLightVector(int);
int ChangeObjGroup(int, int);
int Result_Money_Digit_Put(void);
int FUN_0c07c6b0(int, int);
int FUN_0c07c9b0(int, int);
int FUN_0c07ca80(int, int, int);
int FUN_0c07cc00(int, int, int, int);
int FUN_0c07d240(int, int);
int FUN_0c07d540(void);
int nlMvSetShadowObjPutPol(int);
int FUN_0c07d5f0(int);
int FUN_0c07f5c0(void);
int Sound_Request(int, int);
int adxf_ChkPrmGfr(int);
extern float getNearLineIndex();
int kmiCopyFromFrameBuffer(int, int, int);
int kmtex_GetTextureLevel(int, int);
float nlLength(int, int);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutSetVtxColorMode(int);
int nlSprPut(int);
int FUN_0c15ca40(int a4, int a5, int a6, int a7);
int lcdSetData(int a4, int a5, int a6, int a7, int a8);
int ADXF_GetFileRange(int a4, int a5, int a6, int a7);
int nd_StartWait_PutMessage(void);
int menuCursor(int a4, int a5, int a6);
int FUN_0c07c870(int a4, int a5);
int Result_Money_Put(void);
int menuCursorBox(int a4, int a5, int a6);
int InitMV(void);
int kmiFBgetfreemem(int a4, int a5, int a6, int a7);
float navi_GetRouteTbl(int a4, int a5, int a6);
float ExecColliObj(int a4, int a5, float f4);
void navi_GetRouteYa(int a4);

int FUN_0c15ca40(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    int t7;

    t0 = kmtex_GetTextureLevel(a6, a6);
    if ((a7 & 1) != 0) {
        t1 = *(int *)(((t0 << 2) + 0xC175DE0));
        t2 = *(int *)(((t0 << 2) + 0xC175ED8));
        t6 = (t2 + 0xA);
        t7 = t1;
    } else {
        t3 = *(int *)(((t0 << 2) + 0xC175DC4));
        t4 = *(int *)(((t0 << 2) + 0xC175EAC));
        t6 = t4;
        t7 = t3;
    }
    kmiCopyFromFrameBuffer(a4, a5, t7);
    return kmiCopyFromFrameBuffer((a4 + t7), (a5 + 0x800), t6);
}

int lcdSetData(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t13;
    int t12;

    t0 = (int)((unsigned int)a8 / (unsigned int)0x6);
    t1 = (int)((unsigned int)a8 % (unsigned int)0x6);
    t2 = *(signed char *)((a4 + 0x1));
    t3 = *(signed char *)((a4 + 0x0));
    t4 = *(signed char *)((a4 + 0x2));
    t5 = *(signed char *)((a4 + 0x3));
    t6 = (unsigned char)t5;
    t7 = 0xC2A9FF8;
    t8 = (((unsigned char)t3 << 8) + (unsigned char)t2);
    t9 = (a4 + 0x4);
    t10 = a6;
    t11 = a6;
    for (;;) {
        if ((int)t11 >= (int)(a6 + (((unsigned char)t4 << 8) + (unsigned char)t5))) {
            break;
        }
        t12 = t11;
        t12 = (t12 << 1);
        t8 = t11;
        t12 = (t12 + t8);
        t10 = a5;
        t12 = (t12 << 2);
        t12 = (t12 << 2);
        if ((int)t10 < (int)(a5 + (((unsigned char)t3 << 8) + (unsigned char)t2))) {
            for (;;) {
                if ((int)t10 >= 0) {
                    t7 = 0x30;
                    if ((int)t10 < (int)t7) {
                        if ((int)t11 >= 0) {
                            t8 = 0x20;
                            if ((int)t11 < (int)t8) {
                                t6 = t12;
                                t13 = *(signed char *)((t9 + 0x0));
                                t8 = t13;
                                t6 = (t6 + t10);
                                *(unsigned char *)((((short)(((((((t0 << 1) + t1) - 1) << 1) + (((t0 << 1) + t1) - 1)) << 8) << 1) + 0xC2A9FF8) + t6)) = t8;
                            }
                        }
                    }
                }
                t10 = (t10 + 0x1);
                t9 = (t9 + 0x1);
                if ((int)t10 >= (int)(a5 + (((unsigned char)t3 << 8) + (unsigned char)t2))) {
                    break;
                }
            }
        }
        t11 = (t11 + 0x1);
    }
    return t6;
}

int ADXF_GetFileRange(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t14;

    t0 = adxf_ChkPrmGfr(a4);
    if ((int)t0 < 0) {
        *(unsigned int *)((a6 + 0x0)) = 0xFFFFFFFF;
        *(unsigned int *)((a7 + 0x0)) = 0xFFFFFFFF;
    } else {
        t1 = *(int *)(((a4 << 2) + 0xC2B9F38));
        for (;;) {
            t2 = *(int *)((t1 + 0x0));
            if (t2 == 0) {
                t3 = *(short *)(((t1 + 0x14) + 0x0));
                if ((int)a5 > 0) {
                    t4 = (0x0 + ((t1 + 0x14) + 0x2));
                    t5 = 0x0;
                    t6 = (unsigned short)t3;
                    for (;;) {
                        t7 = *(short *)((t4 + 0x0));
                        t4 = (t4 + 0x2);
                        t5 = (t5 + 0x1);
                        t6 = (t6 + (unsigned short)t7);
                        if ((int)t5 >= (int)a5) {
                            break;
                        }
                    }
                    t8 = *(int *)((t1 + 0x8));
                    *(unsigned int *)((a6 + 0x0)) = (t6 + t8);
                    t9 = *(short *)((((t1 + 0x14) + 0x2) + (a5 << 1)));
                    *(unsigned int *)((a7 + 0x0)) = (unsigned short)t9;
                    return t0;
                }
                t10 = *(int *)((t1 + 0x8));
                *(unsigned int *)((a6 + 0x0)) = ((unsigned short)t3 + t10);
                t11 = *(short *)((((t1 + 0x14) + 0x2) + (a5 << 1)));
                *(unsigned int *)((a7 + 0x0)) = (unsigned short)t11;
                return t0;
            }
            t12 = (t1 + 0x14);
            t13 = t2;
            t15 = t1;
            t16 = a5;
            t17 = 0x0;
            for (;;) {
                t18 = *(short *)((t15 + 0x10));
                if ((int)t17 >= (int)(unsigned short)t18) {
                    t19 = *(int *)((t15 + 0x0));
                    t15 = t19;
                    t20 = *(int *)((t15 + 0x0));
                    t13 = t20;
                    if (t13 == 0) {
                        t16 = t15;
                        t16 = (t16 + 0x14);
                        t21 = *(short *)((t16 + 0x0));
                        t17 = t21;
                        t12 = t16;
                        t16 = 0x0;
                        t17 = (unsigned short)t17;
                        t12 = (t12 + 0x2);
                        if ((int)a5 > 0) {
                            t22 = (0x0 + t12);
                            for (;;) {
                                t23 = *(short *)((t22 + 0x0));
                                t22 = (t22 + 0x2);
                                t14 = t23;
                                t16 = (t16 + 0x1);
                                t14 = (unsigned short)t14;
                                t17 = (t17 + t14);
                                if ((int)t16 >= (int)a5) {
                                    break;
                                }
                            }
                            t24 = *(int *)((t15 + 0x8));
                            t14 = t24;
                            t17 = (t17 + t14);
                            *(unsigned int *)((a6 + 0x0)) = t17;
                            t25 = *(short *)((t12 + (a5 << 1)));
                            t14 = t25;
                            t14 = (unsigned short)t14;
                            *(unsigned int *)((a7 + 0x0)) = t14;
                            return t0;
                        }
                        t26 = *(int *)((t15 + 0x8));
                        t14 = t26;
                        t17 = (t17 + t14);
                        *(unsigned int *)((a6 + 0x0)) = t17;
                        t27 = *(short *)((t12 + (a5 << 1)));
                        t14 = t27;
                        t14 = (unsigned short)t14;
                        *(unsigned int *)((a7 + 0x0)) = t14;
                        return t0;
                    }
                    t12 = t15;
                    t12 = (t12 + 0x14);
                    t17 = 0x0;
                    continue;
                }
                t16 = t17;
                t16 = (t16 << 2);
                t16 = (t16 << 1);
                t16 = (t16 + t12);
                t28 = *(short *)((t16 + 0x0));
                t14 = t28;
                t14 = (unsigned short)t14;
                if (t14 == a5) {
                    break;
                }
                t17 = (t17 + 0x1);
            }
            break;
        }
        t29 = *(int *)((t15 + 0x8));
        t30 = *(int *)((t16 + 0x4));
        *(unsigned int *)((a6 + 0x0)) = (t29 + t30);
        t31 = *(short *)((t16 + 0x2));
        *(unsigned int *)((a7 + 0x0)) = (unsigned short)t31;
    }
    return t0;
}

int nd_StartWait_PutMessage(void)
{
    int t0;
    int t6;
    int t7;
    int t8;
    int t9;
    float u13;
    float u15;
    int t17;
    int t18;
    int t43;
    float u47;
    float u49;
    int t51;
    int t52;

    t0 = *(int *)0xC1EE244;
    if (t0 == 0) {
        *(unsigned int *)0xC2A7314 = 0x1D2;
    } else {
        *(unsigned int *)0xC2A7314 = 0x1D9;
    }
    *(float *)0xC2A7318 = 320.0f;
    *(float *)0xC2A731C = 160.0f;
    nlSprPut(0xC2A7314);
    nlObjPutSetFadeColor(1.0f, 1.0f, 0.0f);
    t6 = *(int *)0xC2A7208;
    if ((int)t6 > (int)0x32) {
        t7 = *(int *)0xC2A7208;
        if ((int)t7 >= (int)0x78) {
            t8 = *(int *)0xC2A7208;
            if ((int)t8 <= (int)0xAA) {
                t9 = *(int *)0xC1EE244;
                if (t9 == 0) {
                    *(unsigned int *)0xC2A7314 = 0x1D1;
                } else {
                    *(unsigned int *)0xC2A7314 = 0x1D8;
                }
                u13 = *(float *)0xC2A72CC;
                u15 = 500.0f;
                if (0.0f > u13) {
                    u15 = 140.0f;
                }
                *(float *)0xC2A7318 = u15;
                *(float *)0xC2A731C = 210.0f;
                t17 = *(int *)0xC2A72B8;
                t18 = (int)((int)(t17 + 0x1) % (int)0x1E);
                *(unsigned int *)0xC2A72B8 = t18;
                if ((int)t18 < (int)0x14) {
                    nlSprPut(0xC2A7314);
                }
            }
        }
    } else {
        t43 = *(int *)0xC1EE244;
        if (t43 == 0) {
            *(unsigned int *)0xC2A7314 = 0x1D1;
        } else {
            *(unsigned int *)0xC2A7314 = 0x1D8;
        }
        u47 = *(float *)0xC2A72CC;
        u49 = 500.0f;
        if (0.0f > u47) {
            u49 = 140.0f;
        }
        *(float *)0xC2A7318 = u49;
        *(float *)0xC2A731C = 210.0f;
        t51 = *(int *)0xC2A72B8;
        t52 = (int)((int)(t51 + 0x1) % (int)0x1E);
        *(unsigned int *)0xC2A72B8 = t52;
        if ((int)t52 < (int)0x14) {
            nlSprPut(0xC2A7314);
        }
    }
    return nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
}


int FUN_0c07c870(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    int t8;
    int t9;
    int t10;
    float u12;
    float u13;
    int t14;
    int t15;
    int t16;
    float u17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t27;
    float u28;
    float u29;
    float u30;
    int t31;
    int t32;
    int t35;
    int t36;
    int t37;
    int t39;
    int t40;
    float u25;
    float u26;

    t0 = *(short *)((a4 + 0xE));
    t1 = *(int *)0xC2B766C;
    t2 = ((unsigned int)t0 >> 2);
    if ((t0 & 0x3) != 0) {
        t2 = (((unsigned int)t0 >> 2) + 0x1);
    }
    if ((int)t2 > 0) {
        t4 = 0x0;
        t5 = t1;
        for (;;) {
            t4 = (t4 + 0x1);
            *(unsigned int *)((t5 + 0x0)) = 0x0;
            t5 = (t5 + 0x4);
            if ((int)t4 >= (int)t2) {
                break;
            }
        }
    }
    t8 = *(int *)((a5 + 0x0));
    if ((t8 & 1) == 0) {
        t9 = *(short *)((a4 + 0xC));
        t10 = *(int *)((a4 + 0x0));
        FUN_0c07c9b0(t10, t9);
    } else {
        u12 = *(float *)0xC2B768C;
        u13 = *(float *)0xC2B7690;
        t14 = *(short *)((a4 + 0x10));
        t15 = *(int *)((a4 + 0x8));
        t16 = *(int *)((a4 + 0x0));
        u17 = *(float *)0xC2B7688;
        t18 = *(int *)0xC2B7670;
        t19 = t14;
        t20 = (t14 + 0x1);
        t21 = 0xC2B7670;
        t22 = t18;
        t23 = t15;
        t24 = 0xC2B7688;
        for (;;) {
            t20 = (t20 - 0x1);
            if (t20 == 0) {
                break;
            }
            t27 = *(short *)((t23 + 0xC));
            t19 = t27;
            t24 = t16;
            u25 = u17;
            t23 = (t23 + 0x18);
            t21 = t19;
            t19 = (t19 << 1);
            t19 = (t19 + t21);
            t19 = (t19 << 2);
            t24 = (t24 + t19);
            u28 = *(float *)((t24 + 0x0));
            u26 = u28;
            t19 = 0x4;
            u25 = (u25 - u26);
            *(float *)((t22 + 0x0)) = u25;
            u29 = *(float *)((t24 + t19));
            u26 = u29;
            u25 = u12;
            u25 = (u25 - u26);
            *(float *)((t22 + t19)) = u25;
            t19 = 0x8;
            u30 = *(float *)((t24 + t19));
            u26 = u30;
            u25 = u13;
            u25 = (u25 - u26);
            *(float *)((t22 + t19)) = u25;
            t22 = (t22 + 0xC);
        }
        t31 = *(short *)((a4 + 0xC));
        t32 = *(int *)((a4 + 0x0));
        FUN_0c07ca80(t32, t31, a5);
    }
    t35 = *(short *)((a4 + 0x10));
    t36 = *(int *)((a4 + 0x4));
    t37 = *(int *)((a4 + 0x8));
    FUN_0c07cc00(t37, t35, t36, a5);
    t39 = *(short *)((a4 + 0xE));
    t40 = *(int *)((a4 + 0x4));
    FUN_0c07d240(t40, t39);
    return FUN_0c07d540();
}

int Result_Money_Put(void)
{
    int t1;
    int t3;
    int t9;
    int t10;
    int t12;
    int t25;
    float u26;
    float u27;
    int t30;
    int t31;
    int t32;
    int t33;
    float u34;
    float u35;
    int t42;
    float u43;
    float u44;
    int t51;
    float u52;
    float u53;
    int t60;
    float u61;
    float u62;
    int t64;

    nlObjPutSetFadeColor(0.0f, 0.0f, 0.0f);
    t1 = *(int *)0xC2A96F4;
    if ((int)t1 <= (int)0x58) {
    } else {
        if (t1 == 89) {
            Sound_Request(0x104A9, 0x0);
            t3 = *(int *)0xC130DF8;
            *(unsigned int *)0xC130DF8 = (t3 + 0x1);
        }
        t9 = *(int *)0xC2A9848;
        if (t9 == 1) {
            t10 = *(int *)0xC2A9858;
            if (t10 == 0) {
                Sound_Request(0x204A9, 0x0);
                t12 = *(int *)0xC130DFC;
                *(unsigned int *)0xC130DFC = (t12 + 0x1);
                *(unsigned int *)0xC2A9858 = 0x1;
            }
        }
        *(unsigned int *)0xC2A96F8 = 0xFB;
        *(unsigned int *)0xC2A972C = 0x200A;
        *(float *)0xC2A96FC = 80.0f;
        t25 = *(int *)0xC2A9748;
        *(float *)0xC2A9700 = (float)(t25 + 0xD8);
        u26 = *(float *)0xC2A9758;
        *(float *)0xC2A9708 = (u26 + 1.0f);
        u27 = *(float *)0xC2A9758;
        *(float *)0xC2A970C = (u27 + 1.0f);
        *(float *)0xC2A9714 = 0.0f;
        *(float *)0xC2A971C = 1.0f;
        *(unsigned int *)0xC2A9720 = 0x0;
        nlSprPut(0xC2A96F8);
        Result_Money_Digit_Put();
        *(unsigned int *)0xC2A972C = 0x200A;
        t30 = *(int *)0xC2A97C8;
        if (t30 == 0) {
            t31 = *(int *)0xC2A97C4;
            if (t31 == 0) {
                t32 = *(int *)0xC2A97C0;
                if (t32 != 0) {
                    *(unsigned int *)0xC2A96F8 = 0xFA;
                    *(float *)0xC2A96FC = 214.0f;
                    t33 = *(int *)0xC2A9748;
                    *(float *)0xC2A9700 = (float)(t33 + 0xEA);
                    u34 = *(float *)0xC2A9758;
                    *(float *)0xC2A9708 = (u34 + 1.0f);
                    u35 = *(float *)0xC2A9758;
                    *(float *)0xC2A970C = (u35 + 1.0f);
                    *(float *)0xC2A9714 = 0.0f;
                    *(float *)0xC2A971C = 1.0f;
                    *(unsigned int *)0xC2A9720 = 0x0;
                    nlSprPut(0xC2A96F8);
                }
            } else {
                *(unsigned int *)0xC2A96F8 = 0xFA;
                *(float *)0xC2A96FC = 214.0f;
                t42 = *(int *)0xC2A9748;
                *(float *)0xC2A9700 = (float)(t42 + 0xEA);
                u43 = *(float *)0xC2A9758;
                *(float *)0xC2A9708 = (u43 + 1.0f);
                u44 = *(float *)0xC2A9758;
                *(float *)0xC2A970C = (u44 + 1.0f);
                *(float *)0xC2A9714 = 0.0f;
                *(float *)0xC2A971C = 1.0f;
                *(unsigned int *)0xC2A9720 = 0x0;
                nlSprPut(0xC2A96F8);
            }
        } else {
            *(unsigned int *)0xC2A96F8 = 0xFA;
            *(float *)0xC2A96FC = 214.0f;
            t51 = *(int *)0xC2A9748;
            *(float *)0xC2A9700 = (float)(t51 + 0xEA);
            u52 = *(float *)0xC2A9758;
            *(float *)0xC2A9708 = (u52 + 1.0f);
            u53 = *(float *)0xC2A9758;
            *(float *)0xC2A970C = (u53 + 1.0f);
            *(float *)0xC2A9714 = 0.0f;
            *(float *)0xC2A971C = 1.0f;
            *(unsigned int *)0xC2A9720 = 0x0;
            nlSprPut(0xC2A96F8);
        }
        *(unsigned int *)0xC2A96F8 = 0xFC;
        *(float *)0xC2A96FC = 332.0f;
        t60 = *(int *)0xC2A9748;
        *(float *)0xC2A9700 = (float)(t60 + 0xEA);
        u61 = *(float *)0xC2A9758;
        *(float *)0xC2A9708 = (u61 + 1.0f);
        u62 = *(float *)0xC2A9758;
        *(float *)0xC2A970C = (u62 + 1.0f);
        *(float *)0xC2A9714 = 0.0f;
        *(float *)0xC2A971C = 1.0f;
        nlSprPut(0xC2A96F8);
        t64 = *(int *)0xC2A9788;
        *(unsigned int *)0xC2A9788 = (t64 + 0x1);
    }
    return nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
}


int InitMV(void)
{
    int t0;

    *(unsigned int *)0xC2863F0 = 0x1E0;
    *(unsigned int *)0xC2863F4 = 0x424;
    *(unsigned int *)0xC2863F8 = 0x280;
    *(unsigned int *)0xC2863FC = 0x50;
    t0 = *(int *)0xC2863EC;
    *(unsigned int *)0xC2863EC = (t0 & 0xFFFFFFFE);
    *(float *)0xC286400 = 100.0f;
    FUN_0c07c6b0(0xC275948, 0xC2863EC);
    GetLightVector(0xC286410);
    ChangeObjGroup(0x5, 0xC07D5C0);
    ChangeObjGroup(0x3, 0xC07D5C0);
    nlMvSetShadowObjPutPol(0xC3938E8);
    nlMvSetShadowObjPutPol(0xC3A60D0);
    nlMvSetShadowObjPutPol(0xC3B1220);
    nlMvSetShadowObjPutPol(0xC3C0CE8);
    nlMvSetShadowObjPutPol(0xC3D32E0);
    nlMvSetShadowObjPutPol(0xC3DE628);
    nlMvSetShadowObjPutPol(0xC3E1568);
    nlMvSetShadowObjPutPol(0xC3F3FE0);
    nlMvSetShadowObjPutPol(0xC3FD880);
    nlMvSetShadowObjPutPol(0xC3FF3C0);
    nlMvSetShadowObjPutPol(0xC414120);
    nlMvSetShadowObjPutPol(0xC421D18);
    nlMvSetShadowObjPutPol(0xC3B7C10);
    nlMvSetShadowObjPutPol(0xC3C05A8);
    nlMvSetShadowObjPutPol(0xC3C07C8);
    FUN_0c07d5f0(0xC3A15F0);
    FUN_0c07d5f0(0xC3A2540);
    FUN_0c07d5f0(0xC3A34F0);
    FUN_0c07d5f0(0xC3A4440);
    FUN_0c07d5f0(0xC3A53F0);
    FUN_0c07d5f0(0xC3A5A30);
    FUN_0c07d5f0(0xC3B0240);
    FUN_0c07d5f0(0xC3B0880);
    FUN_0c07d5f0(0xC3EFA70);
    FUN_0c07d5f0(0xC3F08E8);
    FUN_0c07d5f0(0xC3F17C0);
    FUN_0c07d5f0(0xC3F2638);
    FUN_0c07d5f0(0xC3F3510);
    FUN_0c07d5f0(0xC3F3A78);
    FUN_0c07d5f0(0xC3FCAB0);
    FUN_0c07d5f0(0xC3FD018);
    FUN_0c07d5f0(0xC40FB50);
    FUN_0c07d5f0(0xC4109C8);
    FUN_0c07d5f0(0xC4118A0);
    FUN_0c07d5f0(0xC412718);
    FUN_0c07d5f0(0xC4135F0);
    FUN_0c07d5f0(0xC413B58);
    FUN_0c07d5f0(0xC420EE8);
    FUN_0c07d5f0(0xC421450);
    FUN_0c07d5f0(0xC3BD538);
    FUN_0c07d5f0(0xC3BE3B0);
    return nlObjPutSetVtxColorMode(0x1);
}

int kmiFBgetfreemem(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t7;
    int t8;
    int t9;
    int t13;
    int t32;
    int t15;
    int t16;
    int t17;
    int t26;
    int t18;
    int t19;
    int t20;
    int t23;
    int t25;
    int t28;
    int t33;
    int t45;
    int t34;
    int t35;
    int t36;
    int t37;
    int t40;
    int t41;
    int t42;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t56;
    int t57;
    int t61;
    int t66;
    int t67;
    int t68;
    int t69;
    int t98;
    int t99;
    int t94;
    int t95;
    int t90;
    int t91;
    int t86;
    int t87;
    int t82;
    int t83;
    int t78;
    int t79;
    int t74;
    int t75;
    int t70;
    int t71;
    int t101;
    int t102;
    int t103;
    int t104;
    int t106;
    int t110;
    int t119;
    int t120;
    int t121;
    int t122;
    int t123;
    int t124;
    int t125;
    int t127;
    int t126;
    int t11;
    int t12;
    int t29;
    int t14;
    int stk[15] = {0};

    *(unsigned int *)(((int)stk + 32)) = 0x0;
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    *(unsigned int *)(((int)stk + 28)) = 0x0;
    *(unsigned int *)(((int)stk + 24)) = 0x0;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    t0 = *(int *)0xC177FC4;
    if (t0 != 0) {
        t1 = t0;
        for (;;) {
            t2 = *(int *)((t1 + 0x10));
            t3 = *(int *)(((int)stk + 8));
            if ((int)t2 > (int)t3) {
                t4 = *(int *)((t1 + 0x10));
                *(unsigned int *)(((int)stk + 8)) = t4;
            }
            t7 = *(int *)(((int)stk + 24));
            t8 = *(int *)((t1 + 0x10));
            *(unsigned int *)(((int)stk + 24)) = (t7 + t8);
            t9 = *(int *)((t1 + 0x8));
            t1 = t9;
            if (t1 == 0) {
                break;
            }
        }
        t11 = (t7 + t8);
        t12 = t8;
    }
    t13 = *(int *)0xC177FBC;
    t32 = t12;
    if (t13 != 0) {
        t15 = t11;
        t16 = t13;
        for (;;) {
            t17 = *(short *)((t16 + 0x0));
            t26 = (unsigned short)t17;
            if (((unsigned short)t17 & 0x4) == 0) {
                t18 = *(int *)((t16 + 0x10));
                t15 = t18;
                t19 = *(int *)(((int)stk + 8));
                t14 = t19;
                if ((int)t15 > (int)t14) {
                    t20 = *(int *)((t16 + 0x10));
                    *(unsigned int *)(((int)stk + 8)) = t20;
                }
                t23 = *(int *)(((int)stk + 20));
                t15 = t23;
                t25 = *(int *)((t16 + 0x10));
                t15 = (t15 + t25);
                *(unsigned int *)(((int)stk + 20)) = t15;
                t26 = t25;
            }
            t28 = *(int *)((t16 + 0x8));
            t16 = t28;
            if (t16 == 0) {
                break;
            }
        }
        t29 = t14;
        t32 = t26;
    }
    *(unsigned int *)(((int)stk + 4)) = 0xC177FD0;
    t33 = *(int *)0xC177FD8;
    t45 = t32;
    if (t33 != 0) {
        t34 = t33;
        for (;;) {
            t35 = *(int *)((t34 + 0x10));
            t36 = *(int *)(((int)stk + 12));
            if ((int)t35 > (int)t36) {
                t37 = *(int *)((t34 + 0x10));
                *(unsigned int *)(((int)stk + 12)) = t37;
            }
            t40 = *(int *)(((int)stk + 28));
            t41 = *(int *)((t34 + 0x10));
            *(unsigned int *)(((int)stk + 28)) = (t40 + t41);
            t42 = *(int *)((t34 + 0x8));
            t34 = t42;
            if (t34 == 0) {
                break;
            }
        }
        t45 = t41;
    }
    t46 = *(int *)(((int)stk + 4));
    t47 = *(int *)((t46 + 0x0));
    if (t47 != 0) {
        t48 = t29;
        t49 = t45;
        t50 = t47;
        for (;;) {
            t51 = *(short *)((t50 + 0x0));
            if (((unsigned short)t51 & 0x4) == 0) {
                t52 = *(int *)((t50 + 0x10));
                t49 = t52;
                t53 = *(int *)(((int)stk + 12));
                t48 = t53;
                if ((int)t49 > (int)t48) {
                    t54 = *(int *)((t50 + 0x10));
                    t49 = t54;
                    *(unsigned int *)(((int)stk + 12)) = t49;
                }
                t56 = *(int *)(((int)stk + 32));
                t57 = *(int *)((t50 + 0x10));
                t49 = t57;
                *(unsigned int *)(((int)stk + 32)) = (t56 + t49);
            }
            t61 = *(int *)((t50 + 0x8));
            t50 = t61;
            if (t50 == 0) {
                break;
            }
        }
    }
    t66 = *(int *)0xC177FE4;
    if (t66 != 0) {
        t67 = 0xC177FE4;
        t68 = t66;
        for (;;) {
            t69 = *(short *)((t68 + 0x0));
            t98 = 0x90;
            t99 = 0x10;
            if (((unsigned short)t69 & 0xF000) != 0x1000) {
                t94 = 0xA0;
                t95 = 0x10;
                if (((unsigned short)t69 & 0xF000) != 0x2000) {
                    t90 = 0xC0;
                    t91 = 0x10;
                    if (((unsigned short)t69 & 0xF000) != 0x3000) {
                        t86 = 0xE0;
                        t87 = 0x10;
                        if (((unsigned short)t69 & 0xF000) != 0x4000) {
                            t82 = 0x200;
                            t83 = 0x8;
                            if (((unsigned short)t69 & 0xF000) != 0x5000) {
                                t78 = 0x360;
                                t79 = 0x4;
                                if (((unsigned short)t69 & 0xF000) != 0x6000) {
                                    t74 = 0x800;
                                    t75 = 0x2;
                                    if (((unsigned short)t69 & 0xF000) != 0x7000) {
                                        t70 = 0xD60;
                                        t71 = 0x1;
                                        if (((unsigned short)t69 & 0xF000) != 0x8000) {
                                            t70 = 0x0;
                                            t71 = 0x0;
                                        }
                                        t74 = t70;
                                        t75 = t71;
                                    }
                                    t78 = t74;
                                    t79 = t75;
                                }
                                t82 = t78;
                                t83 = t79;
                            }
                            t86 = t82;
                            t87 = t83;
                        }
                        t90 = t86;
                        t91 = t87;
                    }
                    t94 = t90;
                    t95 = t91;
                }
                t98 = t94;
                t99 = t95;
            }
            *(unsigned int *)(((int)stk + 4)) = 0x0;
            if ((int)t99 > 0) {
                t101 = (t68 + 0xC);
                t102 = 0xF000;
                for (;;) {
                    t103 = *(int *)((t101 + 0x0));
                    t67 = t103;
                    if (t67 == 0) {
                        t104 = *(int *)(((int)stk + 16));
                        t102 = t104;
                        t102 = (t102 + t98);
                        *(unsigned int *)(((int)stk + 16)) = t102;
                    }
                    t106 = *(int *)(((int)stk + 4));
                    t67 = t106;
                    t67 = (t67 + 0x1);
                    *(unsigned int *)(((int)stk + 4)) = t67;
                    t101 = (t101 + 0x4);
                    if ((int)t67 >= (int)t99) {
                        break;
                    }
                }
            }
            t110 = *(int *)((t68 + 0x4));
            t68 = t110;
            if (t68 != 0) continue;
            break;
        }
    }
    t119 = *(int *)(((int)stk + 24));
    t120 = *(int *)(((int)stk + 20));
    *(unsigned int *)((a4 + 0x0)) = (t119 + t120);
    t121 = *(int *)(((int)stk + 28));
    t122 = *(int *)(((int)stk + 32));
    *(unsigned int *)((a5 + 0x0)) = (t121 + t122);
    t123 = *(int *)(((int)stk + 16));
    *(unsigned int *)((a6 + 0x0)) = t123;
    t124 = *(int *)(((int)stk + 12));
    t125 = *(int *)(((int)stk + 8));
    t127 = t124;
    if ((int)t125 < (int)t124) {
    } else {
        t126 = *(int *)(((int)stk + 8));
        t127 = t126;
    }
    *(unsigned int *)((a7 + 0x0)) = t127;
    return 0x0;
}

float navi_GetRouteTbl(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t4;
    float u6;
    int t7;
    int t8;
    int t9;
    int t10;
    float t11;
    int t12;
    int t14;
    int t15;
    int t16;
    int t17;
    float u18;
    float u19;
    int t20;
    int t21;
    int t22;
    int t23;
    float t24;
    int t25;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    float t33;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t56;
    int t57;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    int t72;
    int t73;
    int t74;
    int t75;
    int t76;
    int t77;
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    int t83;
    int t86;
    int t87;
    int t88;
    int t89;
    int t90;
    int t91;
    float u127;
    int t2;
    int t3;
    float u5;
    int t35;
    float u39;
    int t114;
    int t101;
    int t64;
    int stk[19] = {0};

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    t0 = *(int *)0xC2A6690;
    t1 = (t0 + 0xEF4);
    t4 = 0x0;
    u6 = 999999.875f;
    for (;;) {
        t7 = *(int *)(((int)stk + 20));
        t8 = *(int *)((t1 + 0x4));
        t9 = *(int *)((t1 + 0x0));
        t10 = *(int *)((t8 + 0x0));
        t11 = ((int (*)(int, int, int, int))(getNearLineIndex))(0x0, t9, t10, (((int)stk + 4) + 0x8));
        if (u6 > t11) {
            t12 = *(int *)(((int)stk + 12));
            t3 = t12;
            t2 = t4;
            u6 = t11;
            u5 = t11;
        }
        t4 = (t4 + 0x1);
        t1 = (t1 + 0xC);
        if ((int)t4 > (int)0x8) {
            break;
        }
    }
    t14 = *(int *)0xC2A6690;
    if (a6 == -1) {
        t15 = (0xEF4 + t14);
        t16 = 0x0;
        t17 = t14;
        u18 = 999999.875f;
        u19 = 999999.875f;
        for (;;) {
            t20 = *(int *)(((int)stk + 16));
            t21 = *(int *)((t15 + 0x4));
            t22 = *(int *)((t15 + 0x0));
            t23 = *(int *)((t21 + 0x0));
            t24 = ((float (*)(int, int, int, int))(getNearLineIndex))(0x0, t22, t23, (((int)stk + 4) + 0x8));
            if (u19 > t24) {
                t25 = *(int *)(((int)stk + 12));
                t17 = t16;
                u19 = t24;
                *(unsigned int *)(((int)stk + 8)) = t25;
                u18 = t24;
            }
            t16 = (t16 + 0x1);
            t15 = (t15 + 0xC);
            if ((int)t16 > (int)0x8) {
                break;
            }
        }
        t35 = t17;
        u39 = u18;
    } else {
        t28 = *(int *)(((int)stk + 16));
        *(unsigned int *)(((int)stk + 20)) = (((((a6 << 1) + a6) << 2) + t14) + 0xEF4);
        t29 = *(int *)(((((((a6 << 1) + a6) << 2) + t14) + 0xEF4) + 0x4));
        t30 = *(int *)(((int)stk + 20));
        t31 = *(int *)((t29 + 0x0));
        t32 = *(int *)((t30 + 0x0));
        t33 = ((float (*)(int, int, int, int, int, float))(getNearLineIndex))(0x0, t32, t31, (((int)stk + 4) + 0x4), t28, t11);
        t35 = a6;
        u39 = t33;
    }
    if (t2 == t35) {
        t42 = *(int *)(((int)stk + 8));
        t114 = (int)((float)(t3 - t42) < 0.0f ? -(float)(t3 - t42) : (float)(t3 - t42));
    } else {
        *(unsigned int *)(((int)stk + 16)) = (t2 << 2);
        if ((int)t35 > (int)t2) {
            t43 = *(int *)(((int)stk + 16));
            t44 = *(int *)((((t2 << 2) + 0xC0E52C0) + 0x0));
            *(unsigned int *)(((int)stk + 16)) = (t43 + 0xC08AD70);
            *(unsigned int *)(((int)stk + 20)) = ((t35 << 2) + 0xC08AD70);
            t45 = (((t35 - t2) - 1) * 0x1E);
            t46 = ((t35 << 2) + 0xC08AD70);
            t47 = 0x0;
            t48 = 0x270F;
            t49 = 0x270F;
            t50 = t2;
            for (;;) {
                t51 = *(signed char *)(((t44 + (((t35 - t2) - 1) * 0x1E)) + (signed char)((t47 << 2) + t47)));
                if (t51 != -1) {
                    t52 = *(signed char *)((((t44 + (((t35 - t2) - 1) * 0x1E)) + 0xF) + (signed char)((t47 << 2) + t47)));
                    t48 = 0x1;
                    if (t52 == 1) {
                        t53 = *(int *)(((int)stk + 16));
                        t46 = t53;
                        t54 = *(int *)((t46 + 0x0));
                        t46 = t54;
                        t46 = (t46 - t3);
                    } else {
                        t46 = t3;
                    }
                    t50 = t47;
                    t50 = (t50 << 2);
                    t50 = (t50 + t47);
                    t50 = (signed char)t50;
                    for (;;) {
                        t56 = *(signed char *)((t48 + ((t44 + (((t35 - t2) - 1) * 0x1E)) + t50)));
                        if (t56 == t35) {
                            break;
                        }
                        t57 = *(signed char *)((t48 + ((t44 + (((t35 - t2) - 1) * 0x1E)) + t50)));
                        t48 = (t48 + 0x1);
                        t58 = *(int *)((0xC08AD70 + (t57 << 2)));
                        t46 = (t46 + t58);
                    }
                    t59 = *(signed char *)((t48 + ((signed char)((t47 << 2) + t47) + ((t44 + (((t35 - t2) - 1) * 0x1E)) + 0xF))));
                    if (t59 == 1) {
                        t60 = *(int *)(((int)stk + 8));
                        t64 = t60;
                    } else {
                        t61 = *(int *)(((int)stk + 20));
                        t45 = t61;
                        t62 = *(int *)(((int)stk + 8));
                        t63 = *(int *)((t45 + 0x0));
                        t64 = (t63 - t62);
                    }
                    t46 = (t46 + t64);
                    if ((int)t46 < (int)t49) {
                        t49 = t46;
                    }
                }
                t47 = (t47 + 0x1);
                if ((int)t47 >= (int)0x3) {
                    break;
                }
            }
            t101 = t49;
        } else {
            t72 = *(int *)((0xC0E52C0 + (t35 << 2)));
            *(unsigned int *)(((int)stk + 24)) = ((t35 << 2) + 0xC08AD70);
            *(unsigned int *)(((int)stk + 20)) = ((t2 << 2) + 0xC08AD70);
            t73 = ((t2 << 2) + 0xC08AD70);
            t74 = ((t35 << 2) + 0xC08AD70);
            t75 = 0x1E;
            t76 = 0x0;
            t77 = 0x270F;
            for (;;) {
                t78 = *(signed char *)(((signed char)((t76 << 2) + t76) + ((((t2 - t35) - 1) * 0x1E) + t72)));
                if (t78 != -1) {
                    t79 = *(signed char *)(((signed char)((t76 << 2) + t76) + (((((t2 - t35) - 1) * 0x1E) + t72) + 0xF)));
                    t75 = 0x1;
                    if (t79 == 1) {
                        t80 = *(int *)(((int)stk + 24));
                        t74 = t80;
                        t81 = *(int *)(((int)stk + 8));
                        t82 = *(int *)((t74 + 0x0));
                        t74 = t82;
                        t74 = (t74 - t81);
                    } else {
                        t83 = *(int *)(((int)stk + 8));
                        t74 = t83;
                    }
                    for (;;) {
                        t86 = *(signed char *)((t75 + (((((t2 - t35) - 1) * 0x1E) + t72) + (signed char)((t76 << 2) + t76))));
                        if (t86 == t2) {
                            break;
                        }
                        t87 = *(signed char *)((t75 + (((((t2 - t35) - 1) * 0x1E) + t72) + (signed char)((t76 << 2) + t76))));
                        t75 = (t75 + 0x1);
                        t88 = *(int *)((0xC08AD70 + (t87 << 2)));
                        t74 = (t74 + t88);
                    }
                    t89 = *(signed char *)((t75 + ((((((t2 - t35) - 1) * 0x1E) + t72) + 0xF) + (signed char)((t76 << 2) + t76))));
                    if (t89 == 1) {
                        t74 = (t74 + t3);
                    } else {
                        t90 = *(int *)(((int)stk + 20));
                        t91 = *(int *)((t90 + 0x0));
                        t73 = t91;
                        t73 = (t73 - t3);
                        t74 = (t74 + t73);
                    }
                    if ((int)t74 < (int)t77) {
                        t77 = t74;
                    }
                }
                t76 = (t76 + 0x1);
                if ((int)t76 >= (int)0x3) {
                    break;
                }
            }
            t101 = t77;
        }
        t114 = t101;
    }
    u127 = *(float *)0xC02BC14;
    return ((u5 + u127 * (float)t114) + u39);
}


