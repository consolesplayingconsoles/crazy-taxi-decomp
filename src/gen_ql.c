/* Straight-line functions with calls and guards (batch gen_ql): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Chat_Choin(void);
int psgEnterState3(int);
int Psg_ChoinIt(int a4);

int Psg_ChoinIt(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    t0 = *(signed char *)0xC2AD1DF;
    if ((-(((((t0 & 2) == 0)) ? 1 : 0) - 1)) == 1) {
        t1 = *(int *)0xC2AD1D8;
        if (t1 != 0) {
            t2 = *(int *)0xC2AD1D8;
            t3 = *(int *)((t2 + 0x20));
            if (t3 == 3) {
                t4 = *(int *)0xC2AD1D8;
                t5 = *(int *)((t4 + 0x24));
                if (t5 == 0) {
                    *(unsigned int *)0xC2AE340 = a4;
                    t6 = *(int *)0xC2AD1D8;
                    *(unsigned int *)((t6 + 0x24)) = 0xF;
                    t7 = *(int *)0xC2AD1D8;
                    psgEnterState3(t7);
                    *(volatile int *)0xC2AD1D8;
                    return Chat_Choin();
                }
                return 0x1D8;
            }
            return t3;
        }
        return 0x1D8;
    }
    return (-(((((t0 & 2) == 0)) ? 1 : 0) - 1));
}
