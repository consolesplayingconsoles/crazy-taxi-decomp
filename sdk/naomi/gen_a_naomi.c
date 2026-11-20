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


