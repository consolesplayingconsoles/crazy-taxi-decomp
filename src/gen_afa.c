/* Straight-line functions with calls and guards (batch gen_afa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlCalcVector(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScaleUnitVector(int, int, float);
float nlScalor(int);
int nlSubVector(int, int);
void carResistance(int a4);

void carResistance(int a4)
{
    float t9;
    float u50;
    float u53;
    int t72;
    float u57;
    int t60;
    int t58;
    float u62;
    float u74;
    float u75;
    float u77;
    float u93;
    float u96;
    float u87;
    float u66;
    float u68;
    float u70;
    int stk[9];

    nlPushUnitMatrix();
    nlRotateAZ((-(unsigned short)(*(short *)((a4 + 0xA8)))));
    nlRotateAX((-(unsigned short)(*(short *)((a4 + 0xA4)))));
    nlRotateAY((-(unsigned short)(*(short *)((a4 + 0xA6)))));
    nlCalcVector((0x98 + a4), (((int)stk + 4) + 0xC));
    nlPopMatrix(0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 4) + 0xC)); }
    *(float *)(((int)stk + 8)) = 0.0f;
    t9 = nlScalor(((int)stk + 4));
    if (!(t9 > 0.0f)) {
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0xC0A4788); }
        if (((*(int *)((a4 + 0x84))) & 32) == 0) {
            if (!(0.00999999978f > t9)) {
                if ((*(float *)((a4 + 0xC8))) != 0.0f) {
                    if (t9 > (*(float *)((a4 + 0xC8)))) {
                        nlScaleUnitVector(((int)stk + 4), (((int)stk + 4) + 0xC), (*(float *)((a4 + 0xC8))));
                    } else {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 4) + 0xC)); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0xC)) = *(struct mv3 *)(0xC0A4788); }
                    }
                }
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 4) + 0xC)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0xC)) = *(struct mv3 *)(0xC0A4788); }
            }
            u50 = *(float *)(((int)stk + 16));
            u53 = 1.0f;
            if (5000.0f > (*(float *)((a4 + 0xB4)))) {
                u53 = 0.5f;
            }
            t72 = 0;
            if (u53 > _builtin_fabsf(u50)) {
                u66 = 0.899999976f;
                u68 = (*(float *)(((int)stk + 16)));
                t72 = (1);
            } else {
                u57 = *(float *)(((int)stk + 16));
                t60 = 0x1;
                if (u57 > 0.0f) {
                } else {
                    t58 = 0x0;
                    if (0.0f > u57) {
                        t58 = 0xFFFFFFFF;
                    }
                    t60 = t58;
                }
                u62 = 0.099999994f;
                if (0.099999994f > (_builtin_fabsf(u50) * 0.399999976f)) {
                    u62 = (_builtin_fabsf(u50) * 0.399999976f);
                }
                u66 = u62;
                u68 = (float)t60;
                u70 = (_builtin_fabsf(u50) * 0.399999976f);
                t72 = ((0.099999994f > (_builtin_fabsf(u50) * 0.399999976f)));
            }
            u74 = (*(float *)(((int)stk + 4)));
            u74 = u74 + u66 * u68;
            *(float *)(((int)stk + 4)) = u74;
            u87 = 0.0149999997f;
        } else {
            u75 = *(float *)((a4 + 0x100));
            u77 = _builtin_fabsf((float)(((9.99999994e-09f > u75)) ? 1 : 0));
            if ((_builtin_fabsf((float)(((9.99999994e-09f > u75)) ? 1 : 0)) != 0.0f) && (0.399999976f > t9)) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 4) + 0xC)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0xC)) = *(struct mv3 *)(0xC0A4788); }
                u77 = 0.399999976f;
            }
            u87 = 0.049999997f;
        }
        u93 = (*(float *)(((int)stk + 4)));
        u93 = u93 + u87 * (*(float *)(((int)stk + 16)));
        *(float *)(((int)stk + 4)) = u93;
        u96 = (*(float *)(((int)stk + 12)));
        u96 = u96 + u87 * (*(float *)(((int)stk + 24)));
        *(float *)(((int)stk + 12)) = u96;
        nlPushUnitMatrix();
        nlRotateAY((unsigned short)(*(short *)((a4 + 0xA6))));
        nlRotateAX((unsigned short)(*(short *)((a4 + 0xA4))));
        nlRotateAZ((unsigned short)(*(short *)((a4 + 0xA8))));
        nlCalcVector(((int)stk + 4), ((int)stk + 4));
        nlPopMatrix(0x1);
        nlSubVector((0x98 + a4), ((int)stk + 4));
    }
}
