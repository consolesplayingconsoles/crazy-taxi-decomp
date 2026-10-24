/* Straight-line functions with calls and guards (batch gen_are): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXPD_EntrySte(int, int, int, int, int, int);
int ADXPD_Start(int);
extern int _builtin_tas(char *);
int fmMngAddData(int);
int fmMngSctRefresh(int);
int gdFsGetStatG(void);
int gdGdcG1DmaEnd(int, int);
int gdGdcReqCmd(int, int);
int kdRecvFrame(void);
int kdSetCallback(int, int, int);
int kmSetColorClampValue(int, int, int, int, int, int);
int memset(int, int, int);
int mpdrv_dpf(int, ...);
int mpdrv_set_dreset_ns(int);
int mwRnaErrEntryFunc(int, int);
int mwRnaInitCs(void);
int mwlRnaSetSvrInt(void);
int mwlSbGetWorkTbl(void);
int mwlSbTrnsDat(int, int, int, int, int);
int mwlSbTrnsEx(int, int, int, int);
int nlLdexpf(int, float);
int nlObjPutLoadTextureOnce_Sub(int, ...);
int nlsndSeqRequest(int);
int syBtFlDeleteSct(int, int, int);
int texLoadIndexed(int, int);
int nlExp(float f4);
int nlsndStreamChgFx(int a4, int a5, int a6);
int kdSetDeviceResetEx(int a4, int a5);
int nlsndBlockMove(int a4, int a5, int a6);
int fmMngWriteData(int a4, int a5, int a6);
int mwRnaInit(void);
int nlsndStreamChgFilter(int a4, int a5, int a6);
int mwSbTrns(int a4, int a5, int a6, int a7, int a8);
int nlsndStreamChgVol(int a4, int a5, int a6);
int nlsndStreamChgPan(int a4, int a5, int a6);
int ADXB_EvokeExpandSte(int a4, int a5);
int nlsndStreamTranspose(int a4, int a5);
int nlsndStreamDetune(int a4, int a5);
int gdFsExecServerG(void);
int gdDcfDaPlay_(int a4, int a5, int a6);
int gdDcfDaPlay2_(int a4, int a5, int a6);
int gdDcfGetScd_(int a4, int a5, int a6);
int gdDcfReqStat_(int a4, int a5, int a6, int a7);
int gdDcfDaRelease_(int a4);
int gdDcfGetVer_(int a4);
int nlSetColorClampValue(int a4, int a5, int a6, int a7);
int gdDcfGetToc_(int a4, int a5);
int gdFsHdlG1DmaEnd(int a4);
int nlCommonTextureReloadI(int a4, int a5, int a6);
int nlObjPutLoadTextureOnceGI(void);

int nlExp(float f4)
{
    float u0;
    float u7;
    float u8;
    int t9;
    float u10;
    int t11;
    float u12;
    float u4;

    u0 = *(float *)0xC075DB4;
    if (!(0.0f > f4)) {
        u4 = (*(float *)0xC075DB8);
    } else {
        u4 = (*(float *)0xC075DBC);
    }
    u7 = (f4 - ((float)(int)(u4 + (f4 / u0)) * u0));
    u8 = (f4 - ((float)(int)(u4 + (f4 / u0)) * u0));
    t9 = 0xA;
    u10 = ((u7 * u8) / (*(float *)0xC075DC0));
    for (;;) {
        t11 = t9;
        t9 = (t9 - 4);
        u12 = ((float)t11 + u10);
        u10 = (u7 * u8);
        u10 = (u10 / u12);
        if ((int)t9 < (int)0x6) {
            break;
        }
    }
    return nlLdexpf((int)(u4 + (f4 / u0)), ((((f4 - ((float)(int)(u4 + (f4 / u0)) * u0)) + u10) + (1.0f + 1.0f)) / ((u10 - (f4 - ((float)(int)(u4 + (f4 / u0)) * u0))) + (1.0f + 1.0f))));
}

int nlsndStreamChgFx(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t3;
    int stk[7];

    *(unsigned short *)(((int)stk + 4)) = a5;
    t0 = *(signed char *)(((((((short)a4 << 1) + (short)a4) << 2) << 1) + 0xC2B771C));
    if (t0 == 1) {
        *(unsigned int *)(((int)stk + 8)) = ((((short)a4 << 8) << 2) << 2);
        nlsndSeqRequest(((((((short)a4 << 8) << 2) << 2) | ((short)a6 << 16)) | 0x2A2));
        t2 = *(short *)(((int)stk + 4));
        t3 = *(int *)(((int)stk + 8));
        nlsndSeqRequest((((t2 << 16) | t3) | 0x3A2));
        if ((*(int *)(((((((short)a4 << 1) + (short)a4) << 2) << 1) + 0xC2B7724))) != 0) {
            nlsndSeqRequest((((((((short)a4 << 8) << 2) << 2) | ((short)a6 << 16)) | 0x2A2) + 0x800));
            return nlsndSeqRequest(((((t2 << 16) | t3) | 0x3A2) + 0x800));
        }
        return 0xC2B7724;
    }
    return t0;
}

int kdSetDeviceResetEx(int a4, int a5)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0xC1701BC)) == 0) {
        mpdrv_dpf(0xC176314);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_dreset_ns(a4);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a5, t2);
    }
    *(unsigned char *)(((*(int *)0xC1701BC) + 0x0)) = 0x0;
    if ((*(int *)(((*(int *)0xC2FA538) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t2;
}

int nlsndBlockMove(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t3;

    *(unsigned int *)0xA0800090 = (a4 + 0x5F800000);
    *(unsigned int *)0xA0800094 = (a5 + 0x5F800000);
    *(unsigned int *)0xA0800098 = a6;
    t0 = 0x0;
    for (;;) {
        if ((*(int *)0xA0800098) == 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x400000) {
                break;
            }
            continue;
        }
        t2 = 0x0;
        for (;;) {
            t3 = nlsndSeqRequest(0x2000A0);
            if (t3 != 0) {
                t2 = (t2 + 0x1);
                if ((int)t2 >= (int)0x400000) {
                    break;
                }
                continue;
            }
            return 0x0;
        }
        return 0xFFFFFF00;
    }
    return 0xFFFFFF00;
}

int fmMngWriteData(int a4, int a5, int a6)
{
    int t0;
    int t3;
    int t6;
    int t8;
    int t14;
    int t16;
    int t20;
    int t12;

    t0 = *(int *)((a4 + 0x24));
    if (t0 != 0) {
        if (t0 != 1) {
            t3 = 0xFFFFFFFE;
            if (t0 != 2) {
            } else {
                t3 = (fmMngSctRefresh(a4));
            }
            t12 = t3;
        } else {
            t6 = syBtFlDeleteSct((*(int *)((a4 + 0x4))), a5, a6);
            t8 = 0xFFFFFFFD;
            if (t6 == -1) {
            } else {
                *(unsigned int *)((a4 + 0x24)) = 0x2;
                t8 = 0x1;
            }
            t12 = t8;
        }
        t20 = t12;
    } else {
        t14 = fmMngAddData(a4);
        t16 = t14;
        if (t14 == -10) {
            *(unsigned int *)((a4 + 0x24)) = 0x1;
            t16 = 0x1;
        }
        t20 = t16;
    }
    return t20;
}

int mwRnaInit(void)
{
    int t3;
    int t4;
    int t18;
    int t11;
    int t12;
    int t13;

    mwRnaInitCs();
    memset(0xC2F605C, 0x0, 0x480);
    memset(0xC2F64DC, 0x0, 0x820);
    t3 = 0x0;
    t4 = 0xC2F6CFC;
    for (;;) {
        t3 = (t3 + 0x1);
        *(unsigned int *)((t4 + 0x0)) = 0x80808080;
        t4 = (t4 + 0x4);
        if ((int)t3 >= (int)0x200) {
            break;
        }
    }
    if ((*(int *)0xC178644) == 0) {
        *(unsigned int *)0xC178644 = (mwlSbGetWorkTbl());
    } else {
        t11 = 0x80808080;
        t12 = t4;
        t13 = 0x200;
    }
    t18 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)0xC178644) + 0xC)))))((*(int *)0xC178648), t11, t12, t13);
    mwlRnaSetSvrInt();
    return mwRnaErrEntryFunc(0x0, 0x0);
}

int nlsndStreamChgFilter(int a4, int a5, int a6)
{
    int t0;
    int stk[4];

    *(unsigned short *)(((int)stk + 4)) = a6;
    t0 = *(signed char *)((0xC2B771C + (((((short)a4 << 1) + (short)a4) << 2) << 1)));
    if (t0 == 1) {
        *(unsigned int *)(((int)stk + 8)) = ((((short)a4 << 8) << 2) << 2);
        nlsndSeqRequest(((((((short)a4 << 8) << 2) << 2) | ((short)a5 << 16)) | 0xAA1));
        return nlsndSeqRequest(((((*(short *)(((int)stk + 4))) << 16) | (*(int *)(((int)stk + 8)))) | 0xBA1));
    }
    return t0;
}

int mwSbTrns(int a4, int a5, int a6, int a7, int a8)
{
    int t0;

    t0 = mwlSbTrnsDat(a4, a5, a6, a7, a8);
    if (a6 == 0) {
        return mwlSbTrnsEx(a4, a5, (((((int)((int)(*(int *)((a4 + 0x28))) / (int)(*(int *)((a4 + 0x10))))) << 2) << 1) + a6), a7);
    }
    return t0;
}

int nlsndStreamChgVol(int a4, int a5, int a6)
{
    int t0;

    t0 = *(signed char *)((0xC2B771C + (((((short)a4 << 1) + (short)a4) << 2) << 1)));
    if (t0 == 1) {
        return nlsndSeqRequest((((((((short)a4 << 8) << 2) << 2) | ((short)a6 << 16)) | 0xA2) + ((((short)a5 << 8) << 2) << 1)));
    }
    return t0;
}

int nlsndStreamChgPan(int a4, int a5, int a6)
{
    int t0;

    t0 = *(signed char *)((0xC2B771C + (((((short)a4 << 1) + (short)a4) << 2) << 1)));
    if (t0 == 1) {
        return nlsndSeqRequest((((((((short)a4 << 8) << 2) << 2) | ((short)a6 << 16)) | 0x1A2) + ((((short)a5 << 8) << 2) << 1)));
    }
    return t0;
}

int ADXB_EvokeExpandSte(int a4, int a5)
{
    int t0;
    int t2;
    int t4;

    t0 = *(int *)(((a4 + 0x50) + 0x20));
    t2 = *(int *)((a4 + 0x8));
    t4 = *(int *)(((a4 + 0x50) + 0x14));
    ADXPD_EntrySte(t2, (*(int *)((a4 + 0x50))), (a5 << 1), (t4 + (t0 << 1)), (((*(int *)(((a4 + 0x50) + 0x1C))) << 1) + (t4 + (t0 << 1))), a5);
    return ADXPD_Start(t2);
}

int nlsndStreamTranspose(int a4, int a5)
{
    int t0;

    t0 = *(signed char *)((0xC2B771C + (((((short)a4 << 1) + (short)a4) << 2) << 1)));
    if (t0 == 1) {
        return nlsndSeqRequest((0x8A1 | ((((short)a5 + 0x40) << 16) | ((((short)a4 << 8) << 2) << 2))));
    }
    return t0;
}

int nlsndStreamDetune(int a4, int a5)
{
    int t0;

    t0 = *(signed char *)((0xC2B771C + (((((short)a4 << 1) + (short)a4) << 2) << 1)));
    if (t0 == 1) {
        return nlsndSeqRequest((0x9A1 | ((((short)a5 + 0x40) << 16) | ((((short)a4 << 8) << 2) << 2))));
    }
    return t0;
}

int gdFsExecServerG(void)
{
    int t3;

    t3 = ((int (*)(void))((*(int *)(((*(int *)(((*(int *)0xC177A8C) + 0xC))) + 0x40)))))();
    if ((*(int *)(((*(int *)0xC177A8C) + 0x1C))) != 0) {
        return gdFsGetStatG();
    }
    return t3;
}

int gdDcfDaPlay_(int a4, int a5, int a6)
{
    int stk[7];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = a5;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = a6;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = 0x0;
    return (gdGdcReqCmd(0x14, ((int)stk + 4)));
}

int gdDcfDaPlay2_(int a4, int a5, int a6)
{
    int stk[7];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = a5;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = a6;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = 0x0;
    return (gdGdcReqCmd(0x15, ((int)stk + 4)));
}

int gdDcfGetScd_(int a4, int a5, int a6)
{
    int stk[7];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = a5;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = a6;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = 0x0;
    return (gdGdcReqCmd(0x22, ((int)stk + 4)));
}

int gdDcfReqStat_(int a4, int a5, int a6, int a7)
{
    int stk[7];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = a5;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = a6;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = a7;
    return (gdGdcReqCmd(0x24, ((int)stk + 4)));
}

int gdDcfDaRelease_(int a4)
{
    int stk[5];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = 0x0;
    return (gdGdcReqCmd(0x17, ((int)stk + 4)));
}

int gdDcfGetVer_(int a4)
{
    int stk[5];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = 0x0;
    return (gdGdcReqCmd(0x28, ((int)stk + 4)));
}

int nlSetColorClampValue(int a4, int a5, int a6, int a7)
{
    return (kmSetColorClampValue(a4, a5, a6, a7, a4, a5));
}

int gdDcfGetToc_(int a4, int a5)
{
    int stk[5];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = a5;
    return (gdGdcReqCmd(0x13, ((int)stk + 4)));
}

int gdFsHdlG1DmaEnd(int a4)
{
    int t0;
    int t5;
    int t6;
    int t1;

    t0 = *(int *)((a4 + 0x1C));
    t5 = 0x0;
    t6 = 0x0;
    if ((t0 != 0) && (t1 = *(int *)((t0 + 0x2C)), t1 != 0)) {
        t5 = (*(int *)((t0 + 0x2C)));
        t6 = (*(int *)((t0 + 0x30)));
    }
    return gdGdcG1DmaEnd(t5, t6);
}

int nlCommonTextureReloadI(int a4, int a5, int a6)
{
    return texLoadIndexed(a4, (*(int *)(((((a6 << 2) << 2) + a5) + 0x8))));
}

int nlObjPutLoadTextureOnceGI(void)
{
    return (nlObjPutLoadTextureOnce_Sub(0x1));
}
