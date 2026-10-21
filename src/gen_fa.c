/* Straight-line functions with calls and guards (batch gen_fa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern void _builtin_set_imask(int);
void syChainMasterHandlerPVR_V(void);

void syChainMasterHandlerPVR_V(void)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    _builtin_set_imask(0x6);
    t0 = *(int *)0xC2EBE50;
    t2 = t0;
    for (;;) {
        if (t2 == 0) {
            break;
        }
        t3 = *(int *)((t2 + 0x0));
        t4 = *(int *)((t2 + 0x8));
        t5 = ((int (*)(int))(t3))(t4);
        t6 = *(int *)((t2 + 0x4));
        t2 = t6;
    }
}
