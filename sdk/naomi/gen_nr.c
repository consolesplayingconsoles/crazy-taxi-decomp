/* Straight-line functions with calls and guards (batch gen_nr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float nlInnerProduct(int, int);
int nlMultiMatrix(int);
int nlParallelProj(int a4);

int nlParallelProj(int a4)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;
    float t9;
    int stk[20] = {0};

    u0 = *(float *)((a4 + 0xC));
    *(float *)(((int)stk + 4)) = ((-(u0 * u0)) + 1.0f);
    u1 = *(float *)((a4 + 0x10));
    *(float *)(((int)stk + 24)) = ((-(u1 * u1)) + 1.0f);
    u2 = *(float *)((a4 + 0x14));
    *(float *)(((int)stk + 44)) = ((-(u2 * u2)) + 1.0f);
    u3 = *(float *)((a4 + 0x10));
    u4 = *(float *)((a4 + 0xC));
    *(float *)((((int)stk + 4) + 0x10)) = (-(u4 * u3));
    *(float *)((((int)stk + 4) + 0x4)) = (-(u4 * u3));
    u5 = *(float *)((a4 + 0x14));
    u6 = *(float *)((a4 + 0xC));
    *(float *)((((int)stk + 4) + 0x20)) = (-(u6 * u5));
    *(float *)((((int)stk + 4) + 0x8)) = (-(u6 * u5));
    u7 = *(float *)((a4 + 0x14));
    u8 = *(float *)((a4 + 0x10));
    *(float *)((((int)stk + 4) + 0x24)) = (-(u8 * u7));
    *(float *)((((int)stk + 4) + 0x18)) = (-(u8 * u7));
    t9 = nlInnerProduct(a4, (a4 + 0xC));
    *(float *)(((int)stk + 52)) = (t9 * (*(float *)((a4 + 0xC))));
    *(float *)(((int)stk + 56)) = (t9 * (*(float *)((a4 + 0x10))));
    *(float *)(((int)stk + 60)) = (t9 * (*(float *)((a4 + 0x14))));
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    *(float *)(((int)stk + 64)) = 1.0f;
    return (nlMultiMatrix(((int)stk + 4)));
}
