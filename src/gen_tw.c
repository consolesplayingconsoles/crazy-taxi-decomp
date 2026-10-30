/* Straight-line functions with calls and guards (batch gen_tw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckSecretFlag(int a4, int a5);

int CheckSecretFlag(int a4, int a5)
{
    int t2;
    int t3;
    int t20;
    int t21;
    int t22;
    int t23;
    int t49;
    int t53;
    int t52;
    int t1;
    int t50;

    t2 = a5;
    t3 = 0x0;
    for (;;) {
        if (((unsigned char)(*(signed char *)0xC28A4E8) & ((int)0x2 << (int)t3)) == 0) {
            t2 = 0x0;
            for (;;) {
                t1 = 0x3C8;
                t1 = (t1 + 0xC2A1258);
                if (((*(signed char *)((((short)((short)t2 * (short)0x3C) + t1) + 0x8)))) == t3) {
                    t2 = (t2 + 0x1);
                    if ((int)t2 >= (int)0x10) {
                        break;
                    }
                    continue;
                }
                break;
            }
            if ((int)t2 >= (int)0x10) {
                *(unsigned char *)0xC28A4E8 = ((*(signed char *)0xC28A4E8) | ((int)0x2 << (int)t3));
                t1 = (*(int *)0xC2A1234);
                t1 = (t1 | ((int)0x2 << (int)t3));
                *(unsigned int *)0xC2A1234 = t1;
            }
        }
        t3 = (t3 + 0x1);
        if ((int)t3 >= (int)0x4) {
            break;
        }
    }
    if (((unsigned char)(*(signed char *)0xC28A4E8) & 32) == 0) {
        t20 = 0x0;
        t21 = 0x0;
        for (;;) {
            t22 = 0x0;
            for (;;) {
                t23 = *(signed char *)((((0xC2A1620 + (short)((short)t21 * (short)0x3C)) + (signed char)(((t22 << 1) + t22) << 2)) + 0x8));
                if ((t23 != 2) && (t23 != 6)) {
                    break;
                }
                t22 = (t22 + 0x1);
                t20 = (t20 + 0x1);
                if ((int)t22 >= (int)0x5) {
                    break;
                }
            }
            t21 = (t21 + 0x1);
            if ((int)t21 >= (int)0x10) {
                break;
            }
        }
        if ((int)t20 >= (int)0x50) {
            *(unsigned char *)0xC28A4E8 = ((*(signed char *)0xC28A4E8) | 0x20);
            *(unsigned int *)0xC2A1234 = ((*(int *)0xC2A1234) | 0x20);
        }
    }
    t49 = *(signed char *)0xC28A4E8;
    t53 = (unsigned char)t49;
    if ((((unsigned char)t49 & 1) == 0) && (t50 = *(int *)((((short)((short)(*(short *)0xC2A11C4) * (short)0x788) + 0xC28A4F8) + 0x4)), (unsigned short)t50 == 0xFFFF)) {
        *(unsigned char *)0xC28A4E8 = ((*(signed char *)0xC28A4E8) | 0x1);
        t52 = *(int *)0xC2A1234;
        *(unsigned int *)0xC2A1234 = (t52 | 0x1);
        t53 = (t52 | 0x1);
    }
    return t53;
}
