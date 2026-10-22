/* Straight-line functions with calls and guards (batch gen_cd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Act_Init(void);
int FUN_0c0111e8(int, int);
int FUN_0c0112c6(int, int);
int gdc_CourseLoadWait(void);
int gdc_CourseStartLoadReq(void);
int SetLight(int, int);
int FUN_0c031480(void);
int FUN_0c031934(int);
int FUN_0c0357b0(void);
int cycleAdvCheck(void);
int nd_peopleInitialize(int);
int Init_nd_Sprite(void);
int FUN_0c074680(void);
int nlsndPackLoad(int, int);
int FUN_0c07f0b0(void);
int FUN_0c14d324(void);
int FUN_0c15c746(int);
int FUN_0c15f978(void);
int GoiTool(int);
int InitColliObj(int);
int InitHelicopter(void);
int InitSetObject(void);
int Init_DCmini(void);
int Init_Fog(void);
int Init_Result(int);
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
int initPlayer(void);
int initPlayerADV(void);
int init_CarMain(void);
int init_GameSystem(void);
int init_KyakuMain(void);
int nlInitEvent(void);
int nlInitHeapMemory(int, int);
int trafficControl(int);
float nlFastSinCos(int a4, int a5, int a6);
int gdFsInitG(int a4, int a5, int a6, int a7, int a8);
int FUN_0c0113b4(int a4);
int FUN_0c15c3c8(int a4, int a5, int a6, int a7);
int gameState0(void);
int FUN_0c060f38(int a4);

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
        t2 = FUN_0c15f978();
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
        return FUN_0c14d324();
    }
    if ((a5 & 31) != 0) {
        return 0xFFFFFFF2;
    }
    t28 = FUN_0c15f978();
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
    return FUN_0c14d324();
}

int FUN_0c0113b4(int a4)
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
                        t3 = FUN_0c0112c6((((int)stk + 4) + 0x4), 0x8);
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
                                    t11 = FUN_0c0111e8(((((((unsigned char)t4 << 16) << 8) + ((unsigned char)t5 << 16)) + ((unsigned char)t6 << 8)) + (unsigned char)t7), ((((unsigned char)t8 << 16) + ((unsigned char)t9 << 8)) + (unsigned char)t10));
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
                                t23 = FUN_0c0112c6(((((((unsigned char)t16 << 16) << 8) + ((unsigned char)t17 << 16)) + ((unsigned char)t18 << 8)) + (unsigned char)t19), ((((unsigned char)t20 << 16) + ((unsigned char)t21 << 8)) + (unsigned char)t22));
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
                    t34 = FUN_0c0112c6(t33, (unsigned char)t32);
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
                t42 = FUN_0c0112c6((((int)stk + 4) + 0x4), (unsigned char)t41);
                t43 = t42;
            }
            t45 = t43;
        }
        t47 = t45;
    }
    return t47;
}

int FUN_0c15c3c8(int a4, int a5, int a6, int a7)
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
    FUN_0c15c746(a4);
    return t80;
}

int gameState0(void)
{
    int t1;
    int t5;
    int t6;
    int t17;
    int t23;
    int t25;
    int t27;
    int t30;
    int t31;
    int t33;
    int t37;
    int t42;
    int t47;
    int t51;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    int t60;
    int t65;
    int t69;
    int t73;
    int t77;
    int t89;
    int t93;
    int t90;
    int t91;
    int t96;
    int t97;
    int t99;
    int t98;

    FUN_0c074680();
    t1 = *(int *)0xC1EE210;
    if (t1 == 2) {
        gdc_CourseStartLoadReq();
    }
    gdc_CourseLoadWait();
    t5 = *(int *)0xC1EE210;
    if (t5 != 2) {
        t6 = *(int *)0xC179488;
        if ((int)t6 < (int)0x4) {
            FUN_0c07f0b0();
            gdc_FileLoad(0xC870000, 0xC08AE58, 0x0);
            nlsndPackLoad(0xC870000, 0x5);
        }
    }
    ResetLight();
    LightEffect(0x0);
    *(unsigned int *)0xC1799E4 = 0xC1799E8;
    nlInitHeapMemory(0xC1799E8, 0x30000);
    nlInitEvent();
    extRandomSeed(0x3039);
    t17 = *(int *)0xC1EE234;
    if (t17 == 0) {
        initPlayer();
    } else {
        initPlayerADV();
    }
    Init_nd_Sprite();
    init_GameSystem();
    t23 = *(int *)0xC179488;
    InitColliObj(t23);
    t25 = *(int *)0xC1EE20C;
    if (t25 != 0) {
        if (t25 != 1) {
            if (t25 != 2) {
                FUN_0c031934(t25);
                t27 = *(int *)0xC1EE20C;
                PutCourse_Init(t27);
                nd_peopleInitialize(0x46);
            } else {
                t30 = *(int *)0xC1EE214;
                t31 = t25;
                if (t30 != 15) {
                    t31 = t30;
                }
                FUN_0c031934(t31);
                t33 = *(int *)0xC1EE20C;
                PutCourse_Init(t33);
                *(unsigned int *)0xC2A6FD8 = 0x0;
            }
        } else {
            FUN_0c031934(t25);
            t37 = *(int *)0xC1EE20C;
            PutCourse_Init(t37);
            nd_peopleInitialize(0x32);
        }
    } else {
        FUN_0c031934(t25);
        t42 = *(int *)0xC1EE20C;
        PutCourse_Init(t42);
        nd_peopleInitialize(0x46);
    }
    init_CarMain();
    t47 = *(int *)0xC1EE210;
    if (t47 == 2) {
        Init_DCmini();
    }
    initCamera(0x0);
    t51 = *(int *)0xC1EE210;
    if (t51 != 2) {
        SetStartCamera();
    }
    FUN_0c0357b0();
    t55 = *(int *)0xC1EE20C;
    if (t55 == 2) {
        t56 = *(int *)0xC1EE214;
        if (t56 != 2) {
            t57 = *(int *)0xC1EE214;
            if (t57 != 3) {
                t58 = *(int *)0xC1EE214;
                if (t58 != 1) {
                    t59 = *(int *)0xC1EE214;
                    if (t59 == 0) {
                        t60 = *(int *)0xC1EE20C;
                        if (t60 != 2) {
                            init_KyakuMain();
                        }
                    } else {
                        init_KyakuMain();
                    }
                } else {
                    t65 = *(int *)0xC1EE20C;
                    if (t65 != 2) {
                        init_KyakuMain();
                    }
                }
            } else {
                t69 = *(int *)0xC1EE20C;
                if (t69 != 2) {
                    init_KyakuMain();
                }
            }
        } else {
            t73 = *(int *)0xC1EE20C;
            if (t73 != 2) {
                init_KyakuMain();
            }
        }
    } else {
        t77 = *(int *)0xC1EE20C;
        if (t77 != 2) {
            init_KyakuMain();
        }
    }
    InitSetObject();
    FUN_0c031480();
    InitHelicopter();
    Act_Init();
    entryCarPut(0x0);
    trafficControl(0x0);
    GoiTool(0x0);
    Init_Result(0xFFFFFFFE);
    *(unsigned int *)0xC2A4E50 = 0x0;
    t89 = *(int *)0xC1EE20C;
    t93 = 0x2900;
    if (t89 == 2) {
        t90 = *(int *)0xC1EE214;
        t91 = 0x2900;
        if (t90 == 1) {
            t91 = 0x6100;
        }
        t93 = t91;
    }
    SetLight(0x2200, t93);
    Init_Fog();
    t96 = *(int *)0xC1EE210;
    if ((int)t96 <= (int)0x1) {
        t97 = cycleAdvCheck();
        t98 = t97;
    } else {
        *(unsigned int *)0xC2A4E54 = 0x0;
        t98 = 0xC2A4E54;
    }
    t99 = *(int *)0xC1EE238;
    *(unsigned int *)0xC1EE238 = (t99 + 0x1);
    *(unsigned int *)0xC1EE240 = 0x0;
    return t98;
}

int FUN_0c060f38(int a4)
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
    int t53;
    int t54;
    int t55;
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
    int t70;
    int t71;
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
    int t84;
    int t85;
    int t86;
    int t87;
    int t88;
    int t89;
    int t90;
    int t91;
    int t92;
    int t93;
    int t94;
    int t95;
    int t96;
    int t97;
    int t98;
    int t99;
    int t100;
    int t101;
    int t102;
    int t103;
    int t104;
    int t105;
    int t106;
    int t107;
    int t108;
    int t109;
    int t110;
    int t111;
    int t112;
    int t113;
    int t114;
    int t115;
    int t116;
    int t117;
    int t118;
    int t119;
    int t120;
    int t121;
    int t122;
    int t123;
    int t124;
    int t125;
    int t126;
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
    int t137;
    int t138;
    int t139;
    int t140;
    int t141;
    int t142;
    int t143;
    int t144;
    int t145;
    int t146;
    int t147;
    int t148;
    int t149;
    int t150;
    int t151;
    int t152;
    int t153;
    int t154;
    int t155;
    int t156;
    int t157;
    int t158;
    int t159;
    int t160;
    int t161;
    int t162;
    int t163;
    int t164;
    int t165;
    int t166;
    int t167;
    int t168;
    int t169;
    int t170;
    int t171;
    int t172;
    int t173;
    int t174;
    int t175;
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
    int t186;
    int t187;
    int t188;
    int t189;
    int t190;
    int t191;
    int t192;
    int t193;
    int t194;
    int t195;
    int t196;
    int t197;
    int t198;
    int t199;
    int t200;
    int t201;
    int t202;
    int t203;
    int t204;
    int t205;
    int t206;
    int t207;
    int t208;
    int t209;
    int t210;
    int t211;
    int t212;
    int t213;
    int t214;
    int t215;
    int t216;
    int t217;
    int t218;
    int t219;
    int t220;
    int t221;
    int t222;
    int t223;
    int t224;
    int t225;
    int t226;
    int t227;
    int t228;
    int t229;
    int t230;
    int t231;
    int t232;
    int t233;
    int t234;
    int t235;
    int t236;
    int t237;
    int t238;
    int t239;
    int t240;
    int t241;
    int t242;
    int t243;
    int t244;
    int t245;
    int t246;
    int t247;
    int t248;
    int t249;
    int t250;
    int t251;
    int t252;
    int t253;
    int t254;
    int t255;
    int t256;
    int t257;
    int t258;
    int t259;
    int t260;
    int t261;
    int t262;
    int t263;
    int t264;
    int t265;
    int t266;
    int t267;
    int t268;
    int t269;
    int t270;
    int t271;
    int t272;
    int t273;
    int t274;
    int t275;
    int t276;
    int t277;
    int t278;
    int t279;
    int t280;
    int t281;
    int t282;
    int t283;
    int t284;
    int t285;
    int t286;
    int t287;
    int t288;
    int t289;
    int t290;
    int t291;
    int t292;
    int t293;
    int t294;
    int t295;
    int t296;
    int t297;
    int t298;
    int t299;
    int t300;
    int t301;
    int t302;
    int t303;
    int t304;
    int t305;
    int t306;
    int t307;
    int t308;
    int t309;
    int t310;
    int t311;
    int t312;
    int t313;
    int t314;
    int t315;
    int t316;
    int t317;
    int t318;
    int t319;
    int t320;
    int t321;
    int t322;
    int t323;
    int t324;
    int t325;
    int t326;
    int t327;
    int t328;
    int t329;
    int t330;
    int t331;
    int t332;
    int t333;
    int t334;
    int t338;
    int t339;
    int t340;
    int t341;
    int t342;
    int t343;
    int t344;
    int t345;
    int t346;
    int t347;
    int t348;
    int t349;
    int t350;
    int t351;
    int t352;
    int t356;
    int t357;
    int t358;
    int t359;
    int t360;
    int t361;
    int t362;
    int t363;
    int t364;
    int t365;
    int t366;
    int t367;
    int t368;
    int t372;
    int t373;
    int t374;
    int t375;
    int t376;
    int t377;
    int t378;
    int t379;
    int t380;
    int t388;
    int t389;
    int t390;
    int t391;
    int t392;
    int t393;
    int t394;
    int t395;
    int t396;
    int t404;
    int t405;
    int t406;
    int t407;
    int t408;
    int t409;
    int t410;
    int t411;
    int t412;
    int t420;
    int t421;
    int t422;
    int t423;
    int t424;
    int t425;
    int t426;
    int t427;
    int t428;
    int t436;
    int t437;
    int t438;
    int t439;
    int t440;
    int t441;
    int t442;
    int t443;
    int t444;
    int t452;
    int t453;
    int t454;
    int t455;
    int t456;
    int t457;
    int t458;
    int t459;
    int t460;
    int t468;
    int t469;
    int t470;
    int t471;
    int t472;
    int t473;
    int t474;
    int t475;
    int t476;
    int t484;
    int t485;
    int t486;
    int t487;
    int t488;
    int t489;
    int t490;
    int t491;
    int t492;
    int t503;
    int stk[324] = {0};

    t0 = *(int *)0xC0D373C;
    *(unsigned int *)(((0x48C + ((int)stk + 4)) + 0x5C)) = t0;
    t1 = *(int *)0xC0D3738;
    *(unsigned int *)(((0x48C + ((int)stk + 4)) + 0x58)) = t1;
    t2 = *(int *)0xC0D3734;
    *(unsigned int *)(((0x48C + ((int)stk + 4)) + 0x54)) = t2;
    t3 = *(int *)0xC0D3730;
    *(unsigned int *)(((0x48C + ((int)stk + 4)) + 0x50)) = t3;
    t4 = *(int *)0xC0D372C;
    *(unsigned int *)(((0x48C + ((int)stk + 4)) + 0x4C)) = t4;
    t5 = *(int *)0xC0D3728;
    *(unsigned int *)(((0x48C + ((int)stk + 4)) + 0x48)) = t5;
    t6 = *(int *)0xC0D3724;
    *(unsigned int *)(((0x48C + ((int)stk + 4)) + 0x44)) = t6;
    t7 = *(int *)0xC0D3720;
    *(unsigned int *)(((0x48C + ((int)stk + 4)) + 0x40)) = t7;
    t8 = *(int *)0xC0D371C;
    *(unsigned int *)(((0x48C + ((int)stk + 4)) + 0x3C)) = t8;
    t9 = *(int *)0xC0D3718;
    *(unsigned int *)(((0x48C + ((int)stk + 4)) + 0x38)) = t9;
    t10 = *(int *)0xC0D3714;
    *(unsigned int *)(((0x48C + ((int)stk + 4)) + 0x34)) = t10;
    t11 = *(int *)0xC0D3710;
    *(unsigned int *)(((0x48C + ((int)stk + 4)) + 0x30)) = t11;
    t12 = *(int *)0xC0D370C;
    *(unsigned int *)(((0x48C + ((int)stk + 4)) + 0x2C)) = t12;
    t13 = *(int *)0xC0D3708;
    *(unsigned int *)(((0x48C + ((int)stk + 4)) + 0x28)) = t13;
    t14 = *(int *)0xC0D3704;
    *(unsigned int *)(((0x48C + ((int)stk + 4)) + 0x24)) = t14;
    t15 = *(int *)0xC0D3700;
    *(unsigned int *)(((0x48C + ((int)stk + 4)) + 0x20)) = t15;
    t16 = *(int *)0xC0D36FC;
    *(unsigned int *)(((0x48C + ((int)stk + 4)) + 0x1C)) = t16;
    t17 = *(int *)0xC0D36F8;
    *(unsigned int *)(((0x48C + ((int)stk + 4)) + 0x18)) = t17;
    t18 = *(int *)0xC0D36F4;
    *(unsigned int *)(((0x48C + ((int)stk + 4)) + 0x14)) = t18;
    t19 = *(int *)0xC0D36F0;
    *(unsigned int *)(((0x48C + ((int)stk + 4)) + 0x10)) = t19;
    t20 = *(int *)0xC0D36EC;
    *(unsigned int *)(((0x48C + ((int)stk + 4)) + 0xC)) = t20;
    t21 = *(int *)0xC0D36E8;
    *(unsigned int *)(((0x48C + ((int)stk + 4)) + 0x8)) = t21;
    t22 = *(int *)0xC0D36E4;
    *(unsigned int *)(((0x48C + ((int)stk + 4)) + 0x4)) = t22;
    t23 = *(int *)0xC0D36E0;
    *(unsigned int *)(((0x48C + ((int)stk + 4)) + 0x0)) = t23;
    t24 = *(int *)0xC0D37B4;
    *(unsigned int *)(((0x414 + ((int)stk + 4)) + 0x74)) = t24;
    t25 = *(int *)0xC0D37B0;
    *(unsigned int *)(((0x414 + ((int)stk + 4)) + 0x70)) = t25;
    t26 = *(int *)0xC0D37AC;
    *(unsigned int *)(((0x414 + ((int)stk + 4)) + 0x6C)) = t26;
    t27 = *(int *)0xC0D37A8;
    *(unsigned int *)(((0x414 + ((int)stk + 4)) + 0x68)) = t27;
    t28 = *(int *)0xC0D37A4;
    *(unsigned int *)(((0x414 + ((int)stk + 4)) + 0x64)) = t28;
    t29 = *(int *)0xC0D37A0;
    *(unsigned int *)(((0x414 + ((int)stk + 4)) + 0x60)) = t29;
    t30 = *(int *)0xC0D379C;
    *(unsigned int *)(((0x414 + ((int)stk + 4)) + 0x5C)) = t30;
    t31 = *(int *)0xC0D3798;
    *(unsigned int *)(((0x414 + ((int)stk + 4)) + 0x58)) = t31;
    t32 = *(int *)0xC0D3794;
    *(unsigned int *)(((0x414 + ((int)stk + 4)) + 0x54)) = t32;
    t33 = *(int *)0xC0D3790;
    *(unsigned int *)(((0x414 + ((int)stk + 4)) + 0x50)) = t33;
    t34 = *(int *)0xC0D378C;
    *(unsigned int *)(((0x414 + ((int)stk + 4)) + 0x4C)) = t34;
    t35 = *(int *)0xC0D3788;
    *(unsigned int *)(((0x414 + ((int)stk + 4)) + 0x48)) = t35;
    t36 = *(int *)0xC0D3784;
    *(unsigned int *)(((0x414 + ((int)stk + 4)) + 0x44)) = t36;
    t37 = *(int *)0xC0D3780;
    *(unsigned int *)(((0x414 + ((int)stk + 4)) + 0x40)) = t37;
    t38 = *(int *)0xC0D377C;
    *(unsigned int *)(((0x414 + ((int)stk + 4)) + 0x3C)) = t38;
    t39 = *(int *)0xC0D3778;
    *(unsigned int *)(((0x414 + ((int)stk + 4)) + 0x38)) = t39;
    t40 = *(int *)0xC0D3774;
    *(unsigned int *)(((0x414 + ((int)stk + 4)) + 0x34)) = t40;
    t41 = *(int *)0xC0D3770;
    *(unsigned int *)(((0x414 + ((int)stk + 4)) + 0x30)) = t41;
    t42 = *(int *)0xC0D376C;
    *(unsigned int *)(((0x414 + ((int)stk + 4)) + 0x2C)) = t42;
    t43 = *(int *)0xC0D3768;
    *(unsigned int *)(((0x414 + ((int)stk + 4)) + 0x28)) = t43;
    t44 = *(int *)0xC0D3764;
    *(unsigned int *)(((0x414 + ((int)stk + 4)) + 0x24)) = t44;
    t45 = *(int *)0xC0D3760;
    *(unsigned int *)(((0x414 + ((int)stk + 4)) + 0x20)) = t45;
    t46 = *(int *)0xC0D375C;
    *(unsigned int *)(((0x414 + ((int)stk + 4)) + 0x1C)) = t46;
    t47 = *(int *)0xC0D3758;
    *(unsigned int *)(((0x414 + ((int)stk + 4)) + 0x18)) = t47;
    t48 = *(int *)0xC0D3754;
    *(unsigned int *)(((0x414 + ((int)stk + 4)) + 0x14)) = t48;
    t49 = *(int *)0xC0D3750;
    *(unsigned int *)(((0x414 + ((int)stk + 4)) + 0x10)) = t49;
    t50 = *(int *)0xC0D374C;
    *(unsigned int *)(((0x414 + ((int)stk + 4)) + 0xC)) = t50;
    t51 = *(int *)0xC0D3748;
    *(unsigned int *)(((0x414 + ((int)stk + 4)) + 0x8)) = t51;
    t52 = *(int *)0xC0D3744;
    *(unsigned int *)(((0x414 + ((int)stk + 4)) + 0x4)) = t52;
    t53 = *(int *)0xC0D3740;
    *(unsigned int *)(((0x414 + ((int)stk + 4)) + 0x0)) = t53;
    t54 = *(int *)0xC0D3844;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0x8C)) = t54;
    t55 = *(int *)0xC0D3840;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0x88)) = t55;
    t56 = *(int *)0xC0D383C;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0x84)) = t56;
    t57 = *(int *)0xC0D3838;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0x80)) = t57;
    t58 = *(int *)0xC0D3834;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0x7C)) = t58;
    t59 = *(int *)0xC0D3830;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0x78)) = t59;
    t60 = *(int *)0xC0D382C;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0x74)) = t60;
    t61 = *(int *)0xC0D3828;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0x70)) = t61;
    t62 = *(int *)0xC0D3824;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0x6C)) = t62;
    t63 = *(int *)0xC0D3820;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0x68)) = t63;
    t64 = *(int *)0xC0D381C;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0x64)) = t64;
    t65 = *(int *)0xC0D3818;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0x60)) = t65;
    t66 = *(int *)0xC0D3814;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0x5C)) = t66;
    t67 = *(int *)0xC0D3810;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0x58)) = t67;
    t68 = *(int *)0xC0D380C;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0x54)) = t68;
    t69 = *(int *)0xC0D3808;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0x50)) = t69;
    t70 = *(int *)0xC0D3804;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0x4C)) = t70;
    t71 = *(int *)0xC0D3800;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0x48)) = t71;
    t72 = *(int *)0xC0D37FC;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0x44)) = t72;
    t73 = *(int *)0xC0D37F8;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0x40)) = t73;
    t74 = *(int *)0xC0D37F4;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0x3C)) = t74;
    t75 = *(int *)0xC0D37F0;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0x38)) = t75;
    t76 = *(int *)0xC0D37EC;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0x34)) = t76;
    t77 = *(int *)0xC0D37E8;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0x30)) = t77;
    t78 = *(int *)0xC0D37E4;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0x2C)) = t78;
    t79 = *(int *)0xC0D37E0;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0x28)) = t79;
    t80 = *(int *)0xC0D37DC;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0x24)) = t80;
    t81 = *(int *)0xC0D37D8;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0x20)) = t81;
    t82 = *(int *)0xC0D37D4;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0x1C)) = t82;
    t83 = *(int *)0xC0D37D0;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0x18)) = t83;
    t84 = *(int *)0xC0D37CC;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0x14)) = t84;
    t85 = *(int *)0xC0D37C8;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0x10)) = t85;
    t86 = *(int *)0xC0D37C4;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0xC)) = t86;
    t87 = *(int *)0xC0D37C0;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0x8)) = t87;
    t88 = *(int *)0xC0D37BC;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0x4)) = t88;
    t89 = *(int *)0xC0D37B8;
    *(unsigned int *)(((0x384 + ((int)stk + 4)) + 0x0)) = t89;
    t90 = *(int *)0xC0D3880;
    *(unsigned int *)(((0x348 + ((int)stk + 4)) + 0x38)) = t90;
    t91 = *(int *)0xC0D387C;
    *(unsigned int *)(((0x348 + ((int)stk + 4)) + 0x34)) = t91;
    t92 = *(int *)0xC0D3878;
    *(unsigned int *)(((0x348 + ((int)stk + 4)) + 0x30)) = t92;
    t93 = *(int *)0xC0D3874;
    *(unsigned int *)(((0x348 + ((int)stk + 4)) + 0x2C)) = t93;
    t94 = *(int *)0xC0D3870;
    *(unsigned int *)(((0x348 + ((int)stk + 4)) + 0x28)) = t94;
    t95 = *(int *)0xC0D386C;
    *(unsigned int *)(((0x348 + ((int)stk + 4)) + 0x24)) = t95;
    t96 = *(int *)0xC0D3868;
    *(unsigned int *)(((0x348 + ((int)stk + 4)) + 0x20)) = t96;
    t97 = *(int *)0xC0D3864;
    *(unsigned int *)(((0x348 + ((int)stk + 4)) + 0x1C)) = t97;
    t98 = *(int *)0xC0D3860;
    *(unsigned int *)(((0x348 + ((int)stk + 4)) + 0x18)) = t98;
    t99 = *(int *)0xC0D385C;
    *(unsigned int *)(((0x348 + ((int)stk + 4)) + 0x14)) = t99;
    t100 = *(int *)0xC0D3858;
    *(unsigned int *)(((0x348 + ((int)stk + 4)) + 0x10)) = t100;
    t101 = *(int *)0xC0D3854;
    *(unsigned int *)(((0x348 + ((int)stk + 4)) + 0xC)) = t101;
    t102 = *(int *)0xC0D3850;
    *(unsigned int *)(((0x348 + ((int)stk + 4)) + 0x8)) = t102;
    t103 = *(int *)0xC0D384C;
    *(unsigned int *)(((0x348 + ((int)stk + 4)) + 0x4)) = t103;
    t104 = *(int *)0xC0D3848;
    *(unsigned int *)(((0x348 + ((int)stk + 4)) + 0x0)) = t104;
    t105 = *(int *)0xC0D3970;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0xEC)) = t105;
    t106 = *(int *)0xC0D396C;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0xE8)) = t106;
    t107 = *(int *)0xC0D3968;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0xE4)) = t107;
    t108 = *(int *)0xC0D3964;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0xE0)) = t108;
    t109 = *(int *)0xC0D3960;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0xDC)) = t109;
    t110 = *(int *)0xC0D395C;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0xD8)) = t110;
    t111 = *(int *)0xC0D3958;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0xD4)) = t111;
    t112 = *(int *)0xC0D3954;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0xD0)) = t112;
    t113 = *(int *)0xC0D3950;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0xCC)) = t113;
    t114 = *(int *)0xC0D394C;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0xC8)) = t114;
    t115 = *(int *)0xC0D3948;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0xC4)) = t115;
    t116 = *(int *)0xC0D3944;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0xC0)) = t116;
    t117 = *(int *)0xC0D3940;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0xBC)) = t117;
    t118 = *(int *)0xC0D393C;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0xB8)) = t118;
    t119 = *(int *)0xC0D3938;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0xB4)) = t119;
    t120 = *(int *)0xC0D3934;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0xB0)) = t120;
    t121 = *(int *)0xC0D3930;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0xAC)) = t121;
    t122 = *(int *)0xC0D392C;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0xA8)) = t122;
    t123 = *(int *)0xC0D3928;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0xA4)) = t123;
    t124 = *(int *)0xC0D3924;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0xA0)) = t124;
    t125 = *(int *)0xC0D3920;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x9C)) = t125;
    t126 = *(int *)0xC0D391C;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x98)) = t126;
    t127 = *(int *)0xC0D3918;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x94)) = t127;
    t128 = *(int *)0xC0D3914;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x90)) = t128;
    t129 = *(int *)0xC0D3910;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x8C)) = t129;
    t130 = *(int *)0xC0D390C;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x88)) = t130;
    t131 = *(int *)0xC0D3908;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x84)) = t131;
    t132 = *(int *)0xC0D3904;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x80)) = t132;
    t133 = *(int *)0xC0D3900;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x7C)) = t133;
    t134 = *(int *)0xC0D38FC;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x78)) = t134;
    t135 = *(int *)0xC0D38F8;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x74)) = t135;
    t136 = *(int *)0xC0D38F4;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x70)) = t136;
    t137 = *(int *)0xC0D38F0;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x6C)) = t137;
    t138 = *(int *)0xC0D38EC;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x68)) = t138;
    t139 = *(int *)0xC0D38E8;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x64)) = t139;
    t140 = *(int *)0xC0D38E4;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x60)) = t140;
    t141 = *(int *)0xC0D38E0;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x5C)) = t141;
    t142 = *(int *)0xC0D38DC;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x58)) = t142;
    t143 = *(int *)0xC0D38D8;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x54)) = t143;
    t144 = *(int *)0xC0D38D4;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x50)) = t144;
    t145 = *(int *)0xC0D38D0;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x4C)) = t145;
    t146 = *(int *)0xC0D38CC;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x48)) = t146;
    t147 = *(int *)0xC0D38C8;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x44)) = t147;
    t148 = *(int *)0xC0D38C4;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x40)) = t148;
    t149 = *(int *)0xC0D38C0;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x3C)) = t149;
    t150 = *(int *)0xC0D38BC;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x38)) = t150;
    t151 = *(int *)0xC0D38B8;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x34)) = t151;
    t152 = *(int *)0xC0D38B4;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x30)) = t152;
    t153 = *(int *)0xC0D38B0;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x2C)) = t153;
    t154 = *(int *)0xC0D38AC;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x28)) = t154;
    t155 = *(int *)0xC0D38A8;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x24)) = t155;
    t156 = *(int *)0xC0D38A4;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x20)) = t156;
    t157 = *(int *)0xC0D38A0;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x1C)) = t157;
    t158 = *(int *)0xC0D389C;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x18)) = t158;
    t159 = *(int *)0xC0D3898;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x14)) = t159;
    t160 = *(int *)0xC0D3894;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x10)) = t160;
    t161 = *(int *)0xC0D3890;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0xC)) = t161;
    t162 = *(int *)0xC0D388C;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x8)) = t162;
    t163 = *(int *)0xC0D3888;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x4)) = t163;
    t164 = *(int *)0xC0D3884;
    *(unsigned int *)(((0x258 + ((int)stk + 4)) + 0x0)) = t164;
    t165 = *(int *)0xC0D3A24;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0xB0)) = t165;
    t166 = *(int *)0xC0D3A20;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0xAC)) = t166;
    t167 = *(int *)0xC0D3A1C;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0xA8)) = t167;
    t168 = *(int *)0xC0D3A18;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0xA4)) = t168;
    t169 = *(int *)0xC0D3A14;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0xA0)) = t169;
    t170 = *(int *)0xC0D3A10;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x9C)) = t170;
    t171 = *(int *)0xC0D3A0C;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x98)) = t171;
    t172 = *(int *)0xC0D3A08;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x94)) = t172;
    t173 = *(int *)0xC0D3A04;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x90)) = t173;
    t174 = *(int *)0xC0D3A00;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x8C)) = t174;
    t175 = *(int *)0xC0D39FC;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x88)) = t175;
    t176 = *(int *)0xC0D39F8;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x84)) = t176;
    t177 = *(int *)0xC0D39F4;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x80)) = t177;
    t178 = *(int *)0xC0D39F0;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x7C)) = t178;
    t179 = *(int *)0xC0D39EC;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x78)) = t179;
    t180 = *(int *)0xC0D39E8;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x74)) = t180;
    t181 = *(int *)0xC0D39E4;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x70)) = t181;
    t182 = *(int *)0xC0D39E0;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x6C)) = t182;
    t183 = *(int *)0xC0D39DC;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x68)) = t183;
    t184 = *(int *)0xC0D39D8;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x64)) = t184;
    t185 = *(int *)0xC0D39D4;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x60)) = t185;
    t186 = *(int *)0xC0D39D0;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x5C)) = t186;
    t187 = *(int *)0xC0D39CC;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x58)) = t187;
    t188 = *(int *)0xC0D39C8;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x54)) = t188;
    t189 = *(int *)0xC0D39C4;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x50)) = t189;
    t190 = *(int *)0xC0D39C0;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x4C)) = t190;
    t191 = *(int *)0xC0D39BC;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x48)) = t191;
    t192 = *(int *)0xC0D39B8;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x44)) = t192;
    t193 = *(int *)0xC0D39B4;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x40)) = t193;
    t194 = *(int *)0xC0D39B0;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x3C)) = t194;
    t195 = *(int *)0xC0D39AC;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x38)) = t195;
    t196 = *(int *)0xC0D39A8;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x34)) = t196;
    t197 = *(int *)0xC0D39A4;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x30)) = t197;
    t198 = *(int *)0xC0D39A0;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x2C)) = t198;
    t199 = *(int *)0xC0D399C;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x28)) = t199;
    t200 = *(int *)0xC0D3998;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x24)) = t200;
    t201 = *(int *)0xC0D3994;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x20)) = t201;
    t202 = *(int *)0xC0D3990;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x1C)) = t202;
    t203 = *(int *)0xC0D398C;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x18)) = t203;
    t204 = *(int *)0xC0D3988;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x14)) = t204;
    t205 = *(int *)0xC0D3984;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x10)) = t205;
    t206 = *(int *)0xC0D3980;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0xC)) = t206;
    t207 = *(int *)0xC0D397C;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x8)) = t207;
    t208 = *(int *)0xC0D3978;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x4)) = t208;
    t209 = *(int *)0xC0D3974;
    *(unsigned int *)(((0x1A4 + ((int)stk + 4)) + 0x0)) = t209;
    t210 = *(int *)0xC0D3B14;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0xEC)) = t210;
    t211 = *(int *)0xC0D3B10;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0xE8)) = t211;
    t212 = *(int *)0xC0D3B0C;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0xE4)) = t212;
    t213 = *(int *)0xC0D3B08;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0xE0)) = t213;
    t214 = *(int *)0xC0D3B04;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0xDC)) = t214;
    t215 = *(int *)0xC0D3B00;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0xD8)) = t215;
    t216 = *(int *)0xC0D3AFC;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0xD4)) = t216;
    t217 = *(int *)0xC0D3AF8;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0xD0)) = t217;
    t218 = *(int *)0xC0D3AF4;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0xCC)) = t218;
    t219 = *(int *)0xC0D3AF0;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0xC8)) = t219;
    t220 = *(int *)0xC0D3AEC;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0xC4)) = t220;
    t221 = *(int *)0xC0D3AE8;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0xC0)) = t221;
    t222 = *(int *)0xC0D3AE4;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0xBC)) = t222;
    t223 = *(int *)0xC0D3AE0;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0xB8)) = t223;
    t224 = *(int *)0xC0D3ADC;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0xB4)) = t224;
    t225 = *(int *)0xC0D3AD8;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0xB0)) = t225;
    t226 = *(int *)0xC0D3AD4;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0xAC)) = t226;
    t227 = *(int *)0xC0D3AD0;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0xA8)) = t227;
    t228 = *(int *)0xC0D3ACC;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0xA4)) = t228;
    t229 = *(int *)0xC0D3AC8;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0xA0)) = t229;
    t230 = *(int *)0xC0D3AC4;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x9C)) = t230;
    t231 = *(int *)0xC0D3AC0;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x98)) = t231;
    t232 = *(int *)0xC0D3ABC;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x94)) = t232;
    t233 = *(int *)0xC0D3AB8;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x90)) = t233;
    t234 = *(int *)0xC0D3AB4;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x8C)) = t234;
    t235 = *(int *)0xC0D3AB0;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x88)) = t235;
    t236 = *(int *)0xC0D3AAC;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x84)) = t236;
    t237 = *(int *)0xC0D3AA8;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x80)) = t237;
    t238 = *(int *)0xC0D3AA4;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x7C)) = t238;
    t239 = *(int *)0xC0D3AA0;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x78)) = t239;
    t240 = *(int *)0xC0D3A9C;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x74)) = t240;
    t241 = *(int *)0xC0D3A98;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x70)) = t241;
    t242 = *(int *)0xC0D3A94;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x6C)) = t242;
    t243 = *(int *)0xC0D3A90;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x68)) = t243;
    t244 = *(int *)0xC0D3A8C;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x64)) = t244;
    t245 = *(int *)0xC0D3A88;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x60)) = t245;
    t246 = *(int *)0xC0D3A84;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x5C)) = t246;
    t247 = *(int *)0xC0D3A80;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x58)) = t247;
    t248 = *(int *)0xC0D3A7C;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x54)) = t248;
    t249 = *(int *)0xC0D3A78;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x50)) = t249;
    t250 = *(int *)0xC0D3A74;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x4C)) = t250;
    t251 = *(int *)0xC0D3A70;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x48)) = t251;
    t252 = *(int *)0xC0D3A6C;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x44)) = t252;
    t253 = *(int *)0xC0D3A68;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x40)) = t253;
    t254 = *(int *)0xC0D3A64;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x3C)) = t254;
    t255 = *(int *)0xC0D3A60;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x38)) = t255;
    t256 = *(int *)0xC0D3A5C;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x34)) = t256;
    t257 = *(int *)0xC0D3A58;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x30)) = t257;
    t258 = *(int *)0xC0D3A54;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x2C)) = t258;
    t259 = *(int *)0xC0D3A50;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x28)) = t259;
    t260 = *(int *)0xC0D3A4C;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x24)) = t260;
    t261 = *(int *)0xC0D3A48;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x20)) = t261;
    t262 = *(int *)0xC0D3A44;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x1C)) = t262;
    t263 = *(int *)0xC0D3A40;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x18)) = t263;
    t264 = *(int *)0xC0D3A3C;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x14)) = t264;
    t265 = *(int *)0xC0D3A38;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x10)) = t265;
    t266 = *(int *)0xC0D3A34;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0xC)) = t266;
    t267 = *(int *)0xC0D3A30;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x8)) = t267;
    t268 = *(int *)0xC0D3A2C;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x4)) = t268;
    t269 = *(int *)0xC0D3A28;
    *(unsigned int *)(((0xB4 + ((int)stk + 4)) + 0x0)) = t269;
    t270 = *(int *)0xC0D3BC8;
    *(unsigned int *)((((int)stk + 4) + 0xB0)) = t270;
    t271 = *(int *)0xC0D3BC4;
    *(unsigned int *)((((int)stk + 4) + 0xAC)) = t271;
    t272 = *(int *)0xC0D3BC0;
    *(unsigned int *)((((int)stk + 4) + 0xA8)) = t272;
    t273 = *(int *)0xC0D3BBC;
    *(unsigned int *)((((int)stk + 4) + 0xA4)) = t273;
    t274 = *(int *)0xC0D3BB8;
    *(unsigned int *)((((int)stk + 4) + 0xA0)) = t274;
    t275 = *(int *)0xC0D3BB4;
    *(unsigned int *)((((int)stk + 4) + 0x9C)) = t275;
    t276 = *(int *)0xC0D3BB0;
    *(unsigned int *)((((int)stk + 4) + 0x98)) = t276;
    t277 = *(int *)0xC0D3BAC;
    *(unsigned int *)((((int)stk + 4) + 0x94)) = t277;
    t278 = *(int *)0xC0D3BA8;
    *(unsigned int *)((((int)stk + 4) + 0x90)) = t278;
    t279 = *(int *)0xC0D3BA4;
    *(unsigned int *)((((int)stk + 4) + 0x8C)) = t279;
    t280 = *(int *)0xC0D3BA0;
    *(unsigned int *)((((int)stk + 4) + 0x88)) = t280;
    t281 = *(int *)0xC0D3B9C;
    *(unsigned int *)((((int)stk + 4) + 0x84)) = t281;
    t282 = *(int *)0xC0D3B98;
    *(unsigned int *)((((int)stk + 4) + 0x80)) = t282;
    t283 = *(int *)0xC0D3B94;
    *(unsigned int *)((((int)stk + 4) + 0x7C)) = t283;
    t284 = *(int *)0xC0D3B90;
    *(unsigned int *)((((int)stk + 4) + 0x78)) = t284;
    t285 = *(int *)0xC0D3B8C;
    *(unsigned int *)((((int)stk + 4) + 0x74)) = t285;
    t286 = *(int *)0xC0D3B88;
    *(unsigned int *)((((int)stk + 4) + 0x70)) = t286;
    t287 = *(int *)0xC0D3B84;
    *(unsigned int *)((((int)stk + 4) + 0x6C)) = t287;
    t288 = *(int *)0xC0D3B80;
    *(unsigned int *)((((int)stk + 4) + 0x68)) = t288;
    t289 = *(int *)0xC0D3B7C;
    *(unsigned int *)((((int)stk + 4) + 0x64)) = t289;
    t290 = *(int *)0xC0D3B78;
    *(unsigned int *)((((int)stk + 4) + 0x60)) = t290;
    t291 = *(int *)0xC0D3B74;
    *(unsigned int *)((((int)stk + 4) + 0x5C)) = t291;
    t292 = *(int *)0xC0D3B70;
    *(unsigned int *)((((int)stk + 4) + 0x58)) = t292;
    t293 = *(int *)0xC0D3B6C;
    *(unsigned int *)((((int)stk + 4) + 0x54)) = t293;
    t294 = *(int *)0xC0D3B68;
    *(unsigned int *)((((int)stk + 4) + 0x50)) = t294;
    t295 = *(int *)0xC0D3B64;
    *(unsigned int *)((((int)stk + 4) + 0x4C)) = t295;
    t296 = *(int *)0xC0D3B60;
    *(unsigned int *)((((int)stk + 4) + 0x48)) = t296;
    t297 = *(int *)0xC0D3B5C;
    *(unsigned int *)((((int)stk + 4) + 0x44)) = t297;
    t298 = *(int *)0xC0D3B58;
    *(unsigned int *)((((int)stk + 4) + 0x40)) = t298;
    t299 = *(int *)0xC0D3B54;
    *(unsigned int *)((((int)stk + 4) + 0x3C)) = t299;
    t300 = *(int *)0xC0D3B50;
    *(unsigned int *)((((int)stk + 4) + 0x38)) = t300;
    t301 = *(int *)0xC0D3B4C;
    *(unsigned int *)((((int)stk + 4) + 0x34)) = t301;
    t302 = *(int *)0xC0D3B48;
    *(unsigned int *)((((int)stk + 4) + 0x30)) = t302;
    t303 = *(int *)0xC0D3B44;
    *(unsigned int *)((((int)stk + 4) + 0x2C)) = t303;
    t304 = *(int *)0xC0D3B40;
    *(unsigned int *)((((int)stk + 4) + 0x28)) = t304;
    t305 = *(int *)0xC0D3B3C;
    *(unsigned int *)((((int)stk + 4) + 0x24)) = t305;
    t306 = *(int *)0xC0D3B38;
    *(unsigned int *)((((int)stk + 4) + 0x20)) = t306;
    t307 = *(int *)0xC0D3B34;
    *(unsigned int *)((((int)stk + 4) + 0x1C)) = t307;
    t308 = *(int *)0xC0D3B30;
    *(unsigned int *)((((int)stk + 4) + 0x18)) = t308;
    t309 = *(int *)0xC0D3B2C;
    *(unsigned int *)((((int)stk + 4) + 0x14)) = t309;
    t310 = *(int *)0xC0D3B28;
    *(unsigned int *)((((int)stk + 4) + 0x10)) = t310;
    t311 = *(int *)0xC0D3B24;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = t311;
    t312 = *(int *)0xC0D3B20;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t312;
    t313 = *(int *)0xC0D3B1C;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t313;
    t314 = *(int *)0xC0D3B18;
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t314;
    t315 = *(int *)0xC13EB90;
    t316 = *(int *)((a4 + 0x110));
    t317 = *(int *)0xC2AD000;
    if (t316 != 0xC956FCC) {
        if (t316 != 0xC95A230) {
            if (t316 != 0xC95D7C4) {
                if (t316 != 0xC960308) {
                    if (t316 != 0xC962F0C) {
                        if (t316 != 0xC9659C0) {
                            if (t316 != 0xC9684A4) {
                                if (t316 != 0xC96B138) {
                                    t318 = *(int *)(((0x148 + a4) + 0x0));
                                    t319 = (int)(((unsigned int)t318 >> 21) & 0x3);
                                    if (t319 != 0) {
                                        if (t319 != 1) {
                                            if (t319 == 2) {
                                                t320 = (int)((int)t315 % (int)0x3);
                                                t321 = *(int *)((((unsigned char)(((((((t317 + 0xFF) << 2) + (t317 + 0xFF)) + t320) << 1) + ((((t317 + 0xFF) << 2) + (t317 + 0xFF)) + t320)) << 2) + (0xB4 + ((int)stk + 4))) + 0x8));
                                                *(unsigned int *)0xC13EBD4 = t321;
                                                t322 = *(int *)((((unsigned char)(((((((t317 + 0xFF) << 2) + (t317 + 0xFF)) + t320) << 1) + ((((t317 + 0xFF) << 2) + (t317 + 0xFF)) + t320)) << 2) + (0xB4 + ((int)stk + 4))) + 0x4));
                                                *(unsigned int *)0xC13EBD0 = t322;
                                                t323 = *(int *)((((unsigned char)(((((((t317 + 0xFF) << 2) + (t317 + 0xFF)) + t320) << 1) + ((((t317 + 0xFF) << 2) + (t317 + 0xFF)) + t320)) << 2) + (0xB4 + ((int)stk + 4))) + 0x0));
                                                *(unsigned int *)0xC13EBCC = t323;
                                                t324 = *(int *)0xC2AD000;
                                                t325 = *(int *)0xC13EB94;
                                                t326 = (int)((int)t325 % (int)0x2);
                                                t327 = *(int *)((((unsigned char)((((((((t324 + 0xFF) << 2) + (t324 + 0xFF)) + t326) + 0x3) << 1) + (((((t324 + 0xFF) << 2) + (t324 + 0xFF)) + t326) + 0x3)) << 2) + (0xB4 + ((int)stk + 4))) + 0x8));
                                                *(unsigned int *)0xC13EBE0 = t327;
                                                t328 = *(int *)((((unsigned char)((((((((t324 + 0xFF) << 2) + (t324 + 0xFF)) + t326) + 0x3) << 1) + (((((t324 + 0xFF) << 2) + (t324 + 0xFF)) + t326) + 0x3)) << 2) + (0xB4 + ((int)stk + 4))) + 0x4));
                                                *(unsigned int *)0xC13EBDC = t328;
                                                t329 = *(int *)((((unsigned char)((((((((t324 + 0xFF) << 2) + (t324 + 0xFF)) + t326) + 0x3) << 1) + (((((t324 + 0xFF) << 2) + (t324 + 0xFF)) + t326) + 0x3)) << 2) + (0xB4 + ((int)stk + 4))) + 0x0));
                                                *(unsigned int *)0xC13EBD8 = t329;
                                                t330 = *(int *)(((0x148 + a4) + 0x0));
                                                t331 = (int)(((unsigned int)t330 >> 29) & 0x7);
                                                t332 = *(int *)((((unsigned char)((((t331 << 2) << 1) + t331) << 2) + ((int)stk + 4)) + 0x8));
                                                *(unsigned int *)0xC13EBF8 = t332;
                                                t333 = *(int *)((((unsigned char)((((t331 << 2) << 1) + t331) << 2) + ((int)stk + 4)) + 0x4));
                                                *(unsigned int *)0xC13EBF4 = t333;
                                                t334 = *(int *)((((unsigned char)((((t331 << 2) << 1) + t331) << 2) + ((int)stk + 4)) + 0x0));
                                                *(unsigned int *)0xC13EBF0 = t334;
                                            }
                                        } else {
                                            t338 = (int)((int)t315 % (int)0x3);
                                            t339 = *(int *)((((unsigned char)(((((((t317 + 0xFF) << 2) + (t317 + 0xFF)) + t338) << 1) + ((((t317 + 0xFF) << 2) + (t317 + 0xFF)) + t338)) << 2) + (0x258 + ((int)stk + 4))) + 0x8));
                                            *(unsigned int *)0xC13EBD4 = t339;
                                            t340 = *(int *)((((unsigned char)(((((((t317 + 0xFF) << 2) + (t317 + 0xFF)) + t338) << 1) + ((((t317 + 0xFF) << 2) + (t317 + 0xFF)) + t338)) << 2) + (0x258 + ((int)stk + 4))) + 0x4));
                                            *(unsigned int *)0xC13EBD0 = t340;
                                            t341 = *(int *)((((unsigned char)(((((((t317 + 0xFF) << 2) + (t317 + 0xFF)) + t338) << 1) + ((((t317 + 0xFF) << 2) + (t317 + 0xFF)) + t338)) << 2) + (0x258 + ((int)stk + 4))) + 0x0));
                                            *(unsigned int *)0xC13EBCC = t341;
                                            t342 = *(int *)0xC2AD000;
                                            t343 = *(int *)0xC13EB94;
                                            t344 = (int)((int)t343 % (int)0x2);
                                            t345 = *(int *)((((unsigned char)((((((((t342 + 0xFF) << 2) + (t342 + 0xFF)) + t344) + 0x3) << 1) + (((((t342 + 0xFF) << 2) + (t342 + 0xFF)) + t344) + 0x3)) << 2) + (0x258 + ((int)stk + 4))) + 0x8));
                                            *(unsigned int *)0xC13EBE0 = t345;
                                            t346 = *(int *)((((unsigned char)((((((((t342 + 0xFF) << 2) + (t342 + 0xFF)) + t344) + 0x3) << 1) + (((((t342 + 0xFF) << 2) + (t342 + 0xFF)) + t344) + 0x3)) << 2) + (0x258 + ((int)stk + 4))) + 0x4));
                                            *(unsigned int *)0xC13EBDC = t346;
                                            t347 = *(int *)((((unsigned char)((((((((t342 + 0xFF) << 2) + (t342 + 0xFF)) + t344) + 0x3) << 1) + (((((t342 + 0xFF) << 2) + (t342 + 0xFF)) + t344) + 0x3)) << 2) + (0x258 + ((int)stk + 4))) + 0x0));
                                            *(unsigned int *)0xC13EBD8 = t347;
                                            t348 = *(int *)(((0x148 + a4) + 0x0));
                                            t349 = (int)(((unsigned int)t348 >> 29) & 0x7);
                                            t350 = *(int *)((((unsigned char)((((t349 << 2) << 1) + t349) << 2) + (0x1A4 + ((int)stk + 4))) + 0x8));
                                            *(unsigned int *)0xC13EBF8 = t350;
                                            t351 = *(int *)((((unsigned char)((((t349 << 2) << 1) + t349) << 2) + (0x1A4 + ((int)stk + 4))) + 0x4));
                                            *(unsigned int *)0xC13EBF4 = t351;
                                            t352 = *(int *)((((unsigned char)((((t349 << 2) << 1) + t349) << 2) + (0x1A4 + ((int)stk + 4))) + 0x0));
                                            *(unsigned int *)0xC13EBF0 = t352;
                                        }
                                    } else {
                                        t356 = *(int *)((((unsigned char)(((((t317 + 0xFF) << 2) << 1) + (t317 + 0xFF)) << 2) + (0x384 + ((int)stk + 4))) + 0x8));
                                        *(unsigned int *)0xC13EBD4 = t356;
                                        t357 = *(int *)((((unsigned char)(((((t317 + 0xFF) << 2) << 1) + (t317 + 0xFF)) << 2) + (0x384 + ((int)stk + 4))) + 0x4));
                                        *(unsigned int *)0xC13EBD0 = t357;
                                        t358 = *(int *)((((unsigned char)(((((t317 + 0xFF) << 2) << 1) + (t317 + 0xFF)) << 2) + (0x384 + ((int)stk + 4))) + 0x0));
                                        *(unsigned int *)0xC13EBCC = t358;
                                        t359 = *(int *)0xC2AD000;
                                        t360 = *(int *)0xC13EB94;
                                        t361 = *(int *)((((unsigned char)((((((((t359 + 0xFF) << 1) + (t359 + 0xFF)) + (t360 & 0x1)) + 0x1) << 1) + (((((t359 + 0xFF) << 1) + (t359 + 0xFF)) + (t360 & 0x1)) + 0x1)) << 2) + (0x384 + ((int)stk + 4))) + 0x8));
                                        *(unsigned int *)0xC13EBE0 = t361;
                                        t362 = *(int *)((((unsigned char)((((((((t359 + 0xFF) << 1) + (t359 + 0xFF)) + (t360 & 0x1)) + 0x1) << 1) + (((((t359 + 0xFF) << 1) + (t359 + 0xFF)) + (t360 & 0x1)) + 0x1)) << 2) + (0x384 + ((int)stk + 4))) + 0x4));
                                        *(unsigned int *)0xC13EBDC = t362;
                                        t363 = *(int *)((((unsigned char)((((((((t359 + 0xFF) << 1) + (t359 + 0xFF)) + (t360 & 0x1)) + 0x1) << 1) + (((((t359 + 0xFF) << 1) + (t359 + 0xFF)) + (t360 & 0x1)) + 0x1)) << 2) + (0x384 + ((int)stk + 4))) + 0x0));
                                        *(unsigned int *)0xC13EBD8 = t363;
                                        t364 = *(int *)(((0x148 + a4) + 0x0));
                                        t365 = (int)(((unsigned int)t364 >> 29) & 0x7);
                                        t366 = *(int *)((((signed char)(((t365 << 1) + t365) << 2) + (0x348 + ((int)stk + 4))) + 0x8));
                                        *(unsigned int *)0xC13EBF8 = t366;
                                        t367 = *(int *)((((signed char)(((t365 << 1) + t365) << 2) + (0x348 + ((int)stk + 4))) + 0x4));
                                        *(unsigned int *)0xC13EBF4 = t367;
                                        t368 = *(int *)((((signed char)(((t365 << 1) + t365) << 2) + (0x348 + ((int)stk + 4))) + 0x0));
                                        *(unsigned int *)0xC13EBF0 = t368;
                                    }
                                } else {
                                    t372 = *(int *)((((signed char)((((((t317 - 1) << 1) + (t315 & 0x1)) << 1) + (((t317 - 1) << 1) + (t315 & 0x1))) << 2) + (0x48C + ((int)stk + 4))) + 0x8));
                                    *(unsigned int *)0xC13EBD4 = t372;
                                    t373 = *(int *)((((signed char)((((((t317 - 1) << 1) + (t315 & 0x1)) << 1) + (((t317 - 1) << 1) + (t315 & 0x1))) << 2) + (0x48C + ((int)stk + 4))) + 0x4));
                                    *(unsigned int *)0xC13EBD0 = t373;
                                    t374 = *(int *)((((signed char)((((((t317 - 1) << 1) + (t315 & 0x1)) << 1) + (((t317 - 1) << 1) + (t315 & 0x1))) << 2) + (0x48C + ((int)stk + 4))) + 0x0));
                                    *(unsigned int *)0xC13EBCC = t374;
                                    *(unsigned int *)0xC13EBD8 = 0x0;
                                    *(unsigned int *)0xC13EBE0 = 0x0;
                                    *(unsigned int *)0xC13EBDC = 0x0;
                                    t375 = *(int *)(((0x148 + a4) + 0x0));
                                    t376 = (int)(((unsigned int)t375 >> 29) & 0x7);
                                    t377 = *(int *)0xC13EB94;
                                    t378 = *(int *)((((signed char)(((((t376 << 1) + ((t377 & 0x2) >> 1)) << 1) + ((t376 << 1) + ((t377 & 0x2) >> 1))) << 2) + (0x414 + ((int)stk + 4))) + 0x8));
                                    *(unsigned int *)0xC13EBF8 = t378;
                                    t379 = *(int *)((((signed char)(((((t376 << 1) + ((t377 & 0x2) >> 1)) << 1) + ((t376 << 1) + ((t377 & 0x2) >> 1))) << 2) + (0x414 + ((int)stk + 4))) + 0x4));
                                    *(unsigned int *)0xC13EBF4 = t379;
                                    t380 = *(int *)((((signed char)(((((t376 << 1) + ((t377 & 0x2) >> 1)) << 1) + ((t376 << 1) + ((t377 & 0x2) >> 1))) << 2) + (0x414 + ((int)stk + 4))) + 0x0));
                                    *(unsigned int *)0xC13EBF0 = t380;
                                }
                            } else {
                                t388 = *(int *)((((signed char)((((((t317 - 1) << 1) + (t315 & 0x1)) << 1) + (((t317 - 1) << 1) + (t315 & 0x1))) << 2) + (0x48C + ((int)stk + 4))) + 0x8));
                                *(unsigned int *)0xC13EBD4 = t388;
                                t389 = *(int *)((((signed char)((((((t317 - 1) << 1) + (t315 & 0x1)) << 1) + (((t317 - 1) << 1) + (t315 & 0x1))) << 2) + (0x48C + ((int)stk + 4))) + 0x4));
                                *(unsigned int *)0xC13EBD0 = t389;
                                t390 = *(int *)((((signed char)((((((t317 - 1) << 1) + (t315 & 0x1)) << 1) + (((t317 - 1) << 1) + (t315 & 0x1))) << 2) + (0x48C + ((int)stk + 4))) + 0x0));
                                *(unsigned int *)0xC13EBCC = t390;
                                *(unsigned int *)0xC13EBD8 = 0x0;
                                *(unsigned int *)0xC13EBE0 = 0x0;
                                *(unsigned int *)0xC13EBDC = 0x0;
                                t391 = *(int *)(((0x148 + a4) + 0x0));
                                t392 = (int)(((unsigned int)t391 >> 29) & 0x7);
                                t393 = *(int *)0xC13EB94;
                                t394 = *(int *)((((signed char)(((((t392 << 1) + ((t393 & 0x2) >> 1)) << 1) + ((t392 << 1) + ((t393 & 0x2) >> 1))) << 2) + (0x414 + ((int)stk + 4))) + 0x8));
                                *(unsigned int *)0xC13EBF8 = t394;
                                t395 = *(int *)((((signed char)(((((t392 << 1) + ((t393 & 0x2) >> 1)) << 1) + ((t392 << 1) + ((t393 & 0x2) >> 1))) << 2) + (0x414 + ((int)stk + 4))) + 0x4));
                                *(unsigned int *)0xC13EBF4 = t395;
                                t396 = *(int *)((((signed char)(((((t392 << 1) + ((t393 & 0x2) >> 1)) << 1) + ((t392 << 1) + ((t393 & 0x2) >> 1))) << 2) + (0x414 + ((int)stk + 4))) + 0x0));
                                *(unsigned int *)0xC13EBF0 = t396;
                            }
                        } else {
                            t404 = *(int *)((((signed char)((((((t317 - 1) << 1) + (t315 & 0x1)) << 1) + (((t317 - 1) << 1) + (t315 & 0x1))) << 2) + (0x48C + ((int)stk + 4))) + 0x8));
                            *(unsigned int *)0xC13EBD4 = t404;
                            t405 = *(int *)((((signed char)((((((t317 - 1) << 1) + (t315 & 0x1)) << 1) + (((t317 - 1) << 1) + (t315 & 0x1))) << 2) + (0x48C + ((int)stk + 4))) + 0x4));
                            *(unsigned int *)0xC13EBD0 = t405;
                            t406 = *(int *)((((signed char)((((((t317 - 1) << 1) + (t315 & 0x1)) << 1) + (((t317 - 1) << 1) + (t315 & 0x1))) << 2) + (0x48C + ((int)stk + 4))) + 0x0));
                            *(unsigned int *)0xC13EBCC = t406;
                            *(unsigned int *)0xC13EBD8 = 0x0;
                            *(unsigned int *)0xC13EBE0 = 0x0;
                            *(unsigned int *)0xC13EBDC = 0x0;
                            t407 = *(int *)(((0x148 + a4) + 0x0));
                            t408 = (int)(((unsigned int)t407 >> 29) & 0x7);
                            t409 = *(int *)0xC13EB94;
                            t410 = *(int *)((((signed char)(((((t408 << 1) + ((t409 & 0x2) >> 1)) << 1) + ((t408 << 1) + ((t409 & 0x2) >> 1))) << 2) + (0x414 + ((int)stk + 4))) + 0x8));
                            *(unsigned int *)0xC13EBF8 = t410;
                            t411 = *(int *)((((signed char)(((((t408 << 1) + ((t409 & 0x2) >> 1)) << 1) + ((t408 << 1) + ((t409 & 0x2) >> 1))) << 2) + (0x414 + ((int)stk + 4))) + 0x4));
                            *(unsigned int *)0xC13EBF4 = t411;
                            t412 = *(int *)((((signed char)(((((t408 << 1) + ((t409 & 0x2) >> 1)) << 1) + ((t408 << 1) + ((t409 & 0x2) >> 1))) << 2) + (0x414 + ((int)stk + 4))) + 0x0));
                            *(unsigned int *)0xC13EBF0 = t412;
                        }
                    } else {
                        t420 = *(int *)((((signed char)((((((t317 - 1) << 1) + (t315 & 0x1)) << 1) + (((t317 - 1) << 1) + (t315 & 0x1))) << 2) + (0x48C + ((int)stk + 4))) + 0x8));
                        *(unsigned int *)0xC13EBD4 = t420;
                        t421 = *(int *)((((signed char)((((((t317 - 1) << 1) + (t315 & 0x1)) << 1) + (((t317 - 1) << 1) + (t315 & 0x1))) << 2) + (0x48C + ((int)stk + 4))) + 0x4));
                        *(unsigned int *)0xC13EBD0 = t421;
                        t422 = *(int *)((((signed char)((((((t317 - 1) << 1) + (t315 & 0x1)) << 1) + (((t317 - 1) << 1) + (t315 & 0x1))) << 2) + (0x48C + ((int)stk + 4))) + 0x0));
                        *(unsigned int *)0xC13EBCC = t422;
                        *(unsigned int *)0xC13EBD8 = 0x0;
                        *(unsigned int *)0xC13EBE0 = 0x0;
                        *(unsigned int *)0xC13EBDC = 0x0;
                        t423 = *(int *)(((0x148 + a4) + 0x0));
                        t424 = (int)(((unsigned int)t423 >> 29) & 0x7);
                        t425 = *(int *)0xC13EB94;
                        t426 = *(int *)((((signed char)(((((t424 << 1) + ((t425 & 0x2) >> 1)) << 1) + ((t424 << 1) + ((t425 & 0x2) >> 1))) << 2) + (0x414 + ((int)stk + 4))) + 0x8));
                        *(unsigned int *)0xC13EBF8 = t426;
                        t427 = *(int *)((((signed char)(((((t424 << 1) + ((t425 & 0x2) >> 1)) << 1) + ((t424 << 1) + ((t425 & 0x2) >> 1))) << 2) + (0x414 + ((int)stk + 4))) + 0x4));
                        *(unsigned int *)0xC13EBF4 = t427;
                        t428 = *(int *)((((signed char)(((((t424 << 1) + ((t425 & 0x2) >> 1)) << 1) + ((t424 << 1) + ((t425 & 0x2) >> 1))) << 2) + (0x414 + ((int)stk + 4))) + 0x0));
                        *(unsigned int *)0xC13EBF0 = t428;
                    }
                } else {
                    t436 = *(int *)((((signed char)((((((t317 - 1) << 1) + (t315 & 0x1)) << 1) + (((t317 - 1) << 1) + (t315 & 0x1))) << 2) + (0x48C + ((int)stk + 4))) + 0x8));
                    *(unsigned int *)0xC13EBD4 = t436;
                    t437 = *(int *)((((signed char)((((((t317 - 1) << 1) + (t315 & 0x1)) << 1) + (((t317 - 1) << 1) + (t315 & 0x1))) << 2) + (0x48C + ((int)stk + 4))) + 0x4));
                    *(unsigned int *)0xC13EBD0 = t437;
                    t438 = *(int *)((((signed char)((((((t317 - 1) << 1) + (t315 & 0x1)) << 1) + (((t317 - 1) << 1) + (t315 & 0x1))) << 2) + (0x48C + ((int)stk + 4))) + 0x0));
                    *(unsigned int *)0xC13EBCC = t438;
                    *(unsigned int *)0xC13EBD8 = 0x0;
                    *(unsigned int *)0xC13EBE0 = 0x0;
                    *(unsigned int *)0xC13EBDC = 0x0;
                    t439 = *(int *)(((0x148 + a4) + 0x0));
                    t440 = (int)(((unsigned int)t439 >> 29) & 0x7);
                    t441 = *(int *)0xC13EB94;
                    t442 = *(int *)((((signed char)(((((t440 << 1) + ((t441 & 0x2) >> 1)) << 1) + ((t440 << 1) + ((t441 & 0x2) >> 1))) << 2) + (0x414 + ((int)stk + 4))) + 0x8));
                    *(unsigned int *)0xC13EBF8 = t442;
                    t443 = *(int *)((((signed char)(((((t440 << 1) + ((t441 & 0x2) >> 1)) << 1) + ((t440 << 1) + ((t441 & 0x2) >> 1))) << 2) + (0x414 + ((int)stk + 4))) + 0x4));
                    *(unsigned int *)0xC13EBF4 = t443;
                    t444 = *(int *)((((signed char)(((((t440 << 1) + ((t441 & 0x2) >> 1)) << 1) + ((t440 << 1) + ((t441 & 0x2) >> 1))) << 2) + (0x414 + ((int)stk + 4))) + 0x0));
                    *(unsigned int *)0xC13EBF0 = t444;
                }
            } else {
                t452 = *(int *)((((signed char)((((((t317 - 1) << 1) + (t315 & 0x1)) << 1) + (((t317 - 1) << 1) + (t315 & 0x1))) << 2) + (0x48C + ((int)stk + 4))) + 0x8));
                *(unsigned int *)0xC13EBD4 = t452;
                t453 = *(int *)((((signed char)((((((t317 - 1) << 1) + (t315 & 0x1)) << 1) + (((t317 - 1) << 1) + (t315 & 0x1))) << 2) + (0x48C + ((int)stk + 4))) + 0x4));
                *(unsigned int *)0xC13EBD0 = t453;
                t454 = *(int *)((((signed char)((((((t317 - 1) << 1) + (t315 & 0x1)) << 1) + (((t317 - 1) << 1) + (t315 & 0x1))) << 2) + (0x48C + ((int)stk + 4))) + 0x0));
                *(unsigned int *)0xC13EBCC = t454;
                *(unsigned int *)0xC13EBD8 = 0x0;
                *(unsigned int *)0xC13EBE0 = 0x0;
                *(unsigned int *)0xC13EBDC = 0x0;
                t455 = *(int *)(((0x148 + a4) + 0x0));
                t456 = (int)(((unsigned int)t455 >> 29) & 0x7);
                t457 = *(int *)0xC13EB94;
                t458 = *(int *)((((signed char)(((((t456 << 1) + ((t457 & 0x2) >> 1)) << 1) + ((t456 << 1) + ((t457 & 0x2) >> 1))) << 2) + (0x414 + ((int)stk + 4))) + 0x8));
                *(unsigned int *)0xC13EBF8 = t458;
                t459 = *(int *)((((signed char)(((((t456 << 1) + ((t457 & 0x2) >> 1)) << 1) + ((t456 << 1) + ((t457 & 0x2) >> 1))) << 2) + (0x414 + ((int)stk + 4))) + 0x4));
                *(unsigned int *)0xC13EBF4 = t459;
                t460 = *(int *)((((signed char)(((((t456 << 1) + ((t457 & 0x2) >> 1)) << 1) + ((t456 << 1) + ((t457 & 0x2) >> 1))) << 2) + (0x414 + ((int)stk + 4))) + 0x0));
                *(unsigned int *)0xC13EBF0 = t460;
            }
        } else {
            t468 = *(int *)((((signed char)((((((t317 - 1) << 1) + (t315 & 0x1)) << 1) + (((t317 - 1) << 1) + (t315 & 0x1))) << 2) + (0x48C + ((int)stk + 4))) + 0x8));
            *(unsigned int *)0xC13EBD4 = t468;
            t469 = *(int *)((((signed char)((((((t317 - 1) << 1) + (t315 & 0x1)) << 1) + (((t317 - 1) << 1) + (t315 & 0x1))) << 2) + (0x48C + ((int)stk + 4))) + 0x4));
            *(unsigned int *)0xC13EBD0 = t469;
            t470 = *(int *)((((signed char)((((((t317 - 1) << 1) + (t315 & 0x1)) << 1) + (((t317 - 1) << 1) + (t315 & 0x1))) << 2) + (0x48C + ((int)stk + 4))) + 0x0));
            *(unsigned int *)0xC13EBCC = t470;
            *(unsigned int *)0xC13EBD8 = 0x0;
            *(unsigned int *)0xC13EBE0 = 0x0;
            *(unsigned int *)0xC13EBDC = 0x0;
            t471 = *(int *)(((0x148 + a4) + 0x0));
            t472 = (int)(((unsigned int)t471 >> 29) & 0x7);
            t473 = *(int *)0xC13EB94;
            t474 = *(int *)((((signed char)(((((t472 << 1) + ((t473 & 0x2) >> 1)) << 1) + ((t472 << 1) + ((t473 & 0x2) >> 1))) << 2) + (0x414 + ((int)stk + 4))) + 0x8));
            *(unsigned int *)0xC13EBF8 = t474;
            t475 = *(int *)((((signed char)(((((t472 << 1) + ((t473 & 0x2) >> 1)) << 1) + ((t472 << 1) + ((t473 & 0x2) >> 1))) << 2) + (0x414 + ((int)stk + 4))) + 0x4));
            *(unsigned int *)0xC13EBF4 = t475;
            t476 = *(int *)((((signed char)(((((t472 << 1) + ((t473 & 0x2) >> 1)) << 1) + ((t472 << 1) + ((t473 & 0x2) >> 1))) << 2) + (0x414 + ((int)stk + 4))) + 0x0));
            *(unsigned int *)0xC13EBF0 = t476;
        }
    } else {
        t484 = *(int *)((((signed char)((((((t317 - 1) << 1) + (t315 & 0x1)) << 1) + (((t317 - 1) << 1) + (t315 & 0x1))) << 2) + (0x48C + ((int)stk + 4))) + 0x8));
        *(unsigned int *)0xC13EBD4 = t484;
        t485 = *(int *)((((signed char)((((((t317 - 1) << 1) + (t315 & 0x1)) << 1) + (((t317 - 1) << 1) + (t315 & 0x1))) << 2) + (0x48C + ((int)stk + 4))) + 0x4));
        *(unsigned int *)0xC13EBD0 = t485;
        t486 = *(int *)((((signed char)((((((t317 - 1) << 1) + (t315 & 0x1)) << 1) + (((t317 - 1) << 1) + (t315 & 0x1))) << 2) + (0x48C + ((int)stk + 4))) + 0x0));
        *(unsigned int *)0xC13EBCC = t486;
        *(unsigned int *)0xC13EBD8 = 0x0;
        *(unsigned int *)0xC13EBE0 = 0x0;
        *(unsigned int *)0xC13EBDC = 0x0;
        t487 = *(int *)(((0x148 + a4) + 0x0));
        t488 = (int)(((unsigned int)t487 >> 29) & 0x7);
        t489 = *(int *)0xC13EB94;
        t490 = *(int *)((((signed char)(((((t488 << 1) + ((t489 & 0x2) >> 1)) << 1) + ((t488 << 1) + ((t489 & 0x2) >> 1))) << 2) + (0x414 + ((int)stk + 4))) + 0x8));
        *(unsigned int *)0xC13EBF8 = t490;
        t491 = *(int *)((((signed char)(((((t488 << 1) + ((t489 & 0x2) >> 1)) << 1) + ((t488 << 1) + ((t489 & 0x2) >> 1))) << 2) + (0x414 + ((int)stk + 4))) + 0x4));
        *(unsigned int *)0xC13EBF4 = t491;
        t492 = *(int *)((((signed char)(((((t488 << 1) + ((t489 & 0x2) >> 1)) << 1) + ((t488 << 1) + ((t489 & 0x2) >> 1))) << 2) + (0x414 + ((int)stk + 4))) + 0x0));
        *(unsigned int *)0xC13EBF0 = t492;
    }
    Voice_ShutUp(0x1);
    Voice_Request(0xC13EBCC, 0x1, 0x7F, 0x0);
    Voice_ShutUp(0x2);
    t503 = Voice_Request(0xC13EBF0, 0x2, 0x7F, 0x0);
    return t503;
}
