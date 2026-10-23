/* Straight-line functions with calls and guards (batch gen_amj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int putString(int, int, float, float, float);
int putDriverName(int a4, int a5, int a6, float f4, float f5);

int putDriverName(int a4, int a5, int a6, float f4, float f5)
{
    int t7;
    int t3;
    int t8;

    if ((int)a5 < 0) {
        return putString(a4, 0xC0A2038, f4, f5, 1.0f);
    }
    t7 = a4;
    if ((int)(a5 - 4) < 0) {
        t8 = ((short)a5 * (short)0x2C);
    } else {
        t3 = a4;
        if ((a6 == 0) && ((0x20 & a4) != 0)) {
            t3 = ((a4 & 0xFFFFFFDF) | 0x40);
        }
        t7 = t3;
        t8 = ((short)(a5 - 4) * (short)0x2C);
    }
    return putString(t7, (((short)t8 + 0xC09E4F8) + 0xC), f4, f5, 1.0f);
}
