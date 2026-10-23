/* Straight-line functions with calls and guards (batch gen_ho): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int gdFsReopenHn(int);
int gdFsDaGetInfoG(int a4);

int gdFsDaGetInfoG(int a4)
{
    int t0;
    int t1;
    int t2;
    int t18;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t16;

    t0 = *(int *)0xC177A8C;
    t1 = *(int *)((t0 + 0x14));
    t2 = gdFsReopenHn(t1);
    t18 = 0xFFFFFFF3;
    if (t2 != 0) {
        t3 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t4 = *(int *)0xC177A8C;
        t5 = *(int *)0xC177A8C;
        t6 = *(int *)((t4 + 0xC));
        t7 = *(int *)((t6 + 0x3C));
        t8 = ((int (*)(int, int, int))(t7))(0x0, 0x64, (t5 + 0x40));
        if (t8 != 0) {
            *(unsigned int *)((t2 + 0x3C)) = t8;
            *(unsigned short *)((t2 + 0x50)) = 0x4;
            *(unsigned short *)((t2 + 0x48)) = 0x7;
            *(unsigned int *)((t2 + 0x8)) = a4;
            t9 = *(int *)((t2 + 0x0));
            *(unsigned int *)((t9 + 0x1C)) = t2;
            t10 = *(int *)0xC177A8C;
            t11 = *(int *)((t10 + 0xC));
            t12 = *(int *)((t11 + 0x40));
            t13 = ((int (*)(void))(t12))();
        }
        _builtin_set_imask(((unsigned int)(((t3 & 0xF) << 2) << 2) >> 4));
        t16 = 0x0;
        if (t8 == 0) {
            t16 = 0xFFFFFFF3;
        }
        t18 = t16;
    }
    return t18;
}
