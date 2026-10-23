/* Straight-line functions with calls and guards (batch gen_ka): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int pfColor(int, int, int, int);
float pfLength(int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFilterMode(int);
int pfSetFont(int);
int pfSetZ(float);
int pfSize(float, float);
void putMenuValue(int a4, int a5, int a6, int a7);

void putMenuValue(int a4, int a5, int a6, int a7)
{
    float u4;
    float u30;
    float u37;
    int t31;
    float u32;
    float t41;
    float u65;
    int t54;
    int t55;
    float u56;
    float t57;
    float u67;
    float u96;
    float u99;
    float u97;
    float u46;
    float u43;
    int t53;
    float u80;
    float u75;

    if (((a5 + (a7 * 0x2C)) + 0xC) == 0) {
        return;
    }
    pfSetFilterMode(0x1);
    pfSetZ((*(float *)0xC2A1AD4));
    pfSetFont((0x3 & a4));
    u4 = *(float *)(((a5 + (a7 * 0x2C)) + 0x8));
    pfSize(u4, u4);
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
    u30 = *(float *)(((a5 + (a7 * 0x2C)) + 0x0));
    u37 = u30;
    if ((0x2000 & a4) == 0) {
        t31 = *(int *)0xC2A1ADC;
        u32 = (u30 - (float)t31);
        if ((0x4000 & a4) != 0) {
            u32 = (u30 + (float)t31);
        }
        u37 = u32;
    }
    t41 = pfLength(((a5 + (a7 * 0x2C)) + 0xC));
    if ((0x4 & a4) != 0) {
        u46 = (-(t41 * (*(float *)0xC03CAA0)));
    } else {
        if ((0x8 & a4) != 0) {
            u43 = (-t41);
        }
        u46 = u43;
    }
    pfLocate((u37 + u46), (*(float *)(((a5 + (a7 * 0x2C)) + 0x4))));
    pfPuts(((a5 + (a7 * 0x2C)) + 0xC));
    if (((a4 & 0x8000) != 0) && (t53 = *(int *)0xC1EE330, (t53 & 16) != 0)) {
        u65 = t41;
        if ((int)a6 > 0) {
            t54 = 0x0;
            t55 = (0x0 + ((a5 + (a7 * 0x2C)) - (a7 * 0x2C)));
            u56 = t41;
            for (;;) {
                t57 = pfLength((t55 + 0xC));
                t54 = (t54 + 0x1);
                if (t57 > u56) {
                    u56 = t57;
                }
                t55 = (t55 + 0x2C);
                if ((int)t54 >= (int)a6) {
                    break;
                }
            }
            u65 = u56;
        }
        u67 = *(float *)0xC03CAA0;
        if ((int)a7 > 0) {
            if ((0x4 & a4) != 0) {
                u80 = (((-(u65 * u67)) - (pfLength(0xC0A2024))) + (*(float *)0xC03CAB8));
            } else {
                if ((0x8 & a4) != 0) {
                    u75 = (((-u65) - (pfLength(0xC0A2024))) + (*(float *)0xC03CAB8));
                } else {
                    u75 = ((-(pfLength(0xC0A2024))) + (*(float *)0xC03CAB8));
                }
                u80 = u75;
            }
            pfLocate((u37 + u80), (*(float *)((((a5 + (a7 * 0x2C)) - (a7 * 0x2C)) + 0x4))));
            pfPuts(0xC0A2028);
        }
        if ((int)a7 < (int)(a6 - 1)) {
            u96 = *(float *)0xC03CAC0;
            u99 = ((u65 * u67) + u96);
            if ((0x4 & a4) != 0) {
            } else {
                u97 = (u65 + u96);
                if ((0x8 & a4) != 0) {
                    u97 = u96;
                }
                u99 = u97;
            }
            pfLocate((u37 + u99), (*(float *)((((a5 + (a7 * 0x2C)) - (a7 * 0x2C)) + 0x4))));
            pfPuts(0xC0A2024);
        }
    }
    pfSetFilterMode(0x0);
}
