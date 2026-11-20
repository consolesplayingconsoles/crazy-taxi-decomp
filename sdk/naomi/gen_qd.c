/* Straight-line functions with calls and guards (batch gen_qd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlCalcVector(int, int);
int nlTransposeMatrix(void);
int nlMakeFastModelProjectMatrix(void);
int nlMvLoadFlatMatrix(void);
int nlMvObjPutSub(int, int);
int kmSetCheapShadowMode(int);
int nlInvertMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlCalcPoint(int, int);
int nlMvObjPut(int a4, int a5);

int nlMvObjPut(int a4, int a5)
{
    float u20;
    int t28;
    int t30;

    nlPushMatrix(0x0);
    kmSetCheapShadowMode((*(int *)((a5 + 0x10))));
    *(float *)0xC2B7678 = (*(float *)((a5 + 0x18)));
    *(float *)0xC2B767C = (*(float *)((a5 + 0x1C)));
    *(float *)0xC2B7680 = (*(float *)((a5 + 0x20)));
    nlTransposeMatrix();
    nlCalcVector(0xC2B7678, 0xC2B7678);
    nlTransposeMatrix();
    if (((*(int *)((a5 + 0x0))) & 1) != 0) {
        nlPushMatrix(0x0);
        nlInvertMatrix(0x0);
        nlCalcPoint((a5 + 0x18), 0xC2B7688);
        nlPopMatrix(0x1);
    }
    nlMakeFastModelProjectMatrix();
    nlMvLoadFlatMatrix();
    if (((*(int *)((a5 + 0x0))) & 1) == 0) {
        u20 = *(float *)((a5 + 0x14));
        *(float *)0xC2B7698 = ((*(float *)0xC2B7678) * (-u20));
        *(float *)0xC2B769C = ((*(float *)0xC2B767C) * (-u20));
        *(float *)0xC2B76A0 = ((*(float *)0xC2B7680) * (-u20));
        nlCalcVector(0xC2B7698, 0xC2B7698);
    }
    t28 = a4;
    for (;;) {
        if ((*(int *)((t28 + 0x0))) == 0) {
            break;
        }
        *(unsigned int *)0xC2B7684 = 0x0;
        t30 = *(int *)((t28 + 0x0));
        t28 = (t28 + 0x4);
        nlMvObjPutSub(t30, a5);
    }
    return nlPopMatrix(0x1);
}
