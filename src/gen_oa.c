/* Straight-line functions with calls and guards (batch gen_oa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetRotVec(int);
int Move_Balloon(int);
int MultiRot4Vec(int);
int ResetFadeColor(void);
int nlObjPutSetFadeColorBase(float, float, float);
int nlObjPutUseViewMatrixTrnsl(int, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotate(int, int);
int nlScale(float, float, float);
int nlScaleVector(int, int, float);
float nlScalor(int);
int nlSetScaleFactor(float);
int nlTranslateV(int);
int Exec_Balloon(int a4);

int Exec_Balloon(int a4)
{
    float t2;
    int t15;
    float u20;
    float u22;
    float u25;
    int t29;

    nlPushMatrix(0x0);
    nlTranslateV((a4 + 0x48));
    t2 = nlScalor((a4 + 0x30));
    if (t2 > (*(float *)0xC05EE40)) {
        nlRotate((a4 + 0x30), ((int)(((t2 * (*(float *)0xC05EE44)) / (*(float *)0xC05EE48)) + (*(float *)0xC05EE4C)) & 0xFFFF));
    }
    MultiRot4Vec((a4 + 0x18));
    GetRotVec((a4 + 0x18));
    t15 = (int)((int)(*(int *)((a4 + 0x14))) % (int)0xA);
    nlObjPutSetFadeColorBase((*(float *)((((signed char)(((t15 << 1) + t15) << 2) + 0xC0D2A78) + 0x0))), (*(float *)((((signed char)(((t15 << 1) + t15) << 2) + 0xC0D2A78) + 0x4))), (*(float *)((((signed char)(((t15 << 1) + t15) << 2) + 0xC0D2A78) + 0x8))));
    u20 = *(float *)0xC05EE6C;
    if ((*(int *)((a4 + 0x7C))) == 1) {
        u22 = *(float *)0xC05EE70;
        nlScale(u22, u22, u22);
        nlSetScaleFactor(u22);
        t29 = 0xC5E1998;
    } else {
        u25 = *(float *)0xC05EE80;
        nlScale(u25, u25, u25);
        nlSetScaleFactor(u25);
        t29 = 0xC46F828;
    }
    nlObjPutUseViewMatrixTrnsl(t29, u20);
    *(volatile int *)((a4 + 0x68));
    Move_Balloon(a4);
    nlScaleVector((a4 + 0x30), (a4 + 0x30), (*(float *)0xC05EE8C));
    nlPopMatrix(0x1);
    return ResetFadeColor();
}
