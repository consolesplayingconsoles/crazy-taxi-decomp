/* Straight-line functions with calls and guards (batch gen_xs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int menuChangeValue(int, int, int);
int ndPuru2Start(int, int, int);
int ndPuru2Stop(void);
int putMenuValue(int, int, int, int);
int vibIsReady(void);
int menuItemVibration(int a4);

int menuItemVibration(int a4)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t5;
    int t6;
    int t8;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t31;
    int t34;
    int t35;
    int t39;
    int t40;
    int t32;
    int t28;
    int t29;
    int t36;
    int t37;
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
                t8 = *(int *)(((int)stk + 4));
                if (t8 != 0) {
                    ndPuru2Start(0x2, 0x1, 0x0);
                } else {
                    ndPuru2Stop();
                }
            }
        }
    }
    if ((((t4 == 1)) ? 1 : 0) == 1) {
        if (a4 != 0) {
            t23 = *(int *)(((int)stk + 4));
            t24 = putMenuValue(0xA044, 0xC09E15C, 0x2, t23);
            t32 = t24;
        } else {
            t25 = vibIsReady();
            if (t25 == 1) {
                t26 = *(int *)(((int)stk + 4));
                t28 = 0x2024;
                t29 = t26;
            } else {
                t27 = *(int *)(((int)stk + 4));
                t28 = 0x2084;
                t29 = t27;
            }
            t31 = putMenuValue(t28, 0xC09E15C, 0x2, t29);
            t32 = t31;
        }
        t40 = t32;
    } else {
        if (a4 != 0) {
            t34 = *(int *)(((int)stk + 4));
            t36 = 0xC017;
            t37 = t34;
        } else {
            t35 = *(int *)(((int)stk + 4));
            t36 = 0x4017;
            t37 = t35;
        }
        t39 = putMenuValue(t36, 0xC09EB54, 0x2, t37);
        t40 = t39;
    }
    return t40;
}
