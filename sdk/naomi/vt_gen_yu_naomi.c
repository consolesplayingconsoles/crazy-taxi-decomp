/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_yu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXCRS_Lock(int);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int, ...);
int ADXSJD_GetLpEndOfst(int);
int ADXSJD_GetLpEndPos(int);
int ADXSJD_GetLpStartOfst(int);
int ADXSJD_GetLpStartPos(int);
int ADXSJD_SetDecPos(int, int);
int ADXSJD_SetTrapCnt(int, int);
int ADXSJD_SetTrapDtLen(int, int);
int ADXSJD_SetTrapNumSmpl(int, int);
int ADXT_Stop(int);
int nlUnitVector(int);
int SJMEM_Create(int, int);
int SJ_SplitChunk(int, int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int adxt_start_sj(int, int);
int dbgMenuGetSelect(void);
int dbgMenuGetValue(int, int);
int dbgMenuIsPage(int);
int dbgMenuSetValue(int, int, int);
int endingModelSet(int);
int endingSprAnimInit(void);
int gdFsCheckMedia(int);
int gdFsGetDirEnt(int, int, int, int);
int gdFsGetDirInfoG(int, int);
int gdFsGetLE4(int);
int gdFsLockDir(int);
int gdFsReadWG(int, int, int);
int gdFsReopenHn(int, int, int, int);
int gdFsWaitCompleteReq(int);
int gdGdcGetCmdStat(int, int);
int kmSetBorderColor(int, ...);
int kmyRegisterBGPlane(int);
int kmyiSetScreenSize(int);
int memset(int, int, int);
int motFileLoadStep(int, int, int, int);
int motionSet(int, int, int, int, int, int, float);
int nlCalcPoint(int, int);
int nlCalcPoint4(int, int);
float nlInnerProduct(int, int);
int nlLineCalcColor(int, int);
int nlLineClipNear(int, int);
int nlLineDrawThick(int, int, int, int);
int nlLineSendHeader(int);
int nlMultiMatrix(int);
int nlMultiMatrix8(int);
int nlMultiMatrixRevOrder8(int);
int nlMultiPushedMatrix(void);
int nlObjPutLoadTexture(int, int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSearchPalette(int, int);
int nlSetCommonTextureOffset(int);
int nlSetPaletteData(int, int, int);
int nlSetPaletteMap(int, int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlTranslateNV(int);
int nlTranslateV(int);
int nl_set_cnv_proj_pers(void);
int nlsndBlockMove(int, int, int);
int nlsndCheckPackIndex(int, int, int);
int nlsndCheckPackReloadError(int, int);
int nlsndG2Write(int, int);
int nlsndG2WriteN(int, int, int);
int nlsndPackLoadInit(int, int, int, int);
int nlsndSystemControl(int, int, int);
int nlsnd_PL_WaitAica1(void);
int nlsnd_PL_WaitAica2andGo(void);
int nlsnd_PL_WaitBlockMove(void);
int nlsnd_PL_WaitRequest(void);
int objListPut(int, int, int);
int playerInit(int, int);
int shopPowi(int, int);
int sndCrowdAmbStart(void);
int sndPack4Load(int);
int strmBgmPlay(int);
int syChainAddHandler(int, int, int, int);
int FUN_8c0d3804(int a4, int a5, int a6, int a7);
int FUN_8c1dd6e4(void);
int nlPerspectiveProj(int a4, int a5, int a6);
int FUN_8c0f2fd0(int a4, int a5);
int FUN_8c013d28(int a4);
int FUN_8c0e716e(int a4, int a5);
int ADXT_InsertSilence(int a4, int a5, int a6);
int kmiProcessVertex_01(int a4, int a5, int a6, int a7);
int gdFsDaPlayG(int a4, int a5, int a6);
int nlLookAtUp(int a4, int a5, int a6);
int FUN_8c1f5b60(void);
int nlMirrorDouble(int a4);
int kmyInitializeVGA(int a4);
int gdFsDaPlaySctG(int a4, int a5, int a6);
int nlParallelProj(int a4);
int adxt_trap_entry(int a4);
int nlObjPutCheckSideCulling(int a4);
int ADXT_StartMemIdx(int a4, int a5, int a6);
int nlSysMetricsGetFrameBufferUser(int a4, int a5, int a6);
int nlLookAtUp_L(int a4, int a5, int a6);
int kmiProcessVertex_02(int a4, int a5, int a6, int a7);
int kmiProcessVertex_10(int a4, int a5, int a6, int a7);
int gdFsDaPauseG(void);
int gdDcfRepStat_(int a4, int a5);
int nlFrustum(float f4, float f5, float f6, float f7, float f8, float f9);
int nlFatalErrorTrap(int a4);
int nlsndPackReload(int a4, int a5);
int kmiProcessVertex_15(int a4, int a5, int a6, int a7);
int nlFrustum_L(float f4, float f5, float f6, float f7, float f8, float f9);
int nlsndPackReloadBG(int a4, int a5, int a6);
int nlDispStripLoadPalette(int a4, int a5);
int nlsndPackLoadLock(int a4, int a5, int a6);


int nlMirrorDouble(int a4)
{
    int stk[20];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float u11;
    register float u12;
    register float u15;
    register float u16;
    register float u19;
    register float u20;
    register float t21;

    u0 = *(float *)((a4 + 0xC));
    u1 = (u0 * u0);
    u2 = (u1 * (1.0f + 1.0f));
    u2 = -u2;
    *(float *)(((int)stk + 4)) = (u2 + 1.0f);
    u3 = *(float *)((a4 + 0x10));
    u4 = (u3 * u3);
    u5 = (u4 * (1.0f + 1.0f));
    u5 = -u5;
    *(float *)(((int)stk + 24)) = (u5 + 1.0f);
    u6 = *(float *)((a4 + 0x14));
    u7 = (u6 * u6);
    u8 = (u7 * (1.0f + 1.0f));
    u8 = -u8;
    *(float *)(((int)stk + 44)) = (u8 + 1.0f);
    u11 = ((*(float *)((a4 + 0xC))) * (*(float *)((a4 + 0x10))));
    u12 = (u11 * (1.0f + 1.0f));
    u12 = -u12;
    *(float *)((((int)stk + 4) + 0x10)) = u12;
    *(float *)((((int)stk + 4) + 0x4)) = u12;
    u15 = ((*(float *)((a4 + 0xC))) * (*(float *)((a4 + 0x14))));
    u16 = (u15 * (1.0f + 1.0f));
    u16 = -u16;
    *(float *)((((int)stk + 4) + 0x20)) = u16;
    *(float *)((((int)stk + 4) + 0x8)) = u16;
    u19 = ((*(float *)((a4 + 0x10))) * (*(float *)((a4 + 0x14))));
    u20 = (u19 * (1.0f + 1.0f));
    u20 = -u20;
    *(float *)((((int)stk + 4) + 0x24)) = u20;
    *(float *)((((int)stk + 4) + 0x18)) = u20;
    t21 = nlInnerProduct(a4, (a4 + 0xC));
    *(float *)(((int)stk + 52)) = ((t21 + t21) * (*(float *)((a4 + 0xC))));
    *(float *)(((int)stk + 56)) = ((t21 + t21) * (*(float *)((a4 + 0x10))));
    *(float *)(((int)stk + 60)) = ((t21 + t21) * (*(float *)((a4 + 0x14))));
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    *(float *)(((int)stk + 64)) = 1.0f;
    return (nlMultiMatrix(((int)stk + 4)));
}


int nlObjPutCheckSideCulling(int a4)
{
    int stk[7];
    register float u0;
    register float u1;
    register float u7;
    register float u9;
    register float u10;
    register float u11;
    register float u12;
    register float u16;
    register float u18;
    register float u19;
    register float u21;
    register float u24;

    *(unsigned int *)(((int)stk + 4)) = a4;
    u0 = *(float *)(((a4 + 0x14) + 0x0));
    u1 = *(float *)0x0C2B7BE8;
    nlPushMatrix(0x0);
    nlMultiMatrixRevOrder8(0x0C2B34A8);
    nlCalcPoint(((*(int *)(((int)stk + 4))) + 0x8), (((int)stk + 4) + 0x4));
    nlPopMatrix(0x1);
    u7 = *(float *)(((int)stk + 8));
    if (!((*(float *)0x0C2B3174) > (u7 + (u0 * u1)))) {
        u9 = *(float *)0x0C14A82C;
        u10 = *(float *)(((int)stk + 12));
        *(float *)(((int)stk + 12)) = (u10 - (u9 * u7));
        u11 = *(float *)0x0C2B3490;
        u12 = (u0 * u1);
        if ((u10 - (u9 * u7)) > (-(u11 * u12))) {
            *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - ((*(float *)0x0C14A830) * (*(float *)(((int)stk + 8)))));
            u16 = *(float *)0x0C2B3490;
            u18 = (u0 * u1);
            if ((*(float *)(((int)stk + 16))) > (-(u16 * u18))) {
                u19 = *(float *)(((int)stk + 8));
                u21 = (u11 * u12);
                u21 = u21 + u19 * (*(float *)0x0C14A824);
                if (u21 > (*(float *)(((int)stk + 12)))) {
                    u24 = (u16 * u18);
                    u24 = u24 + u19 * (*(float *)0x0C14A828);
                    if (!(u24 > (*(float *)(((int)stk + 16))))) {
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


int nlLookAtUp_L(int a4, int a5, int a6)
{
    int stk[30];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a6;
    nlSubVector3op((((int)stk + 4) + 0x8), a5, (*(int *)(((int)stk + 4))));
    nlOuterProduct((*(int *)(((int)stk + 8))), (((int)stk + 4) + 0x8), (((int)stk + 4) + 0x20));
    nlOuterProduct((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
    nlUnitVector((((int)stk + 4) + 0x20));
    nlUnitVector((((int)stk + 4) + 0x14));
    nlUnitVector((((int)stk + 4) + 0x8));
    *(float *)(((int)stk + 48)) = (*(float *)(((int)stk + 36)));
    *(float *)(((int)stk + 64)) = (*(float *)(((int)stk + 40)));
    *(float *)(((int)stk + 80)) = (*(float *)(((int)stk + 44)));
    *(float *)(((int)stk + 96)) = 0.0f;
    *(float *)(((int)stk + 52)) = (*(float *)(((int)stk + 24)));
    *(float *)(((int)stk + 68)) = (*(float *)(((int)stk + 28)));
    *(float *)(((int)stk + 84)) = (*(float *)(((int)stk + 32)));
    *(float *)(((int)stk + 100)) = 0.0f;
    *(float *)(((int)stk + 56)) = (*(float *)(((int)stk + 12)));
    *(float *)(((int)stk + 72)) = (*(float *)(((int)stk + 16)));
    *(float *)(((int)stk + 88)) = (*(float *)(((int)stk + 20)));
    *(float *)(((int)stk + 104)) = 0.0f;
    *(float *)(((int)stk + 60)) = 0.0f;
    *(float *)(((int)stk + 76)) = 0.0f;
    *(float *)(((int)stk + 92)) = 0.0f;
    *(float *)(((int)stk + 108)) = 1.0f;
    nlMultiMatrix((((int)stk + 4) + 0x2C));
    return (nlTranslateNV((*(int *)(((int)stk + 4)))));
}


