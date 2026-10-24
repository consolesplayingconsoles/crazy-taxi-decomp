/* Straight-line functions with calls and guards (batch gen_zq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetAverageAngle(int, int, float);
extern float _builtin_sqrtf(float);
int nlArcTan2(float, float);
float nlInnerProduct(int, int);
int nlSubVector3op(int, int, int);
int nlUnitVector(int);
int psgFaceBoyFriend(int a4);

int psgFaceBoyFriend(int a4)
{
    float t5;
    float u6;
    float u7;
    int t9;
    int t12;
    int stk[11];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((*(int *)(((((int)((int)(*(int *)((a4 + 0x154))) % (int)0x5)) << 2) + 0xC1794D4))) + 0x20)); }
    nlSubVector3op((((int)stk + 4) + 0xC), ((int)stk + 4), (a4 + 0x4));
    *(float *)(((int)stk + 20)) = 0.0f;
    nlUnitVector((((int)stk + 4) + 0xC));
    t5 = nlInnerProduct((((int)stk + 4) + 0xC), 0xC0D5554);
    u6 = *(float *)(((int)stk + 16));
    u7 = (-_builtin_sqrtf((1.0f - (t5 * t5))));
    if (u6 > 0.0f) {
        u7 = _builtin_sqrtf((1.0f - (t5 * t5)));
    }
    t9 = nlArcTan2(u7, t5);
    t12 = GetAverageAngle((*(int *)((a4 + 0x10))), t9, 0.95f);
    *(unsigned int *)((a4 + 0x10)) = (short)t12;
    return (short)t12;
}
