/* Straight-line functions with calls and guards (batch gen_jk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SetScreen(int);
extern int SetWindow();
int windowReturn(int a4, int a5, int a6, int a7);

int windowReturn(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t3;
    int t5;
    int t11;

    t0 = *(int *)0xC2A1218;
    if (t0 != 0) {
        t1 = ((int (*)(int, int, int, int))(SetWindow))(t0, a5, a6, a7);
        *(unsigned int *)0xC2A1218 = 0x0;
        t11 = t1;
    } else {
        SetScreen(0x4);
        t3 = ((int (*)(int))(SetWindow))(0x0);
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
