/* Straight-line functions with calls and guards (batch gen_wi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float carGripCurve(float f4, float f5, float f6);

float carGripCurve(float f4, float f5, float f6)
{
    float u30;
    float u0;
    float u1;
    float u5;
    float u6;
    float u33;
    float u22;
    float u14;

    u30 = (1.06999993f - (f4 * 21.0f));
    if (0.00999999978f > f4) {
    } else {
        if (0.0599999987f > f4) {
            u0 = 0.859999955f;
            u0 = u0 + (1.0f + 1.0f) * (f4 + -0.00999999978f);
            u22 = u0;
        } else {
            if (0.109999999f > f4) {
                u1 = 0.959999979f;
                u1 = u1 + (1.0f + 1.0f) * (f4 + -0.0599999987f);
                u14 = u1;
            } else {
                u5 = ((f4 + -0.209999993f) * 0.424999982f);
                u6 = 0.909999967f;
                if (0.209999993f > f4) {
                    u5 = ((f4 + -0.109999999f) * 1.5f);
                    u6 = 1.05999994f;
                }
                u14 = (u6 - u5);
            }
            u22 = u14;
        }
        u30 = u22;
    }
    u33 = u30;
    if (0.719999969f > u30) {
        u33 = 0.719999969f;
    }
    return u33;
}
