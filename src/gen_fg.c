/* Straight-line functions with calls and guards (batch gen_fg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c077210(int, int);
int GetAverageAngle(int, int, float);
int Psg_SetMoveSpeed(int, float);
int Psg_SetPosPtr(int, int);
int nlArcTan2(float, float);
int nlGetAverageVector(int, int, int, float, float);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
int nlSubVector3op(int, int, int);
float nlUnitVector(int);
float psgRunToPoint(int a4, int a5);

float psgRunToPoint(int a4, int a5)
{
    float t1;
    float u17;
    float u12;
    float u7;
    float u4;
    int t23;
    int stk[13] = {0};

    nlSubVector3op((((int)stk + 4) + 0x10), a5, (a4 + 0x4));
    *(float *)(((int)stk + 24)) = 0.0f;
    t1 = nlUnitVector((((int)stk + 4) + 0x10));
    u17 = 0.0f;
    if (50.0f > t1) {
    } else {
        u12 = 0.849999964f;
        if (70.5f > t1) {
        } else {
            u7 = 0.875f;
            if (100.0f > t1) {
            } else {
                u4 = 0.924999952f;
                if (125.0f > t1) {
                } else {
                    u4 = (0.95f);
                }
                u7 = u4;
            }
            u12 = u7;
        }
        u17 = u12;
    }
    t23 = nlArcTan2((*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 28))));
    *(unsigned int *)(((int)stk + 4)) = t23;
    *(unsigned int *)((a4 + 0x10)) = (short)(GetAverageAngle((*(int *)((a4 + 0x10))), t23, u17));
    if ((0.625f) > (*(float *)((a4 + 0x11C)))) {
        Psg_SetMoveSpeed(a4, ((*(float *)((a4 + 0x11C))) + (0.02f)));
    }
    nlPushUnitMatrix();
    nlRotateAY(((*(int *)((a4 + 0x10))) + 0x8000));
    FUN_0c077210(0xC0D5578, (((int)stk + 4) + 0x10));
    nlGetAverageVector((a4 + 0x4), (((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4), 1.0f, (*(float *)((a4 + 0x11C))));
    Psg_SetPosPtr(a4, (((int)stk + 4) + 0x4));
    nlPopMatrix(0x1);
    return t1;
}
