/* Straight-line functions with calls and guards (batch gen_cy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ReflectColliWallBox(int, int, int, int);
int nlSingleLineUseViewMatrix(void);
int _fmtout(int, int, int, int, int);
float nlFastSin(int);
float nlFastCos(int);
int motionClearRootZ(int);
int nlLineSetThickness(float);
int nlScaleVector(int, int, float);
int PatchMotion(void);
int vsprintf(int a4, int a5, int a6);
int nlPopMatrix(int a4);
int nlsndPackLoadInit(int a4, int a5, int a6, int a7);
int ColliWallTest(void);

int PatchMotion(void)
{
    motionClearRootZ(0xCA75D74);
    return motionClearRootZ(0xCA7BBDC);
}

int vsprintf(int a4, int a5, int a6)
{
    int t0;

    t0 = _fmtout(0x1, 0x0, a4, a5, a6);
    return t0;
}


int nlsndPackLoadInit(int a4, int a5, int a6, int a7)
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

