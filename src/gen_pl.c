/* Straight-line functions with calls and guards (batch gen_pl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c0217b4(float f4, float f5);

float FUN_0c0217b4(float f4, float f5)
{
    float u0;
    int t20;
    float u3;
    float u4;
    float u5;
    float u1;
    float u10;
    float u11;
    float u7;
    int t40;
    float u23;
    float u24;
    float u25;
    float u21;
    float u30;
    float u31;
    float u27;
    float u49;
    float u47;
    float u19;
    float u39;

    u0 = *(float *)0xC0218FC;
    if (!(f5 > f4)) {
        t20 = 0;
        if (f4 != 0.0f) {
            u3 = _builtin_fabsf(((f4 - f5) / f4));
            u4 = f4;
            u5 = _builtin_fabsf(((f4 - f5) / f4));
            if (u0 > _builtin_fabsf(f4)) {
                u1 = *(float *)0xC021900;
                u3 = u1;
                u4 = _builtin_fabsf((f4 / u1));
                u5 = (_builtin_fabsf(((f4 - f5) / f4)) * _builtin_fabsf((f4 / u1)));
            }
            _builtin_fabsf(f4);
            u19 = u5;
            t20 = ((u0 > _builtin_fabsf(f4)));
        } else {
            u10 = f5;
            u11 = 0.0f;
            if (f5 != 0.0f) {
                u7 = *(float *)0xC021900;
                u10 = _builtin_fabsf((f5 / u7));
                u11 = (_builtin_fabsf((f5 / u7)) * 1.0f);
            }
            u19 = u11;
            t20 = ((f5 == 0.0f));
        }
        u47 = u19;
    } else {
        t40 = 0;
        if (f5 != 0.0f) {
            u23 = _builtin_fabsf(((f5 - f4) / f5));
            u24 = f5;
            u25 = _builtin_fabsf(((f5 - f4) / f5));
            if (u0 > _builtin_fabsf(f5)) {
                u21 = *(float *)0xC021900;
                u23 = u21;
                u24 = _builtin_fabsf((f5 / u21));
                u25 = (_builtin_fabsf(((f5 - f4) / f5)) * _builtin_fabsf((f5 / u21)));
            }
            _builtin_fabsf(f5);
            u39 = u25;
            t40 = ((u0 > _builtin_fabsf(f5)));
        } else {
            u30 = f4;
            u31 = 0.0f;
            if (f4 == 0.0f) {
            } else {
                u27 = *(float *)0xC021900;
                u30 = _builtin_fabsf((f4 / u27));
                u31 = (_builtin_fabsf((f4 / u27)) * 1.0f);
            }
            u39 = u31;
            t40 = ((f4 == 0.0f));
        }
        u47 = u39;
    }
    u49 = u47;
    if (u47 > 1.0f) {
        u49 = 1.0f;
    }
    return u49;
}
