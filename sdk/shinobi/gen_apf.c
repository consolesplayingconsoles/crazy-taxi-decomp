/* Straight-line functions with calls and guards (batch gen_apf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
#pragma inline_asm(iaOcbwb)
static void iaOcbwb(void *p)
{
    .DATA.W H'04B3
}
void syCacheOCWB(int a4, int a5);

void syCacheOCWB(int a4, int a5)
{
    int t1;
    int t2;
    int stk[6];

    if (a5 == 0) {
        return;
    }
    if ((unsigned int)a5 >= (unsigned int)0x10000) {
        *(unsigned short *)(((int)stk + 4)) = (_builtin_get_imask());
        _builtin_set_imask(0xF);
        ((int (*)(int, int))(0xAC14F20C))(a4, a5);
    return;
    }
    t1 = (0x9FFFFFE0 & a4);
    t2 = ((unsigned int)((unsigned int)((unsigned int)(((0x1F & a4) + a5) + 0x1F) >> 2) >> 2) >> 1);
    for (;;) {
        iaOcbwb((void *)t1);
        t2 = (t2 - 0x1);
        t1 = (t1 + 0x20);
        if (t2 == 0) {
            break;
        }
    }
}
