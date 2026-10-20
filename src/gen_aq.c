/* Straight-line functions with calls and guards (batch gen_aq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXSJD_SetInSj(int, int);
int ADXSJD_Start(void);
int gdFsGetStatG(void);
int mwRnaGetTransSw(int);
int gdFsExecServerG(void);
int adxt_start_sj(int a4, int a5);
int mwlRnaAddRdPos(int a4);

int gdFsExecServerG(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = *(int *)0xC177A8C;
    t1 = *(int *)((t0 + 0xC));
    t2 = *(int *)((t1 + 0x40));
    t3 = ((int (*)(void))(t2))();
    t4 = *(int *)0xC177A8C;
    t5 = *(int *)((t4 + 0x1C));
    if (t5 != 0) {
        return gdFsGetStatG();
    }
    return t3;
}

int adxt_start_sj(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t8;

    t0 = 0x0;
    for (;;) {
        t1 = *(signed char *)((a4 + 0x3));
        if ((int)t0 >= (int)t1) break;
        t2 = *(int *)((((t0 << 2) + (a4 + 0x18)) + 0x0));
        t3 = *(int *)((t2 + 0x0));
        t4 = *(int *)((t3 + 0x14));
        t5 = ((int (*)(int, int))(t4))(t2, a5);
        t0 = (t0 + 0x1);
    }
    t6 = *(int *)((a4 + 0x4));
    ADXSJD_SetInSj(t6, a5);
    *(unsigned int *)((a4 + 0x14)) = a5;
    t8 = *(int *)((a4 + 0x4));
    ADXSJD_Start();
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned int *)((a4 + 0x4C)) = 0x0;
    *(unsigned char *)((a4 + 0x71)) = 0x0;
    return 0x71;
}

int mwlRnaAddRdPos(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t9;
    int t8;
    int t11;
    int t14;
    int t15;
    int t12;
    int t16;
    int t17;
    int t18;
    int t21;

    t0 = *(int *)((a4 + 0x38));
    t1 = *(int *)((a4 + 0x30));
    t2 = *(int *)((t0 + 0x0));
    t3 = *(int *)((t2 + 0x20));
    t4 = ((int (*)(int, int))(t3))(t0, 0x0);
    t5 = *(int *)((a4 + 0x8));
    t6 = (int)((int)0x20 / (int)t5);
    t7 = (int)((int)t4 / (int)((t6 << 2) << 1));
    *(unsigned int *)((a4 + 0x30)) = (t7 * ((t6 << 2) << 1));
    t9 = ((t7 * ((t6 << 2) << 1)) - t1);
    if ((int)((t7 * ((t6 << 2) << 1)) - t1) < 0) {
        t8 = *(int *)((a4 + 0x28));
        t9 = (((t7 * ((t6 << 2) << 1)) - t1) + t8);
    }
    t11 = *(int *)((a4 + 0x34));
    t14 = (t11 - t9);
    t15 = t9;
    if ((int)(t11 - t9) < 0) {
        t12 = *(int *)((a4 + 0x2C));
        *(unsigned char *)((a4 + 0x4)) = 0x1;
        t14 = 0x0;
        t15 = (t12 - t1);
    }
    t16 = *(signed char *)((a4 + 0x4));
    if ((unsigned char)t16 == 1) {
        t17 = mwRnaGetTransSw(a4);
        if (t17 == 1) {
            t18 = *(int *)((a4 + 0x30));
            *(unsigned int *)((a4 + 0x2C)) = t18;
            *(unsigned char *)((a4 + 0x4)) = 0x0;
        }
    }
    *(unsigned int *)((a4 + 0x34)) = t14;
    t21 = *(int *)((a4 + 0x48));
    *(unsigned int *)((a4 + 0x48)) = (t21 + t15);
    return 0x48;
}

