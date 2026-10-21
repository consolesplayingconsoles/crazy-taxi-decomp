/* Straight-line functions with calls and guards (batch gen_ej): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c089978(int, int);
int SetCameraMode(int);
int _mult64(int, int, int, int);
int _pow10(int, int, int);
int camRestore(void);
int camSetEye(int, int);
int camSetTarget(int, int);
int get_fat(int, int);
int memmove(int, int, int);
int memset(int, int, int);
int nlFastSinCos(int, int, int);
int nlGetAverageVector(int, int, int, float, float);
float nlInnerProduct(int, int);
int nlObjPutUseViewMatrix(int);
int nlSubVector3op(int, int, int);
int nlTriPutSetAttrib(int, int, int, int, int, int, int, int, int, int, float, float, float, float, float, float, float, float);
int nlTriPutSetAttribFaceColor(int, float, float, float);
int nlTriPutSetClipping(int, float, float, float, float);
int nlTriPutSetPoint(int, int, float, float, float, float, float, float, float, float);
int nlTriPutTextureInit(int, int, int);
int nlUnitVector(int);
int search_fat_dir(int, int);
int set_fat(int, int);
int vmsfs_write_retry(int, int, int);
int write_fat(int);
int write_sys(int);
int FUN_0c034fa8(int a4);
int write_dir(int a4);
int FUN_0c0648e0(void);
int _power(int a4, int a5, int a6);

int FUN_0c034fa8(int a4)
{
    int t0;
    int t3;
    int t8;
    float u9;
    float u10;
    float u13;
    float u14;
    int t15;
    int t16;
    int t17;
    float u19;
    float u20;
    float u21;
    float u22;
    float u23;
    float u24;
    float u25;
    float u27;
    float u28;
    float u29;
    float u31;
    float u32;
    float u33;
    float u34;
    float u35;
    int t37;
    int stk[23] = {0};

    t0 = *(int *)0xC0ED8A0;
    if (t0 != 0) {
        nlTriPutTextureInit(0xC270E78, 0xFFFFFFFF, 0x0);
        nlTriPutSetAttrib(0xC270E78, 0x2, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x22, 0.5f, 0.5f, 1.0f, 0.0f, 0.699999988f, 0.0f, 0.0f, 0.0f);
        t3 = *(int *)0xC270E98;
        *(unsigned int *)0xC270E98 = (t3 | 0xC0);
        *(unsigned int *)0xC0ED8A0 = 0x0;
    }
    t8 = *(int *)((a4 + 0x18));
    u9 = 0.0f;
    u10 = 0.699999988f;
    if ((t8 & 1) != 0) {
        u9 = 0.699999988f;
        u10 = 0.0f;
    }
    nlTriPutSetAttribFaceColor(0xC270E78, 1.0f, u9, u10);
    u13 = *(float *)((a4 + 0x8));
    *(float *)(((int)stk + 36)) = u13;
    u14 = *(float *)((a4 + 0xC));
    *(float *)(((int)stk + 40)) = u14;
    t15 = 0x0;
    t16 = 0x0;
    t17 = 0x0;
    for (;;) {
        nlFastSinCos(t16, ((int)stk + 28), (((int)stk + 28) + 0x4));
        u19 = *(float *)((a4 + 0x10));
        u20 = *(float *)(((int)stk + 32));
        u21 = *(float *)(((int)stk + 36));
        u22 = *(float *)(((int)stk + 40));
        u23 = *(float *)(((int)stk + 28));
        u24 = *(float *)(((int)stk + 32));
        u25 = *(float *)((a4 + 0x14));
        nlTriPutSetPoint(0xC270E78, t17, (u21 + u19 * u20), u25, (u22 + u19 * u23), u24, 0.0f, u23, 0.0f, 0.0f);
        u27 = *(float *)(((int)stk + 32));
        u28 = *(float *)((a4 + 0x18));
        u29 = *(float *)(((int)stk + 28));
        nlTriPutSetPoint(0xC270E78, (t17 + 0x1), (u21 + u19 * u20), u28, (u22 + u19 * u23), u27, 0.0f, u29, 0.0f, 0.0f);
        t15 = (t15 + 0x1);
        t17 = (t17 + 0x2);
        t16 = (t16 + 0x1000);
        if ((int)t15 > (int)0x10) {
            break;
        }
    }
    u31 = *(float *)((a4 + 0x14));
    u32 = *(float *)((a4 + 0x18));
    u33 = *(float *)((a4 + 0x10));
    u34 = *(float *)(((int)stk + 40));
    u35 = *(float *)(((int)stk + 36));
    nlTriPutSetClipping(0xC270E78, u35, ((u31 + u32) * 0.5f), u34, (u33 + 0.5f * (u31 - u32)));
    t37 = nlObjPutUseViewMatrix(0xC270E78);
    return t37;
}

int write_dir(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;
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
    int t18;
    int t20;
    int t21;
    int t22;
    int t23;
    int t27;
    int t29;
    int t3;
    int t5;
    int t6;
    int stk[12] = {0};

    t0 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
    t1 = *(int *)((t0 + 0x18));
    t2 = *(int *)((t0 + 0x14));
    *(unsigned int *)(((int)stk + 8)) = t1;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    t4 = 0x0;
    t7 = (unsigned short)t2;
    for (;;) {
        t8 = *(int *)(((int)stk + 8));
        if ((int)t4 >= (int)t8) {
            t9 = *(int *)(((int)stk + 12));
            if (t9 != 0) {
                t10 = write_fat(a4);
                if ((int)t10 >= 0) {
                    t11 = write_sys(a4);
                    if ((int)t11 < 0) {
                        return t11;
                    }
                    return 0x0;
                }
                return t10;
            }
            return 0x0;
        }
        t12 = *(signed char *)((((((a4 * 0x148) + 0xC2EE990) + 0x48) + t4) + 0x0));
        if (t12 != 0) {
            *(unsigned int *)(((int)stk + 4)) = ((t4 << 8) << 1);
            for (;;) {
                t13 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x28));
                t14 = *(int *)(((int)stk + 4));
                t15 = vmsfs_write_retry(a4, t7, (t13 + t14));
                if (t15 == 0) {
                    break;
                }
                if (t15 != 0xFFFFFF01) {
                    *(unsigned int *)(((int)stk + 12)) = 0x1;
                    t16 = get_fat(a4, t7);
                    t5 = (unsigned short)t16;
                    set_fat(a4, t7);
                    t18 = search_fat_dir(a4, 0xFFFC);
                    t6 = t18;
                    if ((int)t6 < 0) {
                        return 0xFFFFFF04;
                    }
                    set_fat(a4, t6);
                    if (t4 == 0) {
                        t20 = *(int *)0xC2EE98C;
                        t21 = *(int *)((t20 + 0x10));
                        t22 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                        t23 = ((int (*)(int, int, int))(t21))(t22, 0x4A, t6);
                    } else {
                        set_fat(a4, t3);
                    }
                    t3 = t7;
                    t7 = t6;
                    continue;
                }
                return t15;
            }
            t27 = get_fat(a4, t7);
            t3 = t7;
            *(unsigned char *)((((((a4 * 0x148) + 0xC2EE990) + 0x48) + t4) + 0x0)) = 0x0;
            t5 = (unsigned short)t27;
            t7 = t5;
            t4 = (t4 + 0x1);
            continue;
        }
        t29 = get_fat(a4, t7);
        t3 = t7;
        t5 = (unsigned short)t29;
        t7 = t5;
        t4 = (t4 + 0x1);
    }
}

int FUN_0c0648e0(void)
{
    int t1;
    int t2;
    float u5;
    int t6;
    float t8;
    float u9;
    float u12;
    float u13;
    float u16;
    int t19;
    float u20;
    int t21;
    int t27;
    int t28;
    int t29;
    int t30;
    int t38;
    int t40;
    int t39;
    int stk[19] = {0};

    SetCameraMode(0x1);
    t1 = *(int *)0xC2AD54C;
    t2 = *(int *)0xC2AD548;
    nlSubVector3op((((int)stk + 4) + 0x18), (t1 + 0x4), (t2 + 0x4));
    nlUnitVector((((int)stk + 4) + 0x18));
    u5 = *(float *)0xC064A24;
    t6 = *(int *)0xC2AD548;
    nlGetAverageVector((t6 + 0x4), (((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC), 1.0f, u5);
    t8 = nlInnerProduct(0xC2AD1F8, (((int)stk + 4) + 0x18));
    u9 = (t8 * (-1.0f));
    if (t8 > 0.0f) {
        u9 = 0.0f;
    }
    u12 = *(float *)0xC064A30;
    u13 = *(float *)0xC064A34;
    nlGetAverageVector((((int)stk + 4) + 0xC), 0xC2AD1EC, (((int)stk + 4) + 0xC), 1.0f, (u13 + u12 * u9));
    nlSubVector3op((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC), 0xC179840);
    u16 = *(float *)0xC064A40;
    nlGetAverageVector(0xC179840, (((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC), 1.0f, u16);
    camSetEye((((int)stk + 4) + 0xC), 0x1);
    t19 = *(int *)0xC2AD54C;
    u20 = *(float *)0xC064A48;
    t21 = *(int *)0xC2AD548;
    nlGetAverageVector((t21 + 0x4), (t19 + 0x4), ((int)stk + 4), u20, u20);
    nlGetAverageVector(((int)stk + 4), 0xC2AD1EC, ((int)stk + 4), 1.0f, u12);
    nlSubVector3op((((int)stk + 4) + 0x18), ((int)stk + 4), 0xC17984C);
    nlGetAverageVector(0xC17984C, (((int)stk + 4) + 0x18), ((int)stk + 4), 1.0f, u16);
    camSetTarget(((int)stk + 4), 0x1);
    t27 = *(int *)0xC2AD54C;
    t28 = *(int *)((t27 + 0x20));
    if (t28 == 2) {
        t29 = *(int *)0xC2AD54C;
        t30 = *(int *)((t29 + 0x24));
        if (t30 == 2) {
            *(unsigned int *)0xC2AD57C = 0x4;
        }
    }
    t38 = *(int *)0xC2AD590;
    t40 = t38;
    if ((t38 & 1) == 0) {
        t39 = camRestore();
        t40 = t39;
    }
    return t40;
}

int _power(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t5;
    int t8;
    int t13;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t34;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t37;
    int t38;
    int t40;
    int t41;
    int t42;
    int t44;
    int t45;
    int t46;
    int t47;
    int t57;
    int t58;
    int t59;
    int t60;
    int t14;
    int t15;
    int t9;
    int t10;
    int t33;
    int t30;
    int stk[19] = {0};

    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    t0 = 0x1;
    t1 = (-a4);
    if ((int)a4 >= 0) {
        t0 = 0x0;
        t1 = a4;
    }
    t3 = (int)((int)t1 / (int)0x1B);
    t4 = (int)((int)t1 % (int)0x1B);
    if (t0 == 1) {
        if (t4 != 0) {
            t5 = *(short *)0xC0DAEA8;
            *(unsigned short *)(((int)stk + 4)) = t5;
            memmove((((int)stk + 4) + 0x1C), 0xC0DAE58, 0x8);
            *(unsigned char *)(((((int)stk + 4) + 0x1C) + 0x8)) = 0x0;
            t9 = 0x0;
            t10 = (0x1B - t4);
        } else {
            memset((((int)stk + 4) + 0x1C), 0x0, 0x9);
            t8 = *(signed char *)(((((int)stk + 4) + 0x1C) + 0x0));
            *(unsigned char *)(((((int)stk + 4) + 0x1C) + 0x0)) = (t8 | 0x80);
            *(unsigned short *)(((int)stk + 4)) = 0x0;
            t9 = (t8 | 0x80);
            t10 = t4;
        }
        t14 = t9;
        t15 = t10;
    } else {
        memset((((int)stk + 4) + 0x1C), 0x0, 0x9);
        t13 = *(signed char *)(((((int)stk + 4) + 0x1C) + 0x0));
        *(unsigned char *)(((((int)stk + 4) + 0x1C) + 0x0)) = (t13 | 0x80);
        *(unsigned short *)(((int)stk + 4)) = 0x0;
        t14 = (t13 | 0x80);
        t15 = t4;
    }
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0x1C);
    t17 = t14;
    t18 = (((int)stk + 4) + 0x1C);
    t19 = 0xC0DAE18;
    t20 = 0x0;
    t21 = t3;
    t22 = ((((t0 << 2) << 2) << 2) + 0xC0DAE18);
    t23 = (((t0 << 2) << 2) + 0xC0DAE98);
    for (;;) {
        t34 = t19;
        if ((t21 & 0x1) != 0) {
            t24 = *(short *)((t23 + 0x0));
            t25 = _mult64(((int)stk + 4), (((int)stk + 4) + 0x1C), t24, t22);
            t17 = t25;
            t19 = 0xB4;
            t26 = FUN_0c089978((((int)stk + 4) + 0x1C), 0x40);
            t17 = t26;
            if (t17 != 0) {
                t27 = *(short *)(((int)stk + 4));
                t19 = t27;
                t19 = (t19 + 0x1);
                *(unsigned short *)(((int)stk + 4)) = t19;
                t28 = *(int *)(((int)stk + 8));
                t29 = *(signed char *)((t28 + 0x0));
                t17 = t29;
                t17 = (t17 | 0x80);
                *(unsigned char *)((t28 + 0x0)) = t17;
                t30 = t19;
            }
            t34 = t30;
        } else {
            t33 = t18;
        }
        t18 = t33;
        t19 = t34;
        t20 = (t20 + 0x1);
        t21 = (t21 >> 1);
        t23 = (t23 + 0x2);
        t22 = (t22 + 0x8);
        if ((int)t20 >= (int)0x8) {
            break;
        }
    }
    if (t15 != 0) {
        t37 = *(int *)(((int)stk + 12));
        t38 = *(int *)(((int)stk + 16));
        _pow10(t15, t37, t38);
        t40 = *(int *)(((int)stk + 12));
        t41 = *(short *)((t40 + 0x0));
        t42 = *(int *)(((int)stk + 16));
        _mult64(((int)stk + 4), (((int)stk + 4) + 0x1C), t41, t42);
        t44 = FUN_0c089978((((int)stk + 4) + 0x1C), 0x40);
        if (t44 == 1) {
            t45 = *(short *)(((int)stk + 4));
            *(unsigned short *)(((int)stk + 4)) = (t45 + 0x1);
            t46 = *(int *)(((int)stk + 8));
            t47 = *(signed char *)((t46 + 0x0));
            *(unsigned char *)((t46 + 0x0)) = (t47 | 0x80);
        }
    }
    t57 = *(short *)(((int)stk + 4));
    t58 = *(int *)(((int)stk + 12));
    *(unsigned short *)((t58 + 0x0)) = t57;
    t59 = *(int *)(((int)stk + 16));
    t60 = memmove(t59, (((int)stk + 4) + 0x1C), 0x8);
    return t60;
}
