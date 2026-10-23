/* Straight-line functions with calls and guards (batch gen_anw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern float _builtin_sqrtf(float);
int getYXZrot(int);
int nlAddVector(int, int);
int nlArcTan2(float, float);
int nlCalcVector(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
float nlTan(int);
int nlTranslate(float, float, float);
int carSteering(int a4);

int carSteering(int a4)
{
    float u9;
    float t12;
    float u13;
    float u15;
    int t16;
    int t17;
    float u25;
    int stk[11];

    nlPushUnitMatrix();
    nlRotateAY((unsigned short)(*(short *)((a4 + 0xA6))));
    nlRotateAX((unsigned short)(*(short *)((a4 + 0xA4))));
    nlRotateAZ((unsigned short)(*(short *)((a4 + 0xA8))));
    if ((*(int *)((a4 + 0xC0))) != 0) {
        u9 = *(float *)(((short)((short)(*(short *)((a4 + 0x78))) * (short)0xA8) + 0xC0A26C0));
        nlTranslate(0.0f, 0.0f, (-u9));
        t12 = nlTan((*(int *)((a4 + 0xC0))));
        u13 = *(float *)((a4 + 0xCC));
        u15 = (u13 * u13);
        u15 = u15 + (u9 / t12) * (u9 / t12);
        t16 = nlArcTan2(((*(float *)((a4 + 0xCC))) * (1.0f / _builtin_sqrtf(u15))), (_builtin_fabsf((u9 / t12)) * (1.0f / _builtin_sqrtf(u15))));
        t17 = t16;
        if (0.0f > (u9 / t12)) {
            t17 = (-t16);
        }
        nlRotateAY(t17);
        nlTranslate(0.0f, 0.0f, u9);
        u25 = (1.0f / _builtin_sqrtf(u15));
    }
    getYXZrot((0xA4 + a4));
    *(float *)(((int)stk + 8)) = 0.0f;
    *(float *)(((int)stk + 4)) = 0.0f;
    *(float *)(((int)stk + 12)) = (*(float *)((a4 + 0xC4)));
    nlCalcVector(((int)stk + 4), ((int)stk + 4));
    nlPopMatrix(0x1);
    return (nlAddVector((0x98 + a4), ((int)stk + 4)));
}
