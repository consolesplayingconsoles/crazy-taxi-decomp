/* Straight-line functions with calls and guards (batch gen_aft): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SetCameraMode(int);
int camRestore(void);
int camSetEye(int, int);
int camSetTarget(int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlSubVector3op(int, int, int);
int camGetOnReturn(void);

int camGetOnReturn(void)
{
    int t1;
    int t15;
    float u4;
    int t10;
    int t12;
    int stk[13];

    t1 = *(signed char *)(((*(int *)0xC2AD54C) + 0x149));
    t15 = t1;
    if ((t1 & 128) == 0) {
        SetCameraMode(0x1);
        nlSubVector3op((((int)stk + 4) + 0x18), 0xC2AD554, 0xC179840);
        u4 = *(float *)0xC064B4C;
        nlGetAverageVector(0xC179840, (((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC), 1.0f, u4);
        camSetEye((((int)stk + 4) + 0xC), 0x1);
        nlSubVector3op((((int)stk + 4) + 0x18), 0xC2AD560, 0xC17984C);
        nlGetAverageVector(0xC17984C, (((int)stk + 4) + 0x18), ((int)stk + 4), 1.0f, u4);
        camSetTarget(((int)stk + 4), 0x1);
        t10 = *(int *)0xC2AD590;
        t12 = t10;
        if ((t10 & 1) == 0) {
            t12 = (camRestore());
        }
        t15 = t12;
    }
    return t15;
}
