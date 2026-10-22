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
    u9 = 0.19999999f;
    t10 = *(int *)(((t8 + (((a4 << 2) + a4) << 2)) + 0x10));
    u11 = 90.0f;
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


