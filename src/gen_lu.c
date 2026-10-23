/* Straight-line functions with calls and guards (batch gen_lu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdc_CourseBlockFind(int, int, int, int);
int nlObjPutUseViewMatrix(int);
int gdc_CoursePut(int a4, int a5, float f4);

int gdc_CoursePut(int a4, int a5, float f4)
{
    int t10;
    int t11;
    int t12;
    int t13;
    int t20;
    int t21;
    int t22;
    float u23;
    float u24;
    int t29;
    int t36;
    int t35;
    int t5;
    int t6;
    int t45;

    if (a5 == 0) {
        t5 = (*(int *)(((a4 << 2) + (*(int *)0xC26E0FC))));
        t6 = 0xC1EE800;
    } else {
        t5 = (*(int *)(((a4 << 2) + (*(int *)0xC26E100))));
        t6 = 0xC1EE804;
    }
    t10 = *(int *)((((*(int *)((t6 + 0x0))) + (((a4 << 2) + a4) << 2)) + 0x10));
    t11 = 0x0;
    t12 = a5;
    t13 = 0xC26C5DC;
    for (;;) {
        if ((*(int *)((t13 + 0x4))) == t5) {
            break;
        }
        t12 = (*(int *)((t13 + 0x8)));
        t11 = (t11 + t12);
        t12 = (t12 + 0x1);
        t20 = t12;
        t12 = (t12 << 1);
        t12 = (t12 + t20);
        t11 = (t11 + 0x1);
        t12 = (t12 << 2);
        t12 = (t12 << 1);
        t13 = (t13 + t12);
        if ((int)t11 >= (int)0x120) {
            t11 = t10;
            t21 = gdc_CourseBlockFind(t11, t12, 0x120, (((a4 << 2) + a4) << 2));
            t11 = t21;
            if (t21 != -1) {
                t22 = t11;
                t11 = (t11 << 1);
                t11 = (t11 + t22);
                t11 = (t11 << 2);
                t11 = (t11 << 1);
                t11 = (short)t11;
                t11 = (t11 + 0xC26C5DC);
                t12 = 0x1;
                *(unsigned char *)((t11 + 0x0)) = t12;
                *(unsigned int *)((t11 + 0x4)) = t5;
                u23 = *(float *)0xC02ED04;
                u24 = *(float *)0xC02ED08;
                if (0.0f > (u24 - (f4 * u23))) {
                    *(unsigned int *)((t11 + 0xC)) = (int)(0.0f + (*(float *)0xC02ED0C));
                    *(unsigned int *)((t11 + 0x10)) = ((*(int *)((t11 + 0x10))) + 0x1);
                    *(unsigned int *)((t11 + 0x8)) = (t10 - 1);
                    if (((int)t10 > (int)t12) && (t11 = (t11 + 0x18), (int)t12 < (int)t10)) {
                        for (;;) {
                            t12 = (t12 + 0x1);
                            *(unsigned char *)((t11 + 0x0)) = 0x0;
                            *(unsigned int *)((t11 + 0xC)) = 0x3E8;
                            *(unsigned int *)((t11 + 0x10)) = 0x0;
                            *(unsigned int *)((t11 + 0x8)) = 0x0;
                            *(unsigned int *)((t11 + 0x4)) = 0xFFFFFFFF;
                            t11 = (t11 + 0x18);
                            if ((int)t12 >= (int)t10) {
                                break;
                            }
                        }
                        return 0xC02ED0C;
                    }
                    return 0xC02ED0C;
                }
                *(unsigned int *)((t11 + 0xC)) = (int)((u24 - (f4 * u23)) + (*(float *)0xC02ED0C));
                *(unsigned int *)((t11 + 0x10)) = ((*(int *)((t11 + 0x10))) + 0x1);
                *(unsigned int *)((t11 + 0x8)) = (t10 - 1);
                if (((int)t10 > (int)t12) && (t11 = (t11 + 0x18), (int)t12 < (int)t10)) {
                    for (;;) {
                        t12 = (t12 + 0x1);
                        *(unsigned char *)((t11 + 0x0)) = 0x0;
                        *(unsigned int *)((t11 + 0xC)) = 0x3E8;
                        *(unsigned int *)((t11 + 0x10)) = 0x0;
                        *(unsigned int *)((t11 + 0x8)) = 0x0;
                        *(unsigned int *)((t11 + 0x4)) = 0xFFFFFFFF;
                        t11 = (t11 + 0x18);
                        if ((int)t12 >= (int)t10) {
                            break;
                        }
                    }
                    return 0xC02ED0C;
                }
                return 0xC02ED0C;
            }
            return t21;
        }
    }
    t29 = *(signed char *)((t13 + 0x0));
    if ((unsigned char)t29 == 4) {
        t45 = (nlObjPutUseViewMatrix((*(int *)((t13 + 0x14)))));
    } else {
        t36 = (unsigned char)t29;
        if ((*(signed char *)((t13 + 0x0))) == 0) {
            t35 = nlObjPutUseViewMatrix((*(int *)((t13 + 0x14))));
            *(unsigned char *)((t13 + 0x0)) = 0x4;
            *(unsigned int *)((t13 + 0xC)) = 0x0;
            t36 = t35;
        }
        t45 = t36;
    }
    *(unsigned int *)((t13 + 0x10)) = ((*(int *)((t13 + 0x10))) + 0x1);
    return t45;
}
