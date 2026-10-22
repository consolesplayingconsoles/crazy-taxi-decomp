/* Straight-line functions with calls and guards (batch gen_zp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c077210(int, int);
int MultiRot4Vec(int);
int SetCameraAngleRatio(float, float);
int SetCameraAngleVelocity(int, int, int);
int SetCameraMode(int);
int SetCameraPosRatio(float, float);
int SetCameraPosVelocity(int);
int camSetAngles(int, int, int, int);
int camSetEye(int, int);
int camSetMode(int);
int camSetTarget(int, int);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlSqrt(int, int);
int nlTranslateV(int);
int ExecStartCamera(void);

int ExecStartCamera(void)
{
    int t0;
    int t74;
    int t12;
    int t16;
    int t28;
    int t71;
    int t68;
    int t57;
    int t46;
    int t30;
    int stk[14] = {0};

    t0 = *(int *)0xC17999C;
    t74 = t0;
    if (t0 == 4) {
    } else {
        nlPushUnitMatrix();
        nlTranslateV(0xC179144);
        MultiRot4Vec(0xC1790FC);
        if ((*(int *)0xC17999C) == 0) {
            nlAddVector(0xC1799A4, 0xC1799BC);
            nlSqrt(0xC1799A4, (((int)stk + 4) + 0xC));
            camSetEye((((int)stk + 4) + 0xC), 0x0);
            camSetTarget(0xC1799B0, 0x0);
        }
        t12 = *(int *)0xC1799A0;
        *(unsigned int *)0xC1799A0 = (t12 - 1);
        if ((int)(t12 - 1) >= 0) {
            *(float *)(((int)stk + 16)) = 0.0f;
            *(float *)(((int)stk + 20)) = 5.0f;
            *(float *)(((int)stk + 24)) = 0.0f;
            nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC));
            camSetTarget((((int)stk + 4) + 0xC), 0x0);
            t71 = (nlPopMatrix(0x1));
        } else {
            t16 = *(int *)0xC17999C;
            *(unsigned int *)0xC17999C = (t16 + 0x1);
            if ((t16 + 0x1) != 0) {
                if ((t16 + 0x1) != 1) {
                    if ((t16 + 0x1) != 2) {
                        if ((t16 + 0x1) != 3) {
                            nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC));
                            FUN_0c077210(((int)stk + 4), ((int)stk + 4));
                            camSetEye((((int)stk + 4) + 0xC), 0x0);
                            SetCameraPosRatio(0.0f, 1.0f);
                            SetCameraPosVelocity(((int)stk + 4));
                            *(float *)(((int)stk + 16)) = 0.0f;
                            *(float *)(((int)stk + 20)) = 5.0f;
                            *(float *)(((int)stk + 24)) = 0.0f;
                            nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC));
                            camSetTarget((((int)stk + 4) + 0xC), 0x0);
                            t30 = (nlPopMatrix(0x1));
                        } else {
                            *(float *)(((int)stk + 16)) = 0.0f;
                            *(float *)(((int)stk + 20)) = (1.0f + 1.0f);
                            *(float *)(((int)stk + 24)) = -20.0f;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0xC0965F0); }
                            camSetMode(0x0);
                            nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC));
                            camSetEye((((int)stk + 4) + 0xC), 0x0);
                            *(unsigned int *)0xC1799A0 = 0x2710;
                            t28 = nlPopMatrix(0x1);
                            *(unsigned int *)0xC17999C = ((*(int *)0xC17999C) + 0x1);
                            t30 = t28;
                        }
                        t46 = t30;
                    } else {
                        *(float *)(((int)stk + 16)) = -20.0f;
                        *(float *)(((int)stk + 20)) = 10.0f;
                        *(float *)(((int)stk + 24)) = 10.0f;
                        *(float *)(((int)stk + 4)) = 0.0f;
                        *(float *)(((int)stk + 8)) = 0.0f;
                        *(float *)(((int)stk + 12)) = -0.399999976f;
                        camSetAngles(0xF800, ((unsigned short)(*(short *)0xC179152) + 0xC000), 0x0, 0x0);
                        SetCameraAngleVelocity(0x0, 0xFFFFFFEB, 0x0);
                        SetCameraAngleRatio(0.0f, 1.04999995f);
                        SetCameraMode(0x0);
                        *(float *)0xC1798A4 = 70.0f;
                        *(unsigned int *)0xC1799A0 = 0x46;
                        nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC));
                        FUN_0c077210(((int)stk + 4), ((int)stk + 4));
                        camSetEye((((int)stk + 4) + 0xC), 0x0);
                        SetCameraPosRatio(0.0f, 1.0f);
                        SetCameraPosVelocity(((int)stk + 4));
                        *(float *)(((int)stk + 16)) = 0.0f;
                        *(float *)(((int)stk + 20)) = 5.0f;
                        *(float *)(((int)stk + 24)) = 0.0f;
                        nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC));
                        camSetTarget((((int)stk + 4) + 0xC), 0x0);
                        t46 = (nlPopMatrix(0x1));
                    }
                    t57 = t46;
                } else {
                    *(float *)(((int)stk + 16)) = 0.0f;
                    *(float *)(((int)stk + 20)) = 15.0f;
                    *(float *)(((int)stk + 24)) = 10.0f;
                    *(float *)(((int)stk + 4)) = 0.5f;
                    *(float *)(((int)stk + 8)) = 0.299999982f;
                    *(float *)(((int)stk + 12)) = 0.299999982f;
                    *(unsigned int *)0xC1799A0 = 0x28;
                    nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC));
                    FUN_0c077210(((int)stk + 4), ((int)stk + 4));
                    camSetEye((((int)stk + 4) + 0xC), 0x0);
                    SetCameraPosRatio(0.0f, 1.0f);
                    SetCameraPosVelocity(((int)stk + 4));
                    *(float *)(((int)stk + 16)) = 0.0f;
                    *(float *)(((int)stk + 20)) = 5.0f;
                    *(float *)(((int)stk + 24)) = 0.0f;
                    nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC));
                    camSetTarget((((int)stk + 4) + 0xC), 0x0);
                    t57 = (nlPopMatrix(0x1));
                }
                t68 = t57;
            } else {
                *(unsigned int *)0xC1799A0 = 0x78;
                nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC));
                FUN_0c077210(((int)stk + 4), ((int)stk + 4));
                camSetEye((((int)stk + 4) + 0xC), 0x0);
                SetCameraPosRatio(0.0f, 1.0f);
                SetCameraPosVelocity(((int)stk + 4));
                *(float *)(((int)stk + 16)) = 0.0f;
                *(float *)(((int)stk + 20)) = 5.0f;
                *(float *)(((int)stk + 24)) = 0.0f;
                nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC));
                camSetTarget((((int)stk + 4) + 0xC), 0x0);
                t68 = (nlPopMatrix(0x1));
            }
            t71 = t68;
        }
        t74 = t71;
    }
    return t74;
}
