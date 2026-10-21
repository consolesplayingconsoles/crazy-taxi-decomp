/* Straight-line functions with calls and guards (batch gen_ez): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void FUN_0c081470(int a4, int a5);

void FUN_0c081470(int a4, int a5)
{
    int t0;

    for (t0 = 0; ; t0++) { *(unsigned char *)(a4 + t0) = *(unsigned char *)(a5 + t0); if (*(unsigned char *)(a5 + t0) == 0) break; }
}
