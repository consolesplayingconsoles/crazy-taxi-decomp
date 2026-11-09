/* Straight-line functions with calls and guards (batch gen_ta): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckColliWall(int, float);
float GetCameraDistance(void);
int GetCollision(int, int, float, float);
int GetCollision2D(int, float);
int MultiRot4Vec(int);
int ResetSpark(void);
int SetCameraMode(int);
int SetCameraPosRatio(float, float);
int SetCameraPosVelocity(int);
int camSetAngles(int, int, int, int);
int camSetEye(int, int);
int camSetTarget(int, int);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRand(void);
float nlRandom(void);
int nlScaleVector(int, int, float);
int nlTranslateV(int);
void ExecAdvCameraRandom(void);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };


void ExecAdvCameraRandom(void)
{
    float t3;
    float u10;
    int t33;
    int t64;
    int t65;
    int t69;
    float u83;
    float u84;
    float u85;
    float u88;
    int t66;
    int stk[15];

    nlPushUnitMatrix();
    nlTranslateV(0xC179144);
    MultiRot4Vec(0xC1790FC);
    t3 = GetCameraDistance();
    if (t3 > 500.0f) {
        (((struct o0_uint *)0xC179974)->v) = 0x1;
    }
    if (((((struct o0_int *)0xC179974)->v)) != 0) {
        (((struct oC_float *)0xC179974)->v) = 0.0f;
        (((struct o4_float *)0xC179974)->v) = 0.0f;
        (((struct o8_float *)0xC179974)->v) = 5.0f;
        nlCalcPoint(0xC179978, 0xC179978);
        (((struct o10_float *)0xC179974)->v) = (((nlRandom()) + -0.5f) * 68.0f);
        (((struct o14_float *)0xC179974)->v) = (((nlRandom()) + -0.5f) * 16.0f);
        u10 = 27.0f;
        u10 = u10 + 27.0f * (nlRandom());
        (((struct o18_float *)0xC179974)->v) = u10;
        nlCalcVector(0xC179984, 0xC179984);
        GetCollision(0xC179978, 0xC179984, 1.0f, 5.0f);
        nlScaleVector(0xC179984, 0xC1791C8, ((nlRandom()) + (1.0f + 1.0f)));
        camSetEye(0xC179978, 0x0);
        SetCameraPosVelocity(0xC179984);
        SetCameraPosRatio(0.899999976f, 0.199999988f);
        (((struct o1C_uint *)0xC179974)->v) = ((int)(((nlRand()) << 16) << 1) >> 19);
        (((struct o20_uint *)0xC179974)->v) = ((int)(((nlRand()) << 16) << 1) >> 25);
        (((struct o24_uint *)0xC179974)->v) = ((nlRand()) & 0x3);
        SetCameraMode(0x1);
        ResetSpark();
        (((struct o0_uint *)0xC179974)->v) = 0x0;
    }
    nlScaleVector(0xC179984, 0xC179984, 0.979999959f);
    GetCollision(0xC179978, 0xC179984, 0.0f, 5.0f);
    CheckColliWall(0xC179978, 5.0f);
    t33 = GetCollision2D(0xC179978, 5.0f);
    if ((*(int *)((t33 + 0x1C))) != -1) {
        if ((*(float *)((t33 + 0x18))) > (((((struct o8_float *)0xC179974)->v)) + -5.0f)) {
            (((struct o8_float *)0xC179974)->v) = ((*(float *)((t33 + 0x18))) + 5.0f);
        }
        if ((((((struct o8_float *)0xC179974)->v)) + -100.0f) > (*(float *)((t33 + 0x18)))) {
            (((struct o8_float *)0xC179974)->v) = ((*(float *)((t33 + 0x18))) + 100.0f);
        }
    } else {
        (((struct o0_uint *)0xC179974)->v) = 0x1;
    }
    camSetEye(0xC179978, 0x2);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC0965F0); }
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 5.0f);
    if ((((((struct o24_int *)0xC179974)->v)) & 2) != 0) {
        *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + 50.0f);
    }
    nlCalcPoint(((int)stk + 0), ((int)stk + 0));
    camSetTarget(((int)stk + 0), 0x2);
    nlPopMatrix(0x1);
    t64 = (((struct o1C_int *)0xC179974)->v);
    t65 = (((struct o20_int *)0xC179974)->v);
    (((struct o1C_uint *)0xC179974)->v) = (t64 + t65);
    if (((int)(t64 + t65) >= (int)0xFFFFE800) && (t66 = (((struct o1C_int *)0xC179974)->v), (int)t66 <= (int)0x1800)) {
    } else {
        t69 = (((struct o20_int *)0xC179974)->v);
        if ((int)t69 < 0) {
            (((struct o20_uint *)0xC179974)->v) = (((((struct o20_int *)0xC179974)->v)) + 0x1);
        } else {
            if ((int)t69 > 0) {
                (((struct o20_uint *)0xC179974)->v) = (((((struct o20_int *)0xC179974)->v)) - 1);
            }
        }
    }
    camSetAngles(0x0, 0x0, ((((struct o1C_int *)0xC179974)->v)), 0x0);
    if ((0x1 & ((((struct o24_int *)0xC179974)->v))) != 0) {
        u83 = 4e+02f;
        u84 = 8e+02f;
        u85 = ((u83 - t3) / u84);
        if (0.0f > ((u83 - t3) / u84)) {
            u85 = 0.0f;
        }
        u88 = 27.0f;
        u88 = u88 + 28.0f * u85;
        *(float *)0xC1798A4 = u88;
    } else {
        *(float *)0xC1798A4 = 43.0f;
    }
}
