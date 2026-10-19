/* Draft: generated C that the check did not accept (did not compile). Not proven equivalent. */

int buIsFormat(void);
int check_isopen(void);
int clear_file(int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_dir(int);
int write_fat(int);

int vmsfs_fdelete_ex(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t55;
    int t3;
    int t5;
    int t51;
    int t6;
    int t49;
    int t7;
    int t47;
    int t8;
    int t9;
    int t10;
    int t11;
    int t20;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t21;
    int t25;
    int t22;
    int t24;
    int t23;
    int t35;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t36;
    int t40;
    int t37;
    int t39;
    int t38;
    int t53;
    int t42;

    *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x30)) = 0x1;
    t0 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x4));
    t1 = *(int *)((((((t0 << 2) + t0) << 2) << 2) + 0xC178524));
    *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x34)) = t1;
    t2 = *(signed char *)((((a4 * 0x148) + 0xC2EE990) + 0x2));
    t55 = 0xFFFFFF01;
    if (t2 != 0) {
        t3 = vmsio_isready(a4);
        if (t3 == 0) {
            vmsfs_unmount(a4);
            t53 = 0xFFFFFF01;
        } else {
            t5 = vmsio_ismount(a4);
            t51 = 0xFFFFFF01;
            if (t5 != 0) {
                t6 = *(signed char *)((((a4 * 0x148) + 0xC2EE990) + 0x8));
                t49 = 0xFFFFFF01;
                if (t6 != 0) {
                    t7 = buIsFormat();
                    t47 = 0xFFFFFF03;
                    if ((int)t7 >= 0) {
                        if ((int)a6 > 0) {
                            t8 = 0x0;
                            t9 = a5;
                            for (;;) {
                                t10 = *(int *)((t9 + 0x0));
                                t11 = check_isopen();
                                if ((int)t11 >= 0) {
                                    t8 = (t8 + 0x1);
                                    t9 = (t9 + 0x4);
                                    if ((int)t8 >= (int)a6) break;
                                    continue;
                                }
                                return 0xFFFFFF0A;
                            }
                            t20 = 0x0;
                            if ((int)a6 > 0) {
                                t12 = 0x0;
                                t13 = 0x0;
                                t14 = a5;
                                do {
                                    t15 = *(int *)((t14 + 0x0));
                                    t16 = clear_file(a4, t15);
                                    t13 = (t13 + 0x1);
                                    if ((int)t16 < 0) {
                                        t12 = 0x1;
                                    }
                                    t14 = (t14 + 0x4);
                                } while ((int)t13 < (int)a6);
                                t20 = t12;
                            }
                            t21 = write_dir(a4);
                            t25 = t21;
                            if ((int)t21 >= 0) {
                                t22 = write_fat(a4);
                                t24 = t22;
                                if ((int)t22 >= 0) {
                                    t23 = 0x0;
                                    if (t20 != 0) {
                                        t23 = 0xFFFFFF0A;
                                    }
                                    t24 = t23;
                                }
                                t25 = t24;
                            }
                            t42 = t25;
                        } else {
                            t35 = 0x0;
                            if ((int)a6 > 0) {
                                t27 = 0x0;
                                t28 = 0x0;
                                t29 = a5;
                                do {
                                    t30 = *(int *)((t29 + 0x0));
                                    t31 = clear_file(a4, t30);
                                    t28 = (t28 + 0x1);
                                    if ((int)t31 < 0) {
                                        t27 = 0x1;
                                    }
                                    t29 = (t29 + 0x4);
                                } while ((int)t28 < (int)a6);
                                t35 = t27;
                            }
                            t36 = write_dir(a4);
                            t40 = t36;
                            if ((int)t36 >= 0) {
                                t37 = write_fat(a4);
                                t39 = t37;
                                if ((int)t37 >= 0) {
                                    t38 = 0x0;
                                    if (t35 != 0) {
                                        t38 = 0xFFFFFF0A;
                                    }
                                    t39 = t38;
                                }
                                t40 = t39;
                            }
                            t42 = t40;
                        }
                        t47 = t42;
                    }
                    t49 = t47;
                }
                t51 = t49;
            }
            t53 = t51;
        }
        t55 = t53;
    }
    return t55;
}

