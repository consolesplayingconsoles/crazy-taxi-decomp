/* Straight-line functions with calls and guards (batch gen_w): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlFastSinCos(int, int, int);
int nlMultiMatrix8(int);
int BigOneRotate(int a4, int a5, int a6);

int BigOneRotate(int a4, int a5, int a6)
{
    float u21;
    float u29;
    int stk[11];

    *(unsigned int *)(((int)stk + 28)) = a5;
    *(unsigned int *)(((int)stk + 32)) = a6;
    nlFastSinCos(a4, (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x10));
    nlFastSinCos((*(int *)(((int)stk + 28))), (((int)stk + 4) + 0x8), (((int)stk + 4) + 0x14));
    nlFastSinCos((*(int *)(((int)stk + 32))), ((int)stk + 4), (((int)stk + 4) + 0x4));
    *(float *)0xC141820 = ((*(float *)(((int)stk + 24))) * (*(float *)(((int)stk + 8))));
    *(float *)0xC141824 = ((*(float *)(((int)stk + 4))) * (*(float *)(((int)stk + 24))));
    *(float *)0xC141828 = (-(*(float *)(((int)stk + 12))));
    *(float *)0xC141830 = (((((*(float *)(((int)stk + 16))) * (*(float *)(((int)stk + 12))))) * (*(float *)(((int)stk + 8)))) - ((*(float *)(((int)stk + 4))) * (*(float *)(((int)stk + 20)))));
    u21 = ((*(float *)(((int)stk + 20))) * (*(float *)(((int)stk + 8))));
    u21 = u21 + (*(float *)(((int)stk + 4))) * ((*(float *)(((int)stk + 16))) * (*(float *)(((int)stk + 12))));
    *(float *)0xC141834 = u21;
    *(float *)0xC141838 = ((*(float *)(((int)stk + 16))) * (*(float *)(((int)stk + 24))));
    u29 = ((*(float *)(((int)stk + 16))) * (*(float *)(((int)stk + 4))));
    u29 = u29 + (*(float *)(((int)stk + 8))) * ((*(float *)(((int)stk + 12))) * (*(float *)(((int)stk + 20))));
    *(float *)0xC141840 = u29;
    *(float *)0xC141844 = (((((*(float *)(((int)stk + 12))) * (*(float *)(((int)stk + 4))))) * (*(float *)(((int)stk + 20)))) - ((*(float *)(((int)stk + 16))) * (*(float *)(((int)stk + 8)))));
    *(float *)0xC141848 = ((*(float *)(((int)stk + 20))) * (*(float *)(((int)stk + 24))));
    return (nlMultiMatrix8(0xC141820));
}
