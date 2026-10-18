/* Straight-line functions with calls and guards (batch gen_ab): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetRotVec(int);
int SetColliObj(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(int, int, int, int);
int nlRotateAX(int);
int nlRotateAY(int);

void setObjPlace(int a4, int a5, int a6, int a7)
{
    int t0;
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
    int t40;
    int t42;
    int t44;

    t0 = *(short *)((a4 + 0x10));
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
        nlPushUnitMatrix(a4, a5, a6, a7);
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
                        SetColliObj(a5, 0x11);
                    } else {
                        t40 = *(short *)((a4 + 0x10));
                        if (t40 != 11) {
                            if (t40 != 12) {
                                if (t40 != 15) {
                                    if (t40 == 16) {
                                        SetColliObj(a5, 0x12);
                                    } else {
                                        t42 = *(short *)((a4 + 0x10));
                                        if (t42 == 19) {
                                            SetColliObj(a5, 0x13);
                                        } else {
                                            t44 = 0x10;
                                            if (t42 == 20) {
                                                t44 = 0x14;
                                            }
                                            SetColliObj(a5, t44);
                                        }
                                    }
                                } else {
                                    SetColliObj(a5, 0x12);
                                }
                            } else {
                                SetColliObj(a5, 0x12);
                            }
                        } else {
                            SetColliObj(a5, 0x12);
                        }
                    }
                } else {
                    SetColliObj(a5, 0x11);
                }
            } else {
                SetColliObj(a5, 0x11);
            }
        } else {
            SetColliObj(a5, 0x11);
        }
    }
}
