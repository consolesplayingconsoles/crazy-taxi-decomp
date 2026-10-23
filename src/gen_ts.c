extern int usr_adx_err_func();
extern int usr_gd_err_func();
/* Straight-line functions with calls and guards (batch gen_ts): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXF_Init(void);
int BupInit(void);
int CfgInit(void);
int CourseTableSet(int);
int nlSetPalExtMode(int);
int nlInitLibraryDC(int);
int nlsndInit(int, int);
int nlsndSeqRequest(int);
int nlsndStreamInit(int, int, int);
int ADXT_Init(void);
int InitBookkeep(void);
int InitMV(void);
int InitMenu(void);
int InitNaolib(void);
int InitNaolib2(void);
int InitNaolib3(void);
int InitProportionalText(int);
int InitRenderTexture2nd(int);
int Init_Adv_Sprite(void);
int Init_EEPROM(void);
int Init_Fog(void);
int Init_LCD(void);
int PAL_SettingLoop(void);
int PatchPolygon(void);
int SetLight(int, int);
int SetLightAmbience(float);
int Sound_Init(void);
int Voice_Init(void);
extern void _builtin_set_imask(int);
int car_texload(void);
int frameFlip(void);
int fsInit(void);
int game_init(void);
int gdFsEntryErrFuncAll(int, int);
int gdc_FileLoad(int, int, int);
int gdc_SpriteSetInit(void);
int gdc_StreamInit(void);
int nd_Exec_Puru2(int);
int nd_Init_Puru2(void);
int nlInitEvent(void);
int nlInitHeapMemory(int, int);
int nlLoadDummyTexture(void);
int nlLocate(int, int);
int nlSetIntrStack(int);
int nlInitInterruptDC(void);
int nlPrintf(int, ...);
int nlSetFontSize(int, int);
int nlSetIntrFunction(int);
int nlsndPackLoad(int, int);
int padInitAnalog(void);
int pdInitPeripheral(int, int, int);
int syCblCheck(void);
int syHwInit(void);
int syHwInit2(void);
int syRtcInit(void);
int sysCfgRead(void);
int thunk_ADXT_EntryErrFunc(int, int);
int InitSys(void);

int InitSys(void)
{
    int t0;
    int t3;
    int t4;
    int t7;
    int t13;
    int t35;
    int t37;
    int t49;
    int t52;
    int t80;

    _builtin_set_imask(0xE);
    t0 = *(int *)0xC089F5C;
    nlSetIntrStack(t0);
    syHwInit();
    t3 = syCblCheck();
    if (t3 != 0) {
        t4 = 0x1;
        if (t3 != 1) {
            if (t3 != 2) {
                for (;;) {
                }
            }
            t4 = 0x2;
        }
        *(unsigned int *)0xC1EE228 = t4;
    } else {
        *(unsigned int *)0xC1EE228 = 0x0;
    }
    t7 = *(int *)0xC1EE228;
    if (t7 == 1) {
        nlInitLibraryDC(0x0);
    } else {
        t13 = 0x9;
        if (t7 == 2) {
            nlSetPalExtMode(0x1);
            t13 = 0x1A;
        }
        nlInitLibraryDC(t13);
    }
    _builtin_set_imask(0xE);
    syHwInit2();
    pdInitPeripheral(0x0, 0xC1A99F8, 0xC1B5A18);
    nlInitInterruptDC();
    nlSetIntrFunction(0x1);
    _builtin_set_imask(0x0);
    syRtcInit();
    fsInit();
    gdFsEntryErrFuncAll(((int)usr_gd_err_func), 0x0);
    ADXT_Init();
    ADXF_Init();
    thunk_ADXT_EntryErrFunc(((int)usr_adx_err_func), 0x0);
    *(unsigned int *)0xC1EE208 = 0x0;
    sysCfgRead();
    *(unsigned int *)0xC1EE234 = 0x0;
    *(unsigned int *)0xC1EE238 = 0x0;
    *(unsigned int *)0xC1EE23C = 0x1;
    *(unsigned int *)0xC1EE330 = 0x0;
    *(unsigned int *)0xC1EE768 = 0x0;
    Init_EEPROM();
    InitBookkeep();
    padInitAnalog();
    CfgInit();
    BupInit();
    nd_Init_Puru2();
    t35 = *(signed char *)0xC1EE278;
    nd_Exec_Puru2((unsigned char)t35);
    t37 = *(int *)0xC1EE228;
    if (t37 == 2) {
        InitNaolib2();
        frameFlip();
        *(unsigned int *)0xC1EE160 = 0x0;
        PAL_SettingLoop();
        nlLoadDummyTexture();
        InitNaolib3();
    } else {
        InitNaolib();
    }
    *(unsigned int *)0xC1799E4 = 0xC1799E8;
    nlInitHeapMemory(0xC1799E8, 0x30000);
    nlInitEvent();
    gdc_FileLoad(0xCB40000, 0xC08AAF0, 0x0);
    t49 = nlsndInit(0xCB40000, 0x0);
    if (t49 != 0) {
        nlSetFontSize(0x10, 0x10);
        nlLocate(0xA, 0xC);
        t52 = t49;
        nlPrintf(0xC08AAFC, t52);
        frameFlip();
        frameFlip();
        nlSetFontSize(0x8, 0x8);
        for (;;) {
        }
    }
    gdc_FileLoad(0xCB40000, 0xC08AB0C, 0x0);
    nlsndPackLoad(0xCB40000, 0x0);
    gdc_FileLoad(0xCB40000, 0xC08AB18, 0x0);
    nlsndPackLoad(0xCB40000, 0x1);
    gdc_FileLoad(0xCB40000, 0xC08AB24, 0x0);
    nlsndPackLoad(0xCB40000, 0x3);
    nlsndSeqRequest(0xA8);
    nlsndStreamInit(0x4, 0x1, 0x0);
    gdc_StreamInit();
    Sound_Init();
    Voice_Init();
    nlSetFontSize(0x10, 0x10);
    nlLocate(0xA, 0xC);
    nlPrintf(0xC08AB30);
    frameFlip();
    frameFlip();
    nlSetFontSize(0x8, 0x8);
    *(unsigned int *)0xC1EE210 = 0x0;
    *(unsigned int *)0xC1EE20C = 0x0;
    gdc_FileLoad(0xC390000, 0xC08AB3C, 0x0);
    gdc_FileLoad(0xCB40000, 0xC08AB48, 0x0);
    car_texload();
    PatchPolygon();
    sysCfgRead();
    gdc_SpriteSetInit();
    *(unsigned int *)0xC1EE76C = 0xFFFFFFFF;
    t80 = *(int *)0xC1EE20C;
    CourseTableSet(t80);
    game_init();
    *(unsigned int *)0xC1EE230 = 0x1;
    *(unsigned int *)0xC1EE338 = 0x1;
    *(float *)0xC1A99F0 = 0.0f;
    SetLight(0x2200, 0x2900);
    SetLightAmbience(0.399999976f);
    Init_Fog();
    InitMV();
    Init_Adv_Sprite();
    InitRenderTexture2nd(0x0);
    InitProportionalText(0x0);
    InitMenu();
    nlSetFontSize(0x10, 0x10);
    nlLocate(0xA, 0xC);
    nlPrintf(0xC08AB54);
    frameFlip();
    frameFlip();
    nlSetFontSize(0x8, 0x8);
    Init_LCD();
    return nd_Init_Puru2();
}
