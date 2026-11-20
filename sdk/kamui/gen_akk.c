/* Straight-line functions with calls and guards (batch gen_akk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmtex_QuantizeLevel8(int a4);

int kmtex_QuantizeLevel8(int a4)
{
    int t6;

    t6 = 0x4;
    if ((int)(unsigned char)a4 < (int)0x80) {
        t6 = 0x3;
    }
    if ((int)(unsigned char)a4 < (int)0x70) {
        t6 = ((int)((unsigned char)a4 + 0x10) >> 5);
    }
    if ((int)(unsigned char)a4 > (int)0x8F) {
        t6 = ((int)((unsigned char)a4 - 15) >> 5);
    }
    return t6;
}
