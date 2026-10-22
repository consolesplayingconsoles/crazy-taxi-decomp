/* Straight-line functions with calls and guards (batch gen_xe): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int menuGoBack(void);
int menuEnterStep(int a4, int a5);

int menuEnterStep(int a4, int a5)
{
    int t0;
    int t33;
    int t2;
    int t3;
    int t5;
    int t6;
    int t7;
    int t14;
    int t25;
    int t27;
    int t28;
    int t1;

    t0 = *(int *)0xC2A1214;
    t33 = 0x0;
    if ((t0 != 1) && (t1 = *(int *)0xC2A11EC, (t1 & 8) != 0)) {
        t2 = *(int *)0xC2A11EC;
        *(unsigned int *)0xC2A11EC = (t2 & 0xFFFFFFFB);
        t3 = *(int *)0xC0EF548;
        *(unsigned int *)0xC0EF548 = (t3 - 1);
        if ((int)(t3 - 1) < 0) {
            *(unsigned int *)0xC0EF548 = 0x14;
        } else {
            t5 = *(int *)0xC0EF548;
            if (t5 == 0) {
                t6 = *(int *)0xC2A11D8;
                *(unsigned int *)0xC2A11D8 = (t6 + 0x1);
                *(unsigned int *)(((((t6 + 0x1) << 2) + 0xC2A11DC) + 0x0)) = 0x0;
                t7 = *(int *)0xC2A11EC;
                if ((t7 & 1) != 0) {
                    menuGoBack();
                }
                t14 = *(int *)0xC2A11EC;
                *(unsigned int *)0xC2A11EC = ((t14 & 0xFFFFFFF6) | 0x2);
            }
        }
        t25 = *(int *)0xC2A1AD8;
        *(unsigned int *)0xC2A1AD8 = (t25 + 0x40);
        if ((int)(t25 + 0x40) > (int)0x280) {
            *(unsigned int *)0xC2A1AD8 = 0x280;
        }
        t27 = *(int *)0xC0EF548;
        if ((int)t27 < (int)0xF) {
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
