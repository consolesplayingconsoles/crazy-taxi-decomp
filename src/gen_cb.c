/* Straight-line functions with calls and guards (batch gen_cb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXERR_CallErrFunc(void);
int ADXF_Close(int);
int ADXF_Open(int, int);
int ADXSTM_GetFad(int, int);
int Act_Execute(void);
int ExecColliObj(void);
int ExecHelicopter(void);
int ExecKyakuArea(void);
int ExecSetObject(void);
int FUN_0c02dc24(void);
int FUN_0c02dd52(void);
int FUN_0c02dd5a(void);
int FUN_0c02e4b2(void);
int FUN_0c041c14(void);
int FUN_0c041cb4(void);
int Exec_Fog(void);
int FUN_0c060334(void);
int RinAqua_Execute(void);
int GoiTool(int);
int LightEffect(int);
int PutCourse(void);
int ResetSpark(void);
int ShallWeHaveSomeRelaxation(float);
int acSystemGetSystemFlag(void);
int adxf_ChkPrmPt(int);
int adxf_LoadData(int, int, int);
int camUpdate(int);
int crowdSpawn(void);
int entryCarPut(int);
int execDCmini(void);
int execMiniLight(void);
int exec_CarMain(void);
int exec_KyakuMain(void);
int hudDraw(void);
int nlExecuteEvent(void);
int rtcGetSeconds(void);
int strlen(int);
int trafficControl(int);
void FUN_0c085c60(float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c04d504(int a4);
int FUN_0c039cd2(void);
int ADXF_AddPartition(int a4, int a5, int a6, int a7);
int gameStateDrive(void);
int FUN_0c05b11c(void);

void FUN_0c085c60(float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    
}

int FUN_0c04d504(int a4)
{
    int t0;
    int t1;
    int t2;
    int t7;
    int t3;
    int t4;
    int t5;
    int t6;

    t0 = strlen(a4);
    t1 = 0xC2A66A0;
    t2 = 0x0;
    do {
        t2 = (t2 + 0x1);
        *(unsigned int *)((t1 + 0x0)) = t0;
        t1 = (t1 + 0x4);
    } while ((int)t2 <= (int)0xFF);
    t7 = t0;
    if ((int)(t0 - 1) > 0) {
        t3 = (t0 - 1);
        t4 = a4;
        t5 = 0x0;
        do {
            t6 = *(signed char *)((t4 + 0x0));
            t4 = (t4 + 0x1);
            t5 = (t5 + 0x1);
            *(unsigned int *)((0xC2A66A0 + (t6 << 2))) = t3;
            t3 = (t3 - 1);
        } while ((int)t5 < (int)(t0 - 1));
        t7 = (t6 << 2);
    }
    return t7;
}

int FUN_0c039cd2(void)
{
    int t0;
    float u1;
    float u2;
    int t3;
    int t6;
    int t9;
    int t11;
    float u12;
    int t13;
    float u27;
    int t14;
    int t15;
    int t17;
    float u20;
    float u18;
    float u22;
    float u21;
    float u28;
    float u29;
    float u30;
    float u31;
    float u32;
    float u33;
    float u34;
    int t52;
    int t48;
    int t44;
    int t40;
    int t37;

    t0 = *(int *)0xC1EE250;
    if ((t0 & 4) == 0) {
        u1 = *(float *)0xC1EE2F8;
        if (!(u1 > 0.699999988f)) {
            u2 = *(float *)0xC1EE2FC;
            if (u2 > 0.699999988f) {
                t3 = *(int *)0xC2864B8;
                if (t3 == 0) {
                    *(unsigned int *)0xC2864B0 = 0x1;
                }
                *(unsigned int *)0xC2864B8 = 0x1;
            } else {
                *(unsigned int *)0xC2864B8 = 0x0;
            }
        } else {
            t6 = *(int *)0xC2864B8;
            if (t6 == 0) {
                *(unsigned int *)0xC2864B0 = 0x1;
            }
            *(unsigned int *)0xC2864B8 = 0x1;
        }
    } else {
        t9 = *(int *)0xC2864B8;
        if (t9 == 0) {
            *(unsigned int *)0xC2864B0 = 0x1;
        }
        *(unsigned int *)0xC2864B8 = 0x1;
    }
    t11 = *(int *)0xC1EE250;
    u12 = *(float *)0xC1EE2F4;
    t13 = *(int *)0xC1EE24C;
    if (t11 != 0) {
        *(unsigned int *)0xC0EE9EC = 0x0;
    }
    u27 = u12;
    if ((0xC0 & (t13 | t11)) != 0) {
        t14 = *(int *)0xC0EE9EC;
        if ((int)t14 <= (int)0x64) {
            t15 = *(int *)0xC0EE9EC;
            *(unsigned int *)0xC0EE9EC = (t15 + 0x1);
        }
        t17 = *(int *)0xC0EE9EC;
        u20 = (u12 - ((float)t17 * 0.00999999978f));
        if ((0x40 & (t13 | t11)) == 0) {
            u18 = u12;
            if (((t13 | t11) & 0x80) != 0) {
                u18 = (u12 + ((float)t17 * 0.00999999978f));
            }
            u20 = u18;
        }
        u22 = (-1.0f);
        if (!((-1.0f) > u20)) {
            u21 = u20;
            if (u20 > 1.0f) {
                u21 = 1.0f;
            }
            u22 = u21;
        }
        u27 = u22;
    }
    u28 = *(float *)0xC2864C0;
    if ((u27 < 0.0f ? -u27 : u27) > u28) {
        *(float *)0xC2864C0 = (u27 < 0.0f ? -u27 : u27);
    }
    u29 = *(float *)0xC2864C0;
    if (u29 > ((u27 < 0.0f ? -u27 : u27) * 1.29999995f)) {
        *(float *)0xC2864C0 = ((u27 < 0.0f ? -u27 : u27) * 1.29999995f);
    }
    u30 = *(float *)0xC2864C0;
    if (0.099999994f > u30) {
        *(float *)0xC2864C0 = 0.099999994f;
    }
    u31 = *(float *)0xC2864C0;
    if ((u27 < 0.0f ? -u27 : u27) > (u31 * 0.899999976f)) {
        u32 = *(float *)0xC2864C0;
        *(float *)0xC2864C0 = (u32 * 0.979999959f);
        if (u27 > 0.899999976f) {
            *(unsigned int *)0xC2864B4 = 0x4;
            t48 = 0xC039E24;
        } else {
            if (u27 > 0.199999988f) {
                *(unsigned int *)0xC2864B4 = 0x2;
                t44 = 0xC039E28;
            } else {
                if (u27 > 0.0f) {
                    *(unsigned int *)0xC2864B4 = 0x1;
                    t40 = 0xC039E28;
                } else {
                    u33 = *(float *)0xC039F88;
                    if (u33 > u27) {
                        *(unsigned int *)0xC2864B4 = 0xFFFFFFFC;
                        t37 = 0xC039F88;
                    } else {
                        u34 = *(float *)0xC039F8C;
                        if (u34 > u27) {
                            *(unsigned int *)0xC2864B4 = 0xFFFFFFFE;
                        } else {
                            if (0.0f > u27) {
                                *(unsigned int *)0xC2864B4 = 0xFFFFFFFF;
                            }
                        }
                        t37 = 0xC039F8C;
                    }
                    t40 = t37;
                }
                t44 = t40;
            }
            t48 = t44;
        }
        t52 = t48;
    } else {
        *(unsigned int *)0xC2864B4 = 0x0;
        t52 = 0xC039E1C;
    }
    return t52;
}

int ADXF_AddPartition(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t119;
    int t2;
    int t4;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t47;
    int t46;
    int t48;
    int t49;
    int t50;
    int t52;
    int t53;
    int t54;
    int t56;
    int t57;
    int t59;
    int t62;
    int t64;
    int t65;
    int t66;
    int t67;
    int t68;
    int t70;
    int t71;
    int t72;
    int t73;
    int t74;
    int t76;
    int t77;
    int t78;
    int t80;
    int t81;
    int t82;
    int t84;
    int t85;
    int t87;
    int t90;
    int t92;
    int t93;
    int t94;
    int t95;
    int t96;
    int t98;
    int t99;
    int t100;
    int t101;
    int t102;
    int t104;
    int t107;
    int t108;
    int t109;
    int t110;
    int t111;
    int t116;
    int t113;
    int stk[16] = {0};

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a7;
    t0 = *(int *)(((int)stk + 4));
    t1 = adxf_ChkPrmPt(t0);
    t119 = t1;
    if ((int)t1 >= 0) {
        t2 = ADXSTM_GetFad(a5, (((int)stk + 4) + 0x4));
        if ((int)t2 < 0) {
            ADXERR_CallErrFunc();
            t116 = 0xFFFFFFFF;
        } else {
            t4 = ADXF_Open(a5, (((int)stk + 4) + 0x14));
            *(unsigned int *)(((int)stk + 12)) = t4;
            if (t4 == 0) {
                ADXERR_CallErrFunc();
                t113 = 0xFFFFFFFF;
            } else {
                t6 = *(int *)(((int)stk + 4));
                t7 = *(int *)((((t6 << 2) + 0xC2B9F38) + 0x0));
                *(unsigned int *)((a6 + 0x0)) = t7;
                *(unsigned int *)((((t6 << 2) + 0xC2B9F38) + 0x0)) = a6;
                t8 = *(int *)(((int)stk + 8));
                *(unsigned int *)((a6 + 0x8)) = t8;
                *(unsigned char *)((a6 + 0x12)) = 0x1;
                *(unsigned int *)(((int)stk + 28)) = (a6 + 0x14);
                *(unsigned int *)(((int)stk + 20)) = 0x0;
                *(unsigned int *)((a6 + 0xC)) = 0x0;
                *(unsigned int *)(((int)stk + 4)) = 0xC2BD404;
                t9 = 0x0;
                t10 = 0x0;
                for (;;) {
                    if ((int)t9 >= (int)0x3) {
                        if (t9 == 3) {
                            ADXERR_CallErrFunc();
                            if (0xFFFFFFFF == -4) {
                                ADXERR_CallErrFunc();
                                t13 = *(short *)(((int)stk + 20));
                                *(unsigned short *)((a6 + 0x10)) = t13;
                                t14 = *(short *)((a6 + 0x10));
                                t15 = *(int *)((a6 + 0x0));
                                t16 = *(int *)((t15 + 0x4));
                                *(unsigned int *)((a6 + 0x4)) = (((((unsigned short)t14 << 2) << 1) + t16) + 0x14);
                                t17 = *(int *)(((int)stk + 12));
                                ADXF_Close(t17);
                                return 0xFFFFFFFF;
                            }
                            t19 = *(short *)(((int)stk + 20));
                            *(unsigned short *)((a6 + 0x10)) = t19;
                            t20 = *(short *)((a6 + 0x10));
                            t21 = *(int *)((a6 + 0x0));
                            t22 = *(int *)((t21 + 0x4));
                            *(unsigned int *)((a6 + 0x4)) = (((((unsigned short)t20 << 2) << 1) + t22) + 0x14);
                            t23 = *(int *)(((int)stk + 12));
                            ADXF_Close(t23);
                            return 0xFFFFFFFF;
                        }
                        if (0xFFFFFFFF == -4) {
                            ADXERR_CallErrFunc();
                            t26 = *(short *)(((int)stk + 20));
                            *(unsigned short *)((a6 + 0x10)) = t26;
                            t27 = *(short *)((a6 + 0x10));
                            t28 = *(int *)((a6 + 0x0));
                            t29 = *(int *)((t28 + 0x4));
                            *(unsigned int *)((a6 + 0x4)) = (((((unsigned short)t27 << 2) << 1) + t29) + 0x14);
                            t30 = *(int *)(((int)stk + 12));
                            ADXF_Close(t30);
                            return 0xFFFFFFFF;
                        }
                        t32 = *(short *)(((int)stk + 20));
                        *(unsigned short *)((a6 + 0x10)) = t32;
                        t33 = *(short *)((a6 + 0x10));
                        t34 = *(int *)((a6 + 0x0));
                        t35 = *(int *)((t34 + 0x4));
                        *(unsigned int *)((a6 + 0x4)) = (((((unsigned short)t33 << 2) << 1) + t35) + 0x14);
                        t36 = *(int *)(((int)stk + 12));
                        ADXF_Close(t36);
                        return 0xFFFFFFFF;
                    }
                    t38 = *(int *)(((int)stk + 12));
                    t39 = adxf_LoadData(t38, 0x1, 0xC2BD400);
                    if ((int)t39 > 0) {
                        t40 = *(int *)((a6 + 0xC));
                        if (t40 == 0) {
                            t41 = *(int *)(((int)stk + 4));
                            t42 = *(int *)((t41 + 0x0));
                            if ((int)t42 > (int)0x10000) break;
                            t43 = *(int *)(((int)stk + 4));
                            t44 = *(int *)(((int)stk + 16));
                            t45 = *(int *)((t43 + 0x0));
                            t47 = t45;
                            if ((int)t44 < (int)t45) {
                                t46 = *(int *)(((int)stk + 16));
                                t47 = t46;
                            }
                            *(unsigned int *)((a6 + 0xC)) = t47;
                            t9 = 0x200;
                            if ((int)0x2 < (int)t9) {
                                t48 = 0x2;
                                t49 = 0x200;
                                do {
                                    t50 = *(int *)((0xC2BD400 + (t48 << 2)));
                                    if (t50 == 0) {
                                        t48 = (t48 + 0x2);
                                    } else {
                                        t52 = *(int *)(((int)stk + 20));
                                        t49 = t52;
                                        t49 = (t49 + 0x1);
                                        *(unsigned int *)(((int)stk + 20)) = t49;
                                        t49 = (t49 - 1);
                                        t53 = *(int *)(((int)stk + 28));
                                        t49 = (t49 << 2);
                                        t49 = (t49 << 1);
                                        t49 = (t49 + t53);
                                        *(unsigned short *)((t49 + 0x0)) = t10;
                                        t54 = *(int *)((0xC2BD400 + (t48 << 2)));
                                        t48 = (t48 + 0x1);
                                        t56 = (int)((int)(t54 + 0x7FF) / (int)0x800);
                                        *(unsigned int *)((t49 + 0x4)) = t56;
                                        t57 = *(int *)((0xC2BD400 + (t48 << 2)));
                                        t48 = (t48 + 0x1);
                                        t59 = (int)((int)(t57 + 0x7FF) / (int)0x800);
                                        *(unsigned short *)((t49 + 0x2)) = t59;
                                    }
                                    t62 = *(int *)((a6 + 0xC));
                                    t10 = (t10 + 0x1);
                                    if ((int)t10 >= (int)t62) {
                                        if (0x0 == -4) {
                                            t48 = 0xC175724;
                                            t49 = a5;
                                            ADXERR_CallErrFunc();
                                            t64 = *(short *)(((int)stk + 20));
                                            *(unsigned short *)((a6 + 0x10)) = t64;
                                            t65 = *(short *)((a6 + 0x10));
                                            t66 = *(int *)((a6 + 0x0));
                                            t67 = *(int *)((t66 + 0x4));
                                            *(unsigned int *)((a6 + 0x4)) = (((((unsigned short)t65 << 2) << 1) + t67) + 0x14);
                                            t68 = *(int *)(((int)stk + 12));
                                            t48 = t68;
                                            ADXF_Close(t48);
                                            return 0x0;
                                        }
                                        t70 = *(short *)(((int)stk + 20));
                                        *(unsigned short *)((a6 + 0x10)) = t70;
                                        t71 = *(short *)((a6 + 0x10));
                                        t72 = *(int *)((a6 + 0x0));
                                        t73 = *(int *)((t72 + 0x4));
                                        *(unsigned int *)((a6 + 0x4)) = (((((unsigned short)t71 << 2) << 1) + t73) + 0x14);
                                        t74 = *(int *)(((int)stk + 12));
                                        t48 = t74;
                                        ADXF_Close(t48);
                                        return 0x0;
                                    }
                                } while ((int)t48 < (int)t9);
                                t9 = 0x0;
                                continue;
                            }
                            t9 = 0x0;
                            continue;
                        }
                        t9 = 0x200;
                        if ((int)0x0 < (int)t9) {
                            t76 = 0x0;
                            t77 = 0x200;
                            do {
                                t78 = *(int *)((0xC2BD400 + (t76 << 2)));
                                if (t78 == 0) {
                                    t76 = (t76 + 0x2);
                                } else {
                                    t80 = *(int *)(((int)stk + 20));
                                    t77 = t80;
                                    t77 = (t77 + 0x1);
                                    *(unsigned int *)(((int)stk + 20)) = t77;
                                    t77 = (t77 - 1);
                                    t81 = *(int *)(((int)stk + 28));
                                    t77 = (t77 << 2);
                                    t77 = (t77 << 1);
                                    t77 = (t77 + t81);
                                    *(unsigned short *)((t77 + 0x0)) = t10;
                                    t82 = *(int *)((0xC2BD400 + (t76 << 2)));
                                    t76 = (t76 + 0x1);
                                    t84 = (int)((int)(t82 + 0x7FF) / (int)0x800);
                                    *(unsigned int *)((t77 + 0x4)) = t84;
                                    t85 = *(int *)((0xC2BD400 + (t76 << 2)));
                                    t76 = (t76 + 0x1);
                                    t87 = (int)((int)(t85 + 0x7FF) / (int)0x800);
                                    *(unsigned short *)((t77 + 0x2)) = t87;
                                }
                                t90 = *(int *)((a6 + 0xC));
                                t10 = (t10 + 0x1);
                                if ((int)t10 >= (int)t90) {
                                    if (0x0 == -4) {
                                        t76 = 0xC175724;
                                        t77 = a5;
                                        ADXERR_CallErrFunc();
                                        t92 = *(short *)(((int)stk + 20));
                                        *(unsigned short *)((a6 + 0x10)) = t92;
                                        t93 = *(short *)((a6 + 0x10));
                                        t94 = *(int *)((a6 + 0x0));
                                        t95 = *(int *)((t94 + 0x4));
                                        *(unsigned int *)((a6 + 0x4)) = (((((unsigned short)t93 << 2) << 1) + t95) + 0x14);
                                        t96 = *(int *)(((int)stk + 12));
                                        t76 = t96;
                                        ADXF_Close(t76);
                                        return 0x0;
                                    }
                                    t98 = *(short *)(((int)stk + 20));
                                    *(unsigned short *)((a6 + 0x10)) = t98;
                                    t99 = *(short *)((a6 + 0x10));
                                    t100 = *(int *)((a6 + 0x0));
                                    t101 = *(int *)((t100 + 0x4));
                                    *(unsigned int *)((a6 + 0x4)) = (((((unsigned short)t99 << 2) << 1) + t101) + 0x14);
                                    t102 = *(int *)(((int)stk + 12));
                                    t76 = t102;
                                    ADXF_Close(t76);
                                    return 0x0;
                                }
                            } while ((int)t76 < (int)t9);
                            t9 = 0x0;
                            continue;
                        }
                        t9 = 0x0;
                        continue;
                    }
                    t9 = (t9 + 0x1);
                }
                t104 = *(int *)(((int)stk + 4));
                *(unsigned int *)((t104 + 0x0)) = 0x10000;
                if (0xFFFFFFFC == -4) {
                    ADXERR_CallErrFunc();
                }
                t107 = *(short *)(((int)stk + 20));
                *(unsigned short *)((a6 + 0x10)) = t107;
                t108 = *(short *)((a6 + 0x10));
                t109 = *(int *)((a6 + 0x0));
                t110 = *(int *)((t109 + 0x4));
                *(unsigned int *)((a6 + 0x4)) = (((((unsigned short)t108 << 2) << 1) + t110) + 0x14);
                t111 = *(int *)(((int)stk + 12));
                ADXF_Close(t111);
                t113 = 0xFFFFFFFC;
            }
            t116 = t113;
        }
        t119 = t116;
    }
    return t119;
}

int gameStateDrive(void)
{
    int t0;
    int t3;
    int t7;
    float u11;
    int t18;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t40;
    int t41;
    int t42;
    int t48;
    int t54;
    int t57;
    int t64;
    int t65;
    int t66;
    int t69;

    t0 = FUN_0c041c14();
    if (t0 == 1) {
        return t0;
    }
    camUpdate(0x0);
    Exec_Fog();
    t3 = *(int *)0xC1EE20C;
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 == 2) {
                execMiniLight();
            }
        } else {
            FUN_0c060334();
            t7 = acSystemGetSystemFlag();
            if (t7 != 0) {
                ShallWeHaveSomeRelaxation(-30.0f);
            }
        }
    } else {
        u11 = *(float *)0xC179844;
        if (-1237.0f > u11) {
            LightEffect(0x1);
            ResetSpark();
            RinAqua_Execute();
        } else {
            LightEffect(0x0);
        }
    }
    t18 = *(int *)0xC1EE234;
    if (t18 == 0) {
        FUN_0c02dd5a();
    } else {
        FUN_0c02dd52();
    }
    FUN_0c02dc24();
    FUN_0c02e4b2();
    exec_CarMain();
    t25 = *(int *)0xC1EE20C;
    if (t25 == 2) {
        t26 = *(int *)0xC1EE20C;
        if (t26 == 2) {
            t27 = *(int *)0xC1EE214;
            if (t27 != 1) {
                t28 = *(int *)0xC1EE214;
                if (t28 != 2) {
                    t29 = *(int *)0xC1EE214;
                    if (t29 != 3) {
                        t30 = *(int *)0xC1EE214;
                        if (t30 != 0) {
                            exec_KyakuMain();
                        }
                    }
                }
            }
        }
    } else {
        exec_KyakuMain();
    }
    ExecSetObject();
    t40 = *(int *)0xC1EE20C;
    if (t40 == 2) {
        t41 = *(int *)0xC1EE20C;
        if (t41 == 2) {
            t42 = *(int *)0xC1EE214;
            if (t42 != 0) {
                ExecKyakuArea();
            }
        }
    } else {
        ExecKyakuArea();
    }
    t48 = *(int *)0xC1EE20C;
    if (t48 == 0) {
        ExecHelicopter();
    }
    Act_Execute();
    entryCarPut(0x1);
    trafficControl(0x1);
    t54 = *(int *)0xC1EE20C;
    if (t54 != 2) {
        crowdSpawn();
    }
    t57 = *(int *)0xC1EE210;
    if (t57 == 2) {
        execDCmini();
    }
    nlExecuteEvent();
    ExecColliObj();
    PutCourse();
    GoiTool(0x1);
    t64 = *(int *)0xC1EE284;
    if ((t64 & 0x400) != 0) {
        t65 = *(int *)0xC0E5320;
        t66 = (int)((int)(t65 + 0x1) % (int)0x2);
        *(unsigned int *)0xC0E5320 = t66;
    }
    t69 = *(int *)0xC0E5320;
    if (t69 != 0) {
        hudDraw();
    }
    return FUN_0c041cb4();
}

int FUN_0c05b11c(void)
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
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
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
    int t36;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t56;
    int t71;
    int t72;
    int t73;
    int t75;
    int t76;
    int t77;
    int t78;
    int t79;
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
    int t96;
    int t101;
    int t102;
    int t103;
    int t104;
    int t105;
    int t106;
    int t107;
    int t110;
    int t111;
    int t112;
    int t113;
    int t114;
    int t116;
    int t129;

    t0 = rtcGetSeconds();
    t1 = t0;
    t2 = 0x63;
    for (;;) {
        t3 = *(int *)0xC2A97DC;
        if ((int)t2 >= (int)(t3 - 1)) {
            t4 = *(int *)0xC1EE210;
            t1 = t2;
            if (t1 == 99) {
                t5 = *(int *)0xC2A97DC;
                t1 = t5;
                if (t1 == 100) {
                    t6 = *(int *)0xC2A7600;
                    t7 = *(int *)((t6 + 0x0));
                    t1 = 0x140;
                    *(unsigned int *)((((0x140 + ((short)((short)t4 * (short)0x3C0) + 0xC28C318)) + (((t2 - 20) << 2) << 1)) + 0x0)) = t7;
                    t8 = *(int *)0xC1EE210;
                    t1 = (t1 + ((short)((short)t8 * (short)0x3C0) + 0xC28C318));
                    t1 = (t1 + (((t2 - 20) << 2) << 1));
                    *(unsigned int *)((t1 + 0x4)) = t0;
                } else {
                    if ((int)t2 >= (int)0x14) {
                        t1 = t2;
                        if (t1 != 99) {
                            t1 = 0x140;
                            t9 = *(int *)((((0x140 + ((short)((short)t4 * (short)0x3C0) + 0xC28C318)) + (((t2 - 20) << 2) << 1)) + 0x0));
                            *(unsigned int *)((((0x140 + ((short)((short)t4 * (short)0x3C0) + 0xC28C318)) + (((t2 - 20) << 2) << 1)) + 0x8)) = t9;
                            t10 = *(int *)0xC1EE210;
                            t11 = *(int *)((((((short)((short)t10 * (short)0x3C0) + 0xC28C318) + t1) + (((t2 - 20) << 2) << 1)) + 0x4));
                            *(unsigned int *)((((((short)((short)t10 * (short)0x3C0) + 0xC28C318) + t1) + (((t2 - 20) << 2) << 1)) + 0xC)) = t11;
                        }
                        t14 = *(int *)0xC2A97DC;
                        if (t2 == (t14 - 1)) {
                            t15 = *(int *)0xC1EE210;
                            t1 = 0x140;
                            t1 = (t1 + ((short)((short)t15 * (short)0x3C0) + 0xC28C318));
                            t16 = *(int *)0xC2A7600;
                            t1 = (t1 + (((t2 - 20) << 2) << 1));
                            t17 = *(int *)((t16 + 0x0));
                            *(unsigned int *)((t1 + 0x0)) = t17;
                            t18 = *(int *)0xC1EE210;
                            t1 = 0x140;
                            t1 = (t1 + ((short)((short)t18 * (short)0x3C0) + 0xC28C318));
                            t1 = (t1 + (((t2 - 20) << 2) << 1));
                            *(unsigned int *)((t1 + 0x4)) = t0;
                        }
                    } else {
                        t1 = t2;
                        if (t1 == 19) {
                            t22 = *(int *)(((((short)((short)t4 * (short)0x3C0) + 0xC28C318) + ((t2 << 2) << 2)) + 0x0));
                            t1 = 0x140;
                            *(unsigned int *)((((short)((short)t4 * (short)0x3C0) + 0xC28C318) + t1)) = t22;
                            t1 = (t1 + 0x4);
                            t23 = *(int *)0xC1EE210;
                            t24 = *(int *)(((((short)((short)t23 * (short)0x3C0) + 0xC28C318) + ((t2 << 2) << 2)) + 0xC));
                            *(unsigned int *)((((short)((short)t23 * (short)0x3C0) + 0xC28C318) + t1)) = t24;
                        } else {
                            t25 = *(int *)(((((short)((short)t4 * (short)0x3C0) + 0xC28C318) + ((t2 << 2) << 2)) + 0x0));
                            *(unsigned int *)(((((short)((short)t4 * (short)0x3C0) + 0xC28C318) + ((t2 << 2) << 2)) + 0x10)) = t25;
                            t26 = *(int *)0xC1EE210;
                            t27 = *(signed char *)(((((short)((short)t26 * (short)0x3C0) + 0xC28C318) + ((t2 << 2) << 2)) + 0x4));
                            t1 = t27;
                            *(unsigned char *)(((0x14 + (((short)((short)t26 * (short)0x3C0) + 0xC28C318) + ((t2 << 2) << 2))) + 0x0)) = t1;
                            t28 = *(int *)0xC1EE210;
                            t29 = *(signed char *)(((((short)((short)t28 * (short)0x3C0) + 0xC28C318) + ((t2 << 2) << 2)) + 0x5));
                            t1 = t29;
                            *(unsigned char *)(((0x15 + (((short)((short)t28 * (short)0x3C0) + 0xC28C318) + ((t2 << 2) << 2))) + 0x0)) = t1;
                            t30 = *(int *)0xC1EE210;
                            t31 = *(int *)(((((short)((short)t30 * (short)0x3C0) + 0xC28C318) + ((t2 << 2) << 2)) + 0xC));
                            t1 = t31;
                            *(unsigned int *)(((((short)((short)t30 * (short)0x3C0) + 0xC28C318) + ((t2 << 2) << 2)) + 0x1C)) = t1;
                            t32 = 0x0;
                            do {
                                t33 = *(int *)0xC1EE210;
                                t34 = *(signed char *)(((((((short)((short)t33 * (short)0x3C0) + 0xC28C318) + ((t2 << 2) << 2)) + 0x6) + t32) + 0x0));
                                t1 = t34;
                                t36 = (((((short)((short)t33 * (short)0x3C0) + 0xC28C318) + ((t2 << 2) << 2)) + 0x16) + t32);
                                t32 = (t32 + 0x1);
                                *(unsigned char *)((t36 + 0x0)) = t1;
                            } while ((int)t32 < (int)0x3);
                        }
                        t41 = *(int *)0xC2A97DC;
                        if (t2 == (t41 - 1)) {
                            t42 = *(int *)0xC1EE210;
                            t1 = ((short)((short)t42 * (short)0x3C0) + 0xC28C318);
                            t43 = *(int *)0xC2A7600;
                            t1 = (t1 + ((t2 << 2) << 2));
                            t44 = *(int *)((t43 + 0x0));
                            *(unsigned int *)((t1 + 0x0)) = t44;
                            t45 = *(int *)0xC1EE210;
                            t1 = ((short)((short)t45 * (short)0x3C0) + 0xC28C318);
                            t1 = (t1 + ((t2 << 2) << 2));
                            t46 = *(signed char *)0xC1794D0;
                            *(unsigned char *)(((0x4 + t1) + 0x0)) = t46;
                            t47 = *(int *)0xC1EE210;
                            t1 = t47;
                            t1 = ((short)t1 * (short)0x3C0);
                            t1 = (short)t1;
                            t1 = (t1 + 0xC28C318);
                            t50 = *(signed char *)0xC2A96F0;
                            t51 = (t1 + ((t2 << 2) << 2));
                            t1 = t50;
                            *(unsigned char *)((t51 + 0x5)) = t1;
                            t52 = *(int *)0xC1EE210;
                            t1 = ((short)((short)t52 * (short)0x3C0) + 0xC28C318);
                            t1 = (t1 + ((t2 << 2) << 2));
                            *(unsigned int *)((t1 + 0xC)) = t0;
                            t53 = 0x0;
                            do {
                                t54 = *(int *)0xC1EE210;
                                t1 = t54;
                                t1 = ((short)t1 * (short)0x3C0);
                                t1 = (short)t1;
                                t1 = (t1 + 0xC28C318);
                                t1 = (t1 + ((t2 << 2) << 2));
                                t56 = ((t1 + 0x6) + t53);
                                t53 = (t53 + 0x1);
                                *(unsigned char *)((t56 + 0x0)) = 0x2A;
                            } while ((int)t53 < (int)0x3);
                        }
                    }
                }
            } else {
                if ((int)t2 >= (int)0x14) {
                    t1 = t2;
                    if (t1 != 99) {
                        t1 = 0x140;
                        t71 = *(int *)((((0x140 + ((short)((short)t4 * (short)0x3C0) + 0xC28C318)) + (((t2 - 20) << 2) << 1)) + 0x0));
                        *(unsigned int *)((((0x140 + ((short)((short)t4 * (short)0x3C0) + 0xC28C318)) + (((t2 - 20) << 2) << 1)) + 0x8)) = t71;
                        t72 = *(int *)0xC1EE210;
                        t73 = *(int *)((((((short)((short)t72 * (short)0x3C0) + 0xC28C318) + t1) + (((t2 - 20) << 2) << 1)) + 0x4));
                        *(unsigned int *)((((((short)((short)t72 * (short)0x3C0) + 0xC28C318) + t1) + (((t2 - 20) << 2) << 1)) + 0xC)) = t73;
                    }
                    t75 = *(int *)0xC2A97DC;
                    if (t2 == (t75 - 1)) {
                        t76 = *(int *)0xC1EE210;
                        t1 = 0x140;
                        t1 = (t1 + ((short)((short)t76 * (short)0x3C0) + 0xC28C318));
                        t77 = *(int *)0xC2A7600;
                        t1 = (t1 + (((t2 - 20) << 2) << 1));
                        t78 = *(int *)((t77 + 0x0));
                        *(unsigned int *)((t1 + 0x0)) = t78;
                        t79 = *(int *)0xC1EE210;
                        t1 = 0x140;
                        t1 = (t1 + ((short)((short)t79 * (short)0x3C0) + 0xC28C318));
                        t1 = (t1 + (((t2 - 20) << 2) << 1));
                        *(unsigned int *)((t1 + 0x4)) = t0;
                    }
                } else {
                    t1 = t2;
                    if (t1 == 19) {
                        t82 = *(int *)(((((short)((short)t4 * (short)0x3C0) + 0xC28C318) + ((t2 << 2) << 2)) + 0x0));
                        t1 = 0x140;
                        *(unsigned int *)((((short)((short)t4 * (short)0x3C0) + 0xC28C318) + t1)) = t82;
                        t1 = (t1 + 0x4);
                        t83 = *(int *)0xC1EE210;
                        t84 = *(int *)(((((short)((short)t83 * (short)0x3C0) + 0xC28C318) + ((t2 << 2) << 2)) + 0xC));
                        *(unsigned int *)((((short)((short)t83 * (short)0x3C0) + 0xC28C318) + t1)) = t84;
                    } else {
                        t85 = *(int *)(((((short)((short)t4 * (short)0x3C0) + 0xC28C318) + ((t2 << 2) << 2)) + 0x0));
                        *(unsigned int *)(((((short)((short)t4 * (short)0x3C0) + 0xC28C318) + ((t2 << 2) << 2)) + 0x10)) = t85;
                        t86 = *(int *)0xC1EE210;
                        t87 = *(signed char *)(((((short)((short)t86 * (short)0x3C0) + 0xC28C318) + ((t2 << 2) << 2)) + 0x4));
                        t1 = t87;
                        *(unsigned char *)(((0x14 + (((short)((short)t86 * (short)0x3C0) + 0xC28C318) + ((t2 << 2) << 2))) + 0x0)) = t1;
                        t88 = *(int *)0xC1EE210;
                        t89 = *(signed char *)(((((short)((short)t88 * (short)0x3C0) + 0xC28C318) + ((t2 << 2) << 2)) + 0x5));
                        t1 = t89;
                        *(unsigned char *)(((0x15 + (((short)((short)t88 * (short)0x3C0) + 0xC28C318) + ((t2 << 2) << 2))) + 0x0)) = t1;
                        t90 = *(int *)0xC1EE210;
                        t91 = *(int *)(((((short)((short)t90 * (short)0x3C0) + 0xC28C318) + ((t2 << 2) << 2)) + 0xC));
                        t1 = t91;
                        *(unsigned int *)(((((short)((short)t90 * (short)0x3C0) + 0xC28C318) + ((t2 << 2) << 2)) + 0x1C)) = t1;
                        t92 = 0x0;
                        do {
                            t93 = *(int *)0xC1EE210;
                            t94 = *(signed char *)(((((((short)((short)t93 * (short)0x3C0) + 0xC28C318) + ((t2 << 2) << 2)) + 0x6) + t92) + 0x0));
                            t1 = t94;
                            t96 = (((((short)((short)t93 * (short)0x3C0) + 0xC28C318) + ((t2 << 2) << 2)) + 0x16) + t92);
                            t92 = (t92 + 0x1);
                            *(unsigned char *)((t96 + 0x0)) = t1;
                        } while ((int)t92 < (int)0x3);
                    }
                    t101 = *(int *)0xC2A97DC;
                    if (t2 == (t101 - 1)) {
                        t102 = *(int *)0xC1EE210;
                        t1 = ((short)((short)t102 * (short)0x3C0) + 0xC28C318);
                        t103 = *(int *)0xC2A7600;
                        t1 = (t1 + ((t2 << 2) << 2));
                        t104 = *(int *)((t103 + 0x0));
                        *(unsigned int *)((t1 + 0x0)) = t104;
                        t105 = *(int *)0xC1EE210;
                        t1 = ((short)((short)t105 * (short)0x3C0) + 0xC28C318);
                        t1 = (t1 + ((t2 << 2) << 2));
                        t106 = *(signed char *)0xC1794D0;
                        *(unsigned char *)(((0x4 + t1) + 0x0)) = t106;
                        t107 = *(int *)0xC1EE210;
                        t1 = t107;
                        t1 = ((short)t1 * (short)0x3C0);
                        t1 = (short)t1;
                        t1 = (t1 + 0xC28C318);
                        t110 = *(signed char *)0xC2A96F0;
                        t111 = (t1 + ((t2 << 2) << 2));
                        t1 = t110;
                        *(unsigned char *)((t111 + 0x5)) = t1;
                        t112 = *(int *)0xC1EE210;
                        t1 = ((short)((short)t112 * (short)0x3C0) + 0xC28C318);
                        t1 = (t1 + ((t2 << 2) << 2));
                        *(unsigned int *)((t1 + 0xC)) = t0;
                        t113 = 0x0;
                        do {
                            t114 = *(int *)0xC1EE210;
                            t1 = t114;
                            t1 = ((short)t1 * (short)0x3C0);
                            t1 = (short)t1;
                            t1 = (t1 + 0xC28C318);
                            t1 = (t1 + ((t2 << 2) << 2));
                            t116 = ((t1 + 0x6) + t113);
                            t113 = (t113 + 0x1);
                            *(unsigned char *)((t116 + 0x0)) = 0x2A;
                        } while ((int)t113 < (int)0x3);
                    }
                }
            }
            t2 = (t2 - 1);
            continue;
        }
        break;
    }
    t129 = *(int *)0xC1789C0;
    *(unsigned int *)0xC1789C0 = (t129 + 0x1);
    return t1;
}
