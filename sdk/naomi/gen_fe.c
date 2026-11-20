/* Straight-line functions with calls and guards (batch gen_fe): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlArcTan(float);
float nlCos(int);
int nlMultiMatrix(int);
float nlSin(int);
float nlTan(int);
int nl_set_cnv_proj_pers(void);
int nlPerspectiveX(int a4, float f4, float f5, float f6);
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


int nlPerspectiveX(int a4, float f4, float f5, float f6)
{
    int t0;
    float t3;
    int t5;
    float u13;
    float u14;
    float u23;
    int t15;
    int t25;
    float t26;
    float u34;
    float u35;
    float u36;
    float t38;
    float t41;
    float t42;
    float u43;
    float t44;
    float t46;
    float u48;
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
    R1016 = f4;
    R1004 = f6;
    t0 = R1008;
    R1012 = (1.0f / (nlTan((t0 >> 1))));
    if (((((struct oC_float *)0xC14A810)->v)) != 0.0f) {
        t3 = nlTan((t0 >> 1));
        t5 = nlArcTan((t3 * (((((struct oC_float *)0xC14A810)->v)) + 1.0f)));
        R1024 = (1.0f / (nlCos(t5)));
    } else {
        R1024 = (1.0f / (nlCos((t0 >> 1))));
    }
    u13 = R1012;
    u14 = R1016;
    u23 = (1.0f / (u14 * u13));
    if (((((struct o10_float *)0xC14A810)->v)) != 0.0f) {
        t15 = nlArcTan((1.0f / (u14 * u13)));
        R1008 = t15;
        u23 = ((nlTan(t15)) * (((((struct o10_float *)0xC14A810)->v)) + 1.0f));
    }
    t25 = nlArcTan(u23);
    t26 = nlCos(t25);
    (((struct oC_float *)0xC14A810)->v) = 0.0f;
    (((struct o10_float *)0xC14A810)->v) = 0.0f;
    (((struct o0_float *)0xC14A810)->v) = ((((R1012) * (R1024))) * 0.5f);
    (((struct o4_float *)0xC14A810)->v) = (((((u14 * u13)) * (1.0f / t26))) * 0.5f);
    (((struct o0_float *)0xC2B3490)->v) = (((((struct o14_float *)0xC14A810)->v)) * ((((struct o0_float *)0xC14A810)->v)));
    u34 = (((struct o4_float *)0xC14A810)->v);
    u35 = (((struct o18_float *)0xC14A810)->v);
    (((struct o4_float *)0xC2B3490)->v) = (u35 * u34);
    u36 = (((struct o0_float *)0xC2B3490)->v);
    if (u36 > (u35 * u34)) {
        (((struct o8_float *)0xC14A810)->v) = u36;
    } else {
        (((struct o8_float *)0xC14A810)->v) = (u35 * u34);
    }
    t38 = nlTan((t0 >> 1));
    R1020 = (float)(nlArcTan((t38 / (R1016))));
    (((struct o14_float *)0xC2B3450)->v) = 0.0f;
    (((struct o4_float *)0xC2B3450)->v) = 0.0f;
    (((struct o30_float *)0xC2B3450)->v) = 0.0f;
    (((struct o20_float *)0xC2B3450)->v) = 0.0f;
    t41 = nlCos((t0 >> 1));
    (((struct o0_float *)0xC2B3450)->v) = t41;
    (((struct o10_float *)0xC2B3450)->v) = (-t41);
    t42 = nlSin((t0 >> 1));
    (((struct o18_float *)0xC2B3450)->v) = t42;
    (((struct o8_float *)0xC2B3450)->v) = t42;
    u43 = R1020;
    R1008 = (int)u43;
    t44 = nlCos((int)u43);
    (((struct o24_float *)0xC2B3450)->v) = t44;
    (((struct o34_float *)0xC2B3450)->v) = (-t44);
    t46 = nlSin((R1008));
    (((struct o38_float *)0xC2B3450)->v) = t46;
    (((struct o28_float *)0xC2B3450)->v) = t46;
    (((struct o1C_float *)0xC2B3450)->v) = 0.0f;
    (((struct oC_float *)0xC2B3450)->v) = 0.0f;
    (((struct o3C_float *)0xC2B3450)->v) = 0.0f;
    (((struct o2C_float *)0xC2B3450)->v) = 0.0f;
    *(float *)(((int)stk + 24)) = (R1012);
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = (u14 * u13);
    *(float *)(((int)stk + 48)) = 0.0f;
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = 0.0f;
    *(float *)(((int)stk + 60)) = 0.0f;
    u48 = R1004;
    *(float *)(((int)stk + 64)) = ((f5 + u48) / (f5 - u48));
    *(float *)(((int)stk + 68)) = (-1.0f);
    *(float *)(((int)stk + 72)) = 0.0f;
    *(float *)(((int)stk + 76)) = 0.0f;
    *(float *)(((int)stk + 80)) = ((((f5 * (R1004))) * (1.0f + 1.0f)) / (f5 - u48));
    *(float *)(((int)stk + 84)) = 0.0f;
    (((struct o0_float *)0xC2B7BDC)->v) = f5;
    (((struct o4_float *)0xC2B7BDC)->v) = (R1004);
    (((struct o8_float *)0xC2B7BDC)->v) = (1.0f / f5);
    (((struct o18_float *)0xC2B315C)->v) = f5;
    (((struct o0_float *)0xC2B315C)->v) = (-f5);
    (((struct o1C_float *)0xC2B315C)->v) = (R1004);
    (((struct o14_float *)0xC2B315C)->v) = (1.0f / f5);
    nlMultiMatrix((((int)stk + 0) + 0x18));
    return (nl_set_cnv_proj_pers());
}
