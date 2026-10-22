/* Straight-line functions with calls and guards (batch gen_ed): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02d918(void);
int FUN_0c031408(int);
int FUN_0c040cea(int);
int FUN_0c056e80(void);
int ResetFadeColor(void);
int Sound_Request(int, int);
int menuPutSprites(int, int, int, int);
int nlObjPutSetFadeColor(float, float, float);
int nlSprPut(int);
int pfColor(int, int, int, int);
float pfLength(int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFont(int);
int pfSetZ(float);
int pfSize(float, float);
int Put_TotalDrum(void);
int putLevelCTFontAssist(int a4, int a5, int a6, int a7, float f4);

int Put_TotalDrum(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t22;
    int t18;
    int t30;
    int t35;
    int t31;
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
    int t89;
    int t90;
    int t91;
    int t92;
    int t93;
    int t94;
    int t95;
    int t96;
    int t97;
    int t138;
    int t139;
    int t140;
    int t144;
    int t145;
    int t142;
    int t148;
    int t149;
    int t150;
    int t151;
    float u160;
    float u161;
    float u162;
    float u155;
    float u156;
    float u157;
    int t169;
    int t170;
    int t171;
    int t172;
    int t183;
    float u192;
    float u193;
    float u194;
    float u187;
    float u188;
    float u189;
    int t206;
    float u213;
    float u214;
    float u215;
    float u216;
    float u219;
    float u221;
    float u222;
    int t223;
    int t224;
    float u225;
    int t226;
    float u237;
    int t238;
    float u239;
    int t240;
    int t248;
    float u249;
    int t250;
    int t261;
    float u262;
    int t263;
    int t271;
    float u272;
    int t273;
    int t284;
    float u285;
    float u286;
    float u288;
    int t293;
    float u294;
    int t295;
    int t296;
    int t133;
    int t39;
    int t26;
    int t128;
    int t84;
    float u245;
    float u268;

    t0 = *(int *)0xC2A8E98;
    if (t0 == 0) {
        t1 = *(int *)0xC2A8EB0;
        if ((int)t1 <= (int)0x3) {
            t2 = *(int *)0xC2A8C78;
            t3 = *(int *)((t2 + 0x0));
            *(unsigned int *)0xC2A8E30 = t3;
        }
    }
    t13 = *(int *)0xC2A8E30;
    if ((int)t13 <= 0) {
        t14 = *(int *)0xC2A75E0;
        if ((t14 & 0x80) == 0x80) {
            t15 = *(int *)0xC2A8EB0;
            if (t15 == 2) {
                t16 = *(int *)0xC2A8F70;
                if (t16 != 1) {
                    t17 = *(int *)0xC2A8EB0;
                    t22 = t17;
                    if (t17 != 3) {
                    } else {
                        t18 = *(int *)0xC2A8E88;
                        if (t18 != 7) {
                        } else {
                            *(unsigned int *)0xC2A8EB0 = 0x4;
                            *(unsigned int *)0xC2A8F64 = 0x0;
                            *(unsigned int *)0xC2A8F60 = 0x0;
                        }
                        t22 = t18;
                    }
                    t26 = t22;
                } else {
                    *(unsigned int *)0xC2A8EB0 = 0x6;
                    t26 = t16;
                }
                t39 = t26;
            } else {
                t30 = *(int *)0xC2A8EB0;
                t35 = t30;
                if (t30 != 3) {
                } else {
                    t31 = *(int *)0xC2A8E88;
                    if (t31 != 7) {
                    } else {
                        *(unsigned int *)0xC2A8EB0 = 0x4;
                        *(unsigned int *)0xC2A8F64 = 0x0;
                        *(unsigned int *)0xC2A8F60 = 0x0;
                    }
                    t35 = t31;
                }
                t39 = t35;
            }
            t133 = t39;
        } else {
            t43 = *(int *)0xC2A8EB0;
            if (t43 == 2) {
                t44 = *(int *)0xC2A8F70;
                if (t44 == 1) {
                    *(unsigned int *)0xC2A8EB0 = 0x6;
                    t84 = t44;
                } else {
                    t45 = *(int *)0xC2A8EB0;
                    if (t45 != 3) {
                    } else {
                        t46 = *(int *)0xC2A8EDC;
                        if (t46 != 0) {
                        } else {
                            t47 = *(int *)0xC2A8EE0;
                            if (t47 != 0) {
                            } else {
                                t48 = *(int *)0xC2A8EE4;
                                if (t48 != 0) {
                                } else {
                                    t49 = *(int *)0xC2A8EE8;
                                    if (t49 != 0) {
                                    } else {
                                        t50 = *(int *)0xC2A8EEC;
                                        if (t50 != 0) {
                                        } else {
                                            t51 = *(int *)0xC2A8EF0;
                                            if (t51 != 0) {
                                            } else {
                                                t52 = *(int *)0xC2A8EF4;
                                                if (t52 != 0) {
                                                } else {
                                                    t53 = *(int *)0xC2A8EF8;
                                                    if (t53 != 0) {
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
                    t84 = t45;
                }
                t128 = t84;
            } else {
                t89 = *(int *)0xC2A8EB0;
                if (t89 != 3) {
                } else {
                    t90 = *(int *)0xC2A8EDC;
                    if (t90 != 0) {
                    } else {
                        t91 = *(int *)0xC2A8EE0;
                        if (t91 != 0) {
                        } else {
                            t92 = *(int *)0xC2A8EE4;
                            if (t92 != 0) {
                            } else {
                                t93 = *(int *)0xC2A8EE8;
                                if (t93 != 0) {
                                } else {
                                    t94 = *(int *)0xC2A8EEC;
                                    if (t94 != 0) {
                                    } else {
                                        t95 = *(int *)0xC2A8EF0;
                                        if (t95 != 0) {
                                        } else {
                                            t96 = *(int *)0xC2A8EF4;
                                            if (t96 != 0) {
                                            } else {
                                                t97 = *(int *)0xC2A8EF8;
                                                if (t97 != 0) {
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
                t128 = t89;
            }
            t133 = t128;
        }
        return t133;
    }
    t138 = *(int *)0xC2A8E30;
    t139 = (int)((int)t138 / (int)0x3C);
    t140 = t139;
    if ((int)t139 > (int)0x3E7) {
        t140 = 0x3E7;
    }
    t144 = 0x0;
    t145 = t140;
    if ((int)t139 >= (int)0x64) {
        t142 = (int)((int)t140 / (int)0x64);
        t144 = t142;
        t145 = (t140 - (t142 * 0x64));
    }
    t148 = (int)((int)t145 / (int)0xA);
    t149 = (int)((int)t145 % (int)0xA);
    t150 = *(int *)0xC2A8E98;
    if (t150 == 0) {
        t151 = FUN_0c02d918();
        if (t151 == 2) {
            nlObjPutSetFadeColor(0.0f, 1.0f, 0.0f);
        } else {
            if (t151 == 1) {
                nlObjPutSetFadeColor(1.0f, 0.901960731f, 0.0f);
            } else {
                u160 = 0.988235235f;
                u161 = 0.0f;
                u162 = 0.0f;
                if (t151 != 0) {
                    u155 = 0.988235235f;
                    u156 = 0.0f;
                    u157 = 0.0f;
                    if (t151 == -1) {
                        u155 = 0.686274469f;
                        u156 = 0.0980392098f;
                        u157 = 0.56078428f;
                    }
                    u160 = u155;
                    u161 = u156;
                    u162 = u157;
                }
                nlObjPutSetFadeColor(u160, u161, u162);
            }
        }
        t169 = *(int *)0xC2A8E30;
        t170 = *(int *)0xC1EE7D4;
        if ((int)t169 <= (int)t170) {
            t171 = *(int *)0xC2A8E30;
            t172 = (int)((int)t171 % (int)0x3C);
            if (t172 == 0) {
                Sound_Request(0x4A9, 0x0);
            }
        }
    } else {
        t183 = *(int *)0xC2A760C;
        if (t183 == 2) {
            nlObjPutSetFadeColor(0.0f, 1.0f, 0.0f);
        } else {
            if (t183 == 1) {
                nlObjPutSetFadeColor(1.0f, 0.901960731f, 0.0f);
            } else {
                u192 = 0.988235235f;
                u193 = 0.0f;
                u194 = 0.0f;
                if (t183 != 0) {
                    u187 = 0.988235235f;
                    u188 = 0.0f;
                    u189 = 0.0f;
                    if (t183 == -1) {
                        u187 = 0.686274469f;
                        u188 = 0.0980392098f;
                        u189 = 0.56078428f;
                    }
                    u192 = u187;
                    u193 = u188;
                    u194 = u189;
                }
                nlObjPutSetFadeColor(u192, u193, u194);
            }
        }
    }
    t206 = *(int *)0xC2A8EB0;
    if (t206 == 3) {
        *(float *)0xC2A8098 = 0.0f;
        FUN_0c056e80();
    }
    u213 = *(float *)0xC2A7604;
    *(unsigned int *)0xC2A8DF4 = (int)u213;
    u214 = *(float *)0xC2A7608;
    *(unsigned int *)0xC2A8DF8 = (int)u214;
    u215 = *(float *)0xC056F04;
    u216 = *(float *)0xC2A8C64;
    if (u216 > u215) {
        *(float *)0xC2A8C64 = u215;
    }
    u219 = *(float *)0xC2A8C68;
    if (u219 > u215) {
        *(float *)0xC2A8C68 = u215;
    }
    u221 = *(float *)0xC2A8C64;
    *(float *)0xC2A807C = u221;
    u222 = *(float *)0xC2A8C68;
    *(float *)0xC2A8080 = u222;
    *(float *)0xC2A8098 = 1.0f;
    *(unsigned int *)0xC2A8094 = 0x0;
    if (t144 != 0) {
        t223 = *(int *)0xC2A8DF4;
        *(float *)0xC2A8070 = (float)t223;
        t224 = *(int *)0xC2A8DF8;
        *(float *)0xC2A8074 = (float)t224;
        u225 = *(float *)0xC056F10;
        *(float *)0xC2A8078 = u225;
        t226 = *(int *)(((t144 << 2) + 0xC0D0C08));
        *(unsigned int *)0xC2A806C = t226;
        nlSprPut(0xC2A806C);
    }
    u237 = *(float *)0xC056F1C;
    if (t144 == 0) {
        if (t148 != 0) {
            if (t144 != 0) {
                t238 = *(int *)0xC2A8DF4;
                u239 = *(float *)0xC2A8C64;
                u245 = ((float)t238 + u237 * u239);
            } else {
                t240 = *(int *)0xC2A8DF4;
                u245 = (float)t240;
            }
            *(float *)0xC2A8070 = u245;
            t248 = *(int *)0xC2A8DF8;
            *(float *)0xC2A8074 = (float)t248;
            u249 = *(float *)0xC056F20;
            *(float *)0xC2A8078 = u249;
            t250 = *(int *)(((t148 << 2) + 0xC0D0C08));
            *(unsigned int *)0xC2A806C = t250;
            nlSprPut(0xC2A806C);
        }
    } else {
        if (t144 != 0) {
            t261 = *(int *)0xC2A8DF4;
            u262 = *(float *)0xC2A8C64;
            u268 = ((float)t261 + u237 * u262);
        } else {
            t263 = *(int *)0xC2A8DF4;
            u268 = (float)t263;
        }
        *(float *)0xC2A8070 = u268;
        t271 = *(int *)0xC2A8DF8;
        *(float *)0xC2A8074 = (float)t271;
        u272 = *(float *)0xC056F20;
        *(float *)0xC2A8078 = u272;
        t273 = *(int *)(((t148 << 2) + 0xC0D0C08));
        *(unsigned int *)0xC2A806C = t273;
        nlSprPut(0xC2A806C);
    }
    t284 = *(int *)0xC2A8DF4;
    u285 = *(float *)0xC2A8C64;
    if (t144 != 0) {
        u286 = *(float *)0xC056F24;
        *(float *)0xC2A8070 = ((float)t284 + u286 * u285);
    } else {
        u288 = (float)t284;
        if (t148 != 0) {
            u288 = ((float)t284 + u237 * u285);
        }
        *(float *)0xC2A8070 = u288;
    }
    t293 = *(int *)0xC2A8DF8;
    *(float *)0xC2A8074 = (float)t293;
    u294 = *(float *)0xC056F28;
    *(float *)0xC2A8078 = u294;
    t295 = *(int *)(((t149 << 2) + 0xC0D0C08));
    *(unsigned int *)0xC2A806C = t295;
    t296 = *(int *)0xC2A8E30;
    if ((int)t296 > 0) {
        nlSprPut(0xC2A806C);
    }
    *(float *)0xC2A8098 = 1.0f;
    return ResetFadeColor();
}

