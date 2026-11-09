/* Straight-line functions with calls and guards (batch gen_ts): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Count_Down_Clock(void);
int GS_GuestResult(void);
int ResetFadeColor(void);
int Sound_Request(int, int);
int nlObjPutSetFadeColor(float, float, float);
int nlSprPut(int);
int Put_Pass_Time(void);
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };


int Put_Pass_Time(void)
{
    int t69;
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
    float u278;
    float u302;
    float u317;

    if ((((((struct o10_int *)0xC2A8E88)->v)) == 0) && (t1 = (((struct o28_int *)0xC2A8E88)->v), (int)t1 <= (int)0x3)) {
        (((struct o3C_uint *)0xC2A8DF4)->v) = (*(int *)((((((struct o14_int *)0xC2A8C64)->v)) + 0x0)));
    }
    if ((int)((((struct o3C_int *)0xC2A8DF4)->v)) <= 0) {
        if ((((((struct o0_int *)0xC2A75E0)->v)) & 0x80) == 0x80) {
            if ((((((struct o28_int *)0xC2A8E88)->v)) == 2) && (t181 = (((struct o10_int *)0xC2A8F60)->v), t181 == 1)) {
                (((struct o28_uint *)0xC2A8E88)->v) = 0x6;
            } else {
                t69 = (((struct o28_int *)0xC2A8E88)->v);
                t181 = t69;
                if (t69 != 3) {
                } else {
                    t181 = (((struct o0_int *)0xC2A8E88)->v);
                    if (t181 != 7) {
                    } else {
                        (((struct o28_uint *)0xC2A8E88)->v) = 0x4;
                        (((struct o4_uint *)0xC2A8F60)->v) = 0x0;
                        (((struct o0_uint *)0xC2A8F60)->v) = 0x0;
                    }
                }
            }
        } else {
            if ((((((struct o28_int *)0xC2A8E88)->v)) == 2) && (t181 = (((struct o10_int *)0xC2A8F60)->v), t181 == 1)) {
                (((struct o28_uint *)0xC2A8E88)->v) = 0x6;
            } else {
                t181 = (((struct o28_int *)0xC2A8E88)->v);
                if (t181 != 3) {
                } else {
                    if (((((struct o0_int *)0xC2A8EDC)->v)) != 0) {
                    } else {
                        if (((((struct o4_int *)0xC2A8EDC)->v)) != 0) {
                        } else {
                            if (((((struct o8_int *)0xC2A8EDC)->v)) != 0) {
                            } else {
                                if (((((struct oC_int *)0xC2A8EDC)->v)) != 0) {
                                } else {
                                    if (((((struct o10_int *)0xC2A8EDC)->v)) != 0) {
                                    } else {
                                        if (((((struct o14_int *)0xC2A8EDC)->v)) != 0) {
                                        } else {
                                            if (((((struct o18_int *)0xC2A8EDC)->v)) != 0) {
                                            } else {
                                                if (((((struct o1C_int *)0xC2A8EDC)->v)) != 0) {
                                                } else {
                                                    (((struct o28_uint *)0xC2A8E88)->v) = 0x4;
                                                    (((struct o4_uint *)0xC2A8F60)->v) = 0x0;
                                                    (((struct o0_uint *)0xC2A8F60)->v) = 0x0;
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
        }
        return t181;
    }
    t187 = (int)((int)((((struct o3C_int *)0xC2A8DF4)->v)) / (int)0x3C);
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
    if (((((struct o10_int *)0xC2A8E88)->v)) == 0) {
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
        if ((int)((((struct o3C_int *)0xC2A8DF4)->v)) <= (int)(*(int *)0xC1EE7D4)) {
            if (((int)((int)((((struct o3C_int *)0xC2A8DF4)->v)) % (int)0x3C)) == 0) {
                Sound_Request(0x4A9, 0x0);
            }
        }
    } else {
        t224 = (((struct o2C_int *)0xC2A75E0)->v);
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
    if (((((struct o28_int *)0xC2A8E88)->v)) == 3) {
        (((struct o2C_float *)0xC2A806C)->v) = 0.0f;
        Count_Down_Clock();
    }
    (((struct o0_uint *)0xC2A8DF4)->v) = (int)((((struct o24_float *)0xC2A75E0)->v));
    (((struct o4_uint *)0xC2A8DF4)->v) = (int)((((struct o28_float *)0xC2A75E0)->v));
    u247 = 0.79999995f;
    if (((((struct o0_float *)0xC2A8C64)->v)) > u247) {
        (((struct o0_float *)0xC2A8C64)->v) = u247;
    }
    if (((((struct o4_float *)0xC2A8C64)->v)) > u247) {
        (((struct o4_float *)0xC2A8C64)->v) = u247;
    }
    (((struct o10_float *)0xC2A806C)->v) = ((((struct o0_float *)0xC2A8C64)->v));
    (((struct o14_float *)0xC2A806C)->v) = ((((struct o4_float *)0xC2A8C64)->v));
    (((struct o2C_float *)0xC2A806C)->v) = 1.0f;
    (((struct o28_uint *)0xC2A806C)->v) = 0x0;
    if (t192 != 0) {
        (((struct o4_float *)0xC2A806C)->v) = (float)((((struct o0_int *)0xC2A8DF4)->v));
        (((struct o8_float *)0xC2A806C)->v) = (float)((((struct o4_int *)0xC2A8DF4)->v));
        (((struct oC_float *)0xC2A806C)->v) = 0.14999999f;
        (((struct o0_uint *)0xC2A806C)->v) = (*(int *)(((t192 << 2) + 0xC0D0C08)));
        nlSprPut(0xC2A806C);
    }
    u269 = 4e+01f;
    if ((t192 == 0) && (t196 == 0)) {
    } else {
        if (t192 != 0) {
            u272 = (float)((((struct o0_int *)0xC2A8DF4)->v));
            u272 = u272 + u269 * ((((struct o0_float *)0xC2A8C64)->v));
            u278 = u272;
        } else {
            u278 = (float)((((struct o0_int *)0xC2A8DF4)->v));
        }
        (((struct o4_float *)0xC2A806C)->v) = u278;
        (((struct o8_float *)0xC2A806C)->v) = (float)((((struct o4_int *)0xC2A8DF4)->v));
        (((struct oC_float *)0xC2A806C)->v) = 0.225f;
        (((struct o0_uint *)0xC2A806C)->v) = (*(int *)(((t196 << 2) + 0xC0D0C08)));
        nlSprPut(0xC2A806C);
    }
    t293 = (((struct o0_int *)0xC2A8DF4)->v);
    u294 = (((struct o0_float *)0xC2A8C64)->v);
    if (t192 != 0) {
        u296 = (float)t293;
        u296 = u296 + 8e+01f * u294;
        (((struct o4_float *)0xC2A806C)->v) = u296;
        u302 = u296;
    } else {
        u299 = (float)t293;
        if (t196 != 0) {
            u297 = (float)t293;
            u297 = u297 + u269 * u294;
            u299 = u297;
        }
        (((struct o4_float *)0xC2A806C)->v) = u299;
        u302 = u299;
    }
    (((struct o8_float *)0xC2A806C)->v) = (float)((((struct o4_int *)0xC2A8DF4)->v));
    (((struct oC_float *)0xC2A806C)->v) = 0.19999999f;
    (((struct o0_uint *)0xC2A806C)->v) = (*(int *)(((t197 << 2) + 0xC0D0C08)));
    if ((int)((((struct o3C_int *)0xC2A8DF4)->v)) > 0) {
        nlSprPut(0xC2A806C);
    } else {
        u317 = u302;
    }
    (((struct o2C_float *)0xC2A806C)->v) = 1.0f;
    return ResetFadeColor();
}
