/* Straight-line functions with calls and guards (batch gen_ga): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlTranslateV(int);
int nd_CarSel_PutCar(int a4, int a5, int a6, int a7);

int nd_CarSel_PutCar(int a4, int a5, int a6, int a7)
{
    int t0;
    int t4;
    int t16;
    int stk[14];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned short *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 12)) = a7;
    t0 = *(int *)(((int)stk + 4));
    nlPushMatrix(0x0);
    nlObjPutUseViewMatrix((*(int *)((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0x0))));
    t4 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 20)) = (t4 << 2);
    nlObjPutUseViewMatrix((*(int *)((((*(int *)(((int)stk + 8))) << 2) + (*(int *)((0xC1309B8 + (t4 << 2))))))));
    nlObjPutUseViewMatrix((*(int *)((((*(int *)(((int)stk + 12))) << 2) + (*(int *)(((*(int *)(((int)stk + 20))) + 0xC1309E8)))))));
    nlPushMatrix(0x0);
    nlTranslateV((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0x14));
    t16 = *(short *)(((int)stk + 16));
    nlRotateAX((unsigned short)t16);
    nlObjPutUseViewMatrix((*(int *)((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0x4))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslateV((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0x20));
    nlRotateAX((unsigned short)t16);
    nlObjPutUseViewMatrix((*(int *)((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0x8))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslateV((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0x2C));
    nlRotateAX((unsigned short)t16);
    nlObjPutUseViewMatrix((*(int *)((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0xC))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslateV((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0x38));
    nlRotateAX((unsigned short)t16);
    nlObjPutUseViewMatrix((*(int *)((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0x10))));
    nlPopMatrix(0x1);
    return (nlPopMatrix(0x1));
}
