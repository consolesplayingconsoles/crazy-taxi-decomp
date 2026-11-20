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


int gdDcfRead_(int a4, int a5, int a6, int a7)
{
    int stk[9];

    register int R2;
    register int R3;
    int R6;
    int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_1 = a4;
    v0_2 = a5;
    R6 = a6;
    v0_3 = a7;
    *(unsigned int *)(((int)stk + 4)) = v0_2;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = v0_1;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = (*(int *)(((int)stk + 4)));
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0xC)) = 0x0;
    R13 = (R6);
    v0_0 = ((((int)stk + 4) + 0x4));
    v0_2 = (((((int)stk + 4) + 0x4) + 0x8));
    R6 = ((0x1FFFFFFF & R6));
    if ((v0_3 != 1)) goto L_8C1E6772;
    v0_1 = (0x11);
    L_8C1E677C:;
    *(unsigned int *)((v0_2 + 0x0)) = R6;
    v0_1 = gdGdcReqCmd(v0_1, v0_0);
    v0_0 = (v0_1);
    if ((v0_1 == 0)) goto L_8C1E67BA;
    if (((((int)R13 >> 28) & 0xE) == 10)) goto L_8C1E67BA;
    v0_2 = (((((*(int *)(((int)stk + 4))) << 8) << 2) << 1));
    if (((0x1F & R13) != 0)) goto L_8C1E67B4;
    syCacheOCBI(R13, v0_2);
    L_8C1E67BA:;
    v0_0 = (v0_0);
    L_8C1E67BC:;
    return v0_0;
    L_8C1E67B4:;
    syCacheOCBP(R13, v0_2);
    goto L_8C1E67BA;
    L_8C1E6772:;
    if ((v0_3 != 0)) goto L_8C1E6780;
    v0_1 = (0x10);
    R6 = ((R6 | 0xA0000000));
    goto L_8C1E677C;
    L_8C1E6780:;
    v0_0 = (0xFFFFFFEE);
    goto L_8C1E67BC;
}


int syTmrInt1SetEx(int a4, int a5, int a6, int a7)
{
    register int t19;

    t19 = 0xFFFFFFFF;
    if (((*(signed char *)0xFFD80004) & 2) == 0) {
        *(unsigned char *)0xFFD80000 = 0x0;
        *(unsigned char *)0xFFD80004 = ((*(signed char *)0xFFD80004) & 0xFD);
        *(unsigned short *)0xFFD8001C = a7;
        if (a5 != 0) {
            *(unsigned int *)((((int)_builtin_get_vbr()) + 0x244)) = 0x8C1E90CC;
            *(unsigned int *)0x8C461B7C = a5;
            *(unsigned int *)0x8C461B80 = a6;
            *(unsigned short *)0xFFD8001C = ((*(short *)0xFFD8001C) | 0x20);
            *(unsigned short *)0xFFD00004 = (((*(short *)0xFFD00004) & 0xFFFFF0FF) | 0xF00);
            *(unsigned short *)0xFFD8001C = ((*(short *)0xFFD8001C) & 0xFFFFFEFF);
        }
        *(unsigned int *)0xFFD80014 = a4;
        *(unsigned int *)0xFFD80018 = a4;
        *(unsigned char *)0xFFD80004 = ((*(signed char *)0xFFD80004) | 0x2);
        if (a5 == 0) {
            for (;;) {
                if (((*(short *)0xFFD8001C) & 0x100) != 0) {
                    break;
                }
            }
            *(unsigned char *)0xFFD80004 = ((*(signed char *)0xFFD80004) & 0xFD);
            *(unsigned short *)0xFFD8001C = ((*(short *)0xFFD8001C) & 0xFFFFFEFF);
        }
        t19 = 0x0;
    }
    return t19;
}


int syTmrGenSetInt(int a4, int a5)
{
    int stk[2];
    register int t1;
    register int t6;
    register int t5;
    register int t17;
    register int t15;

    *(unsigned char *)(((int)stk + 4)) = (*(signed char *)0xFFD80004);
    t1 = *(signed char *)0xFFD80004;
    *(unsigned char *)0xFFD80004 = (t1 & 0xFB);
    t6 = (t1 & 0xFB);
    if (a4 != 0) {
        *(unsigned int *)((((int)_builtin_get_vbr()) + 0x248)) = 0x8C1E90F0;
        *(unsigned int *)0x8C461B84 = a4;
        *(unsigned int *)0x8C461B88 = a5;
        *(unsigned short *)0xFFD80028 = ((*(short *)0xFFD80028) | 0x20);
        *(unsigned short *)0xFFD00004 = (((*(short *)0xFFD00004) & 0xFFFFFF0F) | 0xF0);
        t5 = *(short *)0xFFD80028;
        *(unsigned short *)0xFFD80028 = (t5 & 0xFFFFFEFF);
        t6 = (t5 & 0xFFFFFEFF);
    }
    *(unsigned char *)0xFFD80004 = (*(signed char *)(((int)stk + 4)));
    t17 = t6;
    if (a4 == 0) {
        *(unsigned char *)0xFFD80000 = 0x0;
        *(unsigned char *)0xFFD80004 = ((*(signed char *)0xFFD80004) | 0x4);
        for (;;) {
            if (((*(short *)0xFFD80028) & 0x100) != 0) {
                break;
            }
        }
        t15 = *(signed char *)0xFFD80004;
        *(unsigned char *)0xFFD80004 = (t15 & 0xFB);
        *(unsigned short *)0xFFD80028 = ((*(short *)0xFFD80028) & 0xFFFFFEFF);
        t17 = (t15 & 0xFB);
    }
    return t17;
}


int gdDcfTrans32_(int a4, int a5, int a6)
{
    int stk[7];
    register int t0;

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a5;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = a6;
    t0 = gdGdcReqDmaTrans(a4, ((int)stk + 4));
    if ((t0 == 0) && (a6 != 0)) {
        if ((((int)a5 >> 28) & 0xF) != 10) {
            if ((0x1F & a5) == 0) {
                syCacheOCBI(a5, a6);
            } else {
                syCacheOCBP(a5, a6);
            }
        }
    }
    return t0;
}


