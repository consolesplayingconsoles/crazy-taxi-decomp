/* Straight-line functions with calls and guards (batch gen_ds): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlAddVector(int, int);
int nlScaleUnitVector(int, int, float);
int nlSubVector3op(int, int, int);
int HomingPos1(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);

int HomingPos1(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    int stk[16];

    int R0;
    int R3;
    int R4;
    int R5;
    int R6;
    float F4;
    int T_;
    stk[4] = a8;
    stk[5] = a9;
    stk[6] = a10;
    stk[7] = a11;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    F4 = f4;
    L_C04D46C:;
    *(float *)(((int)stk + 8)) = F4;
    *(unsigned int *)(((int)stk + 4)) = R4;
    nlSubVector3op(0xC2A6AA0, (((int)stk + 4) + 0xC), R4);
    nlScaleUnitVector(0xC2A6AB8, 0xC2A6AA0, (*(float *)(((int)stk + 8))));
    return (nlAddVector((*(int *)(((int)stk + 4))), 0xC2A6AB8));
}
