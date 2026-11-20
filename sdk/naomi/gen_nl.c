/* Straight-line functions with calls and guards (batch gen_nl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmfSetTimeOutCount(int, int);
int nlSysSetTimeOutCount(int a4, int a5);

int nlSysSetTimeOutCount(int a4, int a5)
{
    return kmfSetTimeOutCount(a4, a5);
}
