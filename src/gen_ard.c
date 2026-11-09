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
int kmCreateTextureSurface(int);
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

int nlRenderTextureSet_Sub(int a4, int a5, int a6, int a7)
{
    int t1;
    int t92;
    int t11;
    int t19;
    int t21;
    int t22;
    int t27;
    int t28;
    int t33;
    int t34;
    int t35;
    int t36;
    int t38;

    t1 = (((struct o38_int *)0xC2B3184)->v);
    t92 = 0xFFFFFFFF;
    if ((unsigned int)a4 > (unsigned int)((((struct o3C_int *)0xC2B3184)->v))) {
    } else {
        t92 = 0xFFFFFFFF;
        if ((int)a5 < 0) {
        } else {
            t92 = 0xFFFFFFFF;
            if ((int)(*(int *)(((t1 + ((a4 << 2) << 2)) + 0x0))) >= 0) {
            } else {
                t11 = 0x20;
                if ((int)a6 <= (int)0x20) {
                } else {
                    t11 = 0x40;
                    if ((int)a6 <= (int)0x40) {
                    } else {
                        t11 = 0x80;
                        if ((int)a6 <= (int)0x80) {
                        } else {
                            t11 = 0x100;
                            if ((int)a6 <= (int)0x100) {
                            } else {
                                t11 = 0x400;
                                if ((int)a6 <= (int)0x200) {
                                    t11 = 0x200;
                                }
                            }
                        }
                    }
                }
                t19 = 0x20;
                if ((int)a7 <= (int)0x20) {
                } else {
                    t19 = 0x40;
                    if ((int)a7 <= (int)0x40) {
                    } else {
                        t19 = 0x80;
                        if ((int)a7 <= (int)0x80) {
                        } else {
                            t19 = 0x200;
                            if ((int)a7 <= (int)0x100) {
                                t19 = 0x100;
                            }
                        }
                    }
                }
                t21 = (((struct o0_int *)0xC2B3184)->v);
                t22 = *(int *)0xC2AEC84;
                t92 = 0xFFFFFFFF;
                if ((*(int *)((((((a5 + t21) << 2) << 1) + t22) + 0x0))) == 0) {
                    *(unsigned int *)(((t22 + (((a5 + t21) << 2) << 1)) + 0x0)) = 0x1;
                    *(unsigned int *)(((0x4 + ((*(int *)0xC2AEC84) + (((a5 + t21) << 2) << 1))) + 0x0)) = (nlCommonTextureGetNextTextureIndex());
                    t27 = *(int *)((((*(int *)0xC2AEC84) + (((a5 + t21) << 2) << 1)) + 0x4));
                    t28 = *(int *)0xC2B29C0;
                    t92 = 0xFFFFFFFF;
                    if ((*(int *)((((t27 * 0x3C) + t28) + 0x2C))) != 0) {
                    } else {
                        t92 = kmCreateTextureSurface(((t27 * 0x3C) + t28));
                        *(unsigned int *)((((t27 * 0x3C) + (*(int *)0xC2B29C0)) + 0x28)) = t92;
                        nlCreateTextureParam(t27);
                        *(unsigned int *)((((t27 * 0x3C) + t28) + 0x38)) = t27;
                        *(unsigned int *)((((t27 * 0x3C) + t28) + 0x2C)) = 0x1;
                        t33 = (((struct o38_int *)0xC2B3184)->v);
                        *(unsigned int *)(((t33 + ((a4 << 2) << 2)) + 0x0)) = a5;
                        *(unsigned int *)(((t33 + ((a4 << 2) << 2)) + 0x4)) = t27;
                        *(unsigned short *)(((t33 + ((a4 << 2) << 2)) + 0x8)) = t11;
                        *(unsigned short *)(((t33 + ((a4 << 2) << 2)) + 0xA)) = t19;
                        t34 = (((struct oC_short *)0xC2B3184)->v);
                        t35 = (((struct oE_short *)0xC2B3184)->v);
                        t36 = t11;
                        if ((int)t11 > (int)t34) {
                            t36 = t34;
                        }
                        t38 = t19;
                        if ((int)t19 > (int)t35) {
                            t38 = t35;
                        }
                        *(unsigned short *)(((t33 + ((a4 << 2) << 2)) + 0xC)) = t36;
                        *(unsigned short *)(((t33 + ((a4 << 2) << 2)) + 0xE)) = t38;
                    }
                }
            }
        }
    }
    return t92;
}

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

int _power(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t8;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t28;
    int t22;
    int t38;
    int t40;
    int t9;
    int t10;
    int t27;
    int t24;
    int stk[19];

    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    t0 = 0x1;
    t1 = (-a4);
    if ((int)a4 >= 0) {
        t0 = 0x0;
        t1 = a4;
    }
    t3 = (int)((int)t1 / (int)0x1B);
    t4 = (int)((int)t1 % (int)0x1B);
    if ((t0 == 1) && (t4 != 0)) {
        *(unsigned short *)(((int)stk + 4)) = (*(short *)0xC0DAEA8);
        memmove((((int)stk + 4) + 0x1C), 0xC0DAE58, 0x8);
        *(unsigned char *)(((((int)stk + 4) + 0x1C) + 0x8)) = 0x0;
        t9 = 0x0;
        t10 = (0x1B - t4);
    } else {
        memset((((int)stk + 4) + 0x1C), 0x0, 0x9);
        t8 = *(signed char *)(((((int)stk + 4) + 0x1C) + 0x0));
        *(unsigned char *)(((((int)stk + 4) + 0x1C) + 0x0)) = (t8 | 0x80);
        *(unsigned short *)(((int)stk + 4)) = 0x0;
        t9 = (t8 | 0x80);
        t10 = t4;
    }
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0x1C);
    t11 = t9;
    t12 = (((int)stk + 4) + 0x1C);
    t13 = 0xC0DAE18;
    t14 = 0x0;
    t15 = t3;
    t16 = ((((t0 << 2) << 2) << 2) + 0xC0DAE18);
    t17 = (((t0 << 2) << 2) + 0xC0DAE98);
    for (;;) {
        t28 = t13;
        if ((t15 & 0x1) != 0) {
            t11 = (_mult64(((int)stk + 4), (((int)stk + 4) + 0x1C), (*(short *)((t17 + 0x0))), t16));
            t13 = 0xB4;
            t11 = (_rnd((((int)stk + 4) + 0x1C), 0x40));
            if (t11 != 0) {
                t13 = (*(short *)(((int)stk + 4)));
                t13 = (t13 + 0x1);
                *(unsigned short *)(((int)stk + 4)) = t13;
                t22 = *(int *)(((int)stk + 8));
                t11 = (*(signed char *)((t22 + 0x0)));
                t11 = (t11 | 0x80);
                *(unsigned char *)((t22 + 0x0)) = t11;
                t24 = t13;
            }
            t28 = t24;
        } else {
            t27 = t12;
        }
        t12 = t27;
        t13 = t28;
        t14 = (t14 + 0x1);
        t15 = (t15 >> 1);
        t17 = (t17 + 0x2);
        t16 = (t16 + 0x8);
        if ((int)t14 >= (int)0x8) {
            break;
        }
    }
    if (t10 != 0) {
        _pow10(t10, (*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 16))));
        _mult64(((int)stk + 4), (((int)stk + 4) + 0x1C), (*(short *)(((*(int *)(((int)stk + 12))) + 0x0))), (*(int *)(((int)stk + 16))));
        t38 = _rnd((((int)stk + 4) + 0x1C), 0x40);
        if (t38 == 1) {
            *(unsigned short *)(((int)stk + 4)) = ((*(short *)(((int)stk + 4))) + 0x1);
            t40 = *(int *)(((int)stk + 8));
            *(unsigned char *)((t40 + 0x0)) = ((*(signed char *)((t40 + 0x0))) | 0x80);
        }
    }
    *(unsigned short *)(((*(int *)(((int)stk + 12))) + 0x0)) = (*(short *)(((int)stk + 4)));
    return (memmove((*(int *)(((int)stk + 16))), (((int)stk + 4) + 0x1C), 0x8));
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

int fmMngAddData(int a4)
{
    int t36;
    int t10;
    int t18;
    int t20;
    int t23;

    t36 = 0xFFFFFFFA;
    if ((*(short *)((a4 + 0x2))) == 0) {
        (((struct o34_ushort *)(a4))->v) = (*(int *)((a4 + 0x28)));
        *(volatile int *)((a4 + 0x30));
        fmMngMcpy();
        (((struct o3E_ushort *)((a4 + 0x34)))->v) = (fmcalccrc(0x3E, (a4 + 0x34)));
        fmMngMcpy4((a4 + 0x34), ((*(int *)((a4 + 0xC))) + (((((*(int *)((a4 + 0x28))) + 0x1) << 2) << 2) << 2)), 0x40);
        t36 = 0xFFFFFFF6;
        if ((int)(*(int *)((a4 + 0x10))) >= (int)(*(int *)((a4 + 0x14)))) {
        } else {
            t10 = *(int *)((a4 + 0x14));
            fmMngNum2Bit(((*(int *)((a4 + 0x10))) + 0x1), ((*(int *)((a4 + 0xC))) + ((((t10 + 0x1) << 2) << 2) << 2)), (*(int *)((a4 + 0x18))));
            t18 = syBtFlWrite(((*(int *)((a4 + 0x4))) + ((((t10 + 0x1) << 2) << 2) << 2)), ((*(int *)((a4 + 0xC))) + ((((t10 + 0x1) << 2) << 2) << 2)), ((((*(int *)((a4 + 0x18))) << 2) << 2) << 2));
            t36 = 0xFFFFFFFE;
            if (t18 == ((((*(int *)((a4 + 0x18))) << 2) << 2) << 2)) {
                t20 = *(int *)((a4 + 0x10));
                *(unsigned int *)((a4 + 0x10)) = ((*(int *)((a4 + 0x10))) + 0x1);
                t23 = syBtFlWrite(((*(int *)((a4 + 0x4))) + ((((t20 + 0x1) << 2) << 2) << 2)), (a4 + 0x34), 0x40);
                t36 = 0x0;
                if (t23 != 64) {
                    t36 = 0xFFFFFFFE;
                }
            }
        }
    }
    return t36;
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
