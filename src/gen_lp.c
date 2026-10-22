/* Straight-line functions with calls and guards (batch gen_lp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float BigOneKeyValue(int a4, int a5, float f4);

float BigOneKeyValue(int a4, int a5, float f4)
{
    float u0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    float u17;
    float u18;
    float u21;
    float u19;
    float u24;
    float u25;
    float u27;
    float u30;
    float u32;
    float u34;

    u0 = 3.0f;
    if ((int)(a5 - 1) > 0) {
        t1 = 0xC0738F0;
        t2 = ((0x0 + a4) + 0x10);
        t3 = (0x0 + a4);
        t4 = 0x0;
        t5 = ((0x0 + a4) + 0x10);
        for (;;) {
            if (!((*(float *)(((((t4 << 2) << 2) + a4) + 0x0))) > f4)) {
                t1 = 0x10;
                if ((*(float *)(((((t4 << 2) << 2) + a4) + t1))) > f4) {
                    break;
                }
                if ((*(float *)((t2 + 0x0))) == f4) {
                    t1 = 0x4;
                    return (*(float *)((t5 + t1)));
                }
                t4 = (t4 + 0x1);
                t2 = (t2 + 0x10);
                t5 = (t5 + 0x10);
                t3 = (t3 + 0x10);
                if ((int)t4 >= (int)(a5 - 1)) {
                    return 0.0f;
                }
                continue;
            }
            if ((*(float *)((t2 + 0x0))) == f4) {
                t1 = 0x4;
                return (*(float *)((t5 + t1)));
            }
            t4 = (t4 + 0x1);
            t2 = (t2 + 0x10);
            t5 = (t5 + 0x10);
            t3 = (t3 + 0x10);
            if ((int)t4 >= (int)(a5 - 1)) {
                return 0.0f;
            }
        }
        u17 = *(float *)(((((t4 << 2) << 2) + a4) + t1));
        u18 = *(float *)(((((t4 << 2) << 2) + a4) + 0x0));
        u21 = 0.0f;
        if (0.0f > ((f4 - u18) / (u17 - u18))) {
        } else {
            u19 = ((f4 - u18) / (u17 - u18));
            if (((f4 - u18) / (u17 - u18)) > 1.0f) {
                u19 = 1.0f;
            }
            u21 = u19;
        }
        u24 = (u21 * u21);
        u25 = (u21 * u21);
        u27 = (u21 * u24);
        u30 = ((*(float *)((t3 + 0x14))) * (((u25 * u0) - (u27 * (1.0f + 1.0f)))));
        u30 = u30 + (((u27 * (1.0f + 1.0f)) - (u25 * u0)) + 1.0f) * (*(float *)((t3 + 0x4)));
        u32 = u30;
        u32 = u32 + ((u21 - (((u21 * u21)) * (1.0f + 1.0f))) + (u21 * u24)) * (*(float *)((t3 + 0xC)));
        u34 = u32;
        u34 = u34 + ((u21 * u24) - (u21 * u21)) * (*(float *)((t3 + 0x8)));
        return u34;
    }
    return 0.0f;
}
