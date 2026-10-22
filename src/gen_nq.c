/* Straight-line functions with calls and guards (batch gen_nq): generated from the code and checked by tests. Calls are
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
int nlSubVector3op(int, int, int);
float nlUnitVector(int);
int camGetOffShot2(void);

int camGetOffShot2(void)
{
    int t1;
    int t2;
    int t4;
    int t5;
    float u6;
    float u8;
    float u9;
    float u10;
    int t12;
    int t13;
    float u14;
    float u16;
    float u17;
    float u18;
    int t23;
    int t25;
    int t26;
    float u27;
    float u29;
    float u30;
    float u31;
    int t40;
    int t41;
    int t42;
    float t46;
    float u49;
    int t52;
    int t53;
    int t57;
    int t61;
    int t62;
    float u63;
    float u65;
    float u66;
    float u67;
    int t70;
    int t71;
    float u72;
    float u74;
    float u75;
    float u76;
    int t80;
    int t81;
    float u85;
    int t135;
    int t136;
    float u137;
    float u139;
    float u140;
    float u141;
    int t146;
    int t147;
    float u148;
    float u150;
    float u151;
    float u152;
    int t158;
    int t159;
    int t177;
    int t186;
    int t188;
    int t187;
    int stk[56] = {0};

    { struct mv15 { int w[15]; }; *(struct mv15 *)((((int)stk + 4) + 0x78)) = *(struct mv15 *)(0xC0D530C); }
    { struct mv15 { int w[15]; }; *(struct mv15 *)((((int)stk + 4) + 0x3C)) = *(struct mv15 *)(0xC0D5348); }
    SetCameraMode(0x1);
    t1 = *(int *)0xC2AD580;
    t2 = *(int *)0xC2AD578;
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                nlPushMatrix(0xC179180);
                t4 = *(int *)0xC2AD54C;
                t5 = *(signed char *)((t4 + 0x14B));
                u6 = 1.0f;
                if ((t5 & 4) != 0) {
                    u6 = (-1.0f);
                }
                u8 = *(float *)(((0x90 + ((int)stk + 4)) + 0x0));
                *(float *)(((int)stk + 16)) = (u6 * u8);
                u9 = *(float *)(((0x90 + ((int)stk + 4)) + 0x4));
                *(float *)(((int)stk + 20)) = u9;
                u10 = *(float *)(((0x90 + ((int)stk + 4)) + 0x8));
                *(float *)(((int)stk + 24)) = u10;
                nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x30));
                t12 = *(int *)0xC2AD54C;
                t13 = *(signed char *)((t12 + 0x14B));
                u14 = 1.0f;
                if ((t13 & 4) != 0) {
                    u14 = (-1.0f);
                }
                u16 = *(float *)((((((int)stk + 4) + 0x3C) + 0x18) + 0x0));
                *(float *)(((int)stk + 16)) = (u14 * u16);
                u17 = *(float *)((((((int)stk + 4) + 0x3C) + 0x18) + 0x4));
                *(float *)(((int)stk + 20)) = u17;
                u18 = *(float *)((((((int)stk + 4) + 0x3C) + 0x18) + 0x8));
                *(float *)(((int)stk + 24)) = u18;
                nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x24));
                nlPopMatrix(0x1);
                camSetEye((((int)stk + 4) + 0x30), 0x0);
                camSetTarget((((int)stk + 4) + 0x24), 0x0);
                t23 = *(int *)0xC2AD580;
                *(unsigned int *)0xC2AD580 = (t23 + 0x1);
            } else {
                if (t1 == 3) {
                    nlPushMatrix(0xC179180);
                    t25 = *(int *)0xC2AD54C;
                    t26 = *(signed char *)((t25 + 0x14B));
                    u27 = 1.0f;
                    if ((t26 & 4) != 0) {
                        u27 = (-1.0f);
                    }
                    u29 = *(float *)((((((int)stk + 4) + 0x3C) + 0x24) + 0x0));
                    *(float *)(((int)stk + 16)) = (u27 * u29);
                    u30 = *(float *)((((((int)stk + 4) + 0x3C) + 0x24) + 0x4));
                    *(float *)(((int)stk + 20)) = u30;
                    u31 = *(float *)((((((int)stk + 4) + 0x3C) + 0x24) + 0x8));
                    *(float *)(((int)stk + 24)) = u31;
                    nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x24));
                    nlSubVector3op((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x24), 0xC17984C);
                    nlScaleVector((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC), 0.0349999964f);
                    FUN_0c078a70((((int)stk + 4) + 0x24), 0xC17984C, (((int)stk + 4) + 0x18));
                    camSetTarget((((int)stk + 4) + 0x24), 0x0);
                    nlPopMatrix(0x1);
                    nlPushUnitMatrix();
                    nlSubVector3op((((int)stk + 4) + 0x18), 0xC179840, (((int)stk + 4) + 0x24));
                    t40 = *(int *)0xC2AD54C;
                    t41 = *(signed char *)((t40 + 0x14B));
                    t42 = 0x178;
                    if ((t41 & 4) != 0) {
                        t42 = 0xFFFFFE88;
                    }
                    FUN_0c078480(0xC2AD1EC, t42);
                    FUN_0c077210((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC));
                    t46 = nlUnitVector((((int)stk + 4) + 0xC));
                    nlScaleVector((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC), (t46 + 0.099999994f));
                    FUN_0c078a70((((int)stk + 4) + 0x30), 0xC17984C, (((int)stk + 4) + 0x18));
                    u49 = *(float *)(((int)stk + 56));
                    *(float *)(((int)stk + 56)) = (u49 - 0.222222209f);
                    camSetEye((((int)stk + 4) + 0x30), 0x0);
                    nlPopMatrix(0x1);
                    t52 = *(int *)0xC2AD578;
                    if ((int)t52 < (int)0x91) {
                    } else {
                        t53 = *(int *)0xC2AD580;
                        *(unsigned int *)0xC2AD580 = (t53 + 0x1);
                    }
                } else {
                    if (t1 == 4) {
                        if ((int)t2 < (int)0x96) {
                        } else {
                            t57 = *(int *)0xC2AD580;
                            *(unsigned int *)0xC2AD580 = (t57 + 0x1);
                        }
                    } else {
                        if (t1 == 5) {
                            nlPushMatrix(0xC179180);
                            t61 = *(int *)0xC2AD54C;
                            t62 = *(signed char *)((t61 + 0x14B));
                            u63 = (-1.0f);
                            if ((t62 & 4) != 0) {
                                u63 = 1.0f;
                            }
                            u65 = *(float *)(((0xA8 + ((int)stk + 4)) + 0x0));
                            *(float *)(((int)stk + 16)) = (u63 * u65);
                            u66 = *(float *)(((0xA8 + ((int)stk + 4)) + 0x4));
                            *(float *)(((int)stk + 20)) = u66;
                            u67 = *(float *)(((0xA8 + ((int)stk + 4)) + 0x8));
                            *(float *)(((int)stk + 24)) = u67;
                            nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x30));
                            camSetEye((((int)stk + 4) + 0x30), 0x0);
                            t70 = *(int *)0xC2AD54C;
                            t71 = *(signed char *)((t70 + 0x14B));
                            u72 = (-1.0f);
                            if ((t71 & 4) != 0) {
                                u72 = 1.0f;
                            }
                            u74 = *(float *)((((((int)stk + 4) + 0x3C) + 0x30) + 0x0));
                            *(float *)(((int)stk + 16)) = (u72 * u74);
                            u75 = *(float *)((((((int)stk + 4) + 0x3C) + 0x30) + 0x4));
                            *(float *)(((int)stk + 20)) = u75;
                            u76 = *(float *)((((((int)stk + 4) + 0x3C) + 0x30) + 0x8));
                            *(float *)(((int)stk + 24)) = u76;
                            nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x24));
                            camSetTarget((((int)stk + 4) + 0x24), 0x0);
                            nlPopMatrix(0x1);
                            t80 = *(int *)0xC2AD580;
                            *(unsigned int *)0xC2AD580 = (t80 + 0x1);
                        } else {
                            if (t1 == 6) {
                                if ((int)t2 >= (int)0x93) {
                                    t81 = *(int *)0xC2AD580;
                                    *(unsigned int *)0xC2AD580 = (t81 + 0x1);
                                }
                            } else {
                                if (t1 == 7) {
                                    nlSubVector3op((((int)stk + 4) + 0x18), 0xC2AD554, 0xC179840);
                                    u85 = *(float *)0xC065698;
                                    nlGetAverageVector(0xC179840, (((int)stk + 4) + 0x18), (((int)stk + 4) + 0x30), 1.0f, u85);
                                    camSetEye((((int)stk + 4) + 0x30), 0x0);
                                    nlSubVector3op((((int)stk + 4) + 0x18), 0xC2AD560, 0xC17984C);
                                    nlGetAverageVector(0xC17984C, (((int)stk + 4) + 0x18), (((int)stk + 4) + 0x24), 1.0f, u85);
                                    camSetTarget((((int)stk + 4) + 0x24), 0x0);
                                }
                            }
                        }
                    }
                }
            }
        } else {
            nlPushMatrix(0xC179180);
            t135 = *(int *)0xC2AD54C;
            t136 = *(signed char *)((t135 + 0x14B));
            u137 = 1.0f;
            if ((t136 & 4) != 0) {
                u137 = (-1.0f);
            }
            u139 = *(float *)(((0x84 + ((int)stk + 4)) + 0x0));
            *(float *)(((int)stk + 16)) = (u137 * u139);
            u140 = *(float *)(((0x84 + ((int)stk + 4)) + 0x4));
            *(float *)(((int)stk + 20)) = u140;
            u141 = *(float *)(((0x84 + ((int)stk + 4)) + 0x8));
            *(float *)(((int)stk + 24)) = u141;
            nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x30));
            nlSubVector3op((((int)stk + 4) + 0x18), (((int)stk + 4) + 0x30), 0xC179840);
            nlGetAverageVector(0xC179840, (((int)stk + 4) + 0x18), (((int)stk + 4) + 0x30), 1.0f, (((float)t2 * 0.149999991f) / 100.0f));
            camSetEye((((int)stk + 4) + 0x30), 0x0);
            t146 = *(int *)0xC2AD54C;
            t147 = *(signed char *)((t146 + 0x14B));
            u148 = 1.0f;
            if ((t147 & 4) != 0) {
                u148 = (-1.0f);
            }
            u150 = *(float *)((((((int)stk + 4) + 0x3C) + 0xC) + 0x0));
            *(float *)(((int)stk + 16)) = (u148 * u150);
            u151 = *(float *)((((((int)stk + 4) + 0x3C) + 0xC) + 0x4));
            *(float *)(((int)stk + 20)) = u151;
            u152 = *(float *)((((((int)stk + 4) + 0x3C) + 0xC) + 0x8));
            *(float *)(((int)stk + 24)) = u152;
            nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x24));
            nlSubVector3op((((int)stk + 4) + 0x18), (((int)stk + 4) + 0x24), 0xC17984C);
            nlGetAverageVector(0xC17984C, (((int)stk + 4) + 0x18), (((int)stk + 4) + 0x24), 1.0f, (((float)t2 * 0.149999991f) / 100.0f));
            camSetTarget((((int)stk + 4) + 0x24), 0x0);
            nlPopMatrix(0x1);
            t158 = *(int *)0xC2AD578;
            if ((int)t158 < (int)0x64) {
            } else {
                t159 = *(int *)0xC2AD580;
                *(unsigned int *)0xC2AD580 = (t159 + 0x1);
            }
        }
    } else {
        nlPushMatrix(0xC179180);
        nlSqrt((((int)stk + 4) + 0x78), (((int)stk + 4) + 0x30));
        nlSqrt((((int)stk + 4) + 0x3C), (((int)stk + 4) + 0x24));
        nlPopMatrix(0x1);
        camSetEye((((int)stk + 4) + 0x30), 0x0);
        camSetTarget((((int)stk + 4) + 0x24), 0x0);
        t177 = *(int *)0xC2AD580;
        *(unsigned int *)0xC2AD580 = (t177 + 0x1);
    }
    t186 = *(int *)0xC2AD590;
    t188 = t186;
    if ((t186 & 2) == 0) {
        t187 = camRestore();
        t188 = t187;
    }
    return t188;
}
