/* Straight-line functions with calls and guards (batch gen_vn): generated from the code and checked by tests. Calls are
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
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t9;
    int t10;
    int t11;
    int t12;
    int t16;
    int t18;
    int t24;
    int t30;
    int t36;
    int t39;
    int stk[14] = {0};

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned short *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 12)) = a7;
    t0 = *(int *)(((int)stk + 4));
    nlPushMatrix(0x0);
    t2 = *(int *)((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0x0));
    nlObjPutUseViewMatrix(t2);
    t4 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 20)) = (t4 << 2);
    t5 = *(int *)(((int)stk + 8));
    t6 = *(int *)((0xC1309B8 + (t4 << 2)));
    t7 = *(int *)(((t5 << 2) + t6));
    nlObjPutUseViewMatrix(t7);
    t9 = *(int *)(((int)stk + 20));
    t10 = *(int *)(((int)stk + 12));
    t11 = *(int *)((t9 + 0xC1309E8));
    t12 = *(int *)(((t10 << 2) + t11));
    nlObjPutUseViewMatrix(t12);
    nlPushMatrix(0x0);
    nlTranslateV((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0x14));
    t16 = *(short *)(((int)stk + 16));
    nlRotateAX((unsigned short)t16);
    t18 = *(int *)((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0x4));
    nlObjPutUseViewMatrix(t18);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslateV((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0x20));
    nlRotateAX((unsigned short)t16);
    t24 = *(int *)((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0x8));
    nlObjPutUseViewMatrix(t24);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslateV((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0x2C));
    nlRotateAX((unsigned short)t16);
    t30 = *(int *)((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0xC));
    nlObjPutUseViewMatrix(t30);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslateV((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0x38));
    nlRotateAX((unsigned short)t16);
    t36 = *(int *)((((short)(((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC130788) + 0x10));
    nlObjPutUseViewMatrix(t36);
    nlPopMatrix(0x1);
    t39 = nlPopMatrix(0x1);
    return t39;
}
