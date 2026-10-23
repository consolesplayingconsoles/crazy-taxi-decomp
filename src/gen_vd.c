/* Straight-line functions with calls and guards (batch gen_vd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetAverageAngle(int, int, float);
extern float _builtin_sqrtf(float);
int nlArcTan2(float, float);
float nlInnerProduct(int, int);
int nlSubVector3op(int, int, int, float, float, float);
int nlUnitVector(int);
int psgFaceTaxi(int a4, float f4, float f5, float f6);

int psgFaceTaxi(int a4, float f4, float f5, float f6)
{
    float t2;
    float u3;
    float u4;
    int t9;
    int stk[8];

    nlSubVector3op(((int)stk + 4), 0xC179144, (a4 + 0x4), f4, f5, f6);
    *(float *)(((int)stk + 8)) = 0.0f;
    nlUnitVector(((int)stk + 4));
    t2 = nlInnerProduct(((int)stk + 4), 0xC0D5554);
    u3 = *(float *)(((int)stk + 4));
    u4 = (-_builtin_sqrtf((1.0f - (t2 * t2))));
    if (u3 > 0.0f) {
        u4 = _builtin_sqrtf((1.0f - (t2 * t2)));
    }
    t9 = GetAverageAngle((*(int *)((a4 + 0x10))), (nlArcTan2(u4, t2)), (*(float *)0xC071230));
    *(unsigned int *)((a4 + 0x10)) = (short)t9;
    return (short)t9;
}
