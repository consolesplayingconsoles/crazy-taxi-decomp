/* Straight-line functions with calls and guards (batch gen_cg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckAreaGrid(int, int);
int FUN_0c0395a2(void);
int FUN_0c03b674(int);
int FUN_0c03bf42(void);
int FUN_0c03bf76(void);
int FUN_0c07b970(void);
int PutVM_Message(int, int, int, float, float);
int get_fat(int, int);
int nlSprPut(int);
int search_fat_dir(int, int);
int set_fat(int, int);
int vmsfs_write_retry(int, int, int);
int write_fat(int);
int write_sys(int);
int FUN_0c039610(void);
int FUN_0c03e6a4(void);
void FUN_0c03271e(int a4);
int write_dir_all(int a4);

int FUN_0c039610(void)
{
    int t1;
    int stk[22] = {0};

    FUN_0c0395a2();
    *(unsigned int *)(((int)stk + 4)) = 0x7A;
    *(float *)(((int)stk + 8)) = 500.0f;
    *(float *)(((int)stk + 12)) = 128.0f;
    *(float *)(((int)stk + 16)) = 0.299999982f;
    *(float *)(((int)stk + 24)) = 1.0f;
    *(float *)(((int)stk + 20)) = 1.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 40)) = 1.0f;
    *(float *)(((int)stk + 36)) = 1.0f;
    *(unsigned int *)(((int)stk + 44)) = 0x0;
    *(float *)(((int)stk + 48)) = 1.0f;
    *(unsigned int *)(((int)stk + 56)) = 0x725;
    *(unsigned int *)(((int)stk + 52)) = 0x0;
    t1 = nlSprPut(((int)stk + 4));
    return t1;
}


void FUN_0c03271e(int a4)
{
    int t0;
    int t1;
    float u2;
    float u3;
    int t5;
    int t6;
    float u9;
    float u10;
    float u11;
    float u12;
    int t13;
    int t14;
    float u15;
    float u16;
    int t18;
    int t19;
    int t20;
    int stk[19] = {0};

    t0 = *(int *)0xC0ED43C;
    t1 = CheckAreaGrid(a4, t0);
    *(unsigned int *)0xC0ED43C = t1;
    u2 = *(float *)((a4 + 0x0));
    *(float *)(((int)stk + 4)) = (u2 * 9.99999975e-06f);
    u3 = *(float *)((a4 + 0x8));
    *(float *)(((int)stk + 8)) = (-(u3 * 9.99999975e-06f));
    *(float *)(((int)stk + 12)) = -0.5f;
    FUN_0c07b970();
    t5 = 0x0;
    do {
        t6 = *(int *)0xC0ED43C;
        u9 = (-1.0f);
        u10 = 1.99999995e-05f;
        if (t5 == t6) {
            u9 = -0.5f;
            u10 = 9.99999975e-06f;
        }
        u11 = *(float *)(((((((t5 << 2) << 2) << 1) + 0xC08DBA8) + 0x18) + 0x0));
        *(float *)(((int)stk + 16)) = (u11 * u10);
        u12 = *(float *)(((((((t5 << 2) << 2) << 1) + 0xC08DBA8) + 0x18) + 0x4));
        *(float *)(((int)stk + 20)) = (-(u12 * u10));
        *(float *)(((int)stk + 24)) = u9;
        t13 = 0x0;
        t14 = ((((t5 << 2) << 2) << 1) + 0xC08DBA8);
        do {
            u15 = *(float *)((t14 + 0x0));
            *(float *)(((int)stk + 4)) = (u15 * u10);
            u16 = *(float *)((t14 + 0x4));
            *(float *)(((int)stk + 8)) = (-(u16 * u10));
            *(float *)(((int)stk + 12)) = u9;
            FUN_0c07b970();
            t18 = *(int *)((((int)stk + 4) + 0x8));
            *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x8)) = t18;
            t19 = *(int *)((((int)stk + 4) + 0x4));
            *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x4)) = t19;
            t20 = *(int *)((((int)stk + 4) + 0x0));
            *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = t20;
            t13 = (t13 + 0x1);
            t14 = (t14 + 0x8);
        } while ((int)t13 < (int)0x4);
        t5 = (t5 + 0x1);
    } while ((int)t5 < (int)0x19);
}

int write_dir_all(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
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
    int t25;
    int t26;
    int t27;
    int t29;
    int t32;
    int t33;
    int t34;
    int t36;
    int stk[13] = {0};

    t0 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
    t1 = *(short *)((t0 + 0x14));
    *(unsigned short *)(((int)stk + 8)) = t1;
    t2 = *(short *)(((int)stk + 8));
    t3 = *(int *)((t0 + 0x18));
    if ((int)t3 > 0) {
        t4 = 0x0;
        t5 = t2;
        for (;;) {
            *(unsigned int *)(((int)stk + 4)) = (unsigned short)t5;
            t6 = get_fat(a4, (unsigned short)t5);
            t7 = *(int *)(((int)stk + 4));
            t5 = t6;
            set_fat(a4, t7);
            if ((unsigned short)t5 != 0xFFFA) {
                if ((unsigned short)t5 != 0xFFFC) {
                    t4 = (t4 + 0x1);
                    if ((int)t4 >= (int)t3) break;
                    continue;
                }
                break;
            }
            break;
        }
    }
    t12 = *(short *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 12)) = (t3 - 1);
    t13 = 0x0;
    t14 = t12;
    for (;;) {
        if ((int)t13 >= (int)t3) {
            t15 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
            t16 = *(short *)(((int)stk + 8));
            t17 = *(int *)((t15 + 0x14));
            if ((unsigned short)t16 != t17) {
                t18 = *(short *)(((int)stk + 8));
                t19 = *(int *)0xC2EE98C;
                t20 = *(int *)((t19 + 0x10));
                t21 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                t22 = ((int (*)(int, int, int))(t20))(t21, 0x4A, t18);
                write_fat(a4);
                write_sys(a4);
                return 0x0;
            }
            return 0x0;
        }
        *(unsigned int *)(((int)stk + 4)) = ((t13 << 8) << 1);
        for (;;) {
            t25 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x28));
            t26 = *(int *)(((int)stk + 4));
            t27 = vmsfs_write_retry(a4, (unsigned short)t14, (t25 + t26));
            if (t27 != 0) {
                if (t27 == 0xFFFFFF01) {
                    return t27;
                }
                set_fat(a4, (unsigned short)t14);
                t29 = search_fat_dir(a4, 0xFFFC);
                t14 = t29;
                continue;
            }
            break;
        }
        if (t13 == 0) {
            *(unsigned short *)(((int)stk + 8)) = t14;
        }
        *(unsigned int *)(((int)stk + 16)) = (unsigned short)t14;
        set_fat(a4, (unsigned short)t14);
        t32 = *(int *)(((int)stk + 12));
        if (t13 != t32) {
            t33 = search_fat_dir(a4, 0xFFFC);
            *(unsigned short *)(((int)stk + 4)) = t33;
            t34 = *(int *)(((int)stk + 16));
            set_fat(a4, t34);
            t36 = *(short *)(((int)stk + 4));
            t14 = t36;
        }
        t13 = (t13 + 0x1);
    }
}
