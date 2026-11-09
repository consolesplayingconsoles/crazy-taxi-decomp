/* Straight-line functions with calls and guards (batch gen_mc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ResetFadeColor(void);
int nlCloseEvent(int);
int nlObjPutSetFadeColor(float, float, float);
int nlSprPut(int);
int pfColor(int, int, int, int);
float pfLength(int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFont(int);
int pfSize(float, float);
int Exec_Combo_Entry(int a4);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };


int Exec_Combo_Entry(int a4)
{
    int t5;
    int t93;
    int t134;
    float u15;
    float u30;
    float u45;
    float u60;
    int t68;
    int t69;
    int t110;
    int stk[22];
    float R1004;
    float R1008;
    float R1012;
    float R1016;
    int R1020;

    R1004 = *(float *)((int)stk + 4);
    R1008 = *(float *)((int)stk + 8);
    R1012 = *(float *)((int)stk + 12);
    R1016 = *(float *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x14)) = *(struct mv3 *)(0xC0D0938); }
    if ((int)(*(int *)((a4 + 0x20))) >= (int)0x50) {
        (((struct o4_uint *)0xC2A91B4)->v) = 0x63;
        t134 = nlCloseEvent(a4);
        (((struct o0_uint *)0xC2A91B4)->v) = 0x0;
    } else {
        pfSetFont(0x0);
        pfColor(0xFFFFAA00, 0xFFFFFF00, 0xFFFFAA00, 0xFFFFFF00);
        pfSize(1.0f, 1.0f);
        t5 = *(int *)((a4 + 0x18));
        switch (t5) {
        case 0:
            R1016 = (pfLength(0xC0D0944));
            if (((((struct o4_int *)0xC2A91B4)->v)) != (*(int *)((a4 + 0x18)))) {
                u60 = (((-((R1016) * 0.5f)) + (*(float *)((a4 + 0x14)))) + 530.0f);
            } else {
                u60 = (530.0f - ((R1016) * 0.5f));
            }
            pfLocate(u60, 136.0f);
            pfPuts(0xC0D0944);
            break;
        case 1:
            R1004 = (pfLength(0xC0D0954));
            if (((((struct o4_int *)0xC2A91B4)->v)) != (*(int *)((a4 + 0x18)))) {
                u45 = (((-((R1004) * 0.5f)) + (*(float *)((a4 + 0x14)))) + 530.0f);
            } else {
                u45 = (530.0f - ((R1004) * 0.5f));
            }
            pfLocate(u45, 136.0f);
            pfPuts(0xC0D0960);
            break;
        case 2:
            R1008 = (pfLength(0xC0D0970));
            if (((((struct o4_int *)0xC2A91B4)->v)) != (*(int *)((a4 + 0x18)))) {
                u30 = (((-((R1008) * 0.5f)) + (*(float *)((a4 + 0x14)))) + 530.0f);
            } else {
                u30 = (530.0f - ((R1008) * 0.5f));
            }
            pfLocate(u30, 136.0f);
            pfPuts(0xC0D0980);
            break;
        case 3:
            R1012 = ((pfLength(0xC0D0990)) * 0.5f);
            if (((((struct o4_int *)0xC2A91B4)->v)) != (*(int *)((a4 + 0x18)))) {
                u15 = (((-(R1012)) + (*(float *)((a4 + 0x14)))) + 530.0f);
            } else {
                u15 = (530.0f - (R1012));
            }
            pfLocate(u15, 136.0f);
            pfPuts(0xC0D09A0);
            break;
        }
        (((struct o0_uint *)0xC2A7610)->v) = (*(int *)((a4 + 0x1C)));
        if (((int)(*(int *)0xC1EE794) > 0) && (t68 = (((struct o0_int *)0xC2A7610)->v), t69 = (((struct o4_int *)0xC2A7610)->v), (int)t69 < (int)t68)) {
            (((struct o4_uint *)0xC2A7610)->v) = ((((struct o0_int *)0xC2A7610)->v));
        }
        if ((int)(*(int *)((a4 + 0x1C))) <= (int)0x1) {
        } else {
            if ((int)(*(int *)((a4 + 0x1C))) > (int)0x3E7) {
                *(unsigned int *)((a4 + 0x1C)) = 0x3E7;
            }
            *(unsigned int *)((((((int)stk + 4) + 0x14) + 0x8) + 0x0)) = ((int)((int)(*(int *)((a4 + 0x1C))) / (int)0x64));
            *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x4)) = ((int)((int)((int)((int)(*(int *)((a4 + 0x1C))) / (int)0xA)) % (int)0xA));
            *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x0)) = ((int)((int)((*(int *)((a4 + 0x1C))) - ((*(int *)((((((int)stk + 4) + 0x14) + 0x8) + 0x0))) * 0x64)) % (int)0xA));
            t93 = 0x0;
            if ((*(int *)((((((int)stk + 4) + 0x14) + 0x8) + 0x0))) == 0) {
                t93 = 0x18;
                if ((*(int *)(((((int)stk + 4) + 0x14) + 0x4))) == 0) {
                    t93 = 0x30;
                }
            }
            pfColor(0xFFFFFF00, 0xFFFFFFFF, 0xFFFFFF00, 0xFFFFFFFF);
            pfSize(1.0f, 1.0f);
            pfLocate((float)(t93 + 0x1E0), 166.0f);
            pfPuts(0xC0D09B0);
            R1020 = ((((int)stk + 4) + 0x14) + 0x8);
            (((struct o0_uint *)0xC2A88DC)->v) = ((*(int *)((((((int)stk + 4) + 0x14) + 0x8) + 0x0))) + 0x50);
            (((struct o4_float *)0xC2A88DC)->v) = ((*(float *)((a4 + 0x14))) + 564.0f);
            (((struct o8_float *)0xC2A88DC)->v) = 166.0f;
            nlObjPutSetFadeColor(1.0f, 1.0f, 0.0f);
            if ((*(int *)(((R1020) + 0x0))) != 0) {
                nlSprPut(0xC2A88DC);
            }
            if (((*(int *)((((((int)stk + 4) + 0x14) + 0x4) + 0x0))) == 0) && (t110 = *(int *)(((((int)stk + 4) + 0x14) + 0x8)), t110 == 0)) {
            } else {
                (((struct o0_uint *)0xC2A88DC)->v) = ((*(int *)((((((int)stk + 4) + 0x14) + 0x4) + 0x0))) + 0x50);
                (((struct o4_float *)0xC2A88DC)->v) = ((*(float *)((a4 + 0x14))) + 586.0f);
                nlSprPut(0xC2A88DC);
            }
            (((struct o0_uint *)0xC2A88DC)->v) = ((*(int *)(((((int)stk + 4) + 0x14) + 0x0))) + 0x50);
            (((struct o4_float *)0xC2A88DC)->v) = ((*(float *)((a4 + 0x14))) + 6.1e+02f);
            nlSprPut(0xC2A88DC);
            ResetFadeColor();
        }
        *(float *)((a4 + 0x14)) = ((*(float *)((a4 + 0x14))) * 0.699999988f);
        *(unsigned int *)((a4 + 0x20)) = ((*(int *)((a4 + 0x20))) + 0x1);
        t134 = 0x14;
    }
    return t134;
}
