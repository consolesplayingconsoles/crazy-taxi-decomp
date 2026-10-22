/* Straight-line functions with calls and guards (batch gen_ig): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int nlSprPut();
int FUN_0c055d48(void);

int FUN_0c055d48(void)
{
    int t0;
    float u1;
    float u2;
    float u5;
    float u6;
    float u18;
    int t19;
    int t20;
    float u21;
    float u22;
    int t23;

    t0 = *(int *)0xC2A9178;
    if (t0 == 1) {
        u1 = *(float *)0xC2A9174;
        *(float *)0xC2A9174 = (u1 + 0.199999988f);
        *(float *)0xC2A80D8 = (1.0f - ((u1 + 0.199999988f) * 0.5f));
        *(float *)0xC2A80E0 = 1.0f;
        u2 = *(float *)0xC2A9174;
        if (u2 > (1.0f + 1.0f)) {
            *(unsigned int *)0xC2A9178 = 0x2;
            *(float *)0xC2A9174 = (1.0f + 1.0f);
        }
    } else {
        if (t0 == 5) {
            u5 = *(float *)0xC2A9174;
            *(float *)0xC2A9174 = (u5 - 0.199999988f);
            *(float *)0xC2A80D8 = (1.0f - ((u5 - 0.199999988f) * 0.5f));
            *(float *)0xC2A80E0 = 1.0f;
            u6 = *(float *)0xC2A9174;
            if (!(u6 > 0.0f)) {
                *(unsigned int *)0xC2A9178 = 0x6;
                *(float *)0xC2A9174 = 0.0f;
            }
        } else {
            if (t0 != 0) {
                if (t0 == 6) {
                    *(float *)0xC2A80D8 = 0.0f;
                    *(float *)0xC2A80E0 = 0.0f;
                } else {
                    *(float *)0xC2A80D8 = 0.0f;
                    *(float *)0xC2A80E0 = 1.0f;
                }
            } else {
                *(float *)0xC2A80D8 = 0.0f;
                *(float *)0xC2A80E0 = 0.0f;
            }
        }
    }
    *(unsigned int *)0xC2A80F0 = 0x6;
    *(unsigned int *)0xC2A80BC = 0x102;
    *(float *)0xC2A80D4 = 0.0f;
    *(float *)0xC2A80DC = 1.0f;
    *(float *)0xC2A80C0 = 482.0f;
    *(float *)0xC2A80C4 = 200.0f;
    *(float *)0xC2A80C8 = 0.289999992f;
    *(float *)0xC2A80CC = 1.0f;
    u18 = *(float *)0xC2A9174;
    *(float *)0xC2A80D0 = u18;
    t19 = ((int (*)(int, int))(nlSprPut))(0xC2A80BC, 0xC2A9178);
    *(unsigned int *)0xC2A80BC = 0x102;
    *(unsigned int *)0xC2A80F0 = 0xE;
    *(float *)0xC2A80C0 = 582.0f;
    *(unsigned int *)0xC2A80E4 = 0x8000;
    t20 = ((int (*)(int))(nlSprPut))(0xC2A80BC);
    *(unsigned int *)0xC2A80F0 = 0x6;
    *(unsigned int *)0xC2A80E4 = 0x0;
    *(unsigned int *)0xC2A80BC = 0x1A2;
    *(float *)0xC2A80C0 = 532.0f;
    u21 = *(float *)0xC2A9174;
    u22 = 184.0f;
    u22 = u22 + 40.0f * u21;
    *(float *)0xC2A80C4 = u22;
    *(float *)0xC2A80C8 = 0.099999994f;
    *(float *)0xC2A80CC = 0.699999988f;
    *(float *)0xC2A80D0 = 1.0f;
    t23 = ((int (*)(int))(nlSprPut))(0xC2A80BC);
    *(float *)0xC2A80CC = 1.0f;
    *(float *)0xC2A80C8 = 0.289999992f;
    return 0xC;
}
