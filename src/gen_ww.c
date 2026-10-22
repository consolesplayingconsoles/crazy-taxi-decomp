/* Straight-line functions with calls and guards (batch gen_ww): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int getCoursePointMove(int a4, int a5, int a6);

int getCoursePointMove(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    int t13;
    int t23;
    int t25;
    int t26;
    int t27;
    int t35;
    int t3;
    int t24;

    t0 = *(int *)((a4 + 0x0));
    t1 = *(int *)0xC2A6690;
    t2 = *(int *)((a5 + 0x0));
    if ((int)t2 >= 0) {
        t4 = a6;
        t5 = ((((t0 << 1) + t0) << 2) + t1);
        for (;;) {
            if ((int)(*(int *)((a5 + 0x0))) < (int)(*(int *)(((*(int *)((t5 + 0x4))) + 0x0)))) {
                break;
            }
            *(unsigned int *)((a5 + 0x0)) = ((*(int *)((a5 + 0x0))) - (*(int *)(((*(int *)((t5 + 0x4))) + 0x0))));
            t3 = (*(int *)((t5 + 0x8)));
            t13 = *(short *)((((t4 << 1) + (t3 + 0x4)) + 0x0));
            *(unsigned int *)((a4 + 0x0)) = (unsigned short)t13;
            if ((unsigned short)t13 == 0) {
                t4 = (t4 + 0x1);
                t3 = (*(int *)((t5 + 0x8)));
                *(unsigned int *)((a4 + 0x0)) = (unsigned short)(*(short *)(((((t4 & 0x1) << 1) + (t3 + 0x4)) + 0x0)));
            }
            t5 = (*(int *)((a4 + 0x0)));
            t23 = t5;
            t5 = (t5 << 1);
            t5 = (t5 + t23);
            t5 = (t5 << 2);
            t5 = (t5 + (*(int *)0xC2A6690));
        }
        t35 = t3;
    } else {
        t25 = t1;
        t26 = t2;
        t27 = ((((t0 << 1) + t0) << 2) + t1);
        for (;;) {
            if ((int)(*(int *)((a5 + 0x0))) >= 0) {
                break;
            }
            t24 = (*(int *)((t27 + 0x8)));
            t24 = (*(short *)((t24 + 0x8)));
            t24 = (unsigned short)t24;
            t27 = t24;
            t26 = t24;
            t27 = (t27 << 1);
            *(unsigned int *)((a4 + 0x0)) = t24;
            t25 = (*(int *)0xC2A6690);
            t27 = (t27 + t26);
            t27 = (t27 << 2);
            t27 = (t27 + t25);
            t25 = (*(int *)((a5 + 0x0)));
            t26 = (*(int *)((t27 + 0x4)));
            t26 = (*(int *)((t26 + 0x0)));
            t25 = (t25 + t26);
            *(unsigned int *)((a5 + 0x0)) = t25;
        }
        t35 = t24;
    }
    return t35;
}
