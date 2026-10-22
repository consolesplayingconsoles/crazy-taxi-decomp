/* Straight-line functions with calls and guards (batch gen_pb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlFastSinCos(int, int, int);
int nlObjPutUseViewMatrix(int);
int nlTriPutSetAttrib(int, int, int, int, int, int, int, int, int, int, float, float, float, float, float, float, float, float);
int nlTriPutSetAttribFaceColor(int, float, float, float);
int nlTriPutSetClipping(int, float, float, float, float);
int nlTriPutSetPoint(int, int, float, float, float, float, float, float, float, float);
int nlTriPutTextureInit(int, int, int);
int PutColliPole(int a4);

int PutColliPole(int a4)
{
    float u9;
    float u10;
    int t15;
    int t16;
    int t17;
    float u19;
    float u23;
    float u24;
    float u26;
    float u33;
    float u34;
    float u37;
    int stk[23] = {0};

    if ((*(int *)0xC0ED8A0) != 0) {
        nlTriPutTextureInit(0xC270E78, 0xFFFFFFFF, 0x0);
        nlTriPutSetAttrib(0xC270E78, 0x2, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x22, 0.5f, 0.5f, 1.0f, 0.0f, 0.699999988f, 0.0f, 0.0f, 0.0f);
        *(unsigned int *)0xC270E98 = ((*(int *)0xC270E98) | 0xC0);
        *(unsigned int *)0xC0ED8A0 = 0x0;
    }
    u9 = 0.0f;
    u10 = 0.699999988f;
    if (((*(int *)((a4 + 0x18))) & 1) != 0) {
        u9 = 0.699999988f;
        u10 = 0.0f;
    }
    nlTriPutSetAttribFaceColor(0xC270E78, 1.0f, u9, u10);
    *(float *)(((int)stk + 36)) = (*(float *)((a4 + 0x8)));
    *(float *)(((int)stk + 40)) = (*(float *)((a4 + 0xC)));
    t15 = 0x0;
    t16 = 0x0;
    t17 = 0x0;
    for (;;) {
        nlFastSinCos(t16, ((int)stk + 28), (((int)stk + 28) + 0x4));
        u19 = *(float *)((a4 + 0x10));
        u23 = (*(float *)(((int)stk + 36)));
        u23 = u23 + u19 * (*(float *)(((int)stk + 32)));
        u24 = *(float *)(((int)stk + 28));
        u26 = (*(float *)(((int)stk + 40)));
        u26 = u26 + u19 * u24;
        nlTriPutSetPoint(0xC270E78, t17, u23, (*(float *)((a4 + 0x14))), u26, (*(float *)(((int)stk + 32))), 0.0f, u24, 0.0f, 0.0f);
        nlTriPutSetPoint(0xC270E78, (t17 + 0x1), u23, (*(float *)((a4 + 0x18))), u26, (*(float *)(((int)stk + 32))), 0.0f, (*(float *)(((int)stk + 28))), 0.0f, 0.0f);
        t15 = (t15 + 0x1);
        t17 = (t17 + 0x2);
        t16 = (t16 + 0x1000);
        if ((int)t15 > (int)0x10) {
            break;
        }
    }
    u33 = *(float *)((a4 + 0x14));
    u34 = *(float *)((a4 + 0x18));
    u37 = (*(float *)((a4 + 0x10)));
    u37 = u37 + 0.5f * (u33 - u34);
    nlTriPutSetClipping(0xC270E78, (*(float *)(((int)stk + 36))), ((u33 + u34) * 0.5f), (*(float *)(((int)stk + 40))), u37);
    return (nlObjPutUseViewMatrix(0xC270E78));
}
