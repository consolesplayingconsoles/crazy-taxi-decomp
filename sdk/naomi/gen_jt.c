/* Straight-line functions with calls and guards (batch gen_jt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern float _builtin_sqrtf(float);
int nlLineSendQuadA(int, int, int, int, float, float);
int nlLineSendQuadB(int, int, int, int, float, float);
int nlLineSendQuadC(int, int, int, int, float, float);
int nlLineSendQuadD(int, int, int, int, float, float);
int nlLineSendQuadE(int, int, int, float);
int nlLineDrawThick(int a4, int a5, int a6, int a7);

int nlLineDrawThick(int a4, int a5, int a6, int a7)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    int t10;
    float u13;
    float u14;
    float u15;
    float u16;
    int t17;
    int t19;
    int t21;
    int t55;
    int t38;
    int t39;
    int t76;
    int t71;

    u0 = *(float *)((a5 + 0x0));
    u1 = *(float *)((a6 + 0x0));
    u2 = *(float *)((a5 + 0x4));
    u3 = *(float *)((a6 + 0x4));
    u4 = *(float *)0xC14A9F4;
    u5 = ((u2 - u3) * (u2 - u3));
    u5 = u5 + (u0 - u1) * (u0 - u1);
    if (u5 == 0.0f) {
        t10 = a6;
        if (!((*(float *)((a5 + 0x8))) > (*(float *)((a6 + 0x8))))) {
            t10 = a5;
        }
        nlLineSendQuadE(a4, t10, a7, (u4 * 0.5f));
        t76 = (a4 + 0x80);
    } else {
        u13 = *(float *)0xC14A9F0;
        u14 = (u4 * 0.5f);
        u15 = ((1.0f / _builtin_sqrtf(u5)) * u14);
        u16 = ((1.0f / _builtin_sqrtf(u5)) * u14);
        t17 = (int)((1.0f / u13) * (u0 - u1));
        if ((int)(int)((1.0f / u13) * (u0 - u1)) < 0) {
            t17 = (-(int)((1.0f / u13) * (u0 - u1)));
        }
        t19 = (int)((1.0f / u13) * (u2 - u3));
        if ((int)(int)((1.0f / u13) * (u2 - u3)) < 0) {
            t19 = (-(int)((1.0f / u13) * (u2 - u3)));
        }
        t21 = t19;
        if ((int)t17 < (int)t19) {
            t21 = t17;
        }
        *(float *)((a5 + 0x8)) = (1.0f / (*(float *)((a5 + 0x8))));
        *(float *)((a6 + 0x8)) = (1.0f / (*(float *)((a6 + 0x8))));
        if ((int)t21 <= (int)0x1) {
            nlLineSendQuadA(a4, a5, a6, a7, ((u0 - u1) * u15), ((u2 - u3) * u16));
            t71 = a4;
        } else {
            *(float *)0xC2B7634 = ((1.0f / (float)t21) * (u0 - u1));
            *(float *)0xC2B7638 = ((1.0f / (float)t21) * (u2 - u3));
            *(float *)0xC2B763C = (((*(float *)((a5 + 0x8))) - (*(float *)((a6 + 0x8)))) * (1.0f / (float)t21));
            *(float *)0xC2B7640 = (*(float *)((a6 + 0x0)));
            *(float *)0xC2B764C = ((*(float *)0xC2B7640) + (*(float *)0xC2B7634));
            *(float *)0xC2B7644 = (*(float *)((a6 + 0x4)));
            *(float *)0xC2B7650 = ((*(float *)0xC2B7644) + (*(float *)0xC2B7638));
            *(float *)0xC2B7648 = (*(float *)((a6 + 0x8)));
            *(float *)0xC2B7654 = ((*(float *)0xC2B7648) + (*(float *)0xC2B763C));
            nlLineSendQuadD(a4, 0xC2B764C, 0xC2B7640, a7, ((u0 - u1) * u15), ((u2 - u3) * u16));
            t55 = (a4 + 0x80);
            if ((int)0x1 < (int)(t21 - 1)) {
                t38 = 0x1;
                t39 = (a4 + 0x80);
                for (;;) {
                    *(float *)0xC2B7640 = ((*(float *)0xC2B7640) + (*(float *)0xC2B7634));
                    *(float *)0xC2B764C = ((*(float *)0xC2B764C) + (*(float *)0xC2B7634));
                    *(float *)0xC2B7644 = ((*(float *)0xC2B7644) + (*(float *)0xC2B7638));
                    *(float *)0xC2B7650 = ((*(float *)0xC2B7650) + (*(float *)0xC2B7638));
                    *(float *)0xC2B7648 = ((*(float *)0xC2B7648) + (*(float *)0xC2B763C));
                    *(float *)0xC2B7654 = ((*(float *)0xC2B7654) + (*(float *)0xC2B763C));
                    nlLineSendQuadC(t39, 0xC2B764C, 0xC2B7640, a7, ((u0 - u1) * u15), ((u2 - u3) * u16));
                    t38 = (t38 + 0x1);
                    t39 = (t39 + 0x80);
                    if ((int)t38 >= (int)(t21 - 1)) {
                        break;
                    }
                }
                t55 = t39;
            }
            *(float *)0xC2B7640 = ((*(float *)0xC2B7640) + (*(float *)0xC2B7634));
            *(float *)0xC2B764C = ((*(float *)0xC2B764C) + (*(float *)0xC2B7634));
            *(float *)0xC2B7644 = ((*(float *)0xC2B7644) + (*(float *)0xC2B7638));
            *(float *)0xC2B7650 = ((*(float *)0xC2B7650) + (*(float *)0xC2B7638));
            *(float *)0xC2B7648 = ((*(float *)0xC2B7648) + (*(float *)0xC2B763C));
            *(float *)0xC2B7654 = ((*(float *)0xC2B7654) + (*(float *)0xC2B763C));
            nlLineSendQuadB(t55, 0xC2B764C, 0xC2B7640, a7, ((u0 - u1) * u15), ((u2 - u3) * u16));
            t71 = t55;
        }
        t76 = (t71 + 0x80);
    }
    return t76;
}
