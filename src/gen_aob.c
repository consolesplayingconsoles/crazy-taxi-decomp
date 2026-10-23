/* Straight-line functions with calls and guards (batch gen_aob): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetCollision2D(int, float);
int GetCollisionFirst(int, int, float);
int nlCalcPoint(int, int);
float nlInnerProduct(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlScaleVector(int, int, float);
int Drv_CheckSideClear(int a4, int a5);

int Drv_CheckSideClear(int a4, int a5)
{
    int t5;
    int t15;
    int t12;
    int t25;
    int t29;
    int stk[14];

    *(unsigned int *)(((int)stk + 4)) = a5;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x1C)) = *(struct mv3 *)(0xC0D51D0); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x10)) = *(struct mv3 *)(0xC0D51DC); }
    nlPushMatrix(0xC179180);
    nlCalcPoint((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x1C));
    nlCalcPoint((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x10));
    t5 = 0x0;
    if (!(0.0f > (nlInnerProduct((*(int *)(((int)stk + 4))), 0xC2AD1E0)))) {
        t5 = 0x1;
    }
    if (t5 == 1) {
        t15 = (((t5 == 0)) ? 1 : 0);
        if ((*(int *)(((GetCollision2D((((int)stk + 4) + 0x1C), 0.0f)) + 0x1C))) != -1) {
            nlScaleVector((((int)stk + 4) + 0x4), 0xC2AD1E0, 20.0f);
            t12 = t5;
            if ((*(int *)(((GetCollisionFirst((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x4), 0.0f)) + 0x1C))) != -1) {
                t12 = (((t5 == 0)) ? 1 : 0);
            }
            t15 = t12;
        }
        t29 = t15;
    } else {
        t25 = (((t5 == 0)) ? 1 : 0);
        if ((*(int *)(((GetCollision2D((((int)stk + 4) + 0x10), 0.0f)) + 0x1C))) == -1) {
        } else {
            nlScaleVector((((int)stk + 4) + 0x4), 0xC2AD1E0, (*(float *)0xC063E38));
            *(volatile int *)(((GetCollisionFirst((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4), 0.0f)) + 0x1C));
            t25 = t5;
        }
        t29 = t25;
    }
    nlPopMatrix(0x1);
    return t29;
}
