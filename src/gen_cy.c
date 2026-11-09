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
struct o0_int { int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


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
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t15;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t24;
    int t25;
    int t32;
    int t34;
    int t35;
    int t45;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int stk[7] = {0};
    int R1004;
    int R1008;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);

    t0 = (((struct oC_int *)0xC2B76E8)->v);
    (((struct oC_uint *)0xC2B76E8)->v) = (t0 + a6);
    R1008 = (((a4 << 1) + a4) << 2);
    R1004 = ((((a4 << 1) + a4) << 2) + 0xC2B77DC);
    *(unsigned int *)((((((a4 << 1) + a4) << 2) + 0xC2B77DC) + 0x0)) = a5;
    t1 = R1004;
    *(unsigned int *)((t1 + 0x8)) = a6;
    *(unsigned int *)((((a4 << 2) + 0xA0800060) + 0x0)) = a5;
    R1004 = (((((a4 - 1) << 1) + (a4 - 1)) << 2) + 0xC2B77DC);
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
                    t5 = (((struct o0_int *)0xC2B76E8)->v);
                    t6 = R1008;
                    t2 = (a4 + 0x1);
                    t2 = (t2 << 1);
                    t2 = (t2 + (a4 + 0x1));
                    t2 = (t2 << 2);
                    t2 = (t2 + 0xC2B77DC);
                    *(unsigned int *)(((t6 + 0xC2B77DC) + 0x4)) = t5;
                    R1004 = 0xC2B77DC;
                    R1008 = t2;
                    t3 = R1004;
                    t3 = (t3 + 0x60);
                    if ((unsigned int)t2 < (unsigned int)t3) {
                        t8 = (t6 + 0xC2B77DC);
                        t9 = (a4 + 0x1);
                        t10 = t2;
                        t11 = 0x0;
                        for (;;) {
                            t12 = *(int *)((t10 + 0x0));
                            if (t12 != -1) {
                                t8 = *(int *)((t2 + 0x4));
                                t9 = *(int *)((t2 + 0x8));
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
                t15 = R1008;
                t2 = (a4 + 0x1);
                t2 = (t2 << 1);
                t2 = (t2 + (a4 + 0x1));
                t2 = (t2 << 2);
                t2 = (t2 + 0xC2B77DC);
                *(unsigned int *)(((t15 + 0xC2B77DC) + 0x4)) = 0x0;
                R1004 = 0xC2B77DC;
                R1008 = t2;
                t3 = R1004;
                t3 = (t3 + 0x60);
                if ((unsigned int)t2 < (unsigned int)t3) {
                    t17 = (t15 + 0xC2B77DC);
                    t18 = (a4 + 0x1);
                    t19 = t2;
                    t20 = 0x0;
                    for (;;) {
                        t21 = *(int *)((t19 + 0x0));
                        if (t21 != -1) {
                            t17 = *(int *)((t2 + 0x4));
                            t18 = *(int *)((t2 + 0x8));
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
        t32 = (((struct o0_int *)0xC2B76E8)->v);
    }
    t34 = R1008;
    *(unsigned int *)(((t34 + 0xC2B77DC) + 0x4)) = t32;
    R1004 = 0xC2B77DC;
    R1008 = (((((a4 + 0x1) << 1) + (a4 + 0x1)) << 2) + 0xC2B77DC);
    t35 = R1004;
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
                t36 = *(int *)((t39 + 0x4));
                t37 = *(int *)((t39 + 0x8));
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

