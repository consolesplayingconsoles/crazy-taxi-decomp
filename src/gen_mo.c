/* Straight-line functions with calls and guards (batch gen_mo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Put2DObjUp(int, float, float);
int ResetFadeColor(void);
int SetFadeColorBaseMulti(float, float, float);
int nlAddVector(int, int);
int nlCloseEvent(int);
int nlObjPutSetFadeColorBase(float, float, float);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlScaleVector(int, int, float);
int nlTranslateV(int);
int ExecEffectSmoke(int a4);

int ExecEffectSmoke(int a4)
{
    int t2;
    int t5;
    float u7;
    float u11;
    float u14;
    int t23;
    float u29;

    t2 = *(int *)((((*(int *)((a4 + 0x34))) << 2) + 0xC0EDA98));
    *(float *)(((t2 + 0x44) + 0x0)) = ((float)(*(int *)((a4 + 0x30))) / 30.0f);
    nlPushUnitMatrix();
    nlTranslateV((a4 + 0x14));
    t5 = *(int *)((a4 + 0x38));
    if (t5 == 2) {
        SetFadeColorBaseMulti(0.799999952f, 0.599999964f, 0.299999982f);
        u7 = *(float *)((a4 + 0x2C));
        Put2DObjUp(t2, u7, (u7 * 0.699999988f));
        ResetFadeColor();
    } else {
        if (t5 == 1) {
            nlObjPutSetFadeColorBase(0.799999952f, 0.799999952f, 1.0f);
            u11 = *(float *)((a4 + 0x2C));
            Put2DObjUp(t2, u11, (u11 * 0.699999988f));
            ResetFadeColor();
        } else {
            u14 = *(float *)((a4 + 0x2C));
            Put2DObjUp(t2, u14, (u14 * 0.599999964f));
        }
    }
    nlPopMatrix(0x1);
    t23 = *(int *)((a4 + 0x30));
    *(unsigned int *)((a4 + 0x30)) = (t23 - 1);
    if ((int)(t23 - 1) <= 0) {
        return nlCloseEvent(a4);
    }
    nlAddVector((a4 + 0x14), (a4 + 0x20));
    nlScaleVector((a4 + 0x20), (a4 + 0x20), 0.949999988f);
    *(float *)((a4 + 0x18)) = ((*(float *)((a4 + 0x18))) + 0.049999997f);
    u29 = 0.0899999961f;
    if ((*(int *)((a4 + 0x38))) == 0) {
        u29 = 0.0799999982f;
    }
    *(float *)((a4 + 0x2C)) = ((*(float *)((a4 + 0x2C))) + u29);
    return 0x2C;
}
