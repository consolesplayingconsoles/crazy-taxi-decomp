/* Straight-line functions with calls and guards (batch gen_nm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c076200(int a4, float f4);

float FUN_0c076200(int a4, float f4)
{
    float u5;
    float u8;
    int t9;
    float u10;
    int t11;
    float u12;
    float u3;

    if (!(0.0f > f4)) {
        u3 = (0.5f);
    } else {
        u3 = (-0.5f);
    }
    u5 = 1.5707963f;
    *(unsigned int *)((a4 + 0x0)) = (int)(u3 + (f4 / u5));
    u8 = (f4 - ((float)(int)(u3 + (f4 / u5)) * (1.5708008f)));
    u8 = u8 + (4.454455e-06f) * (float)(int)(u3 + (f4 / u5));
    t9 = 0xB;
    u10 = 0.0f;
    for (;;) {
        t11 = t9;
        t9 = (t9 - 2);
        u12 = ((float)t11 - u10);
        u10 = (u8 * u8);
        u10 = (u10 / u12);
        if ((int)t9 < (int)0x3) {
            break;
        }
    }
    return (u8 / (1.0f - u10));
}
