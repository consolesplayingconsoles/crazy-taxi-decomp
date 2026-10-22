/* Straight-line functions with calls and guards (batch gen_mp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Put2DObjUp(int, float, float);
int ResetFadeColor(void);
int nlAddVector(int, int);
int nlCloseEvent(int);
int nlObjPutSetFadeColorBase(float, float, float);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlScaleVector(int, int, float);
int nlTranslateV(int);
int ExecEffectSpray(int a4);

int ExecEffectSpray(int a4)
{
    int t0;
    float u1;
    float u7;
    int t11;

    t0 = *(int *)((a4 + 0x30));
    u1 = 10.0f;
    *(float *)0xC462ABC = ((float)t0 / u1);
    if (((float)t0 / u1) > 1.0f) {
        *(float *)0xC462ABC = 1.0f;
    }
    nlPushUnitMatrix();
    nlTranslateV((a4 + 0x14));
    nlObjPutSetFadeColorBase(1.0f, 1.0f, 1.0f);
    *(volatile float *)0xC036A70;
    u7 = *(float *)((a4 + 0x2C));
    Put2DObjUp(0xC462A78, u7, u7);
    ResetFadeColor();
    nlPopMatrix(0x1);
    t11 = *(int *)((a4 + 0x30));
    *(unsigned int *)((a4 + 0x30)) = (t11 - 1);
    if ((int)(t11 - 1) <= 0) {
        return nlCloseEvent(a4);
    }
    nlAddVector((a4 + 0x14), (a4 + 0x20));
    nlScaleVector((a4 + 0x20), (a4 + 0x20), (0.95f));
    *(float *)((a4 + 0x24)) = ((*(float *)((a4 + 0x24))) - 0.166665986f);
    *(float *)((a4 + 0x2C)) = ((*(float *)((a4 + 0x2C))) + 0.0799999982f);
    return 0x2C;
}
