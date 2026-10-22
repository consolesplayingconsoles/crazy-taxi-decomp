/* Straight-line functions with calls and guards (batch gen_ip): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c077210(int, int);
int FUN_0c078a70(int, int, int);
int FcvPlay(int, int, float);
int GetAverageAngle(int, int, float);
int IsBoyFriend(int, int);
int Psg_SetPosPtr(int, int);
extern float _builtin_sqrtf(float);
int humanDraw(int, int, int, int);
int nlArcTan2(float, float);
int nlGetAverageVector(int, int, int, float, float);
int nlGetPushedMatrix(int);
float nlInnerProduct(int, int);
float nlLength(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nlUnitVector(int);
int psgEnterState1(int, int);
int psgFaceBoyFriend(int);
int psgFaceTaxi(int);
int psgPlayBlend(int, int);
int psgPutMarker(int, int);
int psgPutShadow(int);
float psgRunToPoint(int);
int psgSetState(int, int, int, int);
int psgUpdatePartTracks(int);
int psgFrameState1(int a4);

int psgFrameState1(int a4)
{
    float t1;
    int t10;
    float t15;
    float u16;
    float u17;
    int t21;
    int t23;
    float u24;
    int t25;
    int t27;
    float u28;
    int t29;
    int t46;
    float u49;
    float t97;
    int t100;
    float u101;
    int t5;
    int t124;
    int stk[33] = {0};

    *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) | 0x40);
    *(unsigned int *)(((int)stk + 4)) = 0xC1790CC;
    t1 = nlLength((a4 + 0x4), 0xC179144);
    nlSubVector3op((((int)stk + 4) + 0x54), ((*(int *)(((int)stk + 4))) + 0x78), (a4 + 0x4));
    if ((t1 > (*(float *)0xC13EEE0)) && (t5 = *(int *)((a4 + 0x24)), t5 != 1)) {
        *(unsigned int *)((a4 + 0x24)) = 0x1;
        psgEnterState1(a4, 0x1);
    }
    t10 = *(int *)((a4 + 0x24));
    if (t10 != 0) {
        if (t10 != 1) {
            if (t10 == 2) {
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xBF);
                *(unsigned char *)(((0x14B + a4) + 0x0)) = ((*(signed char *)(((0x14B + a4) + 0x0))) | 0x2);
                nlPushMatrix(0x0);
                *(float *)(((int)stk + 92)) = 0.0f;
                nlUnitVector((((int)stk + 4) + 0x54));
                t15 = nlInnerProduct((((int)stk + 4) + 0x54), 0xC0D5554);
                u16 = *(float *)(((int)stk + 88));
                u17 = (-_builtin_sqrtf((1.0f - (t15 * t15))));
                if (u16 > 0.0f) {
                    u17 = _builtin_sqrtf((1.0f - (t15 * t15)));
                }
                t21 = GetAverageAngle((*(int *)((a4 + 0x10))), (nlArcTan2(u17, t15)), 0.799999952f);
                *(unsigned int *)((a4 + 0x10)) = (short)t21;
                nlRotateAY(((short)t21 + 0x8000));
                t23 = *(int *)((a4 + 0x34));
                u24 = *(float *)((a4 + 0x38));
                t25 = *(int *)((t23 + 0x4));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x1C)) = *(struct mv3 *)(((*(int *)((t23 + 0x8))) + ((((((int)u24 - 1) * (((t25 + 0x1) << 1) + 0x1)) << 1) + (((int)u24 - 1) * (((t25 + 0x1) << 1) + 0x1))) << 2))); }
                t27 = *(int *)((a4 + 0x34));
                u28 = *(float *)((a4 + 0x38));
                t29 = *(int *)((t27 + 0x4));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x10)) = *(struct mv3 *)(((*(int *)((t27 + 0x8))) + (((((int)u28 * (((t29 + 0x1) << 1) + 0x1)) << 1) + ((int)u28 * (((t29 + 0x1) << 1) + 0x1))) << 2))); }
                *(float *)(((int)stk + 24)) = 0.0f;
                *(float *)(((int)stk + 36)) = 0.0f;
                nlSubVector((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x1C));
                FUN_0c077210((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x1C));
                nlGetAverageVector((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x54), (((int)stk + 4) + 0x10), 1.39999998f, -0.5f);
                FUN_0c078a70((((int)stk + 4) + 0x1C), (a4 + 0x4), (((int)stk + 4) + 0x10));
                Psg_SetPosPtr(a4, (((int)stk + 4) + 0x1C));
                nlGetPushedMatrix(0x0);
                psgPutShadow(a4);
                if (((*(signed char *)((a4 + 0x149))) & 128) == 0) {
                    psgUpdatePartTracks(a4);
                    humanDraw((*(int *)((a4 + 0x34))), (*(int *)((a4 + 0x0))), (int)(*(float *)((a4 + 0x38))), 0x1);
                    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + 1.0f);
                    t46 = *(int *)(((*(int *)((a4 + 0x34))) + 0x0));
                    u49 = (float)(t46 - 2);
                    if ((int)(t46 - 2) < 0) {
                        u49 = ((float)(t46 - 2) + 4.2949673e+09f);
                    }
                    if (!(u49 > (*(float *)((a4 + 0x38))))) {
                        psgSetState(a4, 0x0, 0x0, 0x0);
                    }
                } else {
                    psgPlayBlend(a4, 0x1);
                }
                nlPopMatrix(0x1);
            } else {
                if (t10 == 3) {
                    nlPushMatrix(0x0);
                    psgPutShadow(a4);
                    if (((*(signed char *)((a4 + 0x149))) & 128) != 0) {
                        psgPlayBlend(a4, 0x1);
                    } else {
                        psgUpdatePartTracks(a4);
                        humanDraw((*(int *)((a4 + 0x34))), (*(int *)((a4 + 0x0))), (int)(*(float *)((a4 + 0x38))), 0x1);
                        psgSetState(a4, 0x0, 0x0, 0x0);
                    }
                    nlPopMatrix(0x1);
                }
            }
        } else {
            *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0xBF);
            nlPushMatrix(0x0);
            *(volatile int *)((a4 + 0x28));
            t97 = psgRunToPoint(a4);
            psgPutShadow(a4);
            psgUpdatePartTracks(a4);
            t100 = *(int *)((a4 + 0x0));
            u101 = *(float *)((a4 + 0x38));
            *(unsigned int *)(((int)stk + 4)) = t100;
            FcvPlay((*(int *)((((t100 - 23) << 2) + 0xC0D5690))), t100, u101);
            *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x120 + a4) + 0x0))));
            if (!(3.0f > t97)) {
            } else {
                *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) | 0x40);
                psgSetState(a4, 0x0, 0x0, 0x0);
            }
            nlPopMatrix(0x1);
        }
    } else {
        *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) | 0x40);
        nlPushMatrix(0x0);
        if (((*(int *)0xC1EE20C) == 2) && (t124 = *(int *)0xC1EE214, t124 == 8)) {
            if ((IsBoyFriend((*(int *)((a4 + 0x0))), 0x0)) == 0) {
                psgFaceBoyFriend(a4);
            } else {
                psgFaceTaxi(a4);
            }
        } else {
            psgFaceTaxi(a4);
        }
        psgPutShadow(a4);
        if (((*(signed char *)((a4 + 0x149))) & 128) != 0) {
            psgPlayBlend(a4, 0x0);
        } else {
            psgUpdatePartTracks(a4);
            humanDraw((*(int *)((a4 + 0x34))), (*(int *)((a4 + 0x0))), (int)(*(float *)((a4 + 0x38))), 0x0);
            *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + 1.0f);
        }
        nlPopMatrix(0x1);
    }
    return (psgPutMarker(a4, 0x1));
}
