/* Straight-line functions with calls and guards (batch gen_mz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmGetFreeTextureMem(int, int);
int FUN_0c073c00(void);

int FUN_0c073c00(void)
{
    int stk[4] = {0};

    kmGetFreeTextureMem((((int)stk + 4) + 0x4), ((int)stk + 4));
    return (*(int *)(((int)stk + 4)));
}
