/* Straight-line functions with calls and guards (batch gen_akp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXSJD_GetTrapDtLen(int a4);
struct o44_int { char p[0x44]; int v; };


int ADXSJD_GetTrapDtLen(int a4)
{
    return ((((struct o44_int *)(a4))->v));
}
