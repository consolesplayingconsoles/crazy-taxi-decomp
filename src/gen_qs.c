/* Straight-line functions with calls and guards (batch gen_qs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int End_Pass_Ranking(void);
extern int nlSprPut();
int hudRankPanelSlide(void);

int hudRankPanelSlide(void)
{
    int t0;
    int t1;
    int t16;
    int t4;
    int t28;
    float u29;
    int t30;
    int t35;
    int t23;
    int t10;

    t0 = *(int *)0xC2A9178;
    if (t0 == 0) {
        t1 = *(int *)0xC2A9170;
        *(unsigned int *)0xC2A9170 = (t1 + 0x1);
        if ((int)(t1 + 0x1) > (int)0xA) {
            *(unsigned int *)0xC2A9178 = 0x1;
            *(unsigned int *)0xC2A9170 = 0xA;
        }
        t23 = 0xC2A9178;
    } else {
        t16 = 0xC2A9178;
        if (t0 == 6) {
            t4 = *(int *)0xC2A9170;
            *(unsigned int *)0xC2A9170 = (t4 - 1);
            if ((int)(t4 - 1) < 0) {
                *(unsigned int *)0xC2A9170 = 0x0;
                End_Pass_Ranking();
            } else {
                t10 = 0xC2A9178;
            }
            t16 = t10;
        }
        t23 = t16;
    }
    *(float *)0xC2A80C0 = (*(float *)0xC055D24);
    *(float *)0xC2A80C4 = (*(float *)0xC055D28);
    *(float *)0xC2A80C8 = (*(float *)0xC055D2C);
    *(float *)0xC2A80D4 = 0.0f;
    t28 = *(int *)0xC2A9170;
    u29 = *(float *)0xC055D30;
    *(float *)0xC2A80CC = ((float)t28 * u29);
    *(float *)0xC2A80DC = ((float)t28 * u29);
    *(float *)0xC2A80D0 = 1.0f;
    *(float *)0xC2A80D8 = 0.0f;
    *(float *)0xC2A80E0 = 1.0f;
    *(unsigned int *)0xC2A80F0 = 0xB;
    t30 = *(int *)0xC2A917C;
    *(unsigned int *)0xC2A917C = (t30 + 0x1);
    if ((int)((int)((int)(t30 + 0x1) % (int)0x3D)) < (int)0x32) {
        *(unsigned int *)0xC2A80BC = 0x157;
    } else {
        *(unsigned int *)0xC2A80BC = 0x158;
    }
    *(float *)0xC2A80E8 = 1.0f;
    *(unsigned int *)0xC2A80E4 = 0x0;
    t35 = ((int (*)(int, int))(nlSprPut))(0xC2A80BC, t23);
    *(unsigned int *)0xC2A80F0 = 0x9;
    *(float *)0xC2A80D4 = (1.0f - ((float)(*(int *)0xC2A9170) * u29));
    *(float *)0xC2A80DC = 1.0f;
    return ((int (*)(int))(nlSprPut))(0xC2A80BC);
}
