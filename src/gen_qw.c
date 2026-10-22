/* Straight-line functions with calls and guards (batch gen_qw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c05f482(int);
int FUN_0c05f8cc(void);

int FUN_0c05f8cc(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;
    int t7;
    int t8;

    t0 = 0x0;
    t1 = 0xC0D2B18;
    t2 = 0xC0D2B18;
    for (;;) {
        t3 = *(int *)((t1 + 0x0));
        FUN_0c05f482(t3);
        t5 = *(int *)0xC2A9C70;
        t6 = *(int *)((t5 + 0x30));
        t7 = *(int *)((t6 + 0x0));
        if ((t7 & 0x1) != 0) {
            break;
        }
        t0 = (t0 + 0x1);
        t2 = (t2 + 0x4);
        t1 = (t1 + 0x4);
        if ((int)t0 >= (int)0x4) {
            return 0xFFFFFFFF;
        }
    }
    t8 = *(int *)((t2 + 0x0));
    return t8;
}
