/* Straight-line functions with calls and guards (batch gen_le): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int BigOneFollowTaxi(float);
int BigOneSwimMove(void);
int ResetFadeColor(void);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlTranslateV(int);
int BigOnePut(float f4);

int BigOnePut(float f4)
{
    nlPushUnitMatrix();
    BigOneFollowTaxi(f4);
    BigOneSwimMove();
    nlTranslateV(0xC2AEC20);
    nlRotateAY((*(int *)0xC2AEC30));
    nlTranslateV(0xC2AEC40);
    nlRotateAZ((*(int *)0xC2AEC54));
    nlRotateAY((*(int *)0xC2AEC50));
    nlRotateAX((*(int *)0xC2AEC4C));
    nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
    nlObjPutUseViewMatrix(0xC13F898);
    ResetFadeColor();
    return nlPopMatrix(0x1);
}
