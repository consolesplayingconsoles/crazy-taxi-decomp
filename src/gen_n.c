/* Straight-line functions with calls and guards (batch gen_n): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXRNA_DiscardData(int, int, int, int);
int FUN_0c152340(void);

int ADXT_DiscardSmpl(int a4, int a5, int a6, int a7)
{
    int r;

    if (*(signed char *)(a4 + 0x72) == 0) {
        return 0;
    }
    r = ADXRNA_DiscardData(*(int *)(a4 + 0xC), a5, a6, a7);
    FUN_0c152340();
    return r;
}
