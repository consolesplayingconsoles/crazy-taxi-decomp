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
    if (((((struct o0_int *)0xC178644)->v)) == 0) {
        (((struct o0_uint *)0xC178644)->v) = (mwlSbGetWorkTbl());
    } else {
        t11 = 0x80808080;
        t12 = t4;
        t13 = 0x200;
    }
    t18 = ((int (*)(int, int, int, int))((*(int *)((((((struct o0_int *)0xC178644)->v)) + 0xC)))))(((((struct o4_int *)0xC178644)->v)), t11, t12, t13);
    mwlRnaSetSvrInt();
    return mwRnaErrEntryFunc(0x0, 0x0);
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


int ADXB_EvokeExpandSte(int a4, int a5)
{
    int t0;
    int t2;
    int t4;

    t0 = *(int *)(((a4 + 0x50) + 0x20));
    t2 = *(int *)((a4 + 0x8));
    t4 = *(int *)(((a4 + 0x50) + 0x14));
    ADXPD_EntrySte(t2, (*(int *)((a4 + 0x50))), (a5 << 1), (t4 + (t0 << 1)), (((*(int *)(((a4 + 0x50) + 0x1C))) << 1) + (t4 + (t0 << 1))));
    return ADXPD_Start(t2);
}


