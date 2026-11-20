/* Straight-line functions with calls and guards (batch gen_aru): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int buUnmount(int);
int buUnmountDisk(int a4);

int buUnmountDisk(int a4)
{
    return buUnmount(a4);
}
