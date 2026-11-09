/* Straight-line functions with calls and guards (batch gen_anx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int MakeKyakuTakeArea(int, int, int, float);
int nd_StartWait_InitSprite(void);
int nd_StartWait_SetFog(void);
int nd_StartWait_SetLight(void);
int nlMatrixMode(int);
int nlPerspective(int, float, float, float);
int nlRand(void);
int nlUnitMatrix(void);
int Init_nd_StartWait(void);
struct o0_float { float v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o34_ushort { char p[0x34]; unsigned short v; };
struct o36_ushort { char p[0x36]; unsigned short v; };
struct o38_ushort { char p[0x38]; unsigned short v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };


int Init_nd_StartWait(void)
{
    int t5;
    int stk[6];

    nlMatrixMode(0x3);
    nlUnitMatrix();
    nlPerspective(0x1D28, 1.33333325f, 0.299999982f, 300.0f);
    nlMatrixMode(0x1);
    (((struct o0_uint *)0xC2A7208)->v) = 0x0;
    (((struct o0_uint *)0xC2A72B8)->v) = 0x0;
    t5 = (int)((int)(nlRand()) % (int)0x100);
    (((struct o4_uint *)0xC12FFC8)->v) = t5;
    if (t5 == 88) {
        (((struct o4_uint *)0xC2A72B8)->v) = 0x1E;
    } else {
        (((struct o4_uint *)0xC2A72B8)->v) = 0x0;
    }
    (((struct o8_ushort *)0xC2A72B8)->v) = 0x3C00;
    (((struct oC_float *)0xC2A72B8)->v) = 35.0f;
    (((struct o10_float *)0xC2A72B8)->v) = 0.699999988f;
    (((struct o14_float *)0xC2A72B8)->v) = -140.0f;
    (((struct o18_float *)0xC2A72B8)->v) = 0.0f;
    (((struct o1C_float *)0xC2A72B8)->v) = -160.0f;
    (((struct o20_uint *)0xC2A72B8)->v) = ((int)((int)(nlRand()) % (int)0x4));
    (((struct o4_ushort *)0xC2A7300)->v) = 0xEB00;
    (((struct o6_ushort *)0xC2A7300)->v) = 0xF200;
    (((struct o0_float *)0xC2A7300)->v) = 1.19999993f;
    (((struct o10_uint *)0xC2A7300)->v) = 0x8;
    nd_StartWait_SetLight();
    (((struct o0_float *)0xC12FFC8)->v) = 0.0f;
    nd_StartWait_SetFog();
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2A72E0) = *(struct mv3 *)(0xC0CF5B4); }
    (((struct o34_ushort *)0xC2A72B8)->v) = 0xF800;
    (((struct o36_ushort *)0xC2A72B8)->v) = 0x0;
    (((struct o38_ushort *)0xC2A72B8)->v) = 0x0;
    (((struct o24_uint *)0xC2A72B8)->v) = 0x0;
    nd_StartWait_InitSprite();
    (((struct o4_uint *)0xC2A7208)->v) = 0x0;
    *(float *)(((int)stk + 0)) = 0.0f;
    *(float *)(((int)stk + 4)) = 0.0f;
    *(float *)(((int)stk + 8)) = 0.0f;
    return (MakeKyakuTakeArea(0xC2A7210, ((int)stk + 0), 0x0, 50.0f));
}
