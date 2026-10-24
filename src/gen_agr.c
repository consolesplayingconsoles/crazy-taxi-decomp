/* Straight-line functions with calls and guards (batch gen_agr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Put2DObjUp(int, float, float, float);
int ResetFadeColor(void);
int nlAddVector(int, int);
int nlCloseEvent(int);
int nlObjPutSetFadeColorBase(float, float, float);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
float nlRandom(void);
int nlScaleVector(int, int, float);
int nlTranslateV(int);
int ExecBubble(int a4);

int ExecBubble(int a4)
{
    int t0;
    float u5;
    float u14;
    float u15;
    float u18;
    float u22;

    t0 = *(int *)((a4 + 0x30));
    *(float *)0xC4634A4 = ((float)t0 / 10.0f);
    if (((float)t0 / 10.0f) > 1.0f) {
        *(float *)0xC4634A4 = 1.0f;
    }
    nlPushUnitMatrix();
    nlTranslateV((a4 + 0x14));
    nlObjPutSetFadeColorBase(1.0f, 1.0f, 1.0f);
    u5 = *(float *)((a4 + 0x2C));
    Put2DObjUp(0xC463460, u5, u5, 4.0f);
    ResetFadeColor();
    nlPopMatrix(0x1);
    nlAddVector((a4 + 0x14), (a4 + 0x20));
    if (!((*(float *)0xC274258) > (*(float *)((a4 + 0x18))))) {
        return nlCloseEvent(a4);
    }
    nlScaleVector((a4 + 0x20), (a4 + 0x20), 0.9f);
    u14 = (-0.5f);
    u15 = 0.099999994f;
    u18 = (*(float *)(((a4 + 0x20) + 0x0)));
    u18 = u18 + u15 * ((nlRandom()) + u14);
    *(float *)(((a4 + 0x20) + 0x0)) = u18;
    *(float *)((a4 + 0x24)) = ((*(float *)((a4 + 0x24))) + 0.049999997f);
    u22 = (*(float *)(((a4 + 0x28) + 0x0)));
    u22 = u22 + u15 * ((nlRandom()) + u14);
    *(float *)(((a4 + 0x28) + 0x0)) = u22;
    *(float *)((a4 + 0x2C)) = ((*(float *)((a4 + 0x2C))) + 0.00999999978f);
    return 0x2C;
}
