/* Straight-line functions with calls and guards (batch gen_qc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ResetFadeColor(void);
int nlObjPutSetFadeColor(float, float, float);
int nlSprPut(int);
int ExecScreen(float f4);

int ExecScreen(float f4)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    int t8;
    int t6;
    float u10;
    float u11;
    float u19;
    float u15;

    u0 = *(float *)0xC03B67C;
    u1 = *(float *)0xC2A1A10;
    u2 = *(float *)0xC2A1AE4;
    if (u0 > _builtin_fabsf((u2 - u1))) {
        u3 = *(float *)0xC2A1AE4;
        *(float *)0xC2A1A10 = u3;
        u15 = _builtin_fabsf((u2 - u1));
    } else {
        u4 = *(float *)0xC2A1AE4;
        u5 = *(float *)0xC2A1A10;
        t8 = 0x1;
        if ((u4 - u5) > 0.0f) {
        } else {
            t6 = 0x0;
            if (0.0f > (u4 - u5)) {
                t6 = 0xFFFFFFFF;
            }
            t8 = t6;
        }
        u10 = *(float *)0xC2A1A10;
        u11 = u10;
        u11 = u11 + u0 * (float)t8;
        *(float *)0xC2A1A10 = u11;
        u15 = u11;
    }
    u19 = *(float *)0xC2A1A10;
    if (u19 != 0.0f) {
        nlObjPutSetFadeColor(0.0f, 0.0f, 0.0f);
        nlSprPut(0xC2A19E4);
        return ResetFadeColor();
    }
    return 0x2C;
}
