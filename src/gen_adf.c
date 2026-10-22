/* Straight-line functions with calls and guards (batch gen_adf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float fcvHermite(int a4, int a5, float f4);

float fcvHermite(int a4, int a5, float f4)
{
    float u3;
    float u0;
    float u5;
    float u6;
    float u7;
    float u10;
    float u13;
    float u15;
    float u17;

    u3 = 1.0f;
    if (f4 > 1.0f) {
    } else {
        u0 = f4;
        if (0.0f > f4) {
            u0 = 0.0f;
        }
        u3 = u0;
    }
    u5 = 3.0f;
    u6 = (u3 * u3);
    u7 = (u3 * u3);
    u10 = (u3 * u6);
    u13 = ((*(float *)((a5 + 0x4))) * (((u7 * u5) - (u10 * (1.0f + 1.0f)))));
    u13 = u13 + (((u10 * (1.0f + 1.0f)) - (u7 * u5)) + 1.0f) * (*(float *)((a4 + 0x4)));
    u15 = u13;
    u15 = u15 + ((u3 - (((u3 * u3)) * (1.0f + 1.0f))) + (u3 * u6)) * (*(float *)((a4 + 0xC)));
    u17 = u15;
    u17 = u17 + ((u3 * u6) - (u3 * u3)) * (*(float *)((a5 + 0x8)));
    return u17;
}
