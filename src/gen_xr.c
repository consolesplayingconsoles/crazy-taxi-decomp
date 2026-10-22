/* Straight-line functions with calls and guards (batch gen_xr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int TrainCarInit(int, int, int);
int set_event(int, int);
int trainControlInit(void);

int trainControlInit(void)
{
    int t0;
    int t17;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t16;

    t0 = set_event(0x18, 0xC0482F4);
    t17 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x14)) = 0x0;
        *(unsigned int *)0xC2A4E48 = 0x0;
        t1 = 0x13B;
        for (;;) {
            t2 = *(int *)0xC2A6690;
            t3 = *(int *)((((((t1 << 1) + t1) << 2) + t2) + 0x4));
            t4 = *(int *)((((((t1 << 1) + t1) << 2) + t2) + 0x0));
            t5 = *(int *)((t3 + 0x0));
            t6 = TrainCarInit(0x10, t1, (((((t5 << 1) + t5) << 2) + t4) - 120));
            t1 = (t1 + 0x1);
            t8 = *(int *)((t6 + 0x84));
            *(unsigned int *)((t6 + 0x84)) = (t8 & 0xFFFFFFFE);
            if ((int)t1 >= (int)0x13D) {
                break;
            }
        }
        t9 = 0x13D;
        for (;;) {
            t10 = *(int *)0xC2A6690;
            t11 = *(int *)((((((t9 << 1) + t9) << 2) + t10) + 0x4));
            t12 = *(int *)((((((t9 << 1) + t9) << 2) + t10) + 0x0));
            t13 = *(int *)((t11 + 0x0));
            t14 = TrainCarInit(0x13, t9, (((((t13 << 1) + t13) << 2) + t12) - 120));
            t9 = (t9 + 0x1);
            t16 = *(int *)((t14 + 0x84));
            *(unsigned int *)((t14 + 0x84)) = (t16 & 0xFFFFFFFE);
            if ((int)t9 >= (int)0x13F) {
                break;
            }
        }
        t17 = 0x84;
    }
    return t17;
}
