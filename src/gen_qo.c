/* Straight-line functions with calls and guards (batch gen_qo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlAddVector(int, int);
int nlScaleUnitVector(int, int, float);
int nlSubVector3op(int, int, int, float, float, float);
int HomingPos1(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5, float f6);

int HomingPos1(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5, float f6)
{
    int stk[16];

    stk[4] = a8;
    stk[5] = a9;
    stk[6] = a10;
    stk[7] = a11;
    *(float *)(((int)stk + 8)) = f4;
    *(unsigned int *)(((int)stk + 4)) = a4;
    nlSubVector3op(0xC2A6AA0, (((int)stk + 4) + 0xC), a4, f4, f5, f6);
    nlScaleUnitVector(0xC2A6AB8, 0xC2A6AA0, (*(float *)(((int)stk + 8))));
    return (nlAddVector((*(int *)(((int)stk + 4))), 0xC2A6AB8));
}
