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
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10_ushort { char p[0x10]; unsigned short v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o24_int { char p[0x24]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


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


/* manual: hand fix (2026-10-23 handover), tools must not regenerate it */


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


