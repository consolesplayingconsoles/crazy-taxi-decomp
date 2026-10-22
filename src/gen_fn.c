/* Straight-line functions with calls and guards (batch gen_fn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c078a70(int, int, int);
int FUN_0c07b980(void);
int buIsFormat(int);
int check_isopen(void);
int clear_file(int, int);
int nlAddVector(int, int);
int nlObjPutUseViewMatrix(int);
int nlScaleVector(int, int, float);
int nlTriPutSetAttrib(int, int, int, int, int, int, int, int, int, int, float, float, float, float, float, float, float, float);
int nlTriPutSetClipping(int, float, float, float, float);
int nlTriPutSetPoint(int, int, float, float, float, float, float, float, float, float);
int nlTriPutTextureInit(int, int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_dir(int);
int write_fat(int);
int PutCollisionPoly(int a4);
int vmsfs_fdelete_ex(int a4, int a5, int a6);


int vmsfs_fdelete_ex(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t90;
    int t3;
    int t5;
    int t72;
    int t6;
    int t63;
    int t7;
    int t56;
    int t8;
    int t9;
    int t11;
    int t21;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t22;
    int t28;
    int t23;
    int t26;
    int t24;
    int t40;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t41;
    int t47;
    int t42;
    int t45;
    int t43;
    int t81;
    int t50;

    *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x30)) = 0x1;
    t0 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x4));
    t1 = *(int *)((((((t0 << 2) + t0) << 2) << 2) + 0xC178524));
    *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x34)) = t1;
    t2 = *(signed char *)((((a4 * 0x148) + 0xC2EE990) + 0x2));
    t90 = 0xFFFFFF01;
    if (t2 != 0) {
        t3 = vmsio_isready(a4);
        if (t3 == 0) {
            vmsfs_unmount(a4);
            t81 = 0xFFFFFF01;
        } else {
            t5 = vmsio_ismount(a4);
            t72 = 0xFFFFFF01;
            if (t5 != 0) {
                t6 = *(signed char *)((((a4 * 0x148) + 0xC2EE990) + 0x8));
                t63 = 0xFFFFFF01;
                if (t6 == 0) {
                } else {
                    t7 = buIsFormat(a4);
                    t56 = 0xFFFFFF03;
                    if ((int)t7 < 0) {
                    } else {
                        if ((int)a6 > 0) {
                            t8 = 0x0;
                            t9 = a5;
                            for (;;) {
                                *(volatile int *)((t9 + 0x0));
                                t11 = check_isopen();
                                if ((int)t11 >= 0) {
                                    t8 = (t8 + 0x1);
                                    t9 = (t9 + 0x4);
                                    if ((int)t8 >= (int)a6) {
                                        break;
                                    }
                                    continue;
                                }
                                return 0xFFFFFF0A;
                            }
                            t21 = 0x0;
                            if ((int)a6 > 0) {
                                t12 = 0x0;
                                t13 = 0x0;
                                t14 = a5;
                                for (;;) {
                                    t15 = *(int *)((t14 + 0x0));
                                    t16 = clear_file(a4, t15);
                                    t13 = (t13 + 0x1);
                                    if ((int)t16 < 0) {
                                        t12 = 0x1;
                                    }
                                    t14 = (t14 + 0x4);
                                    if ((int)t13 >= (int)a6) {
                                        break;
                                    }
                                }
                                t21 = t12;
                            }
                            t22 = write_dir(a4);
                            t28 = t22;
                            if ((int)t22 >= 0) {
                                t23 = write_fat(a4);
                                t26 = t23;
                                if ((int)t23 < 0) {
                                } else {
                                    t24 = 0x0;
                                    if (t21 != 0) {
                                        t24 = 0xFFFFFF0A;
                                    }
                                    t26 = t24;
                                }
                                t28 = t26;
                            }
                            t50 = t28;
                        } else {
                            t40 = 0x0;
                            if ((int)a6 > 0) {
                                t31 = 0x0;
                                t32 = 0x0;
                                t33 = a5;
                                for (;;) {
                                    t34 = *(int *)((t33 + 0x0));
                                    t35 = clear_file(a4, t34);
                                    t32 = (t32 + 0x1);
                                    if ((int)t35 < 0) {
                                        t31 = 0x1;
                                    }
                                    t33 = (t33 + 0x4);
                                    if ((int)t32 >= (int)a6) {
                                        break;
                                    }
                                }
                                t40 = t31;
                            }
                            t41 = write_dir(a4);
                            t47 = t41;
                            if ((int)t41 >= 0) {
                                t42 = write_fat(a4);
                                t45 = t42;
                                if ((int)t42 < 0) {
                                } else {
                                    t43 = 0x0;
                                    if (t40 != 0) {
                                        t43 = 0xFFFFFF0A;
                                    }
                                    t45 = t43;
                                }
                                t47 = t45;
                            }
                            t50 = t47;
                        }
                        t56 = t50;
                    }
                    t63 = t56;
                }
                t72 = t63;
            }
            t81 = t72;
        }
        t90 = t81;
    }
    return t90;
}
