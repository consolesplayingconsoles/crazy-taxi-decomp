/* Straight-line functions with calls and guards (batch gen_cd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Act_Init(void);
int bootDevRecv(int, int);
int bootDevSend(int, int);
int gdc_CourseLoadWait(void);
int gdc_CourseStartLoadReq(void);
int SetLight(int, int);
int InitLandmark(void);
int InitCollision(int);
int InitKyakuStopArea(void);
int cycleAdvCheck(void);
int nd_peopleInitialize(int);
int Init_nd_Sprite(void);
int nlSetBackColor(void);
int nlsndPackLoad(int, int);
int nlsndPackFree(void);
int gdFsInitSub(void);
int kmtex_TextureSize(int);
int gdFsGetGdDcf(void);
int GoiTool(int);
int InitColliObj(int);
int InitHelicopter(void);
int InitSetObject(void);
int Init_DCmini(void);
int Init_Fog(void);
int replayChangeControl(int);
int LightEffect(int);
int PutCourse_Init(int);
int ResetLight(void);
int SetStartCamera(void);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int entryCarPut(int);
int extRandomSeed(int);
int gdFsCreateDirhn(int, int);
int gdFsCreateHnG(int);
int gdc_FileLoad(int, int, int);
static float iaFscaC(int a)
{
    float s;
    float c;

    _builtin_fsca(a, &s, &c);
    return c;
}
static float iaFscaS(int a)
{
    float s;
    float c;

    _builtin_fsca(a, &s, &c);
    return s;
}
int initCamera(int);
int initPlayerADV(void);
int initPlayer(void);
int init_CarMain(void);
int init_GameSystem(void);
int init_KyakuMain(void);
int nlInitEvent(void);
int nlInitHeapMemory(int, int);
int trafficControl(int);
float nlFastSinCos(int a4, int a5, int a6);
int gdFsInitG(int a4, int a5, int a6, int a7, int a8);
int bootParsePacket(int a4);
int kmtex_CheckTextureFormat(int a4, int a5, int a6, int a7);
int gameState0(void);
int Chat_Getoff(int a4);

float nlFastSinCos(int a4, int a5, int a6)
{
    float u0;
    float u1;

    u0 = iaFscaS(a4);
    u1 = iaFscaC(a4);
    *(float *)((a5 + 0x0)) = u0;
    *(float *)((a6 + 0x0)) = u1;
    return u0;
}

int gdFsInitG(int a4, int a5, int a6, int a7, int a8)
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
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
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

    t0 = *(int *)0xC177A8C;
    if (t0 != 0) {
        t1 = *(short *)((t0 + 0x38));
        if (t1 == 1) {
            return 0x0;
        }
        if ((a5 & 31) != 0) {
            return 0xFFFFFFF2;
        }
        t2 = gdFsGetGdDcf();
        t3 = *(int *)((t2 + 0x0));
        t4 = ((int (*)(void))(t3))();
        t5 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        *(unsigned int *)0xC177A8C = a5;
        *(unsigned short *)((a5 + 0x38)) = 0x0;
        t6 = *(int *)0xC177A8C;
        *(unsigned int *)((t6 + 0x20)) = 0x0;
        t7 = *(int *)0xC177A8C;
        *(unsigned int *)((t7 + 0x0)) = a4;
        t8 = *(int *)0xC177A8C;
        t9 = gdFsCreateDirhn(a7, a6);
        *(unsigned int *)(((t8 + 0x10) + 0x0)) = t9;
        t10 = *(int *)0xC177A8C;
        *(unsigned int *)((t10 + 0xC)) = t2;
        t11 = *(int *)0xC177A8C;
        *(unsigned int *)((t11 + 0x1C)) = 0x0;
        t12 = *(int *)0xC177A8C;
        *(unsigned short *)((t12 + 0x3A)) = 0x0;
        t13 = *(int *)0xC177A8C;
        *(unsigned int *)((t13 + 0x24)) = 0x0;
        t14 = *(int *)0xC177A8C;
        *(unsigned int *)((t14 + 0x34)) = 0x0;
        t15 = *(int *)0xC177A8C;
        *(unsigned int *)((t15 + 0x3C)) = a8;
        t16 = *(int *)0xC177A8C;
        t17 = 0x3A;
        t18 = (t16 + 0x1080);
        t19 = 0x0;
        for (;;) {
            t20 = *(int *)0xC177A8C;
            t21 = *(int *)((t20 + 0x0));
            if ((int)t19 >= (int)(t21 + 0x1)) break;
            t17 = 0x4C;
            *(unsigned short *)((t18 + t17)) = 0x0;
            t19 = (t19 + 0x1);
            t22 = *(int *)0xC177A8C;
            *(unsigned int *)((t18 + 0x0)) = t22;
            t18 = (t18 + 0x54);
        }
        t23 = *(int *)0xC177A8C;
        *(unsigned int *)((t23 + 0x14)) = (0x1080 + t23);
        t24 = *(int *)0xC177A8C;
        *(unsigned int *)((t24 + 0x18)) = ((0x1080 + t24) + 0x54);
        t25 = *(int *)0xC177A8C;
        t26 = *(int *)((t25 + 0x14));
        gdFsCreateHnG(t26);
        _builtin_set_imask(((unsigned int)(((t5 & 0xF) << 2) << 2) >> 4));
        return gdFsInitSub();
    }
    if ((a5 & 31) != 0) {
        return 0xFFFFFFF2;
    }
    t28 = gdFsGetGdDcf();
    t29 = *(int *)((t28 + 0x0));
    t30 = ((int (*)(void))(t29))();
    t31 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)0xC177A8C = a5;
    *(unsigned short *)((a5 + 0x38)) = 0x0;
    t32 = *(int *)0xC177A8C;
    *(unsigned int *)((t32 + 0x20)) = 0x0;
    t33 = *(int *)0xC177A8C;
    *(unsigned int *)((t33 + 0x0)) = a4;
    t34 = *(int *)0xC177A8C;
    t35 = gdFsCreateDirhn(a7, a6);
    *(unsigned int *)(((t34 + 0x10) + 0x0)) = t35;
    t36 = *(int *)0xC177A8C;
    *(unsigned int *)((t36 + 0xC)) = t28;
    t37 = *(int *)0xC177A8C;
    *(unsigned int *)((t37 + 0x1C)) = 0x0;
    t38 = *(int *)0xC177A8C;
    *(unsigned short *)((t38 + 0x3A)) = 0x0;
    t39 = *(int *)0xC177A8C;
    *(unsigned int *)((t39 + 0x24)) = 0x0;
    t40 = *(int *)0xC177A8C;
    *(unsigned int *)((t40 + 0x34)) = 0x0;
    t41 = *(int *)0xC177A8C;
    *(unsigned int *)((t41 + 0x3C)) = a8;
    t42 = *(int *)0xC177A8C;
    t43 = 0x3A;
    t44 = (t42 + 0x1080);
    t45 = 0x0;
    for (;;) {
        t46 = *(int *)0xC177A8C;
        t47 = *(int *)((t46 + 0x0));
        if ((int)t45 >= (int)(t47 + 0x1)) break;
        t43 = 0x4C;
        *(unsigned short *)((t44 + t43)) = 0x0;
        t45 = (t45 + 0x1);
        t48 = *(int *)0xC177A8C;
        *(unsigned int *)((t44 + 0x0)) = t48;
        t44 = (t44 + 0x54);
    }
    t49 = *(int *)0xC177A8C;
    *(unsigned int *)((t49 + 0x14)) = (0x1080 + t49);
    t50 = *(int *)0xC177A8C;
    *(unsigned int *)((t50 + 0x18)) = ((0x1080 + t50) + 0x54);
    t51 = *(int *)0xC177A8C;
    t52 = *(int *)((t51 + 0x14));
    gdFsCreateHnG(t52);
    _builtin_set_imask(((unsigned int)(((t31 & 0xF) << 2) << 2) >> 4));
    return gdFsInitSub();
}

int bootParsePacket(int a4)
{
    int t0;
    int t47;
    int t30;
    int t1;
    int t2;
    int t3;
    int t14;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t12;
    int t11;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t24;
    int t23;
    int t32;
    int t35;
    int t33;
    int t34;
    int t39;
    int t40;
    int t41;
    int t43;
    int t42;
    int t45;
    int t37;
    int t28;
    int t26;
    int stk[18] = {0};

    t0 = *(signed char *)((a4 + 0x0));
    t47 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 3) {
            if ((unsigned char)t0 != 18) {
                t30 = (unsigned char)t0;
                if ((unsigned char)t0 != 27) {
                    if ((unsigned char)t0 == 37) {
                        t1 = 0x20;
                        t2 = (((int)stk + 4) + 0x4);
                        do {
                            t1 = (t1 - 0x1);
                            *(unsigned char *)((t2 + 0x0)) = 0x0;
                            t2 = (t2 + 0x1);
                        } while (t1 != 0);
                        t3 = bootDevSend((((int)stk + 4) + 0x4), 0x8);
                        t28 = t3;
                    } else {
                        if ((unsigned char)t0 != 40) {
                            t14 = (unsigned char)t0;
                            if ((unsigned char)t0 == 42) {
                                t4 = *(signed char *)(((a4 + 0x2) + 0x0));
                                t5 = *(signed char *)(((a4 + 0x3) + 0x0));
                                t6 = *(signed char *)(((a4 + 0x4) + 0x0));
                                t7 = *(signed char *)(((a4 + 0x5) + 0x0));
                                *(unsigned int *)(((int)stk + 4)) = ((((((unsigned char)t4 << 16) << 8) + ((unsigned char)t5 << 16)) + ((unsigned char)t6 << 8)) + (unsigned char)t7);
                                t8 = *(signed char *)(((a4 + 0x6) + 0x0));
                                t9 = *(signed char *)(((a4 + 0x7) + 0x0));
                                t10 = *(signed char *)(((a4 + 0x8) + 0x0));
                                t12 = (unsigned char)t0;
                                if ((unsigned int)((((unsigned char)t8 << 16) + ((unsigned char)t9 << 8)) + (unsigned char)t10) > (unsigned int)0x0) {
                                    t11 = bootDevRecv(((((((unsigned char)t4 << 16) << 8) + ((unsigned char)t5 << 16)) + ((unsigned char)t6 << 8)) + (unsigned char)t7), ((((unsigned char)t8 << 16) + ((unsigned char)t9 << 8)) + (unsigned char)t10));
                                    t12 = t11;
                                }
                                t14 = t12;
                            }
                            t26 = t14;
                        } else {
                            t16 = *(signed char *)(((a4 + 0x2) + 0x0));
                            t17 = *(signed char *)(((a4 + 0x3) + 0x0));
                            t18 = *(signed char *)(((a4 + 0x4) + 0x0));
                            t19 = *(signed char *)(((a4 + 0x5) + 0x0));
                            *(unsigned int *)(((int)stk + 4)) = ((((((unsigned char)t16 << 16) << 8) + ((unsigned char)t17 << 16)) + ((unsigned char)t18 << 8)) + (unsigned char)t19);
                            t20 = *(signed char *)(((a4 + 0x6) + 0x0));
                            t21 = *(signed char *)(((a4 + 0x7) + 0x0));
                            t22 = *(signed char *)(((a4 + 0x8) + 0x0));
                            t24 = (unsigned char)t0;
                            if ((unsigned int)((((unsigned char)t20 << 16) + ((unsigned char)t21 << 8)) + (unsigned char)t22) > (unsigned int)0x0) {
                                t23 = bootDevSend(((((((unsigned char)t16 << 16) << 8) + ((unsigned char)t17 << 16)) + ((unsigned char)t18 << 8)) + (unsigned char)t19), ((((unsigned char)t20 << 16) + ((unsigned char)t21 << 8)) + (unsigned char)t22));
                                t24 = t23;
                            }
                            t26 = t24;
                        }
                        t28 = t26;
                    }
                    t30 = t28;
                }
                t37 = t30;
            } else {
                t32 = *(signed char *)(((a4 + 0x4) + 0x0));
                t35 = (unsigned char)t0;
                if ((unsigned int)(unsigned char)t32 > (unsigned int)0x0) {
                    t33 = *(int *)0xAC00F704;
                    t34 = bootDevSend(t33, (unsigned char)t32);
                    t35 = t34;
                }
                t37 = t35;
            }
            t45 = t37;
        } else {
            t39 = 0x20;
            t40 = (((int)stk + 4) + 0x4);
            do {
                t39 = (t39 - 0x1);
                *(unsigned char *)((t40 + 0x0)) = 0x0;
                t40 = (t40 + 0x1);
            } while (t39 != 0);
            t41 = *(signed char *)(((a4 + 0x4) + 0x0));
            t43 = (unsigned char)t0;
            if ((unsigned int)(unsigned char)t41 > (unsigned int)0x0) {
                t42 = bootDevSend((((int)stk + 4) + 0x4), (unsigned char)t41);
                t43 = t42;
            }
            t45 = t43;
        }
        t47 = t45;
    }
    return t47;
}

int kmtex_CheckTextureFormat(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t23;
    int t24;
    int t33;
    int t34;
    int t53;
    int t51;
    int t49;
    int t47;
    int t45;
    int t43;
    int t41;
    int t39;
    int t68;
    int t66;
    int t64;
    int t62;
    int t60;
    int t58;
    int t56;
    int t54;
    int t80;
    int t77;
    int t74;
    int t72;
    int t70;
    int t69;
    int t81;
    int t83;
    int t86;
    int t89;
    int t91;
    int t94;
    int t97;
    int t99;
    int t102;
    int t105;
    int t109;
    int t113;
    int t116;
    int t119;
    int t122;
    int t126;
    int t128;
    int t131;
    int t134;
    int t137;
    int t37;
    int t31;
    int t27;
    int t20;
    int t16;
    int t13;
    int t10;
    int t7;

    if ((0xFF00 & a7) != 0x1000) {
        if ((0xFF00 & a7) == 0x1100) {
            *(unsigned int *)((a4 + 0x0)) = 0x3;
        } else {
            *(unsigned int *)((a4 + 0x0)) = 0x2;
        }
    } else {
        *(unsigned int *)((a4 + 0x0)) = 0x3;
    }
    if ((0xFF00 & a7) != 0x500) {
        if ((0xFF00 & a7) == 0x600) {
            t0 = *(int *)0xC178268;
            t1 = *(int *)((0xA0 + t0));
            if (t1 == 3) {
                *(unsigned int *)((a4 + 0x4)) = 0x3;
            } else {
                *(unsigned int *)((a4 + 0x4)) = 0x1;
            }
            *(unsigned int *)((a4 + 0x8)) = 0x28000000;
            t31 = 0x0;
        } else {
            if ((0xFF00 & a7) != 0x700) {
                if ((0xFF00 & a7) == 0x800) {
                    t2 = *(int *)0xC178268;
                    t3 = *(int *)((0xA0 + t2));
                    if (t3 == 3) {
                        *(unsigned int *)((a4 + 0x4)) = 0x3;
                    } else {
                        *(unsigned int *)((a4 + 0x4)) = 0x1;
                    }
                    *(unsigned int *)((a4 + 0x8)) = 0x30000000;
                    t20 = 0x0;
                } else {
                    *(unsigned int *)((a4 + 0x4)) = 0x1;
                    if ((unsigned char)a7 != 0) {
                        if ((unsigned char)a7 != 1) {
                            if ((unsigned char)a7 != 2) {
                                if ((unsigned char)a7 != 3) {
                                    t5 = 0x4;
                                    if ((unsigned char)a7 == 4) {
                                        *(unsigned int *)((a4 + 0x8)) = 0x20000000;
                                        t5 = 0x0;
                                    }
                                    t7 = t5;
                                } else {
                                    *(unsigned int *)((a4 + 0x8)) = 0x18000000;
                                    t7 = 0x0;
                                }
                                t10 = t7;
                            } else {
                                *(unsigned int *)((a4 + 0x8)) = 0x10000000;
                                t10 = 0x0;
                            }
                            t13 = t10;
                        } else {
                            *(unsigned int *)((a4 + 0x8)) = 0x8000000;
                            t13 = 0x0;
                        }
                        t16 = t13;
                    } else {
                        *(unsigned int *)((a4 + 0x8)) = 0x0;
                        t16 = 0x0;
                    }
                    t20 = t16;
                }
                t27 = t20;
            } else {
                t23 = *(int *)0xC178268;
                t24 = *(int *)((0xA0 + t23));
                if (t24 == 3) {
                    *(unsigned int *)((a4 + 0x4)) = 0x3;
                } else {
                    *(unsigned int *)((a4 + 0x4)) = 0x1;
                }
                *(unsigned int *)((a4 + 0x8)) = 0x30000000;
                t27 = 0x0;
            }
            t31 = t27;
        }
        t37 = t31;
    } else {
        t33 = *(int *)0xC178268;
        t34 = *(int *)((0xA0 + t33));
        if (t34 == 3) {
            *(unsigned int *)((a4 + 0x4)) = 0x3;
        } else {
            *(unsigned int *)((a4 + 0x4)) = 0x1;
        }
        *(unsigned int *)((a4 + 0x8)) = 0x28000000;
        t37 = 0x0;
    }
    *(unsigned int *)((a4 + 0xC)) = a5;
    *(unsigned int *)((a4 + 0x10)) = a6;
    t53 = t37;
    if (a5 != 8) {
        t51 = t37;
        if (a5 != 16) {
            t49 = t37;
            if (a5 != 32) {
                t47 = t37;
                if (a5 != 64) {
                    t45 = t37;
                    if (a5 != 0x80) {
                        t43 = t37;
                        if (a5 != 0x100) {
                            t41 = t37;
                            if (a5 != 0x200) {
                                t39 = t37;
                                if (a5 != 0x400) {
                                    t39 = 0x4;
                                }
                                t41 = t39;
                            }
                            t43 = t41;
                        }
                        t45 = t43;
                    }
                    t47 = t45;
                }
                t49 = t47;
            }
            t51 = t49;
        }
        t53 = t51;
    }
    t68 = t53;
    if (a6 != 8) {
        t66 = t53;
        if (a6 != 16) {
            t64 = t53;
            if (a6 != 32) {
                t62 = t53;
                if (a6 != 64) {
                    t60 = t53;
                    if (a6 != 0x80) {
                        t58 = t53;
                        if (a6 != 0x100) {
                            t56 = t53;
                            if (a6 != 0x200) {
                                t54 = t53;
                                if (a6 != 0x400) {
                                    t54 = 0x4;
                                }
                                t56 = t54;
                            }
                            t58 = t56;
                        }
                        t60 = t58;
                    }
                    t62 = t60;
                }
                t64 = t62;
            }
            t66 = t64;
        }
        t68 = t66;
    }
    t80 = t68;
    if ((0xFF00 & a7) != 0x900) {
        t77 = t68;
        if ((0xFF00 & a7) != 0xB00) {
            t74 = t68;
            if ((0xFF00 & a7) != 0xD00) {
                t72 = t68;
                if ((0xFF00 & a7) != 0x500) {
                    t70 = t68;
                    if ((0xFF00 & a7) != 0x700) {
                        t69 = t68;
                        if (a5 != a6) {
                            t69 = 0x4;
                        }
                        t70 = t69;
                    }
                    t72 = t70;
                }
                t74 = t72;
            }
            t77 = t74;
        }
        t80 = t77;
    }
    *(unsigned int *)((a4 + 0x18)) = 0x0;
    if ((0xFF00 & a7) != 0xF00) {
        if ((0xFF00 & a7) != 0x200) {
            if ((0xFF00 & a7) != 0x400) {
                if ((0xFF00 & a7) != 0x1100) {
                    if ((0xFF00 & a7) != 0x600) {
                        if ((0xFF00 & a7) == 0x800) {
                            t81 = *(int *)((a4 + 0x18));
                            *(unsigned int *)((a4 + 0x18)) = (t81 | 0x1);
                        }
                    } else {
                        t83 = *(int *)((a4 + 0x18));
                        *(unsigned int *)((a4 + 0x18)) = (t83 | 0x1);
                    }
                } else {
                    t86 = *(int *)((a4 + 0x18));
                    *(unsigned int *)((a4 + 0x18)) = (t86 | 0x1);
                }
            } else {
                t89 = *(int *)((a4 + 0x18));
                *(unsigned int *)((a4 + 0x18)) = (t89 | 0x1);
            }
        } else {
            t91 = *(int *)((a4 + 0x18));
            *(unsigned int *)((a4 + 0x18)) = (t91 | 0x1);
        }
    } else {
        t94 = *(int *)((a4 + 0x18));
        *(unsigned int *)((a4 + 0x18)) = (t94 | 0x1);
    }
    if ((0xFF00 & a7) != 0xE00) {
        if ((0xFF00 & a7) != 0xF00) {
            if ((0xFF00 & a7) != 0x100) {
                if ((0xFF00 & a7) != 0x200) {
                    if ((0xFF00 & a7) == 0xD00) {
                        t97 = *(int *)((a4 + 0x18));
                        *(unsigned int *)((a4 + 0x18)) = (t97 | 0x4);
                    }
                } else {
                    t99 = *(int *)((a4 + 0x18));
                    *(unsigned int *)((a4 + 0x18)) = (t99 | 0x4);
                }
            } else {
                t102 = *(int *)((a4 + 0x18));
                *(unsigned int *)((a4 + 0x18)) = (t102 | 0x4);
            }
        } else {
            t105 = *(int *)((a4 + 0x18));
            *(unsigned int *)((a4 + 0x18)) = (t105 | 0x4);
        }
    } else {
        t109 = *(int *)((a4 + 0x18));
        *(unsigned int *)((a4 + 0x18)) = (t109 | 0x4);
    }
    if ((0xFF00 & a7) != 0x300) {
        if ((0xFF00 & a7) != 0x400) {
            if ((0xFF00 & a7) != 0x1000) {
                if ((0xFF00 & a7) == 0x1100) {
                    t113 = *(int *)((a4 + 0x18));
                    *(unsigned int *)((a4 + 0x18)) = ((t113 | 0x8) | 0x4);
                }
            } else {
                t116 = *(int *)((a4 + 0x18));
                *(unsigned int *)((a4 + 0x18)) = ((t116 | 0x8) | 0x4);
            }
        } else {
            t119 = *(int *)((a4 + 0x18));
            *(unsigned int *)((a4 + 0x18)) = ((t119 | 0x8) | 0x4);
        }
    } else {
        t122 = *(int *)((a4 + 0x18));
        *(unsigned int *)((a4 + 0x18)) = ((t122 | 0x8) | 0x4);
    }
    if ((0xFF00 & a7) == 0xB00) {
        t126 = *(int *)((a4 + 0x18));
        *(unsigned int *)((a4 + 0x18)) = (t126 | 0x10);
    }
    if ((0xFF00 & a7) != 0x500) {
        if ((0xFF00 & a7) != 0x600) {
            if ((0xFF00 & a7) != 0x700) {
                if ((0xFF00 & a7) == 0x800) {
                    t128 = *(int *)((a4 + 0x18));
                    *(unsigned int *)((a4 + 0x18)) = ((t128 | 0x20) | 0x4);
                }
            } else {
                t131 = *(int *)((a4 + 0x18));
                *(unsigned int *)((a4 + 0x18)) = ((t131 | 0x20) | 0x4);
            }
        } else {
            t134 = *(int *)((a4 + 0x18));
            *(unsigned int *)((a4 + 0x18)) = ((t134 | 0x20) | 0x4);
        }
    } else {
        t137 = *(int *)((a4 + 0x18));
        *(unsigned int *)((a4 + 0x18)) = ((t137 | 0x20) | 0x4);
    }
    kmtex_TextureSize(a4);
    return t80;
}


