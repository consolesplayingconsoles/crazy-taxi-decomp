/* Straight-line functions with calls and guards (batch gen_h): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdc_VolStreamSong(int);
int gdc_PlayStreamSong(int);
int CarSel_SetBackColor(void);
int FUN_0c074680(void);
int kmiInitializeDMA(void);
int kmiWriteRegister(int, int);
int nlObjPutSetFadeColor(float, float, float);
int nlSprPut(int);
int pfSetFont(int);
int pfSize(float, float);
int InitEndRoll(void);
int Result_SetBackColor(void);
int kmiInitializeTA(void);

int InitEndRoll(void)
{
    FUN_0c074680();
    pfSetFont(0x0);
    pfSize(1.0f, 1.0f);
    gdc_PlayStreamSong(0x3);
    gdc_VolStreamSong(0x6E);
    *(unsigned int *)0xC2864E0 = 0x0;
    *(unsigned int *)0xC2864E4 = 0x2;
    return 0xC2864E4;
}

int Result_SetBackColor(void)
{
    float u2;
    float u3;
    float u4;
    float u5;
    int t6;
    float u7;
    float u10;

    CarSel_SetBackColor();
    nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
    *(unsigned int *)0xC2A96F8 = 0x62;
    *(unsigned int *)0xC2A972C = 0x2005;
    u2 = *(float *)0xC2A9758;
    u3 = *(float *)0xC05B184;
    *(float *)0xC2A9708 = (u2 + u3);
    u4 = *(float *)0xC2A9758;
    u5 = *(float *)0xC05B188;
    *(float *)0xC2A970C = (u4 + u5);
    *(float *)0xC2A96FC = 0.0f;
    t6 = *(int *)0xC2A9748;
    *(float *)0xC2A9700 = (float)(t6 + 0x70);
    u7 = *(float *)0xC05B190;
    *(float *)0xC2A9704 = u7;
    *(unsigned int *)0xC2A9720 = 0x0;
    nlSprPut(0xC2A96F8);
    nlObjPutSetFadeColor(0.0f, 0.0f, 0.0f);
    u10 = *(float *)0xC05B198;
    *(float *)0xC2A9704 = u10;
    return 0xC;
}

int kmiInitializeTA(void)
{
    int t3;
    int t4;

    kmiWriteRegister(0x8, 0x1);
    kmiWriteRegister(0x8, 0x0);
    kmiInitializeDMA();
    *(unsigned int *)0xC2EAAC8 = 0x800000;
    *(unsigned int *)0xC2EAAD0 = 0x600000;
    t3 = *(int *)0xC2EAAD0;
    *(unsigned int *)0xC2EAAD4 = t3;
    t4 = *(int *)0xC2EAAC8;
    *(unsigned int *)0xC2EAAEC = ((unsigned int)t4 >> 1);
    *(unsigned int *)0xC2EAB0C = 0x0;
    *(unsigned int *)0xC2EAB2C = 0x1;
    return 0xC2EAAEC;
}

