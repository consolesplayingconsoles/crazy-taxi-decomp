/* Straight-line functions with calls and guards (batch gen_uf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetCollision2D(int, float);
int GetCollisionFirst(int, int, float);
int nlCalcPoint(int, int);
float nlInnerProduct(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlScaleVector(int, int, float);
int nlSubVector3op(int, int, int);
int psgPickExitSide(int a4);
struct o140_int { char p[0x140]; int v; };
struct o140_short { char p[0x140]; short v; };
struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };



int psgPickExitSide(int a4)
{
    int t4;
    int t12;
    int t15;
    int t41;
    int stk[15];

    *(unsigned int *)(((int)stk + 4)) = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x20)) = *(struct mv3 *)(0xC0D6064); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x14)) = *(struct mv3 *)(0xC0D6070); }
    nlPushMatrix(0xC179180);
    nlCalcPoint((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x20));
    nlCalcPoint((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x14));
    *(unsigned int *)(((int)stk + 8)) = 0xC2AD204;
    t4 = (((struct o140_short *)((*(int *)(((int)stk + 4)))))->v);
    nlSubVector3op((((int)stk + 4) + 0x8), ((short)(((t4 << 1) + t4) << 2) + 0xC13EEE8), 0xC2AD204);
    t12 = (((struct o140_int *)((*(int *)(((int)stk + 4)))))->v);
    nlSubVector3op((((int)stk + 4) + 0x8), ((*(int *)(((((((struct o4_int *)0xC1EE210)->v)) << 2) + (*(int *)((0xC13F3B0 + (((((struct o0_int *)0xC1EE210)->v)) << 2))))))) + (((t12 << 1) + t12) << 2)), (*(int *)(((int)stk + 8))));
    t15 = 0x0;
    if (!(0.0f > (nlInnerProduct((((int)stk + 4) + 0x8), 0xC2AD1E0)))) {
        t15 = 0x1;
    }
    if (t15 == 1) {
        t41 = (((t15 == 0)) ? 1 : 0);
        if ((*(int *)(((GetCollision2D((((int)stk + 4) + 0x20), 0.0f)) + 0x1C))) != -1) {
            nlScaleVector((((int)stk + 4) + 0x8), 0xC2AD1E0, 20.0f);
            t41 = t15;
            if ((*(int *)(((GetCollisionFirst((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x8), 0.0f)) + 0x1C))) != -1) {
                t41 = (((t15 == 0)) ? 1 : 0);
            }
        }
    } else {
        t41 = (((t15 == 0)) ? 1 : 0);
        if ((*(int *)(((GetCollision2D((((int)stk + 4) + 0x14), 0.0f)) + 0x1C))) != -1) {
            nlScaleVector((((int)stk + 4) + 0x8), 0xC2AD1E0, (-2e+01f));
            t41 = t15;
            if ((*(int *)(((GetCollisionFirst((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8), 0.0f)) + 0x1C))) != -1) {
                t41 = (((t15 == 0)) ? 1 : 0);
            }
        }
    }
    nlPopMatrix(0x1);
    return t41;
}
