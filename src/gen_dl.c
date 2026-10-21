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

int vmsfs_findnext_ex(int a4, int a5, int a6)
{
    int t0;
    int t108;
    int t1;
    int t3;
    int t84;
    int t4;
    int t5;
    int t72;
    int t6;
    int t60;
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
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t30;
    int t31;
    int t50;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t96;
    int t32;
    int stk[20] = {0};

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = (a4 * 0x148);
    t0 = *(signed char *)((((a4 * 0x148) + 0xC2EE990) + 0x2));
    t108 = 0xFFFFFF01;
    if (t0 != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t96 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t84 = 0xFFFFFF01;
            if (t3 != 0) {
                t4 = *(int *)(((int)stk + 8));
                t5 = *(signed char *)(((t4 + 0xC2EE990) + 0x8));
                t72 = 0xFFFFFF01;
                if (t5 == 0) {
                } else {
                    t6 = buIsFormat();
                    t60 = 0xFFFFFF03;
                    if ((int)t6 < 0) {
                    } else {
                        t7 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x18));
                        t8 = direntry(a4, t7);
                        t9 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x18));
                        t10 = t8;
                        t11 = t9;
                        for (;;) {
                            t12 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                            t13 = *(int *)((t12 + 0x30));
                            if ((int)t11 >= (int)t13) {
                                if (0x0 == 0) {
                                    return 0xFFFFFF05;
                                }
                                t14 = *(int *)(((int)stk + 4));
                                t11 = t14;
                                t15 = t13;
                                t16 = (t10 + 0x4);
                                t17 = (t11 + 0xC);
                                for (;;) {
                                    if ((unsigned int)t11 >= (unsigned int)t17) {
                                        break;
                                    }
                                    t18 = *(signed char *)((t16 + 0x0));
                                    t15 = t18;
                                    t16 = (t16 + 0x1);
                                    *(unsigned char *)((t11 + 0x0)) = t15;
                                    t11 = (t11 + 0x1);
                                }
                                t11 = ((int)stk + 4);
                                *(unsigned char *)((t17 + 0x0)) = 0x0;
                                t11 = (t11 + 0x8);
                                set_file_info(t10, t11);
                                t20 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                                t21 = *(int *)((t20 + 0x2C));
                                t22 = *(int *)(((int)stk + 52));
                                *(unsigned int *)((a6 + 0x0)) = (t22 * (t21 + 0x1));
                                t23 = *(int *)(((int)stk + 52));
                                *(unsigned short *)((a6 + 0x4)) = t23;
                                t24 = *(signed char *)(((int)stk + 16));
                                *(unsigned char *)((a6 + 0x6)) = t24;
                                t25 = *(signed char *)(((int)stk + 22));
                                *(unsigned char *)((a6 + 0x7)) = t25;
                                t26 = *(short *)(((int)stk + 20));
                                *(unsigned short *)((a6 + 0x8)) = t26;
                                t27 = *(int *)(((int)stk + 16));
                                if (t27 == 0xCC) {
                                    t11 = ((int)stk + 4);
                                    t10 = a6;
                                    *(unsigned char *)((a6 + 0x6)) = 0x1;
                                    t11 = (t11 + 0x28);
                                    t10 = (t10 + 0xA);
                                    get_vmstime(t10, t11);
                                    return 0x0;
                                }
                                t11 = ((int)stk + 4);
                                t10 = a6;
                                *(unsigned char *)((a6 + 0x6)) = 0x0;
                                t11 = (t11 + 0x28);
                                t10 = (t10 + 0xA);
                                get_vmstime(t10, t11);
                                return 0x0;
                            }
                            t30 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x18));
                            *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x18)) = (t30 + 0x1);
                            t31 = *(signed char *)((t10 + 0x0));
                            if ((unsigned char)t31 != 51) {
                                if ((unsigned char)t31 == 0xCC) {
                                    t32 = 0xCC; break;
                                }
                                t10 = (t10 + 0x20);
                                t11 = (t11 + 0x1);
                                continue;
                            }
                            t32 = (t30 + 0x1); break;
                        }
                        t50 = 0xFFFFFF05;
                        if (0x1 == 0) {
                        } else {
                            t33 = *(int *)(((int)stk + 4));
                            t34 = t32;
                            t35 = t33;
                            t36 = (t10 + 0x4);
                            for (;;) {
                                if ((unsigned int)t35 >= (unsigned int)(t33 + 0xC)) {
                                    break;
                                }
                                t37 = *(signed char *)((t36 + 0x0));
                                t34 = t37;
                                t36 = (t36 + 0x1);
                                *(unsigned char *)((t35 + 0x0)) = t34;
                                t35 = (t35 + 0x1);
                            }
                            *(unsigned char *)(((t33 + 0xC) + 0x0)) = 0x0;
                            set_file_info(t10, (((int)stk + 4) + 0x8));
                            t39 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                            t40 = *(int *)((t39 + 0x2C));
                            t41 = *(int *)(((int)stk + 52));
                            *(unsigned int *)((a6 + 0x0)) = (t41 * (t40 + 0x1));
                            t42 = *(int *)(((int)stk + 52));
                            *(unsigned short *)((a6 + 0x4)) = t42;
                            t43 = *(signed char *)(((int)stk + 16));
                            *(unsigned char *)((a6 + 0x6)) = t43;
                            t44 = *(signed char *)(((int)stk + 22));
                            *(unsigned char *)((a6 + 0x7)) = t44;
                            t45 = *(short *)(((int)stk + 20));
                            *(unsigned short *)((a6 + 0x8)) = t45;
                            t46 = *(int *)(((int)stk + 16));
                            t47 = 0x0;
                            if (t46 == 0xCC) {
                                t47 = 0x1;
                            }
                            *(unsigned char *)((a6 + 0x6)) = t47;
                            get_vmstime((a6 + 0xA), (((int)stk + 4) + 0x28));
                            t50 = 0x0;
                        }
                        t60 = t50;
                    }
                    t72 = t60;
                }
                t84 = t72;
            }
            t96 = t84;
        }
        t108 = t96;
    }
    return t108;
}
