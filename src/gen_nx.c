/* Straight-line functions with calls and guards (batch gen_nx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c079f10(void);
int nlMultiMatrix(int);
int FUN_0c078ef0(float f4, float f5, float f6, float f7, float f8, float f9);

int FUN_0c078ef0(float f4, float f5, float f6, float f7, float f8, float f9)
{
    int stk[18] = {0};

    *(float *)(((int)stk + 4)) = ((f8 * (1.0f + 1.0f)) / (f5 - f4));
    *(float *)(((int)stk + 8)) = 0.0f;
    *(float *)(((int)stk + 12)) = 0.0f;
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = ((f8 * (1.0f + 1.0f)) / (f7 - f6));
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = ((f4 + f5) / (f5 - f4));
    *(float *)(((int)stk + 40)) = ((f6 + f7) / (f7 - f6));
    *(float *)(((int)stk + 44)) = (((-f8) - f9) / (f9 - f8));
    *(float *)(((int)stk + 48)) = 1.0f;
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = 0.0f;
    *(float *)(((int)stk + 60)) = ((((f8 * f9)) * (1.0f + 1.0f)) / (f9 - f8));
    *(float *)(((int)stk + 64)) = 0.0f;
    *(float *)0xC2B7BDC = f8;
    *(float *)0xC2B7BE0 = f9;
    *(float *)0xC2B7BE4 = (1.0f / f8);
    *(float *)0xC2B3174 = f8;
    *(float *)0xC2B315C = (-f8);
    *(float *)0xC2B3178 = f9;
    *(float *)0xC2B3170 = (1.0f / f8);
    nlMultiMatrix(((int)stk + 4));
    return (FUN_0c079f10());
}
