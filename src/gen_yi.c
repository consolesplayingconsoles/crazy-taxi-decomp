/* Straight-line functions with calls and guards (batch gen_yi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetAverageAngle(int, int, float);
int Psg_SetPosPtr(int, int);
int humanDraw(int, int, int, int);
int nlAddVector(int, int);
int nlArcTan2(float, float);
int nlCalcVector(int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlGetPushedMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlScaleVector(int, int, float);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
float nlUnitVector(int);
int psgPlayBlend(int, int);
int psgPutMarker(int, int);
int psgPutShadow(int);
int psgSetState(int, int, int, int);
int psgUpdatePartTracks(int);
int psgFrameState6(int a4);

int psgFrameState6(int a4)
{
    int t12;
    int t14;
    float u15;
    int t16;
    int t18;
    float u19;
    int t20;
    float t25;
    float u26;
    int t42;
    float u45;
    int stk[14];

    if ((*(int *)((a4 + 0x24))) != 0) {
    } else {
        *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xBF);
        *(unsigned char *)(((0x14B + a4) + 0x0)) = ((*(signed char *)(((0x14B + a4) + 0x0))) | 0x2);
        nlPushMatrix(0x0);
        nlSubVector3op((((int)stk + 4) + 0x4), (a4 + 0x4), 0xC179144);
        nlUnitVector((((int)stk + 4) + 0x4));
        *(unsigned int *)(((int)stk + 4)) = (nlArcTan2((-(*(float *)(((int)stk + 8)))), (-(*(float *)(((int)stk + 16))))));
        t12 = GetAverageAngle((*(int *)((a4 + 0x10))), (*(int *)(((int)stk + 4))), 0.849999964f);
        *(unsigned int *)((a4 + 0x10)) = (short)t12;
        nlRotateAY(((short)t12 + 0x8000));
        t14 = *(int *)((a4 + 0x34));
        u15 = *(float *)((a4 + 0x38));
        t16 = *(int *)((t14 + 0x4));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x1C)) = *(struct mv3 *)(((*(int *)((t14 + 0x8))) + ((((((int)u15 - 1) * (((t16 + 0x1) << 1) + 0x1)) << 1) + (((int)u15 - 1) * (((t16 + 0x1) << 1) + 0x1))) << 2))); }
        t18 = *(int *)((a4 + 0x34));
        u19 = *(float *)((a4 + 0x38));
        t20 = *(int *)((t18 + 0x4));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x10)) = *(struct mv3 *)(((*(int *)((t18 + 0x8))) + (((((int)u19 * (((t20 + 0x1) << 1) + 0x1)) << 1) + ((int)u19 * (((t20 + 0x1) << 1) + 0x1))) << 2))); }
        *(float *)(((int)stk + 24)) = 0.0f;
        *(float *)(((int)stk + 36)) = 0.0f;
        nlSubVector((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x1C));
        nlCalcVector((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x1C));
        nlGetAverageVector((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x4), (((int)stk + 4) + 0x10), 1.3499999f, 0.75f);
        t25 = nlUnitVector((((int)stk + 4) + 0x10));
        u26 = t25;
        if (t25 > 2.75f) {
            u26 = 2.75f;
        }
        nlScaleVector((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x10), u26);
        nlAddVector((((int)stk + 4) + 0x10), (a4 + 0x4));
        Psg_SetPosPtr(a4, (((int)stk + 4) + 0x10));
        nlGetPushedMatrix(0x0);
        psgPutShadow(a4);
        if (((*(signed char *)((a4 + 0x149))) & 128) != 0) {
            psgPlayBlend(a4, 0x1);
        } else {
            psgUpdatePartTracks(a4);
            humanDraw((*(int *)((a4 + 0x34))), (*(int *)((a4 + 0x0))), (int)(*(float *)((a4 + 0x38))), 0x1);
            *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + 1.0f);
            t42 = *(int *)(((*(int *)((a4 + 0x34))) + 0x0));
            u45 = (float)(t42 - 2);
            if ((int)(t42 - 2) < 0) {
                u45 = ((float)(t42 - 2) + 4.2949673e+09f);
            }
            if (!(u45 > (*(float *)((a4 + 0x38))))) {
                psgSetState(a4, 0x0, 0x0, 0x0);
            }
        }
        nlPopMatrix(0x1);
    }
    return (psgPutMarker(a4, 0x1));
}
