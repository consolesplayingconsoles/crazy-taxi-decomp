/* Straight-line functions with calls and guards (batch gen_bn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXERR_CallErrFunc(void);
int ADXRNA_SetBitPerSmpl(void);
int ADXRNA_SetNumChan(void);
int ADXRNA_SetOutVol(void);
int ADXRNA_SetSfreq(void);
int ADXRNA_SetStmHdInfo(void);
int ADXRNA_SetTotalNumSmpl(void);
int ADXRNA_SetTransSw(void);
int ADXSJD_GetStat(int);
int ADXSJD_SetMaxDecSmpl(int, int);
int ADXSTM_EntryEosFunc(int, int, int);
int ADXSTM_SetEos(int, int);
int ADXT_Stop(void);
int ADXAMP_SetSfreq(int, int);
int ADXSJD_EntryTrapFunc(int, int, int);
int ADXSJD_SetTrapNumSmpl(int, int);
int ADXSJD_SetTrapCnt(int, int);
int ADXSJD_SetTrapDtLen(int, int);
int ADXSJD_GetFormat(int);
int ADXSJD_GetSfreq(int);
int ADXSJD_GetNumChan(int);
int ADXSJD_GetOutBps(int);
int ADXSJD_GetBlkSmpl(int);
int ADXSJD_GetTotalNumSmpl(int);
int ADXSJD_GetNumLoop(int);
int ADXSJD_GetLpEndPos(int);
int ADXSJD_GetLpEndOfst(int);
int ADXSJD_GetSpsdInfo(int);
int kmiSetVideoTimings(void);
int adxt_set_outpan(int);
int buIsFormat(void);
int get_fat(int, int);
int kmiWriteRegister(int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int findSplineSection(int a4, int a5, int a6, int a7);
int vmsfs_sysdiskfree(int a4);
int kmSetHSyncLine(int a4);
int adxt_stat_decinfo(int a4);
int kmiInitNTSC(void);
int kmiInitPAL(void);


int vmsfs_sysdiskfree(int a4)
{
    int t0;
    int t20;
    int t1;
    int t3;
    int t18;
    int t4;
    int t17;
    int t5;
    int t16;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t15;
    int t19;

    t0 = *(signed char *)((((a4 * 0x148) + 0xC2EE990) + 0x2));
    t20 = 0xFFFFFF01;
    if (t0 != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t19 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t18 = 0xFFFFFF01;
            if (t3 != 0) {
                t4 = *(signed char *)((((a4 * 0x148) + 0xC2EE990) + 0x8));
                t17 = 0xFFFFFF01;
                if (t4 != 0) {
                    t5 = buIsFormat();
                    t16 = 0xFFFFFF03;
                    if ((int)t5 >= 0) {
                        t6 = t5;
                        t7 = 0x0;
                        t8 = 0x0;
                        for (;;) {
                            t9 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                            t10 = *(int *)((t9 + 0x2C));
                            t11 = *(int *)((t9 + 0x10));
                            t12 = (int)((unsigned int)(t11 * (t10 + 0x1)) + (unsigned int)0x0);
                            t13 = (int)((unsigned int)t12 + ((((int)0x0 > (int)(t11 * (t10 + 0x1)))) ? 1u : 0u));
                            if ((int)t8 >= (int)(t13 >> 1)) break;
                            t15 = get_fat(a4, t8);
                            t6 = t15;
                            t6 = (unsigned short)t6;
                            t8 = (t8 + 0x1);
                            if (t6 == 0xFFFC) {
                                t7 = (t7 + 0x1);
                            }
                        }
                        t16 = t7;
                    }
                    t17 = t16;
                }
                t18 = t17;
            }
            t19 = t18;
        }
        t20 = t19;
    }
    return t20;
}

int kmSetHSyncLine(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t9;
    int t13;
    int t18;
    int t29;
    int t19;
    int t25;
    int t20;
    int t21;
    int t30;
    int t36;
    int t31;
    int t32;
    int t41;
    int t42;
    int t43;
    int t44;
    int t17;
    int t12;
    int t8;
    int t40;

    t0 = *(int *)0xC2EA6D4;
    t1 = *(int *)0xC2EA6DC;
    t2 = *(int *)0xC2EA6A0;
    if ((t2 & 0x1) != 1) {
        t3 = *(int *)0xC2EA6A0;
        if ((t3 & 44) != 0) {
            if (0x1 != 0) {
                t4 = *(int *)0xC2EA970;
                t8 = ((unsigned int)((unsigned int)t4 >> 16) >> 1);
            } else {
                t5 = *(int *)0xC2EA970;
                t8 = ((unsigned int)t5 >> 16);
            }
            t12 = t8;
        } else {
            t9 = *(int *)0xC2EA970;
            t12 = ((unsigned int)t9 >> 16);
        }
        t17 = t12;
    } else {
        t13 = *(int *)0xC2EA970;
        t17 = ((unsigned int)t13 >> 16);
    }
    t18 = *(int *)0xC2EA6A0;
    if ((t18 & 0x1) == 1) {
        t29 = (a4 + (t1 + t0));
        if (0x1 == 0) {
            t19 = *(int *)0xC2EA6A0;
            t25 = (a4 + (t1 + t0));
            if ((t19 & 32) != 0) {
                t20 = (int)((unsigned int)a4 + (unsigned int)0x0);
                t21 = (int)((unsigned int)t20 + ((((int)0x0 > (int)a4)) ? 1u : 0u));
                t25 = ((t21 >> 1) + (t1 + t0));
            }
            t29 = t25;
        }
        t40 = t29;
    } else {
        t30 = *(int *)0xC2EA6A0;
        t36 = (a4 + (t1 + t0));
        if ((t30 & 32) != 0) {
            t31 = (int)((unsigned int)a4 + (unsigned int)0x0);
            t32 = (int)((unsigned int)t31 + ((((int)0x0 > (int)a4)) ? 1u : 0u));
            t36 = ((t32 >> 1) + (t1 + t0));
        }
        t40 = t36;
    }
    t41 = t40;
    if ((int)t40 < 0) {
        t41 = (t40 + t17);
    }
    t42 = t41;
    if ((int)t41 > (int)t17) {
        t42 = t17;
    }
    t43 = t42;
    if ((int)t42 < 0) {
        t43 = 0x0;
    }
    t44 = *(int *)0xC2EA964;
    *(unsigned int *)0xC2EA964 = ((t44 & 0x3FF0000) | (0x3FF & t43));
    kmiWriteRegister(0xC8, ((t44 & 0x3FF0000) | (0x3FF & t43)));
    return 0x0;
}

int adxt_stat_decinfo(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t17;
    int t18;
    int t19;
    int t20;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t30;
    int t33;
    int t38;
    int t39;
    int t43;
    int t47;
    int t49;
    int t51;
    int t53;
    int t55;
    int t56;
    int t59;
    int t60;
    int t63;
    int t65;
    int t68;
    int t15;

    t0 = *(int *)((a4 + 0x4));
    t1 = ADXSJD_GetStat(t0);
    if (t1 != 2) {
        return t1;
    }
    t2 = ADXSJD_GetNumChan(t0);
    t3 = *(signed char *)((a4 + 0x3));
    if ((int)t2 > (int)t3) {
        t4 = *(signed char *)((a4 + 0x3));
        ADXERR_CallErrFunc();
        return ADXT_Stop();
    }
    t6 = ADXSJD_GetSfreq(t0);
    t7 = ADXSJD_GetNumLoop(t0);
    if ((int)t7 > 0) {
        t8 = *(int *)((a4 + 0x38));
        t9 = (int)((int)t6 / (int)t8);
        t15 = ((t9 << 1) + t9);
    } else {
        t10 = *(int *)((a4 + 0x38));
        t11 = (int)((int)t6 / (int)t10);
        t12 = (int)((unsigned int)((t11 << 1) + t11) + (unsigned int)0x0);
        t13 = (int)((unsigned int)t12 + ((((int)0x0 > (int)((t11 << 1) + t11))) ? 1u : 0u));
        t15 = (t13 >> 1);
    }
    *(unsigned int *)(((0x48 + a4) + 0x0)) = t15;
    t17 = ADXSJD_GetBlkSmpl(t0);
    t18 = *(int *)((a4 + 0x48));
    t19 = (int)((int)(t18 + (t17 << 1)) / (int)(t17 << 1));
    *(unsigned int *)(((0x48 + a4) + 0x0)) = (t19 * (t17 << 1));
    t20 = *(int *)((a4 + 0x48));
    ADXSJD_SetMaxDecSmpl(t0, t20);
    if ((int)t7 > 0) {
        t22 = *(signed char *)((a4 + 0x2));
        if (t22 == 2) {
            *(unsigned int *)((a4 + 0x50)) = 0x0;
        } else {
            t23 = ADXSJD_GetLpEndOfst(t0);
            t24 = (int)((int)t23 % (int)0x800);
            *(unsigned int *)((a4 + 0x50)) = (0x800 - t24);
            t25 = *(int *)(((0x50 + a4) + 0x0));
            t26 = (int)((int)t25 % (int)0x800);
            *(unsigned int *)(((0x50 + a4) + 0x0)) = t26;
            t27 = (int)((int)((0x800 + t23) - 1) / (int)0x800);
            t28 = *(int *)((a4 + 0x8));
            ADXSTM_SetEos(t28, t27);
            t30 = *(int *)((a4 + 0x8));
            ADXSTM_EntryEosFunc(t30, 0xC168FCC, a4);
        }
        t33 = ADXSJD_GetLpEndPos(t0);
        ADXSJD_SetTrapNumSmpl(t0, t33);
        ADXSJD_SetTrapDtLen(t0, 0x0);
        ADXSJD_SetTrapCnt(t0, 0x0);
        ADXSJD_EntryTrapFunc(t0, 0xC168F00, a4);
    } else {
        t38 = *(int *)((a4 + 0x8));
        if (t38 != 0) {
            t39 = *(int *)((a4 + 0x8));
            ADXSTM_SetEos(t39, 0x7FFFFFFF);
        }
    }
    t43 = ADXSJD_GetSfreq(t0);
    ADXSJD_GetNumChan(t0);
    ADXSJD_GetTotalNumSmpl(t0);
    ADXSJD_GetOutBps(t0);
    t47 = *(int *)((a4 + 0xC));
    ADXRNA_SetBitPerSmpl();
    t49 = *(int *)((a4 + 0xC));
    ADXRNA_SetSfreq();
    t51 = *(int *)((a4 + 0xC));
    ADXRNA_SetNumChan();
    t53 = *(int *)((a4 + 0xC));
    ADXRNA_SetTotalNumSmpl();
    t55 = *(short *)((a4 + 0x40));
    t56 = *(int *)((a4 + 0xC));
    ADXRNA_SetOutVol();
    adxt_set_outpan(a4);
    t59 = *(int *)((a4 + 0x74));
    if (t59 != 0) {
        t60 = *(int *)((a4 + 0x74));
        ADXAMP_SetSfreq(t60, t43);
    }
    t63 = ADXSJD_GetFormat(t0);
    if (t63 == 2) {
        ADXSJD_GetSpsdInfo(t0);
        t65 = *(int *)((a4 + 0xC));
        ADXRNA_SetStmHdInfo();
    }
    t68 = *(int *)((a4 + 0xC));
    ADXRNA_SetTransSw();
    *(unsigned char *)((a4 + 0x1)) = 0x2;
    return 0x2;
}

int kmiInitNTSC(void)
{
    int t0;
    int t1;
    int t6;
    int t7;
    int t15;
    int t16;
    int t17;
    int t23;
    int t24;
    int t30;
    int t31;
    int t36;
    int t37;
    int t40;
    int t41;
    int t42;
    int t44;
    int t49;
    int t50;
    int t51;
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
    int stk[129] = {0};

    *(unsigned int *)((((int)stk + 256) + 0x8)) = 0x359;
    t0 = *(int *)0xC2EA6A0;
    if ((t0 & 0x1) != 1) {
        t1 = *(int *)0xC2EA6A0;
        if ((t1 & 44) != 0) {
            if (0x1 != 0) {
                *(unsigned int *)((((int)stk + 256) + 0x14)) = 0x20C;
            } else {
                *(unsigned int *)((((int)stk + 256) + 0x14)) = 0x106;
            }
        } else {
            *(unsigned int *)((((int)stk + 256) + 0x14)) = 0x106;
        }
    } else {
        *(unsigned int *)((((int)stk + 256) + 0x14)) = 0x106;
    }
    *(unsigned int *)((((int)stk + 256) + 0x0)) = 0x7E;
    *(unsigned int *)((((int)stk + 256) + 0x4)) = 0x345;
    t6 = *(int *)0xC2EA6A0;
    if ((t6 & 0x1) != 1) {
        t7 = *(int *)0xC2EA6A0;
        if ((t7 & 44) != 0) {
            if (0x1 != 0) {
                *(unsigned int *)((((int)stk + 256) + 0xC)) = 0x24;
                *(unsigned int *)((((int)stk + 256) + 0x10)) = 0x204;
            } else {
                *(unsigned int *)((((int)stk + 256) + 0xC)) = 0x12;
                *(unsigned int *)((((int)stk + 256) + 0x10)) = 0x102;
            }
        } else {
            *(unsigned int *)((((int)stk + 256) + 0xC)) = 0x12;
            *(unsigned int *)((((int)stk + 256) + 0x10)) = 0x102;
        }
    } else {
        *(unsigned int *)((((int)stk + 256) + 0xC)) = 0x12;
        *(unsigned int *)((((int)stk + 256) + 0x10)) = 0x102;
    }
    *(unsigned int *)((((int)stk + 256) + 0x18)) = 0x3F;
    t15 = *(int *)0xC2EA6A0;
    if ((t15 & 32) != 0) {
        *(unsigned int *)((((int)stk + 256) + 0x74)) = 0x104;
    } else {
        *(unsigned int *)((((int)stk + 256) + 0x74)) = 0x102;
    }
    *(unsigned int *)((((int)stk + 256) + 0x78)) = 0x15;
    t16 = *(int *)0xC2EA6A0;
    if ((t16 & 0x1) != 1) {
        t17 = *(int *)0xC2EA6A0;
        if ((t17 & 44) != 0) {
            if (0x1 != 0) {
                *(unsigned int *)((((int)stk + 256) + 0x1C)) = 0x6;
            } else {
                *(unsigned int *)((((int)stk + 256) + 0x1C)) = 0x3;
            }
        } else {
            *(unsigned int *)((((int)stk + 256) + 0x1C)) = 0x3;
        }
    } else {
        *(unsigned int *)((((int)stk + 256) + 0x1C)) = 0x3;
    }
    t23 = *(int *)0xC2EA6A0;
    if ((t23 & 0x1) != 1) {
        t24 = *(int *)0xC2EA6A0;
        if ((t24 & 44) != 0) {
            if (0x1 != 0) {
                *(unsigned int *)((((int)stk + 256) + 0x20)) = 0x16C;
            } else {
                *(unsigned int *)((((int)stk + 256) + 0x20)) = 0x319;
            }
        } else {
            *(unsigned int *)((((int)stk + 256) + 0x20)) = 0x319;
        }
    } else {
        *(unsigned int *)((((int)stk + 256) + 0x20)) = 0x319;
    }
    t30 = *(int *)0xC2EA6A0;
    if ((t30 & 0x1) != 1) {
        t31 = *(int *)0xC2EA6A0;
        if ((t31 & 44) != 0) {
            if (0x1 != 0) {
                *(unsigned int *)((((int)stk + 256) + 0x24)) = 0x1F;
            } else {
                *(unsigned int *)((((int)stk + 256) + 0x24)) = 0xF;
            }
        } else {
            *(unsigned int *)((((int)stk + 256) + 0x24)) = 0xF;
        }
    } else {
        *(unsigned int *)((((int)stk + 256) + 0x24)) = 0xF;
    }
    *(unsigned int *)((((int)stk + 256) + 0x28)) = 0x1;
    *(unsigned int *)((((int)stk + 256) + 0x2C)) = 0x0;
    t36 = *(int *)0xC2EA6A0;
    if ((t36 & 0x1) == 1) {
        if (0x0 != 0) {
            *(unsigned int *)((((int)stk + 256) + 0x30)) = 0x1;
        } else {
            *(unsigned int *)((((int)stk + 256) + 0x30)) = 0x0;
        }
    } else {
        t37 = *(int *)0xC2EA6A0;
        if ((t37 & 44) != 0) {
            if (0x1 != 0) {
                *(unsigned int *)((((int)stk + 256) + 0x30)) = 0x1;
            } else {
                *(unsigned int *)((((int)stk + 256) + 0x30)) = 0x0;
            }
        } else if (0x0 != 0) {
            *(unsigned int *)((((int)stk + 256) + 0x30)) = 0x1;
        } else {
            *(unsigned int *)((((int)stk + 256) + 0x30)) = 0x0;
        }
    }
    *(unsigned int *)((((int)stk + 256) + 0x34)) = 0x0;
    *(unsigned int *)((((int)stk + 256) + 0x38)) = 0x0;
    *(unsigned int *)((((int)stk + 256) + 0x3C)) = 0x0;
    *(unsigned int *)((((int)stk + 256) + 0x40)) = 0x0;
    *(unsigned int *)((((int)stk + 256) + 0x44)) = 0x0;
    t40 = *(int *)0xC2EA680;
    if (t40 == 6) {
        *(unsigned int *)((((int)stk + 256) + 0x70)) = 0x16;
    } else {
        *(unsigned int *)((((int)stk + 256) + 0x70)) = 0x1F;
    }
    t41 = *(int *)0xC2EA6A0;
    if ((t41 & 16) != 0) {
        *(unsigned int *)((((int)stk + 256) + 0x6C)) = 0x0;
    } else {
        *(unsigned int *)((((int)stk + 256) + 0x6C)) = 0x1;
    }
    *(unsigned int *)((((int)stk + 256) + 0x48)) = 0x1;
    *(unsigned int *)((((int)stk + 256) + 0x4C)) = 0x0;
    *(unsigned int *)((((int)stk + 256) + 0x50)) = 0x0;
    *(unsigned int *)((((int)stk + 256) + 0x54)) = 0x0;
    *(unsigned int *)((((int)stk + 256) + 0x58)) = 0x0;
    *(unsigned int *)((((int)stk + 256) + 0x5C)) = 0x0;
    *(unsigned int *)((((int)stk + 256) + 0x68)) = 0x0;
    *(unsigned int *)((((int)stk + 256) + 0xF8)) = 0xA4;
    *(unsigned int *)((((int)stk + 256) + 0x64)) = 0x1E0;
    *(unsigned int *)((((int)stk + 256) + 0x60)) = 0x0;
    t42 = *(int *)0xC2EA6A0;
    if ((t42 & 0x1) == 1) {
        if (0x0 != 0) {
            *(unsigned int *)((((int)stk + 256) + 0xF0)) = 0x12;
        } else {
            *(unsigned int *)((((int)stk + 256) + 0xF0)) = 0x11;
        }
    } else {
        t44 = *(int *)0xC2EA6A0;
        if ((t44 & 44) != 0) {
            if (0x1 != 0) {
                *(unsigned int *)((((int)stk + 256) + 0xF0)) = 0x12;
            } else {
                *(unsigned int *)((((int)stk + 256) + 0xF0)) = 0x11;
            }
        } else {
            if (0x0 != 0) {
                *(unsigned int *)((((int)stk + 256) + 0xF0)) = 0x12;
            } else {
                *(unsigned int *)((((int)stk + 256) + 0xF0)) = 0x11;
            }
        }
    }
    *(unsigned int *)((((int)stk + 256) + 0xF4)) = 0x12;
    *(unsigned int *)0xC2EA9A0 = 0xF0;
    t49 = *(int *)((((int)stk + 256) + 0xC));
    t50 = (int)((unsigned int)t49 + (unsigned int)0x0);
    t51 = (int)((unsigned int)t50 + ((((int)0x0 > (int)t49)) ? 1u : 0u));
    t53 = *(int *)0xC2EA9A0;
    *(unsigned int *)0xC2EA998 = ((t51 >> 1) + t53);
    t54 = *(int *)((((int)stk + 256) + 0xC));
    *(unsigned int *)0xC2EA99C = t54;
    t55 = *(int *)((((int)stk + 256) + 0xF8));
    *(unsigned int *)((((int)stk + 4) + 0xF8)) = t55;
    t56 = *(int *)((((int)stk + 256) + 0xF4));
    *(unsigned int *)((((int)stk + 4) + 0xF4)) = t56;
    t57 = *(int *)((((int)stk + 256) + 0xF0));
    *(unsigned int *)((((int)stk + 4) + 0xF0)) = t57;
    t58 = *(int *)((((int)stk + 256) + 0xEC));
    *(unsigned int *)((((int)stk + 4) + 0xEC)) = t58;
    t59 = *(int *)((((int)stk + 256) + 0xE8));
    *(unsigned int *)((((int)stk + 4) + 0xE8)) = t59;
    t60 = *(int *)((((int)stk + 256) + 0xE4));
    *(unsigned int *)((((int)stk + 4) + 0xE4)) = t60;
    t61 = *(int *)((((int)stk + 256) + 0xE0));
    *(unsigned int *)((((int)stk + 4) + 0xE0)) = t61;
    t62 = *(int *)((((int)stk + 256) + 0xDC));
    *(unsigned int *)((((int)stk + 4) + 0xDC)) = t62;
    t63 = *(int *)((((int)stk + 256) + 0xD8));
    *(unsigned int *)((((int)stk + 4) + 0xD8)) = t63;
    t64 = *(int *)((((int)stk + 256) + 0xD4));
    *(unsigned int *)((((int)stk + 4) + 0xD4)) = t64;
    t65 = *(int *)((((int)stk + 256) + 0xD0));
    *(unsigned int *)((((int)stk + 4) + 0xD0)) = t65;
    t66 = *(int *)((((int)stk + 256) + 0xCC));
    *(unsigned int *)((((int)stk + 4) + 0xCC)) = t66;
    t67 = *(int *)((((int)stk + 256) + 0xC8));
    *(unsigned int *)((((int)stk + 4) + 0xC8)) = t67;
    t68 = *(int *)((((int)stk + 256) + 0xC4));
    *(unsigned int *)((((int)stk + 4) + 0xC4)) = t68;
    t69 = *(int *)((((int)stk + 256) + 0xC0));
    *(unsigned int *)((((int)stk + 4) + 0xC0)) = t69;
    t70 = *(int *)((((int)stk + 256) + 0xBC));
    *(unsigned int *)((((int)stk + 4) + 0xBC)) = t70;
    t71 = *(int *)((((int)stk + 256) + 0xB8));
    *(unsigned int *)((((int)stk + 4) + 0xB8)) = t71;
    t72 = *(int *)((((int)stk + 256) + 0xB4));
    *(unsigned int *)((((int)stk + 4) + 0xB4)) = t72;
    t73 = *(int *)((((int)stk + 256) + 0xB0));
    *(unsigned int *)((((int)stk + 4) + 0xB0)) = t73;
    t74 = *(int *)((((int)stk + 256) + 0xAC));
    *(unsigned int *)((((int)stk + 4) + 0xAC)) = t74;
    t75 = *(int *)((((int)stk + 256) + 0xA8));
    *(unsigned int *)((((int)stk + 4) + 0xA8)) = t75;
    t76 = *(int *)((((int)stk + 256) + 0xA4));
    *(unsigned int *)((((int)stk + 4) + 0xA4)) = t76;
    t77 = *(int *)((((int)stk + 256) + 0xA0));
    *(unsigned int *)((((int)stk + 4) + 0xA0)) = t77;
    t78 = *(int *)((((int)stk + 256) + 0x9C));
    *(unsigned int *)((((int)stk + 4) + 0x9C)) = t78;
    t79 = *(int *)((((int)stk + 256) + 0x98));
    *(unsigned int *)((((int)stk + 4) + 0x98)) = t79;
    t80 = *(int *)((((int)stk + 256) + 0x94));
    *(unsigned int *)((((int)stk + 4) + 0x94)) = t80;
    t81 = *(int *)((((int)stk + 256) + 0x90));
    *(unsigned int *)((((int)stk + 4) + 0x90)) = t81;
    t82 = *(int *)((((int)stk + 256) + 0x8C));
    *(unsigned int *)((((int)stk + 4) + 0x8C)) = t82;
    t83 = *(int *)((((int)stk + 256) + 0x88));
    *(unsigned int *)((((int)stk + 4) + 0x88)) = t83;
    t84 = *(int *)((((int)stk + 256) + 0x84));
    *(unsigned int *)((((int)stk + 4) + 0x84)) = t84;
    t85 = *(int *)((((int)stk + 256) + 0x80));
    *(unsigned int *)((((int)stk + 4) + 0x80)) = t85;
    t86 = *(int *)((((int)stk + 256) + 0x7C));
    *(unsigned int *)((((int)stk + 4) + 0x7C)) = t86;
    t87 = *(int *)((((int)stk + 256) + 0x78));
    *(unsigned int *)((((int)stk + 4) + 0x78)) = t87;
    t88 = *(int *)((((int)stk + 256) + 0x74));
    *(unsigned int *)((((int)stk + 4) + 0x74)) = t88;
    t89 = *(int *)((((int)stk + 256) + 0x70));
    *(unsigned int *)((((int)stk + 4) + 0x70)) = t89;
    t90 = *(int *)((((int)stk + 256) + 0x6C));
    *(unsigned int *)((((int)stk + 4) + 0x6C)) = t90;
    t91 = *(int *)((((int)stk + 256) + 0x68));
    *(unsigned int *)((((int)stk + 4) + 0x68)) = t91;
    t92 = *(int *)((((int)stk + 256) + 0x64));
    *(unsigned int *)((((int)stk + 4) + 0x64)) = t92;
    t93 = *(int *)((((int)stk + 256) + 0x60));
    *(unsigned int *)((((int)stk + 4) + 0x60)) = t93;
    t94 = *(int *)((((int)stk + 256) + 0x5C));
    *(unsigned int *)((((int)stk + 4) + 0x5C)) = t94;
    t95 = *(int *)((((int)stk + 256) + 0x58));
    *(unsigned int *)((((int)stk + 4) + 0x58)) = t95;
    t96 = *(int *)((((int)stk + 256) + 0x54));
    *(unsigned int *)((((int)stk + 4) + 0x54)) = t96;
    t97 = *(int *)((((int)stk + 256) + 0x50));
    *(unsigned int *)((((int)stk + 4) + 0x50)) = t97;
    t98 = *(int *)((((int)stk + 256) + 0x4C));
    *(unsigned int *)((((int)stk + 4) + 0x4C)) = t98;
    t99 = *(int *)((((int)stk + 256) + 0x48));
    *(unsigned int *)((((int)stk + 4) + 0x48)) = t99;
    t100 = *(int *)((((int)stk + 256) + 0x44));
    *(unsigned int *)((((int)stk + 4) + 0x44)) = t100;
    t101 = *(int *)((((int)stk + 256) + 0x40));
    *(unsigned int *)((((int)stk + 4) + 0x40)) = t101;
    t102 = *(int *)((((int)stk + 256) + 0x3C));
    *(unsigned int *)((((int)stk + 4) + 0x3C)) = t102;
    t103 = *(int *)((((int)stk + 256) + 0x38));
    *(unsigned int *)((((int)stk + 4) + 0x38)) = t103;
    t104 = *(int *)((((int)stk + 256) + 0x34));
    *(unsigned int *)((((int)stk + 4) + 0x34)) = t104;
    t105 = *(int *)((((int)stk + 256) + 0x30));
    *(unsigned int *)((((int)stk + 4) + 0x30)) = t105;
    t106 = *(int *)((((int)stk + 256) + 0x2C));
    *(unsigned int *)((((int)stk + 4) + 0x2C)) = t106;
    t107 = *(int *)((((int)stk + 256) + 0x28));
    *(unsigned int *)((((int)stk + 4) + 0x28)) = t107;
    t108 = *(int *)((((int)stk + 256) + 0x24));
    *(unsigned int *)((((int)stk + 4) + 0x24)) = t108;
    t109 = *(int *)((((int)stk + 256) + 0x20));
    *(unsigned int *)((((int)stk + 4) + 0x20)) = t109;
    t110 = *(int *)((((int)stk + 256) + 0x1C));
    *(unsigned int *)((((int)stk + 4) + 0x1C)) = t110;
    t111 = *(int *)((((int)stk + 256) + 0x18));
    *(unsigned int *)((((int)stk + 4) + 0x18)) = t111;
    t112 = *(int *)((((int)stk + 256) + 0x14));
    *(unsigned int *)((((int)stk + 4) + 0x14)) = t112;
    t113 = *(int *)((((int)stk + 256) + 0x10));
    *(unsigned int *)((((int)stk + 4) + 0x10)) = t113;
    t114 = *(int *)((((int)stk + 256) + 0xC));
    *(unsigned int *)((((int)stk + 4) + 0xC)) = t114;
    t115 = *(int *)((((int)stk + 256) + 0x8));
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t115;
    t116 = *(int *)((((int)stk + 256) + 0x4));
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t116;
    t117 = *(int *)((((int)stk + 256) + 0x0));
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t117;
    t118 = kmiSetVideoTimings();
    return t118;
}

