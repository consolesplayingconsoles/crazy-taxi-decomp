extern int kyakuTaskExec();
/* Straight-line functions with calls and guards (batch gen_as): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Act_Init(void);
int Drv_StartAction(int, int, int);
int InitCollision(int);
int nd_peopleInitialize(int);
int nlSetPaletteMap(int, int);
int nlSetPaletteData(int, int, int);
int kmytex_FBAllocEntry(void);
int kmytex_FBEnQueueTop(int, int, int);
int GoiTool(int);
int InitColliObj(int);
int InitHelicopter(void);
int InitSetObject(void);
int Init_Fog(void);
int Init_Standard(void);
int LightEffect(int);
int Psg_Init(int, int, int);
int Psg_SetPosPtrSet(int, int);
int PutCourse_Init(int);
int ResetLight(void);
int Sound_Request(int, int);
int VSklIpPlay(int, int, int, int, int, int, float);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int colliBoxShapeInit(int, int);
int entryCarPut(int);
int extRandomSeed(int);
int humanDraw(int, int, int, int);
int initCamera(int);
int initPlayerADV(void);
int initPlayer(void);
int init_CarMain(void);
int init_GameSystem(void);
int init_KyakuMain(void);
int kmiGetProfileInt(int, int);
int kmiInitCallback(void);
int kmiInitRenderer(void);
int kmiInitializeBackGroundPlane(void);
int kmytex_FBDeQueueEntry(int, int, int);
int memset(int, int, int);
int nlCommonTextureGetNextTextureIndex(void);
int nlCreateTextureParam(int);
int nlInitEvent(void);
int nlInitHeapMemory(int, int);
int nlLoadTextureMem(int, int, int);
int nlSearchPalette(int, int);
int nlSpriteGetNextSpriteIndex(void);
int nlSpriteSetVtxContext(int);
int set_event(int, int);
int trafficControl(int);









