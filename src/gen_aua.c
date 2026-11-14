/* Straight-line functions with calls and guards (batch gen_aua): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int buIsFormat(int);
int check_fat_xross(int, int);
int check_isopen(void);
int direntry(int, int);
int direntry_dirty(int, int);
int get_fat(int, int);
int search_dir(int, int, int);
int set_fat(int, int, int);
int set_vmstime(int, int);
int vmsfs_unmount(int);
int vmsfs_write_retry(int, int, int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_dir(int);
int vmsfs_diskfree(int a4, int a5);
int vmsfs_frename(int a4, int a5, int a6);
int vmsfs_fsettime(int a4, int a5, int a6);
int vmsfs_xwrite1(int a4, int a5);

int vmsfs_diskfree(int a4, int a5)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_4 = a4;
    v0_0 = a5;
    *(unsigned int *)(((int)stk + 0)) = v0_0;
    *(unsigned int *)(((int)stk + 4)) = (v0_4 * 0x148);
    v0_0 = (((v0_4 * 0x148) + 0xC2EE990));
    v0_1 = (v0_4);
    if (((*(signed char *)((((v0_4 * 0x148) + 0xC2EE990) + 0x2))) == 0)) goto L_C164458;
    v0_2 = (vmsio_isready(v0_1)) != 0;
    if (v0_2) goto L_C164442;
    vmsfs_unmount(v0_1);
    L_C164458:;
    v0_0 = (0xFFFFFF01);
    L_C164512:;
    return v0_0;
    L_C164442:;
    v0_2 = (vmsio_ismount(v0_1)) == 0;
    if (v0_2) goto L_C164458;
    if (((*(signed char *)((((*(int *)(((int)stk + 4))) + 0xC2EE990) + 0x8))) != 0)) goto L_C16445E;
    goto L_C164458;
    L_C16445E:;
    v0_2 = (int)(buIsFormat(v0_1)) >= 0;
    if (v0_2) goto L_C16446E;
    v0_0 = (0xFFFFFF03);
    goto L_C164512;
    L_C16446E:;
    v0_3 = (0x0);
    v0_2 = (0xFFFC);
    v0_4 = (0x0);
    if (((*(int *)(((int)stk + 0))) != 1)) goto L_C1644BC;
    v0_4 = (v0_4);
    L_C16448E:;
    if (!(((int)v0_4 < (int)(*(int *)(((*(int *)((v0_0 + 0x1C))) + 0x38)))))) goto L_C164496;
    v0_3 = (unsigned short)(get_fat(v0_1, v0_4)) != v0_2;
    if (v0_3) goto L_C164496;
    v0_4 = ((v0_4 + 0x1));
    goto L_C16448E;
    L_C164496:;
    v0_3 = (v0_4);
    L_C164510:;
    v0_0 = (v0_3);
    goto L_C164512;
    L_C1644BC:;
    if (((*(int *)0xC17640C) == 0)) goto L_C1644F2;
    v0_4 = (v0_4);
    L_C1644E6:;
    if (((int)v0_4 < (int)(*(int *)(((*(int *)((v0_0 + 0x1C))) + 0x30))))) goto L_C1644C8;
    goto L_C164510;
    L_C1644C8:;
    v0_5 = (unsigned short)(get_fat(v0_1, v0_4)) != v0_2;
    if (v0_5) goto L_C1644E4;
    v0_5 = (int)(check_fat_xross(v0_1, v0_4)) < 0;
    if (v0_5) goto L_C1644E4;
    v0_3 = ((v0_3 + 0x1));
    L_C1644E4:;
    v0_4 = ((v0_4 + 0x1));
    goto L_C1644E6;
    L_C1644F2:;
    v0_4 = (v0_4);
    L_C164508:;
    if (((int)v0_4 < (int)(*(int *)(((*(int *)((v0_0 + 0x1C))) + 0x30))))) goto L_C1644F6;
    goto L_C164510;
    L_C1644F6:;
    v0_5 = (unsigned short)(get_fat(v0_1, v0_4)) != v0_2;
    v0_4 = ((v0_4 + 0x1));
    if (v0_5) goto L_C164508;
    v0_3 = ((v0_3 + 0x1));
    goto L_C164508;
}

int vmsfs_frename(int a4, int a5, int a6)
{
    int stk[14];
    register int t0;
    register int t33;
    register int t3;
    register int t5;
    register int t29;
    register int t8;
    register int t27;
    register int t10;
    register int t25;
    register int t12;
    register int t24;
    register int t14;
    register int t23;
    register int t15;
    register int t18;
    register int t19;
    register int t31;
    int t6;
    register int t7;
    register int t17;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 8)) = (a4 * 0x148);
    *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x30)) = 0x1;
    t0 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x4));
    *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x34)) = (*(int *)((((((t0 << 2) + t0) << 2) << 2) + 0xC178500)));
    t33 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0xC2EE990) + 0x2))) != 0) {
        t3 = vmsio_isready(a4);
        if (t3 == 0) {
            vmsfs_unmount(a4);
            t31 = 0xFFFFFF01;
        } else {
            t5 = vmsio_ismount(a4);
            t29 = 0xFFFFFF01;
            if ((t5 != 0) && (t6 = *(int *)(((int)stk + 8)), t7 = *(signed char *)(((t6 + 0xC2EE990) + 0x8)), t7 != 0)) {
                t8 = buIsFormat(a4);
                t27 = 0xFFFFFF03;
                if ((int)t8 >= 0) {
                    *(volatile int *)(((int)stk + 0));
                    t10 = check_isopen();
                    t25 = 0xFFFFFF0B;
                    if ((int)t10 >= 0) {
                        t12 = search_dir(a4, (*(int *)(((int)stk + 0))), (((int)stk + 0) + 0xC));
                        t24 = 0xFFFFFF05;
                        if ((int)t12 >= 0) {
                            t14 = search_dir(a4, (*(int *)(((int)stk + 4))), (((int)stk + 0) + 0xC));
                            t23 = 0xFFFFFF06;
                            if ((int)t14 < 0) {
                                t15 = direntry(a4, t12);
                                t18 = (t15 + 0x4);
                                t19 = (*(int *)(((int)stk + 4)));
                                for (;;) {
                                    if ((unsigned int)t18 >= (unsigned int)(t15 + 0x10)) {
                                        break;
                                    }
                                    t17 = (*(signed char *)((t19 + 0x0)));
                                    t19 = (t19 + 0x1);
                                    *(unsigned char *)((t18 + 0x0)) = t17;
                                    t18 = (t18 + 0x1);
                                }
                                direntry_dirty(a4, t12);
                                t23 = (write_dir(a4));
                            }
                            t24 = t23;
                        }
                        t25 = t24;
                    }
                    t27 = t25;
                }
                t29 = t27;
            }
            t31 = t29;
        }
        t33 = t31;
    }
    return t33;
}

int vmsfs_fsettime(int a4, int a5, int a6)
{
    int stk[16];
    register int t0;
    register int t36;
    register int t3;
    register int t5;
    register int t30;
    register int t8;
    register int t27;
    register int t10;
    register int t24;
    register int t12;
    register int t22;
    register int t13;
    register int t17;
    register int t18;
    register int t33;
    int t6;
    register int t7;
    register int t16;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 8)) = (a4 * 0x148);
    *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x30)) = 0x1;
    t0 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x4));
    *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x34)) = (*(int *)((((((t0 << 2) + t0) << 2) << 2) + 0xC178508)));
    t36 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0xC2EE990) + 0x2))) != 0) {
        t3 = vmsio_isready(a4);
        if (t3 == 0) {
            vmsfs_unmount(a4);
            t33 = 0xFFFFFF01;
        } else {
            t5 = vmsio_ismount(a4);
            t30 = 0xFFFFFF01;
            if ((t5 != 0) && (t6 = *(int *)(((int)stk + 8)), t7 = *(signed char *)(((t6 + 0xC2EE990) + 0x8)), t7 != 0)) {
                t8 = buIsFormat(a4);
                t27 = 0xFFFFFF03;
                if ((int)t8 >= 0) {
                    *(volatile int *)(((int)stk + 0));
                    t10 = check_isopen();
                    t24 = 0xFFFFFF0B;
                    if ((int)t10 >= 0) {
                        t12 = search_dir(a4, (*(int *)(((int)stk + 0))), (((int)stk + 0) + 0xC));
                        t22 = 0xFFFFFF05;
                        if ((int)t12 >= 0) {
                            t13 = direntry(a4, t12);
                            set_vmstime((((int)stk + 0) + 0x38), (*(int *)(((int)stk + 4))));
                            t17 = (t13 + 0x10);
                            t18 = (((int)stk + 0) + 0x38);
                            for (;;) {
                                if ((unsigned int)t17 >= (unsigned int)(t13 + 0x18)) {
                                    break;
                                }
                                t16 = (*(signed char *)((t18 + 0x0)));
                                t18 = (t18 + 0x1);
                                *(unsigned char *)((t17 + 0x0)) = t16;
                                t17 = (t17 + 0x1);
                            }
                            direntry_dirty(a4, t12);
                            t22 = (write_dir(a4));
                        }
                        t24 = t22;
                    }
                    t27 = t24;
                }
                t30 = t27;
            }
            t33 = t30;
        }
        t36 = t33;
    }
    return t36;
}

int vmsfs_xwrite1(int a4, int a5)
{
    int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t7;
    register int t9;
    register int t10;

    t3 = *(int *)((a4 + 0x28));
    t4 = vmsio_isready(t3);
    if (t4 == 0) {
        vmsfs_unmount((*(int *)((a4 + 0x28))));
        t4 = 0xFFFFFF01;
    } else {
        t5 = vmsio_ismount((*(int *)((a4 + 0x28))));
        t4 = 0xFFFFFF01;
        if (t5 != 0) {
            t5 = 0xFFFFFF01;
            if ((*(signed char *)((((*(int *)((a4 + 0x28))) * 0x148) + 0xC2EE998))) == 0) {
            } else {
                t7 = buIsFormat((*(int *)((a4 + 0x28))));
                t5 = 0xFFFFFF03;
                if ((int)t7 < 0) {
                } else {
                    t7 = *(int *)((a4 + 0x30));
                    t9 = *(int *)((a4 + 0x28));
                    t10 = get_fat(t9, t7);
                    t5 = 0xFFFFFF04;
                    if (((unsigned short)t10 == 0xFFFC) && (t0 = *(int *)((a4 + 0x30)), t5 = *(int *)((((t3 * 0x148) + 0xC2EE990) + 0x1C)), t2 = *(int *)((t5 + 0x38)), (int)t0 < (int)t2)) {
                        t0 = vmsfs_write_retry(t9, t7, a5);
                        t5 = t0;
                        if ((int)t0 < 0) {
                        } else {
                            set_fat(t9, t7, 0xFFFA);
                            if ((*(int *)((a4 + 0x38))) == 0xFFFF) {
                                *(unsigned int *)((a4 + 0x38)) = (short)t7;
                            } else {
                                set_fat(t9, (*(int *)((a4 + 0x3C))), t7);
                            }
                            *(unsigned int *)((a4 + 0x3C)) = (short)t7;
                            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                            t5 = 0x0;
                        }
                    }
                }
            }
            t4 = t5;
        }
    }
    return t4;
}
