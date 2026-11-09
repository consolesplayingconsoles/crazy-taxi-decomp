/* Straight-line functions with calls and guards (batch gen_vt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int nlSprPut();
int hudDrawFareFrame(int a4, int a5, int a6);
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
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };


int hudDrawFareFrame(int a4, int a5, int a6)
{
    int t0;
    int t4;
    int t6;
    int t9;
    int t10;
    int t16;
    int t18;
    int t23;
    int t27;

    t0 = (((struct o0_int *)0xC2A8EB0)->v);
    if ((t0 != 1) && (t0 != 6)) {
        (((struct o1C_float *)0xC2A7E8C)->v) = 0.0f;
    } else {
        (((struct o1C_float *)0xC2A7E8C)->v) = (1.0f - ((((struct o3C_float *)0xC2A8E64)->v)));
    }
    (((struct o24_float *)0xC2A7E8C)->v) = 1.0f;
    (((struct o0_uint *)0xC2A7E8C)->v) = 0x128;
    (((struct o18_float *)0xC2A7E8C)->v) = 0.0f;
    (((struct o20_float *)0xC2A7E8C)->v) = 1.0f;
    (((struct o4_float *)0xC2A7E8C)->v) = 532.0f;
    (((struct o8_float *)0xC2A7E8C)->v) = 96.0f;
    (((struct oC_float *)0xC2A7E8C)->v) = 0.049999997f;
    (((struct o10_float *)0xC2A7E8C)->v) = 9.0f;
    (((struct o14_float *)0xC2A7E8C)->v) = (1.0f + 1.0f);
    (((struct o2C_float *)0xC2A7E8C)->v) = 0.699999988f;
    (((struct o28_uint *)0xC2A7E8C)->v) = 0x8000;
    t4 = ((int (*)(int, int, int))(nlSprPut))(0xC2A7E8C, a5, a6);
    (((struct o8_float *)0xC2A7E8C)->v) = (96.0f - ((((struct o8_float *)0xC2A8EB0)->v)));
    (((struct o28_uint *)0xC2A7E8C)->v) = 0x0;
    t6 = ((int (*)(int))(nlSprPut))(0xC2A7E8C);
    (((struct o10_float *)0xC2A7E8C)->v) = 1.0f;
    (((struct o14_float *)0xC2A7E8C)->v) = 1.0f;
    (((struct o2C_float *)0xC2A7E8C)->v) = 1.0f;
    (((struct o0_uint *)0xC2A7E8C)->v) = 0x102;
    (((struct o18_float *)0xC2A7E8C)->v) = 0.0f;
    (((struct o20_float *)0xC2A7E8C)->v) = 1.0f;
    (((struct o4_float *)0xC2A7E8C)->v) = 458.0f;
    (((struct o8_float *)0xC2A7E8C)->v) = (79.0f - ((((struct o8_float *)0xC2A8EB0)->v)));
    (((struct oC_float *)0xC2A7E8C)->v) = 0.289999992f;
    (((struct o10_float *)0xC2A7E8C)->v) = 1.0f;
    (((struct o14_float *)0xC2A7E8C)->v) = ((((struct o3C_float *)0xC2A8E64)->v));
    t9 = ((int (*)(int))(nlSprPut))(0xC2A7E8C);
    (((struct oC_float *)0xC2A7E8C)->v) = 0.279999971f;
    (((struct o0_uint *)0xC2A7E8C)->v) = 0x10E;
    (((struct o4_float *)0xC2A7E8C)->v) = 468.0f;
    t10 = ((int (*)(int))(nlSprPut))(0xC2A7E8C);
    if (((((struct o0_int *)0xC2A8E64)->v)) != 10) {
        (((struct o0_uint *)0xC2A7E8C)->v) = 0x10D;
    } else {
        (((struct o0_uint *)0xC2A7E8C)->v) = 0xFE;
    }
    (((struct o10_float *)0xC2A7E8C)->v) = 1.0f;
    (((struct o4_float *)0xC2A7E8C)->v) = 512.0f;
    t16 = ((int (*)(int))(nlSprPut))(0xC2A7E8C);
    (((struct o0_uint *)0xC2A7E8C)->v) = 0x10F;
    (((struct o10_float *)0xC2A7E8C)->v) = 1.0f;
    (((struct o4_float *)0xC2A7E8C)->v) = 568.0f;
    t18 = ((int (*)(int))(nlSprPut))(0xC2A7E8C);
    (((struct o0_uint *)0xC2A7E8C)->v) = 0x102;
    (((struct o34_uint *)0xC2A7E8C)->v) = 0x200E;
    (((struct o18_float *)0xC2A7E8C)->v) = 0.0f;
    (((struct o20_float *)0xC2A7E8C)->v) = 1.0f;
    (((struct o4_float *)0xC2A7E8C)->v) = 606.0f;
    (((struct o8_float *)0xC2A7E8C)->v) = (79.0f - ((((struct o8_float *)0xC2A8EB0)->v)));
    (((struct oC_float *)0xC2A7E8C)->v) = 0.289999992f;
    (((struct o10_float *)0xC2A7E8C)->v) = 1.0f;
    (((struct o14_float *)0xC2A7E8C)->v) = ((((struct o3C_float *)0xC2A8E64)->v));
    (((struct o28_uint *)0xC2A7E8C)->v) = 0x8000;
    t23 = ((int (*)(int))(nlSprPut))(0xC2A7E8C);
    (((struct o34_uint *)0xC2A7E8C)->v) = 0x2006;
    (((struct o28_uint *)0xC2A7E8C)->v) = 0x0;
    (((struct o0_uint *)0xC2A7E8C)->v) = 0x1A2;
    (((struct o18_float *)0xC2A7E8C)->v) = 0.0f;
    (((struct o20_float *)0xC2A7E8C)->v) = 1.0f;
    (((struct o4_float *)0xC2A7E8C)->v) = 532.0f;
    (((struct o8_float *)0xC2A7E8C)->v) = (111.0f - ((((struct o8_float *)0xC2A8EB0)->v)));
    (((struct oC_float *)0xC2A7E8C)->v) = 0.289999992f;
    (((struct o10_float *)0xC2A7E8C)->v) = 1.0f;
    (((struct o14_float *)0xC2A7E8C)->v) = ((((struct o3C_float *)0xC2A8E64)->v));
    t27 = ((int (*)(int))(nlSprPut))(0xC2A7E8C);
    (((struct o14_float *)0xC2A7E8C)->v) = 1.0f;
    (((struct o24_float *)0xC2A7E8C)->v) = 1.0f;
    return 0x24;
}
