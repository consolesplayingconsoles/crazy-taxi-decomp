/* Straight-line functions with calls and guards (batch gen_ti): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float carGripCurve(float f4, float f5, float f6);

float carGripCurve(float f4, float f5, float f6)
{
    float u10;
    int stk[1];

    int R0;
    float F0;
    float F1;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    int T_;
    F4 = f4;
    F5 = f5;
    F6 = f6;
    L_C02187A:;
    if ((!(0.00999999978f > F4))) goto L_C021890;
    goto L_C021882;
    L_C021882:;
    F5 = ((1.06999993f - (F4 * 21.0f)));
    goto L_C0218EC;
    L_C0218EC:;
    R0 = (0xC02196C);
    F4 = (0.719999969f);
    if ((!(0.719999969f > F5))) goto L_C0218F6;
    goto L_C0218F4;
    L_C0218F4:;
    F5 = (F4);
    goto L_C0218F6;
    L_C0218F6:;
    return F5;
    L_C021890:;
    F6 = ((1.0f + 1.0f));
    if ((!(0.0599999987f > F4))) goto L_C0218A8;
    goto L_C02189C;
    L_C02189C:;
    F4 = ((F4 + -0.00999999978f));
    F5 = (0.859999955f);
    goto L_C0218BA;
    L_C0218BA:;
    u10 = F5;
    u10 = u10 + F6 * F4;
    F0 = (F6);
    F5 = (u10);
    goto L_C0218EC;
    L_C0218A8:;
    F1 = (0.109999999f);
    if ((!(0.109999999f > F4))) goto L_C0218C0;
    goto L_C0218B0;
    L_C0218B0:;
    F4 = ((F4 + -0.0599999987f));
    F5 = (0.959999979f);
    goto L_C0218BA;
    L_C0218C0:;
    if ((!(0.209999993f > F4))) goto L_C0218DA;
    goto L_C0218C8;
    L_C0218C8:;
    F1 = (1.5f);
    F4 = (((F4 + -0.109999999f) * 1.5f));
    F5 = (1.05999994f);
    goto L_C0218EA;
    L_C0218EA:;
    F5 = ((F5 - F4));
    goto L_C0218EC;
    L_C0218DA:;
    F1 = (0.424999982f);
    F4 = (((F4 + -0.209999993f) * 0.424999982f));
    F5 = (0.909999967f);
    goto L_C0218EA;
}
