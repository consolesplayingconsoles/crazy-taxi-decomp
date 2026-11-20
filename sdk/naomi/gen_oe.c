/* Straight-line functions with calls and guards (batch gen_oe): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlCalcPoint4(int, int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlScreenPoint(int a4, int a5, int a6, float f4, float f5, float f6);

int nlScreenPoint(int a4, int a5, int a6, float f4, float f5, float f6)
{
    float u6;
    int stk[15] = {0};

    *(float *)(((int)stk + 24)) = f4;
    *(float *)(((int)stk + 12)) = f5;
    *(float *)(((int)stk + 20)) = f6;
    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    nlPushMatrix(0xC2B3410);
    nlMultiMatrix(0xC2B33D0);
    *(float *)(((int)stk + 44)) = (*(float *)(((int)stk + 24)));
    *(float *)(((int)stk + 48)) = (*(float *)(((int)stk + 12)));
    *(float *)(((int)stk + 52)) = (*(float *)(((int)stk + 20)));
    nlCalcPoint4((((int)stk + 4) + 0x28), (((int)stk + 4) + 0x18));
    u6 = *(float *)(((int)stk + 40));
    *(float *)(((*(int *)(((int)stk + 16))) + 0x0)) = ((*(float *)(((int)stk + 28))) * (1.0f / u6));
    *(float *)(((*(int *)(((int)stk + 8))) + 0x0)) = ((*(float *)(((int)stk + 32))) * (1.0f / u6));
    *(float *)(((*(int *)(((int)stk + 4))) + 0x0)) = (1.0f / u6);
    return (nlPopMatrix(0x1));
}
