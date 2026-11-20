/* Straight-line functions with calls and guards (batch gen_cv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int HomingPosX(int, float, float);
int nd_SprPut(int, int, float, float);
int gdFsStrncmpi(int, int, int);
int gdFsGetTokenSize(int, int);
int ResetFadeColor(void);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int gdFsGetLE4(int);
int gdFsMemcpy(int, int, int);
int gdFsReadWG(int, int, int);
float nlInnerProduct(int, int);
int nlObjPutSetFadeColor(float, float, float);
int nlOuterProduct(int, int, int);
float nlUnitVector(int);
int nlObjPutSetSpecularEyeDirectionV(int a4);
int gdFsStrcmp_tail_0c15fa1c(int a4, int a5);
int kmChangeContextSuperSample(int a4);
int _add(int a4, int a5, int a6);
void nlRotateV(int a4, int a5);
int _rnd(int a4, int a5);
int gdFsSearchPath_dds(int a4, int a5, int a6, int a7, int a8);
void Put_ReadySetGo(int a4);

int nlObjPutSetSpecularEyeDirectionV(int a4)
{
    float u0;
    float u1;
    float u2;

    u0 = *(float *)((a4 + 0x8));
    u1 = *(float *)((a4 + 0x0));
    u2 = *(float *)((a4 + 0x4));
    return ((int (*)(int, float, float, float))(0xC07ADB0))(a4, u1, u2, u0);
}


void nlRotateV(int a4, int a5)
{
    float t1;
    int t2;
    float t3;
    int t4;
    float u5;
    float u6;
    float u7;
    int t8;
    float u14;
    float u10;
    int stk[8] = {0};

    *(unsigned int *)(((int)stk + 4)) = a5;
    nlOuterProduct(a4, a5, (((int)stk + 4) + 0x4));
    t1 = nlUnitVector((((int)stk + 4) + 0x4));
    t2 = *(int *)(((int)stk + 4));
    t3 = nlInnerProduct(a4, t2);
    if (t1 != 0.0f) {
        t4 = ((int (*)(int, float, float))(0xC0784A0))((((int)stk + 4) + 0x4), t1, t3);
    } else {
        if (0.0f > t3) {
            u5 = *(float *)((a4 + 0x4));
            *(float *)(((int)stk + 8)) = u5;
            u6 = *(float *)((a4 + 0x8));
            *(float *)(((int)stk + 12)) = u6;
            u7 = *(float *)((a4 + 0x0));
            *(float *)(((int)stk + 16)) = u7;
            t8 = ((int (*)(int, float, float))(0xC0784A0))((((int)stk + 4) + 0x4), 0.0f, (-1.0f));
        } else {
            u10 = t3;
        }
        u14 = u10;
    }
    return;
}


