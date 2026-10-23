/* Straight-line functions with calls and guards (batch gen_zs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern float _builtin_sqrtf(float);
int nlArcTan2(float, float);
int nlCalcVector(int, int);
int nlGetMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int GetAng4Mat(int a4);

int GetAng4Mat(int a4)
{
    int t0;
    float u4;
    float u5;
    float u6;
    int t17;
    int stk[10];

    t0 = nlGetMatrix(0x0);
    *(unsigned int *)((a4 + 0x4)) = (nlArcTan2((*(float *)((t0 + 0x20))), (*(float *)((t0 + 0x28)))));
    u4 = *(float *)((t0 + 0x20));
    u5 = *(float *)((t0 + 0x28));
    u6 = (u5 * u5);
    u6 = u6 + u4 * u4;
    *(unsigned int *)((a4 + 0x0)) = (-(nlArcTan2((*(float *)((t0 + 0x24))), _builtin_sqrtf(u6))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(t0); }
    nlUnitMatrix();
    nlRotateAX((-(*(int *)((a4 + 0x0)))));
    nlRotateAY((-(*(int *)((a4 + 0x4)))));
    nlCalcVector(((int)stk + 4), ((int)stk + 4));
    t17 = nlArcTan2((*(float *)(((int)stk + 8))), (*(float *)(((int)stk + 4))));
    *(unsigned int *)((a4 + 0x8)) = t17;
    return t17;
}
