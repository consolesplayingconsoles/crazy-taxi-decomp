/* Straight-line functions with calls and guards (batch gen_asz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int buFbrDestroyServer(int, int, int, int);
int vmsfb_exit(int a4, int a5, int a6, int a7);

int vmsfb_exit(int a4, int a5, int a6, int a7)
{
    return buFbrDestroyServer((*(int *)0xC2FA53C), a5, a6, a7);
}
