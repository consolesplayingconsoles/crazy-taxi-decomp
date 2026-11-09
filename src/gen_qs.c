/* Straight-line functions with calls and guards (batch gen_qs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int End_Pass_Ranking(void);
extern int nlSprPut();
int hudRankPanelSlide(void);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int hudRankPanelSlide(void)
{
    int t0;
    int t1;
    int t16;
    int t4;
    int t28;
    float u29;
    int t30;
    int t35;
    int t23;
    int t10;

    t0 = (((struct o8_int *)0xC2A9170)->v);
    if (t0 == 0) {
        t1 = (((struct o0_int *)0xC2A9170)->v);
        (((struct o0_uint *)0xC2A9170)->v) = (t1 + 0x1);
        if ((int)(t1 + 0x1) > (int)0xA) {
            (((struct o8_uint *)0xC2A9170)->v) = 0x1;
            (((struct o0_uint *)0xC2A9170)->v) = 0xA;
        }
        t23 = 0xC2A9178;
    } else {
        t16 = 0xC2A9178;
        if (t0 == 6) {
            t4 = (((struct o0_int *)0xC2A9170)->v);
            (((struct o0_uint *)0xC2A9170)->v) = (t4 - 1);
            if ((int)(t4 - 1) < 0) {
                (((struct o0_uint *)0xC2A9170)->v) = 0x0;
                End_Pass_Ranking();
            } else {
                t10 = 0xC2A9178;
            }
            t16 = t10;
        }
        t23 = t16;
    }
    (((struct o4_float *)0xC2A80BC)->v) = 532.0f;
    (((struct o8_float *)0xC2A80BC)->v) = 1.9e+02f;
    (((struct oC_float *)0xC2A80BC)->v) = 0.099999994f;
    (((struct o18_float *)0xC2A80BC)->v) = 0.0f;
    t28 = (((struct o0_int *)0xC2A9170)->v);
    u29 = 0.049999997f;
    (((struct o10_float *)0xC2A80BC)->v) = ((float)t28 * u29);
    (((struct o20_float *)0xC2A80BC)->v) = ((float)t28 * u29);
    (((struct o14_float *)0xC2A80BC)->v) = 1.0f;
    (((struct o1C_float *)0xC2A80BC)->v) = 0.0f;
    (((struct o24_float *)0xC2A80BC)->v) = 1.0f;
    (((struct o34_uint *)0xC2A80BC)->v) = 0xB;
    t30 = (((struct oC_int *)0xC2A9170)->v);
    (((struct oC_uint *)0xC2A9170)->v) = (t30 + 0x1);
    if ((int)((int)((int)(t30 + 0x1) % (int)0x3D)) < (int)0x32) {
        (((struct o0_uint *)0xC2A80BC)->v) = 0x157;
    } else {
        (((struct o0_uint *)0xC2A80BC)->v) = 0x158;
    }
    (((struct o2C_float *)0xC2A80BC)->v) = 1.0f;
    (((struct o28_uint *)0xC2A80BC)->v) = 0x0;
    t35 = ((int (*)(int, int))(nlSprPut))(0xC2A80BC, t23);
    (((struct o34_uint *)0xC2A80BC)->v) = 0x9;
    (((struct o18_float *)0xC2A80BC)->v) = (1.0f - ((float)((((struct o0_int *)0xC2A9170)->v)) * u29));
    (((struct o20_float *)0xC2A80BC)->v) = 1.0f;
    return ((int (*)(int))(nlSprPut))(0xC2A80BC);
}
