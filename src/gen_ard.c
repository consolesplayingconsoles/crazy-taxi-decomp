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
int kmiSetTAEnvironment(int, int, int, int, int, int);
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

    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 20)) = a7;
    t0 = *(int *)0xC174C74;
    *(unsigned int *)(((((int)stk + 16) + 0x10) + 0x0)) = (*(int *)0xC174C70);
    *(unsigned int *)(((((int)stk + 16) + 0x10) + 0x4)) = t0;
    t3 = *(int *)0xC174C7C;
    *(unsigned int *)(((((int)stk + 16) + 0x10) + 0x8)) = (*(int *)0xC174C78);
    *(unsigned int *)(((((int)stk + 16) + 0x10) + 0xC)) = t3;
    *(unsigned int *)0xC2B8C94 = 0x1;
    t5 = a5;
    if (((*(int *)0xC2EA684) & 64) != 0) {
        t5 = (a5 + 0x20);
    }
    *(unsigned int *)0xC2B8C40 = a4;
    *(unsigned int *)0xC2B8C44 = t5;
    *(unsigned int *)0xC2B8C48 = (*(int *)(((int)stk + 16)));
    *(unsigned int *)0xC2B8C4C = (*(int *)(((int)stk + 20)));
    *(unsigned int *)0xC2B8C50 = a8;
    if ((*(int *)0xC177A84) != 0x80000000) {
        t10 = *(int *)0xC177A84;
        *(unsigned int *)0xC177A84 = (t10 | 0x100);
        t21 = 0x0;
        if ((t10 | 0x100) == 0xB00) {
            *(unsigned int *)0xC177A84 = 0x80000000;
            t21 = (kmiAllocSysConfig((*(int *)0xC2B8C94), 0x80000000, (t10 | 0x100), a7));
        }
        t124 = t21;
    } else {
        *(unsigned int *)(((int)stk + 24)) = (kmiChkActiveListType(t5, (*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 20))), a8, 0x0));
        *(unsigned int *)((a4 + 0x10)) = (*(int *)0xC2EAAE8);
        *(unsigned int *)0xC177A88 = 0x0;
        t27 = 0xC2B8D28;
        for (;;) {
            if ((unsigned int)t27 >= (unsigned int)0xC2B8D38) {
                break;
            }
            *(unsigned int *)((t27 + 0x0)) = 0x0;
            t27 = (t27 + 0x4);
        }
        t28 = *(int *)(((int)stk + 16));
        t30 = kmiGetPackOBPParam(t5, t28, (*(int *)(((int)stk + 20))), a8, 0x0, 0x0);
        *(unsigned int *)(((int)stk + 28)) = t30;
        kmiGetNativeRegOBPSize(t30);
        t32 = *(int *)(((int)stk + 20));
        t33 = *(int *)(((int)stk + 24));
        *(unsigned int *)(((((int)stk + 16) + 0x20) + 0x0)) = t5;
        *(unsigned int *)(((((int)stk + 16) + 0x20) + 0x4)) = t28;
        *(unsigned int *)(((((int)stk + 16) + 0x20) + 0x8)) = (*(int *)(((int)stk + 20)));
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
        *(unsigned int *)(((int)stk + 16)) = (((int)stk + 16) + 0x20);
        *(unsigned int *)0xC2B8C44 = (*(int *)(((((int)stk + 16) + 0x20) + 0x0)));
        *(unsigned int *)0xC2B8C48 = (*(int *)((((((int)stk + 16) + 0x20) + 0x4) + 0x0)));
        *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 16) + 0x20) + 0x8);
        *(unsigned int *)0xC2B8C4C = (*(int *)((((((int)stk + 16) + 0x20) + 0x8) + 0x0)));
        *(unsigned int *)0xC2B8C50 = (*(int *)((((((int)stk + 16) + 0x20) + 0xC) + 0x0)));
        *(unsigned int *)(((int)stk + 16)) = (*(int *)(((*(int *)(((int)stk + 16))) + 0x0)));
        *(unsigned int *)(((int)stk + 20)) = (*(int *)((((((int)stk + 16) + 0x20) + 0x4) + 0x0)));
        *(unsigned int *)(((int)stk + 24)) = (*(int *)(((*(int *)(((int)stk + 24))) + 0x0)));
        t56 = (*(int *)((((((int)stk + 16) + 0x20) + 0xC) + 0x0)));
        t58 = 0x2;
        if ((*(int *)0xC2EA9C4) == 1) {
            t58 = 0x1;
        }
        t64 = kmiGetVertexBasePointer((*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 24))), t56, 0x0, ((((t33 << 2) << 1) + (((t5 + t28) + t32) + a8)) + 0xA0), (t58));
        t115 = t64;
        if (t64 == 0) {
            kmiGetDisplayData(0xFF, (*(int *)0xC2B8C58), (*(int *)0xC2B8C64));
            t68 = (((t5 + t28) + t32) + a8);
            if ((unsigned int)(((t5 + t28) + t32) + a8) < (unsigned int)0x10000) {
                t68 = 0x10000;
            }
            *(unsigned int *)0xC2B8C98 = ((t68 << 2) + (*(int *)0xC2B8CA4));
            t71 = *(int *)0xC2B8CA0;
            if ((unsigned int)(*(int *)0xC2B8C98) > (unsigned int)((-t71) + 0x200000)) {
                *(unsigned int *)0xC2B8C98 = ((-t71) + 0x200000);
            }
            t75 = kmiTAallocEx((*(int *)0xC2B8C98), 0xC2B8D20, 0xC2B8D24);
            if (t75 == 0) {
                *(unsigned int *)0xC2EAAD8 = (*(int *)0xC2B8C98);
                t83 = kmiSetTAEnvironment(((unsigned int)(*(int *)0xC2EA6EC) >> 7), ((unsigned int)(*(int *)0xC2EA6F0) >> 7), ((unsigned int)(*(int *)0xC2EA6F4) >> 7), ((unsigned int)(*(int *)0xC2EA6F8) >> 7), ((~(*(int *)0xC2B8C58)) & (*(int *)(((int)stk + 28)))), 0x0);
                *(unsigned int *)0xC2B8CF4 = (*(int *)0xC2B8CCC);
                *(unsigned int *)0xC2B8CF8 = (*(int *)0xC2B8CD0);
                t86 = *(int *)0xC2B8CD4;
                *(unsigned int *)0xC2B8CFC = t86;
                *(unsigned int *)0xC2B8D00 = (*(int *)0xC2B8CD8);
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
                *(unsigned int *)0xC2B8CA8 = 0x0;
                *(unsigned int *)0xC2B8CAC = 0x0;
                *(unsigned int *)0xC2B8CB0 = 0x0;
                *(unsigned int *)0xC2B8CB4 = 0x0;
                *(unsigned int *)0xC2B8CB8 = 0xC2B8CCC;
                *(unsigned int *)0xC2B8CBC = 0xC2B8CF4;
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
                    t101 = (*(int *)0xC2B8CBC);
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
    *(unsigned int *)0xC2EAB70 = 0x3;
    *(unsigned int *)0xC2EAB74 = 0x2;
    *(unsigned int *)0xC2EAB78 = 0x6;
    *(unsigned int *)0xC2EAB7C = 0x1;
    *(unsigned int *)0xC2EAB80 = 0xC177FF8;
    *(unsigned int *)0xC2EA67C = 0xC2EAB70;
    *(unsigned int *)0xC2EA6B4 = 0x0;
    *(unsigned int *)0xC2EA6B8 = 0x0;
    *(unsigned int *)0xC2EA6BC = 0x0;
    *(unsigned int *)0xC2EA6D0 = 0x0;
    *(unsigned int *)0xC2EA6D4 = 0x0;
    *(unsigned int *)0xC2EAB58 = 0x1F0;
    *(unsigned int *)0xC2EAB5C = 0x200;
    *(unsigned int *)0xC2EAB60 = 0x210;
    *(unsigned int *)0xC2EAB64 = 0x220;
    *(unsigned int *)0xC2EAB68 = 0x230;
    kmiInitCallback();
    *(unsigned int *)0xC2EA888 = 0x0;
    *(unsigned int *)0xC2EA88C = 0x0;
    *(unsigned int *)0xC2EA864 = ((kmiGetProfileInt(0xC175C18, 0xC175C20, 0x1)) - 1);
    *(unsigned int *)0xC2EA860 = (*(int *)0xC2EA864);
    *(unsigned int *)0xC2EA690 = 0x10000;
    *(unsigned int *)0xC2EA694 = 0x800000;
    *(unsigned int *)0xC2EA698 = 0x800000;
    *(unsigned int *)0xC2EA848 = 0x0;
    *(unsigned int *)0xC2EA844 = 0x0;
    *(unsigned int *)0xC2EA840 = 0x0;
    *(unsigned int *)0xC2EA85C = 0x3;
    *(unsigned int *)0xC2EA928 = 0x1;
    kmiInitializeBackGroundPlane();
    t11 = kmiGetProfileInt(0xC175C18, 0xC175C2C, 0x6000);
    t12 = kmiGetProfileInt(0xC175C18, 0xC175C38, 0x7A000);
    t13 = kmiGetProfileInt(0xC175C18, 0xC175C44, 0x180000);
    t14 = kmiGetProfileInt(0xC175C18, 0xC175C54, 0x180000);
    *(unsigned int *)0xC2EA714 = (((((unsigned int)((unsigned int)((unsigned int)t13 >> 8) >> 2) >> 1) << 8) << 2) << 1);
    *(unsigned int *)0xC2EA718 = (((((unsigned int)((unsigned int)((unsigned int)t14 >> 8) >> 2) >> 1) << 8) << 2) << 1);
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
    *(unsigned int *)0xC2EA9C4 = 0x0;
    *(unsigned int *)0xC2EAAA0 = 0x0;
    *(unsigned int *)0xC2EA9CC = 0x0;
    *(unsigned int *)0xC2EA9D0 = 0xFFFFFFFF;
    *(unsigned int *)0xC2EA9D4 = 0xFFFFFFFF;
    *(unsigned int *)0xC2EA9D8 = 0xFFFFFFFF;
    *(unsigned int *)0xC2EA9DC = 0x0;
    *(unsigned int *)0xC2EA9E0 = 0x0;
    *(unsigned int *)0xC2EA9E4 = 0x0;
    *(unsigned int *)0xC2EAAAC = 0x0;
    *(unsigned int *)0xC2EAAB4 = 0x0;
    *(unsigned int *)0xC2EAAB0 = 0x1;
    *(unsigned int *)0xC2EAAC0 = (kmiGetProfileInt(0xC175C64, 0xC175C74, 0xACC00000));
    *(unsigned int *)0xC2EAAC4 = (kmiGetProfileInt(0xC175C64, 0xC175C80, 0x400000));
    *(unsigned int *)0xC2EA6E4 = (kmiGetProfileInt(0xC175C18, 0xC175C8C, 0x0));
    *(unsigned int *)0xC2EA8A4 = (kmiGetProfileInt(0xC175C18, 0xC175C9C, 0xA));
    *(unsigned int *)0xC2EA8A8 = (kmiGetProfileInt(0xC175C18, 0xC175CAC, 0xA));
    *(unsigned int *)0xC2EA8AC = (kmiGetProfileInt(0xC175C18, 0xC175CBC, 0xA));
    *(unsigned int *)0xC2EA854 = 0x0;
    *(unsigned int *)0xC2EA858 = 0x1;
    *(unsigned int *)0xC2EA6E8 = 0xF;
    *(unsigned int *)0xC2EA6E8 = ((*(int *)0xC2EA6E8) | 0x0);
    *(unsigned int *)0xC2EA898 = 0x0;
    *(unsigned int *)0xC2EA89C = 0x0;
    return (kmiInitRenderer());
}

int nlRenderTextureSet_Sub(int a4, int a5, int a6, int a7)
{
    int t1;
    int t92;
    int t78;
    int t64;
    int t11;
    int t9;
    int t7;
    int t5;
    int t3;
    int t19;
    int t17;
    int t15;
    int t13;
    int t21;
    int t22;
    int t50;
    int t27;
    int t28;
    int t40;
    int t30;
    int t33;
    int t34;
    int t35;
    int t36;
    int t38;

    t1 = *(int *)0xC2B31BC;
    t92 = 0xFFFFFFFF;
    if ((unsigned int)a4 > (unsigned int)(*(int *)0xC2B31C0)) {
    } else {
        t78 = 0xFFFFFFFF;
        if ((int)a5 < 0) {
        } else {
            t64 = 0xFFFFFFFF;
            if ((int)(*(int *)(((t1 + ((a4 << 2) << 2)) + 0x0))) >= 0) {
            } else {
                t11 = 0x20;
                if ((int)a6 <= (int)0x20) {
                } else {
                    t9 = 0x40;
                    if ((int)a6 <= (int)0x40) {
                    } else {
                        t7 = 0x80;
                        if ((int)a6 <= (int)0x80) {
                        } else {
                            t5 = 0x100;
                            if ((int)a6 <= (int)0x100) {
                            } else {
                                t3 = 0x400;
                                if ((int)a6 <= (int)0x200) {
                                    t3 = 0x200;
                                }
                                t5 = t3;
                            }
                            t7 = t5;
                        }
                        t9 = t7;
                    }
                    t11 = t9;
                }
                t19 = 0x20;
                if ((int)a7 <= (int)0x20) {
                } else {
                    t17 = 0x40;
                    if ((int)a7 <= (int)0x40) {
                    } else {
                        t15 = 0x80;
                        if ((int)a7 <= (int)0x80) {
                        } else {
                            t13 = 0x200;
                            if ((int)a7 <= (int)0x100) {
                                t13 = 0x100;
                            }
                            t15 = t13;
                        }
                        t17 = t15;
                    }
                    t19 = t17;
                }
                t21 = *(int *)0xC2B3184;
                t22 = *(int *)0xC2AEC84;
                t50 = 0xFFFFFFFF;
                if ((*(int *)((((((a5 + t21) << 2) << 1) + t22) + 0x0))) == 0) {
                    *(unsigned int *)(((t22 + (((a5 + t21) << 2) << 1)) + 0x0)) = 0x1;
                    *(unsigned int *)(((0x4 + ((*(int *)0xC2AEC84) + (((a5 + t21) << 2) << 1))) + 0x0)) = (nlCommonTextureGetNextTextureIndex());
                    t27 = *(int *)((((*(int *)0xC2AEC84) + (((a5 + t21) << 2) << 1)) + 0x4));
                    t28 = *(int *)0xC2B29C0;
                    t40 = 0xFFFFFFFF;
                    if ((*(int *)((((t27 * 0x3C) + t28) + 0x2C))) != 0) {
                    } else {
                        t30 = kmCreateTextureSurface(((t27 * 0x3C) + t28), t11, t19, 0x901);
                        *(unsigned int *)((((t27 * 0x3C) + (*(int *)0xC2B29C0)) + 0x28)) = t30;
                        nlCreateTextureParam(t27);
                        *(unsigned int *)((((t27 * 0x3C) + t28) + 0x38)) = t27;
                        *(unsigned int *)((((t27 * 0x3C) + t28) + 0x2C)) = 0x1;
                        t33 = *(int *)0xC2B31BC;
                        *(unsigned int *)(((t33 + ((a4 << 2) << 2)) + 0x0)) = a5;
                        *(unsigned int *)(((t33 + ((a4 << 2) << 2)) + 0x4)) = t27;
                        *(unsigned short *)(((t33 + ((a4 << 2) << 2)) + 0x8)) = t11;
                        *(unsigned short *)(((t33 + ((a4 << 2) << 2)) + 0xA)) = t19;
                        t34 = *(short *)0xC2B3190;
                        t35 = *(short *)0xC2B3192;
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
                        t40 = t30;
                    }
                    t50 = t40;
                }
                t64 = t50;
            }
            t78 = t64;
        }
        t92 = t78;
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
    R4 = a4;
    R5 = a5;
    L_C164A6A:;
    *(unsigned int *)(((int)stk + 4)) = R5;
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
    if (((*(int *)(((int)stk + 4))) == 0)) goto L_C164B04;
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
    int stk[18];

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
    R4 = a4;
    R5 = a5;
    R6 = a6;
    L_C1645F0:;
    *(unsigned int *)(((int)stk + 4)) = R6;
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
    t25 = search_dir(R13, R11, (((int)stk + 4) + 0x4));
    *(unsigned int *)0xC2F3894 = t25;
    if (((int)t25 >= 0)) goto L_C1646D4;
    goto L_C1646C8;
    L_C1646C8:;
    close_file_handle(R14);
    R0 = (0xFFFFFF05);
    goto L_C1646F4;
    L_C1646D4:;
    *(unsigned int *)((R14 + 0x4)) = R12;
    *(unsigned int *)((R14 + 0x34)) = (*(int *)(((int)stk + 48)));
    t30 = *(int *)(((int)stk + 20));
    *(unsigned int *)((R14 + 0x38)) = t30;
    *(unsigned int *)((R14 + 0x40)) = t30;
    *(unsigned int *)((R14 + 0x28)) = R13;
    *(unsigned short *)((R14 + 0x2)) = (*(short *)(((int)stk + 16)));
    *(unsigned char *)((R14 + 0x1)) = (*(signed char *)(((int)stk + 18)));
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = R14;
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
    *(unsigned short *)((a4 + 0x4A)) = 0x0;
    *(unsigned short *)((a4 + 0x48)) = 0x0;
    *(unsigned short *)((a4 + 0x26)) = 0x0;
    *(unsigned short *)((a4 + 0x24)) = 0x0;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x30)) = 0x0;
    *(unsigned int *)((a4 + 0x2C)) = 0x0;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(unsigned int *)((a4 + 0x20)) = 0x0;
    *(unsigned int *)(((0x58 + a4) + 0x0)) = (*(signed char *)((a4 + 0xE)));
    *(unsigned int *)(((0x5C + a4) + 0x0)) = (*(signed char *)((a4 + 0xF)));
    *(unsigned int *)((a4 + 0x60)) = (*(int *)((a4 + 0x10)));
    *(unsigned int *)((a4 + 0x64)) = (*(int *)((a4 + 0x3C)));
    *(unsigned int *)((a4 + 0x68)) = (*(int *)((a4 + 0x40)));
    *(unsigned int *)((a4 + 0x6C)) = (*(int *)((a4 + 0x44)));
    *(unsigned short *)(((a4 + 0x7C) + 0x0)) = (*(short *)((a4 + 0x48)));
    *(unsigned short *)((a4 + 0x7E)) = (*(short *)((a4 + 0x4A)));
    *(unsigned int *)((a4 + 0x80)) = (a4 + 0x4C);
    *(unsigned int *)((a4 + 0x9C)) = 0x0;
    *(unsigned int *)((a4 + 0x98)) = 0x0;
    *(unsigned short *)((a4 + 0xA8)) = 0x3;
    if ((*(signed char *)((a4 + 0xD))) == 8) {
        *(unsigned short *)((a4 + 0xAA)) = 0x1;
    } else {
        *(unsigned short *)((a4 + 0xAA)) = 0x0;
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
    *(unsigned int *)(((int)stk + 8)) = (ADXSJD_GetBlkSmpl(R14));
    t29 = *(int *)((R14 + 0xC));
    *(unsigned int *)(((int)stk + 4)) = t29;
    t32 = ((int (*)(int, int))((*(int *)(((*(int *)((t29 + 0x0))) + 0x24)))))(t29, 0x0);
    R4 = (((unsigned int)t32 >> 1));
    if (((int)((unsigned int)t32 >> 1) >= (int)(*(int *)(((int)stk + 8))))) goto L_C1685D0;
    goto L_C1685B8;
    L_C1685D0:;
    ADXB_EntryData(R12, (*(int *)((R14 + 0x14))), (*(int *)((R14 + 0x18))));
    return ADXB_Start(R12);
}

int ADXF_ReadNw32(int a4, int a5, int a6)
{
    int t40;
    int t17;
    int t35;
    int t27;
    int t30;
    int t60;
    int t55;
    int t50;
    int t45;
    int t37;

    adxf_SetCmdHstry(0x4, 0x0, a4, a5, a6);
    if (a4 == 0) {
        ADXERR_CallErrFunc(0xC1758A0);
        t60 = 0xFFFFFFFD;
    } else {
        if ((int)a5 < 0) {
            ADXERR_CallErrFunc(0xC1758CC);
            t55 = 0xFFFFFFFD;
        } else {
            if (a6 == 0) {
                ADXERR_CallErrFunc(0xC1758FC);
                t50 = 0xFFFFFFFD;
            } else {
                if ((a6 & 0x1F) != 0) {
                    ADXERR_CallErrFunc(0xC175924);
                    t45 = 0xFFFFFFFD;
                } else {
                    t40 = 0x0;
                    if ((*(signed char *)((a4 + 0x1))) == 2) {
                    } else {
                        if ((*(int *)((a4 + 0x8))) != 0) {
                            ADXERR_CallErrFunc(0xC175960);
                            t37 = 0xFFFFFFFF;
                        } else {
                            t17 = SJRBF_Create(a6, (((a5 << 8) << 2) << 1), 0x0);
                            t35 = 0xFFFFFFFE;
                            if (t17 == 0) {
                            } else {
                                *(unsigned int *)((a4 + 0x28)) = a6;
                                *(unsigned int *)((a4 + 0x2C)) = (((a5 << 8) << 2) << 1);
                                if ((*(int *)0xC2BA338) == 1) {
                                    ADXF_Ocbi((*(int *)((a4 + 0x28))), (*(int *)((a4 + 0x2C))));
                                }
                                ADXCRS_Lock();
                                t27 = adxf_read_sj32(a4, a5, t17);
                                if ((int)t27 <= 0) {
                                    t30 = ((int (*)(int))((*(int *)(((*(int *)((t17 + 0x0))) + 0xC)))))(t17);
                                } else {
                                    *(unsigned int *)((a4 + 0x8)) = t17;
                                }
                                *(unsigned char *)((a4 + 0x2)) = 0x0;
                                ADXCRS_Unlock();
                                adxf_SetCmdHstry(0x4, 0x1, a4, a5, a6);
                                t35 = t27;
                            }
                            t37 = t35;
                        }
                        t40 = t37;
                    }
                    t45 = t40;
                }
                t50 = t45;
            }
            t55 = t50;
        }
        t60 = t55;
    }
    return t60;
}

int ADXB_DecodeHeaderAu(int a4, int a5, int a6)
{
    int t2;
    int t14;
    int stk[15];

    *(unsigned int *)(((int)stk + 40)) = a5;
    *(unsigned int *)(((int)stk + 44)) = a6;
    *(unsigned short *)((a4 + 0x2)) = 0x1;
    t2 = ADX_DecodeInfoAu((*(int *)(((int)stk + 40))), (*(int *)(((int)stk + 44))), (((int)stk + 4) + 0x1C), (a4 + 0xC), (a4 + 0xD), (a4 + 0xF), (a4 + 0xE), (a4 + 0x14), (a4 + 0x18), (a4 + 0x10), (((int)stk + 32) + 0x4));
    t14 = 0x0;
    if ((int)t2 < 0) {
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        *(unsigned short *)((a4 + 0x4A)) = 0x0;
        *(unsigned short *)((a4 + 0x48)) = 0x0;
        *(unsigned short *)((a4 + 0x26)) = 0x0;
        *(unsigned short *)((a4 + 0x24)) = 0x0;
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        *(unsigned int *)((a4 + 0x30)) = 0x0;
        *(unsigned int *)((a4 + 0x2C)) = 0x0;
        *(unsigned int *)((a4 + 0x28)) = 0x0;
        *(unsigned int *)((a4 + 0x20)) = 0x0;
        *(unsigned int *)(((0x58 + a4) + 0x0)) = (*(signed char *)((a4 + 0xE)));
        *(unsigned int *)(((0x5C + a4) + 0x0)) = (*(signed char *)((a4 + 0xF)));
        *(unsigned int *)((a4 + 0x60)) = (*(int *)((a4 + 0x10)));
        *(unsigned int *)((a4 + 0x64)) = (*(int *)((a4 + 0x3C)));
        *(unsigned int *)((a4 + 0x68)) = (*(int *)((a4 + 0x40)));
        *(unsigned int *)((a4 + 0x6C)) = (*(int *)((a4 + 0x44)));
        *(unsigned short *)(((a4 + 0x7C) + 0x0)) = (*(short *)((a4 + 0x48)));
        *(unsigned short *)((a4 + 0x7E)) = (*(short *)((a4 + 0x4A)));
        *(unsigned int *)((a4 + 0x80)) = (a4 + 0x4C);
        *(unsigned int *)((a4 + 0x9C)) = 0x0;
        *(unsigned int *)((a4 + 0x98)) = 0x0;
        *(unsigned short *)((a4 + 0xA8)) = 0x4;
        *(unsigned short *)((a4 + 0xAA)) = (*(int *)(((int)stk + 36)));
        memset((a4 + 0x4C), 0x0, 0x4);
        t14 = (*(short *)(((int)stk + 32)));
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
    int t7;
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
            t7 = fmMngBit2Num((((((t3 + 0x1) << 2) << 2) << 2) + t0), (*(int *)((a4 + 0x18))));
            *(unsigned int *)((a4 + 0x10)) = t7;
            t29 = 0xFFFFFFFA;
            if ((*(short *)((a4 + 0x2))) == 0) {
                t24 = 0x0;
                if ((int)t7 > 0) {
                    t10 = (t1 + 0x40);
                    t11 = t7;
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
        *(unsigned short *)((a4 + 0x4A)) = 0x0;
        *(unsigned short *)((a4 + 0x48)) = 0x0;
        *(unsigned short *)((a4 + 0x26)) = 0x0;
        *(unsigned short *)((a4 + 0x24)) = 0x0;
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        *(unsigned int *)((a4 + 0x30)) = 0x0;
        *(unsigned int *)((a4 + 0x2C)) = 0x0;
        *(unsigned int *)((a4 + 0x28)) = 0x0;
        *(unsigned int *)((a4 + 0x20)) = 0x0;
        *(unsigned int *)(((0x58 + a4) + 0x0)) = (*(signed char *)((a4 + 0xE)));
        *(unsigned int *)(((0x5C + a4) + 0x0)) = (*(signed char *)((a4 + 0xF)));
        *(unsigned int *)((a4 + 0x60)) = (*(int *)((a4 + 0x10)));
        *(unsigned int *)((a4 + 0x64)) = (*(int *)((a4 + 0x3C)));
        *(unsigned int *)((a4 + 0x68)) = (*(int *)((a4 + 0x40)));
        *(unsigned int *)((a4 + 0x6C)) = (*(int *)((a4 + 0x44)));
        *(unsigned short *)(((a4 + 0x7C) + 0x0)) = (*(short *)((a4 + 0x48)));
        *(unsigned short *)((a4 + 0x7E)) = (*(short *)((a4 + 0x4A)));
        *(unsigned int *)((a4 + 0x80)) = (a4 + 0x4C);
        *(unsigned int *)((a4 + 0x9C)) = 0x0;
        *(unsigned int *)((a4 + 0x98)) = 0x0;
        *(unsigned short *)((a4 + 0xA8)) = 0x2;
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
        *(unsigned short *)((a4 + 0x4A)) = 0x0;
        *(unsigned short *)((a4 + 0x48)) = 0x0;
        *(unsigned short *)((a4 + 0x26)) = 0x0;
        *(unsigned short *)((a4 + 0x24)) = 0x0;
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        *(unsigned int *)((a4 + 0x30)) = 0x0;
        *(unsigned int *)((a4 + 0x2C)) = 0x0;
        *(unsigned int *)((a4 + 0x28)) = 0x0;
        *(unsigned int *)((a4 + 0x20)) = 0x0;
        *(unsigned int *)(((0x58 + a4) + 0x0)) = (*(signed char *)((a4 + 0xE)));
        *(unsigned int *)(((0x5C + a4) + 0x0)) = (*(signed char *)((a4 + 0xF)));
        *(unsigned int *)((a4 + 0x60)) = (*(int *)((a4 + 0x10)));
        *(unsigned int *)((a4 + 0x64)) = (*(int *)((a4 + 0x3C)));
        *(unsigned int *)((a4 + 0x68)) = (*(int *)((a4 + 0x40)));
        *(unsigned int *)((a4 + 0x6C)) = (*(int *)((a4 + 0x44)));
        *(unsigned short *)(((a4 + 0x7C) + 0x0)) = (*(short *)((a4 + 0x48)));
        *(unsigned short *)((a4 + 0x7E)) = (*(short *)((a4 + 0x4A)));
        *(unsigned int *)((a4 + 0x80)) = (a4 + 0x4C);
        *(unsigned int *)((a4 + 0x9C)) = 0x0;
        *(unsigned int *)((a4 + 0x98)) = 0x0;
        *(unsigned short *)((a4 + 0xA8)) = 0x1;
        memset((a4 + 0x4C), 0x0, 0x4);
        t13 = (*(short *)(((int)stk + 32)));
    }
    return t13;
}

int fmMngAddData(int a4)
{
    int t36;
    int t30;
    int t10;
    int t18;
    int t26;
    int t20;
    int t23;
    int t24;

    t36 = 0xFFFFFFFA;
    if ((*(short *)((a4 + 0x2))) == 0) {
        *(unsigned short *)(((a4 + 0x34) + 0x0)) = (*(int *)((a4 + 0x28)));
        *(volatile int *)((a4 + 0x30));
        fmMngMcpy();
        *(unsigned short *)(((a4 + 0x34) + 0x3E)) = (fmcalccrc(0x3E, (a4 + 0x34)));
        fmMngMcpy4((a4 + 0x34), ((*(int *)((a4 + 0xC))) + (((((*(int *)((a4 + 0x28))) + 0x1) << 2) << 2) << 2)), 0x40);
        t30 = 0xFFFFFFF6;
        if ((int)(*(int *)((a4 + 0x10))) >= (int)(*(int *)((a4 + 0x14)))) {
        } else {
            t10 = *(int *)((a4 + 0x14));
            fmMngNum2Bit(((*(int *)((a4 + 0x10))) + 0x1), ((*(int *)((a4 + 0xC))) + ((((t10 + 0x1) << 2) << 2) << 2)), (*(int *)((a4 + 0x18))));
            t18 = syBtFlWrite(((*(int *)((a4 + 0x4))) + ((((t10 + 0x1) << 2) << 2) << 2)), ((*(int *)((a4 + 0xC))) + ((((t10 + 0x1) << 2) << 2) << 2)), ((((*(int *)((a4 + 0x18))) << 2) << 2) << 2));
            t26 = 0xFFFFFFFE;
            if (t18 == ((((*(int *)((a4 + 0x18))) << 2) << 2) << 2)) {
                t20 = *(int *)((a4 + 0x10));
                *(unsigned int *)((a4 + 0x10)) = ((*(int *)((a4 + 0x10))) + 0x1);
                t23 = syBtFlWrite(((*(int *)((a4 + 0x4))) + ((((t20 + 0x1) << 2) << 2) << 2)), (a4 + 0x34), 0x40);
                t24 = 0x0;
                if (t23 != 64) {
                    t24 = 0xFFFFFFFE;
                }
                t26 = t24;
            }
            t30 = t26;
        }
        t36 = t30;
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
    int stk[15];

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
                        t6 = search_exec_file(a4, ((int)stk + 4));
                        t11 = 0xFFFFFF05;
                        if ((int)t6 >= 0) {
                            t7 = t6;
                            t9 = 0x0;
                            for (;;) {
                                if ((int)t9 >= (int)0xC) {
                                    break;
                                }
                                t8 = ((int)stk + 4);
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
