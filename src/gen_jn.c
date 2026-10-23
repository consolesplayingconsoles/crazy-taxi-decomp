/* Straight-line functions with calls and guards (batch gen_jn): generated from the code and checked by tests. Calls are
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
int camGetOffShot1(void);

int camGetOffShot1(void)
{
    int t1;
    float u6;
    float u15;
    float u28;
    float u36;
    float u48;
    float u56;
    float u75;
    float u84;
    float u94;
    int t153;
    int t155;
    int stk[51];

    { struct mv12 { int w[12]; }; *(struct mv12 *)((((int)stk + 4) + 0x70)) = *(struct mv12 *)(0xC0D52AC); }
    { struct mv12 { int w[12]; }; *(struct mv12 *)((((int)stk + 4) + 0x40)) = *(struct mv12 *)(0xC0D52DC); }
    SetCameraMode(0x1);
    *(unsigned int *)(((int)stk + 4)) = 0xC1790CC;
    t1 = *(int *)0xC2AD580;
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                nlPushMatrix(((*(int *)(((int)stk + 4))) + 0xB4));
                u6 = (-1.0f);
                if (((*(signed char *)(((*(int *)0xC2AD54C) + 0x14B))) & 4) != 0) {
                    u6 = 1.0f;
                }
                *(float *)(((int)stk + 56)) = (u6 * (*(float *)((((((int)stk + 4) + 0x70) + 0xC) + 0x0))));
                *(float *)(((int)stk + 60)) = (*(float *)((((((int)stk + 4) + 0x70) + 0xC) + 0x4)));
                *(float *)(((int)stk + 64)) = (*(float *)((((((int)stk + 4) + 0x70) + 0xC) + 0x8)));
                nlCalcPoint((((int)stk + 4) + 0x34), (((int)stk + 4) + 0x34));
                camSetEye((((int)stk + 4) + 0x34), 0x0);
                u15 = (-1.0f);
                if (((*(signed char *)(((*(int *)0xC2AD54C) + 0x14B))) & 4) != 0) {
                    u15 = 1.0f;
                }
                *(float *)(((int)stk + 44)) = (u15 * (*(float *)((((((int)stk + 4) + 0x40) + 0xC) + 0x0))));
                *(float *)(((int)stk + 48)) = (*(float *)((((((int)stk + 4) + 0x40) + 0xC) + 0x4)));
                *(float *)(((int)stk + 52)) = (*(float *)((((((int)stk + 4) + 0x40) + 0xC) + 0x8)));
                nlCalcPoint((((int)stk + 4) + 0x28), (((int)stk + 4) + 0x28));
                camSetTarget((((int)stk + 4) + 0x28), 0x0);
                nlPopMatrix(0x1);
                *(unsigned int *)0xC2AD580 = ((*(int *)0xC2AD580) + 0x1);
            } else {
                if (t1 == 3) {
                    nlPushMatrix(((*(int *)(((int)stk + 4))) + 0xB4));
                    u28 = (-1.0f);
                    if (((*(signed char *)(((*(int *)0xC2AD54C) + 0x14B))) & 4) != 0) {
                        u28 = 1.0f;
                    }
                    *(float *)(((int)stk + 56)) = (u28 * (*(float *)((((((int)stk + 4) + 0x70) + 0xC) + 0x0))));
                    *(float *)(((int)stk + 60)) = (*(float *)((((((int)stk + 4) + 0x70) + 0xC) + 0x4)));
                    *(float *)(((int)stk + 64)) = (*(float *)((((((int)stk + 4) + 0x70) + 0xC) + 0x8)));
                    nlCalcPoint((((int)stk + 4) + 0x34), (((int)stk + 4) + 0x10));
                    u36 = (-1.0f);
                    if (((*(signed char *)(((*(int *)0xC2AD54C) + 0x14B))) & 4) != 0) {
                        u36 = 1.0f;
                    }
                    *(float *)(((int)stk + 56)) = (u36 * (*(float *)((((((int)stk + 4) + 0x70) + 0x18) + 0x0))));
                    *(float *)(((int)stk + 60)) = (*(float *)((((((int)stk + 4) + 0x70) + 0x18) + 0x4)));
                    *(float *)(((int)stk + 64)) = (*(float *)((((((int)stk + 4) + 0x70) + 0x18) + 0x8)));
                    nlCalcPoint((((int)stk + 4) + 0x34), (((int)stk + 4) + 0x4));
                    nlSubVector((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x10));
                    nlScaleVector((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x4), 0.0166666657f);
                    nlAddVector3op((((int)stk + 4) + 0x34), 0xC179840, (((int)stk + 4) + 0x1C));
                    camSetEye((((int)stk + 4) + 0x34), 0x0);
                    u48 = (-1.0f);
                    if (((*(signed char *)(((*(int *)0xC2AD54C) + 0x14B))) & 4) != 0) {
                        u48 = 1.0f;
                    }
                    *(float *)(((int)stk + 44)) = (u48 * (*(float *)((((((int)stk + 4) + 0x40) + 0xC) + 0x0))));
                    *(float *)(((int)stk + 48)) = (*(float *)((((((int)stk + 4) + 0x40) + 0xC) + 0x4)));
                    *(float *)(((int)stk + 52)) = (*(float *)((((((int)stk + 4) + 0x40) + 0xC) + 0x8)));
                    nlCalcPoint((((int)stk + 4) + 0x28), (((int)stk + 4) + 0x10));
                    u56 = (-1.0f);
                    if (((*(signed char *)(((*(int *)0xC2AD54C) + 0x14B))) & 4) != 0) {
                        u56 = 1.0f;
                    }
                    *(float *)(((int)stk + 44)) = (u56 * (*(float *)((((((int)stk + 4) + 0x40) + 0x18) + 0x0))));
                    *(float *)(((int)stk + 48)) = (*(float *)((((((int)stk + 4) + 0x40) + 0x18) + 0x4)));
                    *(float *)(((int)stk + 52)) = (*(float *)((((((int)stk + 4) + 0x40) + 0x18) + 0x8)));
                    nlCalcPoint((((int)stk + 4) + 0x28), (((int)stk + 4) + 0x4));
                    nlSubVector((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x10));
                    nlScaleVector((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x4), 0.0166666657f);
                    nlAddVector3op((((int)stk + 4) + 0x28), 0xC17984C, (((int)stk + 4) + 0x1C));
                    camSetTarget((((int)stk + 4) + 0x28), 0x0);
                    if ((int)(*(int *)0xC2AD578) >= (int)0x8C) {
                        *(unsigned int *)0xC2AD580 = ((*(int *)0xC2AD580) + 0x1);
                    }
                    nlPopMatrix(0x1);
                } else {
                    if (t1 == 4) {
                        nlPushMatrix(((*(int *)(((int)stk + 4))) + 0xB4));
                        u75 = (-1.0f);
                        if (((*(signed char *)(((*(int *)0xC2AD54C) + 0x14B))) & 4) != 0) {
                            u75 = 1.0f;
                        }
                        *(float *)(((int)stk + 20)) = (u75 * (*(float *)((((((int)stk + 4) + 0x70) + 0x24) + 0x0))));
                        *(float *)(((int)stk + 24)) = (*(float *)((((((int)stk + 4) + 0x70) + 0x24) + 0x4)));
                        *(float *)(((int)stk + 28)) = (*(float *)((((((int)stk + 4) + 0x70) + 0x24) + 0x8)));
                        nlCalcPoint((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x34));
                        camSetEye((((int)stk + 4) + 0x34), 0x0);
                        u84 = (-1.0f);
                        if (((*(signed char *)(((*(int *)0xC2AD54C) + 0x14B))) & 4) != 0) {
                            u84 = 1.0f;
                        }
                        *(float *)(((int)stk + 20)) = (u84 * (*(float *)((((((int)stk + 4) + 0x40) + 0x24) + 0x0))));
                        *(float *)(((int)stk + 24)) = (*(float *)((((((int)stk + 4) + 0x40) + 0x24) + 0x4)));
                        *(float *)(((int)stk + 28)) = (*(float *)((((((int)stk + 4) + 0x40) + 0x24) + 0x8)));
                        nlCalcPoint((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x28));
                        camSetTarget((((int)stk + 4) + 0x28), 0x0);
                        nlPopMatrix(0x1);
                        *(unsigned int *)0xC2AD580 = ((*(int *)0xC2AD580) + 0x1);
                    } else {
                        if (t1 == 5) {
                            nlSubVector3op((((int)stk + 4) + 0x1C), 0xC2AD554, 0xC179840);
                            u94 = *(float *)0xC065154;
                            nlGetAverageVector(0xC179840, (((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x34), 1.0f, u94);
                            camSetEye((((int)stk + 4) + 0x34), 0x0);
                            nlSubVector3op((((int)stk + 4) + 0x1C), 0xC2AD560, 0xC17984C);
                            nlGetAverageVector(0xC17984C, (((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x28), 1.0f, u94);
                            camSetTarget((((int)stk + 4) + 0x28), 0x0);
                        }
                    }
                }
            }
        } else {
            nlSubVector3op((((int)stk + 4) + 0x1C), 0xC179840, 0xC17984C);
            nlPushUnitMatrix();
            nlRotateAxe(0xC2AD1EC, 0xFFFFFCD0);
            nlCalcVector((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x1C));
            nlPopMatrix(0x1);
            nlAddVector3op((((int)stk + 4) + 0x34), 0xC17984C, (((int)stk + 4) + 0x1C));
            *(float *)(((int)stk + 60)) = ((*(float *)(((int)stk + 60))) - 0.199999988f);
            camSetEye((((int)stk + 4) + 0x34), 0x0);
            if ((int)(*(int *)0xC2AD578) < (int)0x50) {
            } else {
                *(unsigned int *)0xC2AD580 = ((*(int *)0xC2AD580) + 0x1);
            }
        }
    } else {
        nlPushMatrix(((*(int *)(((int)stk + 4))) + 0xB4));
        nlCalcPoint((((int)stk + 4) + 0x70), (((int)stk + 4) + 0x34));
        nlCalcPoint((((int)stk + 4) + 0x40), (((int)stk + 4) + 0x28));
        nlPopMatrix(0x1);
        camSetEye((((int)stk + 4) + 0x34), 0x0);
        camSetTarget((((int)stk + 4) + 0x28), 0x0);
        *(unsigned int *)0xC2AD580 = ((*(int *)0xC2AD580) + 0x1);
    }
    t153 = *(int *)0xC2AD590;
    t155 = t153;
    if ((t153 & 2) == 0) {
        t155 = (camRestore());
    }
    return t155;
}
