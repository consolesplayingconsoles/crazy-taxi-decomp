/* Straight-line functions with calls and guards (batch gen_aqw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlCloseEvent(int);
int nlMalloc(int);
int set_event(int, int);
int setObjGroupOpen(int a4);

int setObjGroupOpen(int a4)
{
    int t0;
    int t2;
    int t5;
    int t6;
    int t8;
    int t3;

    t0 = set_event(0x1C, 0xC038148);
    if (t0 != 0) {
        t2 = nlMalloc((((short)(*(short *)((a4 + 0x10))) * (short)0x70) + 0x4));
        if (t2 != 0) {
            *(unsigned int *)((t0 + 0x0)) = t2;
            *(unsigned int *)((t2 + 0x0)) = 0x0;
            *(unsigned int *)((t0 + 0x14)) = a4;
            *(unsigned int *)((a4 + 0x1C)) = (t2 + 0x4);
            *(unsigned int *)((t0 + 0x18)) = (t2 + 0x4);
            t5 = 0x0;
            for (;;) {
                t6 = *(short *)((a4 + 0x10));
                if ((int)t5 >= (int)t6) {
                    break;
                }
                t8 = (t5 * 0x70);
                t5 = (t5 + 0x1);
                t3 = t8;
                t3 = (t3 + ((*(int *)((t0 + 0x18)))));
                *(unsigned int *)((t3 + 0x68)) = 0xFFFFFFFF;
            }
            return t6;
        }
        return nlCloseEvent(t0);
    }
    return t0;
}
