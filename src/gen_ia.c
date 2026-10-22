/* Straight-line functions with calls and guards (batch gen_ia): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c07f5c0(int);
int Sound_Execute(int a4, int a5);

int Sound_Execute(int a4, int a5)
{
    int t3;
    int t4;
    int t5;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t26;
    int t27;
    int t0;
    int t1;
    int t2;
    int t6;
    int t7;
    int t8;
    int t21;
    int t23;
    int t24;
    int stk[10] = {0};

    t3 = a4;
    t4 = a5;
    t5 = 0x0;
    for (;;) {
        if ((int)t5 >= (int)0x3) {
            break;
        }
        t7 = t5;
        t7 = (t7 << 2);
        t7 = (t7 << 1);
        t2 = t5;
        t7 = (t7 + t2);
        t8 = t5;
        t7 = (t7 << 2);
        t7 = (t7 << 2);
        t1 = 0xC2AE388;
        t8 = (t8 << 2);
        t7 = (t7 << 1);
        t6 = t8;
        t7 = (short)t7;
        *(unsigned int *)(((int)stk + 4)) = (0xC2AE700 + t8);
        t6 = (t6 + 0xC2AE6F4);
        t7 = (t7 + t1);
        for (;;) {
            t9 = *(int *)(((int)stk + 4));
            t2 = t9;
            t10 = *(int *)((t2 + 0x0));
            if ((int)t10 <= 0) {
                t21 = t1; t23 = t2; t24 = t3; break;
            }
            t11 = *(int *)((t6 + 0x0));
            t3 = t11;
            t12 = *(int *)((t3 + 0x0));
            t3 = t12;
            t13 = FUN_0c07f5c0(t3);
            t0 = t13;
            t4 = t0;
            if (t0 != -1) {
                t3 = t8;
                t3 = (t3 + 0xC2AE6F4);
                t14 = *(int *)((t3 + 0x0));
                t2 = t14;
                t0 = 0xC2AE700;
                *(unsigned int *)((t2 + 0x0)) = 0x0;
                t15 = *(int *)((t8 + t0));
                t2 = t15;
                t2 = (t2 - 1);
                *(unsigned int *)((t8 + t0)) = t2;
                t16 = *(int *)((t3 + 0x0));
                t2 = 0xC080F10;
                t1 = (t16 + 0x4);
                t1 = (t1 - t7);
                *(unsigned int *)((t3 + 0x0)) = (t16 + 0x4);
                t0 = 0x4;
                t17 = (int)((int)t1 / (int)t0);
                t0 = t17;
                t3 = t0;
                if ((int)t3 < (int)0x48) {
                    t2 = 0xFFFFFFB8;
                    if ((int)t3 <= (int)t2) {
                        *(unsigned int *)((t6 + 0x0)) = t7;
                    }
                } else {
                    *(unsigned int *)((t6 + 0x0)) = t7;
                }
                continue;
            }
            break;
        }
        t0 = t4;
        t1 = t21;
        t2 = t23;
        t3 = t24;
        if (t0 != -1) {
            t5 = (t5 + 0x1);
            continue;
        }
        break;
    }
    t26 = 0xC2AE5C8;
    t27 = 0x0;
    for (;;) {
        t27 = (t27 + 0x1);
        *(unsigned int *)((t26 + 0x0)) = 0x0;
        t26 = (t26 + 0x4);
        if ((int)t27 >= (int)0x48) {
            break;
        }
    }
    return t0;
}
