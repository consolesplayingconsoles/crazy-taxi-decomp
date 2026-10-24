/* Straight-line functions with calls and guards (batch gen_cd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Act_Init(void);
int bootDevRecv(int, int);
int bootDevSend(int, int);
int gdc_CourseLoadWait(void);
int gdc_CourseStartLoadReq(void);
int SetLight(int, int);
int InitLandmark(void);
int InitCollision(int);
int InitKyakuStopArea(void);
int cycleAdvCheck(void);
int nd_peopleInitialize(int);
int Init_nd_Sprite(void);
int nlSetBackColor(void);
int nlsndPackLoad(int, int);
int nlsndPackFree(void);
int gdFsInitSub(void);
int kmtex_TextureSize(int);
int gdFsGetGdDcf(void);
int GoiTool(int);
int InitColliObj(int);
int InitHelicopter(void);
int InitSetObject(void);
int Init_DCmini(void);
int Init_Fog(void);
int replayChangeControl(int);
int LightEffect(int);
int PutCourse_Init(int);
int ResetLight(void);
int SetStartCamera(void);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int entryCarPut(int);
int extRandomSeed(int);
int gdFsCreateDirhn(int, int);
int gdFsCreateHnG(int);
int gdc_FileLoad(int, int, int);
static float iaFscaC(int a)
{
    float s;
    float c;

    _builtin_fsca(a, &s, &c);
    return c;
}
static float iaFscaS(int a)
{
    float s;
    float c;

    _builtin_fsca(a, &s, &c);
    return s;
}
int initCamera(int);
int initPlayerADV(void);
int initPlayer(void);
int init_CarMain(void);
int init_GameSystem(void);
int init_KyakuMain(void);
int nlInitEvent(void);
int nlInitHeapMemory(int, int);
int trafficControl(int);
float nlFastSinCos(int a4, int a5, int a6);
int gdFsInitG(int a4, int a5, int a6, int a7, int a8);
int bootParsePacket(int a4);
int kmtex_CheckTextureFormat(int a4, int a5, int a6, int a7);
int gameState0(void);
int Chat_Getoff(int a4);

float nlFastSinCos(int a4, int a5, int a6)
{
    float u0;
    float u1;

    u0 = iaFscaS(a4);
    u1 = iaFscaC(a4);
    *(float *)((a5 + 0x0)) = u0;
    *(float *)((a6 + 0x0)) = u1;
    return u0;
}

