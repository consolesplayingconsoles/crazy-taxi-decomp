/* Straight-line functions with calls and guards (batch gen_abb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXB_GetCof(int);
int FUN_0c168886(int a4);

int FUN_0c168886(int a4)
{
    return ADXB_GetCof((*(int *)((a4 + 0x4))));
}
