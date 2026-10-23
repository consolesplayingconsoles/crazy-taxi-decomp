/* Straight-line functions with calls and guards (batch gen_acz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SetCameraMode(int);
int camRestore(void);
int camSetEye(int, int);
int camSetTarget(int, int);
int nlGetAverageVector(int, int, int, float, float);
float nlInnerProduct(int, int);
int nlSubVector3op(int, int, int);
int nlUnitVector(int);
int camGetOnMid(void);

int camGetOnMid(void)
{
    float t8;
    float u9;
    float u12;
    float u14;
    float u17;
    float u21;
    int t35;
    int t37;
    int t30;
    int t31;
    int stk[19];

    SetCameraMode(0x1);
    nlSubVector3op((((int)stk + 4) + 0x18), ((*(int *)0xC2AD54C) + 0x4), ((*(int *)0xC2AD548) + 0x4));
    nlUnitVector((((int)stk + 4) + 0x18));
    nlGetAverageVector(((*(int *)0xC2AD548) + 0x4), (((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC), 1.0f, (*(float *)0xC064A24));
    t8 = nlInnerProduct(0xC2AD1F8, (((int)stk + 4) + 0x18));
    u9 = (t8 * (-1.0f));
    if (t8 > 0.0f) {
        u9 = 0.0f;
    }
    u12 = *(float *)0xC064A30;
    u14 = (*(float *)0xC064A34);
    u14 = u14 + u12 * u9;
    nlGetAverageVector((((int)stk + 4) + 0xC), 0xC2AD1EC, (((int)stk + 4) + 0xC), 1.0f, u14);
    nlSubVector3op((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC), 0xC179840);
    u17 = *(float *)0xC064A40;
    nlGetAverageVector(0xC179840, (((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC), 1.0f, u17);
    camSetEye((((int)stk + 4) + 0xC), 0x1);
    u21 = *(float *)0xC064A48;
    nlGetAverageVector(((*(int *)0xC2AD548) + 0x4), ((*(int *)0xC2AD54C) + 0x4), ((int)stk + 4), u21, u21);
    nlGetAverageVector(((int)stk + 4), 0xC2AD1EC, ((int)stk + 4), 1.0f, u12);
    nlSubVector3op((((int)stk + 4) + 0x18), ((int)stk + 4), 0xC17984C);
    nlGetAverageVector(0xC17984C, (((int)stk + 4) + 0x18), ((int)stk + 4), 1.0f, u17);
    camSetTarget(((int)stk + 4), 0x1);
    if (((*(int *)(((*(int *)0xC2AD54C) + 0x20))) == 2) && (t30 = *(int *)0xC2AD54C, t31 = *(int *)((t30 + 0x24)), t31 == 2)) {
        *(unsigned int *)0xC2AD57C = 0x4;
    }
    t35 = *(int *)0xC2AD590;
    t37 = t35;
    if ((t35 & 1) == 0) {
        t37 = (camRestore());
    }
    return t37;
}
