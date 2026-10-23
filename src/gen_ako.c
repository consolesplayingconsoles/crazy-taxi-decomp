/* Straight-line functions with calls and guards (batch gen_ako): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXSJD_GetTrapCnt(int a4);

int ADXSJD_GetTrapCnt(int a4)
{
    return (*(int *)((a4 + 0x40)));
}
