/* Straight-line functions with calls and guards (batch gen_xs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int End_Pass_Judgement(void);
int ResetFadeColor(void);
int hudJudgementWobble(void);
int nlObjPutSetFadeColor(float, float, float);
int nlSprPut(int);
void hudDrawJudgement(void);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };


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
    (((struct o0_uint *)0xC2A7EDC)->v) = (*(int *)((((*(int *)0xC2A760C) << 2) + 0xC130B0C)));
    (((struct o4_float *)0xC2A7EDC)->v) = 320.0f;
    (((struct o8_float *)0xC2A7EDC)->v) = 360.0f;
    (((struct oC_float *)0xC2A7EDC)->v) = 0.199999988f;
    u4 = (((struct o18_float *)0xC2A8F94)->v);
    (((struct o14_float *)0xC2A7EDC)->v) = (u4 + 1.0f);
    (((struct o10_float *)0xC2A7EDC)->v) = (u4 + 1.0f);
    (((struct o2C_float *)0xC2A7EDC)->v) = 1.0f;
    (((struct o28_uint *)0xC2A7EDC)->v) = 0x0;
    (((struct o34_uint *)0xC2A7EDC)->v) = 0x200A;
    nlObjPutSetFadeColor(0.0f, 0.0f, 0.0f);
    nlSprPut(0xC2A7EDC);
    (((struct oC_float *)0xC2A7EDC)->v) = 0.099999994f;
    (((struct o4_float *)0xC2A7EDC)->v) = 318.0f;
    (((struct o8_float *)0xC2A7EDC)->v) = 358.0f;
    (((struct o30_uint *)0xC2A7EDC)->v) = 0x2;
    (((struct o0_uint *)0xC2A7EDC)->v) = (*(int *)((((*(int *)0xC2A760C) << 2) + 0xC130B0C)));
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
    t21 = (((struct o0_int *)0xC2A8F94)->v);
    (((struct o0_uint *)0xC2A8F94)->v) = (t21 + 0x1);
    if ((int)(t21 + 0x1) > (int)0xB4) {
        End_Pass_Judgement();
    return;
    }
}
