/* Straight-line functions with calls and guards (batch gen_lw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern float _builtin_sqrtf(float);
int carCorneringForce(int, int, float);
int carLoadTransfer(int);
float carSpeedGripScale(float);
int carSteerWheels(int, int, int, int, float, float);
int nlCalcVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int carWheelForces(int a4, int a5, int a6, int a7, float f4, float f5);
struct o10_float { char p[0x10]; float v; };
struct o11C_float { char p[0x11C]; float v; };
struct o120_int { char p[0x120]; int v; };
struct o12C_float { char p[0x12C]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o154_float { char p[0x154]; float v; };
struct o15C_float { char p[0x15C]; float v; };
struct o160_float { char p[0x160]; float v; };
struct o168_float { char p[0x168]; float v; };
struct o16C_float { char p[0x16C]; float v; };
struct o170_float { char p[0x170]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3B0_int { char p[0x3B0]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o80_short { char p[0x80]; short v; };
struct o84_short { char p[0x84]; short v; };
struct o86_short { char p[0x86]; short v; };
struct o88_short { char p[0x88]; short v; };
struct oF4_short { char p[0xF4]; short v; };


int carWheelForces(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int t2;
    float u3;
    float u4;
    int t5;
    int t6;
    int t7;
    float u9;
    float u10;
    float u13;
    int t18;
    int t61;
    float u73;
    float u74;
    float t85;
    float t90;
    float u93;
    float t151;
    float t156;
    float u211;
    float u224;
    float u228;
    float u229;
    float u230;
    float u237;
    int t285;
    float u308;
    float u8;
    float u11;
    int t29;
    float u34;
    float u42;
    float u76;
    float u82;
    float u95;
    int t160;
    float u162;
    float u164;
    int t208;
    float u210;
    float u205;
    float u179;
    float u202;
    float u189;
    float u198;
    float u215;
    int t216;
    float u233;
    float u309;
    float u310;
    int stk[24];
    float R1004;
    float R1008;
    float R1012;
    float R1016;
    float R1020;
    float R1024;
    float R1028;
    float R1032;
    float R1036;
    float R1040;
    float R1044;

    R1004 = *(float *)((int)stk + 4);
    R1008 = *(float *)((int)stk + 8);
    R1012 = *(float *)((int)stk + 12);
    R1016 = *(float *)((int)stk + 16);
    R1020 = *(float *)((int)stk + 20);
    R1024 = *(float *)((int)stk + 24);
    R1028 = *(float *)((int)stk + 28);
    R1032 = *(float *)((int)stk + 32);
    R1036 = *(float *)((int)stk + 36);
    R1040 = *(float *)((int)stk + 40);
    R1044 = *(float *)((int)stk + 44);

    carSteerWheels(a4, a5, a6, a7, f4, f5);
    carLoadTransfer(a4);
    R1028 = 0.0f;
    R1032 = 0.0f;
    R1036 = 0.0f;
    t2 = (((struct o120_int *)(a4))->v);
    u3 = *(float *)(((t2 << 2) + 0xC08A8D4));
    u4 = (((struct o154_float *)(a4))->v);
    R1040 = (u4 * u3);
    t5 = (t2 << 2);
    t6 = 0x0;
    t7 = (0x1A0 + a4);
    u9 = (u4 * u3);
    u10 = u3;
    for (;;) {
        if ((int)t6 < (int)0x4) {
            u13 = 39.7499962f;
            if ((int)t6 <= (int)0x1) {
                u13 = 26.4999981f;
            }
            t5 = 0x1;
            u10 = ((((struct o11C_float *)(a4))->v));
            u10 = (u10 * u13);
            u10 = (-u10);
            R1024 = u10;
            u10 = ((((struct o24_float *)(t7))->v));
            u9 = (R1040);
            u9 = (u9 * u10);
            (((struct o1C_float *)(t7))->v) = u9;
            t18 = 0x16C;
            if ((int)t6 <= (int)t5) {
                t18 = 0x168;
            }
            u10 = (*(float *)((a4 + t18)));
            R1020 = u10;
            u10 = 0.0f;
            u9 = ((((struct o15C_float *)(a4))->v));
            if (!(u10 > u9)) {
                t5 = ((((struct o86_short *)(a4))->v));
                t29 = ((((((struct o80_short *)(t7))->v)) + t5) - ((((struct oF4_short *)(a4))->v)));
            } else {
                t5 = ((((struct o86_short *)(a4))->v));
                t29 = (((-((((struct o80_short *)(t7))->v))) - t5) + ((((struct oF4_short *)(a4))->v)));
            }
            carCorneringForce(t7, t29, u13);
            if ((int)t6 >= (int)0x2) {
                u10 = ((((struct o20_float *)(t7))->v));
                u10 = (u10 * 1.01999998f);
                (((struct o20_float *)(t7))->v) = u10;
                u34 = u10;
            }
            u10 = u34;
            u10 = ((((struct o15C_float *)(a4))->v));
            u10 = _builtin_fabsf(u10);
            if (0.349999994f > u10) {
                u9 = ((((struct o20_float *)(t7))->v));
                u10 = ((((struct o15C_float *)(a4))->v));
                u10 = _builtin_fabsf(u10);
                u10 = (u10 / 0.349999994f);
                u9 = (u9 * u10);
                (((struct o20_float *)(t7))->v) = u9;
                u42 = u9;
            }
            u9 = u42;
            u9 = ((((struct o20_float *)(t7))->v));
            u10 = ((((struct o12C_float *)(a4))->v));
            u9 = (u9 * u10);
            (((struct o20_float *)(t7))->v) = u9;
            if (((((struct o3B0_int *)(a4))->v)) == 2) {
                u9 = ((((struct o20_float *)(t7))->v));
                u10 = 0.799999952f;
                u9 = (u9 * u10);
                (((struct o20_float *)(t7))->v) = u9;
                if ((int)t6 >= (int)0x2) {
                    u9 = ((((struct o1C_float *)(t7))->v));
                    u9 = (u9 * 3.0f);
                    (((struct o1C_float *)(t7))->v) = u9;
                }
            }
            t5 = 0xC078250;
            nlPushMatrix(0x0);
            t5 = ((((struct o86_short *)(a4))->v));
            t5 = (unsigned short)t5;
            t61 = ((unsigned short)((((struct oF4_short *)(a4))->v)) - t5);
            t5 = ((((struct o80_short *)(t7))->v));
            t5 = (unsigned short)t5;
            nlRotateAY((t61 - t5));
            nlRotateAX((unsigned short)((((struct o84_short *)(a4))->v)));
            t5 = 0xC078690;
            nlRotateAZ((unsigned short)((((struct o88_short *)(a4))->v)));
            *(float *)0xC1EE14C = 0.0f;
            t5 = 0xC077210;
            *(float *)0xC1EE148 = 0.0f;
            u10 = ((((struct o160_float *)(a4))->v));
            *(float *)0xC1EE150 = u10;
            nlCalcVector(0xC1EE148, 0xC1EE154);
            u10 = (*(float *)0xC1EE15C);
            R1012 = u10;
            u11 = (*(float *)0xC1EE154);
            nlPopMatrix(0x1);
            u10 = 0.0f;
            u9 = (R1020);
            if (u9 != u10) {
                u10 = 0.0f;
                u8 = 1.0f;
                u8 = (u8 + u8);
                u73 = R1024;
                u74 = (u73 * u8);
                if (u10 > u9) {
                    u74 = (-(u73 * u8));
                }
                R1008 = u74;
                u76 = u8;
            } else {
                R1008 = 0.0f;
            }
            u8 = u76;
            u10 = (R1012);
            u9 = (R1020);
            u9 = (u9 - u10);
            R1004 = u9;
            if (((*(int *)((t7 + 0x0))) != -1) && (u82 = R1004, u9 = u82, u10 = 0.0f, u9 != u10)) {
                if (u9 > u10) {
                    u9 = (R1004);
                    u10 = ((((struct o12C_float *)(a4))->v));
                    u9 = (u9 * u10);
                    u10 = 6.28299999f;
                    u9 = (u9 * u10);
                    u9 = _builtin_fabsf(u9);
                    t85 = carSpeedGripScale(u9);
                    u9 = 1.0f;
                    u10 = ((((struct o2C_float *)(t7))->v));
                    u9 = (u9 + u9);
                    u10 = (u10 * t85);
                    u8 = (R1008);
                    u10 = (u10 * u9);
                    u8 = (u8 - u10);
                    R1008 = u8;
                    u95 = u8;
                } else {
                    u9 = (R1004);
                    u10 = ((((struct o12C_float *)(a4))->v));
                    u9 = (u9 * u10);
                    u10 = 6.28299999f;
                    u9 = (u9 * u10);
                    u9 = _builtin_fabsf(u9);
                    t90 = carSpeedGripScale(u9);
                    u10 = ((((struct o2C_float *)(t7))->v));
                    u9 = (R1008);
                    u10 = (u10 * t90);
                    u93 = u9;
                    u93 = u93 + (1.0f + 1.0f) * u10;
                    u9 = u93;
                    R1008 = u9;
                }
                u8 = u95;
                u10 = ((((struct o28_float *)(t7))->v));
                u9 = ((((struct o10_float *)(t7))->v));
                u9 = (u9 * u10);
                u10 = (R1004);
                u10 = (u10 / 3600.0f);
                u9 = (u9 * u10);
                u10 = ((((struct o12C_float *)(a4))->v));
                u9 = (u9 * u10);
                u10 = 2.5f;
                u8 = (R1008);
                u9 = (u9 * u10);
                u8 = (u8 - u9);
                R1008 = u8;
                if (((((struct o3B0_int *)(a4))->v)) == 4) {
                    u9 = 0.799999952f;
                    u8 = (R1008);
                    u8 = (u8 * u9);
                    R1008 = u8;
                }
            }
            t5 = 0x1;
            if ((int)t6 <= (int)t5) {
                u10 = (R1008);
                u9 = ((((struct o1C_float *)(t7))->v));
                u8 = 6.28317976f;
                u9 = (u9 + u10);
                u9 = (u9 / u8);
                R1032 = ((R1032) + u9);
            } else {
                u10 = (R1008);
                u9 = ((((struct o1C_float *)(t7))->v));
                u8 = 6.28317976f;
                u9 = (u9 + u10);
                u9 = (u9 / u8);
                R1028 = ((R1028) + u9);
            }
            if (((((struct o3B0_int *)(a4))->v)) == 2) {
                u10 = ((((struct o28_float *)(t7))->v));
                u9 = ((((struct o10_float *)(t7))->v));
                u9 = (u9 * u10);
                u10 = (R1004);
                u10 = (u10 / 3600.0f);
                u9 = (u9 * u10);
                u10 = ((((struct o12C_float *)(a4))->v));
                u9 = (u9 * u10);
                u9 = (u9 * 13.0f);
                (((struct o18_float *)(t7))->v) = u9;
            } else {
                if (((((struct o3B0_int *)(a4))->v)) == 4) {
                    u10 = ((((struct o28_float *)(t7))->v));
                    u9 = ((((struct o10_float *)(t7))->v));
                    u9 = (u9 * u10);
                    u10 = (R1004);
                    u10 = (u10 / 3600.0f);
                    u9 = (u9 * u10);
                    u10 = ((((struct o12C_float *)(a4))->v));
                    u9 = (u9 * u10);
                    u10 = 2.5f;
                    u9 = (u9 * u10);
                } else {
                    u10 = ((((struct o28_float *)(t7))->v));
                    u9 = ((((struct o10_float *)(t7))->v));
                    u9 = (u9 * u10);
                    u10 = (R1004);
                    u10 = (u10 / 3600.0f);
                    u9 = (u9 * u10);
                    u10 = ((((struct o12C_float *)(a4))->v));
                    u9 = (u9 * u10);
                    u9 = (u9 * 5.5f);
                }
                (((struct o18_float *)(t7))->v) = u9;
            }
            t5 = ((((struct o120_int *)(a4))->v));
            if (t5 == 0) {
                u10 = 0.0f;
                u9 = ((((struct o18_float *)(t7))->v));
                if (!(u9 > u10)) {
                } else {
                    (((struct o18_float *)(t7))->v) = 0.0f;
                }
            } else {
                u10 = 0.0f;
                u9 = ((((struct o18_float *)(t7))->v));
                if (u10 > u9) {
                    (((struct o18_float *)(t7))->v) = 0.0f;
                }
            }
            u10 = 0.0f;
            u9 = (R1012);
            if (u9 != u10) {
                if (u9 > u10) {
                    u10 = (R1024);
                    R1016 = u10;
                    u10 = (R1012);
                    u10 = _builtin_fabsf(u10);
                    u9 = ((((struct o12C_float *)(a4))->v));
                    u10 = (u10 * u9);
                    t151 = carSpeedGripScale((u10 * 6.28299999f));
                    u10 = ((((struct o2C_float *)(t7))->v));
                    u10 = (u10 * t151);
                    u10 = (u10 * 1.5f);
                    u10 = (-u10);
                } else {
                    u10 = (R1024);
                    u10 = (-u10);
                    R1016 = u10;
                    u10 = (R1012);
                    u10 = _builtin_fabsf(u10);
                    u9 = ((((struct o12C_float *)(a4))->v));
                    u10 = (u10 * u9);
                    t156 = carSpeedGripScale((u10 * 6.28299999f));
                    u10 = ((((struct o2C_float *)(t7))->v));
                    u10 = (u10 * t156);
                    u10 = (u10 * 1.5f);
                }
                R1044 = u10;
            } else {
                R1016 = 0.0f;
                R1044 = 0.0f;
                t160 = t5;
                u162 = u8;
                u164 = u9;
            }
            u8 = u162;
            u9 = u164;
            u10 = 0.0f;
            t5 = t160;
            u211 = 0.0f;
            if (u11 != u10) {
                if (((((struct o3B0_int *)(a4))->v)) == 2) {
                    if (u11 > u10) {
                        u11 = _builtin_fabsf(u11);
                        u10 = ((((struct o12C_float *)(a4))->v));
                        u11 = (u11 * u10);
                        u10 = ((((struct o2C_float *)(t7))->v));
                        u10 = (u10 * (carSpeedGripScale((u11 * 6.28299999f))));
                        u9 = 32.0f;
                        u10 = (u10 * u9);
                        u179 = (-u10);
                    } else {
                        u11 = _builtin_fabsf(u11);
                        u10 = ((((struct o12C_float *)(a4))->v));
                        u11 = (u11 * u10);
                        u10 = ((((struct o2C_float *)(t7))->v));
                        u9 = 32.0f;
                        u10 = (u10 * (carSpeedGripScale((u11 * 6.28299999f))));
                        u179 = (u10 * u9);
                    }
                    u205 = u179;
                } else {
                    if (((((struct o3B0_int *)(a4))->v)) == 4) {
                        if (u11 > u10) {
                            u11 = _builtin_fabsf(u11);
                            u10 = ((((struct o12C_float *)(a4))->v));
                            u11 = (u11 * u10);
                            u10 = ((((struct o2C_float *)(t7))->v));
                            u10 = (u10 * (carSpeedGripScale((u11 * 6.28299999f))));
                            u9 = 1.0f;
                            u10 = (u10 * u9);
                            u189 = (-u10);
                        } else {
                            u11 = _builtin_fabsf(u11);
                            u10 = ((((struct o12C_float *)(a4))->v));
                            u11 = (u11 * u10);
                            u9 = 1.0f;
                            u10 = ((((struct o2C_float *)(t7))->v));
                            u10 = (u10 * (carSpeedGripScale((u11 * 6.28299999f))));
                            u189 = (u10 * u9);
                        }
                        u202 = u189;
                    } else {
                        if (u11 > u10) {
                            u11 = _builtin_fabsf(u11);
                            u10 = ((((struct o12C_float *)(a4))->v));
                            u11 = (u11 * u10);
                            u10 = ((((struct o2C_float *)(t7))->v));
                            u9 = 7.0f;
                            u10 = (u10 * (carSpeedGripScale((u11 * 6.28299999f))));
                            u10 = (u10 * u9);
                            u198 = (-u10);
                        } else {
                            u11 = _builtin_fabsf(u11);
                            u10 = ((((struct o12C_float *)(a4))->v));
                            u11 = (u11 * u10);
                            u10 = ((((struct o2C_float *)(t7))->v));
                            u9 = 7.0f;
                            u10 = (u10 * (carSpeedGripScale((u11 * 6.28299999f))));
                            u198 = (u10 * u9);
                        }
                        u202 = u198;
                    }
                    u205 = u202;
                }
                u211 = u205;
            } else {
                t208 = t5;
                u210 = u8;
            }
            u8 = u210;
            t5 = t208;
            u10 = 0.0f;
            u9 = ((((struct o1C_float *)(t7))->v));
            if ((u9 == u10) && (u215 = (((struct o20_float *)(t7))->v), t216 = (u9 == u10), u9 = u215, u9 == u10)) {
                u10 = 0.0f;
                u9 = ((((struct o1C_float *)(t7))->v));
                u224 = 0.0f;
                if (u9 == u10) {
                    u224 = ((((struct o20_float *)(t7))->v));
                }
                u233 = u224;
            } else {
                u10 = (R1016);
                u228 = (((struct o20_float *)(t7))->v);
                u229 = (((((struct o1C_float *)(t7))->v)) + u10);
                u10 = u228;
                u10 = (u10 * u228);
                u230 = u10;
                u230 = u230 + u229 * u229;
                u10 = u230;
                u10 = _builtin_sqrtf(u10);
                u233 = u10;
            }
            u10 = 0.0f;
            u9 = ((((struct o14_float *)(t7))->v));
            if (u9 == u10) {
                u9 = 1.0f;
                (((struct o20_float *)(t7))->v) = 0.0f;
                R1016 = 0.0f;
                (((struct o18_float *)(t7))->v) = 0.0f;
                (((struct o40_float *)(t7))->v) = u9;
            } else {
                u237 = (((struct o14_float *)(t7))->v);
                u9 = u233;
                u9 = (u9 - u237);
                u9 = (u9 / u237);
                (((struct o40_float *)(t7))->v) = u9;
                u9 = ((((struct o14_float *)(t7))->v));
                if ((u233 > u9) && (u233 != u10)) {
                    if (((((struct o3B0_int *)(a4))->v)) == 2) {
                        u10 = ((((struct o14_float *)(t7))->v));
                        u10 = (u10 / u233);
                        u9 = ((((struct o18_float *)(t7))->v));
                        u10 = (u10 * 1.93999994f);
                        u9 = (u9 * u10);
                        (((struct o18_float *)(t7))->v) = u9;
                        u10 = ((((struct o14_float *)(t7))->v));
                        u10 = (u10 / u233);
                        u9 = ((((struct o20_float *)(t7))->v));
                        u10 = (u10 * 0.0599999987f);
                        u9 = (u9 * u10);
                        (((struct o20_float *)(t7))->v) = u9;
                        u10 = ((((struct o14_float *)(t7))->v));
                        u10 = (u10 / u233);
                        u10 = (u10 * 1.93999994f);
                    } else {
                        u10 = ((((struct o14_float *)(t7))->v));
                        u9 = ((((struct o18_float *)(t7))->v));
                        u10 = (u10 / u233);
                        u9 = (u9 * u10);
                        (((struct o18_float *)(t7))->v) = u9;
                        u10 = ((((struct o14_float *)(t7))->v));
                        u9 = ((((struct o20_float *)(t7))->v));
                        u10 = (u10 / u233);
                        u9 = (u9 * u10);
                        (((struct o20_float *)(t7))->v) = u9;
                        u10 = ((((struct o14_float *)(t7))->v));
                        u10 = (u10 / u233);
                    }
                    u9 = (R1016);
                    u9 = (u9 * u10);
                    R1016 = u9;
                }
            }
            t5 = 0xC078250;
            u9 = ((((struct o170_float *)(a4))->v));
            u10 = ((((struct o40_float *)(t7))->v));
            u9 = (u9 + u10);
            (((struct o170_float *)(a4))->v) = u9;
            nlPushMatrix(0x0);
            if (((((struct o3B0_int *)(a4))->v)) != 2) {
                nlRotateAY((unsigned short)((((struct o80_short *)(t7))->v)));
            }
            nlRotateAX((unsigned short)((((struct o84_short *)(a4))->v)));
            t5 = 0xC078690;
            nlRotateAZ((unsigned short)((((struct o88_short *)(a4))->v)));
            u10 = ((((struct o20_float *)(t7))->v));
            t5 = 0xC077210;
            *(float *)0xC1EE148 = u10;
            *(float *)0xC1EE14C = 0.0f;
            u10 = ((((struct o18_float *)(t7))->v));
            *(float *)0xC1EE150 = u10;
            nlCalcVector(0xC1EE148, (t7 + 0x44));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            t5 = ((((struct oF4_short *)(a4))->v));
            t5 = (unsigned short)t5;
            t285 = ((unsigned short)((((struct o86_short *)(a4))->v)) - t5);
            t5 = ((((struct o80_short *)(t7))->v));
            t5 = (unsigned short)t5;
            nlRotateAY((t285 + t5));
            nlRotateAX((unsigned short)((((struct o84_short *)(a4))->v)));
            t5 = 0xC078690;
            nlRotateAZ((unsigned short)((((struct o88_short *)(a4))->v)));
            u10 = ((((struct o20_float *)(t7))->v));
            t5 = 0xC077210;
            u10 = (u10 + u211);
            *(float *)0xC1EE148 = u10;
            *(float *)0xC1EE14C = 0.0f;
            u10 = (R1044);
            u9 = ((((struct o18_float *)(t7))->v));
            u8 = (R1016);
            u9 = (u9 + u10);
            u9 = (u9 + u8);
            *(float *)0xC1EE150 = u9;
            nlCalcVector(0xC1EE148, (t7 + 0x50));
            nlPopMatrix(0x1);
            t5 = 0x84;
            u10 = 6.28317976f;
            u9 = ((((struct o58_float *)(t7))->v));
            u8 = (R1036);
            u9 = (u9 / u10);
            t6 = (t6 + 0x1);
            t7 = (t7 + t5);
            u8 = (u8 + u9);
            R1036 = u8;
            continue;
        }
        break;
    }
    (((struct o170_float *)(a4))->v) = (((((struct o170_float *)(a4))->v)) * 0.25f);
    if (((((struct o170_float *)(a4))->v)) > 1.0f) {
        (((struct o170_float *)(a4))->v) = 1.0f;
    }
    (((struct o168_float *)(a4))->v) = (((((struct o168_float *)(a4))->v)) + (R1032));
    (((struct o16C_float *)(a4))->v) = (((((struct o16C_float *)(a4))->v)) + (R1028));
    u308 = (((struct o160_float *)(a4))->v);
    (((struct o160_float *)(a4))->v) = (((((struct o160_float *)(a4))->v)) + (R1036));
    if ((u308 > 0.0f) && (u309 = (((struct o160_float *)(a4))->v), 0.0f > u309)) {
        (((struct o160_float *)(a4))->v) = 0.0f;
    } else {
        if ((0.0f > u308) && (u310 = (((struct o160_float *)(a4))->v), u310 > 0.0f)) {
            (((struct o160_float *)(a4))->v) = 0.0f;
        }
    }
    (((struct o15C_float *)(a4))->v) = ((((((((struct o160_float *)(a4))->v)) / 3600.0f) * ((((struct o12C_float *)(a4))->v)))) * 6.28299999f);
    return 0x15C;
}
