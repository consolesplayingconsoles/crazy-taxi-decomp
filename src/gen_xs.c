/* Straight-line functions with calls and guards (batch gen_xs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int End_Pass_Judgement(void);
int ResetFadeColor(void);
int hudJudgementWobble(void);
int nlObjPutSetFadeColor(float, float, float);
int nlSprPut(int);
void hudDrawJudgement(void);

void hudDrawJudgement(void)
{
    int t0;
    float u4;
    int t9;
    float u13;
    float u14;
    float u15;
    int t21;

    t0 = *(int *)0xC2A760C;
    if ((int)t0 <= (int)0xFFFFFFFE) {
        return;
    }
    if ((int)t0 > (int)0x2) {
        return;
    }
    hudJudgementWobble();
    *(unsigned int *)0xC2A7EDC = (*(int *)((((*(int *)0xC2A760C) << 2) + 0xC130B0C)));
    *(float *)0xC2A7EE0 = 320.0f;
    *(float *)0xC2A7EE4 = 360.0f;
    *(float *)0xC2A7EE8 = 0.199999988f;
    u4 = *(float *)0xC2A8FAC;
    *(float *)0xC2A7EF0 = (u4 + 1.0f);
    *(float *)0xC2A7EEC = (u4 + 1.0f);
    *(float *)0xC2A7F08 = 1.0f;
    *(unsigned int *)0xC2A7F04 = 0x0;
    *(unsigned int *)0xC2A7F10 = 0x200A;
    nlObjPutSetFadeColor(0.0f, 0.0f, 0.0f);
    nlSprPut(0xC2A7EDC);
    *(float *)0xC2A7EE8 = 0.099999994f;
    *(float *)0xC2A7EE0 = 318.0f;
    *(float *)0xC2A7EE4 = 358.0f;
    *(unsigned int *)0xC2A7F0C = 0x2;
    *(unsigned int *)0xC2A7EDC = (*(int *)((((*(int *)0xC2A760C) << 2) + 0xC130B0C)));
    t9 = *(int *)0xC2A760C;
    if (t9 == 2) {
        nlObjPutSetFadeColor(0.0f, 1.0f, 0.0f);
    } else {
        if (t9 == 1) {
            nlObjPutSetFadeColor(1.0f, 0.901960731f, 0.0f);
        } else {
            u13 = 0.988235235f;
            u14 = 0.0f;
            u15 = 0.0f;
            if ((t9 != 0) && (t9 == -1)) {
                u13 = 0.686274469f;
                u14 = 0.0980392098f;
                u15 = 0.56078428f;
            }
            nlObjPutSetFadeColor(u13, u14, u15);
        }
    }
    nlSprPut(0xC2A7EDC);
    ResetFadeColor();
    t21 = *(int *)0xC2A8F94;
    *(unsigned int *)0xC2A8F94 = (t21 + 0x1);
    if ((int)(t21 + 0x1) > (int)0xB4) {
        End_Pass_Judgement();
    return;
    }
}
