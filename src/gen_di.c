/* Straight-line functions with calls and guards (batch gen_di): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXF_Close(int);
int ADXF_GetFsizeSct(int);
int ADXF_GetStat(int);
int ADXF_Open(int, int);
int ADXF_ReadNw32(int, int, int);
float FUN_0c067b30(int, int, float);
int FUN_0c067b8e(int, int, float);
int FUN_0c085160(int, int, int, int);
int buInit(int, int, int, int);
extern float getNearLineIndex();
int memset(int, int, int);
int nlAddVector(int, int);
float nlLength(int, int);
int nlMakeModelProjectMatrix_objput(void);
int nlMakeModelViewProjectMatrix_objput(void);
int nlPopMatrix(int);
int saveBufferInit(int);
int FUN_0c07aaf0(int a4);
int FUN_0c07ab10(int a4);
int FUN_0c0781a0(int a4);
int BupInit(void);
int gdc_FileLoad(int a4, int a5, int a6);
int getCoursePointMove(int a4, int a5, int a6);
float FUN_0c02b220(int a4, int a5);
int FUN_0c075330(int a4);
float FUN_0c0678a4(int a4, int a5, int a6, float f4);
int FUN_0c067960(int a4, int a5, int a6, float f4);
int FUN_0c07ab30(int a4);
float GetStopPosCenter(int a4, int a5, int a6);

int FUN_0c07aaf0(int a4)
{
    nlMakeModelProjectMatrix_objput();
    return ((int (*)(int, int))(0xC07AB60))(a4, 0x0);
}

int FUN_0c07ab10(int a4)
{
    nlMakeModelProjectMatrix_objput();
    return ((int (*)(int, int))(0xC07AB60))(a4, 0xFFFFFFFF);
}

int FUN_0c0781a0(int a4)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t6;

    t0 = *(short *)0xC2B31DC;
    t1 = a4;
    if ((int)a4 <= 0) {
        t1 = 0x1;
    }
    t3 = *(short *)0xC2B31DE;
    t4 = (t0 - t1);
    if ((int)t0 < (int)t1) {
        t4 = 0x0;
    }
    t6 = *(int *)0xC2B31E0;
    *(unsigned short *)0xC2B31DC = t4;
    if ((int)t4 < (int)t3) {
        *(unsigned int *)0xC2B31E4 = (t6 + ((unsigned int)(t4 << 8) >> 2));
    }
    return ((((int)t0 >= (int)t1)) ? 1 : 0);
}

int BupInit(void)
{
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
    int t20;
    int t21;
    int t22;

    memset(0xC291E50, 0x0, 0x260);
    buInit(0xF, 0xFF, 0xC2920B0, 0xC03A9EE);
    t2 = *(signed char *)0xC09D048;
    *(unsigned char *)0xC28A4E8 = t2;
    t3 = *(signed char *)0xC09D049;
    *(unsigned char *)0xC28A4E9 = t3;
    t4 = *(signed char *)0xC09D04A;
    *(unsigned char *)0xC28A4EA = t4;
    t5 = *(signed char *)0xC09D04B;
    *(unsigned char *)0xC28A4EB = t5;
    t6 = *(signed char *)0xC09D04C;
    *(unsigned char *)0xC28A4EC = t6;
    t7 = *(signed char *)0xC09D04D;
    *(unsigned char *)0xC28A4ED = t7;
    t8 = *(signed char *)0xC09D04E;
    *(unsigned char *)0xC28A4EE = t8;
    t9 = *(signed char *)0xC09D04F;
    *(unsigned char *)0xC28A4EF = t9;
    t10 = *(signed char *)0xC09D050;
    *(unsigned char *)0xC28A4F0 = t10;
    t11 = *(signed char *)0xC09D051;
    *(unsigned char *)0xC28A4F1 = t11;
    t12 = *(signed char *)0xC09D052;
    *(unsigned char *)0xC28A4F2 = t12;
    t13 = *(signed char *)0xC09D053;
    *(unsigned char *)0xC28A4F3 = t13;
    t14 = *(signed char *)0xC09D054;
    *(unsigned char *)0xC28A4F4 = t14;
    t15 = *(signed char *)0xC09D055;
    *(unsigned char *)0xC28A4F5 = t15;
    t16 = *(signed char *)0xC09D056;
    *(unsigned char *)0xC28A4F6 = t16;
    t17 = 0x0;
    for (;;) {
        saveBufferInit(((short)((short)t17 * (short)0x788) + 0xC28A4F8));
        t17 = (t17 + 0x1);
        if ((int)t17 >= (int)0x4) {
            break;
        }
    }
    t20 = 0;
    for (; t20 < (int)0x3C0; t20++) *(unsigned char *)(0xC28C318 + t20) = *(unsigned char *)(0xC09D058 + t20);
    t21 = 0;
    for (; t21 < (int)0x3C0; t21++) *(unsigned char *)(0xC28C6D8 + t21) = *(unsigned char *)(0xC09D418 + t21);
    t22 = 0;
    for (; t22 < (int)0x25B0; t22++) *(unsigned char *)(0xC28F8A0 + t22) = *(unsigned char *)(0xC28A4E8 + t22);
    return memset(0xC28CA98, 0x0, 0x8);
}

int gdc_FileLoad(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t6;
    int t4;
    int t10;
    int t13;

    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        if ((int)t0 < (int)0xA) {
            for (;;) {
                t2 = ADXF_Open(a5, 0x0);
                t1 = (t1 + 0x1);
                if ((int)t1 <= (int)0x78) {
                    if (t2 != 0) {
                        break;
                    }
                    continue;
                }
                t0 = (t0 + 0x1);
                if ((int)t0 < (int)0xA) continue;
                t3 = *(int *)0xC1EE208;
                *(unsigned int *)0xC1EE208 = (t3 + 0x1);
                return 0x0;
            }
            t6 = ((unsigned int)((unsigned int)((unsigned int)a6 >> 8) >> 2) >> 1);
            if (a6 == 0) {
                t4 = ADXF_GetFsizeSct(t2);
                t6 = t4;
            }
            ADXF_ReadNw32(t2, t6, a4);
            for (;;) {
                t10 = ADXF_GetStat(t2);
                if (t10 == 4) {
                    break;
                }
                if (t10 == 3) {
                    ADXF_Close(t2);
                    return t6;
                }
            }
            ADXF_Close(t2);
            t0 = (t0 + 0x1);
            continue;
        }
        t13 = *(int *)0xC1EE208;
        *(unsigned int *)0xC1EE208 = (t13 + 0x1);
        return 0x0;
    }
}

int getCoursePointMove(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
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
    int t15;
    int t17;
    int t21;
    int t22;
    int t23;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t3;
    int t24;

    t0 = *(int *)((a4 + 0x0));
    t1 = *(int *)0xC2A6690;
    t2 = *(int *)((a5 + 0x0));
    if ((int)t2 >= 0) {
        t4 = a6;
        t5 = ((((t0 << 1) + t0) << 2) + t1);
        for (;;) {
            t6 = *(int *)((t5 + 0x4));
            t7 = *(int *)((a5 + 0x0));
            t8 = *(int *)((t6 + 0x0));
            if ((int)t7 < (int)t8) {
                break;
            }
            t9 = *(int *)((t5 + 0x4));
            t10 = *(int *)((a5 + 0x0));
            t11 = *(int *)((t9 + 0x0));
            *(unsigned int *)((a5 + 0x0)) = (t10 - t11);
            t12 = *(int *)((t5 + 0x8));
            t3 = t12;
            t13 = *(short *)((((t4 << 1) + (t3 + 0x4)) + 0x0));
            *(unsigned int *)((a4 + 0x0)) = (unsigned short)t13;
            if ((unsigned short)t13 == 0) {
                t4 = (t4 + 0x1);
                t15 = *(int *)((t5 + 0x8));
                t3 = t15;
                t17 = *(short *)(((((t4 & 0x1) << 1) + (t3 + 0x4)) + 0x0));
                *(unsigned int *)((a4 + 0x0)) = (unsigned short)t17;
            }
            t21 = *(int *)((a4 + 0x0));
            t5 = t21;
            t22 = *(int *)0xC2A6690;
            t23 = t5;
            t5 = (t5 << 1);
            t5 = (t5 + t23);
            t5 = (t5 << 2);
            t5 = (t5 + t22);
        }
        t35 = t3;
    } else {
        t25 = t1;
        t26 = t2;
        t27 = ((((t0 << 1) + t0) << 2) + t1);
        for (;;) {
            t28 = *(int *)((a5 + 0x0));
            if ((int)t28 >= 0) {
                break;
            }
            t29 = *(int *)((t27 + 0x8));
            t24 = t29;
            t30 = *(short *)((t24 + 0x8));
            t24 = t30;
            t24 = (unsigned short)t24;
            t27 = t24;
            t26 = t24;
            t27 = (t27 << 1);
            *(unsigned int *)((a4 + 0x0)) = t24;
            t31 = *(int *)0xC2A6690;
            t25 = t31;
            t27 = (t27 + t26);
            t27 = (t27 << 2);
            t27 = (t27 + t25);
            t32 = *(int *)((a5 + 0x0));
            t25 = t32;
            t33 = *(int *)((t27 + 0x4));
            t26 = t33;
            t34 = *(int *)((t26 + 0x0));
            t26 = t34;
            t25 = (t25 + t26);
            *(unsigned int *)((a5 + 0x0)) = t25;
        }
        t35 = t24;
    }
    return t35;
}

float FUN_0c02b220(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    float u4;
    int t5;
    int t6;
    float u7;
    int t8;
    int t9;
    int t10;
    float t11;
    int t12;
    int t16;
    int t17;
    int t18;
    int t19;
    float t20;
    float u26;
    int stk[13] = {0};

    t0 = *(int *)((a4 + 0x8));
    *(unsigned int *)0xC1EE1DC = t0;
    t1 = *(int *)((a4 + 0x4));
    *(unsigned int *)0xC1EE1D8 = t1;
    t2 = *(int *)((a4 + 0x0));
    *(unsigned int *)0xC1EE1D4 = t2;
    t3 = *(int *)0xC2A6690;
    if (a5 == -1) {
        u4 = *(float *)0xC02B34C;
        t5 = 0x0;
        t6 = (0xEF4 + t3);
        u7 = u4;
        for (;;) {
            t8 = *(int *)((t6 + 0x4));
            t9 = *(int *)((t6 + 0x0));
            t10 = *(int *)((t8 + 0x0));
            t11 = ((int (*)(int, int, int, int))(getNearLineIndex))(0x0, t9, t10, (((int)stk + 4) + 0x4));
            if (u7 > t11) {
                u7 = t11;
                *(unsigned int *)0xC1EE1E8 = (int)t11;
                *(unsigned int *)0xC1EE1E0 = t5;
                t12 = *(int *)(((int)stk + 8));
                *(unsigned int *)0xC1EE1E4 = t12;
            }
            t5 = (t5 + 0x1);
            t6 = (t6 + 0xC);
            if ((int)t5 > (int)0x8) {
                break;
            }
        }
        u26 = t11;
    } else {
        *(unsigned int *)(((int)stk + 12)) = (((((a5 << 1) + a5) << 2) + t3) + 0xEF4);
        t16 = *(int *)(((int)stk + 12));
        t17 = *(int *)(((((((a5 << 1) + a5) << 2) + t3) + 0xEF4) + 0x4));
        t18 = *(int *)((t16 + 0x0));
        t19 = *(int *)((t17 + 0x0));
        t20 = ((float (*)(int, int, int, int, int))(getNearLineIndex))(0x0, t18, t19, 0xC1EE1E4, a4);
        *(unsigned int *)0xC1EE1E8 = (int)t20;
        *(unsigned int *)0xC1EE1E0 = a5;
        u26 = t20;
    }
    return u26;
}

int FUN_0c075330(int a4)
{
    int t0;
    int t1;
    int t2;
    int t7;
    int t4;
    int t8;
    int t9;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;

    t0 = *(int *)0xC2AEE08;
    t1 = *(int *)0xC2AEDB8;
    t2 = *(short *)0xC2B3190;
    t7 = (t2 + t2);
    if ((int)t1 > (int)0x3) {
        t4 = ((t2 << 1) + t2);
        if ((int)t1 > (int)0x4) {
            if ((int)t1 > (int)0x5) {
                for (;;) {
                }
            }
            t4 = (t2 << 2);
        }
        t7 = t4;
    }
    t8 = (int)((unsigned int)t7 + (unsigned int)0x0);
    t9 = (int)((unsigned int)t8 + ((((int)0x0 > (int)t7)) ? 1u : 0u));
    t11 = 0x1000;
    t12 = (t0 + 0xA5000000);
    t13 = t1;
    t14 = 0x0;
    t15 = (a4 + 0x1000);
    for (;;) {
        t16 = *(short *)0xC2B3192;
        if ((int)t14 >= (int)t16) {
            break;
        }
        t13 = 0x0;
        if ((int)(t9 >> 1) > 0) {
            for (;;) {
                t17 = *(short *)((t12 + 0x0));
                t11 = t17;
                t13 = (t13 + 0x5);
                t12 = (t12 + 0xA);
                *(unsigned short *)((t15 + 0x0)) = t11;
                t15 = (t15 + 0x2);
                if ((int)t13 >= (int)(t9 >> 1)) {
                    break;
                }
            }
        }
        t14 = (t14 + 0x5);
        t12 = (t12 + 0x1400);
    }
    return t16;
}

float FUN_0c0678a4(int a4, int a5, int a6, float f4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t7;
    int t8;
    int t9;
    int t11;
    int t12;
    int t14;
    int t15;
    int t16;
    float u17;
    int t18;
    int t20;
    float u21;
    int t22;
    int t24;
    int t25;
    float t26;
    int t27;
    float u4;
    int t5;
    int t6;
    float u10;

    t0 = 0x0;
    t1 = (0x0 + a5);
    t2 = (0x0 + a5);
    t3 = a4;
    for (;;) {
        t7 = 0x0;
        t8 = a5;
        t9 = a6;
        for (;;) {
            t11 = *(int *)((t3 + 0x0));
            if ((int)t7 >= (int)(t11 - 1)) {
                t12 = *(int *)((t3 + 0x0));
                t0 = (t0 + 0x1);
                t2 = (t2 + 0x4);
                t3 = (((t12 << 2) << 2) + t3);
                t3 = (t3 + 0x4);
                t1 = (t1 + 0x4);
                if ((int)t0 >= (int)0x3) {
                    return u4;
                }
                t7 = 0x0;
                continue;
            }
            t9 = t7;
            t8 = t3;
            t9 = (t9 << 2);
            t8 = (t8 + 0x4);
            t9 = (t9 << 2);
            t8 = (t8 + t9);
            t14 = *(int *)((t8 + 0x0));
            u10 = (float)t14;
            if (!(u10 > f4)) {
                t15 = *(int *)((t8 + 0x10));
                u10 = (float)t15;
                if (u10 > f4) {
                    break;
                }
                t16 = *(int *)((((t3 + 0x4) + t9) + 0x10));
                t6 = t16;
                u10 = (float)t6;
                if (u10 == f4) {
                    t5 = 0x14;
                    t9 = (t9 + (t3 + 0x4));
                    u17 = *(float *)((t9 + t5));
                    u10 = u17;
                    *(float *)((t2 + 0x0)) = u10;
                    t18 = *(int *)((t3 + 0x0));
                    t0 = (t0 + 0x1);
                    t2 = (t2 + 0x4);
                    t3 = (((t18 << 2) << 2) + t3);
                    t3 = (t3 + 0x4);
                    t1 = (t1 + 0x4);
                    if ((int)t0 >= (int)0x3) {
                        return u4;
                    }
                    t7 = 0x0;
                    continue;
                }
                t7 = (t7 + 0x1);
                continue;
            }
            t20 = *(int *)((((t3 + 0x4) + t9) + 0x10));
            t6 = t20;
            u10 = (float)t6;
            if (u10 == f4) {
                t5 = 0x14;
                t9 = (t9 + (t3 + 0x4));
                u21 = *(float *)((t9 + t5));
                u10 = u21;
                *(float *)((t2 + 0x0)) = u10;
                t22 = *(int *)((t3 + 0x0));
                t0 = (t0 + 0x1);
                t2 = (t2 + 0x4);
                t3 = (((t22 << 2) << 2) + t3);
                t3 = (t3 + 0x4);
                t1 = (t1 + 0x4);
                if ((int)t0 >= (int)0x3) {
                    return u4;
                }
                t7 = 0x0;
                continue;
            }
            t7 = (t7 + 0x1);
        }
        t24 = *(int *)((((t3 + 0x4) + t9) + 0x0));
        t25 = *(int *)(((((t3 + 0x4) + t9) + 0x10) + 0x0));
        t26 = FUN_0c067b30(((t3 + 0x4) + t9), (((t3 + 0x4) + t9) + 0x10), ((f4 - (float)t24) / (float)(t25 - t24)));
        *(float *)((t1 + 0x0)) = t26;
        u4 = t26;
        t27 = *(int *)((t3 + 0x0));
        t0 = (t0 + 0x1);
        t2 = (t2 + 0x4);
        t3 = (((t27 << 2) << 2) + t3);
        t3 = (t3 + 0x4);
        t1 = (t1 + 0x4);
        if ((int)t0 >= (int)0x3) {
            break;
        }
    }
    return u4;
}

int FUN_0c067960(int a4, int a5, int a6, float f4)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    int t7;
    int t8;
    int t10;
    int t11;
    int t13;
    int t14;
    int t17;
    int t18;
    int t19;
    int t22;
    int t23;
    int t24;
    int t26;
    int t27;
    int t28;
    int t29;
    int t0;
    int t5;
    float u9;

    t1 = 0x0;
    t2 = (0x0 + a5);
    t3 = (0x0 + a5);
    t4 = a4;
    for (;;) {
        t6 = 0x0;
        t7 = a5;
        t8 = a6;
        for (;;) {
            t10 = *(int *)((t4 + 0x0));
            if ((int)t6 >= (int)(t10 - 1)) {
                t11 = *(int *)((t4 + 0x0));
                t1 = (t1 + 0x1);
                t3 = (t3 + 0x4);
                t4 = (((t11 << 2) << 2) + t4);
                t4 = (t4 + 0x4);
                t2 = (t2 + 0x4);
                if ((int)t1 >= (int)0x3) {
                    return t0;
                }
                t6 = 0x0;
                continue;
            }
            t8 = t6;
            t7 = t4;
            t8 = (t8 << 2);
            t7 = (t7 + 0x4);
            t8 = (t8 << 2);
            t7 = (t7 + t8);
            t13 = *(int *)((t7 + 0x0));
            t5 = t13;
            u9 = (float)t5;
            if (!(u9 > f4)) {
                t14 = *(int *)((t7 + 0x10));
                t5 = t14;
                u9 = (float)t5;
                if (u9 > f4) {
                    break;
                }
                t5 = t4;
                t5 = (t5 + 0x4);
                t5 = (t5 + t8);
                t17 = *(int *)((t5 + 0x10));
                u9 = (float)t17;
                if (u9 == f4) {
                    t5 = t4;
                    t5 = (t5 + 0x4);
                    t8 = (t8 + t5);
                    t18 = *(int *)((t8 + 0x14));
                    *(unsigned int *)((t3 + 0x0)) = t18;
                    t19 = *(int *)((t4 + 0x0));
                    t1 = (t1 + 0x1);
                    t3 = (t3 + 0x4);
                    t4 = (((t19 << 2) << 2) + t4);
                    t4 = (t4 + 0x4);
                    t2 = (t2 + 0x4);
                    if ((int)t1 >= (int)0x3) {
                        return t0;
                    }
                    t6 = 0x0;
                    continue;
                }
                t6 = (t6 + 0x1);
                continue;
            }
            t5 = t4;
            t5 = (t5 + 0x4);
            t5 = (t5 + t8);
            t22 = *(int *)((t5 + 0x10));
            u9 = (float)t22;
            if (u9 == f4) {
                t5 = t4;
                t5 = (t5 + 0x4);
                t8 = (t8 + t5);
                t23 = *(int *)((t8 + 0x14));
                *(unsigned int *)((t3 + 0x0)) = t23;
                t24 = *(int *)((t4 + 0x0));
                t1 = (t1 + 0x1);
                t3 = (t3 + 0x4);
                t4 = (((t24 << 2) << 2) + t4);
                t4 = (t4 + 0x4);
                t2 = (t2 + 0x4);
                if ((int)t1 >= (int)0x3) {
                    return t0;
                }
                t6 = 0x0;
                continue;
            }
            t6 = (t6 + 0x1);
        }
        t26 = *(int *)((((t4 + 0x4) + t8) + 0x0));
        t27 = *(int *)(((((t4 + 0x4) + t8) + 0x10) + 0x0));
        t28 = FUN_0c067b8e(((t4 + 0x4) + t8), (((t4 + 0x4) + t8) + 0x10), ((f4 - (float)t26) / (float)(t27 - t26)));
        t0 = t28;
        *(unsigned int *)((t2 + 0x0)) = t0;
        t29 = *(int *)((t4 + 0x0));
        t1 = (t1 + 0x1);
        t3 = (t3 + 0x4);
        t4 = (((t29 << 2) << 2) + t4);
        t4 = (t4 + 0x4);
        t2 = (t2 + 0x4);
        if ((int)t1 >= (int)0x3) {
            break;
        }
    }
    return t0;
}

int FUN_0c07ab30(int a4)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    nlMakeModelViewProjectMatrix_objput();
    t1 = *(int *)((a4 + 0x0));
    t2 = *(int *)((a4 + 0x18));
    if ((int)t1 >= 0) {
        if (t2 != 0) {
            t3 = *(int *)0xC2B8CBC;
            t4 = *(int *)((t3 + 0x4));
            *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t4 >> 16) >> 8);
            *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t4 >> 16) >> 8);
            t5 = *(int *)0xC2B7948;
            *(unsigned int *)0xC2B3150 = (((t2 | t5) & 0x30000) | 0x818C0000);
            *(unsigned int *)0xC2B3154 = 0x0;
            t6 = *(int *)0xC2B356C;
            *(unsigned int *)0xC2B3158 = t6;
            t7 = *(int *)0xC2B3570;
            FUN_0c085160(a4, 0xC2B3150, 0x0, t7);
        }
    }
    return nlPopMatrix(0x1);
}

