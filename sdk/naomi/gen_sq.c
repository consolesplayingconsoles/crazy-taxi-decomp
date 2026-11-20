/* Straight-line functions with calls and guards (batch gen_sq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlArcTan(float);
float nlCos(int);
int nlMultiMatrix(int);
float nlSin(int);
float nlTan(int);
int nl_set_cnv_proj_pers(void);
int nlPerspective(int a4, float f4, float f5, float f6);
struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };


int nlPerspective(int a4, float f4, float f5, float f6)
{
    int t0;
    float t1;
    float u2;
    int t4;
    float t5;
    int t7;
    int t9;
    int t20;
    float t16;
    float t25;
    float u26;
    float u27;
    float u28;
    float u35;
    float u36;
    float u37;
    float t39;
    float u42;
    float t43;
    float t45;
    float t46;
    float t47;
    int stk[33];
    float R1004;
    int R1008;
    float R1012;
    float R1016;
    float R1020;
    float R1024;

    R1004 = *(float *)((int)stk + 0);
    R1008 = *(int *)((int)stk + 4);
    R1012 = *(float *)((int)stk + 8);
    R1016 = *(float *)((int)stk + 12);
    R1020 = *(float *)((int)stk + 16);
    R1024 = *(float *)((int)stk + 20);

    R1008 = a4;
    R1012 = f4;
    t0 = R1008;
    t1 = nlTan((t0 >> 1));
    R1004 = (1.0f / t1);
    u2 = R1012;
    if (((((struct oC_float *)0xC14A810)->v)) != 0.0f) {
        t4 = nlArcTan((u2 / (1.0f / t1)));
        R1008 = t4;
        t5 = nlTan(t4);
        t7 = nlArcTan((t5 * (((((struct oC_float *)0xC14A810)->v)) + 1.0f)));
        R1024 = (1.0f / (nlCos(t7)));
    } else {
        t9 = nlArcTan((u2 / (1.0f / t1)));
        R1024 = (1.0f / (nlCos(t9)));
    }
    t20 = (t0 >> 1);
    if (((((struct o10_float *)0xC14A810)->v)) != 0.0f) {
        t16 = nlTan((t0 >> 1));
        t20 = (nlArcTan((t16 * (((((struct o10_float *)0xC14A810)->v)) + 1.0f))));
    }
    t25 = nlCos(t20);
    (((struct oC_float *)0xC14A810)->v) = 0.0f;
    (((struct o10_float *)0xC14A810)->v) = 0.0f;
    u26 = *(float *)0xC0793AC;
    u27 = R1004;
    u28 = R1012;
    R1020 = (u27 / u28);
    (((struct o0_float *)0xC14A810)->v) = ((((u27 / u28) * (R1024))) * u26);
    (((struct o4_float *)0xC14A810)->v) = ((((R1004) * (1.0f / t25))) * u26);
    (((struct o0_float *)0xC2B3490)->v) = (((((struct o14_float *)0xC14A810)->v)) * ((((struct o0_float *)0xC14A810)->v)));
    u35 = (((struct o4_float *)0xC14A810)->v);
    u36 = (((struct o18_float *)0xC14A810)->v);
    (((struct o4_float *)0xC2B3490)->v) = (u36 * u35);
    u37 = (((struct o0_float *)0xC2B3490)->v);
    if (u37 > (u36 * u35)) {
        (((struct o8_float *)0xC14A810)->v) = u37;
    } else {
        (((struct o8_float *)0xC14A810)->v) = (u36 * u35);
    }
    t39 = nlTan((t0 >> 1));
    R1016 = (float)(nlArcTan((t39 * (R1012))));
    (((struct o14_float *)0xC2B3450)->v) = 0.0f;
    (((struct o4_float *)0xC2B3450)->v) = 0.0f;
    (((struct o30_float *)0xC2B3450)->v) = 0.0f;
    (((struct o20_float *)0xC2B3450)->v) = 0.0f;
    u42 = R1016;
    R1008 = (int)u42;
    t43 = nlCos((int)u42);
    (((struct o0_float *)0xC2B3450)->v) = t43;
    (((struct o10_float *)0xC2B3450)->v) = (-t43);
    t45 = nlSin((R1008));
    (((struct o18_float *)0xC2B3450)->v) = t45;
    (((struct o8_float *)0xC2B3450)->v) = t45;
    t46 = nlCos((t0 >> 1));
    (((struct o24_float *)0xC2B3450)->v) = t46;
    (((struct o34_float *)0xC2B3450)->v) = (-t46);
    t47 = nlSin((t0 >> 1));
    (((struct o38_float *)0xC2B3450)->v) = t47;
    (((struct o28_float *)0xC2B3450)->v) = t47;
    (((struct o1C_float *)0xC2B3450)->v) = 0.0f;
    (((struct oC_float *)0xC2B3450)->v) = 0.0f;
    (((struct o3C_float *)0xC2B3450)->v) = 0.0f;
    (((struct o2C_float *)0xC2B3450)->v) = 0.0f;
    *(float *)(((int)stk + 24)) = (R1020);
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = (R1004);
    *(float *)(((int)stk + 48)) = 0.0f;
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = 0.0f;
    *(float *)(((int)stk + 60)) = 0.0f;
    *(float *)(((int)stk + 64)) = ((f5 + f6) / (f5 - f6));
    *(float *)(((int)stk + 68)) = (-1.0f);
    *(float *)(((int)stk + 72)) = 0.0f;
    *(float *)(((int)stk + 76)) = 0.0f;
    *(float *)(((int)stk + 80)) = ((((f5 * f6)) * (1.0f + 1.0f)) / (f5 - f6));
    *(float *)(((int)stk + 84)) = 0.0f;
    (((struct o0_float *)0xC2B7BDC)->v) = f5;
    (((struct o4_float *)0xC2B7BDC)->v) = f6;
    (((struct o8_float *)0xC2B7BDC)->v) = (1.0f / f5);
    (((struct o18_float *)0xC2B315C)->v) = f5;
    (((struct o0_float *)0xC2B315C)->v) = (-f5);
    (((struct o1C_float *)0xC2B315C)->v) = f6;
    (((struct o14_float *)0xC2B315C)->v) = (1.0f / f5);
    nlMultiMatrix((((int)stk + 0) + 0x18));
    return (nl_set_cnv_proj_pers());
}
