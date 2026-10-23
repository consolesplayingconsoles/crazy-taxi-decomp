/* Straight-line functions with calls and guards (batch gen_amh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlGetMatrix(int);
int nlLoadMatrix(int);
float nlScalor(int);
int nlSetScaleFactor(float);
int nlVoidUnitVector(int);
int CalcShadow2Matrix(int a4);

int CalcShadow2Matrix(int a4)
{
    int t0;
    int stk[7];

    t0 = nlGetMatrix(0x0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(a4); }
    *(float *)(((int)stk + 4)) = (-(*(float *)((a4 + 0x8))));
    *(float *)(((int)stk + 12)) = (*(float *)((a4 + 0x0)));
    *(float *)(((int)stk + 8)) = 0.0f;
    nlVoidUnitVector(((int)stk + 4));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)(((int)stk + 4)); }
    nlLoadMatrix(0x0);
    return (nlSetScaleFactor((nlScalor(a4))));
}
