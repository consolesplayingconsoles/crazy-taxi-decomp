/* Straight-line functions with calls and guards (batch gen_aah): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SearchUsed(int, int);
int kmiMIPallocSub2(int a4, int a5, int a6);

int kmiMIPallocSub2(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t43;
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t3;
    int t11;
    int t12;
    int t13;
    int t33;
    int t34;
    int t37;
    int t38;
    int t22;
    int t25;
    int t26;
    int t27;
    int t28;
    int t30;
    int t31;
    int stk[12] = {0};

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    t0 = *(int *)((((((short)a4 << 2) + (short)a4) << 2) + 0xC177FBC));
    t1 = *(int *)0xC177FA8;
    t43 = 0x0;
    if (t0 != 0) {
        t2 = 0xC177FBC;
        t4 = (short)a4;
        t5 = a5;
        t6 = a6;
        t7 = 0x0;
        t8 = t1;
        t9 = t0;
        for (;;) {
            t10 = *(short *)((t9 + 0x0));
            if ((((unsigned short)t10 & 0x4) == 0) && ((t3 = 0x2, (t3 & (unsigned short)t10) != 0) && ((t4 = 0x1800, (t4 & (unsigned short)t10) != 0) && ((t11 = *(int *)((t9 + 0x10)), t12 = *(int *)(((int)stk + 8)), t3 = t12, (int)t11 >= (int)t3) && (t13 = *(int *)((t9 + 0x10)), (int)t13 < (int)t8))))) {
                t5 = (*(int *)0xC177FB0);
                if ((short)a4 == 0) {
                    t22 = ((*(int *)((t9 + 0xC))) + t5);
                } else {
                    t22 = ((*(int *)((t9 + 0xC))) - t5);
                }
                t5 = ((int)stk + 4);
                t2 = (SearchUsed(t22, t5));
                if ((t2 != 0) && (t25 = *(int *)((t2 + 0x14)), t4 = t25, t26 = *(short *)((t4 + 0x0)), t27 = *(int *)(((int)stk + 12)), t4 = t27, t28 = *(short *)((t4 + 0x0)), t3 = t28, t3 = (unsigned short)t3, t3 = (t3 & 0xF000), ((unsigned short)t26 & 0xF000) == t3)) {
                    t8 = (*(int *)((t9 + 0x10)));
                    t7 = t9;
                    t30 = t3;
                    t31 = t4;
                }
                t33 = t30;
                t34 = t31;
            } else {
                t33 = t3;
                t34 = t4;
                t37 = t5;
                t38 = t6;
            }
            t3 = t33;
            t9 = (*(int *)((t9 + 0x8)));
            t4 = t34;
            t5 = t37;
            t6 = t38;
            if (t9 == 0) {
                break;
            }
        }
        t43 = t7;
    }
    return t43;
}
