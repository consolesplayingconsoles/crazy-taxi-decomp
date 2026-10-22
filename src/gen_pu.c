/* Straight-line functions with calls and guards (batch gen_pu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int menuChangeValue(int, int, int);
int putMenuValue(int, int, int, int);
int ndPuru2Start(int, int, int);
int vibIsReady(void);
int ndPuru2Stop(void);
int menuItemVibration(int a4);

int menuItemVibration(int a4)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t30;
    int t33;
    int t34;
    int t38;
    int t39;
    int t31;
    int t27;
    int t28;
    int t35;
    int t36;
    int stk[7] = {0};

    *(unsigned char *)(((int)stk + 8)) = 0x0;
    t0 = vibIsReady();
    t1 = (((int)stk + 4) + 0x4);
    if (t0 == 1) {
        t1 = 0xC28A4EF;
    }
    t3 = *(signed char *)((t1 + 0x0));
    t4 = *(int *)0xC2A1214;
    *(unsigned int *)(((int)stk + 4)) = (unsigned char)t3;
    if (a4 != 0) {
        t5 = menuChangeValue((((t4 == 1)) ? 1 : 0), ((int)stk + 4), 0x2);
        if (t5 == 1) {
            t6 = *(int *)(((int)stk + 4));
            *(unsigned char *)((t1 + 0x0)) = t6;
            if ((((t4 == 1)) ? 1 : 0) == 0) {
                t7 = *(int *)(((int)stk + 4));
                if (t7 != 0) {
                    ndPuru2Start(0x2, 0x1, 0x0);
                } else {
                    ndPuru2Stop();
                }
            }
        }
    }
    if ((((t4 == 1)) ? 1 : 0) == 1) {
        if (a4 != 0) {
            t22 = *(int *)(((int)stk + 4));
            t23 = putMenuValue(0xA044, 0xC09E15C, 0x2, t22);
            t31 = t23;
        } else {
            t24 = vibIsReady();
            if (t24 == 1) {
                t25 = *(int *)(((int)stk + 4));
                t27 = 0x2024;
                t28 = t25;
            } else {
                t26 = *(int *)(((int)stk + 4));
                t27 = 0x2084;
                t28 = t26;
            }
            t30 = putMenuValue(t27, 0xC09E15C, 0x2, t28);
            t31 = t30;
        }
        t39 = t31;
    } else {
        if (a4 != 0) {
            t33 = *(int *)(((int)stk + 4));
            t35 = 0xC017;
            t36 = t33;
        } else {
            t34 = *(int *)(((int)stk + 4));
            t35 = 0x4017;
            t36 = t34;
        }
        t38 = putMenuValue(t35, 0xC09EB54, 0x2, t36);
        t39 = t38;
    }
    return t39;
}
