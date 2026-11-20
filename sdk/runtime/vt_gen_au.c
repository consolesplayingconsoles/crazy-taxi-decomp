/* Library code: C that behaves like this game's own bytes. */
typedef struct { int w[4]; } Stk4;
/* Straight-line functions with calls and guards (batch gen_au): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int ADXPD_GetStat(int);
int ADXT_StartAfs(int, int, int);
int ADX_DecodeInfoAu(int, int, int, int, int, int, int, int, int, int, int);
int ADX_DecodeInfoSpsd(int, int, int, int, int, int, int, int, int, int, int);
int BupFailDialog(int);
int BupGetInfo(int);
int BupLoadFile(int, int, int, int);
int BupSaveFile(int, int, int, int);
int ballColliInit(void);
int buGetDiskInfo(int, int);
int buIsFormat(int);
int camMoveBegin(float, float);
int camSetEye(Stk3);
int camSetTarget(Stk3);
int colliObjInit(int, int, int, int, int, float);
int cpuAimAngleRate(int, int, int, int, int, float, float);
int cpuShotRange(int, int, int, int, int);
int cursorBoxPut(int);
int entryCountJoined(void);
int fmMngBit2Num(int, int);
int fmMngMcpy4(int, int, int);
int fmcalccrc(int, int);
int get_fat(int, int, int);
int get_vmstime(int, int);
int kmyConnectInterrupt(int, int, int);
int kmyEnableInterrupt(void);
int kmyInitDMADevice(void);
int kmyInitializeCallback(void);
int kmyInitializeDriver(void);
int kmyInitializeFog(void);
int kmyInitializeHardware(int);
int kmyInitializeInterrupt(void);
int kmyInitializeTA(int);
int kmyRegisterCallback(int, int, int);
int kmyRegisterPALEXTCallback(int);
int memset(int, int, int);
int motionRootAtFrame(int, int, int, int, int);
int motionSet(int, int, int, int, int, int, float);
int mtxGetPos(int, int, int);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlCalcPoint(int, int);
int nlDispStripTrnsl(int, int);
int nlLoadMatrix(int);
int nlMatrixMode(int);
int nlObjPut(int);
int nlObjPutSetFadeColorOffset(float, float, float);
int nlObjPutSetSaturate(float, float);
int nlObjPutTrnsl(int, float);
int nlPerspective(int, float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlScaleVector(int, int, float);
float nlSin(int);
int nlSubVector3op(int, int, int);
float nlTanf(float);
int nlTranslate(float, float, float);
int nlUnitMatrix(void);
int playerPut(int, int, int, int, int, int, int, int, int, int, int, int);
int primVertexSet(int, int, int, int, int, Stk3);
int resCautionReset(int);
int search_dir(int, int, int);
int set_event2(int, int);
int shadowPlayerDraw(int, int, int, int, int, int);
int sndSeDecide(void);
int sprSheetPut(int, float, float, float, float);
int sprSheetSet(int);
int strmVoiceSetVol(int);
int syBtFlRead(int, int, int);
int vecMake(int, int, int, int, int, float, float, float);
int vmsfs_read_retry(int, int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int cpuSglAimScoreAngle(int a4, int a5);
int vmsfs_fread1(int a4, int a5);
float padLcdProject(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
void swingBlurPut(int a4, float f4, float f5);
int courtAngleInSector(int a4, int a5);
int umpireInit(void);
int endPlayerPut(int a4, int a5, int a6, int a7);
int vmsfs_fgetinfo(int a4, int a5, int a6);
void hudSlideShow(int a4, int a5, float f4, float f5);
int ADXB_ExecOneWav16(int a4, int a5, int a6, int a7);
void strmVoicePlay(int a4, int a5);
int ADXB_DecodeHeaderAu(int a4, int a5, int a6);
int rectFrameDraw(int a4, float f4);
int endingCamera2Set(void);
int BupExecRequest(void);
int fmMngReadSctAllData(int a4);
int circuitDrawPrompt(void);
int endingScreenObjPutTrnsl(float f4);
float _in_fmods(int a4, float f4, float f5);
int kmInitDevice(int a4);
int ADXB_DecodeHeaderSpsd(int a4, int a5, int a6);
int ballInit(int a4, int a5, int a6, int a7);
int miniDrawModels(void);
int entryIsVersus(int a4, int a5, int a6, int a7);
int rankInsert1(void);
float cpuEdgeX(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int scorePressure(void);
int primRectDirX(int a4, int a5, int a6, int a7, Stk4 p);
int endingScreenObjPut(void);


float _in_fmods(int a4, float f4, float f5)
{
    float u16;
    float u17;
    int t18;
    float u24;
    float u27;
    float u31;
    int t1;
    int t2;
    int stk[9];
    int R1004;
    int R1008;
    int R1012;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = f4;
    *(float *)(((((int)stk + 4) + 0x14) + 0x0)) = f5;
    if ((((*(int *)(((((int)stk + 4) + 0x18) + 0x0))) & 0x7F800000) != 0x7F800000) && ((t1 = *(int *)(((int)stk + 24)), (t1 & 0x7F800000) != 0x7F800000) || (t2 = *(int *)(((int)stk + 24)), (t2 & 0x7FFFFF) == 0))) {
        if ((*(float *)(((int)stk + 24))) == 0.0f) {
            *(unsigned int *)((a4 + 0x0)) = 0x0;
            *(float *)(((((int)stk + 4) + 0x10) + 0x0)) = (*(float *)0x0C0DACD0);
        } else {
            if (((*(int *)(((((int)stk + 4) + 0x14) + 0x0))) & 0x7F800000) == 0x7F800000) {
                *(unsigned int *)((a4 + 0x0)) = 0x0;
                *(float *)(((((int)stk + 4) + 0x10) + 0x0)) = f4;
            } else {
                R1012 = ((*(int *)(((((int)stk + 4) + 0x18) + 0x0))) & 0x80000000);
                *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x0)) = ((*(int *)(((((int)stk + 4) + 0x18) + 0x0))) & 0x7FFFFFFF);
                *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x0)) = ((*(int *)(((((int)stk + 4) + 0x14) + 0x0))) & 0x7FFFFFFF);
                u16 = *(float *)(((((int)stk + 4) + 0x14) + 0x0));
                u17 = *(float *)(((((int)stk + 4) + 0x18) + 0x0));
                *(float *)(((int)stk + 16)) = (u17 / u16);
                t18 = *(int *)(((int)stk + 16));
                R1004 = t18;
                R1008 = (t18 & 0x80000000);
                if ((int)(0x7F800000 & (R1004)) < (int)0x4F800000) {
                    *(float *)(((int)stk + 16)) = (float)(int)(u17 / u16);
                }
                *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) | (R1008));
                u24 = *(float *)(((int)stk + 16));
                u27 = u24;
                if (u24 > 2.14748365e+09f) {
                    u27 = (u24 + -4.2949673e+09f);
                }
                *(unsigned int *)((a4 + 0x0)) = (int)u27;
                u31 = (float)(int)u27;
                if ((int)(int)u27 < 0) {
                    u31 = ((float)(int)u27 + 4.2949673e+09f);
                }
                *(float *)(((((int)stk + 4) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 4) + 0x18) + 0x0))) - (u31 * (*(float *)(((((int)stk + 4) + 0x14) + 0x0)))));
                *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x0)) = ((*(int *)(((((int)stk + 4) + 0x10) + 0x0))) | (R1012));
            }
        }
    } else {
        *(unsigned int *)((a4 + 0x0)) = 0x0;
        *(float *)(((((int)stk + 4) + 0x10) + 0x0)) = (*(float *)0x0C0DACD0);
    }
    return (*(float *)(((((int)stk + 4) + 0x10) + 0x0)));
}
