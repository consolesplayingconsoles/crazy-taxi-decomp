/* Straight-line functions with calls and guards (batch gen_cx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0108ea(int, int);
int FUN_0c0113b4(int);
int lcdFillData(int, int);
float FUN_0c087ed4(void);
int memmove(int, int, int);
int menuCursor(int, int, int);
int menuEnterStep(void);
int menuOpenStep(void);
int menuPutFrame(void);
int menuPutHelpBar(int, float, float);
int menuPutSprites(int, int, int, int);
int pdGetPeripheral(int);
int putLevelCTFontAssist(int, int, int, int, int);
int vibIsReady(void);
int vmsfs_c_dispatch(int);
int vmsfs_c_fiber7(void);
int FUN_0c156934(int a4, int a5, int a6, int a7);
float FUN_0c087e40(void);
int FUN_0c0103aa(int a4, int a5);
int FUN_0c087db4(int a4, int a5, int a6);
int menuOptionHandler(void);
int Exec_LCD(void);
int FUN_0c010a98(void);
int FUN_0c0115ba(void);

int vmsfs_c_fiber7(void)
{
    return vmsfs_c_dispatch(0x7);
}

int FUN_0c156934(int a4, int a5, int a6, int a7)
{
    int stk[13] = {0};

    *(unsigned short *)(((int)stk + 8)) = a4;
    if ((int)a6 >= 0) {
        return ((int (*)(int, int, int, int))(0xC15698A))(a4, a5, (a5 + a6), a7);
    }
    return ((int (*)(int, int, int, int))(0xC156980))(a4, a5, (a5 + a6), a7);
}

float FUN_0c087e40(void)
{
    float t0;
    int t1;
    int t2;
    float u10;
    int stk[3] = {0};

    t0 = FUN_0c087ed4();
    *(float *)(((int)stk + 4)) = t0;
    t1 = *(int *)((((int)stk + 4) + 0x0));
    if ((t1 & 0x7F800000) == 0x7F800000) {
        t2 = *(int *)((((int)stk + 4) + 0x0));
        if ((t2 & 0x7FFFFF) != 0) {
            *(unsigned int *)0xC2B7BA0 = 0x44D;
        } else {
            *(unsigned int *)0xC2B7BA0 = 0x44C;
        }
    }
    u10 = *(float *)(((int)stk + 4));
    return u10;
}

int FUN_0c0103aa(int a4, int a5)
{
    int t9;
    int t1;
    int t6;
    int t3;

    *(unsigned int *)0xAC00F714 = 0x1;
    FUN_0c0108ea(a4, a5);
    t9 = a4;
    if (a4 == 0) {
        t1 = *(signed char *)((a5 + 0x0));
        t6 = a4;
        if ((unsigned char)t1 != 41) {
            FUN_0c0113b4(a5);
            t3 = ((int (*)(void))(0xC01138C))();
            t6 = 0xFF;
        }
        t9 = t6;
    }
    return t9;
}

int FUN_0c087db4(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t13;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t20;

    t0 = *(int *)((a6 + 0x0));
    if (t0 == 1) {
        t1 = *(int *)((a6 + 0x4));
        t2 = memmove(t1, a4, a5);
        t3 = *(int *)((a6 + 0x4));
        *(unsigned int *)((a6 + 0x4)) = (t3 + a5);
        t4 = *(int *)((a6 + 0x8));
        *(unsigned int *)((a6 + 0x8)) = (t4 + a5);
        t20 = t2;
    } else {
        t13 = t0;
        if ((int)a5 > 0) {
            t5 = a4;
            t6 = 0x0;
            for (;;) {
                t7 = *(int *)((a6 + 0x4));
                t8 = *(int *)((a6 + 0xC));
                t9 = *(signed char *)((t5 + 0x0));
                t5 = (t5 + 0x1);
                t10 = ((int (*)(int, int, int))(t8))(t9, t7, a6);
                if (t10 != -1) {
                    t11 = *(int *)((a6 + 0x8));
                    t6 = (t6 + 0x1);
                    *(unsigned int *)((a6 + 0x8)) = (t11 + 0x1);
                    
                    continue;
                }
                break;
            }
            t13 = t10;
        }
        t20 = t13;
    }
    return t20;
}

int menuOptionHandler(void)
{
    int t1;
    int t2;
    int t5;
    int t7;
    int t8;
    int t9;
    int t11;
    int t10;
    int t13;
    int t14;

    menuOpenStep();
    t1 = vibIsReady();
    t2 = 0x0;
    if (t1 == 0) {
        t2 = 0x80;
    }
    menuCursor(0x0, 0x9, t2);
    menuPutFrame();
    t5 = *(int *)0xC2A1AD8;
    menuPutSprites(0xC0A0840, 0xC2A1A84, (t5 + 0x8), 0x18);
    t7 = *(int *)0xC2A11D8;
    t8 = *(int *)0xC2A1AD8;
    t9 = *(int *)((((t7 << 2) + 0xC2A11DC) + 0x0));
    t11 = 0x0;
    if (t9 != 6) {
        t10 = 0x2;
        if (t9 == 8) {
            t10 = 0x0;
        }
        t11 = t10;
    }
    menuPutHelpBar(t11, (float)(-t8), 416.0f);
    t13 = *(int *)0xC2A11D8;
    t14 = *(int *)((((t13 << 2) + 0xC2A11DC) + 0x0));
    putLevelCTFontAssist(0x817, 0xC09F100, 0x9, t14, t2);
    return menuEnterStep();
}

int Exec_LCD(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t8;
    int t9;

    t0 = *(int *)0xC2A9FF0;
    if (t0 == 0) {
        t1 = *(int *)0xC2A9FA8;
        if ((0x2 & t1) != 2) {
            if ((0x4 & t1) == 4) {
                return (0x4 & t1);
            }
            t2 = *(int *)0xC132320;
            t3 = *(int *)0xC132324;
            t4 = pdGetPeripheral((((t2 << 1) + (t2 << 2)) + t3));
            t5 = *(int *)((t4 + 0x30));
            t6 = *(int *)((t5 + 0x0));
            if ((t6 & 4) != 0) {
                lcdFillData(0x0, (((t2 << 1) + (t2 << 2)) + t3));
                t8 = *(int *)0xC2A9FAC;
                t9 = (int)((int)t8 % (int)0x4);
                if ((int)t9 < (int)0x2) {
                    return ((int (*)(int, int, int, int, int))(0xC06052E))(0xC0D2D18, 0x0, 0x0, 0x1, (((t2 << 1) + (t2 << 2)) + t3));
                }
                return ((int (*)(int, int, int, int, int))(0xC06052E))(0xC0D2DDC, 0x0, 0x0, 0x1, (((t2 << 1) + (t2 << 2)) + t3));
            }
            return ((int (*)(int))(0xC06053C))(t4);
        }
        return (0x2 & t1);
    }
    return 0;
}

int FUN_0c010a98(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    t0 = ((int (*)(int, int, int))(0xC010A10))(0x8C00F400, 0x0, 0x1C0);
    t1 = ((int (*)(int, int, int))(0xC010A10))(0xC010000, 0x0, 0x1000);
    t2 = ((int (*)(int, int, int))(0xC0109F6))(0x8C00FA20, 0xC010D20, 0x8);
    *(unsigned int *)0x8C00FA2C = 0x8C00FA30;
    *(unsigned int *)0xC010F04 = 0x8C00FA20;
    *(unsigned int *)0xC010F08 = 0x8C00FA3C;
    t3 = ((int (*)(int, int, int))(0xC0109F6))(0x8C00F500, 0xC010D40, 0x8);
    t4 = ((int (*)(int, int, int))(0xC0109F6))(0x8C00F800, 0xC010D40, 0x8);
    t5 = ((int (*)(int, int, int))(0xC0109F6))(0x8C00FA00, 0xC010D40, 0x8);
    *(unsigned int *)0x8C00F514 = 0xC010D60;
    *(unsigned int *)0x8C00F814 = 0xC010D60;
    *(unsigned int *)0x8C00FA14 = 0xC010D66;
    t6 = 0x8C00F5C0;
    t7 = 0x0;
    for (;;) {
        t7 = (t7 + 0x1);
        *(unsigned int *)((t6 + 0x0)) = 0xC010154;
        t6 = (t6 + 0x4);
        if ((int)t7 >= (int)0x42) {
            break;
        }
    }
    return 0xC010B80;
}

int FUN_0c0115ba(void)
{
    int t0;
    int t1;
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
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
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

    t0 = 0x0;
    for (;;) {
        t1 = ((int (*)(int, int))(0xC011580))(t0, 0x0);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x100) {
            break;
        }
    }
    t2 = ((int (*)(int, int))(0xC011580))(0x0, 0xEC);
    t3 = ((int (*)(int, int))(0xC011580))(0x1, 0x60);
    t4 = ((int (*)(int, int))(0xC011580))(0x2, 0xED);
    t5 = ((int (*)(int, int))(0xC011580))(0x3, 0x61);
    t6 = ((int (*)(int, int))(0xC011580))(0x4, 0xE7);
    t7 = ((int (*)(int, int))(0xC011580))(0x5, 0x60);
    t8 = ((int (*)(int, int))(0xC011580))(0x6, 0xC7);
    t9 = ((int (*)(int, int))(0xC011580))(0x7, 0x81);
    t10 = ((int (*)(int, int))(0xC011580))(0x8, 0xD1);
    t11 = ((int (*)(int, int))(0xC011580))(0x9, 0xC);
    t12 = ((int (*)(int, int))(0xC011580))(0xA, 0x39);
    t13 = ((int (*)(int, int))(0xC011580))(0xB, 0x62);
    t14 = ((int (*)(int, int))(0xC011580))(0xC, 0x3B);
    t15 = ((int (*)(int, int))(0xC011580))(0xD, 0x70);
    t16 = ((int (*)(int, int))(0xC011580))(0xE, 0x3A);
    t17 = ((int (*)(int, int))(0xC011580))(0xF, 0x64);
    t18 = ((int (*)(int, int))(0xC011580))(0x10, 0x38);
    t19 = ((int (*)(int, int))(0xC011580))(0x11, 0x65);
    t20 = ((int (*)(int, int))(0xC011580))(0x12, 0x33);
    t21 = ((int (*)(int, int))(0xC011580))(0x13, 0x80);
    t22 = ((int (*)(int, int))(0xC011580))(0x14, 0xE7);
    t23 = ((int (*)(int, int))(0xC011580))(0x15, 0x70);
    t24 = ((int (*)(int, int))(0xC011580))(0x16, 0xC7);
    t25 = ((int (*)(int, int))(0xC011580))(0x17, 0x2);
    t26 = ((int (*)(int, int))(0xC011580))(0x18, 0xD1);
    t27 = ((int (*)(int, int))(0xC011580))(0x19, 0x1C);
    t28 = ((int (*)(int, int))(0xC011580))(0x1A, 0x91);
    t29 = ((int (*)(int, int))(0xC011580))(0x1B, 0xE0);
    t30 = ((int (*)(int, int))(0xC011580))(0x1C, 0x90);
    t31 = ((int (*)(int, int))(0xC011580))(0x1D, 0xE0);
    t32 = ((int (*)(int, int))(0xC011580))(0x1E, 0x80);
    t33 = ((int (*)(int, int))(0xC011580))(0x1F, 0x80);
    t34 = ((int (*)(int, int))(0xC011580))(0x64, 0x80);
    t35 = *(int *)0xAC00F728;
    *(unsigned char *)((t35 + 0x3C)) = 0x0;
    return 0x3C;
}
