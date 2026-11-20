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


void kmGetCurrentScanline(int a4)
{
    int t0;
    int t3;
    int t4;
    int t1;
    int t5;
    int t6;
    int t7;
    float u26;
    int t8;
    float u22;
    int t9;
    float u18;
    float u15;
    int t10;
    float u12;
    int t27;
    float u41;
    int t28;
    float u37;
    float u34;
    int t29;
    float u31;
    int t46;
    int t47;
    int t57;
    int t48;
    int t59;
    int t42;
    int t44;
    float u45;

    t0 = (((struct o0_int *)0xC2EA684)->v);
    t3 = a4;
    t4 = 0x0;
    if ((t0 & 2) != 0) {
        t1 = kmiReadRegister(0x10C);
        t3 = t1;
        t4 = (0x3FF & t1);
    }
    t5 = (((struct o0_int *)0xC2EA6D4)->v);
    t6 = (((struct o8_int *)0xC2EA6D4)->v);
    t7 = (((struct o1C_int *)0xC2EA684)->v);
    if ((t7 & 0x1) == 1) {
        t42 = 0x1E0;
        t44 = (t6 + t5);
        u26 = 1.0f;
        if (0x1 == 0) {
            t8 = (((struct o1C_int *)0xC2EA684)->v);
            t42 = 0xF0;
            t44 = (t6 + t5);
            u22 = 1.0f;
            if ((t8 & 0x1) != 1) {
                t9 = (((struct o1C_int *)0xC2EA684)->v);
                t42 = 0xF0;
                t44 = (t6 + t5);
                u18 = 1.0f;
                if ((t9 & 44) != 0) {
                    t42 = 0xF0;
                    t44 = (t6 + t5);
                    u15 = 1.0f;
                    if (0x1 != 0) {
                        t10 = (((struct o1C_int *)0xC2EA684)->v);
                        t42 = 0xF0;
                        u12 = 0.5f;
                        if ((t10 & 32) != 0) {
                            t42 = 0x1E0;
                            u12 = 1.0f;
                        }
                        t44 = ((t6 + t5) + (t6 + t5));
                        u15 = u12;
                    }
                    u18 = u15;
                }
                u22 = u18;
            }
            u26 = u22;
        }
        u45 = u26;
    } else {
        t27 = (((struct o1C_int *)0xC2EA684)->v);
        t42 = 0xF0;
        t44 = (t6 + t5);
        u41 = 1.0f;
        if ((t27 & 0x1) != 1) {
            t28 = (((struct o1C_int *)0xC2EA684)->v);
            t42 = 0xF0;
            t44 = (t6 + t5);
            u37 = 1.0f;
            if ((t28 & 44) != 0) {
                t42 = 0xF0;
                t44 = (t6 + t5);
                u34 = 1.0f;
                if (0x1 != 0) {
                    t29 = (((struct o1C_int *)0xC2EA684)->v);
                    t42 = 0xF0;
                    u31 = 0.5f;
                    if ((t29 & 32) != 0) {
                        t42 = 0x1E0;
                        u31 = 1.0f;
                    }
                    t44 = ((t6 + t5) + (t6 + t5));
                    u34 = u31;
                }
                u37 = u34;
            }
            u41 = u37;
        }
        u45 = u41;
    }
    t46 = *(int *)0xC2EA970;
    t47 = (((struct o1C_int *)0xC2EA684)->v);
    t57 = t4;
    if ((t47 & 0x1) != 1) {
        t48 = (((struct o1C_int *)0xC2EA684)->v);
        t57 = t4;
        if ((t48 & 44) != 0) {
            t57 = t4;
            if (0x1 != 0) {
                t57 = t4;
                if ((t3 & 0x40000) != 0) {
                    t57 = (t4 + 0x1);
                }
            }
        }
    }
    t59 = ((int)((float)(t57 - t44) * u45) - ((unsigned int)t46 >> 16));
    if ((int)(int)((float)(t57 - t44) * u45) <= (int)t42) {
        t59 = (int)((float)(t57 - t44) * u45);
    }
    *(unsigned int *)((a4 + 0x0)) = t59;
}


int kmCreateContiguousTextureSurface(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t44;
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
    int t14;
    int t32;
    int t19;
    int t20;
    int t21;
    int t23;
    int t25;
    int t26;

    t0 = kmtex_CheckTextureFormat(a4, a6, a7, a8);
    t44 = t0;
    if (t0 == 0) {
        t1 = *(int *)((a4 + 0x0));
        t44 = 0x4;
        if ((unsigned short)t1 != 3) {
            if ((int)a5 > (int)0x1) {
                if ((int)0x1 < (int)a5) {
                    t2 = (a4 + 0x28);
                    t3 = 0x1;
                    do {
                        t4 = *(int *)((a4 + 0x0));
                        t3 = (t3 + 0x1);
                        *(unsigned int *)((t2 + 0x0)) = t4;
                        t5 = *(int *)((a4 + 0x4));
                        *(unsigned int *)((t2 + 0x4)) = t5;
                        t6 = *(int *)((a4 + 0x8));
                        *(unsigned int *)((t2 + 0x8)) = t6;
                        t7 = *(int *)((a4 + 0xC));
                        *(unsigned int *)((t2 + 0xC)) = t7;
                        t8 = *(int *)((a4 + 0x10));
                        *(unsigned int *)((t2 + 0x10)) = t8;
                        t9 = *(int *)((a4 + 0x14));
                        *(unsigned int *)((t2 + 0x14)) = t9;
                        t10 = *(int *)((a4 + 0x18));
                        *(unsigned int *)((t2 + 0x18)) = t10;
                        t2 = (t2 + 0x28);
                    } while ((int)t3 < (int)a5);
                }
            }
            t14 = *(int *)((a4 + 0x14));
            t32 = kmiTXalloc((t14 * a5), a4);
            if (t32 == 3) {
                kmiDefaultInterruptHandler(0x3);
                t44 = t32;
            } else {
                t19 = *(int *)((a4 + 0x1C));
                kmiFBfree(t19);
                if ((int)a5 > 0) {
                    t20 = 0x0;
                    for (;;) {
                        *(unsigned int *)(((((((t20 << 2) + t20) << 2) << 1) + a4) + 0x1C)) = t19;
                        t21 = *(int *)(((((((t20 << 2) + t20) << 2) << 1) + a4) + 0x14));
                        t32 = kmiABSalloc(t21, (((((t20 << 2) + t20) << 2) << 1) + a4));
                        t23 = *(int *)(((((((t20 << 2) + t20) << 2) << 1) + a4) + 0x14));
                        t19 = (t19 + (((unsigned int)t23 >> 2) << 2));
                        if (t32 == 3) break;
                        t20 = (t20 + 0x1);
                        if ((int)t20 >= (int)a5) {
                            return t32;
                        }
                    }
                    if ((int)t20 > 0) {
                        t25 = 0x0;
                        do {
                            t26 = *(int *)(((a4 + ((((t20 << 2) + t20) << 2) << 1)) + 0x1C));
                            kmiFBfree(t26);
                            t25 = (t25 + 0x1);
                        } while ((int)t25 < (int)t20);
                    }
                    kmiDefaultInterruptHandler(0x3);
                }
                t44 = t32;
            }
        }
    }
    return t44;
}


