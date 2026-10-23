/* Straight-line functions with calls and guards (batch gen_akx): generated from the code and checked by tests. Calls are
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
    int stk[10];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(float *)(((int)stk + 4)) = f4;
    *(float *)(((int)stk + 12)) = f5;
    nlPushMultiViewMatrix();
    nlGetTranslate((((int)stk + 4) + 0xC));
    u2 = *(float *)(((int)stk + 24));
    if ((-f6) > u2) {
        nlUnitMatrix();
        nlScale(((u2 + f6) / u2), ((u2 + f6) / u2), ((u2 + f6) / u2));
        nlTranslateV((((int)stk + 4) + 0xC));
        nlScale((*(float *)(((int)stk + 4))), (*(float *)(((int)stk + 12))), 1.0f);
        nlObjPut((*(int *)(((int)stk + 8))));
    }
    return (nlPopMatrix(0x1));
}
