/* Straight-line functions with calls and guards (batch gen_bw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Drv_StartAction(int, int, int);
int FUN_0c03b600(void);
int FUN_0c03b788(void);
int FUN_0c03b81e(int);
int FUN_0c03c10e(void);
int FUN_0c06047c(void);
int FUN_0c060484(void);
int FUN_0c062da4(void);
int FUN_0c063dc6(void);
int FUN_0c064420(void);
int FUN_0c077170(int, int);
int FUN_0c1676d0(void);
int FUN_0c167720(void);
int FcvStoreBuffer(int, int, float);
int Sound_Request(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int malloc(void);
float nlInnerProduct(int, int, float);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int, float, float, float);
int FUN_0c15f934(void);
int FUN_0c14d2d2(int a4);
int FUN_0c079cc0(int a4, int a5, int a6, float f4, float f5, float f6);
int FUN_0c14f8de(int a4, int a5);
int FUN_0c0638d0(void);
int FUN_0c063750(void);
int FUN_0c077fa0(int a4);
int FUN_0c041e20(void);

int FUN_0c15f934(void)
{
    return FUN_0c167720();
}

int FUN_0c14d2d2(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)((a4 + 0x1C));
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x2C));
        if (t1 != 0) {
            t2 = *(int *)((t0 + 0x30));
            t3 = *(int *)((t0 + 0x2C));
        }
    }
    return FUN_0c1676d0();
}

int FUN_0c079cc0(int a4, int a5, int a6, float f4, float f5, float f6)
{
    float u2;
    float u3;
    float u4;
    float u6;
    int t7;
    float u8;
    float u9;
    int t10;
    int t11;
    int t12;
    int stk[15] = {0};

    *(float *)(((int)stk + 24)) = f4;
    *(float *)(((int)stk + 12)) = f5;
    *(float *)(((int)stk + 20)) = f6;
    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    nlPushMatrix(0xC2B3410, f4, f5, f6);
    nlMultiMatrix(0xC2B33D0);
    u2 = *(float *)(((int)stk + 24));
    *(float *)(((int)stk + 44)) = u2;
    u3 = *(float *)(((int)stk + 12));
    *(float *)(((int)stk + 48)) = u3;
    u4 = *(float *)(((int)stk + 20));
    *(float *)(((int)stk + 52)) = u4;
    FUN_0c077170((((int)stk + 4) + 0x28), (((int)stk + 4) + 0x18));
    u6 = *(float *)(((int)stk + 40));
    t7 = *(int *)(((int)stk + 16));
    u8 = *(float *)(((int)stk + 28));
    *(float *)((t7 + 0x0)) = (u8 * (1.0f / u6));
    u9 = *(float *)(((int)stk + 32));
    t10 = *(int *)(((int)stk + 8));
    *(float *)((t10 + 0x0)) = (u9 * (1.0f / u6));
    t11 = *(int *)(((int)stk + 4));
    *(float *)((t11 + 0x0)) = (1.0f / u6);
    t12 = nlPopMatrix(0x1);
    return t12;
}

int FUN_0c14f8de(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t5;
    int t3;
    int t4;
    int t6;
    int t7;
    int t10;
    int stk[5] = {0};

    t0 = _builtin_get_imask();
    *(unsigned short *)(((int)stk + 4)) = t0;
    _builtin_set_imask(0xF);
    t1 = *(short *)(((int)stk + 4));
    t2 = malloc();
    if (t2 != 0) {
        t5 = 0x0;
        if ((unsigned int)0x0 < (unsigned int)(a5 * a4)) {
            t3 = 0x0;
            do {
                t4 = (t2 + t3);
                t3 = (t3 + 0x4);
                *(unsigned int *)((t4 + 0x0)) = 0x0;
            } while ((unsigned int)t3 < (unsigned int)(a5 * a4));
            t5 = t3;
        }
        if ((unsigned int)(t5 - 4) < (unsigned int)((a5 * a4) & 0x3)) {
            t6 = (t5 - 4);
            t7 = (t2 + (t5 - 4));
            do {
                t6 = (t6 + 0x1);
                *(unsigned char *)((t7 + 0x0)) = 0x0;
                t7 = (t7 + 0x1);
            } while ((unsigned int)t6 < (unsigned int)((a5 * a4) & 0x3));
        }
        _builtin_set_imask(((unsigned int)((((unsigned short)t1 & 0xF) << 2) << 2) >> 4));
        t10 = t2;
    } else {
        _builtin_set_imask(((unsigned int)((((unsigned short)t1 & 0xF) << 2) << 2) >> 4));
        t10 = 0x0;
    }
    return t10;
}

int FUN_0c0638d0(void)
{
    int t0;
    float u3;
    int t4;
    float u6;
    int t7;
    float u8;
    int t9;
    int t10;
    int t11;
    int t15;
    float u17;
    float u19;
    float u20;
    int t21;
    int t23;
    int t22;

    t0 = *(signed char *)0xC2AD1DF;
    if ((t0 & 128) != 0) {
        FUN_0c063dc6();
    } else {
        FUN_0c064420();
        u3 = *(float *)0xC2AD024;
        t4 = *(int *)0xC2AD020;
        FcvStoreBuffer(t4, 0xC2AD028, u3);
        u6 = *(float *)0xC2AD024;
        *(float *)0xC2AD024 = (u6 + 1.0f);
        t7 = *(int *)0xC2AD020;
        u8 = *(float *)0xC2AD024;
        t9 = *(int *)((t7 + 0x0));
        if (!((float)(t9 - 1) > u8)) {
            t10 = *(int *)0xC1791EC;
            t11 = 0x1;
            if (t10 != 0) {
                t11 = 0x0;
            }
            Drv_StartAction(t11, 0x0, 0x0);
        }
    }
    t15 = *(signed char *)0xC1EE26E;
    if (t15 != 0) {
        Drv_StartAction(0x9, 0x0, 0x0);
        u17 = *(float *)0xC0639BC;
        *(float *)0xC2AD024 = u17;
    }
    u19 = *(float *)0xC0639C0;
    u20 = *(float *)0xC2AD024;
    if (u20 == u19) {
        t21 = *(int *)0xC2AD000;
        t23 = 0x501A9;
        if (t21 != 1) {
            t22 = 0x401A9;
            if (t21 == 3) {
                t22 = 0x501A9;
            }
            t23 = t22;
        }
        return Sound_Request(t23, 0x0);
    }
    return 0x24;
}

int FUN_0c063750(void)
{
    int t0;
    int t1;
    float u3;
    int t4;
    int t6;
    int t13;
    float u7;
    int t8;
    float u9;
    int t10;
    int t12;
    int t11;
    int t14;
    int t15;
    int t21;
    int t16;
    int t17;
    int t19;
    float u20;
    int t25;
    int t24;
    int t23;

    t0 = *(signed char *)0xC2AD1DF;
    if ((t0 & 128) != 0) {
        t1 = FUN_0c063dc6();
        t24 = t1;
    } else {
        FUN_0c064420();
        u3 = *(float *)0xC2AD024;
        t4 = *(int *)0xC2AD020;
        FcvStoreBuffer(t4, 0xC2AD028, u3);
        t6 = *(int *)0xC2AD014;
        if (t6 != 0) {
            t13 = t6;
            if (t6 == 1) {
                u7 = *(float *)0xC2AD024;
                *(float *)0xC2AD024 = (u7 + 1.0f);
                t8 = *(int *)0xC2AD020;
                u9 = *(float *)0xC2AD024;
                t10 = *(int *)((t8 + 0x0));
                t12 = 0x24;
                if (!((float)(t10 - 1) > u9)) {
                    t11 = Drv_StartAction(0x0, 0x0, 0x0);
                    t12 = t11;
                }
                t13 = t12;
            }
            t23 = t13;
        } else {
            t14 = *(int *)0xC2AD01C;
            t15 = *(int *)0xC2AD1DC;
            t21 = t6;
            if ((unsigned int)t14 <= (unsigned int)(t15 & 0xFFFFFF)) {
                t16 = *(int *)0xC2AD1DC;
                *(unsigned int *)0xC2AD1DC = ((t16 & 0xFF000000) | 0x0);
                t17 = *(int *)0xC2AD014;
                *(unsigned int *)0xC2AD014 = (t17 + 0x1);
                FUN_0c062da4();
                t19 = *(signed char *)0xC2AD1DF;
                *(unsigned char *)0xC2AD1DF = (t19 | 0x80);
                *(float *)0xC2AD0F4 = 0.0f;
                u20 = *(float *)0xC0638C0;
                *(float *)0xC2AD0F8 = u20;
                t21 = 0xF8;
            }
            t23 = t21;
        }
        t24 = t23;
    }
    t25 = *(int *)0xC2AD01C;
    *(unsigned int *)0xC2AD01C = (t25 - 1);
    return t24;
}

int FUN_0c077fa0(int a4)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;
    float t9;
    float u10;
    float u11;
    float u12;
    int t13;
    int stk[20] = {0};

    u0 = *(float *)((a4 + 0xC));
    *(float *)(((int)stk + 4)) = ((-(u0 * u0)) + 1.0f);
    u1 = *(float *)((a4 + 0x10));
    *(float *)(((int)stk + 24)) = ((-(u1 * u1)) + 1.0f);
    u2 = *(float *)((a4 + 0x14));
    *(float *)(((int)stk + 44)) = ((-(u2 * u2)) + 1.0f);
    u3 = *(float *)((a4 + 0x10));
    u4 = *(float *)((a4 + 0xC));
    *(float *)((((int)stk + 4) + 0x10)) = (-(u4 * u3));
    *(float *)((((int)stk + 4) + 0x4)) = (-(u4 * u3));
    u5 = *(float *)((a4 + 0x14));
    u6 = *(float *)((a4 + 0xC));
    *(float *)((((int)stk + 4) + 0x20)) = (-(u6 * u5));
    *(float *)((((int)stk + 4) + 0x8)) = (-(u6 * u5));
    u7 = *(float *)((a4 + 0x14));
    u8 = *(float *)((a4 + 0x10));
    *(float *)((((int)stk + 4) + 0x24)) = (-(u8 * u7));
    *(float *)((((int)stk + 4) + 0x18)) = (-(u8 * u7));
    t9 = nlInnerProduct(a4, (a4 + 0xC), u2);
    u10 = *(float *)((a4 + 0xC));
    *(float *)(((int)stk + 52)) = (t9 * u10);
    u11 = *(float *)((a4 + 0x10));
    *(float *)(((int)stk + 56)) = (t9 * u11);
    u12 = *(float *)((a4 + 0x14));
    *(float *)(((int)stk + 60)) = (t9 * u12);
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    *(float *)(((int)stk + 64)) = 1.0f;
    t13 = nlMultiMatrix(((int)stk + 4));
    return t13;
}

int FUN_0c041e20(void)
{
    int t1;
    int t2;
    int t3;
    int t8;

    FUN_0c03b81e(0x1);
    t1 = *(int *)0xC1EE238;
    t2 = *(int *)(((t1 << 2) + 0xC0A2164));
    if (t2 == 0) {
        *(unsigned int *)0xC1EE238 = 0x0;
    } else {
        t3 = ((int (*)(int))(t2))(0xC1EE238);
    }
    FUN_0c03c10e();
    FUN_0c03b600();
    FUN_0c03b788();
    t8 = *(int *)0xC2A1214;
    if (t8 == 1) {
        return FUN_0c060484();
    }
    return FUN_0c06047c();
}
