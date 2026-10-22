/* Straight-line functions with calls and guards (batch gen_sp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
void FUN_0c14dd4c(int a4, int a5);

void FUN_0c14dd4c(int a4, int a5)
{
    int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)(((*(int *)0xC177A8C) + 0x24)) = a4;
    *(unsigned int *)(((*(int *)0xC177A8C) + 0x28)) = a5;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
}
