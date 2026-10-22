/* Straight-line functions with calls and guards (batch gen_sq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Put_Remain_Time_Add(void);
int Put_Remain_Time_Frame(void);
int Put_Remain_Time_Gauge(int, int);
int ResetFadeColor(void);
int Sound_Request(int, int);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int nlObjPutSetFadeColor(float, float, float);
int nlSprPut(int);
int Put_Remain_Time(void);

int Put_Remain_Time(void)
{
    int t2;
    int t3;
    int t12;
    int t17;
    int t19;
    int t20;
    int t14;
    int t22;
    int t23;
    int t29;
    float u46;
    int t73;
    int t97;
    int t82;
    int t77;
    int t88;
    int t93;
    int t126;
    int t111;
    int t106;
    int t117;
    int t122;
    int t161;
    int t156;
    int t151;
    int t139;
    int t135;
    int t144;
    int t148;
    int t201;
    int t196;
    int t191;
    int t179;
    int t175;
    int t184;
    int t188;
    int t241;
    int t226;
    int t221;
    int t232;
    int t237;
    int t276;
    int t271;
    int t266;
    int t254;
    int t250;
    int t259;
    int t263;
    int t316;
    int t311;
    int t306;
    int t294;
    int t290;
    int t299;
    int t303;
    int t327;
    int t212;
    int t206;
    int t166;
    int t321;
    int t281;

    Put_Remain_Time_Add();
    t2 = *(int *)(((*(int *)0xC2A8C54) + 0x0));
    t3 = (int)((int)t2 / (int)0x3C);
    if (t2 == 0x293) {
        Voice_ShutUp(0x0);
        Voice_Request(0xC130B78, 0x0, 0x7F, 0x0);
    }
    t12 = t3;
    if ((int)t3 > (int)0x3E7) {
        t12 = 0x3E7;
    }
    t17 = 0x0;
    t19 = t12;
    t20 = 0x64;
    if ((int)t3 >= (int)0x64) {
        t14 = (int)((int)t12 / (int)0x64);
        t17 = t14;
        t19 = (t12 - (t14 * 0x64));
        t20 = (t14 * 0x64);
    }
    t22 = (int)((int)t19 / (int)0xA);
    t23 = (int)((int)t19 % (int)0xA);
    Put_Remain_Time_Gauge(t19, t20);
    *(unsigned int *)0xC2A7FB0 = 0x200E;
    *(float *)0xC2A7FA0 = 1.0f;
    *(float *)0xC2A7F90 = 1.0f;
    *(unsigned int *)0xC2A7FA4 = 0x0;
    if (((*(int *)0xC2A8E98) != 1) && (((int)t12 < (int)0xB) && ((int)t12 >= (int)0x1))) {
        t29 = *(int *)0xC2A8CAC;
        if ((((int)t29 < (int)0xA) && (((int)t12 < (int)0xB) && ((int)t12 > (int)0x6))) || ((((int)t29 < (int)0x7) && (((int)t12 < (int)0x7) && ((int)t12 > (int)0x3))) || (((int)t29 < (int)0x5) && (((int)t12 < (int)0x4) && ((int)t12 > 0))))) {
            nlObjPutSetFadeColor(1.0f, 0.0f, 0.0f);
            *(float *)0xC2A7F80 = 32.0f;
            *(float *)0xC2A7F84 = 84.0f;
            if (t17 != 0) {
                *(unsigned int *)0xC2A7F7C = (*(int *)((0xC0D0C08 + (t17 << 2))));
                nlSprPut(0xC2A7F7C);
            }
            *(unsigned int *)0xC2A7F7C = (*(int *)((0xC0D0C08 + (t22 << 2))));
            *(float *)0xC2A7F80 = (74.0f);
            nlSprPut(0xC2A7F7C);
            *(unsigned int *)0xC2A7F7C = (*(int *)((0xC0D0C08 + (t23 << 2))));
            *(float *)0xC2A7F80 = (116.0f);
            nlSprPut(0xC2A7F7C);
        }
    } else {
        u46 = 1.0f;
        if ((int)t12 < (int)0xB) {
            u46 = 0.0f;
        }
        nlObjPutSetFadeColor(1.0f, u46, 0.0f);
        *(float *)0xC2A7F80 = 32.0f;
        *(float *)0xC2A7F84 = 84.0f;
        if (t17 != 0) {
            *(unsigned int *)0xC2A7F7C = (*(int *)((0xC0D0C08 + (t17 << 2))));
            nlSprPut(0xC2A7F7C);
        }
        *(unsigned int *)0xC2A7F7C = (*(int *)((0xC0D0C08 + (t22 << 2))));
        *(float *)0xC2A7F80 = (74.0f);
        nlSprPut(0xC2A7F7C);
        *(unsigned int *)0xC2A7F7C = (*(int *)((0xC0D0C08 + (t23 << 2))));
        *(float *)0xC2A7F80 = (116.0f);
        nlSprPut(0xC2A7F7C);
    }
    if ((int)t12 < (int)0xB) {
        nlObjPutSetFadeColor(1.0f, 0.0f, 0.0f);
    }
    Put_Remain_Time_Frame();
    t73 = ResetFadeColor();
    if ((int)(*(int *)0xC2A8CAC) > (int)0x14) {
        if (((int)t12 < (int)0xB) && ((int)t12 > (int)0x6)) {
            t97 = 0xB;
            if ((*(int *)0xC2A8E98) == 0) {
                t82 = 0xB;
                if ((int)t12 < (int)0xB) {
                    t77 = 0x6;
                    if ((int)t12 > (int)0x6) {
                        t77 = (Sound_Request(0x505A9, 0x0));
                    }
                    t82 = t77;
                }
                t88 = t82;
                if (((int)t12 < (int)0x7) && ((int)t12 > (int)0x3)) {
                    t88 = (Sound_Request(0x505A9, 0x0));
                }
                t93 = t88;
                if (((int)t12 < (int)0x4) && ((int)t12 > 0)) {
                    t93 = (Sound_Request(0x505A9, 0x0));
                }
                t97 = t93;
            }
            *(unsigned int *)0xC2A8CAC = 0x0;
            t212 = t97;
        } else {
            if ((int)(*(int *)0xC2A8CAC) > (int)0xF) {
                if (((int)t12 < (int)0x7) && ((int)t12 > (int)0x3)) {
                    t126 = 0x7;
                    if ((*(int *)0xC2A8E98) == 0) {
                        t111 = 0x7;
                        if ((int)t12 < (int)0xB) {
                            t106 = 0x6;
                            if ((int)t12 > (int)0x6) {
                                t106 = (Sound_Request(0x505A9, 0x0));
                            }
                            t111 = t106;
                        }
                        t117 = t111;
                        if (((int)t12 < (int)0x7) && ((int)t12 > (int)0x3)) {
                            t117 = (Sound_Request(0x505A9, 0x0));
                        }
                        t122 = t117;
                        if (((int)t12 < (int)0x4) && ((int)t12 > 0)) {
                            t122 = (Sound_Request(0x505A9, 0x0));
                        }
                        t126 = t122;
                    }
                    *(unsigned int *)0xC2A8CAC = 0x0;
                    t166 = t126;
                } else {
                    t161 = 0x7;
                    if ((int)(*(int *)0xC2A8CAC) > (int)0xA) {
                        t156 = 0x4;
                        if (((int)t12 < (int)0x4) && ((int)t12 > 0)) {
                            t151 = 0x4;
                            if ((*(int *)0xC2A8E98) == 0) {
                                t139 = 0x4;
                                if ((int)t12 < (int)0xB) {
                                    t135 = 0x6;
                                    if ((int)t12 > (int)0x6) {
                                        t135 = (Sound_Request(0x505A9, 0x0));
                                    }
                                    t139 = t135;
                                }
                                t144 = t139;
                                if (((int)t12 < (int)0x7) && ((int)t12 > (int)0x3)) {
                                    t144 = (Sound_Request(0x505A9, 0x0));
                                }
                                t148 = t144;
                                if (((int)t12 < (int)0x4) && ((int)t12 > 0)) {
                                    t148 = (Sound_Request(0x505A9, 0x0));
                                }
                                t151 = t148;
                            }
                            *(unsigned int *)0xC2A8CAC = 0x0;
                            t156 = t151;
                        }
                        t161 = t156;
                    }
                    t166 = t161;
                }
                t206 = t166;
            } else {
                t201 = 0xB;
                if ((int)(*(int *)0xC2A8CAC) > (int)0xA) {
                    t196 = 0x4;
                    if (((int)t12 < (int)0x4) && ((int)t12 > 0)) {
                        t191 = 0x4;
                        if ((*(int *)0xC2A8E98) == 0) {
                            t179 = 0x4;
                            if ((int)t12 < (int)0xB) {
                                t175 = 0x6;
                                if ((int)t12 > (int)0x6) {
                                    t175 = (Sound_Request(0x505A9, 0x0));
                                }
                                t179 = t175;
                            }
                            t184 = t179;
                            if (((int)t12 < (int)0x7) && ((int)t12 > (int)0x3)) {
                                t184 = (Sound_Request(0x505A9, 0x0));
                            }
                            t188 = t184;
                            if (((int)t12 < (int)0x4) && ((int)t12 > 0)) {
                                t188 = (Sound_Request(0x505A9, 0x0));
                            }
                            t191 = t188;
                        }
                        *(unsigned int *)0xC2A8CAC = 0x0;
                        t196 = t191;
                    }
                    t201 = t196;
                }
                t206 = t201;
            }
            t212 = t206;
        }
        t327 = t212;
    } else {
        if ((int)(*(int *)0xC2A8CAC) > (int)0xF) {
            if (((int)t12 < (int)0x7) && ((int)t12 > (int)0x3)) {
                t241 = 0x7;
                if ((*(int *)0xC2A8E98) == 0) {
                    t226 = 0x7;
                    if ((int)t12 < (int)0xB) {
                        t221 = 0x6;
                        if ((int)t12 > (int)0x6) {
                            t221 = (Sound_Request(0x505A9, 0x0));
                        }
                        t226 = t221;
                    }
                    t232 = t226;
                    if (((int)t12 < (int)0x7) && ((int)t12 > (int)0x3)) {
                        t232 = (Sound_Request(0x505A9, 0x0));
                    }
                    t237 = t232;
                    if (((int)t12 < (int)0x4) && ((int)t12 > 0)) {
                        t237 = (Sound_Request(0x505A9, 0x0));
                    }
                    t241 = t237;
                }
                *(unsigned int *)0xC2A8CAC = 0x0;
                t281 = t241;
            } else {
                t276 = 0x7;
                if ((int)(*(int *)0xC2A8CAC) > (int)0xA) {
                    t271 = 0x4;
                    if (((int)t12 < (int)0x4) && ((int)t12 > 0)) {
                        t266 = 0x4;
                        if ((*(int *)0xC2A8E98) == 0) {
                            t254 = 0x4;
                            if ((int)t12 < (int)0xB) {
                                t250 = 0x6;
                                if ((int)t12 > (int)0x6) {
                                    t250 = (Sound_Request(0x505A9, 0x0));
                                }
                                t254 = t250;
                            }
                            t259 = t254;
                            if (((int)t12 < (int)0x7) && ((int)t12 > (int)0x3)) {
                                t259 = (Sound_Request(0x505A9, 0x0));
                            }
                            t263 = t259;
                            if (((int)t12 < (int)0x4) && ((int)t12 > 0)) {
                                t263 = (Sound_Request(0x505A9, 0x0));
                            }
                            t266 = t263;
                        }
                        *(unsigned int *)0xC2A8CAC = 0x0;
                        t271 = t266;
                    }
                    t276 = t271;
                }
                t281 = t276;
            }
            t321 = t281;
        } else {
            t316 = t73;
            if ((int)(*(int *)0xC2A8CAC) > (int)0xA) {
                t311 = 0x4;
                if (((int)t12 < (int)0x4) && ((int)t12 > 0)) {
                    t306 = 0x4;
                    if ((*(int *)0xC2A8E98) == 0) {
                        t294 = 0x4;
                        if ((int)t12 < (int)0xB) {
                            t290 = 0x6;
                            if ((int)t12 > (int)0x6) {
                                t290 = (Sound_Request(0x505A9, 0x0));
                            }
                            t294 = t290;
                        }
                        t299 = t294;
                        if (((int)t12 < (int)0x7) && ((int)t12 > (int)0x3)) {
                            t299 = (Sound_Request(0x505A9, 0x0));
                        }
                        t303 = t299;
                        if (((int)t12 < (int)0x4) && ((int)t12 > 0)) {
                            t303 = (Sound_Request(0x505A9, 0x0));
                        }
                        t306 = t303;
                    }
                    *(unsigned int *)0xC2A8CAC = 0x0;
                    t311 = t306;
                }
                t316 = t311;
            }
            t321 = t316;
        }
        t327 = t321;
    }
    *(unsigned int *)0xC2A8CAC = ((*(int *)0xC2A8CAC) + 0x1);
    return t327;
}
