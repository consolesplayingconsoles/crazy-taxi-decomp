/* Straight-line functions with calls and guards (batch gen_vu): generated from the code and checked by tests. Calls are
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
    int t5;
    int t6;
    int t7;
    float u8;
    int t9;
    float u10;
    int t11;
    float u39;
    int t20;
    int t21;
    float u30;
    int t22;
    float u23;
    int t24;
    float u16;
    float u17;
    int stk[9] = {0};

    *(unsigned int *)(((int)stk + 4)) = a4;
    nlSubVector3op((((int)stk + 4) + 0x4), (a4 + 0x4), 0xC2AD004);
    *(float *)(((int)stk + 12)) = 0.0f;
    nlUnitVector((((int)stk + 4) + 0x4));
    t2 = nlInnerProduct(0xC2AD1E0, (((int)stk + 4) + 0x4));
    t3 = nlInnerProduct(0xC2AD1F8, (((int)stk + 4) + 0x4));
    t4 = nlArcTan2(_builtin_fabsf(t2), t3);
    t5 = *(signed char *)0xC2AD1DF;
    if ((t5 & 32) != 0) {
        t6 = *(int *)0xC2AD020;
        t7 = *(int *)((t6 + 0x0));
        u8 = 15045.0f;
        u16 = u8;
        u17 = ((float)(t7 - 1) * (float)t4);
    } else {
        t9 = *(int *)0xC2AD020;
        u10 = 11686.0f;
        t11 = *(int *)((t9 + 0x0));
        u16 = u10;
        u17 = ((float)(t11 - 1) * (float)t4);
    }
    u39 = 0.0f;
    if (0.0f > (u17 / u16)) {
    } else {
        t20 = *(int *)0xC2AD020;
        t21 = *(int *)((t20 + 0x0));
        u30 = (u17 / u16);
        if (!(((float)t21 + (-1.0f)) > (u17 / u16))) {
            t22 = *(int *)0xC2AD020;
            u23 = -2.0f;
            t24 = *(int *)((t22 + 0x0));
            u30 = ((float)t24 + u23);
        }
        u39 = u30;
    }
    return u39;
}

