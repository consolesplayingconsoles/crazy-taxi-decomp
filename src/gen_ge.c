/* Straight-line functions with calls and guards (batch gen_ge): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlCalcPoint4(int, int);
int nlMultiPushedMatrix(void);
int nlLineSendHeader(int);
int nlLineCalcColor(int, int);
int nlLineClipNear(int, int);
int nlLineDrawThick(int, int, int, int);
int nlMultiMatrix8(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlSingleLineSub(int a4, int a5, int a6, int a7);

int nlSingleLineSub(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t4;
    int t10;
    int t12;
    int t15;
    int t16;
    float u17;
    float u18;
    float u19;
    float u20;
    float u21;
    float u22;
    float u23;
    float u24;
    float u25;
    float u26;
    float u27;
    float u28;
    float u29;
    float u30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t36;
    int stk[15] = {0};

    *(unsigned int *)(((int)stk + 48)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    t0 = nlLineSendHeader(a7);
    *(unsigned int *)(((int)stk + 12)) = t0;
    nlPushMatrix(0xC14AA08);
    t2 = *(int *)0xC2B3208;
    nlMultiMatrix8(t2);
    if ((0x2 & a7) != 0) {
        t4 = *(int *)0xC2B31FC;
        nlMultiMatrix8(t4);
    }
    nlMultiPushedMatrix();
    t10 = *(int *)(((int)stk + 4));
    nlCalcPoint4(t10, (((int)stk + 4) + 0x1C));
    t12 = *(int *)(((int)stk + 8));
    nlCalcPoint4(t12, (((int)stk + 4) + 0xC));
    nlPopMatrix(0x1);
    t15 = nlLineClipNear((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0xC));
    if (t15 != 0) {
        t16 = nlLineCalcColor((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0xC));
        if (t16 == 0) {
            return 0x0;
        }
        u17 = *(float *)(((int)stk + 40));
        u18 = *(float *)(((int)stk + 32));
        u19 = *(float *)0xC2B7624;
        u20 = u19;
        u20 = u20 + (1.0f / u17) * u18;
        *(float *)(((int)stk + 32)) = u20;
        u21 = *(float *)(((int)stk + 36));
        u22 = *(float *)0xC2B7628;
        u23 = u22;
        u23 = u23 + (1.0f / u17) * u21;
        *(float *)(((int)stk + 36)) = u23;
        u24 = *(float *)(((int)stk + 24));
        u25 = *(float *)(((int)stk + 16));
        u26 = *(float *)0xC2B7624;
        u27 = u26;
        u27 = u27 + (1.0f / u24) * u25;
        *(float *)(((int)stk + 16)) = u27;
        u28 = *(float *)0xC2B7628;
        u29 = *(float *)(((int)stk + 20));
        u30 = u28;
        u30 = u30 + (1.0f / u24) * u29;
        *(float *)(((int)stk + 20)) = u30;
        t31 = *(int *)(((int)stk + 12));
        t32 = nlLineDrawThick(t31, (((int)stk + 4) + 0x1C), (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x2C));
        t33 = *(int *)0xC2B8CBC;
        t34 = t33;
        if ((a7 & 0x1) != 0) {
            t34 = (t33 + 0x8);
        }
        t36 = *(int *)((t34 + 0x0));
        *(unsigned int *)((t34 + 0x0)) = ((t36 & 0xFC000000) | (t32 & 0x3FFFFFF));
        return 0x1;
    }
    return 0x0;
}
