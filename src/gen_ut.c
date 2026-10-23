/* Straight-line functions with calls and guards (batch gen_ut): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Act_Init(void);
int nlSetBackColor(int, int, int);
int nlsndPackFree(void);
int GoiTool(int);
int InitColliObj(int);
int InitCollision(int);
int InitHelicopter(void);
int InitKyakuStopArea(void);
int InitLandmark(void);
int InitSetObject(void);
int Init_DCmini(void);
int Init_Fog(void);
int Init_nd_Sprite(void);
int LightEffect(int);
int PutCourse_Init(int);
int ResetLight(void);
int SetLight(int, int);
int SetStartCamera(void);
int cycleAdvCheck(void);
int entryCarPut(int);
int extRandomSeed(int);
int gdc_CourseLoadWait(void);
int gdc_CourseStartLoadReq(void);
int gdc_FileLoad(int, int, int);
int initCamera(int);
int initPlayer(void);
int initPlayerADV(void);
int init_CarMain(void);
int init_GameSystem(void);
int init_KyakuMain(void);
int nd_peopleInitialize(int);
int nlInitEvent(void);
int nlInitHeapMemory(int, int);
int nlsndPackLoad(int, int);
int replayChangeControl(int);
int trafficControl(int);
int gameState0(void);

int gameState0(void)
{
    int t1;
    int t6;
    int t17;
    int t24;
    int t26;
    int t31;
    int t34;
    int t35;
    int t38;
    int t45;
    int t53;
    int t61;
    int t66;
    int t71;
    int t87;
    int t91;
    int t94;
    int t95;
    int t100;
    int t7;
    int t72;
    int t73;
    int t74;
    int t75;
    int t76;
    int t88;
    int t96;

    nlSetBackColor(0xFF000000, 0xFF000000, 0xFF000000);
    t1 = *(int *)0xC1EE210;
    if (t1 == 2) {
        gdc_CourseStartLoadReq();
    }
    gdc_CourseLoadWait();
    t6 = *(int *)0xC1EE210;
    if ((t6 != 2) && (t7 = *(int *)0xC179488, (int)t7 < (int)0x4)) {
        nlsndPackFree();
        gdc_FileLoad(0xC870000, 0xC08AE58, 0x0);
        nlsndPackLoad(0xC870000, 0x5);
    }
    ResetLight();
    LightEffect(0x0);
    *(unsigned int *)0xC1799E4 = 0xC1799E8;
    nlInitHeapMemory(0xC1799E8, 0x30000);
    nlInitEvent();
    extRandomSeed(0x3039);
    t17 = *(int *)0xC1EE234;
    if (t17 == 0) {
        initPlayerADV();
    } else {
        initPlayer();
    }
    Init_nd_Sprite();
    init_GameSystem();
    t24 = *(int *)0xC179488;
    InitColliObj(t24);
    t26 = *(int *)0xC1EE20C;
    if (t26 != 0) {
        if (t26 != 1) {
            if (t26 != 2) {
                InitCollision(t26);
                t31 = *(int *)0xC1EE20C;
                PutCourse_Init(t31);
                nd_peopleInitialize(0x46);
            } else {
                t34 = *(int *)0xC1EE214;
                t35 = t26;
                if (t34 != 15) {
                    t35 = t34;
                }
                InitCollision(t35);
                t38 = *(int *)0xC1EE20C;
                PutCourse_Init(t38);
                *(unsigned int *)0xC2A6FD8 = 0x0;
            }
        } else {
            InitCollision(t26);
            t45 = *(int *)0xC1EE20C;
            PutCourse_Init(t45);
            nd_peopleInitialize(0x32);
        }
    } else {
        InitCollision(t26);
        t53 = *(int *)0xC1EE20C;
        PutCourse_Init(t53);
        nd_peopleInitialize(0x46);
    }
    init_CarMain();
    t61 = *(int *)0xC1EE210;
    if (t61 == 2) {
        Init_DCmini();
    }
    initCamera(0x0);
    t66 = *(int *)0xC1EE210;
    if (t66 != 2) {
        SetStartCamera();
    }
    InitKyakuStopArea();
    t71 = *(int *)0xC1EE20C;
    if (((t71 == 2) && ((t72 = *(int *)0xC1EE214, t72 != 2) && ((t73 = *(int *)0xC1EE214, t73 != 3) && ((t74 = *(int *)0xC1EE214, t74 != 1) && (t75 = *(int *)0xC1EE214, t75 != 0))))) || (t76 = *(int *)0xC1EE20C, t76 != 2)) {
        init_KyakuMain();
    }
    InitSetObject();
    InitLandmark();
    InitHelicopter();
    Act_Init();
    entryCarPut(0x0);
    trafficControl(0x0);
    GoiTool(0x0);
    replayChangeControl(0xFFFFFFFE);
    *(unsigned int *)0xC2A4E50 = 0x0;
    t87 = *(int *)0xC1EE20C;
    t91 = 0x2900;
    if ((t87 == 2) && (t88 = *(int *)0xC1EE214, t88 == 1)) {
        t91 = 0x6100;
    }
    SetLight(0x2200, t91);
    Init_Fog();
    t94 = *(int *)0xC1EE210;
    if ((int)t94 <= (int)0x1) {
        t95 = cycleAdvCheck();
        t96 = t95;
    } else {
        *(unsigned int *)0xC2A4E54 = 0x0;
        t96 = 0xC2A4E54;
    }
    t100 = *(int *)0xC1EE238;
    *(unsigned int *)0xC1EE238 = (t100 + 0x1);
    *(unsigned int *)0xC1EE240 = 0x0;
    return t96;
}
