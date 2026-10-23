/* Straight-line functions with calls and guards (batch gen_aik): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ndGetButtonFrame(int a4);

int ndGetButtonFrame(int a4)
{
    return (*(int *)((0xC2A9C9C + (a4 << 2))));
}
