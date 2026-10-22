/* Straight-line functions with calls and guards (batch gen_akk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c15cfb0(int a4);

int FUN_0c15cfb0(int a4)
{
    int t0;
    int t3;
    int t6;

    t0 = 0x4;
    if ((int)(unsigned char)a4 < (int)0x80) {
        t0 = 0x3;
    }
    t3 = t0;
    if ((int)(unsigned char)a4 < (int)0x70) {
        t3 = ((int)((unsigned char)a4 + 0x10) >> 5);
    }
    t6 = t3;
    if ((int)(unsigned char)a4 > (int)0x8F) {
        t6 = ((int)((unsigned char)a4 - 15) >> 5);
    }
    return t6;
}
