/* Straight-line functions with calls and guards (batch gen_tn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlObjPutSetFadeColor(float, float, float);
extern int nlSprPut();
int Result_Class_Line_Put(int a4, int a5, int a6);
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };


int Result_Class_Line_Put(int a4, int a5, int a6)
{
    int t4;
    int t5;
    int t6;
    int t11;
    int t15;

    if ((int)((((struct o0_int *)0xC2A96F4)->v)) <= (int)0x58) {
        return 0xC2A96F4;
    }
    (((struct o4_uint *)0xC2A96F4)->v) = 0x5D;
    (((struct oC_float *)0xC2A96F4)->v) = (float)(((((struct o0_int *)0xC2A9748)->v)) + 0x1BC);
    (((struct o14_float *)0xC2A96F4)->v) = (((((struct o10_float *)0xC2A9748)->v)) + 1.0f);
    (((struct o18_float *)0xC2A96F4)->v) = (((((struct o10_float *)0xC2A9748)->v)) + 1.0f);
    (((struct o20_float *)0xC2A96F4)->v) = 0.0f;
    (((struct o28_float *)0xC2A96F4)->v) = 1.0f;
    (((struct o2C_uint *)0xC2A96F4)->v) = 0x0;
    (((struct o38_uint *)0xC2A96F4)->v) = 0xA;
    t4 = 0x0;
    t5 = 0x68;
    for (;;) {
        (((struct o8_float *)0xC2A96F4)->v) = (float)t5;
        t6 = ((int (*)(int, int, int))(nlSprPut))(0xC2A96F8, a5, a6);
        t4 = (t4 + 0x1);
        t5 = (t5 + 0x11);
        if ((int)t4 >= (int)0x8) {
            break;
        }
    }
    (((struct o4_uint *)0xC2A96F4)->v) = 0x146;
    (((struct o8_float *)0xC2A96F4)->v) = 172.0f;
    (((struct oC_float *)0xC2A96F4)->v) = (float)(((((struct o0_int *)0xC2A9748)->v)) + 0x18C);
    (((struct o10_float *)0xC2A96F4)->v) = 0.199999988f;
    (((struct o14_float *)0xC2A96F4)->v) = (((((struct o10_float *)0xC2A9748)->v)) + 1.0f);
    (((struct o18_float *)0xC2A96F4)->v) = (((((struct o10_float *)0xC2A9748)->v)) + 1.0f);
    (((struct o20_float *)0xC2A96F4)->v) = 0.0f;
    (((struct o28_float *)0xC2A96F4)->v) = 1.0f;
    (((struct o38_uint *)0xC2A96F4)->v) = 0x200A;
    nlObjPutSetFadeColor(0.699999988f, 0.699999988f, 0.699999988f);
    t11 = ((int (*)(int))(nlSprPut))(0xC2A96F8);
    (((struct o10_float *)0xC2A96F4)->v) = 0.199999988f;
    (((struct o38_uint *)0xC2A96F4)->v) = 0xA;
    (((struct o4_uint *)0xC2A96F4)->v) = 0x12E;
    (((struct o8_float *)0xC2A96F4)->v) = 276.0f;
    (((struct oC_float *)0xC2A96F4)->v) = (float)(((((struct o0_int *)0xC2A9748)->v)) + 0x1B4);
    (((struct o14_float *)0xC2A96F4)->v) = (((((struct o10_float *)0xC2A9748)->v)) + 1.0f);
    (((struct o18_float *)0xC2A96F4)->v) = (((((struct o10_float *)0xC2A9748)->v)) + 1.0f);
    (((struct o20_float *)0xC2A96F4)->v) = 0.0f;
    (((struct o28_float *)0xC2A96F4)->v) = 1.0f;
    t15 = ((int (*)(int))(nlSprPut))(0xC2A96F8);
    return nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
}
