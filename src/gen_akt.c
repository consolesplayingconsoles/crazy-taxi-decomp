/* Straight-line functions with calls and guards (batch gen_akt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void FUN_0c160c90(int a4);

void FUN_0c160c90(int a4)
{
    _builtin_set_cr((_builtin_get_cr() & 0xEFFFFF0F) | (((((a4 << 1) << 1) << 1) << 1)));
}
