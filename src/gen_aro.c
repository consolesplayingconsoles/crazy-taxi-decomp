/* Straight-line functions with calls and guards (batch gen_aro): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int MainLoop(int, float, float, float);
int thunk_FUN_0c02a9ac(int a4, float f4, float f5, float f6);

int thunk_FUN_0c02a9ac(int a4, float f4, float f5, float f6)
{
    return MainLoop(a4, f4, f5, f6);
}
