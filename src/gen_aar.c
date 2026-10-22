/* Straight-line functions with calls and guards (batch gen_aar): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c16766c(void);
int FUN_0c15f95a(int a4);

int FUN_0c15f95a(int a4)
{
    int stk[5] = {0};

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = 0x0;
    return (FUN_0c16766c());
}
