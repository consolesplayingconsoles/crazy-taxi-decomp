/* Straight-line functions with calls and guards (batch gen_aoo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CalcShadow2Matrix(int);
int CalcShadow4Normal(int, int);
int GetCollision2D(int, float);
int GetRotVec(int);
int MultiRot4Vec(int);
int Sound_Request(int, int);
int nlAddVector(int, int);
int nlArcTan2(float, float);
int nlCalcPoint(int, int);
int nlCloseEvent(int);
float nlInnerProduct(int, int);
float nlLength(int, int);
int nlObjPutUseViewMatrix(int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlQuickInvertMatrix(void);
int nlRotate(int, int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlScaleVector(int, int, float);
float nlScalor(int);
int nlSetScaleFactor(float);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
float nlUnitVector(int);
float MoveHelicopter(int a4);
struct o18_float { char p[0x18]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_int { char p[0x54]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o0_float { float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };



float MoveHelicopter(int a4)
{
    float t3;
    float u5;
    float u23;
    float u36;
    float t25;
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
    int stk[17];

    nlScaleVector((((int)stk + 4) + 0xC), (a4 + 0x20), 120.0f);
    nlAddVector((((int)stk + 4) + 0xC), (a4 + 0x14));
    nlSubVector3op((((int)stk + 4) + 0xC), 0xC274274, (((int)stk + 4) + 0xC));
    *(float *)(((int)stk + 20)) = 0.0f;
    t3 = nlUnitVector((((int)stk + 4) + 0xC));
    u5 = (((struct o0_float *)0xC274278)->v);
    if (u5 > ((((struct o18_float *)(a4))->v))) {
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.00499999989f);
    } else {
        if (((((struct o18_float *)(a4))->v)) > (u5 + 50.0f)) {
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 0.00499999989f);
        }
    }
    u23 = ((((struct o50_float *)(a4))->v));
    u23 = u23 + 0.099999994f * ((-((((struct o50_float *)(a4))->v))) + 0.166666597f);
    (((struct o50_float *)(a4))->v) = u23;
    if (0.0f > u23) {
        (((struct o50_float *)(a4))->v) = 0.0f;
    }
    u36 = t3;
    if (t3 > 500.0f) {
        t25 = nlInnerProduct((((int)stk + 4) + 0xC), (a4 + 0x2C));
        if (t25 > 0.699999988f) {
            nlAddVector((a4 + 0x20), (a4 + 0x2C));
        }
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.00499999989f);
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
    nlRotateAY(((((struct o58_int *)(a4))->v)));
    nlObjPutUseViewMatrix(0xC627F40);
    GetRotVec((a4 + 0x2C));
    nlPushMatrix(0x0);
    nlQuickInvertMatrix();
    nlCalcPoint(0xC274280, (((int)stk + 4) + 0xC));
    nlPopMatrix(0x1);
    nlRotateAY(((((struct o54_int *)(a4))->v)));
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
    (((struct o58_uint *)(a4))->v) = (((((struct o58_int *)(a4))->v)) - ((int)(short)t70 >> 10));
    (((struct o58_uint *)(a4))->v) = (int)((float)((((struct o58_int *)(a4))->v)) * 0.979999959f);
    nlScaleVector((a4 + 0x20), (a4 + 0x20), 0.979999959f);
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - 0.166666597f);
    nlScaleVector((((int)stk + 4) + 0xC), (a4 + 0x38), ((((struct o50_float *)(a4))->v)));
    nlAddVector((a4 + 0x20), (((int)stk + 4) + 0xC));
    nlAddVector((a4 + 0x14), (a4 + 0x20));
    t80 = GetCollision2D((a4 + 0x14), 40.0f);
    if ((*(int *)((t80 + 0x1C))) != -1) {
        if ((((((struct o18_float *)(t80))->v)) + 100.0f) > ((((struct o18_float *)(a4))->v))) {
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.00999999978f);
        }
        if (((((struct o18_float *)(t80))->v)) > (((((struct o18_float *)(a4))->v)) + -15.0f)) {
            (((struct o18_float *)(a4))->v) = (((((struct o18_float *)(t80))->v)) + 15.0f);
            if (0.0f > ((((struct o24_float *)(a4))->v))) {
                u95 = ((((struct o24_float *)(a4))->v));
                u95 *= -0.599999964f;
                (((struct o24_float *)(a4))->v) = u95;
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
    u120 = u120 + 1000.0f * ((((struct o50_float *)(a4))->v));
    (((struct o54_uint *)(a4))->v) = (int)((float)((((struct o54_int *)(a4))->v)) + u120);
    t122 = nlLength((a4 + 0x14), 0xC179144);
    if ((t122 > 2e+03f) && (t124 = (((struct o18_int *)0xC274278)->v), t124 != 0)) {
        Sound_Request(0x511A9, 0x0);
    } else {
        u127 = t122;
    }
    if (t122 > 4e+03f) {
        nlCloseEvent(a4);
        (((struct o14_uint *)0xC274278)->v) = 0x0;
    } else {
        u134 = u127;
    }
    return u134;
}
