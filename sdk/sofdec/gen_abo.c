/* Straight-line functions with calls and guards (batch gen_abo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlsndStreamGetBufInfo(int, int, int);
int mwSbGetBufSize(int a4);

int mwSbGetBufSize(int a4)
{
    int stk[4] = {0};

    *(unsigned int *)((a4 + 0x20)) = (nlsndStreamGetBufInfo((*(short *)((a4 + 0x6))), 0x0, ((int)stk + 4)));
    *(unsigned int *)((a4 + 0x28)) = (*(int *)(((int)stk + 4)));
    return ((((int)((int)(*(int *)(((int)stk + 4))) / (int)(*(int *)((a4 + 0x10))))) << 2) << 1);
}
