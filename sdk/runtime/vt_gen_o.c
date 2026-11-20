/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_o): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXERR_CallErrFunc(int, ...);
int ADXSJD_SetInSj(int, int);
int ADXSJD_Start(void);
int ADXSTM_Close(int);
int ADXT_Stop(void);
int abs(int);
int _lsft(int, int);
int mwlSbSetFx(int, int, int);
int mwlSbSetPitch(int, int, int);
int mwlSbSetFilter(int, int, int);
int mwlSbSetGain(int, int);
int set_event2(int, int);
int vecMake(float, float, float);
int cpuAimPointSet(int, int, float, float);
int sprInitRectF(int, int, int, int, int, int);
int rankDrawTbl1(void);
int rankDrawTbl2(void);
int nlObjPutMVAsm(int, int, int, int);
int _setsbit(int, int, int);
int ADXT_GetOutVol(int);
int ADXSTMF_Create(int, int, int, int);
int ADXF_Ocbi(int, int);
int SJMEM_Lock(void);
int SJMEM_Unlock(int, int);
extern float _builtin_fipr(float *, float *);
extern int _builtin_get_imask(void);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_set_imask(int);
extern void _builtin_st_ext(float (*)[4]);
int _mult(int, int, int);
int gdFsOpenRange(void);
int kmFreeTexture(int);
int kmyAllocateArea(int, int, int);
int kmyConvertAddress64to32(int);
int kmyGetDisplayParametersInfo(int, int, int);
int kmyiCheckNativeHandle(int);
int memmove(int, int, int);
int mwRnaErrCallFunc(int, ...);
int nlCalcPoint(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRand(void);
int nlRotateAY(int);
int nlsndCheckPackFreeError(int);
int nlsndG2Read(int);
int nlsndPackFreeInit(int, int, int);
int nlsndStreamChgPan(int, int, int);
int nlsndStreamGetHdInfo(int, int);
int nlsndStreamSetHdInfo(int, int);
int nlsndStreamSetHdPan(int, int, int);
int set_event(int, int);
int strncpy(int, int, int);
int nlFreeTextureAll(void);
int mwRnaSetPitch(int a4, int a5, int a6);
float valStepToward(int a4, float f4, float f5);
int cpuDblIsMyBall(int a4);
int _mult64(int a4, int a5, int a6, int a7);
int adxt_start_sj(int a4, int a5);
int ADXSTM_OpenRange(int a4, int a5, int a6);
int decoGaugeSprInit(void);
int padIdleFrames(void);
void nlFastInvertMatrix(void);
int adxf_SetCmdHstry(int a4, int a5, int a6, int a7, int a8);
int SJMEM_IsGetChunk(int a4, int a5, int a6, int a7);
int angleLerp(int a4, int a5, float f4);
int nlsndPackFreeBG(int a4);
int search_dir_by_startfat(int a4, int a5);
int kmyGetFrameBufferSize(int a4);
int mwlSbSetDrctLvl(int a4, int a5);
float nlSinfReduce(int a4, float f4);
int nlObjPutMvSub(int a4, int a5);
int mwRnaSetBitPerSmpl(int a4, int a5);
int kmyConnectInterrupt(int a4, int a5, int a6);
int kmySetPassInfo(int a4, int a5, int a6);
int strmBgmFadeOut(int a4, int a5);
int kmyZeroMemory(int a4, int a5);
int mwRnaSetOutPan(int a4, int a5, int a6);
int SJRBF_GetNumData(int a4, int a5);
int kmyAllocateFrameBuffer(int a4, int a5, int a6);
int mwSbSetExPrm(int a4, int a5, int a6, int a7);
int evVoiceFadeOut(int a4);
int search_fat_backward(int a4, int a5, int a6, int a7);
int kmyGetPassInfo(int a4, int a5, int a6);
int kmtex_ConfirmSmallVQ(int a4);
int kmtex_TextureSize_Twiddled(int a4);
float rndRangef(float f4);
int matchPropStart(void);
int rankDraw(void);
float nlRoundUp(float f4);
int nlsndStreamIsPlaying(int a4);
int nlInitInterruptDC(void);
void syChainInit(void);
int mwRnaSetDrctLvl(int a4, int a5);
int syG2DmaSetProtect(int a4, int a5);
int entryGetColorId(int a4);
int stageSegaQuadUVSet(int a4, float f4, float f5, float f6);
int evFadeValueTask(int a4);
int kmiConvertUVnum(int a4);
int mwSbSetPan(int a4, int a5, int a6);
int padVibRequest(int a4, int a5, int a6, int a7, int a8, int a9);
int adxf_CloseSjStm(int a4);
int SJMEM_GetNumData(int a4, int a5);
int kmyiSetScreenSize(int a4);
void vecFromYaw(int a4, int a5, int a6, int a7, int a8);
int cpuSglAimAddSides(int a4, int a5);
int hudFadeOutStart(int a4, int a5, int a6, int a7, int a8);
int exprPlayB(int a4, int a5, int a6);

static float iaFsrra(float x)
{
    return _builtin_fsrra(x);
}



int _mult64(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    int t11;
    int t12;
    int t13;
    int stk[10] = {0};

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = *(short *)((a4 + 0x0));
    *(unsigned short *)((a4 + 0x0)) = (a6 + t0);
    t1 = *(int *)(((int)stk + 8));
    t2 = *(int *)(((int)stk + 4));
    _mult(t2, t1, (((int)stk + 4) + 0x8));
    t4 = *(signed char *)(((((int)stk + 4) + 0x8) + 0x0));
    if (((unsigned char)t4 & 128) != 0) {
        t5 = *(short *)((a4 + 0x0));
        *(unsigned short *)((a4 + 0x0)) = (t5 + 0x1);
    } else {
        _lsft((((int)stk + 4) + 0x8), 0x10);
    }
    _setsbit((((int)stk + 4) + 0x8), 0x10, 0x42);
    t11 = *(signed char *)(((((int)stk + 4) + 0x8) + 0x8));
    *(unsigned char *)(((((int)stk + 4) + 0x8) + 0x8)) = (t11 & 0xE0);
    t12 = *(int *)(((int)stk + 4));
    t13 = memmove(t12, (((int)stk + 4) + 0x8), 0x9);
    return t13;
}
