/* Straight-line functions with calls and guards (batch gen_wf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ExecAdvCameraChase(void);
int ExecAdvCameraFixed(void);
int ExecAdvCameraRandom(void);
int ResetSpark(void);
int SetCameraAngleRatio(float, float);
int SetCameraAngleVelocity(int, int, int);
int SetCameraDistance(float);
int SetCameraMode(int);
int SetCameraTargetRatio(float, float);
int camSetAngles(int, int, int, int);
int camSetTarget(int, int);
int ExecAdvCamera(void);

int ExecAdvCamera(void)
{
    int t0;
    float u1;
    int t2;
    int t6;
    int t8;
    int t10;
    int t11;
    int t13;
    float u17;
    int t30;
    int t7;
    int t15;
    int stk[9] = {0};

    t0 = *(int *)0xC0E4E38;
    if (t0 != 1) {
        if (t0 != 2) {
            if (t0 != 3) {
                if (t0 != 4) {
                    return t0;
                }
                return ExecAdvCameraFixed();
            }
            return ExecAdvCameraRandom();
        }
        return ExecAdvCameraChase();
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0xC179144); }
    u1 = *(float *)(((int)stk + 8));
    *(float *)(((int)stk + 8)) = (u1 + 5.0f);
    t2 = *(int *)0xC179974;
    if (t2 != 0) {
        SetCameraDistance(60.0f);
        camSetTarget(((int)stk + 4), 0x0);
        SetCameraTargetRatio(0.299999982f, 0.299999982f);
        t6 = *(int *)0xC2A4E50;
        if ((t6 == 1) && (t7 = *(int *)0xC1EE20C, t7 == 1)) {
            t8 = *(short *)0xC179152;
            camSetAngles(0x0, ((unsigned short)t8 - 24576), 0x0, 0x0);
            t10 = *(short *)0xC179152;
            t15 = ((unsigned short)t10 - 24576);
        } else {
            t11 = *(short *)0xC179152;
            camSetAngles(0x0, (unsigned short)t11, 0x0, 0x0);
            t13 = *(short *)0xC179152;
            t15 = (unsigned short)t13;
        }
        camSetAngles(0xFFFFC000, t15, 0xFFFFD000, 0x1);
        u17 = 1e-05f;
        SetCameraAngleRatio(u17, 1.0f);
        SetCameraAngleVelocity(0x8, 0x90, 0x10);
        SetCameraMode(0x2);
        ResetSpark();
        *(unsigned int *)0xC179974 = 0x0;
    }
    t30 = camSetTarget(((int)stk + 4), 0x2);
    return t30;
}
