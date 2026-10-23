/* Straight-line functions with calls and guards (batch gen_yu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Start_Fog(int);
float getNearLineIndex(int, int, int, int);
void RailroadAreaCheck(int a4, int a5, int a6, int a7);

void RailroadAreaCheck(int a4, int a5, int a6, int a7)
{
    int t2;
    int t4;
    int t7;
    int t10;
    int t11;
    int t12;
    int t16;
    int t17;
    int t26;
    int t27;
    int t52;
    int t96;
    int t97;
    int t24;
    int t35;
    int t36;
    int stk[15];

    *(unsigned int *)(((int)stk + 12)) = a5;
    if (a4 == 0) {
        *(unsigned int *)0xC2A4E40 = 0x0;
        *(unsigned int *)0xC2A4E4C = 0x0;
        t2 = 0x0;
        for (;;) {
            t4 = (signed char)(((t2 << 1) + t2) << 2);
            t2 = (t2 + 0x1);
            *(unsigned int *)(((t4 + 0xC0F2AE8) + 0x0)) = 0x0;
            if ((int)t2 >= (int)0x4) {
                break;
            }
        }
    } else {
        if ((*(int *)0xC1EE20C) != 1) {
        } else {
            t7 = *(int *)0xC2A4E40;
            if (t7 == 1) {
                *(unsigned int *)0xC2A4E40 = 0x0;
            } else {
                if (t7 == 2) {
                    *(unsigned int *)0xC2A4E40 = 0x3;
                }
            }
            t10 = 0x0;
            t11 = 0xFFFFFFFF;
            t12 = 0x0;
            for (;;) {
                *(unsigned int *)(((int)stk + 20)) = (*(int *)((((signed char)(((t12 << 1) + t12) << 2) + 0xC0A380C) + 0x0)));
                *(unsigned int *)(((int)stk + 8)) = 0x0;
                *(volatile int *)(((int)stk + 12));
                t16 = *(int *)(((int)stk + 20));
                t17 = *(int *)0xC2A6690;
                *(unsigned int *)(((int)stk + 16)) = ((((t16 << 1) + t16) << 2) + t17);
                if (100.0f > (getNearLineIndex(0x0, (*(int *)(((*(int *)(((int)stk + 16))) + 0x0))), (*(int *)(((*(int *)((((((t16 << 1) + t16) << 2) + t17) + 0x4))) + 0x0))), (((int)stk + 4) + 0x4)))) {
                    t26 = (*(int *)((((signed char)(((t12 << 1) + t12) << 2) + 0xC0A380C) + 0x4)));
                    t27 = 0x0;
                    for (;;) {
                        if ((int)t27 >= (int)(*(int *)(((((signed char)(((t12 << 1) + t12) << 2) + 0xC0A380C) + 0x8) + 0x0)))) {
                            break;
                        }
                        if (((int)((*(int *)(((int)stk + 8)))) >= (int)(*(int *)((t26 + 0x0)))) && (t35 = *(int *)(((int)stk + 8)), t24 = t35, t36 = *(int *)((t26 + 0x4)), (int)t24 <= (int)t36)) {
                            t11 = t12;
                            t10 = 0x3;
                        }
                        t27 = (t27 + 0x1);
                        t26 = (t26 + 0x8);
                    }
                }
                t12 = (t12 + 0x1);
                if ((unsigned int)t12 >= (unsigned int)0x2) {
                    break;
                }
            }
            if (t10 != (*(int *)0xC2A4E40)) {
                if (t10 == 3) {
                    *(unsigned int *)0xC2A4E40 = 0x2;
                } else {
                    *(unsigned int *)0xC2A4E40 = 0x1;
                }
            }
            t52 = *(int *)0xC2A4E40;
            if (t52 == 2) {
                if (t11 == 0) {
                    Start_Fog(0x2);
                } else {
                    if (t11 == 1) {
                        Start_Fog(0x1);
                    }
                }
            } else {
                if (t52 == 1) {
                    Start_Fog(0x0);
                }
            }
            t96 = *(int *)0xC2A1B30;
            t97 = *(int *)((t96 + 0x64));
            if (((*(int *)(((((int)t97 >> 5) << 2) + 0xC0A37B8))) & (((int)(t97 & 0x1F) >= 0) ? (0x1 << ((t97 & 0x1F) & 31)) : ((-(int)(t97 & 0x1F) & 31) ? ((int)0x1 >> (-(int)(t97 & 0x1F) & 31)) : ((int)0x1 >> 31)))) != 0) {
                if (2000.0f > (*(float *)((t96 + 0x7C)))) {
                    *(unsigned int *)0xC2A4E4C = 0x1;
                } else {
                    *(unsigned int *)0xC2A4E4C = 0x0;
                }
            } else {
                *(unsigned int *)0xC2A4E4C = 0x0;
            }
        }
    }
}
