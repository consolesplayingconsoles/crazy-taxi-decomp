/* Straight-line functions with calls and guards (batch gen_hz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c049aa8(int, int, float);
int FUN_0c077210(int, int);
int carBalance(int);
int getYXZrot(int);
int nlArcTan2(float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int Put_Motion2D(int a4, int a5);

int Put_Motion2D(int a4, int a5)
{
    int t1;
    int t3;
    int t5;
    int t8;
    float u11;
    float u12;
    int t13;
    float u14;
    float u15;
    int t16;
    int t18;
    int t20;
    int t22;
    int t25;
    int t27;
    int t31;
    int t33;
    int t34;
    int t36;
    int t37;
    int t41;
    int t42;
    int t46;
    int t51;
    int t52;
    int t53;
    int t54;
    float u61;
    int t62;
    float u63;
    int t64;
    int t106;
    int t65;
    float u66;
    int t67;
    int t68;
    int t69;
    int t70;
    int t71;
    int t81;
    float u91;
    int t92;
    int t107;
    float u108;
    int t109;
    int t110;
    int t111;
    int t112;
    int t113;
    int t123;
    int stk[21] = {0};

    *(unsigned int *)(((int)stk + 4)) = a5;
    nlPushUnitMatrix();
    t1 = *(short *)((a4 + 0xA8));
    nlRotateAZ((-(unsigned short)t1));
    t3 = *(short *)((a4 + 0xA4));
    nlRotateAX((-(unsigned short)t3));
    t5 = *(short *)((a4 + 0xA6));
    nlRotateAY((-(unsigned short)t5));
    FUN_0c077210((0xEC + a4), (((int)stk + 4) + 0x10));
    t8 = *(int *)(((int)stk + 4));
    FUN_0c077210(t8, (((int)stk + 4) + 0x4));
    nlPopMatrix(0x1);
    u11 = *(float *)(((int)stk + 24));
    u12 = *(float *)(((int)stk + 28));
    t13 = nlArcTan2(u12, u11);
    *(unsigned short *)(((((int)stk + 4) + 0x1C) + 0x0)) = (-t13);
    u14 = *(float *)(((int)stk + 24));
    u15 = *(float *)(((int)stk + 20));
    t16 = nlArcTan2(u15, u14);
    *(unsigned short *)(((((int)stk + 4) + 0x1C) + 0x4)) = t16;
    nlPushUnitMatrix();
    t18 = *(short *)((a4 + 0xA6));
    nlRotateAY((unsigned short)t18);
    t20 = *(short *)((a4 + 0xA4));
    nlRotateAX((unsigned short)t20);
    t22 = *(short *)((a4 + 0xA8));
    nlRotateAZ((unsigned short)t22);
    nlPushMatrix(0x0);
    t25 = *(short *)(((((int)stk + 4) + 0x1C) + 0x0));
    nlRotateAX((-(unsigned short)t25));
    t27 = *(short *)(((((int)stk + 4) + 0x1C) + 0x4));
    nlRotateAZ((-(unsigned short)t27));
    getYXZrot((0x108 + a4));
    nlPopMatrix(0x1);
    t31 = *(int *)((a4 + 0x110));
    if (t31 != 0) {
        nlPushMatrix(0x0);
        t33 = *(short *)(((((int)stk + 4) + 0x1C) + 0x0));
        t34 = FUN_0c049aa8(t33, 0x0, 0.349999994f);
        nlRotateAX(t34);
        t36 = *(short *)(((((int)stk + 4) + 0x1C) + 0x4));
        t37 = FUN_0c049aa8(t36, 0x0, 0.349999994f);
        nlRotateAZ(t37);
        getYXZrot((0xA4 + a4));
        nlPopMatrix(0x1);
    } else {
        t41 = *(short *)(((((int)stk + 4) + 0x1C) + 0x0));
        if ((int)(unsigned short)t41 >= (int)0x3000) {
            if ((int)(unsigned short)t41 > (int)0xD000) {
                t42 = *(short *)((a4 + 0xA4));
                *(unsigned short *)((a4 + 0xA4)) = (t42 + 0x40);
            }
        } else {
            t46 = *(short *)((a4 + 0xA4));
            *(unsigned short *)((a4 + 0xA4)) = (t46 + 0x40);
        }
        t51 = *(short *)((a4 + 0x10C));
        t52 = *(short *)((a4 + 0xA8));
        t53 = FUN_0c049aa8(t52, t51, 0.199999988f);
        t54 = *(short *)(((0xA8 + a4) + 0x0));
        *(unsigned short *)(((0xA8 + a4) + 0x0)) = (t54 + t53);
    }
    nlPopMatrix(0x1);
    u61 = *(float *)(((0x60 + a4) + 0x0));
    t62 = *(short *)((a4 + 0xA6));
    *(unsigned short *)((a4 + 0xA6)) = (t62 + ((int)(((u61 * 524288.0f) / 6.28318501f) + 0.5f) & 0xFFFF));
    u63 = *(float *)((a4 + 0x60));
    *(float *)((a4 + 0x60)) = (u63 * 0.949999988f);
    t64 = *(int *)((a4 + 0x84));
    t106 = 0;
    if ((t64 & 64) == 0) {
        t65 = *(short *)((a4 + 0xAE));
        u66 = *(float *)(((((int)stk + 4) + 0x4) + 0x0));
        *(unsigned short *)((a4 + 0xAE)) = (t65 + ((int)(((u66 * 6553.59961f) / 6.28318501f) + 0.5f) & 0xFFFF));
        t67 = *(short *)((a4 + 0xAE));
        t68 = FUN_0c049aa8(t67, 0x0, 0.149999991f);
        t69 = *(short *)(((0xAE + a4) + 0x0));
        *(unsigned short *)(((0xAE + a4) + 0x0)) = (t69 + t68);
        t70 = *(short *)((a4 + 0xAE));
        if ((int)(unsigned short)t70 < (int)0x8000) {
            if ((int)(unsigned short)t70 > (int)0x400) {
                *(unsigned short *)((a4 + 0xAE)) = 0x400;
            } else {
                t71 = *(short *)((a4 + 0xAE));
                if ((int)(unsigned short)t71 > (int)0x8000) {
                    if ((int)(unsigned short)t71 < (int)0xFC00) {
                        *(unsigned short *)((a4 + 0xAE)) = 0xFC00;
                    }
                }
            }
        } else {
            t81 = *(short *)((a4 + 0xAE));
            if ((int)(unsigned short)t81 > (int)0x8000) {
                if ((int)(unsigned short)t81 < (int)0xFC00) {
                    *(unsigned short *)((a4 + 0xAE)) = 0xFC00;
                }
            }
        }
        u91 = *(float *)((a4 + 0x100));
        if (_builtin_fabsf(u91) > 0.0014999999f) {
            t92 = *(int *)((a4 + 0x84));
            *(unsigned int *)((a4 + 0x84)) = (t92 | 0x40);
        }
        _builtin_fabsf(u91);
        t106 = ((_builtin_fabsf(u91) > 0.0014999999f));
    } else {
        carBalance(a4);
        t106 = (0);
    }
    t107 = *(short *)((a4 + 0xAA));
    u108 = *(float *)(((((int)stk + 4) + 0xC) + 0x0));
    *(unsigned short *)((a4 + 0xAA)) = (t107 - ((int)(((u108 * 1310.71997f) / 6.28318501f) + 0.5f) & 0xFFFF));
    t109 = *(short *)((a4 + 0xAA));
    t110 = FUN_0c049aa8(t109, 0x0, 0.149999991f);
    t111 = *(short *)(((0xAA + a4) + 0x0));
    *(unsigned short *)(((0xAA + a4) + 0x0)) = (t111 + t110);
    t112 = *(short *)((a4 + 0xAA));
    if ((int)(unsigned short)t112 < (int)0x8000) {
        if ((int)(unsigned short)t112 > (int)0x200) {
            *(unsigned short *)((a4 + 0xAA)) = 0x200;
        } else {
            t113 = *(short *)((a4 + 0xAA));
            if ((int)(unsigned short)t113 > (int)0x8000) {
                if ((int)(unsigned short)t113 < (int)0xFE00) {
                    *(unsigned short *)((a4 + 0xAA)) = 0xFE00;
                }
            }
        }
    } else {
        t123 = *(short *)((a4 + 0xAA));
        if ((int)(unsigned short)t123 > (int)0x8000) {
            if ((int)(unsigned short)t123 < (int)0xFE00) {
                *(unsigned short *)((a4 + 0xAA)) = 0xFE00;
            }
        }
    }
    return 0xAA;
}
