/* Straight-line functions with calls and guards (batch gen_wx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Init_RankDrum(void);

int Init_RankDrum(void)
{
    int t0;
    int t2;
    int t3;

    *(float *)0xC2A80C0 = 0.0f;
    *(float *)0xC2A80C4 = 0.0f;
    *(float *)0xC2A80C8 = 0.199999988f;
    *(float *)0xC2A80CC = 1.0f;
    *(float *)0xC2A80D0 = (1.0f + 1.0f);
    *(float *)0xC2A80D4 = 0.0f;
    *(float *)0xC2A80D8 = 0.0f;
    *(float *)0xC2A80DC = 1.0f;
    *(float *)0xC2A80E0 = 1.0f;
    *(unsigned int *)0xC2A80E4 = 0x0;
    *(unsigned int *)0xC2A80F0 = 0xA;
    *(float *)0xC2A80E8 = 1.0f;
    *(unsigned int *)0xC2A80EC = 0x2;
    *(unsigned int *)0xC2A8F74 = 0x0;
    *(unsigned int *)0xC2A8F84 = 0x1;
    *(unsigned int *)0xC2A8F78 = 0x0;
    *(unsigned int *)0xC2A8F88 = 0x1;
    *(unsigned int *)0xC2A8F8C = 0x2;
    *(unsigned int *)0xC2A8F90 = 0x0;
    *(unsigned int *)0xC2A9170 = 0x0;
    *(float *)0xC2A9174 = 0.0f;
    t0 = *(int *)0xC2A9168;
    if (t0 == 100) {
        *(unsigned int *)0xC2A8F80 = 0x0;
        *(unsigned int *)0xC2A8F7C = 0x0;
        t3 = t0;
    } else {
        t2 = (int)((int)t0 % (int)0xA);
        *(unsigned int *)0xC2A8F80 = (0x9 - ((int)((int)t0 / (int)0xA)));
        *(unsigned int *)0xC2A8F7C = (0x9 - t2);
        t3 = t2;
    }
    return t3;
}
