/* Straight-line functions with calls and guards (batch gen_abw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlsndG2DmaGetStatus(int);
int mwRnaErrCallFunc(int, ...);
int mwSbGetTrnsStat(int a4, int a5);

int mwSbGetTrnsStat(int a4, int a5)
{
    int t1;
    int t11;
    int t6;

    t1 = nlsndG2DmaGetStatus((*(int *)((((a5 << 2) + (a4 + 0x2C)) + 0x0))));
    t11 = 0x1;
    if (t1 == 0x100) {
    } else {
        t6 = 0x2;
        if (t1 == 0x101) {
        } else {
            mwRnaErrCallFunc(0xC176D44);
            t6 = 0x0;
        }
        t11 = t6;
    }
    return t11;
}
