/* Straight-line functions with calls and guards (batch gen_ahc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlSprPut(int, int, int);
int Result_Face_Put(int a4, int a5, int a6);
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };


int Result_Face_Put(int a4, int a5, int a6)
{
    if ((int)((((struct o4_int *)0xC2A96F0)->v)) > (int)0x2A) {
        (((struct o8_uint *)0xC2A96F0)->v) = (*(int *)(((((((struct o0_int *)0xC2A96F0)->v)) << 2) + 0xC0D0D48)));
        (((struct o3C_uint *)0xC2A96F0)->v) = 0xA;
        (((struct oC_float *)0xC2A96F0)->v) = 528.0f;
        (((struct o10_float *)0xC2A96F0)->v) = (float)(((((struct o0_int *)0xC2A9748)->v)) + 0xBE);
        (((struct o18_float *)0xC2A96F0)->v) = (((((struct o10_float *)0xC2A9748)->v)) + 1.0f);
        (((struct o1C_float *)0xC2A96F0)->v) = (((((struct o10_float *)0xC2A9748)->v)) + 1.0f);
        (((struct o24_float *)0xC2A96F0)->v) = 0.0f;
        (((struct o2C_float *)0xC2A96F0)->v) = 1.0f;
        (((struct o30_uint *)0xC2A96F0)->v) = 0x0;
        return nlSprPut(0xC2A96F8, 0xC2A9758, a6);
    }
    return 0xC2A96F4;
}
