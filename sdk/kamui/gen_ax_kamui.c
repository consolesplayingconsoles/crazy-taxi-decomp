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


/* manual: hand fix (2026-10-23 handover), tools must not regenerate it */


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
                    (((struct o0_uint *)0xC2EAAAC)->v) = t4;
                } else {
                    (((struct o0_uint *)0xC2EAAAC)->v) = 0x0;
                }
                if ((a6 & 0x1F) != 0) {
                    kmiMemCopy4((0xA4000000 + (a4 + (0xFFFFFFE0 & a6))), (a5 + (0xFFFFFFE0 & a6)), (a6 & 0x1F));
                }
                t11 = (((struct o4_int *)0xC2EAAAC)->v);
                if (t11 == 1) {
                    t12 = (((struct o0_int *)0xC2EAAAC)->v);
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


