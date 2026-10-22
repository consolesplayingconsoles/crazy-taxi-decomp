/* Straight-line functions with calls and guards (batch gen_adc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetCollision2D(int, float);
float getNearLineIndex(int, int, int, int);
int getNearLineIndexAll(int);
int nlFastSinCos(int, int, int);
float nlLength(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSetTranslate(int);
int nlSqrt(int, int);
void carGroundCheck(int a4);

void carGroundCheck(int a4)
{
    int t9;
    int t10;
    float u11;
    int t20;
    float u28;
    float u34;
    float u64;
    int t72;
    int t90;
    float u91;
    int t92;
    int t93;
    float t97;
    int t99;
    int t105;
    int t107;
    float u108;
    int t109;
    int t110;
    float t114;
    int t116;
    int t122;
    float u180;
    float u191;
    float u182;
    float u183;
    float u193;
    float u218;
    float u195;
    float u207;
    int t32;
    int t77;
    float u186;
    float u184;
    int stk[28] = {0};

    *(unsigned int *)(((int)stk + 24)) = 0x0;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)0xC179490 = 0xFFFFFFFF;
    nlPushMatrix(0x0);
    nlSetTranslate((a4 + 0x78));
    nlRotateAY((unsigned short)(*(short *)((a4 + 0x86))));
    nlRotateAX((unsigned short)(*(short *)((a4 + 0x84))));
    nlRotateAZ((unsigned short)(*(short *)((a4 + 0x88))));
    *(unsigned int *)(((int)stk + 8)) = (0x1A0 + a4);
    t9 = 0x4;
    t10 = (*(int *)((a4 + 0x6C)));
    u11 = 0.0f;
    for (;;) {
        nlPushMatrix(0x0);
        *(float *)0xC1EE148 = (*(float *)((t10 + 0x0)));
        *(float *)0xC1EE14C = (((*(float *)((a4 + 0x12C))) - (*(float *)(((*(int *)(((int)stk + 8))) + 0x30)))) + -0.699999988f);
        *(float *)0xC1EE150 = (*(float *)((t10 + 0x8)));
        nlSqrt(0xC1EE148, 0xC1EE154);
        nlPopMatrix(0x1);
        t20 = GetCollision2D(0xC1EE154, 20.0f);
        if ((*(int *)((t20 + 0x1C))) != -1) {
            if ((*(int *)0xC179490) == -1) {
                *(unsigned int *)0xC179490 = (*(int *)((t20 + 0x1C)));
            }
            u28 = *(float *)0xC1EE158;
            if ((*(float *)((t20 + 0x18))) > u28) {
                *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
                if (((*(float *)((t20 + 0x18))) - u28) > u11) {
                    if (!(25.0f > (((*(float *)((t20 + 0x18))) - u28) + 1.0f)) && (t32 = *(int *)0xC0DAEC4, (int)t32 <= (int)0x1E)) {
                        *(unsigned int *)0xC0DAEC4 = ((*(int *)0xC0DAEC4) + 0x1);
                    } else {
                        u34 = *(float *)((t20 + 0x18));
                        *(unsigned short *)((a4 + 0x19A)) = 0x0;
                        *(unsigned short *)((a4 + 0x198)) = 0x0;
                        *(unsigned short *)((a4 + 0x19C)) = 0x0;
                        u11 = (u34 - u28);
                        u11 = (u11 + 1.0f);
                        *(float *)((a4 + 0x100)) = ((*(float *)((a4 + 0x100))) * 0.099999994f);
                        *(float *)((a4 + 0x15C)) = ((*(float *)((a4 + 0x15C))) * 0.099999994f);
                        *(unsigned int *)0xC0DAEC4 = 0x0;
                    }
                }
            }
        } else {
            *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x1);
        }
        t9 = (t9 - 0x1);
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x84);
        t10 = (t10 + 0xC);
        if (t9 != 0) continue;
        break;
    }
    nlPopMatrix(0x1);
    if ((*(int *)(((int)stk + 12))) == 0) {
        *(unsigned int *)0xC0DAEC4 = 0x0;
    }
    if (u11 > 0.0f) {
        *(unsigned int *)0xC0DAEC4 = 0x0;
        u64 = *(float *)((a4 + 0x7C));
        *(float *)((a4 + 0x7C)) = (u64 + u11);
        *(float *)((a4 + 0x90)) = (u64 + u11);
    }
    if ((int)(*(int *)(((int)stk + 24))) <= (int)0x3) {
    } else {
        t72 = *(int *)0xC1EE20C;
        if (t72 == 2) {
            getNearLineIndexAll((a4 + 0x78));
            *(float *)((a4 + 0x7C)) = ((*(float *)((a4 + 0x7C))) + 30.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + a4)) = *(struct mv3 *)((a4 + 0x78)); }
            if (((*(int *)0xC1EE20C) == 2) && (t77 = *(int *)0xC1EE214, t77 == 3)) {
                *(unsigned char *)(((0x84 + a4) + 0x0)) = (*(signed char *)0xC08ADAC);
                *(unsigned char *)(((0x84 + a4) + 0x1)) = (*(signed char *)0xC08ADAD);
                *(unsigned char *)(((0x84 + a4) + 0x2)) = (*(signed char *)0xC08ADAE);
                *(unsigned char *)(((0x84 + a4) + 0x3)) = (*(signed char *)0xC08ADAF);
                *(unsigned char *)(((0x84 + a4) + 0x4)) = (*(signed char *)0xC08ADB0);
                *(unsigned char *)(((0x84 + a4) + 0x5)) = (*(signed char *)0xC08ADB1);
                *(float *)((a4 + 0x160)) = 0.0f;
            }
        } else {
            if (t72 != 1) {
                getNearLineIndexAll((a4 + 0x78));
            } else {
                if ((int)(*(int *)0xC179490) >= (int)0x14) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x2C)) = *(struct mv3 *)((a4 + 0x78)); }
                    *(unsigned int *)(((int)stk + 12)) = 0x0;
                    *(unsigned int *)(((int)stk + 8)) = 0x0;
                    t90 = 0x0;
                    u91 = 99999.8984f;
                    for (;;) {
                        t92 = *(int *)0xC2A6690;
                        t93 = *(int *)(((int)stk + 8));
                        t97 = getNearLineIndex(0x0, (*(int *)((((t93 + t92) + 0xEDC) + 0x0))), (*(int *)(((*(int *)((((t93 + t92) + 0xEDC) + 0x4))) + 0x0))), (((int)stk + 4) + 0x10));
                        if (u91 > t97) {
                            t99 = *(int *)(((int)stk + 20));
                            u91 = t97;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x78)) = *(struct mv3 *)(((*(int *)(((((*(int *)0xC2A6690) + t90) + 0xEDC) + 0x0))) + (((t99 << 1) + t99) << 2))); }
                        }
                        t105 = *(int *)(((int)stk + 12));
                        t90 = (t90 + 0xC);
                        *(unsigned int *)(((int)stk + 12)) = (t105 + 0x1);
                        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0xC);
                        if ((int)(t105 + 0x1) >= (int)0x2) {
                            break;
                        }
                    }
                } else {
                    *(unsigned int *)(((int)stk + 12)) = 0x0;
                    *(unsigned int *)(((int)stk + 8)) = 0x0;
                    t107 = 0x0;
                    u108 = 99999.8984f;
                    for (;;) {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x2C)) = *(struct mv3 *)((a4 + 0x78)); }
                        t109 = *(int *)0xC2A6690;
                        t110 = *(int *)(((int)stk + 8));
                        t114 = getNearLineIndex(0x0, (*(int *)((((t110 + t109) + 0xEC4) + 0x0))), (*(int *)(((*(int *)((((t110 + t109) + 0xEC4) + 0x4))) + 0x0))), (((int)stk + 4) + 0xC));
                        if (u108 > t114) {
                            t116 = *(int *)(((int)stk + 16));
                            u108 = t114;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x20)) = *(struct mv3 *)(((*(int *)(((((*(int *)0xC2A6690) + t107) + 0xEC4) + 0x0))) + (((t116 << 1) + t116) << 2))); }
                        }
                        t122 = *(int *)(((int)stk + 12));
                        t107 = (t107 + 0xC);
                        *(unsigned int *)(((int)stk + 12)) = (t122 + 0x1);
                        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0xC);
                        if ((int)(t122 + 0x1) >= (int)0x2) {
                            break;
                        }
                    }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x2C)) = *(struct mv3 *)((a4 + 0x78)); }
                    getNearLineIndexAll((((int)stk + 8) + 0x2C));
                    if ((nlLength((((int)stk + 8) + 0x2C), (a4 + 0x78))) > u108) {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x78)) = *(struct mv3 *)((((int)stk + 8) + 0x20)); }
                    } else {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x78)) = *(struct mv3 *)((((int)stk + 8) + 0x2C)); }
                    }
                }
            }
            *(float *)((a4 + 0x7C)) = ((*(float *)((a4 + 0x7C))) + 30.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + a4)) = *(struct mv3 *)((a4 + 0x78)); }
        }
        *(float *)((a4 + 0x160)) = 0.0f;
        *(float *)((a4 + 0x15C)) = 0.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0xFC + a4)) = *(struct mv3 *)(0xC08AD94); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x108 + a4)) = *(struct mv3 *)(0xC08AD94); }
    }
    u180 = *(float *)((a4 + 0x100));
    u191 = _builtin_fabsf(u180);
    if (_builtin_fabsf(u180) > 16.5f) {
        u182 = *(float *)((a4 + 0x100));
        if (u182 > 18.0f) {
            *(float *)((a4 + 0x100)) = 18.0f;
            u186 = u182;
        } else {
            if (-18.0f > u182) {
                *(float *)((a4 + 0x100)) = -18.0f;
                u184 = u182;
            } else {
                u183 = *(float *)((a4 + 0x100));
                *(float *)((a4 + 0x100)) = (u183 * 0.849999964f);
                u184 = (u183 * 0.849999964f);
            }
            u186 = u184;
        }
        *(float *)((a4 + 0x10C)) = (*(float *)((a4 + 0x100)));
        u191 = u186;
    }
    u193 = *(float *)((a4 + 0x15C));
    u218 = _builtin_fabsf(u193);
    if (_builtin_fabsf(u193) > 14.5f) {
        u195 = *(float *)((a4 + 0x15C));
        if (u195 > 18.0f) {
            *(float *)((a4 + 0x15C)) = 18.0f;
        } else {
            if (-18.0f > u195) {
                *(float *)((a4 + 0x15C)) = -18.0f;
            } else {
                *(float *)((a4 + 0x15C)) = ((*(float *)((a4 + 0x15C))) * 0.849999964f);
            }
        }
        nlFastSinCos((unsigned short)(*(short *)((a4 + 0xF4))), (0xFC + a4), (0x104 + a4));
        *(float *)((a4 + 0xFC)) = ((*(float *)((a4 + 0xFC))) * (*(float *)(((0x15C + a4) + 0x0))));
        *(float *)((a4 + 0x104)) = ((*(float *)((a4 + 0x104))) * (*(float *)(((0x15C + a4) + 0x0))));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x108 + a4)) = *(struct mv3 *)((0xFC + a4)); }
        u207 = 3600.0f;
        *(float *)((a4 + 0x160)) = (((*(float *)((a4 + 0x15C))) * u207) / ((*(float *)((a4 + 0x12C))) * (6.283f)));
        u218 = u207;
    }
}
