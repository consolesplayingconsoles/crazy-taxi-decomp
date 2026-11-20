/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_yv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
typedef struct { int w[5]; } Stk5;
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int, ...);
int ADXSTM_OpenFname(int, int);
int ADXT_Stop(int);
int ADX_DecodeInfo(int, int, int, int, int, int, int, int, int, int);
int resetBackColorZ(int, int, int);
int FUN_8c1e7ef2(int, int, int, int);
int SJMEM_Create(int, int);
extern void _builtin_ftrv(float *, float *);
extern int _builtin_get_imask(void);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
extern void _builtin_st_ext(float (*)[4]);
int adxt_start_sj(int, int);
int adxt_start_stm(int);
int dbgMenuGetValue(int, int);
int evSeRetry(int, int);
int evVoiceFadeOut(int);
int fmMngSctRefresh(int);
int gdFsGetDrvStatG(int, int, int, int);
int gdFsReopenHn(int, int, int, int);
int gdFsReqDrvStatG(void);
int gdGdcReqCmd(int, int);
int gdGdcReqDmaTrans(int, int);
int kmChangeDisplayFilterMode(int, int);
int kmFreeTexture(int);
int kmLoadTextureRom(int, int);
int kmProcessVertexRenderState(int);
int kmSetUserClipping(int, int, int, int);
int kmyObFindDevice(int, int, int);
int kmyRegisterBGPlane(int);
int lightSetTarget(int, int, int, int, int);
int memset(int, int, int);
int mwRnaErrCallFunc(int, ...);
int mwlSbFreeWork(int);
int mwlSbGetDrctLvl(int);
int mwlSbGetFilter(int, int, int, int);
int mwlSbGetFx(int, int, int, int);
int mwlSbGetGain(int);
int mwlSbGetPitch(int, int, int);
int mwlSbGetStreamParam(int, int, int, int);
int mwlSbTrnsDat(int, int, int, int, int);
int ndbClear(void);
int ndbEditDrawMatches(int, int, int, int, int, int, int, int, int);
int ndbEditFields(int);
int ndbEditInput(int, int, int, int, int, int, int, int, int, int, int, int);
int ndbEditShowEntry(int, int, int, int, int, int, int, int, int, int, int, int);
int nlArcCos(float);
int nlCalcPoint(int, int);
int nlCalcPoint4(int, int);
int nlCommonTextureClearTextureIndex(int);
int nlCommonTextureGetNextTextureIndex(void);
extern int nlCopyMatrix();
int nlCreateTextureParam(int);
int nlGetMatrix(int);
float nlInnerProduct(int, int);
float nlInvertSqrt(float);
float nlLength(int, int);
int nlLightDiffuse(int, int);
int nlLoadMatrix(int);
int nlLoadTextureMem(int, int, int);
int nlLocate(int, int);
int nlMultiMatrix(int);
int nlMultiMatrixRevOrder8(int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAZ(int, float, float);
int nlRotateXSC(float, float);
int nlRotateYSC(float, float);
int nlSetWindowSize(float, float, float, float);
int nlSpriteLoadTextureOnce_Sub(int, int, int, int);
int nlSysUseLatency2V(int, int, int, int);
int nlTranslateNV(int);
int nlsndCheckPackIndex(int, int, int);
int nlsndG2DmaGetHandleStatus(int);
int nlsndG2DmaHandleClose(int);
int nlsndG2DmaRequest(int, int, int, int);
int nlsndG2Write(int, int);
int nlsndG2WriteN(int, int, int);
int nlsndGetPackInfo(int, int);
int nlsndPackLoadInit(int, int, int, int);
int nlsndSeqRequest(int);
int nlsndStreamClose(int);
int nlsndStreamStop(int);
int nlsndSystemControl(int, int, int);
int set_event(int, int);
int set_event2(int, int);
int sprInitPos(int, int, Stk3);
int sprPutAtAlpha(int, Stk3, float);
int syBtFlDeleteSct(int, int, int);
int syCacheOCBI(int, int);
int syCacheOCBP(int, int);
int syCachePurgeAll(int, int, int, int);
int thunk_nlSprPut(int);
Stk3 vecMake(float, float, float);
int nlObjPutCheckSideFarCulling(int a4);
int gdFsDaStopG(void);
int nlSysMetricsGetFrameBuffer(int a4, int a5, int a6);
int nlLookAt(int a4, int a5, int a6, float f4, float f5);
int mwSbClosePort(int a4);
int nlUnitNormalVectorCCW(int a4, int a5, int a6, int a7);
int nlUnitNormalVectorCW(int a4, int a5, int a6, int a7);
float FUN_8c0f1a10(void);
int gdFsDaGetInfoG(int a4);
int nlGetNormalCalcMatrix(int a4, float f4, float f5, float f6, float f7, float f8, float f9);
int nlsndPackLoad_Write(int a4);
int nlDispStripFreeTexture(int a4);
int nlDispStripLoadTexture(int a4, int a5);
int FUN_8c0836fc(void);
int nlsndPackLoadLockBG(int a4, int a5, int a6, int a7);
void FUN_8c1e805c(int a4, int a5, int a6, int a7, int a8);
int mwlSbTrnsEx(int a4, int a5, int a6, int a7);
int gdDcfRead_(int a4, int a5, int a6, int a7);
void syG2DmaEndIntrruptHandler(int a4);
int nlProjectScreen(int a4, int a5);
int syTmrInt1SetEx(int a4, int a5, int a6, int a7);
int nlLightAllOff(void);
int ADXT_IsHeader(int a4, int a5, int a6);
int FUN_8c081e9e(void);
int kmiProcessVertex_09(int a4, int a5, int a6, int a7);
int nlReturnLightAll(void);
int nlScreenPoint(int a4, int a5, int a6, float f4, float f5, float f6);
int FUN_8c1e7fd8(int a4, int a5, int a6);
int nlSetVertexMode(int a4);
int syTmrGenMicroToCount(int a4, int a5);
int FUN_8c2007b0(int a4, int a5, int a6, int a7);
int FUN_8c0e6220(void);
int nlsndPackLoad_Open(int a4, int a5, int a6);
int syTmrGenSetInt(int a4, int a5);
void FUN_8c0d1dda(int a4);
int mwSbGetExPrm(int a4, int a5, int a6, int a7);
int FUN_8c0efc70(int a4);
int FUN_8c1e7e96(int a4, int a5, int a6, int a7);
int nlCommonTextureReloadA(int a4, int a5);
int nlObjPutSetPaletteOffset(int a4, int a5, int a6, int a7);
int FUN_8c09c646(float f4);
int nlSetUserTileClip(int a4, int a5, int a6, int a7, int a8);
int gdDcfTrans32_(int a4, int a5, int a6);
int nlChangeDisplayFilterMode(int a4);
void FUN_8c1e797e(int a4, int a5, int a6, int a7);
int syTmrGenCountToMicro(int a4, int a5);
int FUN_8c0d0b5c(void);
int ADXT_StartMem(int a4, int a5);
int mwAcTrns(int a4, int a5, int a6, int a7, int a8);
int kmiVRightArray(int a4);
int FUN_8c1fabc0(int a4);
int ADXT_StartFname(int a4, int a5);
int FUN_8c08aade(Stk5 s);
int mwRnaSetFilter(int a4, int a5, int a6);
int kmiHolizontalStripBufferArray(int a4);
float nlLightGlobalAmbient(int a4);
int nlSpriteLoadTextureGI(int a4, int a5);
void FUN_8c0d2b00(void);
int FUN_8c013ce6(int a4);
int nlLineFog(int a4);
int mwSbGetTrnsStat(int a4, int a5);
int FUN_8c205a7c(int a4, int a5, int a6);
int nlSysMultiPassMode(int a4, int a5, int a6, int a7);
int ADXT_IsIbufSafety(int a4);
void FUN_8c0886fc(int a4);
int FUN_8c08aaa0(Stk4 s);
int FUN_8c1f8ae0(int a4);
void FUN_8c0d2b6a(void);
int FUN_8c0c53f2(int a4, Stk3 s);
int nlLightCutoffCos(int a4, float f4);
int FUN_8c1f8a7e(int a4);
void FUN_8c0d7ea8(void);
int mwSbGetPan(int a4, int a5, int a6, int a7);
int gdFsIsTrayOpenG(int a4, int a5, int a6, int a7);
int syTmrCountToMicro(int a4);
int fmMngRefresh(int a4, int a5, int a6);
int nlFastScreenPoint(int a4, int a5);
int nlObjPutVtxBufScan(int a4, int a5, int a6, int a7);
void ADXT_GetNumSctIbuf(int a4);


int nlObjPutCheckSideFarCulling(int a4)
{
    int stk[7];
    register float u0;
    register float u1;
    register float u7;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float u15;
    register float u17;

    *(unsigned int *)(((int)stk + 4)) = a4;
    u0 = *(float *)(((a4 + 0x14) + 0x0));
    u1 = *(float *)0x0C2B7BE8;
    nlPushMatrix(0x0);
    nlMultiMatrixRevOrder8(0x0C2B34A8);
    nlCalcPoint(((*(int *)(((int)stk + 4))) + 0x8), (((int)stk + 4) + 0x4));
    nlPopMatrix(0x1);
    u7 = *(float *)(((int)stk + 8));
    if (!((*(float *)0x0C2B3174) > (u7 + (u0 * u1)))) {
        if (!((u7 - (u0 * u1)) > (*(float *)0x8C458DC0))) {
            u10 = *(float *)(((int)stk + 12));
            u11 = *(float *)0x0C2B3490;
            u12 = (u0 * u1);
            if (u10 > (-(u11 * u12))) {
                u13 = *(float *)(((int)stk + 16));
                if (u13 > (-(u11 * u12))) {
                    u15 = (u11 * u12);
                    u15 = u15 + u7 * (*(float *)0x0C14A824);
                    if (u15 > u10) {
                        u17 = (u11 * u12);
                        u17 = u17 + u7 * (*(float *)0x0C14A828);
                        if (!(u17 > u13)) {
                            return 0x0;
                        }
                        return 0x1;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}


int nlLookAt(int a4, int a5, int a6, float f4, float f5)
{
    int stk[11];
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float t14;
    register float u15;
    register float u16;
    register float t17;

    if ((unsigned short)a6 != 0) {
        nlRotateAZ((unsigned short)a6, f4, f5);
    }
    *(float *)((((int)stk + 4) + 0x0)) = ((*(float *)((a5 + 0x0))) - (*(float *)((a4 + 0x0))));
    *(float *)((((int)stk + 4) + 0x4)) = ((*(float *)((a5 + 0x4))) - (*(float *)((a4 + 0x4))));
    u10 = *(float *)((a5 + 0x8));
    u11 = *(float *)((a4 + 0x8));
    *(float *)((((int)stk + 4) + 0x8)) = (u10 - u11);
    u12 = *(float *)((((int)stk + 4) + 0x0));
    u13 = ((u10 - u11) * (u10 - u11));
    u13 = u13 + u12 * u12;
    t14 = nlInvertSqrt(u13);
    u15 = *(float *)((((int)stk + 4) + 0x4));
    u16 = u13;
    u16 = u16 + u15 * u15;
    t17 = nlInvertSqrt(u16);
    nlRotateXSC((-((*(float *)((((int)stk + 4) + 0x4))) * t17)), (t17 / t14));
    nlRotateYSC(((*(float *)((((int)stk + 4) + 0x0))) * t14), (-((*(float *)((((int)stk + 4) + 0x8))) * t14)));
    return (nlTranslateNV(a4));
}


int nlGetNormalCalcMatrix(int a4, float f4, float f5, float f6, float f7, float f8, float f9)
{
    int stk[22];
    register int t0;
    register int t2;
    register int t4;
    register int t14;

    *(unsigned int *)(((int)stk + 8)) = a4;
    if (a4 == 0) {
        t0 = nlGetMatrix(0x0);
        nlGetMatrix((((int)stk + 4) + 0x8));
        t4 = t0;
    } else {
        t2 = ((int (*)(int, int, float, float, float, float, float, float))(nlCopyMatrix))((((int)stk + 4) + 0x8), a4, f4, f5, f6, f7, f8, f9);
        t4 = a4;
    }
    *(unsigned int *)(((int)stk + 4)) = t4;
    nlOuterProduct(((*(int *)(((int)stk + 4))) + 0x10), (t4 + 0x20), (((int)stk + 4) + 0x8));
    *(unsigned int *)(((int)stk + 4)) = t4;
    nlOuterProduct((t4 + 0x20), t4, (((int)stk + 4) + 0x18));
    *(unsigned int *)(((int)stk + 4)) = t4;
    nlOuterProduct((*(int *)(((int)stk + 4))), (t4 + 0x10), (((int)stk + 4) + 0x28));
    if ((*(int *)(((int)stk + 8))) == 0) {
        t14 = (nlLoadMatrix((((int)stk + 4) + 0x8)));
    } else {
        t14 = (((int (*)(int, int, int, int, int))(nlCopyMatrix))(t4, (((int)stk + 4) + 0x8), 0x0, 0x0, *(int *)((int)stk + 4)));
    }
    return t14;
}


int nlDispStripFreeTexture(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((unsigned int)(*(int *)((((*(int *)0x0C2AEC84) + ((a4 << 2) << 1)) + 0x0))) > (unsigned int)0x0) {
        t0 = *(int *)0x0C2AEC84;
        *(unsigned int *)(((t0 + ((a4 << 2) << 1)) + 0x0)) = ((*(int *)(((t0 + ((a4 << 2) << 1)) + 0x0))) - 1);
        t1 = (t0 + ((a4 << 2) << 1));
        if ((*(int *)((((*(int *)0x0C2AEC84) + ((a4 << 2) << 1)) + 0x0))) == 0) {
            t0 = *(int *)((((*(int *)0x0C2AEC84) + ((a4 << 2) << 1)) + 0x4));
            t2 = *(int *)0x0C2B29C0;
            if ((*(int *)((((t0 * 0x3C) + t2) + 0x28))) == 0) {
                t3 = kmFreeTexture(((t0 * 0x3C) + t2));
                if (t3 != 0) {
                    *(unsigned int *)0x0C2B793C = 0x2;
                    for (;;) {
                    }
                }
            }
            *(unsigned int *)((((t0 * 0x3C) + t2) + 0x2C)) = 0x0;
            *(unsigned int *)((((t0 * 0x3C) + t2) + 0x38)) = 0xFFFFFFFF;
            t2 = nlCommonTextureClearTextureIndex(t0);
            *(unsigned int *)((((*(int *)0x0C2AEC84) + ((a4 << 2) << 1)) + 0x4)) = 0xFFFFFFFF;
            t1 = t2;
        }
        t0 = t1;
    }
    return t0;
}


int nlObjPutSetPaletteOffset(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t1 = *(int *)0x0C14A644;
    t2 = t1;
    if ((t1 == 1) && (t0 = *(int *)((a4 + 0x0)), (int)t0 >= 0)) {
        t0 = *(int *)((a4 + 0x18));
        t1 = t0;
        if (t0 != 0) {
            t0 = 0x0C14A644;
            t3 = (a4 + 0x18);
            for (;;) {
                t4 = *(int *)((t3 + 0xC));
                t5 = t3;
                t3 = (t3 + 0x50);
                if (((((unsigned int)t4 >> 27) & 0x7) == 5) || ((((unsigned int)t4 >> 27) & 0x7) == 6)) {
                    t0 = (*(int *)((t5 + 0xC)));
                    t0 = (t0 & 0xF81FFFFF);
                    t0 = (t0 | (((*(int *)((t5 + 0x3C))) + a5) << 21));
                    *(unsigned int *)((t5 + 0xC)) = t0;
                }
                t3 = (t3 + (*(int *)((t5 + 0x4C))));
                if ((*(int *)((t3 + 0x0))) == 0) {
                    break;
                }
            }
            t1 = 0x4C;
        }
        t2 = t1;
    }
    return t2;
}


