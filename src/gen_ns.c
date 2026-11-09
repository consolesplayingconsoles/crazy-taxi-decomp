/* Straight-line functions with calls and guards (batch gen_ns): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float nlInnerProduct(int, int);
int nlMultiMatrix(int);
int nlTranslateV(int);
int nlPerspectiveProj(int a4, int a5, int a6);

int nlPerspectiveProj(int a4, int a5, int a6)
{
    float u6;
    float u9;
    float u10;
    float u13;
    float u19;
    float u26;
    float t33;
    int stk[26] = {0};
    float R1004;
    float R1008;
    float R1012;

    R1004 = *(float *)((int)stk + 4);
    R1008 = *(float *)((int)stk + 8);
    R1012 = *(float *)((int)stk + 12);

    R1004 = ((*(float *)((a6 + 0x0))) - (*(float *)((a5 + 0x0))));
    R1008 = ((*(float *)((a6 + 0x4))) - (*(float *)((a5 + 0x4))));
    R1012 = ((*(float *)((a6 + 0x8))) - (*(float *)((a5 + 0x8))));
    u6 = *(float *)((a4 + 0xC));
    u9 = R1004;
    u10 = ((*(float *)((a4 + 0x10))) * (R1008));
    u10 = u10 + u9 * u6;
    u13 = u10;
    u13 = u13 + (R1012) * (*(float *)((a4 + 0x14)));
    *(float *)(((int)stk + 16)) = ((-(u9 * ((u6 * (1.0f / u13))))) + 1.0f);
    *(float *)(((int)stk + 20)) = (-((R1008) * ((u6 * (1.0f / u13)))));
    *(float *)(((int)stk + 24)) = (-((R1012) * ((u6 * (1.0f / u13)))));
    u19 = *(float *)((a4 + 0x10));
    *(float *)(((int)stk + 32)) = (-((R1004) * ((u19 * (1.0f / u13)))));
    *(float *)(((int)stk + 36)) = ((-((R1008) * ((u19 * (1.0f / u13))))) + 1.0f);
    *(float *)(((int)stk + 40)) = (-((R1012) * ((u19 * (1.0f / u13)))));
    u26 = *(float *)((a4 + 0x14));
    *(float *)(((int)stk + 48)) = (-((R1004) * ((u26 * (1.0f / u13)))));
    *(float *)(((int)stk + 52)) = (-((R1008) * ((u26 * (1.0f / u13)))));
    *(float *)(((int)stk + 56)) = ((-((R1012) * ((u26 * (1.0f / u13))))) + 1.0f);
    t33 = nlInnerProduct(a4, (a4 + 0xC));
    *(float *)(((int)stk + 64)) = ((R1004) * ((t33 * (1.0f / u13))));
    *(float *)(((int)stk + 68)) = ((R1008) * ((t33 * (1.0f / u13))));
    *(float *)(((int)stk + 72)) = ((R1012) * ((t33 * (1.0f / u13))));
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 60)) = 0.0f;
    *(float *)(((int)stk + 76)) = 1.0f;
    nlMultiMatrix((((int)stk + 4) + 0xC));
    return (nlTranslateV(a5));
}
