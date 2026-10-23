/* Straight-line functions with calls and guards (batch gen_uz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int pfColor(int, int, int, int);
float pfLength(int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFilterMode(int);
int pfSetFont(int);
int pfSetZ(float);
int pfSize(float, float);
int putString(int a4, int a5, float f4, float f5, float f6);

int putString(int a4, int a5, float f4, float f5, float f6)
{
    float u7;
    float u41;
    float u48;

    if ((*(signed char *)((a5 + 0x0))) != 0) {
        pfSetFilterMode(0x1);
        pfSetZ((*(float *)0xC2A1AD4));
        pfSetFont((0x3 & a4));
        u7 = f6;
        if ((0x20000 & a4) != 0) {
            u7 = (f6 * 1.5f);
        }
        pfSize(f6, u7);
        if ((0x10 & a4) != 0) {
            pfColor(0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000);
        } else {
            if ((0x20 & a4) != 0) {
                pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
            } else {
                if ((0x40 & a4) != 0) {
                    pfColor(0xFFFFC500, 0xFFFFC500, 0xFFFFC500, 0xFFFFC500);
                } else {
                    if ((0x80 & a4) != 0) {
                        pfColor(0xFF707070, 0xFF707070, 0xFF707070, 0xFF707070);
                    }
                }
            }
        }
        if ((0x4 & a4) != 0) {
            u48 = (f4 - ((pfLength(a5)) * (*(float *)0xC03B4C8)));
        } else {
            u41 = f4;
            if ((a4 & 0x8) != 0) {
                u41 = (f4 - (pfLength(a5)));
            }
            u48 = u41;
        }
        pfLocate(u48, f5);
        pfPuts(a5);
        return pfSetFilterMode(0x0);
    }
    return 0x8;
}
