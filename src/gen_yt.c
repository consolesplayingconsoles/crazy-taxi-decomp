/* Straight-line functions with calls and guards (batch gen_yt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_Finish(void);
extern void _builtin_set_imask(int);
int buStat(int);
int discardVertexBuffer(void);
int pdExitPeripheral(void);
int pdVibSetStopTime(int, int, int, int);
int syBtExit(void);
int syHwFinish(void);
int syMallocFinish(void);
int syRtcFinish(void);
int thunk_syCfgExit(void);
int vmuExit(void);
int usr_gd_err_func(int a4, int a5, int a6, int a7);

int usr_gd_err_func(int a4, int a5, int a6, int a7)
{
    int t1;
    int t6;
    int stk[5];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_C02A3EC:;
    *(unsigned int *)(((int)stk + 4)) = R5;
    t1 = buStat((*(int *)0xC2A11B8));
    R0 = (t1);
    if ((t1 == -1)) goto L_C02A46E;
    goto L_C02A3FE;
    L_C02A3FE:;
    if (((*(int *)(((int)stk + 4))) == -23)) goto L_C02A40A;
    goto L_C02A404;
    L_C02A404:;
    t6 = *(int *)(((int)stk + 4));
    R0 = (t6);
    if ((t6 != -33)) goto L_C02A46E;
    goto L_C02A40A;
    L_C02A40A:;
    *(unsigned char *)(((int)stk + 12)) = (*(signed char *)0xC08AAEE);
    *(unsigned char *)(((int)stk + 8)) = (*(signed char *)0xC08AAEF);
    pdVibSetStopTime(0x2, (((int)stk + 4) + 0x8), (((int)stk + 4) + 0x4), 0x1);
    ADXT_Finish();
    thunk_syCfgExit();
    vmuExit();
    syRtcFinish();
    pdExitPeripheral();
    discardVertexBuffer();
    syMallocFinish();
    syHwFinish();
    _builtin_set_imask(0xF);
    R0 = ((syBtExit()));
    goto L_C02A46E;
    L_C02A46E:;
    return R0;
}
