/* Straight-line functions with calls and guards (batch gen_ax): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_Init(void);
int FUN_0c07b710(void);
int FUN_0c14f59e(void);
int FUN_0c15887e(int, int, int);
int FUN_0c158958(void);
int FUN_0c16af38(void);
int SJMEM_Unlock(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int buStat(void);
int check_cache(int);
int check_caps(int);
int discardVertexBuffer(void);
int kdSetHandler(int, int);
int kmiDMAtoTARequest(int, int, int, int, int);
int kmiPurgeMemory(int, int);
int kmiWaitForFinishDMA(int);
int memset(int, int, int);
int pdExitPeripheral(void);
int pdVibSetStopTime(int, int, int, int);
int set_fat(int, int);
int set_vmstime(int, int);
int setjmp(int);
int syBtExit(void);
int syChainMasterHandler(int);
int syHwFinish(void);
int syRtcFinish(void);
int thunk_syCfgExit(void);
int vmsfs_c_init(int);
int vmsfs_init(int, int, int);
int vmsfs_mediainfo_retry(int, int);
int vmsfs_write_retry(int, int, int);
int vmsio_ismount(int);
int vmuExit(void);
int write_dir_all(int);
int write_fat(int);
int write_sys(int);

void SJUNI_Unlock(int a4, int a5)
{
    _builtin_set_imask(((unsigned int)(((a5 & 0xF) << 2) << 2) >> 4));
}

void mwRnaUnlockCs(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x0));
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
}

int FUN_0c16af38(void)
{
    int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    return t0;
}

int SJRBF_Lock(void)
{
    int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    return t0;
}

int SJUNI_Lock(void)
{
    int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    return t0;
}

void FUN_0c1717d8(int a4)
{
    int t0;

    t0 = _builtin_get_imask();
    *(unsigned int *)((a4 + 0x0)) = t0;
    _builtin_set_imask(0xF);
}

void FUN_0c075120(void)
{
    int t0;

    _builtin_set_imask(0xE);
    t0 = *(signed char *)0xFFD80004;
    *(unsigned char *)0xFFD80004 = (0xFFFFFFFE & t0);
    *(unsigned char *)0xFFD80000 = 0x1;
    *(unsigned short *)0xFFD80010 = 0x2;
    *(unsigned int *)0xFFD80008 = 0xFFFFFFFF;
    *(unsigned int *)0xFFD8000C = 0xFFFFFFFF;
    *(unsigned char *)0xFFD80004 = (t0 | 0x1);
    *(float *)0xC2AEDBC = 1.27999997f;
    _builtin_set_imask(0x0);
}

int nlSetIntrFunction(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xE);
    if ((int)a4 < (int)0xD) {
        t1 = *(int *)(((a4 << 2) + 0xC14A974));
        t2 = ((int (*)(int))(t1))(a4);
        t4 = t2;
    } else {
        t3 = FUN_0c07b710();
        t4 = t3;
    }
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return t4;
}

void kmiRegisterCallback(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    if (a6 != 0) {
        *(unsigned int *)(((((a5 << 2) << 1) + (0x234 + a4)) + 0x0)) = a6;
        *(unsigned int *)((((0x234 + a4) + ((a5 << 2) << 1)) + 0x4)) = a7;
    } else {
        FUN_0c158958();
    }
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
}

int SJMEM_UngetChunk(int a4, int a5, int a6)
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
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t21;
    int t22;
    int t23;
    int t24;

    t0 = FUN_0c16af38();
    if (a5 == 0) {
        t1 = *(int *)((a4 + 0x1C));
        if (t1 != 0) {
            t2 = *(int *)((a4 + 0x1C));
            t3 = *(int *)((a4 + 0x20));
            t4 = ((int (*)(int, int))(t2))(t3, 0xFFFFFFFD);
        }
    } else {
        if (a5 == 1) {
            t6 = *(int *)((a4 + 0x10));
            t7 = *(int *)((a6 + 0x4));
            t8 = (t6 - t7);
            if ((int)(t6 - t7) <= 0) {
                t8 = 0x0;
            }
            *(unsigned int *)((a4 + 0x10)) = t8;
            t9 = *(int *)((a6 + 0x4));
            t10 = *(int *)((a4 + 0xC));
            t11 = *(int *)((a4 + 0x18));
            t12 = (t10 + t9);
            if ((int)t11 < (int)(t10 + t9)) {
                t12 = t11;
            }
            *(unsigned int *)((a4 + 0xC)) = t12;
            t13 = *(int *)((a6 + 0x0));
            t14 = *(int *)((a4 + 0x14));
            if (t8 != (t13 - t14)) {
                t15 = *(int *)((a4 + 0x1C));
                if (t15 != 0) {
                    t16 = *(int *)((a4 + 0x1C));
                    t17 = *(int *)((a4 + 0x20));
                    t18 = ((int (*)(int, int, int))(t16))(t17, 0xFFFFFFFD, (t10 + t9));
                }
            }
        } else {
            *(unsigned int *)((a6 + 0x4)) = 0x0;
            *(unsigned int *)((a6 + 0x0)) = 0x0;
            t21 = *(int *)((a4 + 0x1C));
            if (t21 != 0) {
                t22 = *(int *)((a4 + 0x1C));
                t23 = *(int *)((a4 + 0x20));
                t24 = ((int (*)(int, int))(t22))(t23, 0xFFFFFFFD);
            }
        }
    }
    return SJMEM_Unlock(a4, t0);
}


int buInit(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t3;
    int t5;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)0xC2B9994 = a5;
    *(unsigned int *)0xC2B9990 = a6;
    *(unsigned int *)0xC2B9980 = 0x0;
    *(unsigned int *)0xC2B9984 = 0x0;
    *(unsigned int *)0xC2B9988 = 0x0;
    *(unsigned int *)0xC2B998C = 0x0;
    vmsfs_c_init(a5);
    t2 = vmsfs_init(a4, a5, a6);
    t3 = *(int *)0xC17539C;
    kdSetHandler(t3, 0xC1503D4);
    if (t2 == 0) {
        if (a7 != 0) {
            t5 = ((int (*)(void))(a7))();
        }
    }
    *(unsigned int *)0xC177AA4 = 0x1;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return t2;
}

int buFbrCreateServer(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t9;
    int t7;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t1 = 0x0;
    t2 = 0xC2FB798;
    for (;;) {
        t3 = *(int *)((t2 + 0x0));
        if (t3 != 0) {
            t1 = (t1 + 0x1);
            t2 = (t2 + 0xD7C);
            if ((int)t1 >= (int)0x2) break;
            continue;
        }
        break;
    }
    t9 = 0x0;
    if (t1 != 2) {
        *(unsigned int *)((t2 + 0x208)) = a4;
        *(unsigned int *)((t2 + 0x20C)) = 0x0;
        *(unsigned int *)((t2 + 0x204)) = 0x0;
        memset((0x210 + t2), 0x0, 0xB68);
        memset((0x104 + t2), 0x0, 0x100);
        setjmp((0x104 + t2));
        *(unsigned int *)((t2 + 0x0)) = 0x1;
        t7 = *(int *)0xC2FD298;
        *(unsigned int *)0xC2FD298 = (t7 + 0x1);
        t9 = t2;
    }
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return t9;
}

int syChainClx1Handler(int a4)
{
    int t20;
    int t17;
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t10;

    t20 = ((int)(short)a4 >> 4);
    if (((int)(short)a4 >> 4) != 50) {
        t17 = ((int)(short)a4 >> 4);
        if (((int)(short)a4 >> 4) == 54) {
            _builtin_set_imask(0x4);
            t0 = *(int *)0xA05F6900;
            t1 = *(int *)0xA05F6920;
            if (((unsigned int)((unsigned int)((unsigned int)(t0 & t1) >> 8) >> 2) >> 2) != 0) {
                t2 = 0xA05F6900;
                t3 = 0x0;
                while ((((int)t3 >= 0) ? (0x1 << (t3 & 31)) : ((-(int)t3 & 31) ? ((int)0x1 >> (-(int)t3 & 31)) : ((int)0x1 >> 31))) != 0x80) {
                    if (((((int)t3 >= 0) ? (0x1 << (t3 & 31)) : ((-(int)t3 & 31) ? ((int)0x1 >> (-(int)t3 & 31)) : ((int)0x1 >> 31))) & ((unsigned int)((unsigned int)((unsigned int)(t0 & t1) >> 8) >> 2) >> 2)) != 0) {
                        t4 = syChainMasterHandler(((((t3 << 2) << 2) << 1) + 0xA00));
                        t2 = t4;
                    }
                    t3 = (t3 + 0x1);
                }
                t10 = t2;
            } else {
                t5 = *(int *)0xA05F6904;
                t6 = *(int *)0xA05F6924;
                t7 = 0x0;
                while ((((int)t7 >= 0) ? (0x1 << (t7 & 31)) : ((-(int)t7 & 31) ? ((int)0x1 >> (-(int)t7 & 31)) : ((int)0x1 >> 31))) != 16) {
                    if (((((int)t7 >= 0) ? (0x1 << (t7 & 31)) : ((-(int)t7 & 31) ? ((int)0x1 >> (-(int)t7 & 31)) : ((int)0x1 >> 31))) & (t5 & t6)) != 0) {
                        syChainMasterHandler(((((t7 << 2) << 2) << 1) + 0xB00));
                    }
                    t7 = (t7 + 0x1);
                }
                t10 = (((int)t7 >= 0) ? (0x1 << (t7 & 31)) : ((-(int)t7 & 31) ? ((int)0x1 >> (-(int)t7 & 31)) : ((int)0x1 >> 31)));
            }
            t17 = t10;
        }
        t20 = t17;
    }
    return t20;
}

void kmiCopyToFrameBuffer(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t11;
    int t12;
    int stk[11];

    t0 = _builtin_get_imask();
    if ((a4 & 0x1F) == 0) {
        if ((a5 & 0x1F) == 0) {
            if (t0 == 0) {
                kmiPurgeMemory(a5, a6);
                if ((0xFFFFFFE0 & a6) != 0) {
                    do {
                        t2 = kmiDMAtoTARequest((0x11000000 + a4), a5, (0xFFFFFFE0 & a6), 0x18, ((int)stk + 8));
                    } while (t2 == 0x100);
                    t3 = *(int *)(((int)stk + 8));
                    t4 = *(int *)((t3 + 0x0));
                    *(unsigned int *)0xC2EAAAC = t4;
                } else {
                    *(unsigned int *)0xC2EAAAC = 0x0;
                }
                if ((a6 & 0x1F) != 0) {
                    FUN_0c15887e((0xA4000000 + (a4 + (0xFFFFFFE0 & a6))), (a5 + (0xFFFFFFE0 & a6)), (a6 & 0x1F));
                }
                t11 = *(int *)0xC2EAAB0;
                if (t11 == 1) {
                    t12 = *(int *)0xC2EAAAC;
                    kmiWaitForFinishDMA(t12);
                }
            } else {
                FUN_0c15887e((0xA4000000 + a4), a5, a6);
            }
        } else {
            FUN_0c15887e((0xA4000000 + a4), a5, a6);
        }
    } else {
        FUN_0c15887e((0xA4000000 + a4), a5, a6);
    }
}

int kmiDMAtoTARequest(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t1;
    int t2;
    int t12;
    int t15;
    int t3;
    int t6;
    int t7;
    int t8;
    int t9;
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
    int t27;
    int t28;
    int t29;
    int t30;
    int t45;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xE);
    if (a6 == 0) {
        _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
        t45 = 0x103;
    } else {
        t1 = *(int *)(((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 2) + 0xC2BF660));
        t2 = *(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC2BF460) + (((t1 << 2) << 2) << 1)) + 0x18));
        t12 = 0x100;
        t15 = a6;
        if ((t2 & 3) == 0) {
            t3 = a5;
            if ((0x1F & a5) != 0) {
                t3 = ((a5 + 0x1F) & 0xFFFFFFE0);
            }
            t6 = a6;
            if ((0x1F & a6) != 0) {
                t6 = ((a6 + 0x1F) & 0xFFFFFFE0);
            }
            t7 = *(int *)0xC2BF668;
            *(unsigned int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC2BF460) + (((t1 << 2) << 2) << 1)) + 0x0)) = t7;
            *(unsigned int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC2BF460) + (((t1 << 2) << 2) << 1)) + 0x4)) = t3;
            *(unsigned int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC2BF460) + (((t1 << 2) << 2) << 1)) + 0xC)) = a4;
            *(unsigned int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC2BF460) + (((t1 << 2) << 2) << 1)) + 0x14)) = t6;
            *(unsigned int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC2BF460) + (((t1 << 2) << 2) << 1)) + 0x18)) = (a7 | 0x1);
            *(unsigned int *)((a8 + 0x0)) = (((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC2BF460) + (((t1 << 2) << 2) << 1));
            t8 = *(int *)((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 2) + 0xC2BF660) + 0x0));
            *(unsigned int *)((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 2) + 0xC2BF660) + 0x0)) = ((t8 + 0x1) & 0x7);
            t9 = *(int *)0xC2BF668;
            *(unsigned int *)0xC2BF668 = (t9 + 0x1);
            t12 = 0x0;
            t15 = t6;
        }
        if (t12 != 0x100) {
            t16 = *(int *)0xC2BF674;
            t17 = *(int *)0xC2BF678;
            t18 = *(int *)(((((t17 << 8) + 0xC2BF460) + (((t16 << 2) << 2) << 1)) + 0x18));
            if ((t18 & 3) == 0) {
                t19 = *(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC2BF460) + (((t1 << 2) << 2) << 1)) + 0x18));
                if ((t19 & 0x3) == 1) {
                    t20 = *(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC2BF460) + (((t1 << 2) << 2) << 1)) + 0x18));
                    *(unsigned int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC2BF460) + (((t1 << 2) << 2) << 1)) + 0x18)) = ((t20 & 0xFFFFFFFC) | 0x2);
                    t21 = *(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC2BF460) + (((t1 << 2) << 2) << 1)) + 0x4));
                    *(unsigned int *)0xFFA00020 = t21;
                    t22 = *(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC2BF460) + (((t1 << 2) << 2) << 1)) + 0xC));
                    *(unsigned int *)0xFFA00024 = ((t22 + 0xF0000000) << 1);
                    *(unsigned int *)0xFFA00028 = ((unsigned int)((unsigned int)((unsigned int)t15 >> 2) >> 2) >> 1);
                    t23 = *(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC2BF460) + (((t1 << 2) << 2) << 1)) + 0x18));
                    t24 = 0x241;
                    if ((t23 & 4) == 0) {
                        t24 = 0x2C1;
                    }
                    t25 = *(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC2BF460) + (((t1 << 2) << 2) << 1)) + 0x18));
                    t27 = t24;
                    if ((t25 & 16) != 0) {
                        t27 = (t24 | 0x1000);
                    }
                    *(unsigned int *)0xFFA0002C = t27;
                    t28 = *(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC2BF460) + (((t1 << 2) << 2) << 1)) + 0xC));
                    *(unsigned int *)0xA05F6800 = t28;
                    t29 = *(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC2BF460) + (((t1 << 2) << 2) << 1)) + 0x14));
                    *(unsigned int *)0xA05F6804 = t29;
                    *(unsigned int *)0xA05F6808 = 0x1;
                    *(unsigned int *)0xC2BF674 = t1;
                    *(unsigned int *)0xC2BF678 = ((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1);
                    t30 = *(int *)((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 2) + 0xC2BF66C) + 0x0));
                    *(unsigned int *)((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 2) + 0xC2BF66C) + 0x0)) = ((t30 + 0x1) & 0x7);
                }
            }
        }
        _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
        t45 = t12;
    }
    return t45;
}

int vmsfs_format(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t159;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t10;
    int t158;
    int t11;
    int t12;
    int t157;
    int t13;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t155;
    int t22;
    int t154;
    int t23;
    int t24;
    int t25;
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
    int t151;
    int t150;
    int t153;
    int t156;
    int stk[15];

    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    *(unsigned int *)(((int)stk + 8)) = (a4 * 0x148);
    t0 = *(signed char *)((((a4 * 0x148) + 0xC2EE990) + 0x2));
    t159 = 0xFFFFFF01;
    if (t0 != 0) {
        if (a8 != 0) {
            *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x30)) = 0x1;
            t1 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x4));
            t2 = *(int *)(((0xC1784E0 + ((((t1 << 2) + t1) << 2) << 2)) + 0xC));
            *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x34)) = t2;
        } else {
            *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x30)) = 0x1;
            t3 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x4));
            t4 = *(int *)(((((((t3 << 2) + t3) << 2) << 2) + 0xC1784E0) + 0xC));
            t5 = (int)((int)t4 / (int)0xA);
            *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x34)) = t5;
        }
        t10 = vmsio_ismount(a4);
        t158 = 0xFFFFFF01;
        if (t10 != 0) {
            t11 = *(int *)(((int)stk + 8));
            t12 = *(signed char *)(((t11 + 0xC2EE990) + 0x8));
            t157 = 0xFFFFFF01;
            if (t12 != 0) {
                t13 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                memset(t13, 0x0, 0x200);
                t15 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                t16 = *(int *)((t15 + 0x8));
                t17 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                t18 = vmsfs_write_retry(a4, t16, t17);
                if ((int)t18 < 0) {
                    t19 = 0xFFFFFF81;
                    if (t18 != 0xFFFFFF40) {
                        t19 = 0xFFFFFF01;
                    }
                    t156 = t19;
                } else {
                    t20 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                    t21 = vmsfs_mediainfo_retry(a4, t20);
                    t155 = 0xFFFFFF01;
                    if ((int)t21 >= 0) {
                        t22 = check_caps(((a4 * 0x148) + 0xC2EE990));
                        t154 = 0xFFFFFF83;
                        if ((int)t22 >= 0) {
                            t23 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                            t24 = *(int *)((t23 + 0x1C));
                            *(unsigned int *)((t23 + 0x30)) = t24;
                            t25 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                            memset(t25, 0x0, 0x200);
                            t27 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                            t28 = memset((t27 + 0x10), 0x20, 0x20);
                            t29 = *(int *)(((int)stk + 12));
                            t30 = t28;
                            t31 = 0x0;
                            t32 = t29;
                            while ((int)t31 < (int)0x20) {
                                t33 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                                t30 = t33;
                                t34 = *(signed char *)((t32 + 0x0));
                                t32 = (t32 + 0x1);
                                t35 = (t31 + 0x10);
                                t31 = (t31 + 0x1);
                                *(unsigned char *)((t35 + t30)) = t34;
                            }
                            t36 = *(int *)(((int)stk + 4));
                            set_vmstime((((int)stk + 4) + 0x10), t36);
                            t38 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                            t39 = (t38 + 0x30);
                            t40 = 0x0;
                            t41 = (((int)stk + 4) + 0x10);
                            while ((int)t40 < (int)0x8) {
                                t42 = *(signed char *)((t41 + 0x0));
                                t41 = (t41 + 0x1);
                                t40 = (t40 + 0x1);
                                *(unsigned char *)((t39 + 0x0)) = t42;
                                t39 = (t39 + 0x1);
                            }
                            t43 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                            *(unsigned int *)(((int)stk + 4)) = t43;
                            t44 = *(int *)((t43 + 0xC));
                            *(unsigned int *)(((int)stk + 8)) = t44;
                            t45 = *(int *)(((int)stk + 4));
                            t46 = *(int *)((t45 + 0x14));
                            *(unsigned int *)(((int)stk + 12)) = t46;
                            t47 = *(int *)0xC2EE98C;
                            t48 = *(int *)(((int)stk + 4));
                            t49 = *(int *)((t47 + 0x10));
                            t50 = *(int *)((t48 + 0x4));
                            t51 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                            t52 = ((int (*)(int, int, int, int))(t49))(t51, 0x42, t50, t41);
                            t53 = *(int *)(((int)stk + 16));
                            t54 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                            *(unsigned char *)((t54 + 0x4E)) = t53;
                            t55 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                            *(unsigned char *)((t55 + 0x4F)) = 0x0;
                            t56 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                            t57 = *(int *)0xC2EE98C;
                            t58 = *(int *)((t56 + 0x0));
                            t59 = *(int *)((t57 + 0x10));
                            t60 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                            t61 = ((int (*)(int, int, int))(t59))(t60, 0x40, t58);
                            t62 = *(int *)0xC2EE98C;
                            t63 = *(int *)(((int)stk + 12));
                            t64 = *(int *)((t62 + 0x10));
                            t65 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                            t66 = ((int (*)(int, int, int))(t64))(t65, 0x4A, t63);
                            t67 = *(int *)0xC2EE98C;
                            t68 = *(int *)(((int)stk + 8));
                            t69 = *(int *)((t67 + 0x10));
                            t70 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                            t71 = ((int (*)(int, int, int))(t69))(t70, 0x46, t68);
                            t72 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                            t73 = *(int *)0xC2EE98C;
                            t74 = *(int *)((t72 + 0x18));
                            t75 = *(int *)((t73 + 0x10));
                            t76 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                            t77 = ((int (*)(int, int, int))(t75))(t76, 0x4C, t74);
                            t78 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                            t79 = *(int *)0xC2EE98C;
                            t80 = *(int *)((t78 + 0x10));
                            t81 = *(int *)((t79 + 0x10));
                            t82 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                            t83 = ((int (*)(int, int, int))(t81))(t82, 0x48, t80);
                            t84 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                            t85 = *(int *)0xC2EE98C;
                            t86 = *(int *)((t84 + 0x1C));
                            t87 = *(int *)((t85 + 0x10));
                            t88 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                            t89 = ((int (*)(int, int, int))(t87))(t88, 0x50, t86);
                            t90 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                            t91 = *(int *)0xC2EE98C;
                            t92 = *(int *)((t90 + 0x20));
                            t93 = *(int *)((t91 + 0x10));
                            t94 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                            t95 = ((int (*)(int, int, int))(t93))(t94, 0x52, t92);
                            t96 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                            t97 = *(int *)0xC2EE98C;
                            t98 = *(int *)((t96 + 0x34));
                            t99 = *(int *)((t97 + 0x10));
                            t100 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                            t101 = ((int (*)(int, int, int))(t99))(t100, 0x54, t98);
                            t102 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                            t103 = *(int *)0xC2EE98C;
                            t104 = *(int *)((t102 + 0x38));
                            t105 = *(int *)((t103 + 0x10));
                            t106 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                            t107 = ((int (*)(int, int, int))(t105))(t106, 0x56, t104);
                            t108 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                            t109 = *(int *)0xC2EE98C;
                            t110 = *(int *)((t108 + 0x0));
                            t111 = *(int *)((t109 + 0x10));
                            t112 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                            t113 = ((int (*)(int, int, int))(t111))(t112, 0x44, t110);
                            t114 = memset((((a4 << 8) << 1) + 0xC2F389C), 0x0, 0x200);
                            t115 = t114;
                            t116 = 0x0;
                            for (;;) {
                                t117 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                                t118 = *(int *)((t117 + 0x0));
                                if ((int)t116 >= (int)t118) {
                                    t119 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                                    t120 = *(int *)((t119 + 0x18));
                                    t121 = *(int *)(((0x30 + t119) + 0x0));
                                    *(unsigned int *)(((int)stk + 4)) = t120;
                                    t122 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x28));
                                    t123 = memset(t122, 0x0, ((t120 << 8) << 1));
                                    t115 = t123;
                                    t124 = write_dir_all(a4);
                                    t115 = t124;
                                    t125 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                                    t116 = 0xFFFA;
                                    t126 = *(int *)((t125 + 0x8));
                                    t127 = set_fat(a4, t126);
                                    t115 = t127;
                                    t128 = 0x0;
                                    for (;;) {
                                        t129 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                                        t130 = *(int *)((t129 + 0x10));
                                        if ((int)t128 >= (int)t130) break;
                                        t131 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                                        t132 = *(int *)((t131 + 0xC));
                                        t133 = set_fat(a4, (t132 + t128));
                                        t115 = t133;
                                        t128 = (t128 + 0x1);
                                    }
                                    t134 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                                    t135 = *(int *)((t134 + 0x8));
                                    t136 = set_fat(a4, t135);
                                    t115 = t136;
                                    t137 = 0x0;
                                    for (;;) {
                                        t138 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                                        t139 = *(int *)((t138 + 0x10));
                                        if ((int)t137 >= (int)t139) break;
                                        t140 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                                        t141 = *(int *)((t140 + 0xC));
                                        t142 = set_fat(a4, (t141 + t137));
                                        t115 = t142;
                                        t137 = (t137 + 0x1);
                                    }
                                    t143 = write_fat(a4);
                                    t115 = t143;
                                    t144 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                                    t145 = memset(t144, 0x55, 0x10);
                                    t115 = t145;
                                    t146 = write_sys(a4);
                                    t115 = t146;
                                    t147 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                                    t148 = memset(t147, 0x0, 0x10);
                                    t115 = t148;
                                    t115 = 0x0;
                                    *(unsigned char *)((((a4 * 0x148) + 0xC2EE990) + 0xB)) = t115;
                                    *(unsigned char *)((((a4 * 0x148) + 0xC2EE990) + 0xC)) = t115;
                                    *(unsigned char *)((((a4 * 0x148) + 0xC2EE990) + 0xA)) = t115;
                                    t149 = check_cache(a4);
                                    t115 = t149;
                                    return t115;
                                }
                                t151 = 0x0;
                                if (a8 != 0) {
                                    t150 = vmsfs_write_retry(a4, t116, (((a4 << 8) << 1) + 0xC2F389C));
                                    t115 = t150;
                                    t151 = t115;
                                }
                                t115 = t151;
                                if (t115 != 0xFFFFFF01) {
                                    
                                    t153 = set_fat(a4, t116);
                                    t115 = t153;
                                    t116 = (t116 + 0x1);
                                    continue;
                                }
                                break;
                            }
                            t154 = 0xFFFFFF01;
                        }
                        t155 = t154;
                    }
                    t156 = t155;
                }
                t157 = t156;
            }
            t158 = t157;
        }
        t159 = t158;
    }
    return t159;
}


