/* Straight-line functions with calls and guards (batch gen_ql): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetCollision2D(int, float);
int nlCalcPoint(int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSetTranslate(int);
int carMultiCollision(int a4, float f4);

int carMultiCollision(int a4, float f4)
{
    float u11;
    int t12;
    int t21;
    int t22;
    int t27;
    float u23;
    int stk[11];

    nlPushUnitMatrix();
    nlSetTranslate((0x8C + a4));
    nlRotateAY((unsigned short)(*(short *)((a4 + 0xA6))));
    nlRotateAX((unsigned short)(*(short *)((a4 + 0xA4))));
    nlRotateAZ((unsigned short)(*(short *)((a4 + 0xA8))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0xC0A4788); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0xC)) = *(struct mv3 *)(0xC0A4788); }
    *(float *)(((int)stk + 24)) = (-f4);
    *(float *)(((int)stk + 12)) = f4;
    nlCalcPoint((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC));
    nlCalcPoint(((int)stk + 4), ((int)stk + 4));
    nlPopMatrix(0x1);
    u11 = 1e+01f;
    t12 = GetCollision2D((((int)stk + 4) + 0xC), u11);
    if ((*(int *)((t12 + 0x1C))) != -1) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0xEC + a4)) = *(struct mv3 *)((t12 + 0xC)); }
        *(float *)((a4 + 0x104)) = (*(float *)((t12 + 0x18)));
    }
    t21 = GetCollision2D(((int)stk + 4), u11);
    t22 = *(int *)((t21 + 0x1C));
    t27 = t22;
    if (t22 != -1) {
        u23 = 0.5f;
        nlGetAverageVector((0xEC + a4), (t21 + 0xC), (0xEC + a4), u23, u23);
        *(float *)((a4 + 0x104)) = (((*(float *)((t21 + 0x18))) + (*(float *)((a4 + 0x104)))) * u23);
        t27 = 0x104;
    }
    return t27;
}
