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

int kmiInterruptHandlerSH(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t10;
    register int t27;
    register int t43;
    register int t174;
    register int t175;
    register int t176;
    register int t177;
    int t178;
    register int t179;
    register int t180;
    register int t181;
    register int t56;
    register int t74;
    register int t92;
    register int t110;
    register int t128;
    register int t188;
    register int t189;
    register int t190;
    register int t191;
    register int t192;

    t0 = (((struct o0_int *)0xA05F6900)->v);
    if ((t0 & 0x8) != 0) {
        t1 = kmiEndOfRenderISR(a4, a5, a6, a7);
        t174 = t1;
        if (t1 != 0) {
            t174 = (kmiFatalErrorEntry(t1));
        }
    }
    t176 = t0;
    if ((t0 & 0x20) != 0) {
        (((struct o0_uint *)0xA05F6900)->v) = 0x20;
        t10 = (((struct o0_int *)0xC2EA930)->v);
        (((struct o0_uint *)0xC2EA930)->v) = (t10 | 0x4);
        t176 = (t10 | 0x4);
    }
    if ((t0 & 0x4) != 0) {
        (((struct o0_uint *)0xA05F6900)->v) = 0x7;
        *(unsigned int *)0xC2EA888 = 0x0;
        (((struct o0_uint *)0xC2F91A8)->v) = 0x0;
        (((struct o4_uint *)0xC2F91E8)->v) = (((((struct o0_int *)0xC2F91E8)->v)) - (*(int *)0xFFD8000C));
        if (((((struct o18_int *)0xC2EA9E0)->v)) != 0) {
            (((struct o18_uint *)0xC2EA9E0)->v) = 0x0;
            (((struct o18_uint *)0xC2F91A8)->v) = 0x0;
            (((struct o0_uint *)0xA05F8048)->v) = ((((struct o1C_int *)0xC2EA930)->v));
            (((struct o4_uint *)0xA05F8048)->v) = ((((struct o14_int *)0xC2EA930)->v));
            (((struct o20_uint *)0xA05F8048)->v) = ((((struct o4_int *)0xC2EA930)->v));
            t175 = (((struct o8_int *)0xC2EA930)->v);
            (((struct o24_uint *)0xA05F8048)->v) = t175;
            t174 = 0xC2EA938;
        } else {
            *(unsigned int *)(((((((struct o0_int *)0xC2EA9E0)->v)) << 2) + 0xC2EA9CC)) = 0x5;
            t174 = 0xC2EA9CC;
            t175 = 0x5;
        }
        t27 = (((struct o0_int *)0xC2EA930)->v);
        (((struct o0_uint *)0xC2EA930)->v) = (t27 | 0x1);
        (((struct o10_uint *)0xC2F91E8)->v) = 0x0;
        t176 = (t27 | 0x1);
    }
    if ((t0 & 0x80000) != 0) {
        *(unsigned int *)0xFFA0002C = ((*(int *)0xFFA0002C) & 0xFFFFFFFC);
        (((struct o0_uint *)0xA05F6900)->v) = 0x80000;
        t174 = (kmiExecuteDMAChain());
    } else {
        t56 = 0x80000;
    }
    if ((t0 & 0x40) != 0) {
        (((struct o0_uint *)0xA05F6900)->v) = 0x40;
        t43 = (((struct o0_int *)0xC2EA930)->v);
        (((struct o0_uint *)0xC2EA930)->v) = (t43 | 0x40);
        t176 = (t43 | 0x40);
    }
    t74 = t56;
    if ((t0 & 0x80) != 0) {
        (((struct o0_uint *)0xA05F6900)->v) = 0x80;
        (((struct oC_uint *)0xC2EA9E0)->v) = (((((struct oC_int *)0xC2EA9E0)->v)) | 0x1);
        t175 = (((struct o8_int *)0xC2EA9E0)->v);
        t174 = 0xC2EA9EC;
        if (t175 == ((((struct oC_int *)0xC2EA9E0)->v))) {
            t174 = (kmiFinalizeRender());
        } else {
            t176 = 0xC2EA9E8;
        }
        t74 = t56;
    }
    t92 = t74;
    if ((t0 & 0x100) != 0) {
        (((struct o0_uint *)0xA05F6900)->v) = 0x100;
        (((struct oC_uint *)0xC2EA9E0)->v) = (((((struct oC_int *)0xC2EA9E0)->v)) | 0x2);
        t176 = (((struct oC_int *)0xC2EA9E0)->v);
        t174 = 0xC2EA9E8;
        if (((((struct o8_int *)0xC2EA9E0)->v)) == t176) {
            t174 = (kmiFinalizeRender());
        } else {
            t175 = 0xC2EA9EC;
        }
        t92 = t74;
    }
    t110 = t92;
    if ((t0 & 0x200) != 0) {
        (((struct o0_uint *)0xA05F6900)->v) = 0x200;
        (((struct oC_uint *)0xC2EA9E0)->v) = (((((struct oC_int *)0xC2EA9E0)->v)) | 0x4);
        t175 = (((struct o8_int *)0xC2EA9E0)->v);
        t174 = 0xC2EA9EC;
        if (t175 == ((((struct oC_int *)0xC2EA9E0)->v))) {
            t174 = (kmiFinalizeRender());
        } else {
            t176 = 0xC2EA9E8;
        }
        t110 = t92;
    }
    t128 = t110;
    if ((t0 & 0x400) != 0) {
        (((struct o0_uint *)0xA05F6900)->v) = 0x400;
        (((struct oC_uint *)0xC2EA9E0)->v) = (((((struct oC_int *)0xC2EA9E0)->v)) | 0x8);
        t175 = (((struct o8_int *)0xC2EA9E0)->v);
        t174 = 0xC2EA9EC;
        if (t175 == ((((struct oC_int *)0xC2EA9E0)->v))) {
            t174 = (kmiFinalizeRender());
        } else {
            t176 = 0xC2EA9E8;
        }
        t128 = t110;
    }
    t178 = 0x200000;
    t179 = t128;
    if ((t0 & 0x200000) != 0) {
        (((struct o0_uint *)0xA05F6900)->v) = 0x200000;
        (((struct oC_uint *)0xC2EA9E0)->v) = (((((struct oC_int *)0xC2EA9E0)->v)) | 0x10);
        t176 = (((struct oC_int *)0xC2EA9E0)->v);
        t174 = 0xC2EA9E8;
        if (((((struct o8_int *)0xC2EA9E0)->v)) == t176) {
            t174 = (kmiFinalizeRender());
        } else {
            t175 = 0xC2EA9EC;
            t178 = 0x200000;
        }
        t179 = t128;
    }
    t180 = (((struct o8_int *)0xA05F6900)->v);
    if ((0x4 & t180) != 0) {
        t178 = kmiErrorISR04();
        t174 = t178;
        if (t178 != 0) {
            t174 = (kmiFatalErrorEntry(t178));
        } else {
        }
    } else {
    }
    if ((0x8 & t180) != 0) {
        t178 = kmiErrorISR08();
        t174 = t178;
        if (t178 != 0) {
            t174 = (kmiFatalErrorEntry(t178));
        } else {
        }
    } else {
    }
    if ((t180 & 0x2) != 0) {
        t178 = kmiErrorISR02();
        t174 = t178;
        if (t178 != 0) {
            t174 = (kmiFatalErrorEntry(t178));
        } else {
        }
    } else {
        t177 = 0x2;
    }
    t181 = 0x0;
    for (;;) {
        if ((int)t181 >= (int)0xA) {
            break;
        }
        t176 = 0xC2EA930;
        t178 = 0x1;
        t178 = ((int)t178 << (int)t181);
        t177 = (*(int *)((t176 + 0x0)));
        if ((t177 & t178) != 0) {
            t178 = (~t178);
            t177 = (*(int *)((t176 + 0x0)));
            t177 = (t177 & t178);
            *(unsigned int *)((t176 + 0x0)) = t177;
            t180 = t181;
            t174 = 0xC2EA8B4;
            t180 = (t180 << 2);
            t180 = (t180 << 1);
            t179 = (*(int *)((t180 + t174)));
            t174 = (t174 - 4);
            t178 = (*(int *)((t180 + t174)));
            t174 = (kmiExCallBackFunc(t178, t179));
        } else {
            t188 = t175;
            t189 = t176;
            t190 = t177;
            t191 = t178;
            t192 = t179;
        }
        t175 = t188;
        t181 = (t181 + 0x1);
        t176 = t189;
        t177 = t190;
        t178 = t191;
        t179 = t192;
    }
    return 0x0;
}


int kmiFBinit(void)
{
    register int t0;
    register int t1;

    if (((((struct o0_int *)0xC177FA4)->v)) == 1) {
        t0 = kmiGetProfileInt(0xC175BD4, 0xC175BE0, 0x0);
        if (t0 == 1) {
            *(unsigned int *)0xC2EA694 = 0x1000000;
            (((struct o4_uint *)0xC177FA4)->v) = 0x1000000;
            (((struct o8_uint *)0xC177FA4)->v) = 0x0;
            (((struct oC_uint *)0xC177FA4)->v) = 0x1000000;
            (((struct o10_uint *)0xC177FA4)->v) = 0x1000000;
            (((struct o14_uint *)0xC177FA4)->v) = 0x0;
            kmiWriteRegister(0xE4, 0x0);
        } else {
            *(unsigned int *)0xC2EA694 = 0x800000;
            (((struct o4_uint *)0xC177FA4)->v) = 0x800000;
            (((struct o8_uint *)0xC177FA4)->v) = 0x0;
            (((struct oC_uint *)0xC177FA4)->v) = 0x800000;
            (((struct o10_uint *)0xC177FA4)->v) = 0x800000;
            (((struct o14_uint *)0xC177FA4)->v) = 0x0;
            kmiWriteRegister(0xE4, 0x0);
        }
        kmiFBreset();
        (((struct o28_uint *)0xC177FA4)->v) = ((((struct oC_int *)0xC177FA4)->v));
        (((struct o3C_uint *)0xC177FA4)->v) = ((((struct o14_int *)0xC177FA4)->v));
        t0 = kmytex_FBAllocEntry();
        t1 = 0x3;
        if (t0 == 0) {
        } else {
            *(unsigned int *)((t0 + 0xC)) = ((((struct o8_int *)0xC177FA4)->v));
            *(unsigned int *)((t0 + 0x10)) = ((((struct oC_int *)0xC177FA4)->v));
            *(unsigned int *)((t0 + 0x8)) = ((((struct o20_int *)0xC177FA4)->v));
            (((struct o20_uint *)0xC177FA4)->v) = t0;
            *(unsigned int *)((t0 + 0x4)) = ((((struct o24_int *)0xC177FA4)->v));
            (((struct o24_uint *)0xC177FA4)->v) = t0;
            t1 = 0x0;
        }
        t0 = t1;
    } else {
        t1 = kmiGetProfileInt(0xC175BD4, 0xC175BE0, 0x0);
        if (t1 == 1) {
            *(unsigned int *)0xC2EA694 = 0x1000000;
            (((struct o4_uint *)0xC177FA4)->v) = 0x800000;
            (((struct o8_uint *)0xC177FA4)->v) = 0x0;
            (((struct oC_uint *)0xC177FA4)->v) = 0x800000;
            (((struct o10_uint *)0xC177FA4)->v) = 0x800000;
            (((struct o14_uint *)0xC177FA4)->v) = 0x800000;
            kmiWriteRegister(0xE4, 0x0);
        } else {
            *(unsigned int *)0xC2EA694 = 0x800000;
            (((struct o4_uint *)0xC177FA4)->v) = 0x400000;
            (((struct o8_uint *)0xC177FA4)->v) = 0x0;
            (((struct oC_uint *)0xC177FA4)->v) = 0x400000;
            (((struct o10_uint *)0xC177FA4)->v) = 0x400000;
            (((struct o14_uint *)0xC177FA4)->v) = 0x400000;
            kmiWriteRegister(0xE4, 0x0);
        }
        kmiFBreset();
        (((struct o28_uint *)0xC177FA4)->v) = ((((struct oC_int *)0xC177FA4)->v));
        (((struct o3C_uint *)0xC177FA4)->v) = ((((struct o14_int *)0xC177FA4)->v));
        t1 = kmytex_FBAllocEntry();
        t0 = 0x3;
        if (t1 != 0) {
            *(unsigned int *)((t1 + 0xC)) = ((((struct o8_int *)0xC177FA4)->v));
            *(unsigned int *)((t1 + 0x10)) = ((((struct oC_int *)0xC177FA4)->v));
            *(unsigned int *)((t1 + 0x8)) = ((((struct o20_int *)0xC177FA4)->v));
            (((struct o20_uint *)0xC177FA4)->v) = t1;
            *(unsigned int *)((t1 + 0x4)) = ((((struct o24_int *)0xC177FA4)->v));
            (((struct o24_uint *)0xC177FA4)->v) = t1;
            t1 = kmytex_FBAllocEntry();
            t0 = 0x3;
            if (t1 == 0) {
            } else {
                *(unsigned int *)((t1 + 0xC)) = ((((struct o10_int *)0xC177FA4)->v));
                *(unsigned int *)((t1 + 0x10)) = ((((struct o14_int *)0xC177FA4)->v));
                *(unsigned int *)((t1 + 0x8)) = ((((struct o34_int *)0xC177FA4)->v));
                (((struct o34_uint *)0xC177FA4)->v) = t1;
                *(unsigned int *)((t1 + 0x4)) = ((((struct o38_int *)0xC177FA4)->v));
                (((struct o38_uint *)0xC177FA4)->v) = t1;
                t0 = 0x0;
            }
        }
    }
    return t0;
}


