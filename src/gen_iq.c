/* Straight-line functions with calls and guards (batch gen_iq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int lcdFillData(int, int);
int pdGetPeripheral(int);
void Exec_LCD(void);

void Exec_LCD(void)
{
    int t2;
    int t3;
    int t4;
    int t5;

    if ((*(int *)0xC2A9FF0) == 0) {
        t2 = *(int *)0xC2A9FA8;
        if ((0x2 & t2) != 2) {
            if ((0x4 & t2) == 4) {
                return;
            }
            t3 = *(int *)0xC132320;
            t4 = *(int *)0xC132324;
            t5 = pdGetPeripheral((((t3 << 1) + (t3 << 2)) + t4));
            if (((*(int *)(((*(int *)((t5 + 0x30))) + 0x0))) & 4) != 0) {
                lcdFillData(0x0, (((t3 << 1) + (t3 << 2)) + t4));
                if ((int)((int)((int)(*(int *)0xC2A9FAC) % (int)0x4)) < (int)0x2) {
                    ((int (*)(int, int, int, int))(0xC06052E))(0xC0D2D18, 0x0, 0x0, 0x1);
    return;
                }
                ((int (*)(int, int, int, int))(0xC06052E))(0xC0D2DDC, 0x0, 0x0, 0x1);
    return;
            }
            ((int (*)(int))(0xC06053C))(t5);
    return;
        }
        return;
    }
}
