/* Straight-line functions with calls and guards (batch gen_abd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXERR_CallErrFunc(int, ...);
int FUN_0c1687f6(int, int);
int FUN_0c168812(int, int);
int FUN_0c16881a(int, int);
int FUN_0c168826(int, int);
int FUN_0c1688aa(int);
int FUN_0c1688b6(int);
int FUN_0c1688c2(int);
int FUN_0c1688ce(int);
void FUN_0c168f00(int a4);

void FUN_0c168f00(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t9;
    int t19;
    int t28;
    int t31;
    int t34;
    int stk[11] = {0};

    t0 = *(int *)((a4 + 0x14));
    t1 = *(int *)((a4 + 0x4));
    t2 = FUN_0c1688aa(t1);
    t3 = FUN_0c1688b6(t1);
    *(unsigned int *)(((int)stk + 8)) = (FUN_0c1688c2(t1));
    FUN_0c1688ce(t1);
    t9 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x18)))))(t0, 0x1, (*(int *)((a4 + 0x50))), (((int)stk + 8) + 0x4));
    if ((int)(*(int *)(((int)stk + 16))) < (int)(*(int *)((a4 + 0x50)))) {
        ADXERR_CallErrFunc(0xC176558);
    }
    t19 = ((int (*)(int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x20)))))(t0, 0x0, (((int)stk + 8) + 0x4));
    FUN_0c16881a(t1, 0x0);
    FUN_0c168812(t1, ((*(int *)(((int)stk + 8))) - t2));
    FUN_0c168826(t1, t3);
    FUN_0c1687f6(t1, t2);
    if ((*(signed char *)((a4 + 0x2))) == 2) {
        t28 = ((int (*)(int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x14)))))(t0);
        t31 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x18)))))(t0, 0x1, t3, (((int)stk + 8) + 0x4));
        t34 = ((int (*)(int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x20)))))(t0, 0x0, (((int)stk + 8) + 0x4));
    }
    *(unsigned int *)((a4 + 0x4C)) = ((*(int *)((a4 + 0x4C))) + 0x1);
}
