/* Straight-line functions with calls and guards (batch gen_alv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float Drv_ReverseFrame(void);

float Drv_ReverseFrame(void)
{
    float u0;
    int t1;
    float u2;
    float u3;
    float u6;
    float u4;
    float u11;

    u0 = *(float *)0xC063328;
    t1 = *(short *)0xC1791E0;
    u2 = *(float *)0xC06332C;
    u3 = *(float *)0xC063330;
    u6 = u3;
    if (u3 > ((-((float)t1 * u0)) / u2)) {
    } else {
        u4 = ((-((float)t1 * u0)) / u2);
        if (((-((float)t1 * u0)) / u2) > u0) {
            u4 = u0;
        }
        u6 = u4;
    }
    u11 = u6;
    if (0.0f > u6) {
        u11 = (u6 + (*(float *)0xC063334));
    }
    return u11;
}
