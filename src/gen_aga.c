/* Straight-line functions with calls and guards (batch gen_aga): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Init_Standard(void);
struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };


int Init_Standard(void)
{
    (((struct o0_float *)0xC2A7EE0)->v) = 3.2e+02f;
    (((struct o4_float *)0xC2A7EE0)->v) = 2.4e+02f;
    (((struct o8_float *)0xC2A7EE0)->v) = 0.19999999f;
    (((struct oC_float *)0xC2A7EE0)->v) = 1.0f;
    (((struct o10_float *)0xC2A7EE0)->v) = 1.0f;
    (((struct o1C_float *)0xC2A7EE0)->v) = 1.0f;
    (((struct o20_float *)0xC2A7EE0)->v) = 1.0f;
    (((struct o28_float *)0xC2A7EE0)->v) = 1.0f;
    (((struct o14_float *)0xC2A7EE0)->v) = 0.0f;
    (((struct o18_float *)0xC2A7EE0)->v) = 0.0f;
    (((struct o24_uint *)0xC2A7EE0)->v) = 0x0;
    (((struct o30_uint *)0xC2A7EE0)->v) = 0xA;
    (((struct o2C_uint *)0xC2A7EE0)->v) = 0x2;
    return 0x1C;
}
