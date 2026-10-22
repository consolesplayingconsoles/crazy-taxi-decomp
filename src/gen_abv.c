/* Straight-line functions with calls and guards (batch gen_abv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c1722c2(int, int, int, int);
int FUN_0c172350(int, int, int, int);
int FUN_0c1723d6(int a4, int a5, int a6, int a7, int a8);

int FUN_0c1723d6(int a4, int a5, int a6, int a7, int a8)
{
    int t0;

    t0 = FUN_0c1722c2(a4, a5, a6, a7);
    if (a6 == 0) {
        return FUN_0c172350(a4, a5, (((((int)((int)(*(int *)((a4 + 0x28))) / (int)(*(int *)((a4 + 0x10))))) << 2) << 1) + a6), a7);
    }
    return t0;
}
