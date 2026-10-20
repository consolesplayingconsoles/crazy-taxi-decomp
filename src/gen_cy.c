/* Straight-line functions with calls and guards (batch gen_cy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c034b5e(int, int, int, int);
int FUN_0c07b980(void);
int FUN_0c087474(int, int, int, int, int);
float FUN_0c089de0(int);
float FUN_0c089de8(int);
int motionClearRootZ(int);
int nlLineSetThickness(float);
int nlScaleVector(int, int, float);
int FUN_0c06b1c0(void);
int FUN_0c085dfc(int a4, int a5, int a6);
int nlPopMatrix(int a4);
int FUN_0c07e960(int a4, int a5, int a6, int a7);
int FUN_0c0351da(void);

int FUN_0c06b1c0(void)
{
    motionClearRootZ(0xCA75D74);
    return motionClearRootZ(0xCA7BBDC);
}

int FUN_0c085dfc(int a4, int a5, int a6)
{
    int t0;

    t0 = FUN_0c087474(0x1, 0x0, a4, a5, a6);
    return t0;
}

int nlPopMatrix(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;
    float u15;
    float u16;
    float u17;
    float u18;
    float u19;
    float u20;

    t0 = a4;
    if ((int)a4 <= 0) {
        t0 = 0x1;
    }
    t1 = *(short *)0xC2B31DC;
    t2 = *(short *)0xC2B31DE;
    t3 = (t1 - t0);
    if ((int)t1 < (int)t0) {
        t3 = 0x0;
    }
    t4 = *(int *)0xC2B31E0;
    *(unsigned short *)0xC2B31DC = t3;
    if ((int)t3 < (int)t2) {
        *(unsigned int *)0xC2B31E4 = (t4 + ((unsigned int)(t3 << 8) >> 2));
    }
    u5 = *(float *)(((t4 + ((unsigned int)(t3 << 8) >> 2)) + 0x0));
    u6 = *(float *)((((t4 + ((unsigned int)(t3 << 8) >> 2)) + 0x0) + 4));
    u7 = *(float *)((((t4 + ((unsigned int)(t3 << 8) >> 2)) + 0x8) + 0x0));
    u8 = *(float *)(((((t4 + ((unsigned int)(t3 << 8) >> 2)) + 0x8) + 0x0) + 4));
    u9 = *(float *)(((((t4 + ((unsigned int)(t3 << 8) >> 2)) + 0x8) + 0x8) + 0x0));
    u10 = *(float *)((((((t4 + ((unsigned int)(t3 << 8) >> 2)) + 0x8) + 0x8) + 0x0) + 4));
    u11 = *(float *)((((((t4 + ((unsigned int)(t3 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x0));
    u12 = *(float *)(((((((t4 + ((unsigned int)(t3 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u13 = *(float *)(((((((t4 + ((unsigned int)(t3 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u14 = *(float *)((((((((t4 + ((unsigned int)(t3 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u15 = *(float *)((((((((t4 + ((unsigned int)(t3 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u16 = *(float *)(((((((((t4 + ((unsigned int)(t3 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u17 = *(float *)(((((((((t4 + ((unsigned int)(t3 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u18 = *(float *)((((((((((t4 + ((unsigned int)(t3 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u19 = *(float *)((((((((((t4 + ((unsigned int)(t3 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u20 = *(float *)(((((((((((t4 + ((unsigned int)(t3 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    return ((((int)t1 >= (int)t0)) ? 1 : 0);
}

int FUN_0c07e960(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t27;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t32;
    int t31;
    int t34;
    int t35;
    int t45;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int stk[7] = {0};

    t0 = *(int *)0xC2B76F4;
    *(unsigned int *)0xC2B76F4 = (t0 + a6);
    *(unsigned int *)(((int)stk + 8)) = (((a4 << 1) + a4) << 2);
    *(unsigned int *)(((int)stk + 4)) = ((((a4 << 1) + a4) << 2) + 0xC2B77DC);
    *(unsigned int *)((((((a4 << 1) + a4) << 2) + 0xC2B77DC) + 0x0)) = a5;
    t1 = *(int *)(((int)stk + 4));
    *(unsigned int *)((t1 + 0x8)) = a6;
    *(unsigned int *)((((a4 << 2) + 0xA0800060) + 0x0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = (((((a4 - 1) << 1) + (a4 - 1)) << 2) + 0xC2B77DC);
    t27 = 0x0;
    if ((unsigned int)(((((a4 - 1) << 1) + (a4 - 1)) << 2) + 0xC2B77DC) >= (unsigned int)0xC2B77DC) {
        t2 = (((((a4 - 1) << 1) + (a4 - 1)) << 2) + 0xC2B77DC);
        t3 = (((((a4 - 1) << 1) + (a4 - 1)) << 2) + 0xC2B77DC);
        for (;;) {
            t4 = *(int *)((t2 + 0x0));
            if (t4 != -1) {
                break;
            }
            t2 = (t2 - 12);
            t3 = (t3 - 12);
            if ((unsigned int)t2 < (unsigned int)0xC2B77DC) {
                if (0x0 == 0) {
                    t5 = *(int *)0xC2B76E8;
                    t6 = *(int *)(((int)stk + 8));
                    t2 = (a4 + 0x1);
                    t2 = (t2 << 1);
                    t2 = (t2 + (a4 + 0x1));
                    t2 = (t2 << 2);
                    t2 = (t2 + 0xC2B77DC);
                    *(unsigned int *)(((t6 + 0xC2B77DC) + 0x4)) = t5;
                    *(unsigned int *)(((int)stk + 4)) = 0xC2B77DC;
                    *(unsigned int *)(((int)stk + 8)) = t2;
                    t7 = *(int *)(((int)stk + 4));
                    t3 = t7;
                    t3 = (t3 + 0x60);
                    if ((unsigned int)t2 < (unsigned int)t3) {
                        t8 = (t6 + 0xC2B77DC);
                        t9 = (a4 + 0x1);
                        t10 = t2;
                        t11 = 0x0;
                        for (;;) {
                            t12 = *(int *)((t10 + 0x0));
                            if (t12 != -1) {
                                t13 = *(int *)((t2 + 0x4));
                                t8 = t13;
                                t14 = *(int *)((t2 + 0x8));
                                t9 = t14;
                                t8 = (t8 + a6);
                                *(unsigned int *)((t2 + 0x4)) = t8;
                                t11 = (t11 + t9);
                            }
                            t10 = (t10 + 0xC);
                            t2 = (t2 + 0xC);
                            if ((unsigned int)t10 >= (unsigned int)t3) {
                                break;
                            }
                        }
                        *(unsigned int *)((a7 + 0x0)) = t11;
                        return t5;
                    }
                    *(unsigned int *)((a7 + 0x0)) = 0x0;
                    return t5;
                }
                t15 = *(int *)(((int)stk + 8));
                t2 = (a4 + 0x1);
                t2 = (t2 << 1);
                t2 = (t2 + (a4 + 0x1));
                t2 = (t2 << 2);
                t2 = (t2 + 0xC2B77DC);
                *(unsigned int *)(((t15 + 0xC2B77DC) + 0x4)) = 0x0;
                *(unsigned int *)(((int)stk + 4)) = 0xC2B77DC;
                *(unsigned int *)(((int)stk + 8)) = t2;
                t16 = *(int *)(((int)stk + 4));
                t3 = t16;
                t3 = (t3 + 0x60);
                if ((unsigned int)t2 < (unsigned int)t3) {
                    t17 = (t15 + 0xC2B77DC);
                    t18 = (a4 + 0x1);
                    t19 = t2;
                    t20 = 0x0;
                    for (;;) {
                        t21 = *(int *)((t19 + 0x0));
                        if (t21 != -1) {
                            t22 = *(int *)((t2 + 0x4));
                            t17 = t22;
                            t23 = *(int *)((t2 + 0x8));
                            t18 = t23;
                            t17 = (t17 + a6);
                            *(unsigned int *)((t2 + 0x4)) = t17;
                            t20 = (t20 + t18);
                        }
                        t19 = (t19 + 0xC);
                        t2 = (t2 + 0xC);
                        if ((unsigned int)t19 >= (unsigned int)t3) {
                            break;
                        }
                    }
                    *(unsigned int *)((a7 + 0x0)) = t20;
                    return 0x0;
                }
                *(unsigned int *)((a7 + 0x0)) = 0x0;
                return 0x0;
            }
        }
        t24 = *(int *)((t3 + 0x4));
        t25 = *(int *)((t3 + 0x8));
        t27 = (t24 + t25);
    }
    t32 = t27;
    if (t27 == 0) {
        t31 = *(int *)0xC2B76E8;
        t32 = t31;
    }
    t34 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((t34 + 0xC2B77DC) + 0x4)) = t32;
    *(unsigned int *)(((int)stk + 4)) = 0xC2B77DC;
    *(unsigned int *)(((int)stk + 8)) = (((((a4 + 0x1) << 1) + (a4 + 0x1)) << 2) + 0xC2B77DC);
    t35 = *(int *)(((int)stk + 4));
    t45 = 0x0;
    if ((unsigned int)(((((a4 + 0x1) << 1) + (a4 + 0x1)) << 2) + 0xC2B77DC) < (unsigned int)(t35 + 0x60)) {
        t36 = (t34 + 0xC2B77DC);
        t37 = (a4 + 0x1);
        t38 = (((((a4 + 0x1) << 1) + (a4 + 0x1)) << 2) + 0xC2B77DC);
        t39 = (((((a4 + 0x1) << 1) + (a4 + 0x1)) << 2) + 0xC2B77DC);
        t40 = 0x0;
        for (;;) {
            t41 = *(int *)((t38 + 0x0));
            if (t41 != -1) {
                t42 = *(int *)((t39 + 0x4));
                t36 = t42;
                t43 = *(int *)((t39 + 0x8));
                t37 = t43;
                t36 = (t36 + a6);
                *(unsigned int *)((t39 + 0x4)) = t36;
                t40 = (t40 + t37);
            }
            t38 = (t38 + 0xC);
            t39 = (t39 + 0xC);
            if ((unsigned int)t38 >= (unsigned int)(t35 + 0x60)) {
                break;
            }
        }
        t45 = t40;
    }
    *(unsigned int *)((a7 + 0x0)) = t45;
    return t32;
}

int FUN_0c0351da(void)
{
    int t0;
    float t1;
    int t2;
    float t3;
    float u4;
    float u5;
    int t6;
    int t7;
    int t8;
    float u12;
    float u13;
    int t19;
    int stk[11] = {0};

    t0 = *(int *)0xC0ED8B4;
    t1 = FUN_0c089de8(t0);
    *(float *)(((int)stk + 16)) = t1;
    t2 = *(int *)0xC0ED8B4;
    t3 = FUN_0c089de0(t2);
    *(float *)(((int)stk + 20)) = t3;
    u4 = *(float *)0xC0ED8A4;
    *(float *)0xC0ED8E8 = u4;
    *(float *)0xC0ED8EC = 0.0f;
    u5 = *(float *)0xC0ED8A8;
    *(float *)0xC0ED8F0 = u5;
    t6 = *(int *)0xC0965F8;
    *(unsigned int *)0xC0ED8D8 = t6;
    t7 = *(int *)0xC0965F4;
    *(unsigned int *)0xC0ED8D4 = t7;
    t8 = *(int *)0xC0965F0;
    *(unsigned int *)0xC0ED8D0 = t8;
    nlLineSetThickness(3.0f);
    nlScaleVector(((int)stk + 4), 0xC0ED8E8, 100.0f);
    FUN_0c07b980();
    u12 = *(float *)(((int)stk + 16));
    *(float *)(((int)stk + 4)) = (u12 * 10.0f);
    *(float *)(((int)stk + 8)) = 0.0f;
    u13 = *(float *)(((int)stk + 20));
    *(float *)(((int)stk + 12)) = (u13 * 10.0f);
    FUN_0c07b980();
    FUN_0c034b5e(0xC0ED8DC, 0xC0ED8AC, (((int)stk + 4) + 0xC), 0x0);
    nlScaleVector(((int)stk + 4), 0xC0ED8E8, 100.0f);
    FUN_0c07b980();
    nlScaleVector(((int)stk + 4), 0xC0ED8D0, 100000.0f);
    t19 = FUN_0c07b980();
    return t19;
}
