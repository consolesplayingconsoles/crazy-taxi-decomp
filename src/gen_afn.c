/* Straight-line functions with calls and guards (batch gen_afn): generated from the code and checked by tests. Calls are
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
struct o0_int { int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };


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
    int stk[18];

    SetCameraMode(0x1);
    nlSubVector3op((((int)stk + 0) + 0x18), (((((struct o4_int *)0xC2AD548)->v)) + 0x4), (((((struct o0_int *)0xC2AD548)->v)) + 0x4));
    nlUnitVector((((int)stk + 0) + 0x18));
    nlGetAverageVector((((((struct o0_int *)0xC2AD548)->v)) + 0x4), (((int)stk + 0) + 0x18), (((int)stk + 0) + 0xC), 1.0f, (-2e+01f));
    t8 = nlInnerProduct(0xC2AD1F8, (((int)stk + 0) + 0x18));
    u9 = (t8 * (-1.0f));
    if (t8 > 0.0f) {
        u9 = 0.0f;
    }
    u12 = 1e+01f;
    u14 = 15.0f;
    u14 = u14 + u12 * u9;
    nlGetAverageVector((((int)stk + 0) + 0xC), 0xC2AD1EC, (((int)stk + 0) + 0xC), 1.0f, u14);
    nlSubVector3op((((int)stk + 0) + 0x18), (((int)stk + 0) + 0xC), 0xC179840);
    u17 = 0.29999998f;
    nlGetAverageVector(0xC179840, (((int)stk + 0) + 0x18), (((int)stk + 0) + 0xC), 1.0f, u17);
    camSetEye((((int)stk + 0) + 0xC), 0x1);
    u21 = 0.5f;
    nlGetAverageVector((((((struct o0_int *)0xC2AD548)->v)) + 0x4), (((((struct o4_int *)0xC2AD548)->v)) + 0x4), ((int)stk + 0), u21, u21);
    nlGetAverageVector(((int)stk + 0), 0xC2AD1EC, ((int)stk + 0), 1.0f, u12);
    nlSubVector3op((((int)stk + 0) + 0x18), ((int)stk + 0), 0xC17984C);
    nlGetAverageVector(0xC17984C, (((int)stk + 0) + 0x18), ((int)stk + 0), 1.0f, u17);
    camSetTarget(((int)stk + 0), 0x1);
    if (((*(int *)((((((struct o4_int *)0xC2AD548)->v)) + 0x20))) == 2) && (t30 = (((struct o4_int *)0xC2AD548)->v), t31 = *(int *)((t30 + 0x24)), t31 == 2)) {
        (((struct o34_uint *)0xC2AD548)->v) = 0x4;
    }
    t35 = *(int *)0xC2AD590;
    t37 = t35;
    if ((t35 & 1) == 0) {
        t37 = (camRestore());
    }
    return t37;
}
