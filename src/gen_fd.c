/* Straight-line functions with calls and guards (batch gen_fd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Put_Remain_Time_Gauge(int);
int Put_Remain_Time_Frame(void);
int nd_SprPut(int, int, float, float);
int ResetFadeColor(void);
int Sound_Request(int, int);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int nlCloseEvent(int);
int nlObjPutSetFadeColor(float, float, float);
int nlSprPut(int);
int pfColor(int, int, int, int);
float pfLength(int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFont(int);
int pfSize(float, float);
int Put_Remain_Time_Mode2(void);
int Exec_Combo_Entry(int a4);


int Exec_Combo_Entry(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t8;
    float t9;
    int t10;
    int t11;
    float u12;
    float u13;
    float u14;
    float t24;
    int t25;
    int t26;
    float u27;
    float u28;
    float u29;
    float t39;
    int t40;
    int t41;
    float u42;
    float u43;
    float u44;
    float t54;
    int t55;
    int t56;
    float u57;
    float u58;
    float u59;
    int t69;
    int t70;
    int t71;
    int t72;
    int t73;
    int t82;
    int t83;
    int t85;
    int t86;
    int t87;
    int t88;
    int t89;
    int t90;
    int t91;
    int t92;
    int t93;
    int t98;
    int t94;
    int t95;
    int t104;
    float u105;
    int t107;
    int t108;
    int t114;
    int t115;
    int t116;
    float u117;
    int t124;
    float u125;
    int t132;
    float u133;
    float u134;
    float u147;
    int t148;
    int t149;
    float u18;
    float u33;
    float u48;
    float u63;
    int stk[22] = {0};

    t0 = *(int *)0xC0D0940;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x8)) = t0;
    t1 = *(int *)0xC0D093C;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x4)) = t1;
    t2 = *(int *)0xC0D0938;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x0)) = t2;
    t3 = *(int *)((a4 + 0x20));
    if ((int)t3 >= (int)0x50) {
        *(unsigned int *)0xC2A91B8 = 0x63;
        t4 = nlCloseEvent(a4);
        *(unsigned int *)0xC2A91B4 = 0x0;
        t149 = t4;
    } else {
        pfSetFont(0x0);
        pfColor(0xFFFFAA00, 0xFFFFFF00, 0xFFFFAA00, 0xFFFFFF00);
        pfSize(1.0f, 1.0f);
        t8 = *(int *)((a4 + 0x18));
        if (t8 != 0) {
            if (t8 != 1) {
                if (t8 != 2) {
                    if (t8 == 3) {
                        t9 = pfLength(0xC0D0990);
                        *(float *)(((int)stk + 12)) = (t9 * 0.5f);
                        t10 = *(int *)((a4 + 0x18));
                        t11 = *(int *)0xC2A91B8;
                        if (t11 != t10) {
                            u12 = *(float *)(((int)stk + 12));
                            u13 = *(float *)((a4 + 0x14));
                            u18 = (((-u12) + u13) + 530.0f);
                        } else {
                            u14 = *(float *)(((int)stk + 12));
                            u18 = (530.0f - u14);
                        }
                        pfLocate(u18, 136.0f);
                        pfPuts(0xC0D09A0);
                    }
                } else {
                    t24 = pfLength(0xC0D0970);
                    *(float *)(((int)stk + 8)) = t24;
                    t25 = *(int *)((a4 + 0x18));
                    t26 = *(int *)0xC2A91B8;
                    if (t26 != t25) {
                        u27 = *(float *)(((int)stk + 8));
                        u28 = *(float *)((a4 + 0x14));
                        u33 = (((-(u27 * 0.5f)) + u28) + 530.0f);
                    } else {
                        u29 = *(float *)(((int)stk + 8));
                        u33 = (530.0f - (u29 * 0.5f));
                    }
                    pfLocate(u33, 136.0f);
                    pfPuts(0xC0D0980);
                }
            } else {
                t39 = pfLength(0xC0D0954);
                *(float *)(((int)stk + 4)) = t39;
                t40 = *(int *)0xC2A91B8;
                t41 = *(int *)((a4 + 0x18));
                if (t40 != t41) {
                    u42 = *(float *)(((int)stk + 4));
                    u43 = *(float *)((a4 + 0x14));
                    u48 = (((-(u42 * 0.5f)) + u43) + 530.0f);
                } else {
                    u44 = *(float *)(((int)stk + 4));
                    u48 = (530.0f - (u44 * 0.5f));
                }
                pfLocate(u48, 136.0f);
                pfPuts(0xC0D0960);
            }
        } else {
            t54 = pfLength(0xC0D0944);
            *(float *)(((int)stk + 16)) = t54;
            t55 = *(int *)((a4 + 0x18));
            t56 = *(int *)0xC2A91B8;
            if (t56 != t55) {
                u57 = *(float *)(((int)stk + 16));
                u58 = *(float *)((a4 + 0x14));
                u63 = (((-(u57 * 0.5f)) + u58) + 530.0f);
            } else {
                u59 = *(float *)(((int)stk + 16));
                u63 = (530.0f - (u59 * 0.5f));
            }
            pfLocate(u63, 136.0f);
            pfPuts(0xC0D0944);
        }
        t69 = *(int *)((a4 + 0x1C));
        *(unsigned int *)0xC2A7610 = t69;
        t70 = *(int *)0xC1EE794;
        if ((int)t70 > 0) {
            t71 = *(int *)0xC2A7610;
            t72 = *(int *)0xC2A7614;
            if ((int)t72 < (int)t71) {
                t73 = *(int *)0xC2A7610;
                *(unsigned int *)0xC2A7614 = t73;
            }
        }
        t82 = *(int *)((a4 + 0x1C));
        if ((int)t82 <= (int)0x1) {
        } else {
            t83 = *(int *)((a4 + 0x1C));
            if ((int)t83 > (int)0x3E7) {
                *(unsigned int *)((a4 + 0x1C)) = 0x3E7;
            }
            t85 = *(int *)((a4 + 0x1C));
            t86 = (int)((int)t85 / (int)0x64);
            *(unsigned int *)((((((int)stk + 4) + 0x14) + 0x8) + 0x0)) = t86;
            t87 = *(int *)((a4 + 0x1C));
            t88 = (int)((int)t87 / (int)0xA);
            t89 = (int)((int)t88 % (int)0xA);
            *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x4)) = t89;
            t90 = *(int *)((((((int)stk + 4) + 0x14) + 0x8) + 0x0));
            t91 = *(int *)((a4 + 0x1C));
            t92 = (int)((int)(t91 - (t90 * 0x64)) % (int)0xA);
            *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x0)) = t92;
            t93 = *(int *)((((((int)stk + 4) + 0x14) + 0x8) + 0x0));
            t98 = 0x0;
            if (t93 == 0) {
                t94 = *(int *)(((((int)stk + 4) + 0x14) + 0x4));
                t95 = 0x18;
                if (t94 == 0) {
                    t95 = 0x30;
                }
                t98 = t95;
            }
            pfColor(0xFFFFFF00, 0xFFFFFFFF, 0xFFFFFF00, 0xFFFFFFFF);
            pfSize(1.0f, 1.0f);
            pfLocate((float)(t98 + 0x1E0), 166.0f);
            pfPuts(0xC0D09B0);
            *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 4) + 0x14) + 0x8);
            t104 = *(int *)((((((int)stk + 4) + 0x14) + 0x8) + 0x0));
            *(unsigned int *)0xC2A88DC = (t104 + 0x50);
            u105 = *(float *)((a4 + 0x14));
            *(float *)0xC2A88E0 = (u105 + 564.0f);
            *(float *)0xC2A88E4 = 166.0f;
            nlObjPutSetFadeColor(1.0f, 1.0f, 0.0f);
            t107 = *(int *)(((int)stk + 20));
            t108 = *(int *)((t107 + 0x0));
            if (t108 != 0) {
                nlSprPut(0xC2A88DC);
            }
            t114 = *(int *)((((((int)stk + 4) + 0x14) + 0x4) + 0x0));
            if (t114 == 0) {
                t115 = *(int *)(((((int)stk + 4) + 0x14) + 0x8));
                if (t115 != 0) {
                    t116 = *(int *)((((((int)stk + 4) + 0x14) + 0x4) + 0x0));
                    *(unsigned int *)0xC2A88DC = (t116 + 0x50);
                    u117 = *(float *)((a4 + 0x14));
                    *(float *)0xC2A88E0 = (u117 + 586.0f);
                    nlSprPut(0xC2A88DC);
                }
            } else {
                t124 = *(int *)((((((int)stk + 4) + 0x14) + 0x4) + 0x0));
                *(unsigned int *)0xC2A88DC = (t124 + 0x50);
                u125 = *(float *)((a4 + 0x14));
                *(float *)0xC2A88E0 = (u125 + 586.0f);
                nlSprPut(0xC2A88DC);
            }
            t132 = *(int *)(((((int)stk + 4) + 0x14) + 0x0));
            *(unsigned int *)0xC2A88DC = (t132 + 0x50);
            u133 = *(float *)0xC0568C4;
            u134 = *(float *)((a4 + 0x14));
            *(float *)0xC2A88E0 = (u134 + u133);
            nlSprPut(0xC2A88DC);
            ResetFadeColor();
        }
        u147 = *(float *)((a4 + 0x14));
        *(float *)((a4 + 0x14)) = (u147 * 0.699999988f);
        t148 = *(int *)((a4 + 0x20));
        *(unsigned int *)((a4 + 0x20)) = (t148 + 0x1);
        t149 = 0x14;
    }
    return t149;
}
