/* Straight-line functions with calls and guards (batch gen_fl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int putString(int, int, float, float, float);
int putDriverName(int a4, int a5, int a6, float f4, float f5);

int putDriverName(int a4, int a5, int a6, float f4, float f5)
{
    int t12;
    int t7;
    int t2;
    int t13;

    if ((int)a5 < 0) {
        return putString(a4, 0xC0A2038, f4, f5, 1.0f);
    }
    t12 = a4;
    if ((int)(a5 - 4) < 0) {
        t13 = ((short)a5 * (short)0x2C);
    } else {
        t7 = a4;
        if (a6 == 0) {
            t2 = a4;
            if ((0x20 & a4) != 0) {
                t2 = ((a4 & 0xFFFFFFDF) | 0x40);
            }
            t7 = t2;
        }
        t12 = t7;
        t13 = ((short)(a5 - 4) * (short)0x2C);
    }
    return putString(t12, (((short)t13 + 0xC09E4F8) + 0xC), f4, f5, 1.0f);
}
