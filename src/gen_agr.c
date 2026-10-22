/* Straight-line functions with calls and guards (batch gen_agr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int fcvCalcAngle(int, int);
int nlFastSinCos(int, int, int);
int nlMultiMatrix(int);
int fcvRotateCurve(int a4);

int fcvRotateCurve(int a4)
{
    float u23;
    float u31;
    int stk[12] = {0};

    fcvCalcAngle(a4, (((int)stk + 4) + 0x18));
    nlFastSinCos((*(int *)(((int)stk + 28))), (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x10));
    nlFastSinCos((*(int *)(((int)stk + 32))), (((int)stk + 4) + 0x8), (((int)stk + 4) + 0x14));
    nlFastSinCos((*(int *)(((int)stk + 36))), ((int)stk + 4), (((int)stk + 4) + 0x4));
    *(float *)0xC13EDBC = ((*(float *)(((int)stk + 24))) * (*(float *)(((int)stk + 8))));
    *(float *)0xC13EDC0 = ((*(float *)(((int)stk + 4))) * (*(float *)(((int)stk + 24))));
    *(float *)0xC13EDC4 = (-(*(float *)(((int)stk + 12))));
    *(float *)0xC13EDCC = (((((*(float *)(((int)stk + 16))) * (*(float *)(((int)stk + 12))))) * (*(float *)(((int)stk + 8)))) - ((*(float *)(((int)stk + 4))) * (*(float *)(((int)stk + 20)))));
    u23 = ((*(float *)(((int)stk + 20))) * (*(float *)(((int)stk + 8))));
    u23 = u23 + (*(float *)(((int)stk + 4))) * ((*(float *)(((int)stk + 16))) * (*(float *)(((int)stk + 12))));
    *(float *)0xC13EDD0 = u23;
    *(float *)0xC13EDD4 = ((*(float *)(((int)stk + 16))) * (*(float *)(((int)stk + 24))));
    u31 = ((*(float *)(((int)stk + 16))) * (*(float *)(((int)stk + 4))));
    u31 = u31 + (*(float *)(((int)stk + 8))) * ((*(float *)(((int)stk + 12))) * (*(float *)(((int)stk + 20))));
    *(float *)0xC13EDDC = u31;
    *(float *)0xC13EDE0 = (((((*(float *)(((int)stk + 12))) * (*(float *)(((int)stk + 4))))) * (*(float *)(((int)stk + 20)))) - ((*(float *)(((int)stk + 16))) * (*(float *)(((int)stk + 8)))));
    *(float *)0xC13EDE4 = ((*(float *)(((int)stk + 20))) * (*(float *)(((int)stk + 24))));
    return (nlMultiMatrix(0xC13EDBC));
}
