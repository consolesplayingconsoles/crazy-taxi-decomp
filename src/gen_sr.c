/* Straight-line functions with calls and guards (batch gen_sr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c077210(int, int);
int MultiRot4Vec(int);
int SetCameraMode(int);
int SetCameraPosRatio(float, float);
int SetCameraPosVelocity(int);
int camSetEye(int, int);
int camSetMode(int);
int camSetTarget(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlSqrt(int, int);
int nlTranslateV(int);
int SetStartCamera(void);

int SetStartCamera(void)
{
    int stk[10] = {0};

    *(unsigned int *)0xC17999C = 0xFFFFFFFF;
    *(unsigned int *)0xC1799A0 = 0x0;
    *(float *)0xC1799A4 = -16.0f;
    *(float *)0xC1799A8 = 1.0f;
    *(float *)0xC1799AC = 30.0f;
    *(float *)0xC1799BC = 0.199999988f;
    *(float *)0xC1799C0 = -0.00999999978f;
    *(float *)0xC1799C4 = 0.0f;
    nlPushUnitMatrix();
    nlTranslateV(0xC179144);
    MultiRot4Vec(0xC1790FC);
    nlSqrt(0xC1799A4, (((int)stk + 4) + 0xC));
    FUN_0c077210(0xC1799BC, ((int)stk + 4));
    camSetEye((((int)stk + 4) + 0xC), 0x0);
    SetCameraPosRatio(0.0f, 1.0f);
    SetCameraPosVelocity(((int)stk + 4));
    *(float *)0xC1799B0 = 0.0f;
    *(float *)0xC1799B4 = 5.0f;
    *(float *)0xC1799B8 = 0.0f;
    nlSqrt(0xC1799B0, 0xC1799B0);
    camSetTarget(0xC1799B0, 0x0);
    SetCameraMode(0x1);
    camSetMode(0x8);
    *(float *)0xC1798A4 = 60.0f;
    return (nlPopMatrix(0x1));
}
