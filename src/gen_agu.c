/* Straight-line functions with calls and guards (batch gen_agu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int lcdSetData(int a4, int a5, int a6, int a7, int a8);

int lcdSetData(int a4, int a5, int a6, int a7, int a8)
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
    int t9;
    int t10;
    int t11;
    int t12;

    t0 = (int)((unsigned int)a8 / (unsigned int)0x6);
    t1 = (int)((unsigned int)a8 % (unsigned int)0x6);
    t2 = *(signed char *)((a4 + 0x1));
    t3 = *(signed char *)((a4 + 0x0));
    t4 = *(signed char *)((a4 + 0x2));
    t5 = *(signed char *)((a4 + 0x3));
    t6 = (unsigned char)t5;
    t7 = 0xC2A9FF8;
    t8 = (((unsigned char)t3 << 8) + (unsigned char)t2);
    t9 = (a4 + 0x4);
    t10 = a6;
    t11 = a6;
    for (;;) {
        if ((int)t11 >= (int)(a6 + (((unsigned char)t4 << 8) + (unsigned char)t5))) {
            break;
        }
        t12 = t11;
        t12 = (t12 << 1);
        t8 = t11;
        t12 = (t12 + t8);
        t10 = a5;
        t12 = (t12 << 2);
        t12 = (t12 << 2);
        if ((int)t10 < (int)(a5 + (((unsigned char)t3 << 8) + (unsigned char)t2))) {
            for (;;) {
                if (((int)t10 >= 0) && ((t7 = 0x30, (int)t10 < (int)t7) && (((int)t11 >= 0) && (t8 = 0x20, (int)t11 < (int)t8)))) {
                    t6 = t12;
                    t8 = (*(signed char *)((t9 + 0x0)));
                    t6 = (t6 + t10);
                    *(unsigned char *)((((short)(((((((t0 << 1) + t1) - 1) << 1) + (((t0 << 1) + t1) - 1)) << 8) << 1) + 0xC2A9FF8) + t6)) = t8;
                }
                t10 = (t10 + 0x1);
                t9 = (t9 + 0x1);
                if ((int)t10 >= (int)(a5 + (((unsigned char)t3 << 8) + (unsigned char)t2))) {
                    break;
                }
            }
        }
        t11 = (t11 + 0x1);
    }
    return t6;
}
