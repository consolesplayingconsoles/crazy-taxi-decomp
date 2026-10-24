/* Straight-line functions with calls and guards (batch gen_sv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdc_CourseBlockFind(int, int, int, int);
int gdc_CourseReq(int a4, int a5, float f4);

int gdc_CourseReq(int a4, int a5, float f4)
{
    float u10;
    int t11;
    float u12;
    int t13;
    int t14;
    int t15;
    int t21;
    int t22;
    int t23;
    float u26;
    int t5;
    int t6;

    if (a5 == 0) {
        t5 = (*(int *)(((a4 << 2) + (*(int *)0xC26E0FC))));
        t6 = 0xC1EE800;
    } else {
        t5 = (*(int *)(((a4 << 2) + (*(int *)0xC26E100))));
        t6 = 0xC1EE804;
    }
    u10 = 0.19999999f;
    t11 = *(int *)((((*(int *)((t6 + 0x0))) + (((a4 << 2) + a4) << 2)) + 0x10));
    u12 = 9e+01f;
    t13 = 0xC26C5DC;
    t14 = 0x0;
    t15 = (a4 << 2);
    for (;;) {
        if ((*(int *)((t13 + 0x4))) == t5) {
            break;
        }
        t15 = (*(int *)((t13 + 0x8)));
        t14 = (t14 + t15);
        t15 = (t15 + 0x1);
        t21 = t15;
        t15 = (t15 << 1);
        t15 = (t15 + t21);
        t14 = (t14 + 0x1);
        t15 = (t15 << 2);
        t15 = (t15 << 1);
        t13 = (t13 + t15);
        if ((int)t14 >= (int)0x120) {
            t13 = t11;
            t22 = gdc_CourseBlockFind(t13, t14, t15, 0x4);
            t13 = t22;
            if (t22 != -1) {
                t23 = t13;
                t13 = (t13 << 1);
                t13 = (t13 + t23);
                t13 = (t13 << 2);
                t13 = (t13 << 1);
                t13 = (short)t13;
                t13 = (t13 + 0xC26C5DC);
                t14 = 0x1;
                *(unsigned char *)((t13 + 0x0)) = t14;
                *(unsigned int *)((t13 + 0x4)) = t5;
                *(unsigned int *)((t13 + 0xC)) = 0x0;
                *(unsigned int *)((t13 + 0x10)) = ((*(int *)((t13 + 0x10))) + 0x1);
                *(unsigned int *)((t13 + 0x8)) = (t11 - 1);
                if (((int)t11 > (int)t14) && (t13 = (t13 + 0x18), t15 = 0xFFFFFFFF, (int)t14 < (int)t11)) {
                    for (;;) {
                        t14 = (t14 + 0x1);
                        *(unsigned char *)((t13 + 0x0)) = 0x0;
                        *(unsigned int *)((t13 + 0xC)) = 0x3E8;
                        *(unsigned int *)((t13 + 0x10)) = 0x0;
                        *(unsigned int *)((t13 + 0x8)) = 0x0;
                        *(unsigned int *)((t13 + 0x4)) = t15;
                        t13 = (t13 + 0x18);
                        if ((int)t14 >= (int)t11) {
                            break;
                        }
                    }
                    return t22;
                }
                return t22;
            }
            return t22;
        }
    }
    if ((*(signed char *)((t13 + 0x0))) == 0) {
        *(unsigned char *)((t13 + 0x0)) = 0x4;
        u26 = (u12 - (f4 * u10));
        if (0.0f > (u12 - (f4 * u10))) {
            u26 = 0.0f;
        }
        *(unsigned int *)((t13 + 0xC)) = (int)u26;
    }
    *(unsigned int *)((t13 + 0x10)) = ((*(int *)((t13 + 0x10))) + 0x1);
    return 0x120;
}
