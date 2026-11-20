/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_av): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
typedef struct { int w[10]; } Stk10;
typedef struct { int w[16]; } Stk16;
int ADXF_GetFsizeSct(int);
int ADXF_Open(int, int);
int ADXF_ReadNw32(int, int, int);
int ADXRNA_GetNumData(int);
int ADXRNA_GetNumRoom(void);
int ADXRNA_SetPlaySw(int, int);
int ADXSJD_GetBlkSmpl(int);
int ADXSJD_GetStat(int);
int ADXT_GetNumChan(int);
int resetBackColorZ(int, int, int, Stk16, float);
int SJRBF_Lock(void);
int SJRBF_Unlock(int, int);
int SJUNI_Lock(void);
int SJUNI_Unlock(int, int);
int VQDeQueueEntry(int, int);
float _app_coss(float);
float _app_sins(float);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
float _in_fmods(int, float, float);
int angStepToward(int, int, int);
int ballBoyPoseIdle(int);
int ballBoyPropPut(int);
int camProject(int, int, Stk3);
int camWorldToView(int, ...);
int colliObjEntry(int);
int cpuSglAimAddLv21(int, int);
int cpuSglAimTableCall(int, int);
int fileLoadCloseSlot(int);
int kdSetBlockWriteEx(int, int, int, int, int, int, int, int);
int kmBeginPass(int);
int kmBeginScene(int);
int kmEndPass(int);
int kmEndScene(int);
int kmRenderTexture(int, int);
int kmiFLWCTRLCheckTimeOut(int, int, int, int);
int kmiFLWCTRLRotateReadyQueue(int);
int kmiWriteRegister(int, int);
int kmyAllocateFrameBuffer(int, int, int);
int kmyFreeArea(int);
int kmyGetDisplayParametersInfo(int, int, int);
int kmyGetFrameBufferSize(int);
int kmyReleaseFrameBufferHandle(int);
int kmyRequestCallback(int);
int kmytex_VQFreeEntry(int);
int memset(int, int, int);
int nlCalcPoint(int, int);
int nlDispStripTexOfs(int, int, int);
int nlDispStripTrnsl(int, int);
float nlInnerProduct(int, int);
int nlLightDir(int, float, float, float);
int nlLoadMatrix33on44(int);
int nlMatrixMode(int);
int nlObjPut(int);
int nlObjPutSetLightDirectionV(int);
int nlOuterProduct(int, int, int);
int nlPerspective(int, float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRand(void);
float nlRandom(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlSetDummyTextureParameter(int);
int nlSetTextureParameter(int, int);
int nlSetWindowSize(float, float, float, float);
int nlSubVector3op(int, int, int);
float nlTanf(float);
int nlTranslate(float, float, float);
int nlUnitMatrix(void);
int nl_action_PixelClipping(void);
int nl_set_cnv_proj_pers(void);
int pdTmrIsReady(int);
int primTexVertexSet(int, int, int, int, int, Stk3, float, float);
int primVertexSet(int, int, int, int, int, Stk3);
int set_event(int, int);
int staffMorphBlend(int, int, int, float);
float valStepToward(int, float, float);
float vecLength(Stk4);
int vecMake(int, int, int, int, int, float, float, float);
float playerCalcMotionSpeeds(int a4, int a5, int a6, int a7);
int kmiSetFBSurfaceDesc(int a4);
int screenPlanePut(void);
int cpuPointBehind(int a4, int a5, int a6, int a7);
int primLineH(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13);
int fadeScreenDraw(int a4, int a5, int a6, int a7, float f4, float f5);
void nlRenderTextureEnd(void);
int kmiAllocateFB(int a4);
int entryDrawStripes(float f4);
void SJUNI_UngetChunk(int a4, int a5, int a6);
int emotFaceVtxGet(int a4, int a5, int a6);
int playerSetReceiveFlag(int a4, int a5);
int cpuSglAimLv21(int a4, int a5);
int fileLoadStartSlot(int a4, int a5, int a6, int a7);
int gdFsReqRdPio(int a4, int a5, int a6);
int miniPointPopSpawn(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int kmySetHSyncInterruptLine(int a4);
int VQFBfree(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int lightExec(int a4, int a5, int a6, int a7);
float bodyRaySphere(Stk10 s, float f4, float f5);
void ballBoyDrawIdle(int a4, float f4);
int primRectIncGradY(int a4, int a5, int a6, int a7, Stk4 p);
int pdTmrSetTime(int a4, int a5, int a6, int a7);
int adxt_stat_prep(int a4);
int SJRBF_GetChunk(int a4, int a5, int a6, int a7);
int kmySetDisplayFrameBuffer(int a4, int a5);
int selCursorReset(int a4, int a5);
int primRectDirY(int a4, int a5, int a6, int a7, Stk4 p);
int nlObjPutSetGarbagedTexture_Sub(int a4, int a5, int a6);
float _in_coss(float f4);
int kmyGetFrameBufferHandle(int a4);
int kmiFLWCTRLVsyncCallBackFunc(int a4, int a5, int a6, int a7);




int gdFsReqRdPio(int handleAddress, int requestedSectorCount, int destinationAddress)
{
    int requestResult;
    int idleDriveResult;
    int sectorPosition;
    int startFad;
    int sectorCount;
    int clampedSectorCount;
    int savedInterruptMask;
    int commandRequestId;
    int driverExecuteResult;
    int acceptedSectorCount;
    int handleAllocated;
    int fileRangeResult;
    int readSubmissionResult;

    requestResult = 0xFFFFFFF6;
    if ((handleAddress != 0) && (handleAllocated = *(short *)((handleAddress + 0x4C)), handleAllocated != 0)) {
        idleDriveResult = 0x0;
        if ((*(int *)(((*(int *)((handleAddress + 0x0))) + 0x1C))) == 0) {
            sectorPosition = *(int *)((handleAddress + 0x14));
            startFad = *(int *)((handleAddress + 0x8));
            sectorCount = *(int *)((handleAddress + 0x10));
            if ((int)(sectorPosition + startFad) < (int)(startFad + sectorCount)) {
                clampedSectorCount = requestedSectorCount;
                if ((int)(requestedSectorCount + (sectorPosition + startFad)) > (int)(startFad + sectorCount)) {
                    clampedSectorCount = ((startFad + sectorCount) - (sectorPosition + startFad));
                }
                if (clampedSectorCount == 0) {
                    *(unsigned int *)((handleAddress + 0x18)) = 0x0;
                    *(unsigned short *)((handleAddress + 0x50)) = 0x1;
                    readSubmissionResult = 0x0;
                } else {
                    savedInterruptMask = _builtin_get_imask();
                    _builtin_set_imask(0xF);
                    commandRequestId = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)((handleAddress + 0x0))) + 0xC))) + 0x4)))))((sectorPosition + startFad), clampedSectorCount, destinationAddress, 0x0);
                    if (commandRequestId != 0) {
                        *(unsigned int *)((handleAddress + 0x3C)) = commandRequestId;
                        *(unsigned int *)((handleAddress + 0x1C)) = clampedSectorCount;
                        *(unsigned short *)((handleAddress + 0x50)) = 0x2;
                        *(unsigned short *)((handleAddress + 0x4A)) = 0x1;
                        *(unsigned short *)((handleAddress + 0x48)) = 0x1;
                        *(unsigned int *)((handleAddress + 0x18)) = 0x0;
                        *(unsigned int *)(((*(int *)((handleAddress + 0x0))) + 0x1C)) = handleAddress;
                        driverExecuteResult = ((int (*)(void))((*(int *)(((*(int *)(((*(int *)((handleAddress + 0x0))) + 0xC))) + 0x40)))))();
                    } else {
                        *(unsigned short *)((handleAddress + 0x50)) = 0x1;
                    }
                    _builtin_set_imask(((unsigned int)(((savedInterruptMask & 0xF) << 2) << 2) >> 4));
                    acceptedSectorCount = 0x0;
                    if (commandRequestId != 0) {
                        acceptedSectorCount = clampedSectorCount;
                    }
                    readSubmissionResult = acceptedSectorCount;
                }
                fileRangeResult = readSubmissionResult;
            } else {
                *(unsigned int *)((handleAddress + 0x18)) = 0x0;
                *(unsigned short *)((handleAddress + 0x50)) = 0x1;
                fileRangeResult = 0x0;
            }
            idleDriveResult = fileRangeResult;
        }
        requestResult = idleDriveResult;
    }
    return requestResult;
}
