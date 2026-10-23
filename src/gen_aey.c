/* Straight-line functions with calls and guards (batch gen_aey): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SetCameraMode(int);
int camRestore(void);
int camSetEye(int, int);
int camSetTarget(int, int);
int nlAddVector3op(int, int, int);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAxe(int, int);
int nlScaleVector(int, int, float);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
float nlUnitVector(int);
int camGetOffShot3(void);

int camGetOffShot3(void)
{
    int t1;
    float u5;
    float u14;
    int t34;
    float u57;
    float u66;
    float u116;
    float u124;
    float u136;
    float u144;
    float u170;
    float u179;
    int t195;
    int t197;
    int stk[56];

    { struct mv15 { int w[15]; }; *(struct mv15 *)((((int)stk + 4) + 0x78)) = *(struct mv15 *)(0xC0D5384); }
    { struct mv15 { int w[15]; }; *(struct mv15 *)((((int)stk + 4) + 0x3C)) = *(struct mv15 *)(0xC0D53C0); }
    SetCameraMode(0x1);
    t1 = *(int *)0xC2AD580;
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                nlPushMatrix(0xC179180);
                u5 = (-1.0f);
                if (((*(signed char *)(((*(int *)0xC2AD54C) + 0x14B))) & 4) != 0) {
                    u5 = 1.0f;
                }
                *(float *)(((int)stk + 16)) = (u5 * (*(float *)((((((int)stk + 4) + 0x78) + 0x24) + 0x0))));
                *(float *)(((int)stk + 20)) = (*(float *)((((((int)stk + 4) + 0x78) + 0x24) + 0x4)));
                *(float *)(((int)stk + 24)) = (*(float *)((((((int)stk + 4) + 0x78) + 0x24) + 0x8)));
                nlCalcPoint((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x30));
                camSetEye((((int)stk + 4) + 0x30), 0x0);
                u14 = (-1.0f);
                if (((*(signed char *)(((*(int *)0xC2AD54C) + 0x14B))) & 4) != 0) {
                    u14 = 1.0f;
                }
                *(float *)(((int)stk + 16)) = (u14 * (*(float *)((((((int)stk + 4) + 0x3C) + 0x24) + 0x0))));
                *(float *)(((int)stk + 20)) = (*(float *)((((((int)stk + 4) + 0x3C) + 0x24) + 0x4)));
                *(float *)(((int)stk + 24)) = (*(float *)((((((int)stk + 4) + 0x3C) + 0x24) + 0x8)));
                nlCalcPoint((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x24));
                camSetTarget((((int)stk + 4) + 0x24), 0x0);
                nlPopMatrix(0x1);
                *(unsigned int *)0xC2AD580 = ((*(int *)0xC2AD580) + 0x1);
            } else {
                if (t1 == 3) {
                    nlPushMatrix(0xC179180);
                    nlCalcPoint(((((int)stk + 4) + 0x3C) + 0x18), (((int)stk + 4) + 0x24));
                    nlSubVector3op((((int)stk + 4) + 0x18), (((int)stk + 4) + 0x24), 0xC17984C);
                    nlScaleVector((((int)stk + 4) + 0x18), (((int)stk + 4) + 0x18), 0.00999999978f);
                    nlAddVector3op((((int)stk + 4) + 0x24), 0xC17984C, (((int)stk + 4) + 0x18));
                    camSetTarget((((int)stk + 4) + 0x24), 0x0);
                    nlPopMatrix(0x1);
                    nlSubVector3op((((int)stk + 4) + 0x18), 0xC179840, 0xC17984C);
                    nlPushUnitMatrix();
                    t34 = 0xFFFFFE00;
                    if (((*(signed char *)(((*(int *)0xC2AD54C) + 0x14B))) & 4) != 0) {
                        t34 = 0x200;
                    }
                    nlRotateAxe(0xC2AD1EC, t34);
                    nlCalcVector((((int)stk + 4) + 0x18), (((int)stk + 4) + 0x18));
                    nlPopMatrix(0x1);
                    nlScaleVector((((int)stk + 4) + 0x18), (((int)stk + 4) + 0x18), ((nlUnitVector((((int)stk + 4) + 0x18))) + -0.049999997f));
                    nlAddVector3op((((int)stk + 4) + 0x30), 0xC17984C, (((int)stk + 4) + 0x18));
                    *(float *)(((int)stk + 56)) = ((*(float *)(((int)stk + 56))) - 0.199999988f);
                    camSetEye((((int)stk + 4) + 0x30), 0x0);
                    if ((int)(*(int *)0xC2AD578) < (int)0x78) {
                    } else {
                        *(unsigned int *)0xC2AD580 = ((*(int *)0xC2AD580) + 0x1);
                    }
                } else {
                    if (t1 == 4) {
                        if ((int)(*(int *)0xC2AD578) < (int)0x7B) {
                        } else {
                            *(unsigned int *)0xC2AD580 = ((*(int *)0xC2AD580) + 0x1);
                        }
                    } else {
                        if (t1 == 5) {
                            nlPushMatrix(0xC179180);
                            u57 = (-1.0f);
                            if (((*(signed char *)(((*(int *)0xC2AD54C) + 0x14B))) & 4) != 0) {
                                u57 = 1.0f;
                            }
                            *(float *)(((int)stk + 16)) = (u57 * (*(float *)((((((int)stk + 4) + 0x78) + 0x30) + 0x0))));
                            *(float *)(((int)stk + 20)) = (*(float *)((((((int)stk + 4) + 0x78) + 0x30) + 0x4)));
                            *(float *)(((int)stk + 24)) = (*(float *)((((((int)stk + 4) + 0x78) + 0x30) + 0x8)));
                            nlCalcPoint((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x30));
                            camSetEye((((int)stk + 4) + 0x30), 0x0);
                            u66 = (-1.0f);
                            if (((*(signed char *)(((*(int *)0xC2AD54C) + 0x14B))) & 4) != 0) {
                                u66 = 1.0f;
                            }
                            *(float *)(((int)stk + 16)) = (u66 * (*(float *)((((((int)stk + 4) + 0x3C) + 0x30) + 0x0))));
                            *(float *)(((int)stk + 20)) = (*(float *)((((((int)stk + 4) + 0x3C) + 0x30) + 0x4)));
                            *(float *)(((int)stk + 24)) = (*(float *)((((((int)stk + 4) + 0x3C) + 0x30) + 0x8)));
                            nlCalcPoint((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x24));
                            camSetTarget((((int)stk + 4) + 0x24), 0x0);
                            nlPopMatrix(0x1);
                            *(unsigned int *)0xC2AD580 = ((*(int *)0xC2AD580) + 0x1);
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
            u116 = (-1.0f);
            if (((*(signed char *)(((*(int *)0xC2AD54C) + 0x14B))) & 4) != 0) {
                u116 = 1.0f;
            }
            *(float *)(((int)stk + 52)) = (u116 * (*(float *)(((((int)stk + 4) + 0x78) + 0x0))));
            *(float *)(((int)stk + 56)) = (*(float *)(((((int)stk + 4) + 0x78) + 0x4)));
            *(float *)(((int)stk + 60)) = (*(float *)(((((int)stk + 4) + 0x78) + 0x8)));
            nlCalcPoint((((int)stk + 4) + 0x30), (((int)stk + 4) + 0xC));
            u124 = (-1.0f);
            if (((*(signed char *)(((*(int *)0xC2AD54C) + 0x14B))) & 4) != 0) {
                u124 = 1.0f;
            }
            *(float *)(((int)stk + 52)) = (u124 * (*(float *)((((((int)stk + 4) + 0x78) + 0xC) + 0x0))));
            *(float *)(((int)stk + 56)) = (*(float *)((((((int)stk + 4) + 0x78) + 0xC) + 0x4)));
            *(float *)(((int)stk + 60)) = (*(float *)((((((int)stk + 4) + 0x78) + 0xC) + 0x8)));
            nlCalcPoint((((int)stk + 4) + 0x30), ((int)stk + 4));
            nlSubVector(((int)stk + 4), (((int)stk + 4) + 0xC));
            nlScaleVector((((int)stk + 4) + 0x18), ((int)stk + 4), 0.0166666657f);
            nlAddVector3op((((int)stk + 4) + 0x30), 0xC179840, (((int)stk + 4) + 0x18));
            camSetEye((((int)stk + 4) + 0x30), 0x0);
            u136 = (-1.0f);
            if (((*(signed char *)(((*(int *)0xC2AD54C) + 0x14B))) & 4) != 0) {
                u136 = 1.0f;
            }
            *(float *)(((int)stk + 40)) = (u136 * (*(float *)(((((int)stk + 4) + 0x3C) + 0x0))));
            *(float *)(((int)stk + 44)) = (*(float *)(((((int)stk + 4) + 0x3C) + 0x4)));
            *(float *)(((int)stk + 48)) = (*(float *)(((((int)stk + 4) + 0x3C) + 0x8)));
            nlCalcPoint((((int)stk + 4) + 0x24), (((int)stk + 4) + 0xC));
            u144 = (-1.0f);
            if (((*(signed char *)(((*(int *)0xC2AD54C) + 0x14B))) & 4) != 0) {
                u144 = 1.0f;
            }
            *(float *)(((int)stk + 40)) = (u144 * (*(float *)((((((int)stk + 4) + 0x3C) + 0xC) + 0x0))));
            *(float *)(((int)stk + 44)) = (*(float *)((((((int)stk + 4) + 0x3C) + 0xC) + 0x4)));
            *(float *)(((int)stk + 48)) = (*(float *)((((((int)stk + 4) + 0x3C) + 0xC) + 0x8)));
            nlCalcPoint((((int)stk + 4) + 0x24), ((int)stk + 4));
            nlSubVector(((int)stk + 4), (((int)stk + 4) + 0xC));
            nlScaleVector((((int)stk + 4) + 0x18), ((int)stk + 4), 0.0166666657f);
            nlAddVector3op((((int)stk + 4) + 0x24), 0xC17984C, (((int)stk + 4) + 0x18));
            camSetTarget((((int)stk + 4) + 0x24), 0x0);
            nlPopMatrix(0x1);
            if ((int)(*(int *)0xC2AD578) < (int)0x3C) {
            } else {
                *(unsigned int *)0xC2AD580 = ((*(int *)0xC2AD580) + 0x1);
            }
        }
    } else {
        nlPushMatrix(0xC179180);
        u170 = (-1.0f);
        if (((*(signed char *)(((*(int *)0xC2AD54C) + 0x14B))) & 4) != 0) {
            u170 = 1.0f;
        }
        *(float *)(((int)stk + 16)) = (u170 * (*(float *)(((((int)stk + 4) + 0x78) + 0x0))));
        *(float *)(((int)stk + 20)) = (*(float *)(((((int)stk + 4) + 0x78) + 0x4)));
        *(float *)(((int)stk + 24)) = (*(float *)(((((int)stk + 4) + 0x78) + 0x8)));
        nlCalcPoint((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x30));
        camSetEye((((int)stk + 4) + 0x30), 0x0);
        u179 = (-1.0f);
        if (((*(signed char *)(((*(int *)0xC2AD54C) + 0x14B))) & 4) != 0) {
            u179 = 1.0f;
        }
        *(float *)(((int)stk + 16)) = (u179 * (*(float *)(((((int)stk + 4) + 0x3C) + 0x0))));
        *(float *)(((int)stk + 20)) = (*(float *)(((((int)stk + 4) + 0x3C) + 0x4)));
        *(float *)(((int)stk + 24)) = (*(float *)(((((int)stk + 4) + 0x3C) + 0x8)));
        nlCalcPoint((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x24));
        camSetTarget((((int)stk + 4) + 0x24), 0x0);
        nlPopMatrix(0x1);
        *(unsigned int *)0xC2AD580 = ((*(int *)0xC2AD580) + 0x1);
    }
    t195 = *(int *)0xC2AD590;
    t197 = t195;
    if ((t195 & 2) == 0) {
        t197 = (camRestore());
    }
    return t197;
}
