/* Straight-line functions with calls and guards (batch gen_als): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int selectInitFrontSprite(void);
struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };


int selectInitFrontSprite(void)
{
    (((struct o0_float *)0xC2A74BC)->v) = 499.5f;
    (((struct o4_float *)0xC2A74BC)->v) = 1.0f;
    (((struct o8_float *)0xC2A74BC)->v) = 1.0f;
    (((struct oC_float *)0xC2A74BC)->v) = 0.0f;
    (((struct o10_float *)0xC2A74BC)->v) = 0.0f;
    (((struct o14_float *)0xC2A74BC)->v) = 1.0f;
    (((struct o18_float *)0xC2A74BC)->v) = 1.0f;
    (((struct o1C_uint *)0xC2A74BC)->v) = 0x0;
    (((struct o28_uint *)0xC2A74BC)->v) = 0xA;
    (((struct o20_float *)0xC2A74BC)->v) = 1.0f;
    (((struct o24_uint *)0xC2A74BC)->v) = 0x2;
    return 0x2C;
}
