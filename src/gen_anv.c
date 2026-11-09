/* Straight-line functions with calls and guards (batch gen_anv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlRand(void);
int nlScaleUnitVector(int, int, float);
int nlSubVector(int, int);
int Init_Time_Spark(int a4, int a5);
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o30_ushort { char p[0x30]; unsigned short v; };
struct o32_ushort { char p[0x32]; unsigned short v; };
struct o34_ushort { char p[0x34]; unsigned short v; };
struct o36_ushort { char p[0x36]; unsigned short v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };



int Init_Time_Spark(int a4, int a5)
{
    float u2;
    float u3;
    int t13;
    int stk[8];

    *(unsigned int *)((a4 + 0x14)) = a5;
    (((struct o18_float *)(a4))->v) = (float)((((struct o0_int *)0xC2A8DF4)->v));
    (((struct o1C_float *)(a4))->v) = (float)((((struct o4_int *)0xC2A8DF4)->v));
    u2 = 0.19999999f;
    (((struct o20_float *)(a4))->v) = u2;
    (((struct o30_ushort *)(a4))->v) = 0x0;
    (((struct o32_ushort *)(a4))->v) = 0x0;
    (((struct o34_ushort *)(a4))->v) = 0x0;
    (((struct o38_float *)(a4))->v) = 0.0f;
    u3 = 2e+01f;
    (((struct o3C_float *)(a4))->v) = (((float)((int)((int)(nlRand()) % (int)0x14)) / u3) + 1.5f);
    *(float *)(((int)stk + 0)) = (float)(((int)((int)(nlRand()) % (int)0x80)) + 0x1C2);
    *(float *)(((int)stk + 4)) = 1.2e+02f;
    *(float *)(((int)stk + 8)) = u2;
    nlSubVector(((int)stk + 0), (a4 + 0x18));
    nlScaleUnitVector((a4 + 0x24), ((int)stk + 0), u3);
    t13 = (int)((int)(nlRand()) % (int)0x4);
    (((struct o36_ushort *)(a4))->v) = ((t13 << 8) << 2);
    return ((t13 << 8) << 2);
}
