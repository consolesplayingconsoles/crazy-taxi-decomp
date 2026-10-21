/* Straight-line functions with calls and guards (batch gen_eo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlAddVector(int, int);
int nlScaleUnitVector(int, int, float);
int nlSubVector3op(int, int, int);
int FUN_0c04d46c(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);

int FUN_0c04d46c(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    float u1;
    int t3;
    int t4;
    int stk[16] = {0};

    stk[4] = a8;
    stk[5] = a9;
    stk[6] = a10;
    stk[7] = a11;
    *(float *)(((int)stk + 8)) = f4;
    *(unsigned int *)(((int)stk + 4)) = a4;
    nlSubVector3op(0xC2A6AA0, (((int)stk + 4) + 0xC), a4);
    u1 = *(float *)(((int)stk + 8));
    nlScaleUnitVector(0xC2A6AB8, 0xC2A6AA0, u1);
    t3 = *(int *)(((int)stk + 4));
    t4 = nlAddVector(t3, 0xC2A6AB8);
    return t4;
}
