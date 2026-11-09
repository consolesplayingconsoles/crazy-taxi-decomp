/* Straight-line functions with calls and guards (batch gen_jj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Act_Init(void);
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
int nlSetBackColor(int, int, int, float);
int nlsndPackFree(int);
int nlsndPackLoad(int, int);
int replayChangeControl(int);
int trafficControl(int);
int gameState0(float f4);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o28_int { char p[0x28]; int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };


int gameState0(float f4)
{
    int t26;
    int t34;
    int t35;
    int t91;
    int t7;
    int t72;
    int t73;
    int t74;
    int t75;
    int t76;
    int t88;
    int t96;

    nlSetBackColor(0xFF000000, 0xFF000000, 0xFF000000, f4);
    if (((((struct o4_int *)0xC1EE20C)->v)) == 2) {
        gdc_CourseStartLoadReq();
    }
    gdc_CourseLoadWait();
    if ((((((struct o4_int *)0xC1EE20C)->v)) != 2) && (t7 = *(int *)0xC179488, (int)t7 < (int)0x4)) {
        nlsndPackFree(0x5);
        gdc_FileLoad(0xC870000, 0xC08AE58, 0x0);
        nlsndPackLoad(0xC870000, 0x5);
    }
    ResetLight();
    LightEffect(0x0);
    *(unsigned int *)0xC1799E4 = 0xC1799E8;
    nlInitHeapMemory(0xC1799E8, 0x30000);
    nlInitEvent();
    extRandomSeed(0x3039);
    if (((((struct o28_int *)0xC1EE20C)->v)) == 0) {
        initPlayerADV();
    } else {
        initPlayer();
    }
    Init_nd_Sprite();
    init_GameSystem();
    InitColliObj((*(int *)0xC179488));
    t26 = (((struct o0_int *)0xC1EE20C)->v);
    if (t26 != 0) {
        if (t26 != 1) {
            if (t26 != 2) {
                InitCollision(t26);
                PutCourse_Init(((((struct o0_int *)0xC1EE20C)->v)));
                nd_peopleInitialize(0x46);
            } else {
                t34 = (((struct o8_int *)0xC1EE20C)->v);
                t35 = t26;
                if (t34 != 15) {
                    t35 = t34;
                }
                InitCollision(t35);
                PutCourse_Init(((((struct o0_int *)0xC1EE20C)->v)));
                *(unsigned int *)0xC2A6FD8 = 0x0;
            }
        } else {
            InitCollision(t26);
            PutCourse_Init(((((struct o0_int *)0xC1EE20C)->v)));
            nd_peopleInitialize(0x32);
        }
    } else {
        InitCollision(t26);
        PutCourse_Init(((((struct o0_int *)0xC1EE20C)->v)));
        nd_peopleInitialize(0x46);
    }
    init_CarMain();
    if (((((struct o4_int *)0xC1EE20C)->v)) == 2) {
        Init_DCmini();
    }
    initCamera(0x0);
    if (((((struct o4_int *)0xC1EE20C)->v)) != 2) {
        SetStartCamera();
    }
    InitKyakuStopArea();
    if (((((((struct o0_int *)0xC1EE20C)->v)) == 2) && ((t72 = (((struct o8_int *)0xC1EE20C)->v), t72 != 2) && ((t73 = (((struct o8_int *)0xC1EE20C)->v), t73 != 3) && ((t74 = (((struct o8_int *)0xC1EE20C)->v), t74 != 1) && (t75 = (((struct o8_int *)0xC1EE20C)->v), t75 != 0))))) || (t76 = (((struct o0_int *)0xC1EE20C)->v), t76 != 2)) {
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
    (((struct o0_uint *)0xC2A4E50)->v) = 0x0;
    t91 = 0x2900;
    if ((((((struct o0_int *)0xC1EE20C)->v)) == 2) && (t88 = (((struct o8_int *)0xC1EE20C)->v), t88 == 1)) {
        t91 = 0x6100;
    }
    SetLight(0x2200, t91);
    Init_Fog();
    if ((int)((((struct o4_int *)0xC1EE20C)->v)) <= (int)0x1) {
        t96 = (cycleAdvCheck());
    } else {
        (((struct o4_uint *)0xC2A4E50)->v) = 0x0;
        t96 = 0xC2A4E54;
    }
    (((struct o2C_uint *)0xC1EE20C)->v) = (((((struct o2C_int *)0xC1EE20C)->v)) + 0x1);
    (((struct o34_uint *)0xC1EE20C)->v) = 0x0;
    return t96;
}
