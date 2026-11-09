/* Straight-line functions with calls and guards (batch gen_anj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CarSel_SetBackColor(int);
int nlObjPutSetFadeColor(float, float, float);
int nlSprPut(int);
int Result_SetBackColor(int a4);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };


int Result_SetBackColor(int a4)
{
    CarSel_SetBackColor(a4);
    nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
    (((struct o0_uint *)0xC2A96F8)->v) = 0x62;
    (((struct o34_uint *)0xC2A96F8)->v) = 0x2005;
    (((struct o10_float *)0xC2A96F8)->v) = (((((struct o10_float *)0xC2A9748)->v)) + 4e+01f);
    (((struct o14_float *)0xC2A96F8)->v) = (((((struct o10_float *)0xC2A9748)->v)) + 3e+01f);
    (((struct o4_float *)0xC2A96F8)->v) = 0.0f;
    (((struct o8_float *)0xC2A96F8)->v) = (float)(((((struct o0_int *)0xC2A9748)->v)) + 0x70);
    (((struct oC_float *)0xC2A96F8)->v) = 0.27999997f;
    (((struct o28_uint *)0xC2A96F8)->v) = 0x0;
    nlSprPut(0xC2A96F8);
    nlObjPutSetFadeColor(0.0f, 0.0f, 0.0f);
    (((struct oC_float *)0xC2A96F8)->v) = 0.19999999f;
    return 0xC;
}
