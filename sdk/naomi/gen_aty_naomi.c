/* Straight-line functions with calls and guards (batch gen_aty): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10E4_int { char p[0x10E4]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o26_short { char p[0x26]; short v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o28_ushort { char p[0x28]; unsigned short v; };
struct o2A_ushort { char p[0x2A]; unsigned short v; };
struct o2C_ushort { char p[0x2C]; unsigned short v; };
struct o2E_ushort { char p[0x2E]; unsigned short v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3A_short { char p[0x3A]; short v; };
struct o3A_ushort { char p[0x3A]; unsigned short v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o74_int { char p[0x74]; int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int ADXAMP_Destroy(int);
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int, int, int, int, int);
int ADXRNA_Destroy(int);
int ADXSJD_Destroy(int);
int ADXSTM_Close(int);
int ADXSTM_Tell(int);
int ADXT_Stop(int);
int SJ_SplitChunk(int, int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int adxstm_sj_internal_error(void);
int buIsFormat(int);
int check_isopen(void);
int clear_file(int, int);
int direntry(int, int);
int gdFsGetStat(int);
int gdFsReopenHn(int, int, int, int);
int gdFsReqRd32(int, int, int);
int get_fat(int, int);
int get_vmstime(int, int);
int kdDevGetStorageInfo(int, int);
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int kdGetStatus(int, int);
int kdIsChanged(int);
int kdRecognizeChanged(int);
int kdSetBlockRead(int, ...);
int kdSetBlockWrite(int, ...);
int kdSetGetLastError(int, ...);
int kdSetGetMediaInfo(int, int, int);
int kmiEndOfRenderISR(int, int, int, int);
int kmiErrorISR02(void);
int kmiErrorISR04(void);
int kmiErrorISR08(void);
int kmiExCallBackFunc(int, int);
int kmiExecuteDMAChain(void);
int kmiFBreset(void);
int kmiFatalErrorEntry(int);
int kmiFinalizeRender(void);
int kmiGetProfileInt(int, int, int);
int kmiWriteRegister(int, int);
int kmytex_FBAllocEntry(void);
int memset(int, int, int);
int mpdrv_insertnop(int);
int mpdrv_set_allstatreq_ns(int);
int mpdrv_set_dkill_ns(int);
int mpdrv_set_dreq_ns(int);
int mpdrv_set_dreset_ns(int);
int mpdrv_set_end_ns(void);
int mpdrv_set_getcond_ns(int, int);
int nlsndSeqRequest(int);
int open_file_handle(void);
int search_dir(int, int, int);
int search_fat(int, int);
int search_fat_dir(int, int);
int search_fat_free_xross(int);
int search_free_dir(int);
int set_fat(int, int, int);
int set_file_info(int, int, int, int);
int set_vmstime(int, int);
int vmsfb_sleep(void);
int vmsfs_diskfree(int, int);
int vmsfs_memcpyl(int, int, int);
int vmsfs_unmount(int);
int vmsfs_write_retry(int, int, int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_fat(int);
int write_sys(int);
int kmiInterruptHandlerSH(int a4, int a5, int a6, int a7);
int vmsio_block_write(int a4, int a5, int a6);
int vmsio_get_media_info(int a4, int a5, int a6, int a7);
int kmiFBinit(void);
int adxstmf_stat_exec(int a4, int a5, int a6, int a7);
int vmsfs_fcreate(int a4, int a5, int a6, int a7);
int vmsfs_findnext_ex(int a4, int a5, int a6);
int vmsfs_findfirst_ex(int a4, int a5, int a6);
int vmsio_block_read(int a4, int a5, int a6);
int write_dir(int a4, int a5, int a6, int a7);
int gdFsDaReleaseG(int a4, int a5, int a6, int a7);
int write_dir_all(int a4, int a5, int a6, int a7);
int vmsfs_fwrite1(int a4, int a5);
int vmsfs_getinfo(int a4, int a5);
void ADXT_Destroy(int a4, int a5, int a6, int a7);
int frame_make(void);
int vmsfs_findfirst(int a4, int a5, int a6, int a7);
int ADXT_InsertSilence(int a4, int a5, int a6, int a7);
int vmsfs_fgetinfo(int a4, int a5, int a6);
int nlsndStreamStop(int a4);


int nlsndStreamStop(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t0 = *(signed char *)((0xC2B771C + (((((short)a4 << 1) + (short)a4) << 2) << 1)));
    t1 = t0;
    if (t0 == 1) {
        t0 = *(signed char *)((((((((short)a4 << 1) + (short)a4) << 2) << 1) + 0xC2B771C) + 0x1));
        t2 = t0;
        if (t0 != 0) {
            t0 = *(int *)((((((((short)a4 << 1) + (short)a4) << 2) << 1) + 0xC2B771C) + 0x14));
            t3 = 0x0;
            for (;;) {
                if ((*(int *)((t0 + 0x0))) == 0) {
                    t3 = (t3 + 0x1);
                    if ((unsigned int)t3 >= (unsigned int)0x40000) {
                        break;
                    }
                    continue;
                }
                t4 = *(int *)((t0 + 0x0));
                t3 = (*(int *)(((t4 | 0xA0000000) + 0x0)));
                t3 = (t3 & 0x7FF);
                *(unsigned int *)(((t4 | 0xA0000000) + 0x0)) = t3;
                if (((*(int *)(((((((((short)a4 << 1) + (short)a4) << 2) << 2) << 1) + 0xA0800128) + 0x0))) & 0x300) == 0x100) {
                    t5 = *(int *)((((((((short)a4 << 1) + (short)a4) << 2) << 1) + 0xC2B771C) + 0x14));
                    t6 = 0x0;
                    for (;;) {
                        if ((*(int *)(((t5 + 0x4) + 0x0))) == 0) {
                            t6 = (t6 + 0x1);
                            if ((unsigned int)t6 >= (unsigned int)0x40000) {
                                break;
                            }
                            continue;
                        }
                        t7 = *(int *)(((t5 + 0x4) + 0x0));
                        t6 = (*(int *)(((t7 | 0xA0000000) + 0x0)));
                        t6 = (t6 & 0x7FF);
                        *(unsigned int *)(((t7 | 0xA0000000) + 0x0)) = t6;
                        t3 = (t3 | 0x8000);
                        *(unsigned int *)(((t4 | 0xA0000000) + 0x0)) = t3;
                        nlsndSeqRequest((((((short)a4 << 8) << 2) << 2) + 0x2A1));
                        *(unsigned char *)((((((((short)a4 << 1) + (short)a4) << 2) << 1) + 0xC2B771C) + 0x1)) = 0x0;
                        return 0x0;
                    }
                } else {
                    t3 = (t3 | 0x8000);
                    *(unsigned int *)(((t4 | 0xA0000000) + 0x0)) = t3;
                }
                nlsndSeqRequest((((((short)a4 << 8) << 2) << 2) + 0x2A1));
                *(unsigned char *)((((((((short)a4 << 1) + (short)a4) << 2) << 1) + 0xC2B771C) + 0x1)) = 0x0;
                return 0x0;
            }
            nlsndSeqRequest((((((short)a4 << 8) << 2) << 2) + 0x2A1));
            *(unsigned char *)((((((((short)a4 << 1) + (short)a4) << 2) << 1) + 0xC2B771C) + 0x1)) = 0x0;
            t2 = 0x0;
        }
        t1 = t2;
    }
    return t1;
}
