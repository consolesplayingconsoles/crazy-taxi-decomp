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


int nlInitCommonTexture(int a4, int a5, int a6)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;

    nlInitTextureSurface(a4, (a5 + 0x1));
    (((struct o0_uint *)0xC2AEC84)->v) = ((((a5 + 0x1) * 0x3C) + a4) + 0x8);
    (((struct o4_uint *)0xC2AEC84)->v) = ((((a6 + 0x1) << 2) << 1) + ((((a5 + 0x1) * 0x3C) + a4) + 0x8));
    t1 = ((a6 + 0x1) + 0x1F);
    if ((int)((a6 + 0x1) + 0x1F) < 0) {
        t1 = (((a6 + 0x1) + 0x1F) + 0x1F);
    }
    (((struct o4_uint *)0xC14A638)->v) = ((int)t1 >> 5);
    (((struct o0_uint *)0xC14A638)->v) = ((a6 + 0x1) - 1);
    t2 = ((int)t1 >> 5);
    t3 = 0xFFFFFFF8;
    t4 = 0xFFFFFFFF;
    for (;;) {
        t5 = (((struct o0_int *)0xC14A638)->v);
        if ((int)t4 >= (int)t5) break;
        t6 = (((struct o0_int *)0xC2AEC84)->v);
        t4 = (t4 + 0x1);
        *(unsigned int *)(((t6 + t3) + 0x0)) = 0x0;
        t7 = (((struct o0_int *)0xC2AEC84)->v);
        t2 = t7;
        t2 = (t2 + t3);
        t3 = (t3 + 0x8);
        *(unsigned int *)((t2 + 0x4)) = 0xFFFFFFFF;
    }
    t9 = 0xC14A638;
    t10 = 0x0;
    t11 = 0x0;
    for (;;) {
        t12 = (((struct o4_int *)0xC14A638)->v);
        if ((int)t11 >= (int)t12) break;
        t13 = (((struct o4_int *)0xC2AEC84)->v);
        t9 = t13;
        t11 = (t11 + 0x1);
        *(unsigned int *)((t10 + t9)) = 0x0;
        t10 = (t10 + 0x4);
    }
    *(unsigned int *)0xC2B3184 = 0x0;
    return t9;
}

void nlSetUserTileClip(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t1;

    t0 = 0x0;
    t1 = a8;
    do {
        if ((t1 & 0x1) != 0) {
            kmSetUserClipping(0xC2AF368, t0, a4, a5, a6, a7);
        }
        t0 = (t0 + 0x1);
        t1 = (t1 >> 1);
    } while ((int)t0 < (int)0x5);
}

int nlSetBackColorZ(int a4, int a5, int a6, float f4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int stk[29];

    (((struct o0_uint *)0xC14A654)->v) = a4;
    (((struct o4_uint *)0xC14A654)->v) = a5;
    (((struct o8_uint *)0xC14A654)->v) = a6;
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x0)) = 0xE0000000;
    *(float *)(((((int)stk + 0) + 0xC) + 0x4)) = 0.0f;
    *(float *)(((((int)stk + 0) + 0xC) + 0x8)) = 0.0f;
    *(float *)(((((int)stk + 0) + 0xC) + 0xC)) = (1.0f / f4);
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x10)) = a4;
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x18)) = a4;
    *(unsigned int *)((((((int)stk + 0) + 0xC) + 0x20) + 0x0)) = 0xE0000000;
    t0 = (((struct o0_short *)0xC2B3190)->v);
    t1 = (((struct o6_short *)0xC2B3190)->v);
    t2 = (short)t0;
    if (t1 != 0) {
        t2 = ((short)t0 << 1);
    }
    *(float *)((((((int)stk + 0) + 0xC) + 0x20) + 0x4)) = (float)t2;
    *(float *)((((((int)stk + 0) + 0xC) + 0x20) + 0x8)) = 0.0f;
    *(float *)((((((int)stk + 0) + 0xC) + 0x20) + 0xC)) = (1.0f / f4);
    *(unsigned int *)((((((int)stk + 0) + 0xC) + 0x20) + 0x10)) = a5;
    *(unsigned int *)((((((int)stk + 0) + 0xC) + 0x20) + 0x18)) = a5;
    *(unsigned int *)((((((int)stk + 0) + 0xC) + 0x40) + 0x0)) = 0xF0000000;
    *(float *)((((((int)stk + 0) + 0xC) + 0x40) + 0x4)) = 0.0f;
    t3 = (((struct o2_short *)0xC2B3190)->v);
    *(float *)((((((int)stk + 0) + 0xC) + 0x40) + 0x8)) = (float)t3;
    *(float *)((((((int)stk + 0) + 0xC) + 0x40) + 0xC)) = (1.0f / f4);
    *(unsigned int *)((((((int)stk + 0) + 0xC) + 0x40) + 0x10)) = a6;
    *(unsigned int *)((((((int)stk + 0) + 0xC) + 0x40) + 0x18)) = a6;
    *(unsigned int *)((((int)stk + 0) + 0x0)) = (((int)stk + 0) + 0xC);
    *(unsigned int *)((((int)stk + 0) + 0x4)) = ((((int)stk + 0) + 0xC) + 0x20);
    *(unsigned int *)((((int)stk + 0) + 0x8)) = ((((int)stk + 0) + 0xC) + 0x40);
    t4 = kmSetBackGroundPlane(((int)stk + 0), 0x0);
    return t4;
}

int nlArcCos(float f4)
{
    int t0;

    if ((f4 < 0.0f ? -f4 : f4) > 1.0f) {
        return 0x0;
    }
    t0 = nlArcSin(f4);
    return (((-t0) + 0x4000) & 0xFFFF);
}

int nlLineSendVertex(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    t0 = *(int *)((a6 + 0x0));
    t1 = 0x0;
    t2 = a5;
    t3 = a4;
    do {
        if (t1 == 3) {
            *(unsigned int *)((t3 + 0x0)) = 0xF0000000;
        } else {
            *(unsigned int *)((t3 + 0x0)) = 0xE0000000;
        }
        t4 = *(int *)((t2 + 0x0));
        t2 = (t2 + 0x4);
        t3 = (t3 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = t4;
        t3 = (t3 + 0x4);
        t5 = *(int *)((t2 + 0x0));
        t2 = (t2 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = t5;
        t3 = (t3 + 0x4);
        t6 = *(int *)((t2 + 0x0));
        t2 = (t2 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = t6;
        t3 = (t3 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = t0;
        t3 = (t3 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = 0x0;
        t3 = (t3 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = t0;
        t3 = (t3 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = 0x0;
        t7 = prefetch(t3);
        t1 = (t1 + 0x1);
        t3 = (t3 + 0x4);
    } while ((int)t1 < (int)0x4);
    return t7;
}

void nlMvCalcEdgeA(int a4, int a5)
{
    float u2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;
    float u15;
    float u16;
    float u18;

    t8 = (((struct o0_int *)0xC2B7658)->v);
    t6 = (((struct o8_int *)0xC2B7658)->v);
    u2 = *(float *)0xC2B7BDC;
    t7 = (((struct o4_int *)0xC2B7658)->v);
    if ((int)a5 > 0) {
        t4 = a4;
        t5 = 0x0;
        do {
            nlCalcPoint(t4, t8);
            u10 = *(float *)((t8 + 0x0));
            u11 = (((struct o0_float *)0xC2B7698)->v);
            *(float *)((t7 + 0x0)) = (u10 + u11);
            u12 = *(float *)((t8 + 0x4));
            u13 = (((struct o4_float *)0xC2B7698)->v);
            *(float *)((t7 + 0x4)) = (u12 + u13);
            u14 = *(float *)((t8 + 0x8));
            u15 = (((struct o8_float *)0xC2B7698)->v);
            *(float *)((t7 + 0x8)) = (u14 + u15);
            u16 = *(float *)((t8 + 0x8));
            if (u2 > u16) {
                *(float *)((t8 + 0xC)) = -1.0f;
            } else {
                *(float *)((t8 + 0xC)) = (1.0f / u16);
            }
            u18 = *(float *)((t7 + 0x8));
            if (u2 > u18) {
                *(float *)((t7 + 0xC)) = -1.0f;
            } else {
                *(float *)((t7 + 0xC)) = (1.0f / u18);
            }
            nlMvClipEdge(t8, t7, t6);
            t5 = (t5 + 0x1);
            t8 = (t8 + 0x10);
            t6 = (t6 + 0x10);
            t4 = (t4 + 0xC);
            t7 = (t7 + 0x10);
        } while ((int)t5 < (int)a5);
    }
}

void nlMvCalcEdgeB(int a4, int a5, int a6)
{
    float u1;
    float u2;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    float u14;
    float u15;
    float u16;
    float u17;
    float u18;
    float u19;
    float u20;
    float u22;

    t9 = (((struct o0_int *)0xC2B7658)->v);
    u1 = *(float *)((a6 + 0x14));
    u2 = *(float *)0xC2B7BDC;
    t7 = (((struct o8_int *)0xC2B7658)->v);
    t8 = (((struct o4_int *)0xC2B7658)->v);
    if ((int)a5 > 0) {
        t5 = a4;
        t6 = 0x0;
        do {
            nlSubVector3op(0xC2B7698, t5, 0xC2B7688);
            nlScaleUnitVector(0xC2B7698, 0xC2B7698, u1);
            nlCalcVector(0xC2B7698, 0xC2B7698);
            nlCalcPoint(t5, t9);
            u14 = *(float *)((t9 + 0x0));
            u15 = (((struct o0_float *)0xC2B7698)->v);
            *(float *)((t8 + 0x0)) = (u14 + u15);
            u16 = *(float *)((t9 + 0x4));
            u17 = (((struct o4_float *)0xC2B7698)->v);
            *(float *)((t8 + 0x4)) = (u16 + u17);
            u18 = *(float *)((t9 + 0x8));
            u19 = (((struct o8_float *)0xC2B7698)->v);
            *(float *)((t8 + 0x8)) = (u18 + u19);
            u20 = *(float *)((t9 + 0x8));
            if (u2 > u20) {
                *(float *)((t9 + 0xC)) = -1.0f;
            } else {
                *(float *)((t9 + 0xC)) = (1.0f / u20);
            }
            u22 = *(float *)((t8 + 0x8));
            if (u2 > u22) {
                *(float *)((t8 + 0xC)) = -1.0f;
            } else {
                *(float *)((t8 + 0xC)) = (1.0f / u22);
            }
            nlMvClipEdge(t9, t8, t7);
            t6 = (t6 + 0x1);
            t9 = (t9 + 0x10);
            t7 = (t7 + 0x10);
            t5 = (t5 + 0xC);
            t8 = (t8 + 0x10);
        } while ((int)t6 < (int)a5);
    }
}

int nlInitSprite(int a4, int a5, int a6)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;

    (((struct o0_uint *)0xC2B76B4)->v) = 0xFFFFFFFF;
    nlSpriteSetImaginaryScreenSize(640.0f, 480.0f);
    (((struct o8_uint *)0xC2B76B4)->v) = a6;
    (((struct oC_uint *)0xC2B76B4)->v) = a5;
    (((struct o4_uint *)0xC2B76B4)->v) = a4;
    (((struct o10_uint *)0xC2B76B4)->v) = ((((a6 << 1) + a4) + 0x3) & 0xFFFFFFFC);
    t1 = (int)((int)(a5 + 0x1F) / (int)0x20);
    (((struct o14_uint *)0xC2B76B4)->v) = ((((t1 << 2) + ((((a6 << 1) + a4) + 0x3) & 0xFFFFFFFC)) + 0x3) & 0xFFFFFFFC);
    if ((int)a6 > 0) {
        t2 = 0x0;
        t3 = 0x0;
        do {
            t4 = (((struct o4_int *)0xC2B76B4)->v);
            t2 = (t2 + 0x1);
            *(unsigned short *)((t3 + t4)) = 0xFFFFFFFF;
            t3 = (t3 + 0x2);
        } while ((int)t2 < (int)a6);
    }
    t8 = 0x0;
    for (;;) {
        t9 = (((struct oC_int *)0xC2B76B4)->v);
        t10 = (int)((int)(t9 + 0x1F) / (int)0x20);
        if ((int)t8 >= (int)t10) break;
        t11 = (((struct o10_int *)0xC2B76B4)->v);
        t12 = (t8 << 2);
        t8 = (t8 + 0x1);
        *(unsigned int *)((t11 + t12)) = 0x0;
    }
    return t10;
}

int nlsndPackLoadBG(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t8;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int stk[6];

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    t0 = *(int *)(((int)stk + 4));
    t1 = nlsndCheckPackLoadError(a4, t0);
    t8 = t1;
    if (t1 == 0) {
        t2 = *(int *)((a4 + 0x8));
        t3 = *(int *)((a4 + 0x4));
        t4 = *(int *)(((int)stk + 4));
        t5 = nlsndPackLoadInit(t4, t3, t2, ((int)stk + 0));
        *(unsigned int *)0xC2B7710 = t5;
        *(unsigned int *)0xC2B770C = a4;
        *(unsigned int *)0xC2B76FC = 0x1;
        t6 = *(int *)(((int)stk + 8));
        *(unsigned int *)0xC2B7700 = t6;
        *(unsigned int *)0xC2B7704 = t2;
        t7 = *(int *)(((int)stk + 0));
        *(unsigned int *)0xC2B7708 = t7;
        t8 = 0x0;
    }
    return t8;
}

int nlDispStripLoadTexture(int a4, int a5)
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
    int t13;
    int t15;
    int t16;

    t0 = *(int *)0xC2AEC84;
    t1 = *(int *)(((t0 + ((a4 << 2) << 1)) + 0x0));
    if (t1 == 0) {
        t2 = *(int *)0xC2AEC84;
        t3 = nlCommonTextureGetNextTextureIndex();
        *(unsigned int *)((((t2 + ((a4 << 2) << 1)) + 0x4) + 0x0)) = t3;
    }
    t4 = *(int *)0xC2AEC84;
    t5 = *(int *)(((t4 + ((a4 << 2) << 1)) + 0x0));
    *(unsigned int *)(((t4 + ((a4 << 2) << 1)) + 0x0)) = (t5 + 0x1);
    t6 = *(int *)0xC2AEC84;
    t7 = *(int *)(((t6 + ((a4 << 2) << 1)) + 0x4));
    t8 = *(int *)0xC2B29C0;
    t9 = *(int *)((((t7 * 0x3C) + t8) + 0x2C));
    if (t9 == 0) {
        t10 = *(int *)((a5 + 0x8));
        t11 = nlLoadTextureMem(a5, t7, t10);
        if (t11 != 0) {
            *(unsigned int *)0xC2B793C = 0x1;
            t16 = 0x1;
        } else {
            nlCreateTextureParam(t7);
            *(unsigned int *)((((t7 * 0x3C) + t8) + 0x38)) = t7;
            t13 = *(int *)((((t7 * 0x3C) + t8) + 0x2C));
            *(unsigned int *)((((t7 * 0x3C) + t8) + 0x2C)) = (t13 + 0x1);
            t16 = 0x0;
        }
    } else {
        t15 = *(int *)((((t7 * 0x3C) + t8) + 0x2C));
        *(unsigned int *)((((t7 * 0x3C) + t8) + 0x2C)) = (t15 + 0x1);
        t16 = 0x0;
    }
    return t16;
}


