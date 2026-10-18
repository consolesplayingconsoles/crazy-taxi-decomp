/* Straight-line functions with calls and guards (batch gen_v): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02e83c(int, int, int, int, float, float);
int Init_nd_StartWait(int, int, int, int, float);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlSetScaleFactor(float);
int nlTranslate(float, float, float);

void gdc_CourseReq(int a4, int a5, float f4)
{
    int t0;
    int t1;
    int t2;
    int t3;
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
    float u20;
    int t24;
    int t5;
    int t6;

    if (a5 == 0) {
        t0 = *(int *)0xC26E0FC;
        t1 = *(int *)(((a4 << 2) + t0));
        t5 = t1;
        t6 = 0xC1EE800;
    } else {
        t2 = *(int *)0xC26E100;
        t3 = *(int *)(((a4 << 2) + t2));
        t5 = t3;
        t6 = 0xC1EE804;
    }
    t8 = *(int *)((t6 + 0x0));
    t9 = *(int *)(((t8 + (((a4 << 2) + a4) << 2)) + 0x10));
    t10 = 0xC26C5DC;
    t11 = 0x0;
    t12 = (a4 << 2);
    for (;;) {
        t13 = *(int *)((t10 + 0x4));
        if (t13 == t5) break;
        t14 = *(int *)((t10 + 0x8));
        t12 = t14;
        t11 = (t11 + t12);
        t12 = (t12 + 0x1);
        t15 = t12;
        t12 = (t12 << 1);
        t12 = (t12 + t15);
        t11 = (t11 + 0x1);
        t12 = (t12 << 2);
        t12 = (t12 << 1);
        t10 = (t10 + t12);
        if ((int)t11 >= (int)0x120) {
            t10 = t9;
            t16 = FUN_0c02e83c(t10, t11, t12, 0x4, (90.0f - (f4 * 0.199999988f)), 0.0f);
            t10 = t16;
            if (t16 != -1) {
                t17 = t10;
                t10 = (t10 << 1);
                t10 = (t10 + t17);
                t10 = (t10 << 2);
                t10 = (t10 << 1);
                t10 = (short)t10;
                t10 = (t10 + 0xC26C5DC);
                t11 = 0x1;
                *(unsigned char *)((t10 + 0x0)) = t11;
                *(unsigned int *)((t10 + 0x4)) = t5;
                *(unsigned int *)((t10 + 0xC)) = 0x0;
                t18 = *(int *)((t10 + 0x10));
                *(unsigned int *)((t10 + 0x10)) = (t18 + 0x1);
                *(unsigned int *)((t10 + 0x8)) = (t9 - 1);
                if ((int)t9 > (int)t11) {
                    t10 = (t10 + 0x18);
                    t12 = 0xFFFFFFFF;
                    if ((int)t11 < (int)t9) {
                        do {
                            t11 = (t11 + 0x1);
                            *(unsigned char *)((t10 + 0x0)) = 0x0;
                            *(unsigned int *)((t10 + 0xC)) = 0x3E8;
                            *(unsigned int *)((t10 + 0x10)) = 0x0;
                            *(unsigned int *)((t10 + 0x8)) = 0x0;
                            *(unsigned int *)((t10 + 0x4)) = t12;
                            t10 = (t10 + 0x18);
                        } while ((int)t11 < (int)t9);
                        return;
                    }
                    return;
                }
                return;
            }
            return;
        }
    }
    t19 = *(signed char *)((t10 + 0x0));
    if (t19 == 0) {
        *(unsigned char *)((t10 + 0x0)) = 0x4;
        u20 = (90.0f - (f4 * 0.199999988f));
        if (0.0f > (90.0f - (f4 * 0.199999988f))) {
            u20 = 0.0f;
        }
        *(unsigned int *)((t10 + 0xC)) = (int)u20;
    }
    t24 = *(int *)((t10 + 0x10));
    *(unsigned int *)((t10 + 0x10)) = (t24 + 0x1);
}

void Put_Build_Patch(void)
{
    int t8;
    int t9;
    float u11;

    nlPushMatrix(0x0);
    nlTranslate(-3666.0f, 103.5f, -3888.0f);
    nlRotateAY(0xC000);
    nlRotateAX(0x4AAA);
    nlScale(25.0f, 25.0f, 25.0f);
    nlSetScaleFactor(25.0f);
    nlObjPutUseViewMatrix(0xC5BDE50);
    nlPopMatrix(0x1);
    t8 = 0x0;
    t9 = 0xC11894C;
    do {
        nlPushMatrix(0x0);
        u11 = *(float *)((t9 + 0x0));
        t9 = (t9 + 0x4);
        nlTranslate(-3845.00977f, 118.668198f, u11);
        nlRotateAY(0xC000);
        nlRotateAX(0xAAA);
        nlScale(7.0f, 3.5f, 3.5f);
        nlSetScaleFactor(7.0f);
        nlObjPutUseViewMatrix(0xC5C55D8);
        nlPopMatrix(0x1);
        t8 = (t8 + 0x1);
    } while ((int)t8 < (int)0x3);
}

void FUN_0c050542(void)
{
    int t0;
    float u1;
    float u2;
    float u3;
    int t4;
    int t7;
    float u9;
    float u10;
    float u14;
    int t15;
    int t16;

    t0 = *(int *)0xC2A720C;
    u1 = *(float *)0xC2A72CC;
    if (t0 == 0) {
        if (-20.0f > u1) {
            u2 = *(float *)0xC2A72CC;
            *(float *)0xC2A72CC = (u2 + 4.0f);
            u3 = *(float *)0xC2A72E0;
            *(float *)0xC2A72E0 = (u3 + 3.0f);
            t4 = *(short *)0xC2A72C0;
            *(unsigned short *)0xC2A72C0 = (t4 - 0x200);
        } else {
            *(unsigned int *)0xC2A720C = 0x1;
            *(unsigned int *)0xC2A72B8 = 0x0;
        }
        return;
    }
    t7 = *(int *)0xC2A7208;
    if (t0 == 1) {
        if ((int)t7 >= (int)0x64) {
            *(unsigned int *)0xC2A720C = 0x2;
        }
        return;
    }
    if (t0 == 2) {
        if (200.0f > u1) {
            u9 = *(float *)0xC2A72CC;
            *(float *)0xC2A72CC = (u9 + 4.39999962f);
            u10 = *(float *)0xC2A72E0;
            *(float *)0xC2A72E0 = (u10 + 3.19999981f);
        } else {
            *(unsigned int *)0xC2A720C = 0x3;
            *(unsigned int *)0xC2A72B8 = 0x0;
        }
        return;
    }
    if (t0 == 3) {
        if ((int)t7 >= (int)0x104) {
            *(unsigned int *)0xC2A720C = 0x4;
            *(unsigned short *)0xC2A72C0 = 0x0;
            *(unsigned int *)0xC12FFC0 = 0x1E;
        }
        return;
    }
    if (t0 == 4) {
        if (300.0f > u1) {
            u14 = *(float *)0xC2A72CC;
            *(float *)0xC2A72CC = (u14 + (1.0f + 1.0f));
            t15 = *(short *)0xC2A72C0;
            if ((int)(unsigned short)t15 < (int)0x4000) {
                t16 = *(short *)0xC2A72C0;
                *(unsigned short *)0xC2A72C0 = (t16 + 0x100);
            }
            return;
        }
        Init_nd_StartWait(t0, 0xC2A72C0, 0xC2A720C, 0xC2A72CC, u1);
    return;
    }
}
