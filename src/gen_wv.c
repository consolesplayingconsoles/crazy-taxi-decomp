/* Straight-line functions with calls and guards (batch gen_wv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c151b04(int, int);
int gdc_StreamPlayF(int a4, int a5, int a6);

int gdc_StreamPlayF(int a4, int a5, int a6)
{
    int t0;
    int t1;

    if (a4 == 1) {
        t0 = *(int *)(((a5 << 2) + 0xC1EE810));
        return FUN_0c151b04(t0, a6);
    }
    t1 = *(int *)(((a5 << 2) + 0xC1EE820));
    return FUN_0c151b04(t1, a6);
}
