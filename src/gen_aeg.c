/* Straight-line functions with calls and guards (batch gen_aeg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlGetTranslate(int);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMultiViewMatrix(void);
int nlScale(float, float, float);
int nlTranslateV(int);
int nlUnitMatrix(void);
int Put2DObjUp(int a4, float f4, float f5, float f6);

int Put2DObjUp(int a4, float f4, float f5, float f6)
{
    float u2;
    int stk[9];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(float *)(((int)stk + 0)) = f4;
    *(float *)(((int)stk + 8)) = f5;
    nlPushMultiViewMatrix();
    nlGetTranslate((((int)stk + 0) + 0xC));
    u2 = *(float *)(((int)stk + 20));
    if ((-f6) > u2) {
        nlUnitMatrix();
        nlScale(((u2 + f6) / u2), ((u2 + f6) / u2), ((u2 + f6) / u2));
        nlTranslateV((((int)stk + 0) + 0xC));
        nlScale((*(float *)(((int)stk + 0))), (*(float *)(((int)stk + 8))), 1.0f);
        nlObjPut((*(int *)(((int)stk + 4))));
    }
    return (nlPopMatrix(0x1));
}
