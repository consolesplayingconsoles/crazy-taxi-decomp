/* Straight-line functions with calls and guards (batch gen_adb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float carCalcInertia(int a4);
struct o128_float { char p[0x128]; float v; };
struct o13C_float { char p[0x13C]; float v; };
struct o140_float { char p[0x140]; float v; };
struct o144_float { char p[0x144]; float v; };
struct o148_float { char p[0x148]; float v; };
struct o14C_float { char p[0x14C]; float v; };
struct o150_float { char p[0x150]; float v; };


float carCalcInertia(int a4)
{
    float u0;
    float u1;
    float u3;
    float u4;
    float u5;
    float u7;
    float u8;
    float u9;
    float u11;

    u0 = (((struct o140_float *)(a4))->v);
    u1 = (((struct o13C_float *)(a4))->v);
    u3 = (u1 * u1);
    u3 = u3 + u0 * u0;
    (((struct o14C_float *)(a4))->v) = (1.0f / ((((((struct o128_float *)(a4))->v)) * u3) / 12.0f));
    u4 = (((struct o144_float *)(a4))->v);
    u5 = (((struct o13C_float *)(a4))->v);
    u7 = (u5 * u5);
    u7 = u7 + u4 * u4;
    (((struct o148_float *)(a4))->v) = (1.0f / ((((((struct o128_float *)(a4))->v)) * u7) / 12.0f));
    u8 = (((struct o144_float *)(a4))->v);
    u9 = (((struct o140_float *)(a4))->v);
    u11 = (u9 * u9);
    u11 = u11 + u8 * u8;
    (((struct o150_float *)(a4))->v) = (1.0f / ((((((struct o128_float *)(a4))->v)) * u11) / 12.0f));
    return u8;
}
