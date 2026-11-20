/* Straight-line functions with calls and guards (batch gen_rz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlsndDriverSongStatus(int a4);

int nlsndDriverSongStatus(int a4)
{
    int t2;
    int t3;
    int t4;
    int t6;
    int t5;

    t2 = ((*(int *)(((*(int *)0xC2B76E4) + 0xC))) + 0xA0800000);
    t3 = 0x0;
    for (;;) {
        t4 = *(int *)((t2 + 0x0));
        if ((((unsigned char)t4 & 0x80) != 0) && (t5 = *(int *)((t2 + 0x0)), (short)((unsigned int)(t5 & 0xFF0000) >> 16) == a4)) {
            break;
        }
        t3 = (t3 + 0x1);
        t2 = (t2 + 0x30);
        if ((int)t3 >= (int)0x10) {
            return 0x0;
        }
    }
    t6 = 0x100;
    if (((unsigned char)t4 & 0x1) != 0) {
        t6 = 0x101;
    }
    return t6;
}
