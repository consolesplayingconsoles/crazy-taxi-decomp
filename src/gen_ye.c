/* Straight-line functions with calls and guards (batch gen_ye): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c077210(int, int);
extern float _builtin_sqrtf(float);
int carCorneringForce(int, int);
int carLoadTransfer(int);
float carSpeedGripScale(float);
int carSteerWheels(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int carWheelForces(int a4);

int carWheelForces(int a4)
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
    int stk[24] = {0};

    carSteerWheels(a4);
    carLoadTransfer(a4);
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    t2 = *(int *)((a4 + 0x120));
    u3 = *(float *)(((t2 << 2) + 0xC08A8D4));
    u4 = *(float *)((a4 + 0x154));
    *(float *)(((int)stk + 40)) = (u4 * u3);
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
            u10 = (*(float *)((a4 + 0x11C)));
            u10 = (u10 * u13);
            u10 = (-u10);
            *(float *)(((int)stk + 24)) = u10;
            u10 = (*(float *)((t7 + 0x24)));
            u9 = (*(float *)(((int)stk + 40)));
            u9 = (u9 * u10);
            *(float *)((t7 + 0x1C)) = u9;
            t18 = 0x16C;
            if ((int)t6 <= (int)t5) {
                t18 = 0x168;
            }
            u10 = (*(float *)((a4 + t18)));
            *(float *)(((int)stk + 20)) = u10;
            u10 = 0.0f;
            u9 = (*(float *)((a4 + 0x15C)));
            if (!(u10 > u9)) {
                t5 = (*(short *)((a4 + 0x86)));
                t29 = (((*(short *)((t7 + 0x80))) + t5) - (*(short *)((a4 + 0xF4))));
            } else {
                t5 = (*(short *)((a4 + 0x86)));
                t29 = (((-(*(short *)((t7 + 0x80)))) - t5) + (*(short *)((a4 + 0xF4))));
            }
            carCorneringForce(t7, t29);
            if ((int)t6 >= (int)0x2) {
                u10 = (*(float *)((t7 + 0x20)));
                u10 = (u10 * 1.01999998f);
                *(float *)((t7 + 0x20)) = u10;
                u34 = u10;
            }
            u10 = u34;
            u10 = (*(float *)((a4 + 0x15C)));
            u10 = _builtin_fabsf(u10);
            if (0.349999994f > u10) {
                u9 = (*(float *)((t7 + 0x20)));
                u10 = (*(float *)(((0x15C + a4) + 0x0)));
                u10 = _builtin_fabsf(u10);
                u10 = (u10 / 0.349999994f);
                u9 = (u9 * u10);
                *(float *)((t7 + 0x20)) = u9;
                u42 = u9;
            }
            u9 = u42;
            u9 = (*(float *)((t7 + 0x20)));
            u10 = (*(float *)(((0x12C + a4) + 0x0)));
            u9 = (u9 * u10);
            *(float *)((t7 + 0x20)) = u9;
            if ((*(int *)((a4 + 0x3B0))) == 2) {
                u9 = (*(float *)((t7 + 0x20)));
                u10 = 0.799999952f;
                u9 = (u9 * u10);
                *(float *)((t7 + 0x20)) = u9;
                if ((int)t6 >= (int)0x2) {
                    u9 = (*(float *)((t7 + 0x1C)));
                    u9 = (u9 * 3.0f);
                    *(float *)((t7 + 0x1C)) = u9;
                }
            }
            t5 = 0xC078250;
            nlPushMatrix(0x0);
            t5 = (*(short *)((a4 + 0x86)));
            t5 = (unsigned short)t5;
            t61 = ((unsigned short)(*(short *)((a4 + 0xF4))) - t5);
            t5 = (*(short *)((t7 + 0x80)));
            t5 = (unsigned short)t5;
            nlRotateAY((t61 - t5));
            nlRotateAX((unsigned short)(*(short *)((a4 + 0x84))));
            t5 = 0xC078690;
            nlRotateAZ((unsigned short)(*(short *)((a4 + 0x88))));
            *(float *)0xC1EE14C = 0.0f;
            t5 = 0xC077210;
            *(float *)0xC1EE148 = 0.0f;
            u10 = (*(float *)((a4 + 0x160)));
            *(float *)0xC1EE150 = u10;
            FUN_0c077210(0xC1EE148, 0xC1EE154);
            u10 = (*(float *)0xC1EE15C);
            *(float *)(((int)stk + 12)) = u10;
            u11 = (*(float *)0xC1EE154);
            nlPopMatrix(0x1);
            u10 = 0.0f;
            u9 = (*(float *)(((int)stk + 20)));
            if (u9 != u10) {
                u10 = 0.0f;
                u8 = 1.0f;
                u8 = (u8 + u8);
                u73 = *(float *)(((int)stk + 24));
                u74 = (u73 * u8);
                if (u10 > u9) {
                    u74 = (-(u73 * u8));
                }
                *(float *)(((int)stk + 8)) = u74;
                u76 = u8;
            } else {
                *(float *)(((int)stk + 8)) = 0.0f;
            }
            u8 = u76;
            u10 = (*(float *)(((int)stk + 12)));
            u9 = (*(float *)(((int)stk + 20)));
            u9 = (u9 - u10);
            *(float *)(((int)stk + 4)) = u9;
            if (((*(int *)((t7 + 0x0))) != -1) && (u82 = *(float *)(((int)stk + 4)), u9 = u82, u10 = 0.0f, u9 != u10)) {
                if (u9 > u10) {
                    u9 = (*(float *)(((int)stk + 4)));
                    u10 = (*(float *)((a4 + 0x12C)));
                    u9 = (u9 * u10);
                    u10 = 6.28299999f;
                    u9 = (u9 * u10);
                    u9 = _builtin_fabsf(u9);
                    t85 = carSpeedGripScale(u9);
                    u9 = 1.0f;
                    u10 = (*(float *)((t7 + 0x2C)));
                    u9 = (u9 + u9);
                    u10 = (u10 * t85);
                    u8 = (*(float *)(((int)stk + 8)));
                    u10 = (u10 * u9);
                    u8 = (u8 - u10);
                    *(float *)(((int)stk + 8)) = u8;
                    u95 = u8;
                } else {
                    u9 = (*(float *)(((int)stk + 4)));
                    u10 = (*(float *)((a4 + 0x12C)));
                    u9 = (u9 * u10);
                    u10 = 6.28299999f;
                    u9 = (u9 * u10);
                    u9 = _builtin_fabsf(u9);
                    t90 = carSpeedGripScale(u9);
                    u10 = (*(float *)((t7 + 0x2C)));
                    u9 = (*(float *)(((int)stk + 8)));
                    u10 = (u10 * t90);
                    u93 = u9;
                    u93 = u93 + (1.0f + 1.0f) * u10;
                    u9 = u93;
                    *(float *)(((int)stk + 8)) = u9;
                }
                u8 = u95;
                u10 = (*(float *)((t7 + 0x28)));
                u9 = (*(float *)((t7 + 0x10)));
                u9 = (u9 * u10);
                u10 = (*(float *)(((int)stk + 4)));
                u10 = (u10 / 3600.0f);
                u9 = (u9 * u10);
                u10 = (*(float *)((a4 + 0x12C)));
                u9 = (u9 * u10);
                u10 = 2.5f;
                u8 = (*(float *)(((int)stk + 8)));
                u9 = (u9 * u10);
                u8 = (u8 - u9);
                *(float *)(((int)stk + 8)) = u8;
                if ((*(int *)((a4 + 0x3B0))) == 4) {
                    u9 = 0.799999952f;
                    u8 = (*(float *)(((int)stk + 8)));
                    u8 = (u8 * u9);
                    *(float *)(((int)stk + 8)) = u8;
                }
            }
            t5 = 0x1;
            if ((int)t6 <= (int)t5) {
                u10 = (*(float *)(((int)stk + 8)));
                u9 = (*(float *)((t7 + 0x1C)));
                u8 = 6.28317976f;
                u9 = (u9 + u10);
                u9 = (u9 / u8);
                *(float *)(((int)stk + 32)) = ((*(float *)(((int)stk + 32))) + u9);
            } else {
                u10 = (*(float *)(((int)stk + 8)));
                u9 = (*(float *)((t7 + 0x1C)));
                u8 = 6.28317976f;
                u9 = (u9 + u10);
                u9 = (u9 / u8);
                *(float *)(((int)stk + 28)) = ((*(float *)(((int)stk + 28))) + u9);
            }
            if ((*(int *)((a4 + 0x3B0))) == 2) {
                u10 = (*(float *)((t7 + 0x28)));
                u9 = (*(float *)((t7 + 0x10)));
                u9 = (u9 * u10);
                u10 = (*(float *)(((int)stk + 4)));
                u10 = (u10 / 3600.0f);
                u9 = (u9 * u10);
                u10 = (*(float *)((a4 + 0x12C)));
                u9 = (u9 * u10);
                u9 = (u9 * 13.0f);
                *(float *)((t7 + 0x18)) = u9;
            } else {
                if ((*(int *)((a4 + 0x3B0))) == 4) {
                    u10 = (*(float *)((t7 + 0x28)));
                    u9 = (*(float *)((t7 + 0x10)));
                    u9 = (u9 * u10);
                    u10 = (*(float *)(((int)stk + 4)));
                    u10 = (u10 / 3600.0f);
                    u9 = (u9 * u10);
                    u10 = (*(float *)((a4 + 0x12C)));
                    u9 = (u9 * u10);
                    u10 = 2.5f;
                    u9 = (u9 * u10);
                } else {
                    u10 = (*(float *)((t7 + 0x28)));
                    u9 = (*(float *)((t7 + 0x10)));
                    u9 = (u9 * u10);
                    u10 = (*(float *)(((int)stk + 4)));
                    u10 = (u10 / 3600.0f);
                    u9 = (u9 * u10);
                    u10 = (*(float *)((a4 + 0x12C)));
                    u9 = (u9 * u10);
                    u9 = (u9 * 5.5f);
                }
                *(float *)((t7 + 0x18)) = u9;
            }
            t5 = (*(int *)((a4 + 0x120)));
            if (t5 == 0) {
                u10 = 0.0f;
                u9 = (*(float *)((t7 + 0x18)));
                if (!(u9 > u10)) {
                } else {
                    *(float *)((t7 + 0x18)) = 0.0f;
                }
            } else {
                u10 = 0.0f;
                u9 = (*(float *)((t7 + 0x18)));
                if (u10 > u9) {
                    *(float *)((t7 + 0x18)) = 0.0f;
                }
            }
            u10 = 0.0f;
            u9 = (*(float *)(((int)stk + 12)));
            if (u9 != u10) {
                if (u9 > u10) {
                    u10 = (*(float *)(((int)stk + 24)));
                    *(float *)(((int)stk + 16)) = u10;
                    u10 = (*(float *)(((int)stk + 12)));
                    u10 = _builtin_fabsf(u10);
                    u9 = (*(float *)((a4 + 0x12C)));
                    u10 = (u10 * u9);
                    t151 = carSpeedGripScale((u10 * 6.28299999f));
                    u10 = (*(float *)((t7 + 0x2C)));
                    u10 = (u10 * t151);
                    u10 = (u10 * 1.5f);
                    u10 = (-u10);
                } else {
                    u10 = (*(float *)(((int)stk + 24)));
                    u10 = (-u10);
                    *(float *)(((int)stk + 16)) = u10;
                    u10 = (*(float *)(((int)stk + 12)));
                    u10 = _builtin_fabsf(u10);
                    u9 = (*(float *)((a4 + 0x12C)));
                    u10 = (u10 * u9);
                    t156 = carSpeedGripScale((u10 * 6.28299999f));
                    u10 = (*(float *)((t7 + 0x2C)));
                    u10 = (u10 * t156);
                    u10 = (u10 * 1.5f);
                }
                *(float *)(((int)stk + 44)) = u10;
            } else {
                *(float *)(((int)stk + 16)) = 0.0f;
                *(float *)(((int)stk + 44)) = 0.0f;
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
                if ((*(int *)((a4 + 0x3B0))) == 2) {
                    if (u11 > u10) {
                        u11 = _builtin_fabsf(u11);
                        u10 = (*(float *)((a4 + 0x12C)));
                        u11 = (u11 * u10);
                        u10 = (*(float *)((t7 + 0x2C)));
                        u10 = (u10 * (carSpeedGripScale((u11 * 6.28299999f))));
                        u9 = 32.0f;
                        u10 = (u10 * u9);
                        u179 = (-u10);
                    } else {
                        u11 = _builtin_fabsf(u11);
                        u10 = (*(float *)((a4 + 0x12C)));
                        u11 = (u11 * u10);
                        u10 = (*(float *)((t7 + 0x2C)));
                        u9 = 32.0f;
                        u10 = (u10 * (carSpeedGripScale((u11 * 6.28299999f))));
                        u179 = (u10 * u9);
                    }
                    u205 = u179;
                } else {
                    if ((*(int *)((a4 + 0x3B0))) == 4) {
                        if (u11 > u10) {
                            u11 = _builtin_fabsf(u11);
                            u10 = (*(float *)((a4 + 0x12C)));
                            u11 = (u11 * u10);
                            u10 = (*(float *)((t7 + 0x2C)));
                            u10 = (u10 * (carSpeedGripScale((u11 * 6.28299999f))));
                            u9 = 1.0f;
                            u10 = (u10 * u9);
                            u189 = (-u10);
                        } else {
                            u11 = _builtin_fabsf(u11);
                            u10 = (*(float *)((a4 + 0x12C)));
                            u11 = (u11 * u10);
                            u9 = 1.0f;
                            u10 = (*(float *)((t7 + 0x2C)));
                            u10 = (u10 * (carSpeedGripScale((u11 * 6.28299999f))));
                            u189 = (u10 * u9);
                        }
                        u202 = u189;
                    } else {
                        if (u11 > u10) {
                            u11 = _builtin_fabsf(u11);
                            u10 = (*(float *)((a4 + 0x12C)));
                            u11 = (u11 * u10);
                            u10 = (*(float *)((t7 + 0x2C)));
                            u9 = 7.0f;
                            u10 = (u10 * (carSpeedGripScale((u11 * 6.28299999f))));
                            u10 = (u10 * u9);
                            u198 = (-u10);
                        } else {
                            u11 = _builtin_fabsf(u11);
                            u10 = (*(float *)((a4 + 0x12C)));
                            u11 = (u11 * u10);
                            u10 = (*(float *)((t7 + 0x2C)));
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
            u9 = (*(float *)((t7 + 0x1C)));
            if ((u9 == u10) && (u215 = *(float *)((t7 + 0x20)), t216 = (u9 == u10), u9 = u215, u9 == u10)) {
                u10 = 0.0f;
                u9 = (*(float *)((t7 + 0x1C)));
                u224 = 0.0f;
                if (u9 == u10) {
                    u224 = (*(float *)((t7 + 0x20)));
                }
                u233 = u224;
            } else {
                u10 = (*(float *)(((int)stk + 16)));
                u228 = *(float *)((t7 + 0x20));
                u229 = ((*(float *)((t7 + 0x1C))) + u10);
                u10 = u228;
                u10 = (u10 * u228);
                u230 = u10;
                u230 = u230 + u229 * u229;
                u10 = u230;
                u10 = _builtin_sqrtf(u10);
                u233 = u10;
            }
            u10 = 0.0f;
            u9 = (*(float *)((t7 + 0x14)));
            if (u9 == u10) {
                u9 = 1.0f;
                *(float *)((t7 + 0x20)) = 0.0f;
                *(float *)(((int)stk + 16)) = 0.0f;
                *(float *)((t7 + 0x18)) = 0.0f;
                *(float *)((t7 + 0x40)) = u9;
            } else {
                u237 = *(float *)((t7 + 0x14));
                u9 = u233;
                u9 = (u9 - u237);
                u9 = (u9 / u237);
                *(float *)((t7 + 0x40)) = u9;
                u9 = (*(float *)((t7 + 0x14)));
                if ((u233 > u9) && (u233 != u10)) {
                    if ((*(int *)((a4 + 0x3B0))) == 2) {
                        u10 = (*(float *)(((0x14 + t7) + 0x0)));
                        u10 = (u10 / u233);
                        u9 = (*(float *)((t7 + 0x18)));
                        u10 = (u10 * 1.93999994f);
                        u9 = (u9 * u10);
                        *(float *)((t7 + 0x18)) = u9;
                        u10 = (*(float *)(((0x14 + t7) + 0x0)));
                        u10 = (u10 / u233);
                        u9 = (*(float *)((t7 + 0x20)));
                        u10 = (u10 * 0.0599999987f);
                        u9 = (u9 * u10);
                        *(float *)((t7 + 0x20)) = u9;
                        u10 = (*(float *)((t7 + 0x14)));
                        u10 = (u10 / u233);
                        u10 = (u10 * 1.93999994f);
                    } else {
                        u10 = (*(float *)(((0x14 + t7) + 0x0)));
                        u9 = (*(float *)((t7 + 0x18)));
                        u10 = (u10 / u233);
                        u9 = (u9 * u10);
                        *(float *)((t7 + 0x18)) = u9;
                        u10 = (*(float *)(((0x14 + t7) + 0x0)));
                        u9 = (*(float *)((t7 + 0x20)));
                        u10 = (u10 / u233);
                        u9 = (u9 * u10);
                        *(float *)((t7 + 0x20)) = u9;
                        u10 = (*(float *)((t7 + 0x14)));
                        u10 = (u10 / u233);
                    }
                    u9 = (*(float *)(((int)stk + 16)));
                    u9 = (u9 * u10);
                    *(float *)(((int)stk + 16)) = u9;
                }
            }
            t5 = 0xC078250;
            u9 = (*(float *)((a4 + 0x170)));
            u10 = (*(float *)(((0x40 + t7) + 0x0)));
            u9 = (u9 + u10);
            *(float *)((a4 + 0x170)) = u9;
            nlPushMatrix(0x0);
            if ((*(int *)((a4 + 0x3B0))) != 2) {
                nlRotateAY((unsigned short)(*(short *)((t7 + 0x80))));
            }
            nlRotateAX((unsigned short)(*(short *)((a4 + 0x84))));
            t5 = 0xC078690;
            nlRotateAZ((unsigned short)(*(short *)((a4 + 0x88))));
            u10 = (*(float *)((t7 + 0x20)));
            t5 = 0xC077210;
            *(float *)0xC1EE148 = u10;
            *(float *)0xC1EE14C = 0.0f;
            u10 = (*(float *)((t7 + 0x18)));
            *(float *)0xC1EE150 = u10;
            FUN_0c077210(0xC1EE148, (t7 + 0x44));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            t5 = (*(short *)((a4 + 0xF4)));
            t5 = (unsigned short)t5;
            t285 = ((unsigned short)(*(short *)((a4 + 0x86))) - t5);
            t5 = (*(short *)((t7 + 0x80)));
            t5 = (unsigned short)t5;
            nlRotateAY((t285 + t5));
            nlRotateAX((unsigned short)(*(short *)((a4 + 0x84))));
            t5 = 0xC078690;
            nlRotateAZ((unsigned short)(*(short *)((a4 + 0x88))));
            u10 = (*(float *)((t7 + 0x20)));
            t5 = 0xC077210;
            u10 = (u10 + u211);
            *(float *)0xC1EE148 = u10;
            *(float *)0xC1EE14C = 0.0f;
            u10 = (*(float *)(((int)stk + 44)));
            u9 = (*(float *)((t7 + 0x18)));
            u8 = (*(float *)(((int)stk + 16)));
            u9 = (u9 + u10);
            u9 = (u9 + u8);
            *(float *)0xC1EE150 = u9;
            FUN_0c077210(0xC1EE148, (t7 + 0x50));
            nlPopMatrix(0x1);
            t5 = 0x84;
            u10 = 6.28317976f;
            u9 = (*(float *)((t7 + 0x58)));
            u8 = (*(float *)(((int)stk + 36)));
            u9 = (u9 / u10);
            t6 = (t6 + 0x1);
            t7 = (t7 + t5);
            u8 = (u8 + u9);
            *(float *)(((int)stk + 36)) = u8;
            continue;
        }
        break;
    }
    *(float *)((a4 + 0x170)) = ((*(float *)((a4 + 0x170))) * 0.25f);
    if ((*(float *)((a4 + 0x170))) > 1.0f) {
        *(float *)((a4 + 0x170)) = 1.0f;
    }
    *(float *)((a4 + 0x168)) = ((*(float *)((a4 + 0x168))) + (*(float *)(((((int)stk + 4) + 0x1C) + 0x0))));
    *(float *)((a4 + 0x16C)) = ((*(float *)((a4 + 0x16C))) + (*(float *)(((((int)stk + 4) + 0x18) + 0x0))));
    u308 = *(float *)((a4 + 0x160));
    *(float *)((a4 + 0x160)) = ((*(float *)((a4 + 0x160))) + (*(float *)(((((int)stk + 4) + 0x20) + 0x0))));
    if ((u308 > 0.0f) && (u309 = *(float *)((a4 + 0x160)), 0.0f > u309)) {
        *(float *)((a4 + 0x160)) = 0.0f;
    } else {
        if ((0.0f > u308) && (u310 = *(float *)((a4 + 0x160)), u310 > 0.0f)) {
            *(float *)((a4 + 0x160)) = 0.0f;
        }
    }
    *(float *)((a4 + 0x15C)) = (((((*(float *)((a4 + 0x160))) / 3600.0f) * (*(float *)((a4 + 0x12C))))) * 6.28299999f);
    return 0x15C;
}
