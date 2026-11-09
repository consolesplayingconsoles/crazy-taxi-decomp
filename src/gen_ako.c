/* Straight-line functions with calls and guards (batch gen_ako): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXSJD_GetTrapCnt(int a4);
struct o40_int { char p[0x40]; int v; };


int ADXSJD_GetTrapCnt(int a4)
{
    return ((((struct o40_int *)(a4))->v));
}
