/* Straight-line functions with calls and guards (batch gen_ard): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXB_CheckAiff(int);
int ADXB_CheckAu(int);
int ADXB_CheckSpsd(int);
int ADXB_CheckWav(int);
int ADXB_DecodeHeaderAdx(int, int, int);
int ADXB_EntryData(int, int, int);
int ADXB_GetFormat(int);
int ADXB_Start(int);
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int);
int ADXF_Ocbi(int, int);
int ADXSJD_GetBlkSmpl(int);
int ADXSJD_GetTotalNumSmpl(int);
int ADX_DecodeInfoAiff(int, int, int, int, int, int, int, int, int, int);
int ADX_DecodeInfoAu(int, int, int, int, int, int, int, int, int, int, int);
int ADX_DecodeInfoSpsd(int, int, int, int, int, int, int, int, int, int, int);
int ADX_DecodeInfoWav(int, int, int, int, int, int, int, int, int, int, int);
int SJRBF_Create(int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int _mult64(int, int, int, int);
int _pow10(int, int, int);
int _rnd(int, int);
int adxf_SetCmdHstry(int, int, int, int, int);
int adxf_read_sj32(int, int, int);
int buIsFormat(int);
int check_file_correct(int, int);
int check_isopen(void);
int close_file_handle(int);
int direntry(int, int);
int direntry_dirty(int, int);
int fmMngBit2Num(int, int);
int fmMngChkEmptyData(int, int);
int fmMngMcpy(void);
int fmMngMcpy4(int, int, int);
int fmMngNum2Bit(int, int, int);
int fmcalccrc(int, int);
int gdFsCreateDirhn(int, int);
int gdFsCreateHnG(int, int, int, int);
int gdFsGetGdDcf(void);
int gdFsInitSub(void);
int kmCreateTextureSurface(int, int, int, int);
int kmiAllocSysConfig(int, int, int, int);
int kmiChkActiveListType(int, int, int, int, int);
int kmiCopyDummyGlobalData(int, int, int);
int kmiGetDisplayData(int, int, int);
int kmiGetNativeRegOBPSize(int);
int kmiGetPackOBPParam(int, int, int, int, int, int);
int kmiGetProfileInt(int, int, int);
int kmiGetVertexBasePointer(int, int, int, int, int, int, int);
int kmiInitCallback(void);
int kmiInitRenderer(void);
int kmiInitializeBackGroundPlane(void);
int kmiInitializeHardware(void);
int kmiSetTAEnvironment(int, int, int, int, int);
int kmiTAallocEx(int, int, int);
int memmove(int, int, int);
int memset(int, int, int);
int nlCommonTextureGetNextTextureIndex(void);
int nlCreateTextureParam(int);
int open_file_handle(void);
int search_dir(int, int, int);
int search_exec_file(int, int);
int syBtFlRead(int, int, int);
int syBtFlWrite(int, int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_dir(int);
int write_fat(int);
int kmCreateVertexBuffer(int a4, int a5, int a6, int a7, int a8);
int kmiInitializeDriver(void);
int nlRenderTextureSet_Sub(int a4, int a5, int a6, int a7);
void vmsfs_fclose(int a4, int a5);
int _power(int a4, int a5, int a6);
int gdFsInitG(int a4, int a5, int a6, int a7, int a8);
int vmsfs_fopen(int a4, int a5, int a6);
int ADXB_DecodeHeaderAiff(int a4, int a5, int a6);
int adxsjd_decexec_start(int a4, int a5, int a6, int a7);
int ADXF_ReadNw32(int a4, int a5, int a6);
int ADXB_DecodeHeaderAu(int a4, int a5, int a6);
int fmMngReadSctAllData(int a4);
int ADXB_DecodeHeaderSpsd(int a4, int a5, int a6);
int ADXB_DecodeHeaderWav(int a4, int a5, int a6);
int fmMngAddData(int a4);
int fmMngSctRefresh(int a4);
int ADXB_DecodeHeader(int a4, int a5, int a6);
int vmsfs_xfind(int a4, int a5, int a6);
int kmInitDevice(int a4);
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o34_ushort { char p[0x34]; unsigned short v; };
struct o3E_ushort { char p[0x3E]; unsigned short v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_int { char p[0x44]; int v; };
struct o48_short { char p[0x48]; short v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4A_short { char p[0x4A]; short v; };
struct o4A_ushort { char p[0x4A]; unsigned short v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o7C_ushort { char p[0x7C]; unsigned short v; };
struct o7E_ushort { char p[0x7E]; unsigned short v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA8_ushort { char p[0xA8]; unsigned short v; };
struct oAA_ushort { char p[0xAA]; unsigned short v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_short { char p[0xC]; short v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oE_short { char p[0xE]; short v; };


void vmsfs_fclose(int a4, int a5)
{
    int t13;
    int t19;
    int t24;
    int t31;
    int t37;
    int t44;
    int t48;
    int t52;
    int t63;
    int stk[8];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F15;
    int T_;
    int R1004;
    R1004 = *(int *)((int)stk + 4);
    R4 = a4;
    R5 = a5;
    L_C164A6A:;
    R1004 = R5;
    R14 = (R4);
    if ((R4 != 0)) goto L_C164A86;
    goto L_C164A80;
    L_C164A80:;
    R0 = (0xFFFFFF00);
    goto L_C164BC2;
    L_C164BC2:;
    return;
    L_C164A86:;
    R10 = (0xC2EE990);
    R11 = (0x148);
    R13 = (0x0);
    if (((*(signed char *)(((((*(int *)((R14 + 0x28))) * 0x148) + 0xC2EE990) + 0x2))) != 0)) goto L_C164A9E;
    goto L_C164A9A;
    L_C164A9A:;
    goto L_C164BBA;
    L_C164BBA:;
    close_file_handle(R14);
    R0 = (R13);
    goto L_C164BC2;
    L_C164A9E:;
    t13 = (vmsio_ismount((*(int *)((R14 + 0x28))))) != 0;
    if (t13) goto L_C164AAC;
    goto L_C164AA8;
    L_C164AA8:;
    goto L_C164BBA;
    L_C164AAC:;
    if (((*(signed char *)(((((*(int *)((R14 + 0x28))) * R11) + R10) + 0x8))) != 0)) goto L_C164ABE;
    goto L_C164ABA;
    L_C164ABA:;
    goto L_C164BBA;
    L_C164ABE:;
    t19 = (vmsio_isready((*(int *)((R14 + 0x28))))) != 0;
    if (t19) goto L_C164AD0;
    goto L_C164AC8;
    L_C164AC8:;
    vmsfs_unmount((*(int *)((R14 + 0x28))));
    goto L_C164BBA;
    L_C164AD0:;
    t24 = (int)(buIsFormat((*(int *)((R14 + 0x28))))) < 0;
    if (t24) goto L_C164BBA;
    goto L_C164ADA;
    L_C164ADA:;
    R12 = ((*(int *)((R14 + 0x28))));
    if (((*(int *)((R14 + 0x4))) == 0)) goto L_C164BB8;
    goto L_C164AE2;
    L_C164AE2:;
    if (((R1004) == 0)) goto L_C164B04;
    goto L_C164AE8;
    L_C164AE8:;
    *(unsigned int *)((((R12 * R11) + R10) + 0x30)) = 0x1;
    t31 = *(int *)((((R12 * R11) + R10) + 0x4));
    *(unsigned int *)((((R12 * R11) + R10) + 0x34)) = (*(int *)((((((t31 << 2) + t31) << 2) << 2) + 0xC1784F0)));
    R4 = (((R12 * R11) + R10));
    goto L_C164B04;
    L_C164B04:;
    t37 = (*(int *)((R14 + 0x8))) != 1;
    R13 = ((direntry(R12, (*(int *)((R14 + 0x2C))))));
    if (t37) goto L_C164B40;
    goto L_C164B14;
    L_C164B14:;
    R4 = (0xCC);
    goto L_C164B42;
    L_C164B42:;
    *(unsigned char *)((R13 + 0x0)) = R4;
    *(unsigned char *)((R13 + 0x1)) = (*(signed char *)((R14 + 0x1)));
    t44 = ((int (*)(int, int, int))((*(int *)(((*(int *)0xC2EE98C) + 0x10)))))(R13, 0x2, (*(int *)((R14 + 0x38))));
    t48 = ((int (*)(int, int, int))((*(int *)(((*(int *)0xC2EE98C) + 0x10)))))(R13, 0x18, (*(int *)((R14 + 0x30))));
    t52 = ((int (*)(int, int, int))((*(int *)(((*(int *)0xC2EE98C) + 0x10)))))(R13, 0x1A, (*(short *)((R14 + 0x2))));
    R11 = ((R13 + 0x10));
    R4 = ((R13 + 0x4));
    R5 = ((R14 + 0x10));
    goto L_C164B84;
    L_C164B84:;
    if (((unsigned int)R4 < (unsigned int)R11)) goto L_C164B7E;
    goto L_C164B88;
    L_C164B88:;
    R4 = (R11);
    R5 = ((R14 + 0x20));
    R6 = ((R13 + 0x18));
    goto L_C164B9A;
    L_C164B9A:;
    if (((unsigned int)R4 < (unsigned int)R6)) goto L_C164B94;
    goto L_C164B9E;
    L_C164B9E:;
    direntry_dirty(R12, (*(int *)((R14 + 0x2C))));
    t63 = write_dir(R12);
    R13 = (t63);
    if (((int)t63 < 0)) goto L_C164BBA;
    goto L_C164BB2;
    L_C164BB2:;
    write_fat(R12);
    goto L_C164BB8;
    L_C164BB8:;
    R13 = (0x0);
    goto L_C164BBA;
    L_C164B94:;
    *(unsigned char *)((R4 + 0x0)) = (*(signed char *)((R5 + 0x0)));
    R4 = ((R4 + 0x1));
    R5 = ((R5 + 0x1));
    goto L_C164B9A;
    L_C164B7E:;
    *(unsigned char *)((R4 + 0x0)) = (*(signed char *)((R5 + 0x0)));
    R4 = ((R4 + 0x1));
    R5 = ((R5 + 0x1));
    goto L_C164B84;
    L_C164B40:;
    R4 = (0x33);
    goto L_C164B42;
}


int gdFsInitG(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t2;
    int t4;
    int t5;
    int t17;
    int t18;
    int t19;
    int t23;
    int t24;
    int t1;

    t0 = *(int *)0xC177A8C;
    if ((t0 != 0) && (t1 = *(short *)((t0 + 0x38)), t1 == 1)) {
        return 0x0;
    }
    if ((a5 & 31) != 0) {
        return 0xFFFFFFF2;
    }
    t2 = gdFsGetGdDcf();
    t4 = ((int (*)(void))((*(int *)((t2 + 0x0)))))();
    t5 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)0xC177A8C = a5;
    *(unsigned short *)((a5 + 0x38)) = 0x0;
    *(unsigned int *)(((*(int *)0xC177A8C) + 0x20)) = 0x0;
    *(unsigned int *)(((*(int *)0xC177A8C) + 0x0)) = a4;
    *(unsigned int *)((((*(int *)0xC177A8C) + 0x10) + 0x0)) = (gdFsCreateDirhn(a7, a6));
    *(unsigned int *)(((*(int *)0xC177A8C) + 0xC)) = t2;
    *(unsigned int *)(((*(int *)0xC177A8C) + 0x1C)) = 0x0;
    *(unsigned short *)(((*(int *)0xC177A8C) + 0x3A)) = 0x0;
    *(unsigned int *)(((*(int *)0xC177A8C) + 0x24)) = 0x0;
    *(unsigned int *)(((*(int *)0xC177A8C) + 0x34)) = 0x0;
    *(unsigned int *)(((*(int *)0xC177A8C) + 0x3C)) = a8;
    t17 = 0x3A;
    t18 = ((*(int *)0xC177A8C) + 0x1080);
    t19 = 0x0;
    for (;;) {
        if ((int)t19 >= (int)((*(int *)(((*(int *)0xC177A8C) + 0x0))) + 0x1)) {
            break;
        }
        t17 = 0x4C;
        *(unsigned short *)((t18 + t17)) = 0x0;
        t19 = (t19 + 0x1);
        *(unsigned int *)((t18 + 0x0)) = (*(int *)0xC177A8C);
        t18 = (t18 + 0x54);
    }
    t23 = *(int *)0xC177A8C;
    *(unsigned int *)((t23 + 0x14)) = (0x1080 + t23);
    t24 = *(int *)0xC177A8C;
    *(unsigned int *)((t24 + 0x18)) = ((0x1080 + t24) + 0x54);
    gdFsCreateHnG((*(int *)(((*(int *)0xC177A8C) + 0x14))), 0x0, 0x0, 0x0);
    _builtin_set_imask(((unsigned int)(((t5 & 0xF) << 2) << 2) >> 4));
    return gdFsInitSub();
}

int vmsfs_fopen(int a4, int a5, int a6)
{
    int t6;
    int t10;
    int t14;
    int t17;
    int t19;
    int t21;
    int t25;
    int t30;
    int stk[17];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R8;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    int R1004;
    R1004 = *(int *)((int)stk + 0);
    R4 = a4;
    R5 = a5;
    R6 = a6;
    L_C1645F0:;
    R1004 = R6;
    *(unsigned int *)((R6 + 0x0)) = 0x0;
    R11 = (R5);
    R12 = (0x0);
    R13 = (R4);
    if (((*(signed char *)(((R4 * 0x148) + 0xC2EE992))) == 0)) goto L_C164640;
    goto L_C164616;
    L_C164616:;
    t6 = (vmsio_isready(R13)) != 0;
    if (t6) goto L_C164628;
    goto L_C164620;
    L_C164620:;
    vmsfs_unmount(R13);
    goto L_C164640;
    L_C164640:;
    R0 = (0xFFFFFF01);
    goto L_C1646F4;
    L_C1646F4:;
    return R0;
    L_C164628:;
    t10 = (vmsio_ismount(R13)) == 0;
    if (t10) goto L_C164640;
    goto L_C164632;
    L_C164632:;
    if (((*(signed char *)(((R13 * 0x148) + 0xC2EE998))) != 0)) goto L_C164646;
    goto L_C164640;
    L_C164646:;
    t14 = (int)(buIsFormat(R13)) >= 0;
    if (t14) goto L_C164656;
    goto L_C164650;
    L_C164650:;
    R0 = (0xFFFFFF03);
    goto L_C1646F4;
    L_C164656:;
    t17 = (int)(check_isopen()) < 0;
    if (t17) goto L_C164680;
    goto L_C164662;
    L_C164662:;
    t19 = (int)(check_file_correct(R13, R11)) >= 0;
    if (t19) goto L_C164674;
    goto L_C16466E;
    L_C16466E:;
    R0 = (0xFFFFFF41);
    goto L_C1646F4;
    L_C164674:;
    t21 = open_file_handle();
    R14 = (t21);
    if ((t21 != 0)) goto L_C1646B4;
    goto L_C164680;
    L_C164680:;
    R0 = (0xFFFFFF07);
    goto L_C1646F4;
    L_C1646B4:;
    t25 = search_dir(R13, R11, (((int)stk + 0) + 0x4));
    *(unsigned int *)0xC2F3894 = t25;
    if (((int)t25 >= 0)) goto L_C1646D4;
    goto L_C1646C8;
    L_C1646C8:;
    close_file_handle(R14);
    R0 = (0xFFFFFF05);
    goto L_C1646F4;
    L_C1646D4:;
    *(unsigned int *)((R14 + 0x4)) = R12;
    *(unsigned int *)((R14 + 0x34)) = (*(int *)(((int)stk + 44)));
    t30 = *(int *)(((int)stk + 16));
    *(unsigned int *)((R14 + 0x38)) = t30;
    (((struct o40_uint *)(R14))->v) = t30;
    *(unsigned int *)((R14 + 0x28)) = R13;
    *(unsigned short *)((R14 + 0x2)) = (*(short *)(((int)stk + 12)));
    *(unsigned char *)((R14 + 0x1)) = (*(signed char *)(((int)stk + 14)));
    *(unsigned int *)(((R1004) + 0x0)) = R14;
    R0 = (R12);
    goto L_C1646F4;
}


int fmMngReadSctAllData(int a4)
{
    int t0;
    int t1;
    int t2;
    int t41;
    int t3;
    int t5;
    int t35;
    int t29;
    int t24;
    int t10;
    int t11;
    int t12;
    int t15;
    int t17;
    int t18;

    t0 = *(int *)((a4 + 0xC));
    t1 = *(int *)((a4 + 0x4));
    t2 = syBtFlRead(t1, t0, 0x40);
    t41 = 0xFFFFFFFF;
    if (t2 != -1) {
        t3 = *(int *)((a4 + 0x14));
        t5 = syBtFlRead((t1 + ((((t3 + 0x1) << 2) << 2) << 2)), (((((t3 + 0x1) << 2) << 2) << 2) + t0), ((((*(int *)((a4 + 0x18))) << 2) << 2) << 2));
        t35 = 0xFFFFFFFF;
        if (t5 != -1) {
            t11 = fmMngBit2Num((((((t3 + 0x1) << 2) << 2) << 2) + t0), (*(int *)((a4 + 0x18))));
            *(unsigned int *)((a4 + 0x10)) = t11;
            t29 = 0xFFFFFFFA;
            if ((*(short *)((a4 + 0x2))) == 0) {
                t24 = 0x0;
                if ((int)t11 > 0) {
                    t10 = (t1 + 0x40);
                    for (;;) {
                        t12 = syBtFlRead(t10, (a4 + 0x34), 0x40);
                        if (t12 == -1) {
                            break;
                        }
                        if ((unsigned short)(*(short *)(((a4 + 0x34) + 0x0))) != 0xFFFF) {
                            t15 = fmcalccrc(0x3E, (a4 + 0x34));
                            if (((unsigned short)(*(short *)(((a4 + 0x34) + 0x3E))) == (unsigned short)t15) && (t17 = *(short *)(((a4 + 0x34) + 0x0)), t18 = *(int *)((a4 + 0x14)), (int)(unsigned short)t17 < (int)t18)) {
                                fmMngMcpy4((a4 + 0x34), ((((((unsigned short)(*(short *)(((a4 + 0x34) + 0x0))) + 0x1) << 2) << 2) << 2) + t0), 0x40);
                            }
                            t11 = (t11 - 1);
                            t10 = (t10 + 0x40);
                            if ((int)t11 <= 0) {
                                return 0x0;
                            }
                            continue;
                        }
                        return 0x0;
                    }
                    t24 = 0xFFFFFFFF;
                }
                t29 = t24;
            }
            t35 = t29;
        }
        t41 = t35;
    }
    return t41;
}


int fmMngSctRefresh(int a4)
{
    int t5;
    int t6;
    int t12;
    int t21;
    int t22;
    int t27;
    int t37;
    int stk[10];

    int R0;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    L_C170A8C:;
    R13 = (R4);
    R8 = ((*(int *)((R4 + 0x4))));
    if (((*(short *)((R4 + 0x2))) != 0)) goto L_C170B32;
    goto L_C170AA8;
    L_C170AA8:;
    t5 = *(int *)((R13 + 0xC));
    t6 = syBtFlWrite(R8, t5, 0x40);
    R10 = (0xC170848);
    R12 = (R8);
    R14 = ((t5 + 0x40));
    R4 = (t6);
    if ((t6 != 64)) goto L_C170B28;
    goto L_C170ABE;
    L_C170ABE:;
    t12 = *(int *)((R13 + 0x14));
    R11 = (0x0);
    R12 = ((R12 + 0x40));
    R9 = (t12);
    if (((int)t12 <= 0)) goto L_C170AF6;
    goto L_C170AC8;
    L_C170AC8:;
    R4 = (0xFFFF);
    if (((unsigned short)(*(short *)((R14 + 0x0))) == 0xFFFF)) goto L_C170AEE;
    goto L_C170AD2;
    L_C170AD2:;
    t21 = (fmMngChkEmptyData(R13, R14)) != 0;
    if (t21) goto L_C170AEE;
    goto L_C170ADC;
    L_C170ADC:;
    t22 = syBtFlWrite(R12, R14, 0x40);
    R4 = (t22);
    if ((t22 != 64)) goto L_C170B28;
    goto L_C170AEA;
    L_C170AEA:;
    R11 = ((R11 + 0x1));
    R12 = ((R12 + 0x40));
    goto L_C170AEE;
    L_C170AEE:;
    t27 = (int)(R9 - 1) > 0;
    R14 = ((R14 + 0x40));
    R9 = ((R9 - 1));
    if (t27) goto L_C170AC8;
    goto L_C170AF6;
    L_C170AF6:;
    *(unsigned int *)(((int)stk + 4)) = (((((*(int *)((R13 + 0x14))) + 0x1) << 2) << 2) << 2);
    fmMngNum2Bit(R11, R14, (*(int *)((R13 + 0x18))));
    t37 = (syBtFlWrite(((*(int *)(((int)stk + 4))) + R8), R14, ((((*(int *)((R13 + 0x18))) << 2) << 2) << 2))) == ((((*(int *)((R13 + 0x18))) << 2) << 2) << 2);
    if (t37) goto L_C170B2C;
    goto L_C170B28;
    L_C170B28:;
    R0 = (0xFFFFFFFE);
    goto L_C170B34;
    L_C170B34:;
    return R0;
    L_C170B2C:;
    *(unsigned int *)((R13 + 0x10)) = R11;
    R0 = (0x0);
    goto L_C170B34;
    L_C170B32:;
    R0 = (0xFFFFFFFA);
    goto L_C170B34;
}


int vmsfs_xfind(int a4, int a5, int a6)
{
    int t39;
    int t1;
    int t3;
    int t27;
    int t21;
    int t5;
    int t16;
    int t6;
    int t11;
    int t7;
    int t9;
    int t33;
    int t8;
    int stk[14];

    t39 = 0xFFFFFF01;
    if ((*(signed char *)(((a4 * 0x148) + 0xC2EE992))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t33 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t27 = 0xFFFFFF01;
            if (t3 != 0) {
                t21 = 0xFFFFFF01;
                if ((*(signed char *)(((a4 * 0x148) + 0xC2EE998))) == 0) {
                } else {
                    t5 = buIsFormat(a4);
                    t16 = 0xFFFFFF03;
                    if ((int)t5 >= 0) {
                        t6 = search_exec_file(a4, ((int)stk + 0));
                        t11 = 0xFFFFFF05;
                        if ((int)t6 >= 0) {
                            t7 = t6;
                            t9 = 0x0;
                            for (;;) {
                                if ((int)t9 >= (int)0xC) {
                                    break;
                                }
                                t8 = ((int)stk + 0);
                                t8 = (t8 + 0x10);
                                t7 = t9;
                                t8 = (*(signed char *)((t8 + t7)));
                                t9 = (t9 + 0x1);
                                *(unsigned char *)((a5 + t7)) = t8;
                            }
                            *(unsigned char *)((a5 + 0xC)) = 0x0;
                            t11 = 0x0;
                        }
                        t16 = t11;
                    }
                    t21 = t16;
                }
                t27 = t21;
            }
            t33 = t27;
        }
        t39 = t33;
    }
    return t39;
}

