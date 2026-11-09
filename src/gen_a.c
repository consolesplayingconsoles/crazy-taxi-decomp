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
int nl_system_config_init(int a4);
void ADXAMP_SetSfreq(int a4, int a5);
void ADXSJD_SetDecPos(int a4, int a5);
void ADXSJD_SetTrapNumSmpl(int a4, int a5);
int ADXSJD_SetTrapCnt(int a4, int a5);
int ADXSJD_SetTrapDtLen(int a4, int a5);
int Init_Standard(void);
void SJMEM_EntryErrFunc(int a4, int a5, int a6);
void SJRBF_EntryErrFunc(int a4, int a5, int a6);
void SJUNI_EntryErrFunc(int a4, int a5, int a6);
void kdSetGunCallback(int a4);
int kmRenderDirect(void);
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o0_float { float v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };



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







int Init_Remain_Time(void)
{
    float u0;
    float u1;
    float u2;
    float u3;

    u0 = -2.0f;
    (((struct o0_float *)0xC2A8C8C)->v) = u0;
    (((struct o4_uint *)0xC2A8C8C)->v) = 0x0;
    (((struct o28_uint *)0xC2A8C8C)->v) = 0x0;
    (((struct o2C_uint *)0xC2A8C8C)->v) = 0x0;
    u1 = 32.0f;
    (((struct o0_float *)0xC2A7F80)->v) = u1;
    u2 = 84.0f;
    (((struct o4_float *)0xC2A7F80)->v) = u2;
    u3 = 0.049999997f;
    (((struct o8_float *)0xC2A7F80)->v) = u3;
    (((struct oC_float *)0xC2A7F80)->v) = 1.0f;
    (((struct o10_float *)0xC2A7F80)->v) = 1.0f;
    (((struct o14_float *)0xC2A7F80)->v) = 0.0f;
    (((struct o18_float *)0xC2A7F80)->v) = 0.0f;
    (((struct o1C_float *)0xC2A7F80)->v) = 1.0f;
    (((struct o20_float *)0xC2A7F80)->v) = 1.0f;
    (((struct o24_uint *)0xC2A7F80)->v) = 0x0;
    (((struct o30_uint *)0xC2A7F80)->v) = 0x200A;
    (((struct o28_float *)0xC2A7F80)->v) = 1.0f;
    (((struct o2C_uint *)0xC2A7F80)->v) = 0x2;
    (((struct o20_uint *)0xC2A8C8C)->v) = 0x0;
    return 0xC2A8CAC;
}





int Init_Result_Standard_Sprite(void)
{
    float u0;
    float u1;
    float u2;

    u0 = 320.0f;
    (((struct o0_float *)0xC2A96FC)->v) = u0;
    u1 = 240.0f;
    (((struct o4_float *)0xC2A96FC)->v) = u1;
    u2 = 0.19999999f;
    (((struct o8_float *)0xC2A96FC)->v) = u2;
    (((struct oC_float *)0xC2A96FC)->v) = 1.0f;
    (((struct o10_float *)0xC2A96FC)->v) = 1.0f;
    (((struct o14_float *)0xC2A96FC)->v) = 0.0f;
    (((struct o18_float *)0xC2A96FC)->v) = 0.0f;
    (((struct o1C_float *)0xC2A96FC)->v) = 1.0f;
    (((struct o20_float *)0xC2A96FC)->v) = 1.0f;
    (((struct o24_uint *)0xC2A96FC)->v) = 0x0;
    (((struct o30_uint *)0xC2A96FC)->v) = 0xA;
    (((struct o28_float *)0xC2A96FC)->v) = 1.0f;
    (((struct o2C_uint *)0xC2A96FC)->v) = 0x2;
    return 0x2C;
}



int nl_system_config_init(int a4)
{
    float u0;
    float u1;
    float u2;

    (((struct o0_uint *)0xC2AECD0)->v) = 0x60;
    (((struct o4_uint *)0xC2AECD0)->v) = 0x0;
    (((struct o4_uint *)0xC2AED2C)->v) = 0xC2AED44;
    (((struct o8_uint *)0xC2AED2C)->v) = 0xC2AED6C;
    (((struct o8_uint *)0xC2AECD0)->v) = 0xC2AED30;
    (((struct oC_uint *)0xC2AECD0)->v) = 0x2;
    (((struct o10_uint *)0xC2AECD0)->v) = 0x280;
    (((struct o14_uint *)0xC2AECD0)->v) = 0x0;
    (((struct o18_uint *)0xC2AECD0)->v) = 0x0;
    (((struct o1C_uint *)0xC2AECD0)->v) = a4;
    (((struct o20_uint *)0xC2AECD0)->v) = 0xC2AF368;
    (((struct o24_uint *)0xC2AECD0)->v) = 0xACC00000;
    (((struct o28_uint *)0xC2AECD0)->v) = 0x100000;
    u0 = 70.0f;
    (((struct o2C_float *)0xC2AECD0)->v) = u0;
    u1 = 5.0f;
    (((struct o30_float *)0xC2AECD0)->v) = u1;
    u2 = 25.0f;
    (((struct o34_float *)0xC2AECD0)->v) = u2;
    (((struct o38_float *)0xC2AECD0)->v) = 0.0f;
    (((struct o3C_float *)0xC2AECD0)->v) = 0.0f;
    (((struct o0_uint *)0xC2AED2C)->v) = 0x0;
    (((struct oC_uint *)0xC2AED2C)->v) = 0x3;
    (((struct o10_uint *)0xC2AED2C)->v) = 0x0;
    return 0x5C;
}

void ADXAMP_SetSfreq(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x20)) = a5;
}

void ADXSJD_SetDecPos(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x34)) = a5;
}

void ADXSJD_SetTrapNumSmpl(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x3C)) = a5;
}

int ADXSJD_SetTrapCnt(int a4, int a5)
{
    (((struct o40_uint *)(a4))->v) = a5;
    return 0x40;
}

int ADXSJD_SetTrapDtLen(int a4, int a5)
{
    (((struct o44_uint *)(a4))->v) = a5;
    return 0x44;
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

