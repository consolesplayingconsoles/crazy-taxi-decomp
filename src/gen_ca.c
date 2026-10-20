/* Straight-line functions with calls and guards (batch gen_ca): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c074680(void);
extern int FUN_0c07be20();
int FUN_0c07bee0(int, int, int, float);
int FUN_0c07bf70(int, int, int, float);
extern int FUN_0c1747be();
int FUN_0c1747f4(int);
int nlLocate(int, int);
extern int nlPrintf();
int nlSetFontSize(int, int);
int FUN_0c1726f0(int a4, int a5, int a6);
int FUN_0c02a930(void);
int FUN_0c07c000(int a4, int a5);

int FUN_0c1726f0(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    int t10;

    t0 = ((int (*)(void))(FUN_0c1747be))();
    if ((int)a5 < (int)(a5 + a6)) {
        t1 = a5;
        t2 = (a5 << 2);
        do {
            t3 = *(int *)0xC2FB794;
            t4 = *(int *)((t2 + t3));
            FUN_0c1747f4(t4);
            t6 = ((int (*)(int))(FUN_0c1747be))(0xC176F70);
            t1 = (t1 + 0x1);
            t2 = (t2 + 0x4);
        } while ((int)t1 < (int)(a5 + a6));
    }
    t10 = ((int (*)(int))(FUN_0c1747be))(0xC176F68);
    return t10;
}

int FUN_0c02a930(void)
{
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

    FUN_0c074680();
    nlSetFontSize(0x10, 0x10);
    nlLocate(0x1, 0x4);
    t3 = ((int (*)(void))(nlPrintf))();
    t4 = ((int (*)(void))(nlPrintf))();
    t5 = ((int (*)(void))(nlPrintf))();
    t6 = ((int (*)(void))(nlPrintf))();
    t7 = ((int (*)(void))(nlPrintf))();
    t8 = ((int (*)(void))(nlPrintf))();
    t9 = ((int (*)(void))(nlPrintf))();
    t10 = ((int (*)(void))(nlPrintf))();
    t11 = ((int (*)(int, ...))(nlPrintf))(0xC08ACC4, 0xC08AC98, 0xC08AC6C, 0xC08AC40, 0xC08AC14, 0xC08ABE8, 0xC08ABBC, 0xC08AB90, 0xC08AB64);
    t12 = nlSetFontSize(0x8, 0x8);
    t13 = *(int *)0xC1EE330;
    if ((int)t13 > (int)0x3C) {
        *(unsigned int *)0xC1EE234 = 0x0;
        *(unsigned int *)0xC1EE238 = 0x0;
    }
    return t12;
}

int FUN_0c07c000(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    float u4;
    float u6;
    float u8;
    float u10;
    int t16;
    int t17;
    float u18;
    float u20;
    float u22;
    float u24;

    for (;;) {
        t0 = ((int (*)(int, int))(FUN_0c07be20))(a4, a5);
        t1 = ((int (*)(int))(FUN_0c07be20))(a5);
        if ((t0 & t1) != 0) break;
        if (t0 == 0) {
            if (t1 != 0) {
                t2 = t1;
                if (t0 != 0) {
                    t2 = t0;
                }
                t3 = a4;
                if (t0 == 0) {
                    t3 = a5;
                }
                if ((t2 & 0x1) != 0) {
                    u4 = *(float *)0xC2B762C;
                    FUN_0c07bee0(a4, a5, t3, u4);
                } else {
                    if ((t2 & 0x2) != 0) {
                        u6 = *(float *)0xC2B7624;
                        FUN_0c07bee0(a4, a5, t3, u6);
                    } else {
                        if ((t2 & 0x4) != 0) {
                            u8 = *(float *)0xC2B7630;
                            FUN_0c07bf70(a4, a5, t3, u8);
                        } else {
                            if ((t2 & 0x8) != 0) {
                                u10 = *(float *)0xC2B7628;
                                FUN_0c07bf70(a4, a5, t3, u10);
                            }
                        }
                    }
                }
                continue;
            }
            return 0x1;
        }
        t16 = t1;
        if (t0 != 0) {
            t16 = t0;
        }
        t17 = a4;
        if (t0 == 0) {
            t17 = a5;
        }
        if ((t16 & 0x1) != 0) {
            u18 = *(float *)0xC2B762C;
            FUN_0c07bee0(a4, a5, t17, u18);
        } else {
            if ((t16 & 0x2) != 0) {
                u20 = *(float *)0xC2B7624;
                FUN_0c07bee0(a4, a5, t17, u20);
            } else {
                if ((t16 & 0x4) != 0) {
                    u22 = *(float *)0xC2B7630;
                    FUN_0c07bf70(a4, a5, t17, u22);
                } else {
                    if ((t16 & 0x8) != 0) {
                        u24 = *(float *)0xC2B7628;
                        FUN_0c07bf70(a4, a5, t17, u24);
                    }
                }
            }
        }
    }
    return 0x0;
}
