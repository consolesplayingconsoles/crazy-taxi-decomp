/* Straight-line functions with calls and guards (batch gen_ep): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float nlTanfReduce(int a4, float f4);

float nlTanfReduce(int a4, float f4)
{
    float u1;
    float u3;
    int t4;
    float u5;
    int t6;
    float u7;

    u1 = -0.5f;
    if (!(0.0f > f4)) {
        u1 = 0.5f;
    }
    *(unsigned int *)((a4 + 0x0)) = (int)(u1 + (f4 / 1.57079625f));
    u3 = (f4 - ((float)(int)(u1 + (f4 / 1.57079625f)) * 1.57080078f));
    u3 = u3 + 4.45445494e-06f * (float)(int)(u1 + (f4 / 1.57079625f));
    t4 = 0xB;
    u5 = 0.0f;
    for (;;) {
        t6 = t4;
        t4 = (t4 - 2);
        u7 = ((float)t6 - u5);
        u5 = (u3 * u3);
        u5 = (u5 / u7);
        if ((int)t4 < (int)0x3) {
            break;
        }
    }
    return (u3 / (1.0f - u5));
}
