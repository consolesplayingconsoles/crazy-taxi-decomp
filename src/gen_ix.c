/* Straight-line functions with calls and guards (batch gen_ix): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c15887e(int, int, int);
int kmiReadRegister(int);
int kmiWriteRegister(int, int);
int thunk_kmiWriteRegister(int, int);
void kmiInitializeDevice(void);

void kmiInitializeDevice(void)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t17;
    int t53;
    int t61;
    int t66;
    int t67;
    int t63;
    int t83;
    int t84;
    int t85;
    int t88;
    int t89;
    int t14;
    int t9;
    int t45;
    int t41;
    int t37;
    int t33;
    int t29;
    int t25;
    int stk[8] = {0};

    *(unsigned int *)0xC2EA994 = 0x0;
    t0 = kmiReadRegister(0x0);
    *(unsigned int *)(((int)stk + 8)) = t0;
    t1 = kmiReadRegister(0x4);
    *(unsigned int *)0xC2EA680 = 0x5;
    t2 = *(int *)(((int)stk + 8));
    if (t2 != 0x17FD11DB) {
        *(unsigned int *)0xC2EA680 = 0x5;
        t14 = 0xDD18957;
    } else {
        if (t1 == 1) {
            *(unsigned int *)0xC2EA680 = 0x5;
            t9 = 0xDD18957;
        } else {
            t4 = 0xDD18957;
            if ((unsigned int)t1 >= (unsigned int)0x11) {
                *(unsigned int *)0xC2EA680 = 0x6;
                *(unsigned int *)0xC2EA994 = 0x800408;
                t4 = 0x15D1C951;
            }
            t9 = t4;
        }
        t14 = t9;
    }
    t17 = *(int *)0xA05F689C;
    if (t17 != 0) {
        if (t17 != 1) {
            if (t17 != 2) {
                if (t17 != 4) {
                    if (t17 != 5) {
                        if (t17 != 6) {
                            if (t17 != 8) {
                                if (t17 != 9) {
                                    *(unsigned int *)0xC2EA684 = 0x8F;
                                } else {
                                    *(unsigned int *)0xC2EA684 = 0xF;
                                }
                            } else {
                                *(unsigned int *)0xC2EA684 = 0x1F;
                            }
                            t25 = 0x101;
                        } else {
                            *(unsigned int *)0xC2EA684 = 0x7F;
                            t25 = 0x10101;
                        }
                        t29 = t25;
                    } else {
                        *(unsigned int *)0xC2EA684 = 0x7F;
                        t29 = 0x10101;
                    }
                    t33 = t29;
                } else {
                    *(unsigned int *)0xC2EA684 = 0x7F;
                    t33 = 0x10101;
                }
                t37 = t33;
            } else {
                *(unsigned int *)0xC2EA684 = 0x3;
                t37 = 0x101;
            }
            t41 = t37;
        } else {
            *(unsigned int *)0xC2EA684 = 0x1;
            t41 = 0x0;
        }
        t45 = t41;
    } else {
        *(unsigned int *)0xC2EA684 = 0x0;
        t45 = 0x0;
    }
    kmiWriteRegister(0xA8, t14);
    kmiWriteRegister(0xA0, 0x20);
    kmiWriteRegister(0x8, 0x0);
    kmiWriteRegister(0xE4, 0x3);
    kmiWriteRegister(0x48, 0x9);
    t53 = *(int *)0xC2EA69C;
    if ((t53 & 1) != 0) {
        thunk_kmiWriteRegister(0x44, 0x800000);
    } else {
        thunk_kmiWriteRegister(0x44, 0x0);
    }
    kmiWriteRegister(0x5C, 0x0);
    kmiWriteRegister(0x68, 0x2800000);
    kmiWriteRegister(0x6C, 0x1E00000);
    t61 = *(int *)0xC2EA680;
    t66 = 0x110;
    t67 = 0x92039;
    if (t61 == 6) {
        kmiWriteRegister(0x110, 0x93F39);
        t63 = *(int *)0xC2EA994;
        t66 = 0x98;
        t67 = t63;
    }
    kmiWriteRegister(t66, t67);
    kmiWriteRegister(0x4C, 0xA0);
    kmiWriteRegister(0x74, 0x0);
    kmiWriteRegister(0x78, 0x3F800000);
    kmiWriteRegister(0x84, 0x0);
    kmiWriteRegister(0x30, t45);
    kmiWriteRegister(0xB0, 0x7F7F7F);
    kmiWriteRegister(0xB4, 0x7F7F7F);
    kmiWriteRegister(0xC0, 0x0);
    kmiWriteRegister(0xBC, 0xFFFFFFFF);
    kmiWriteRegister(0x80, 0x7);
    kmiWriteRegister(0x88, 0x3727C5A0);
    kmiWriteRegister(0x8C, 0x1203000);
    kmiWriteRegister(0x74, 0x1);
    t83 = *(int *)0xC2EA680;
    if (t83 != 6) {
        for (;;) {
        }
    }
    t84 = *(int *)0xC2EA680;
    t85 = 0x7DF77;
    if (t84 == 6) {
        t85 = 0x27DF77;
    }
    kmiWriteRegister(0x7C, t85);
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t88 = 0x0;
    t89 = 0xA5000000;
    for (;;) {
        FUN_0c15887e(t89, ((int)stk + 4), 0x4);
        t88 = (t88 + 0x1);
        t89 = (t89 + 0x4);
        if ((int)t88 >= (int)0x200000) {
            break;
        }
    }
}
