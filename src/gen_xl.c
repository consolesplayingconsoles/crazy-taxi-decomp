/* Straight-line functions with calls and guards (batch gen_xl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int pfSetFont(int);
int pfSize(float, float);
int putString(int, int, float, float, float);
int PutStringFixPfont(int a4, int a5, float f4, float f5, float f6, float f7);

int PutStringFixPfont(int a4, int a5, float f4, float f5, float f6, float f7)
{
    float u3;
    int t6;
    int t7;
    float u9;
    float u10;
    int t25;
    int t18;
    int t19;
    int t20;
    float u21;
    int t22;
    int t23;
    int t24;
    float u14;
    int stk[15] = {0};

    pfSetFont((0x3 & a4));
    u3 = f7;
    if ((0x20000 & a4) != 0) {
        u3 = (f7 * 1.5f);
    }
    pfSize(f7, u3);
    t6 = 0x0;
    for (;;) {
        t7 = *(signed char *)((a5 + t6));
        if (t7 == 0) {
            break;
        }
        t6 = (t6 + 0x1);
    }
    if ((a4 & 0x4) != 0) {
        u9 = ((float)(t6 - 1) * f6);
        u14 = (f4 - (u9 * 0.5f));
    } else {
        u10 = f4;
        if ((0x8 & a4) != 0) {
            u10 = (f4 - ((float)(t6 - 1) * f6));
        }
        u14 = u10;
    }
    *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x1)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x4);
    t25 = 0x0;
    if ((int)t6 > 0) {
        t18 = (0x0 + a5);
        t19 = 0x0;
        t20 = a4;
        u21 = u14;
        for (;;) {
            t22 = *(signed char *)((t18 + 0x0));
            t18 = (t18 + 0x1);
            t20 = (t20 & 0xFFFFFFF7);
            t23 = *(int *)(((int)stk + 4));
            t20 = (t20 | 0x4);
            *(unsigned char *)((t23 + 0x0)) = t22;
            t24 = putString(t20, (((int)stk + 4) + 0x4), u21, f5, f7);
            t19 = (t19 + 0x1);
            u21 = (u21 + f6);
            if ((int)t19 >= (int)t6) {
                break;
            }
        }
        t25 = t24;
    }
    return t25;
}
