/* Straight-line functions with calls and guards (batch gen_aey): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_Init(void);
int FUN_0c14f59e(void);
extern void _builtin_set_imask(int);
int buStat(int);
int discardVertexBuffer(void);
int pdExitPeripheral(void);
int pdVibSetStopTime(int, int, int, int);
int syBtExit(void);
int syHwFinish(void);
int syRtcFinish(void);
int thunk_syCfgExit(void);
int vmuExit(void);
int usr_gd_err_func(int a4, int a5);

int usr_gd_err_func(int a4, int a5)
{
    int t1;
    int t19;
    int t5;
    int t18;
    int stk[5] = {0};

    *(unsigned int *)(((int)stk + 4)) = a5;
    t1 = buStat((*(int *)0xC2A11B8));
    t19 = t1;
    if (t1 != -1) {
        if (((*(int *)(((int)stk + 4))) != -23) && (t5 = *(int *)(((int)stk + 4)), t5 != -33)) {
            t18 = t5;
        } else {
            *(unsigned char *)(((int)stk + 12)) = (*(signed char *)0xC08AAEE);
            *(unsigned char *)(((int)stk + 8)) = (*(signed char *)0xC08AAEF);
            pdVibSetStopTime(0x2, (((int)stk + 4) + 0x8), (((int)stk + 4) + 0x4), 0x1);
            ADXT_Init();
            thunk_syCfgExit();
            vmuExit();
            syRtcFinish();
            pdExitPeripheral();
            discardVertexBuffer();
            FUN_0c14f59e();
            syHwFinish();
            _builtin_set_imask(0xF);
            t18 = (syBtExit());
        }
        t19 = t18;
    }
    return t19;
}
