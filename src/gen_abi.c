/* Straight-line functions with calls and guards (batch gen_abi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int adxb_DefGetWr(int a4, int a5, int a6, int a7);

int adxb_DefGetWr(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)((a5 + 0x0)) = (*(int *)((a4 + 0x9C)));
    *(unsigned int *)((a6 + 0x0)) = ((*(int *)((a4 + 0x40))) - (*(int *)((a4 + 0x9C))));
    *(unsigned int *)((a7 + 0x0)) = ((*(int *)((a4 + 0x18))) - (*(int *)((a4 + 0x98))));
    return (*(int *)((a4 + 0x3C)));
}
