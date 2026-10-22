/* Straight-line functions with calls and guards (batch gen_afy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float carEngineTorque(float f4, float f5, float f6, float f7);

float carEngineTorque(float f4, float f5, float f6, float f7)
{
    float u13;
    float u6;
    float u1;
    float u29;
    float u21;
    float u15;
    float u37;

    if ((int)(*(int *)0xC179488) < (int)0x4) {
        u13 = (f4 * 0.00599999959f);
        if (!(f4 > 2000.0f)) {
        } else {
            u6 = (15.0f - ((f4 + -6000.0f) * 0.00599999959f));
            if (!(f4 > 6000.0f)) {
                u1 = 12.0f;
                u1 = u1 + 0.000749999948f * (f4 + -2000.0f);
                u6 = u1;
            }
            u13 = u6;
        }
        u37 = u13;
    } else {
        u29 = (f4 * 0.00549999997f);
        if (!(f4 > 2000.0f)) {
        } else {
            u21 = (14.0f - ((f4 + -5500.0f) * 0.0055999998f));
            if (!(f4 > 5500.0f)) {
                u15 = 11.0f;
                u15 = u15 + 0.000857142848f * (f4 + -2000.0f);
                u21 = u15;
            }
            u29 = u21;
        }
        u37 = u29;
    }
    return u37;
}
