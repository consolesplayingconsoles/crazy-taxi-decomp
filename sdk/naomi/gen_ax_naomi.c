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


void nlSysMetricsInit(void)
{
    int t0;

    _builtin_set_imask(0xE);
    t0 = *(signed char *)0xFFD80004;
    (((struct o4_uchar *)0xFFD80000)->v) = (0xFFFFFFFE & t0);
    (((struct o0_uchar *)0xFFD80000)->v) = 0x1;
    (((struct o10_ushort *)0xFFD80000)->v) = 0x2;
    (((struct o8_uint *)0xFFD80000)->v) = 0xFFFFFFFF;
    (((struct oC_uint *)0xFFD80000)->v) = 0xFFFFFFFF;
    (((struct o4_uchar *)0xFFD80000)->v) = (t0 | 0x1);
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


