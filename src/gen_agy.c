/* Straight-line functions with calls and guards (batch gen_agy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int nlSprPut();
int hudScaleRankPanel(void);
struct o0_float { float v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };


int hudScaleRankPanel(void)
{
    int t0;
    float u1;
    float u5;
    int t15;
    int t16;
    float u18;
    int t19;

    t0 = (((struct o4_int *)0xC2A9174)->v);
    if (t0 == 1) {
        u1 = (((struct o0_float *)0xC2A9174)->v);
        (((struct o0_float *)0xC2A9174)->v) = (u1 + 0.199999988f);
        (((struct o1C_float *)0xC2A80BC)->v) = (1.0f - ((u1 + 0.199999988f) * 0.5f));
        (((struct o24_float *)0xC2A80BC)->v) = 1.0f;
        if (((((struct o0_float *)0xC2A9174)->v)) > (1.0f + 1.0f)) {
            (((struct o4_uint *)0xC2A9174)->v) = 0x2;
            (((struct o0_float *)0xC2A9174)->v) = (1.0f + 1.0f);
        }
    } else {
        if (t0 == 5) {
            u5 = (((struct o0_float *)0xC2A9174)->v);
            (((struct o0_float *)0xC2A9174)->v) = (u5 - 0.199999988f);
            (((struct o1C_float *)0xC2A80BC)->v) = (1.0f - ((u5 - 0.199999988f) * 0.5f));
            (((struct o24_float *)0xC2A80BC)->v) = 1.0f;
            if (!(((((struct o0_float *)0xC2A9174)->v)) > 0.0f)) {
                (((struct o4_uint *)0xC2A9174)->v) = 0x6;
                (((struct o0_float *)0xC2A9174)->v) = 0.0f;
            }
        } else if ((t0 != 0) && (t0 != 6)) {
            (((struct o1C_float *)0xC2A80BC)->v) = 0.0f;
            (((struct o24_float *)0xC2A80BC)->v) = 1.0f;
        } else {
            (((struct o1C_float *)0xC2A80BC)->v) = 0.0f;
            (((struct o24_float *)0xC2A80BC)->v) = 0.0f;
        }
    }
    (((struct o34_uint *)0xC2A80BC)->v) = 0x6;
    (((struct o0_uint *)0xC2A80BC)->v) = 0x102;
    (((struct o18_float *)0xC2A80BC)->v) = 0.0f;
    (((struct o20_float *)0xC2A80BC)->v) = 1.0f;
    (((struct o4_float *)0xC2A80BC)->v) = 482.0f;
    (((struct o8_float *)0xC2A80BC)->v) = 200.0f;
    (((struct oC_float *)0xC2A80BC)->v) = 0.289999992f;
    (((struct o10_float *)0xC2A80BC)->v) = 1.0f;
    (((struct o14_float *)0xC2A80BC)->v) = ((((struct o0_float *)0xC2A9174)->v));
    t15 = ((int (*)(int, int))(nlSprPut))(0xC2A80BC, 0xC2A9178);
    (((struct o0_uint *)0xC2A80BC)->v) = 0x102;
    (((struct o34_uint *)0xC2A80BC)->v) = 0xE;
    (((struct o4_float *)0xC2A80BC)->v) = 582.0f;
    (((struct o28_uint *)0xC2A80BC)->v) = 0x8000;
    t16 = ((int (*)(int))(nlSprPut))(0xC2A80BC);
    (((struct o34_uint *)0xC2A80BC)->v) = 0x6;
    (((struct o28_uint *)0xC2A80BC)->v) = 0x0;
    (((struct o0_uint *)0xC2A80BC)->v) = 0x1A2;
    (((struct o4_float *)0xC2A80BC)->v) = 532.0f;
    u18 = 184.0f;
    u18 = u18 + 40.0f * ((((struct o0_float *)0xC2A9174)->v));
    (((struct o8_float *)0xC2A80BC)->v) = u18;
    (((struct oC_float *)0xC2A80BC)->v) = 0.099999994f;
    (((struct o10_float *)0xC2A80BC)->v) = 0.699999988f;
    (((struct o14_float *)0xC2A80BC)->v) = 1.0f;
    t19 = ((int (*)(int))(nlSprPut))(0xC2A80BC);
    (((struct o10_float *)0xC2A80BC)->v) = 1.0f;
    (((struct oC_float *)0xC2A80BC)->v) = 0.289999992f;
    return 0xC;
}
