/* Straight-line functions with calls and guards (batch gen_xl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int menuReadPad(int a4);
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_short { char p[0x10]; short v; };
struct o16_short { char p[0x16]; short v; };
struct o2_short { char p[0x2]; short v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };


int menuReadPad(int a4)
{
    int t0;
    int t2;
    int t5;
    int t25;
    int t28;
    int t90;
    int t76;
    int t77;
    int t78;
    int stk[10];
    int R1004;
    int R1008;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);

    if (a4 == 0) {
        (((struct o0_uint *)0xC2A11CC)->v) = 0x0;
        (((struct o4_uint *)0xC2A11CC)->v) = 0x0;
        (((struct o8_uint *)0xC2A11CC)->v) = 0x0;
        (((struct o2_ushort *)0xC2A1AE8)->v) = 0x0;
        (((struct o0_ushort *)0xC2A1AE8)->v) = 0x0;
        t90 = 0x0;
    } else {
        t90 = 0x0;
        if (0x0 != 0) {
        } else {
            t0 = (((struct o4_int *)0xC1EE24C)->v);
            (((struct o0_uint *)0xC2A11CC)->v) = (((((((((((((((t0 & 0x8) == 0)) ? 1 : 0) ^ 0x1) | (((-(((((t0 & 0x10) == 0)) ? 1 : 0) - 1)) << 2) << 1)) | (((-(((((t0 & 0x20) == 0)) ? 1 : 0) - 1)) << 2) << 2)) | ((((-(((((t0 & 0x40) == 0)) ? 1 : 0) - 1)) << 2) << 2) << 1)) | ((((-(((((0x80 & t0) == 0)) ? 1 : 0) - 1)) << 2) << 2) << 2)) | ((-(((((0x400 & t0) == 0)) ? 1 : 0) - 1)) << 7)) | ((-(((((0x200 & t0) == 0)) ? 1 : 0) - 1)) << 8)) | (((-(((((0x20000 & t0) == 0)) ? 1 : 0) - 1)) << 8) << 1)) | (((-(((((0x10000 & t0) == 0)) ? 1 : 0) - 1)) << 8) << 2)) | ((-(((((0x2 & t0) == 0)) ? 1 : 0) - 1)) << 2)) | ((-(((((0x4 & t0) == 0)) ? 1 : 0) - 1)) << 1));
            R1008 = ((((struct o4_int *)0xC2A11CC)->v));
            t2 = (((struct o0_int *)0xC1EE24C)->v);
            (((struct o4_uint *)0xC2A11CC)->v) = (((((((((((((((t2 & 0x8) == 0)) ? 1 : 0) ^ 0x1) | (((-(((((t2 & 0x10) == 0)) ? 1 : 0) - 1)) << 2) << 1)) | (((-(((((t2 & 0x20) == 0)) ? 1 : 0) - 1)) << 2) << 2)) | ((((-(((((t2 & 0x40) == 0)) ? 1 : 0) - 1)) << 2) << 2) << 1)) | ((((-(((((0x80 & t2) == 0)) ? 1 : 0) - 1)) << 2) << 2) << 2)) | ((-(((((0x400 & t2) == 0)) ? 1 : 0) - 1)) << 7)) | ((-(((((0x200 & t2) == 0)) ? 1 : 0) - 1)) << 8)) | (((-(((((0x20000 & t2) == 0)) ? 1 : 0) - 1)) << 8) << 1)) | (((-(((((0x10000 & t2) == 0)) ? 1 : 0) - 1)) << 8) << 2)) | ((-(((((0x2 & t2) == 0)) ? 1 : 0) - 1)) << 2)) | ((-(((((0x4 & t2) == 0)) ? 1 : 0) - 1)) << 1));
            *(unsigned short *)(((((int)stk + 4) + 0x8) + 0x0)) = (((unsigned int)(unsigned short)((((struct o10_short *)0xC1EE24C)->v)) >> 8) - 128);
            *(unsigned short *)(((((int)stk + 4) + 0x8) + 0x2)) = (((unsigned int)(unsigned short)((((struct o16_short *)0xC1EE24C)->v)) >> 8) - 128);
            t5 = (((struct o0_short *)0xC2A1AE8)->v);
            R1004 = t5;
            if (((int)t5 > (int)0xFFFFFF9C) && ((int)t5 < (int)0x64)) {
                if ((int)(*(short *)(((((int)stk + 4) + 0x8) + 0x0))) < (int)0xFFFFFF9C) {
                    (((struct o0_uint *)0xC2A11CC)->v) = (((((struct o0_int *)0xC2A11CC)->v)) | 0x20);
                } else {
                    if ((int)(*(short *)(((((int)stk + 4) + 0x8) + 0x0))) > (int)0x64) {
                        (((struct o0_uint *)0xC2A11CC)->v) = (((((struct o0_int *)0xC2A11CC)->v)) | 0x40);
                    }
                }
            }
            t25 = (((struct o2_short *)0xC2A1AE8)->v);
            R1004 = t25;
            if (((int)t25 > (int)0xFFFFFF9C) && ((int)t25 < (int)0x64)) {
                t28 = *(short *)((((((int)stk + 4) + 0x8) + 0x2) + 0x0));
                if ((int)t28 < (int)0xFFFFFF9C) {
                    (((struct o0_uint *)0xC2A11CC)->v) = (((((struct o0_int *)0xC2A11CC)->v)) | 0x8);
                } else {
                    if ((int)t28 > (int)0x64) {
                        (((struct o0_uint *)0xC2A11CC)->v) = (((((struct o0_int *)0xC2A11CC)->v)) | 0x10);
                    }
                }
            }
            R1004 = (((int)stk + 4) + 0x8);
            (((struct o0_ushort *)0xC2A1AE8)->v) = (*(short *)(((((int)stk + 4) + 0x8) + 0x0)));
            t90 = *(short *)(((((int)stk + 4) + 0x8) + 0x2));
            (((struct o2_ushort *)0xC2A1AE8)->v) = t90;
            if ((int)(*(short *)(((R1004) + 0x0))) < (int)0xFFFFFF9C) {
                (((struct o4_uint *)0xC2A11CC)->v) = (((((struct o4_int *)0xC2A11CC)->v)) | 0x20);
            } else {
                if ((int)(*(short *)(((((int)stk + 4) + 0x8) + 0x0))) > (int)0x64) {
                    (((struct o4_uint *)0xC2A11CC)->v) = (((((struct o4_int *)0xC2A11CC)->v)) | 0x40);
                }
            }
            if ((int)(*(short *)((((((int)stk + 4) + 0x8) + 0x2) + 0x0))) < (int)0xFFFFFF9C) {
                (((struct o4_uint *)0xC2A11CC)->v) = (((((struct o4_int *)0xC2A11CC)->v)) | 0x8);
            } else {
                if ((int)(*(short *)((((((int)stk + 4) + 0x8) + 0x2) + 0x0))) > (int)0x64) {
                    (((struct o4_uint *)0xC2A11CC)->v) = (((((struct o4_int *)0xC2A11CC)->v)) | 0x10);
                }
            }
        }
        if ((((((struct o0_int *)0xC2A11CC)->v)) == 0) && ((t76 = (((struct o4_int *)0xC2A11CC)->v), t76 != 0) && (t77 = (((struct o4_int *)0xC2A11CC)->v), t78 = R1008, t77 == t78))) {
            if (((((struct o8_int *)0xC2A11CC)->v)) == 0) {
                (((struct o8_uint *)0xC2A11CC)->v) = 0x6;
            } else {
                (((struct o8_uint *)0xC2A11CC)->v) = (((((struct o8_int *)0xC2A11CC)->v)) - 1);
            }
        } else {
            (((struct o8_uint *)0xC2A11CC)->v) = 0x14;
        }
    }
    return t90;
}
