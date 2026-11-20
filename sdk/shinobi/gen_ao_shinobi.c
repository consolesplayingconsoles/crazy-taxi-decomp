/* Straight-line functions with calls and guards (batch gen_ao): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXAMP_Destroy(int);
int ADXAMP_ExecHndl(int);
int ADXB_EndDecode(int);
int ADXB_EvokeDecode(int);
int ADXB_GetNumChan(int);
int ADXB_GetPcmBuf(int);
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(void);
int ADXPD_ExecHndl(int);
int ADXPD_GetStat(int);
int ADXPD_Reset(int);
int ADXRNA_Destroy(void);
int ADXRNA_GetNumData(void);
int ADXRNA_GetNumRoom(void);
int ADXRNA_SetPlaySw(void);
int ADXRNA_SetTransSw(void);
int ADXSJD_Destroy(int);
int ADXSJD_GetStat(int);
int ADXSJD_Stop(int);
int ADXSTM_Close(int);
int ADXSTM_Seek(int, int);
int ADXSTM_Start(int);
int ADXSTM_Stop(int);
int ADXT_GetNumChan(int);
int ADXT_Stop(void);
int gdc_FadeManStreamSong(void);
int pfOffsetColor(int, int, int, int);
int pfOffsetOff(void);
int PutNameEntryScreen(void);
int PutNameEntryRank(int);
int PutNameEntryDrum(int, float);
int PutNameEntryName(void);
int nlArcSin(float);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlMvClipEdge(int, int, int);
int nlsndCheckPackLoadError(int, int);
int nlsndPackLoadInit(int, int, int, int);
int nlsndSeqRequest(void);
int prefetch(int);
int vsprintf(int, int, int);
int kmtex_CheckTextureFormat(int, int, int, int);
int ADXSJD_GetNumChan(int);
int ADXSJD_GetBlkSmpl(int);
int ADXF_Ocbi(int, int);
int SJMEM_Lock(void);
int syBtFlRead(void);
int fmMngMcpy4(int, int, int);
int fmMngBit2Num(int, int);
int adxb_DecodeInfoAuSub(int, int, int, int, int, int, int);
int SJMEM_Unlock(int, int);
int SJRBF_Create(void);
int SJRBF_GetBufPtr(int);
int SJRBF_Lock(void);
int SJRBF_Unlock(int, int);
int adxf_SetCmdHstry(int, int, int, int, int);
int adxf_read_sj32(int, int, int);
int adxt_start_sj(int, int);
int buIsFormat(void);
int close_file_handle(void);
int direntry(int, int);
int direntry_dirty(int, int);
int fmcalccrc(int, int);
int kdGetDeviceInfo(void);
int kdSetSetCondition(void);
int kmSetBackGroundPlane(int, int);
int kmSetUserClipping(int, int, int, int, int, int);
int kmiABSalloc(int, int);
int kmiDefaultInterruptHandler(int);
int kmiFBfree(int);
int kmiReadRegister(int);
int kmiTXalloc(int, int);
int memmove(int, int, int);
int memset(int, int, int);
int mwRnaGetPlaySw(int);
int mwRnaGetTransSw(int);
int mwRnaSetPlaySw(int, int);
int mwRnaSetTransSw(int, int);
int mwlRnaAddFlshPos(int);
int mwlRnaAddRdPos(int);
int mwlRnaAddWrPos(int);
int mwlRnaClearBuf(void);
int mwlRnaInsrtSlntDat(int);
int mwlRnaIsCopyEnd(int);
int mwlRnaStartTrans(int);
int nlCommonTextureGetNextTextureIndex(void);
int nlCreateTextureParam(int);
int nlInitTextureSurface(int, int);
int nlLdexpf(float);
int nlLoadTextureMem(int, int, int);
int nlScaleUnitVector(int, int, float);
int nlSpriteSetImaginaryScreenSize(float, float);
int nlSubVector3op(int, int, int);
int pdVibIsReady(void);
int vmsfs_init_work_new(int);
int vmsfs_init_work_normal(int, int, int);
int vmsfs_setdevicetype(int);
int vmsfs_setretry(int);
int vmsfs_unmount(int);
int vmsio_init(void);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_dir(int);
int write_fat(int);
struct o10C4_int { char p[0x10C4]; int v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o13_uchar { char p[0x13]; unsigned char v; };
struct o32_uchar { char p[0x32]; unsigned char v; };
struct o33_uchar { char p[0x33]; unsigned char v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o50_int { char p[0x50]; int v; };
struct o54_int { char p[0x54]; int v; };
struct o70_uchar { char p[0x70]; unsigned char v; };
struct o74_int { char p[0x74]; int v; };
struct o74_ushort { char p[0x74]; unsigned short v; };
struct o76_ushort { char p[0x76]; unsigned short v; };
struct o88_int { char p[0x88]; int v; };
struct o8C_int { char p[0x8C]; int v; };
struct o90_int { char p[0x90]; int v; };
struct o94_int { char p[0x94]; int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o2_short { char p[0x2]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o6_short { char p[0x6]; short v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


void vmsfs_init(int a4, int a5, int a6)
{
    int t0;
    int t4;
    int t5;
    int t6;
    int t8;
    int t10;
    int t14;

    *(unsigned int *)0xC2EE98C = 0xC2EE978;
    t0 = 0xC2EF3D0;
    do {
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x4);
    } while ((unsigned int)t0 < (unsigned int)0xC2EF3F0);
    memset(0xC2EE978, 0x0, 0x14);
    memset(0xC2EE990, 0x0, 0xA40);
    vmsfs_setdevicetype(0x0);
    (((struct o8_uint *)0xC2F3890)->v) = 0x0;
    t4 = 0x0;
    t5 = 0x1;
    do {
        t4 = (t4 + 0x1);
        if ((a5 & t5) != 0) {
            t6 = (((struct o8_int *)0xC2F3890)->v);
            (((struct o8_uint *)0xC2F3890)->v) = (t6 + 0x1);
        }
        t5 = (t5 << 1);
    } while ((int)t4 < (int)0x8);
    if (a6 != 0) {
        vmsfs_init_work_normal(a4, a5, a6);
        t8 = *(int *)0xC2EE98C;
        *(unsigned int *)((t8 + 0x8)) = 0x0;
    } else {
        vmsfs_init_work_new(a4);
        t10 = *(int *)0xC2EE98C;
        *(unsigned int *)((t10 + 0x8)) = 0x1;
    }
    (((struct o0_uint *)0xC2F3890)->v) = 0x8;
    (((struct o4_uint *)0xC2F3890)->v) = 0x0;
    vmsfs_setretry(0xA);
    t14 = (((struct o0_int *)0xC2F3890)->v);
    memset(0xC2F3650, 0x0, (((((t14 << 2) << 1) + t14) << 2) << 1));
    vmsio_init();
}


void mpdrv_make_deviceinfo(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
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
    int t21;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t37;
    int t38;

    t0 = *(signed char *)(((a6 + 0x4) + 0x1));
    t1 = *(signed char *)(((a6 + 0x4) + 0x2));
    t2 = *(signed char *)(((a6 + 0x4) + 0x0));
    t3 = *(signed char *)(((a6 + 0x4) + 0x3));
    *(unsigned int *)((a4 + 0x0)) = ((((((unsigned char)t0 << 16) & 0xFF0000) | (((unsigned char)t1 << 8) & 0xFF00)) | ((((unsigned char)t2 << 16) << 8) & 0xFF000000)) | (unsigned char)t3);
    t4 = 0xFF000000;
    t5 = ((a6 + 0x4) + 0x4);
    t6 = (a4 + 0x4);
    while ((unsigned int)t6 < (unsigned int)(a4 + 0x8)) {
        t7 = *(signed char *)((t5 + 0x0));
        t4 = t7;
        t5 = (t5 + 0x1);
        *(unsigned char *)((t6 + 0x0)) = t4;
        t6 = (t6 + 0x1);
    }
    t8 = t4;
    t9 = t5;
    t10 = (a4 + 0x8);
    while ((unsigned int)t10 < (unsigned int)(a4 + 0xC)) {
        t11 = *(signed char *)((t9 + 0x0));
        t8 = t11;
        t9 = (t9 + 0x1);
        *(unsigned char *)((t10 + 0x0)) = t8;
        t10 = (t10 + 0x1);
    }
    t12 = t8;
    t13 = t9;
    t14 = (a4 + 0xC);
    while ((unsigned int)t14 < (unsigned int)(a4 + 0x10)) {
        t15 = *(signed char *)((t13 + 0x0));
        t12 = t15;
        t13 = (t13 + 0x1);
        *(unsigned char *)((t14 + 0x0)) = t12;
        t14 = (t14 + 0x1);
    }
    t16 = *(signed char *)((t13 + 0x0));
    (((struct o11_uchar *)(a4))->v) = t16;
    t17 = *(signed char *)((a4 + 0x10));
    if (t17 != 0) {
        t18 = *(signed char *)(((t13 + 0x1) + 0x0));
        (((struct o12_uchar *)(a4))->v) = (t18 & 0x3);
        t19 = *(signed char *)(((t13 + 0x1) + 0x0));
        (((struct o13_uchar *)(a4))->v) = (((unsigned int)(unsigned char)t19 >> 2) & 0x3);
    } else {
        t20 = *(signed char *)(((t13 + 0x1) + 0x0));
        t21 = *(signed char *)((0xC17870C + ((unsigned char)t20 & 0xF)));
        (((struct o12_uchar *)(a4))->v) = t21;
        (((struct o13_uchar *)(a4))->v) = 0x0;
    }
    t25 = *(int *)0xC2FA538;
    t26 = (((struct o10C4_int *)(t25))->v);
    if (t26 == 1) {
        t27 = 0xC2FA538;
        t28 = (t13 + 0x1);
        t29 = (a4 + 0x14);
        while ((unsigned int)t29 < (unsigned int)(a4 + 0x33)) {
            t30 = *(signed char *)((t28 + 0x0));
            t27 = t30;
            t28 = (t28 + 0x1);
            *(unsigned char *)((t29 + 0x0)) = t27;
            t29 = (t29 + 0x1);
        }
        t37 = t27;
        t38 = t28;
    } else {
        t31 = 0xC2FA538;
        t32 = ((t13 + 0x1) + 0x1);
        t33 = (a4 + 0x14);
        while ((unsigned int)t33 < (unsigned int)(a4 + 0x32)) {
            t34 = *(signed char *)((t32 + 0x0));
            t31 = t34;
            t32 = (t32 + 0x1);
            *(unsigned char *)((t33 + 0x0)) = t31;
            t33 = (t33 + 0x1);
        }
        (((struct o32_uchar *)(a4))->v) = 0x0;
        t37 = t31;
        t38 = t32;
    }
    (((struct o33_uchar *)(a4))->v) = 0x0;
    t40 = t37;
    t41 = t38;
    t42 = (a4 + 0x34);
    while ((unsigned int)t42 < (unsigned int)(a4 + 0x70)) {
        t43 = *(signed char *)((t41 + 0x0));
        t40 = t43;
        t41 = (t41 + 0x1);
        *(unsigned char *)((t42 + 0x0)) = t40;
        t42 = (t42 + 0x1);
    }
    (((struct o70_uchar *)(a4))->v) = 0x0;
    t44 = *(signed char *)((t41 + 0x1));
    t45 = *(signed char *)((t41 + 0x0));
    (((struct o74_ushort *)(a4))->v) = (((unsigned char)t44 << 8) | (unsigned char)t45);
    t46 = *(signed char *)((t41 + 0x3));
    t47 = *(signed char *)((t41 + 0x2));
    (((struct o76_ushort *)(a4))->v) = (((unsigned char)t46 << 8) | (unsigned char)t47);
}


