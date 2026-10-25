/* Straight-line functions with calls and guards (batch gen_asx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int mwRnaErrEntryFunc(int, int);
int thunk_mwRnaErrEntryFunc(int a4, int a5);

int thunk_mwRnaErrEntryFunc(int a4, int a5)
{
    return mwRnaErrEntryFunc(a4, a5);
}
