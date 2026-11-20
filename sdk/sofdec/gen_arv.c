/* Straight-line functions with calls and guards (batch gen_arv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXERR_EntryErrFunc(int, int);
int thunk_ADXT_EntryErrFunc(int a4, int a5);

int thunk_ADXT_EntryErrFunc(int a4, int a5)
{
    return ADXERR_EntryErrFunc(a4, a5);
}
