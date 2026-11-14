/* Straight-line functions with calls and guards (batch gen_dl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int buIsFormat(void);
int direntry(int, int);
int get_vmstime(int, int);
int set_file_info(int, int);
int vmsfs_fclose(int, int);
int vmsfs_fgetsize(int, int);
int vmsfs_fopen(int, int, int);
int vmsfs_fread1(int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
float nlSprPutPosSet(int a4, int a5, int a6, float f4, float f5, float f6, float f7);
int vmsfs_load_file(int a4, int a5, int a6, int a7);
int vmsfs_findnext_ex(int a4, int a5, int a6);

float nlSprPutPosSet(int a4, int a5, int a6, float f4, float f5, float f6, float f7)
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
    float u13;
    float u14;
    int t9;
    int t16;
    int t17;
    int t18;
    int t19;
    float u22;
    float u23;
    float u24;
    float u25;
    float u26;
    float u27;
    float u29;
    float u30;
    float u20;
    float u21;
    int stk[12] = {0};

    t0 = *(int *)0xC0D68BC;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x1C)) = t0;
    t1 = *(int *)0xC0D68B8;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x18)) = t1;
    t2 = *(int *)0xC0D68B4;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x14)) = t2;
    t3 = *(int *)0xC0D68B0;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x10)) = t3;
    t4 = *(int *)0xC0D68AC;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0xC)) = t4;
    t5 = *(int *)0xC0D68A8;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = t5;
    t6 = *(int *)0xC0D68A4;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = t6;
    t7 = *(int *)0xC0D68A0;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t7;
    t8 = *(int *)((a4 + 0x34));
    u13 = 1.0f;
    u14 = 1.0f;
    if ((t8 & 15) == 0) {
    } else {
        *(unsigned int *)(((int)stk + 4)) = t8;
        t9 = *(int *)(((int)stk + 4));
        u13 = (float)(t8 & 0x3);
        u14 = (float)(((t9 >> 1) >> 1) & 0x3);
    }
    t16 = 0x4;
    t17 = a5;
    t18 = a6;
    t19 = (((int)stk + 4) + 0x4);
    for (;;) {
        u22 = *(float *)((t19 + 0x0));
        t19 = (t19 + 0x4);
        u23 = *(float *)((t19 + 0x0));
        t19 = (t19 + 0x4);
        u24 = *(float *)((a4 + 0x4));
        u25 = *(float *)((a4 + 0x8));
        u26 = u24;
        u27 = u25;
        if ((u22 - u13) != 0.0f) {
            u21 = (f4 * f6);
            u21 = (u21 * (u22 - u13));
            u20 = (u22 - u13);
            u21 = (-u21);
            u26 = (u24 + u20 * (f4 * f7));
            u27 = (u25 + u21);
        }
        u29 = u26;
        u30 = u27;
        if ((u23 - u14) != 0.0f) {
            u20 = (u23 - u14);
            u29 = (u26 + u20 * (f5 * f6));
            u30 = (u27 + u20 * (f5 * f7));
        }
        t16 = (t16 - 1);
        *(float *)((t17 + 0x0)) = u29;
        *(float *)((t18 + 0x0)) = u30;
        t18 = (t18 + 0x4);
        t17 = (t17 + 0x4);
        if (t16 == 0) {
            break;
        }
    }
    return u20;
}

int vmsfs_load_file(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t26;
    int t2;
    int t3;
    int t25;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t19;
    int t33;
    int t34;
    int t56;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t50;
    int t57;
    int stk[10] = {0};

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    if (a7 == 0) {
        t0 = *(int *)(((int)stk + 8));
        t1 = vmsfs_fgetsize(a4, t0);
        t26 = t1;
        if ((int)t1 < 0) {
        } else {
            t2 = *(int *)(((int)stk + 8));
            t3 = vmsfs_fopen(a4, t2, ((int)stk + 4));
            t25 = t3;
            if ((int)t3 >= 0) {
                t4 = *(int *)(((int)stk + 12));
                *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x30)) = 0x1;
                *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x34)) = t1;
                if ((unsigned int)0x0 < (unsigned int)t1) {
                    t5 = 0x0;
                    t6 = t4;
                    for (;;) {
                        t7 = *(int *)(((int)stk + 4));
                        t8 = vmsfs_fread1(t7, t6);
                        if ((int)t8 >= 0) {
                            t5 = (t5 + 0x1);
                            t6 = (t6 + 0x200);
                            if ((unsigned int)t5 >= (unsigned int)t1) {
                                break;
                            }
                            continue;
                        }
                        t9 = *(int *)(((int)stk + 4));
                        vmsfs_fclose(t9, 0x0);
                        return t8;
                    }
                }
                t19 = *(int *)(((int)stk + 4));
                vmsfs_fclose(t19, 0x0);
                t25 = 0x0;
            }
            t26 = t25;
        }
        t57 = t26;
    } else {
        t33 = *(int *)(((int)stk + 8));
        t34 = vmsfs_fopen(a4, t33, ((int)stk + 4));
        t56 = t34;
        if ((int)t34 >= 0) {
            t35 = *(int *)(((int)stk + 12));
            *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x30)) = 0x1;
            *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x34)) = a7;
            if ((unsigned int)0x0 < (unsigned int)a7) {
                t36 = 0x0;
                t37 = t35;
                for (;;) {
                    t38 = *(int *)(((int)stk + 4));
                    t39 = vmsfs_fread1(t38, t37);
                    if ((int)t39 >= 0) {
                        t36 = (t36 + 0x1);
                        t37 = (t37 + 0x200);
                        if ((unsigned int)t36 >= (unsigned int)a7) {
                            break;
                        }
                        continue;
                    }
                    t40 = *(int *)(((int)stk + 4));
                    vmsfs_fclose(t40, 0x0);
                    return t39;
                }
            }
            t50 = *(int *)(((int)stk + 4));
            vmsfs_fclose(t50, 0x0);
            t56 = 0x0;
        }
        t57 = t56;
    }
    return t57;
}

