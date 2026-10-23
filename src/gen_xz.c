/* Straight-line functions with calls and guards (batch gen_xz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlFastSinCos(int, int, int);
int nlMultiMatrix(int);
int sklRotate(int a4);

int sklRotate(int a4)
{
    float u22;
    float u30;
    int stk[10];

    nlFastSinCos((*(short *)((a4 + 0x0))), (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x10));
    nlFastSinCos((*(short *)((a4 + 0x2))), (((int)stk + 4) + 0x8), (((int)stk + 4) + 0x14));
    nlFastSinCos((*(short *)((a4 + 0x4))), ((int)stk + 4), (((int)stk + 4) + 0x4));
    *(float *)0xC13EE3C = ((*(float *)(((int)stk + 24))) * (*(float *)(((int)stk + 8))));
    *(float *)0xC13EE40 = ((*(float *)(((int)stk + 4))) * (*(float *)(((int)stk + 24))));
    *(float *)0xC13EE44 = (-(*(float *)(((int)stk + 12))));
    *(float *)0xC13EE4C = (((((*(float *)(((int)stk + 16))) * (*(float *)(((int)stk + 12))))) * (*(float *)(((int)stk + 8)))) - ((*(float *)(((int)stk + 4))) * (*(float *)(((int)stk + 20)))));
    u22 = ((*(float *)(((int)stk + 20))) * (*(float *)(((int)stk + 8))));
    u22 = u22 + (*(float *)(((int)stk + 4))) * ((*(float *)(((int)stk + 16))) * (*(float *)(((int)stk + 12))));
    *(float *)0xC13EE50 = u22;
    *(float *)0xC13EE54 = ((*(float *)(((int)stk + 16))) * (*(float *)(((int)stk + 24))));
    u30 = ((*(float *)(((int)stk + 16))) * (*(float *)(((int)stk + 4))));
    u30 = u30 + (*(float *)(((int)stk + 8))) * ((*(float *)(((int)stk + 12))) * (*(float *)(((int)stk + 20))));
    *(float *)0xC13EE5C = u30;
    *(float *)0xC13EE60 = (((((*(float *)(((int)stk + 12))) * (*(float *)(((int)stk + 4))))) * (*(float *)(((int)stk + 20)))) - ((*(float *)(((int)stk + 16))) * (*(float *)(((int)stk + 8)))));
    *(float *)0xC13EE64 = ((*(float *)(((int)stk + 20))) * (*(float *)(((int)stk + 24))));
    return (nlMultiMatrix(0xC13EE3C));
}
