/* Straight-line functions with calls and guards (batch gen_aaq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdFsStrcmp_tail_0c15fa1c(int, int);
int gdFsStrcmp(int a4, int a5);

int gdFsStrcmp(int a4, int a5)
{
    return gdFsStrcmp_tail_0c15fa1c(a4, a5);
}
