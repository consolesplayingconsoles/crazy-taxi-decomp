/* Straight-line functions with calls and guards (batch gen_hr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int gdFsReopenHn(int);
int FUN_0c14e0f6(int a4);

int FUN_0c14e0f6(int a4)
{
    int t0;
    int t1;
    int t2;
    int t65;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
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
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t63;
    int t61;
    int t48;
    int t27;

    t0 = *(int *)0xC177A8C;
    t1 = *(int *)((t0 + 0x14));
    t2 = gdFsReopenHn(t1);
    t65 = 0xFFFFFFF3;
    if (t2 != 0) {
        t3 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t4 = *(int *)0xC177A8C;
        t5 = *(short *)((t4 + 0x3A));
        if (t5 != 0) {
            t6 = *(int *)0xC2B8D94;
            t7 = *(int *)0xC2B8D98;
            if (t6 != t7) {
                *(unsigned short *)((t4 + 0x3A)) = 0x0;
            }
        }
        t16 = *(int *)0xC177A8C;
        t17 = *(short *)((t16 + 0x3A));
        if (t17 != 0) {
            t18 = *(int *)((t16 + 0x2C));
            if ((int)t18 >= (int)0x10001) {
                t19 = *(int *)0xC2B8D8C;
                t20 = *(int *)0xC2B8D90;
                t21 = *(int *)0xC2B8D84;
                t22 = *(int *)0xC2B8D88;
                if (t21 == 1) {
                    t23 = *(int *)((t16 + 0xC));
                    t24 = *(int *)((t23 + 0x28));
                    t27 = t24;
                } else {
                    t25 = *(int *)((t16 + 0xC));
                    t26 = *(int *)((t25 + 0x2C));
                    t27 = t26;
                }
                t29 = ((int (*)(int, int, int))(t27))(t22, t19, t20);
                if (t29 != 0) {
                    *(unsigned int *)((t2 + 0x3C)) = t29;
                    *(unsigned short *)((t2 + 0x50)) = 0x4;
                    *(unsigned int *)((t2 + 0x4)) = 0xC2B8D94;
                    *(unsigned short *)((t2 + 0x48)) = 0x8;
                    t30 = *(int *)((t2 + 0x0));
                    *(unsigned int *)((t30 + 0x1C)) = t2;
                    t31 = *(int *)0xC177A8C;
                    t32 = *(int *)((t31 + 0xC));
                    t33 = *(int *)((t32 + 0x40));
                    t34 = ((int (*)(void))(t33))();
                }
                t48 = t29;
            } else {
                t37 = *(int *)((t16 + 0xC));
                t38 = *(int *)((t37 + 0x34));
                t39 = ((int (*)(int))(t38))(a4);
                if (t39 != 0) {
                    *(unsigned int *)((t2 + 0x3C)) = t39;
                    *(unsigned short *)((t2 + 0x50)) = 0x4;
                    *(unsigned short *)((t2 + 0x48)) = 0x6;
                    t40 = *(int *)((t2 + 0x0));
                    *(unsigned int *)((t40 + 0x1C)) = t2;
                    t41 = *(int *)0xC177A8C;
                    t42 = *(int *)((t41 + 0xC));
                    t43 = *(int *)((t42 + 0x40));
                    t44 = ((int (*)(void))(t43))();
                }
                t48 = t39;
            }
            t61 = t48;
        } else {
            t50 = *(int *)((t16 + 0xC));
            t51 = *(int *)((t50 + 0x34));
            t52 = ((int (*)(int))(t51))(a4);
            if (t52 != 0) {
                *(unsigned int *)((t2 + 0x3C)) = t52;
                *(unsigned short *)((t2 + 0x50)) = 0x4;
                *(unsigned short *)((t2 + 0x48)) = 0x6;
                t53 = *(int *)((t2 + 0x0));
                *(unsigned int *)((t53 + 0x1C)) = t2;
                t54 = *(int *)0xC177A8C;
                t55 = *(int *)((t54 + 0xC));
                t56 = *(int *)((t55 + 0x40));
                t57 = ((int (*)(void))(t56))();
            }
            t61 = t52;
        }
        _builtin_set_imask(((unsigned int)(((t3 & 0xF) << 2) << 2) >> 4));
        t63 = 0x0;
        if (t61 == 0) {
            t63 = 0xFFFFFFF3;
        }
        t65 = t63;
    }
    return t65;
}
