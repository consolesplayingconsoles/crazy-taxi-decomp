/* Straight-line functions with calls and guards (batch gen_adh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c15fab8(int, int);
int gdFsReadWG(int, int, int);
int gdFsGetDirEnt(int a4, int a5, int a6, int a7);

int gdFsGetDirEnt(int a4, int a5, int a6, int a7)
{
    int t27;
    int t3;
    int t4;
    int t5;
    int t7;
    int t12;
    int t15;
    int t6;
    int t8;
    int t9;
    int t17;
    int t23;
    int t24;
    int t25;
    int t26;
    int stk[12] = {0};

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t27 = 0x0;
    if ((*(int *)((a6 + 0x8))) != a5) {
        *(unsigned int *)((a6 + 0x8)) = (*(int *)(((int)stk + 4)));
        t3 = *(int *)((a6 + 0x4));
        *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 8))) + 0x800);
        t4 = a7;
        t5 = (a6 + 0x10);
        t7 = 0x0;
        for (;;) {
            if ((int)t4 <= 0) {
                *(unsigned int *)((a6 + 0x0)) = t7;
                if ((t7 == t3) && ((t4 != 0) && ((t4 != 0x800) || ((t8 = *(int *)(((int)stk + 12)), (unsigned int)t6 < (unsigned int)t8) && (t9 = *(signed char *)((t6 + 0x0)), t9 != 0))))) {
                    *(unsigned int *)((a6 + 0x8)) = 0x0;
                    return 0xFFFFFFF4;
                }
                return 0x0;
            }
            t12 = gdFsReadWG((*(int *)(((int)stk + 4))), 0x1, (*(int *)(((int)stk + 8))));
            if (t12 != 0) {
                break;
            }
            t6 = (*(int *)(((int)stk + 8)));
            if ((int)t7 < (int)t3) {
                for (;;) {
                    t15 = FUN_0c15fab8(t6, t5);
                    if (t15 != 0) {
                        if ((t7 == 0) && (t17 = *(int *)((t5 + 0x4)), t17 != t4)) {
                            t4 = (*(int *)((t5 + 0x4)));
                        }
                        t6 = (t6 + t15);
                        t5 = (t5 + 0x2C);
                        t7 = (t7 + 0x1);
                        if (((unsigned int)t6 < (unsigned int)(*(int *)(((int)stk + 12)))) && ((int)t7 < (int)t3)) continue;
                        break;
                    }
                    break;
                }
                if ((int)t7 < (int)t3) {
                    t4 = (t4 - 0x800);
                    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
                    continue;
                }
                *(unsigned int *)((a6 + 0x0)) = t7;
                if ((t7 == t3) && ((t4 != 0) && ((t4 != 0x800) || ((t23 = *(int *)(((int)stk + 12)), (unsigned int)t6 < (unsigned int)t23) && (t24 = *(signed char *)((t6 + 0x0)), t24 != 0))))) {
                    *(unsigned int *)((a6 + 0x8)) = 0x0;
                    return 0xFFFFFFF4;
                }
                return 0x0;
            }
            *(unsigned int *)((a6 + 0x0)) = t7;
            if ((t7 == t3) && ((t4 != 0) && ((t4 != 0x800) || ((t25 = *(int *)(((int)stk + 12)), (unsigned int)t6 < (unsigned int)t25) && (t26 = *(signed char *)((t6 + 0x0)), t26 != 0))))) {
                *(unsigned int *)((a6 + 0x8)) = 0x0;
                return 0xFFFFFFF4;
            }
            return 0x0;
        }
        *(unsigned int *)((a6 + 0x8)) = 0x0;
        t27 = t12;
    }
    return t27;
}
