/* Straight-line functions with calls and guards (batch gen_vz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlCloseEvent(int);
int nlMalloc(int);
int set_event(int, int);
int crowdCreate(int a4, int a5);

int crowdCreate(int a4, int a5)
{
    int t0;
    int t25;
    int t1;
    int t2;
    int t6;
    int t7;
    int t9;
    int t10;
    int t11;
    int t14;
    int t18;

    t0 = set_event(0x24, 0xC04F68A);
    t25 = 0x0;
    if (t0 != 0) {
        t1 = (int)((int)a5 % (int)0x20);
        t2 = 0x0;
        if ((int)t1 > 0) {
            t2 = (((int)(t1 - 1) >= 0) ? (0x1 << ((t1 - 1) & 31)) : ((-(int)(t1 - 1) & 31) ? ((int)0x1 >> (-(int)(t1 - 1) & 31)) : ((int)0x1 >> 31)));
        }
        t6 = nlMalloc((((short)(*(short *)((a4 + 0x10))) * (short)0x64) + 0x4));
        if (t6 != 0) {
            t7 = *(int *)(((((int)a5 >> 5) << 2) + 0xC2A7064));
            *(unsigned int *)(((((int)a5 >> 5) << 2) + 0xC2A7064)) = (t7 | t2);
            *(unsigned int *)((t0 + 0x0)) = t6;
            *(unsigned int *)((t6 + 0x0)) = 0x0;
            *(unsigned int *)((t0 + 0x18)) = a4;
            *(unsigned int *)((t0 + 0x20)) = (t6 + 0x4);
            *(unsigned short *)((t0 + 0x14)) = (*(short *)((a4 + 0x10)));
            *(unsigned int *)((t0 + 0x1C)) = a5;
            *(unsigned short *)((t0 + 0x16)) = 0x0;
            t9 = (t7 | t2);
            t10 = (((int)a5 >> 5) << 2);
            t11 = 0x0;
            for (;;) {
                if ((int)t11 >= (int)(*(short *)((a4 + 0x10)))) {
                    break;
                }
                t10 = (*(int *)((t0 + 0x20)));
                t14 = (t11 * 0x64);
                t11 = (t11 + 0x1);
                t9 = t14;
                t9 = (t9 + t10);
                *(unsigned int *)((t9 + 0x50)) = 0xFFFFFFFF;
            }
            t18 = (*(short *)((t0 + 0x14)));
        } else {
            *(unsigned int *)(((((int)a5 >> 5) << 2) + 0xC2A7064)) = ((*(int *)(((((int)a5 >> 5) << 2) + 0xC2A7064))) & (~t2));
            nlCloseEvent(t0);
            t18 = 0x0;
        }
        t25 = t18;
    }
    return t25;
}
