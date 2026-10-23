/* Straight-line functions with calls and guards (batch gen_aok): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Bezier(int, int, float);
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
int nlSubVector3op(int, int, int);
int camGetOffShot4(void);

int camGetOffShot4(void)
{
    int t2;
    int t71;
    int t73;
    int stk[47];

    SetCameraMode(0x1);
    nlPushMatrix(0xC179180);
    t2 = *(int *)0xC2AD578;
    if ((int)t2 <= (int)0x7) {
        if ((int)t2 > (int)0x6E) {
            nlSubVector3op((((int)stk + 4) + 0x74), 0xC2AD554, 0xC179840);
            nlGetAverageVector(0xC179840, (((int)stk + 4) + 0x74), (0x8C + ((int)stk + 4)), 1.0f, 0.049999997f);
            camSetEye((0x8C + ((int)stk + 4)), 0x1);
            nlSubVector3op((((int)stk + 4) + 0x74), 0xC2AD560, 0xC17984C);
            nlGetAverageVector(0xC17984C, (((int)stk + 4) + 0x74), (0x80 + ((int)stk + 4)), 1.0f, 0.049999997f);
            camSetTarget((0x80 + ((int)stk + 4)), 0x1);
        }
    } else {
        if ((int)(*(int *)0xC2AD578) >= (int)0x50) {
            if ((int)t2 > (int)0x6E) {
                nlSubVector3op((((int)stk + 4) + 0x74), 0xC2AD554, 0xC179840);
                nlGetAverageVector(0xC179840, (((int)stk + 4) + 0x74), (0x8C + ((int)stk + 4)), 1.0f, 0.049999997f);
                camSetEye((0x8C + ((int)stk + 4)), 0x1);
                nlSubVector3op((((int)stk + 4) + 0x74), 0xC2AD560, 0xC17984C);
                nlGetAverageVector(0xC17984C, (((int)stk + 4) + 0x74), (0x80 + ((int)stk + 4)), 1.0f, 0.049999997f);
                camSetTarget((0x80 + ((int)stk + 4)), 0x1);
            }
        } else {
            { struct mv6 { int w[6]; }; *(struct mv6 *)((((int)stk + 4) + 0x50)) = *(struct mv6 *)(0xC0D53FC); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x44)) = *(struct mv3 *)(0xC0D5414); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x38)) = *(struct mv3 *)(0xC0D5420); }
            if (((*(signed char *)(((*(int *)0xC2AD54C) + 0x14B))) & 4) == 0) {
                *(float *)(((((int)stk + 4) + 0x50) + 0x0)) = ((*(float *)(((((int)stk + 4) + 0x50) + 0x0))) * (-1.0f));
                *(float *)(((((int)stk + 4) + 0x50) + 0xC)) = ((*(float *)(((((int)stk + 4) + 0x50) + 0xC))) * (-1.0f));
                *(float *)(((int)stk + 72)) = ((*(float *)(((int)stk + 72))) * (-1.0f));
                *(float *)(((int)stk + 60)) = ((*(float *)(((int)stk + 60))) * (-1.0f));
            }
            *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x8);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x8)) = *(struct mv3 *)(0xC2AD554); }
            *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 4) + 0x8) + 0x24);
            nlCalcPoint((((int)stk + 4) + 0x44), ((((int)stk + 4) + 0x8) + 0x24));
            nlCalcVector((((int)stk + 4) + 0x50), (((int)stk + 4) + 0x74));
            nlAddVector3op(((((int)stk + 4) + 0x8) + 0xC), (*(int *)(((int)stk + 4))), (((int)stk + 4) + 0x74));
            nlCalcVector(((((int)stk + 4) + 0x50) + 0xC), (((int)stk + 4) + 0x74));
            nlAddVector3op(((((int)stk + 4) + 0x8) + 0x18), (*(int *)(((int)stk + 8))), (((int)stk + 4) + 0x74));
            Bezier((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x74), ((float)((*(int *)0xC2AD578) - 7) / 72.0f));
            nlSubVector3op((((int)stk + 4) + 0x68), (((int)stk + 4) + 0x74), 0xC179840);
            nlGetAverageVector(0xC179840, (((int)stk + 4) + 0x68), (0x8C + ((int)stk + 4)), 1.0f, 0.299999982f);
            camSetEye((0x8C + ((int)stk + 4)), 0x1);
            nlCalcPoint((((int)stk + 4) + 0x38), (((int)stk + 4) + 0x74));
            nlSubVector3op((((int)stk + 4) + 0x68), (((int)stk + 4) + 0x74), 0xC17984C);
            nlGetAverageVector(0xC17984C, (((int)stk + 4) + 0x68), (0x80 + ((int)stk + 4)), 1.0f, 0.049999997f);
            camSetTarget((0x80 + ((int)stk + 4)), 0x1);
        }
    }
    nlPopMatrix(0x1);
    t71 = *(int *)0xC2AD590;
    t73 = t71;
    if ((t71 & 2) == 0) {
        t73 = (camRestore());
    }
    return t73;
}
