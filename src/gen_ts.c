/* Straight-line functions with calls and guards (batch gen_ts): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Count_Down_Clock(void);
int GS_GuestResult(void);
int ResetFadeColor(float);
int Sound_Request(int, int);
int nlObjPutSetFadeColor(float, float, float);
int nlSprPut(int);
int Put_Pass_Time(void);

int Put_Pass_Time(void)
{
    int t69;
    int t75;
    int t71;
    int t102;
    int t187;
    int t188;
    int t192;
    int t193;
    int t190;
    int t196;
    int t197;
    int t200;
    float u204;
    float u205;
    float u206;
    int t224;
    float u228;
    float u229;
    float u230;
    float u247;
    float u269;
    float u272;
    int t293;
    float u294;
    float u296;
    float u299;
    float u297;
    int t1;
    int t181;
    int t64;
    int t79;
    int t83;
    int t177;
    float u278;
    float u302;
    float u317;

    if (((*(int *)0xC2A8E98) == 0) && (t1 = *(int *)0xC2A8EB0, (int)t1 <= (int)0x3)) {
        *(unsigned int *)0xC2A8E30 = (*(int *)(((*(int *)0xC2A8C78) + 0x0)));
    }
    if ((int)(*(int *)0xC2A8E30) <= 0) {
        if (((*(int *)0xC2A75E0) & 0x80) == 0x80) {
            if (((*(int *)0xC2A8EB0) == 2) && (t64 = *(int *)0xC2A8F70, t64 == 1)) {
                *(unsigned int *)0xC2A8EB0 = 0x6;
                t79 = t64;
            } else {
                t69 = *(int *)0xC2A8EB0;
                t75 = t69;
                if (t69 != 3) {
                } else {
                    t71 = *(int *)0xC2A8E88;
                    if (t71 != 7) {
                    } else {
                        *(unsigned int *)0xC2A8EB0 = 0x4;
                        *(unsigned int *)0xC2A8F64 = 0x0;
                        *(unsigned int *)0xC2A8F60 = 0x0;
                    }
                    t75 = t71;
                }
                t79 = t75;
            }
            t181 = t79;
        } else {
            if (((*(int *)0xC2A8EB0) == 2) && (t83 = *(int *)0xC2A8F70, t83 == 1)) {
                *(unsigned int *)0xC2A8EB0 = 0x6;
                t177 = t83;
            } else {
                t102 = *(int *)0xC2A8EB0;
                if (t102 != 3) {
                } else {
                    if ((*(int *)0xC2A8EDC) != 0) {
                    } else {
                        if ((*(int *)0xC2A8EE0) != 0) {
                        } else {
                            if ((*(int *)0xC2A8EE4) != 0) {
                            } else {
                                if ((*(int *)0xC2A8EE8) != 0) {
                                } else {
                                    if ((*(int *)0xC2A8EEC) != 0) {
                                    } else {
                                        if ((*(int *)0xC2A8EF0) != 0) {
                                        } else {
                                            if ((*(int *)0xC2A8EF4) != 0) {
                                            } else {
                                                if ((*(int *)0xC2A8EF8) != 0) {
                                                } else {
                                                    *(unsigned int *)0xC2A8EB0 = 0x4;
                                                    *(unsigned int *)0xC2A8F64 = 0x0;
                                                    *(unsigned int *)0xC2A8F60 = 0x0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                t177 = t102;
            }
            t181 = t177;
        }
        return t181;
    }
    t187 = (int)((int)(*(int *)0xC2A8E30) / (int)0x3C);
    t188 = t187;
    if ((int)t187 > (int)0x3E7) {
        t188 = 0x3E7;
    }
    t192 = 0x0;
    t193 = t188;
    if ((int)t187 >= (int)0x64) {
        t190 = (int)((int)t188 / (int)0x64);
        t192 = t190;
        t193 = (t188 - (t190 * 0x64));
    }
    t196 = (int)((int)t193 / (int)0xA);
    t197 = (int)((int)t193 % (int)0xA);
    if ((*(int *)0xC2A8E98) == 0) {
        t200 = GS_GuestResult();
        if (t200 == 2) {
            nlObjPutSetFadeColor(0.0f, 1.0f, 0.0f);
        } else {
            if (t200 == 1) {
                nlObjPutSetFadeColor(1.0f, 0.901960731f, 0.0f);
            } else {
                u204 = 0.988235235f;
                u205 = 0.0f;
                u206 = 0.0f;
                if ((t200 != 0) && (t200 == -1)) {
                    u204 = 0.686274469f;
                    u205 = 0.0980392098f;
                    u206 = 0.56078428f;
                }
                nlObjPutSetFadeColor(u204, u205, u206);
            }
        }
        if ((int)(*(int *)0xC2A8E30) <= (int)(*(int *)0xC1EE7D4)) {
            if (((int)((int)(*(int *)0xC2A8E30) % (int)0x3C)) == 0) {
                Sound_Request(0x4A9, 0x0);
            }
        }
    } else {
        t224 = *(int *)0xC2A760C;
        if (t224 == 2) {
            nlObjPutSetFadeColor(0.0f, 1.0f, 0.0f);
        } else {
            if (t224 == 1) {
                nlObjPutSetFadeColor(1.0f, 0.901960731f, 0.0f);
            } else {
                u228 = 0.988235235f;
                u229 = 0.0f;
                u230 = 0.0f;
                if ((t224 != 0) && (t224 == -1)) {
                    u228 = 0.686274469f;
                    u229 = 0.0980392098f;
                    u230 = 0.56078428f;
                }
                nlObjPutSetFadeColor(u228, u229, u230);
            }
        }
    }
    if ((*(int *)0xC2A8EB0) == 3) {
        *(float *)0xC2A8098 = 0.0f;
        Count_Down_Clock();
    }
    *(unsigned int *)0xC2A8DF4 = (int)(*(float *)0xC2A7604);
    *(unsigned int *)0xC2A8DF8 = (int)(*(float *)0xC2A7608);
    u247 = 0.79999995f;
    if ((*(float *)0xC2A8C64) > u247) {
        *(float *)0xC2A8C64 = u247;
    }
    if ((*(float *)0xC2A8C68) > u247) {
        *(float *)0xC2A8C68 = u247;
    }
    *(float *)0xC2A807C = (*(float *)0xC2A8C64);
    *(float *)0xC2A8080 = (*(float *)0xC2A8C68);
    *(float *)0xC2A8098 = 1.0f;
    *(unsigned int *)0xC2A8094 = 0x0;
    if (t192 != 0) {
        *(float *)0xC2A8070 = (float)(*(int *)0xC2A8DF4);
        *(float *)0xC2A8074 = (float)(*(int *)0xC2A8DF8);
        *(float *)0xC2A8078 = 0.14999999f;
        *(unsigned int *)0xC2A806C = (*(int *)(((t192 << 2) + 0xC0D0C08)));
        nlSprPut(0xC2A806C);
    }
    u269 = 4e+01f;
    if ((t192 == 0) && (t196 == 0)) {
    } else {
        if (t192 != 0) {
            u272 = (float)(*(int *)0xC2A8DF4);
            u272 = u272 + u269 * (*(float *)0xC2A8C64);
            u278 = u272;
        } else {
            u278 = (float)(*(int *)0xC2A8DF4);
        }
        *(float *)0xC2A8070 = u278;
        *(float *)0xC2A8074 = (float)(*(int *)0xC2A8DF8);
        *(float *)0xC2A8078 = 0.225f;
        *(unsigned int *)0xC2A806C = (*(int *)(((t196 << 2) + 0xC0D0C08)));
        nlSprPut(0xC2A806C);
    }
    t293 = *(int *)0xC2A8DF4;
    u294 = *(float *)0xC2A8C64;
    if (t192 != 0) {
        u296 = (float)t293;
        u296 = u296 + 8e+01f * u294;
        *(float *)0xC2A8070 = u296;
        u302 = u296;
    } else {
        u299 = (float)t293;
        if (t196 != 0) {
            u297 = (float)t293;
            u297 = u297 + u269 * u294;
            u299 = u297;
        }
        *(float *)0xC2A8070 = u299;
        u302 = u299;
    }
    *(float *)0xC2A8074 = (float)(*(int *)0xC2A8DF8);
    *(float *)0xC2A8078 = 0.19999999f;
    *(unsigned int *)0xC2A806C = (*(int *)(((t197 << 2) + 0xC0D0C08)));
    if ((int)(*(int *)0xC2A8E30) > 0) {
        nlSprPut(0xC2A806C);
    } else {
        u317 = u302;
    }
    *(float *)0xC2A8098 = 1.0f;
    return ResetFadeColor(u317);
}
