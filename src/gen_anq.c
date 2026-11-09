/* Straight-line functions with calls and guards (batch gen_anq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Init_DramRoll(void);
int Init_RS_Fog(void);
int Init_RS_Light(void);
int Level_Calc(int);
int Money_Array(int, int, int);
int Init_Result_Parm(float f4);
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int Init_Result_Parm(float f4)
{
    int t0;
    int t1;
    int t9;
    int t16;

    (((struct o4_uint *)0xC2A9788)->v) = 0x0;
    t0 = 0xC2A97AC;
    t1 = 0x0;
    for (;;) {
        t1 = (t1 + 0x1);
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x4);
        if ((int)t1 >= (int)0x8) {
            break;
        }
    }
    Money_Array(0xC2A97AC, (*(int *)(((*(int *)0xC2A7600) + 0x0))), 0x8);
    if ((int)(*(int *)0xC1794D0) > (int)0x3E7) {
        *(unsigned int *)0xC1794D0 = 0x3E7;
    }
    t9 = Level_Calc((*(int *)(((*(int *)0xC2A7600) + 0x0))));
    (((struct o0_uint *)0xC2A97D8)->v) = t9;
    if ((int)t9 <= (int)0x6) {
        (((struct o20_uint *)0xC2A9788)->v) = (((((0x6 - t9) << 2) + (0x6 - t9)) << 1) + 0x109);
    } else {
        (((struct o20_uint *)0xC2A9788)->v) = 0x145;
    }
    Init_DramRoll();
    Init_RS_Light();
    Init_RS_Fog();
    *(unsigned int *)0xC2A96F4 = 0x0;
    (((struct o0_uint *)0xC2A9788)->v) = 0x0;
    (((struct o8_uint *)0xC2A97D8)->v) = 0x0;
    (((struct oC_uint *)0xC2A97D8)->v) = 0x0;
    t16 = 0x6;
    for (;;) {
        t16 = (t16 - 0x1);
        if (t16 == 0) {
            break;
        }
    }
    (((struct o10_uint *)0xC2A97D8)->v) = 0x0;
    (((struct o4_uint *)0xC2A984C)->v) = 0x0;
    (((struct o8_uint *)0xC2A984C)->v) = 0x0;
    (((struct o0_uint *)0xC2A984C)->v) = 0x0;
    (((struct o0_uint *)0xC2A9748)->v) = 0x0;
    (((struct o10_float *)0xC2A9748)->v) = 0.0f;
    (((struct o4_float *)0xC2A9748)->v) = 0.5f;
    (((struct o8_ushort *)0xC2A9748)->v) = 0x0;
    (((struct oC_uint *)0xC2A9748)->v) = 0x0;
    return 0xC059390;
}
