/* Straight-line functions with calls and guards (batch gen_adm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int nlSprPut();
int hudDrawRankDrum(void);

int hudDrawRankDrum(void)
{
    int t0;
    int t13;
    int t15;
    int t26;
    int t42;
    float u60;
    int t68;
    float u79;
    int t82;
    int t11;
    int t28;
    int t29;
    int t36;
    int t37;

    t0 = *(int *)0xC2A9178;
    if (t0 == 0) {
    } else {
        if (t0 == 6) {
        } else {
            if ((*(int *)0xC2A8F80) == 8) {
                t11 = (*(int *)((((*(int *)0xC2A8F7C) << 2) + 0xC130D00)));
            } else {
                t11 = (*(int *)((((*(int *)0xC2A8F7C) << 2) + 0xC130CD8)));
            }
            *(unsigned int *)0xC2A80BC = t11;
            t13 = *(int *)0xC2A9178;
            if ((t13 != 1) && (t13 != 5)) {
                *(unsigned int *)0xC2A80F0 = 0xE;
                *(float *)0xC2A80D8 = 0.0f;
                if ((*(int *)0xC2A8F84) == 0) {
                    t15 = *(int *)0xC2A8F90;
                    *(float *)0xC2A80E0 = (1.0f - ((float)t15 * 0.25f));
                    *(float *)0xC2A80D0 = (1.0f - ((float)t15 * 0.25f));
                } else {
                    *(float *)0xC2A80E0 = 1.0f;
                    *(float *)0xC2A80D0 = 1.0f;
                }
                *(float *)0xC2A80C0 = 564.0f;
                *(float *)0xC2A80C4 = 264.0f;
            } else {
                *(unsigned int *)0xC2A80F0 = 0x6;
                *(float *)0xC2A80D8 = (1.0f - ((*(float *)0xC2A9174) * 0.5f));
                *(float *)0xC2A80E0 = 1.0f;
                *(float *)0xC2A80D0 = ((*(float *)0xC2A9174) * 0.5f);
                *(float *)0xC2A80C0 = 564.0f;
                *(float *)0xC2A80C4 = 200.0f;
            }
            *(unsigned int *)0xC2A80E4 = 0x0;
            t26 = ((int (*)(int))(nlSprPut))(0xC2A80BC);
            if (((*(int *)0xC2A9178) != 1) && ((t28 = *(int *)0xC2A9178, t28 != 5) && (t29 = *(int *)0xC2A8F84, t29 == 0))) {
                *(float *)0xC2A80C4 = ((*(float *)0xC2A80C4) - 64.0f);
                if ((*(int *)0xC2A8F80) == 8) {
                    t36 = (((int)((int)((*(int *)0xC2A8F7C) + 0x1) % (int)0xA)) << 2);
                    t37 = 0xC130D00;
                } else {
                    t36 = (((int)((int)((*(int *)0xC2A8F7C) + 0x1) % (int)0xA)) << 2);
                    t37 = 0xC130CD8;
                }
                *(unsigned int *)0xC2A80BC = (*(int *)((t37 + t36)));
                *(unsigned int *)0xC2A80F0 = 0x6;
                *(float *)0xC2A80D0 = ((float)(*(int *)0xC2A8F90) * 0.25f);
                *(float *)0xC2A80D8 = (1.0f - ((float)(*(int *)0xC2A8F90) * 0.25f));
                *(float *)0xC2A80E0 = 1.0f;
                t42 = ((int (*)(int, int))(nlSprPut))(0xC2A80BC, 0xA);
            }
        }
    }
    *(unsigned int *)0xC2A80BC = 0x128;
    *(float *)0xC2A80C0 = (532.0f);
    u60 = (212.0f);
    u60 = u60 + (26.0f) * (*(float *)0xC2A9174);
    *(float *)0xC2A80C4 = u60;
    *(float *)0xC2A80C8 = (0.049999997f);
    *(float *)0xC2A80CC = (6.0f);
    *(float *)0xC2A80D0 = ((*(float *)0xC2A9174) * (1.0f + 1.0f));
    *(float *)0xC2A80D8 = (1.0f - ((*(float *)0xC2A9174) * 0.5f));
    *(float *)0xC2A80E0 = 1.0f;
    *(float *)0xC2A80E8 = (0.7f);
    *(unsigned int *)0xC2A80F0 = 0x200E;
    *(unsigned int *)0xC2A80E4 = 0x0;
    if (!((1.4f) > (*(float *)0xC2A9174))) {
        t68 = ((int (*)(int))(nlSprPut))(0xC2A80BC);
    }
    *(float *)0xC2A80C4 = 200.0f;
    *(float *)0xC2A80D0 = ((*(float *)0xC2A9174) * (3.0f));
    u79 = 4.0f;
    if ((*(float *)0xC2A80D0) > u79) {
        *(float *)0xC2A80D0 = u79;
    }
    *(unsigned int *)0xC2A80E4 = 0x8000;
    t82 = ((int (*)(int))(nlSprPut))(0xC2A80BC);
    *(unsigned int *)0xC2A80E4 = 0x0;
    return t82;
}
