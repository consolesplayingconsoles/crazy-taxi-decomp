/* Straight-line functions with calls and guards (batch gen_acz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SetCameraMode(int);
int camRestore(void);
int camSetEye(int, int);
int camSetTarget(int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlSubVector3op(int, int, int);
int camGetOnNear(void);

int camGetOnNear(void)
{
    int t18;
    int t20;
    int t13;
    int t14;
    int stk[15] = {0};

    SetCameraMode(0x1);
    nlGetAverageVector(0xC2AD554, 0xC2AD1F8, (((int)stk + 4) + 0x18), 1.0f, 20.0f);
    nlGetAverageVector((((int)stk + 4) + 0x18), 0xC2AD1EC, (((int)stk + 4) + 0x18), 1.0f, 10.0f);
    nlSubVector3op((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x18), 0xC179840);
    nlGetAverageVector(0xC179840, (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x18), 1.0f, 0.099999994f);
    camSetEye((((int)stk + 4) + 0x18), 0x1);
    nlGetAverageVector(((*(int *)0xC2AD54C) + 0x4), 0xC2AD1EC, ((int)stk + 4), 1.0f, 10.0f);
    nlSubVector3op((((int)stk + 4) + 0xC), ((int)stk + 4), 0xC17984C);
    nlGetAverageVector(0xC17984C, (((int)stk + 4) + 0xC), ((int)stk + 4), 1.0f, 0.299999982f);
    camSetTarget(((int)stk + 4), 0x1);
    if (((*(int *)(((*(int *)0xC2AD54C) + 0x20))) == 2) && (t13 = *(int *)0xC2AD54C, t14 = *(int *)((t13 + 0x24)), t14 == 2)) {
        *(unsigned int *)0xC2AD57C = 0x4;
    }
    t18 = *(int *)0xC2AD590;
    t20 = t18;
    if ((t18 & 1) == 0) {
        t20 = (camRestore());
    }
    return t20;
}
