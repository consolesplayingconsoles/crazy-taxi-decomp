/* Straight-line functions with calls and guards (batch gen_jm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiMemCopy4(int, int, int);
int kmiReadRegister(int);
int kmiWriteRegister(int, int);
int thunk_kmiWriteRegister(int, int);
void kmiInitializeDevice(void);

void kmiInitializeDevice(void)
{
    int t1;
    int t4;
    int t17;
    int t57;
    int t58;
    int t77;
    int t80;
    int t81;
    int t14;
    int t9;
    int t36;
    int t32;
    int t28;
    int t25;
    int stk[8];

    *(unsigned int *)0xC2EA994 = 0x0;
    *(unsigned int *)(((int)stk + 8)) = (kmiReadRegister(0x0));
    t1 = kmiReadRegister(0x4);
    *(unsigned int *)0xC2EA680 = 0x5;
    if ((*(int *)(((int)stk + 8))) != 0x17FD11DB) {
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
                if ((t17 != 4) && ((t17 != 5) && (t17 != 6))) {
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
                t28 = t25;
            } else {
                *(unsigned int *)0xC2EA684 = 0x3;
                t28 = 0x101;
            }
            t32 = t28;
        } else {
            *(unsigned int *)0xC2EA684 = 0x1;
            t32 = 0x0;
        }
        t36 = t32;
    } else {
        *(unsigned int *)0xC2EA684 = 0x0;
        t36 = 0x0;
    }
    kmiWriteRegister(0xA8, t14);
    kmiWriteRegister(0xA0, 0x20);
    kmiWriteRegister(0x8, 0x0);
    kmiWriteRegister(0xE4, 0x3);
    kmiWriteRegister(0x48, 0x9);
    if (((*(int *)0xC2EA69C) & 1) != 0) {
        thunk_kmiWriteRegister(0x44, 0x800000);
    } else {
        thunk_kmiWriteRegister(0x44, 0x0);
    }
    kmiWriteRegister(0x5C, 0x0);
    kmiWriteRegister(0x68, 0x2800000);
    kmiWriteRegister(0x6C, 0x1E00000);
    t57 = 0x110;
    t58 = 0x92039;
    if ((*(int *)0xC2EA680) == 6) {
        kmiWriteRegister(0x110, 0x93F39);
        t57 = 0x98;
        t58 = (*(int *)0xC2EA994);
    }
    kmiWriteRegister(t57, t58);
    kmiWriteRegister(0x4C, 0xA0);
    kmiWriteRegister(0x74, 0x0);
    kmiWriteRegister(0x78, 0x3F800000);
    kmiWriteRegister(0x84, 0x0);
    kmiWriteRegister(0x30, t36);
    kmiWriteRegister(0xB0, 0x7F7F7F);
    kmiWriteRegister(0xB4, 0x7F7F7F);
    kmiWriteRegister(0xC0, 0x0);
    kmiWriteRegister(0xBC, 0xFFFFFFFF);
    kmiWriteRegister(0x80, 0x7);
    kmiWriteRegister(0x88, 0x3727C5A0);
    kmiWriteRegister(0x8C, 0x1203000);
    kmiWriteRegister(0x74, 0x1);
    if ((*(int *)0xC2EA680) != 6) {
        for (;;) {
        }
    }
    t77 = 0x7DF77;
    if ((*(int *)0xC2EA680) == 6) {
        t77 = 0x27DF77;
    }
    kmiWriteRegister(0x7C, t77);
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t80 = 0x0;
    t81 = 0xA5000000;
    for (;;) {
        kmiMemCopy4(t81, ((int)stk + 4), 0x4);
        t80 = (t80 + 0x1);
        t81 = (t81 + 0x4);
        if ((int)t80 >= (int)0x200000) {
            break;
        }
    }
}
