/* Straight-line functions with calls and guards (batch gen_as): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Act_Init(void);
int Drv_StartAction(int, int, int);
int FUN_0c031934(int);
int nd_peopleInitialize(int);
int FUN_0c074200(int, int);
int FUN_0c0770f0(int, int, int);
int FUN_0c1573a0(void);
int FUN_0c1573f2(int, int, int);
int GoiTool(int);
int InitColliObj(int);
int InitHelicopter(void);
int InitSetObject(void);
int Init_Fog(void);
int Init_Standard(void);
int LightEffect(int);
int Psg_Init(int, int, int);
int Psg_SetPosPtrSet(int, int);
int PutCourse_Init(int);
int ResetLight(void);
int Sound_Request(int, int);
int VSklIpPlay(int, int, int, int, int, int, float);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int colliBoxShapeInit(int, int);
int entryCarPut(int);
int extRandomSeed(int);
int humanDraw(int, int, int, int);
int initCamera(int);
int initPlayer(void);
int initPlayerADV(void);
int init_CarMain(void);
int init_GameSystem(void);
int init_KyakuMain(void);
int kmiGetProfileInt(int, int);
int kmiInitCallback(void);
int kmiInitRenderer(void);
int kmiInitializeBackGroundPlane(void);
int kmytex_FBDeQueueEntry(int, int, int);
int memset(int, int, int);
int nlCommonTextureGetNextTextureIndex(void);
int nlCreateTextureParam(int);
int nlInitEvent(void);
int nlInitHeapMemory(int, int);
int nlLoadTextureMem(int, int, int);
int nlSearchPalette(int, int);
int nlSpriteGetNextSpriteIndex(void);
int nlSpriteSetVtxContext(int);
int set_event(int, int);
int trafficControl(int);

int FUN_0c05187a(void)
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
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t24;
    int t25;
    int t26;
    int t28;
    int t30;
    int t29;
    int t31;
    int t32;

    t0 = *(int *)0xC2A75A4;
    t1 = *(int *)0xC2A751C;
    if (t0 != 1) {
        if (t0 != 2) {
            return t0;
        }
        t2 = *(int *)((t1 + 0x0));
        t3 = *(int *)((t1 + 0x0));
        t4 = *(int *)((0xC2A7538 + (t3 << 2)));
        t5 = *(int *)(((((t2 << 2) << 2) + 0xC130748) + 0xC));
        t6 = *(int *)(((((t2 << 2) << 2) + 0xC130748) + 0x8));
        return humanDraw(t6, t5, t4, 0x0);
    }
    t7 = *(int *)((t1 + 0x0));
    t8 = *(int *)((0xC2A7538 + (t7 << 2)));
    t9 = *(int *)0xC2A75B0;
    t10 = *(int *)((t1 + 0x0));
    t11 = *(int *)(((((t10 << 2) << 2) + 0xC130748) + 0xC));
    t12 = *(int *)0xC2A75AC;
    t13 = *(int *)(((((t10 << 2) << 2) + 0xC130748) + 0x8));
    t14 = *(int *)(((((t10 << 2) << 2) + 0xC130748) + 0x4));
    VSklIpPlay(t14, t12, t13, 0x0, t11, 0x0, ((float)t8 / (float)t9));
    t16 = *(int *)0xC2A751C;
    t17 = *(int *)((t16 + 0x0));
    t18 = *(int *)0xC2A75B0;
    t19 = *(int *)((0xC2A7538 + (t17 << 2)));
    if (t19 == (t18 - 1)) {
        t20 = *(int *)0xC2A75A4;
        *(unsigned int *)0xC2A75A4 = (t20 + 0x1);
        t21 = *(int *)0xC2A751C;
        t22 = *(int *)((t21 + 0x0));
        *(unsigned int *)((0xC2A7538 + (t22 << 2))) = 0x0;
        *(unsigned int *)0xC2A7518 = 0x3;
        Voice_ShutUp(0x0);
        t24 = *(int *)0xC2A751C;
        t25 = *(int *)((t24 + 0x0));
        t26 = *(int *)(((t25 << 2) + 0xC130710));
        Voice_Request(t26, 0x0, 0x7F, 0x0);
        t28 = *(int *)0xC2A75C0;
        t30 = t28;
        if (t28 == 4) {
            t29 = Sound_Request(0x308A9, 0x0);
            t30 = t29;
        }
        t31 = *(int *)0xC17948C;
        if (t31 != 0) {
            t32 = *(int *)0xC2A75C0;
            if (t32 != 4) {
                return Sound_Request(0x501A9, 0x0);
            }
            return t32;
        }
        return t30;
    }
    return (t17 << 2);
}

int InitColliObj(int a4)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;

    t0 = *(int *)0xC0ED80C;
    if (t0 != 0) {
        t1 = 0x0;
        do {
            colliBoxShapeInit(t1, (((t1 << 2) << 2) + 0xC0ED68C));
            t1 = (t1 + 0x1);
        } while ((int)t1 < (int)0xF);
        t3 = 0x0;
        do {
            t4 = 0x0;
            do {
                t5 = 0x0;
                if ((int)t3 < (int)0xF) {
                    t5 = 0x1;
                }
                t6 = 0x0;
                if ((int)t4 < (int)0xF) {
                    t6 = 0x1;
                }
                t7 = (t4 << 2);
                t4 = (t4 + 0x1);
                t8 = *(int *)((((((t5 << 2) << 1) + 0xC0ED7FC) + (t6 << 2)) + 0x0));
                *(unsigned int *)((((short)((short)t3 * (short)0x54) + 0xC26E4E8) + t7)) = t8;
            } while ((int)t4 < (int)0x15);
            t3 = (t3 + 0x1);
        } while ((int)t3 < (int)0x15);
        *(unsigned int *)0xC0ED80C = 0x0;
    }
    colliBoxShapeInit(0x0, (((a4 << 2) << 2) + 0xC0ED77C));
    t15 = 0x0;
    t16 = 0x0;
    do {
        t16 = (t16 + 0x1);
        *(unsigned int *)((0xC26EC24 + t15)) = 0x0;
        *(unsigned int *)((0xC26EBCC + t15)) = 0x0;
        *(unsigned int *)((0xC26EC7C + t15)) = 0x0;
        t17 = t15;
        t15 = (t15 + 0x4);
    } while ((int)t16 < (int)0x16);
    *(unsigned int *)0xC26ECD4 = 0x0;
    t18 = 0xC26F408;
    t19 = 0x0;
    do {
        t19 = (t19 + 0x1);
        *(unsigned int *)((t18 + 0x4)) = 0xFFFFFFFF;
        t18 = (t18 + 0x10);
    } while ((int)t19 < (int)0x100);
    return t17;
}

void kyakuTaskStart(int a4, int a5, int a6)
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
    int t11;
    int t13;
    float u14;
    float u15;
    float u16;
    int t18;
    int t19;
    int t24;
    int t28;
    int t29;
    int t30;
    int t32;
    int t33;

    t0 = set_event(0x248, 0xC024878);
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x174)) = 0x0;
        *(unsigned int *)((t0 + 0x14)) = a4;
        *(unsigned int *)((t0 + 0x18)) = a5;
        t1 = *(int *)0xC1794EC;
        t2 = (int)((int)t1 / (int)0x258);
        t3 = (int)((int)t2 % (int)0x3);
        *(unsigned int *)((t0 + 0x19C)) = t3;
        t4 = *(signed char *)((((a4 + 0x18) + t3) + 0x0));
        *(unsigned int *)((t0 + 0x198)) = (((short)((((t4 << 1) + t4) << 2) << 1) + 0xC1794F0) + 0x18);
        t5 = *(int *)((t0 + 0x14));
        t6 = *(int *)((t0 + 0x198));
        t7 = *(int *)((t5 + 0x4));
        t8 = *(int *)((t6 + 0x0));
        t9 = *(int *)(((t7 << 2) + 0xC08A9B8));
        Psg_Init((t0 + 0x1C), t9, t8);
        t11 = *(int *)((t0 + 0x14));
        Psg_SetPosPtrSet((t0 + 0x1C), (t11 + 0x8));
        *(float *)((t0 + 0x178)) = 0.699999988f;
        *(float *)((t0 + 0x17C)) = 35.0f;
        *(unsigned short *)((t0 + 0x180)) = 0x0;
        t13 = *(int *)((t0 + 0x14));
        u14 = *(float *)((((t3 << 2) + (t13 + 0x1C)) + 0x0));
        *(float *)((t0 + 0x194)) = ((u14 + -2000.0f) * 5.88235271e-05f);
        u15 = *(float *)((t0 + 0x194));
        if (u15 > 1.0f) {
            *(float *)((t0 + 0x194)) = 1.0f;
        }
        u16 = *(float *)((t0 + 0x194));
        if (0.0f > u16) {
            *(float *)((t0 + 0x194)) = 0.0f;
        }
    }
    t18 = *(int *)0xC1EE20C;
    if (t18 == 2) {
        t19 = *(int *)0xC1EE214;
        if (t19 == 8) {
            if ((int)a6 < (int)0x5) {
                *(unsigned int *)(((a6 << 2) + 0xC1794D4)) = t0;
            }
        }
        t24 = *(int *)0xC1EE214;
        if (t24 == 8) {
            *(float *)((t0 + 0x194)) = 1.0f;
        } else {
            if (t24 != 12) {
                if (t24 == 10) {
                    *(float *)((t0 + 0x194)) = 0.0f;
                }
            } else {
                *(float *)((t0 + 0x194)) = 0.0f;
            }
        }
        t28 = *(int *)0xC1EE214;
        if (t28 != 11) {
            if (t28 == 8) {
                t29 = *(int *)((t0 + 0x14));
                t30 = *(signed char *)(((t29 + 0x18) + 0x0));
                *(unsigned int *)((t0 + 0x170)) = t30;
            } else {
                *(unsigned int *)((t0 + 0x170)) = 0x0;
            }
        } else {
            t32 = *(int *)((t0 + 0x14));
            t33 = *(signed char *)(((t32 + 0x18) + 0x0));
            *(unsigned int *)((t0 + 0x170)) = t33;
        }
    } else {
        *(unsigned int *)((t0 + 0x170)) = 0x0;
    }
}

void FUN_0c16cb20(void)
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
    int stk[3];

    t0 = *(int *)(((((int)stk + 4) + 0x8) + 0x58));
    t1 = *(int *)(((((int)stk + 4) + 0x8) + 0x54));
    *(unsigned int *)0xC2EA934 = ((t0 & 0x7FF) | ((t1 & 0x7FF) << 16));
    t2 = *(int *)(((((int)stk + 4) + 0x8) + 0x60));
    t3 = *(int *)(((((int)stk + 4) + 0x8) + 0x5C));
    *(unsigned int *)0xC2EA938 = ((t2 & 0x7FF) | ((t3 & 0x7FF) << 16));
    t4 = *(int *)(((((int)stk + 4) + 0x8) + 0x48));
    t5 = *(int *)(((((int)stk + 4) + 0x8) + 0x4C));
    t6 = *(int *)(((((int)stk + 4) + 0x8) + 0x50));
    *(unsigned int *)0xC2EA93C = (((t4 & 0xF) | (((t5 & 0x1F) << 2) << 2)) | (((t6 & 0xF) << 8) << 1));
    t7 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    *(unsigned int *)0xC2EA6C0 = t7;
    t8 = *(int *)(((((int)stk + 4) + 0x8) + 0x4));
    *(unsigned int *)0xC2EA6C4 = t8;
    t9 = *(int *)(((((int)stk + 4) + 0x8) + 0x8));
    t10 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t11 = *(int *)(((((int)stk + 4) + 0x8) + 0x4));
    t12 = *(int *)0xC2EA6D4;
    if ((int)t12 > 0) {
        t13 = *(int *)0xC2EA6D4;
        *(unsigned int *)0xC2EA940 = (((t10 & 0x3FF) | ((((t11 - t13) & 0x3FF) << 8) << 2)) | ((((t9 & 0x3FF) << 16) << 2) << 2));
    } else {
        *(unsigned int *)0xC2EA940 = (((t10 & 0x3FF) | (((t11 & 0x3FF) << 8) << 2)) | ((((t9 & 0x3FF) << 16) << 2) << 2));
    }
    t19 = *(int *)(((((int)stk + 4) + 0x8) + 0x18));
    t20 = *(int *)(((((int)stk + 4) + 0x8) + 0x14));
    *(unsigned int *)0xC2EA97C = ((unsigned char)t20 | ((unsigned char)t19 << 8));
    t21 = *(int *)(((((int)stk + 4) + 0x8) + 0xC));
    t22 = *(int *)(((((int)stk + 4) + 0x8) + 0x1C));
    t23 = *(int *)(((((int)stk + 4) + 0x8) + 0x10));
    *(unsigned int *)0xC2EA980 = (((unsigned short)t23 | ((t21 & 0x1) << 16)) | (((t22 & 0x1) << 16) << 2));
    t24 = *(int *)(((((int)stk + 4) + 0x8) + 0x44));
    *(unsigned int *)0xC2EA944 = (t24 & 0x1FF);
    t25 = *(int *)(((((int)stk + 4) + 0x8) + 0x2C));
    t26 = *(int *)(((((int)stk + 4) + 0x8) + 0x30));
    t27 = *(int *)(((((int)stk + 4) + 0x8) + 0x34));
    t28 = *(int *)(((((int)stk + 4) + 0x8) + 0x38));
    *(unsigned int *)0xC2EA94C = ((((t26 & 0x7) | (((t25 & 0x1) << 2) << 1)) | ((unsigned char)t27 << 8)) | ((unsigned char)t28 << 16));
    t29 = *(int *)(((((int)stk + 4) + 0x8) + 0x28));
    t30 = *(int *)(((((int)stk + 4) + 0x8) + 0x3C));
    t31 = *(int *)(((((int)stk + 4) + 0x8) + 0x20));
    t32 = *(int *)(((((int)stk + 4) + 0x8) + 0x40));
    t33 = *(signed char *)(((((int)stk + 4) + 0x8) + 0x70));
    t34 = *(int *)(((((int)stk + 4) + 0x8) + 0x68));
    t35 = *(int *)(((((int)stk + 4) + 0x8) + 0x64));
    t36 = *(int *)(((((int)stk + 4) + 0x8) + 0x6C));
    *(unsigned int *)0xC2EA948 = ((((((((t31 & 0x1) | ((t29 & 0x1) << 1)) | ((t30 & 0x3) << 2)) | (((0x7 & t32) << 2) << 2)) | ((unsigned char)t33 << 8)) | ((0x1F & t34) << 16)) | ((t35 & 0x1) << 22)) | ((t36 & 0x1) << 23));
}

int kmiGetPackOBPParam(int a4, int a5, int a6, int a7, int a8, int a9)
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
    int t16;
    int t17;
    int t14;
    int t15;
    int t12;
    int t13;
    int t20;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
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
    int t39;
    int t42;
    int t41;
    int t40;
    int t18;
    int t19;
    int stk[11];

    t0 = *(int *)0xC174CA4;
    t1 = *(int *)0xC174CA0;
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t1;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t0;
    t2 = *(int *)0xC174CAC;
    t3 = *(int *)0xC174CA8;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t3;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = t2;
    t4 = *(int *)0xC2EA6E8;
    t5 = 0x0;
    if (a5 != 0) {
        t5 = 0x1;
    }
    t6 = 0x0;
    if (a7 != 0) {
        t6 = 0x1;
    }
    t7 = 0x0;
    if (a8 != 0) {
        t7 = 0x2;
    }
    if (a9 == 1) {
        t8 = 0x0;
        if (a4 != 0) {
            t8 = 0x2;
        }
        t9 = 0x0;
        if (a6 != 0) {
            t9 = 0x2;
        }
        t18 = t8;
        t19 = t9;
    } else {
        t10 = 0x0;
        if (a4 != 0) {
            t10 = 0x3;
        }
        t11 = 0x0;
        if (a6 != 0) {
            t11 = 0x3;
        }
        t16 = t10;
        t17 = t11;
        if (a4 != 0) {
            t14 = t10;
            t15 = t11;
            if (a6 != 0) {
                t12 = t10;
                t13 = 0x2;
                if ((unsigned int)a4 < (unsigned int)a6) {
                    t12 = 0x2;
                    t13 = t11;
                }
                t14 = t12;
                t15 = t13;
            }
            t16 = t14;
            t17 = t15;
        }
        t18 = t16;
        t19 = t17;
    }
    t20 = *(int *)0xC2EA9C4;
    t33 = t6;
    t34 = t5;
    t35 = t7;
    t36 = t18;
    t37 = t19;
    if (t20 == 1) {
        t21 = *(int *)0xC2EAAA0;
        t22 = t18;
        if (t21 == 32) {
            t22 = 0x3;
        }
        t23 = *(int *)0xC2EAAA0;
        t24 = t5;
        if (t23 == 33) {
            t24 = 0x2;
        }
        t25 = *(int *)0xC2EAAA0;
        t26 = t19;
        if (t25 == 34) {
            t26 = 0x3;
        }
        t27 = *(int *)0xC2EAAA0;
        t28 = t6;
        if (t27 == 35) {
            t28 = 0x2;
        }
        t29 = *(int *)0xC2EAAA0;
        t30 = t7;
        if (t29 == 36) {
            t30 = 0x3;
        }
        t33 = t28;
        t34 = t24;
        t35 = t30;
        t36 = t22;
        t37 = t26;
    }
    t39 = *(int *)0xC2EA684;
    if ((t39 & 32) != 0) {
        t42 = 0x0;
        if (t34 != 0) {
            t41 = 0x0;
            if (t37 != 0) {
                t40 = 0x0;
                if (t35 != 0) {
                    t40 = 0x1;
                }
                t41 = t40;
            }
            t42 = t41;
        }
        *(unsigned int *)0xC2EAAE4 = t42;
    }
    return ((unsigned char)t4 | ((((((((t36 << 16) << 1) & 0x60000) | ((((t34 << 16) << 2) << 1) & 0x180000)) | ((t37 << 21) & 0x600000)) | ((t33 << 23) & 0x1800000)) | ((((t35 << 16) << 8) << 1) & 0x6000000)) | 0x10000));
}

int Initialize_Replay(void)
{
    int t5;
    int t11;
    int t13;
    int t15;
    int t18;
    int t19;
    int t21;
    int t25;
    int t30;
    int t42;
    int t45;
    int t46;
    int t51;
    int t52;
    int t57;

    ResetLight();
    LightEffect(0x0);
    *(unsigned int *)0xC1799E4 = 0xC1799E8;
    nlInitHeapMemory(0xC1799E8, 0x30000);
    nlInitEvent();
    extRandomSeed(0x3039);
    t5 = *(int *)0xC1EE234;
    if (t5 == 0) {
        initPlayer();
    } else {
        initPlayerADV();
    }
    Init_Standard();
    init_GameSystem();
    t11 = *(int *)0xC179488;
    InitColliObj(t11);
    t13 = *(int *)0xC1EE20C;
    if (t13 != 0) {
        if (t13 != 1) {
            if (t13 != 2) {
                FUN_0c031934(t13);
                t15 = *(int *)0xC1EE20C;
                PutCourse_Init(t15);
                nd_peopleInitialize(0x46);
            } else {
                t18 = *(int *)0xC1EE214;
                t19 = t13;
                if (t18 != 15) {
                    t19 = t18;
                }
                FUN_0c031934(t19);
                t21 = *(int *)0xC1EE20C;
                PutCourse_Init(t21);
            }
        } else {
            FUN_0c031934(t13);
            t25 = *(int *)0xC1EE20C;
            PutCourse_Init(t25);
            nd_peopleInitialize(0x32);
        }
    } else {
        FUN_0c031934(t13);
        t30 = *(int *)0xC1EE20C;
        PutCourse_Init(t30);
        nd_peopleInitialize(0x46);
    }
    init_CarMain();
    initCamera(0x0);
    init_KyakuMain();
    InitSetObject();
    InitHelicopter();
    Act_Init();
    entryCarPut(0x0);
    trafficControl(0x0);
    t42 = *(int *)0xC2A4E50;
    if (t42 == 1) {
        Drv_StartAction(0x6, 0x0, 0x0);
    }
    t45 = *(int *)0xC1EE234;
    if (t45 == 1) {
        t46 = *(int *)0xC2A4E50;
        if (t46 == 0) {
            *(unsigned int *)0xC179120 = 0x1;
        }
    }
    t51 = *(int *)0xC1EE234;
    if (t51 != 0) {
        t52 = *(int *)0xC2A4E50;
        if (t52 == 1) {
            GoiTool(0x0);
        }
    } else {
        GoiTool(0x0);
    }
    t57 = Init_Fog();
    *(unsigned int *)0xC1EE240 = 0x0;
    return t57;
}

int FUN_0c156c32(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t7;
    int t3;
    int t4;
    int t5;
    int t6;
    int t54;
    int t9;
    int t17;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t28;
    int t47;
    int t29;
    int t30;
    int t31;
    int t38;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t50;
    int t25;
    int t45;

    t0 = ((~(((~a5) + 0x1) & 0x1F)) + 0x1);
    if ((int)a5 >= 0) {
        t0 = (a5 & 0x1F);
    }
    t1 = a5;
    if (t0 != 0) {
        t1 = (a5 + (0x20 - t0));
    }
    t2 = *(int *)(((((((short)a4 << 2) + (short)a4) << 2) + 0xC177FBC) + 0x8));
    t7 = 0x0;
    if (t2 != 0) {
        t3 = t2;
        t4 = 0x0;
        do {
            t5 = *(int *)((t3 + 0x10));
            if ((int)t5 >= (int)t1) {
                t4 = t3;
                t3 = 0x0;
            } else {
                t6 = *(int *)((t3 + 0x8));
                t3 = t6;
            }
        } while (t3 != 0);
        t7 = t4;
    }
    t54 = 0x3;
    if (t7 != 0) {
        t9 = *(int *)((t7 + 0x10));
        if (t9 == t1) {
            kmytex_FBDeQueueEntry(((((((short)a4 << 2) + (short)a4) << 2) + 0xC177FBC) + 0x8), ((((((short)a4 << 2) + (short)a4) << 2) + 0xC177FBC) + 0xC), t7);
            FUN_0c1573f2((((((short)a4 << 2) + (short)a4) << 2) + 0xC177FBC), ((((((short)a4 << 2) + (short)a4) << 2) + 0xC177FBC) + 0x4), t7);
            *(unsigned short *)((t7 + 0x0)) = 0x1;
            if ((short)a7 != 8) {
                t17 = 0x3;
                if ((short)a7 == 0x2000) {
                    t12 = *(int *)((t7 + 0xC));
                    *(unsigned int *)((a6 + 0x0)) = t12;
                    *(unsigned int *)((t7 + 0x14)) = a6;
                    t13 = *(short *)((t7 + 0x0));
                    *(unsigned short *)((t7 + 0x0)) = (t13 | 0x2000);
                    t14 = *(short *)((t7 + 0x0));
                    *(unsigned short *)((t7 + 0x0)) = (t14 | 0x4);
                    t15 = *(int *)((t7 + 0x10));
                    t16 = *(int *)(((((((short)a4 << 2) + (short)a4) << 2) + 0xC177FBC) + 0x10));
                    *(unsigned int *)(((((((short)a4 << 2) + (short)a4) << 2) + 0xC177FBC) + 0x10)) = (t16 - t15);
                    t17 = 0x0;
                }
                t25 = t17;
            } else {
                t20 = *(int *)((t7 + 0xC));
                *(unsigned int *)((a6 + 0x1C)) = t20;
                *(unsigned int *)((t7 + 0x14)) = a6;
                t21 = *(short *)((t7 + 0x0));
                *(unsigned short *)((t7 + 0x0)) = (t21 | 0x8);
                t22 = *(short *)((t7 + 0x0));
                *(unsigned short *)((t7 + 0x0)) = (t22 | 0x4);
                t23 = *(int *)((t7 + 0x10));
                t24 = *(int *)(((((((short)a4 << 2) + (short)a4) << 2) + 0xC177FBC) + 0x10));
                *(unsigned int *)(((((((short)a4 << 2) + (short)a4) << 2) + 0xC177FBC) + 0x10)) = (t24 - t23);
                t25 = 0x0;
            }
            t50 = t25;
        } else {
            t28 = FUN_0c1573a0();
            t47 = 0x3;
            if (t28 != 0) {
                t29 = *(int *)((t7 + 0xC));
                *(unsigned int *)((t28 + 0xC)) = t29;
                *(unsigned int *)((t28 + 0x10)) = t1;
                t30 = *(int *)((t7 + 0x10));
                *(unsigned int *)((t7 + 0x10)) = (t30 - t1);
                t31 = *(int *)((t7 + 0xC));
                *(unsigned int *)((t7 + 0xC)) = (t1 + t31);
                FUN_0c1573f2((((((short)a4 << 2) + (short)a4) << 2) + 0xC177FBC), ((((((short)a4 << 2) + (short)a4) << 2) + 0xC177FBC) + 0x4), t28);
                if ((short)a7 != 8) {
                    t38 = 0x3;
                    if ((short)a7 == 0x2000) {
                        t33 = *(int *)((t28 + 0xC));
                        *(unsigned int *)((a6 + 0x0)) = t33;
                        *(unsigned int *)((t28 + 0x14)) = a6;
                        t34 = *(short *)((t28 + 0x0));
                        *(unsigned short *)((t28 + 0x0)) = (t34 | 0x2000);
                        t35 = *(short *)((t28 + 0x0));
                        *(unsigned short *)((t28 + 0x0)) = (t35 | 0x4);
                        t36 = *(int *)((t28 + 0x10));
                        t37 = *(int *)(((((((short)a4 << 2) + (short)a4) << 2) + 0xC177FBC) + 0x10));
                        *(unsigned int *)(((((((short)a4 << 2) + (short)a4) << 2) + 0xC177FBC) + 0x10)) = (t37 - t36);
                        t38 = 0x0;
                    }
                    t45 = t38;
                } else {
                    t40 = *(int *)((t28 + 0xC));
                    *(unsigned int *)((a6 + 0x1C)) = t40;
                    *(unsigned int *)((t28 + 0x14)) = a6;
                    t41 = *(short *)((t28 + 0x0));
                    *(unsigned short *)((t28 + 0x0)) = (t41 | 0x8);
                    t42 = *(short *)((t28 + 0x0));
                    *(unsigned short *)((t28 + 0x0)) = (t42 | 0x4);
                    t43 = *(int *)((t28 + 0x10));
                    t44 = *(int *)(((((((short)a4 << 2) + (short)a4) << 2) + 0xC177FBC) + 0x10));
                    *(unsigned int *)(((((((short)a4 << 2) + (short)a4) << 2) + 0xC177FBC) + 0x10)) = (t44 - t43);
                    t45 = 0x0;
                }
                t47 = t45;
            }
            t50 = t47;
        }
        t54 = t50;
    }
    return t54;
}

int nlSpriteLoadTextureOnce_Sub(int a4, int a5, int a6, int a7)
{
    int t1;
    int t0;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
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
    int t22;
    int t23;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t34;
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
    int t55;
    int t52;
    int t59;
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
    int t91;
    int t88;
    int t95;
    int t142;
    int t143;
    int t144;
    int t148;
    int t149;
    int t151;
    int t152;
    int t153;
    int t154;
    int t155;
    int t160;
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
    int t181;
    int t178;
    int t185;
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
    int t217;
    int t214;
    int t221;
    int t261;
    int t135;
    int t58;
    int t94;
    int t184;
    int t220;

    t1 = a6;
    if (a7 == 1) {
        t0 = *(int *)(((((a6 << 2) << 2) + a4) + 0xC));
        t1 = t0;
    }
    t2 = *(int *)0xC2B3184;
    t3 = *(int *)0xC2AEC84;
    t4 = *(int *)(((t3 + (((t1 + t2) << 2) << 1)) + 0x0));
    if (t4 == 0) {
        t5 = *(int *)0xC2AEC84;
        t6 = nlCommonTextureGetNextTextureIndex();
        *(unsigned int *)((((t5 + (((t1 + t2) << 2) << 1)) + 0x4) + 0x0)) = t6;
    }
    t8 = *(int *)0xC2AEC84;
    t9 = *(int *)(((t8 + (((t1 + t2) << 2) << 1)) + 0x0));
    *(unsigned int *)(((t8 + (((t1 + t2) << 2) << 1)) + 0x0)) = (t9 + 0x1);
    t10 = *(int *)0xC2AEC84;
    t11 = *(int *)0xC2B76B8;
    t12 = *(int *)(((t10 + (((t1 + t2) << 2) << 1)) + 0x4));
    t13 = *(short *)(((((t1 + t2) << 1) + t11) + 0x0));
    t14 = *(int *)0xC2B29C0;
    if (t13 == -1) {
        t15 = nlSpriteGetNextSpriteIndex();
        if (t15 != -1) {
            t16 = *(int *)0xC2B76B8;
            *(unsigned short *)((((t1 + t2) << 1) + t16)) = t15;
            t17 = *(int *)((((t12 * 0x3C) + t14) + 0x2C));
            if (t17 == 0) {
                t18 = *(int *)(((((a6 << 2) << 2) + a4) + 0x8));
                nlLoadTextureMem((((a6 << 2) << 2) + a4), t12, t18);
                nlCreateTextureParam(t12);
                *(unsigned int *)((((t12 * 0x3C) + t14) + 0x38)) = t12;
            }
            t22 = *(int *)((((t12 * 0x3C) + t14) + 0x2C));
            *(unsigned int *)((((t12 * 0x3C) + t14) + 0x2C)) = (t22 + 0x1);
            t23 = *(int *)0xC2B76C8;
            nlSpriteSetVtxContext(((((t15 << 2) << 2) << 1) + t23));
            if (a5 != 0) {
                t25 = *(int *)0xC2B76C8;
                t26 = *(int *)(((a6 << 2) + a5));
                t27 = *(int *)((((((t15 << 2) << 2) << 1) + t25) + 0xC));
                *(unsigned short *)((((((t15 << 2) << 2) << 1) + t25) + 0x16)) = 0xFFFF;
                t28 = *(int *)0xC14A644;
                if (t28 != 0) {
                    if ((0x7 & ((unsigned int)t27 >> 27)) != 5) {
                        if ((0x7 & ((unsigned int)t27 >> 27)) == 6) {
                            t29 = *(int *)((((((t15 << 2) << 2) << 1) + t25) + 0xC));
                            *(unsigned int *)((((((t15 << 2) << 2) << 1) + t25) + 0xC)) = ((t29 & 0xF81FFFFF) | (t26 << 21));
                        }
                    } else {
                        t34 = *(int *)((((((t15 << 2) << 2) << 1) + t25) + 0xC));
                        *(unsigned int *)((((((t15 << 2) << 2) << 1) + t25) + 0xC)) = ((t34 & 0xF81FFFFF) | (t26 << 21));
                    }
                } else {
                    t39 = *(int *)0xC2B3568;
                    if (t39 != 0) {
                        if ((0x7 & ((unsigned int)t27 >> 27)) != 5) {
                            if ((0x7 & ((unsigned int)t27 >> 27)) == 6) {
                                t40 = *(short *)0xC2B7BC4;
                                if ((int)t26 < (int)t40) {
                                    *(unsigned short *)((((((t15 << 2) << 2) << 1) + t25) + 0x16)) = t26;
                                    t41 = *(int *)0xC2B7BD8;
                                    t42 = *(int *)0xC2B3568;
                                    t43 = *(short *)(((t41 + ((t26 << 2) << 1)) + 0x4));
                                    if (t43 != 0) {
                                        t44 = *(short *)(((t41 + ((t26 << 2) << 1)) + 0x4));
                                        *(unsigned short *)(((t41 + ((t26 << 2) << 1)) + 0x4)) = (t44 + 0x1);
                                        t45 = *(short *)(((t41 + ((t26 << 2) << 1)) + 0x0));
                                        t58 = t45;
                                    } else {
                                        t46 = *(signed char *)((((((t26 << 1) + t26) << 2) + t42) + 0x2));
                                        *(unsigned char *)(((t41 + ((t26 << 2) << 1)) + 0x2)) = t46;
                                        t47 = *(int *)((((((t26 << 1) + t26) << 2) + t42) + 0x8));
                                        *(unsigned char *)(((t41 + ((t26 << 2) << 1)) + 0x3)) = ((int)(t47 + 0xF) >> 4);
                                        *(unsigned short *)(((t41 + ((t26 << 2) << 1)) + 0x4)) = 0x1;
                                        *(unsigned short *)(((t41 + ((t26 << 2) << 1)) + 0x6)) = t26;
                                        t48 = *(int *)((((((t26 << 1) + t26) << 2) + t42) + 0x8));
                                        t49 = *(short *)((((((t26 << 1) + t26) << 2) + t42) + 0x2));
                                        t50 = nlSearchPalette(t49, t48);
                                        t55 = 0x0;
                                        if ((int)t50 >= 0) {
                                            *(unsigned short *)(((t41 + ((t26 << 2) << 1)) + 0x0)) = t50;
                                            FUN_0c074200(t50, t48);
                                            t52 = *(int *)((((((t26 << 1) + t26) << 2) + t42) + 0x4));
                                            FUN_0c0770f0(((t50 << 2) << 2), t52, t48);
                                            t55 = t50;
                                        }
                                        t58 = t55;
                                    }
                                    t59 = *(int *)((((((t15 << 2) << 2) << 1) + t25) + 0xC));
                                    *(unsigned int *)((((((t15 << 2) << 2) << 1) + t25) + 0xC)) = ((t59 & 0xF81FFFFF) | (t58 << 21));
                                }
                            }
                        } else {
                            t76 = *(short *)0xC2B7BC4;
                            if ((int)t26 < (int)t76) {
                                *(unsigned short *)((((((t15 << 2) << 2) << 1) + t25) + 0x16)) = t26;
                                t77 = *(int *)0xC2B7BD8;
                                t78 = *(int *)0xC2B3568;
                                t79 = *(short *)(((t77 + ((t26 << 2) << 1)) + 0x4));
                                if (t79 != 0) {
                                    t80 = *(short *)(((t77 + ((t26 << 2) << 1)) + 0x4));
                                    *(unsigned short *)(((t77 + ((t26 << 2) << 1)) + 0x4)) = (t80 + 0x1);
                                    t81 = *(short *)(((t77 + ((t26 << 2) << 1)) + 0x0));
                                    t94 = t81;
                                } else {
                                    t82 = *(signed char *)((((((t26 << 1) + t26) << 2) + t78) + 0x2));
                                    *(unsigned char *)(((t77 + ((t26 << 2) << 1)) + 0x2)) = t82;
                                    t83 = *(int *)((((((t26 << 1) + t26) << 2) + t78) + 0x8));
                                    *(unsigned char *)(((t77 + ((t26 << 2) << 1)) + 0x3)) = ((int)(t83 + 0xF) >> 4);
                                    *(unsigned short *)(((t77 + ((t26 << 2) << 1)) + 0x4)) = 0x1;
                                    *(unsigned short *)(((t77 + ((t26 << 2) << 1)) + 0x6)) = t26;
                                    t84 = *(int *)((((((t26 << 1) + t26) << 2) + t78) + 0x8));
                                    t85 = *(short *)((((((t26 << 1) + t26) << 2) + t78) + 0x2));
                                    t86 = nlSearchPalette(t85, t84);
                                    t91 = 0x0;
                                    if ((int)t86 >= 0) {
                                        *(unsigned short *)(((t77 + ((t26 << 2) << 1)) + 0x0)) = t86;
                                        FUN_0c074200(t86, t84);
                                        t88 = *(int *)((((((t26 << 1) + t26) << 2) + t78) + 0x4));
                                        FUN_0c0770f0(((t86 << 2) << 2), t88, t84);
                                        t91 = t86;
                                    }
                                    t94 = t91;
                                }
                                t95 = *(int *)((((((t15 << 2) << 2) << 1) + t25) + 0xC));
                                *(unsigned int *)((((((t15 << 2) << 2) << 1) + t25) + 0xC)) = ((t95 & 0xF81FFFFF) | (t94 << 21));
                            }
                        }
                    }
                }
            }
            t135 = 0x0;
        } else {
            *(unsigned int *)0xC2B76B4 = 0x3;
            t135 = 0x2;
        }
        t261 = t135;
    } else {
        t142 = *(short *)(((((t1 + t2) << 1) + t11) + 0x0));
        t143 = *(int *)((((t12 * 0x3C) + t14) + 0x2C));
        if (t143 == 0) {
            t144 = *(int *)(((((a6 << 2) << 2) + a4) + 0x8));
            nlLoadTextureMem((((a6 << 2) << 2) + a4), t12, t144);
            nlCreateTextureParam(t12);
            *(unsigned int *)((((t12 * 0x3C) + t14) + 0x38)) = t12;
        }
        t148 = *(int *)((((t12 * 0x3C) + t14) + 0x2C));
        *(unsigned int *)((((t12 * 0x3C) + t14) + 0x2C)) = (t148 + 0x1);
        t149 = *(int *)0xC2B76C8;
        nlSpriteSetVtxContext(((((t142 << 2) << 2) << 1) + t149));
        if (a5 != 0) {
            t151 = *(int *)0xC2B76C8;
            t152 = *(int *)(((a6 << 2) + a5));
            t153 = *(int *)((((((t142 << 2) << 2) << 1) + t151) + 0xC));
            *(unsigned short *)((((((t142 << 2) << 2) << 1) + t151) + 0x16)) = 0xFFFF;
            t154 = *(int *)0xC14A644;
            if (t154 != 0) {
                if ((0x7 & ((unsigned int)t153 >> 27)) != 5) {
                    if ((0x7 & ((unsigned int)t153 >> 27)) == 6) {
                        t155 = *(int *)((((((t142 << 2) << 2) << 1) + t151) + 0xC));
                        *(unsigned int *)((((((t142 << 2) << 2) << 1) + t151) + 0xC)) = ((t155 & 0xF81FFFFF) | (t152 << 21));
                    }
                } else {
                    t160 = *(int *)((((((t142 << 2) << 2) << 1) + t151) + 0xC));
                    *(unsigned int *)((((((t142 << 2) << 2) << 1) + t151) + 0xC)) = ((t160 & 0xF81FFFFF) | (t152 << 21));
                }
            } else {
                t165 = *(int *)0xC2B3568;
                if (t165 != 0) {
                    if ((0x7 & ((unsigned int)t153 >> 27)) != 5) {
                        if ((0x7 & ((unsigned int)t153 >> 27)) == 6) {
                            t166 = *(short *)0xC2B7BC4;
                            if ((int)t152 < (int)t166) {
                                *(unsigned short *)((((((t142 << 2) << 2) << 1) + t151) + 0x16)) = t152;
                                t167 = *(int *)0xC2B7BD8;
                                t168 = *(int *)0xC2B3568;
                                t169 = *(short *)(((t167 + ((t152 << 2) << 1)) + 0x4));
                                if (t169 != 0) {
                                    t170 = *(short *)(((t167 + ((t152 << 2) << 1)) + 0x4));
                                    *(unsigned short *)(((t167 + ((t152 << 2) << 1)) + 0x4)) = (t170 + 0x1);
                                    t171 = *(short *)(((t167 + ((t152 << 2) << 1)) + 0x0));
                                    t184 = t171;
                                } else {
                                    t172 = *(signed char *)((((((t152 << 1) + t152) << 2) + t168) + 0x2));
                                    *(unsigned char *)(((t167 + ((t152 << 2) << 1)) + 0x2)) = t172;
                                    t173 = *(int *)((((((t152 << 1) + t152) << 2) + t168) + 0x8));
                                    *(unsigned char *)(((t167 + ((t152 << 2) << 1)) + 0x3)) = ((int)(t173 + 0xF) >> 4);
                                    *(unsigned short *)(((t167 + ((t152 << 2) << 1)) + 0x4)) = 0x1;
                                    *(unsigned short *)(((t167 + ((t152 << 2) << 1)) + 0x6)) = t152;
                                    t174 = *(int *)((((((t152 << 1) + t152) << 2) + t168) + 0x8));
                                    t175 = *(short *)((((((t152 << 1) + t152) << 2) + t168) + 0x2));
                                    t176 = nlSearchPalette(t175, t174);
                                    t181 = 0x0;
                                    if ((int)t176 >= 0) {
                                        *(unsigned short *)(((t167 + ((t152 << 2) << 1)) + 0x0)) = t176;
                                        FUN_0c074200(t176, t174);
                                        t178 = *(int *)((((((t152 << 1) + t152) << 2) + t168) + 0x4));
                                        FUN_0c0770f0(((t176 << 2) << 2), t178, t174);
                                        t181 = t176;
                                    }
                                    t184 = t181;
                                }
                                t185 = *(int *)((((((t142 << 2) << 2) << 1) + t151) + 0xC));
                                *(unsigned int *)((((((t142 << 2) << 2) << 1) + t151) + 0xC)) = ((t185 & 0xF81FFFFF) | (t184 << 21));
                            }
                        }
                    } else {
                        t202 = *(short *)0xC2B7BC4;
                        if ((int)t152 < (int)t202) {
                            *(unsigned short *)((((((t142 << 2) << 2) << 1) + t151) + 0x16)) = t152;
                            t203 = *(int *)0xC2B7BD8;
                            t204 = *(int *)0xC2B3568;
                            t205 = *(short *)(((t203 + ((t152 << 2) << 1)) + 0x4));
                            if (t205 != 0) {
                                t206 = *(short *)(((t203 + ((t152 << 2) << 1)) + 0x4));
                                *(unsigned short *)(((t203 + ((t152 << 2) << 1)) + 0x4)) = (t206 + 0x1);
                                t207 = *(short *)(((t203 + ((t152 << 2) << 1)) + 0x0));
                                t220 = t207;
                            } else {
                                t208 = *(signed char *)((((((t152 << 1) + t152) << 2) + t204) + 0x2));
                                *(unsigned char *)(((t203 + ((t152 << 2) << 1)) + 0x2)) = t208;
                                t209 = *(int *)((((((t152 << 1) + t152) << 2) + t204) + 0x8));
                                *(unsigned char *)(((t203 + ((t152 << 2) << 1)) + 0x3)) = ((int)(t209 + 0xF) >> 4);
                                *(unsigned short *)(((t203 + ((t152 << 2) << 1)) + 0x4)) = 0x1;
                                *(unsigned short *)(((t203 + ((t152 << 2) << 1)) + 0x6)) = t152;
                                t210 = *(int *)((((((t152 << 1) + t152) << 2) + t204) + 0x8));
                                t211 = *(short *)((((((t152 << 1) + t152) << 2) + t204) + 0x2));
                                t212 = nlSearchPalette(t211, t210);
                                t217 = 0x0;
                                if ((int)t212 >= 0) {
                                    *(unsigned short *)(((t203 + ((t152 << 2) << 1)) + 0x0)) = t212;
                                    FUN_0c074200(t212, t210);
                                    t214 = *(int *)((((((t152 << 1) + t152) << 2) + t204) + 0x4));
                                    FUN_0c0770f0(((t212 << 2) << 2), t214, t210);
                                    t217 = t212;
                                }
                                t220 = t217;
                            }
                            t221 = *(int *)((((((t142 << 2) << 2) << 1) + t151) + 0xC));
                            *(unsigned int *)((((((t142 << 2) << 2) << 1) + t151) + 0xC)) = ((t221 & 0xF81FFFFF) | (t220 << 21));
                        }
                    }
                }
            }
        }
        t261 = 0x0;
    }
    return t261;
}

int FUN_0c1583c4(void)
{
    int t0;
    int t1;
    int t4;
    int t5;
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

    t0 = *(int *)0xC178268;
    if (t0 == 0) {
        *(unsigned int *)0xC178268 = 0xC2EA67C;
        t1 = *(int *)0xC178268;
        memset(t1, 0x0, 0x4F4);
    }
    *(unsigned int *)0xC2EAB70 = 0x3;
    *(unsigned int *)0xC2EAB74 = 0x2;
    *(unsigned int *)0xC2EAB78 = 0x6;
    *(unsigned int *)0xC2EAB7C = 0x1;
    *(unsigned int *)0xC2EAB80 = 0xC177FF8;
    *(unsigned int *)0xC2EA67C = 0xC2EAB70;
    *(unsigned int *)0xC2EA6B4 = 0x0;
    *(unsigned int *)0xC2EA6B8 = 0x0;
    *(unsigned int *)0xC2EA6BC = 0x0;
    *(unsigned int *)0xC2EA6D0 = 0x0;
    *(unsigned int *)0xC2EA6D4 = 0x0;
    *(unsigned int *)0xC2EAB58 = 0x1F0;
    *(unsigned int *)0xC2EAB5C = 0x200;
    *(unsigned int *)0xC2EAB60 = 0x210;
    *(unsigned int *)0xC2EAB64 = 0x220;
    *(unsigned int *)0xC2EAB68 = 0x230;
    kmiInitCallback();
    *(unsigned int *)0xC2EA888 = 0x0;
    *(unsigned int *)0xC2EA88C = 0x0;
    t4 = kmiGetProfileInt(0xC175C18, 0xC175C20);
    *(unsigned int *)0xC2EA864 = (t4 - 1);
    t5 = *(int *)0xC2EA864;
    *(unsigned int *)0xC2EA860 = t5;
    *(unsigned int *)0xC2EA690 = 0x10000;
    *(unsigned int *)0xC2EA694 = 0x800000;
    *(unsigned int *)0xC2EA698 = 0x800000;
    *(unsigned int *)0xC2EA848 = 0x0;
    *(unsigned int *)0xC2EA844 = 0x0;
    *(unsigned int *)0xC2EA840 = 0x0;
    *(unsigned int *)0xC2EA85C = 0x3;
    *(unsigned int *)0xC2EA928 = 0x1;
    kmiInitializeBackGroundPlane();
    t7 = kmiGetProfileInt(0xC175C18, 0xC175C2C);
    t8 = kmiGetProfileInt(0xC175C18, 0xC175C38);
    t9 = kmiGetProfileInt(0xC175C18, 0xC175C44);
    t10 = kmiGetProfileInt(0xC175C18, 0xC175C54);
    *(unsigned int *)0xC2EA714 = (((((unsigned int)((unsigned int)((unsigned int)t9 >> 8) >> 2) >> 1) << 8) << 2) << 1);
    *(unsigned int *)0xC2EA718 = (((((unsigned int)((unsigned int)((unsigned int)t10 >> 8) >> 2) >> 1) << 8) << 2) << 1);
    t11 = t10;
    t12 = 0xC2EA714;
    t13 = 0xC2EA718;
    t14 = 0x0;
    t15 = 0x0;
    t16 = 0x0;
    while ((unsigned int)t15 < (unsigned int)0x20) {
        t11 = 0xC2EA6EC;
        *(unsigned int *)((t15 + t11)) = t14;
        t12 = t14;
        t13 = t11;
        t12 = (t12 + (((((unsigned int)((unsigned int)((unsigned int)t7 >> 8) >> 2) >> 1) << 8) << 2) << 1));
        t13 = (t13 + t15);
        *(unsigned int *)((t13 + 0x4)) = t12;
        t12 = t14;
        t13 = t11;
        t12 = (t12 + ((((((unsigned int)((unsigned int)((unsigned int)t7 >> 8) >> 2) >> 1) << 8) << 2) << 1) + (((((unsigned int)((unsigned int)((unsigned int)t8 >> 8) >> 2) >> 1) << 8) << 2) << 1)));
        t13 = (t13 + t15);
        *(unsigned int *)((t13 + 0x8)) = t12;
        t12 = ((((((unsigned int)((unsigned int)((unsigned int)t9 >> 8) >> 2) >> 1) << 8) << 2) << 1) + ((((((unsigned int)((unsigned int)((unsigned int)t7 >> 8) >> 2) >> 1) << 8) << 2) << 1) + (((((unsigned int)((unsigned int)((unsigned int)t8 >> 8) >> 2) >> 1) << 8) << 2) << 1)));
        t13 = t11;
        t13 = (t13 + t15);
        t12 = (t12 + t14);
        *(unsigned int *)((t13 + 0xC)) = t12;
        t13 = 0x7D0000;
        t11 = 0xC2EA70C;
        t13 = (t13 - t14);
        *(unsigned int *)((t16 + t11)) = t13;
        t15 = (t15 + 0x10);
        t14 = (t14 + 0x400000);
        t16 = (t16 + 0x4);
    }
    *(unsigned int *)0xC2EA9C4 = 0x0;
    *(unsigned int *)0xC2EAAA0 = 0x0;
    *(unsigned int *)0xC2EA9CC = 0x0;
    *(unsigned int *)0xC2EA9D0 = 0xFFFFFFFF;
    *(unsigned int *)0xC2EA9D4 = 0xFFFFFFFF;
    *(unsigned int *)0xC2EA9D8 = 0xFFFFFFFF;
    *(unsigned int *)0xC2EA9DC = 0x0;
    *(unsigned int *)0xC2EA9E0 = 0x0;
    *(unsigned int *)0xC2EA9E4 = 0x0;
    *(unsigned int *)0xC2EAAAC = 0x0;
    *(unsigned int *)0xC2EAAB4 = 0x0;
    *(unsigned int *)0xC2EAAB0 = 0x1;
    t17 = kmiGetProfileInt(0xC175C64, 0xC175C74);
    *(unsigned int *)0xC2EAAC0 = t17;
    t18 = kmiGetProfileInt(0xC175C64, 0xC175C80);
    *(unsigned int *)0xC2EAAC4 = t18;
    t19 = kmiGetProfileInt(0xC175C18, 0xC175C8C);
    *(unsigned int *)0xC2EA6E4 = t19;
    t20 = kmiGetProfileInt(0xC175C18, 0xC175C9C);
    *(unsigned int *)0xC2EA8A4 = t20;
    t21 = kmiGetProfileInt(0xC175C18, 0xC175CAC);
    *(unsigned int *)0xC2EA8A8 = t21;
    t22 = kmiGetProfileInt(0xC175C18, 0xC175CBC);
    *(unsigned int *)0xC2EA8AC = t22;
    *(unsigned int *)0xC2EA854 = 0x0;
    *(unsigned int *)0xC2EA858 = 0x1;
    *(unsigned int *)0xC2EA6E8 = 0xF;
    t23 = *(int *)0xC2EA6E8;
    *(unsigned int *)0xC2EA6E8 = (t23 | 0x0);
    *(unsigned int *)0xC2EA898 = 0x0;
    *(unsigned int *)0xC2EA89C = 0x0;
    t24 = kmiInitRenderer();
    return t24;
}
