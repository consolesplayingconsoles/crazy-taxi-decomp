/* Straight-line functions with calls and guards (batch gen_aky): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetCollision2D(int, float);
float getNearLineIndex(int, int, int, int, int, float);
extern int getNearLineIndexAll();
int nlCalcPoint(int, int);
int nlFastSinCos(int, int, int);
float nlLength(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSetTranslate(int);
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
    int t74;
    int t88;
    int t90;
    float u91;
    float u92;
    int t93;
    int t94;
    int t100;
    int t106;
    int t108;
    float u109;
    float u110;
    int t111;
    int t112;
    int t118;
    int t124;
    int t126;
    float u182;
    float u193;
    float u184;
    float u185;
    float u195;
    float u220;
    float u197;
    float u209;
    int t32;
    int t77;
    float u188;
    float u186;
    int stk[28];

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
        nlCalcPoint(0xC1EE148, 0xC1EE154);
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
            t74 = ((int (*)(int))(getNearLineIndexAll))((a4 + 0x78));
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
                t88 = ((int (*)(int))(getNearLineIndexAll))((a4 + 0x78));
            } else {
                if ((int)(*(int *)0xC179490) >= (int)0x14) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x2C)) = *(struct mv3 *)((a4 + 0x78)); }
                    *(unsigned int *)(((int)stk + 12)) = 0x0;
                    *(unsigned int *)(((int)stk + 8)) = 0x0;
                    t90 = 0x0;
                    u91 = 99999.8984f;
                    u92 = 99999.8984f;
                    for (;;) {
                        t93 = *(int *)0xC2A6690;
                        t94 = *(int *)(((int)stk + 8));
                        u91 = (getNearLineIndex(0x0, (*(int *)((((t94 + t93) + 0xEDC) + 0x0))), (*(int *)(((*(int *)((((t94 + t93) + 0xEDC) + 0x4))) + 0x0))), (((int)stk + 4) + 0x10), (((int)stk + 8) + 0x2C), u91));
                        if (u92 > u91) {
                            t100 = *(int *)(((int)stk + 20));
                            u92 = u91;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x78)) = *(struct mv3 *)(((*(int *)(((((*(int *)0xC2A6690) + t90) + 0xEDC) + 0x0))) + (((t100 << 1) + t100) << 2))); }
                        }
                        t106 = *(int *)(((int)stk + 12));
                        t90 = (t90 + 0xC);
                        *(unsigned int *)(((int)stk + 12)) = (t106 + 0x1);
                        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0xC);
                        if ((int)(t106 + 0x1) >= (int)0x2) {
                            break;
                        }
                    }
                } else {
                    *(unsigned int *)(((int)stk + 12)) = 0x0;
                    *(unsigned int *)(((int)stk + 8)) = 0x0;
                    t108 = 0x0;
                    u109 = 99999.8984f;
                    u110 = 99999.8984f;
                    for (;;) {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x2C)) = *(struct mv3 *)((a4 + 0x78)); }
                        t111 = *(int *)0xC2A6690;
                        t112 = *(int *)(((int)stk + 8));
                        u109 = (getNearLineIndex(0x0, (*(int *)((((t112 + t111) + 0xEC4) + 0x0))), (*(int *)(((*(int *)((((t112 + t111) + 0xEC4) + 0x4))) + 0x0))), (((int)stk + 4) + 0xC), (((int)stk + 8) + 0x2C), u109));
                        if (u110 > u109) {
                            t118 = *(int *)(((int)stk + 16));
                            u110 = u109;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x20)) = *(struct mv3 *)(((*(int *)(((((*(int *)0xC2A6690) + t108) + 0xEC4) + 0x0))) + (((t118 << 1) + t118) << 2))); }
                        }
                        t124 = *(int *)(((int)stk + 12));
                        t108 = (t108 + 0xC);
                        *(unsigned int *)(((int)stk + 12)) = (t124 + 0x1);
                        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0xC);
                        if ((int)(t124 + 0x1) >= (int)0x2) {
                            break;
                        }
                    }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x2C)) = *(struct mv3 *)((a4 + 0x78)); }
                    t126 = ((int (*)(int, float))(getNearLineIndexAll))((((int)stk + 8) + 0x2C), u109);
                    if ((nlLength((((int)stk + 8) + 0x2C), (a4 + 0x78))) > u110) {
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
    u182 = *(float *)((a4 + 0x100));
    u193 = _builtin_fabsf(u182);
    if (_builtin_fabsf(u182) > 16.5f) {
        u184 = *(float *)((a4 + 0x100));
        if (u184 > 18.0f) {
            *(float *)((a4 + 0x100)) = 18.0f;
            u188 = u184;
        } else {
            if (-18.0f > u184) {
                *(float *)((a4 + 0x100)) = -18.0f;
                u186 = u184;
            } else {
                u185 = *(float *)((a4 + 0x100));
                *(float *)((a4 + 0x100)) = (u185 * 0.849999964f);
                u186 = (u185 * 0.849999964f);
            }
            u188 = u186;
        }
        *(float *)((a4 + 0x10C)) = (*(float *)((a4 + 0x100)));
        u193 = u188;
    }
    u195 = *(float *)((a4 + 0x15C));
    u220 = _builtin_fabsf(u195);
    if (_builtin_fabsf(u195) > 14.5f) {
        u197 = *(float *)((a4 + 0x15C));
        if (u197 > 18.0f) {
            *(float *)((a4 + 0x15C)) = 18.0f;
        } else {
            if (-18.0f > u197) {
                *(float *)((a4 + 0x15C)) = -18.0f;
            } else {
                *(float *)((a4 + 0x15C)) = ((*(float *)((a4 + 0x15C))) * 0.849999964f);
            }
        }
        nlFastSinCos((unsigned short)(*(short *)((a4 + 0xF4))), (0xFC + a4), (0x104 + a4));
        *(float *)((a4 + 0xFC)) = ((*(float *)((a4 + 0xFC))) * (*(float *)(((0x15C + a4) + 0x0))));
        *(float *)((a4 + 0x104)) = ((*(float *)((a4 + 0x104))) * (*(float *)(((0x15C + a4) + 0x0))));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x108 + a4)) = *(struct mv3 *)((0xFC + a4)); }
        u209 = *(float *)0xC02375C;
        *(float *)((a4 + 0x160)) = (((*(float *)((a4 + 0x15C))) * u209) / ((*(float *)((a4 + 0x12C))) * (*(float *)0xC023760)));
        u220 = u209;
    }
}
