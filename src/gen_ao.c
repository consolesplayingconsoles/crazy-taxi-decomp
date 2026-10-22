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
int FUN_0c02e3c0(void);
int FUN_0c031036(int, int, int, int);
int FUN_0c031048(void);
int FUN_0c0397e8(void);
int FUN_0c0399b8(int);
int FUN_0c039ad4(int, float);
int FUN_0c039c1c(void);
int FUN_0c075930(float);
int nlSqrt(int, int);
int FUN_0c077210(int, int);
int FUN_0c07cb70(int, int, int);
int FUN_0c07e8a0(int, int);
int FUN_0c07e960(int, int, int, int);
int FUN_0c07f5c0(void);
int FUN_0c08160a(int);
int FUN_0c085dfc(int, int, int);
int FUN_0c15c3c8(int, int, int, int);
int FUN_0c16884a(int);
int FUN_0c168862(int);
int FUN_0c1697ee(int, int);
int FUN_0c16af38(void);
int FUN_0c170834(void);
int FUN_0c17088c(int, int, int);
int FUN_0c1708d0(int, int);
int FUN_0c173328(int, int, int, int, int, int, int);
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

void padToAnalog(void)
{
    int t0;
    float u1;
    int t2;
    float u3;
    int t4;
    float u5;
    float u9;
    float u10;
    int t11;
    float u12;
    float u13;
    float u14;
    float u15;
    int t16;
    float u17;
    float u18;
    float u19;
    float u20;

    t0 = *(signed char *)0xC1EE264;
    u1 = *(float *)0xC1EE31C;
    if (!(u1 > (float)(unsigned char)t0)) {
        t2 = *(signed char *)0xC1EE264;
        u3 = *(float *)0xC1EE32C;
        *(float *)0xC1EE2E8 = (((float)(unsigned char)t2 - u1) / u3);
        *(float *)0xC1EE2F4 = (((float)(unsigned char)t2 - u1) / u3);
    } else {
        t4 = *(signed char *)0xC1EE264;
        u5 = *(float *)0xC1EE328;
        *(float *)0xC1EE2E8 = (-((u1 - (float)(unsigned char)t4) / u5));
        *(float *)0xC1EE2F4 = (-((u1 - (float)(unsigned char)t4) / u5));
    }
    u9 = *(float *)0xC1EE2F4;
    if ((-1.0f) > u9) {
        *(float *)0xC1EE2F4 = (-1.0f);
    }
    u10 = *(float *)0xC1EE2F4;
    if (u10 > 1.0f) {
        *(float *)0xC1EE2F4 = 1.0f;
    }
    t11 = *(signed char *)0xC1EE265;
    u12 = *(float *)0xC1EE300;
    u13 = *(float *)0xC1EE308;
    *(float *)0xC1EE2EC = (((float)(unsigned char)t11 - u12) / u13);
    *(float *)0xC1EE2F8 = (((float)(unsigned char)t11 - u12) / u13);
    u14 = *(float *)0xC1EE2F8;
    if (0.0f > u14) {
        *(float *)0xC1EE2F8 = 0.0f;
    }
    u15 = *(float *)0xC1EE2F8;
    if (u15 > 1.0f) {
        *(float *)0xC1EE2F8 = 1.0f;
    }
    t16 = *(signed char *)0xC1EE266;
    u17 = *(float *)0xC1EE30C;
    u18 = *(float *)0xC1EE314;
    *(float *)0xC1EE2F0 = (((float)(unsigned char)t16 - u17) / u18);
    *(float *)0xC1EE2FC = (((float)(unsigned char)t16 - u17) / u18);
    u19 = *(float *)0xC1EE2FC;
    if (0.0f > u19) {
        *(float *)0xC1EE2FC = 0.0f;
    }
    u20 = *(float *)0xC1EE2FC;
    if (u20 > 1.0f) {
        *(float *)0xC1EE2FC = 1.0f;
    }
}

void FUN_0c039378(float f4, float f5, float f6)
{
    float u1;
    float u0;
    float u3;
    float u2;
    float u5;
    float u4;
    float u6;
    float u7;
    float u8;

    u1 = 0.0f;
    if (!(0.0f > f4)) {
        u0 = f4;
        if (f4 > 1.0f) {
            u0 = 1.0f;
        }
        u1 = u0;
    }
    *(float *)0xC0EE908 = u1;
    u3 = 0.0f;
    if (!(0.0f > f5)) {
        u2 = f5;
        if (f5 > 1.0f) {
            u2 = 1.0f;
        }
        u3 = u2;
    }
    *(float *)0xC0EE90C = u3;
    u5 = 0.0f;
    if (!(0.0f > f6)) {
        u4 = f6;
        if (f6 > 1.0f) {
            u4 = 1.0f;
        }
        u5 = u4;
    }
    *(float *)0xC0EE910 = u5;
    u6 = *(float *)0xC0EE908;
    u7 = *(float *)0xC0EE90C;
    u8 = *(float *)0xC0EE910;
    *(unsigned int *)0xC0EE914 = ((((int)(u6 * 255.0f) << 16) | ((int)(u7 * 255.0f) << 8)) | (int)(u8 * 255.0f));
}

int gameState15(void)
{
    int t0;
    int t3;
    int t4;
    int t7;
    int t9;
    int t10;

    t0 = *(int *)0xC1EE340;
    if ((int)t0 >= (int)0x1) {
        if ((int)t0 > (int)0x14) {
            *(unsigned int *)0xC1EE340 = 0x1;
        }
    } else {
        *(unsigned int *)0xC1EE340 = 0x1;
    }
    FUN_0c031036(0x3F3F3F, 0x3F3F3F, 0x3F3F3F, 0x3F3F3F);
    FUN_0c0397e8();
    t3 = *(int *)0xC2864A4;
    t4 = *(int *)0xC2864A0;
    FUN_0c039ad4(t4, ((float)t3 / 16.0f));
    FUN_0c039c1c();
    t7 = *(int *)0xC1EE340;
    FUN_0c0399b8(t7);
    t9 = *(int *)0xC2864CC;
    t10 = ((int (*)(void))(t9))();
    FUN_0c031048();
    return FUN_0c02e3c0();
}


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
    *(unsigned int *)0xC2AEC84 = ((((a5 + 0x1) * 0x3C) + a4) + 0x8);
    *(unsigned int *)0xC2AEC88 = ((((a6 + 0x1) << 2) << 1) + ((((a5 + 0x1) * 0x3C) + a4) + 0x8));
    t1 = ((a6 + 0x1) + 0x1F);
    if ((int)((a6 + 0x1) + 0x1F) < 0) {
        t1 = (((a6 + 0x1) + 0x1F) + 0x1F);
    }
    *(unsigned int *)0xC14A63C = ((int)t1 >> 5);
    *(unsigned int *)0xC14A638 = ((a6 + 0x1) - 1);
    t2 = ((int)t1 >> 5);
    t3 = 0xFFFFFFF8;
    t4 = 0xFFFFFFFF;
    for (;;) {
        t5 = *(int *)0xC14A638;
        if ((int)t4 >= (int)t5) break;
        t6 = *(int *)0xC2AEC84;
        t4 = (t4 + 0x1);
        *(unsigned int *)(((t6 + t3) + 0x0)) = 0x0;
        t7 = *(int *)0xC2AEC84;
        t2 = t7;
        t2 = (t2 + t3);
        t3 = (t3 + 0x8);
        *(unsigned int *)((t2 + 0x4)) = 0xFFFFFFFF;
    }
    t9 = 0xC14A638;
    t10 = 0x0;
    t11 = 0x0;
    for (;;) {
        t12 = *(int *)0xC14A63C;
        if ((int)t11 >= (int)t12) break;
        t13 = *(int *)0xC2AEC88;
        t9 = t13;
        t11 = (t11 + 0x1);
        *(unsigned int *)((t10 + t9)) = 0x0;
        t10 = (t10 + 0x4);
    }
    *(unsigned int *)0xC2B3184 = 0x0;
    return t9;
}

void FUN_0c074ac0(int a4, int a5, int a6, int a7, int a8)
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

int FUN_0c075600(int a4, int a5, int a6, float f4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int stk[30];

    *(unsigned int *)0xC14A654 = a4;
    *(unsigned int *)0xC14A658 = a5;
    *(unsigned int *)0xC14A65C = a6;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = 0xE0000000;
    *(float *)(((((int)stk + 4) + 0xC) + 0x4)) = 0.0f;
    *(float *)(((((int)stk + 4) + 0xC) + 0x8)) = 0.0f;
    *(float *)(((((int)stk + 4) + 0xC) + 0xC)) = (1.0f / f4);
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x10)) = a4;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x18)) = a4;
    *(unsigned int *)((((((int)stk + 4) + 0xC) + 0x20) + 0x0)) = 0xE0000000;
    t0 = *(short *)0xC2B3190;
    t1 = *(short *)0xC2B3196;
    t2 = (short)t0;
    if (t1 != 0) {
        t2 = ((short)t0 << 1);
    }
    *(float *)((((((int)stk + 4) + 0xC) + 0x20) + 0x4)) = (float)t2;
    *(float *)((((((int)stk + 4) + 0xC) + 0x20) + 0x8)) = 0.0f;
    *(float *)((((((int)stk + 4) + 0xC) + 0x20) + 0xC)) = (1.0f / f4);
    *(unsigned int *)((((((int)stk + 4) + 0xC) + 0x20) + 0x10)) = a5;
    *(unsigned int *)((((((int)stk + 4) + 0xC) + 0x20) + 0x18)) = a5;
    *(unsigned int *)((((((int)stk + 4) + 0xC) + 0x40) + 0x0)) = 0xF0000000;
    *(float *)((((((int)stk + 4) + 0xC) + 0x40) + 0x4)) = 0.0f;
    t3 = *(short *)0xC2B3192;
    *(float *)((((((int)stk + 4) + 0xC) + 0x40) + 0x8)) = (float)t3;
    *(float *)((((((int)stk + 4) + 0xC) + 0x40) + 0xC)) = (1.0f / f4);
    *(unsigned int *)((((((int)stk + 4) + 0xC) + 0x40) + 0x10)) = a6;
    *(unsigned int *)((((((int)stk + 4) + 0xC) + 0x40) + 0x18)) = a6;
    *(unsigned int *)((((int)stk + 4) + 0x0)) = (((int)stk + 4) + 0xC);
    *(unsigned int *)((((int)stk + 4) + 0x4)) = ((((int)stk + 4) + 0xC) + 0x20);
    *(unsigned int *)((((int)stk + 4) + 0x8)) = ((((int)stk + 4) + 0xC) + 0x40);
    t4 = kmSetBackGroundPlane(((int)stk + 4), 0x0);
    return t4;
}

int FUN_0c075860(float f4)
{
    int t0;

    if ((f4 < 0.0f ? -f4 : f4) > 1.0f) {
        return 0x0;
    }
    t0 = FUN_0c075930(f4);
    return (((-t0) + 0x4000) & 0xFFFF);
}

int nlExp(float f4)
{
    float u0;
    int t1;
    float u2;
    int t3;
    float u4;

    u0 = -0.5f;
    if (!(0.0f > f4)) {
        u0 = 0.5f;
    }
    t1 = 0xA;
    u2 = (((f4 - ((float)(int)(u0 + (f4 / 0.693147123f)) * 0.693147123f)) * (f4 - ((float)(int)(u0 + (f4 / 0.693147123f)) * 0.693147123f))) / 14.0f);
    do {
        t3 = t1;
        t1 = (t1 - 4);
        u4 = ((float)t3 + u2);
        u2 = ((f4 - ((float)(int)(u0 + (f4 / 0.693147123f)) * 0.693147123f)) * (f4 - ((float)(int)(u0 + (f4 / 0.693147123f)) * 0.693147123f)));
        u2 = (u2 / u4);
    } while ((int)t1 >= (int)0x6);
    return nlLdexpf(((((f4 - ((float)(int)(u0 + (f4 / 0.693147123f)) * 0.693147123f)) + u2) + (1.0f + 1.0f)) / ((u2 - (f4 - ((float)(int)(u0 + (f4 / 0.693147123f)) * 0.693147123f))) + (1.0f + 1.0f))));
}

int FUN_0c07c150(int a4, int a5, int a6)
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
        t7 = FUN_0c08160a(t3);
        t1 = (t1 + 0x1);
        t3 = (t3 + 0x4);
    } while ((int)t1 < (int)0x4);
    return t7;
}

void FUN_0c07c9b0(int a4, int a5)
{
    int t0;
    int t1;
    float u2;
    int t3;
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

    t0 = *(int *)0xC2B7658;
    t1 = *(int *)0xC2B7660;
    u2 = *(float *)0xC2B7BDC;
    t3 = *(int *)0xC2B765C;
    if ((int)a5 > 0) {
        t4 = a4;
        t5 = 0x0;
        t6 = t1;
        t7 = t3;
        t8 = t0;
        do {
            nlSqrt(t4, t8);
            u10 = *(float *)((t8 + 0x0));
            u11 = *(float *)0xC2B7698;
            *(float *)((t7 + 0x0)) = (u10 + u11);
            u12 = *(float *)((t8 + 0x4));
            u13 = *(float *)0xC2B769C;
            *(float *)((t7 + 0x4)) = (u12 + u13);
            u14 = *(float *)((t8 + 0x8));
            u15 = *(float *)0xC2B76A0;
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
            FUN_0c07cb70(t8, t7, t6);
            t5 = (t5 + 0x1);
            t8 = (t8 + 0x10);
            t6 = (t6 + 0x10);
            t4 = (t4 + 0xC);
            t7 = (t7 + 0x10);
        } while ((int)t5 < (int)a5);
    }
}

void FUN_0c07ca80(int a4, int a5, int a6)
{
    int t0;
    float u1;
    float u2;
    int t3;
    int t4;
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

    t0 = *(int *)0xC2B7658;
    u1 = *(float *)((a6 + 0x14));
    u2 = *(float *)0xC2B7BDC;
    t3 = *(int *)0xC2B7660;
    t4 = *(int *)0xC2B765C;
    if ((int)a5 > 0) {
        t5 = a4;
        t6 = 0x0;
        t7 = t3;
        t8 = t4;
        t9 = t0;
        do {
            nlSubVector3op(0xC2B7698, t5, 0xC2B7688);
            nlScaleUnitVector(0xC2B7698, 0xC2B7698, u1);
            FUN_0c077210(0xC2B7698, 0xC2B7698);
            nlSqrt(t5, t9);
            u14 = *(float *)((t9 + 0x0));
            u15 = *(float *)0xC2B7698;
            *(float *)((t8 + 0x0)) = (u14 + u15);
            u16 = *(float *)((t9 + 0x4));
            u17 = *(float *)0xC2B769C;
            *(float *)((t8 + 0x4)) = (u16 + u17);
            u18 = *(float *)((t9 + 0x8));
            u19 = *(float *)0xC2B76A0;
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
            FUN_0c07cb70(t9, t8, t7);
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

    *(unsigned int *)0xC2B76B4 = 0xFFFFFFFF;
    nlSpriteSetImaginaryScreenSize(640.0f, 480.0f);
    *(unsigned int *)0xC2B76BC = a6;
    *(unsigned int *)0xC2B76C0 = a5;
    *(unsigned int *)0xC2B76B8 = a4;
    *(unsigned int *)0xC2B76C4 = ((((a6 << 1) + a4) + 0x3) & 0xFFFFFFFC);
    t1 = (int)((int)(a5 + 0x1F) / (int)0x20);
    *(unsigned int *)0xC2B76C8 = ((((t1 << 2) + ((((a6 << 1) + a4) + 0x3) & 0xFFFFFFFC)) + 0x3) & 0xFFFFFFFC);
    if ((int)a6 > 0) {
        t2 = 0x0;
        t3 = 0x0;
        do {
            t4 = *(int *)0xC2B76B8;
            t2 = (t2 + 0x1);
            *(unsigned short *)((t3 + t4)) = 0xFFFFFFFF;
            t3 = (t3 + 0x2);
        } while ((int)t2 < (int)a6);
    }
    t8 = 0x0;
    for (;;) {
        t9 = *(int *)0xC2B76C0;
        t10 = (int)((int)(t9 + 0x1F) / (int)0x20);
        if ((int)t8 >= (int)t10) break;
        t11 = *(int *)0xC2B76C4;
        t12 = (t8 << 2);
        t8 = (t8 + 0x1);
        *(unsigned int *)((t11 + t12)) = 0x0;
    }
    return t10;
}

void FUN_0c07e820(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;

    *(unsigned int *)0xA0800090 = (a4 + 0x5F800000);
    *(unsigned int *)0xA0800094 = (a5 + 0x5F800000);
    *(unsigned int *)0xA0800098 = a6;
    t0 = 0x0;
    for (;;) {
        t1 = *(int *)0xA0800098;
        if (t1 == 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x400000) break;
            continue;
        }
        t2 = 0x0;
        for (;;) {
            t3 = FUN_0c07f5c0();
            if (t3 != 0) {
                t2 = (t2 + 0x1);
                if ((int)t2 >= (int)0x400000) break;
                continue;
            }
            return;
        }
        return;
    }
}

int FUN_0c07ede0(int a4, int a5, int a6)
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
    int stk[7];

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    t0 = *(int *)(((int)stk + 8));
    t1 = FUN_0c07e8a0(a4, t0);
    t8 = t1;
    if (t1 == 0) {
        t2 = *(int *)((a4 + 0x8));
        t3 = *(int *)((a4 + 0x4));
        t4 = *(int *)(((int)stk + 8));
        t5 = FUN_0c07e960(t4, t3, t2, ((int)stk + 4));
        *(unsigned int *)0xC2B7710 = t5;
        *(unsigned int *)0xC2B770C = a4;
        *(unsigned int *)0xC2B76FC = 0x1;
        t6 = *(int *)(((int)stk + 12));
        *(unsigned int *)0xC2B7700 = t6;
        *(unsigned int *)0xC2B7704 = t2;
        t7 = *(int *)(((int)stk + 4));
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
    int t14;

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
            t14 = 0x1;
        } else {
            nlCreateTextureParam(t7);
            *(unsigned int *)((((t7 * 0x3C) + t8) + 0x38)) = t7;
            t13 = *(int *)((((t7 * 0x3C) + t8) + 0x2C));
            *(unsigned int *)((((t7 * 0x3C) + t8) + 0x2C)) = (t13 + 0x1);
            t14 = 0x0;
        }
        t16 = t14;
    } else {
        t15 = *(int *)((((t7 * 0x3C) + t8) + 0x2C));
        *(unsigned int *)((((t7 * 0x3C) + t8) + 0x2C)) = (t15 + 0x1);
        t16 = 0x0;
    }
    return t16;
}

int pdVibStart(int a4, int a5, int a6)
{
    int t0;
    int t29;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t10;
    int t7;
    int t8;
    int t14;
    int t12;
    int t16;
    int t17;
    int t20;
    int t18;
    int t26;
    int t27;
    int t28;
    int stk[26];

    *(unsigned int *)(((int)stk + 4)) = a4;
    t0 = pdVibIsReady();
    t29 = 0xFFFFFFFE;
    if (t0 != 0) {
        if ((unsigned int)0x0 < (unsigned int)a6) {
            t1 = (((int)stk + 4) + 0x4);
            t2 = 0x0;
            t3 = a5;
            do {
                t4 = *(signed char *)((t3 + 0x0));
                t5 = *(signed char *)((t3 + 0x1));
                *(unsigned char *)((t1 + 0x0)) = ((((unsigned char)t4 << 2) << 2) | (0x1 & t5));
                t6 = *(signed char *)((t3 + 0x2));
                t1 = (t1 + 0x1);
                t10 = t6;
                if (((unsigned char)t5 & 0x88) == 0) {
                    t7 = t6;
                    if ((signed char)t6 == 1) {
                        t7 = 0x2;
                    }
                    t8 = t7;
                    if ((signed char)t7 == -1) {
                        t8 = 0xFFFFFFFE;
                    }
                    t10 = t8;
                }
                t14 = (0x70 & (((signed char)t10 << 2) << 2));
                if ((int)(signed char)t10 <= 0) {
                    t12 = 0x0;
                    if ((int)(signed char)t10 < 0) {
                        t12 = (0x7 & (-(signed char)t10));
                    }
                    t14 = t12;
                }
                *(unsigned char *)((t1 + 0x0)) = (t14 | (0x88 & t5));
                t1 = (t1 + 0x1);
                t16 = *(signed char *)((t3 + 0x3));
                *(unsigned char *)((t1 + 0x0)) = t16;
                t1 = (t1 + 0x1);
                t17 = t1;
                t1 = (t1 + 0x1);
                t20 = 0x0;
                if (((unsigned char)t5 & 0x88) != 0) {
                    t18 = *(signed char *)((t3 + 0x4));
                    t20 = (unsigned char)t18;
                }
                t2 = (t2 + 0x1);
                *(unsigned char *)((t17 + 0x0)) = t20;
                t3 = (t3 + 0x8);
            } while ((unsigned int)t2 < (unsigned int)a6);
        }
        t26 = *(int *)(((int)stk + 4));
        t27 = kdSetSetCondition();
        t28 = 0x0;
        if ((int)t27 < 0) {
            t28 = 0xFFFFFFFF;
        }
        t29 = t28;
    }
    return t29;
}

int ADXT_Destroy(int a4)
{
    int t1;
    int t2;
    int t5;
    int t6;
    int t9;
    int t10;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t41;
    int t42;

    if (a4 != 0) {
        ADXT_Stop();
        t1 = *(int *)((a4 + 0xC));
        if (t1 != 0) {
            t2 = *(int *)((a4 + 0xC));
            ADXRNA_Destroy();
        }
        t5 = *(int *)((a4 + 0x4));
        if (t5 != 0) {
            t6 = *(int *)((a4 + 0x4));
            ADXSJD_Destroy(t6);
        }
        t9 = *(int *)((a4 + 0x8));
        if (t9 != 0) {
            t10 = *(int *)((a4 + 0x8));
            ADXSTM_Close(t10);
        }
        ADXCRS_Lock();
        t14 = *(int *)((a4 + 0x10));
        if (t14 != 0) {
            t15 = *(int *)((a4 + 0x10));
            t16 = *(int *)((t15 + 0x0));
            t17 = *(int *)((t16 + 0xC));
            t18 = ((int (*)(int))(t17))(t15);
        }
        t20 = 0x0;
        for (;;) {
            t21 = *(signed char *)((a4 + 0x3));
            if ((int)t20 >= (int)t21) break;
            t22 = *(int *)((((a4 + 0x18) + (t20 << 2)) + 0x0));
            if (t22 != 0) {
                t23 = *(int *)((((a4 + 0x18) + (t20 << 2)) + 0x0));
                t24 = *(int *)((t23 + 0x0));
                t25 = *(int *)((t24 + 0xC));
                t26 = ((int (*)(int))(t25))(t23);
            }
            t28 = *(int *)((((a4 + 0x78) + (t20 << 2)) + 0x0));
            if (t28 != 0) {
                t29 = *(int *)((((a4 + 0x78) + (t20 << 2)) + 0x0));
                t30 = *(int *)((t29 + 0x0));
                t31 = *(int *)((t30 + 0xC));
                t32 = ((int (*)(int))(t31))(t29);
            }
            t34 = *(int *)((((0x80 + a4) + (t20 << 2)) + 0x0));
            if (t34 != 0) {
                t35 = *(int *)((((0x80 + a4) + (t20 << 2)) + 0x0));
                t36 = *(int *)((t35 + 0x0));
                t37 = *(int *)((t36 + 0xC));
                t38 = ((int (*)(int))(t37))(t35);
            }
            t20 = (t20 + 0x1);
        }
        t41 = *(int *)((a4 + 0x74));
        if (t41 != 0) {
            t42 = *(int *)((a4 + 0x74));
            ADXAMP_Destroy(t42);
        }
        memset(a4, 0x0, 0x8C);
        *(unsigned char *)((a4 + 0x0)) = 0x0;
        return ADXCRS_Unlock();
    }
    return 0;
}

int ADXF_ReadNw32(int a4, int a5, int a6)
{
    int t5;
    int t25;
    int t6;
    int t8;
    int t22;
    int t9;
    int t10;
    int t11;
    int t15;
    int t16;
    int t17;
    int t18;
    int t33;
    int t31;
    int t29;
    int t27;
    int t23;

    adxf_SetCmdHstry(0x4, 0x0, a4, a5, a6);
    if (a4 == 0) {
        ADXERR_CallErrFunc();
        t33 = 0xFFFFFFFD;
    } else {
        if ((int)a5 < 0) {
            ADXERR_CallErrFunc();
            t31 = 0xFFFFFFFD;
        } else {
            if (a6 == 0) {
                ADXERR_CallErrFunc();
                t29 = 0xFFFFFFFD;
            } else {
                if ((a6 & 0x1F) != 0) {
                    ADXERR_CallErrFunc();
                    t27 = 0xFFFFFFFD;
                } else {
                    t5 = *(signed char *)((a4 + 0x1));
                    t25 = 0x0;
                    if (t5 != 2) {
                        t6 = *(int *)((a4 + 0x8));
                        if (t6 != 0) {
                            ADXERR_CallErrFunc();
                            t23 = 0xFFFFFFFF;
                        } else {
                            t8 = SJRBF_Create();
                            t22 = 0xFFFFFFFE;
                            if (t8 != 0) {
                                *(unsigned int *)((a4 + 0x28)) = a6;
                                *(unsigned int *)((a4 + 0x2C)) = (((a5 << 8) << 2) << 1);
                                t9 = *(int *)0xC2BA338;
                                if (t9 == 1) {
                                    t10 = *(int *)((a4 + 0x2C));
                                    t11 = *(int *)((a4 + 0x28));
                                    FUN_0c1697ee(t11, t10);
                                }
                                ADXCRS_Lock();
                                t15 = adxf_read_sj32(a4, a5, t8);
                                if ((int)t15 <= 0) {
                                    t16 = *(int *)((t8 + 0x0));
                                    t17 = *(int *)((t16 + 0xC));
                                    t18 = ((int (*)(int))(t17))(t8);
                                } else {
                                    *(unsigned int *)((a4 + 0x8)) = t8;
                                }
                                *(unsigned char *)((a4 + 0x2)) = 0x0;
                                ADXCRS_Unlock();
                                adxf_SetCmdHstry(0x4, 0x1, a4, a5, a6);
                                t22 = t15;
                            }
                            t23 = t22;
                        }
                        t25 = t23;
                    }
                    t27 = t25;
                }
                t29 = t27;
            }
            t31 = t29;
        }
        t33 = t31;
    }
    return t33;
}

void kmGetCurrentScanline(int a4)
{
    int t0;
    int t3;
    int t4;
    int t1;
    int t5;
    int t6;
    int t7;
    int t23;
    int t25;
    float u26;
    int t8;
    int t19;
    int t21;
    float u22;
    int t9;
    int t16;
    int t17;
    float u18;
    int t13;
    int t14;
    float u15;
    int t10;
    int t11;
    float u12;
    int t27;
    int t38;
    int t40;
    float u41;
    int t28;
    int t35;
    int t36;
    float u37;
    int t32;
    int t33;
    float u34;
    int t29;
    int t30;
    float u31;
    int t46;
    int t47;
    int t57;
    int t48;
    int t53;
    int t51;
    int t49;
    int t59;
    int t42;
    int t44;
    float u45;

    t0 = *(int *)0xC2EA684;
    t3 = a4;
    t4 = 0x0;
    if ((t0 & 2) != 0) {
        t1 = kmiReadRegister(0x10C);
        t3 = t1;
        t4 = (0x3FF & t1);
    }
    t5 = *(int *)0xC2EA6D4;
    t6 = *(int *)0xC2EA6DC;
    t7 = *(int *)0xC2EA6A0;
    if ((t7 & 0x1) == 1) {
        t23 = 0x1E0;
        t25 = (t6 + t5);
        u26 = 1.0f;
        if (0x1 == 0) {
            t8 = *(int *)0xC2EA6A0;
            t19 = 0xF0;
            t21 = (t6 + t5);
            u22 = 1.0f;
            if ((t8 & 0x1) != 1) {
                t9 = *(int *)0xC2EA6A0;
                t16 = 0xF0;
                t17 = (t6 + t5);
                u18 = 1.0f;
                if ((t9 & 44) != 0) {
                    t13 = 0xF0;
                    t14 = (t6 + t5);
                    u15 = 1.0f;
                    if (0x1 != 0) {
                        t10 = *(int *)0xC2EA6A0;
                        t11 = 0xF0;
                        u12 = 0.5f;
                        if ((t10 & 32) != 0) {
                            t11 = 0x1E0;
                            u12 = 1.0f;
                        }
                        t13 = t11;
                        t14 = ((t6 + t5) + (t6 + t5));
                        u15 = u12;
                    }
                    t16 = t13;
                    t17 = t14;
                    u18 = u15;
                }
                t19 = t16;
                t21 = t17;
                u22 = u18;
            }
            t23 = t19;
            t25 = t21;
            u26 = u22;
        }
        t42 = t23;
        t44 = t25;
        u45 = u26;
    } else {
        t27 = *(int *)0xC2EA6A0;
        t38 = 0xF0;
        t40 = (t6 + t5);
        u41 = 1.0f;
        if ((t27 & 0x1) != 1) {
            t28 = *(int *)0xC2EA6A0;
            t35 = 0xF0;
            t36 = (t6 + t5);
            u37 = 1.0f;
            if ((t28 & 44) != 0) {
                t32 = 0xF0;
                t33 = (t6 + t5);
                u34 = 1.0f;
                if (0x1 != 0) {
                    t29 = *(int *)0xC2EA6A0;
                    t30 = 0xF0;
                    u31 = 0.5f;
                    if ((t29 & 32) != 0) {
                        t30 = 0x1E0;
                        u31 = 1.0f;
                    }
                    t32 = t30;
                    t33 = ((t6 + t5) + (t6 + t5));
                    u34 = u31;
                }
                t35 = t32;
                t36 = t33;
                u37 = u34;
            }
            t38 = t35;
            t40 = t36;
            u41 = u37;
        }
        t42 = t38;
        t44 = t40;
        u45 = u41;
    }
    t46 = *(int *)0xC2EA970;
    t47 = *(int *)0xC2EA6A0;
    t57 = t4;
    if ((t47 & 0x1) != 1) {
        t48 = *(int *)0xC2EA6A0;
        t53 = t4;
        if ((t48 & 44) != 0) {
            t51 = t4;
            if (0x1 != 0) {
                t49 = t4;
                if ((t3 & 0x40000) != 0) {
                    t49 = (t4 + 0x1);
                }
                t51 = t49;
            }
            t53 = t51;
        }
        t57 = t53;
    }
    t59 = ((int)((float)(t57 - t44) * u45) - ((unsigned int)t46 >> 16));
    if ((int)(int)((float)(t57 - t44) * u45) <= (int)t42) {
        t59 = (int)((float)(t57 - t44) * u45);
    }
    *(unsigned int *)((a4 + 0x0)) = t59;
}

void kmfGetInternalSystemMetrics(int a4)
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
    int t11;
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
    int t35;
    int t36;
    int t38;
    int t39;
    int t40;

    t0 = 0x0;
    t1 = 0x4;
    t2 = 0x0;
    t3 = 0x0;
    do {
        t4 = *(int *)((t0 + 0xC2EAB04));
        *(unsigned int *)(((a4 + (((((0x1 - t2) << 1) + (0x1 - t2)) << 2) << 1)) + 0x0)) = t4;
        t5 = *(int *)((t0 + 0xC2EAAF8));
        *(unsigned int *)(((a4 + (((((0x1 - t2) << 1) + (0x1 - t2)) << 2) << 1)) + 0x4)) = t5;
        t6 = *(int *)((t0 + 0xC2EAAF0));
        *(unsigned int *)(((a4 + (((((0x1 - t2) << 1) + (0x1 - t2)) << 2) << 1)) + 0x8)) = t6;
        t7 = *(int *)((t0 + 0xC2EAB08));
        *(unsigned int *)(((a4 + (((((0x1 - t2) << 1) + (0x1 - t2)) << 2) << 1)) + 0xC)) = t7;
        t8 = *(int *)((t0 + 0xC2EAAFC));
        *(unsigned int *)(((a4 + (((((0x1 - t2) << 1) + (0x1 - t2)) << 2) << 1)) + 0x10)) = t8;
        t9 = *(int *)(((0xC2F91CC + t3) + 0x0));
        *(unsigned int *)((((((((0x1 - t2) << 1) + (0x1 - t2)) << 2) << 1) + a4) + 0x14)) = t9;
        t2 = (t2 + 0x1);
        t11 = *(int *)((t3 + 0xC2EA898));
        t3 = (t3 + 0x4);
        *(unsigned int *)((((a4 + 0x38) + t1) + 0x0)) = t11;
        t1 = (t1 - 4);
        t0 = (t0 + 0x20);
    } while ((int)t2 < (int)0x2);
    t13 = *(int *)0xC2EA9C4;
    if (t13 == 0) {
        t14 = *(int *)0xC2EA9DC;
        t15 = *(int *)((((t14 & 0x1) << 2) + 0xC2EA9B4));
        *(unsigned int *)((a4 + 0x30)) = t15;
        t16 = *(int *)0xC2EA9DC;
        t17 = *(int *)(((((-(t16 & 0x1)) + 0x1) << 2) + 0xC2EA9B4));
        *(unsigned int *)((a4 + 0x34)) = t17;
    } else {
        t18 = *(int *)0xC2EA9DC;
        t19 = *(int *)((0xC2EA9B4 + ((t18 & 0x1) << 2)));
        *(unsigned int *)((a4 + 0x34)) = t19;
        t20 = *(int *)0xC2EA9DC;
        t21 = *(int *)(((((-(t20 & 0x1)) + 0x1) << 2) + 0xC2EA9B4));
        *(unsigned int *)((a4 + 0x30)) = t21;
    }
    t25 = *(int *)0xC2EA934;
    *(unsigned int *)((a4 + 0x40)) = t25;
    t26 = *(int *)0xC2EA938;
    *(unsigned int *)((a4 + 0x44)) = t26;
    t27 = *(int *)0xC2F91B0;
    *(unsigned int *)((a4 + 0x48)) = t27;
    t28 = *(int *)0xC2F91B4;
    *(unsigned int *)((a4 + 0x4C)) = t28;
    t29 = *(int *)0xC2F91C4;
    *(unsigned int *)((a4 + 0x50)) = t29;
    t30 = *(int *)0xC2F91C8;
    *(unsigned int *)((a4 + 0x54)) = t30;
    t31 = 0x0;
    t32 = 0x0;
    do {
        t33 = *(int *)((t32 + 0xC2EAA00));
        *(unsigned int *)((((a4 + 0x58) + t31) + 0x0)) = t33;
        t34 = *(int *)((t32 + 0xC2EAA04));
        *(unsigned int *)((((a4 + 0x58) + t31) + 0x14)) = t34;
        t35 = *(int *)((t31 + 0xC2EAB44));
        *(unsigned int *)((((0x80 + a4) + t31) + 0x0)) = t35;
        t36 = *(int *)(((0xC2F91D4 + t31) + 0x0));
        t38 = ((0x94 + a4) + t31);
        t31 = (t31 + 0x4);
        *(unsigned int *)((t38 + 0x0)) = t36;
        t32 = (t32 + 0x10);
    } while ((unsigned int)t31 < (unsigned int)0x14);
    t39 = *(int *)0xC2F91F4;
    *(unsigned int *)((a4 + 0xA8)) = t39;
    t40 = *(int *)0xC2F91EC;
    *(unsigned int *)((a4 + 0xAC)) = t40;
}

int FUN_0c15bcd2(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t44;
    int t1;
    int t41;
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
    int t15;
    int t17;
    int t32;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t25;
    int t26;
    int t38;

    t0 = FUN_0c15c3c8(a4, a6, a7, a8);
    t44 = t0;
    if (t0 == 0) {
        t1 = *(int *)((a4 + 0x0));
        t41 = 0x4;
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
            t15 = kmiTXalloc((t14 * a5), a4);
            if (t15 == 3) {
                kmiDefaultInterruptHandler(0x3);
                t38 = t15;
            } else {
                t17 = *(int *)((a4 + 0x1C));
                kmiFBfree(t17);
                t32 = t15;
                if ((int)a5 > 0) {
                    t19 = t17;
                    t20 = 0x0;
                    for (;;) {
                        *(unsigned int *)(((((((t20 << 2) + t20) << 2) << 1) + a4) + 0x1C)) = t19;
                        t21 = *(int *)(((((((t20 << 2) + t20) << 2) << 1) + a4) + 0x14));
                        t22 = kmiABSalloc(t21, (((((t20 << 2) + t20) << 2) << 1) + a4));
                        t23 = *(int *)(((((((t20 << 2) + t20) << 2) << 1) + a4) + 0x14));
                        t19 = (t19 + (((unsigned int)t23 >> 2) << 2));
                        if (t22 == 3) break;
                        t20 = (t20 + 0x1);
                        if ((int)t20 >= (int)a5) {
                            return t22;
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
                    t32 = t22;
                }
                t38 = t32;
            }
            t41 = t38;
        }
        t44 = t41;
    }
    return t44;
}

int FUN_0c162cc0(int a4)
{
    int t0;
    int t1;
    int t2;
    int t6;
    int t5;
    int t4;
    int t3;
    int t7;
    int t8;
    int t9;

    t0 = *(signed char *)((a4 + 0xC1763BE));
    t1 = kdGetDeviceInfo();
    t2 = kdGetDeviceInfo();
    t6 = 0x1;
    if (a4 != 2) {
        t5 = 0x1;
        if (a4 != 8) {
            t4 = 0x1;
            if (a4 != 14) {
                t3 = 0x1;
                if (a4 != 20) {
                    t3 = 0x0;
                }
                t4 = t3;
            }
            t5 = t4;
        }
        t6 = t5;
    }
    t7 = *(signed char *)(((t2 + 0x12) + 0x0));
    t8 = *(signed char *)((t6 + (t1 + 0x12)));
    t9 = *(signed char *)((0xC176396 + (((unsigned char)t8 << 2) + (unsigned char)t7)));
    return (unsigned char)t9;
}

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
    *(unsigned int *)0xC2F3898 = 0x0;
    t4 = 0x0;
    t5 = 0x1;
    do {
        t4 = (t4 + 0x1);
        if ((a5 & t5) != 0) {
            t6 = *(int *)0xC2F3898;
            *(unsigned int *)0xC2F3898 = (t6 + 0x1);
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
    *(unsigned int *)0xC2F3890 = 0x8;
    *(unsigned int *)0xC2F3894 = 0x0;
    vmsfs_setretry(0xA);
    t14 = *(int *)0xC2F3890;
    memset(0xC2F3650, 0x0, (((((t14 << 2) << 1) + t14) << 2) << 1));
    vmsio_init();
}

int vmsfs_fclose(int a4, int a5)
{
    int t67;
    int t0;
    int t1;
    int t65;
    int t2;
    int t3;
    int t62;
    int t4;
    int t5;
    int t59;
    int t6;
    int t7;
    int t8;
    int t10;
    int t11;
    int t53;
    int t12;
    int t13;
    int t50;
    int t14;
    int t15;
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
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t44;
    int t47;
    int t56;

    t67 = 0xFFFFFF00;
    if (a4 != 0) {
        t0 = *(int *)((a4 + 0x28));
        t1 = *(signed char *)((((t0 * 0x148) + 0xC2EE990) + 0x2));
        t65 = 0x0;
        if (t1 != 0) {
            t2 = *(int *)((a4 + 0x28));
            t3 = vmsio_ismount(t2);
            t62 = 0x0;
            if (t3 != 0) {
                t4 = *(int *)((a4 + 0x28));
                t5 = *(signed char *)((((t4 * 0x148) + 0xC2EE990) + 0x8));
                t59 = 0x0;
                if (t5 != 0) {
                    t6 = *(int *)((a4 + 0x28));
                    t7 = vmsio_isready(t6);
                    if (t7 == 0) {
                        t8 = *(int *)((a4 + 0x28));
                        vmsfs_unmount(t8);
                        t56 = 0x0;
                    } else {
                        t10 = *(int *)((a4 + 0x28));
                        t11 = buIsFormat();
                        t53 = 0x0;
                        if ((int)t11 >= 0) {
                            t12 = *(int *)((a4 + 0x4));
                            t13 = *(int *)((a4 + 0x28));
                            t50 = 0x0;
                            if (t12 != 0) {
                                if (a5 != 0) {
                                    *(unsigned int *)((((t13 * 0x148) + 0xC2EE990) + 0x30)) = 0x1;
                                    t14 = *(int *)((((t13 * 0x148) + 0xC2EE990) + 0x4));
                                    t15 = *(int *)((((((t14 << 2) + t14) << 2) << 2) + 0xC1784F0));
                                    *(unsigned int *)((((t13 * 0x148) + 0xC2EE990) + 0x34)) = t15;
                                }
                                t19 = *(int *)((a4 + 0x2C));
                                t20 = direntry(t13, t19);
                                t21 = *(int *)((a4 + 0x8));
                                t22 = 0x33;
                                if (t21 == 1) {
                                    t22 = 0xCC;
                                }
                                *(unsigned char *)((t20 + 0x0)) = t22;
                                t23 = *(signed char *)((a4 + 0x1));
                                *(unsigned char *)((t20 + 0x1)) = t23;
                                t24 = *(int *)0xC2EE98C;
                                t25 = *(int *)((a4 + 0x38));
                                t26 = *(int *)((t24 + 0x10));
                                t27 = ((int (*)(int, int, int))(t26))(t20, 0x2, t25);
                                t28 = *(int *)0xC2EE98C;
                                t29 = *(int *)((a4 + 0x30));
                                t30 = *(int *)((t28 + 0x10));
                                t31 = ((int (*)(int, int, int))(t30))(t20, 0x18, t29);
                                t32 = *(int *)0xC2EE98C;
                                t33 = *(short *)((a4 + 0x2));
                                t34 = *(int *)((t32 + 0x10));
                                t35 = ((int (*)(int, int, int))(t34))(t20, 0x1A, t33);
                                t36 = (t20 + 0x4);
                                t37 = (a4 + 0x10);
                                while ((unsigned int)t36 < (unsigned int)(t20 + 0x10)) {
                                    t38 = *(signed char *)((t37 + 0x0));
                                    t37 = (t37 + 0x1);
                                    *(unsigned char *)((t36 + 0x0)) = t38;
                                    t36 = (t36 + 0x1);
                                }
                                t39 = (t20 + 0x10);
                                t40 = (a4 + 0x20);
                                while ((unsigned int)t39 < (unsigned int)(t20 + 0x18)) {
                                    t41 = *(signed char *)((t40 + 0x0));
                                    t40 = (t40 + 0x1);
                                    *(unsigned char *)((t39 + 0x0)) = t41;
                                    t39 = (t39 + 0x1);
                                }
                                t42 = *(int *)((a4 + 0x2C));
                                direntry_dirty(t13, t42);
                                t44 = write_dir(t13);
                                t47 = t44;
                                if ((int)t44 >= 0) {
                                    write_fat(t13);
                                    t47 = 0x0;
                                }
                                t50 = t47;
                            }
                            t53 = t50;
                        }
                        t56 = t53;
                    }
                    t59 = t56;
                }
                t62 = t59;
            }
            t65 = t62;
        }
        close_file_handle();
        t67 = t65;
    }
    return t67;
}

int FUN_0c167bf8(void)
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
        t15 = *(int *)((a4 + 0x40));
        *(unsigned int *)((a7 + 0x0)) = (t14 - t15);
    } else {
        *(unsigned int *)((a7 + 0x0)) = 0x1FFFFFFF;
    }
    t19 = *(int *)((a4 + 0x4));
    return ADXB_GetPcmBuf(t19);
}

int FUN_0c16893a(int a4, int a5, int a6, int a7)
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

int adxt_stat_prep(int a4)
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
    int t17;
    int t18;
    int t23;
    int t24;
    int t29;
    int t30;
    int t49;
    int t31;
    int t32;
    int t45;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t42;
    int t43;
    int t44;
    int stk[13];

    t0 = *(int *)((a4 + 0x4));
    *(unsigned int *)(((int)stk + 4)) = t0;
    t1 = *(int *)((a4 + 0xC));
    t2 = ADXRNA_GetNumData();
    *(unsigned int *)(((int)stk + 8)) = t2;
    t3 = ADXRNA_GetNumRoom();
    *(unsigned int *)(((int)stk + 12)) = t3;
    t4 = *(int *)(((int)stk + 8));
    t5 = *(int *)((a4 + 0x48));
    if ((int)t4 < (int)t5) {
        t6 = *(int *)(((int)stk + 4));
        t7 = FUN_0c168862(t6);
        t8 = *(int *)(((int)stk + 12));
        if ((int)t8 > (int)t7) {
            t9 = *(int *)((a4 + 0x4));
            t10 = ADXSJD_GetStat(t9);
            if (t10 == 3) {
                t11 = *(signed char *)((a4 + 0x70));
                if (t11 == 0) {
                    t12 = *(signed char *)((a4 + 0x72));
                    if (t12 == 0) {
                        ADXRNA_SetPlaySw();
                    }
                    *(unsigned char *)((a4 + 0x1)) = 0x3;
                }
                *(unsigned char *)((a4 + 0x71)) = 0x1;
            }
        } else {
            t17 = *(signed char *)((a4 + 0x70));
            if (t17 == 0) {
                t18 = *(signed char *)((a4 + 0x72));
                if (t18 == 0) {
                    ADXRNA_SetPlaySw();
                }
                *(unsigned char *)((a4 + 0x1)) = 0x3;
            }
            *(unsigned char *)((a4 + 0x71)) = 0x1;
        }
    } else {
        t23 = *(signed char *)((a4 + 0x70));
        if (t23 == 0) {
            t24 = *(signed char *)((a4 + 0x72));
            if (t24 == 0) {
                ADXRNA_SetPlaySw();
            }
            *(unsigned char *)((a4 + 0x1)) = 0x3;
        }
        *(unsigned char *)((a4 + 0x71)) = 0x1;
    }
    t29 = *(int *)((a4 + 0x4));
    t30 = ADXSJD_GetStat(t29);
    t49 = t30;
    if (t30 == 3) {
        t31 = ADXT_GetNumChan(a4);
        t32 = *(int *)((a4 + 0x48));
        t45 = 0x48;
        if ((int)t31 > 0) {
            t33 = (a4 + 0x18);
            t34 = 0x0;
            do {
                t35 = *(int *)((t33 + 0x0));
                t33 = (t33 + 0x4);
                t36 = *(int *)((t35 + 0x0));
                t37 = *(int *)((t36 + 0x18));
                t38 = ((int (*)(int, int, int, int))(t37))(t35, 0x0, ((t32 * t31) << 1), (((int)stk + 4) + 0xC));
                t39 = *(int *)(((int)stk + 20));
                t40 = *(int *)(((int)stk + 16));
                memset(t40, 0x0, t39);
                t42 = *(int *)((t35 + 0x0));
                t43 = *(int *)((t42 + 0x20));
                t44 = ((int (*)(int, int, int))(t43))(t35, 0x1, (((int)stk + 4) + 0xC));
                t34 = (t34 + 0x1);
            } while ((int)t34 < (int)t31);
            t45 = t44;
        }
        t49 = t45;
    }
    return t49;
}

int adxt_stat_playing(int a4)
{
    int t0;
    int t1;
    int t14;
    int t2;
    int t3;
    int t9;
    int t10;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t13;
    int t11;

    t0 = *(int *)((a4 + 0x4));
    t1 = ADXSJD_GetStat(t0);
    t14 = t1;
    if (t1 == 3) {
        t2 = *(int *)((a4 + 0x4));
        t3 = FUN_0c16884a(t2);
        t9 = t3;
        t10 = 0x0;
        if ((int)t3 > 0) {
            t4 = 0x0;
            for (;;) {
                t5 = *(int *)((((t4 << 2) + (a4 + 0x18)) + 0x0));
                t6 = *(int *)((t5 + 0x0));
                t7 = *(int *)((t6 + 0x24));
                t8 = ((int (*)(int, int))(t7))(t5, 0x1);
                if ((int)t8 < (int)0x20) {
                    t4 = (t4 + 0x1);
                    if ((int)t4 >= (int)t3) break;
                    continue;
                }
                break;
            }
            t9 = t8;
            t10 = t4;
        }
        t13 = t9;
        if (t10 == t3) {
            t11 = *(int *)((a4 + 0xC));
            ADXRNA_SetTransSw();
            *(unsigned char *)((a4 + 0x1)) = 0x4;
            t13 = 0x4;
        }
        t14 = t13;
    }
    return t14;
}

int adxt_RcvrReplay(int a4)
{
    int t1;
    int t3;
    int t5;
    int t7;
    int t8;
    int t10;
    int t11;
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
    int t24;
    int t27;

    ADXCRS_Lock();
    t1 = *(int *)((a4 + 0xC));
    ADXRNA_SetTransSw();
    t3 = *(int *)((a4 + 0xC));
    ADXRNA_SetPlaySw();
    t5 = *(int *)((a4 + 0x4));
    ADXSJD_Stop(t5);
    t7 = *(int *)((a4 + 0x8));
    if (t7 != 0) {
        t8 = *(int *)((a4 + 0x8));
        ADXSTM_Stop(t8);
        t10 = *(int *)((a4 + 0x14));
        t11 = *(int *)((t10 + 0x0));
        t12 = *(int *)((t11 + 0x14));
        t13 = ((int (*)(int))(t12))(t10);
    }
    t15 = 0x0;
    for (;;) {
        t16 = *(signed char *)((a4 + 0x3));
        if ((int)t15 >= (int)t16) break;
        t17 = *(int *)((((t15 << 2) + (a4 + 0x18)) + 0x0));
        t18 = *(int *)((t17 + 0x0));
        t19 = *(int *)((t18 + 0x14));
        t20 = ((int (*)(int))(t19))(t17);
        t15 = (t15 + 0x1);
    }
    t21 = *(int *)((a4 + 0x8));
    if (t21 != 0) {
        t22 = *(int *)((a4 + 0x8));
        ADXSTM_Seek(t22, 0x0);
        t24 = *(int *)((a4 + 0x8));
        ADXSTM_Start(t24);
    }
    t27 = *(int *)((a4 + 0x14));
    adxt_start_sj(a4, t27);
    return ADXCRS_Unlock();
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

    t0 = *(int *)((a4 + 0x8C));
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
            t29 = *(int *)((a4 + 0x54));
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
        t44 = *(int *)((a4 + 0x40));
        if ((int)t43 >= (int)t44) {
            t45 = *(signed char *)((a4 + 0x7));
            if (t45 == 0) {
                mwRnaSetPlaySw(a4, 0x1);
                *(unsigned int *)((a4 + 0x40)) = 0x7FFFFFFF;
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

    t0 = FUN_0c16af38();
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

    t0 = FUN_0c16af38();
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
    *(unsigned char *)((a4 + 0x11)) = t16;
    t17 = *(signed char *)((a4 + 0x10));
    if (t17 != 0) {
        t18 = *(signed char *)(((t13 + 0x1) + 0x0));
        *(unsigned char *)(((a4 + 0x12) + 0x0)) = (t18 & 0x3);
        t19 = *(signed char *)(((t13 + 0x1) + 0x0));
        *(unsigned char *)(((0x13 + a4) + 0x0)) = (((unsigned int)(unsigned char)t19 >> 2) & 0x3);
    } else {
        t20 = *(signed char *)(((t13 + 0x1) + 0x0));
        t21 = *(signed char *)((0xC17870C + ((unsigned char)t20 & 0xF)));
        *(unsigned char *)(((a4 + 0x12) + 0x0)) = t21;
        *(unsigned char *)((a4 + 0x13)) = 0x0;
    }
    t25 = *(int *)0xC2FA538;
    t26 = *(int *)((0x10C4 + t25));
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
        *(unsigned char *)((a4 + 0x32)) = 0x0;
        t37 = t31;
        t38 = t32;
    }
    *(unsigned char *)((a4 + 0x33)) = 0x0;
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
    *(unsigned char *)((a4 + 0x70)) = 0x0;
    t44 = *(signed char *)((t41 + 0x1));
    t45 = *(signed char *)((t41 + 0x0));
    *(unsigned short *)(((0x74 + a4) + 0x0)) = (((unsigned char)t44 << 8) | (unsigned char)t45);
    t46 = *(signed char *)((t41 + 0x3));
    t47 = *(signed char *)((t41 + 0x2));
    *(unsigned short *)((a4 + 0x76)) = (((unsigned char)t46 << 8) | (unsigned char)t47);
}

int FUN_0c1709a6(int a4)
{
    int t0;
    int t1;
    int t2;
    int t31;
    int t3;
    int t4;
    int t5;
    int t28;
    int t6;
    int t7;
    int t8;
    int t24;
    int t21;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;

    t0 = *(int *)((a4 + 0xC));
    t1 = *(int *)((a4 + 0x4));
    t2 = FUN_0c170834();
    t31 = 0xFFFFFFFF;
    if (t2 != -1) {
        t3 = *(int *)((a4 + 0x14));
        t4 = *(int *)((a4 + 0x18));
        t5 = FUN_0c170834();
        t28 = 0xFFFFFFFF;
        if (t5 != -1) {
            t6 = *(int *)((a4 + 0x18));
            t7 = FUN_0c1708d0((((((t3 + 0x1) << 2) << 2) << 2) + t0), t6);
            *(unsigned int *)((a4 + 0x10)) = t7;
            t8 = *(short *)((a4 + 0x2));
            t24 = 0xFFFFFFFA;
            if (t8 == 0) {
                t21 = 0x0;
                if ((int)t7 > 0) {
                    t9 = (t1 + 0x40);
                    t10 = t7;
                    for (;;) {
                        t11 = FUN_0c170834();
                        if (t11 == -1) break;
                        t12 = *(short *)(((a4 + 0x34) + 0x0));
                        if ((unsigned short)t12 != 0xFFFF) {
                            t13 = fmcalccrc(0x3E, (a4 + 0x34));
                            t14 = *(short *)(((a4 + 0x34) + 0x3E));
                            if ((unsigned short)t14 == (unsigned short)t13) {
                                t15 = *(short *)(((a4 + 0x34) + 0x0));
                                t16 = *(int *)((a4 + 0x14));
                                if ((int)(unsigned short)t15 < (int)t16) {
                                    t17 = *(short *)(((a4 + 0x34) + 0x0));
                                    FUN_0c17088c((a4 + 0x34), ((((((unsigned short)t17 + 0x1) << 2) << 2) << 2) + t0), 0x40);
                                }
                            }
                            t10 = (t10 - 1);
                            t9 = (t9 + 0x40);
                            if ((int)t10 <= 0) {
                                return 0x0;
                            }
                            continue;
                        }
                        return 0x0;
                    }
                    t21 = 0xFFFFFFFF;
                }
                t24 = t21;
            }
            t28 = t24;
        }
        t31 = t28;
    }
    return t31;
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
    int t22;
    int t15;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;

    t0 = *(int *)((a4 + 0x4));
    if (t0 == 1) {
        t1 = *(int *)((a4 + 0x8));
        t2 = ADXPD_GetStat(t1);
        if (t2 == 0) {
            t3 = *(int *)((a4 + 0x88));
            t4 = *(int *)((a4 + 0x8C));
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
        t22 = t13;
        if (t13 == 3) {
            ADXB_EndDecode(a4);
            t15 = *(int *)((a4 + 0x8));
            ADXPD_Reset(t15);
            t17 = *(int *)((a4 + 0x90));
            t18 = *(int *)((a4 + 0xA0));
            t19 = *(int *)((a4 + 0xA4));
            t20 = *(int *)((a4 + 0x94));
            t21 = ((int (*)(int, int, int))(t17))(t20, t19, t18);
            *(unsigned int *)((a4 + 0x4)) = 0x3;
            t22 = t21;
        }
        t23 = t22;
    }
    return t23;
}

int mwRnaErrCallFunc(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t1;
    int t2;
    int t5;
    int t3;
    int t4;
    int stk[3];

    t0 = ((((int)stk + 4) + 0x8) + 0x4);
    if ((0x3 & ((((int)stk + 4) + 0x8) + 0x4)) != 0) {
        t0 = ((((int)stk + 4) + 0x8) + 0x8);
    }
    t1 = FUN_0c085dfc(0xC2FAB14, a8, t0);
    t2 = *(int *)0xC178724;
    t5 = t1;
    if (t2 != 0) {
        t3 = *(int *)0xC178728;
        t4 = ((int (*)(int, int))(t2))(t3, 0xC2FAB14);
        t5 = t4;
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
    int t11;
    int t13;
    int t15;
    int t14;
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
    int t61;

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
                t11 = *(int *)(((a4 + 0x50) + 0x24));
                t12 = t11;
            }
            t13 = *(int *)(((a4 + 0x50) + 0x14));
            t15 = t12;
            if ((int)t12 > (int)t10) {
                t14 = *(int *)(((a4 + 0x50) + 0x4));
                t15 = t14;
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
            *(unsigned int *)((a4 + 0xA0)) = t15;
            t51 = *(signed char *)((a4 + 0xE));
            *(unsigned int *)((a4 + 0xA4)) = ((t15 * t51) << 1);
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
        t61 = ((int (*)(int, int, int))(t57))(t60, t59, t58);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
        t62 = t61;
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
    int t11;
    int t13;
    int t15;
    int t14;
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
    int t54;

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
                t11 = *(int *)(((a4 + 0x50) + 0x24));
                t12 = t11;
            }
            t13 = *(int *)(((a4 + 0x50) + 0x14));
            t15 = t12;
            if ((int)t12 > (int)t10) {
                t14 = *(int *)(((a4 + 0x50) + 0x4));
                t15 = t14;
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
        t54 = ((int (*)(int, int, int))(t50))(t53, t52, t51);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
        t55 = t54;
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
    int stk[12];

    *(unsigned int *)(((int)stk + 36)) = a4;
    *(unsigned int *)(((int)stk + 32)) = a6;
    *(unsigned int *)(((int)stk + 40)) = a7;
    if ((int)a5 < (int)0x8) {
        t0 = *(int *)(((int)stk + 32));
        *(unsigned short *)((t0 + 0x0)) = 0x0;
        return;
    }
    t1 = *(int *)(((int)stk + 36));
    t2 = FUN_0c173328(t1, a5, (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x10), (((int)stk + 8) + 0x10), (((int)stk + 12) + 0x10), a14);
    if (t2 != 0) {
        t3 = *(int *)(((int)stk + 36));
        t4 = *(int *)(((int)stk + 32));
        *(unsigned short *)((t4 + 0x0)) = (t2 - t3);
        if ((int)(short)(t2 - t3) <= 0) {
            return;
        }
        t5 = *(int *)(((int)stk + 16));
        *(unsigned int *)((a11 + 0x0)) = t5;
        t6 = *(int *)(((int)stk + 20));
        *(unsigned char *)((a10 + 0x0)) = t6;
        t7 = *(int *)(((int)stk + 24));
        *(unsigned char *)((a8 + 0x0)) = t7;
        t8 = *(int *)(((int)stk + 28));
        *(unsigned int *)((a12 + 0x0)) = t8;
        t9 = *(int *)(((int)stk + 40));
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
    int t11;
    int t13;
    int t15;
    int t14;
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
    int t61;

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
                t11 = *(int *)(((a4 + 0x50) + 0x24));
                t12 = t11;
            }
            t13 = *(int *)(((a4 + 0x50) + 0x14));
            t15 = t12;
            if ((int)t12 > (int)t10) {
                t14 = *(int *)(((a4 + 0x50) + 0x4));
                t15 = t14;
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
            *(unsigned int *)((a4 + 0xA0)) = t15;
            t51 = *(signed char *)((a4 + 0xE));
            *(unsigned int *)((a4 + 0xA4)) = ((t15 * t51) << 1);
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
        t61 = ((int (*)(int, int, int))(t57))(t60, t59, t58);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
        t62 = t61;
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
    int t11;
    int t13;
    int t15;
    int t14;
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
    int t54;

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
                t11 = *(int *)(((a4 + 0x50) + 0x24));
                t12 = t11;
            }
            t13 = *(int *)(((a4 + 0x50) + 0x14));
            t15 = t12;
            if ((int)t12 > (int)t10) {
                t14 = *(int *)(((a4 + 0x50) + 0x4));
                t15 = t14;
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
        t54 = ((int (*)(int, int, int))(t50))(t53, t52, t51);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
        t55 = t54;
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
    int t11;
    int t13;
    int t15;
    int t14;
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
    int t61;

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
                t11 = *(int *)(((a4 + 0x50) + 0x24));
                t12 = t11;
            }
            t13 = *(int *)(((a4 + 0x50) + 0x14));
            t15 = t12;
            if ((int)t12 > (int)t10) {
                t14 = *(int *)(((a4 + 0x50) + 0x4));
                t15 = t14;
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
        t61 = ((int (*)(int, int, int))(t57))(t60, t59, t58);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
        t62 = t61;
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
    int t11;
    int t13;
    int t15;
    int t14;
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
    int t54;

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
                t11 = *(int *)(((a4 + 0x50) + 0x24));
                t12 = t11;
            }
            t13 = *(int *)(((a4 + 0x50) + 0x14));
            t15 = t12;
            if ((int)t12 > (int)t10) {
                t14 = *(int *)(((a4 + 0x50) + 0x4));
                t15 = t14;
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
        t54 = ((int (*)(int, int, int))(t50))(t53, t52, t51);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
        t55 = t54;
    }
    return t55;
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
    int t11;
    int t13;
    int t15;
    int t14;
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
    int t54;

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
                t11 = *(int *)(((a4 + 0x50) + 0x24));
                t12 = t11;
            }
            t13 = *(int *)(((a4 + 0x50) + 0x14));
            t15 = t12;
            if ((int)t12 > (int)t10) {
                t14 = *(int *)(((a4 + 0x50) + 0x4));
                t15 = t14;
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
        t54 = ((int (*)(int, int, int))(t50))(t53, t52, t51);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
        t55 = t54;
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
    int t11;
    int t13;
    int t15;
    int t14;
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
    int t54;

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
                t11 = *(int *)(((a4 + 0x50) + 0x24));
                t12 = t11;
            }
            t13 = *(int *)(((a4 + 0x50) + 0x14));
            t15 = t12;
            if ((int)t12 > (int)t10) {
                t14 = *(int *)(((a4 + 0x50) + 0x4));
                t15 = t14;
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
        t54 = ((int (*)(int, int, int))(t50))(t53, t52, t51);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
        t55 = t54;
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
    int t11;
    int t13;
    int t15;
    int t14;
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
    int t63;

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
                t11 = *(int *)(((a4 + 0x50) + 0x24));
                t12 = t11;
            }
            t13 = *(int *)(((a4 + 0x50) + 0x14));
            t15 = t12;
            if ((int)t12 > (int)t10) {
                t14 = *(int *)(((a4 + 0x50) + 0x4));
                t15 = t14;
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
        t63 = ((int (*)(int, int, int))(t59))(t62, t61, t60);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
        t64 = t63;
    }
    return t64;
}
