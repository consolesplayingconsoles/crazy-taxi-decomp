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









int kmiInitializeDriver(void)
{
    int t0;
    int t1;
    int t4;
    int t5;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;

    t0 = *(int *)0xC178268;
    if (t0 == 0) {
        *(unsigned int *)0xC178268 = 0xC2EA67C;
        t1 = *(int *)0xC178268;
        memset(t1, 0x0, 0x4F4);
    }
    *(unsigned int *)0xC2EAB70 = 0x3;
    *(unsigned int *)0xC2EAB74 = 0x2;
    *(unsigned int *)0xC2EAB78 = 0x6;
    *(unsigned int *)0xC2EAB7C = 0x1;
    *(unsigned int *)0xC2EAB80 = 0xC177FF8;
    *(unsigned int *)0xC2EA67C = 0xC2EAB70;
    *(unsigned int *)0xC2EA6B4 = 0x0;
    *(unsigned int *)0xC2EA6B8 = 0x0;
    *(unsigned int *)0xC2EA6BC = 0x0;
    *(unsigned int *)0xC2EA6D0 = 0x0;
    *(unsigned int *)0xC2EA6D4 = 0x0;
    *(unsigned int *)0xC2EAB58 = 0x1F0;
    *(unsigned int *)0xC2EAB5C = 0x200;
    *(unsigned int *)0xC2EAB60 = 0x210;
    *(unsigned int *)0xC2EAB64 = 0x220;
    *(unsigned int *)0xC2EAB68 = 0x230;
    kmiInitCallback();
    *(unsigned int *)0xC2EA888 = 0x0;
    *(unsigned int *)0xC2EA88C = 0x0;
    t4 = kmiGetProfileInt(0xC175C18, 0xC175C20);
    *(unsigned int *)0xC2EA864 = (t4 - 1);
    t5 = *(int *)0xC2EA864;
    *(unsigned int *)0xC2EA860 = t5;
    *(unsigned int *)0xC2EA690 = 0x10000;
    *(unsigned int *)0xC2EA694 = 0x800000;
    *(unsigned int *)0xC2EA698 = 0x800000;
    *(unsigned int *)0xC2EA848 = 0x0;
    *(unsigned int *)0xC2EA844 = 0x0;
    *(unsigned int *)0xC2EA840 = 0x0;
    *(unsigned int *)0xC2EA85C = 0x3;
    *(unsigned int *)0xC2EA928 = 0x1;
    kmiInitializeBackGroundPlane();
    t7 = kmiGetProfileInt(0xC175C18, 0xC175C2C);
    t8 = kmiGetProfileInt(0xC175C18, 0xC175C38);
    t9 = kmiGetProfileInt(0xC175C18, 0xC175C44);
    t10 = kmiGetProfileInt(0xC175C18, 0xC175C54);
    *(unsigned int *)0xC2EA714 = (((((unsigned int)((unsigned int)((unsigned int)t9 >> 8) >> 2) >> 1) << 8) << 2) << 1);
    *(unsigned int *)0xC2EA718 = (((((unsigned int)((unsigned int)((unsigned int)t10 >> 8) >> 2) >> 1) << 8) << 2) << 1);
    t11 = t10;
    t12 = 0xC2EA714;
    t13 = 0xC2EA718;
    t14 = 0x0;
    t15 = 0x0;
    t16 = 0x0;
    while ((unsigned int)t15 < (unsigned int)0x20) {
        t11 = 0xC2EA6EC;
        *(unsigned int *)((t15 + t11)) = t14;
        t12 = t14;
        t13 = t11;
        t12 = (t12 + (((((unsigned int)((unsigned int)((unsigned int)t7 >> 8) >> 2) >> 1) << 8) << 2) << 1));
        t13 = (t13 + t15);
        *(unsigned int *)((t13 + 0x4)) = t12;
        t12 = t14;
        t13 = t11;
        t12 = (t12 + ((((((unsigned int)((unsigned int)((unsigned int)t7 >> 8) >> 2) >> 1) << 8) << 2) << 1) + (((((unsigned int)((unsigned int)((unsigned int)t8 >> 8) >> 2) >> 1) << 8) << 2) << 1)));
        t13 = (t13 + t15);
        *(unsigned int *)((t13 + 0x8)) = t12;
        t12 = ((((((unsigned int)((unsigned int)((unsigned int)t9 >> 8) >> 2) >> 1) << 8) << 2) << 1) + ((((((unsigned int)((unsigned int)((unsigned int)t7 >> 8) >> 2) >> 1) << 8) << 2) << 1) + (((((unsigned int)((unsigned int)((unsigned int)t8 >> 8) >> 2) >> 1) << 8) << 2) << 1)));
        t13 = t11;
        t13 = (t13 + t15);
        t12 = (t12 + t14);
        *(unsigned int *)((t13 + 0xC)) = t12;
        t13 = 0x7D0000;
        t11 = 0xC2EA70C;
        t13 = (t13 - t14);
        *(unsigned int *)((t16 + t11)) = t13;
        t15 = (t15 + 0x10);
        t14 = (t14 + 0x400000);
        t16 = (t16 + 0x4);
    }
    *(unsigned int *)0xC2EA9C4 = 0x0;
    *(unsigned int *)0xC2EAAA0 = 0x0;
    *(unsigned int *)0xC2EA9CC = 0x0;
    *(unsigned int *)0xC2EA9D0 = 0xFFFFFFFF;
    *(unsigned int *)0xC2EA9D4 = 0xFFFFFFFF;
    *(unsigned int *)0xC2EA9D8 = 0xFFFFFFFF;
    *(unsigned int *)0xC2EA9DC = 0x0;
    *(unsigned int *)0xC2EA9E0 = 0x0;
    *(unsigned int *)0xC2EA9E4 = 0x0;
    *(unsigned int *)0xC2EAAAC = 0x0;
    *(unsigned int *)0xC2EAAB4 = 0x0;
    *(unsigned int *)0xC2EAAB0 = 0x1;
    t17 = kmiGetProfileInt(0xC175C64, 0xC175C74);
    *(unsigned int *)0xC2EAAC0 = t17;
    t18 = kmiGetProfileInt(0xC175C64, 0xC175C80);
    *(unsigned int *)0xC2EAAC4 = t18;
    t19 = kmiGetProfileInt(0xC175C18, 0xC175C8C);
    *(unsigned int *)0xC2EA6E4 = t19;
    t20 = kmiGetProfileInt(0xC175C18, 0xC175C9C);
    *(unsigned int *)0xC2EA8A4 = t20;
    t21 = kmiGetProfileInt(0xC175C18, 0xC175CAC);
    *(unsigned int *)0xC2EA8A8 = t21;
    t22 = kmiGetProfileInt(0xC175C18, 0xC175CBC);
    *(unsigned int *)0xC2EA8AC = t22;
    *(unsigned int *)0xC2EA854 = 0x0;
    *(unsigned int *)0xC2EA858 = 0x1;
    *(unsigned int *)0xC2EA6E8 = 0xF;
    t23 = *(int *)0xC2EA6E8;
    *(unsigned int *)0xC2EA6E8 = (t23 | 0x0);
    *(unsigned int *)0xC2EA898 = 0x0;
    *(unsigned int *)0xC2EA89C = 0x0;
    t24 = kmiInitRenderer();
    return t24;
}
