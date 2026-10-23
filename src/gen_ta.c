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
    int stk[16];

    nlPushUnitMatrix();
    nlTranslateV(0xC179144);
    MultiRot4Vec(0xC1790FC);
    t3 = GetCameraDistance();
    if (t3 > 500.0f) {
        *(unsigned int *)0xC179974 = 0x1;
    }
    if ((*(int *)0xC179974) != 0) {
        *(float *)0xC179980 = 0.0f;
        *(float *)0xC179978 = 0.0f;
        *(float *)0xC17997C = 5.0f;
        nlCalcPoint(0xC179978, 0xC179978);
        *(float *)0xC179984 = (((nlRandom()) + -0.5f) * 68.0f);
        *(float *)0xC179988 = (((nlRandom()) + -0.5f) * 16.0f);
        u10 = 27.0f;
        u10 = u10 + 27.0f * (nlRandom());
        *(float *)0xC17998C = u10;
        nlCalcVector(0xC179984, 0xC179984);
        GetCollision(0xC179978, 0xC179984, 1.0f, 5.0f);
        nlScaleVector(0xC179984, 0xC1791C8, ((nlRandom()) + (1.0f + 1.0f)));
        camSetEye(0xC179978, 0x0);
        SetCameraPosVelocity(0xC179984);
        SetCameraPosRatio(0.899999976f, 0.199999988f);
        *(unsigned int *)0xC179990 = ((int)(((nlRand()) << 16) << 1) >> 19);
        *(unsigned int *)0xC179994 = ((int)(((nlRand()) << 16) << 1) >> 25);
        *(unsigned int *)0xC179998 = ((nlRand()) & 0x3);
        SetCameraMode(0x1);
        ResetSpark();
        *(unsigned int *)0xC179974 = 0x0;
    }
    nlScaleVector(0xC179984, 0xC179984, 0.979999959f);
    GetCollision(0xC179978, 0xC179984, 0.0f, 5.0f);
    CheckColliWall(0xC179978, 5.0f);
    t33 = GetCollision2D(0xC179978, 5.0f);
    if ((*(int *)((t33 + 0x1C))) != -1) {
        if ((*(float *)((t33 + 0x18))) > ((*(float *)0xC17997C) + -5.0f)) {
            *(float *)0xC17997C = ((*(float *)((t33 + 0x18))) + 5.0f);
        }
        if (((*(float *)0xC17997C) + -100.0f) > (*(float *)((t33 + 0x18)))) {
            *(float *)0xC17997C = ((*(float *)((t33 + 0x18))) + 100.0f);
        }
    } else {
        *(unsigned int *)0xC179974 = 0x1;
    }
    camSetEye(0xC179978, 0x2);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0xC0965F0); }
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + 5.0f);
    if (((*(int *)0xC179998) & 2) != 0) {
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + 50.0f);
    }
    nlCalcPoint(((int)stk + 4), ((int)stk + 4));
    camSetTarget(((int)stk + 4), 0x2);
    nlPopMatrix(0x1);
    t64 = *(int *)0xC179990;
    t65 = *(int *)0xC179994;
    *(unsigned int *)0xC179990 = (t64 + t65);
    if (((int)(t64 + t65) >= (int)0xFFFFE800) && (t66 = *(int *)0xC179990, (int)t66 <= (int)0x1800)) {
    } else {
        t69 = *(int *)0xC179994;
        if ((int)t69 < 0) {
            *(unsigned int *)0xC179994 = ((*(int *)0xC179994) + 0x1);
        } else {
            if ((int)t69 > 0) {
                *(unsigned int *)0xC179994 = ((*(int *)0xC179994) - 1);
            }
        }
    }
    camSetAngles(0x0, 0x0, (*(int *)0xC179990), 0x0);
    if ((0x1 & (*(int *)0xC179998)) != 0) {
        u83 = *(float *)0xC0290DC;
        u84 = *(float *)0xC0290E0;
        u85 = ((u83 - t3) / u84);
        if (0.0f > ((u83 - t3) / u84)) {
            u85 = 0.0f;
        }
        u88 = 27.0f;
        u88 = u88 + (*(float *)0xC0290E4) * u85;
        *(float *)0xC1798A4 = u88;
    } else {
        *(float *)0xC1798A4 = (*(float *)0xC0290E8);
    }
}
