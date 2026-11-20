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


int SJRBF_GetNumData(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    if (a5 == 1) {
        t0 = *(int *)((a4 + 0xC));
        return t0;
    }
    if (a5 == 0) {
        t1 = *(int *)((a4 + 0x10));
        return t1;
    }
    t2 = *(int *)((a4 + 0x28));
    if (t2 != 0) {
        t3 = *(int *)((a4 + 0x28));
        t4 = *(int *)((a4 + 0x2C));
        t5 = ((int (*)(int, int))(t3))(t4, 0xFFFFFFFD);
    }
    return 0x0;
}


int ADXB_ExecOneWav16(int a4)
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
    int t12;
    int t13;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t31;
    int t32;
    int t33;
    int t44;
    int t49;
    int t55;
    int t50;
    int t51;
    int t52;
    int t53;

    t0 = *(int *)((a4 + 0x4));
    t1 = *(int *)(((a4 + 0x50) + 0x0));
    if (t0 == 1) {
        t2 = *(int *)((a4 + 0x8));
        t3 = ADXPD_GetStat(t2);
        if (t3 == 0) {
            t4 = *(int *)((a4 + 0x88));
            t5 = *(int *)((a4 + 0x8C));
            t6 = ((int (*)(int, int, int, int))(t4))(t5, ((a4 + 0x50) + 0x20), ((a4 + 0x50) + 0x24), ((a4 + 0x50) + 0x28));
            t7 = *(int *)(((a4 + 0x50) + 0x18));
            t8 = *(int *)(((a4 + 0x50) + 0x20));
            t9 = *(int *)(((a4 + 0x50) + 0x24));
            t10 = *(int *)(((a4 + 0x50) + 0x4));
            t12 = (t7 - t8);
            if ((int)(t7 - t8) > (int)t9) {
                t12 = *(int *)(((a4 + 0x50) + 0x24));
            }
            t13 = *(int *)(((a4 + 0x50) + 0x14));
            t15 = t12;
            if ((int)t12 > (int)t10) {
                t15 = *(int *)(((a4 + 0x50) + 0x4));
            }
            t16 = *(int *)(((a4 + 0x50) + 0x20));
            t17 = *(signed char *)((a4 + 0xE));
            if (t17 == 2) {
                t18 = *(int *)(((a4 + 0x50) + 0x1C));
                t19 = *(int *)(((a4 + 0x50) + 0x20));
                if ((int)t15 > 0) {
                    t20 = 0x0;
                    t21 = 0x0;
                    t22 = 0x0;
                    do {
                        t23 = *(short *)((((t20 << 1) + t1) + 0x0));
                        t22 = (t22 + 0x1);
                        *(unsigned short *)((((t16 << 1) + t13) + t21)) = t23;
                        t24 = *(short *)(((((t20 + 0x1) << 1) + t1) + 0x0));
                        t20 = (t20 + 0x2);
                        *(unsigned short *)(((((t18 + t19) << 1) + t13) + t21)) = t24;
                        t21 = (t21 + 0x2);
                    } while ((int)t22 < (int)t15);
                }
            } else {
                if ((int)t15 > 0) {
                    t31 = 0x0;
                    t32 = 0x0;
                    do {
                        t33 = *(short *)((t1 + t31));
                        t32 = (t32 + 0x1);
                        *(unsigned short *)((((t16 << 1) + t13) + t31)) = t33;
                        t31 = (t31 + 0x2);
                    } while ((int)t32 < (int)t15);
                }
            }
            *(unsigned int *)((a4 + 0xA0)) = t15;
            t44 = *(signed char *)((a4 + 0xE));
            *(unsigned int *)((a4 + 0xA4)) = ((t15 * t44) << 1);
            *(unsigned int *)((a4 + 0x4)) = 0x2;
        }
    }
    t49 = *(int *)((a4 + 0x4));
    t55 = t49;
    if (t49 == 2) {
        t50 = *(int *)((a4 + 0x90));
        t51 = *(int *)((a4 + 0xA0));
        t52 = *(int *)((a4 + 0xA4));
        t53 = *(int *)((a4 + 0x94));
        t55 = ((int (*)(int, int, int))(t50))(t53, t52, t51);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
    }
    return t55;
}


int ADXB_ExecOneWav4(int a4)
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
    int t12;
    int t13;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t53;
    int t58;
    int t64;
    int t59;
    int t60;
    int t61;
    int t62;

    t0 = *(int *)((a4 + 0x4));
    t1 = *(int *)(((a4 + 0x50) + 0x0));
    if (t0 == 1) {
        t2 = *(int *)((a4 + 0x8));
        t3 = ADXPD_GetStat(t2);
        if (t3 == 0) {
            t4 = *(int *)((a4 + 0x88));
            t5 = *(int *)((a4 + 0x8C));
            t6 = ((int (*)(int, int, int, int))(t4))(t5, ((a4 + 0x50) + 0x20), ((a4 + 0x50) + 0x24), ((a4 + 0x50) + 0x28));
            t7 = *(int *)(((a4 + 0x50) + 0x18));
            t8 = *(int *)(((a4 + 0x50) + 0x20));
            t9 = *(int *)(((a4 + 0x50) + 0x24));
            t10 = *(int *)(((a4 + 0x50) + 0x4));
            t12 = (t7 - t8);
            if ((int)(t7 - t8) > (int)t9) {
                t12 = *(int *)(((a4 + 0x50) + 0x24));
            }
            t13 = *(int *)(((a4 + 0x50) + 0x14));
            t15 = t12;
            if ((int)t12 > (int)t10) {
                t15 = *(int *)(((a4 + 0x50) + 0x4));
            }
            t16 = *(int *)(((a4 + 0x50) + 0x20));
            t17 = *(signed char *)((a4 + 0xE));
            if (t17 == 2) {
                t18 = *(int *)(((a4 + 0x50) + 0x1C));
                t19 = *(int *)(((a4 + 0x50) + 0x20));
                if ((int)t15 > 0) {
                    t20 = 0x0;
                    t21 = 0x0;
                    t22 = 0x0;
                    do {
                        t23 = *(signed char *)((((t20 + 0x2) + t1) + 0x0));
                        t24 = *(signed char *)((t20 + t1));
                        *(unsigned short *)(((((t16 << 1) + t13) + t21) + 0x0)) = (((unsigned char)t23 << 8) | (unsigned char)t24);
                        t25 = *(signed char *)((((t20 + 0x3) + t1) + 0x0));
                        t26 = *(signed char *)((((t20 + 0x1) + t1) + 0x0));
                        t22 = (t22 + 0x1);
                        t20 = (t20 + 0x4);
                        *(unsigned short *)(((((t18 + t19) << 1) + t13) + t21)) = (((unsigned char)t25 << 8) | (unsigned char)t26);
                        t21 = (t21 + 0x2);
                    } while ((int)t22 < (int)t15);
                }
            } else {
                if ((int)t15 > 0) {
                    t35 = 0x0;
                    t36 = (0x0 + ((t16 << 1) + t13));
                    t37 = 0x0;
                    do {
                        t38 = *(signed char *)((((t35 + 0x1) + t1) + 0x0));
                        t37 = (t37 + 0x1);
                        t39 = *(signed char *)((t1 + t35));
                        t35 = (t35 + 0x2);
                        *(unsigned short *)((t36 + 0x0)) = (((unsigned char)t38 << 8) | (unsigned char)t39);
                        t36 = (t36 + 0x2);
                    } while ((int)t37 < (int)t15);
                }
            }
            *(unsigned int *)((a4 + 0xA0)) = t15;
            t53 = *(signed char *)((a4 + 0xE));
            *(unsigned int *)((a4 + 0xA4)) = ((t15 * t53) << 1);
            *(unsigned int *)((a4 + 0x4)) = 0x2;
        }
    }
    t58 = *(int *)((a4 + 0x4));
    t64 = t58;
    if (t58 == 2) {
        t59 = *(int *)((a4 + 0x90));
        t60 = *(int *)((a4 + 0xA0));
        t61 = *(int *)((a4 + 0xA4));
        t62 = *(int *)((a4 + 0x94));
        t64 = ((int (*)(int, int, int))(t59))(t62, t61, t60);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
    }
    return t64;
}


