/* Straight-line functions with calls and guards (batch gen_anm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern float _builtin_sqrtf(float);
int nlArcTan2(float, float);
int nlGetMatrix(int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int getYXZrot(int a4);

int getYXZrot(int a4)
{
    float u5;
    float u6;
    float u7;
    int stk[21];

    nlPushMatrix(0x0);
    nlGetMatrix(((int)stk + 0));
    *(unsigned short *)((a4 + 0x2)) = (nlArcTan2((*(float *)(((int)stk + 32))), (*(float *)(((int)stk + 40)))));
    u5 = *(float *)(((int)stk + 32));
    u6 = *(float *)(((int)stk + 40));
    u7 = (u6 * u6);
    u7 = u7 + u5 * u5;
    *(unsigned short *)((a4 + 0x0)) = (-(nlArcTan2((*(float *)(((int)stk + 36))), _builtin_sqrtf(u7))));
    nlUnitMatrix();
    nlRotateAX((-(unsigned short)(*(short *)((a4 + 0x0)))));
    nlRotateAY((-(unsigned short)(*(short *)((a4 + 0x2)))));
    nlMultiMatrix(((int)stk + 0));
    nlGetMatrix(((int)stk + 0));
    *(unsigned short *)((a4 + 0x4)) = (nlArcTan2((*(float *)(((int)stk + 4))), (*(float *)(((int)stk + 0)))));
    return (nlPopMatrix(0x1));
}
