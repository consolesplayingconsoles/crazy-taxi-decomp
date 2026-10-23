/* Straight-line functions with calls and guards (batch gen_nd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Act_Init(void);
int Drv_StartAction(int, int, int);
int GoiTool(int);
int InitColliObj(int);
int InitCollision(int);
int InitHelicopter(void);
int InitSetObject(void);
int Init_Fog(void);
int Init_Standard(void);
int LightEffect(int);
int PutCourse_Init(int);
int ResetLight(void);
int entryCarPut(int);
int extRandomSeed(int);
int initCamera(int);
int initPlayer(void);
int initPlayerADV(void);
int init_CarMain(void);
int init_GameSystem(void);
int init_KyakuMain(void);
int nd_peopleInitialize(int);
int nlInitEvent(void);
int nlInitHeapMemory(int, int);
int trafficControl(int);
int Initialize_Replay(void);

int Initialize_Replay(void)
{
    int t14;
    int t22;
    int t23;
    int t69;
    int t59;
    int t64;

    ResetLight();
    LightEffect(0x0);
    *(unsigned int *)0xC1799E4 = 0xC1799E8;
    nlInitHeapMemory(0xC1799E8, 0x30000);
    nlInitEvent();
    extRandomSeed(0x3039);
    if ((*(int *)0xC1EE234) == 0) {
        initPlayerADV();
    } else {
        initPlayer();
    }
    Init_Standard();
    init_GameSystem();
    InitColliObj((*(int *)0xC179488));
    t14 = *(int *)0xC1EE20C;
    if (t14 != 0) {
        if (t14 != 1) {
            if (t14 != 2) {
                InitCollision(t14);
                PutCourse_Init((*(int *)0xC1EE20C));
                nd_peopleInitialize(0x46);
            } else {
                t22 = *(int *)0xC1EE214;
                t23 = t14;
                if (t22 != 15) {
                    t23 = t22;
                }
                InitCollision(t23);
                PutCourse_Init((*(int *)0xC1EE20C));
            }
        } else {
            InitCollision(t14);
            PutCourse_Init((*(int *)0xC1EE20C));
            nd_peopleInitialize(0x32);
        }
    } else {
        InitCollision(t14);
        PutCourse_Init((*(int *)0xC1EE20C));
        nd_peopleInitialize(0x46);
    }
    init_CarMain();
    initCamera(0x0);
    init_KyakuMain();
    InitSetObject();
    InitHelicopter();
    Act_Init();
    entryCarPut(0x0);
    trafficControl(0x0);
    if ((*(int *)0xC2A4E50) == 1) {
        Drv_StartAction(0x6, 0x0, 0x0);
    }
    if (((*(int *)0xC1EE234) == 1) && (t59 = *(int *)0xC2A4E50, t59 == 0)) {
        *(unsigned int *)0xC179120 = 0x1;
    }
    if (((*(int *)0xC1EE234) != 0) && (t64 = *(int *)0xC2A4E50, t64 != 1)) {
    } else {
        GoiTool(0x0);
    }
    t69 = Init_Fog();
    *(unsigned int *)0xC1EE240 = 0x0;
    return t69;
}
