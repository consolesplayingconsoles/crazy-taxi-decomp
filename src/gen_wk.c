/* Straight-line functions with calls and guards (batch gen_wk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int malloc(int, int);
int FUN_0c14f8de(int a4, int a5);

int FUN_0c14f8de(int a4, int a5)
{
    int t1;
    int t2;
    int t6;
    int t3;
    int t4;
    int t7;
    int t8;
    int t11;
    int stk[5] = {0};

    *(unsigned short *)(((int)stk + 4)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    t1 = *(short *)(((int)stk + 4));
    t2 = malloc((a5 * a4), a5);
    if (t2 != 0) {
        t6 = 0x0;
        if ((unsigned int)0x0 < (unsigned int)(a5 * a4)) {
            t3 = 0x0;
            for (;;) {
                t4 = (t2 + t3);
                t3 = (t3 + 0x4);
                *(unsigned int *)((t4 + 0x0)) = 0x0;
                if ((unsigned int)t3 >= (unsigned int)(a5 * a4)) {
                    break;
                }
            }
            t6 = t3;
        }
        if ((unsigned int)(t6 - 4) < (unsigned int)((a5 * a4) & 0x3)) {
            t7 = (t6 - 4);
            t8 = (t2 + (t6 - 4));
            for (;;) {
                t7 = (t7 + 0x1);
                *(unsigned char *)((t8 + 0x0)) = 0x0;
                t8 = (t8 + 0x1);
                if ((unsigned int)t7 >= (unsigned int)((a5 * a4) & 0x3)) {
                    break;
                }
            }
        }
        _builtin_set_imask(((unsigned int)((((unsigned short)t1 & 0xF) << 2) << 2) >> 4));
        t11 = t2;
    } else {
        _builtin_set_imask(((unsigned int)((((unsigned short)t1 & 0xF) << 2) << 2) >> 4));
        t11 = 0x0;
    }
    return t11;
}
