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
typedef struct { int w[63]; } KmVideoTimings;                                 /* 252 bytes, passed by value on the stack */
int kmiSetVideoTimings(KmVideoTimings);
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

/* manual: the timings go to kmiSetVideoTimings as one structure by value; the generated form copied them one word off */
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
    t118 = kmiSetVideoTimings(*(KmVideoTimings *)((int)stk + 256));
    return t118;
}

