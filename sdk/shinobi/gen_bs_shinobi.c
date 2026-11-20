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
struct o44_int { char p[0x44]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };


int gdFsLoadDirG(int a4, int a5)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t9;
    int t10;
    int t13;
    int t15;
    int t16;
    int t17;
    int t18;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t37;
    int t38;
    int t39;
    int t40;
    int t56;
    int t57;
    int t58;
    int t60;
    int t61;
    int t64;
    int t66;
    int t67;
    int t68;
    int t69;
    int t79;
    int t12;
    int t63;

    t0 = *(int *)0xC177A8C;
    t2 = a5;
    if (a5 == 0) {
        t2 = *(int *)((t0 + 0x10));
    }
    t3 = *(signed char *)((a4 + 0x0));
    t4 = *(int *)0xC2B8D74;
    if (t3 != 47) {
        if (t3 == 92) {
            t5 = *(short *)((t4 + 0x0));
            if (t5 == 1) {
                t6 = *(int *)((t0 + 0x4));
                t7 = *(int *)((t0 + 0x8));
                t12 = gdFsSearchPath_dds(((t0 + 0x40) + 0x40), t6, t7, a4, (0x8 + t4));
            } else {
                t9 = *(int *)((t0 + 0x4));
                t10 = *(int *)((t0 + 0x8));
                t12 = gdFsSearchPath(((t0 + 0x40) + 0x40), t9, t10, a4);
            }
            t79 = 0xFFFFFFF8;
            if (t12 != 0) {
                t13 = *(int *)0xC177A8C;
                t79 = gdFsGetDirEnt((t13 + 0x40), (0x96 + t12), t2, 0x800);
                t15 = *(int *)0xC2B8D74;
                t16 = *(short *)((t15 + 0x0));
                if (t16 == 1) {
                    t17 = *(int *)0xC2B8D74;
                    t18 = *(int *)((t17 + 0x4));
                    if (t18 == (0x96 + t12)) {
                        if (t79 != 0) {
                            if (t79 == -12) {
                                gdFsLockDir(t2);
                            }
                        } else {
                            gdFsLockDir(t2);
                        }
                    }
                }
            }
        } else {
            t28 = *(int *)((t0 + 0x10));
            t29 = gdFsSearchName(a4, t28, 0x0);
            t79 = 0xFFFFFFF8;
            if (t29 != 0) {
                t30 = *(int *)0xC177A8C;
                t31 = *(int *)((t30 + 0x10));
                t32 = *(signed char *)((((t31 + 0x10) + ((t29 - 1) * 0x2C)) + 0x8));
                t79 = 0xFFFFFFF5;
                if (((unsigned char)t32 & 2) != 0) {
                    t33 = *(int *)((((t31 + 0x10) + ((t29 - 1) * 0x2C)) + 0x0));
                    t34 = *(int *)((((t31 + 0x10) + ((t29 - 1) * 0x2C)) + 0x4));
                    t35 = *(int *)0xC177A8C;
                    t79 = gdFsGetDirEnt((t35 + 0x40), (t33 + 0x96), t2, t34);
                    t37 = *(int *)0xC2B8D74;
                    t38 = *(short *)((t37 + 0x0));
                    if (t38 == 1) {
                        t39 = *(int *)0xC2B8D74;
                        t40 = *(int *)((t39 + 0x4));
                        if (t40 == (t33 + 0x96)) {
                            if (t79 != 0) {
                                if (t79 == -12) {
                                    gdFsLockDir(t2);
                                }
                            } else {
                                gdFsLockDir(t2);
                            }
                        }
                    }
                }
            }
        }
    } else {
        t56 = *(short *)((t4 + 0x0));
        if (t56 == 1) {
            t57 = *(int *)((t0 + 0x4));
            t58 = *(int *)((t0 + 0x8));
            t63 = gdFsSearchPath_dds(((t0 + 0x40) + 0x40), t57, t58, a4, (0x8 + t4));
        } else {
            t60 = *(int *)((t0 + 0x4));
            t61 = *(int *)((t0 + 0x8));
            t63 = gdFsSearchPath(((t0 + 0x40) + 0x40), t60, t61, a4);
        }
        t79 = 0xFFFFFFF8;
        if (t63 != 0) {
            t64 = *(int *)0xC177A8C;
            t79 = gdFsGetDirEnt((t64 + 0x40), (0x96 + t63), t2, 0x800);
            t66 = *(int *)0xC2B8D74;
            t67 = *(short *)((t66 + 0x0));
            if (t67 == 1) {
                t68 = *(int *)0xC2B8D74;
                t69 = *(int *)((t68 + 0x4));
                if (t69 == (0x96 + t63)) {
                    if (t79 != 0) {
                        if (t79 == -12) {
                            gdFsLockDir(t2);
                        }
                    } else {
                        gdFsLockDir(t2);
                    }
                }
            }
        }
    }
    return t79;
}

