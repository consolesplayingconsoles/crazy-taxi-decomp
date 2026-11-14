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

int vmsio_block_write(int a4, int a5, int a6)
{
    int stk[11];

    register int R1;
    register int R2;
    register int R3;
    register int R7;
    register float F0;
    register float F3;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_2 = a4;
    v0_0 = a5;
    v0_1 = a6;
    *(unsigned int *)(((int)stk + 20)) = v0_2;
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    *(unsigned int *)(((int)stk + 32)) = (((*(int *)(((int)stk + 20))) * 0x148) + 0xC2EE990);
    v0_1 = (vmsio_ismount((*(int *)(((int)stk + 20))))) != 0;
    v0_2 = (0xC1620C2);
    v0_2 = (0xC16236E);
    v0_2 = (0xC170232);
    v0_0 = (v0_0);
    if (v0_1) goto L_C1705DC;
    vmsfb_sleep();
    L_C17073E:;
    v0_3 = (0xFFFFFF01);
    L_C170740:;
    return v0_3;
    L_C1705DC:;
    v0_1 = *(int *)((((*(int *)(((int)stk + 20))) << 2) + 0xC176948));
    kdGetDevice(v0_1);
    *(unsigned int *)(((int)stk + 16)) = (*(int *)(((int)stk + 12)));
    *(unsigned int *)(((int)stk + 12)) = ((((struct o48_int *)((*(int *)(((*(int *)(((int)stk + 32))) + 0x1C)))))->v));
    *(unsigned int *)(((int)stk + 40)) = 0x0;
    v0_1 = (v0_1);
    v0_2 = (0x0);
    v0_2 = (0x0);
    L_C17067C:;
    if (((int)(*(int *)(((int)stk + 40))) < (int)((((struct o40_int *)((*(int *)(((*(int *)(((int)stk + 32))) + 0x1C)))))->v)))) goto L_C170600;
    L_C17068A:;
    v0_2 = (kdIsChanged(v0_1)) != 0;
    if (v0_2) goto L_C1706D2;
    v0_2 = v0_0;
    *(int *)((int)stk + 8) = v0_2;
    v0_2 = kdSetGetLastError(v0_2);
    v0_3 = (v0_2);
    if (((int)v0_2 >= 0)) goto L_C1706B0;
    vmsfb_sleep();
    goto L_C17068A;
    L_C1706B0:;
    v0_2 = (kdGetStatus(v0_1, v0_3)) != 0;
    if (v0_2) goto L_C1706C2;
    vmsfb_sleep();
    goto L_C1706B0;
    L_C1706C2:;
    *(unsigned int *)(((int)stk + 16)) = (kdGetDevice(v0_1));
    v0_2 = (kdIsChanged(v0_1)) == 0;
    if (!(v0_2)) goto L_C1706D2;
    v0_2 = *(int *)0xC17871C;
    *(unsigned int *)(((int)stk + 12)) = v0_2;
    if ((v0_2 == 0)) goto L_C170710;
    v0_2 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((int)stk + 12)))))((*(int *)(((int)stk + 20))), v0_0, (((int)stk + 12) + 0xC), (((int)stk + 12) + 0x10), *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24))) != 0;
    if (v0_2) goto L_C17071C;
    goto L_C170710;
    L_C1706D2:;
    v0_3 = (0xFFFFFF30);
    goto L_C170740;
    L_C170710:;
    *(unsigned char *)(((int)stk + 24)) = (*(signed char *)(((*(int *)(((int)stk + 16))) + 0x4)));
    *(unsigned int *)(((int)stk + 28)) = (*(int *)(((*(int *)(((int)stk + 16))) + 0xC)));
    L_C17071C:;
    v0_2 = *(signed char *)(((int)stk + 24));
    v0_3 = ((unsigned char)v0_2);
    if (((unsigned char)v0_2 == 7)) goto L_C170734;
    if ((v0_3 == 0xFC)) goto L_C17068A;
    if ((v0_3 == 0xFB)) goto L_C170738;
    goto L_C17073E;
    L_C170738:;
    v0_3 = (0xFFFFFF40);
    goto L_C170740;
    L_C170734:;
    v0_3 = (0x0);
    goto L_C170740;
    L_C170600:;
    v0_4 = kdIsChanged(v0_1);
    v0_3 = (v0_4);
    if ((v0_4 != 0)) goto L_C1706D2;
    v0_3 = ((int)((int)(*(int *)(((int)stk + 12))) / (int)0x4));
    *(int *)((int)stk + 8) = v0_3;
    v0_4 = (*(int *)(((int)stk + 16)));
    *(int *)((int)stk + 4) = v0_4;
    v0_5 = v0_0;
    *(int *)((int)stk + 0) = v0_5;
    v0_4 = kdSetBlockWrite(v0_5, v0_4, v0_3);
    v0_3 = (v0_4);
    if (((int)v0_4 >= 0)) goto L_C170636;
    vmsfb_sleep();
    goto L_C170600;
    L_C170636:;
    v0_4 = (kdGetStatus(v0_1, v0_3)) != 0;
    if (v0_4) goto L_C170648;
    vmsfb_sleep();
    goto L_C170636;
    L_C170648:;
    *(unsigned int *)(((int)stk + 36)) = (kdGetDevice(v0_1));
    v0_3 = (kdIsChanged(v0_1)) != 0;
    if (v0_3) goto L_C1706D2;
    v0_4 = *(signed char *)(((*(int *)(((int)stk + 36))) + 0x4));
    v0_3 = ((unsigned char)v0_4);
    if (((unsigned char)v0_4 == 7)) goto L_C17066C;
    if ((v0_3 == 0xFC)) goto L_C170600;
    goto L_C17073E;
    L_C17066C:;
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + (*(int *)(((int)stk + 12))));
    *(unsigned int *)(((int)stk + 40)) = ((*(int *)(((int)stk + 40))) + 0x1);
    v0_2 = ((v0_2 + 0x1));
    goto L_C17067C;
}

int vmsio_get_media_info(int a4, int a5, int a6, int a7)
{
    int stk[12];
    register int t0;
    register int t2;
    register int t11;
    register int t13;
    register int t15;
    register int t16;
    register int t19;
    register int t20;
    register int t53;
    register int t54;
    register int t67;
    register int t63;

    t0 = *(int *)(((a4 << 2) + 0xC176948));
    *(unsigned int *)(((int)stk + 0)) = (kdGetDevice(t0));
    t2 = kdGetDeviceInfo(t0);
    if ((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) == 0) {
        vmsfb_sleep();
        t67 = 0xFFFFFF01;
    } else {
        if (((*(int *)((t2 + 0x0))) & 2) == 0) {
            vmsfb_sleep();
            t63 = 0xFFFFFF01;
        } else {
            kdRecognizeChanged(t0);
            for (;;) {
                for (;;) {
                    kdGetDevice(t0);
                    t11 = kdSetGetMediaInfo(t0, 0x2, 0x0);
                    if ((int)t11 < 0) {
                        vmsfb_sleep();
                        continue;
                    }
                    break;
                }
                for (;;) {
                    t13 = kdGetStatus(t0, t11);
                    if (t13 == 0) {
                        vmsfb_sleep();
                        continue;
                    }
                    break;
                }
                t15 = kdGetDevice(t0);
                t16 = kdIsChanged(t0);
                if (t16 != 0) {
                    break;
                }
                t19 = *(signed char *)((t15 + 0x4));
                t20 = *(int *)((t15 + 0x8));
                if ((unsigned char)t19 != 8) {
                    if ((unsigned char)t19 != 0xFC) {
                        return 0xFFFFFF01;
                    }
                    continue;
                }
                *(unsigned int *)((a5 + 0x0)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2EE98C) + 0xC)))))((t20 + 0x8), 0x0, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                *(unsigned int *)((a5 + 0x4)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2EE98C) + 0xC)))))((t20 + 0x8), 0x2, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                *(unsigned int *)((a5 + 0x8)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2EE98C) + 0xC)))))((t20 + 0x8), 0x4, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                *(unsigned int *)((a5 + 0xC)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2EE98C) + 0xC)))))((t20 + 0x8), 0x6, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                *(unsigned int *)((a5 + 0x10)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2EE98C) + 0xC)))))((t20 + 0x8), 0x8, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                *(unsigned int *)((a5 + 0x14)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2EE98C) + 0xC)))))((t20 + 0x8), 0xA, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                *(unsigned int *)((a5 + 0x18)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2EE98C) + 0xC)))))((t20 + 0x8), 0xC, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                *(unsigned int *)((a5 + 0x1C)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2EE98C) + 0xC)))))((t20 + 0x8), 0x10, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                *(unsigned int *)((a5 + 0x20)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2EE98C) + 0xC)))))((t20 + 0x8), 0x12, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                *(unsigned int *)((a5 + 0x34)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2EE98C) + 0xC)))))((t20 + 0x8), 0x14, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                *(unsigned int *)((a5 + 0x38)) = 0x80;
                *(unsigned int *)((a5 + 0x24)) = (unsigned char)(*(signed char *)(((t20 + 0x8) + 0xE)));
                *(unsigned int *)((a5 + 0x28)) = (unsigned char)(*(signed char *)(((t20 + 0x8) + 0xF)));
                *(unsigned int *)((a5 + 0x2C)) = 0x1FF;
                t53 = kdGetDeviceInfo(t0);
                t54 = kdDevGetStorageInfo((((int)stk + 0) + 0x4), t53);
                if ((int)t54 >= 0) {
                    *(unsigned int *)((a5 + 0x3C)) = (unsigned short)(*(short *)(((int)stk + 10)));
                    (((struct o40_uint *)(a5))->v) = (unsigned short)(*(short *)(((int)stk + 8)));
                    (((struct o44_uint *)(a5))->v) = ((int)((int)0x200 / (int)(unsigned short)(*(short *)(((int)stk + 10)))));
                    (((struct o48_uint *)(a5))->v) = ((int)((int)0x200 / (int)(unsigned short)(*(short *)(((int)stk + 8)))));
                    return 0x0;
                }
                vmsfb_sleep();
                return 0xFFFFFF01;
            }
            vmsfb_sleep();
            t63 = 0xFFFFFF30;
        }
        t67 = t63;
    }
    return t67;
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

int vmsfs_fcreate(int a4, int a5, int a6, int a7)
{
    int stk[13];

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int R9;
    register float F0;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_3 = a4;
    v0_1 = a5;
    v0_0 = a6;
    v0_2 = a7;
    *(unsigned int *)(((int)stk + 4)) = v0_0;
    *(unsigned int *)(((int)stk + 0)) = v0_2;
    *(unsigned int *)((v0_2 + 0x0)) = 0x0;
    v0_0 = (0x0);
    v0_1 = (v0_1);
    v0_2 = (v0_3);
    if (((*(signed char *)(((v0_3 * 0x148) + 0xC2EE992))) == 0)) goto L_C1648BA;
    v0_3 = (vmsio_isready(v0_2)) != 0;
    if (v0_3) goto L_C1648A2;
    vmsfs_unmount(v0_2);
    L_C1648BA:;
    v0_0 = (0xFFFFFF01);
    L_C16499E:;
    return v0_0;
    L_C1648A2:;
    v0_3 = (vmsio_ismount(v0_2)) == 0;
    if (v0_3) goto L_C1648BA;
    if (((*(signed char *)(((v0_2 * 0x148) + 0xC2EE998))) != 0)) goto L_C1648FC;
    goto L_C1648BA;
    L_C1648FC:;
    v0_3 = (int)(buIsFormat(v0_2)) >= 0;
    if (v0_3) goto L_C16490C;
    v0_0 = (0xFFFFFF03);
    goto L_C16499E;
    L_C16490C:;
    v0_3 = (int)(check_isopen()) < 0;
    if (v0_3) goto L_C164944;
    v0_3 = (int)(search_dir(v0_2, v0_1, (((int)stk + 0) + 0x8))) < 0;
    if (v0_3) goto L_C164938;
    v0_4 = clear_file(v0_2, v0_1);
    v0_3 = (v0_4);
    if (((int)v0_4 >= 0)) goto L_C164938;
    v0_0 = (v0_3);
    goto L_C16499E;
    L_C164938:;
    v0_4 = search_free_dir(v0_2);
    v0_3 = (v0_4);
    if (!(((int)v0_4 >= 0))) goto L_C164944;
    direntry(v0_2, v0_3);
    v0_5 = open_file_handle();
    v0_4 = (v0_5);
    if ((v0_5 != 0)) goto L_C164964;
    v0_0 = (0xFFFFFF07);
    goto L_C16499E;
    L_C164944:;
    v0_0 = (0xFFFFFF08);
    goto L_C16499E;
    L_C164964:;
    *(unsigned int *)((v0_4 + 0x8)) = v0_0;
    *(unsigned int *)((v0_4 + 0x4)) = 0x1;
    *(unsigned int *)((v0_4 + 0x2C)) = v0_3;
    *(unsigned int *)((v0_4 + 0x38)) = 0xFFFF;
    *(unsigned int *)((v0_4 + 0x30)) = v0_0;
    *(unsigned int *)((v0_4 + 0x28)) = v0_2;
    *(unsigned short *)((v0_4 + 0x2)) = v0_0;
    *(unsigned char *)((v0_4 + 0x1)) = v0_0;
    v0_3 = ((v0_4 + 0x10));
    L_C164986:;
    if (((*(signed char *)((v0_1 + 0x0))) != 0)) goto L_C164980;
    *(unsigned char *)((v0_3 + 0x0)) = v0_0;
    set_vmstime((v0_4 + 0x20), (*(int *)(((int)stk + 4))));
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x0)) = v0_4;
    v0_0 = (0x0);
    goto L_C16499E;
    L_C164980:;
    *(unsigned char *)((v0_3 + 0x0)) = (*(signed char *)((v0_1 + 0x0)));
    v0_1 = ((v0_1 + 0x1));
    v0_3 = ((v0_3 + 0x1));
    goto L_C164986;
}

int vmsfs_findnext_ex(int a4, int a5, int a6)
{
    int stk[13];

    register int R1;
    register int R2;
    register int R3;
    register int R7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    v0_5 = a4;
    v0_6 = a5;
    v0_7 = a6;
    *(unsigned int *)(((int)stk + 0)) = v0_6;
    *(unsigned int *)(((int)stk + 4)) = (v0_5 * 0x148);
    v0_1 = (v0_5);
    v0_2 = (((v0_5 * 0x148) + 0xC2EE990));
    v0_0 = (v0_7);
    if (((*(signed char *)((((v0_5 * 0x148) + 0xC2EE990) + 0x2))) == 0)) goto L_C165442;
    v0_3 = (vmsio_isready(v0_1)) != 0;
    if (v0_3) goto L_C16542C;
    vmsfs_unmount(v0_1);
    L_C165442:;
    v0_1 = (0xFFFFFF01);
    L_C165524:;
    return v0_1;
    L_C16542C:;
    v0_3 = (vmsio_ismount(v0_1)) == 0;
    if (v0_3) goto L_C165442;
    if (((*(signed char *)((((*(int *)(((int)stk + 4))) + 0xC2EE990) + 0x8))) != 0)) goto L_C165448;
    goto L_C165442;
    L_C165448:;
    v0_3 = (int)(buIsFormat(v0_1)) >= 0;
    if (v0_3) goto L_C165458;
    v0_1 = (0xFFFFFF03);
    goto L_C165524;
    L_C165458:;
    v0_6 = *(int *)((v0_2 + 0x18));
    v0_5 = (direntry(v0_1, (*(int *)((v0_2 + 0x18)))));
    v0_3 = (0x0);
    v0_4 = (0x0);
    v0_1 = (0x1);
    v0_5 = v0_5;
    v0_6 = (v0_6);
    L_C1654B4:;
    if (!(((int)v0_6 < (int)(*(int *)(((*(int *)((v0_2 + 0x1C))) + 0x30)))))) goto L_C1654BC;
    *(unsigned int *)((v0_2 + 0x18)) = ((*(int *)((v0_2 + 0x18))) + 0x1);
    v0_8 = *(signed char *)((v0_5 + 0x0));
    v0_7 = ((unsigned char)v0_8);
    R7 = (v0_8);
    if (((unsigned char)v0_8 == 51)) goto L_C165482;
    if ((v0_7 != 0xCC)) goto L_C1654B0;
    goto L_C165482;
    L_C1654BC:;
    if ((v0_4 != 0)) goto L_C1654C6;
    v0_1 = (0xFFFFFF05);
    goto L_C165524;
    L_C1654C6:;
    v0_6 = *(int *)(((int)stk + 0));
    v0_4 = ((v0_6 + 0xC));
    v0_6 = (v0_6);
    v0_7 = ((v0_5 + 0x4));
    L_C1654D8:;
    if (((unsigned int)v0_6 < (unsigned int)v0_4)) goto L_C1654D2;
    *(unsigned char *)((v0_4 + 0x0)) = v0_3;
    set_file_info(v0_5, (((int)stk + 0) + 0x8), v0_7, R7);
    *(unsigned int *)((v0_0 + 0x0)) = ((*(int *)(((int)stk + 48))) * ((*(int *)(((*(int *)((v0_2 + 0x1C))) + 0x2C))) + 0x1));
    *(unsigned short *)((v0_0 + 0x4)) = (*(int *)(((int)stk + 48)));
    *(unsigned char *)((v0_0 + 0x6)) = (*(signed char *)(((int)stk + 12)));
    *(unsigned char *)((v0_0 + 0x7)) = (*(signed char *)(((int)stk + 18)));
    *(unsigned short *)((v0_0 + 0x8)) = (*(short *)(((int)stk + 16)));
    if (((*(int *)(((int)stk + 12))) != 0xCC)) goto L_C165512;
    v0_1 = (v0_1);
    L_C165514:;
    *(unsigned char *)((v0_0 + 0x6)) = v0_1;
    get_vmstime((v0_0 + 0xA), (((int)stk + 0) + 0x28));
    v0_1 = (0x0);
    goto L_C165524;
    L_C165512:;
    v0_1 = (v0_3);
    goto L_C165514;
    L_C1654D2:;
    *(unsigned char *)((v0_6 + 0x0)) = (*(signed char *)((v0_7 + 0x0)));
    v0_6 = ((v0_6 + 0x1));
    v0_7 = ((v0_7 + 0x1));
    goto L_C1654D8;
    L_C165482:;
    v0_4 = (v0_1);
    goto L_C1654BC;
    L_C1654B0:;
    v0_5 = ((v0_5 + 0x20));
    v0_6 = ((v0_6 + 0x1));
    goto L_C1654B4;
}

int vmsfs_findfirst_ex(int a4, int a5, int a6)
{
    int stk[13];

    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    v0_4 = a4;
    v0_7 = a5;
    v0_8 = a6;
    *(unsigned int *)(((int)stk + 0)) = v0_7;
    *(unsigned int *)(((int)stk + 4)) = (v0_4 * 0x148);
    v0_1 = (v0_4);
    v0_0 = (v0_8);
    v0_2 = (((v0_4 * 0x148) + 0xC2EE990));
    if (((*(signed char *)((((v0_4 * 0x148) + 0xC2EE990) + 0x2))) == 0)) goto L_C165302;
    v0_3 = (vmsio_isready(v0_1)) != 0;
    if (v0_3) goto L_C1652EC;
    vmsfs_unmount(v0_1);
    L_C165302:;
    v0_1 = (0xFFFFFF01);
    L_C1653E4:;
    return v0_1;
    L_C1652EC:;
    v0_3 = (vmsio_ismount(v0_1)) == 0;
    if (v0_3) goto L_C165302;
    if (((*(signed char *)((((*(int *)(((int)stk + 4))) + 0xC2EE990) + 0x8))) != 0)) goto L_C165308;
    goto L_C165302;
    L_C165308:;
    v0_3 = (int)(buIsFormat(v0_1)) >= 0;
    if (v0_3) goto L_C165318;
    v0_1 = (0xFFFFFF03);
    goto L_C1653E4;
    L_C165318:;
    *(unsigned int *)((v0_2 + 0x18)) = 0x0;
    v0_4 = (direntry(v0_1, 0x0));
    v0_3 = (0x0);
    v0_1 = (0x1);
    v0_4 = v0_4;
    v0_7 = (0x0);
    v0_5 = (0x0);
    L_C16534C:;
    if (!(((int)v0_7 < (int)(*(int *)(((*(int *)((v0_2 + 0x1C))) + 0x30)))))) goto L_C165354;
    v0_8 = *(signed char *)((v0_4 + 0x0));
    v0_6 = ((unsigned char)v0_8);
    if (((unsigned char)v0_8 == 51)) goto L_C16533E;
    if ((v0_6 != 0xCC)) goto L_C165342;
    goto L_C16533E;
    L_C165354:;
    if ((v0_5 != 0)) goto L_C16535E;
    v0_1 = (0xFFFFFF05);
    goto L_C1653E4;
    L_C16535E:;
    v0_7 = *(int *)(((int)stk + 0));
    v0_6 = ((v0_7 + 0xC));
    v0_7 = (v0_7);
    v0_8 = ((v0_4 + 0x4));
    L_C165392:;
    if (((unsigned int)v0_7 < (unsigned int)v0_6)) goto L_C16538C;
    *(unsigned char *)((v0_6 + 0x0)) = v0_3;
    *(unsigned int *)((v0_2 + 0x18)) = ((*(int *)((v0_2 + 0x18))) + 0x1);
    set_file_info(v0_4, (((int)stk + 0) + 0x8), v0_8, v0_5);
    *(unsigned int *)((v0_0 + 0x0)) = ((*(int *)(((int)stk + 48))) * ((*(int *)(((*(int *)((v0_2 + 0x1C))) + 0x2C))) + 0x1));
    *(unsigned short *)((v0_0 + 0x4)) = (*(int *)(((int)stk + 48)));
    *(unsigned char *)((v0_0 + 0x6)) = (*(signed char *)(((int)stk + 12)));
    *(unsigned char *)((v0_0 + 0x7)) = (*(signed char *)(((int)stk + 18)));
    *(unsigned short *)((v0_0 + 0x8)) = (*(short *)(((int)stk + 16)));
    if (((*(int *)(((int)stk + 12))) != 0xCC)) goto L_C1653D2;
    v0_1 = (v0_1);
    L_C1653D4:;
    *(unsigned char *)((v0_0 + 0x6)) = v0_1;
    get_vmstime((v0_0 + 0xA), (((int)stk + 0) + 0x28));
    v0_1 = (0x0);
    goto L_C1653E4;
    L_C1653D2:;
    v0_1 = (v0_3);
    goto L_C1653D4;
    L_C16538C:;
    *(unsigned char *)((v0_7 + 0x0)) = (*(signed char *)((v0_8 + 0x0)));
    v0_7 = ((v0_7 + 0x1));
    v0_8 = ((v0_8 + 0x1));
    goto L_C165392;
    L_C16533E:;
    v0_5 = (v0_1);
    goto L_C165354;
    L_C165342:;
    *(unsigned int *)((v0_2 + 0x18)) = ((*(int *)((v0_2 + 0x18))) + 0x1);
    v0_4 = ((v0_4 + 0x20));
    v0_7 = ((v0_7 + 0x1));
    goto L_C16534C;
}

int vmsio_block_read(int a4, int a5, int a6)
{
    int stk[4];
    register int t0;
    register int t2;
    register int t8;
    register int t9;
    register int t11;
    register int t13;
    register int t16;
    register int t19;
    register int t26;
    register int t27;
    register int t38;
    register int t10;

    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    t0 = vmsio_ismount(a4);
    if (t0 == 0) {
        vmsfb_sleep();
        t38 = 0xFFFFFF01;
    } else {
        t2 = *(int *)(((a4 << 2) + 0xC176948));
        kdGetDevice(t2);
        t8 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 4))) >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C))) + 0x3C)))) {
                return 0x0;
            }
            t9 = 0x0;
            for (;;) {
                t11 = kdIsChanged(t2);
                if (t11 == 0) {
                    t10 = 0xC162200;
                    t13 = (*(int *)(((int)stk + 12)));
                    *(int *)((int)stk + 0) = t13;
                    t10 = (kdSetBlockRead(t13));
                    if ((int)t10 < 0) {
                        vmsfb_sleep();
                        continue;
                    }
                    for (;;) {
                        t16 = kdGetStatus(t2, t10);
                        if (t16 == 0) {
                            vmsfb_sleep();
                            continue;
                        }
                        break;
                    }
                    *(unsigned int *)(((int)stk + 8)) = (kdGetDevice(t2));
                    t19 = kdIsChanged(t2);
                    if (t19 != 0) {
                        break;
                    }
                    t26 = *(signed char *)(((*(int *)(((int)stk + 8))) + 0x4));
                    t27 = *(int *)(((*(int *)(((int)stk + 8))) + 0x8));
                    if ((unsigned char)t26 != 8) {
                        if ((unsigned char)t26 != 0xFC) {
                            if ((unsigned char)t26 == 0xFB) {
                                return 0xFFFF0000;
                            }
                            return 0xFFFFFF01;
                        }
                        continue;
                    }
                    vmsfs_memcpyl(t8, (t27 + 0xC), ((((struct o44_int *)((*(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C)))))->v)));
                    t9 = (t9 + 0x1);
                    t8 = (t8 + ((((struct o44_int *)((*(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C)))))->v)));
                    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
                    if ((int)(*(int *)(((int)stk + 4))) >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C))) + 0x3C)))) {
                        return 0x0;
                    }
                    continue;
                }
                break;
            }
            break;
        }
        t38 = 0xFFFFFF30;
    }
    return t38;
}

int write_dir(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t0;
    register int t2;
    register int t4;
    register int t7;
    register int t12;
    register int t13;
    register int t18;
    register int t26;
    register int t30;
    register int t3;
    register int t5;
    register int t6;

    t0 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
    t2 = *(int *)((t0 + 0x14));
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((t0 + 0x18)));
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    t4 = 0x0;
    t7 = (unsigned short)t2;
    for (;;) {
        if ((int)t4 >= (int)(*(int *)(((int)stk + 4)))) {
            if ((*(int *)(((int)stk + 8))) != 0) {
                t12 = write_fat(a4);
                if ((int)t12 >= 0) {
                    t13 = write_sys(a4);
                    if ((int)t13 < 0) {
                        return t13;
                    }
                    return 0x0;
                }
                return t12;
            }
            return 0x0;
        }
        if ((*(signed char *)((((((a4 * 0x148) + 0xC2EE990) + 0x48) + t4) + 0x0))) != 0) {
            *(unsigned int *)(((int)stk + 0)) = ((t4 << 8) << 1);
            for (;;) {
                t18 = vmsfs_write_retry(a4, t7, ((*(int *)((((a4 * 0x148) + 0xC2EE990) + 0x28))) + (*(int *)(((int)stk + 0)))));
                if (t18 == 0) {
                    break;
                }
                if (t18 != 0xFFFFFF01) {
                    *(unsigned int *)(((int)stk + 8)) = 0x1;
                    t5 = (unsigned short)(((int (*)(int, int))(get_fat))(a4, t7));
                    set_fat(a4, t7, 0xFFFF);
                    t6 = (search_fat_dir(a4, 0xFFFC));
                    if ((int)t6 < 0) {
                        return 0xFFFFFF04;
                    }
                    set_fat(a4, t6, t5);
                    if (t4 == 0) {
                        t26 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2EE98C) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20))), 0x4A, t6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                    } else {
                        set_fat(a4, t3, t6);
                    }
                    t3 = t7;
                    t7 = t6;
                    continue;
                }
                return t18;
            }
            t30 = ((int (*)(int, int))(get_fat))(a4, t7);
            t3 = t7;
            *(unsigned char *)((((((a4 * 0x148) + 0xC2EE990) + 0x48) + t4) + 0x0)) = 0x0;
            t5 = (unsigned short)t30;
            t7 = t5;
            t4 = (t4 + 0x1);
            continue;
        }
        t3 = t7;
        t5 = (unsigned short)(((int (*)(int, int, int, int))(get_fat))(a4, t7, a6, a7));
        t7 = t5;
        t4 = (t4 + 0x1);
    }
}

int gdFsDaReleaseG(int a4, int a5, int a6, int a7)
{
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    t3 = gdFsReopenHn((*(int *)(((*(int *)0xC177A8C) + 0x14))), 0x0, 0x0, 0x0);
    t4 = 0xFFFFFFF3;
    if (t3 != 0) {
        t5 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t6 = *(int *)0xC177A8C;
        if ((((((struct o3A_short *)(t6))->v)) != 0) && (t4 = (((struct o10_int *)0xC2B8D84)->v), t1 = (((struct o14_int *)0xC2B8D84)->v), t4 != t1)) {
            (((struct o3A_ushort *)(t6))->v) = 0x0;
        }
        t4 = *(int *)0xC177A8C;
        if ((((((struct o3A_short *)(t4))->v)) != 0) && (t2 = *(int *)((t4 + 0x2C)), (int)t2 >= (int)0x10001)) {
            t1 = (((struct o8_int *)0xC2B8D84)->v);
            t2 = (((struct oC_int *)0xC2B8D84)->v);
            t6 = (((struct o4_int *)0xC2B8D84)->v);
            if (((((struct o0_int *)0xC2B8D84)->v)) == 1) {
                t7 = (*(int *)(((*(int *)((t4 + 0xC))) + 0x28)));
            } else {
                t7 = (*(int *)(((*(int *)((t4 + 0xC))) + 0x2C)));
            }
            t8 = ((int (*)(int, int, int, int))(t7))(t6, t1, t2, a7);
            if (t8 != 0) {
                *(unsigned int *)((t3 + 0x3C)) = t8;
                (((struct o50_ushort *)(t3))->v) = 0x4;
                *(unsigned int *)((t3 + 0x4)) = 0xC2B8D94;
                (((struct o48_ushort *)(t3))->v) = 0x8;
                *(unsigned int *)(((*(int *)((t3 + 0x0))) + 0x1C)) = t3;
                t1 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)0xC177A8C) + 0xC)))))->v))))();
            }
            t1 = t8;
        } else {
            t2 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t4 + 0xC))) + 0x34)))))(a4, a5, a6, a7);
            if (t2 != 0) {
                *(unsigned int *)((t3 + 0x3C)) = t2;
                (((struct o50_ushort *)(t3))->v) = 0x4;
                (((struct o48_ushort *)(t3))->v) = 0x6;
                *(unsigned int *)(((*(int *)((t3 + 0x0))) + 0x1C)) = t3;
                t4 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)0xC177A8C) + 0xC)))))->v))))();
            }
            t1 = t2;
        }
        _builtin_set_imask(((unsigned int)(((t5 & 0xF) << 2) << 2) >> 4));
        t4 = 0x0;
        if (t1 == 0) {
            t4 = 0xFFFFFFF3;
        }
    }
    return t4;
}

int write_dir_all(int a4, int a5, int a6, int a7)
{
    int stk[12];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_8 = a4;
    v0_7 = a6;
    v0_4 = *(int *)((((v0_8 * 0x148) + 0xC2EE990) + 0x1C));
    *(unsigned short *)(((int)stk + 4)) = (*(short *)((v0_4 + 0x14)));
    v0_9 = *(int *)((v0_4 + 0x18));
    v0_6 = ((v0_8 * 0x148) + 0xC2EE990);
    v0_1 = (0xFFFA);
    v0_2 = (0x0);
    v0_5 = ((*(short *)(((int)stk + 4))));
    v0_3 = (0xFFFC);
    v0_0 = (v0_8);
    v0_8 = (v0_4);
    v0_4 = (v0_9);
    v0_6 = v0_6;
    if (((int)v0_9 <= 0)) goto L_C16633C;
    L_C166318:;
    *(unsigned int *)(((int)stk + 0)) = (unsigned short)v0_5;
    v0_8 = get_fat(v0_0, (unsigned short)v0_5);
    set_fat(v0_0, (*(int *)(((int)stk + 0))), v0_3);
    v0_5 = (v0_8);
    if (((unsigned short)v0_8 == v0_1)) goto L_C16633C;
    if (((unsigned short)v0_5 == v0_3)) goto L_C16633C;
    v0_8 = (int)(v0_2 + 0x1) < (int)v0_4;
    v0_2 = ((v0_2 + 0x1));
    if (v0_8) goto L_C166318;
    L_C16633C:;
    v0_5 = *(short *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 8)) = (v0_4 - 1);
    v0_2 = (0x0);
    v0_5 = (v0_5);
    L_C1663C4:;
    if (((int)v0_2 < (int)v0_4)) goto L_C16635C;
    if (((unsigned short)(*(short *)(((int)stk + 4))) == (*(int *)(((*(int *)((v0_6 + 0x1C))) + 0x14))))) goto L_C1663EC;
    v0_1 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2EE98C) + 0x10)))))((*(int *)((v0_6 + 0x20))), 0x4A, (*(short *)(((int)stk + 4))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    write_fat(v0_0);
    write_sys(v0_0);
    L_C1663EC:;
    v0_0 = (0x0);
    L_C1663EE:;
    return v0_0;
    L_C16635C:;
    *(unsigned int *)(((int)stk + 0)) = ((v0_2 << 8) << 1);
    L_C166364:;
    v0_7 = vmsfs_write_retry(v0_0, (unsigned short)v0_5, ((*(int *)((v0_6 + 0x28))) + (*(int *)(((int)stk + 0)))));
    v0_8 = (v0_7);
    if ((v0_7 == 0)) goto L_C166396;
    if ((v0_8 != 0xFFFFFF01)) goto L_C166382;
    v0_0 = (v0_8);
    goto L_C1663EE;
    L_C166382:;
    set_fat(v0_0, (unsigned short)v0_5, 0xFFFF);
    v0_5 = ((search_fat_dir(v0_0, v0_3)));
    goto L_C166364;
    L_C166396:;
    v0_7 = (v0_1);
    if ((v0_2 != 0)) goto L_C1663A0;
    *(unsigned short *)(((int)stk + 4)) = v0_5;
    L_C1663A0:;
    *(unsigned int *)(((int)stk + 12)) = (unsigned short)v0_5;
    set_fat(v0_0, (unsigned short)v0_5, v0_7);
    if ((v0_2 == (*(int *)(((int)stk + 8))))) goto L_C1663C2;
    v0_5 = search_fat_dir(v0_0, v0_3);
    *(unsigned short *)(((int)stk + 0)) = v0_5;
    set_fat(v0_0, (*(int *)(((int)stk + 12))), v0_5);
    v0_5 = ((*(short *)(((int)stk + 0))));
    L_C1663C2:;
    v0_2 = ((v0_2 + 0x1));
    goto L_C1663C4;
}

int vmsfs_fwrite1(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;

    t0 = vmsio_isready((*(int *)((a4 + 0x28))));
    if (t0 == 0) {
        vmsfs_unmount((*(int *)((a4 + 0x28))));
        t0 = 0xFFFFFF01;
    } else {
        t1 = vmsio_ismount((*(int *)((a4 + 0x28))));
        t2 = 0xFFFFFF01;
        if (t1 != 0) {
            t1 = 0xFFFFFF01;
            if ((*(signed char *)((((*(int *)((a4 + 0x28))) * 0x148) + 0xC2EE998))) == 0) {
            } else {
                t3 = buIsFormat((*(int *)((a4 + 0x28))));
                t4 = 0xFFFFFF03;
                if ((int)t3 < 0) {
                } else {
                    t3 = *(int *)((a4 + 0x28));
                    t5 = search_fat_free_xross(t3);
                    t6 = 0xFFFFFF04;
                    if ((int)t5 >= 0) {
                        t7 = vmsfs_write_retry(t3, t5, a5);
                        if ((int)t7 < 0) {
                            t8 = t7;
                            if (t7 == 0xFFFFFF01) {
                            } else {
                                t7 = t5;
                                for (;;) {
                                    set_fat(t3, t7, 0xFFFF);
                                    t7 = (search_fat(t3, 0xFFFC));
                                    if ((int)t7 < 0) {
                                        break;
                                    }
                                    t9 = vmsfs_write_retry(t3, t7, a5);
                                    if (t9 == 0) {
                                        set_fat(t3, t7, 0xFFFA);
                                        if ((*(int *)((a4 + 0x38))) == 0xFFFF) {
                                            *(unsigned int *)((a4 + 0x38)) = (short)t7;
                                        } else {
                                            set_fat(t3, (*(int *)((a4 + 0x3C))), t7);
                                        }
                                        *(unsigned int *)((a4 + 0x3C)) = (short)t7;
                                        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                                        return 0x0;
                                    }
                                }
                                t8 = 0xFFFFFF04;
                            }
                            t7 = t8;
                        } else {
                            set_fat(t3, t5, 0xFFFA);
                            if ((*(int *)((a4 + 0x38))) == 0xFFFF) {
                                *(unsigned int *)((a4 + 0x38)) = (short)t5;
                            } else {
                                set_fat(t3, (*(int *)((a4 + 0x3C))), t5);
                            }
                            *(unsigned int *)((a4 + 0x3C)) = (short)t5;
                            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                            t7 = 0x0;
                        }
                        t6 = t7;
                    }
                    t4 = t6;
                }
                t1 = t4;
            }
            t2 = t1;
        }
        t0 = t2;
    }
    return t0;
}

int vmsfs_getinfo(int a4, int a5)
{
    int stk[3];
    register int t48;
    register int t1;
    register int t3;
    register int t38;
    register int t33;
    register int t7;
    register int t11;
    register int t15;
    register int t16;
    register int t17;
    register int t43;
    int t4;
    register int t5;
    register int t9;

    *(unsigned int *)(((int)stk + 0)) = (a4 * 0x148);
    t48 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0xC2EE990) + 0x2))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t43 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t38 = 0xFFFFFF01;
            if ((t3 != 0) && (t4 = *(int *)(((int)stk + 0)), t5 = *(signed char *)(((t4 + 0xC2EE990) + 0x8)), t5 != 0)) {
                t7 = buIsFormat(a4);
                t33 = 0xFFFFFF03;
                if ((int)t7 >= 0) {
                    t11 = 0x0;
                    for (;;) {
                        if ((int)t11 >= (int)0x20) {
                            break;
                        }
                        t15 = t11;
                        t7 = (*(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20)));
                        t15 = (t15 + 0x10);
                        t9 = a5;
                        t9 = (t9 + t11);
                        t11 = (t11 + 0x1);
                        *(unsigned char *)((t9 + 0x0)) = ((*(signed char *)((t15 + t7))));
                    }
                    t16 = (((int)stk + 0) + 0x4);
                    t17 = ((*(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20))) + 0x30);
                    for (;;) {
                        if ((unsigned int)t16 >= (unsigned int)((((int)stk + 0) + 0x4) + 0x8)) {
                            break;
                        }
                        t15 = (*(signed char *)((t17 + 0x0)));
                        t17 = (t17 + 0x1);
                        *(unsigned char *)((t16 + 0x0)) = t15;
                        t16 = (t16 + 0x1);
                    }
                    get_vmstime((a5 + 0x30), (((int)stk + 0) + 0x4));
                    (((struct o20_ushort *)(a5))->v) = ((*(int *)(((*(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C))) + 0x0))) + 0x1);
                    (((struct o22_ushort *)(a5))->v) = (*(int *)(((*(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C))) + 0x30)));
                    (((struct o26_ushort *)(a5))->v) = (vmsfs_diskfree(a4, 0x0));
                    (((struct o24_ushort *)(a5))->v) = ((((struct o26_short *)(a5))->v));
                    (((struct o28_ushort *)(a5))->v) = (*(int *)(((*(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C))) + 0x38)));
                    (((struct o2A_ushort *)(a5))->v) = (vmsfs_diskfree(a4, 0x1));
                    (((struct o2C_ushort *)(a5))->v) = ((*(int *)(((*(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C))) + 0x2C))) + 0x1);
                    (((struct o2E_ushort *)(a5))->v) = (unsigned char)(*(signed char *)(((*(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20))) + 0x4E)));
                    t33 = 0x0;
                }
                t38 = t33;
            }
            t43 = t38;
        }
        t48 = t43;
    }
    return t48;
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

int frame_make(void)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;

    t2 = *(int *)0xC2FA538;
    t3 = (((struct o10E4_int *)(t2))->v);
    t4 = 0x10E4;
    if ((int)t3 > 0) {
        t4 = (mpdrv_insertnop(((((struct o10E4_int *)(t2))->v))));
    } else {
        t5 = t3;
    }
    t3 = t4;
    t4 = t5;
    t5 = (0x44C + t2);
    t6 = (t2 + 0x28);
    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)0x18) {
            break;
        }
        t4 = 0xF90;
        t3 = (*(int *)0xC2FA538);
        t4 = (t4 + t3);
        t4 = (t4 + t2);
        t7 = (*(signed char *)((t4 + 0x0)));
        if ((t7 != 0) && (t0 = *(signed char *)((t6 + 0x6)), t3 = t0, t3 == 0)) {
            t3 = (*(signed char *)((t6 + 0x4)));
            t3 = (unsigned char)t3;
            if (t3 != 1) {
                if (t3 != 2) {
                    if (t3 != 3) {
                        if (t3 != 4) {
                            if (t3 != 9) {
                                t8 = t1;
                                t9 = t7;
                                t10 = t4;
                            } else {
                                t11 = *(int *)((t5 + 0x0));
                                t7 = t11;
                                t12 = t11;
                                if ((t7 & 0x1) != 0) {
                                    t12 = 0x1;
                                }
                                t7 = 0xC16FD16;
                                t3 = (mpdrv_set_getcond_ns(t2, t12));
                            }
                            t11 = t8;
                            t8 = t9;
                            t9 = t10;
                        } else {
                            t7 = 0xC16FDBC;
                            t3 = (mpdrv_set_dkill_ns(t2));
                        }
                        t10 = t11;
                        t11 = t8;
                        t8 = t9;
                    } else {
                        t7 = 0xC16FE00;
                        t3 = (mpdrv_set_dreset_ns(t2));
                    }
                    t9 = t10;
                    t10 = t11;
                    t11 = t8;
                } else {
                    t7 = 0xC16FE44;
                    t3 = (mpdrv_set_allstatreq_ns(t2));
                }
                t8 = t9;
                t9 = t10;
                t10 = t11;
            } else {
                t3 = (mpdrv_set_dreq_ns(t2));
            }
            t11 = t8;
            t8 = t9;
            t9 = t10;
        } else {
            t11 = t1;
            t8 = t7;
            t9 = t4;
        }
        t1 = t11;
        t5 = (t5 + 0x78);
        t7 = t8;
        t4 = t9;
        t6 = (t6 + 0x2C);
        t2 = (t2 + 0x1);
    }
    mpdrv_set_end_ns();
    return 0x0;
}

int vmsfs_findfirst(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    t1 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0xC2EE990) + 0x2))) != 0) {
        t2 = vmsio_isready(a4);
        if (t2 == 0) {
            vmsfs_unmount(a4);
            t2 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t4 = 0xFFFFFF01;
            if ((t3 != 0) && (t0 = *(signed char *)((((a4 * 0x148) + 0xC2EE990) + 0x8)), t0 != 0)) {
                t0 = buIsFormat(a4);
                t3 = 0xFFFFFF03;
                if ((int)t0 >= 0) {
                    *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x18)) = 0x0;
                    t0 = (direntry(a4, 0x0));
                    t5 = 0x0;
                    for (;;) {
                        t6 = *(int *)(((*(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C))) + 0x30));
                        if ((int)t5 >= (int)t6) {
                            if (0x0 == 0) {
                                return 0xFFFFFF05;
                            }
                            t5 = t0;
                            t0 = a5;
                            t5 = (t5 + 0x4);
                            t7 = t6;
                            t8 = (t0 + 0xC);
                            for (;;) {
                                if ((unsigned int)t0 >= (unsigned int)t8) {
                                    break;
                                }
                                t7 = (*(signed char *)((t5 + 0x0)));
                                t5 = (t5 + 0x1);
                                *(unsigned char *)((t0 + 0x0)) = t7;
                                t0 = (t0 + 0x1);
                            }
                            *(unsigned char *)((t8 + 0x0)) = 0x0;
                            *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x18)) = ((*(int *)((((a4 * 0x148) + 0xC2EE990) + 0x18))) + 0x1);
                            return 0x0;
                        }
                        t7 = *(signed char *)((t0 + 0x0));
                        if (((unsigned char)t7 != 51) && ((unsigned char)t7 != 0xCC)) {
                            t0 = (t0 + 0x20);
                            t5 = (t5 + 0x1);
                            *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x18)) = ((*(int *)((((a4 * 0x148) + 0xC2EE990) + 0x18))) + 0x1);
                            continue;
                        }
                        break;
                    }
                    t5 = 0xFFFFFF05;
                    if (0x1 != 0) {
                        t7 = t6;
                        t6 = a5;
                        t8 = (t0 + 0x4);
                        for (;;) {
                            if ((unsigned int)t6 >= (unsigned int)(a5 + 0xC)) {
                                break;
                            }
                            t7 = (*(signed char *)((t8 + 0x0)));
                            t8 = (t8 + 0x1);
                            *(unsigned char *)((t6 + 0x0)) = t7;
                            t6 = (t6 + 0x1);
                        }
                        *(unsigned char *)(((a5 + 0xC) + 0x0)) = 0x0;
                        *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x18)) = ((*(int *)((((a4 * 0x148) + 0xC2EE990) + 0x18))) + 0x1);
                        t5 = 0x0;
                    }
                    t3 = t5;
                }
                t4 = t3;
            }
            t2 = t4;
        }
        t1 = t2;
    }
    return t1;
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

int vmsfs_fgetinfo(int a4, int a5, int a6)
{
    int stk[14];
    register int t34;
    register int t1;
    register int t3;
    register int t6;
    register int t8;
    int t4;
    register int t5;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = (a4 * 0x148);
    *(unsigned int *)(((int)stk + 0)) = ((a4 * 0x148) + 0xC2EE990);
    t34 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0xC2EE990) + 0x2))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t34 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t34 = 0xFFFFFF01;
            if ((t3 != 0) && (t4 = *(int *)(((int)stk + 8)), t5 = *(signed char *)(((t4 + 0xC2EE990) + 0x8)), t5 != 0)) {
                t6 = buIsFormat(a4);
                t34 = 0xFFFFFF03;
                if ((int)t6 < 0) {
                } else {
                    t8 = search_dir(a4, (*(int *)(((int)stk + 4))), (((int)stk + 0) + 0xC));
                    t34 = 0xFFFFFF05;
                    if ((int)t8 < 0) {
                    } else {
                        *(unsigned int *)((a6 + 0x0)) = ((*(int *)(((int)stk + 52))) * ((*(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0x2C))) + 0x1));
                        *(unsigned short *)((a6 + 0x4)) = (*(int *)(((int)stk + 52)));
                        *(unsigned char *)((a6 + 0x6)) = (*(int *)(((int)stk + 16)));
                        *(unsigned char *)((a6 + 0x7)) = (*(signed char *)(((int)stk + 22)));
                        *(unsigned short *)((a6 + 0x8)) = (*(short *)(((int)stk + 20)));
                        *(unsigned char *)((a6 + 0x6)) = ((((*(int *)(((int)stk + 16))) == 0xCC)) ? 1 : 0);
                        get_vmstime((a6 + 0xA), (((int)stk + 0) + 0x2C));
                        t34 = 0x0;
                    }
                }
            }
        }
    }
    return t34;
}

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
