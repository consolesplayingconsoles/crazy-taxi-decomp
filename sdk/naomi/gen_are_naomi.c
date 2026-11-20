/* Straight-line functions with calls and guards (batch gen_are): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXPD_EntrySte(int, int, int, int, int);
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
struct o10E8_int { char p[0x10E8]; int v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };


int nlsndStreamChgFx(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t3;
    int stk[6];
    int R1008;

    R1008 = *(int *)((int)stk + 4);

    *(unsigned short *)(((int)stk + 0)) = a5;
    t0 = *(signed char *)(((((((short)a4 << 1) + (short)a4) << 2) << 1) + 0xC2B771C));
    if (t0 == 1) {
        R1008 = ((((short)a4 << 8) << 2) << 2);
        nlsndSeqRequest(((((((short)a4 << 8) << 2) << 2) | ((short)a6 << 16)) | 0x2A2));
        t2 = *(short *)(((int)stk + 0));
        t3 = R1008;
        nlsndSeqRequest((((t2 << 16) | t3) | 0x3A2));
        if ((*(int *)(((((((short)a4 << 1) + (short)a4) << 2) << 1) + 0xC2B7724))) != 0) {
            nlsndSeqRequest((((((((short)a4 << 8) << 2) << 2) | ((short)a6 << 16)) | 0x2A2) + 0x800));
            return nlsndSeqRequest(((((t2 << 16) | t3) | 0x3A2) + 0x800));
        }
        return 0xC2B7724;
    }
    return t0;
}


int nlsndBlockMove(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t3;

    (((struct o0_uint *)0xA0800090)->v) = (a4 + 0x5F800000);
    (((struct o4_uint *)0xA0800090)->v) = (a5 + 0x5F800000);
    (((struct o8_uint *)0xA0800090)->v) = a6;
    t0 = 0x0;
    for (;;) {
        if (((((struct o8_int *)0xA0800090)->v)) == 0) {
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


int nlsndStreamChgFilter(int a4, int a5, int a6)
{
    int t0;
    int stk[3];

    *(unsigned short *)(((int)stk + 0)) = a6;
    t0 = *(signed char *)((0xC2B771C + (((((short)a4 << 1) + (short)a4) << 2) << 1)));
    if (t0 == 1) {
        *(unsigned int *)(((int)stk + 4)) = ((((short)a4 << 8) << 2) << 2);
        nlsndSeqRequest(((((((short)a4 << 8) << 2) << 2) | ((short)a5 << 16)) | 0xAA1));
        return nlsndSeqRequest(((((*(short *)(((int)stk + 0))) << 16) | (*(int *)(((int)stk + 4)))) | 0xBA1));
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


int nlSetColorClampValue(int a4, int a5, int a6, int a7)
{
    return (kmSetColorClampValue(a4, a5, a6, a7, a4, a5));
}


int nlCommonTextureReloadI(int a4, int a5, int a6)
{
    return texLoadIndexed(a4, (*(int *)(((((a6 << 2) << 2) + a5) + 0x8))));
}

int nlObjPutLoadTextureOnceGI(void)
{
    return (nlObjPutLoadTextureOnce_Sub(0x1));
}
