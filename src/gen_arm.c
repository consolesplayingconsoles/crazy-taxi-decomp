/* Straight-line functions with calls and guards (batch gen_arm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int _slow_strcmp1(int, int);
int strcmp(int a4, int a5);

int strcmp(int a4, int a5)
{
    return (_slow_strcmp1(a4, a5));
}
