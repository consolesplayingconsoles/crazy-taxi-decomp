/* Straight-line functions with calls and guards (batch gen_atm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int vmsfb_exec(int, int, int, int, float, float, float, float, float, float, float, float);
int vmsfs_c_synch(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);

int vmsfs_c_synch(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    return vmsfb_exec(a4, a5, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
}
