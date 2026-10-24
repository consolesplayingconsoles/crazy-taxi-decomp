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

int Exec_Combo_Entry(int a4)
{
    int t1;
    int t5;
    int t93;
    int t90;
    int t134;
    float u15;
    float u30;
    float u45;
    float u60;
    int t68;
    int t69;
    int t110;
    int stk[22];

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x14)) = *(struct mv3 *)(0xC0D0938); }
    if ((int)(*(int *)((a4 + 0x20))) >= (int)0x50) {
        *(unsigned int *)0xC2A91B8 = 0x63;
        t1 = nlCloseEvent(a4);
        *(unsigned int *)0xC2A91B4 = 0x0;
        t134 = t1;
    } else {
        pfSetFont(0x0);
        pfColor(0xFFFFAA00, 0xFFFFFF00, 0xFFFFAA00, 0xFFFFFF00);
        pfSize(1.0f, 1.0f);
        t5 = *(int *)((a4 + 0x18));
        if (t5 != 0) {
            if (t5 != 1) {
                if (t5 != 2) {
                    if (t5 == 3) {
                        *(float *)(((int)stk + 12)) = ((pfLength(0xC0D0990)) * 0.5f);
                        if ((*(int *)0xC2A91B8) != (*(int *)((a4 + 0x18)))) {
                            u15 = (((-(*(float *)(((int)stk + 12)))) + (*(float *)((a4 + 0x14)))) + 530.0f);
                        } else {
                            u15 = (530.0f - (*(float *)(((int)stk + 12))));
                        }
                        pfLocate(u15, 136.0f);
                        pfPuts(0xC0D09A0);
                    }
                } else {
                    *(float *)(((int)stk + 8)) = (pfLength(0xC0D0970));
                    if ((*(int *)0xC2A91B8) != (*(int *)((a4 + 0x18)))) {
                        u30 = (((-((*(float *)(((int)stk + 8))) * 0.5f)) + (*(float *)((a4 + 0x14)))) + 530.0f);
                    } else {
                        u30 = (530.0f - ((*(float *)(((int)stk + 8))) * 0.5f));
                    }
                    pfLocate(u30, 136.0f);
                    pfPuts(0xC0D0980);
                }
            } else {
                *(float *)(((int)stk + 4)) = (pfLength(0xC0D0954));
                if ((*(int *)0xC2A91B8) != (*(int *)((a4 + 0x18)))) {
                    u45 = (((-((*(float *)(((int)stk + 4))) * 0.5f)) + (*(float *)((a4 + 0x14)))) + 530.0f);
                } else {
                    u45 = (530.0f - ((*(float *)(((int)stk + 4))) * 0.5f));
                }
                pfLocate(u45, 136.0f);
                pfPuts(0xC0D0960);
            }
        } else {
            *(float *)(((int)stk + 16)) = (pfLength(0xC0D0944));
            if ((*(int *)0xC2A91B8) != (*(int *)((a4 + 0x18)))) {
                u60 = (((-((*(float *)(((int)stk + 16))) * 0.5f)) + (*(float *)((a4 + 0x14)))) + 530.0f);
            } else {
                u60 = (530.0f - ((*(float *)(((int)stk + 16))) * 0.5f));
            }
            pfLocate(u60, 136.0f);
            pfPuts(0xC0D0944);
        }
        *(unsigned int *)0xC2A7610 = (*(int *)((a4 + 0x1C)));
        if (((int)(*(int *)0xC1EE794) > 0) && (t68 = *(int *)0xC2A7610, t69 = *(int *)0xC2A7614, (int)t69 < (int)t68)) {
            *(unsigned int *)0xC2A7614 = (*(int *)0xC2A7610);
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
                t90 = 0x18;
                if ((*(int *)(((((int)stk + 4) + 0x14) + 0x4))) == 0) {
                    t90 = 0x30;
                }
                t93 = t90;
            }
            pfColor(0xFFFFFF00, 0xFFFFFFFF, 0xFFFFFF00, 0xFFFFFFFF);
            pfSize(1.0f, 1.0f);
            pfLocate((float)(t93 + 0x1E0), 166.0f);
            pfPuts(0xC0D09B0);
            *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 4) + 0x14) + 0x8);
            *(unsigned int *)0xC2A88DC = ((*(int *)((((((int)stk + 4) + 0x14) + 0x8) + 0x0))) + 0x50);
            *(float *)0xC2A88E0 = ((*(float *)((a4 + 0x14))) + 564.0f);
            *(float *)0xC2A88E4 = 166.0f;
            nlObjPutSetFadeColor(1.0f, 1.0f, 0.0f);
            if ((*(int *)(((*(int *)(((int)stk + 20))) + 0x0))) != 0) {
                nlSprPut(0xC2A88DC);
            }
            if (((*(int *)((((((int)stk + 4) + 0x14) + 0x4) + 0x0))) == 0) && (t110 = *(int *)(((((int)stk + 4) + 0x14) + 0x8)), t110 == 0)) {
            } else {
                *(unsigned int *)0xC2A88DC = ((*(int *)((((((int)stk + 4) + 0x14) + 0x4) + 0x0))) + 0x50);
                *(float *)0xC2A88E0 = ((*(float *)((a4 + 0x14))) + 586.0f);
                nlSprPut(0xC2A88DC);
            }
            *(unsigned int *)0xC2A88DC = ((*(int *)(((((int)stk + 4) + 0x14) + 0x0))) + 0x50);
            *(float *)0xC2A88E0 = ((*(float *)((a4 + 0x14))) + 6.1e+02f);
            nlSprPut(0xC2A88DC);
            ResetFadeColor();
        }
        *(float *)((a4 + 0x14)) = ((*(float *)((a4 + 0x14))) * 0.699999988f);
        *(unsigned int *)((a4 + 0x20)) = ((*(int *)((a4 + 0x20))) + 0x1);
        t134 = 0x14;
    }
    return t134;
}
