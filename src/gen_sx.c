/* Straight-line functions with calls and guards (batch gen_sx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int gdFsReopenHn(int, int, int, int);
int gdFsDaPauseG(void);

int gdFsDaPauseG(void)
{
    int t2;
    int t23;
    int t3;
    int t7;
    int t19;
    int t21;
    int t10;
    int t11;

    t2 = gdFsReopenHn((*(int *)(((*(int *)0xC177A8C) + 0x14))), 0x0, 0x0, 0x0);
    t23 = 0xFFFFFFF3;
    if (t2 != 0) {
        t3 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t7 = ((int (*)(void))((*(int *)(((*(int *)(((*(int *)0xC177A8C) + 0xC))) + 0x30)))))();
        if (t7 != 0) {
            *(unsigned int *)((t2 + 0x3C)) = t7;
            *(unsigned short *)((t2 + 0x50)) = 0x4;
            if (((*(short *)(((*(int *)0xC177A8C) + 0x3A))) != 0) && (t10 = *(int *)0xC177A8C, t11 = *(int *)((t10 + 0x2C)), (int)t11 >= (int)0x10001)) {
                *(unsigned int *)((t2 + 0x4)) = 0xC2B8D98;
                *(unsigned short *)((t2 + 0x48)) = 0x8;
            } else {
                *(unsigned short *)((t2 + 0x48)) = 0x6;
            }
            *(unsigned int *)(((*(int *)((t2 + 0x0))) + 0x1C)) = t2;
            t19 = ((int (*)(void))((*(int *)(((*(int *)(((*(int *)0xC177A8C) + 0xC))) + 0x40)))))();
        }
        _builtin_set_imask(((unsigned int)(((t3 & 0xF) << 2) << 2) >> 4));
        t21 = 0x0;
        if (t7 == 0) {
            t21 = 0xFFFFFFF3;
        }
        t23 = t21;
    }
    return t23;
}
