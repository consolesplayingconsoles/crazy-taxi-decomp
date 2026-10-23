/* Straight-line functions with calls and guards (batch gen_aho): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ReturnBreakSBoard(int a4);

int ReturnBreakSBoard(int a4)
{
    return (*(int *)((0xC2757F8 + (a4 << 2))));
}
