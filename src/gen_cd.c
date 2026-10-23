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

int gdFsInitG(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
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
    int t25;
    int t26;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;

    t0 = *(int *)0xC177A8C;
    if (t0 != 0) {
        t1 = *(short *)((t0 + 0x38));
        if (t1 == 1) {
            return 0x0;
        }
        if ((a5 & 31) != 0) {
            return 0xFFFFFFF2;
        }
        t2 = gdFsGetGdDcf();
        t3 = *(int *)((t2 + 0x0));
        t4 = ((int (*)(void))(t3))();
        t5 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        *(unsigned int *)0xC177A8C = a5;
        *(unsigned short *)((a5 + 0x38)) = 0x0;
        t6 = *(int *)0xC177A8C;
        *(unsigned int *)((t6 + 0x20)) = 0x0;
        t7 = *(int *)0xC177A8C;
        *(unsigned int *)((t7 + 0x0)) = a4;
        t8 = *(int *)0xC177A8C;
        t9 = gdFsCreateDirhn(a7, a6);
        *(unsigned int *)(((t8 + 0x10) + 0x0)) = t9;
        t10 = *(int *)0xC177A8C;
        *(unsigned int *)((t10 + 0xC)) = t2;
        t11 = *(int *)0xC177A8C;
        *(unsigned int *)((t11 + 0x1C)) = 0x0;
        t12 = *(int *)0xC177A8C;
        *(unsigned short *)((t12 + 0x3A)) = 0x0;
        t13 = *(int *)0xC177A8C;
        *(unsigned int *)((t13 + 0x24)) = 0x0;
        t14 = *(int *)0xC177A8C;
        *(unsigned int *)((t14 + 0x34)) = 0x0;
        t15 = *(int *)0xC177A8C;
        *(unsigned int *)((t15 + 0x3C)) = a8;
        t16 = *(int *)0xC177A8C;
        t17 = 0x3A;
        t18 = (t16 + 0x1080);
        t19 = 0x0;
        for (;;) {
            t20 = *(int *)0xC177A8C;
            t21 = *(int *)((t20 + 0x0));
            if ((int)t19 >= (int)(t21 + 0x1)) break;
            t17 = 0x4C;
            *(unsigned short *)((t18 + t17)) = 0x0;
            t19 = (t19 + 0x1);
            t22 = *(int *)0xC177A8C;
            *(unsigned int *)((t18 + 0x0)) = t22;
            t18 = (t18 + 0x54);
        }
        t23 = *(int *)0xC177A8C;
        *(unsigned int *)((t23 + 0x14)) = (0x1080 + t23);
        t24 = *(int *)0xC177A8C;
        *(unsigned int *)((t24 + 0x18)) = ((0x1080 + t24) + 0x54);
        t25 = *(int *)0xC177A8C;
        t26 = *(int *)((t25 + 0x14));
        gdFsCreateHnG(t26);
        _builtin_set_imask(((unsigned int)(((t5 & 0xF) << 2) << 2) >> 4));
        return gdFsInitSub();
    }
    if ((a5 & 31) != 0) {
        return 0xFFFFFFF2;
    }
    t28 = gdFsGetGdDcf();
    t29 = *(int *)((t28 + 0x0));
    t30 = ((int (*)(void))(t29))();
    t31 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)0xC177A8C = a5;
    *(unsigned short *)((a5 + 0x38)) = 0x0;
    t32 = *(int *)0xC177A8C;
    *(unsigned int *)((t32 + 0x20)) = 0x0;
    t33 = *(int *)0xC177A8C;
    *(unsigned int *)((t33 + 0x0)) = a4;
    t34 = *(int *)0xC177A8C;
    t35 = gdFsCreateDirhn(a7, a6);
    *(unsigned int *)(((t34 + 0x10) + 0x0)) = t35;
    t36 = *(int *)0xC177A8C;
    *(unsigned int *)((t36 + 0xC)) = t28;
    t37 = *(int *)0xC177A8C;
    *(unsigned int *)((t37 + 0x1C)) = 0x0;
    t38 = *(int *)0xC177A8C;
    *(unsigned short *)((t38 + 0x3A)) = 0x0;
    t39 = *(int *)0xC177A8C;
    *(unsigned int *)((t39 + 0x24)) = 0x0;
    t40 = *(int *)0xC177A8C;
    *(unsigned int *)((t40 + 0x34)) = 0x0;
    t41 = *(int *)0xC177A8C;
    *(unsigned int *)((t41 + 0x3C)) = a8;
    t42 = *(int *)0xC177A8C;
    t43 = 0x3A;
    t44 = (t42 + 0x1080);
    t45 = 0x0;
    for (;;) {
        t46 = *(int *)0xC177A8C;
        t47 = *(int *)((t46 + 0x0));
        if ((int)t45 >= (int)(t47 + 0x1)) break;
        t43 = 0x4C;
        *(unsigned short *)((t44 + t43)) = 0x0;
        t45 = (t45 + 0x1);
        t48 = *(int *)0xC177A8C;
        *(unsigned int *)((t44 + 0x0)) = t48;
        t44 = (t44 + 0x54);
    }
    t49 = *(int *)0xC177A8C;
    *(unsigned int *)((t49 + 0x14)) = (0x1080 + t49);
    t50 = *(int *)0xC177A8C;
    *(unsigned int *)((t50 + 0x18)) = ((0x1080 + t50) + 0x54);
    t51 = *(int *)0xC177A8C;
    t52 = *(int *)((t51 + 0x14));
    gdFsCreateHnG(t52);
    _builtin_set_imask(((unsigned int)(((t31 & 0xF) << 2) << 2) >> 4));
    return gdFsInitSub();
}




