/* Straight-line functions with calls and guards (batch gen_abi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int adxb_DefGetWr(int a4, int a5, int a6, int a7);
struct o40_int { char p[0x40]; int v; };
struct o98_int { char p[0x98]; int v; };
struct o9C_int { char p[0x9C]; int v; };


int adxb_DefGetWr(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)((a5 + 0x0)) = ((((struct o9C_int *)(a4))->v));
    *(unsigned int *)((a6 + 0x0)) = (((((struct o40_int *)(a4))->v)) - ((((struct o9C_int *)(a4))->v)));
    *(unsigned int *)((a7 + 0x0)) = ((*(int *)((a4 + 0x18))) - ((((struct o98_int *)(a4))->v)));
    return (*(int *)((a4 + 0x3C)));
}
