/* Straight-line functions with calls and guards (batch gen_aep): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlArcTan2(float, float);
float nlInnerProduct(int, int);
int nlSubVector3op(int, int, int);
int nlUnitVector(int);
float Drv_FacePsgFrame(int a4);

float Drv_FacePsgFrame(int a4)
{
    float t2;
    float t3;
    int t4;
    float u39;
    float u30;
    float u16;
    float u17;
    int stk[9];

    *(unsigned int *)(((int)stk + 4)) = a4;
    nlSubVector3op((((int)stk + 4) + 0x4), (a4 + 0x4), 0xC2AD004);
    *(float *)(((int)stk + 12)) = 0.0f;
    nlUnitVector((((int)stk + 4) + 0x4));
    t2 = nlInnerProduct(0xC2AD1E0, (((int)stk + 4) + 0x4));
    t3 = nlInnerProduct(0xC2AD1F8, (((int)stk + 4) + 0x4));
    t4 = nlArcTan2(_builtin_fabsf(t2), t3);
    if (((*(signed char *)0xC2AD1DF) & 32) != 0) {
        u16 = (*(float *)0xC063580);
        u17 = ((float)((*(int *)(((*(int *)0xC2AD020) + 0x0))) - 1) * (float)t4);
    } else {
        u16 = (*(float *)0xC063584);
        u17 = ((float)((*(int *)(((*(int *)0xC2AD020) + 0x0))) - 1) * (float)t4);
    }
    u39 = 0.0f;
    if (0.0f > (u17 / u16)) {
    } else {
        u30 = (u17 / u16);
        if (!(((float)(*(int *)(((*(int *)0xC2AD020) + 0x0))) + (-1.0f)) > (u17 / u16))) {
            u30 = ((float)(*(int *)(((*(int *)0xC2AD020) + 0x0))) + (*(float *)0xC063588));
        }
        u39 = u30;
    }
    return u39;
}
