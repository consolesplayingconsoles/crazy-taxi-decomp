/* Straight-line functions with calls and guards (batch gen_asy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int buFbrExecFiberServer(int, int, int, int, float, float, float, float, float, float, float, float);
int vmsfb_exec(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);

int vmsfb_exec(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    return buFbrExecFiberServer((*(int *)0xC2FA53C), a5, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
}
