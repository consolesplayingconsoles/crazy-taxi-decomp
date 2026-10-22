/* Straight-line functions with calls and guards (batch gen_gl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c077210(int, int);
int carBalanceRoll(int);
int convergeRot(int, int, float);
int getYXZrot(int);
int nlArcTan2(float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int carBalance(int a4, int a5);

int carBalance(int a4, int a5)
{
    int t42;
    int t89;
    int t65;
    int t68;
    float u74;
    int t95;
    int t98;
    int stk[21] = {0};

    *(unsigned int *)(((int)stk + 4)) = a5;
    nlPushUnitMatrix();
    nlRotateAZ((-(unsigned short)(*(short *)((a4 + 0xA8)))));
    nlRotateAX((-(unsigned short)(*(short *)((a4 + 0xA4)))));
    nlRotateAY((-(unsigned short)(*(short *)((a4 + 0xA6)))));
    FUN_0c077210((0xEC + a4), (((int)stk + 4) + 0x10));
    FUN_0c077210((*(int *)(((int)stk + 4))), (((int)stk + 4) + 0x4));
    nlPopMatrix(0x1);
    *(unsigned short *)(((((int)stk + 4) + 0x1C) + 0x0)) = (-(nlArcTan2((*(float *)(((int)stk + 28))), (*(float *)(((int)stk + 24))))));
    *(unsigned short *)(((((int)stk + 4) + 0x1C) + 0x4)) = (nlArcTan2((*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 24)))));
    nlPushUnitMatrix();
    nlRotateAY((unsigned short)(*(short *)((a4 + 0xA6))));
    nlRotateAX((unsigned short)(*(short *)((a4 + 0xA4))));
    nlRotateAZ((unsigned short)(*(short *)((a4 + 0xA8))));
    nlPushMatrix(0x0);
    nlRotateAX((-(unsigned short)(*(short *)(((((int)stk + 4) + 0x1C) + 0x0)))));
    nlRotateAZ((-(unsigned short)(*(short *)(((((int)stk + 4) + 0x1C) + 0x4)))));
    getYXZrot((0x108 + a4));
    nlPopMatrix(0x1);
    if ((*(int *)((a4 + 0x110))) != 0) {
        nlPushMatrix(0x0);
        nlRotateAX((convergeRot((*(short *)(((((int)stk + 4) + 0x1C) + 0x0))), 0x0, 0.349999994f)));
        nlRotateAZ((convergeRot((*(short *)(((((int)stk + 4) + 0x1C) + 0x4))), 0x0, 0.349999994f)));
        getYXZrot((0xA4 + a4));
        nlPopMatrix(0x1);
    } else {
        t42 = *(short *)(((((int)stk + 4) + 0x1C) + 0x0));
        if (((int)(unsigned short)t42 >= (int)0x3000) && ((int)(unsigned short)t42 <= (int)0xD000)) {
        } else {
            *(unsigned short *)((a4 + 0xA4)) = ((*(short *)((a4 + 0xA4))) + 0x40);
        }
        *(unsigned short *)(((0xA8 + a4) + 0x0)) = ((*(short *)(((0xA8 + a4) + 0x0))) + (convergeRot((*(short *)((a4 + 0xA8))), (*(short *)((a4 + 0x10C))), 0.199999988f)));
    }
    nlPopMatrix(0x1);
    *(unsigned short *)((a4 + 0xA6)) = ((*(short *)((a4 + 0xA6))) + ((int)((((*(float *)(((0x60 + a4) + 0x0))) * 524288.0f) / 6.28318501f) + 0.5f) & 0xFFFF));
    *(float *)((a4 + 0x60)) = ((*(float *)((a4 + 0x60))) * 0.949999988f);
    t89 = 0;
    if (((*(int *)((a4 + 0x84))) & 64) == 0) {
        *(unsigned short *)((a4 + 0xAE)) = ((*(short *)((a4 + 0xAE))) + ((int)((((*(float *)(((((int)stk + 4) + 0x4) + 0x0))) * 6553.59961f) / 6.28318501f) + 0.5f) & 0xFFFF));
        *(unsigned short *)(((0xAE + a4) + 0x0)) = ((*(short *)(((0xAE + a4) + 0x0))) + (convergeRot((*(short *)((a4 + 0xAE))), 0x0, 0.149999991f)));
        t65 = *(short *)((a4 + 0xAE));
        if (((int)(unsigned short)t65 < (int)0x8000) && ((int)(unsigned short)t65 > (int)0x400)) {
            *(unsigned short *)((a4 + 0xAE)) = 0x400;
        } else {
            t68 = *(short *)((a4 + 0xAE));
            if (((int)(unsigned short)t68 > (int)0x8000) && ((int)(unsigned short)t68 < (int)0xFC00)) {
                *(unsigned short *)((a4 + 0xAE)) = 0xFC00;
            }
        }
        u74 = *(float *)((a4 + 0x100));
        if (_builtin_fabsf(u74) > 0.0014999999f) {
            *(unsigned int *)((a4 + 0x84)) = ((*(int *)((a4 + 0x84))) | 0x40);
        }
        _builtin_fabsf(u74);
        t89 = ((_builtin_fabsf(u74) > 0.0014999999f));
    } else {
        carBalanceRoll(a4);
        t89 = (0);
    }
    *(unsigned short *)((a4 + 0xAA)) = ((*(short *)((a4 + 0xAA))) - ((int)((((*(float *)(((((int)stk + 4) + 0xC) + 0x0))) * 1310.71997f) / 6.28318501f) + 0.5f) & 0xFFFF));
    *(unsigned short *)(((0xAA + a4) + 0x0)) = ((*(short *)(((0xAA + a4) + 0x0))) + (convergeRot((*(short *)((a4 + 0xAA))), 0x0, 0.149999991f)));
    t95 = *(short *)((a4 + 0xAA));
    if (((int)(unsigned short)t95 < (int)0x8000) && ((int)(unsigned short)t95 > (int)0x200)) {
        *(unsigned short *)((a4 + 0xAA)) = 0x200;
    } else {
        t98 = *(short *)((a4 + 0xAA));
        if (((int)(unsigned short)t98 > (int)0x8000) && ((int)(unsigned short)t98 < (int)0xFE00)) {
            *(unsigned short *)((a4 + 0xAA)) = 0xFE00;
        }
    }
    return 0xAA;
}
