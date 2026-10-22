/* Straight-line functions with calls and guards (batch gen_wp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SetScreen(int);
int SetWindow(int);
int windowReturn(void);

int windowReturn(void)
{
    int t0;
    int t1;
    int t5;
    int t11;

    t0 = *(int *)0xC2A1218;
    if (t0 != 0) {
        t1 = SetWindow(t0);
        *(unsigned int *)0xC2A1218 = 0x0;
        t11 = t1;
    } else {
        SetScreen(0x4);
        SetWindow(0x0);
        *(unsigned int *)0xC2A11B0 = 0x0;
        *(unsigned int *)0xC1EE234 = (*(int *)0xC2A1228);
        t5 = *(int *)0xC2A122C;
        *(unsigned int *)0xC1EE238 = t5;
        if ((*(int *)0xC1EE234) == 0) {
            *(unsigned int *)0xC1EE210 = 0x0;
            *(unsigned int *)0xC1EE214 = 0x0;
            *(unsigned int *)0xC1EE20C = 0x0;
        }
        t11 = t5;
    }
    return t11;
}
