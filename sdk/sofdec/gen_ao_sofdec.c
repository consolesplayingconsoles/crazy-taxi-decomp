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


int ADXAMP_ExecServer(void)
{
    int t0;
    int t1;
    int t3;
    int t2;

    t0 = 0xC2F4C9C;
    do {
        t1 = *(signed char *)((t0 + 0x0));
        t3 = t1;
        if (t1 == 1) {
            t2 = ADXAMP_ExecHndl(t0);
            t3 = t2;
        }
        t0 = (t0 + 0x30);
    } while ((unsigned int)t0 < (unsigned int)0xC2F4E1C);
    return t3;
}

int adxsjd_get_wr(int a4, int a5, int a6, int a7)
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
    int t19;

    t0 = *(int *)((a4 + 0xC));
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)((a4 + 0x4));
        t3 = ADXB_GetNumChan(t2);
        if ((int)t1 >= (int)t3) break;
        t4 = *(int *)((((t1 << 2) + (a4 + 0xC)) + 0x0));
        t5 = *(int *)((t4 + 0x0));
        t6 = *(int *)((t5 + 0x18));
        t7 = ((int (*)(int, int, int, int))(t6))(t4, 0x0, 0x4000, (((t1 << 2) << 1) + (a4 + 0x1C)));
        t1 = (t1 + 0x1);
    }
    t8 = SJRBF_GetBufPtr(t0);
    t9 = *(int *)((a4 + 0x1C));
    *(unsigned int *)((a5 + 0x0)) = ((unsigned int)(t9 - t8) >> 1);
    t10 = *(int *)((a4 + 0x20));
    t11 = *(int *)((a4 + 0x38));
    t12 = t11;
    if ((int)((unsigned int)t10 >> 1) < (int)t11) {
        t12 = ((unsigned int)t10 >> 1);
    }
    *(unsigned int *)((a6 + 0x0)) = t12;
    t13 = *(int *)((a4 + 0x3C));
    if ((int)t13 >= 0) {
        t14 = *(int *)((a4 + 0x3C));
        t15 = (((struct o40_int *)(a4))->v);
        *(unsigned int *)((a7 + 0x0)) = (t14 - t15);
    } else {
        *(unsigned int *)((a7 + 0x0)) = 0x1FFFFFFF;
    }
    t19 = *(int *)((a4 + 0x4));
    return ADXB_GetPcmBuf(t19);
}

int ADXSTMF_Create(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t9;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;

    t0 = 0x0;
    for (;;) {
        t1 = *(signed char *)((((t0 * 0x64) + 0xC2F53DC) + 0x0));
        if (t1 != 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x20) break;
            continue;
        }
        break;
    }
    t9 = 0x0;
    if (t0 != 32) {
        *(unsigned char *)((((t0 * 0x64) + 0xC2F53DC) + 0x1)) = 0x1;
        *(unsigned char *)((((t0 * 0x64) + 0xC2F53DC) + 0x2)) = 0x0;
        *(unsigned int *)((((t0 * 0x64) + 0xC2F53DC) + 0x4)) = a7;
        *(unsigned int *)((((t0 * 0x64) + 0xC2F53DC) + 0x8)) = a4;
        *(unsigned int *)((((t0 * 0x64) + 0xC2F53DC) + 0xC)) = 0x0;
        *(unsigned int *)((((t0 * 0x64) + 0xC2F53DC) + 0x10)) = a5;
        *(unsigned int *)((((t0 * 0x64) + 0xC2F53DC) + 0x14)) = a6;
        *(unsigned int *)((((t0 * 0x64) + 0xC2F53DC) + 0x2C)) = 0x20;
        t4 = *(int *)((((t0 * 0x64) + 0xC2F53DC) + 0x14));
        t5 = (t4 + 0x7FF);
        if ((int)(t4 + 0x7FF) < 0) {
            t5 = ((t4 + 0x7FF) + 0x7FF);
        }
        *(unsigned int *)((((t0 * 0x64) + 0xC2F53DC) + 0x30)) = ((int)t5 >> 11);
        *(unsigned char *)((((t0 * 0x64) + 0xC2F53DC) + 0x0)) = 0x1;
        t6 = *(int *)((a7 + 0x0));
        t7 = *(int *)((t6 + 0x24));
        t8 = ((int (*)(int, int, int, int))(t7))(a7, 0x0, a6, 0x1);
        *(unsigned int *)((((t0 * 0x64) + 0xC2F53DC) + 0x18)) = t8;
        *(unsigned int *)((((t0 * 0x64) + 0xC2F53DC) + 0x1C)) = t8;
        t9 = ((t0 * 0x64) + 0xC2F53DC);
    }
    return t9;
}


int mwlRnaExecSvrHndl(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t19;
    int t22;
    int t23;
    int t24;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t35;
    int t36;
    int t42;
    int t43;
    int t44;
    int t45;
    int t52;
    int t53;

    t0 = (((struct o8C_int *)(a4))->v);
    if (t0 == 1) {
        return t0;
    }
    t1 = mwRnaGetTransSw(a4);
    if (t1 == 1) {
        t2 = *(signed char *)((a4 + 0x5));
        if ((unsigned char)t2 == 1) {
            t3 = mwlRnaIsCopyEnd(a4);
            if (t3 == 1) {
                mwlRnaAddWrPos(a4);
                *(unsigned char *)((a4 + 0x5)) = 0x0;
                *(unsigned int *)0xC178650 = 0x0;
            } else {
                t5 = *(int *)0xC178650;
                *(unsigned int *)0xC178650 = (t5 + 0x1);
            }
        }
    }
    t9 = *(signed char *)((a4 + 0x6));
    if ((unsigned char)t9 == 1) {
        t10 = *(signed char *)((a4 + 0x5));
        if (t10 == 0) {
            t11 = *(int *)((a4 + 0x10));
            t12 = *(int *)((t11 + 0x0));
            t13 = *(int *)((t12 + 0x24));
            t14 = ((int (*)(int, int))(t13))(t11, 0x1);
            if ((int)t14 < (int)0x20) {
                mwRnaSetTransSw(a4, 0x0);
                *(unsigned char *)((a4 + 0x6)) = 0x0;
            }
        }
    }
    t19 = mwRnaGetPlaySw(a4);
    if (t19 == 1) {
        mwlRnaAddRdPos(a4);
    }
    t22 = mwRnaGetTransSw(a4);
    if (t22 == 1) {
        t23 = *(signed char *)((a4 + 0x5));
        if (t23 == 0) {
            t24 = mwlRnaStartTrans(a4);
            if ((int)t24 > 0) {
                *(unsigned char *)((a4 + 0x5)) = 0x1;
            }
        }
    } else {
        t27 = mwRnaGetPlaySw(a4);
        if (t27 == 1) {
            t28 = *(int *)((a4 + 0x28));
            t29 = (((struct o54_int *)(a4))->v);
            if ((int)t29 < (int)t28) {
                t30 = *(signed char *)((a4 + 0x5));
                if ((unsigned char)t30 == 1) {
                    t31 = mwlRnaIsCopyEnd(a4);
                    if (t31 == 1) {
                        mwlRnaAddFlshPos(a4);
                        *(unsigned char *)((a4 + 0x5)) = 0x0;
                    }
                }
                t35 = *(signed char *)((a4 + 0x5));
                if (t35 == 0) {
                    t36 = mwlRnaInsrtSlntDat(a4);
                    if ((int)t36 > 0) {
                        *(unsigned char *)((a4 + 0x5)) = 0x1;
                    }
                }
            }
        }
    }
    t42 = *(signed char *)((a4 + 0x1));
    if ((unsigned char)t42 == 5) {
        t43 = *(int *)((a4 + 0x34));
        t44 = (((struct o40_int *)(a4))->v);
        if ((int)t43 >= (int)t44) {
            t45 = *(signed char *)((a4 + 0x7));
            if (t45 == 0) {
                mwRnaSetPlaySw(a4, 0x1);
                (((struct o40_uint *)(a4))->v) = 0x7FFFFFFF;
            }
        }
    }
    t52 = *(signed char *)((a4 + 0x1));
    if ((unsigned char)t52 == 6) {
        t53 = *(int *)((a4 + 0x34));
        if (t53 == 0) {
            mwRnaSetPlaySw(a4, 0x0);
            return mwlRnaClearBuf();
        }
        return (unsigned char)t52;
    }
    return (unsigned char)t52;
}

int SJMEM_GetNumData(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    if (a5 == 1) {
        t0 = *(int *)((a4 + 0xC));
        return t0;
    }
    if (a5 != 0) {
        t1 = *(int *)((a4 + 0x1C));
        if (t1 != 0) {
            t2 = *(int *)((a4 + 0x1C));
            t3 = *(int *)((a4 + 0x20));
            t4 = ((int (*)(int, int))(t2))(t3, 0xFFFFFFFD);
        }
    }
    return 0x0;
}

int SJMEM_GetChunk(int a4, int a5, int a6, int a7)
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

    t0 = SJMEM_Lock();
    if (a5 == 0) {
        *(unsigned int *)((a7 + 0x4)) = 0x0;
        *(unsigned int *)((a7 + 0x0)) = 0x0;
    } else {
        if (a5 == 1) {
            t1 = *(int *)((a4 + 0xC));
            t2 = a6;
            if ((int)t1 < (int)a6) {
                t2 = t1;
            }
            *(unsigned int *)((a7 + 0x4)) = t2;
            t3 = *(int *)((a4 + 0x14));
            t4 = *(int *)((a4 + 0x10));
            *(unsigned int *)((a7 + 0x0)) = (t3 + t4);
            t5 = *(int *)((a4 + 0x10));
            t6 = *(int *)((a7 + 0x4));
            *(unsigned int *)((a4 + 0x10)) = (t5 + t6);
            t7 = *(int *)((a7 + 0x4));
            t8 = *(int *)((a4 + 0xC));
            *(unsigned int *)((a4 + 0xC)) = (t8 - t7);
        } else {
            *(unsigned int *)((a7 + 0x4)) = 0x0;
            *(unsigned int *)((a7 + 0x0)) = 0x0;
            t9 = *(int *)((a4 + 0x1C));
            if (t9 != 0) {
                t10 = *(int *)((a4 + 0x1C));
                t11 = *(int *)((a4 + 0x20));
                t12 = ((int (*)(int, int))(t10))(t11, 0xFFFFFFFD);
            }
        }
    }
    return SJMEM_Unlock(a4, t0);
}

int SJMEM_PutChunk(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = SJMEM_Lock();
    if (a5 != 0) {
        if (a5 != 1) {
            *(unsigned int *)((a6 + 0x4)) = 0x0;
            *(unsigned int *)((a6 + 0x0)) = 0x0;
            t1 = *(int *)((a4 + 0x1C));
            if (t1 != 0) {
                t2 = *(int *)((a4 + 0x1C));
                t3 = *(int *)((a4 + 0x20));
                t4 = ((int (*)(int, int))(t2))(t3, 0xFFFFFFFD);
            }
        }
    }
    return SJMEM_Unlock(a4, t0);
}


int SJRBF_GetChunk(int a4, int a5, int a6, int a7)
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
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;

    t0 = SJRBF_Lock();
    if (a5 == 0) {
        t1 = *(int *)((a4 + 0x20));
        t2 = *(int *)((a4 + 0x14));
        t3 = *(int *)((a4 + 0x24));
        t4 = *(int *)((a4 + 0x10));
        t5 = ((t1 - t2) + t3);
        if ((int)t4 < (int)((t1 - t2) + t3)) {
            t5 = t4;
        }
        *(unsigned int *)((a7 + 0x4)) = t5;
        t6 = a6;
        if ((int)t5 < (int)a6) {
            t6 = t5;
        }
        *(unsigned int *)((a7 + 0x4)) = t6;
        t7 = *(int *)((a4 + 0x1C));
        t8 = *(int *)((a4 + 0x14));
        *(unsigned int *)((a7 + 0x0)) = (t7 + t8);
        t9 = *(int *)((a4 + 0x14));
        t10 = *(int *)((a7 + 0x4));
        t11 = *(int *)((a4 + 0x20));
        t12 = (int)((int)(t9 + t10) % (int)t11);
        *(unsigned int *)((a4 + 0x14)) = t12;
        t13 = *(int *)((a4 + 0x10));
        t14 = *(int *)((a7 + 0x4));
        *(unsigned int *)((a4 + 0x10)) = (t13 - t14);
    } else {
        if (a5 == 1) {
            t15 = *(int *)((a4 + 0x20));
            t16 = *(int *)((a4 + 0x18));
            t17 = *(int *)((a4 + 0x24));
            t18 = *(int *)((a4 + 0xC));
            t19 = ((t15 - t16) + t17);
            if ((int)t18 < (int)((t15 - t16) + t17)) {
                t19 = t18;
            }
            *(unsigned int *)((a7 + 0x4)) = t19;
            t20 = a6;
            if ((int)t19 < (int)a6) {
                t20 = t19;
            }
            *(unsigned int *)((a7 + 0x4)) = t20;
            t21 = *(int *)((a4 + 0x1C));
            t22 = *(int *)((a4 + 0x18));
            *(unsigned int *)((a7 + 0x0)) = (t21 + t22);
            t23 = *(int *)((a4 + 0x18));
            t24 = *(int *)((a7 + 0x4));
            t25 = *(int *)((a4 + 0x20));
            t26 = (int)((int)(t23 + t24) % (int)t25);
            *(unsigned int *)((a4 + 0x18)) = t26;
            t27 = *(int *)((a4 + 0xC));
            t28 = *(int *)((a7 + 0x4));
            *(unsigned int *)((a4 + 0xC)) = (t27 - t28);
        } else {
            *(unsigned int *)((a7 + 0x4)) = 0x0;
            *(unsigned int *)((a7 + 0x0)) = 0x0;
            t29 = *(int *)((a4 + 0x28));
            if (t29 != 0) {
                t30 = *(int *)((a4 + 0x28));
                t31 = *(int *)((a4 + 0x2C));
                t32 = ((int (*)(int, int))(t30))(t31, 0xFFFFFFFD);
            }
        }
    }
    return SJRBF_Unlock(a4, t0);
}

int SJRBF_PutChunk(int a4, int a5, int a6)
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
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;

    t0 = SJRBF_Lock();
    if (a5 == 1) {
        t1 = *(int *)((a4 + 0xC));
        t2 = *(int *)((a6 + 0x4));
        *(unsigned int *)((a4 + 0xC)) = (t1 + t2);
        t3 = *(int *)((a6 + 0x0));
        t4 = *(int *)((a4 + 0x1C));
        t5 = *(int *)((a4 + 0x24));
        if ((int)(t3 - t4) < (int)t5) {
            t6 = *(int *)((a4 + 0x24));
            t7 = *(int *)((a6 + 0x4));
            t8 = (t6 - (t3 - t4));
            if ((int)t7 < (int)(t6 - (t3 - t4))) {
                t8 = t7;
            }
            t9 = *(int *)((a4 + 0x20));
            t10 = *(int *)((a4 + 0x1C));
            t11 = *(int *)((a6 + 0x0));
            memmove(((t9 + (t3 - t4)) + t10), t11, t8);
        }
        t14 = *(int *)((a6 + 0x0));
        t15 = *(int *)((a4 + 0x1C));
        t16 = *(int *)((a6 + 0x4));
        t17 = *(int *)((a4 + 0x20));
        if ((int)((t14 - t15) + t16) > (int)t17) {
            t18 = *(int *)((a4 + 0x20));
            t19 = *(int *)((a6 + 0x4));
            t20 = (((t14 - t15) + t16) - t18);
            if ((int)t19 < (int)(((t14 - t15) + t16) - t18)) {
                t20 = t19;
            }
            t21 = *(int *)((a4 + 0x1C));
            memmove(t21, (t21 + (((t14 - t15) + t16) - t20)), t20);
        }
    } else {
        if (a5 == 0) {
            t26 = *(int *)((a4 + 0x10));
            t27 = *(int *)((a6 + 0x4));
            *(unsigned int *)((a4 + 0x10)) = (t26 + t27);
        } else {
            *(unsigned int *)((a6 + 0x4)) = 0x0;
            *(unsigned int *)((a6 + 0x0)) = 0x0;
            t28 = *(int *)((a4 + 0x28));
            if (t28 != 0) {
                t29 = *(int *)((a4 + 0x28));
                t30 = *(int *)((a4 + 0x2C));
                t31 = ((int (*)(int, int))(t29))(t30, 0xFFFFFFFD);
            }
        }
    }
    return SJRBF_Unlock(a4, t0);
}

int SJUNI_GetNumData(int a4, int a5)
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

    if ((int)a5 >= 0) {
        if ((int)a5 >= (int)0x4) {
            t0 = *(int *)((a4 + 0x28));
            if (t0 != 0) {
                t1 = *(int *)((a4 + 0x28));
                t2 = *(int *)((a4 + 0x2C));
                t3 = ((int (*)(int, int))(t1))(t2, 0xFFFFFFFD);
            }
            return 0x0;
        }
        t4 = (a4 + 0x18);
        t5 = ((a5 << 2) + (a4 + 0x18));
        t6 = 0x0;
        for (;;) {
            t7 = *(int *)((t5 + 0x0));
            t5 = t7;
            if (t5 == 0) break;
            t8 = *(int *)((t5 + 0xC));
            t4 = t8;
            t6 = (t6 + t4);
        }
        return t6;
    }
    t9 = *(int *)((a4 + 0x28));
    if (t9 != 0) {
        t10 = *(int *)((a4 + 0x28));
        t11 = *(int *)((a4 + 0x2C));
        t12 = ((int (*)(int, int))(t10))(t11, 0xFFFFFFFD);
    }
    return 0x0;
}


int ADXB_ExecOneAdx(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t9;
    int t23;
    int t10;
    int t12;
    int t13;
    int t15;
    int t17;
    int t18;
    int t19;
    int t20;

    t0 = *(int *)((a4 + 0x4));
    if (t0 == 1) {
        t1 = *(int *)((a4 + 0x8));
        t2 = ADXPD_GetStat(t1);
        if (t2 == 0) {
            t3 = (((struct o88_int *)(a4))->v);
            t4 = (((struct o8C_int *)(a4))->v);
            t5 = ((int (*)(int, int, int, int))(t3))(t4, ((a4 + 0x50) + 0x20), ((a4 + 0x50) + 0x24), ((a4 + 0x50) + 0x28));
            ADXB_EvokeDecode(a4);
            *(unsigned int *)((a4 + 0x4)) = 0x2;
        }
    }
    t9 = *(int *)((a4 + 0x4));
    t23 = t9;
    if (t9 == 2) {
        t10 = *(int *)((a4 + 0x8));
        ADXPD_ExecHndl(t10);
        t12 = *(int *)((a4 + 0x8));
        t13 = ADXPD_GetStat(t12);
        t23 = t13;
        if (t13 == 3) {
            ADXB_EndDecode(a4);
            t15 = *(int *)((a4 + 0x8));
            ADXPD_Reset(t15);
            t17 = (((struct o90_int *)(a4))->v);
            t18 = (((struct oA0_int *)(a4))->v);
            t19 = (((struct oA4_int *)(a4))->v);
            t20 = (((struct o94_int *)(a4))->v);
            t23 = ((int (*)(int, int, int))(t17))(t20, t19, t18);
            *(unsigned int *)((a4 + 0x4)) = 0x3;
        }
    }
    return t23;
}

int mwRnaErrCallFunc(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t2;
    int t5;
    int t3;
    int stk[3];

    t0 = ((((int)stk + 4) + 0x8) + 0x4);
    if ((0x3 & ((((int)stk + 4) + 0x8) + 0x4)) != 0) {
        t0 = ((((int)stk + 4) + 0x8) + 0x8);
    }
    t5 = vsprintf(0xC2FAB14, a8, t0);
    t2 = (((struct o0_int *)0xC178724)->v);
    if (t2 != 0) {
        t3 = (((struct o4_int *)0xC178724)->v);
        t5 = ((int (*)(int, int))(t2))(t3, 0xC2FAB14);
    }
    return t5;
}

int ADXB_ExecOneAiff16(int a4)
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
    int t34;
    int t35;
    int t36;
    int t51;
    int t56;
    int t62;
    int t57;
    int t58;
    int t59;
    int t60;

    t0 = *(int *)((a4 + 0x4));
    t1 = (((struct o50_int *)(a4))->v);
    if (t0 == 1) {
        t2 = *(int *)((a4 + 0x8));
        t3 = ADXPD_GetStat(t2);
        if (t3 == 0) {
            t4 = (((struct o88_int *)(a4))->v);
            t5 = (((struct o8C_int *)(a4))->v);
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
                        t23 = *(short *)((t1 + (t21 << 1)));
                        t22 = (t22 + 0x1);
                        *(unsigned short *)((((t16 << 1) + t13) + t20)) = (((unsigned short)t23 << 8) | ((int)(unsigned short)t23 >> 8));
                        t24 = *(short *)((t1 + ((t21 + 0x1) << 1)));
                        t25 = t20;
                        t20 = (t20 + 0x2);
                        *(unsigned short *)(((((t18 + t19) << 1) + t13) + t25)) = (((unsigned short)t24 << 8) | ((int)(unsigned short)t24 >> 8));
                        t21 = (t21 + 0x2);
                    } while ((int)t22 < (int)t15);
                }
            } else {
                if ((int)t15 > 0) {
                    t34 = 0x0;
                    t35 = 0x0;
                    do {
                        t36 = *(short *)((t1 + t34));
                        t35 = (t35 + 0x1);
                        *(unsigned short *)((((t16 << 1) + t13) + t34)) = (((unsigned short)t36 << 8) | ((int)(unsigned short)t36 >> 8));
                        t34 = (t34 + 0x2);
                    } while ((int)t35 < (int)t15);
                }
            }
            (((struct oA0_uint *)(a4))->v) = t15;
            t51 = *(signed char *)((a4 + 0xE));
            (((struct oA4_uint *)(a4))->v) = ((t15 * t51) << 1);
            *(unsigned int *)((a4 + 0x4)) = 0x2;
        }
    }
    t56 = *(int *)((a4 + 0x4));
    t62 = t56;
    if (t56 == 2) {
        t57 = (((struct o90_int *)(a4))->v);
        t58 = (((struct oA0_int *)(a4))->v);
        t59 = (((struct oA4_int *)(a4))->v);
        t60 = (((struct o94_int *)(a4))->v);
        t62 = ((int (*)(int, int, int))(t57))(t60, t59, t58);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
    }
    return t62;
}

int ADXB_ExecOneAiff8(int a4)
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
    int t32;
    int t33;
    int t34;
    int t35;
    int t46;
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
                        t23 = *(signed char *)((t20 + t1));
                        *(unsigned short *)(((((t16 << 1) + t13) + t21) + 0x0)) = ((unsigned char)t23 << 8);
                        t24 = *(signed char *)((((t20 + 0x1) + t1) + 0x0));
                        t22 = (t22 + 0x1);
                        t20 = (t20 + 0x2);
                        *(unsigned short *)(((((t18 + t19) << 1) + t13) + t21)) = ((unsigned char)t24 << 8);
                        t21 = (t21 + 0x2);
                    } while ((int)t22 < (int)t15);
                }
            } else {
                if ((int)t15 > 0) {
                    t32 = (0x0 + t1);
                    t33 = (0x0 + ((t16 << 1) + t13));
                    t34 = 0x0;
                    do {
                        t35 = *(signed char *)((t32 + 0x0));
                        t32 = (t32 + 0x1);
                        t34 = (t34 + 0x1);
                        *(unsigned short *)((t33 + 0x0)) = ((unsigned char)t35 << 8);
                        t33 = (t33 + 0x2);
                    } while ((int)t34 < (int)t15);
                }
            }
            *(unsigned int *)((a4 + 0xA0)) = t15;
            t46 = *(signed char *)((a4 + 0xE));
            *(unsigned int *)((a4 + 0xA4)) = (t15 * t46);
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

void ADX_DecodeInfoAu(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14)
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
    int stk[11];

    *(unsigned int *)(((int)stk + 32)) = a4;
    *(unsigned int *)(((int)stk + 28)) = a6;
    *(unsigned int *)(((int)stk + 36)) = a7;
    if ((int)a5 < (int)0x8) {
        t0 = *(int *)(((int)stk + 28));
        *(unsigned short *)((t0 + 0x0)) = 0x0;
        return;
    }
    t1 = *(int *)(((int)stk + 32));
    t2 = adxb_DecodeInfoAuSub(t1, a5, (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x10), (((int)stk + 4) + 0x10), (((int)stk + 8) + 0x10), a14);
    if (t2 != 0) {
        t3 = *(int *)(((int)stk + 32));
        t4 = *(int *)(((int)stk + 28));
        *(unsigned short *)((t4 + 0x0)) = (t2 - t3);
        if ((int)(short)(t2 - t3) <= 0) {
            return;
        }
        t5 = *(int *)(((int)stk + 12));
        *(unsigned int *)((a11 + 0x0)) = t5;
        t6 = *(int *)(((int)stk + 16));
        *(unsigned char *)((a10 + 0x0)) = t6;
        t7 = *(int *)(((int)stk + 20));
        *(unsigned char *)((a8 + 0x0)) = t7;
        t8 = *(int *)(((int)stk + 24));
        *(unsigned int *)((a12 + 0x0)) = t8;
        t9 = *(int *)(((int)stk + 36));
        *(unsigned char *)((t9 + 0x0)) = 0xFFFFFFFF;
        t10 = *(signed char *)((a10 + 0x0));
        t11 = *(signed char *)((a8 + 0x0));
        t12 = ((short)t10 * (short)t11);
        if ((int)((short)t10 * (short)t11) < 0) {
            t12 = (((short)t10 * (short)t11) + 0x7);
        }
        *(unsigned char *)((a9 + 0x0)) = (((t12 >> 1) >> 1) >> 1);
        *(unsigned int *)((a13 + 0x0)) = 0x1;
        return;
    }
}

int ADXB_ExecOneAu16(int a4)
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
    int t34;
    int t35;
    int t36;
    int t51;
    int t56;
    int t62;
    int t57;
    int t58;
    int t59;
    int t60;

    t0 = *(int *)((a4 + 0x4));
    t1 = (((struct o50_int *)(a4))->v);
    if (t0 == 1) {
        t2 = *(int *)((a4 + 0x8));
        t3 = ADXPD_GetStat(t2);
        if (t3 == 0) {
            t4 = (((struct o88_int *)(a4))->v);
            t5 = (((struct o8C_int *)(a4))->v);
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
                        t23 = *(short *)((t1 + (t21 << 1)));
                        t22 = (t22 + 0x1);
                        *(unsigned short *)((((t16 << 1) + t13) + t20)) = (((unsigned short)t23 << 8) | ((int)(unsigned short)t23 >> 8));
                        t24 = *(short *)((t1 + ((t21 + 0x1) << 1)));
                        t25 = t20;
                        t20 = (t20 + 0x2);
                        *(unsigned short *)(((((t18 + t19) << 1) + t13) + t25)) = (((unsigned short)t24 << 8) | ((int)(unsigned short)t24 >> 8));
                        t21 = (t21 + 0x2);
                    } while ((int)t22 < (int)t15);
                }
            } else {
                if ((int)t15 > 0) {
                    t34 = 0x0;
                    t35 = 0x0;
                    do {
                        t36 = *(short *)((t1 + t34));
                        t35 = (t35 + 0x1);
                        *(unsigned short *)((((t16 << 1) + t13) + t34)) = (((unsigned short)t36 << 8) | ((int)(unsigned short)t36 >> 8));
                        t34 = (t34 + 0x2);
                    } while ((int)t35 < (int)t15);
                }
            }
            (((struct oA0_uint *)(a4))->v) = t15;
            t51 = *(signed char *)((a4 + 0xE));
            (((struct oA4_uint *)(a4))->v) = ((t15 * t51) << 1);
            *(unsigned int *)((a4 + 0x4)) = 0x2;
        }
    }
    t56 = *(int *)((a4 + 0x4));
    t62 = t56;
    if (t56 == 2) {
        t57 = (((struct o90_int *)(a4))->v);
        t58 = (((struct oA0_int *)(a4))->v);
        t59 = (((struct oA4_int *)(a4))->v);
        t60 = (((struct o94_int *)(a4))->v);
        t62 = ((int (*)(int, int, int))(t57))(t60, t59, t58);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
    }
    return t62;
}

int ADXB_ExecOneAu8(int a4)
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
    int t32;
    int t33;
    int t34;
    int t35;
    int t46;
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
                        t23 = *(signed char *)((t20 + t1));
                        *(unsigned short *)(((((t16 << 1) + t13) + t21) + 0x0)) = ((unsigned char)t23 << 8);
                        t24 = *(signed char *)((((t20 + 0x1) + t1) + 0x0));
                        t22 = (t22 + 0x1);
                        t20 = (t20 + 0x2);
                        *(unsigned short *)(((((t18 + t19) << 1) + t13) + t21)) = ((unsigned char)t24 << 8);
                        t21 = (t21 + 0x2);
                    } while ((int)t22 < (int)t15);
                }
            } else {
                if ((int)t15 > 0) {
                    t32 = (0x0 + t1);
                    t33 = (0x0 + ((t16 << 1) + t13));
                    t34 = 0x0;
                    do {
                        t35 = *(signed char *)((t32 + 0x0));
                        t32 = (t32 + 0x1);
                        t34 = (t34 + 0x1);
                        *(unsigned short *)((t33 + 0x0)) = ((unsigned char)t35 << 8);
                        t33 = (t33 + 0x2);
                    } while ((int)t34 < (int)t15);
                }
            }
            *(unsigned int *)((a4 + 0xA0)) = t15;
            t46 = *(signed char *)((a4 + 0xE));
            *(unsigned int *)((a4 + 0xA4)) = (t15 * t46);
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

int ADXB_ExecOneAuUlaw(int a4)
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
    int t51;
    int t56;
    int t62;
    int t57;
    int t58;
    int t59;
    int t60;

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
                        t23 = *(signed char *)((t21 + t1));
                        t24 = *(short *)((0xC1787A0 + ((unsigned char)t23 << 1)));
                        t22 = (t22 + 0x1);
                        *(unsigned short *)(((((t16 << 1) + t13) + t20) + 0x0)) = t24;
                        t25 = *(signed char *)((((t21 + 0x1) + t1) + 0x0));
                        t21 = (t21 + 0x2);
                        t26 = *(short *)(((((unsigned char)t25 << 1) + 0xC1787A0) + 0x0));
                        *(unsigned short *)(((((t18 + t19) << 1) + t13) + t20)) = t26;
                        t20 = (t20 + 0x2);
                    } while ((int)t22 < (int)t15);
                }
            } else {
                if ((int)t15 > 0) {
                    t35 = (0x0 + t1);
                    t36 = (0x0 + ((t16 << 1) + t13));
                    t37 = 0x0;
                    do {
                        t38 = *(signed char *)((t35 + 0x0));
                        t35 = (t35 + 0x1);
                        t37 = (t37 + 0x1);
                        t39 = *(short *)((0xC1787A0 + ((unsigned char)t38 << 1)));
                        *(unsigned short *)((t36 + 0x0)) = t39;
                        t36 = (t36 + 0x2);
                    } while ((int)t37 < (int)t15);
                }
            }
            *(unsigned int *)((a4 + 0xA0)) = t15;
            t51 = *(signed char *)((a4 + 0xE));
            *(unsigned int *)((a4 + 0xA4)) = (t15 * t51);
            *(unsigned int *)((a4 + 0x4)) = 0x2;
        }
    }
    t56 = *(int *)((a4 + 0x4));
    t62 = t56;
    if (t56 == 2) {
        t57 = *(int *)((a4 + 0x90));
        t58 = *(int *)((a4 + 0xA0));
        t59 = *(int *)((a4 + 0xA4));
        t60 = *(int *)((a4 + 0x94));
        t62 = ((int (*)(int, int, int))(t57))(t60, t59, t58);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
    }
    return t62;
}

int ADXB_ExecOneSpsd(int a4)
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


int ADXB_ExecOneWav8(int a4)
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
    int t32;
    int t33;
    int t34;
    int t35;
    int t46;
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
                        t23 = *(signed char *)((t20 + t1));
                        *(unsigned short *)(((((t16 << 1) + t13) + t21) + 0x0)) = (((unsigned char)t23 - 128) << 8);
                        t24 = *(signed char *)((((t20 + 0x1) + t1) + 0x0));
                        t22 = (t22 + 0x1);
                        t20 = (t20 + 0x2);
                        *(unsigned short *)(((((t18 + t19) << 1) + t13) + t21)) = (((unsigned char)t24 - 128) << 8);
                        t21 = (t21 + 0x2);
                    } while ((int)t22 < (int)t15);
                }
            } else {
                if ((int)t15 > 0) {
                    t32 = (0x0 + t1);
                    t33 = (0x0 + ((t16 << 1) + t13));
                    t34 = 0x0;
                    do {
                        t35 = *(signed char *)((t32 + 0x0));
                        t32 = (t32 + 0x1);
                        t34 = (t34 + 0x1);
                        *(unsigned short *)((t33 + 0x0)) = (((unsigned char)t35 - 128) << 8);
                        t33 = (t33 + 0x2);
                    } while ((int)t34 < (int)t15);
                }
            }
            *(unsigned int *)((a4 + 0xA0)) = t15;
            t46 = *(signed char *)((a4 + 0xE));
            *(unsigned int *)((a4 + 0xA4)) = (t15 * t46);
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


