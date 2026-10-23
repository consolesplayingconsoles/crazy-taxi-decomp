/* Straight-line functions with calls and guards (batch gen_afj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int lcdFillData(int, int);
int lcdSetData(int, int, int, int, int);
int lcdSync(int);
int pdGetPeripheral(int);
int Exec_LCDLogoDemo(void);

int Exec_LCDLogoDemo(void)
{
    int t0;
    int t1;
    int t4;
    int t8;
    int t15;
    int t26;
    int t17;
    int t21;
    int t18;
    int t19;
    int t31;
    int t34;
    int t33;

    t0 = *(int *)0xC132320;
    t1 = *(int *)0xC132324;
    t4 = *(int *)(((*(int *)(((pdGetPeripheral((((t0 << 1) + (t0 << 2)) + t1))) + 0x30))) + 0x0));
    if ((t4 & 4) != 0) {
        lcdFillData(0x0, (((t0 << 1) + (t0 << 2)) + t1));
        t8 = 0xC0D2DDC;
        if ((int)((int)((int)(*(int *)0xC2A9FAC) % (int)0x4)) < (int)0x2) {
            t8 = 0xC0D2D18;
        }
        lcdSetData(t8, 0x0, 0x0, 0x1, (((t0 << 1) + (t0 << 2)) + t1));
        lcdSync((((t0 << 1) + (t0 << 2)) + t1));
    }
    t15 = *(int *)0xC132320;
    t26 = t15;
    if (t15 == 3) {
        t17 = *(int *)0xC132324;
        t21 = t17;
        if (t17 == 2) {
            t18 = *(int *)0xC2A9FAC;
            *(unsigned int *)0xC2A9FAC = (t18 + 0x1);
            t19 = t17;
            if ((t18 + 0x1) == 0x280) {
                *(unsigned int *)0xC2A9FAC = 0x0;
                t19 = 0x0;
            }
            t21 = t19;
        }
        t26 = t21;
    }
    t31 = *(int *)0xC132324;
    *(unsigned int *)0xC132324 = (t31 + 0x1);
    t34 = t26;
    if ((int)(t31 + 0x1) > (int)0x2) {
        *(unsigned int *)0xC132324 = 0x1;
        t33 = (int)((int)((*(int *)0xC132320) + 0x1) % (int)0x4);
        *(unsigned int *)0xC132320 = t33;
        t34 = t33;
    }
    return t34;
}
