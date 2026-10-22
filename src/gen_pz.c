/* Straight-line functions with calls and guards (batch gen_pz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02e83c(int);
int nlObjPutUseViewMatrix(int);
int FUN_0c02eb86(int a4, int a5, float f4);

int FUN_0c02eb86(int a4, int a5, float f4)
{
    int t0;
    int t1;
    int t2;
    int t3;
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
    float u19;
    float u20;
    float u21;
    int t22;
    float u23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t31;
    int t29;
    int t30;
    int t49;
    int t5;
    int t6;
    int t40;

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
    t9 = *(int *)((t6 + 0x0));
    t10 = *(int *)(((t9 + (((a4 << 2) + a4) << 2)) + 0x10));
    t11 = 0x0;
    t12 = a5;
    t13 = 0xC26C5DC;
    for (;;) {
        t14 = *(int *)((t13 + 0x4));
        if (t14 == t5) {
            break;
        }
        t15 = *(int *)((t13 + 0x8));
        t12 = t15;
        t11 = (t11 + t12);
        t12 = (t12 + 0x1);
        t16 = t12;
        t12 = (t12 << 1);
        t12 = (t12 + t16);
        t11 = (t11 + 0x1);
        t12 = (t12 << 2);
        t12 = (t12 << 1);
        t13 = (t13 + t12);
        if ((int)t11 >= (int)0x120) {
            t11 = t10;
            t17 = FUN_0c02e83c(t11);
            t11 = t17;
            if (t17 != -1) {
                t18 = t11;
                t11 = (t11 << 1);
                t11 = (t11 + t18);
                t11 = (t11 << 2);
                t11 = (t11 << 1);
                t11 = (short)t11;
                t11 = (t11 + 0xC26C5DC);
                t12 = 0x1;
                *(unsigned char *)((t11 + 0x0)) = t12;
                *(unsigned int *)((t11 + 0x4)) = t5;
                u19 = *(float *)0xC02ED04;
                u20 = *(float *)0xC02ED08;
                if (0.0f > (u20 - (f4 * u19))) {
                    u21 = *(float *)0xC02ED0C;
                    *(unsigned int *)((t11 + 0xC)) = (int)(0.0f + u21);
                    t22 = *(int *)((t11 + 0x10));
                    *(unsigned int *)((t11 + 0x10)) = (t22 + 0x1);
                    *(unsigned int *)((t11 + 0x8)) = (t10 - 1);
                    if ((int)t10 > (int)t12) {
                        t11 = (t11 + 0x18);
                        if ((int)t12 < (int)t10) {
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
                    return 0xC02ED0C;
                }
                u23 = *(float *)0xC02ED0C;
                *(unsigned int *)((t11 + 0xC)) = (int)((u20 - (f4 * u19)) + u23);
                t24 = *(int *)((t11 + 0x10));
                *(unsigned int *)((t11 + 0x10)) = (t24 + 0x1);
                *(unsigned int *)((t11 + 0x8)) = (t10 - 1);
                if ((int)t10 > (int)t12) {
                    t11 = (t11 + 0x18);
                    if ((int)t12 < (int)t10) {
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
                return 0xC02ED0C;
            }
            return t17;
        }
    }
    t25 = *(signed char *)((t13 + 0x0));
    if ((unsigned char)t25 == 4) {
        t26 = *(int *)((t13 + 0x14));
        t27 = nlObjPutUseViewMatrix(t26);
        t40 = t27;
    } else {
        t28 = *(signed char *)((t13 + 0x0));
        t31 = (unsigned char)t25;
        if (t28 == 0) {
            t29 = *(int *)((t13 + 0x14));
            t30 = nlObjPutUseViewMatrix(t29);
            *(unsigned char *)((t13 + 0x0)) = 0x4;
            *(unsigned int *)((t13 + 0xC)) = 0x0;
            t31 = t30;
        }
        t40 = t31;
    }
    t49 = *(int *)((t13 + 0x10));
    *(unsigned int *)((t13 + 0x10)) = (t49 + 0x1);
    return t40;
}
