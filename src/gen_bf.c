/* Straight-line functions with calls and guards (batch gen_bf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int nlSprPut();
int Put_TotalDrum_Money(int a4, int a5, int a6);
struct o0_float { float v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };


int Put_TotalDrum_Money(int a4, int a5, int a6)
{
    float u2;
    float u5;
    float u10;
    float u12;
    int t14;
    int t19;
    int t20;
    int t31;
    int t36;
    int t41;
    int t47;
    int t66;
    int t69;
    int t72;
    int t74;
    int t84;
    int t86;
    int stk[13];

    (((struct o34_uint *)0xC2A7E8C)->v) = 0x6;
    (((struct o0_uint *)0xC2A7E8C)->v) = 0x128;
    (((struct o18_float *)0xC2A7E8C)->v) = 0.0f;
    (((struct o20_float *)0xC2A7E8C)->v) = 1.0f;
    (((struct o4_float *)0xC2A7E8C)->v) = 532.0f;
    u2 = 0.199999988f;
    if (0.199999988f > ((((struct o0_float *)0xC2A8C8C)->v))) {
    } else {
        u2 = ((((struct o0_float *)0xC2A8C8C)->v));
    }
    u5 = (float)((*(int *)0xC2A8D78) - 4);
    u5 = u5 + 20.0f * (u2 + -0.199999988f);
    (((struct o8_float *)0xC2A7E8C)->v) = u5;
    (((struct oC_float *)0xC2A7E8C)->v) = 0.049999997f;
    (((struct o10_float *)0xC2A7E8C)->v) = 10.0f;
    u10 = 0.0f;
    if (0.0f > ((((struct o0_float *)0xC2A8C8C)->v))) {
    } else {
        u10 = (((((struct o0_float *)0xC2A8C8C)->v)) * 5.0f);
    }
    u12 = u10;
    if (u10 > 1.0f) {
        u12 = 1.0f;
    }
    (((struct o14_float *)0xC2A7E8C)->v) = (u12 * (1.0f + 1.0f));
    (((struct o2C_float *)0xC2A7E8C)->v) = 0.699999988f;
    t14 = ((int (*)(int, int, int))(nlSprPut))(0xC2A7E8C, a5, a6);
    (((struct o28_uint *)0xC2A7E8C)->v) = 0x0;
    (((struct o10_float *)0xC2A7E8C)->v) = 1.0f;
    (((struct o14_float *)0xC2A7E8C)->v) = 1.0f;
    (((struct o2C_float *)0xC2A7E8C)->v) = 1.0f;
    (((struct o8_float *)0xC2A7E8C)->v) = (float)((*(int *)0xC2A8D78) + 0x2);
    (((struct o1C_float *)0xC2A7E8C)->v) = 0.0f;
    if (((((struct o4_int *)0xC2A8C8C)->v)) != 0) {
        (((struct o24_float *)0xC2A7E8C)->v) = 1.0f;
        (((struct o4_float *)0xC2A7E8C)->v) = 532.0f;
        (((struct o34_uint *)0xC2A7E8C)->v) = 0xB;
        (((struct o0_uint *)0xC2A7E8C)->v) = (*(int *)(((((((struct o28_int *)0xC2A8C8C)->v)) << 2) + 0xC130A74)));
        (((struct o18_float *)0xC2A7E8C)->v) = 0.0f;
        t19 = (((struct o4_int *)0xC2A8C8C)->v);
        (((struct o10_float *)0xC2A7E8C)->v) = ((float)t19 * 0.049999997f);
        (((struct o20_float *)0xC2A7E8C)->v) = ((float)t19 * 0.049999997f);
        (((struct o2C_float *)0xC2A7E8C)->v) = 1.0f;
        (((struct oC_float *)0xC2A7E8C)->v) = 0.099999994f;
        (((struct o28_uint *)0xC2A7E8C)->v) = 0x0;
        t20 = ((int (*)(int))(nlSprPut))(0xC2A7E8C);
        if (0.0f > ((((struct o0_float *)0xC2A8C8C)->v))) {
            *(float *)(((int)stk + 0)) = 0.0f;
        } else {
            *(float *)(((int)stk + 0)) = (((((struct o0_float *)0xC2A8C8C)->v)) * 16.0f);
        }
        (((struct o0_uint *)0xC2A7E8C)->v) = (*(int *)((((*(int *)0xC2A8EA8) << 2) + 0xC130A80)));
        (((struct o8_float *)0xC2A7E8C)->v) = (((float)(*(int *)0xC2A8D78) + (*(float *)(((int)stk + 0)))) + 19.0f);
        t31 = ((int (*)(int))(nlSprPut))(0xC2A7E8C);
        (((struct o0_uint *)0xC2A7E8C)->v) = (*(int *)(((((((struct o28_int *)0xC2A8C8C)->v)) << 2) + 0xC130A74)));
        (((struct o34_uint *)0xC2A7E8C)->v) = 0x9;
        (((struct o8_float *)0xC2A7E8C)->v) = (float)((*(int *)0xC2A8D78) + 0x2);
        (((struct o18_float *)0xC2A7E8C)->v) = (1.0f - ((float)((((struct o4_int *)0xC2A8C8C)->v)) * 0.049999997f));
        (((struct o4_float *)0xC2A7E8C)->v) = 532.0f;
        (((struct o20_float *)0xC2A7E8C)->v) = 1.0f;
        t36 = ((int (*)(int))(nlSprPut))(0xC2A7E8C);
        (((struct o0_uint *)0xC2A7E8C)->v) = (*(int *)((((*(int *)0xC2A8EA8) << 2) + 0xC130A80)));
        (((struct o8_float *)0xC2A7E8C)->v) = (((float)(*(int *)0xC2A8D78) + (*(float *)(((int)stk + 0)))) + 19.0f);
        t41 = ((int (*)(int))(nlSprPut))(0xC2A7E8C);
        (((struct oC_float *)0xC2A7E8C)->v) = 0.199999988f;
    }
    (((struct o4_float *)0xC2A7E8C)->v) = 532.0f;
    (((struct o8_float *)0xC2A7E8C)->v) = (float)((*(int *)0xC2A8D78) + 0x2);
    (((struct o34_uint *)0xC2A7E8C)->v) = 0x6;
    (((struct o1C_float *)0xC2A7E8C)->v) = 0.0f;
    (((struct o28_uint *)0xC2A7E8C)->v) = 0x0;
    t47 = (((struct o30_int *)0xC2A8C8C)->v);
    if (t47 == 0) {
        (((struct o14_float *)0xC2A7E8C)->v) = 0.0f;
    } else {
        if (t47 == 1) {
            if (!(0.0f > ((((struct o0_float *)0xC2A8C8C)->v)))) {
                (((struct o14_float *)0xC2A7E8C)->v) = ((((struct o0_float *)0xC2A8C8C)->v));
                (((struct o1C_float *)0xC2A7E8C)->v) = (1.0f - ((((struct o0_float *)0xC2A8C8C)->v)));
                (((struct o24_float *)0xC2A7E8C)->v) = 1.0f;
            } else {
                (((struct o14_float *)0xC2A7E8C)->v) = 0.0f;
                (((struct o1C_float *)0xC2A7E8C)->v) = 0.0f;
                (((struct o24_float *)0xC2A7E8C)->v) = 0.0f;
            }
        } else {
            (((struct o14_float *)0xC2A7E8C)->v) = 1.0f;
            (((struct o24_float *)0xC2A7E8C)->v) = 1.0f;
        }
    }
    (((struct o34_uint *)0xC2A7E8C)->v) = 0x2006;
    (((struct o0_uint *)0xC2A7E8C)->v) = 0x1B0;
    (((struct o18_float *)0xC2A7E8C)->v) = 0.0f;
    (((struct o20_float *)0xC2A7E8C)->v) = 1.0f;
    (((struct o4_float *)0xC2A7E8C)->v) = 460.0f;
    (((struct o8_float *)0xC2A7E8C)->v) = (float)((*(int *)0xC2A8D78) + 0xB);
    (((struct o10_float *)0xC2A7E8C)->v) = 1.0f;
    t66 = ((int (*)(int))(nlSprPut))(0xC2A7E8C);
    t69 = 0x1BD;
    if ((int)(*(int *)(((*(int *)0xC2A7600) + 0x0))) >= (int)0x186A0) {
        t69 = 0x1AF;
    }
    (((struct o0_uint *)0xC2A7E8C)->v) = t69;
    (((struct o10_float *)0xC2A7E8C)->v) = 1.0f;
    (((struct o4_float *)0xC2A7E8C)->v) = 520.0f;
    (((struct o8_float *)0xC2A7E8C)->v) = (float)((*(int *)0xC2A8D78) + 0xB);
    t72 = ((int (*)(int))(nlSprPut))(0xC2A7E8C);
    (((struct o0_uint *)0xC2A7E8C)->v) = 0x1B1;
    (((struct o10_float *)0xC2A7E8C)->v) = 1.0f;
    (((struct o4_float *)0xC2A7E8C)->v) = 576.0f;
    (((struct o8_float *)0xC2A7E8C)->v) = (float)((*(int *)0xC2A8D78) + 0xB);
    t74 = ((int (*)(int))(nlSprPut))(0xC2A7E8C);
    (((struct o0_uint *)0xC2A7E8C)->v) = 0x102;
    (((struct o18_float *)0xC2A7E8C)->v) = 0.0f;
    (((struct o20_float *)0xC2A7E8C)->v) = 1.0f;
    (((struct o24_float *)0xC2A7E8C)->v) = 1.0f;
    (((struct o4_float *)0xC2A7E8C)->v) = 450.0f;
    (((struct o8_float *)0xC2A7E8C)->v) = (float)((*(int *)0xC2A8D78) + 0xB);
    (((struct oC_float *)0xC2A7E8C)->v) = 0.289999992f;
    (((struct o10_float *)0xC2A7E8C)->v) = 1.0f;
    if (!(0.0f > ((((struct o0_float *)0xC2A8C8C)->v)))) {
        (((struct o14_float *)0xC2A7E8C)->v) = (((((struct o0_float *)0xC2A8C8C)->v)) * 0.5f);
        (((struct o1C_float *)0xC2A7E8C)->v) = ((1.0f - ((((struct o0_float *)0xC2A8C8C)->v))) * 0.5f);
        (((struct o24_float *)0xC2A7E8C)->v) = 1.0f;
    }
    t84 = ((int (*)(int))(nlSprPut))(0xC2A7E8C);
    (((struct o34_uint *)0xC2A7E8C)->v) = 0xE;
    (((struct o18_float *)0xC2A7E8C)->v) = 0.0f;
    (((struct o20_float *)0xC2A7E8C)->v) = 1.0f;
    (((struct o4_float *)0xC2A7E8C)->v) = 614.0f;
    (((struct o8_float *)0xC2A7E8C)->v) = (float)((*(int *)0xC2A8D78) + 0xB);
    (((struct oC_float *)0xC2A7E8C)->v) = 0.289999992f;
    (((struct o10_float *)0xC2A7E8C)->v) = 1.0f;
    (((struct o28_uint *)0xC2A7E8C)->v) = 0x8000;
    t86 = ((int (*)(int))(nlSprPut))(0xC2A7E8C);
    (((struct o34_uint *)0xC2A7E8C)->v) = 0x6;
    (((struct o28_uint *)0xC2A7E8C)->v) = 0x0;
    (((struct o14_float *)0xC2A7E8C)->v) = 1.0f;
    (((struct o24_float *)0xC2A7E8C)->v) = 1.0f;
    return 0x24;
}
