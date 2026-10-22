/* Straight-line functions with calls and guards (batch gen_v): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdc_CourseBlockFind(int);
int Init_nd_StartWait(void);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlSetScaleFactor(float);
int nlTranslate(float, float, float);
int gdc_CourseReq(int a4, int a5, float f4);
int Put_Build_Patch(void);
int nd_StartWait_MoveCar(void);

int gdc_CourseReq(int a4, int a5, float f4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t8;
    float u9;
    int t10;
    float u11;
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
    float u22;
    int t26;
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
    u9 = *(float *)0xC02EE10;
    t10 = *(int *)(((t8 + (((a4 << 2) + a4) << 2)) + 0x10));
    u11 = *(float *)0xC02EE14;
    t12 = 0xC26C5DC;
    t13 = 0x0;
    t14 = (a4 << 2);
    for (;;) {
        t15 = *(int *)((t12 + 0x4));
        if (t15 == t5) break;
        t16 = *(int *)((t12 + 0x8));
        t14 = t16;
        t13 = (t13 + t14);
        t14 = (t14 + 0x1);
        t17 = t14;
        t14 = (t14 << 1);
        t14 = (t14 + t17);
        t13 = (t13 + 0x1);
        t14 = (t14 << 2);
        t14 = (t14 << 1);
        t12 = (t12 + t14);
        if ((int)t13 >= (int)0x120) {
            t12 = t10;
            t18 = gdc_CourseBlockFind(t12);
            t12 = t18;
            if (t18 != -1) {
                t19 = t12;
                t12 = (t12 << 1);
                t12 = (t12 + t19);
                t12 = (t12 << 2);
                t12 = (t12 << 1);
                t12 = (short)t12;
                t12 = (t12 + 0xC26C5DC);
                t13 = 0x1;
                *(unsigned char *)((t12 + 0x0)) = t13;
                *(unsigned int *)((t12 + 0x4)) = t5;
                *(unsigned int *)((t12 + 0xC)) = 0x0;
                t20 = *(int *)((t12 + 0x10));
                *(unsigned int *)((t12 + 0x10)) = (t20 + 0x1);
                *(unsigned int *)((t12 + 0x8)) = (t10 - 1);
                if ((int)t10 > (int)t13) {
                    t12 = (t12 + 0x18);
                    t14 = 0xFFFFFFFF;
                    if ((int)t13 < (int)t10) {
                        do {
                            t13 = (t13 + 0x1);
                            *(unsigned char *)((t12 + 0x0)) = 0x0;
                            *(unsigned int *)((t12 + 0xC)) = 0x3E8;
                            *(unsigned int *)((t12 + 0x10)) = 0x0;
                            *(unsigned int *)((t12 + 0x8)) = 0x0;
                            *(unsigned int *)((t12 + 0x4)) = t14;
                            t12 = (t12 + 0x18);
                        } while ((int)t13 < (int)t10);
                        return t18;
                    }
                    return t18;
                }
                return t18;
            }
            return t18;
        }
    }
    t21 = *(signed char *)((t12 + 0x0));
    if (t21 == 0) {
        *(unsigned char *)((t12 + 0x0)) = 0x4;
        u22 = (u11 - (f4 * u9));
        if (0.0f > (u11 - (f4 * u9))) {
            u22 = 0.0f;
        }
        *(unsigned int *)((t12 + 0xC)) = (int)u22;
    }
    t26 = *(int *)((t12 + 0x10));
    *(unsigned int *)((t12 + 0x10)) = (t26 + 0x1);
    return 0x120;
}

int Put_Build_Patch(void)
{
    float u1;
    float u2;
    float u3;
    float u7;
    float u12;
    float u13;
    float u14;
    float u15;
    int t16;
    int t17;
    float u19;
    int t26;

    nlPushMatrix(0x0);
    u1 = *(float *)0xC04F168;
    u2 = *(float *)0xC04F16C;
    u3 = *(float *)0xC04F170;
    nlTranslate(u3, u2, u1);
    nlRotateAY(0xC000);
    nlRotateAX(0x4AAA);
    u7 = *(float *)0xC04F180;
    nlScale(u7, u7, u7);
    nlSetScaleFactor(u7);
    nlObjPutUseViewMatrix(0xC5BDE50);
    nlPopMatrix(0x1);
    u12 = *(float *)0xC04F198;
    u13 = *(float *)0xC04F19C;
    u14 = *(float *)0xC04F1A0;
    u15 = *(float *)0xC04F1A4;
    t16 = 0x0;
    t17 = 0xC11894C;
    do {
        nlPushMatrix(0x0);
        u19 = *(float *)((t17 + 0x0));
        t17 = (t17 + 0x4);
        nlTranslate(u12, u13, u19);
        nlRotateAY(0xC000);
        nlRotateAX(0xAAA);
        nlScale(u15, u14, u14);
        nlSetScaleFactor(u15);
        nlObjPutUseViewMatrix(0xC5C55D8);
        t26 = nlPopMatrix(0x1);
        t16 = (t16 + 0x1);
    } while ((int)t16 < (int)0x3);
    return t26;
}


