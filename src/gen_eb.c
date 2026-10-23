/* Straight-line functions with calls and guards (batch gen_eb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckColliWall(int, float);
int HomingAngle1(int, int, float);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlArcTan2(float, float);
int nlCalcVector(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
extern int nlScaleVector();
int nlSubVector3op(int, int, int);
int nlUnitVector(int);
int BigOneFollowTaxi(int a4, float f4, float f5, float f6);

int BigOneFollowTaxi(int a4, float f4, float f5, float f6)
{
    int t2;
    int t8;
    int t10;
    int t11;
    float u14;
    float u16;
    int t56;
    int stk[19];

    if ((f4 - (*(float *)0xC179148)) > 30.0f) {
        t2 = ((int (*)(int, int, float, float, float))(nlScaleVector))((((int)stk + 4) + 0xC), 0xC2AD1F8, 100.0f, f5, f6);
        nlAddVector3op((((int)stk + 4) + 0x18), 0xC179144, (((int)stk + 4) + 0xC));
        nlSubVector3op((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x18), 0xC2AEC20);
        *(float *)(((int)stk + 20)) = 0.0f;
        nlUnitVector((((int)stk + 4) + 0xC));
        t8 = nlArcTan2((*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 24))));
        HomingAngle1(t8, 0xC2AEC30, 0.00999999978f);
        t10 = *(int *)0xC2AEC30;
        t11 = (t10 - t8);
        if ((int)t8 > (int)t10) {
            t11 = (t8 - t10);
        }
        u14 = 1.0f;
        if ((int)t11 > (int)0x2000) {
            u14 = 0.399999976f;
        }
        u16 = *(float *)0xC2AEC38;
        if (u14 > u16) {
            *(float *)0xC2AEC38 = ((*(float *)0xC2AEC38) + 0.0199999996f);
        } else {
            if (!(u16 > u14)) {
            } else {
                *(float *)0xC2AEC38 = ((*(float *)0xC2AEC38) - 0.0199999996f);
            }
        }
    } else {
        if ((*(float *)0xC2AEC38) > 0.0f) {
            *(float *)0xC2AEC38 = ((*(float *)0xC2AEC38) - 0.0199999996f);
        } else {
            *(float *)0xC2AEC38 = 0.0f;
            if ((int)(*(float *)0xC2AEC58) != 10) {
                *(float *)0xC2AEC58 = ((*(float *)0xC2AEC58) + 0.099999994f);
            }
        }
    }
    nlPushUnitMatrix();
    nlRotateAY((*(int *)0xC2AEC30));
    nlCalcVector(0xC0D5554, (((int)stk + 4) + 0xC));
    t56 = ((int (*)(int, int, float))(nlScaleVector))(((int)stk + 4), (((int)stk + 4) + 0xC), (*(float *)0xC2AEC38));
    nlAddVector(0xC2AEC20, ((int)stk + 4));
    CheckColliWall(0xC2AEC20, 21.0f);
    nlPopMatrix(0x1);
    *(float *)0xC2AEC5C = (((*(float *)0xC2AEC38) * 1.0f) / 1.0f);
    return 0x3C;
}
