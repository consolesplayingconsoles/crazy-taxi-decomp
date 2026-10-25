/* Straight-line functions with calls and guards (batch gen_asb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int vmsfs_c_dispatch(int, int, int, int);
int vmsfs_c_fiber3(int a4, int a5, int a6, int a7);

int vmsfs_c_fiber3(int a4, int a5, int a6, int a7)
{
    return vmsfs_c_dispatch(0x3, a5, a6, a7);
}
