/* Straight-line functions with calls and guards (batch gen_hn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c14d324(void);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int gdFsClose(int);
int gdFsCreateHnG(int);
int gdFsReinitG(void);

int gdFsReinitG(void)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;

    t0 = *(int *)0xC177A8C;
    if (t0 == 0) {
        return 0xFFFFFFFF;
    }
    t2 = 0x0;
    t3 = (0x1080 + t0);
    for (;;) {
        t4 = *(int *)0xC177A8C;
        t5 = *(int *)((t4 + 0x0));
        if ((int)t2 >= (int)(t5 + 0x1)) {
            break;
        }
        gdFsClose(t3);
        t2 = (t2 + 0x1);
        t3 = (t3 + 0x54);
    }
    t7 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t8 = *(int *)0xC177A8C;
    t9 = *(int *)((t8 + 0xC));
    t10 = *(int *)((t9 + 0x0));
    t11 = ((int (*)(int))(t10))(t0);
    t12 = *(int *)0xC177A8C;
    *(unsigned short *)((t12 + 0x38)) = 0x0;
    t13 = *(int *)0xC177A8C;
    *(unsigned int *)((t13 + 0x20)) = 0x0;
    t14 = *(int *)0xC177A8C;
    *(unsigned int *)((t14 + 0x1C)) = 0x0;
    t15 = *(int *)0xC177A8C;
    *(unsigned short *)((t15 + 0x3A)) = 0x0;
    t16 = *(int *)0xC177A8C;
    t17 = 0x3A;
    t18 = (t16 + 0x1080);
    t19 = 0x0;
    for (;;) {
        t20 = *(int *)0xC177A8C;
        t21 = *(int *)((t20 + 0x0));
        if ((int)t19 >= (int)(t21 + 0x1)) {
            break;
        }
        t17 = 0x4C;
        *(unsigned short *)((t18 + t17)) = 0x0;
        t19 = (t19 + 0x1);
        t22 = *(int *)0xC177A8C;
        *(unsigned int *)((t18 + 0x0)) = t22;
        t18 = (t18 + 0x54);
    }
    t23 = *(int *)0xC177A8C;
    *(unsigned int *)((t23 + 0x14)) = (0x1080 + t23);
    t24 = *(int *)0xC177A8C;
    *(unsigned int *)((t24 + 0x18)) = ((0x1080 + t24) + 0x54);
    t25 = *(int *)0xC177A8C;
    t26 = *(int *)((t25 + 0x14));
    gdFsCreateHnG(t26);
    _builtin_set_imask(((unsigned int)(((t7 & 0xF) << 2) << 2) >> 4));
    return FUN_0c14d324();
}
