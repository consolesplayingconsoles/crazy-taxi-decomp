/* Straight-line functions with calls and guards (batch gen_yk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckBoxFlag(int a4);

int CheckBoxFlag(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t8;
    int t9;
    int t17;

    t0 = *(int *)(((short)((short)a4 * (short)0x788) + 0xC28A4FC));
    t1 = 0x0;
    t2 = 0xF888;
    t3 = 0x0;
    t4 = 0x0;
    for (;;) {
        t4 = (t4 + 0x1);
        if (((((int)t1 >= 0) ? (0x7 << (t1 & 31)) : ((-(int)t1 & 31) ? ((int)0x7 >> (-(int)t1 & 31)) : ((int)0x7 >> 31))) & (unsigned short)t0) == (((int)t1 >= 0) ? (0x7 << (t1 & 31)) : ((-(int)t1 & 31) ? ((int)0x7 >> (-(int)t1 & 31)) : ((int)0x7 >> 31)))) {
            t2 = (t2 & (~(((int)t3 >= 0) ? (0x8 << (t3 & 31)) : ((-(int)t3 & 31) ? ((int)0x8 >> (-(int)t3 & 31)) : ((int)0x8 >> 31)))));
        }
        t3 = (t3 + 0x4);
        t1 = (t1 + 0x4);
        if ((int)t4 >= (int)0x4) {
            break;
        }
    }
    t8 = 0x0;
    t9 = t2;
    for (;;) {
        if (((((int)t8 >= 0) ? (0x111 << (t8 & 31)) : ((-(int)t8 & 31) ? ((int)0x111 >> (-(int)t8 & 31)) : ((int)0x111 >> 31))) & (unsigned short)t0) == (((int)t8 >= 0) ? (0x111 << (t8 & 31)) : ((-(int)t8 & 31) ? ((int)0x111 >> (-(int)t8 & 31)) : ((int)0x111 >> 31)))) {
            t9 = (t9 & (~(((int)t8 >= 0) ? (0x1000 << (t8 & 31)) : ((-(int)t8 & 31) ? ((int)0x1000 >> (-(int)t8 & 31)) : ((int)0x1000 >> 31)))));
        }
        t8 = (t8 + 0x1);
        if ((int)t8 >= (int)0x4) {
            break;
        }
    }
    t17 = (t9 | 0x8000);
    if (((unsigned short)t0 & 0x7FFF) == 0x7FFF) {
        t17 = (t9 & 0xFFFF7FFF);
    }
    return t17;
}
