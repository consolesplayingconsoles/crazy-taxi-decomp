/* Straight-line functions with calls and guards (batch gen_nq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlCopyMatrix(int, int);
int nlLUDecomp(int, int);
int nlDetMatrix(int a4);

int nlDetMatrix(int a4)
{
    int stk[20] = {0};

    *(unsigned int *)(((int)stk + 4)) = a4;
    nlCopyMatrix((((int)stk + 4) + 0x4), a4);
    return (nlLUDecomp((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x44)));
}
