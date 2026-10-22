/* Straight-line functions with calls and guards (batch gen_hv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ResetFadeColor(void);
int nd_SprPut(int, int, float, float);
int nlObjPutSetFadeColor(float, float, float);
int nlSprPut(int);
int pfColor(int, int, int, int);
int pfSetFont(int);
int pfSize(float, float);
int Put_JumpDistance(void);

int Put_JumpDistance(void)
{
    float u14;
    int t15;
    int t17;
    float u36;
    float u37;
    int t7;
    float u8;
    float u9;
    int t29;
    float u30;
    float u41;
    int t42;
    float u43;
    float u44;
    float u73;
    int t74;
    float u75;
    float u76;
    float u105;
    int t106;
    float u107;
    float u108;
    float u119;
    int t120;
    float u121;
    float u122;
    float u130;
    int t131;
    float u132;
    float u133;
    int stk[18] = {0};

    { struct mv5 { int w[5]; }; *(struct mv5 *)(((int)stk + 4)) = *(struct mv5 *)(0xC0D0F14); }
    pfSetFont(0x0);
    pfColor(0xFFFFAA00, 0xFFFFFFFF, 0xFFFFAA00, 0xFFFFFFFF);
    pfSize(1.0f, 1.0f);
    if ((*(int *)0xC1EE214) == 0) {
        nlObjPutSetFadeColor(0.0f, 0.799999952f, 0.399999976f);
        *(float *)0xC2A98A8 = 1.0f;
        *(float *)0xC2A98AC = 1.0f;
        t7 = 0x1F5;
        u8 = 523.0f;
        u9 = 80.0f;
    } else {
        nlObjPutSetFadeColor(1.0f, 0.5f, 0.899999976f);
        *(float *)0xC2A98A8 = 1.0f;
        *(float *)0xC2A98AC = 1.0f;
        t7 = 0x1F4;
        u8 = 555.0f;
        u9 = 83.0f;
    }
    nd_SprPut(0xC2A9898, t7, u8, u9);
    ResetFadeColor();
    u14 = *(float *)(((*(int *)0xC2A996C) + 0x0));
    *(unsigned int *)0xC1311B8 = (int)(u14 * 100.0f);
    t15 = (int)(u14 * 100.0f);
    if ((int)(int)(u14 * 100.0f) < 0) {
        t15 = 0x0;
    }
    t17 = t15;
    if ((int)t15 > (int)0x1869F) {
        t17 = 0x1869F;
    }
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x0)) = ((int)((int)t17 / (int)0x2710));
    *(unsigned int *)((((int)stk + 4) + 0xC)) = ((int)((int)((int)((int)t17 / (int)0x3E8)) % (int)0xA));
    *(unsigned int *)((((int)stk + 4) + 0x8)) = ((int)((int)((int)((int)t17 / (int)0x64)) % (int)0xA));
    *(unsigned int *)((((int)stk + 4) + 0x4)) = ((int)((int)((int)((int)t17 / (int)0xA)) % (int)0xA));
    *(unsigned int *)((((int)stk + 4) + 0x0)) = ((int)((int)(t17 - ((*(int *)(((((int)stk + 4) + 0x10) + 0x0))) * 0x2710)) % (int)0xA));
    u36 = 1.0f;
    u37 = 0.0f;
    if (((*(int *)0xC1EE214) == 0) && (t29 = *(int *)0xC2A996C, u30 = *(float *)((t29 + 0x0)), !(150.0f > u30))) {
        u36 = 0.0f;
        u37 = 1.0f;
    }
    nlObjPutSetFadeColor(u36, 1.0f, u37);
    *(float *)0xC2A98A8 = 1.0f;
    *(float *)0xC2A98AC = 1.0f;
    nd_SprPut(0xC2A9898, 0x1E9, 601.0f, 108.0f);
    *(float *)0xC2A98A0 = 102.0f;
    *(float *)0xC2A98C4 = 1.0f;
    *(unsigned int *)0xC2A98C0 = 0x0;
    *(unsigned int *)0xC2A98CC = 0x200A;
    *(float *)0xC2A989C = 464.0f;
    if ((((*(int *)0xC1EE214) == 0) && (u41 = *(float *)0xC179148, u41 > -5100.0f)) || ((t42 = *(int *)0xC1EE214, t42 == 20) && ((u43 = *(float *)0xC17914C, !(1350.0f > u43)) && (u44 = *(float *)0xC17914C, !(u44 > 1950.0f))))) {
        *(unsigned int *)0xC2A9898 = ((*(int *)(((((int)stk + 4) + 0x10) + 0x0))) + 0x50);
        *(float *)0xC2A98A8 = 1.0f;
        *(float *)0xC2A98AC = 1.0f;
        if ((*(int *)(((((int)stk + 4) + 0x10) + 0x0))) == 0) {
        } else {
            nlSprPut(0xC2A9898);
        }
    } else {
        if ((*(int *)0xC1EE214) == 0) {
            *(unsigned int *)0xC2A9898 = 0x1E0;
            nlSprPut(0xC2A9898);
        }
    }
    *(float *)0xC2A989C = 488.0f;
    if ((((*(int *)0xC1EE214) == 0) && (u73 = *(float *)0xC179148, u73 > -5100.0f)) || ((t74 = *(int *)0xC1EE214, t74 == 20) && ((u75 = *(float *)0xC17914C, !(1350.0f > u75)) && (u76 = *(float *)0xC17914C, !(u76 > 1950.0f))))) {
        *(unsigned int *)0xC2A9898 = ((*(int *)(((((int)stk + 4) + 0xC) + 0x0))) + 0x50);
        *(float *)0xC2A98A8 = 1.0f;
        *(float *)0xC2A98AC = 1.0f;
        if ((*(int *)(((((int)stk + 4) + 0xC) + 0x0))) == 0) {
            if ((*(int *)((((int)stk + 4) + 0x10))) != 0) {
                nlSprPut(0xC2A9898);
            }
        } else {
            nlSprPut(0xC2A9898);
        }
    } else {
        *(unsigned int *)0xC2A9898 = 0x1E0;
        nlSprPut(0xC2A9898);
    }
    if ((((*(int *)0xC1EE214) == 0) && (u105 = *(float *)0xC179148, u105 > -5100.0f)) || ((t106 = *(int *)0xC1EE214, t106 == 20) && ((u107 = *(float *)0xC17914C, !(1350.0f > u107)) && (u108 = *(float *)0xC17914C, !(u108 > 1950.0f))))) {
        *(unsigned int *)0xC2A9898 = ((*(int *)((((int)stk + 4) + 0x8))) + 0x50);
        *(float *)0xC2A98A8 = 1.0f;
        *(float *)0xC2A98AC = 1.0f;
    } else {
        *(unsigned int *)0xC2A9898 = 0x1E0;
    }
    *(float *)0xC2A989C = 512.0f;
    nlSprPut(0xC2A9898);
    *(unsigned int *)0xC2A9898 = 0x5C;
    *(float *)0xC2A989C = 532.0f;
    *(float *)0xC2A98A0 = ((*(float *)0xC2A98A0) + 16.0f);
    *(float *)0xC2A98A8 = 1.0f;
    *(float *)0xC2A98AC = 1.0f;
    nlSprPut(0xC2A9898);
    *(float *)0xC2A98A0 = ((*(float *)0xC2A98A0) - 16.0f);
    if ((((*(int *)0xC1EE214) == 0) && (u119 = *(float *)0xC179148, u119 > -5100.0f)) || ((t120 = *(int *)0xC1EE214, t120 == 20) && ((u121 = *(float *)0xC17914C, !(1350.0f > u121)) && (u122 = *(float *)0xC17914C, !(u122 > 1950.0f))))) {
        *(unsigned int *)0xC2A9898 = ((*(int *)((((int)stk + 4) + 0x4))) + 0x50);
        *(float *)0xC2A98A8 = 1.0f;
        *(float *)0xC2A98AC = 1.0f;
    } else {
        *(unsigned int *)0xC2A9898 = 0x1E0;
    }
    *(float *)0xC2A989C = 548.0f;
    nlSprPut(0xC2A9898);
    if ((((*(int *)0xC1EE214) == 0) && (u130 = *(float *)0xC179148, u130 > -5100.0f)) || ((t131 = *(int *)0xC1EE214, t131 == 20) && ((u132 = *(float *)0xC17914C, !(1350.0f > u132)) && (u133 = *(float *)0xC17914C, !(u133 > 1950.0f))))) {
        *(unsigned int *)0xC2A9898 = ((*(int *)((((int)stk + 4) + 0x0))) + 0x50);
        *(float *)0xC2A98A8 = 1.0f;
        *(float *)0xC2A98AC = 1.0f;
    } else {
        *(unsigned int *)0xC2A9898 = 0x1E0;
    }
    *(float *)0xC2A989C = 572.0f;
    nlSprPut(0xC2A9898);
    ResetFadeColor();
    *(float *)0xC2A98A8 = 1.0f;
    *(float *)0xC2A98AC = 1.0f;
    return 0x14;
}
