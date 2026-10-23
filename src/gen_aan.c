/* Straight-line functions with calls and guards (batch gen_aan): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdGdcReqCmd(void);
int gdDcfDaRelease_(int a4);

int gdDcfDaRelease_(int a4)
{
    int stk[5] = {0};

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = 0x0;
    return (gdGdcReqCmd());
}
