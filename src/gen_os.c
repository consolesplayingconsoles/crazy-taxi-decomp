/* Straight-line functions with calls and guards (batch gen_os): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int menuGoBack(int);
int menuEnterStep(int a4, int a5);

int menuEnterStep(int a4, int a5)
{
    int t33;
    int t3;
    int t6;
    int t25;
    int t28;
    int t1;

    t33 = 0x0;
    if (((*(int *)0xC2A1214) != 1) && (t1 = *(int *)0xC2A11EC, (t1 & 8) != 0)) {
        *(unsigned int *)0xC2A11EC = ((*(int *)0xC2A11EC) & 0xFFFFFFFB);
        t3 = *(int *)0xC0EF548;
        *(unsigned int *)0xC0EF548 = (t3 - 1);
        if ((int)(t3 - 1) < 0) {
            *(unsigned int *)0xC0EF548 = 0x14;
        } else {
            if ((*(int *)0xC0EF548) == 0) {
                t6 = *(int *)0xC2A11D8;
                *(unsigned int *)0xC2A11D8 = (t6 + 0x1);
                *(unsigned int *)(((((t6 + 0x1) << 2) + 0xC2A11DC) + 0x0)) = 0x0;
                if (((*(int *)0xC2A11EC) & 1) != 0) {
                    menuGoBack(a4);
                }
                *(unsigned int *)0xC2A11EC = (((*(int *)0xC2A11EC) & 0xFFFFFFF6) | 0x2);
            }
        }
        t25 = *(int *)0xC2A1AD8;
        *(unsigned int *)0xC2A1AD8 = (t25 + 0x40);
        if ((int)(t25 + 0x40) > (int)0x280) {
            *(unsigned int *)0xC2A1AD8 = 0x280;
        }
        if ((int)(*(int *)0xC0EF548) < (int)0xF) {
            t28 = *(int *)0xC2A1ADC;
            *(unsigned int *)0xC2A1ADC = (t28 + 0x40);
            if ((int)(t28 + 0x40) > (int)0x280) {
                *(unsigned int *)0xC2A1ADC = 0x280;
            }
        }
        t33 = 0x1;
    }
    return t33;
}
