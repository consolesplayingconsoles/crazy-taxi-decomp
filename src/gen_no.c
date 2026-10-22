/* Straight-line functions with calls and guards (batch gen_no): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c077210(int, int);
int FUN_0c078480(int, int);
int FUN_0c078a70(int, int, int);
int SetCameraMode(int);
int camRestore(void);
int camSetEye(int, int);
int camSetTarget(int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlScaleVector(int, int, float);
int nlSqrt(int, int);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
float nlUnitVector(int);
int FUN_0c0655f0(void);

int FUN_0c0655f0(void)
{
    int t1;
    int t3;
    int t4;
    float u5;
    float u7;
    float u8;
    float u9;
    int t12;
    int t13;
    float u14;
    float u16;
    float u17;
    float u18;
    int t22;
    int t32;
    int t33;
    int t34;
    float t39;
    float u42;
    int t44;
    int t45;
    int t49;
    int t50;
    int t55;
    int t56;
    float u57;
    float u59;
    float u60;
    float u61;
    int t64;
    int t65;
    float u66;
    float u68;
    float u69;
    float u70;
    int t74;
    int t114;
    int t115;
    float u116;
    float u118;
    float u119;
    float u120;
    int t122;
    int t123;
    float u124;
    float u126;
    float u127;
    float u128;
    int t134;
    int t135;
    float u136;
    float u138;
    float u139;
    float u140;
    int t142;
    int t143;
    float u144;
    float u146;
    float u147;
    float u148;
    int t155;
    int t156;
    int t168;
    int t169;
    float u170;
    float u172;
    float u173;
    float u174;
    int t177;
    int t178;
    float u179;
    float u181;
    float u182;
    float u183;
    int t187;
    int t195;
    int t197;
    int t196;
    int stk[56] = {0};

    { struct mv15 { int w[15]; }; *(struct mv15 *)((((int)stk + 4) + 0x78)) = *(struct mv15 *)(0xC0D5384); }
    { struct mv15 { int w[15]; }; *(struct mv15 *)((((int)stk + 4) + 0x3C)) = *(struct mv15 *)(0xC0D53C0); }
    SetCameraMode(0x1);
    t1 = *(int *)0xC2AD580;
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                nlPushMatrix(0xC179180);
                t3 = *(int *)0xC2AD54C;
                t4 = *(signed char *)((t3 + 0x14B));
                u5 = (-1.0f);
                if ((t4 & 4) != 0) {
                    u5 = 1.0f;
                }
                u7 = *(float *)((((((int)stk + 4) + 0x78) + 0x24) + 0x0));
                *(float *)(((int)stk + 16)) = (u5 * u7);
                u8 = *(float *)((((((int)stk + 4) + 0x78) + 0x24) + 0x4));
                *(float *)(((int)stk + 20)) = u8;
                u9 = *(float *)((((((int)stk + 4) + 0x78) + 0x24) + 0x8));
                *(float *)(((int)stk + 24)) = u9;
                nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x30));
                camSetEye((((int)stk + 4) + 0x30), 0x0);
                t12 = *(int *)0xC2AD54C;
                t13 = *(signed char *)((t12 + 0x14B));
                u14 = (-1.0f);
                if ((t13 & 4) != 0) {
                    u14 = 1.0f;
                }
                u16 = *(float *)((((((int)stk + 4) + 0x3C) + 0x24) + 0x0));
                *(float *)(((int)stk + 16)) = (u14 * u16);
                u17 = *(float *)((((((int)stk + 4) + 0x3C) + 0x24) + 0x4));
                *(float *)(((int)stk + 20)) = u17;
                u18 = *(float *)((((((int)stk + 4) + 0x3C) + 0x24) + 0x8));
                *(float *)(((int)stk + 24)) = u18;
                nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x24));
                camSetTarget((((int)stk + 4) + 0x24), 0x0);
                nlPopMatrix(0x1);
                t22 = *(int *)0xC2AD580;
                *(unsigned int *)0xC2AD580 = (t22 + 0x1);
            } else {
                if (t1 == 3) {
                    nlPushMatrix(0xC179180);
                    nlSqrt(((((int)stk + 4) + 0x3C) + 0x18), (((int)stk + 4) + 0x24));
                    nlSubVector3op((((int)stk + 4) + 0x18), (((int)stk + 4) + 0x24), 0xC17984C);
                    nlScaleVector((((int)stk + 4) + 0x18), (((int)stk + 4) + 0x18), 0.00999999978f);
                    FUN_0c078a70((((int)stk + 4) + 0x24), 0xC17984C, (((int)stk + 4) + 0x18));
                    camSetTarget((((int)stk + 4) + 0x24), 0x0);
                    nlPopMatrix(0x1);
                    nlSubVector3op((((int)stk + 4) + 0x18), 0xC179840, 0xC17984C);
                    nlPushUnitMatrix();
                    t32 = *(int *)0xC2AD54C;
                    t33 = *(signed char *)((t32 + 0x14B));
                    t34 = 0xFFFFFE00;
                    if ((t33 & 4) != 0) {
                        t34 = 0x200;
                    }
                    FUN_0c078480(0xC2AD1EC, t34);
                    FUN_0c077210((((int)stk + 4) + 0x18), (((int)stk + 4) + 0x18));
                    nlPopMatrix(0x1);
                    t39 = nlUnitVector((((int)stk + 4) + 0x18));
                    nlScaleVector((((int)stk + 4) + 0x18), (((int)stk + 4) + 0x18), (t39 + -0.049999997f));
                    FUN_0c078a70((((int)stk + 4) + 0x30), 0xC17984C, (((int)stk + 4) + 0x18));
                    u42 = *(float *)(((int)stk + 56));
                    *(float *)(((int)stk + 56)) = (u42 - 0.199999988f);
                    camSetEye((((int)stk + 4) + 0x30), 0x0);
                    t44 = *(int *)0xC2AD578;
                    if ((int)t44 < (int)0x78) {
                    } else {
                        t45 = *(int *)0xC2AD580;
                        *(unsigned int *)0xC2AD580 = (t45 + 0x1);
                    }
                } else {
                    if (t1 == 4) {
                        t49 = *(int *)0xC2AD578;
                        if ((int)t49 < (int)0x7B) {
                        } else {
                            t50 = *(int *)0xC2AD580;
                            *(unsigned int *)0xC2AD580 = (t50 + 0x1);
                        }
                    } else {
                        if (t1 == 5) {
                            nlPushMatrix(0xC179180);
                            t55 = *(int *)0xC2AD54C;
                            t56 = *(signed char *)((t55 + 0x14B));
                            u57 = (-1.0f);
                            if ((t56 & 4) != 0) {
                                u57 = 1.0f;
                            }
                            u59 = *(float *)((((((int)stk + 4) + 0x78) + 0x30) + 0x0));
                            *(float *)(((int)stk + 16)) = (u57 * u59);
                            u60 = *(float *)((((((int)stk + 4) + 0x78) + 0x30) + 0x4));
                            *(float *)(((int)stk + 20)) = u60;
                            u61 = *(float *)((((((int)stk + 4) + 0x78) + 0x30) + 0x8));
                            *(float *)(((int)stk + 24)) = u61;
                            nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x30));
                            camSetEye((((int)stk + 4) + 0x30), 0x0);
                            t64 = *(int *)0xC2AD54C;
                            t65 = *(signed char *)((t64 + 0x14B));
                            u66 = (-1.0f);
                            if ((t65 & 4) != 0) {
                                u66 = 1.0f;
                            }
                            u68 = *(float *)((((((int)stk + 4) + 0x3C) + 0x30) + 0x0));
                            *(float *)(((int)stk + 16)) = (u66 * u68);
                            u69 = *(float *)((((((int)stk + 4) + 0x3C) + 0x30) + 0x4));
                            *(float *)(((int)stk + 20)) = u69;
                            u70 = *(float *)((((((int)stk + 4) + 0x3C) + 0x30) + 0x8));
                            *(float *)(((int)stk + 24)) = u70;
                            nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x24));
                            camSetTarget((((int)stk + 4) + 0x24), 0x0);
                            nlPopMatrix(0x1);
                            t74 = *(int *)0xC2AD580;
                            *(unsigned int *)0xC2AD580 = (t74 + 0x1);
                        } else {
                            if (t1 == 6) {
                                nlSubVector3op((((int)stk + 4) + 0x18), 0xC2AD554, 0xC179840);
                                nlGetAverageVector(0xC179840, (((int)stk + 4) + 0x18), (((int)stk + 4) + 0x30), 1.0f, 0.0799999982f);
                                camSetEye((((int)stk + 4) + 0x30), 0x0);
                                nlSubVector3op((((int)stk + 4) + 0x18), 0xC2AD560, 0xC17984C);
                                nlGetAverageVector(0xC17984C, (((int)stk + 4) + 0x18), (((int)stk + 4) + 0x24), 1.0f, 0.0799999982f);
                                camSetTarget((((int)stk + 4) + 0x24), 0x0);
                            }
                        }
                    }
                }
            }
        } else {
            nlPushMatrix(0xC179180);
            t114 = *(int *)0xC2AD54C;
            t115 = *(signed char *)((t114 + 0x14B));
            u116 = (-1.0f);
            if ((t115 & 4) != 0) {
                u116 = 1.0f;
            }
            u118 = *(float *)(((((int)stk + 4) + 0x78) + 0x0));
            *(float *)(((int)stk + 52)) = (u116 * u118);
            u119 = *(float *)(((((int)stk + 4) + 0x78) + 0x4));
            *(float *)(((int)stk + 56)) = u119;
            u120 = *(float *)(((((int)stk + 4) + 0x78) + 0x8));
            *(float *)(((int)stk + 60)) = u120;
            nlSqrt((((int)stk + 4) + 0x30), (((int)stk + 4) + 0xC));
            t122 = *(int *)0xC2AD54C;
            t123 = *(signed char *)((t122 + 0x14B));
            u124 = (-1.0f);
            if ((t123 & 4) != 0) {
                u124 = 1.0f;
            }
            u126 = *(float *)((((((int)stk + 4) + 0x78) + 0xC) + 0x0));
            *(float *)(((int)stk + 52)) = (u124 * u126);
            u127 = *(float *)((((((int)stk + 4) + 0x78) + 0xC) + 0x4));
            *(float *)(((int)stk + 56)) = u127;
            u128 = *(float *)((((((int)stk + 4) + 0x78) + 0xC) + 0x8));
            *(float *)(((int)stk + 60)) = u128;
            nlSqrt((((int)stk + 4) + 0x30), ((int)stk + 4));
            nlSubVector(((int)stk + 4), (((int)stk + 4) + 0xC));
            nlScaleVector((((int)stk + 4) + 0x18), ((int)stk + 4), 0.0166666657f);
            FUN_0c078a70((((int)stk + 4) + 0x30), 0xC179840, (((int)stk + 4) + 0x18));
            camSetEye((((int)stk + 4) + 0x30), 0x0);
            t134 = *(int *)0xC2AD54C;
            t135 = *(signed char *)((t134 + 0x14B));
            u136 = (-1.0f);
            if ((t135 & 4) != 0) {
                u136 = 1.0f;
            }
            u138 = *(float *)(((((int)stk + 4) + 0x3C) + 0x0));
            *(float *)(((int)stk + 40)) = (u136 * u138);
            u139 = *(float *)(((((int)stk + 4) + 0x3C) + 0x4));
            *(float *)(((int)stk + 44)) = u139;
            u140 = *(float *)(((((int)stk + 4) + 0x3C) + 0x8));
            *(float *)(((int)stk + 48)) = u140;
            nlSqrt((((int)stk + 4) + 0x24), (((int)stk + 4) + 0xC));
            t142 = *(int *)0xC2AD54C;
            t143 = *(signed char *)((t142 + 0x14B));
            u144 = (-1.0f);
            if ((t143 & 4) != 0) {
                u144 = 1.0f;
            }
            u146 = *(float *)((((((int)stk + 4) + 0x3C) + 0xC) + 0x0));
            *(float *)(((int)stk + 40)) = (u144 * u146);
            u147 = *(float *)((((((int)stk + 4) + 0x3C) + 0xC) + 0x4));
            *(float *)(((int)stk + 44)) = u147;
            u148 = *(float *)((((((int)stk + 4) + 0x3C) + 0xC) + 0x8));
            *(float *)(((int)stk + 48)) = u148;
            nlSqrt((((int)stk + 4) + 0x24), ((int)stk + 4));
            nlSubVector(((int)stk + 4), (((int)stk + 4) + 0xC));
            nlScaleVector((((int)stk + 4) + 0x18), ((int)stk + 4), 0.0166666657f);
            FUN_0c078a70((((int)stk + 4) + 0x24), 0xC17984C, (((int)stk + 4) + 0x18));
            camSetTarget((((int)stk + 4) + 0x24), 0x0);
            nlPopMatrix(0x1);
            t155 = *(int *)0xC2AD578;
            if ((int)t155 < (int)0x3C) {
            } else {
                t156 = *(int *)0xC2AD580;
                *(unsigned int *)0xC2AD580 = (t156 + 0x1);
            }
        }
    } else {
        nlPushMatrix(0xC179180);
        t168 = *(int *)0xC2AD54C;
        t169 = *(signed char *)((t168 + 0x14B));
        u170 = (-1.0f);
        if ((t169 & 4) != 0) {
            u170 = 1.0f;
        }
        u172 = *(float *)(((((int)stk + 4) + 0x78) + 0x0));
        *(float *)(((int)stk + 16)) = (u170 * u172);
        u173 = *(float *)(((((int)stk + 4) + 0x78) + 0x4));
        *(float *)(((int)stk + 20)) = u173;
        u174 = *(float *)(((((int)stk + 4) + 0x78) + 0x8));
        *(float *)(((int)stk + 24)) = u174;
        nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x30));
        camSetEye((((int)stk + 4) + 0x30), 0x0);
        t177 = *(int *)0xC2AD54C;
        t178 = *(signed char *)((t177 + 0x14B));
        u179 = (-1.0f);
        if ((t178 & 4) != 0) {
            u179 = 1.0f;
        }
        u181 = *(float *)(((((int)stk + 4) + 0x3C) + 0x0));
        *(float *)(((int)stk + 16)) = (u179 * u181);
        u182 = *(float *)(((((int)stk + 4) + 0x3C) + 0x4));
        *(float *)(((int)stk + 20)) = u182;
        u183 = *(float *)(((((int)stk + 4) + 0x3C) + 0x8));
        *(float *)(((int)stk + 24)) = u183;
        nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x24));
        camSetTarget((((int)stk + 4) + 0x24), 0x0);
        nlPopMatrix(0x1);
        t187 = *(int *)0xC2AD580;
        *(unsigned int *)0xC2AD580 = (t187 + 0x1);
    }
    t195 = *(int *)0xC2AD590;
    t197 = t195;
    if ((t195 & 2) == 0) {
        t196 = camRestore();
        t197 = t196;
    }
    return t197;
}
