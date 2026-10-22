/* Straight-line functions with calls and guards (batch gen_lg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetCollision2D(int, float);
int GetCollisionFirst(int, int);
float nlInnerProduct(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlScaleVector(int, int, float);
int nlSqrt(int, int);
int nlSubVector3op(int, int, int);
int psgPickExitSide(int a4);

int psgPickExitSide(int a4)
{
    int t4;
    int t12;
    int t15;
    int t25;
    int t22;
    int t37;
    int t34;
    int t41;
    int stk[15] = {0};

    *(unsigned int *)(((int)stk + 4)) = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x20)) = *(struct mv3 *)(0xC0D6064); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x14)) = *(struct mv3 *)(0xC0D6070); }
    nlPushMatrix(0xC179180);
    nlSqrt((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x20));
    nlSqrt((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x14));
    *(unsigned int *)(((int)stk + 8)) = 0xC2AD204;
    t4 = *(short *)(((*(int *)(((int)stk + 4))) + 0x140));
    nlSubVector3op((((int)stk + 4) + 0x8), ((short)(((t4 << 1) + t4) << 2) + 0xC13EEE8), 0xC2AD204);
    t12 = *(int *)(((*(int *)(((int)stk + 4))) + 0x140));
    nlSubVector3op((((int)stk + 4) + 0x8), ((*(int *)((((*(int *)0xC1EE214) << 2) + (*(int *)((0xC13F3B0 + ((*(int *)0xC1EE210) << 2))))))) + (((t12 << 1) + t12) << 2)), (*(int *)(((int)stk + 8))));
    t15 = 0x0;
    if (!(0.0f > (nlInnerProduct((((int)stk + 4) + 0x8), 0xC2AD1E0)))) {
        t15 = 0x1;
    }
    if (t15 == 1) {
        t25 = (((t15 == 0)) ? 1 : 0);
        if ((*(int *)(((GetCollision2D((((int)stk + 4) + 0x20), 0.0f)) + 0x1C))) != -1) {
            nlScaleVector((((int)stk + 4) + 0x8), 0xC2AD1E0, 20.0f);
            t22 = t15;
            if ((*(int *)(((GetCollisionFirst((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x8))) + 0x1C))) != -1) {
                t22 = (((t15 == 0)) ? 1 : 0);
            }
            t25 = t22;
        }
        t41 = t25;
    } else {
        t37 = (((t15 == 0)) ? 1 : 0);
        if ((*(int *)(((GetCollision2D((((int)stk + 4) + 0x14), 0.0f)) + 0x1C))) != -1) {
            nlScaleVector((((int)stk + 4) + 0x8), 0xC2AD1E0, (*(float *)0xC070F44));
            t34 = t15;
            if ((*(int *)(((GetCollisionFirst((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8))) + 0x1C))) != -1) {
                t34 = (((t15 == 0)) ? 1 : 0);
            }
            t37 = t34;
        }
        t41 = t37;
    }
    nlPopMatrix(0x1);
    return t41;
}
