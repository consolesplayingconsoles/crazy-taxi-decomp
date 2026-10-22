/* Straight-line functions with calls and guards (batch gen_dy): generated from the code and checked by tests. Calls are
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
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    float t8;
    float u9;
    float u10;
    int t12;
    float u13;
    int t14;
    int t15;
    int stk[11] = {0};

    t0 = *(int *)((a4 + 0x154));
    t1 = (int)((int)t0 % (int)0x5);
    t2 = *(int *)(((t1 << 2) + 0xC1794D4));
    t3 = *(int *)(((t2 + 0x20) + 0x8));
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t3;
    t4 = *(int *)(((t2 + 0x20) + 0x4));
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t4;
    t5 = *(int *)(((t2 + 0x20) + 0x0));
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t5;
    nlSubVector3op((((int)stk + 4) + 0xC), ((int)stk + 4), (a4 + 0x4));
    *(float *)(((int)stk + 20)) = 0.0f;
    nlUnitVector((((int)stk + 4) + 0xC));
    t8 = nlInnerProduct((((int)stk + 4) + 0xC), 0xC0D5554);
    u9 = *(float *)(((int)stk + 16));
    u10 = (-_builtin_sqrtf((1.0f - (t8 * t8))));
    if (u9 > 0.0f) {
        u10 = _builtin_sqrtf((1.0f - (t8 * t8)));
    }
    t12 = nlArcTan2(u10, t8);
    u13 = *(float *)0xC071230;
    t14 = *(int *)((a4 + 0x10));
    t15 = GetAverageAngle(t14, t12, u13);
    *(unsigned int *)((a4 + 0x10)) = (short)t15;
    return (short)t15;
}
