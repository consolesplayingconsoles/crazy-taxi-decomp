/* Straight-line functions with calls and guards (batch gen_ase): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int mwRnaCreate(int, int, int, int);
int thunk_ADXRNA_Create(int a4, int a5, int a6, int a7);

int thunk_ADXRNA_Create(int a4, int a5, int a6, int a7)
{
    return mwRnaCreate(a4, a5, a6, a7);
}
