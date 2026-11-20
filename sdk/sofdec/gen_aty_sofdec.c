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


int adxstmf_stat_exec(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t1;
    register int t3;
    register int t4;
    register int t9;
    register int t12;
    register int t13;
    register int t18;
    register int t22;
    register int t23;
    register int t25;
    register int t47;
    register int t97;
    register int t52;
    register int t57;
    register int t58;
    register int t59;
    register int t63;
    register int t64;
    register int t65;
    register int t66;
    register int t68;
    register int t72;
    int t15;
    int t49;

    t1 = *(int *)((a4 + 0x4));
    if ((*(signed char *)((a4 + 0x2))) == 1) {
        t3 = gdFsGetStat((*(int *)((a4 + 0x8))));
        if (t3 == 1) {
            t4 = *(int *)((a4 + 0x20));
            SJ_SplitChunk((a4 + 0x24), (((t4 << 8) << 2) << 1), (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x4));
            t9 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x20)))))(t1, 0x1, (((int)stk + 4) + 0xC), a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
            t12 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x1C)))))(t1, 0x0, (((int)stk + 4) + 0x4), a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
            t13 = ADXSTM_Tell(a4);
            if ((t13 == (*(int *)((a4 + 0x30)))) && (t15 = *(int *)((a4 + 0x38)), t15 != 0)) {
                t18 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((a4 + 0x38)))))((*(int *)((a4 + 0x3C))), a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
            }
            *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + (((t4 << 8) << 2) << 1));
            *(unsigned char *)((a4 + 0x2)) = 0x0;
            t22 = ADXSTM_Tell(a4);
            t23 = *(int *)((a4 + 0x14));
            t25 = (t23 + 0x7FF);
            if ((int)(t23 + 0x7FF) < 0) {
                t25 = ((t23 + 0x7FF) + 0x7FF);
            }
            if ((int)t22 >= (int)((int)t25 >> 11)) {
                *(unsigned char *)((a4 + 0x1)) = 0x3;
            }
        } else {
            if (t3 == 5) {
                *(int *)((int)stk + 0) = 0xC17652C;
                ADXERR_CallErrFunc(t3, 0x0, 0x0, 0x0, 0xC17652C);
                *(unsigned char *)((a4 + 0x1)) = 0x4;
                *(unsigned char *)((a4 + 0x2)) = 0x0;
            }
        }
    }
    t47 = *(signed char *)((a4 + 0x2));
    t97 = t47;
    if (t47 == 0) {
        if ((t1 != 0) && (t49 = *(int *)((t1 + 0x0)), t49 != 0)) {
            t52 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x24)))))(t1, 0x1, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
            t97 = t52;
            if ((int)t52 < (int)(*(int *)((a4 + 0x1C)))) {
                t57 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x18)))))(t1, 0x0, (*(int *)((a4 + 0x18))), (a4 + 0x24), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                t58 = *(int *)((a4 + 0x28));
                t59 = t58;
                if ((int)t58 < 0) {
                    t59 = (t58 + 0x7FF);
                }
                *(unsigned int *)(((int)stk + 4)) = (*(int *)((a4 + 0x30)));
                t63 = ADXSTM_Tell(a4);
                t64 = *(int *)(((int)stk + 4));
                t65 = *(int *)((a4 + 0x2C));
                t66 = (t64 - t63);
                if ((int)((int)t59 >> 11) < (int)(t64 - t63)) {
                    t66 = ((int)t59 >> 11);
                }
                t68 = t65;
                if ((int)t66 < (int)t65) {
                    t68 = t66;
                }
                if (t68 != 0) {
                    t72 = gdFsReqRd32((*(int *)((a4 + 0x8))), t68, (*(int *)((a4 + 0x24))));
                    *(unsigned int *)((a4 + 0x20)) = t72;
                    if ((int)t72 <= 0) {
                        t97 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x1C)))))(t1, 0x0, (a4 + 0x24), a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
                    } else {
                        *(unsigned char *)((a4 + 0x2)) = 0x1;
                        t97 = 0x1;
                    }
                } else {
                    t97 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x1C)))))(t1, 0x0, (a4 + 0x24), a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
                }
            }
        } else {
            t97 = (adxstm_sj_internal_error());
        }
    }
    return t97;
}


void ADXT_Destroy(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    if (a4 != 0) {
        ADXT_Stop(a4);
        if ((*(int *)((a4 + 0xC))) != 0) {
            ADXRNA_Destroy((*(int *)((a4 + 0xC))));
        }
        if ((*(int *)((a4 + 0x4))) != 0) {
            ADXSJD_Destroy((*(int *)((a4 + 0x4))));
        }
        if ((*(int *)((a4 + 0x8))) != 0) {
            ADXSTM_Close((*(int *)((a4 + 0x8))));
        }
        ADXCRS_Lock();
        t0 = *(int *)((a4 + 0x10));
        if (t0 != 0) {
            t1 = *(int *)((a4 + 0x10));
            t2 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0xC)))))(t1, a5, a6, a7);
        } else {
            t1 = t0;
        }
        t0 = t1;
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)(*(signed char *)((a4 + 0x3)))) {
                break;
            }
            t2 = a4;
            t3 = t1;
            t2 = (t2 + 0x18);
            t3 = (t3 << 2);
            t2 = (t2 + t3);
            t0 = (*(int *)((t2 + 0x0)));
            if (t0 != 0) {
                t4 = a4;
                t4 = (t4 + 0x18);
                t4 = (t4 + t3);
                t4 = (*(int *)((t4 + 0x0)));
                t0 = (*(int *)((t4 + 0x0)));
                t2 = (*(int *)((t0 + 0xC)));
                t5 = ((int (*)(int, int, int, int))(t2))(t4, a5, a6, a7);
            } else {
                t5 = t2;
            }
            t2 = t5;
            t0 = a4;
            t0 = (t0 + 0x78);
            t0 = (t0 + t3);
            t2 = (*(int *)((t0 + 0x0)));
            if (t2 != 0) {
                t4 = a4;
                t4 = (t4 + 0x78);
                t4 = (t4 + t3);
                t4 = (*(int *)((t4 + 0x0)));
                t0 = (*(int *)((t4 + 0x0)));
                t2 = (*(int *)((t0 + 0xC)));
                t5 = ((int (*)(int, int, int, int))(t2))(t4, a5, a6, a7);
            } else {
                t5 = t2;
            }
            t2 = t5;
            t0 = 0x80;
            t0 = (t0 + a4);
            t0 = (t0 + t3);
            t2 = (*(int *)((t0 + 0x0)));
            if (t2 != 0) {
                t4 = 0x80;
                t4 = (t4 + a4);
                t4 = (t4 + t3);
                t4 = (*(int *)((t4 + 0x0)));
                t0 = (*(int *)((t4 + 0x0)));
                t2 = (*(int *)((t0 + 0xC)));
                t3 = ((int (*)(int, int, int, int))(t2))(t4, a5, a6, a7);
            } else {
                t3 = t2;
                t4 = t0;
            }
            t1 = (t1 + 0x1);
            t2 = t3;
            t0 = t4;
        }
        if (((((struct o74_int *)(a4))->v)) != 0) {
            ADXAMP_Destroy(((((struct o74_int *)(a4))->v)));
        }
        memset(a4, 0x0, 0x8C);
        *(unsigned char *)((a4 + 0x0)) = 0x0;
        ADXCRS_Unlock();
    return;
    }
}


int ADXT_InsertSilence(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t0;
    register int t1;
    register int t7;
    register int t9;
    register int t15;
    register int t18;
    register int t21;
    register int t23;
    register int t29;
    register int t32;

    t0 = *(int *)((a4 + 0x14));
    t1 = a6;
    if ((int)a6 < 0) {
        t1 = (a6 + 0x1F);
    }
    t7 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x18)))))(t0, 0x0, (((int)t1 >> 5) * ((((a5 << 2) << 1) + a5) << 1)), (((int)stk + 0) + 0x8), *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    t9 = (int)((int)(*(int *)(((int)stk + 12))) / (int)((((a5 << 2) << 1) + a5) << 1));
    memset((*(int *)(((int)stk + 8))), 0x0, (t9 * ((((a5 << 2) << 1) + a5) << 1)));
    SJ_SplitChunk((((int)stk + 0) + 0x8), (t9 * ((((a5 << 2) << 1) + a5) << 1)), (((int)stk + 0) + 0x8), ((int)stk + 0));
    t15 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x20)))))(t0, 0x1, (((int)stk + 0) + 0x8), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    t18 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x1C)))))(t0, 0x0, ((int)stk + 0), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    t21 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x18)))))(t0, 0x0, ((((int)t1 >> 5) * ((((a5 << 2) << 1) + a5) << 1)) - (t9 * ((((a5 << 2) << 1) + a5) << 1))), (((int)stk + 0) + 0x8), *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    t23 = (int)((int)(*(int *)(((int)stk + 12))) / (int)((((a5 << 2) << 1) + a5) << 1));
    memset((*(int *)(((int)stk + 8))), 0x0, (t23 * ((((a5 << 2) << 1) + a5) << 1)));
    SJ_SplitChunk((((int)stk + 0) + 0x8), (t23 * ((((a5 << 2) << 1) + a5) << 1)), (((int)stk + 0) + 0x8), ((int)stk + 0));
    t29 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x20)))))(t0, 0x1, (((int)stk + 0) + 0x8), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    t32 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x1C)))))(t0, 0x0, ((int)stk + 0), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    return (((((int)((int)((0x0 + (t9 * ((((a5 << 2) << 1) + a5) << 1))) + (t23 * ((((a5 << 2) << 1) + a5) << 1))) / (int)((((a5 << 2) << 1) + a5) << 1))) << 2) << 2) << 1);
}


