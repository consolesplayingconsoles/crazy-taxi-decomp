/* Straight-line functions with calls and guards (batch gen_fw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c087e40(void);
extern float _builtin_sqrtf(float);
int ndPuru2Start(int, int, int);
int nlRand(void);
float nlRandom(void);
float nlScalor(int);
int set_event(int, int);
float ADX_GetCoefficient(int a4, int a5, int a6, int a7);
int SetEffect(int a4, int a5, int a6);

float ADX_GetCoefficient(int a4, int a5, int a6, int a7)
{
    float t1;
    float u2;
    float u3;

    *(volatile float *)0xC167E30;
    t1 = FUN_0c087e40();
    u2 = *(float *)0xC167E38;
    *(unsigned short *)((a6 + 0x0)) = (int)((((_builtin_sqrtf((1.0f + 1.0f)) - t1) - _builtin_sqrtf((((_builtin_sqrtf((1.0f + 1.0f)) - t1) + (_builtin_sqrtf((1.0f + 1.0f)) + (-1.0f))) * ((_builtin_sqrtf((1.0f + 1.0f)) - t1) - (_builtin_sqrtf((1.0f + 1.0f)) + (-1.0f)))))) / (_builtin_sqrtf((1.0f + 1.0f)) + (-1.0f))) * u2);
    u3 = *(float *)0xC167E3C;
    *(unsigned short *)((a7 + 0x0)) = (int)(-(((((_builtin_sqrtf((1.0f + 1.0f)) - t1) - _builtin_sqrtf((((_builtin_sqrtf((1.0f + 1.0f)) - t1) + (_builtin_sqrtf((1.0f + 1.0f)) + (-1.0f))) * ((_builtin_sqrtf((1.0f + 1.0f)) - t1) - (_builtin_sqrtf((1.0f + 1.0f)) + (-1.0f)))))) / (_builtin_sqrtf((1.0f + 1.0f)) + (-1.0f))) * (((_builtin_sqrtf((1.0f + 1.0f)) - t1) - _builtin_sqrtf((((_builtin_sqrtf((1.0f + 1.0f)) - t1) + (_builtin_sqrtf((1.0f + 1.0f)) + (-1.0f))) * ((_builtin_sqrtf((1.0f + 1.0f)) - t1) - (_builtin_sqrtf((1.0f + 1.0f)) + (-1.0f)))))) / (_builtin_sqrtf((1.0f + 1.0f)) + (-1.0f)))) * u3));
    return u3;
}

int SetEffect(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t52;
    int t3;
    int t4;
    int t5;
    float u6;
    int t7;
    int t8;
    int t9;
    float u10;
    float t11;
    float u12;
    int t13;
    int t28;
    float t14;
    float u15;
    float u16;
    float t17;
    float u18;
    float t19;
    float u20;
    float u21;
    float u22;
    float u23;
    float t24;
    float u25;
    int t26;
    int t27;
    float u34;
    int t35;
    int t36;
    float u43;
    int t44;
    int t45;
    int t46;
    int t37;

    t0 = 0xC03663C;
    if (a6 == 3) {
        t0 = 0xC036806;
    }
    t2 = set_event(0x3C, t0);
    t52 = t2;
    if (t2 != 0) {
        t3 = *(int *)((a4 + 0x8));
        *(unsigned int *)(((t2 + 0x14) + 0x8)) = t3;
        t4 = *(int *)((a4 + 0x4));
        *(unsigned int *)(((t2 + 0x14) + 0x4)) = t4;
        t5 = *(int *)((a4 + 0x0));
        *(unsigned int *)(((t2 + 0x14) + 0x0)) = t5;
        u6 = *(float *)((t2 + 0x18));
        *(float *)((t2 + 0x18)) = (u6 - (1.0f + 1.0f));
        t7 = *(int *)((a5 + 0x8));
        *(unsigned int *)(((t2 + 0x20) + 0x8)) = t7;
        t8 = *(int *)((a5 + 0x4));
        *(unsigned int *)(((t2 + 0x20) + 0x4)) = t8;
        t9 = *(int *)((a5 + 0x0));
        *(unsigned int *)(((t2 + 0x20) + 0x0)) = t9;
        u10 = *(float *)0xC036AA8;
        t11 = nlRandom();
        u12 = u10;
        u12 = u12 + u10 * t11;
        *(float *)((t2 + 0x2C)) = u12;
        t13 = nlRand();
        *(unsigned int *)((t2 + 0x34)) = (t13 & 0x3);
        *(unsigned int *)((t2 + 0x30)) = 0x1E;
        *(unsigned int *)((t2 + 0x38)) = a6;
        if (a6 != 1) {
            if (a6 != 2) {
                t28 = a6;
                if (a6 != 3) {
                } else {
                    t14 = nlScalor(a5);
                    u15 = *(float *)0xC036AC8;
                    u16 = *(float *)0xC036ACC;
                    t17 = nlRandom();
                    u18 = *(float *)(((0x20 + t2) + 0x0));
                    *(float *)(((0x20 + t2) + 0x0)) = (u18 + (t17 + u16));
                    t19 = nlRandom();
                    u20 = *(float *)0xC036AD0;
                    u21 = *(float *)0xC036AD4;
                    u22 = t19;
                    u22 = u22 + u20 * (t14 + u15);
                    u23 = *(float *)(((0x24 + t2) + 0x0));
                    *(float *)(((0x24 + t2) + 0x0)) = (u23 + (u22 + u21));
                    t24 = nlRandom();
                    u25 = *(float *)(((0x28 + t2) + 0x0));
                    *(float *)(((0x28 + t2) + 0x0)) = (u25 + (t24 + u16));
                    *(unsigned int *)((t2 + 0x30)) = 0x14;
                    t26 = *(signed char *)0xC1EE278;
                    t27 = ndPuru2Start((unsigned char)t26, 0x10000, 0x2);
                    t28 = t27;
                }
                t37 = t28;
            } else {
                u34 = *(float *)((t2 + 0x2C));
                *(float *)((t2 + 0x2C)) = (u34 * (1.0f + 1.0f));
                t35 = *(signed char *)0xC1EE278;
                t36 = ndPuru2Start((unsigned char)t35, 0x10000, 0x1);
                t37 = t36;
            }
            t46 = t37;
        } else {
            u43 = *(float *)((t2 + 0x2C));
            *(float *)((t2 + 0x2C)) = (u43 * 1.5f);
            t44 = *(signed char *)0xC1EE278;
            t45 = ndPuru2Start((unsigned char)t44, 0x10000, 0x0);
            t46 = t45;
        }
        t52 = t46;
    }
    return t52;
}
