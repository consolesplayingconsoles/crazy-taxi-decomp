/* Straight-line functions with calls and guards (batch gen_zy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c079d60(int, int);
int FUN_0c079e70(void);
int PTime_Color_Set(float, float, float);
int PTime_Pos_Set(float, float);
int PTime_Scale_Set(float, float);
int Start_Pass_Default_Sprite(int);
extern float _builtin_sqrtf(float);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int psgTimeDispExec(void);

int psgTimeDispExec(void)
{
    int t0;
    float u11;
    float u17;
    int t24;
    int t22;
    float u38;
    float u44;
    int t51;
    int t54;
    int t57;
    int t64;
    float u112;
    float u113;
    float u114;
    float u115;
    float u116;
    float u119;
    float u120;
    float u121;
    float u144;
    float u150;
    int t157;
    int t155;
    float u170;
    int t173;
    int t175;
    int t184;
    int t179;
    int t161;
    int t102;
    int t100;
    float u130;
    float u131;
    float u132;
    int stk[21] = {0};

    t0 = *(int *)0xC2AE364;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    nlPushUnitMatrix();
                    FUN_0c079e70();
                    FUN_0c079d60(0xC13EDA4, (((int)stk + 4) + 0x14));
                    nlPopMatrix(0x1);
                    *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) + 37.1999969f);
                    *(float *)(((int)stk + 28)) = ((*(float *)(((int)stk + 28))) + -23.3999996f);
                    u11 = (*(float *)0xC2AE374);
                    u11 = u11 + 0.179999992f * (((*(float *)(((((int)stk + 4) + 0x14) + 0x0))) - (*(float *)0xC2AE36C)) - (*(float *)0xC2AE374));
                    *(float *)0xC2AE374 = u11;
                    *(float *)0xC2AE36C = ((*(float *)0xC2AE36C) + (*(float *)0xC2AE374));
                    u17 = (*(float *)0xC2AE370);
                    u17 = u17 + 0.25f * ((*(float *)(((((int)stk + 4) + 0x18) + 0x0))) - (*(float *)0xC2AE370));
                    *(float *)0xC2AE370 = u17;
                    PTime_Pos_Set((*(float *)0xC2AE36C), u17);
                    t24 = 0x44;
                    if ((int)(*(int *)0xC1EE7CC) > (int)(*(int *)0xC1EE7D4)) {
                    } else {
                        t22 = PTime_Color_Set(1.0f, 0.329999983f, 0.0f);
                        *(unsigned int *)0xC2AE364 = ((*(int *)0xC2AE364) + 0x1);
                        t24 = t22;
                    }
                    t102 = t24;
                } else {
                    if (t0 == 4) {
                        nlPushUnitMatrix();
                        FUN_0c079e70();
                        FUN_0c079d60(0xC13EDA4, (((int)stk + 4) + 0x14));
                        nlPopMatrix(0x1);
                        *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) + 37.1999969f);
                        *(float *)(((int)stk + 28)) = ((*(float *)(((int)stk + 28))) + -23.3999996f);
                        u38 = (*(float *)0xC2AE374);
                        u38 = u38 + 0.179999992f * (((*(float *)(((((int)stk + 4) + 0x14) + 0x0))) - (*(float *)0xC2AE36C)) - (*(float *)0xC2AE374));
                        *(float *)0xC2AE374 = u38;
                        *(float *)0xC2AE36C = ((*(float *)0xC2AE36C) + (*(float *)0xC2AE374));
                        u44 = (*(float *)0xC2AE370);
                        u44 = u44 + 0.25f * ((*(float *)(((((int)stk + 4) + 0x18) + 0x0))) - (*(float *)0xC2AE370));
                        *(float *)0xC2AE370 = u44;
                        PTime_Pos_Set((*(float *)0xC2AE36C), u44);
                        if ((int)(*(int *)0xC1EE7CC) <= 0) {
                            *(unsigned int *)0xC2AE364 = ((*(int *)0xC2AE364) + 0x1);
                        }
                        t51 = *(int *)0xC1EE7CC;
                        if ((int)t51 < (int)0xB4) {
                            { struct mv5 { int w[5]; }; *(struct mv5 *)(((int)stk + 4)) = *(struct mv5 *)(0xC0D607C); }
                            t54 = (int)((int)((int)((int)(*(int *)0xC1EE7CC) % (int)0x1E)) % (int)0x5);
                            *(float *)0xC2AE37C = ((*(float *)((((t54 << 2) + ((int)stk + 4)) + 0x0))) + 0.5f);
                            *(float *)0xC2AE380 = ((*(float *)((((t54 << 2) + ((int)stk + 4)) + 0x0))) + 0.5f);
                        } else {
                            t57 = (int)((int)t51 % (int)0x3C);
                            if ((int)t57 < (int)0x1E) {
                                *(float *)0xC2AE37C = ((*(float *)0xC2AE37C) + 0.00999999978f);
                                *(float *)0xC2AE380 = ((*(float *)0xC2AE380) + 0.00999999978f);
                            } else {
                                if ((int)t57 < (int)0x2D) {
                                    *(float *)0xC2AE37C = ((*(float *)0xC2AE37C) - (((*(float *)0xC2AE37C) + -0.5f) * 0.00999999978f));
                                    *(float *)0xC2AE380 = ((*(float *)0xC2AE380) - (((*(float *)0xC2AE380) + -0.5f) * 0.00999999978f));
                                } else {
                                    { struct mv5 { int w[5]; }; *(struct mv5 *)(((int)stk + 4)) = *(struct mv5 *)(0xC0D6090); }
                                    t64 = (int)((int)t57 % (int)0x5);
                                    *(float *)0xC2AE37C = ((*(float *)((((t64 << 2) + ((int)stk + 4)) + 0x0))) + 0.5f);
                                    *(float *)0xC2AE380 = ((*(float *)((((t64 << 2) + ((int)stk + 4)) + 0x0))) + 0.5f);
                                }
                            }
                        }
                        t100 = (PTime_Scale_Set((*(float *)0xC2AE37C), (*(float *)0xC2AE380)));
                    } else {
                        t100 = t0;
                    }
                    t102 = t100;
                }
                t161 = t102;
            } else {
                nlPushUnitMatrix();
                FUN_0c079e70();
                FUN_0c079d60(0xC13EDA4, (((int)stk + 4) + 0x14));
                nlPopMatrix(0x1);
                *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) + 37.1999969f);
                *(float *)(((int)stk + 28)) = ((*(float *)(((int)stk + 28))) + -23.3999996f);
                u112 = *(float *)0xC2AE36C;
                u113 = *(float *)(((int)stk + 24));
                u114 = *(float *)0xC2AE370;
                u115 = *(float *)(((int)stk + 28));
                u116 = ((u115 - u114) * (u115 - u114));
                u116 = u116 + (u113 - u112) * (u113 - u112);
                if (5.0f > _builtin_sqrtf(u116)) {
                    *(float *)0xC2AE378 = 1.0f;
                    *(float *)0xC2AE374 = 1.0f;
                    *(unsigned int *)0xC2AE364 = ((*(int *)0xC2AE364) + 0x1);
                    u130 = (u113 - u112);
                    u131 = (u115 - u114);
                    u132 = _builtin_sqrtf(u116);
                } else {
                    u119 = *(float *)0xC2AE36C;
                    u120 = ((*(float *)0xC2AE384) * ((u115 - u114) / _builtin_sqrtf(u116)));
                    u120 = u120 + 0.899999976f * ((u113 - u112) / _builtin_sqrtf(u116));
                    *(float *)0xC2AE36C = (u119 + u120);
                    u121 = *(float *)0xC2AE384;
                    *(float *)0xC2AE370 = ((*(float *)0xC2AE370) + ((((u115 - u114) / _builtin_sqrtf(u116)) * 0.899999976f) - (u121 * ((u113 - u112) / _builtin_sqrtf(u116)))));
                    *(float *)0xC2AE384 = ((*(float *)0xC2AE384) * 0.939999998f);
                    u130 = ((u113 - u112) / _builtin_sqrtf(u116));
                    u131 = ((((u115 - u114) / _builtin_sqrtf(u116)) * 0.899999976f) - (u121 * ((u113 - u112) / _builtin_sqrtf(u116))));
                    u132 = 0.899999976f;
                }
                nlPushUnitMatrix();
                FUN_0c079e70();
                FUN_0c079d60(0xC13EDA4, (((int)stk + 4) + 0x14));
                nlPopMatrix(0x1);
                *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) + 37.1999969f);
                *(float *)(((int)stk + 28)) = ((*(float *)(((int)stk + 28))) + -23.3999996f);
                u144 = (*(float *)0xC2AE374);
                u144 = u144 + 0.179999992f * (((*(float *)(((((int)stk + 4) + 0x14) + 0x0))) - (*(float *)0xC2AE36C)) - (*(float *)0xC2AE374));
                *(float *)0xC2AE374 = u144;
                *(float *)0xC2AE36C = ((*(float *)0xC2AE36C) + (*(float *)0xC2AE374));
                u150 = (*(float *)0xC2AE370);
                u150 = u150 + 0.25f * ((*(float *)(((((int)stk + 4) + 0x18) + 0x0))) - (*(float *)0xC2AE370));
                *(float *)0xC2AE370 = u150;
                PTime_Pos_Set((*(float *)0xC2AE36C), u150);
                t157 = 0x44;
                if ((int)(*(int *)0xC1EE7CC) > (int)(*(int *)0xC1EE7D4)) {
                } else {
                    t155 = PTime_Color_Set(1.0f, 0.329999983f, 0.0f);
                    *(unsigned int *)0xC2AE364 = ((*(int *)0xC2AE364) + 0x1);
                    t157 = t155;
                }
                t161 = t157;
            }
            t179 = t161;
        } else {
            nlPushUnitMatrix();
            FUN_0c079e70();
            FUN_0c079d60(0xC13EDB0, (((int)stk + 4) + 0x14));
            nlPopMatrix(0x1);
            *(float *)0xC2AE36C = (*(float *)(((int)stk + 24)));
            u170 = *(float *)(((int)stk + 28));
            *(float *)0xC2AE370 = u170;
            PTime_Pos_Set((*(float *)0xC2AE36C), u170);
            t173 = *(int *)0xC1EE210;
            t175 = t173;
            if (t173 == 2) {
            } else {
                t175 = (Start_Pass_Default_Sprite(0xC1EE7CC));
            }
            *(unsigned int *)0xC2AE364 = ((*(int *)0xC2AE364) + 0x1);
            t179 = t175;
        }
        t184 = t179;
    } else {
        *(unsigned int *)0xC2AE364 = ((*(int *)0xC2AE364) + 0x1);
        t184 = t0;
    }
    return t184;
}
