/* Straight-line functions with calls and guards (batch gen_aap): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdGdcReqCmd(void);
int gdDcfGetScd_(int a4, int a5, int a6);

int gdDcfGetScd_(int a4, int a5, int a6)
{
    int stk[7] = {0};

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = a5;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = a6;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = 0x0;
    return (gdGdcReqCmd());
}
