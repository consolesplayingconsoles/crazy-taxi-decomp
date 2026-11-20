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
    if (((((struct o10E8_int *)((*(int *)0xC2FA538)))->v)) != 0) {
        kdRecvFrame();
    }
    return t2;
}


int fmMngWriteData(int a4, int a5, int a6)
{
    int t0;
    int t6;
    int t14;
    int t20;

    t0 = *(int *)((a4 + 0x24));
    if (t0 != 0) {
        if (t0 != 1) {
            t20 = 0xFFFFFFFE;
            if (t0 != 2) {
            } else {
                t20 = (fmMngSctRefresh(a4));
            }
        } else {
            t6 = syBtFlDeleteSct((*(int *)((a4 + 0x4))), a5, a6);
            t20 = 0xFFFFFFFD;
            if (t6 == -1) {
            } else {
                *(unsigned int *)((a4 + 0x24)) = 0x2;
                t20 = 0x1;
            }
        }
    } else {
        t14 = fmMngAddData(a4);
        t20 = t14;
        if (t14 == -10) {
            *(unsigned int *)((a4 + 0x24)) = 0x1;
            t20 = 0x1;
        }
    }
    return t20;
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
    int stk[6];

    *(unsigned int *)((((int)stk + 0) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 0) + 0x4)) = a5;
    *(unsigned int *)((((int)stk + 0) + 0x8)) = a6;
    *(unsigned int *)((((int)stk + 0) + 0xC)) = 0x0;
    return (gdGdcReqCmd(0x14, ((int)stk + 0)));
}

int gdDcfDaPlay2_(int a4, int a5, int a6)
{
    int stk[6];

    *(unsigned int *)((((int)stk + 0) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 0) + 0x4)) = a5;
    *(unsigned int *)((((int)stk + 0) + 0x8)) = a6;
    *(unsigned int *)((((int)stk + 0) + 0xC)) = 0x0;
    return (gdGdcReqCmd(0x15, ((int)stk + 0)));
}

int gdDcfGetScd_(int a4, int a5, int a6)
{
    int stk[6];

    *(unsigned int *)((((int)stk + 0) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 0) + 0x4)) = a5;
    *(unsigned int *)((((int)stk + 0) + 0x8)) = a6;
    *(unsigned int *)((((int)stk + 0) + 0xC)) = 0x0;
    return (gdGdcReqCmd(0x22, ((int)stk + 0)));
}

int gdDcfReqStat_(int a4, int a5, int a6, int a7)
{
    int stk[6];

    *(unsigned int *)((((int)stk + 0) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 0) + 0x4)) = a5;
    *(unsigned int *)((((int)stk + 0) + 0x8)) = a6;
    *(unsigned int *)((((int)stk + 0) + 0xC)) = a7;
    return (gdGdcReqCmd(0x24, ((int)stk + 0)));
}

int gdDcfDaRelease_(int a4)
{
    int stk[4];

    *(unsigned int *)((((int)stk + 0) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 0) + 0x4)) = 0x0;
    return (gdGdcReqCmd(0x17, ((int)stk + 0)));
}

int gdDcfGetVer_(int a4)
{
    int stk[4];

    *(unsigned int *)((((int)stk + 0) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 0) + 0x4)) = 0x0;
    return (gdGdcReqCmd(0x28, ((int)stk + 0)));
}


int gdDcfGetToc_(int a4, int a5)
{
    int stk[4];

    *(unsigned int *)((((int)stk + 0) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 0) + 0x4)) = a5;
    return (gdGdcReqCmd(0x13, ((int)stk + 0)));
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


