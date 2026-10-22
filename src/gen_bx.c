/* Straight-line functions with calls and guards (batch gen_bx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c010954(int, int, int);
int FUN_0c01098c(int, int, int);
int FUN_0c0109c4(int);
int SetScreen(int);
int SetWindow(int);
int callLoadData(int);
int callSaveData(int);
int FUN_0c07f5c0(void);
int PutStringFixPfont(int, int, float, float, float, float);
int buIsReady(void);
int kmGarbageCollectTexture(void);
int menuCursor(int, int, int);
int menuEnterStep(void);
int menuOpenStep(void);
int menuPutFrame(void);
int menuPutHelpBar(int, float, float);
int menuPutSprites(int, int, int, int);
int nlCreateTextureParamA(int);
int putLevelCTFontAssist(int, int, int, int);
int putRecordUnit(int, int, int, int, float, float);
int putString(int, int, float, float, float);
int camGetOnScript(void);
int FUN_0c073d10(void);
int FUN_0c0107fe(int a4, int a5, int a6, int a7);
int FUN_0c010754(int a4, int a5, int a6, int a7);
int FUN_0c010682(int a4, int a5, int a6, int a7);
int menuSaveLoadHandler(void);

int camGetOnScript(void)
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
    int stk[8] = {0};

    t0 = *(int *)0xC0D5290;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x10)) = t0;
    t1 = *(int *)0xC0D528C;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0xC)) = t1;
    t2 = *(int *)0xC0D5288;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = t2;
    t3 = *(int *)0xC0D5284;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = t3;
    t4 = *(int *)0xC0D5280;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t4;
    t5 = *(int *)0xC2AD57C;
    t6 = *(int *)(((((int)stk + 4) + 0x4) + (t5 << 2)));
    *(unsigned int *)(((int)stk + 4)) = t6;
    t7 = ((int (*)(int))(t6))((((int)stk + 4) + 0x4));
    t8 = *(int *)0xC2AD578;
    *(unsigned int *)0xC2AD578 = (t8 + 0x1);
    return t7;
}

int FUN_0c073d10(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    t0 = kmGarbageCollectTexture();
    t1 = *(int *)0xC2B29C0;
    t2 = t0;
    t3 = 0x0;
    t4 = t1;
    for (;;) {
        t5 = *(int *)0xC2B29C4;
        if ((int)t3 >= (int)t5) break;
        t6 = *(int *)((t4 + 0x28));
        if (t6 == 0) {
            t7 = nlCreateTextureParamA(t4);
            t2 = t7;
        }
        t4 = (t4 + 0x3C);
        t3 = (t3 + 0x1);
    }
    return t2;
}

int FUN_0c0107fe(int a4, int a5, int a6, int a7)
{
    int t1;
    int t20;
    int t2;
    int t3;
    int t4;
    int t8;
    int t9;
    int t10;
    int t14;
    int t15;
    int t16;

    FUN_0c01098c(a4, 0xAC007800, a5);
    t1 = FUN_0c0109c4(a4);
    t20 = t1;
    if (a7 != 0) {
        if (a5 != 1) {
            if (a5 != 2) {
                if (a5 == 4) {
                    t2 = *(int *)0xAC007800;
                    if ((int)a7 > 0) {
                        t3 = 0x0;
                        t4 = a6;
                        do {
                            t3 = (t3 + 0x1);
                            *(unsigned int *)((t4 + 0x0)) = t2;
                            t4 = (t4 + 0x4);
                        } while ((int)t3 < (int)a7);
                    }
                }
            } else {
                t8 = *(short *)0xAC007800;
                if ((int)a7 > 0) {
                    t9 = 0x0;
                    t10 = a6;
                    do {
                        t9 = (t9 + 0x1);
                        *(unsigned short *)((t10 + 0x0)) = t8;
                        t10 = (t10 + 0x2);
                    } while ((int)t9 < (int)a7);
                }
            }
        } else {
            t14 = *(signed char *)0xAC007800;
            if ((int)a7 > 0) {
                t15 = 0x0;
                t16 = a6;
                do {
                    t15 = (t15 + 0x1);
                    *(unsigned char *)((t16 + 0x0)) = t14;
                    t16 = (t16 + 0x1);
                } while ((int)t15 < (int)a7);
            }
        }
        t20 = a5;
    }
    return t20;
}

int FUN_0c010754(int a4, int a5, int a6, int a7)
{
    int t1;
    int t26;
    int t2;
    int t3;
    int t4;
    int t5;
    int t10;
    int t11;
    int t12;
    int t13;
    int t18;
    int t19;
    int t20;
    int t21;

    FUN_0c01098c(a4, 0xAC007800, (a5 * a7));
    t1 = FUN_0c0109c4(a4);
    t26 = t1;
    if (a7 != 0) {
        if (a5 != 1) {
            if (a5 != 2) {
                if (a5 == 4) {
                    if ((int)a7 > 0) {
                        t2 = 0x0;
                        t3 = a6;
                        t4 = 0xAC007800;
                        do {
                            t5 = *(int *)((t4 + 0x0));
                            t4 = (t4 + 0x4);
                            t2 = (t2 + 0x1);
                            *(unsigned int *)((t3 + 0x0)) = t5;
                            t3 = (t3 + 0x4);
                        } while ((int)t2 < (int)a7);
                    }
                }
            } else {
                if ((int)a7 > 0) {
                    t10 = 0x0;
                    t11 = a6;
                    t12 = 0xAC007800;
                    do {
                        t13 = *(short *)((t12 + 0x0));
                        t12 = (t12 + 0x2);
                        t10 = (t10 + 0x1);
                        *(unsigned short *)((t11 + 0x0)) = t13;
                        t11 = (t11 + 0x2);
                    } while ((int)t10 < (int)a7);
                }
            }
        } else {
            if ((int)a7 > 0) {
                t18 = 0x0;
                t19 = 0xAC007800;
                t20 = a6;
                do {
                    t21 = *(signed char *)((t19 + 0x0));
                    t19 = (t19 + 0x1);
                    t18 = (t18 + 0x1);
                    *(unsigned char *)((t20 + 0x0)) = t21;
                    t20 = (t20 + 0x1);
                } while ((int)t18 < (int)a7);
            }
        }
        t26 = a5;
    }
    return t26;
}

int FUN_0c010682(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t10;
    int t11;
    int t12;
    int t13;
    int t20;
    int t21;
    int t22;
    int t23;

    if (a5 != 1) {
        if (a5 != 2) {
            if (a5 == 4) {
                if ((int)a7 > 0) {
                    t0 = a6;
                    t1 = 0x0;
                    t2 = 0xAC007800;
                    do {
                        t3 = *(int *)((t0 + 0x0));
                        t0 = (t0 + 0x4);
                        t1 = (t1 + 0x1);
                        *(unsigned int *)((t2 + 0x0)) = t3;
                        t2 = (t2 + 0x4);
                    } while ((int)t1 < (int)a7);
                }
            }
        } else {
            if ((int)a7 > 0) {
                t10 = a6;
                t11 = 0x0;
                t12 = 0xAC007800;
                do {
                    t13 = *(short *)((t10 + 0x0));
                    t10 = (t10 + 0x2);
                    t11 = (t11 + 0x1);
                    *(unsigned short *)((t12 + 0x0)) = t13;
                    t12 = (t12 + 0x2);
                } while ((int)t11 < (int)a7);
            }
        }
    } else {
        if ((int)a7 > 0) {
            t20 = 0xAC007800;
            t21 = 0x0;
            t22 = a6;
            do {
                t23 = *(signed char *)((t22 + 0x0));
                t22 = (t22 + 0x1);
                t21 = (t21 + 0x1);
                *(unsigned char *)((t20 + 0x0)) = t23;
                t20 = (t20 + 0x1);
            } while ((int)t21 < (int)a7);
        }
    }
    FUN_0c010954(a4, 0xAC007800, (a5 * a7));
    return FUN_0c0109c4(a4);
}

int menuSaveLoadHandler(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    int t5;
    int t9;
    int t11;
    int t13;
    int t14;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t31;
    int t32;
    int t33;
    float u34;
    float u35;
    int t36;
    int t38;
    int t39;
    int t41;
    float u44;
    float u45;
    int t47;
    float u48;
    float u50;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    int t63;
    int t64;
    int t68;
    int t69;
    int stk[19] = {0};

    menuOpenStep();
    t1 = *(int *)0xC2A11B8;
    t2 = buIsReady();
    t3 = 0x0;
    if (t2 == 0) {
        t3 = 0x3;
    }
    t4 = *(signed char *)0xC28A4F6;
    t6 = (t3 | 0x4);
    if ((int)(unsigned char)t4 < (int)0x4) {
        t5 = t3;
        if ((int)(unsigned char)t4 <= 0) {
            t5 = (t3 | 0x18);
        }
        t6 = t5;
    }
    menuCursor(0x0, 0x6, t6);
    menuPutFrame();
    t9 = *(int *)0xC2A1AD8;
    menuPutSprites(0xC0A08C8, 0xC2A1A84, (t9 + 0x8), 0x18);
    t11 = *(int *)0xC2A1AD8;
    menuPutHelpBar(0x0, (float)(-t11), 416.0f);
    t13 = *(int *)0xC2A11D8;
    t14 = *(int *)((((t13 << 2) + 0xC2A11DC) + 0x0));
    putLevelCTFontAssist(0x117, 0xC09F7B4, 0x6, t14);
    t16 = *(int *)0xC2A11D8;
    t17 = *(int *)((((t16 << 2) + 0xC2A11DC) + 0x0));
    if ((int)t17 <= (int)0x1) {
        *(unsigned int *)(((int)stk + 20)) = 0x0;
    } else {
        t18 = *(signed char *)0xC28A4F6;
        t19 = *(int *)0xC2A11D8;
        t20 = *(int *)((0xC2A11DC + (t19 << 2)));
        if (t20 == 2) {
            *(unsigned int *)(((int)stk + 20)) = (~(((int)(unsigned char)t18 >= 0) ? (0xFFFFFFFF << ((unsigned char)t18 & 31)) : ((-(int)(unsigned char)t18 & 31) ? ((unsigned int)0xFFFFFFFF >> (-(int)(unsigned char)t18 & 31)) : 0)));
        } else {
            t21 = *(int *)0xC2A11D8;
            t22 = *(int *)((((t21 << 2) + 0xC2A11DC) + 0x0));
            if ((int)t22 <= (int)0x4) {
                *(unsigned int *)(((int)stk + 20)) = (((int)(unsigned char)t18 >= 0) ? (0xFFFFFFFF << ((unsigned char)t18 & 31)) : ((-(int)(unsigned char)t18 & 31) ? ((unsigned int)0xFFFFFFFF >> (-(int)(unsigned char)t18 & 31)) : 0));
            } else {
                *(unsigned int *)(((int)stk + 20)) = 0xF;
            }
        }
    }
    t31 = 0x0;
    for (;;) {
        t32 = *(int *)0xC2A1ADC;
        t33 = t32;
        if ((t31 & 0x1) == 0) {
            t33 = (-t32);
        }
        *(float *)(((int)stk + 8)) = (float)(((((t31 << 2) + t31) << 2) << 2) + 0x88);
        u34 = *(float *)0xC2A1AD4;
        *(float *)0xC2A1AD4 = (u34 + 0.0199999996f);
        u35 = *(float *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 12)) = (int)u35;
        *(float *)(((int)stk + 16)) = ((float)t33 + 504.0f);
        t36 = *(int *)(((t31 << 2) + 0xC0EF7D0));
        menuPutSprites(t36, 0xC2A1A84, (int)((float)t33 + 504.0f), (int)u35);
        t38 = *(int *)(((int)stk + 20));
        if (((((int)t31 >= 0) ? (0x1 << (t31 & 31)) : ((-(int)t31 & 31) ? ((int)0x1 >> (-(int)t31 & 31)) : ((int)0x1 >> 31))) & t38) == 0) {
            t39 = *(int *)(((int)stk + 12));
            menuPutSprites(0xC0A1D78, 0xC2A1A84, (int)((float)t33 + 364.0f), t39);
        } else {
            *(float *)0xC2A1AB0 = 0.799999952f;
            t41 = *(int *)(((int)stk + 12));
            menuPutSprites(0xC0A1D88, 0xC2A1A84, (int)((float)t33 + 364.0f), t41);
            *(float *)0xC2A1AB0 = 1.0f;
        }
        u44 = *(float *)0xC2A1AD4;
        *(float *)0xC2A1AD4 = (u44 - 0.0199999996f);
        u45 = *(float *)(((int)stk + 8));
        putRecordUnit(0x17, (t31 + 0x1), 0x1, 0x0, ((float)t33 + 364.0f), (u45 + -8.0f));
        t47 = *(signed char *)0xC28A4F6;
        if ((int)t31 < (int)(unsigned char)t47) {
            u48 = *(float *)(((int)stk + 16));
            PutStringFixPfont(0x17, ((short)((short)t31 * (short)0x788) + 0xC28A4F8), u48, (u45 + -8.0f), 20.0f, 1.0f);
        } else {
            u50 = *(float *)(((int)stk + 16));
            putString(0x17, 0xC0A2144, u50, (u45 + -8.0f), 1.0f);
        }
        t31 = (t31 + 0x1);
        if ((int)t31 < (int)0x4) continue;
        break;
    }
    t53 = *(int *)0xC2A11EC;
    if ((0x4 & t53) != 0) {
        t54 = *(int *)0xC2A11CC;
        if ((t54 & 2) != 0) {
            t55 = *(int *)0xC2A1214;
            if (t55 == 0) {
                t56 = *(int *)0xC2A11D8;
                t57 = *(int *)((0xC2A11DC + (t56 << 2)));
                if (t57 != 0) {
                    if (t57 != 1) {
                        if (t57 != 2) {
                            if (t57 != 3) {
                                if (t57 == 4) {
                                    t58 = *(int *)0xC1EE234;
                                    *(unsigned int *)0xC2A1228 = t58;
                                    t59 = *(int *)0xC1EE238;
                                    *(unsigned int *)0xC2A122C = t59;
                                    SetWindow(0xB);
                                    FUN_0c07f5c0();
                                }
                            } else {
                                t63 = *(int *)0xC1EE234;
                                *(unsigned int *)0xC2A1228 = t63;
                                t64 = *(int *)0xC1EE238;
                                *(unsigned int *)0xC2A122C = t64;
                                SetWindow(0xB);
                                FUN_0c07f5c0();
                            }
                        } else {
                            t68 = *(int *)0xC1EE234;
                            *(unsigned int *)0xC2A1228 = t68;
                            t69 = *(int *)0xC1EE238;
                            *(unsigned int *)0xC2A122C = t69;
                            SetWindow(0xB);
                            FUN_0c07f5c0();
                        }
                    } else {
                        SetScreen(0x3);
                        callLoadData(0x0);
                    }
                } else {
                    SetScreen(0x3);
                    callSaveData(0x0);
                }
            }
        }
    }
    return menuEnterStep();
}
