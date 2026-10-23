/* Straight-line functions with calls and guards (batch gen_abd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXERR_CallErrFunc(int, ...);
int ADXSJD_SetDecPos(int, int);
int ADXSJD_SetTrapNumSmpl(int, int);
int ADXSJD_SetTrapCnt(int, int);
int ADXSJD_SetTrapDtLen(int, int);
int ADXSJD_GetLpStartPos(int);
int ADXSJD_GetLpStartOfst(int);
int ADXSJD_GetLpEndPos(int);
int ADXSJD_GetLpEndOfst(int);
void adxt_trap_entry(int a4);

void adxt_trap_entry(int a4)
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
    t2 = ADXSJD_GetLpStartPos(t1);
    t3 = ADXSJD_GetLpStartOfst(t1);
    *(unsigned int *)(((int)stk + 8)) = (ADXSJD_GetLpEndPos(t1));
    ADXSJD_GetLpEndOfst(t1);
    t9 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x18)))))(t0, 0x1, (*(int *)((a4 + 0x50))), (((int)stk + 8) + 0x4));
    if ((int)(*(int *)(((int)stk + 16))) < (int)(*(int *)((a4 + 0x50)))) {
        ADXERR_CallErrFunc(0xC176558);
    }
    t19 = ((int (*)(int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x20)))))(t0, 0x0, (((int)stk + 8) + 0x4));
    ADXSJD_SetTrapCnt(t1, 0x0);
    ADXSJD_SetTrapNumSmpl(t1, ((*(int *)(((int)stk + 8))) - t2));
    ADXSJD_SetTrapDtLen(t1, t3);
    ADXSJD_SetDecPos(t1, t2);
    if ((*(signed char *)((a4 + 0x2))) == 2) {
        t28 = ((int (*)(int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x14)))))(t0);
        t31 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x18)))))(t0, 0x1, t3, (((int)stk + 8) + 0x4));
        t34 = ((int (*)(int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x20)))))(t0, 0x0, (((int)stk + 8) + 0x4));
    }
    *(unsigned int *)((a4 + 0x4C)) = ((*(int *)((a4 + 0x4C))) + 0x1);
}
