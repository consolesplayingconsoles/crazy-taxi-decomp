/* Straight-line functions with calls and guards (batch gen_bb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern float _builtin_sqrtf(float);
int nlArcTan(float);
int nlArcSin(float f4);
int carInitDriveSplit(int a4);

int nlArcSin(float f4)
{
    int t0;

    if ((f4 < 0.0f ? -f4 : f4) > 1.0f) {
        return 0x0;
    }
    if (_builtin_sqrtf((1.0f - (f4 * f4))) != 0.0f) {
        return nlArcTan((f4 / _builtin_sqrtf((1.0f - (f4 * f4)))));
    }
    t0 = 0xC000;
    if (f4 > 0.0f) {
        t0 = 0x4000;
    }
    return t0;
}


