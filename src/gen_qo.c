/* Straight-line functions with calls and guards (batch gen_qo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SetWindow(int);
int callWarnning(int a4);

int callWarnning(int a4)
{
    int t4;
    int t1;

    SetWindow(0x0);
    t4 = 0x7;
    if (a4 != 0xFFFFFF01) {
        t1 = 0x8;
        if (a4 != 0xFFFFFF04) {
            t1 = 0x6;
        }
        t4 = t1;
    }
    return SetWindow(t4);
}
