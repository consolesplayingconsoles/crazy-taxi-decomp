/* Straight-line functions with calls and guards (batch gen_hp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float nlExp(float);
float nlLog(float);
float nlPow(float f4, float f5);

float nlPow(float f4, float f5)
{
    register int t1;
    register float u0;
    register float u1;
    register float u2;

    if (f4 == 0.0f) {
        u0 = 0.0f;
        if (!(f5 > 0.0f)) {
            u0 = 1.0f;
        }
        return u0;
    }
    if (f5 == (float)(int)f5) {
        t1 = (int)f5;
        u0 = f4;
        if ((int)(int)f5 < 0) {
            t1 = (-(int)f5);
            u0 = (1.0f / f4);
        }
        u1 = 1.0f;
        u2 = u0;
        for (;;) {
            if ((t1 & 0x1) != 0) {
                u1 = (u1 * u2);
            }
            t1 = ((int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u)));
            t1 = (t1 >> 1);
            if (t1 != 0) {
                u2 = (u2 * u2);
                continue;
            }
            break;
        }
        return u1;
    }
    if (0.0f > f4) {
        return 0.0f;
    }
    u0 = nlLog(f4);
    return nlExp((f5 * u0));
}
