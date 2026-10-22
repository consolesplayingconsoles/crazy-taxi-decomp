/* Straight-line functions with calls and guards (batch gen_ad): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ExecArrow(int, float);
int FUN_0c03101a(float);
int pfCleanString(void);
int pfAddString(int);
int pfAddNumber(int, int);
int FUN_0c05d82a(int);
int FUN_0c05fd70(int);
int FUN_0c061da8(int);
int FUN_0c061e04(int);
int FUN_0c0678a4(int, int, float);
int FUN_0c067960(int, int, float);
int IsBoyFriend(int, int);
int ResetFadeColor(void);
float nlExp(int, float, float);
float nlFloor(int, int, float);
float nlLength(int, int);
int nlObjPutSetFadeColor(int, float, float, float);
int nlRand(int, int);
float nlRoundOff(float);
float nlRoundUp(int, int, int, float);
float pfLength(int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFont(int);
int pfSize(float, float);

void FUN_0c030ebc(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    *(unsigned int *)0xC26E1F0 = a4;
    t0 = *(int *)0xC2B3184;
    t1 = *(int *)0xC2AEC84;
    t2 = *(int *)((((((t0 + 0x3) << 2) << 1) + t1) + 0x4));
    t3 = *(int *)0xC2B29C0;
    t4 = *(int *)((((t2 * 0x3C) + t3) + 0x34));
    *(unsigned int *)0xC0ED1CC = t4;
    *(unsigned int *)0xC26E310 = 0xC26E210;
    *(unsigned char *)0xC26E210 = 0x0;
    pfSetFont(0x0);
    FUN_0c03101a(1.0f);
    pfSize(1.0f, 1.0f);
}

void Init_Adv_Global_Parm(void)
{
    float t2;
    float t3;
    float t4;
    float t5;
    float t6;
    float t7;
    float t8;
    float t9;
    float t11;
    float t12;
    float t14;
    float t15;
    float t17;
    float t18;

    *(unsigned short *)0xC2A9228 = 0x0;
    *(unsigned int *)0xC2A931C = 0x0;
    pfSetFont(0x1);
    pfSize(1.0f, 1.0f);
    t2 = pfLength(0xC0D0A10);
    t3 = nlRoundOff((320.0f - (t2 * 0.5f)));
    *(float *)0xC2A96C4 = t3;
    t4 = pfLength(0xC0D0A1C);
    t5 = nlRoundOff((320.0f - (t4 * 0.5f)));
    *(float *)0xC2A96C8 = t5;
    t6 = pfLength(0xC0D0A2C);
    t7 = nlRoundOff((320.0f - (t6 * 0.5f)));
    *(float *)0xC2A96CC = t7;
    t8 = pfLength(0xC0D0A40);
    t9 = nlRoundOff((320.0f - (t8 * 0.5f)));
    *(float *)0xC2A96D0 = t9;
    pfSize(1.0f, 1.0f);
    t11 = pfLength(0xC0D0A54);
    t12 = nlRoundOff((320.0f - (t11 * 0.5f)));
    *(float *)0xC2A96D4 = t12;
    pfSize(1.0f, 1.0f);
    t14 = pfLength(0xC0D0A70);
    t15 = nlRoundOff((320.0f - (t14 * 0.5f)));
    *(float *)0xC2A96D8 = t15;
    pfSize(1.5f, 1.5f);
    t17 = pfLength(0xC0D0A88);
    t18 = nlRoundOff((320.0f - (t17 * 0.5f)));
    *(float *)0xC2A96DC = t18;
}

void FUN_0c05d708(void)
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
    int t12;
    int t13;
    int t14;
    int t15;
    int t19;
    int t20;
    float t21;
    int t22;
    float t23;
    int t26;
    int t27;
    int t32;
    int t33;
    float t34;
    int t35;
    float t36;
    int t39;
    int t40;
    int t45;
    int t46;
    float t47;
    int t48;
    float t49;
    int t52;
    int t53;
    int t58;
    int t59;
    int t60;
    int t61;
    int t64;
    int t65;
    int t66;
    int t67;
    int t71;
    int t72;
    float t73;
    int t74;
    float t75;
    int t78;
    int t79;
    int t84;
    int t85;
    int t86;
    int t87;
    int t88;
    int t89;
    int t90;
    int t93;
    int t94;
    int t95;
    int t96;
    int t100;
    int t101;
    float t102;
    int t103;
    float t104;
    int t107;
    int t108;
    int t113;
    int t114;
    float t115;
    int t116;
    float t117;
    int t120;
    int t121;
    int t126;
    int t127;
    float t128;
    int t129;
    float t130;
    int t133;
    int t134;
    float u25;
    float u38;
    float u51;
    float u77;
    float u106;
    float u119;
    float u132;

    t0 = *(int *)0xC1794D0;
    t1 = *(int *)0xC2A98FC;
    if (t0 != t1) {
        t2 = *(int *)0xC1EE214;
        if (t2 == 14) {
            t3 = *(int *)0xC2A98EC;
            t4 = *(int *)0xC2A9A2C;
            if (t4 != (0x7 - t3)) {
                t5 = *(int *)0xC1EE214;
                if (t5 == 14) {
                    t6 = *(int *)0xC2A98EC;
                    if (t6 != 0) {
                        t7 = *(int *)0xC2A98EC;
                        *(unsigned int *)0xC2A98EC = (t7 - 1);
                        *(unsigned int *)0xC2A9968 = 0x0;
                        t8 = *(int *)0xC1EE214;
                        if (t8 != 14) {
                            t9 = *(int *)0xC2A98FC;
                            *(unsigned int *)0xC2A98FC = (t9 + 0x1);
                            FUN_0c05d82a(0x0);
                        } else {
                            *(unsigned int *)0xC2A9A34 = 0x1;
                            *(unsigned int *)0xC2A9A38 = 0x0;
                        }
                        t12 = *(int *)0xC1EE214;
                        if (t12 != 14) {
                            t13 = *(int *)0xC2A98EC;
                            if (t13 != 0) {
                                t14 = *(int *)0xC2A98EC;
                                t15 = *(int *)(((t14 << 2) + 0xC131180));
                                FUN_0c05fd70(t15);
                            }
                        }
                        t19 = *(int *)0xC2A98FC;
                        t20 = *(int *)0xC1EE214;
                        if (t20 == 10) {
                            t21 = nlLength(0xC179144, (0xC131084 + (signed char)(((t19 << 1) + t19) << 2)));
                            u25 = t21;
                        } else {
                            t22 = (0xC131030 + (signed char)(((t19 << 1) + t19) << 2));
                            if (t20 == 14) {
                                t22 = 0xC1310E4;
                            }
                            t23 = nlLength(0xC179144, t22);
                            u25 = t23;
                        }
                        t26 = *(int *)0xC1EE214;
                        if (t26 == 14) {
                            if (t26 == 14) {
                                if (5000.0f > u25) {
                                    t27 = *(int *)0xC2A9A2C;
                                    if ((int)t27 >= (int)0x7) {
                                        nlObjPutSetFadeColor(t26, 0.0f, 1.0f, 0.0f);
                                        ExecArrow(0x1, u25);
                                        ResetFadeColor();
    return;
                                    }
                                    return;
                                }
                                return;
                            }
                            return;
                        }
                        nlObjPutSetFadeColor(t26, 0.0f, 1.0f, 0.0f);
                        ExecArrow(0x1, u25);
                        ResetFadeColor();
    return;
                    }
                    return;
                }
                t32 = *(int *)0xC2A98FC;
                t33 = *(int *)0xC1EE214;
                if (t33 == 10) {
                    t34 = nlLength(0xC179144, (0xC131084 + (signed char)(((t32 << 1) + t32) << 2)));
                    u38 = t34;
                } else {
                    t35 = (0xC131030 + (signed char)(((t32 << 1) + t32) << 2));
                    if (t33 == 14) {
                        t35 = 0xC1310E4;
                    }
                    t36 = nlLength(0xC179144, t35);
                    u38 = t36;
                }
                t39 = *(int *)0xC1EE214;
                if (t39 == 14) {
                    if (t39 == 14) {
                        if (5000.0f > u38) {
                            t40 = *(int *)0xC2A9A2C;
                            if ((int)t40 >= (int)0x7) {
                                nlObjPutSetFadeColor(t39, 0.0f, 1.0f, 0.0f);
                                ExecArrow(0x1, u38);
                                ResetFadeColor();
    return;
                            }
                            return;
                        }
                        return;
                    }
                    return;
                }
                nlObjPutSetFadeColor(t39, 0.0f, 1.0f, 0.0f);
                ExecArrow(0x1, u38);
                ResetFadeColor();
    return;
            }
            t45 = *(int *)0xC2A98FC;
            t46 = *(int *)0xC1EE214;
            if (t46 == 10) {
                t47 = nlLength(0xC179144, (0xC131084 + (signed char)(((t45 << 1) + t45) << 2)));
                u51 = t47;
            } else {
                t48 = (0xC131030 + (signed char)(((t45 << 1) + t45) << 2));
                if (t46 == 14) {
                    t48 = 0xC1310E4;
                }
                t49 = nlLength(0xC179144, t48);
                u51 = t49;
            }
            t52 = *(int *)0xC1EE214;
            if (t52 == 14) {
                if (t52 == 14) {
                    if (5000.0f > u51) {
                        t53 = *(int *)0xC2A9A2C;
                        if ((int)t53 >= (int)0x7) {
                            nlObjPutSetFadeColor(t52, 0.0f, 1.0f, 0.0f);
                            ExecArrow(0x1, u51);
                            ResetFadeColor();
    return;
                        }
                        return;
                    }
                    return;
                }
                return;
            }
            nlObjPutSetFadeColor(t52, 0.0f, 1.0f, 0.0f);
            ExecArrow(0x1, u51);
            ResetFadeColor();
    return;
        }
        t58 = *(int *)0xC2A98EC;
        if (t58 != 0) {
            t59 = *(int *)0xC2A98EC;
            *(unsigned int *)0xC2A98EC = (t59 - 1);
            *(unsigned int *)0xC2A9968 = 0x0;
            t60 = *(int *)0xC1EE214;
            if (t60 != 14) {
                t61 = *(int *)0xC2A98FC;
                *(unsigned int *)0xC2A98FC = (t61 + 0x1);
                FUN_0c05d82a(0x0);
            } else {
                *(unsigned int *)0xC2A9A34 = 0x1;
                *(unsigned int *)0xC2A9A38 = 0x0;
            }
            t64 = *(int *)0xC1EE214;
            if (t64 != 14) {
                t65 = *(int *)0xC2A98EC;
                if (t65 != 0) {
                    t66 = *(int *)0xC2A98EC;
                    t67 = *(int *)(((t66 << 2) + 0xC131180));
                    FUN_0c05fd70(t67);
                }
            }
            t71 = *(int *)0xC2A98FC;
            t72 = *(int *)0xC1EE214;
            if (t72 == 10) {
                t73 = nlLength(0xC179144, (0xC131084 + (signed char)(((t71 << 1) + t71) << 2)));
                u77 = t73;
            } else {
                t74 = (0xC131030 + (signed char)(((t71 << 1) + t71) << 2));
                if (t72 == 14) {
                    t74 = 0xC1310E4;
                }
                t75 = nlLength(0xC179144, t74);
                u77 = t75;
            }
            t78 = *(int *)0xC1EE214;
            if (t78 == 14) {
                if (t78 == 14) {
                    if (5000.0f > u77) {
                        t79 = *(int *)0xC2A9A2C;
                        if ((int)t79 >= (int)0x7) {
                            nlObjPutSetFadeColor(t78, 0.0f, 1.0f, 0.0f);
                            ExecArrow(0x1, u77);
                            ResetFadeColor();
    return;
                        }
                        return;
                    }
                    return;
                }
                return;
            }
            nlObjPutSetFadeColor(t78, 0.0f, 1.0f, 0.0f);
            ExecArrow(0x1, u77);
            ResetFadeColor();
    return;
        }
        return;
    }
    t84 = *(int *)0xC2A98EC;
    t85 = *(int *)0xC2A9A2C;
    if (t85 != (0x7 - t84)) {
        t86 = *(int *)0xC1EE214;
        if (t86 == 14) {
            t87 = *(int *)0xC2A98EC;
            if (t87 != 0) {
                t88 = *(int *)0xC2A98EC;
                *(unsigned int *)0xC2A98EC = (t88 - 1);
                *(unsigned int *)0xC2A9968 = 0x0;
                t89 = *(int *)0xC1EE214;
                if (t89 != 14) {
                    t90 = *(int *)0xC2A98FC;
                    *(unsigned int *)0xC2A98FC = (t90 + 0x1);
                    FUN_0c05d82a(0x0);
                } else {
                    *(unsigned int *)0xC2A9A34 = 0x1;
                    *(unsigned int *)0xC2A9A38 = 0x0;
                }
                t93 = *(int *)0xC1EE214;
                if (t93 != 14) {
                    t94 = *(int *)0xC2A98EC;
                    if (t94 != 0) {
                        t95 = *(int *)0xC2A98EC;
                        t96 = *(int *)(((t95 << 2) + 0xC131180));
                        FUN_0c05fd70(t96);
                    }
                }
                t100 = *(int *)0xC2A98FC;
                t101 = *(int *)0xC1EE214;
                if (t101 == 10) {
                    t102 = nlLength(0xC179144, (0xC131084 + (signed char)(((t100 << 1) + t100) << 2)));
                    u106 = t102;
                } else {
                    t103 = (0xC131030 + (signed char)(((t100 << 1) + t100) << 2));
                    if (t101 == 14) {
                        t103 = 0xC1310E4;
                    }
                    t104 = nlLength(0xC179144, t103);
                    u106 = t104;
                }
                t107 = *(int *)0xC1EE214;
                if (t107 == 14) {
                    if (t107 == 14) {
                        if (5000.0f > u106) {
                            t108 = *(int *)0xC2A9A2C;
                            if ((int)t108 >= (int)0x7) {
                                nlObjPutSetFadeColor(t107, 0.0f, 1.0f, 0.0f);
                                ExecArrow(0x1, u106);
                                ResetFadeColor();
    return;
                            }
                            return;
                        }
                        return;
                    }
                    return;
                }
                nlObjPutSetFadeColor(t107, 0.0f, 1.0f, 0.0f);
                ExecArrow(0x1, u106);
                ResetFadeColor();
    return;
            }
            return;
        }
        t113 = *(int *)0xC2A98FC;
        t114 = *(int *)0xC1EE214;
        if (t114 == 10) {
            t115 = nlLength(0xC179144, (0xC131084 + (signed char)(((t113 << 1) + t113) << 2)));
            u119 = t115;
        } else {
            t116 = (0xC131030 + (signed char)(((t113 << 1) + t113) << 2));
            if (t114 == 14) {
                t116 = 0xC1310E4;
            }
            t117 = nlLength(0xC179144, t116);
            u119 = t117;
        }
        t120 = *(int *)0xC1EE214;
        if (t120 == 14) {
            if (t120 == 14) {
                if (5000.0f > u119) {
                    t121 = *(int *)0xC2A9A2C;
                    if ((int)t121 >= (int)0x7) {
                        nlObjPutSetFadeColor(t120, 0.0f, 1.0f, 0.0f);
                        ExecArrow(0x1, u119);
                        ResetFadeColor();
    return;
                    }
                    return;
                }
                return;
            }
            return;
        }
        nlObjPutSetFadeColor(t120, 0.0f, 1.0f, 0.0f);
        ExecArrow(0x1, u119);
        ResetFadeColor();
    return;
    }
    t126 = *(int *)0xC2A98FC;
    t127 = *(int *)0xC1EE214;
    if (t127 == 10) {
        t128 = nlLength(0xC179144, (0xC131084 + (signed char)(((t126 << 1) + t126) << 2)));
        u132 = t128;
    } else {
        t129 = (0xC131030 + (signed char)(((t126 << 1) + t126) << 2));
        if (t127 == 14) {
            t129 = 0xC1310E4;
        }
        t130 = nlLength(0xC179144, t129);
        u132 = t130;
    }
    t133 = *(int *)0xC1EE214;
    if (t133 == 14) {
        if (t133 == 14) {
            if (5000.0f > u132) {
                t134 = *(int *)0xC2A9A2C;
                if ((int)t134 >= (int)0x7) {
                    nlObjPutSetFadeColor(t133, 0.0f, 1.0f, 0.0f);
                    ExecArrow(0x1, u132);
                    ResetFadeColor();
    return;
                }
                return;
            }
            return;
        }
        return;
    }
    nlObjPutSetFadeColor(t133, 0.0f, 1.0f, 0.0f);
    ExecArrow(0x1, u132);
    ResetFadeColor();
}

void pfCrazyBoxRecordTimePut(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    float t3;
    int t4;
    int t16;
    float t17;
    int t19;

    t0 = (int)((int)a6 / (int)0xE10);
    t1 = (int)((int)(a6 - (t0 * 0xE10)) / (int)0x3C);
    t2 = (int)((int)(a6 - (t0 * 0xE10)) % (int)0x3C);
    t3 = nlRoundUp((t0 * 0xE10), a5, (a6 - (t0 * 0xE10)), (((float)t2 / 60.0f) * 100.0f));
    t4 = (int)t3;
    if ((int)(int)t3 < 0) {
        t4 = 0x0;
    }
    pfCleanString();
    if (t0 != 0) {
        pfAddNumber(t0, 0x0);
        pfAddString(0xC0D3028);
    }
    if ((int)t1 < (int)0xA) {
        pfAddString(0xC0D302C);
    }
    pfAddNumber(t1, 0x0);
    pfAddString(0xC0D3030);
    if ((int)t4 < (int)0xA) {
        pfAddString(0xC0D302C);
    }
    pfAddNumber(t4, 0x0);
    t16 = *(int *)0xC08D678;
    t17 = pfLength(t16);
    pfLocate(((float)a4 - (t17 * 0.5f)), (float)a5);
    t19 = *(int *)0xC08D678;
    pfPuts(t19);
}

void FcvStoreBuffer(int a4, int a5, float f4)
{
    int t0;
    float t1;
    int t2;
    int t3;
    int t5;
    int t7;
    int t9;
    int t11;
    int t13;
    int t15;
    int t17;
    int t19;
    int t21;
    int t23;
    int t25;
    int t27;
    int t29;
    int t31;
    int t33;
    int t35;

    t0 = *(int *)((a4 + 0x0));
    t1 = nlFloor(a4, a5, (f4 / (float)(t0 - 1)));
    t2 = *(int *)((a4 + 0x0));
    t3 = *(int *)((a4 + 0x18));
    FUN_0c0678a4(((t3 << 2) + a4), (a5 + 0xC), (f4 - (t1 * (float)(t2 - 1))));
    t5 = *(int *)((a4 + 0x24));
    FUN_0c0678a4(((t5 << 2) + a4), (a5 + 0x18), (f4 - (t1 * (float)(t2 - 1))));
    t7 = *(int *)((a4 + 0x34));
    FUN_0c0678a4(((t7 << 2) + a4), (a5 + 0x24), (f4 - (t1 * (float)(t2 - 1))));
    t9 = *(int *)((a4 + 0x40));
    FUN_0c0678a4(((t9 << 2) + a4), (a5 + 0x30), (f4 - (t1 * (float)(t2 - 1))));
    t11 = *(int *)((a4 + 0x4));
    FUN_0c0678a4(((t11 << 2) + a4), a5, (f4 - (t1 * (float)(t2 - 1))));
    t13 = *(int *)((a4 + 0x8));
    FUN_0c067960(((t13 << 2) + a4), (a5 + 0x3C), (f4 - (t1 * (float)(t2 - 1))));
    t15 = *(int *)((a4 + 0xC));
    FUN_0c067960(((t15 << 2) + a4), (a5 + 0x48), (f4 - (t1 * (float)(t2 - 1))));
    t17 = *(int *)((a4 + 0x10));
    FUN_0c067960(((t17 << 2) + a4), (a5 + 0x54), (f4 - (t1 * (float)(t2 - 1))));
    t19 = *(int *)((a4 + 0x14));
    FUN_0c067960(((t19 << 2) + a4), (a5 + 0x60), (f4 - (t1 * (float)(t2 - 1))));
    t21 = *(int *)((a4 + 0x1C));
    FUN_0c067960(((t21 << 2) + a4), (a5 + 0x6C), (f4 - (t1 * (float)(t2 - 1))));
    t23 = *(int *)((a4 + 0x20));
    FUN_0c067960(((t23 << 2) + a4), (a5 + 0x78), (f4 - (t1 * (float)(t2 - 1))));
    t25 = *(int *)((a4 + 0x28));
    FUN_0c067960(((t25 << 2) + a4), ((a5 + 0x3C) + 0x48), (f4 - (t1 * (float)(t2 - 1))));
    t27 = *(int *)((a4 + 0x2C));
    FUN_0c067960(((t27 << 2) + a4), ((a5 + 0x3C) + 0x54), (f4 - (t1 * (float)(t2 - 1))));
    t29 = *(int *)((a4 + 0x30));
    FUN_0c067960(((t29 << 2) + a4), ((a5 + 0x3C) + 0x60), (f4 - (t1 * (float)(t2 - 1))));
    t31 = *(int *)((a4 + 0x38));
    FUN_0c067960(((t31 << 2) + a4), ((a5 + 0x3C) + 0x6C), (f4 - (t1 * (float)(t2 - 1))));
    t33 = *(int *)((a4 + 0x3C));
    FUN_0c067960(((t33 << 2) + a4), ((a5 + 0x3C) + 0x78), (f4 - (t1 * (float)(t2 - 1))));
    t35 = *(int *)((a4 + 0x44));
    FUN_0c067960(((t35 << 2) + a4), ((a5 + 0x3C) + 0x84), (f4 - (t1 * (float)(t2 - 1))));
}

void psgEnterState1(int a4, int a5)
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
    int t14;
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
    float t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    float u42;
    int t43;
    int t44;
    int t46;
    int t47;
    int t51;
    int t56;
    int t57;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
    int t68;
    int t69;
    int t73;
    int t74;
    int t75;
    int t76;
    int t80;
    int t81;
    int t85;
    int t86;
    int t87;
    int t88;
    int t89;
    int t90;
    int t91;
    int t92;
    int t96;
    int t97;
    int t98;
    int t99;
    int t106;
    int t107;
    int t108;
    int t109;
    int t110;
    int t111;
    int t112;
    int t113;
    int t117;
    int t118;
    int t119;
    int t120;
    int t127;
    int t128;
    int t129;
    int t130;
    int t131;
    int t132;
    int t133;
    int t134;
    int t135;
    int t136;
    int t140;
    int t141;
    int t142;
    int t143;
    int t147;
    int t148;
    int t152;
    int t153;
    int t154;
    int t155;
    int t156;
    int t157;
    int t158;
    int t159;
    int t163;
    int t164;
    int t165;
    int t166;
    int t176;
    int t177;
    int t178;
    int t179;
    int t180;
    int t181;
    int t182;
    int t183;
    int t184;
    int t185;
    int t189;
    int t190;
    int t191;
    int t192;
    int t196;
    int t197;
    int t201;
    int t202;
    int t203;
    int t204;
    int t205;
    int t206;
    int t207;
    int t208;
    int t212;
    int t213;
    int t214;
    int t215;
    int t225;
    int t41;
    int stk[36];

    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = *(int *)0xC0D5B38;
    *(unsigned int *)(((((int)stk + 4) + 0x68) + 0x8)) = t0;
    t1 = *(int *)0xC0D5B34;
    *(unsigned int *)(((((int)stk + 4) + 0x68) + 0x4)) = t1;
    t2 = *(int *)0xC0D5B30;
    *(unsigned int *)(((((int)stk + 4) + 0x68) + 0x0)) = t2;
    t3 = *(int *)0xC0D5B4C;
    *(unsigned int *)(((((int)stk + 4) + 0x54) + 0x10)) = t3;
    t4 = *(int *)0xC0D5B48;
    *(unsigned int *)(((((int)stk + 4) + 0x54) + 0xC)) = t4;
    t5 = *(int *)0xC0D5B44;
    *(unsigned int *)(((((int)stk + 4) + 0x54) + 0x8)) = t5;
    t6 = *(int *)0xC0D5B40;
    *(unsigned int *)(((((int)stk + 4) + 0x54) + 0x4)) = t6;
    t7 = *(int *)0xC0D5B3C;
    *(unsigned int *)(((((int)stk + 4) + 0x54) + 0x0)) = t7;
    t8 = *(int *)0xC0D5B60;
    *(unsigned int *)(((((int)stk + 4) + 0x40) + 0x10)) = t8;
    t9 = *(int *)0xC0D5B5C;
    *(unsigned int *)(((((int)stk + 4) + 0x40) + 0xC)) = t9;
    t10 = *(int *)0xC0D5B58;
    *(unsigned int *)(((((int)stk + 4) + 0x40) + 0x8)) = t10;
    t11 = *(int *)0xC0D5B54;
    *(unsigned int *)(((((int)stk + 4) + 0x40) + 0x4)) = t11;
    t12 = *(int *)0xC0D5B50;
    *(unsigned int *)(((((int)stk + 4) + 0x40) + 0x0)) = t12;
    t13 = *(int *)0xC0D5B70;
    *(unsigned int *)(((((int)stk + 4) + 0x30) + 0xC)) = t13;
    t14 = *(int *)0xC0D5B6C;
    *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x8)) = t14;
    t15 = *(int *)0xC0D5B68;
    *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x4)) = t15;
    t16 = *(int *)0xC0D5B64;
    *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x0)) = t16;
    t17 = *(int *)0xC0D5B80;
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0xC)) = t17;
    t18 = *(int *)0xC0D5B7C;
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0x8)) = t18;
    t19 = *(int *)0xC0D5B78;
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0x4)) = t19;
    t20 = *(int *)0xC0D5B74;
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0x0)) = t20;
    t21 = *(int *)0xC0D5B90;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0xC)) = t21;
    t22 = *(int *)0xC0D5B8C;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x8)) = t22;
    t23 = *(int *)0xC0D5B88;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x4)) = t23;
    t24 = *(int *)0xC0D5B84;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x0)) = t24;
    t25 = *(int *)0xC0D5B94;
    *(unsigned int *)(((int)stk + 16)) = t25;
    t26 = *(int *)0xC0D5B98;
    *(unsigned int *)(((int)stk + 12)) = t26;
    t27 = *(int *)0xC0D5B9C;
    *(unsigned int *)(((int)stk + 8)) = t27;
    t28 = nlRand(a4, a5);
    t29 = *(int *)(((int)stk + 4));
    if (t29 != 0) {
        if (t29 != 1) {
            if (t29 == 2) {
                t30 = nlLength(0xC179144, (a4 + 0x4));
                if (50.0f > t30) {
                    t31 = *(signed char *)((a4 + 0x14B));
                    if ((t31 & 4) != 0) {
                        t32 = *(int *)(((int)stk + 16));
                        *(unsigned int *)((a4 + 0x110)) = t32;
                    } else {
                        t33 = *(int *)(((int)stk + 12));
                        *(unsigned int *)((a4 + 0x110)) = t33;
                    }
                    t41 = 0x0;
                } else {
                    t34 = (int)((int)t28 % (int)0x4);
                    t35 = *(signed char *)((a4 + 0x14B));
                    if ((t35 & 4) != 0) {
                        t36 = *(int *)((((t34 << 2) + (((int)stk + 4) + 0x30)) + 0x0));
                        *(unsigned int *)((a4 + 0x110)) = t36;
                    } else {
                        t37 = *(int *)((((t34 << 2) + (((int)stk + 4) + 0x20)) + 0x0));
                        *(unsigned int *)((a4 + 0x110)) = t37;
                    }
                    t41 = t34;
                }
                u42 = *(float *)((((t41 << 2) + (((int)stk + 4) + 0x10)) + 0x0));
                *(float *)((a4 + 0x114)) = u42;
                t43 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t43 | 0x80);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = 10.0f;
                t44 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((t44 & 0xF9) | 0x4);
                *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
                *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
                FUN_0c061da8(a4);
            } else {
                if (t29 == 3) {
                    *(unsigned int *)((a4 + 0x110)) = 0xCADB018;
                    *(float *)((a4 + 0x114)) = 0.0f;
                    t46 = *(signed char *)(((0x149 + a4) + 0x0));
                    *(unsigned char *)(((0x149 + a4) + 0x0)) = (t46 | 0x80);
                    *(float *)((a4 + 0x108)) = 0.0f;
                    *(float *)((a4 + 0x10C)) = 5.0f;
                    t47 = *(signed char *)(((0x149 + a4) + 0x0));
                    *(unsigned char *)(((0x149 + a4) + 0x0)) = ((t47 & 0xF9) | 0x4);
                    *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
                    *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
                }
            }
        } else {
            *(float *)((a4 + 0x38)) = 0.0f;
            *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
            *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
            t51 = *(int *)((a4 + 0x140));
            if (t51 != -1) {
                FUN_0c061e04(a4);
            }
        }
    } else {
        t56 = *(int *)0xC1EE20C;
        if (t56 == 2) {
            t57 = *(int *)0xC1EE214;
            if (t57 == 8) {
                t58 = *(int *)((a4 + 0x0));
                t59 = IsBoyFriend(t58, 0x0);
                if (t59 == 0) {
                    t60 = *(int *)0xC1EE20C;
                    if (t60 == 2) {
                        t61 = *(int *)0xC1EE214;
                        if (t61 != 8) {
                            t62 = *(signed char *)0xC2AD1DF;
                            if ((t62 & 2) == 0) {
                                t63 = *(int *)((a4 + 0x140));
                                if ((int)t63 < 0) {
                                    t64 = (int)((unsigned int)t28 % (unsigned int)0x5);
                                    t65 = *(signed char *)((a4 + 0x14B));
                                    t66 = (((int)stk + 4) + 0x40);
                                    if ((t65 & 16) != 0) {
                                        t66 = (((int)stk + 4) + 0x54);
                                    }
                                    t67 = *(int *)((((t64 << 2) + t66) + 0x0));
                                    *(unsigned int *)((a4 + 0x110)) = t67;
                                } else {
                                    t68 = (int)((unsigned int)t28 % (unsigned int)0x3);
                                    t69 = *(int *)((((t68 << 2) + (((int)stk + 4) + 0x68)) + 0x0));
                                    *(unsigned int *)((a4 + 0x110)) = t69;
                                }
                            } else {
                                t73 = (int)((unsigned int)t28 % (unsigned int)0x5);
                                t74 = *(signed char *)((a4 + 0x14B));
                                t75 = (((int)stk + 4) + 0x40);
                                if ((t74 & 16) != 0) {
                                    t75 = (((int)stk + 4) + 0x54);
                                }
                                t76 = *(int *)((((t73 << 2) + t75) + 0x0));
                                *(unsigned int *)((a4 + 0x110)) = t76;
                            }
                        } else {
                            t80 = (int)((unsigned int)t28 % (unsigned int)0x3);
                            t81 = *(int *)((((t80 << 2) + (((int)stk + 4) + 0x68)) + 0x0));
                            *(unsigned int *)((a4 + 0x110)) = t81;
                        }
                    } else {
                        t85 = *(signed char *)0xC2AD1DF;
                        if ((t85 & 2) == 0) {
                            t86 = *(int *)((a4 + 0x140));
                            if ((int)t86 < 0) {
                                t87 = (int)((unsigned int)t28 % (unsigned int)0x5);
                                t88 = *(signed char *)((a4 + 0x14B));
                                t89 = (((int)stk + 4) + 0x40);
                                if ((t88 & 16) != 0) {
                                    t89 = (((int)stk + 4) + 0x54);
                                }
                                t90 = *(int *)((((t87 << 2) + t89) + 0x0));
                                *(unsigned int *)((a4 + 0x110)) = t90;
                            } else {
                                t91 = (int)((unsigned int)t28 % (unsigned int)0x3);
                                t92 = *(int *)((((t91 << 2) + (((int)stk + 4) + 0x68)) + 0x0));
                                *(unsigned int *)((a4 + 0x110)) = t92;
                            }
                        } else {
                            t96 = (int)((unsigned int)t28 % (unsigned int)0x5);
                            t97 = *(signed char *)((a4 + 0x14B));
                            t98 = (((int)stk + 4) + 0x40);
                            if ((t97 & 16) != 0) {
                                t98 = (((int)stk + 4) + 0x54);
                            }
                            t99 = *(int *)((((t96 << 2) + t98) + 0x0));
                            *(unsigned int *)((a4 + 0x110)) = t99;
                        }
                    }
                } else {
                    t106 = *(signed char *)0xC2AD1DF;
                    if ((t106 & 2) == 0) {
                        t107 = *(int *)((a4 + 0x140));
                        if ((int)t107 < 0) {
                            t108 = (int)((unsigned int)t28 % (unsigned int)0x5);
                            t109 = *(signed char *)((a4 + 0x14B));
                            t110 = (((int)stk + 4) + 0x40);
                            if ((t109 & 16) != 0) {
                                t110 = (((int)stk + 4) + 0x54);
                            }
                            t111 = *(int *)((((t108 << 2) + t110) + 0x0));
                            *(unsigned int *)((a4 + 0x110)) = t111;
                        } else {
                            t112 = (int)((unsigned int)t28 % (unsigned int)0x3);
                            t113 = *(int *)((((t112 << 2) + (((int)stk + 4) + 0x68)) + 0x0));
                            *(unsigned int *)((a4 + 0x110)) = t113;
                        }
                    } else {
                        t117 = (int)((unsigned int)t28 % (unsigned int)0x5);
                        t118 = *(signed char *)((a4 + 0x14B));
                        t119 = (((int)stk + 4) + 0x40);
                        if ((t118 & 16) != 0) {
                            t119 = (((int)stk + 4) + 0x54);
                        }
                        t120 = *(int *)((((t117 << 2) + t119) + 0x0));
                        *(unsigned int *)((a4 + 0x110)) = t120;
                    }
                }
            } else {
                t127 = *(int *)0xC1EE20C;
                if (t127 == 2) {
                    t128 = *(int *)0xC1EE214;
                    if (t128 != 8) {
                        t129 = *(signed char *)0xC2AD1DF;
                        if ((t129 & 2) == 0) {
                            t130 = *(int *)((a4 + 0x140));
                            if ((int)t130 < 0) {
                                t131 = (int)((unsigned int)t28 % (unsigned int)0x5);
                                t132 = *(signed char *)((a4 + 0x14B));
                                t133 = (((int)stk + 4) + 0x40);
                                if ((t132 & 16) != 0) {
                                    t133 = (((int)stk + 4) + 0x54);
                                }
                                t134 = *(int *)((((t131 << 2) + t133) + 0x0));
                                *(unsigned int *)((a4 + 0x110)) = t134;
                            } else {
                                t135 = (int)((unsigned int)t28 % (unsigned int)0x3);
                                t136 = *(int *)((((t135 << 2) + (((int)stk + 4) + 0x68)) + 0x0));
                                *(unsigned int *)((a4 + 0x110)) = t136;
                            }
                        } else {
                            t140 = (int)((unsigned int)t28 % (unsigned int)0x5);
                            t141 = *(signed char *)((a4 + 0x14B));
                            t142 = (((int)stk + 4) + 0x40);
                            if ((t141 & 16) != 0) {
                                t142 = (((int)stk + 4) + 0x54);
                            }
                            t143 = *(int *)((((t140 << 2) + t142) + 0x0));
                            *(unsigned int *)((a4 + 0x110)) = t143;
                        }
                    } else {
                        t147 = (int)((unsigned int)t28 % (unsigned int)0x3);
                        t148 = *(int *)((((t147 << 2) + (((int)stk + 4) + 0x68)) + 0x0));
                        *(unsigned int *)((a4 + 0x110)) = t148;
                    }
                } else {
                    t152 = *(signed char *)0xC2AD1DF;
                    if ((t152 & 2) == 0) {
                        t153 = *(int *)((a4 + 0x140));
                        if ((int)t153 < 0) {
                            t154 = (int)((unsigned int)t28 % (unsigned int)0x5);
                            t155 = *(signed char *)((a4 + 0x14B));
                            t156 = (((int)stk + 4) + 0x40);
                            if ((t155 & 16) != 0) {
                                t156 = (((int)stk + 4) + 0x54);
                            }
                            t157 = *(int *)((((t154 << 2) + t156) + 0x0));
                            *(unsigned int *)((a4 + 0x110)) = t157;
                        } else {
                            t158 = (int)((unsigned int)t28 % (unsigned int)0x3);
                            t159 = *(int *)((((t158 << 2) + (((int)stk + 4) + 0x68)) + 0x0));
                            *(unsigned int *)((a4 + 0x110)) = t159;
                        }
                    } else {
                        t163 = (int)((unsigned int)t28 % (unsigned int)0x5);
                        t164 = *(signed char *)((a4 + 0x14B));
                        t165 = (((int)stk + 4) + 0x40);
                        if ((t164 & 16) != 0) {
                            t165 = (((int)stk + 4) + 0x54);
                        }
                        t166 = *(int *)((((t163 << 2) + t165) + 0x0));
                        *(unsigned int *)((a4 + 0x110)) = t166;
                    }
                }
            }
        } else {
            t176 = *(int *)0xC1EE20C;
            if (t176 == 2) {
                t177 = *(int *)0xC1EE214;
                if (t177 != 8) {
                    t178 = *(signed char *)0xC2AD1DF;
                    if ((t178 & 2) == 0) {
                        t179 = *(int *)((a4 + 0x140));
                        if ((int)t179 < 0) {
                            t180 = (int)((unsigned int)t28 % (unsigned int)0x5);
                            t181 = *(signed char *)((a4 + 0x14B));
                            t182 = (((int)stk + 4) + 0x40);
                            if ((t181 & 16) != 0) {
                                t182 = (((int)stk + 4) + 0x54);
                            }
                            t183 = *(int *)((((t180 << 2) + t182) + 0x0));
                            *(unsigned int *)((a4 + 0x110)) = t183;
                        } else {
                            t184 = (int)((unsigned int)t28 % (unsigned int)0x3);
                            t185 = *(int *)((((t184 << 2) + (((int)stk + 4) + 0x68)) + 0x0));
                            *(unsigned int *)((a4 + 0x110)) = t185;
                        }
                    } else {
                        t189 = (int)((unsigned int)t28 % (unsigned int)0x5);
                        t190 = *(signed char *)((a4 + 0x14B));
                        t191 = (((int)stk + 4) + 0x40);
                        if ((t190 & 16) != 0) {
                            t191 = (((int)stk + 4) + 0x54);
                        }
                        t192 = *(int *)((((t189 << 2) + t191) + 0x0));
                        *(unsigned int *)((a4 + 0x110)) = t192;
                    }
                } else {
                    t196 = (int)((unsigned int)t28 % (unsigned int)0x3);
                    t197 = *(int *)((((t196 << 2) + (((int)stk + 4) + 0x68)) + 0x0));
                    *(unsigned int *)((a4 + 0x110)) = t197;
                }
            } else {
                t201 = *(signed char *)0xC2AD1DF;
                if ((t201 & 2) == 0) {
                    t202 = *(int *)((a4 + 0x140));
                    if ((int)t202 < 0) {
                        t203 = (int)((unsigned int)t28 % (unsigned int)0x5);
                        t204 = *(signed char *)((a4 + 0x14B));
                        t205 = (((int)stk + 4) + 0x40);
                        if ((t204 & 16) != 0) {
                            t205 = (((int)stk + 4) + 0x54);
                        }
                        t206 = *(int *)((((t203 << 2) + t205) + 0x0));
                        *(unsigned int *)((a4 + 0x110)) = t206;
                    } else {
                        t207 = (int)((unsigned int)t28 % (unsigned int)0x3);
                        t208 = *(int *)((((t207 << 2) + (((int)stk + 4) + 0x68)) + 0x0));
                        *(unsigned int *)((a4 + 0x110)) = t208;
                    }
                } else {
                    t212 = (int)((unsigned int)t28 % (unsigned int)0x5);
                    t213 = *(signed char *)((a4 + 0x14B));
                    t214 = (((int)stk + 4) + 0x40);
                    if ((t213 & 16) != 0) {
                        t214 = (((int)stk + 4) + 0x54);
                    }
                    t215 = *(int *)((((t212 << 2) + t214) + 0x0));
                    *(unsigned int *)((a4 + 0x110)) = t215;
                }
            }
        }
        *(float *)((a4 + 0x114)) = 0.0f;
        *(float *)((a4 + 0x10C)) = 15.0f;
        t225 = *(signed char *)(((0x149 + a4) + 0x0));
        *(unsigned char *)(((0x149 + a4) + 0x0)) = ((t225 & 0xF9) | 0x4);
        *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
        *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
    }
}

void nlTanh(int a4)
{
    if ((((float)(unsigned short)a4 * 6.28318501f) / 65536.0f) > 0.000999999931f) {
        nlExp((unsigned short)a4, (-((((float)(unsigned short)a4 * 6.28318501f) / 65536.0f) * (1.0f + 1.0f))), 0.000999999931f);
    } else {
        if (0.000999999931f > (((float)(unsigned short)a4 * 6.28318501f) / 65536.0f)) {
            nlExp((unsigned short)a4, ((((float)(unsigned short)a4 * 6.28318501f) / 65536.0f) * (1.0f + 1.0f)), 0.000999999931f);
        }
    }
}
