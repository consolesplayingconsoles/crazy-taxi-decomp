/* Straight-line functions with calls and guards (batch gen_vv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
void FUN_0c14f6f4(int a4, int a5, int a6);

void FUN_0c14f6f4(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    if (a4 != 0) {
        t2 = (*(int *)0xC2B9358);
        t3 = a6;
        for (;;) {
            if ((((unsigned int)(a4 - 32) > (unsigned int)t2) && (t4 = *(int *)((t2 + 0x0)), (unsigned int)(a4 - 32) < (unsigned int)t4)) || ((t5 = *(int *)((t2 + 0x0)), t3 = t5, (unsigned int)t2 >= (unsigned int)t3) && (((unsigned int)(a4 - 32) > (unsigned int)t2) || ((unsigned int)(a4 - 32) < (unsigned int)t3)))) {
                break;
            }
            t2 = (*(int *)((t2 + 0x0)));
        }
        if ((((((*(int *)(((a4 - 32) + 0x4))) << 2) << 2) << 1) + (a4 - 32)) == (*(int *)((t2 + 0x0)))) {
            *(unsigned int *)(((a4 - 32) + 0x4)) = ((*(int *)(((a4 - 32) + 0x4))) + (*(int *)(((*(int *)((t2 + 0x0))) + 0x4))));
            *(unsigned int *)(((a4 - 32) + 0x0)) = (*(int *)(((*(int *)((t2 + 0x0))) + 0x0)));
        } else {
            *(unsigned int *)(((a4 - 32) + 0x0)) = (*(int *)((t2 + 0x0)));
        }
        if ((((((*(int *)((t2 + 0x4))) << 2) << 2) << 1) + t2) == (a4 - 32)) {
            *(unsigned int *)((t2 + 0x4)) = ((*(int *)((t2 + 0x4))) + (*(int *)(((a4 - 32) + 0x4))));
            *(unsigned int *)((t2 + 0x0)) = (*(int *)(((a4 - 32) + 0x0)));
        } else {
            *(unsigned int *)((t2 + 0x0)) = (a4 - 32);
        }
        *(unsigned int *)0xC2B9358 = t2;
    }
    _builtin_set_imask(((unsigned int)((((unsigned short)t0 & 0xF) << 2) << 2) >> 4));
}
