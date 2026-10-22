/* Straight-line functions with calls and guards (batch gen_td): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckClipping(float);
float nlLength(int, int);
int nlLoadMatrix(int);
int nlPopMatrix(int);
int nlProjectScreen3D(int);
int nlPushUnitMatrix(void);
int nlSqrt(int, int);
int pedCarNotInSubway(void);
int pedDodgeCheck(int, float, float);
int pedDraw(int, float, float);
int pedGetSubwayFlag(void);
int pedPickIdle(int);
int pedStand(int);
int pedUpdate(int a4);

int pedUpdate(int a4)
{
    float t7;
    float t10;
    int t69;
    int t99;
    int t104;
    int t88;
    int t89;
    int t90;
    int t91;
    int t120;
    int t112;
    int stk[13] = {0};

    if ((*(int *)((a4 + 0x50))) == 2) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0xC)) = *(struct mv3 *)((a4 + 0x40)); }
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0xC)) = *(struct mv3 *)((a4 + 0xC)); }
    }
    nlPushUnitMatrix();
    nlLoadMatrix(0xC2A6FE4);
    nlSqrt((((int)stk + 4) + 0xC), ((int)stk + 4));
    nlPopMatrix(0x1);
    t7 = nlLength(0xC179144, (((int)stk + 4) + 0xC));
    pedDodgeCheck(a4, t7, (*(float *)(((int)stk + 4))));
    t10 = nlLength(0xC179840, (((int)stk + 4) + 0xC));
    nlProjectScreen3D((((int)stk + 4) + 0xC));
    if ((CheckClipping(5.0f)) != 0) {
        if ((*(int *)0xC1EE20C) != 0) {
            if ((*(int *)0xC1EE20C) == 1) {
                if ((*(short *)((a4 + 0x60))) != 0) {
                    if ((int)(pedGetSubwayFlag()) < (int)0x1) {
                        if ((*(short *)((a4 + 0x60))) == 0) {
                            if ((pedCarNotInSubway()) != 0) {
                                pedDraw(a4, t10, t7);
                            }
                        }
                    } else {
                        pedDraw(a4, t10, t7);
                    }
                } else {
                    if ((*(short *)((a4 + 0x60))) == 0) {
                        if ((pedCarNotInSubway()) != 0) {
                            pedDraw(a4, t10, t7);
                        }
                    }
                }
            }
        } else {
            pedDraw(a4, t10, t7);
        }
    }
    if ((*(int *)((a4 + 0x50))) == 2) {
        t69 = *(int *)((a4 + 0x20));
        *(unsigned int *)((a4 + 0x20)) = (t69 + 0x2);
        if ((unsigned int)(*(int *)(((*(int *)((0xC0D61AC + ((*(int *)((a4 + 0x28))) << 2)))) + 0x0))) <= (unsigned int)((t69 + 0x2) + 0x1)) {
            *(unsigned int *)((a4 + 0x20)) = ((*(int *)(((*(int *)((0xC0D61AC + ((*(int *)((a4 + 0x28))) << 2)))) + 0x0))) - 1);
        }
    } else {
        *(unsigned int *)((a4 + 0x20)) = ((*(int *)((a4 + 0x20))) + 0x1);
    }
    if (((*(int *)((a4 + 0x50))) == 2) && (t88 = *(int *)((a4 + 0x28)), t89 = *(int *)((a4 + 0x20)), t90 = *(int *)(((t88 << 2) + 0xC0D61AC)), t91 = *(int *)((t90 + 0x0)), (unsigned int)t91 <= (unsigned int)(t89 + 0x1))) {
        *(unsigned int *)((a4 + 0x50)) = 0x1;
        *(unsigned int *)((a4 + 0x20)) = 0x0;
        pedPickIdle(a4);
        *(unsigned short *)((a4 + 0x38)) = 0x0;
        *(float *)((a4 + 0x3C)) = 0.0f;
        *(float *)((a4 + 0xC)) = (*(float *)((a4 + 0x40)));
        *(float *)((a4 + 0x14)) = (*(float *)((a4 + 0x48)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC12FF00); }
        *(unsigned int *)((a4 + 0x4C)) = 0x0;
        t99 = *(short *)0xC1791C0;
        *(unsigned short *)((a4 + 0x1A)) = t99;
        t120 = t99;
    } else {
        if (t7 > (*(float *)0xC04FCA0)) {
            *(unsigned int *)((a4 + 0x50)) = 0x0;
            t112 = 0x50;
        } else {
            t104 = 0xC04FCA4;
            if (t7 > (*(float *)0xC04FCA4)) {
                t104 = (pedStand(a4));
            }
            t112 = t104;
        }
        t120 = t112;
    }
    return t120;
}
