/* Straight-line functions with calls and guards (batch gen_dy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FcvPlayBuffer(int, int);
int FcvStoreBuffer(int, int, float);
extern float nlInnerProduct();
int drvJolt(float f4, float f5);
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o24_float { char p[0x24]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int drvJolt(float f4, float f5)
{
    float u12;
    float u15;
    float u21;
    float u22;
    float u25;
    float u47;
    int t48;
    float u56;
    int t57;
    float u59;
    int t60;
    float u70;
    int t71;
    float u32;
    int stk[11];
    int R1004;
    float R1008;
    float R1012;
    float R1016;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(float *)((int)stk + 8);
    R1012 = *(float *)((int)stk + 12);
    R1016 = *(float *)((int)stk + 16);

    R1008 = (((float (*)(int, int, float, float))(nlInnerProduct))(0xC2AD288, 0xC2AD1E0, f4, f5));
    R1012 = (((float (*)(int, int))(nlInnerProduct))(0xC2AD288, 0xC2AD1EC));
    R1016 = (((float (*)(int, int))(nlInnerProduct))(0xC2AD288, 0xC2AD1F8));
    R1008 = ((R1008) * 0.25f);
    R1012 = ((R1012) * 0.5f);
    R1016 = ((R1016) * 0.5f);
    if ((R1008) > 1.0f) {
        R1008 = 1.0f;
    } else {
        if ((-1.0f) > (R1008)) {
            R1008 = (-1.0f);
        }
    }
    u12 = R1012;
    if (u12 > 1.0f) {
        R1012 = 1.0f;
    } else {
        if ((-1.0f) > u12) {
            R1012 = (-1.0f);
        }
    }
    u15 = R1016;
    if (u15 > 1.0f) {
        R1016 = 1.0f;
    } else {
        if ((-1.0f) > u15) {
            R1016 = (-1.0f);
        }
    }
    FcvStoreBuffer(((((struct o20_int *)0xC2AD000)->v)), 0xC2AD460, ((((struct o24_float *)0xC2AD000)->v)));
    u21 = (((struct o2C_float *)0xC2AD000)->v);
    u22 = *(float *)0xC2AD464;
    if (((u22 - u21) > -0.5f) && (0.5f > (u22 - u21))) {
        u25 = ((((struct o0_float *)0xC2AD52C)->v));
        u25 = u25 + 0.5f * (R1012);
        (((struct o0_float *)0xC2AD52C)->v) = u25;
    }
    if (!(0.0f > (u22 - u21))) {
        u32 = (((((struct o0_float *)0xC2AD52C)->v)) - ((0.849999964f * (u22 - u21)) / 65.0f));
    } else {
        u32 = (((((struct o0_float *)0xC2AD52C)->v)) - ((7.0f * (u22 - u21)) / 65.0f));
    }
    (((struct o0_float *)0xC2AD52C)->v) = (u32 * 0.799999952f);
    if ((u32 * 0.799999952f) > 5.0f) {
        (((struct o0_float *)0xC2AD52C)->v) = 5.0f;
    } else {
        if ((-1.0f) > ((((struct o0_float *)0xC2AD52C)->v))) {
            (((struct o0_float *)0xC2AD52C)->v) = (-1.0f);
        }
    }
    *(float *)0xC2AD464 = ((*(float *)0xC2AD464) + ((((struct o0_float *)0xC2AD52C)->v)));
    u47 = (float)((((((struct o4_int *)0xC2AD52C)->v)) + (-(int)((R1008) * 2730.0f))) - (int)(((float)(((((struct o0_int *)0xC2AD4A4)->v)) - ((((struct o0_int *)0xC2AD06C)->v))) * 0.5f) / 65.0f));
    (((struct o4_uint *)0xC2AD52C)->v) = (int)(u47 * 0.849999964f);
    t48 = (((struct o0_int *)0xC2AD4A4)->v);
    (((struct o0_uint *)0xC2AD4A4)->v) = (t48 + (int)(u47 * 0.849999964f));
    if ((int)(t48 + (int)(u47 * 0.849999964f)) > (int)0xE39) {
        (((struct o0_uint *)0xC2AD4A4)->v) = 0xE39;
    } else {
        if ((int)((((struct o0_int *)0xC2AD4A4)->v)) < (int)0xFFFFF1C7) {
            (((struct o0_uint *)0xC2AD4A4)->v) = 0xFFFFF1C7;
        }
    }
    R1004 = (((((struct o8_int *)0xC2AD4A4)->v)) - ((((struct o8_int *)0xC2AD06C)->v)));
    u56 = R1008;
    t57 = (((struct oC_int *)0xC2AD52C)->v);
    (((struct oC_uint *)0xC2AD52C)->v) = (t57 + (-(int)(u56 * 2730.0f)));
    u59 = (float)((t57 + (-(int)(u56 * 2730.0f))) - (int)(((float)(R1004) * 3.0f) / 15.0f));
    (((struct oC_uint *)0xC2AD52C)->v) = (int)(u59 * 0.799999952f);
    t60 = (((struct o8_int *)0xC2AD4A4)->v);
    (((struct o8_uint *)0xC2AD4A4)->v) = (t60 + (int)(u59 * 0.799999952f));
    if ((int)(t60 + (int)(u59 * 0.799999952f)) > (int)0xE39) {
        (((struct o8_uint *)0xC2AD4A4)->v) = 0xE39;
    } else {
        if ((int)((((struct o8_int *)0xC2AD4A4)->v)) < (int)0xFFFFF1C7) {
            (((struct o8_uint *)0xC2AD4A4)->v) = 0xFFFFF1C7;
        }
    }
    u70 = (float)((((((struct o10_int *)0xC2AD52C)->v)) + (int)((R1016) * 2730.0f)) - (int)(((float)(((((struct oC_int *)0xC2AD4A4)->v)) - ((((struct oC_int *)0xC2AD06C)->v))) * 0.599999964f) / 15.0f));
    (((struct o10_uint *)0xC2AD52C)->v) = (int)(u70 * 0.949999988f);
    t71 = (((struct oC_int *)0xC2AD4A4)->v);
    (((struct oC_uint *)0xC2AD4A4)->v) = (t71 + (int)(u70 * 0.949999988f));
    if ((int)(t71 + (int)(u70 * 0.949999988f)) > (int)0x4E39) {
        (((struct oC_uint *)0xC2AD4A4)->v) = 0x4E39;
    } else {
        if ((int)((((struct oC_int *)0xC2AD4A4)->v)) < (int)0x2000) {
            (((struct oC_uint *)0xC2AD4A4)->v) = 0x2000;
        }
    }
    return (FcvPlayBuffer(0xC2AD460, ((((struct o0_int *)0xC2AD000)->v))));
}
