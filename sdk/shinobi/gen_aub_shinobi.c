/* Straight-line functions with calls and guards (batch gen_aub): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o34_ushort { char p[0x34]; unsigned short v; };
struct o38_ushort { char p[0x38]; unsigned short v; };
struct o3A_ushort { char p[0x3A]; unsigned short v; };
struct o3E_ushort { char p[0x3E]; unsigned short v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
int ADXB_DecodeHeader(int, int, int);
int ADXB_GetFormat(int);
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int, int, int, int, int);
int ADXSJD_SetInSj(int, int);
int ADXSJD_Start(int);
int ADXSTMF_Create(int, int, int, int);
int ADXSTM_OpenFname(int, int);
int ADXSTM_Tell(int);
int ADXT_Stop(int);
int SJMEM_Create(int, int);
int SJUNI_Lock(void);
int SJUNI_Unlock(int, int);
int SJ_SplitChunk(int, int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int adxt_start_sj(int, int);
int adxt_start_stm(int);
int buIsFormat(int);
int check_file_correct(int, int);
int fmMngMcpy(int, int, int);
int fmMngMcpy4(int, int, int);
int fmMngNum2Bit(int, int, int);
int fmcalccrc(int, int);
int gdFsClose(int);
int gdFsCreateHnG(int, int, int, int);
int gdFsInitSub(void);
int gdFsOpenRange(int, int, int);
int gdFsReopenHn(int, int, int, int);
int gdFsSeek(int, int, int);
int get_fat(int, int);
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int kdIsChanged(int);
int kmiResetCallback(int, int);
int memmove(int, int, int);
int nlsndBlockMove(int, int, int);
int nlsndBlockMoveStatus(void);
int nlsndCheckPackFreeError(int);
int nlsndPackFreeInit(int, int, int);
int nlsndSeqRequest(int);
int search_dir(int, int, int);
int strncpy(int, int, int);
int syBtCfgSet(int, int, int);
int syBtFlWrite(int, int, int);
int syCfgConvLang(int);
int syCfgGetDefaultLanguage(int, int);
int vmsfs_fgetinfo(int, int, int);
int vmsfs_read_retry(int, int, int);
int vmsfs_unmount(int);
int vmsfs_write_retry(int, int, int);
int vmsio_isready(int);
int write_sys(int);
int nlsndPackFree(int a4);
int vmsfs_fread1(int a4, int a5);
int gdFsReinitG(int a4, int a5, int a6, int a7);
int adxsjd_decode_prep(int a4, int a5, int a6, int a7);
int SJUNI_GetChunk(int a4, int a5, int a6, int a7);
int trigger(int a4, int a5);
int ADXT_StartMemIdx(int a4, int a5, int a6);
int fmMngAddData(int a4);
int vmsfs_rewrite_exec_file(int a4, int a5, int a6, int a7, int a8);
int vmsfs_setvolume(int a4, int a5);
int vmsfs_fisexist(int a4, int a5);
int vmsfs_fsetparam(int a4, int a5, int a6);
int gdFsDaGetInfoG(int a4, int a5, int a6, int a7);
void kmiRegisterCallback(int a4, int a5, int a6, int a7);
int pdLcdGetDirection(int a4);
int vmsio_ismount(int a4);
int ADXT_StartSj(int a4, int a5, int a6, int a7);
int syCfgGetLanguage(int a4, int a5, int a6);
int ADXSTM_OpenRange(int a4, int a5, int a6);
int syCfgGetSoundMode(int a4, int a5, int a6);
int ADXT_StartFname(int a4, int a5);
int ADXSTM_Seek(int a4, int a5);


int vmsfs_fread1(int a4, int a5)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R9;
    register int R10;
    register float F0;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_1 = a4;
    v0_0 = a5;
    *(unsigned int *)(((int)stk + 0)) = v0_0;
    v0_2 = (vmsio_isready((*(int *)((v0_1 + 0x28))))) != 0;
    v0_0 = (v0_1);
    if (v0_2) goto L_C164F4A;
    vmsfs_unmount((*(int *)((v0_0 + 0x28))));
    L_C164F64:;
    v0_1 = (0xFFFFFF01);
    L_C16500A:;
    return v0_1;
    L_C164F4A:;
    v0_1 = (vmsio_ismount((*(int *)((v0_0 + 0x28))))) == 0;
    if (v0_1) goto L_C164F64;
    if (((*(signed char *)((((*(int *)((v0_0 + 0x28))) * 0x148) + 0xC2EE998))) != 0)) goto L_C164F94;
    goto L_C164F64;
    L_C164F94:;
    v0_1 = (int)(buIsFormat((*(int *)((v0_0 + 0x28))))) >= 0;
    if (v0_1) goto L_C164FA4;
    v0_1 = (0xFFFFFF03);
    goto L_C16500A;
    L_C164FA4:;
    v0_1 = (0x40);
    v0_2 = ((*(int *)((v0_0 + 0x28))));
    if ((((((struct o40_int *)(v0_0))->v)) != 0xFFFA)) goto L_C164FBC;
    if (((*(int *)((v0_0 + 0x34))) == 0)) goto L_C164FC2;
    v0_1 = (0xFFFF0000);
    goto L_C16500A;
    L_C164FC2:;
    v0_1 = (0x0);
    goto L_C16500A;
    L_C164FBC:;
    if (((*(int *)((v0_0 + 0x34))) != 0)) goto L_C164FC6;
    goto L_C164FC2;
    L_C164FC6:;
    if (((*(int *)((v0_0 + v0_1))) == 0xFFFC)) goto L_C164FD6;
    if (!(((*(int *)((v0_0 + v0_1))) != 0xFFFF))) goto L_C164FD6;
    v0_1 = *(int *)((v0_0 + v0_1));
    v0_3 = vmsfs_read_retry(v0_2, v0_1, (*(int *)(((int)stk + 0))));
    v0_4 = (v0_1);
    v0_1 = (v0_3);
    if (((int)v0_3 >= 0)) goto L_C164FF2;
    v0_1 = (v0_1);
    goto L_C16500A;
    L_C164FD6:;
    v0_1 = (0xFFFFFF41);
    goto L_C16500A;
    L_C164FF2:;
    (((struct o40_uint *)(v0_0))->v) = (unsigned short)(get_fat(v0_2, v0_4));
    v0_1 = *(int *)((v0_0 + 0x34));
    *(unsigned int *)((v0_0 + 0x34)) = (v0_1 - 1);
    v0_1 = ((v0_1 - 1));
    goto L_C16500A;
}

int gdFsReinitG(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(int *)0xC177A8C;
    if (t0 == 0) {
        return 0xFFFFFFFF;
    }
    t1 = 0x0;
    t2 = (0x1080 + t0);
    for (;;) {
        if ((int)t1 >= (int)((*(int *)(((*(int *)0xC177A8C) + 0x0))) + 0x1)) {
            break;
        }
        gdFsClose(t2);
        t1 = (t1 + 0x1);
        t2 = (t2 + 0x54);
    }
    t1 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t2 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)0xC177A8C) + 0xC))) + 0x0)))))(t0, a5, a6, a7);
    (((struct o38_ushort *)((*(int *)0xC177A8C)))->v) = 0x0;
    *(unsigned int *)(((*(int *)0xC177A8C) + 0x20)) = 0x0;
    *(unsigned int *)(((*(int *)0xC177A8C) + 0x1C)) = 0x0;
    (((struct o3A_ushort *)((*(int *)0xC177A8C)))->v) = 0x0;
    t0 = 0x3A;
    t2 = ((*(int *)0xC177A8C) + 0x1080);
    t3 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)((*(int *)(((*(int *)0xC177A8C) + 0x0))) + 0x1)) {
            break;
        }
        t0 = 0x4C;
        *(unsigned short *)((t2 + t0)) = 0x0;
        t3 = (t3 + 0x1);
        *(unsigned int *)((t2 + 0x0)) = (*(int *)0xC177A8C);
        t2 = (t2 + 0x54);
    }
    t0 = *(int *)0xC177A8C;
    *(unsigned int *)((t0 + 0x14)) = (0x1080 + t0);
    t0 = *(int *)0xC177A8C;
    *(unsigned int *)((t0 + 0x18)) = ((0x1080 + t0) + 0x54);
    gdFsCreateHnG((*(int *)(((*(int *)0xC177A8C) + 0x14))), 0x0, 0x0, 0x0);
    _builtin_set_imask(((unsigned int)(((t1 & 0xF) << 2) << 2) >> 4));
    return gdFsInitSub();
}


int trigger(int a4, int a5)
{
    int stk[2];
    register int t2;
    register int t3;
    int t4;
    register int t6;
    register int t5;
    register int t15;
    int t16;

    *(unsigned char *)(((int)stk + 0)) = (*(signed char *)(((*(int *)0xC2FA538) + 0xFB0)));
    t2 = 0xFB0;
    t3 = a4;
    t4 = a5;
    t6 = 0x0;
    for (;;) {
        if ((int)t6 >= (int)0x4) {
            t2 = 0x0;
            return t2;
        }
        if ((((int)0x1 << (int)t6) & (unsigned char)(*(signed char *)(((int)stk + 0)))) != 0) {
            t3 = 0xC176310;
            t3 = (t3 + t6);
            *(unsigned int *)(((int)stk + 4)) = t3;
            t3 = (*(signed char *)((t3 + 0x0)));
            t3 = (unsigned char)t3;
            t2 = (kdGetDevice(t3));
            t3 = (*(int *)(((int)stk + 4)));
            t5 = t2;
            t3 = (*(signed char *)((t3 + 0x0)));
            t3 = (unsigned char)t3;
            t2 = (kdGetDeviceInfo(t3));
            t3 = t2;
            t2 = t6;
            *(unsigned char *)((0xC2EC54C + t2)) = (*(signed char *)((0xC2EC550 + t2)));
            if ((((*(int *)((t3 + 0x0))) & 0x80) != 0) && ((t15 = *(signed char *)((t5 + 0x2)), t2 = t15, t2 == 0) && (t16 = *(signed char *)((t5 + 0x4)), t2 = t16, t2 = (unsigned char)t2, t2 == 8))) {
                t3 = (*(int *)((t5 + 0x8)));
                t2 = (*(signed char *)((t3 + 0x8)));
                t2 = (t2 & 0x4);
                t3 = t2;
                t2 = t6;
                *(unsigned char *)((0xC2EC550 + t2)) = t3;
                t4 = (*(signed char *)((0xC2EC54C + t2)));
                t4 = (t4 ^ t3);
                t3 = (unsigned char)t3;
                if ((t3 == 0) && (t4 = (unsigned char)t4, t4 != 0)) {
                    break;
                }
                t6 = (t6 + 0x1);
                continue;
            }
            t6 = (t6 + 0x1);
            continue;
        }
        t6 = (t6 + 0x1);
    }
    return (t6 + 0x1);
}


int fmMngAddData(int a4)
{
    register int t0;
    register int t3;
    register int t4;

    t0 = 0xFFFFFFFA;
    if ((*(short *)((a4 + 0x2))) == 0) {
        (((struct o34_ushort *)(a4))->v) = (*(int *)((a4 + 0x28)));
        fmMngMcpy((*(int *)((a4 + 0x30))), ((a4 + 0x34) + 0x2), 0x3C);
        (((struct o3E_ushort *)((a4 + 0x34)))->v) = (fmcalccrc(0x3E, (a4 + 0x34)));
        fmMngMcpy4((a4 + 0x34), ((*(int *)((a4 + 0xC))) + (((((*(int *)((a4 + 0x28))) + 0x1) << 2) << 2) << 2)), 0x40);
        t0 = 0xFFFFFFF6;
        if ((int)(*(int *)((a4 + 0x10))) >= (int)(*(int *)((a4 + 0x14)))) {
        } else {
            t0 = *(int *)((a4 + 0x14));
            fmMngNum2Bit(((*(int *)((a4 + 0x10))) + 0x1), ((*(int *)((a4 + 0xC))) + ((((t0 + 0x1) << 2) << 2) << 2)), (*(int *)((a4 + 0x18))));
            t3 = syBtFlWrite(((*(int *)((a4 + 0x4))) + ((((t0 + 0x1) << 2) << 2) << 2)), ((*(int *)((a4 + 0xC))) + ((((t0 + 0x1) << 2) << 2) << 2)), ((((*(int *)((a4 + 0x18))) << 2) << 2) << 2));
            t0 = 0xFFFFFFFE;
            if (t3 == ((((*(int *)((a4 + 0x18))) << 2) << 2) << 2)) {
                t3 = *(int *)((a4 + 0x10));
                *(unsigned int *)((a4 + 0x10)) = ((*(int *)((a4 + 0x10))) + 0x1);
                t4 = syBtFlWrite(((*(int *)((a4 + 0x4))) + ((((t3 + 0x1) << 2) << 2) << 2)), (a4 + 0x34), 0x40);
                t3 = 0x0;
                if (t4 != 64) {
                    t3 = 0xFFFFFFFE;
                }
                t0 = t3;
            }
        }
    }
    return t0;
}

int vmsfs_rewrite_exec_file(int a4, int a5, int a6, int a7, int a8)
{
    int stk[6];
    register int t1;
    register int t41;
    register int t34;
    register int t6;
    register int t27;
    register int t8;
    register int t20;
    register int t13;
    register int t9;
    register int t10;
    register int t11;
    register int t12;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x30)) = 0x1;
    *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x34)) = a8;
    t1 = vmsfs_fgetinfo(a4, (*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x4));
    t41 = t1;
    if ((int)t1 >= 0) {
        t34 = 0xFFFFFF0B;
        if ((unsigned char)(*(signed char *)(((int)stk + 10))) == 1) {
            t6 = *(short *)(((int)stk + 8));
            t27 = 0xFFFFFF00;
            if (((unsigned int)a7 < (unsigned int)(unsigned short)t6) && (((unsigned int)a8 <= (unsigned int)(unsigned short)t6) && ((unsigned int)(a7 + a8) <= (unsigned int)(unsigned short)t6))) {
                t8 = check_file_correct(a4, (*(int *)(((int)stk + 0))));
                t20 = t8;
                if ((int)t8 >= 0) {
                    t13 = 0x0;
                    if ((unsigned int)0x0 < (unsigned int)a8) {
                        t9 = 0x0;
                        t10 = a6;
                        t11 = a7;
                        for (;;) {
                            t12 = vmsfs_write_retry(a4, t11, t10);
                            if ((int)t12 < 0) {
                                break;
                            }
                            t9 = (t9 + 0x1);
                            t10 = (t10 + 0x200);
                            t11 = (t11 + 0x1);
                            if ((unsigned int)t9 >= (unsigned int)a8) {
                                return 0x0;
                            }
                        }
                        t13 = t12;
                    }
                    t20 = t13;
                }
                t27 = t20;
            }
            t34 = t27;
        }
        t41 = t34;
    }
    return t41;
}

int vmsfs_setvolume(int a4, int a5)
{
    int stk[2];
    register int t1;
    register int t3;
    register int t6;
    register int t8;
    register int t9;
    register int t13;
    register int t14;
    int t4;
    register int t5;
    register int t11;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = (a4 * 0x148);
    if ((*(signed char *)((((a4 * 0x148) + 0xC2EE990) + 0x2))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            return 0xFFFFFF01;
        }
        t3 = vmsio_ismount(a4);
        if ((t3 != 0) && (t4 = *(int *)(((int)stk + 4)), t5 = *(signed char *)(((t4 + 0xC2EE990) + 0x8)), t5 != 0)) {
            t6 = buIsFormat(a4);
            if ((int)t6 < 0) {
                return 0xFFFFFF03;
            }
            t8 = ((*(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20))) + 0x10);
            t9 = 0x0;
            for (;;) {
                if ((int)t9 >= (int)0x20) {
                    break;
                }
                *(unsigned char *)((t8 + 0x0)) = 0x0;
                t8 = (t8 + 0x1);
                t9 = (t9 + 0x1);
            }
            t13 = ((*(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20))) + 0x10);
            t14 = 0x0;
            for (;;) {
                if ((int)t14 >= (int)0x20) {
                    break;
                }
                t11 = (*(int *)(((int)stk + 0)));
                t14 = (t14 + 0x1);
                t11 = (t11 + 0x1);
                *(unsigned int *)(((int)stk + 0)) = t11;
                t11 = (t11 - 1);
                *(unsigned char *)((t13 + 0x0)) = ((*(signed char *)((t11 + 0x0))));
                t13 = (t13 + 0x1);
            }
            return write_sys(a4);
        }
        return 0xFFFFFF01;
    }
    return 0xFFFFFF01;
}

int vmsfs_fisexist(int a4, int a5)
{
    int stk[12];
    register int t1;
    register int t3;
    register int t5;
    register int t7;

    *(unsigned int *)(((int)stk + 0)) = a5;
    if ((*(signed char *)(((a4 * 0x148) + 0xC2EE992))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            return 0xFFFFFF01;
        }
        t3 = vmsio_ismount(a4);
        if (t3 != 0) {
            if ((*(signed char *)(((a4 * 0x148) + 0xC2EE998))) == 0) {
                return 0xFFFFFF01;
            }
            t5 = buIsFormat(a4);
            if ((int)t5 < 0) {
                return 0xFFFFFF03;
            }
            t7 = search_dir(a4, (*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x4));
            if ((int)t7 >= 0) {
                return 0x0;
            }
            return 0xFFFFFF05;
        }
        return 0xFFFFFF01;
    }
    return 0xFFFFFF01;
}

int vmsfs_fsetparam(int a4, int a5, int a6)
{
    int stk[2];
    register int t3;
    register int t7;
    register int t11;

    *(unsigned short *)(((int)stk + 4)) = a5;
    *(unsigned char *)(((int)stk + 0)) = a6;
    if (a4 == 0) {
        return 0xFFFFFF00;
    }
    if ((*(signed char *)((((*(int *)((a4 + 0x28))) * 0x148) + 0xC2EE992))) != 0) {
        t3 = vmsio_isready((*(int *)((a4 + 0x28))));
        if (t3 == 0) {
            vmsfs_unmount((*(int *)((a4 + 0x28))));
            return 0xFFFFFF01;
        }
        t7 = vmsio_ismount((*(int *)((a4 + 0x28))));
        if (t7 != 0) {
            if ((*(signed char *)((((*(int *)((a4 + 0x28))) * 0x148) + 0xC2EE998))) == 0) {
                return 0xFFFFFF01;
            }
            t11 = buIsFormat((*(int *)((a4 + 0x28))));
            if ((int)t11 < 0) {
                return 0xFFFFFF03;
            }
            *(unsigned short *)((a4 + 0x2)) = (*(short *)(((int)stk + 4)));
            *(unsigned char *)((a4 + 0x1)) = (*(signed char *)(((int)stk + 0)));
            return 0x0;
        }
        return 0xFFFFFF01;
    }
    return 0xFFFFFF01;
}


int vmsio_ismount(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = *(int *)(((a4 << 2) + 0xC176948));
    t2 = kdGetDevice(t1);
    t3 = kdGetDeviceInfo(t1);
    if ((*(signed char *)((t2 + 0x0))) != 0) {
        t2 = kdIsChanged(t1);
        if ((t2 == 0) && (t0 = *(int *)((t3 + 0x0)), (t0 & 2) != 0)) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}


int syCfgGetLanguage(int a4, int a5, int a6)
{
    int stk[1];
    register int t0;
    register int t1;
    register int t3;

    if (a4 != 0) {
        *(unsigned int *)((a4 + 0x0)) = 0x0;
        t0 = *(int *)0xC177AC8;
        if (t0 != 0) {
            t1 = syBtCfgSet(0x0, t0, a6);
            if (t1 == -1) {
                return 0xFFFFFFFF;
            }
            t3 = *(signed char *)0x8C00007D;
            if ((signed char)t3 == -1) {
                syCfgGetDefaultLanguage(((int)stk + 0), t3);
                if ((*(int *)(((int)stk + 0))) == -1) {
                    *(unsigned int *)((a4 + 0x0)) = 0x1;
                } else {
                    *(unsigned int *)((a4 + 0x0)) = (syCfgConvLang((*(int *)(((int)stk + 0)))));
                }
            } else {
                *(unsigned int *)((a4 + 0x0)) = (signed char)t3;
            }
            return 0x0;
        }
        return 0xFFFFFFFF;
    }
    return 0xFFFFFFFF;
}


int syCfgGetSoundMode(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    if (a4 != 0) {
        *(unsigned int *)((a4 + 0x0)) = 0x0;
        t0 = *(int *)0xC177AC8;
        if (t0 != 0) {
            t1 = syBtCfgSet(0x0, t0, a6);
            if (t1 != -1) {
                t0 = *(signed char *)0x8C00007E;
                if ((signed char)t0 == 0) {
                    *(unsigned int *)((a4 + 0x0)) = 0x0;
                    return 0x0;
                }
                if ((signed char)t0 == 1) {
                    *(unsigned int *)((a4 + 0x0)) = 0x1;
                    return 0x0;
                }
                return 0xFFFFFFFF;
            }
            return 0xFFFFFFFF;
        }
        return 0xFFFFFFFF;
    }
    return 0xFFFFFFFF;
}


