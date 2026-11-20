/* Straight-line functions with calls and guards (batch gen_fh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int strcmp(int, int);
int kmiGetProfileInt(int a4, int a5, int a6);

int kmiGetProfileInt(int a4, int a5, int a6)
{
    int t0;

    if (strcmp(a4, 0xC175BF4) != 0) {
        return a6;
    }
    t0 = strcmp(a5, 0xC175C00);
    if (t0 == 0) {
        return 0;
    }
    return a5;
}
