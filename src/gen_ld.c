/* Straight-line functions with calls and guards (batch gen_ld): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float nlAbsSqrt(float);
int nlArcTan2(float, float);
int nlSubVector3op(int, int, int, float, float, float);
int nlUnitVector(int);
int Current_to_Target_angleX(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5, float f6);

int Current_to_Target_angleX(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5, float f6)
{
    float u2;
    float u3;
    float u4;
    int stk[19];

    stk[7] = a8;
    stk[8] = a9;
    stk[9] = a10;
    stk[10] = a11;
    nlSubVector3op(((int)stk + 4), (((int)stk + 4) + 0x18), (((int)stk + 4) + 0x24), f4, f5, f6);
    nlUnitVector(((int)stk + 4));
    u2 = *(float *)(((int)stk + 4));
    u3 = *(float *)(((int)stk + 12));
    u4 = (u3 * u3);
    u4 = u4 + u2 * u2;
    return (-(nlArcTan2((*(float *)(((int)stk + 8))), (nlAbsSqrt(u4)))));
}
