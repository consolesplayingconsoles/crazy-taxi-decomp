/* Straight-line functions with calls and guards (batch gen_sb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int carBalanceRoll(int);
int convergeRot(int, int, float);
int getYXZrot(int);
int nlArcTan2(float, float);
int nlCalcVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int carBalance(int a4, int a5);
struct o100_float { char p[0x100]; float v; };
struct o10C_short { char p[0x10C]; short v; };
struct o110_int { char p[0x110]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o84_int { char p[0x84]; int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct oA4_short { char p[0xA4]; short v; };
struct oA4_ushort { char p[0xA4]; unsigned short v; };
struct oA6_short { char p[0xA6]; short v; };
struct oA6_ushort { char p[0xA6]; unsigned short v; };
struct oA8_short { char p[0xA8]; short v; };
struct oA8_ushort { char p[0xA8]; unsigned short v; };
struct oAA_short { char p[0xAA]; short v; };
struct oAA_ushort { char p[0xAA]; unsigned short v; };
struct oAE_short { char p[0xAE]; short v; };
struct oAE_ushort { char p[0xAE]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };


int carBalance(int a4, int a5)
{
    int t42;
    int t89;
    int t65;
    int t68;
    float u74;
    int t95;
    int t98;
    int stk[20];

    *(unsigned int *)(((int)stk + 0)) = a5;
    nlPushUnitMatrix();
    nlRotateAZ((-(unsigned short)((((struct oA8_short *)(a4))->v))));
    nlRotateAX((-(unsigned short)((((struct oA4_short *)(a4))->v))));
    nlRotateAY((-(unsigned short)((((struct oA6_short *)(a4))->v))));
    nlCalcVector((0xEC + a4), (((int)stk + 0) + 0x10));
    nlCalcVector((*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x4));
    nlPopMatrix(0x1);
    *(unsigned short *)(((((int)stk + 0) + 0x1C) + 0x0)) = (-(nlArcTan2((*(float *)(((int)stk + 24))), (*(float *)(((int)stk + 20))))));
    *(unsigned short *)(((((int)stk + 0) + 0x1C) + 0x4)) = (nlArcTan2((*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 20)))));
    nlPushUnitMatrix();
    nlRotateAY((unsigned short)((((struct oA6_short *)(a4))->v)));
    nlRotateAX((unsigned short)((((struct oA4_short *)(a4))->v)));
    nlRotateAZ((unsigned short)((((struct oA8_short *)(a4))->v)));
    nlPushMatrix(0x0);
    nlRotateAX((-(unsigned short)(*(short *)(((((int)stk + 0) + 0x1C) + 0x0)))));
    nlRotateAZ((-(unsigned short)(*(short *)(((((int)stk + 0) + 0x1C) + 0x4)))));
    getYXZrot((0x108 + a4));
    nlPopMatrix(0x1);
    if (((((struct o110_int *)(a4))->v)) != 0) {
        nlPushMatrix(0x0);
        nlRotateAX((convergeRot((*(short *)(((((int)stk + 0) + 0x1C) + 0x0))), 0x0, 0.349999994f)));
        nlRotateAZ((convergeRot((*(short *)(((((int)stk + 0) + 0x1C) + 0x4))), 0x0, 0.349999994f)));
        getYXZrot((0xA4 + a4));
        nlPopMatrix(0x1);
    } else {
        t42 = *(short *)(((((int)stk + 0) + 0x1C) + 0x0));
        if (((int)(unsigned short)t42 >= (int)0x3000) && ((int)(unsigned short)t42 <= (int)0xD000)) {
        } else {
            (((struct oA4_ushort *)(a4))->v) = (((((struct oA4_short *)(a4))->v)) + 0x40);
        }
        (((struct oA8_ushort *)(a4))->v) = (((((struct oA8_short *)(a4))->v)) + (convergeRot(((((struct oA8_short *)(a4))->v)), ((((struct o10C_short *)(a4))->v)), 0.199999988f)));
    }
    nlPopMatrix(0x1);
    (((struct oA6_ushort *)(a4))->v) = (((((struct oA6_short *)(a4))->v)) + ((int)(((((((struct o60_float *)(a4))->v)) * 524288.0f) / 6.28318501f) + 0.5f) & 0xFFFF));
    (((struct o60_float *)(a4))->v) = (((((struct o60_float *)(a4))->v)) * 0.949999988f);
    t89 = 0;
    if ((((((struct o84_int *)(a4))->v)) & 64) == 0) {
        (((struct oAE_ushort *)(a4))->v) = (((((struct oAE_short *)(a4))->v)) + ((int)(((((((struct o4_float *)(((int)stk + 0)))->v)) * 6553.59961f) / 6.28318501f) + 0.5f) & 0xFFFF));
        (((struct oAE_ushort *)(a4))->v) = (((((struct oAE_short *)(a4))->v)) + (convergeRot(((((struct oAE_short *)(a4))->v)), 0x0, 0.149999991f)));
        t65 = (((struct oAE_short *)(a4))->v);
        if (((int)(unsigned short)t65 < (int)0x8000) && ((int)(unsigned short)t65 > (int)0x400)) {
            (((struct oAE_ushort *)(a4))->v) = 0x400;
        } else {
            t68 = (((struct oAE_short *)(a4))->v);
            if (((int)(unsigned short)t68 > (int)0x8000) && ((int)(unsigned short)t68 < (int)0xFC00)) {
                (((struct oAE_ushort *)(a4))->v) = 0xFC00;
            }
        }
        u74 = (((struct o100_float *)(a4))->v);
        if (_builtin_fabsf(u74) > 0.0014999999f) {
            (((struct o84_uint *)(a4))->v) = (((((struct o84_int *)(a4))->v)) | 0x40);
        }
        _builtin_fabsf(u74);
        t89 = ((_builtin_fabsf(u74) > 0.0014999999f));
    } else {
        carBalanceRoll(a4);
        t89 = (0);
    }
    (((struct oAA_ushort *)(a4))->v) = (((((struct oAA_short *)(a4))->v)) - ((int)(((((((struct oC_float *)(((int)stk + 0)))->v)) * 1310.71997f) / 6.28318501f) + 0.5f) & 0xFFFF));
    (((struct oAA_ushort *)(a4))->v) = (((((struct oAA_short *)(a4))->v)) + (convergeRot(((((struct oAA_short *)(a4))->v)), 0x0, 0.149999991f)));
    t95 = (((struct oAA_short *)(a4))->v);
    if (((int)(unsigned short)t95 < (int)0x8000) && ((int)(unsigned short)t95 > (int)0x200)) {
        (((struct oAA_ushort *)(a4))->v) = 0x200;
    } else {
        t98 = (((struct oAA_short *)(a4))->v);
        if (((int)(unsigned short)t98 > (int)0x8000) && ((int)(unsigned short)t98 < (int)0xFE00)) {
            (((struct oAA_ushort *)(a4))->v) = 0xFE00;
        }
    }
    return 0xAA;
}
