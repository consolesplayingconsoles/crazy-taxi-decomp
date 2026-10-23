/* Straight-line functions with calls and guards (batch gen_amt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int SetWindow();
int callWarnning(int a4, int a5, int a6, int a7);

int callWarnning(int a4, int a5, int a6, int a7)
{
    int t0;
    int t4;
    int t1;

    t0 = ((int (*)(int, int, int, int))(SetWindow))(0x0, a5, a6, a7);
    t4 = 0x7;
    if (a4 != 0xFFFFFF01) {
        t1 = 0x8;
        if (a4 != 0xFFFFFF04) {
            t1 = 0x6;
        }
        t4 = t1;
    }
    return ((int (*)(int))(SetWindow))(t4);
}
