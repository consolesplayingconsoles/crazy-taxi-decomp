/* Straight-line functions with calls and guards (batch gen_je): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmSetWaitVsyncCallback(int, int);
int nlSynchFunction(int a4);

int nlSynchFunction(int a4)
{
    register int t1;

    t1 = _builtin_get_cr();
    _builtin_set_cr((_builtin_get_cr() & 0xFFFFFFFF) | 0x10000000);
    kmSetWaitVsyncCallback(a4, 0x0);
    _builtin_set_cr((t1 & 0xFFFFFFFF));
    return 0x0;
}
