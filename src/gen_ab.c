/* Straight-line functions with calls and guards (batch gen_ab): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetRotVec(int);
int SetColliObj(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int setObjPlace(int a4, int a5);

int setObjPlace(int a4, int a5)
{
    int t0;
    int t61;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t8;
    int t10;
    int t11;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t48;
    int t50;
    int t52;
    int t55;
    int t57;
    int t59;
    int t60;
    int t58;
    int t56;
    int t54;
    int t53;
    int t51;
    int t49;
    int t47;
    int t46;

    t0 = *(short *)((a4 + 0x10));
    t61 = t0;
    if (t0 != -1) {
        t1 = *(int *)((a4 + 0x8));
        *(unsigned int *)((a5 + 0x8)) = t1;
        t2 = *(int *)((a4 + 0x4));
        *(unsigned int *)((a5 + 0x4)) = t2;
        t3 = *(int *)((a4 + 0x0));
        *(unsigned int *)((a5 + 0x0)) = t3;
        t4 = *(int *)0xC0965F8;
        *(unsigned int *)(((a5 + 0xC) + 0x8)) = t4;
        t5 = *(int *)0xC0965F4;
        *(unsigned int *)(((a5 + 0xC) + 0x4)) = t5;
        t6 = *(int *)0xC0965F0;
        *(unsigned int *)(((a5 + 0xC) + 0x0)) = t6;
        *(float *)((a5 + 0x18)) = 0.0f;
        nlPushUnitMatrix();
        t8 = *(int *)((a4 + 0xC));
        nlRotateAY(t8);
        t10 = *(short *)((a4 + 0x10));
        t11 = *(int *)((0xC0EDBCC + ((((t10 << 2) << 1) + t10) << 2)));
        nlRotateAX(t11);
        GetRotVec((a5 + 0x30));
        nlPopMatrix(0x1);
        t15 = *(int *)0xC0965F8;
        *(unsigned int *)(((a5 + 0x48) + 0x8)) = t15;
        t16 = *(int *)0xC0965F4;
        *(unsigned int *)(((a5 + 0x48) + 0x4)) = t16;
        t17 = *(int *)0xC0965F0;
        *(unsigned int *)(((a5 + 0x48) + 0x0)) = t17;
        *(unsigned int *)((a5 + 0x28)) = (a5 + 0x30);
        t18 = *(int *)0xC0965F8;
        *(unsigned int *)(((a5 + 0x58) + 0x8)) = t18;
        t19 = *(int *)0xC0965F4;
        *(unsigned int *)(((a5 + 0x58) + 0x4)) = t19;
        t20 = *(int *)0xC0965F0;
        *(unsigned int *)(((a5 + 0x58) + 0x0)) = t20;
        t21 = *(short *)((a4 + 0x10));
        if (t21 != 17) {
            if (t21 != 20) {
                if (t21 != 19) {
                    if (t21 != 7) {
                        if (t21 == 16) {
                            *(unsigned int *)((a5 + 0x68)) = 0x0;
                        } else {
                            *(unsigned int *)((a5 + 0x68)) = 0x1;
                        }
                    } else {
                        *(unsigned int *)((a5 + 0x68)) = 0x0;
                    }
                } else {
                    *(unsigned int *)((a5 + 0x68)) = 0x0;
                }
            } else {
                *(unsigned int *)((a5 + 0x68)) = 0x0;
            }
        } else {
            *(unsigned int *)((a5 + 0x68)) = 0x0;
        }
        t32 = *(short *)((a4 + 0x10));
        *(unsigned int *)(((0x54 + a5) + 0x0)) = (((((t32 << 2) << 1) + t32) << 2) + 0xC0EDBC0);
        t33 = *(short *)((a4 + 0x12));
        *(unsigned int *)(((0x6C + a5) + 0x0)) = t33;
        t34 = *(short *)((a4 + 0x10));
        t35 = *(int *)((0xC0EE1B4 + (t34 << 2)));
        t36 = *(short *)((a4 + 0x12));
        t37 = *(int *)((t35 + (t36 << 2)));
        *(unsigned int *)(((0x64 + a5) + 0x0)) = t37;
        t38 = *(short *)((a4 + 0x10));
        if (t38 != 7) {
            if (t38 != 8) {
                if (t38 != 10) {
                    if (t38 == 14) {
                        t39 = SetColliObj(a5, 0x11);
                        t54 = t39;
                    } else {
                        t40 = *(short *)((a4 + 0x10));
                        if (t40 != 11) {
                            if (t40 != 12) {
                                if (t40 != 15) {
                                    if (t40 == 16) {
                                        t41 = SetColliObj(a5, 0x12);
                                        t47 = t41;
                                    } else {
                                        t42 = *(short *)((a4 + 0x10));
                                        if (t42 == 19) {
                                            t43 = SetColliObj(a5, 0x13);
                                            t46 = t43;
                                        } else {
                                            t44 = 0x10;
                                            if (t42 == 20) {
                                                t44 = 0x14;
                                            }
                                            t45 = SetColliObj(a5, t44);
                                            t46 = t45;
                                        }
                                        t47 = t46;
                                    }
                                    t49 = t47;
                                } else {
                                    t48 = SetColliObj(a5, 0x12);
                                    t49 = t48;
                                }
                                t51 = t49;
                            } else {
                                t50 = SetColliObj(a5, 0x12);
                                t51 = t50;
                            }
                            t53 = t51;
                        } else {
                            t52 = SetColliObj(a5, 0x12);
                            t53 = t52;
                        }
                        t54 = t53;
                    }
                    t56 = t54;
                } else {
                    t55 = SetColliObj(a5, 0x11);
                    t56 = t55;
                }
                t58 = t56;
            } else {
                t57 = SetColliObj(a5, 0x11);
                t58 = t57;
            }
            t60 = t58;
        } else {
            t59 = SetColliObj(a5, 0x11);
            t60 = t59;
        }
        t61 = t60;
    }
    return t61;
}

