/* Straight-line functions with calls and guards (batch gen_o): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_SetOutVol(int, int);
int ADXT_StartAfs(int, int, int);
int gdc_StopStreamSongDisk(void);
int gdc_CourseStartLoadReq(void);
int gdc_FileLoadStop(void);
int gdc_FileLoadInit(void);
int SetScreen(int);
int SetWindow(int);
int FcvInterpolateBuffer(int, int, float);
int nlsndPackLoad(int, int);
int FUN_0c07f0b0(void);
int FUN_0c167800(void);
int gdc_FileLoad(int, int, int);
int gdc_StopStreamSongAll(void);
int kbCfgIni(void);
int kmiWriteRegister(int, int);
int memmove(int, int, int);
int syCfgIIDCheckSum(int);
int volumeToDb(int);
int gdc_PlayStreamSong(int a4);
int gdc_CarSoundLoad(void);
int windowRetry(void);
int Drv_ExecBlend(void);
int psgStepBlend(int a4);
int syCfgGetIndividualID(int a4);
int kmBlankScreen(int a4);

int gdc_PlayStreamSong(int a4)
{
    int t0;
    float u1;
    float u2;
    int t4;
    int t6;
    int t7;
    int t8;

    *(unsigned int *)0xC26A0B8 = 0x0;
    t0 = *(signed char *)0xC28A4EC;
    u1 = *(float *)0xC02E394;
    u2 = *(float *)0xC02E3A8;
    *(unsigned char *)0xC1EE80C = (int)(((float)(unsigned char)t0 / u1) * u2);
    gdc_StopStreamSongAll();
    t4 = *(int *)0xC1EE820;
    ADXT_StartAfs(t4, 0x1, a4);
    t6 = *(signed char *)0xC1EE80C;
    t7 = volumeToDb(t6);
    t8 = *(int *)0xC1EE820;
    return ADXT_SetOutVol(t8, t7);
}


int windowRetry(void)
{
    *(unsigned int *)0xC1EE238 = 0x0;
    gdc_FileLoadStop();
    gdc_FileLoadInit();
    gdc_CourseStartLoadReq();
    SetScreen(0x4);
    SetWindow(0x0);
    *(unsigned int *)0xC2A11B0 = 0x0;
    return gdc_StopStreamSongDisk();
}

int Drv_ExecBlend(void)
{
    float u0;
    int t1;
    float u2;
    float u4;
    float u5;
    float u6;
    int t10;
    int t7;
    int t8;
    float u9;

    u0 = *(float *)0xC2AD0F8;
    if (u0 == 0.0f) {
        t1 = *(signed char *)0xC2AD1DF;
        *(unsigned char *)0xC2AD1DF = (t1 & 0x7F);
        return (t1 & 0x7F);
    }
    u2 = *(float *)0xC2AD0F4;
    FcvInterpolateBuffer(0xC2AD028, 0xC2AD104, (u2 / u0));
    u4 = *(float *)0xC2AD0F4;
    *(float *)0xC2AD0F4 = (u4 + 1.0f);
    u5 = *(float *)0xC2AD0F8;
    u6 = *(float *)0xC2AD0F4;
    t10 = 0xF4;
    if (u6 == u5) {
        t7 = *(signed char *)0xC2AD1DF;
        *(unsigned char *)0xC2AD1DF = (t7 & 0x7F);
        t8 = *(int *)0xC2AD0FC;
        *(unsigned int *)0xC2AD020 = t8;
        u9 = *(float *)0xC2AD100;
        *(float *)0xC2AD024 = u9;
        t10 = 0x24;
    }
    return t10;
}


int syCfgGetIndividualID(int a4)
{
    int t1;
    int t3;
    int t4;

    if (a4 == 0) {
        return 0x0;
    }
    kbCfgIni();
    t1 = FUN_0c167800();
    memmove(a4, (t1 + 0x2), 0x6);
    t3 = syCfgIIDCheckSum(t1);
    t4 = 0x2;
    if (t3 != 0) {
        t4 = 0x1;
    }
    return t4;
}

int kmBlankScreen(int a4)
{
    int t0;
    int t2;
    int t3;
    int t5;
    int t9;
    int t7;

    if (a4 == 1) {
        t0 = *(int *)0xC2EA948;
        kmiWriteRegister(0x44, (t0 & 0xFFFFFFFE));
        t2 = *(int *)0xC2EA984;
        t7 = (t2 | 0x8);
    } else {
        t3 = *(int *)0xC2EA948;
        kmiWriteRegister(0x44, (t3 & 0xFFFFFFFE));
        t5 = *(int *)0xC2EA984;
        t7 = t5;
    }
    kmiWriteRegister(0xE8, t7);
    t9 = *(int *)0xC2EA948;
    kmiWriteRegister(0x44, t9);
    return 0x0;
}

