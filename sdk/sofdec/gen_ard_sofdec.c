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


int ADXB_DecodeHeaderAiff(int a4, int a5, int a6)
{
    int t2;
    int stk[12];

    *(unsigned int *)(((int)stk + 32)) = a5;
    *(unsigned int *)(((int)stk + 36)) = a6;
    *(unsigned short *)((a4 + 0x2)) = 0x1;
    t2 = ADX_DecodeInfoAiff((*(int *)(((int)stk + 32))), (*(int *)(((int)stk + 36))), (((int)stk + 4) + 0x18), (a4 + 0xC), (a4 + 0xD), (a4 + 0xF), (a4 + 0xE), (a4 + 0x14), (a4 + 0x18), (a4 + 0x10));
    if ((int)t2 < 0) {
        return 0x0;
    }
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    (((struct o4A_ushort *)(a4))->v) = 0x0;
    (((struct o48_ushort *)(a4))->v) = 0x0;
    (((struct o26_ushort *)(a4))->v) = 0x0;
    (((struct o24_ushort *)(a4))->v) = 0x0;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x30)) = 0x0;
    *(unsigned int *)((a4 + 0x2C)) = 0x0;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(unsigned int *)((a4 + 0x20)) = 0x0;
    (((struct o58_uint *)(a4))->v) = (*(signed char *)((a4 + 0xE)));
    (((struct o5C_uint *)(a4))->v) = (*(signed char *)((a4 + 0xF)));
    (((struct o60_uint *)(a4))->v) = (*(int *)((a4 + 0x10)));
    (((struct o64_uint *)(a4))->v) = (*(int *)((a4 + 0x3C)));
    (((struct o68_uint *)(a4))->v) = ((((struct o40_int *)(a4))->v));
    (((struct o6C_uint *)(a4))->v) = ((((struct o44_int *)(a4))->v));
    (((struct o7C_ushort *)(a4))->v) = ((((struct o48_short *)(a4))->v));
    (((struct o7E_ushort *)(a4))->v) = ((((struct o4A_short *)(a4))->v));
    (((struct o80_uint *)(a4))->v) = (a4 + 0x4C);
    (((struct o9C_uint *)(a4))->v) = 0x0;
    (((struct o98_uint *)(a4))->v) = 0x0;
    (((struct oA8_ushort *)(a4))->v) = 0x3;
    if ((*(signed char *)((a4 + 0xD))) == 8) {
        (((struct oAA_ushort *)(a4))->v) = 0x1;
    } else {
        (((struct oAA_ushort *)(a4))->v) = 0x0;
    }
    memset((a4 + 0x4C), 0x0, 0x4);
    return (*(short *)(((int)stk + 28)));
}

int adxsjd_decexec_start(int a4, int a5, int a6, int a7)
{
    int t10;
    int t14;
    int t16;
    int t20;
    int t25;
    int t27;
    int t29;
    int t32;
    int stk[7];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R12;
    int R13;
    int R14;
    int T_;
    int R1008;
    R1008 = *(int *)((int)stk + 8);
    R4 = a4;
    R6 = a6;
    R7 = a7;
    L_C168504:;
    R12 = ((*(int *)((R4 + 0x4))));
    R13 = ((*(int *)((R4 + 0x8))));
    R14 = (R4);
    if (((*(signed char *)((R4 + 0x3))) != 1)) goto L_C168548;
    goto L_C16851A;
    L_C16851A:;
    t10 = (((int (*)(int, int, int, int))((*(int *)(((*(int *)((R13 + 0x0))) + 0x24)))))(R13, 0x1, R6, R7)) != 0;
    if (t10) goto L_C168548;
    goto L_C168528;
    L_C168528:;
    *(unsigned char *)((R14 + 0x1)) = 0x3;
    R0 = (0x3);
    goto L_C1685EA;
    L_C1685EA:;
    return R0;
    L_C168548:;
    t14 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((R13 + 0x0))) + 0x18)))))(R13, 0x1, 0x7FFFFFFF, (R14 + 0x14));
    t16 = (ADXB_GetFormat(R12)) != 0;
    if (t16) goto L_C16858A;
    goto L_C168562;
    L_C168562:;
    if (((int)(*(int *)((R14 + 0x18))) < (int)0x2)) goto L_C16858A;
    goto L_C16856A;
    L_C16856A:;
    t20 = *(short *)(((*(int *)((R14 + 0x14))) + 0x0));
    R4 = ((unsigned short)((unsigned char)((int)t20 >> 8) | ((t20 << 8) & 0xFF00)));
    if (((unsigned short)((unsigned char)((int)t20 >> 8) | ((t20 << 8) & 0xFF00)) == 0x8001)) goto L_C168594;
    goto L_C16858A;
    L_C16858A:;
    t25 = (int)(*(int *)((R14 + 0x34))) < (int)(ADXSJD_GetTotalNumSmpl(R14));
    if (t25) goto L_C16859A;
    goto L_C168594;
    L_C168594:;
    *(unsigned char *)((R14 + 0x1)) = 0x3;
    goto L_C1685B8;
    L_C1685B8:;
    t27 = *(int *)(((*(int *)((R13 + 0x0))) + 0x1C));
    return ((int (*)(int, int, int, int))(t27))(R13, 0x1, (R14 + 0x14), R7);
    L_C16859A:;
    R1008 = (ADXSJD_GetBlkSmpl(R14));
    t29 = *(int *)((R14 + 0xC));
    *(unsigned int *)(((int)stk + 4)) = t29;
    t32 = ((int (*)(int, int))((*(int *)(((*(int *)((t29 + 0x0))) + 0x24)))))(t29, 0x0);
    R4 = (((unsigned int)t32 >> 1));
    if (((int)((unsigned int)t32 >> 1) >= (int)(R1008))) goto L_C1685D0;
    goto L_C1685B8;
    L_C1685D0:;
    ADXB_EntryData(R12, (*(int *)((R14 + 0x14))), (*(int *)((R14 + 0x18))));
    return ADXB_Start(R12);
}

int ADXF_ReadNw32(int a4, int a5, int a6)
{
    int t17;
    int t30;
    int t60;

    adxf_SetCmdHstry(0x4, 0x0, a4, a5, a6);
    if (a4 == 0) {
        ADXERR_CallErrFunc(0xC1758A0);
        t60 = 0xFFFFFFFD;
    } else {
        if ((int)a5 < 0) {
            ADXERR_CallErrFunc(0xC1758CC);
            t60 = 0xFFFFFFFD;
        } else {
            if (a6 == 0) {
                ADXERR_CallErrFunc(0xC1758FC);
                t60 = 0xFFFFFFFD;
            } else {
                if ((a6 & 0x1F) != 0) {
                    ADXERR_CallErrFunc(0xC175924);
                    t60 = 0xFFFFFFFD;
                } else {
                    t60 = 0x0;
                    if ((*(signed char *)((a4 + 0x1))) == 2) {
                    } else {
                        if ((*(int *)((a4 + 0x8))) != 0) {
                            ADXERR_CallErrFunc(0xC175960);
                            t60 = 0xFFFFFFFF;
                        } else {
                            t17 = SJRBF_Create(a6, (((a5 << 8) << 2) << 1), 0x0);
                            t60 = 0xFFFFFFFE;
                            if (t17 == 0) {
                            } else {
                                *(unsigned int *)((a4 + 0x28)) = a6;
                                *(unsigned int *)((a4 + 0x2C)) = (((a5 << 8) << 2) << 1);
                                if ((*(int *)0xC2BA338) == 1) {
                                    ADXF_Ocbi((*(int *)((a4 + 0x28))), (*(int *)((a4 + 0x2C))));
                                }
                                ADXCRS_Lock();
                                t60 = adxf_read_sj32(a4, a5, t17);
                                if ((int)t60 <= 0) {
                                    t30 = ((int (*)(int))((*(int *)(((*(int *)((t17 + 0x0))) + 0xC)))))(t17);
                                } else {
                                    *(unsigned int *)((a4 + 0x8)) = t17;
                                }
                                *(unsigned char *)((a4 + 0x2)) = 0x0;
                                ADXCRS_Unlock();
                                adxf_SetCmdHstry(0x4, 0x1, a4, a5, a6);
                            }
                        }
                    }
                }
            }
        }
    }
    return t60;
}

int ADXB_DecodeHeaderAu(int a4, int a5, int a6)
{
    int t2;
    int t14;
    int stk[14];

    *(unsigned int *)(((int)stk + 36)) = a5;
    *(unsigned int *)(((int)stk + 40)) = a6;
    *(unsigned short *)((a4 + 0x2)) = 0x1;
    t2 = ADX_DecodeInfoAu((*(int *)(((int)stk + 36))), (*(int *)(((int)stk + 40))), (((int)stk + 0) + 0x1C), (a4 + 0xC), (a4 + 0xD), (a4 + 0xF), (a4 + 0xE), (a4 + 0x14), (a4 + 0x18), (a4 + 0x10), (((int)stk + 28) + 0x4));
    t14 = 0x0;
    if ((int)t2 < 0) {
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o4A_ushort *)(a4))->v) = 0x0;
        (((struct o48_ushort *)(a4))->v) = 0x0;
        (((struct o26_ushort *)(a4))->v) = 0x0;
        (((struct o24_ushort *)(a4))->v) = 0x0;
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        *(unsigned int *)((a4 + 0x30)) = 0x0;
        *(unsigned int *)((a4 + 0x2C)) = 0x0;
        *(unsigned int *)((a4 + 0x28)) = 0x0;
        *(unsigned int *)((a4 + 0x20)) = 0x0;
        (((struct o58_uint *)(a4))->v) = (*(signed char *)((a4 + 0xE)));
        (((struct o5C_uint *)(a4))->v) = (*(signed char *)((a4 + 0xF)));
        (((struct o60_uint *)(a4))->v) = (*(int *)((a4 + 0x10)));
        (((struct o64_uint *)(a4))->v) = (*(int *)((a4 + 0x3C)));
        (((struct o68_uint *)(a4))->v) = ((((struct o40_int *)(a4))->v));
        (((struct o6C_uint *)(a4))->v) = ((((struct o44_int *)(a4))->v));
        (((struct o7C_ushort *)(a4))->v) = ((((struct o48_short *)(a4))->v));
        (((struct o7E_ushort *)(a4))->v) = ((((struct o4A_short *)(a4))->v));
        (((struct o80_uint *)(a4))->v) = (a4 + 0x4C);
        (((struct o9C_uint *)(a4))->v) = 0x0;
        (((struct o98_uint *)(a4))->v) = 0x0;
        (((struct oA8_ushort *)(a4))->v) = 0x4;
        (((struct oAA_ushort *)(a4))->v) = (*(int *)(((int)stk + 32)));
        memset((a4 + 0x4C), 0x0, 0x4);
        t14 = (*(short *)(((int)stk + 28)));
    }
    return t14;
}


int ADXB_DecodeHeaderSpsd(int a4, int a5, int a6)
{
    int t2;
    int t13;
    int stk[14];

    *(unsigned int *)(((int)stk + 36)) = a5;
    *(unsigned int *)(((int)stk + 40)) = a6;
    *(unsigned short *)((a4 + 0x2)) = 0x1;
    t2 = ADX_DecodeInfoSpsd((*(int *)(((int)stk + 36))), (*(int *)(((int)stk + 40))), (((int)stk + 4) + 0x1C), (a4 + 0xC), (a4 + 0xD), (a4 + 0xF), (a4 + 0xE), (a4 + 0x14), (a4 + 0x18), (a4 + 0x10), (0xAA + a4));
    t13 = 0x0;
    if ((int)t2 < 0) {
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o4A_ushort *)(a4))->v) = 0x0;
        (((struct o48_ushort *)(a4))->v) = 0x0;
        (((struct o26_ushort *)(a4))->v) = 0x0;
        (((struct o24_ushort *)(a4))->v) = 0x0;
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        *(unsigned int *)((a4 + 0x30)) = 0x0;
        *(unsigned int *)((a4 + 0x2C)) = 0x0;
        *(unsigned int *)((a4 + 0x28)) = 0x0;
        *(unsigned int *)((a4 + 0x20)) = 0x0;
        (((struct o58_uint *)(a4))->v) = (*(signed char *)((a4 + 0xE)));
        (((struct o5C_uint *)(a4))->v) = (*(signed char *)((a4 + 0xF)));
        (((struct o60_uint *)(a4))->v) = (*(int *)((a4 + 0x10)));
        (((struct o64_uint *)(a4))->v) = (*(int *)((a4 + 0x3C)));
        (((struct o68_uint *)(a4))->v) = ((((struct o40_int *)(a4))->v));
        (((struct o6C_uint *)(a4))->v) = ((((struct o44_int *)(a4))->v));
        (((struct o7C_ushort *)(a4))->v) = ((((struct o48_short *)(a4))->v));
        (((struct o7E_ushort *)(a4))->v) = ((((struct o4A_short *)(a4))->v));
        (((struct o80_uint *)(a4))->v) = (a4 + 0x4C);
        (((struct o9C_uint *)(a4))->v) = 0x0;
        (((struct o98_uint *)(a4))->v) = 0x0;
        (((struct oA8_ushort *)(a4))->v) = 0x2;
        memset((a4 + 0x4C), 0x0, 0x4);
        t13 = (*(short *)(((int)stk + 32)));
    }
    return t13;
}

int ADXB_DecodeHeaderWav(int a4, int a5, int a6)
{
    int t2;
    int t13;
    int stk[14];

    *(unsigned int *)(((int)stk + 36)) = a5;
    *(unsigned int *)(((int)stk + 40)) = a6;
    *(unsigned short *)((a4 + 0x2)) = 0x1;
    t2 = ADX_DecodeInfoWav((*(int *)(((int)stk + 36))), (*(int *)(((int)stk + 40))), (((int)stk + 4) + 0x1C), (a4 + 0xC), (a4 + 0xD), (a4 + 0xF), (a4 + 0xE), (a4 + 0x14), (a4 + 0x18), (a4 + 0x10), (0xAA + a4));
    t13 = 0x0;
    if ((int)t2 < 0) {
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o4A_ushort *)(a4))->v) = 0x0;
        (((struct o48_ushort *)(a4))->v) = 0x0;
        (((struct o26_ushort *)(a4))->v) = 0x0;
        (((struct o24_ushort *)(a4))->v) = 0x0;
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        *(unsigned int *)((a4 + 0x30)) = 0x0;
        *(unsigned int *)((a4 + 0x2C)) = 0x0;
        *(unsigned int *)((a4 + 0x28)) = 0x0;
        *(unsigned int *)((a4 + 0x20)) = 0x0;
        (((struct o58_uint *)(a4))->v) = (*(signed char *)((a4 + 0xE)));
        (((struct o5C_uint *)(a4))->v) = (*(signed char *)((a4 + 0xF)));
        (((struct o60_uint *)(a4))->v) = (*(int *)((a4 + 0x10)));
        (((struct o64_uint *)(a4))->v) = (*(int *)((a4 + 0x3C)));
        (((struct o68_uint *)(a4))->v) = ((((struct o40_int *)(a4))->v));
        (((struct o6C_uint *)(a4))->v) = ((((struct o44_int *)(a4))->v));
        (((struct o7C_ushort *)(a4))->v) = ((((struct o48_short *)(a4))->v));
        (((struct o7E_ushort *)(a4))->v) = ((((struct o4A_short *)(a4))->v));
        (((struct o80_uint *)(a4))->v) = (a4 + 0x4C);
        (((struct o9C_uint *)(a4))->v) = 0x0;
        (((struct o98_uint *)(a4))->v) = 0x0;
        (((struct oA8_ushort *)(a4))->v) = 0x1;
        memset((a4 + 0x4C), 0x0, 0x4);
        t13 = (*(short *)(((int)stk + 32)));
    }
    return t13;
}


int ADXB_DecodeHeader(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(short *)((a5 + 0x0));
    if ((unsigned short)((unsigned char)((int)(unsigned short)t0 >> 8) | (((unsigned short)t0 << 8) & 0xFF00)) == 0x8000) {
        return ADXB_DecodeHeaderAdx(a4, a5, a6);
    }
    t1 = ADXB_CheckSpsd(a5);
    if (t1 != 0) {
        return ADXB_DecodeHeaderSpsd(a4, a5, a6);
    }
    t2 = ADXB_CheckWav(a5);
    if (t2 != 0) {
        return ADXB_DecodeHeaderWav(a4, a5, a6);
    }
    t3 = ADXB_CheckAiff(a5);
    if (t3 != 0) {
        return ADXB_DecodeHeaderAiff(a4, a5, a6);
    }
    t4 = ADXB_CheckAu(a5);
    if (t4 != 0) {
        return ADXB_DecodeHeaderAu(a4, a5, a6);
    }
    return 0x0;
}


