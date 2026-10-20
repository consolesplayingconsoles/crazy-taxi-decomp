/* Straight-line functions with calls and guards (batch gen_m): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0813e0(int, int, int);
int syBtCfgSet(int);
int syCfgConvLang(int);
int syCfgGetDefaultLanguage(int);
float nlLog(float f4);
int syCfgGetLanguage(int a4);
int FUN_0c172f1e(int a4);
int ADXB_CheckAu(int a4);
int ADXB_CheckWav(int a4);

float nlLog(float f4)
{
    float u0;
    float u3;
    float u4;
    float u1;
    float u2;
    float u7;
    float u8;
    float u5;
    float u6;
    int t9;
    float u10;
    float u11;
    float u12;
    float u13;

    if (!(0.0f > f4)) {
        if (f4 == 0.0f) {
            return 0.0f;
        }
        u0 = *(float *)0xC075EE8;
        u3 = f4;
        u4 = 0.0f;
        if (!((1.0f + 1.0f) > f4)) {
            u1 = f4;
            u2 = 0.0f;
            do {
                u1 = (u1 / (1.0f + 1.0f));
                u2 = (u2 + u0);
            } while (!((1.0f + 1.0f) > u1));
            u3 = u1;
            u4 = u2;
        }
        u7 = u3;
        u8 = u4;
        if (1.0f > u3) {
            u5 = u3;
            u6 = u4;
            do {
                u5 = (u5 * (1.0f + 1.0f));
                u6 = (u6 - u0);
            } while (1.0f > u5);
            u7 = u5;
            u8 = u6;
        }
        t9 = 0x1;
        u10 = (((u7 + (-1.0f)) / (u7 + 1.0f)) * (1.0f + 1.0f));
        u11 = u8;
        do {
            u12 = u10;
            u10 = (u10 * (((u7 + (-1.0f)) / (u7 + 1.0f)) * ((u7 + (-1.0f)) / (u7 + 1.0f))));
            u13 = u11;
            u11 = (u11 + (u12 / (float)t9));
            t9 = (t9 + 0x2);
        } while (u11 != u13);
        return u11;
    }
    return 0.0f;
}

int syCfgGetLanguage(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;
    int stk[4] = {0};

    if (a4 != 0) {
        *(unsigned int *)((a4 + 0x0)) = 0x0;
        t0 = *(int *)0xC177AC8;
        if (t0 != 0) {
            t1 = syBtCfgSet(0x0);
            if (t1 == -1) {
                return 0xFFFFFFFF;
            }
            t2 = *(signed char *)0x8C00007D;
            if ((signed char)t2 == -1) {
                syCfgGetDefaultLanguage(((int)stk + 4));
                t4 = *(int *)(((int)stk + 4));
                if (t4 == -1) {
                    *(unsigned int *)((a4 + 0x0)) = 0x1;
                } else {
                    t5 = *(int *)(((int)stk + 4));
                    t6 = syCfgConvLang(t5);
                    *(unsigned int *)((a4 + 0x0)) = t6;
                }
            } else {
                *(unsigned int *)((a4 + 0x0)) = (signed char)t2;
            }
            return 0x0;
        }
        return 0xFFFFFFFF;
    }
    return 0xFFFFFFFF;
}

int FUN_0c172f1e(int a4)
{
    int t0;
    int t1;

    t0 = FUN_0c0813e0(a4, 0xC1771F4, 0x4);
    if (t0 == 0) {
        t1 = FUN_0c0813e0((a4 + 0x8), 0xC1771FC, 0x4);
        if (t1 == 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int ADXB_CheckAu(int a4)
{
    int t0;
    int t1;

    t0 = FUN_0c0813e0(a4, 0xC177204, 0x4);
    if (t0 != 0) {
        t1 = FUN_0c0813e0(a4, 0xC17720C, 0x4);
        if (t1 == 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}

int ADXB_CheckWav(int a4)
{
    int t0;
    int t1;

    t0 = FUN_0c0813e0(a4, 0xC177218, 0x4);
    if (t0 == 0) {
        t1 = FUN_0c0813e0((a4 + 0x8), 0xC177228, 0x4);
        if (t1 == 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

