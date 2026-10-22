/* Straight-line functions with calls and guards (batch gen_ue): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Chat_Choin(void);
int psgEnterState3(int);
int Psg_ChoinIt(int a4);

int Psg_ChoinIt(int a4)
{
    int t0;
    int t12;

    t0 = *(signed char *)0xC2AD1DF;
    if ((-(((((t0 & 2) == 0)) ? 1 : 0) - 1)) == 1) {
        if ((*(int *)0xC2AD1D8) != 0) {
            t12 = *(int *)(((*(int *)0xC2AD1D8) + 0x20));
            if (t12 == 3) {
                if ((*(int *)(((*(int *)0xC2AD1D8) + 0x24))) == 0) {
                    *(unsigned int *)0xC2AE340 = a4;
                    *(unsigned int *)(((*(int *)0xC2AD1D8) + 0x24)) = 0xF;
                    psgEnterState3((*(int *)0xC2AD1D8));
                    *(volatile int *)0xC2AD1D8;
                    return Chat_Choin();
                }
                return 0x1D8;
            }
            return t12;
        }
        return 0x1D8;
    }
    return (-(((((t0 & 2) == 0)) ? 1 : 0) - 1));
}
