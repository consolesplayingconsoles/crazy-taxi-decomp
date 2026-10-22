/* Straight-line functions with calls and guards (batch gen_kj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c071104(int);
int FUN_0c0713d8(int);
int FUN_0c071a7c(int, int);
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
int psgFaceTaxi(int);
int psgPlayBlend(int, int);
int psgPutShadow(int);
float psgRunToPoint(int);
int psgSetState(int, int, int, int);
int psgFrameState1(int a4);

int psgFrameState1(int a4)
{
    int t0;
    float t1;
    int t2;
    float u4;
    int t5;
    int t15;
    int t16;
    int t17;
    float t20;
    float u21;
    float u22;
    int t24;
    int t25;
    int t26;
    int t28;
    float u29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    float u36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t49;
    int t51;
    float u52;
    int t53;
    float u55;
    int t56;
    int t57;
    float u60;
    float u63;
    int t83;
    int t86;
    float u87;
    int t88;
    int t105;
    float t108;
    int t111;
    float u112;
    int t113;
    float u115;
    float u116;
    int t117;
    int t132;
    int t134;
    int t135;
    int t136;
    int t137;
    int t149;
    int t152;
    float u153;
    int t154;
    float u156;
    int t168;
    int stk[33] = {0};

    t0 = *(signed char *)(((0x149 + a4) + 0x0));
    *(unsigned char *)(((0x149 + a4) + 0x0)) = (t0 | 0x40);
    *(unsigned int *)(((int)stk + 4)) = 0xC1790CC;
    t1 = nlLength((a4 + 0x4), 0xC179144);
    t2 = *(int *)(((int)stk + 4));
    nlSubVector3op((((int)stk + 4) + 0x54), (t2 + 0x78), (a4 + 0x4));
    u4 = *(float *)0xC13EEE0;
    if (t1 > u4) {
        t5 = *(int *)((a4 + 0x24));
        if (t5 != 1) {
            *(unsigned int *)((a4 + 0x24)) = 0x1;
            psgEnterState1(a4, 0x1);
        }
    }
    t15 = *(int *)((a4 + 0x24));
    if (t15 != 0) {
        if (t15 != 1) {
            if (t15 == 2) {
                t16 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t16 & 0xBF);
                t17 = *(signed char *)(((0x14B + a4) + 0x0));
                *(unsigned char *)(((0x14B + a4) + 0x0)) = (t17 | 0x2);
                nlPushMatrix(0x0);
                *(float *)(((int)stk + 92)) = 0.0f;
                nlUnitVector((((int)stk + 4) + 0x54));
                t20 = nlInnerProduct((((int)stk + 4) + 0x54), 0xC0D5554);
                u21 = *(float *)(((int)stk + 88));
                u22 = (-_builtin_sqrtf((1.0f - (t20 * t20))));
                if (u21 > 0.0f) {
                    u22 = _builtin_sqrtf((1.0f - (t20 * t20)));
                }
                t24 = nlArcTan2(u22, t20);
                t25 = *(int *)((a4 + 0x10));
                t26 = GetAverageAngle(t25, t24, 0.799999952f);
                *(unsigned int *)((a4 + 0x10)) = (short)t26;
                nlRotateAY(((short)t26 + 0x8000));
                t28 = *(int *)((a4 + 0x34));
                u29 = *(float *)((a4 + 0x38));
                t30 = *(int *)((t28 + 0x4));
                t31 = *(int *)((t28 + 0x8));
                t32 = *(int *)(((t31 + ((((((int)u29 - 1) * (((t30 + 0x1) << 1) + 0x1)) << 1) + (((int)u29 - 1) * (((t30 + 0x1) << 1) + 0x1))) << 2)) + 0x8));
                t33 = *(int *)(((t31 + ((((((int)u29 - 1) * (((t30 + 0x1) << 1) + 0x1)) << 1) + (((int)u29 - 1) * (((t30 + 0x1) << 1) + 0x1))) << 2)) + 0x4));
                *(unsigned int *)(((((int)stk + 4) + 0x1C) + 0x8)) = t32;
                t34 = *(int *)(((t31 + ((((((int)u29 - 1) * (((t30 + 0x1) << 1) + 0x1)) << 1) + (((int)u29 - 1) * (((t30 + 0x1) << 1) + 0x1))) << 2)) + 0x0));
                *(unsigned int *)(((((int)stk + 4) + 0x1C) + 0x4)) = t33;
                *(unsigned int *)(((((int)stk + 4) + 0x1C) + 0x0)) = t34;
                t35 = *(int *)((a4 + 0x34));
                u36 = *(float *)((a4 + 0x38));
                t37 = *(int *)((t35 + 0x4));
                t38 = *(int *)((t35 + 0x8));
                t39 = *(int *)(((t38 + (((((int)u36 * (((t37 + 0x1) << 1) + 0x1)) << 1) + ((int)u36 * (((t37 + 0x1) << 1) + 0x1))) << 2)) + 0x8));
                t40 = *(int *)(((t38 + (((((int)u36 * (((t37 + 0x1) << 1) + 0x1)) << 1) + ((int)u36 * (((t37 + 0x1) << 1) + 0x1))) << 2)) + 0x4));
                *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x8)) = t39;
                t41 = *(int *)(((t38 + (((((int)u36 * (((t37 + 0x1) << 1) + 0x1)) << 1) + ((int)u36 * (((t37 + 0x1) << 1) + 0x1))) << 2)) + 0x0));
                *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x4)) = t40;
                *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x0)) = t41;
                *(float *)(((int)stk + 24)) = 0.0f;
                *(float *)(((int)stk + 36)) = 0.0f;
                nlSubVector((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x1C));
                FUN_0c077210((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x1C));
                nlGetAverageVector((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x54), (((int)stk + 4) + 0x10), 1.39999998f, -0.5f);
                FUN_0c078a70((((int)stk + 4) + 0x1C), (a4 + 0x4), (((int)stk + 4) + 0x10));
                Psg_SetPosPtr(a4, (((int)stk + 4) + 0x1C));
                nlGetPushedMatrix(0x0);
                psgPutShadow(a4);
                t49 = *(signed char *)((a4 + 0x149));
                if ((t49 & 128) == 0) {
                    FUN_0c0713d8(a4);
                    t51 = *(int *)((a4 + 0x0));
                    u52 = *(float *)((a4 + 0x38));
                    t53 = *(int *)((a4 + 0x34));
                    humanDraw(t53, t51, (int)u52, 0x1);
                    u55 = *(float *)((a4 + 0x38));
                    *(float *)((a4 + 0x38)) = (u55 + 1.0f);
                    t56 = *(int *)((a4 + 0x34));
                    t57 = *(int *)((t56 + 0x0));
                    u60 = (float)(t57 - 2);
                    if ((int)(t57 - 2) < 0) {
                        u60 = ((float)(t57 - 2) + 4.2949673e+09f);
                    }
                    u63 = *(float *)((a4 + 0x38));
                    if (!(u60 > u63)) {
                        psgSetState(a4, 0x0, 0x0, 0x0);
                    }
                } else {
                    psgPlayBlend(a4, 0x1);
                }
                nlPopMatrix(0x1);
            } else {
                if (t15 == 3) {
                    nlPushMatrix(0x0);
                    psgPutShadow(a4);
                    t83 = *(signed char *)((a4 + 0x149));
                    if ((t83 & 128) != 0) {
                        psgPlayBlend(a4, 0x1);
                    } else {
                        FUN_0c0713d8(a4);
                        t86 = *(int *)((a4 + 0x0));
                        u87 = *(float *)((a4 + 0x38));
                        t88 = *(int *)((a4 + 0x34));
                        humanDraw(t88, t86, (int)u87, 0x1);
                        psgSetState(a4, 0x0, 0x0, 0x0);
                    }
                    nlPopMatrix(0x1);
                }
            }
        } else {
            t105 = *(signed char *)(((0x149 + a4) + 0x0));
            *(unsigned char *)(((0x149 + a4) + 0x0)) = (t105 & 0xBF);
            nlPushMatrix(0x0);
            *(volatile int *)((a4 + 0x28));
            t108 = psgRunToPoint(a4);
            psgPutShadow(a4);
            FUN_0c0713d8(a4);
            t111 = *(int *)((a4 + 0x0));
            u112 = *(float *)((a4 + 0x38));
            *(unsigned int *)(((int)stk + 4)) = t111;
            t113 = *(int *)((((t111 - 23) << 2) + 0xC0D5690));
            FcvPlay(t113, t111, u112);
            u115 = *(float *)((a4 + 0x38));
            u116 = *(float *)(((0x120 + a4) + 0x0));
            *(float *)((a4 + 0x38)) = (u115 + u116);
            if (!(3.0f > t108)) {
            } else {
                t117 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t117 | 0x40);
                psgSetState(a4, 0x0, 0x0, 0x0);
            }
            nlPopMatrix(0x1);
        }
    } else {
        t132 = *(signed char *)(((0x149 + a4) + 0x0));
        *(unsigned char *)(((0x149 + a4) + 0x0)) = (t132 | 0x40);
        nlPushMatrix(0x0);
        t134 = *(int *)0xC1EE20C;
        if (t134 == 2) {
            t135 = *(int *)0xC1EE214;
            if (t135 == 8) {
                t136 = *(int *)((a4 + 0x0));
                t137 = IsBoyFriend(t136, 0x0);
                if (t137 == 0) {
                    FUN_0c071104(a4);
                } else {
                    psgFaceTaxi(a4);
                }
            } else {
                psgFaceTaxi(a4);
            }
        } else {
            psgFaceTaxi(a4);
        }
        psgPutShadow(a4);
        t149 = *(signed char *)((a4 + 0x149));
        if ((t149 & 128) != 0) {
            psgPlayBlend(a4, 0x0);
        } else {
            FUN_0c0713d8(a4);
            t152 = *(int *)((a4 + 0x0));
            u153 = *(float *)((a4 + 0x38));
            t154 = *(int *)((a4 + 0x34));
            humanDraw(t154, t152, (int)u153, 0x0);
            u156 = *(float *)((a4 + 0x38));
            *(float *)((a4 + 0x38)) = (u156 + 1.0f);
        }
        nlPopMatrix(0x1);
    }
    t168 = FUN_0c071a7c(a4, 0x1);
    return t168;
}
