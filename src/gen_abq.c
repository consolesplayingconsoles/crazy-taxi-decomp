/* Straight-line functions with calls and guards (batch gen_abq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c07fbb0(int);
int FUN_0c171d9a(int a4);

int FUN_0c171d9a(int a4)
{
    int t1;

    t1 = FUN_0c07fbb0((*(short *)((a4 + 0x6))));
    *(unsigned int *)((a4 + 0x14)) = t1;
    return t1;
}
