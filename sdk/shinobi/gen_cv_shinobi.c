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


int gdFsStrcmp_tail_0c15fa1c(int a4, int a5)
{
    int t0;
    int t1;

    t0 = *(signed char *)((a4 + 0x0));
    if (t0 == 0) {
        t1 = *(signed char *)((a5 + 0x0));
        if (t1 != 0) {
            return 0x0;
        }
        return 0x1;
    }
    return ((int (*)(int))(0xC15FA14))(a4);
}


