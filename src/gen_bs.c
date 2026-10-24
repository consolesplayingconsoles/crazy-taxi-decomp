/* Straight-line functions with calls and guards (batch gen_bs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int, ...);
int ADXF_GetFileRange(int, int, int);
int ADXSTM_OpenRange(int, int, int);
int ADXT_Stop(void);
int gdFsLockDir(int);
int kmiWriteDispModeRegisters(void);
int mwRnaLockCs(int);
int adxt_start_stm(int);
int gdFsGetDirEnt(int, int, int, int);
int gdFsSearchName(int, int, int);
int gdFsSearchPath(int, int, int, int);
int gdFsSearchPath_dds(int, int, int, int, int);
int kmiDiscardRenderPipeline(void);
int kmiFBControl(int, int, int, int, int, int);
int kmiGetProfileInt(int, int);
int kmiInitNTSC(void);
int kmiInitPAL(void);
int kmiInitVGA(void);
int mwRnaAdjustBuf(int);
int mwRnaErrCallFunc(int, ...);
int mwRnaGetPlaySw(int);
int mwRnaGetTransSw(int);
int mwRnaSetPlaySw(int, int);
int mwRnaUnlockCs(int);
int mwlRnaAddFlshPos(int);
int mwlRnaAddRdPos(int);
int mwlRnaAddWrPos(int);
int mwlRnaWaitTransEnd(int);
int mwRnaSetDrctLvl(int a4, int a5);
int mwRnaSetOutPan(int a4, int a5, int a6);
int mwRnaSetBitPerSmpl(int a4, int a5);
int mwRnaSetOutVol(int a4, int a5);
int ADXT_StartAfs(int a4, int a5, int a6);
int mwRnaSetFx(int a4, int a5, int a6);
int mwRnaPause(int a4);
int mwRnaSetTransSw(int a4, int a5);
int gdFsLoadDirG(int a4, int a5);
int kmSetDisplayMode(int a4, int a5, int a6, int a7);

int mwRnaSetDrctLvl(int a4, int a5)
{
    int t0;
    int t2;
    int t1;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    if (a4 == 0) {
        t0 = mwRnaErrCallFunc(0xC176680);
        t7 = t0;
    } else {
        t2 = 0xFFFFFFD3;
        if ((int)a5 >= (int)0xFFFFFFD3) {
            t1 = a5;
            if ((int)a5 > 0) {
                t1 = 0x0;
            }
            t2 = t1;
        }
        t3 = *(int *)((a4 + 0x38));
        t4 = *(int *)((t3 + 0x0));
        t5 = *(int *)((t4 + 0x44));
        t6 = ((int (*)(int, int, int, int))(t5))(t3, 0x2, t2, 0x0);
        *(unsigned int *)((a4 + 0x84)) = t2;
        t7 = 0x84;
    }
    return t7;
}

int mwRnaSetOutPan(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t1;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;

    if (a4 == 0) {
        t0 = mwRnaErrCallFunc(0xC176680);
        t8 = t0;
    } else {
        t2 = 0xFFFFFFF1;
        if ((int)a6 >= (int)0xFFFFFFF1) {
            t1 = a6;
            if ((int)a6 > (int)0xF) {
                t1 = 0xF;
            }
            t2 = t1;
        }
        t4 = *(int *)((a4 + 0x38));
        t5 = *(int *)((t4 + 0x0));
        t6 = *(int *)((t5 + 0x3C));
        t7 = ((int (*)(int, int, int))(t6))(t4, a5, t2);
        *(unsigned int *)((((a5 << 2) + (a4 + 0x64)) + 0x0)) = t2;
        t8 = t7;
    }
    return t8;
}

int mwRnaSetBitPerSmpl(int a4, int a5)
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

    if (a4 == 0) {
        t0 = mwRnaErrCallFunc(0xC176680);
        t9 = t0;
    } else {
        t1 = *(int *)((a4 + 0x28));
        t2 = *(int *)((a4 + 0x8));
        t3 = (t1 * t2);
        if ((int)(t1 * t2) < 0) {
            t3 = ((t1 * t2) + 0x7);
        }
        t4 = (int)((int)(((t3 >> 1) >> 1) >> 1) / (int)a5);
        *(unsigned int *)((a4 + 0x28)) = ((t4 << 2) << 1);
        t5 = *(int *)((a4 + 0x38));
        t6 = *(int *)((t5 + 0x0));
        t7 = *(int *)((t6 + 0x2C));
        t8 = ((int (*)(int, int))(t7))(t5, a5);
        *(unsigned int *)((a4 + 0x8)) = a5;
        t9 = t8;
    }
    return t9;
}

int mwRnaSetOutVol(int a4, int a5)
{
    int t0;
    int t2;
    int t1;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;

    if (a4 == 0) {
        t0 = mwRnaErrCallFunc(0xC176680);
        t8 = t0;
    } else {
        t2 = 0x0;
        if ((int)a5 < 0) {
            t1 = a5;
            if ((int)a5 <= (int)0xFFFFFC19) {
                t1 = 0xFFFFFC19;
            }
            t2 = t1;
        }
        t4 = *(int *)((a4 + 0x38));
        t5 = *(int *)((t4 + 0x0));
        t6 = *(int *)((t5 + 0x34));
        t7 = ((int (*)(int, int))(t6))(t4, t2);
        *(unsigned int *)((a4 + 0x60)) = t2;
        t8 = 0x60;
    }
    return t8;
}

int mwRnaSetFx(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t3;
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t9;
    int t11;
    int t10;
    int t8;

    if (a4 == 0) {
        t0 = mwRnaErrCallFunc(0xC176680);
        t11 = t0;
    } else {
        if ((int)a5 >= 0) {
            if ((int)a5 > (int)0x10) {
                t1 = mwRnaErrCallFunc(0xC176758);
                t8 = t1;
            } else {
                t3 = 0xFFFFFFD3;
                if ((int)a6 >= (int)0xFFFFFFD3) {
                    t2 = a6;
                    if ((int)a6 > 0) {
                        t2 = 0x0;
                    }
                    t3 = t2;
                }
                t4 = *(int *)((a4 + 0x38));
                t5 = *(int *)((t4 + 0x0));
                t6 = *(int *)((t5 + 0x44));
                t7 = ((int (*)(int, int, int, int))(t6))(t4, 0x0, a5, t3);
                *(unsigned int *)((a4 + 0x6C)) = a5;
                *(unsigned int *)((a4 + 0x70)) = t3;
                t8 = 0x70;
            }
            t10 = t8;
        } else {
            t9 = mwRnaErrCallFunc(0xC176758);
            t10 = t9;
        }
        t11 = t10;
    }
    return t11;
}

int mwRnaPause(int a4)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t7;
    int t14;
    int t15;
    int stk[6] = {0};

    if (a4 == 0) {
        t0 = mwRnaErrCallFunc(0xC176680);
        t15 = t0;
    } else {
        mwRnaLockCs(((int)stk + 8));
        t2 = *(signed char *)((a4 + 0x7));
        if (t2 == 0) {
            t3 = mwRnaGetPlaySw(a4);
            t4 = mwRnaGetTransSw(a4);
            *(unsigned int *)((a4 + 0x88)) = ((t3 << 1) | t4);
            mwlRnaAddRdPos(a4);
            mwRnaSetPlaySw(a4, 0x0);
            *(unsigned char *)((a4 + 0x7)) = 0x1;
            t7 = *(signed char *)((a4 + 0x5));
            if ((unsigned char)t7 == 1) {
                *(unsigned int *)((a4 + 0x8C)) = 0x1;
                mwRnaUnlockCs(((int)stk + 8));
                mwlRnaWaitTransEnd(a4);
                mwRnaLockCs(((int)stk + 8));
                *(unsigned int *)((a4 + 0x8C)) = 0x0;
            }
            mwRnaAdjustBuf(a4);
        }
        t14 = mwRnaUnlockCs(((int)stk + 8));
        t15 = t14;
    }
    return t15;
}

int mwRnaSetTransSw(int a4, int a5)
{
    int t0;
    int t1;
    int t3;
    int t9;
    int t10;
    int t11;
    int t12;
    int t14;
    int t15;
    int t16;
    int t17;
    int t21;
    int t22;
    int stk[7] = {0};

    *(unsigned int *)(((int)stk + 12)) = a5;
    if (a4 == 0) {
        t0 = mwRnaErrCallFunc(0xC176680);
        t22 = t0;
    } else {
        *(unsigned int *)((a4 + 0x8C)) = 0x1;
        t1 = *(signed char *)((a4 + 0x5));
        if ((unsigned char)t1 == 1) {
            mwlRnaWaitTransEnd(a4);
            t3 = mwRnaGetTransSw(a4);
            if (t3 == 1) {
                mwlRnaAddWrPos(a4);
            } else {
                mwlRnaAddFlshPos(a4);
            }
            *(unsigned char *)((a4 + 0x5)) = 0x0;
        }
        mwRnaLockCs(((int)stk + 8));
        *(unsigned int *)((a4 + 0x8C)) = 0x0;
        t9 = *(int *)(((int)stk + 12));
        if (t9 == 0) {
            t10 = mwRnaGetTransSw(a4);
            if (t10 != 0) {
                t11 = *(int *)((a4 + 0x2C));
                *(unsigned int *)((a4 + 0x50)) = t11;
                *(unsigned int *)((a4 + 0x54)) = 0x0;
                *(unsigned int *)((a4 + 0x58)) = 0x0;
                t12 = *(signed char *)((a4 + 0x1));
                *(unsigned char *)((a4 + 0x1)) = (t12 & 0x6);
            }
        } else {
            t14 = *(int *)(((int)stk + 12));
            if (t14 == 1) {
                t15 = mwRnaGetTransSw(a4);
                if (t15 != 1) {
                    *(unsigned int *)((a4 + 0x2C)) = 0x0;
                    *(unsigned int *)((a4 + 0x30)) = 0x0;
                    *(unsigned int *)((a4 + 0x34)) = 0x0;
                    *(unsigned char *)((a4 + 0x6)) = 0x0;
                    *(unsigned int *)((a4 + 0x5C)) = 0x0;
                    *(unsigned int *)((a4 + 0x48)) = 0x0;
                    *(unsigned int *)((a4 + 0x4C)) = 0x0;
                    *(unsigned int *)((a4 + 0x3C)) = 0x0;
                    *(unsigned char *)((a4 + 0x4)) = 0x0;
                    t16 = *(int *)((a4 + 0x2C));
                    *(unsigned int *)((a4 + 0x50)) = t16;
                    *(unsigned int *)((a4 + 0x54)) = 0x0;
                    t17 = *(signed char *)((a4 + 0x1));
                    *(unsigned char *)((a4 + 0x1)) = (t17 | 0x1);
                }
            }
        }
        t21 = mwRnaUnlockCs(((int)stk + 8));
        t22 = t21;
    }
    return t22;
}

int gdFsLoadDirG(int a4, int a5)
{
    int t0;
    int t2;
    int t1;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t25;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t28;
    int t29;
    int t50;
    int t30;
    int t31;
    int t32;
    int t47;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t56;
    int t57;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    int t76;
    int t64;
    int t65;
    int t66;
    int t67;
    int t68;
    int t69;
    int t79;
    int t53;
    int t12;
    int t63;

    t0 = *(int *)0xC177A8C;
    t2 = a5;
    if (a5 == 0) {
        t1 = *(int *)((t0 + 0x10));
        t2 = t1;
    }
    t3 = *(signed char *)((a4 + 0x0));
    t4 = *(int *)0xC2B8D74;
    if (t3 != 47) {
        if (t3 == 92) {
            t5 = *(short *)((t4 + 0x0));
            if (t5 == 1) {
                t6 = *(int *)((t0 + 0x4));
                t7 = *(int *)((t0 + 0x8));
                t8 = gdFsSearchPath_dds(((t0 + 0x40) + 0x40), t6, t7, a4, (0x8 + t4));
                t12 = t8;
            } else {
                t9 = *(int *)((t0 + 0x4));
                t10 = *(int *)((t0 + 0x8));
                t11 = gdFsSearchPath(((t0 + 0x40) + 0x40), t9, t10, a4);
                t12 = t11;
            }
            t25 = 0xFFFFFFF8;
            if (t12 != 0) {
                t13 = *(int *)0xC177A8C;
                t14 = gdFsGetDirEnt((t13 + 0x40), (0x96 + t12), t2, 0x800);
                t15 = *(int *)0xC2B8D74;
                t16 = *(short *)((t15 + 0x0));
                if (t16 == 1) {
                    t17 = *(int *)0xC2B8D74;
                    t18 = *(int *)((t17 + 0x4));
                    if (t18 == (0x96 + t12)) {
                        if (t14 != 0) {
                            if (t14 == -12) {
                                gdFsLockDir(t2);
                            }
                        } else {
                            gdFsLockDir(t2);
                        }
                    }
                }
                t25 = t14;
            }
            t53 = t25;
        } else {
            t28 = *(int *)((t0 + 0x10));
            t29 = gdFsSearchName(a4, t28, 0x0);
            t50 = 0xFFFFFFF8;
            if (t29 != 0) {
                t30 = *(int *)0xC177A8C;
                t31 = *(int *)((t30 + 0x10));
                t32 = *(signed char *)((((t31 + 0x10) + ((t29 - 1) * 0x2C)) + 0x8));
                t47 = 0xFFFFFFF5;
                if (((unsigned char)t32 & 2) != 0) {
                    t33 = *(int *)((((t31 + 0x10) + ((t29 - 1) * 0x2C)) + 0x0));
                    t34 = *(int *)((((t31 + 0x10) + ((t29 - 1) * 0x2C)) + 0x4));
                    t35 = *(int *)0xC177A8C;
                    t36 = gdFsGetDirEnt((t35 + 0x40), (t33 + 0x96), t2, t34);
                    t37 = *(int *)0xC2B8D74;
                    t38 = *(short *)((t37 + 0x0));
                    if (t38 == 1) {
                        t39 = *(int *)0xC2B8D74;
                        t40 = *(int *)((t39 + 0x4));
                        if (t40 == (t33 + 0x96)) {
                            if (t36 != 0) {
                                if (t36 == -12) {
                                    gdFsLockDir(t2);
                                }
                            } else {
                                gdFsLockDir(t2);
                            }
                        }
                    }
                    t47 = t36;
                }
                t50 = t47;
            }
            t53 = t50;
        }
        t79 = t53;
    } else {
        t56 = *(short *)((t4 + 0x0));
        if (t56 == 1) {
            t57 = *(int *)((t0 + 0x4));
            t58 = *(int *)((t0 + 0x8));
            t59 = gdFsSearchPath_dds(((t0 + 0x40) + 0x40), t57, t58, a4, (0x8 + t4));
            t63 = t59;
        } else {
            t60 = *(int *)((t0 + 0x4));
            t61 = *(int *)((t0 + 0x8));
            t62 = gdFsSearchPath(((t0 + 0x40) + 0x40), t60, t61, a4);
            t63 = t62;
        }
        t76 = 0xFFFFFFF8;
        if (t63 != 0) {
            t64 = *(int *)0xC177A8C;
            t65 = gdFsGetDirEnt((t64 + 0x40), (0x96 + t63), t2, 0x800);
            t66 = *(int *)0xC2B8D74;
            t67 = *(short *)((t66 + 0x0));
            if (t67 == 1) {
                t68 = *(int *)0xC2B8D74;
                t69 = *(int *)((t68 + 0x4));
                if (t69 == (0x96 + t63)) {
                    if (t65 != 0) {
                        if (t65 == -12) {
                            gdFsLockDir(t2);
                        }
                    } else {
                        gdFsLockDir(t2);
                    }
                }
            }
            t76 = t65;
        }
        t79 = t76;
    }
    return t79;
}

