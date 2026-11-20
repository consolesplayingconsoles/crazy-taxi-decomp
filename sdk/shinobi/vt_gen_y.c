/* Library code: C that behaves like this game's own bytes. */
typedef struct { int w[6]; } Stk6;
/* Straight-line functions with calls and guards (batch gen_y): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int ADXERR_CallErrFunc(int, ...);
int ADXF_Close(int);
int ADXSTMF_Create(int, int, int, int);
int ADXSTM_Seek(int, int);
int VQalloc(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
int charaModelCount(int);
int charaTexFreeAll(void);
int colliObjInit(int, float);
int convert_support(int);
int fadeCaptureBegin(float);
int fadeCaptureEnd(int);
int gdFsOpen(int, int, int, int);
int kdDevGetControllerInfo(int, int);
extern int kdGetDriverMode();
int kmSetFogVertexColor(int, int, int, int, int);
int kmyiCheckNativeHandle(int);
int kmytex_GetSmallVQprofile(int, int);
float mathLineY(float, float, float, float, float);
int mtxGetPos(int, int, int);
int mwRnaErrCallFunc(int, ...);
int nlExecuteEvent(void);
int nlExecuteEvent2(void);
float nlExp(float);
int nlGetMatrix(int);
int nlLineClipPoint(int, int, int);
int nlLoadMatrix(int);
int nlObjPutFreeTextureOnce(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlSetCommonTextureOffset(int);
float nlSinfReduce(int, float);
int nlSingleLine(int, int, int, Stk3);
int nlSpriteLoadTextureOnce(int, int, int);
int nlTranslate(float, float, float);
int nlsndG2Read(int);
int nlsndG2Write(int, int);
int panelBodyPut(Stk3, float);
int panelPartAPut(Stk3, float);
int panelPartBPut(Stk3, float);
int panelPartCPut(Stk3, float);
int panelTopPut(Stk3, float);
int panelWordPut(int, Stk3, float);
int primSprDraw(int, int, int, int, Stk3);
int resSpRead(int);
int set_event(int, int);
int sprMatchFree(void);
extern int sprPutAt();
int sprPutAtAlpha(int, Stk3, float);
int sprPutCropH(int, int, int, Stk3, float, float);
int sprPutScaledAlpha(int, int, int, int, Stk3, float, float);
int sprSet266Free(int, ...);
int sprWtcFree(void);
int stageLoadInit(int);
int stageTexFree(void);
int stageTexSetGarbagedAll(void);
int stageWtcMainTexFree(void);
int strncpy(int, int, int);
int syCachePurgeAll(int, int, int, int);
float vecDist(Stk3, Stk3);
Stk3 vecMake(float, float, float);
int logoSmallPut(int a4, int a5, int a6, int a7, Stk4 p);
int evPackRamp(int a4, int a5, int a6, int a7);
int nlCommonTextureGetNextTextureIndex(int a4, int a5, int a6);
int nlsndSeqRequest(int a4);
int kmyAllocateSmallVQArea(int a4, int a5, int a6);
float shadowBallScale(float f4);
int panelDrawA(Stk4 s, float f4);
int panelDrawB(Stk4 s, float f4);
int panelDrawC(Stk4 s, float f4);
int rankEntryMain(float f4);
int resSpTexLoad(int a4);
float nlSinh(int a4);
int ADXSTM_OpenFileRange(int a4, int a5, int a6, int a7);
int countryStagePut(Stk4 p, float f4);
int charaTexFree(int a4);
int iconSlotPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5);
float nlTanfReduce(int a4, float f4);
void syCacheInit_P2_(int a4, int a5, int a6, int a7);
float cpuLineCrossXZ(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, float f4, float f5);
void effHitFlashSpawn(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
float courtDistScale(Stk6 p);
int _rsfts(int a4, int a5, int a6);
int fileLoadCloseSlot(int a4);
void nlSinf(float f4);
int _pd_peripheral_set_id(int a4, int a5, int a6, int a7);
int miniBallObjSpawn(void);
float hudNearAlpha(int a4);
int iconSlotPutB(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5);
int stageMinigameLoadBegin(int a4);
void syChainMasterHandlerPVR_V(void);
int mwRnaSetOutVol(int a4, int a5);
int kmySetFlickerFilterMode(int a4, int a5);
void worldToScreen(Stk4 s);
int hudCounterStep(int a4, int a5, int a6, int a7, int a8);
void nlTanf(float f4);
void camWorldToView(Stk4 s);
int decoGaugeDraw(int a4, int a5, int a6, int a7, Stk4 p, float f4);
int sklBindMatrices(int a4);
int nlLineClipNear(int a4, int a5);
float evDist2d(Stk4 s);
int cpuDebugBallLine(void);
int hudWordFlagDraw(void);
int nlFogVertexColor(int a4);
int panelMenuSprPutA(Stk4 p, float f4);



int _pd_peripheral_set_id(int a4, int a5, int a6, int a7)
{
    int t1;
    int t2;
    int t4;
    int t15;
    int t17;
    int t23;
    int t10;
    int t6;
    int t19;
    int stk[5];

    if (((*(int *)((a5 + 0x0))) & 1) != 0) {
        t1 = kdDevGetControllerInfo(((int)stk + 4), a5);
        if ((int)t1 < 0) {
            *(unsigned int *)((a4 + 0x4)) = 0x0;
            *(unsigned int *)((a4 + 0x0)) = 0x0;
            t10 = t1;
        } else {
            t2 = ((int (*)(int))(kdGetDriverMode))(0x5);
            if (t2 == 1) {
                t4 = convert_support((*(int *)(((int)stk + 4))));
                *(unsigned int *)((a4 + 0x4)) = t4;
                t6 = t4;
            } else {
                *(unsigned int *)((a4 + 0x4)) = (*(int *)(((int)stk + 4)));
                t6 = t2;
            }
            *(unsigned int *)((a4 + 0x0)) = (*(int *)((a4 + 0x4)));
            *(unsigned int *)((a4 + 0x24)) = (a5 + 0x14);
            t10 = t6;
        }
        t23 = t10;
    } else {
        t15 = ((int (*)(int, int, int, int))(kdGetDriverMode))(0x5, a5, a6, a7);
        if (t15 == 1) {
            t17 = convert_support((*(int *)(((int)stk + 4))));
            *(unsigned int *)((a4 + 0x4)) = t17;
            t19 = t17;
        } else {
            *(unsigned int *)((a4 + 0x4)) = (*(int *)(((int)stk + 4)));
            t19 = t15;
        }
        *(unsigned int *)((a4 + 0x0)) = (*(int *)((a4 + 0x4)));
        *(unsigned int *)((a4 + 0x24)) = (a5 + 0x14);
        t23 = t19;
    }
    return t23;
}
