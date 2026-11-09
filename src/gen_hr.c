/* Straight-line functions with calls and guards (batch gen_hr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int gdFsReopenHn(int);
int gdFsDaReleaseG(int a4);
struct o3A_short { char p[0x3A]; short v; };
struct o3A_ushort { char p[0x3A]; unsigned short v; };
struct o40_int { char p[0x40]; int v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct oC_int { char p[0xC]; int v; };



int gdFsDaReleaseG(int a4)
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
    int t25;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t37;
    int t38;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t50;
    int t51;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t61;
    int t27;

    t0 = *(int *)0xC177A8C;
    t1 = *(int *)((t0 + 0x14));
    t2 = gdFsReopenHn(t1);
    t65 = 0xFFFFFFF3;
    if (t2 != 0) {
        t3 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t4 = *(int *)0xC177A8C;
        t5 = (((struct o3A_short *)(t4))->v);
        if (t5 != 0) {
            t6 = (((struct o10_int *)0xC2B8D84)->v);
            t7 = (((struct o14_int *)0xC2B8D84)->v);
            if (t6 != t7) {
                (((struct o3A_ushort *)(t4))->v) = 0x0;
            }
        }
        t16 = *(int *)0xC177A8C;
        t17 = (((struct o3A_short *)(t16))->v);
        if (t17 != 0) {
            t18 = *(int *)((t16 + 0x2C));
            if ((int)t18 >= (int)0x10001) {
                t19 = (((struct o8_int *)0xC2B8D84)->v);
                t20 = (((struct oC_int *)0xC2B8D84)->v);
                t21 = (((struct o0_int *)0xC2B8D84)->v);
                t22 = (((struct o4_int *)0xC2B8D84)->v);
                if (t21 == 1) {
                    t23 = *(int *)((t16 + 0xC));
                    t27 = *(int *)((t23 + 0x28));
                } else {
                    t25 = *(int *)((t16 + 0xC));
                    t27 = *(int *)((t25 + 0x2C));
                }
                t61 = ((int (*)(int, int, int))(t27))(t22, t19, t20);
                if (t61 != 0) {
                    *(unsigned int *)((t2 + 0x3C)) = t61;
                    (((struct o50_ushort *)(t2))->v) = 0x4;
                    *(unsigned int *)((t2 + 0x4)) = 0xC2B8D94;
                    (((struct o48_ushort *)(t2))->v) = 0x8;
                    t30 = *(int *)((t2 + 0x0));
                    *(unsigned int *)((t30 + 0x1C)) = t2;
                    t31 = *(int *)0xC177A8C;
                    t32 = *(int *)((t31 + 0xC));
                    t33 = (((struct o40_int *)(t32))->v);
                    t34 = ((int (*)(void))(t33))();
                }
            } else {
                t37 = *(int *)((t16 + 0xC));
                t38 = *(int *)((t37 + 0x34));
                t61 = ((int (*)(int))(t38))(a4);
                if (t61 != 0) {
                    *(unsigned int *)((t2 + 0x3C)) = t61;
                    (((struct o50_ushort *)(t2))->v) = 0x4;
                    (((struct o48_ushort *)(t2))->v) = 0x6;
                    t40 = *(int *)((t2 + 0x0));
                    *(unsigned int *)((t40 + 0x1C)) = t2;
                    t41 = *(int *)0xC177A8C;
                    t42 = *(int *)((t41 + 0xC));
                    t43 = (((struct o40_int *)(t42))->v);
                    t44 = ((int (*)(void))(t43))();
                }
            }
        } else {
            t50 = *(int *)((t16 + 0xC));
            t51 = *(int *)((t50 + 0x34));
            t61 = ((int (*)(int))(t51))(a4);
            if (t61 != 0) {
                *(unsigned int *)((t2 + 0x3C)) = t61;
                (((struct o50_ushort *)(t2))->v) = 0x4;
                (((struct o48_ushort *)(t2))->v) = 0x6;
                t53 = *(int *)((t2 + 0x0));
                *(unsigned int *)((t53 + 0x1C)) = t2;
                t54 = *(int *)0xC177A8C;
                t55 = *(int *)((t54 + 0xC));
                t56 = (((struct o40_int *)(t55))->v);
                t57 = ((int (*)(void))(t56))();
            }
        }
        _builtin_set_imask(((unsigned int)(((t3 & 0xF) << 2) << 2) >> 4));
        t65 = 0x0;
        if (t61 == 0) {
            t65 = 0xFFFFFFF3;
        }
    }
    return t65;
}
