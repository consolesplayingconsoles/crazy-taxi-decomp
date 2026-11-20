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


