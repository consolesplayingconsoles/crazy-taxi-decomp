/* Straight-line functions with calls and guards (batch gen_abf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int mwRnaErrCallFunc(int, ...);
int mwRnaSetFilter(int a4, int a5, int a6);

int mwRnaSetFilter(int a4, int a5, int a6)
{
    int t1;

    if (a4 == 0) {
        return (mwRnaErrCallFunc(0xC176680));
    }
    *(unsigned int *)((a4 + 0x7C)) = a5;
    *(unsigned int *)((a4 + 0x80)) = a6;
    t1 = *(int *)((a4 + 0x38));
    return ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x44)))))(t1, 0x3, a5, a6);
}
