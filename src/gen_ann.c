/* Straight-line functions with calls and guards (batch gen_ann): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float carSlipRatio(float f4, float f5, float f6, float f7, float f8);

float carSlipRatio(float f4, float f5, float f6, float f7, float f8)
{
    int t7;
    int t22;
    int stk[1];

    int R0;
    float F0;
    float F1;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F7;
    float F8;
    int T_;
    F4 = f4;
    F5 = f5;
    F6 = f6;
    F7 = f7;
    F8 = f8;
    L_C0217B4:;
    R0 = (0xC0218FC);
    F7 = (1.0f);
    F8 = ((*(float *)0xC0218FC));
    if ((F5 > F4)) goto L_C0217F4;
    goto L_C0217BE;
    L_C0217BE:;
    F3 = (0.0f);
    if ((F4 == 0.0f)) goto L_C0217E2;
    goto L_C0217C4;
    L_C0217C4:;
    t7 = !(F8 > _builtin_fabsf(F4));
    F1 = (_builtin_fabsf(F4));
    F6 = (_builtin_fabsf(((F4 - F5) / F4)));
    if (t7) goto L_C02182C;
    goto L_C0217D6;
    L_C0217D6:;
    R0 = (0xC021900);
    F6 = ((F6 * _builtin_fabsf((F4 / (*(float *)0xC021900)))));
    goto L_C02182C;
    L_C02182C:;
    if ((!(F6 > F7))) goto L_C021832;
    goto L_C021830;
    L_C021830:;
    F6 = (F7);
    goto L_C021832;
    L_C021832:;
    return F6;
    L_C0217E2:;
    if ((F5 == F3)) goto L_C02181C;
    goto L_C0217E6;
    L_C0217E6:;
    R0 = (0xC021900);
    F6 = ((_builtin_fabsf((F5 / (*(float *)0xC021900))) * F7));
    goto L_C02182C;
    L_C02181C:;
    F6 = (0.0f);
    goto L_C02182C;
    L_C0217F4:;
    F3 = (0.0f);
    if ((F5 == 0.0f)) goto L_C021818;
    goto L_C0217FA;
    L_C0217FA:;
    t22 = !(F8 > _builtin_fabsf(F5));
    F1 = (_builtin_fabsf(F5));
    F6 = (_builtin_fabsf(((F5 - F4) / F5)));
    if (t22) goto L_C02182C;
    goto L_C02180C;
    L_C02180C:;
    R0 = (0xC021900);
    F6 = ((F6 * _builtin_fabsf((F5 / (*(float *)0xC021900)))));
    goto L_C02182C;
    L_C021818:;
    if ((F4 != F3)) goto L_C021820;
    goto L_C02181C;
    L_C021820:;
    R0 = (0xC021900);
    F6 = ((_builtin_fabsf((F4 / (*(float *)0xC021900))) * F7));
    goto L_C02182C;
}
