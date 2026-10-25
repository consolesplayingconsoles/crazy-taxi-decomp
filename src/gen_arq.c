/* Straight-line functions with calls and guards (batch gen_arq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlCloseEvent(int);
int thunk_nlCloseEvent(int a4);

int thunk_nlCloseEvent(int a4)
{
    return nlCloseEvent(a4);
}
