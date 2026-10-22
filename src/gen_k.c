/* Straight-line functions with calls and guards (batch gen_k): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float Drv_ReverseFrame(void);

float Drv_ReverseFrame(void)
{
    float u0;
    int t1;
    float u2;
    float u3;
    float u5;
    float u4;
    float u9;
    float u6;

    u0 = 20.0f;
    t1 = *(short *)0xC1791E0;
    u2 = 3434.0f;
    u3 = -20.0f;
    u5 = u3;
    if (!(u3 > ((-((float)t1 * u0)) / u2))) {
        u4 = ((-((float)t1 * u0)) / u2);
        if (((-((float)t1 * u0)) / u2) > u0) {
            u4 = u0;
        }
        u5 = u4;
    }
    u9 = u5;
    if (0.0f > u5) {
        u6 = 60.0f;
        u9 = (u5 + u6);
    }
    return u9;
}

