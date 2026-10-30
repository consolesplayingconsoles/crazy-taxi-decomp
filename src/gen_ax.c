/* Straight-line functions with calls and guards (batch gen_ax): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_Finish(void);
int nlIntrDefaultFunction(void);
int syMallocFinish(void);
int kmiMemCopy4(int, int, int);
int kmiResetCallback(void);
int SJMEM_Lock(void);
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

int SJMEM_Lock(void)
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

void mwRnaLockCs(int a4)
{
    int t0;

    t0 = _builtin_get_imask();
    *(unsigned int *)((a4 + 0x0)) = t0;
    _builtin_set_imask(0xF);
}

void nlSysMetricsInit(void)
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

/* manual: hand fix (2026-10-23 handover), tools must not regenerate it */
int nlSetIntrFunction(int a4, int a5)
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
        t2 = ((int (*)(int, int))(t1))(a4, a5);
        t4 = t2;
    } else {
        t3 = nlIntrDefaultFunction();
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
        kmiResetCallback();
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

    t0 = SJMEM_Lock();
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
                while (((int)0x1 << (int)t3) != 0x80) {
                    if ((((int)0x1 << (int)t3) & ((unsigned int)((unsigned int)((unsigned int)(t0 & t1) >> 8) >> 2) >> 2)) != 0) {
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
                while (((int)0x1 << (int)t7) != 16) {
                    if ((((int)0x1 << (int)t7) & (t5 & t6)) != 0) {
                        syChainMasterHandler(((((t7 << 2) << 2) << 1) + 0xB00));
                    }
                    t7 = (t7 + 0x1);
                }
                t10 = ((int)0x1 << (int)t7);
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
                    kmiMemCopy4((0xA4000000 + (a4 + (0xFFFFFFE0 & a6))), (a5 + (0xFFFFFFE0 & a6)), (a6 & 0x1F));
                }
                t11 = *(int *)0xC2EAAB0;
                if (t11 == 1) {
                    t12 = *(int *)0xC2EAAAC;
                    kmiWaitForFinishDMA(t12);
                }
            } else {
                kmiMemCopy4((0xA4000000 + a4), a5, a6);
            }
        } else {
            kmiMemCopy4((0xA4000000 + a4), a5, a6);
        }
    } else {
        kmiMemCopy4((0xA4000000 + a4), a5, a6);
    }
}




