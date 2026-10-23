/* Straight-line functions with calls and guards (batch gen_wy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Act_Init(void);
int Drv_StartAction(int, int, int);
int InitAdvCamera(void);
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
int init_CarMain(void);
int init_GameSystem(void);
int init_KyakuMain(void);
int nd_peopleInitialize(int);
int nlInitEvent(void);
int nlInitHeapMemory(int, int);
int trafficControl(int);
int Initialize_Replay_Part(void);

int Initialize_Replay_Part(void)
{
    int t9;
    int t17;
    int t18;

    ResetLight();
    LightEffect(0x0);
    *(unsigned int *)0xC1799E4 = 0xC1799E8;
    nlInitHeapMemory(0xC1799E8, 0x30000);
    nlInitEvent();
    extRandomSeed(0x3039);
    Init_Standard();
    init_GameSystem();
    InitColliObj((*(int *)0xC179488));
    t9 = *(int *)0xC1EE20C;
    if (t9 != 0) {
        if (t9 != 1) {
            if (t9 != 2) {
                InitCollision(t9);
                PutCourse_Init((*(int *)0xC1EE20C));
                nd_peopleInitialize(0x46);
            } else {
                t17 = *(int *)0xC1EE214;
                t18 = t9;
                if (t17 != 15) {
                    t18 = t17;
                }
                InitCollision(t18);
                PutCourse_Init((*(int *)0xC1EE20C));
            }
        } else {
            InitCollision(t9);
            PutCourse_Init((*(int *)0xC1EE20C));
            nd_peopleInitialize(0x32);
        }
    } else {
        InitCollision(t9);
        PutCourse_Init((*(int *)0xC1EE20C));
        nd_peopleInitialize(0x46);
    }
    init_CarMain();
    InitAdvCamera();
    init_KyakuMain();
    InitSetObject();
    InitHelicopter();
    Act_Init();
    entryCarPut(0x0);
    trafficControl(0x0);
    Drv_StartAction(0x0, 0x0, 0x0);
    *(unsigned int *)0xC179120 = 0x1;
    return Init_Fog();
}
