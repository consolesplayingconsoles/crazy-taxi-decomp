extern int kyakuTaskExec();
/* Straight-line functions with calls and guards (batch gen_as): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Act_Init(void);
int Drv_StartAction(int, int, int);
int InitCollision(int);
int nd_peopleInitialize(int);
int nlSetPaletteMap(int, int);
int nlSetPaletteData(int, int, int);
int kmytex_FBAllocEntry(void);
int kmytex_FBEnQueueTop(int, int, int);
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
int initPlayerADV(void);
int initPlayer(void);
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




void kmiWriteFBRegister(void)
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


int kmiFBallocQueue(int a4, int a5, int a6, int a7)
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
            kmytex_FBEnQueueTop((((((short)a4 << 2) + (short)a4) << 2) + 0xC177FBC), ((((((short)a4 << 2) + (short)a4) << 2) + 0xC177FBC) + 0x4), t7);
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
            t28 = kmytex_FBAllocEntry();
            t47 = 0x3;
            if (t28 != 0) {
                t29 = *(int *)((t7 + 0xC));
                *(unsigned int *)((t28 + 0xC)) = t29;
                *(unsigned int *)((t28 + 0x10)) = t1;
                t30 = *(int *)((t7 + 0x10));
                *(unsigned int *)((t7 + 0x10)) = (t30 - t1);
                t31 = *(int *)((t7 + 0xC));
                *(unsigned int *)((t7 + 0xC)) = (t1 + t31);
                kmytex_FBEnQueueTop((((((short)a4 << 2) + (short)a4) << 2) + 0xC177FBC), ((((((short)a4 << 2) + (short)a4) << 2) + 0xC177FBC) + 0x4), t28);
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


int kmiInitializeDriver(void)
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
