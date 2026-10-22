/* Straight-line functions with calls and guards (batch gen_c): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_SetOutVol(int, int);
int SetScreen(int);
int SetWindow(int);
int PTime_Pos_Set(float, float);
int PTime_Scale_Set(float, float);
int PTime_Color_Set(float, float, float);
int nd_SprPut(int, int, float, float);
int FUN_0c074680(void);
int ResetFadeColor(void);
int SetFadeColorBase(float, float, float);
int SetFadeColorOffset(float, float, float);
int menuPutSprites(int, int, int, int);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutSetFadeColorBase(float, float, float);
int nlObjPutSetFadeColorOffset(float, float, float);
int nlSprPut(int);
int volumeToDb(int);
int gdc_VolStreamSong(int a4);
int InitAdvLogoSprite(void);
int PutAdvLogoSprite(void);
int SetFadeColorMulti(float f4, float f5, float f6);
int LightEffect(int a4);
int menuPutBackground(void);
int windowReturn(void);
int Put_Adv_Logo_Sprite(void);
void Put_Bowling_Message(void);
int psgTimeDispInit(void);

int gdc_VolStreamSong(int a4)
{
    int t0;
    float u1;
    int t2;
    int t3;
    int t4;
    float u6;
    int t7;

    t0 = *(signed char *)0xC28A4EC;
    u1 = *(float *)0xC02E394;
    *(unsigned char *)0xC1EE80C = (int)((float)(signed char)a4 * ((float)(unsigned char)t0 / u1));
    t2 = *(signed char *)0xC1EE80C;
    t3 = volumeToDb(t2);
    t4 = *(int *)0xC1EE820;
    ADXT_SetOutVol(t4, t3);
    u6 = *(float *)0xC02E3A8;
    t7 = *(signed char *)0xC28A4EC;
    *(unsigned char *)0xC1EE80C = (int)(((float)(unsigned char)t7 / u1) * u6);
    return 0xC02E3A8;
}

int InitAdvLogoSprite(void)
{
    *(float *)0xC26E194 = 1.0f;
    *(float *)0xC26E1A0 = 0.0f;
    *(float *)0xC26E1A4 = 0.0f;
    *(float *)0xC26E1A8 = 1.0f;
    *(float *)0xC26E1AC = 1.0f;
    *(unsigned int *)0xC26E1B0 = 0x0;
    *(unsigned int *)0xC26E1BC = 0x80A;
    *(float *)0xC26E1B4 = 1.0f;
    *(unsigned int *)0xC26E1B8 = 0x2;
    *(float *)0xC26E19C = 1.0f;
    *(float *)0xC26E198 = 1.0f;
    return FUN_0c074680();
}

int PutAdvLogoSprite(void)
{
    float u0;
    float u1;
    float u3;

    *(unsigned int *)0xC26E188 = 0xEA;
    u0 = *(float *)0xC030B00;
    *(float *)0xC26E18C = u0;
    u1 = *(float *)0xC030B04;
    *(float *)0xC26E190 = u1;
    nlSprPut(0xC26E188);
    *(unsigned int *)0xC26E188 = 0xEB;
    *(float *)0xC26E18C = u0;
    u3 = *(float *)0xC030B0C;
    *(float *)0xC26E190 = u3;
    return nlSprPut(0xC26E188);
}


int LightEffect(int a4)
{
    float u0;
    float u1;
    float u3;
    float u4;

    if (a4 != 0) {
        u0 = *(float *)0xC030CFC;
        u1 = *(float *)0xC030D00;
        SetFadeColorBase(u0, u1, 1.0f);
        u3 = *(float *)0xC030D04;
        u4 = *(float *)0xC030D08;
        SetFadeColorOffset(u4, u3, u0);
    } else {
        SetFadeColorBase(1.0f, 1.0f, 1.0f);
        SetFadeColorOffset(1.0f, 1.0f, 1.0f);
    }
    return ResetFadeColor();
}

int menuPutBackground(void)
{
    int t0;
    float u1;
    int t5;
    float u2;
    float u3;
    int t4;

    t0 = *(int *)0xC1EE234;
    u1 = *(float *)0xC2A1AD4;
    t5 = t0;
    if (t0 != 1) {
        u2 = *(float *)0xC03C1DC;
        *(float *)0xC2A1AD4 = u2;
        u3 = *(float *)0xC03C1E0;
        *(float *)0xC2A1AB0 = u3;
        t4 = menuPutSprites(0xC0A0678, 0xC2A1A84, 0x170, 0xD0);
        *(float *)0xC2A1AB0 = 1.0f;
        *(float *)0xC2A1AD4 = u1;
        t5 = t4;
    }
    return t5;
}


int Put_Adv_Logo_Sprite(void)
{
    float u0;
    float u1;
    float u2;
    float u3;

    *(unsigned int *)0xC2A92CC = 0x62;
    *(unsigned int *)0xC2A9300 = 0x2005;
    u0 = *(float *)0xC057F7C;
    *(float *)0xC2A92DC = u0;
    u1 = *(float *)0xC057F80;
    *(float *)0xC2A92E0 = u1;
    u2 = *(float *)0xC057F84;
    *(float *)0xC2A92D8 = u2;
    u3 = *(float *)0xC057F88;
    *(float *)0xC2A92F8 = u3;
    nlObjPutSetFadeColor(0.0f, 0.0f, 0.0f);
    return nlSprPut(0xC2A92CC);
}

void Put_Bowling_Message(void)
{
    int t0;
    float u1;
    float u2;
    float u3;
    float u5;

    t0 = *(int *)0xC2A9960;
    *(unsigned int *)0xC2A9960 = (t0 + 0x1);
    if ((int)(t0 + 0x1) < (int)0x78) {
        u1 = *(float *)0xC05CE48;
        *(float *)0xC2A98A8 = u1;
        *(float *)0xC2A98AC = u1;
        u2 = *(float *)0xC05CE50;
        u3 = *(float *)0xC05CE54;
        nd_SprPut(0xC2A9898, 0x1F1, u2, u3);
        u5 = *(float *)0xC05CE5C;
        nd_SprPut(0xC2A9898, 0x1F2, u2, u5);
        *(float *)0xC2A98A8 = 1.0f;
        *(float *)0xC2A98AC = 1.0f;
    }
}


