/* Straight-line functions with calls and guards (batch gen_ads): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int menuReadPad(int a4);

int menuReadPad(int a4)
{
    int t61;
    int t0;
    int t2;
    int t5;
    int t25;
    int t28;
    int t38;
    int t90;
    int t76;
    int t77;
    int t78;
    int stk[10] = {0};

    if (a4 == 0) {
        *(unsigned int *)0xC2A11CC = 0x0;
        *(unsigned int *)0xC2A11D0 = 0x0;
        *(unsigned int *)0xC2A11D4 = 0x0;
        *(unsigned short *)0xC2A1AEA = 0x0;
        *(unsigned short *)0xC2A1AE8 = 0x0;
        t90 = 0x0;
    } else {
        t61 = 0x0;
        if (0x0 != 0) {
        } else {
            t0 = *(int *)0xC1EE250;
            *(unsigned int *)0xC2A11CC = (((((((((((((((t0 & 0x8) == 0)) ? 1 : 0) ^ 0x1) | (((-(((((t0 & 0x10) == 0)) ? 1 : 0) - 1)) << 2) << 1)) | (((-(((((t0 & 0x20) == 0)) ? 1 : 0) - 1)) << 2) << 2)) | ((((-(((((t0 & 0x40) == 0)) ? 1 : 0) - 1)) << 2) << 2) << 1)) | ((((-(((((0x80 & t0) == 0)) ? 1 : 0) - 1)) << 2) << 2) << 2)) | ((-(((((0x400 & t0) == 0)) ? 1 : 0) - 1)) << 7)) | ((-(((((0x200 & t0) == 0)) ? 1 : 0) - 1)) << 8)) | (((-(((((0x20000 & t0) == 0)) ? 1 : 0) - 1)) << 8) << 1)) | (((-(((((0x10000 & t0) == 0)) ? 1 : 0) - 1)) << 8) << 2)) | ((-(((((0x2 & t0) == 0)) ? 1 : 0) - 1)) << 2)) | ((-(((((0x4 & t0) == 0)) ? 1 : 0) - 1)) << 1));
            *(unsigned int *)(((int)stk + 8)) = (*(int *)0xC2A11D0);
            t2 = *(int *)0xC1EE24C;
            *(unsigned int *)0xC2A11D0 = (((((((((((((((t2 & 0x8) == 0)) ? 1 : 0) ^ 0x1) | (((-(((((t2 & 0x10) == 0)) ? 1 : 0) - 1)) << 2) << 1)) | (((-(((((t2 & 0x20) == 0)) ? 1 : 0) - 1)) << 2) << 2)) | ((((-(((((t2 & 0x40) == 0)) ? 1 : 0) - 1)) << 2) << 2) << 1)) | ((((-(((((0x80 & t2) == 0)) ? 1 : 0) - 1)) << 2) << 2) << 2)) | ((-(((((0x400 & t2) == 0)) ? 1 : 0) - 1)) << 7)) | ((-(((((0x200 & t2) == 0)) ? 1 : 0) - 1)) << 8)) | (((-(((((0x20000 & t2) == 0)) ? 1 : 0) - 1)) << 8) << 1)) | (((-(((((0x10000 & t2) == 0)) ? 1 : 0) - 1)) << 8) << 2)) | ((-(((((0x2 & t2) == 0)) ? 1 : 0) - 1)) << 2)) | ((-(((((0x4 & t2) == 0)) ? 1 : 0) - 1)) << 1));
            *(unsigned short *)(((((int)stk + 4) + 0x8) + 0x0)) = (((unsigned int)(unsigned short)(*(short *)0xC1EE25C) >> 8) - 128);
            *(unsigned short *)(((((int)stk + 4) + 0x8) + 0x2)) = (((unsigned int)(unsigned short)(*(short *)0xC1EE262) >> 8) - 128);
            t5 = *(short *)0xC2A1AE8;
            *(unsigned int *)(((int)stk + 4)) = t5;
            if (((int)t5 > (int)0xFFFFFF9C) && ((int)t5 < (int)0x64)) {
                if ((int)(*(short *)(((((int)stk + 4) + 0x8) + 0x0))) < (int)0xFFFFFF9C) {
                    *(unsigned int *)0xC2A11CC = ((*(int *)0xC2A11CC) | 0x20);
                } else {
                    if ((int)(*(short *)(((((int)stk + 4) + 0x8) + 0x0))) > (int)0x64) {
                        *(unsigned int *)0xC2A11CC = ((*(int *)0xC2A11CC) | 0x40);
                    }
                }
            }
            t25 = *(short *)0xC2A1AEA;
            *(unsigned int *)(((int)stk + 4)) = t25;
            if (((int)t25 > (int)0xFFFFFF9C) && ((int)t25 < (int)0x64)) {
                t28 = *(short *)((((((int)stk + 4) + 0x8) + 0x2) + 0x0));
                if ((int)t28 < (int)0xFFFFFF9C) {
                    *(unsigned int *)0xC2A11CC = ((*(int *)0xC2A11CC) | 0x8);
                } else {
                    if ((int)t28 > (int)0x64) {
                        *(unsigned int *)0xC2A11CC = ((*(int *)0xC2A11CC) | 0x10);
                    }
                }
            }
            *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x8);
            *(unsigned short *)0xC2A1AE8 = (*(short *)(((((int)stk + 4) + 0x8) + 0x0)));
            t38 = *(short *)(((((int)stk + 4) + 0x8) + 0x2));
            *(unsigned short *)0xC2A1AEA = t38;
            if ((int)(*(short *)(((*(int *)(((int)stk + 4))) + 0x0))) < (int)0xFFFFFF9C) {
                *(unsigned int *)0xC2A11D0 = ((*(int *)0xC2A11D0) | 0x20);
            } else {
                if ((int)(*(short *)(((((int)stk + 4) + 0x8) + 0x0))) > (int)0x64) {
                    *(unsigned int *)0xC2A11D0 = ((*(int *)0xC2A11D0) | 0x40);
                }
            }
            if ((int)(*(short *)((((((int)stk + 4) + 0x8) + 0x2) + 0x0))) < (int)0xFFFFFF9C) {
                *(unsigned int *)0xC2A11D0 = ((*(int *)0xC2A11D0) | 0x8);
            } else {
                if ((int)(*(short *)((((((int)stk + 4) + 0x8) + 0x2) + 0x0))) > (int)0x64) {
                    *(unsigned int *)0xC2A11D0 = ((*(int *)0xC2A11D0) | 0x10);
                }
            }
            t61 = t38;
        }
        if (((*(int *)0xC2A11CC) == 0) && ((t76 = *(int *)0xC2A11D0, t76 != 0) && (t77 = *(int *)0xC2A11D0, t78 = *(int *)(((int)stk + 8)), t77 == t78))) {
            if ((*(int *)0xC2A11D4) == 0) {
                *(unsigned int *)0xC2A11D4 = 0x6;
            } else {
                *(unsigned int *)0xC2A11D4 = ((*(int *)0xC2A11D4) - 1);
            }
        } else {
            *(unsigned int *)0xC2A11D4 = 0x14;
        }
        t90 = t61;
    }
    return t90;
}
