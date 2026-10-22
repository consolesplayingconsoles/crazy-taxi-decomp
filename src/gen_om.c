/* Straight-line functions with calls and guards (batch gen_om): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CalcShadow2Matrix(int);
int CalcShadow4Normal(int, int);
int FUN_0c078310(void);
int GetCollision2D(int, float);
int GetRotVec(int);
int MultiRot4Vec(int);
int Sound_Request(int, int);
int nlAddVector(int, int);
int nlArcTan2(float, float);
int nlCloseEvent(int);
float nlInnerProduct(int, int);
float nlLength(int, int);
int nlObjPutUseViewMatrix(int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotate(int, int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlScaleVector(int, int, float);
float nlScalor(int);
int nlSetScaleFactor(float);
int nlSqrt(int, int);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
float nlUnitVector(int);
float MoveHelicopter(int a4);

float MoveHelicopter(int a4)
{
    float t3;
    float u5;
    float u23;
    float u36;
    float t45;
    int t67;
    int t68;
    int t70;
    int t80;
    float u95;
    float u120;
    float t122;
    int t124;
    float u127;
    float u134;
    int stk[17] = {0};

    nlScaleVector((((int)stk + 4) + 0xC), (a4 + 0x20), 120.0f);
    nlAddVector((((int)stk + 4) + 0xC), (a4 + 0x14));
    nlSubVector3op((((int)stk + 4) + 0xC), 0xC274274, (((int)stk + 4) + 0xC));
    *(float *)(((int)stk + 20)) = 0.0f;
    t3 = nlUnitVector((((int)stk + 4) + 0xC));
    u5 = *(float *)0xC274278;
    if (u5 > (*(float *)((a4 + 0x18)))) {
        *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) + 0.00499999989f);
    } else {
        if ((*(float *)((a4 + 0x18))) > (u5 + 50.0f)) {
            *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) - 0.00499999989f);
        }
    }
    u23 = (*(float *)((a4 + 0x50)));
    u23 = u23 + 0.099999994f * ((-(*(float *)(((0x50 + a4) + 0x0)))) + 0.166666597f);
    *(float *)((a4 + 0x50)) = u23;
    if (0.0f > u23) {
        *(float *)((a4 + 0x50)) = 0.0f;
    }
    u36 = t3;
    if (t3 > 500.0f) {
        if ((nlInnerProduct((((int)stk + 4) + 0xC), (a4 + 0x2C))) > 0.699999988f) {
            nlAddVector((a4 + 0x20), (a4 + 0x2C));
        }
        *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) + 0.00499999989f);
        u36 = 500.0f;
    }
    nlScaleVector((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC), (u36 * 0.00199999986f));
    nlAddVector((((int)stk + 4) + 0xC), 0xC096644);
    nlSubVector((((int)stk + 4) + 0xC), (a4 + 0x38));
    nlOuterProduct((a4 + 0x38), (((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC));
    t45 = nlScalor((((int)stk + 4) + 0xC));
    nlPushUnitMatrix();
    nlTranslateV((a4 + 0x14));
    if (t45 > 0.0f) {
        nlRotate((((int)stk + 4) + 0xC), (int)(t45 * 50.0f));
    }
    MultiRot4Vec((a4 + 0x2C));
    nlRotateAY((*(int *)((a4 + 0x58))));
    nlObjPutUseViewMatrix(0xC627F40);
    GetRotVec((a4 + 0x2C));
    nlPushMatrix(0x0);
    FUN_0c078310();
    nlSqrt(0xC274280, (((int)stk + 4) + 0xC));
    nlPopMatrix(0x1);
    nlRotateAY((*(int *)((a4 + 0x54))));
    nlObjPutUseViewMatrix(0xC629978);
    nlPopMatrix(0x1);
    t67 = nlArcTan2((-(*(float *)(((int)stk + 16)))), (*(float *)(((int)stk + 24))));
    t68 = t67;
    if ((int)(short)t67 > (int)0x1000) {
        t68 = 0x1000;
    }
    t70 = t68;
    if ((int)(short)t68 < (int)0xFFFFF000) {
        t70 = 0xFFFFF000;
    }
    *(unsigned int *)((a4 + 0x58)) = ((*(int *)((a4 + 0x58))) - ((int)(short)t70 >> 10));
    *(unsigned int *)((a4 + 0x58)) = (int)((float)(*(int *)((a4 + 0x58))) * 0.979999959f);
    nlScaleVector((a4 + 0x20), (a4 + 0x20), 0.979999959f);
    *(float *)((a4 + 0x24)) = ((*(float *)((a4 + 0x24))) - 0.166666597f);
    nlScaleVector((((int)stk + 4) + 0xC), (a4 + 0x38), (*(float *)((a4 + 0x50))));
    nlAddVector((a4 + 0x20), (((int)stk + 4) + 0xC));
    nlAddVector((a4 + 0x14), (a4 + 0x20));
    t80 = GetCollision2D((a4 + 0x14), 40.0f);
    if ((*(int *)((t80 + 0x1C))) != -1) {
        if (((*(float *)((t80 + 0x18))) + 100.0f) > (*(float *)((a4 + 0x18)))) {
            *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) + 0.00999999978f);
        }
        if ((*(float *)((t80 + 0x18))) > ((*(float *)((a4 + 0x18))) + -15.0f)) {
            *(float *)((a4 + 0x18)) = ((*(float *)((t80 + 0x18))) + 15.0f);
            if (0.0f > (*(float *)((a4 + 0x24)))) {
                u95 = (*(float *)((a4 + 0x24)));
                u95 *= -0.599999964f;
                *(float *)((a4 + 0x24)) = u95;
            }
            nlScaleVector((a4 + 0x20), (a4 + 0x20), 0.899999976f);
        }
        CalcShadow4Normal(((int)stk + 4), (t80 + 0xC));
        nlPushUnitMatrix();
        nlTranslateV(t80);
        CalcShadow2Matrix(((int)stk + 4));
        nlScale(20.0f, 20.0f, 20.0f);
        nlTranslate(0.0f, 0.099999994f, 0.0f);
        nlSetScaleFactor(20.0f);
        nlObjPutUseViewMatrix(0xC55F218);
        nlPopMatrix(0x1);
    }
    u120 = 8225.0f;
    u120 = u120 + 1000.0f * (*(float *)((a4 + 0x50)));
    *(unsigned int *)(((0x54 + a4) + 0x0)) = (int)((float)(*(int *)(((0x54 + a4) + 0x0))) + u120);
    t122 = nlLength((a4 + 0x14), 0xC179144);
    if ((t122 > (*(float *)0xC037654)) && (t124 = *(int *)0xC274290, t124 != 0)) {
        Sound_Request(0x511A9, 0x0);
    } else {
        u127 = t122;
    }
    if (t122 > (*(float *)0xC037664)) {
        nlCloseEvent(a4);
        *(unsigned int *)0xC27428C = 0x0;
    } else {
        u134 = u127;
    }
    return u134;
}
