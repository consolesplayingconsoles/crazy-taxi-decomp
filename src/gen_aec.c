/* Straight-line functions with calls and guards (batch gen_aec): generated from the code and checked by tests. Calls are
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
int nlSubVector3op(int, int, int);
float nlUnitVector(int);
int camGetOffShot2(void);

int camGetOffShot2(void)
{
    int t1;
    int t2;
    float u6;
    float u14;
    float u27;
    int t42;
    float u63;
    float u72;
    float u85;
    float u137;
    float u148;
    int t186;
    int t188;
    int stk[56];

    { struct mv15 { int w[15]; }; *(struct mv15 *)((((int)stk + 4) + 0x78)) = *(struct mv15 *)(0xC0D530C); }
    { struct mv15 { int w[15]; }; *(struct mv15 *)((((int)stk + 4) + 0x3C)) = *(struct mv15 *)(0xC0D5348); }
    SetCameraMode(0x1);
    t1 = *(int *)0xC2AD580;
    t2 = *(int *)0xC2AD578;
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                nlPushMatrix(0xC179180);
                u6 = 1.0f;
                if (((*(signed char *)(((*(int *)0xC2AD54C) + 0x14B))) & 4) != 0) {
                    u6 = (-1.0f);
                }
                *(float *)(((int)stk + 16)) = (u6 * (*(float *)(((0x90 + ((int)stk + 4)) + 0x0))));
                *(float *)(((int)stk + 20)) = (*(float *)(((0x90 + ((int)stk + 4)) + 0x4)));
                *(float *)(((int)stk + 24)) = (*(float *)(((0x90 + ((int)stk + 4)) + 0x8)));
                nlCalcPoint((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x30));
                u14 = 1.0f;
                if (((*(signed char *)(((*(int *)0xC2AD54C) + 0x14B))) & 4) != 0) {
                    u14 = (-1.0f);
                }
                *(float *)(((int)stk + 16)) = (u14 * (*(float *)((((((int)stk + 4) + 0x3C) + 0x18) + 0x0))));
                *(float *)(((int)stk + 20)) = (*(float *)((((((int)stk + 4) + 0x3C) + 0x18) + 0x4)));
                *(float *)(((int)stk + 24)) = (*(float *)((((((int)stk + 4) + 0x3C) + 0x18) + 0x8)));
                nlCalcPoint((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x24));
                nlPopMatrix(0x1);
                camSetEye((((int)stk + 4) + 0x30), 0x0);
                camSetTarget((((int)stk + 4) + 0x24), 0x0);
                *(unsigned int *)0xC2AD580 = ((*(int *)0xC2AD580) + 0x1);
            } else {
                if (t1 == 3) {
                    nlPushMatrix(0xC179180);
                    u27 = 1.0f;
                    if (((*(signed char *)(((*(int *)0xC2AD54C) + 0x14B))) & 4) != 0) {
                        u27 = (-1.0f);
                    }
                    *(float *)(((int)stk + 16)) = (u27 * (*(float *)((((((int)stk + 4) + 0x3C) + 0x24) + 0x0))));
                    *(float *)(((int)stk + 20)) = (*(float *)((((((int)stk + 4) + 0x3C) + 0x24) + 0x4)));
                    *(float *)(((int)stk + 24)) = (*(float *)((((((int)stk + 4) + 0x3C) + 0x24) + 0x8)));
                    nlCalcPoint((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x24));
                    nlSubVector3op((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x24), 0xC17984C);
                    nlScaleVector((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC), 0.0349999964f);
                    nlAddVector3op((((int)stk + 4) + 0x24), 0xC17984C, (((int)stk + 4) + 0x18));
                    camSetTarget((((int)stk + 4) + 0x24), 0x0);
                    nlPopMatrix(0x1);
                    nlPushUnitMatrix();
                    nlSubVector3op((((int)stk + 4) + 0x18), 0xC179840, (((int)stk + 4) + 0x24));
                    t42 = 0x178;
                    if (((*(signed char *)(((*(int *)0xC2AD54C) + 0x14B))) & 4) != 0) {
                        t42 = 0xFFFFFE88;
                    }
                    nlRotateAxe(0xC2AD1EC, t42);
                    nlCalcVector((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC));
                    nlScaleVector((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC), ((nlUnitVector((((int)stk + 4) + 0xC))) + 0.099999994f));
                    nlAddVector3op((((int)stk + 4) + 0x30), 0xC17984C, (((int)stk + 4) + 0x18));
                    *(float *)(((int)stk + 56)) = ((*(float *)(((int)stk + 56))) - 0.222222209f);
                    camSetEye((((int)stk + 4) + 0x30), 0x0);
                    nlPopMatrix(0x1);
                    if ((int)(*(int *)0xC2AD578) < (int)0x91) {
                    } else {
                        *(unsigned int *)0xC2AD580 = ((*(int *)0xC2AD580) + 0x1);
                    }
                } else {
                    if (t1 == 4) {
                        if ((int)t2 < (int)0x96) {
                        } else {
                            *(unsigned int *)0xC2AD580 = ((*(int *)0xC2AD580) + 0x1);
                        }
                    } else {
                        if (t1 == 5) {
                            nlPushMatrix(0xC179180);
                            u63 = (-1.0f);
                            if (((*(signed char *)(((*(int *)0xC2AD54C) + 0x14B))) & 4) != 0) {
                                u63 = 1.0f;
                            }
                            *(float *)(((int)stk + 16)) = (u63 * (*(float *)(((0xA8 + ((int)stk + 4)) + 0x0))));
                            *(float *)(((int)stk + 20)) = (*(float *)(((0xA8 + ((int)stk + 4)) + 0x4)));
                            *(float *)(((int)stk + 24)) = (*(float *)(((0xA8 + ((int)stk + 4)) + 0x8)));
                            nlCalcPoint((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x30));
                            camSetEye((((int)stk + 4) + 0x30), 0x0);
                            u72 = (-1.0f);
                            if (((*(signed char *)(((*(int *)0xC2AD54C) + 0x14B))) & 4) != 0) {
                                u72 = 1.0f;
                            }
                            *(float *)(((int)stk + 16)) = (u72 * (*(float *)((((((int)stk + 4) + 0x3C) + 0x30) + 0x0))));
                            *(float *)(((int)stk + 20)) = (*(float *)((((((int)stk + 4) + 0x3C) + 0x30) + 0x4)));
                            *(float *)(((int)stk + 24)) = (*(float *)((((((int)stk + 4) + 0x3C) + 0x30) + 0x8)));
                            nlCalcPoint((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x24));
                            camSetTarget((((int)stk + 4) + 0x24), 0x0);
                            nlPopMatrix(0x1);
                            *(unsigned int *)0xC2AD580 = ((*(int *)0xC2AD580) + 0x1);
                        } else {
                            if (t1 == 6) {
                                if ((int)t2 >= (int)0x93) {
                                    *(unsigned int *)0xC2AD580 = ((*(int *)0xC2AD580) + 0x1);
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
            u137 = 1.0f;
            if (((*(signed char *)(((*(int *)0xC2AD54C) + 0x14B))) & 4) != 0) {
                u137 = (-1.0f);
            }
            *(float *)(((int)stk + 16)) = (u137 * (*(float *)(((0x84 + ((int)stk + 4)) + 0x0))));
            *(float *)(((int)stk + 20)) = (*(float *)(((0x84 + ((int)stk + 4)) + 0x4)));
            *(float *)(((int)stk + 24)) = (*(float *)(((0x84 + ((int)stk + 4)) + 0x8)));
            nlCalcPoint((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x30));
            nlSubVector3op((((int)stk + 4) + 0x18), (((int)stk + 4) + 0x30), 0xC179840);
            nlGetAverageVector(0xC179840, (((int)stk + 4) + 0x18), (((int)stk + 4) + 0x30), 1.0f, (((float)t2 * 0.149999991f) / 100.0f));
            camSetEye((((int)stk + 4) + 0x30), 0x0);
            u148 = 1.0f;
            if (((*(signed char *)(((*(int *)0xC2AD54C) + 0x14B))) & 4) != 0) {
                u148 = (-1.0f);
            }
            *(float *)(((int)stk + 16)) = (u148 * (*(float *)((((((int)stk + 4) + 0x3C) + 0xC) + 0x0))));
            *(float *)(((int)stk + 20)) = (*(float *)((((((int)stk + 4) + 0x3C) + 0xC) + 0x4)));
            *(float *)(((int)stk + 24)) = (*(float *)((((((int)stk + 4) + 0x3C) + 0xC) + 0x8)));
            nlCalcPoint((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x24));
            nlSubVector3op((((int)stk + 4) + 0x18), (((int)stk + 4) + 0x24), 0xC17984C);
            nlGetAverageVector(0xC17984C, (((int)stk + 4) + 0x18), (((int)stk + 4) + 0x24), 1.0f, (((float)t2 * 0.149999991f) / 100.0f));
            camSetTarget((((int)stk + 4) + 0x24), 0x0);
            nlPopMatrix(0x1);
            if ((int)(*(int *)0xC2AD578) < (int)0x64) {
            } else {
                *(unsigned int *)0xC2AD580 = ((*(int *)0xC2AD580) + 0x1);
            }
        }
    } else {
        nlPushMatrix(0xC179180);
        nlCalcPoint((((int)stk + 4) + 0x78), (((int)stk + 4) + 0x30));
        nlCalcPoint((((int)stk + 4) + 0x3C), (((int)stk + 4) + 0x24));
        nlPopMatrix(0x1);
        camSetEye((((int)stk + 4) + 0x30), 0x0);
        camSetTarget((((int)stk + 4) + 0x24), 0x0);
        *(unsigned int *)0xC2AD580 = ((*(int *)0xC2AD580) + 0x1);
    }
    t186 = *(int *)0xC2AD590;
    t188 = t186;
    if ((t186 & 2) == 0) {
        t188 = (camRestore());
    }
    return t188;
}
