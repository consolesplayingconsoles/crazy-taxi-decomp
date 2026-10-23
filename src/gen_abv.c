/* Straight-line functions with calls and guards (batch gen_abv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int mwlSbTrnsDat(int, int, int, int);
int mwlSbTrnsEx(int, int, int, int);
int mwSbTrns(int a4, int a5, int a6, int a7, int a8);

int mwSbTrns(int a4, int a5, int a6, int a7, int a8)
{
    int t0;

    t0 = mwlSbTrnsDat(a4, a5, a6, a7);
    if (a6 == 0) {
        return mwlSbTrnsEx(a4, a5, (((((int)((int)(*(int *)((a4 + 0x28))) / (int)(*(int *)((a4 + 0x10))))) << 2) << 1) + a6), a7);
    }
    return t0;
}
