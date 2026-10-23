/* Straight-line functions with calls and guards (batch gen_hy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlArcTan2(float, float);
int nlCalcVector(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSubVector(int, int);
int getSteering(int a4, int a5);

int getSteering(int a4, int a5)
{
    int t15;
    int t18;
    int t16;
    int t21;
    int t24;
    int t22;
    int stk[8];

    *(unsigned int *)(((int)stk + 4)) = a5;
    nlPushUnitMatrix();
    nlRotateAZ((-(unsigned short)(*(short *)((a4 + 0xA8)))));
    nlRotateAX((-(unsigned short)(*(short *)((a4 + 0xA4)))));
    nlRotateAY((-(unsigned short)(*(short *)((a4 + 0xA6)))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x4)) = *(struct mv3 *)((0xE0 + a4)); }
    nlSubVector((((int)stk + 4) + 0x4), (0x8C + a4));
    nlCalcVector((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x4));
    nlPopMatrix(0x1);
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = (short)(nlArcTan2((*(float *)(((int)stk + 8))), (*(float *)(((int)stk + 16)))));
    t15 = *(int *)(((*(int *)(((int)stk + 4))) + 0x0));
    t18 = 0xFFFFEC00;
    if ((int)(int)((float)t15 * 0.599999964f) < (int)0xFFFFEC00) {
    } else {
        t16 = (int)((float)t15 * 0.599999964f);
        if ((int)(int)((float)t15 * 0.599999964f) > (int)0x1400) {
            t16 = 0x1400;
        }
        t18 = t16;
    }
    t21 = *(int *)((a4 + 0xC0));
    t24 = 0xFFFFFFC0;
    if ((int)(int)((float)(t18 - t21) * 0.399999976f) < (int)0xFFFFFFC0) {
    } else {
        t22 = (int)((float)(t18 - t21) * 0.399999976f);
        if ((int)(int)((float)(t18 - t21) * 0.399999976f) > (int)0x40) {
            t22 = 0x40;
        }
        t24 = t22;
    }
    return t24;
}
