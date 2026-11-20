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


int kmCreateVertexBuffer(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t3;
    int t5;
    int t10;
    int t21;
    int t27;
    int t28;
    int t30;
    int t32;
    int t33;
    int t35;
    int t37;
    int t36;
    int t39;
    int t40;
    int t41;
    int t58;
    int t64;
    int t115;
    int t68;
    int t71;
    int t75;
    int t83;
    int t86;
    int t88;
    int t89;
    int t90;
    int t96;
    int t97;
    int t92;
    int t93;
    int t94;
    int t99;
    int t103;
    int t124;
    int t56;
    int t100;
    int t101;
    int t102;
    int stk[24];
    int R1016;
    int R1020;
    int R1024;
    int R1028;

    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);
    R1028 = *(int *)((int)stk + 28);

    R1016 = a6;
    R1020 = a7;
    t0 = (((struct o4_int *)0xC174C70)->v);
    *(unsigned int *)(((((int)stk + 16) + 0x10) + 0x0)) = ((((struct o0_int *)0xC174C70)->v));
    *(unsigned int *)(((((int)stk + 16) + 0x10) + 0x4)) = t0;
    t3 = (((struct oC_int *)0xC174C70)->v);
    *(unsigned int *)(((((int)stk + 16) + 0x10) + 0x8)) = ((((struct o8_int *)0xC174C70)->v));
    *(unsigned int *)(((((int)stk + 16) + 0x10) + 0xC)) = t3;
    (((struct o0_uint *)0xC2B8C94)->v) = 0x1;
    t5 = a5;
    if (((*(int *)0xC2EA684) & 64) != 0) {
        t5 = (a5 + 0x20);
    }
    (((struct o0_uint *)0xC2B8C40)->v) = a4;
    (((struct o4_uint *)0xC2B8C40)->v) = t5;
    (((struct o8_uint *)0xC2B8C40)->v) = (R1016);
    (((struct oC_uint *)0xC2B8C40)->v) = (R1020);
    (((struct o10_uint *)0xC2B8C40)->v) = a8;
    if (((((struct o0_int *)0xC177A84)->v)) != 0x80000000) {
        t10 = (((struct o0_int *)0xC177A84)->v);
        (((struct o0_uint *)0xC177A84)->v) = (t10 | 0x100);
        t21 = 0x0;
        if ((t10 | 0x100) == 0xB00) {
            (((struct o0_uint *)0xC177A84)->v) = 0x80000000;
            t21 = (kmiAllocSysConfig(((((struct o0_int *)0xC2B8C94)->v)), 0x80000000, (t10 | 0x100), a7));
        }
        t124 = t21;
    } else {
        R1024 = (kmiChkActiveListType(t5, (R1016), (R1020), a8, 0x0));
        *(unsigned int *)((a4 + 0x10)) = ((((struct o10_int *)0xC2EAAD8)->v));
        (((struct o4_uint *)0xC177A84)->v) = 0x0;
        t27 = 0xC2B8D28;
        for (;;) {
            if ((unsigned int)t27 >= (unsigned int)0xC2B8D38) {
                break;
            }
            *(unsigned int *)((t27 + 0x0)) = 0x0;
            t27 = (t27 + 0x4);
        }
        t28 = R1016;
        t30 = kmiGetPackOBPParam(t5, t28, (R1020), a8, 0x0, 0x0);
        R1028 = t30;
        kmiGetNativeRegOBPSize(t30);
        t32 = R1020;
        t33 = R1024;
        *(unsigned int *)(((((int)stk + 16) + 0x20) + 0x0)) = t5;
        *(unsigned int *)(((((int)stk + 16) + 0x20) + 0x4)) = t28;
        *(unsigned int *)(((((int)stk + 16) + 0x20) + 0x8)) = (R1020);
        *(unsigned int *)(((((int)stk + 16) + 0x20) + 0xC)) = a8;
        t35 = *(int *)(((((int)stk + 16) + 0x20) + 0x0));
        t37 = t35;
        if (t35 != 0) {
            t36 = *(int *)(((((int)stk + 16) + 0x20) + 0x0));
            *(unsigned int *)(((((int)stk + 16) + 0x20) + 0x0)) = (t36 - 16);
            t37 = (t36 - 16);
        }
        t39 = t37;
        t40 = ((((int)stk + 16) + 0x20) + 0x4);
        t41 = ((((int)stk + 16) + 0x20) + 0x4);
        for (;;) {
            if ((unsigned int)t40 >= (unsigned int)((((int)stk + 16) + 0x20) + 0x10)) {
                break;
            }
            t39 = (*(int *)((t40 + 0x0)));
            if (t39 != 0) {
                t39 = (*(int *)((t41 + 0x0)));
                t39 = (t39 - 16);
                *(unsigned int *)((t41 + 0x0)) = t39;
            }
            t40 = (t40 + 0x4);
            t41 = (t41 + 0x4);
        }
        R1016 = (((int)stk + 16) + 0x20);
        (((struct o4_uint *)0xC2B8C40)->v) = (*(int *)(((((int)stk + 16) + 0x20) + 0x0)));
        (((struct o8_uint *)0xC2B8C40)->v) = (*(int *)((((((int)stk + 16) + 0x20) + 0x4) + 0x0)));
        R1024 = ((((int)stk + 16) + 0x20) + 0x8);
        (((struct oC_uint *)0xC2B8C40)->v) = (*(int *)((((((int)stk + 16) + 0x20) + 0x8) + 0x0)));
        (((struct o10_uint *)0xC2B8C40)->v) = (*(int *)((((((int)stk + 16) + 0x20) + 0xC) + 0x0)));
        R1016 = (*(int *)(((R1016) + 0x0)));
        R1020 = (*(int *)((((((int)stk + 16) + 0x20) + 0x4) + 0x0)));
        R1024 = (*(int *)(((R1024) + 0x0)));
        t56 = (*(int *)((((((int)stk + 16) + 0x20) + 0xC) + 0x0)));
        t58 = 0x2;
        if ((*(int *)0xC2EA9C4) == 1) {
            t58 = 0x1;
        }
        t64 = kmiGetVertexBasePointer((R1016), (R1020), (R1024), t56, 0x0, ((((t33 << 2) << 1) + (((t5 + t28) + t32) + a8)) + 0xA0), (t58));
        t115 = t64;
        if (t64 == 0) {
            kmiGetDisplayData(0xFF, ((((struct o18_int *)0xC2B8C40)->v)), ((((struct o24_int *)0xC2B8C40)->v)));
            t68 = (((t5 + t28) + t32) + a8);
            if ((unsigned int)(((t5 + t28) + t32) + a8) < (unsigned int)0x10000) {
                t68 = 0x10000;
            }
            (((struct o4_uint *)0xC2B8C94)->v) = ((t68 << 2) + ((((struct o10_int *)0xC2B8C94)->v)));
            t71 = (((struct oC_int *)0xC2B8C94)->v);
            if ((unsigned int)((((struct o4_int *)0xC2B8C94)->v)) > (unsigned int)((-t71) + 0x200000)) {
                (((struct o4_uint *)0xC2B8C94)->v) = ((-t71) + 0x200000);
            }
            t75 = kmiTAallocEx(((((struct o4_int *)0xC2B8C94)->v)), 0xC2B8D20, 0xC2B8D24);
            if (t75 == 0) {
                (((struct o0_uint *)0xC2EAAD8)->v) = ((((struct o4_int *)0xC2B8C94)->v));
                t83 = kmiSetTAEnvironment(((unsigned int)((((struct o0_int *)0xC2EA6EC)->v)) >> 7), ((unsigned int)((((struct o4_int *)0xC2EA6EC)->v)) >> 7), ((unsigned int)((((struct o8_int *)0xC2EA6EC)->v)) >> 7), ((unsigned int)((((struct oC_int *)0xC2EA6EC)->v)) >> 7), ((~((((struct o18_int *)0xC2B8C40)->v))) & (R1028)));
                (((struct o20_uint *)0xC2B8CD4)->v) = ((((struct o38_int *)0xC2B8C94)->v));
                (((struct o24_uint *)0xC2B8CD4)->v) = ((((struct o3C_int *)0xC2B8C94)->v));
                t86 = (((struct o0_int *)0xC2B8CD4)->v);
                (((struct o28_uint *)0xC2B8CD4)->v) = t86;
                (((struct o2C_uint *)0xC2B8CD4)->v) = ((((struct o4_int *)0xC2B8CD4)->v));
                t88 = t83;
                t89 = t86;
                t90 = 0x0;
                for (;;) {
                    if ((unsigned int)t90 >= (unsigned int)0x10) {
                        break;
                    }
                    t88 = t90;
                    t89 = (*(int *)((0xC2B8CF4 + t88)));
                    t90 = (t90 + 0x4);
                    *(unsigned int *)((0xC2B8D08 + t88)) = t89;
                }
                (((struct o14_uint *)0xC2B8C94)->v) = 0x0;
                (((struct o18_uint *)0xC2B8C94)->v) = 0x0;
                (((struct o1C_uint *)0xC2B8C94)->v) = 0x0;
                (((struct o20_uint *)0xC2B8C94)->v) = 0x0;
                (((struct o24_uint *)0xC2B8C94)->v) = 0xC2B8CCC;
                (((struct o28_uint *)0xC2B8C94)->v) = 0xC2B8CF4;
                t96 = 0xC2B8CC4;
                t97 = 0x0;
                if ((unsigned int)0x0 < (unsigned int)t58) {
                    t92 = 0xC2B8CCC;
                    t93 = 0xC2B8CC4;
                    t94 = 0x0;
                    for (;;) {
                        t94 = (t94 + 0x1);
                        *(unsigned int *)((t93 + 0x0)) = t92;
                        t92 = (t92 + 0x14);
                        t93 = (t93 + 0x4);
                        if ((unsigned int)t94 >= (unsigned int)t58) {
                            break;
                        }
                    }
                    t96 = t93;
                    t97 = t94;
                }
                t99 = (kmiCopyDummyGlobalData(t58, t96, t97));
                t103 = 0x0;
                for (;;) {
                    if ((unsigned int)t103 >= (unsigned int)0x10) {
                        break;
                    }
                    t99 = 0xC2B8D28;
                    t101 = ((((struct o28_int *)0xC2B8C94)->v));
                    t102 = (*(int *)((t103 + t99)));
                    t101 = (t101 + t103);
                    t100 = (*(int *)((t101 + 0x0)));
                    t102 = (t102 << 2);
                    t103 = (t103 + 0x4);
                    t100 = (t100 + t102);
                    *(unsigned int *)((t101 + 0x0)) = t100;
                }
                *(unsigned int *)((a4 + 0x0)) = 0xC2B8CF4;
                *(unsigned int *)((a4 + 0x4)) = 0xC178304;
                *(unsigned int *)((a4 + 0x8)) = 0xC2B8CA8;
                *(unsigned int *)((a4 + 0xC)) = 0xC2B8CC4;
            }
            t115 = t75;
        }
        t124 = t115;
    }
    return t124;
}

int kmiInitializeDriver(void)
{
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;

    if ((*(int *)0xC178268) == 0) {
        *(unsigned int *)0xC178268 = 0xC2EA67C;
        memset((*(int *)0xC178268), 0x0, 0x4F4);
    }
    (((struct o18_uint *)0xC2EAB58)->v) = 0x3;
    (((struct o1C_uint *)0xC2EAB58)->v) = 0x2;
    (((struct o20_uint *)0xC2EAB58)->v) = 0x6;
    (((struct o24_uint *)0xC2EAB58)->v) = 0x1;
    (((struct o28_uint *)0xC2EAB58)->v) = 0xC177FF8;
    (((struct o0_uint *)0xC2EA67C)->v) = 0xC2EAB70;
    (((struct o38_uint *)0xC2EA67C)->v) = 0x0;
    (((struct o3C_uint *)0xC2EA67C)->v) = 0x0;
    (((struct o0_uint *)0xC2EA6BC)->v) = 0x0;
    (((struct o14_uint *)0xC2EA6BC)->v) = 0x0;
    (((struct o18_uint *)0xC2EA6BC)->v) = 0x0;
    (((struct o0_uint *)0xC2EAB58)->v) = 0x1F0;
    (((struct o4_uint *)0xC2EAB58)->v) = 0x200;
    (((struct o8_uint *)0xC2EAB58)->v) = 0x210;
    (((struct oC_uint *)0xC2EAB58)->v) = 0x220;
    (((struct o10_uint *)0xC2EAB58)->v) = 0x230;
    kmiInitCallback();
    (((struct o0_uint *)0xC2EA888)->v) = 0x0;
    (((struct o4_uint *)0xC2EA888)->v) = 0x0;
    (((struct o24_uint *)0xC2EA840)->v) = ((kmiGetProfileInt(0xC175C18, 0xC175C20, 0x1)) - 1);
    (((struct o20_uint *)0xC2EA840)->v) = ((((struct o24_int *)0xC2EA840)->v));
    (((struct o14_uint *)0xC2EA67C)->v) = 0x10000;
    (((struct o18_uint *)0xC2EA67C)->v) = 0x800000;
    (((struct o1C_uint *)0xC2EA67C)->v) = 0x800000;
    (((struct o8_uint *)0xC2EA840)->v) = 0x0;
    (((struct o4_uint *)0xC2EA840)->v) = 0x0;
    (((struct o0_uint *)0xC2EA840)->v) = 0x0;
    (((struct o1C_uint *)0xC2EA840)->v) = 0x3;
    *(unsigned int *)0xC2EA928 = 0x1;
    kmiInitializeBackGroundPlane();
    t11 = kmiGetProfileInt(0xC175C18, 0xC175C2C, 0x6000);
    t12 = kmiGetProfileInt(0xC175C18, 0xC175C38, 0x7A000);
    t13 = kmiGetProfileInt(0xC175C18, 0xC175C44, 0x180000);
    t14 = kmiGetProfileInt(0xC175C18, 0xC175C54, 0x180000);
    (((struct o0_uint *)0xC2EA714)->v) = (((((unsigned int)((unsigned int)((unsigned int)t13 >> 8) >> 2) >> 1) << 8) << 2) << 1);
    (((struct o4_uint *)0xC2EA714)->v) = (((((unsigned int)((unsigned int)((unsigned int)t14 >> 8) >> 2) >> 1) << 8) << 2) << 1);
    t15 = t14;
    t16 = 0xC2EA714;
    t17 = 0xC2EA718;
    t18 = 0x0;
    t19 = 0x0;
    t20 = 0x0;
    for (;;) {
        if ((unsigned int)t19 >= (unsigned int)0x20) {
            break;
        }
        t15 = 0xC2EA6EC;
        *(unsigned int *)((t19 + t15)) = t18;
        t16 = t18;
        t17 = t15;
        t16 = (t16 + (((((unsigned int)((unsigned int)((unsigned int)t11 >> 8) >> 2) >> 1) << 8) << 2) << 1));
        t17 = (t17 + t19);
        *(unsigned int *)((t17 + 0x4)) = t16;
        t16 = t18;
        t17 = t15;
        t16 = (t16 + ((((((unsigned int)((unsigned int)((unsigned int)t11 >> 8) >> 2) >> 1) << 8) << 2) << 1) + (((((unsigned int)((unsigned int)((unsigned int)t12 >> 8) >> 2) >> 1) << 8) << 2) << 1)));
        t17 = (t17 + t19);
        *(unsigned int *)((t17 + 0x8)) = t16;
        t16 = ((((((unsigned int)((unsigned int)((unsigned int)t13 >> 8) >> 2) >> 1) << 8) << 2) << 1) + ((((((unsigned int)((unsigned int)((unsigned int)t11 >> 8) >> 2) >> 1) << 8) << 2) << 1) + (((((unsigned int)((unsigned int)((unsigned int)t12 >> 8) >> 2) >> 1) << 8) << 2) << 1)));
        t17 = t15;
        t17 = (t17 + t19);
        t16 = (t16 + t18);
        *(unsigned int *)((t17 + 0xC)) = t16;
        t17 = 0x7D0000;
        t15 = 0xC2EA70C;
        t17 = (t17 - t18);
        *(unsigned int *)((t20 + t15)) = t17;
        t19 = (t19 + 0x10);
        t18 = (t18 + 0x400000);
        t20 = (t20 + 0x4);
    }
    (((struct o0_uint *)0xC2EA9C4)->v) = 0x0;
    (((struct o0_uint *)0xC2EAAA0)->v) = 0x0;
    (((struct o8_uint *)0xC2EA9C4)->v) = 0x0;
    (((struct oC_uint *)0xC2EA9C4)->v) = 0xFFFFFFFF;
    (((struct o10_uint *)0xC2EA9C4)->v) = 0xFFFFFFFF;
    (((struct o14_uint *)0xC2EA9C4)->v) = 0xFFFFFFFF;
    (((struct o18_uint *)0xC2EA9C4)->v) = 0x0;
    (((struct o1C_uint *)0xC2EA9C4)->v) = 0x0;
    (((struct o20_uint *)0xC2EA9C4)->v) = 0x0;
    (((struct oC_uint *)0xC2EAAA0)->v) = 0x0;
    (((struct o14_uint *)0xC2EAAA0)->v) = 0x0;
    (((struct o10_uint *)0xC2EAAA0)->v) = 0x1;
    (((struct o20_uint *)0xC2EAAA0)->v) = (kmiGetProfileInt(0xC175C64, 0xC175C74, 0xACC00000));
    (((struct o24_uint *)0xC2EAAA0)->v) = (kmiGetProfileInt(0xC175C64, 0xC175C80, 0x400000));
    (((struct o28_uint *)0xC2EA6BC)->v) = (kmiGetProfileInt(0xC175C18, 0xC175C8C, 0x0));
    (((struct o1C_uint *)0xC2EA888)->v) = (kmiGetProfileInt(0xC175C18, 0xC175C9C, 0xA));
    (((struct o20_uint *)0xC2EA888)->v) = (kmiGetProfileInt(0xC175C18, 0xC175CAC, 0xA));
    (((struct o24_uint *)0xC2EA888)->v) = (kmiGetProfileInt(0xC175C18, 0xC175CBC, 0xA));
    (((struct o14_uint *)0xC2EA840)->v) = 0x0;
    (((struct o18_uint *)0xC2EA840)->v) = 0x1;
    (((struct o2C_uint *)0xC2EA6BC)->v) = 0xF;
    (((struct o2C_uint *)0xC2EA6BC)->v) = (((((struct o2C_int *)0xC2EA6BC)->v)) | 0x0);
    (((struct o10_uint *)0xC2EA888)->v) = 0x0;
    (((struct o14_uint *)0xC2EA888)->v) = 0x0;
    return (kmiInitRenderer());
}


int kmInitDevice(int a4)
{
    kmiInitializeDriver();
    if (((int)a4 <= (int)0x2) && ((int)a4 >= 0)) {
        *(unsigned int *)0xC2EA69C = (kmiGetProfileInt(0xC175CFC, 0xC175D04, (0x3 & a4)));
        kmiInitializeHardware();
        return 0x0;
    }
    return 0x2;
}
