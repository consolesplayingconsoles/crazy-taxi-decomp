/* Straight-line functions with calls and guards (batch gen_nu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float nlInnerProduct(int, int);
float nlInvertSqrt(float);
int nlOuterProduct(int, int, int);
float nlUnitNormalVectorCW(int a4, int a5, int a6, int a7);

float nlUnitNormalVectorCW(int a4, int a5, int a6, int a7)
{
    float t13;
    float t14;
    int stk[9] = {0};

    *(float *)(((int)stk + 16)) = ((*(float *)((a5 + 0x0))) - (*(float *)((a4 + 0x0))));
    *(float *)(((int)stk + 20)) = ((*(float *)((a5 + 0x4))) - (*(float *)((a4 + 0x4))));
    *(float *)(((int)stk + 24)) = ((*(float *)((a5 + 0x8))) - (*(float *)((a4 + 0x8))));
    *(float *)(((int)stk + 4)) = ((*(float *)((a6 + 0x0))) - (*(float *)((a5 + 0x0))));
    *(float *)(((int)stk + 8)) = ((*(float *)((a6 + 0x4))) - (*(float *)((a5 + 0x4))));
    *(float *)(((int)stk + 12)) = ((*(float *)((a6 + 0x8))) - (*(float *)((a5 + 0x8))));
    nlOuterProduct(((int)stk + 4), (((int)stk + 4) + 0xC), a7);
    t13 = nlInnerProduct(a7, a7);
    if (t13 == 0.0f) {
        return t13;
    }
    t14 = nlInvertSqrt(t13);
    *(float *)((a7 + 0x0)) = ((*(float *)((a7 + 0x0))) * t14);
    *(float *)((a7 + 0x4)) = ((*(float *)((a7 + 0x4))) * t14);
    *(float *)((a7 + 0x8)) = ((*(float *)((a7 + 0x8))) * t14);
    return t14;
}
