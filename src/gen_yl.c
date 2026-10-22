/* Straight-line functions with calls and guards (batch gen_yl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kdSetGetMediaInfoEx(int, int, int, int);
int pdVibGetInfo(int, int);
int FUN_0c1518d2(int a4, int a5, int a6);

int FUN_0c1518d2(int a4, int a5, int a6)
{
    int t12;
    int t1;
    int t6;
    int t3;

    t12 = 0xFFFFFFFF;
    if ((*(int *)((((a4 * 0x1C) + 0xC2B9998) + 0x0))) == 0) {
        *(unsigned int *)((((a4 * 0x1C) + 0xC2B9998) + 0x0)) = 0x1;
        *(unsigned int *)((((a4 * 0x1C) + 0xC2B9998) + 0x4)) = 0x0;
        *(unsigned int *)((((a4 * 0x1C) + 0xC2B9998) + 0x8)) = a6;
        *(unsigned int *)((((a4 * 0x1C) + 0xC2B9998) + 0xC)) = 0x0;
        *(unsigned int *)((((a4 * 0x1C) + 0xC2B9998) + 0x10)) = a5;
        *(unsigned int *)((((a4 * 0x1C) + 0xC2B9998) + 0x14)) = 0x1;
        t1 = pdVibGetInfo(a4, (((a4 * 0x1C) + 0xC2B9998) + 0x18));
        t6 = t1;
        if ((int)t1 >= 0) {
            t3 = 0x0;
            if ((int)(kdSetGetMediaInfoEx(a4, 0x100, 0x1, 0xC151864)) < 0) {
                *(unsigned int *)((((a4 * 0x1C) + 0xC2B9998) + 0x0)) = 0x0;
                t3 = 0xFFFFFFFF;
            }
            t6 = t3;
        }
        t12 = t6;
    }
    return t12;
}
