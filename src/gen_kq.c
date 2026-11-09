/* Straight-line functions with calls and guards (batch gen_kq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ndPuru2Start(int, int, int);
int nlCalcVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
float nlScalor(int, float);
int nlSubVector3op(int, int, int);
int carLoadTransfer(int a4);
struct o10_float { char p[0x10]; float v; };
struct o128_float { char p[0x128]; float v; };
struct o12C_float { char p[0x12C]; float v; };
struct o130_float { char p[0x130]; float v; };
struct o134_float { char p[0x134]; float v; };
struct o138_float { char p[0x138]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o140_float { char p[0x140]; float v; };
struct o144_float { char p[0x144]; float v; };
struct o15C_float { char p[0x15C]; float v; };
struct o194_float { char p[0x194]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o54_int { char p[0x54]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o86_short { char p[0x86]; short v; };
struct oC_float { char p[0xC]; float v; };


int carLoadTransfer(int a4)
{
    float t14;
    int t17;
    int t15;
    float u28;
    float u29;
    float u30;
    float u31;
    float u32;
    float u34;
    float u57;
    float u58;
    float u59;
    float u60;
    float u62;
    int t64;
    float u66;
    float u67;
    float u71;
    float u73;
    float u77;
    float u79;
    int t80;
    int t81;
    float u82;
    float u113;
    float u124;
    float u115;
    float u117;
    float u119;
    float u120;
    float u12;
    int t87;
    int t89;
    float u110;
    int stk[13];

    nlPushMatrix(0x0);
    nlRotateAY((-(unsigned short)((((struct o86_short *)(a4))->v))));
    nlSubVector3op((((int)stk + 0) + 0xC), (0xFC + a4), (0x108 + a4));
    nlCalcVector((((int)stk + 0) + 0xC), ((int)stk + 0));
    nlPopMatrix(0x1);
    if (((*(int *)((a4 + 0x20))) & 0x801F7FFE) != 0) {
        *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) * 0.194999993f);
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) * 0.194999993f);
        *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) * 0.194999993f);
        u12 = 0.194999993f;
    }
    t14 = nlScalor((((int)stk + 0) + 0xC), u12);
    if (t14 > 0.5f) {
        t17 = 0x3;
        if (1.0f > t14) {
        } else {
            t15 = 0x7;
            if (1.5f > t14) {
                t15 = 0x5;
            }
            t17 = t15;
        }
        ndPuru2Start((unsigned char)(*(signed char *)0xC1EE278), 0x10000000, t17);
    }
    u28 = (((struct o144_float *)(a4))->v);
    u29 = (((((struct o128_float *)(a4))->v)) * (*(float *)(((int)stk + 8))));
    u30 = (((struct o134_float *)(a4))->v);
    u31 = (((struct o130_float *)(a4))->v);
    u32 = ((u29 * u28) / (u31 + u30));
    if (((u29 * u28) / (u31 + u30)) > 120.0f) {
        u32 = 120.0f;
    }
    u34 = u32;
    if (-180.0f > u32) {
        u34 = -180.0f;
    }
    if (!(0.0f > u34)) {
        (((struct o138_float *)(a4))->v) = (((((((struct o134_float *)(a4))->v)) * (u34 / ((((struct o128_float *)(a4))->v))))) * 1.0f);
        if (((((struct o138_float *)(a4))->v)) > (((((struct o134_float *)(a4))->v)) * 0.549999952f)) {
            (((struct o138_float *)(a4))->v) = (((((struct o134_float *)(a4))->v)) * 0.549999952f);
        }
    } else {
        (((struct o138_float *)(a4))->v) = (((((((struct o130_float *)(a4))->v)) * (u34 / ((((struct o128_float *)(a4))->v))))) * 1.0f);
        if ((-(((((struct o130_float *)(a4))->v)) * 0.549999952f)) > ((((struct o138_float *)(a4))->v))) {
            (((struct o138_float *)(a4))->v) = (-(((((struct o130_float *)(a4))->v)) * 0.549999952f));
        }
    }
    u57 = (((struct o144_float *)(a4))->v);
    u58 = (((((struct o128_float *)(a4))->v)) * (*(float *)(((int)stk + 0))));
    u59 = (((struct o140_float *)(a4))->v);
    u60 = ((u58 * u57) / u59);
    if (((u58 * u57) / u59) > 180.0f) {
        u60 = 180.0f;
    }
    u62 = u60;
    if (-180.0f > u60) {
        u62 = -180.0f;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x108 + a4)) = *(struct mv3 *)((0xFC + a4)); }
    t64 = (((struct o54_int *)(a4))->v);
    u66 = 0.0f;
    u67 = 0.0f;
    if ((t64 != 0) && (t64 != 3)) {
        u66 = u34;
        u67 = u62;
    }
    (((struct o8_float *)((0x1A0 + a4)))->v) = (((((((struct o128_float *)(a4))->v)) * 0.25f) - (u66 * 1.5f)) - (u67 * 0.399999976f));
    (((struct o8_float *)((0x84 + (0x1A0 + a4))))->v) = (((((((struct o128_float *)(a4))->v)) * 0.25f) - (u66 * 1.5f)) + (u67 * 0.399999976f));
    u71 = (u66 * 1.5f);
    u71 = u71 + 0.25f * ((((struct o128_float *)(a4))->v));
    (((struct o8_float *)((0x108 + (0x1A0 + a4))))->v) = (u71 - (u67 * 0.399999976f));
    u73 = (u66 * 1.5f);
    u73 = u73 + 0.25f * ((((struct o128_float *)(a4))->v));
    (((struct o8_float *)((0x18C + (0x1A0 + a4))))->v) = (u73 + (u67 * 0.399999976f));
    (((struct o10_float *)((0x1A0 + a4)))->v) = (((((((struct o128_float *)(a4))->v)) * 0.25f) - (u66 * 0.889999986f)) - (u67 * 0.099999994f));
    (((struct o10_float *)((0x84 + (0x1A0 + a4))))->v) = (((((((struct o128_float *)(a4))->v)) * 0.25f) - (u66 * 0.889999986f)) + (u67 * 0.099999994f));
    u77 = (u66 * 0.889999986f);
    u77 = u77 + 0.25f * ((((struct o128_float *)(a4))->v));
    (((struct o10_float *)((0x108 + (0x1A0 + a4))))->v) = (u77 - (u67 * 0.099999994f));
    u79 = (u66 * 0.889999986f);
    u79 = u79 + 0.25f * ((((struct o128_float *)(a4))->v));
    (((struct o10_float *)((0x18C + (0x1A0 + a4))))->v) = (u79 + (u67 * 0.099999994f));
    (((struct o194_float *)(a4))->v) = 0.0f;
    t80 = 0x0;
    t81 = (0x1A0 + a4);
    u82 = u67;
    for (;;) {
        (((struct o8_float *)(t81))->v) = (((((struct o8_float *)(t81))->v)) + ((((struct oC_float *)(t81))->v)));
        (((struct oC_float *)(t81))->v) = 0.0f;
        if ((int)t80 < (int)0x2) {
            t87 = 0x184;
            t89 = (0xC08A8EC + ((*(int *)((t81 + 0x0))) << 2));
        } else {
            t87 = 0x190;
            t89 = (0xC08A8EC + ((*(int *)((t81 + 0x0))) << 2));
        }
        (((struct o28_float *)(t81))->v) = (((((struct o4_float *)(t89))->v)) * (*(float *)((a4 + t87))));
        (((struct o194_float *)(a4))->v) = (((((struct o194_float *)(a4))->v)) + ((((struct o28_float *)(t81))->v)));
        (((struct o2C_float *)(t81))->v) = (((((((struct o4_float *)((((*(int *)((t81 + 0x0))) << 2) + 0xC08A94C)))->v)) * ((((struct o10_float *)(t81))->v)))) * ((((struct o12C_float *)(a4))->v)));
        if ((int)t80 < (int)0x2) {
            u110 = (((((((((struct o28_float *)(t81))->v)) * ((((struct o10_float *)(t81))->v)))) * ((((struct o12C_float *)(a4))->v)))) * 0.177499995f);
        } else {
            u110 = (((((((((struct o28_float *)(t81))->v)) * ((((struct o10_float *)(t81))->v)))) * ((((struct o12C_float *)(a4))->v)))) * 0.198799968f);
        }
        (((struct o14_float *)(t81))->v) = u110;
        u113 = (((struct o15C_float *)(a4))->v);
        u124 = _builtin_fabsf(u113);
        if (_builtin_fabsf(u113) > 11.0f) {
            u115 = (((struct o2C_float *)(t81))->v);
            u82 = _builtin_fabsf(((((struct o15C_float *)(a4))->v)));
            u82 = (u82 / 11.0f);
            u117 = (((u82 * u82)) * u82);
            u82 = 11.0f;
            (((struct o2C_float *)(t81))->v) = (u115 * u117);
            u119 = (((struct o14_float *)(t81))->v);
            u82 = (u82 / _builtin_fabsf(((((struct o15C_float *)(a4))->v))));
            u120 = (u82 * u82);
            (((struct o14_float *)(t81))->v) = (u119 * ((u120 * u82)));
            u124 = (u120 * u82);
        }
        t80 = (t80 + 0x1);
        t81 = (t81 + 0x84);
        if ((int)t80 < (int)0x4) continue;
        break;
    }
    (((struct o194_float *)(a4))->v) = (((((struct o194_float *)(a4))->v)) * 0.25f);
    return 0x194;
}
