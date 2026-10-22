/* Straight-line store functions (batch gen a): each writes constants, or its arguments, to fixed addresses or to its
   pointer argument; generated from the code and checked by tests. */

int ADXAMP_Stop(int a4);
void ADXPD_SetMode(int a4, int a5);
void ADXSJD_SetInSj(int a4, int a5);
void ADXSJD_SetMaxDecSmpl(int a4, int a5);
void ADXSTM_EntryEosFunc(int a4, int a5, int a6);
int ADXSTM_SetReqRdSize(int a4, int a5);
void NextWindow(int a4);
void SetMenuClass(int a4);
void getReplayGetOffNo(int a4);
int selectInitBarSprite(void);
int selectInitPanelSprite(void);
int selectInitTileSprite(void);
int selectInitFrontSprite(void);
int Init_Time_Count(void);
int Init_sprCombo(void);
int Init_Remain_Time(void);
int Init_Shift(void);
int Init_TimeUp(void);
int Init_Adv_Title_LOGO(void);
int Init_Adv_Standard(void);
int Init_Result_Standard_Sprite(void);
int Init_DCmini_Standard_Sprite(void);
int BigOneResetState(void);
int FUN_0c074ca0(int a4);
void FUN_0c167c24(int a4, int a5);
void FUN_0c1687f6(int a4, int a5);
void FUN_0c168812(int a4, int a5);
int FUN_0c16881a(int a4, int a5);
int FUN_0c168826(int a4, int a5);
int Init_Standard(void);
void SJMEM_EntryErrFunc(int a4, int a5, int a6);
void SJRBF_EntryErrFunc(int a4, int a5, int a6);
void SJUNI_EntryErrFunc(int a4, int a5, int a6);
void kdSetGunCallback(int a4);
int kmRenderDirect(void);

int ADXAMP_Stop(int a4)
{
    *(unsigned char *)((a4 + 0x1)) = 0x0;
    return 0x0;
}

void ADXPD_SetMode(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x8)) = a5;
}

void ADXSJD_SetInSj(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x8)) = a5;
}

void ADXSJD_SetMaxDecSmpl(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x38)) = a5;
}

void ADXSTM_EntryEosFunc(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x38)) = a5;
    *(unsigned int *)((a4 + 0x3C)) = a6;
}

int ADXSTM_SetReqRdSize(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x2C)) = a5;
    return 0x1;
}

void NextWindow(int a4)
{
    *(unsigned int *)0xC2A1218 = a4;
}

void SetMenuClass(int a4)
{
    *(unsigned int *)0xC2A11D8 = a4;
}

void getReplayGetOffNo(int a4)
{
    *(unsigned int *)0xC0F2B38 = a4;
}

int selectInitBarSprite(void)
{
    float u0;
    float u1;
    float u2;

    *(unsigned int *)0xC2A7370 = 0x62;
    u0 = 501.0f;
    *(float *)0xC2A737C = u0;
    *(float *)0xC2A7374 = 0.0f;
    *(float *)0xC2A7378 = 0.0f;
    u1 = 40.0f;
    *(float *)0xC2A7380 = u1;
    u2 = 8.5f;
    *(float *)0xC2A7384 = u2;
    *(float *)0xC2A7388 = 0.0f;
    *(float *)0xC2A738C = 0.0f;
    *(float *)0xC2A7390 = 1.0f;
    *(float *)0xC2A7394 = 1.0f;
    *(unsigned int *)0xC2A7398 = 0x0;
    *(unsigned int *)0xC2A73A4 = 0x5;
    *(float *)0xC2A739C = 1.0f;
    *(unsigned int *)0xC2A73A0 = 0x2;
    return 0x2C;
}

int selectInitPanelSprite(void)
{
    float u0;
    float u1;

    u0 = 72.0f;
    *(float *)0xC2A73C8 = u0;
    u1 = 500.9f;
    *(float *)0xC2A73CC = u1;
    *(float *)0xC2A73D0 = 1.0f;
    *(float *)0xC2A73D4 = 1.0f;
    *(float *)0xC2A73D8 = 0.0f;
    *(float *)0xC2A73DC = 0.0f;
    *(float *)0xC2A73E0 = 1.0f;
    *(float *)0xC2A73E4 = 1.0f;
    *(unsigned int *)0xC2A73E8 = 0x0;
    *(unsigned int *)0xC2A73F4 = 0xA;
    *(float *)0xC2A73EC = 1.0f;
    *(unsigned int *)0xC2A73F0 = 0x2;
    return 0x2C;
}




int Init_sprCombo(void)
{
    float u0;
    float u1;
    float u2;

    u0 = 320.0f;
    *(float *)0xC2A88E0 = u0;
    u1 = 240.0f;
    *(float *)0xC2A88E4 = u1;
    u2 = 0.19999999f;
    *(float *)0xC2A88E8 = u2;
    *(float *)0xC2A88EC = 1.0f;
    *(float *)0xC2A88F0 = 1.0f;
    *(float *)0xC2A88F4 = 0.0f;
    *(float *)0xC2A88F8 = 0.0f;
    *(float *)0xC2A88FC = 1.0f;
    *(float *)0xC2A8900 = 1.0f;
    *(unsigned int *)0xC2A8904 = 0x0;
    *(unsigned int *)0xC2A8910 = 0x200A;
    *(float *)0xC2A8908 = 1.0f;
    *(unsigned int *)0xC2A890C = 0x2;
    return 0x2C;
}

int Init_Remain_Time(void)
{
    float u0;
    float u1;
    float u2;
    float u3;

    u0 = -2.0f;
    *(float *)0xC2A8C8C = u0;
    *(unsigned int *)0xC2A8C90 = 0x0;
    *(unsigned int *)0xC2A8CB4 = 0x0;
    *(unsigned int *)0xC2A8CB8 = 0x0;
    u1 = 32.0f;
    *(float *)0xC2A7F80 = u1;
    u2 = 84.0f;
    *(float *)0xC2A7F84 = u2;
    u3 = 0.049999997f;
    *(float *)0xC2A7F88 = u3;
    *(float *)0xC2A7F8C = 1.0f;
    *(float *)0xC2A7F90 = 1.0f;
    *(float *)0xC2A7F94 = 0.0f;
    *(float *)0xC2A7F98 = 0.0f;
    *(float *)0xC2A7F9C = 1.0f;
    *(float *)0xC2A7FA0 = 1.0f;
    *(unsigned int *)0xC2A7FA4 = 0x0;
    *(unsigned int *)0xC2A7FB0 = 0x200A;
    *(float *)0xC2A7FA8 = 1.0f;
    *(unsigned int *)0xC2A7FAC = 0x2;
    *(unsigned int *)0xC2A8CAC = 0x0;
    return 0xC2A8CAC;
}



int Init_Adv_Title_LOGO(void)
{
    float u0;

    *(float *)0xC2A9230 = 0.0f;
    *(float *)0xC2A9234 = 0.0f;
    u0 = 500.0f;
    *(float *)0xC2A9238 = u0;
    *(float *)0xC2A923C = 1.0f;
    *(float *)0xC2A9240 = 1.0f;
    *(float *)0xC2A9244 = 0.0f;
    *(float *)0xC2A9248 = 0.0f;
    *(float *)0xC2A924C = 1.0f;
    *(float *)0xC2A9250 = 1.0f;
    *(unsigned int *)0xC2A9254 = 0x0;
    *(unsigned int *)0xC2A9260 = 0xA;
    *(float *)0xC2A9258 = 1.0f;
    *(unsigned int *)0xC2A925C = 0x2;
    *(unsigned int *)0xC2A9320 = 0x280;
    *(unsigned int *)0xC2A9324 = 0x0;
    *(unsigned int *)0xC2A9328 = 0xFFFFFFFF;
    return 0xC2A9328;
}


int Init_Result_Standard_Sprite(void)
{
    float u0;
    float u1;
    float u2;

    u0 = 320.0f;
    *(float *)0xC2A96FC = u0;
    u1 = 240.0f;
    *(float *)0xC2A9700 = u1;
    u2 = 0.19999999f;
    *(float *)0xC2A9704 = u2;
    *(float *)0xC2A9708 = 1.0f;
    *(float *)0xC2A970C = 1.0f;
    *(float *)0xC2A9710 = 0.0f;
    *(float *)0xC2A9714 = 0.0f;
    *(float *)0xC2A9718 = 1.0f;
    *(float *)0xC2A971C = 1.0f;
    *(unsigned int *)0xC2A9720 = 0x0;
    *(unsigned int *)0xC2A972C = 0xA;
    *(float *)0xC2A9724 = 1.0f;
    *(unsigned int *)0xC2A9728 = 0x2;
    return 0x2C;
}



int FUN_0c074ca0(int a4)
{
    float u0;
    float u1;
    float u2;

    *(unsigned int *)0xC2AECD0 = 0x60;
    *(unsigned int *)0xC2AECD4 = 0x0;
    *(unsigned int *)0xC2AED30 = 0xC2AED44;
    *(unsigned int *)0xC2AED34 = 0xC2AED6C;
    *(unsigned int *)0xC2AECD8 = 0xC2AED30;
    *(unsigned int *)0xC2AECDC = 0x2;
    *(unsigned int *)0xC2AECE0 = 0x280;
    *(unsigned int *)0xC2AECE4 = 0x0;
    *(unsigned int *)0xC2AECE8 = 0x0;
    *(unsigned int *)0xC2AECEC = a4;
    *(unsigned int *)0xC2AECF0 = 0xC2AF368;
    *(unsigned int *)0xC2AECF4 = 0xACC00000;
    *(unsigned int *)0xC2AECF8 = 0x100000;
    u0 = 70.0f;
    *(float *)0xC2AECFC = u0;
    u1 = 5.0f;
    *(float *)0xC2AED00 = u1;
    u2 = 25.0f;
    *(float *)0xC2AED04 = u2;
    *(float *)0xC2AED08 = 0.0f;
    *(float *)0xC2AED0C = 0.0f;
    *(unsigned int *)0xC2AED2C = 0x0;
    *(unsigned int *)0xC2AED38 = 0x3;
    *(unsigned int *)0xC2AED3C = 0x0;
    return 0x5C;
}

void FUN_0c167c24(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x20)) = a5;
}

void FUN_0c1687f6(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x34)) = a5;
}

void FUN_0c168812(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x3C)) = a5;
}

int FUN_0c16881a(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x40)) = a5;
    return 0x40;
}

int FUN_0c168826(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x44)) = a5;
    return 0x44;
}

int Init_Standard(void)
{
    float u0;
    float u1;
    float u2;

    u0 = 320.0f;
    *(float *)0xC2A7EE0 = u0;
    u1 = 240.0f;
    *(float *)0xC2A7EE4 = u1;
    u2 = 0.19999999f;
    *(float *)0xC2A7EE8 = u2;
    *(float *)0xC2A7EEC = 1.0f;
    *(float *)0xC2A7EF0 = 1.0f;
    *(float *)0xC2A7EFC = 1.0f;
    *(float *)0xC2A7F00 = 1.0f;
    *(float *)0xC2A7F08 = 1.0f;
    *(float *)0xC2A7EF4 = 0.0f;
    *(float *)0xC2A7EF8 = 0.0f;
    *(unsigned int *)0xC2A7F04 = 0x0;
    *(unsigned int *)0xC2A7F10 = 0xA;
    *(unsigned int *)0xC2A7F0C = 0x2;
    return 0x1C;
}

void SJMEM_EntryErrFunc(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x1C)) = a5;
    *(unsigned int *)((a4 + 0x20)) = a6;
}

void SJRBF_EntryErrFunc(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x28)) = a5;
    *(unsigned int *)((a4 + 0x2C)) = a6;
}

void SJUNI_EntryErrFunc(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x28)) = a5;
    *(unsigned int *)((a4 + 0x2C)) = a6;
}

void kdSetGunCallback(int a4)
{
    *(unsigned int *)0xC2EC290 = a4;
}

int kmRenderDirect(void)
{
    *(unsigned int *)0xC2EA9F4 = 0x1;
    *(unsigned int *)0xC2EA9FC = 0x0;
    *(unsigned int *)0xC178278 = 0x1;
    return 0xC178278;
}

