/* Straight-line functions with calls and guards (batch gen_fo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlMvChgIndexPolAttr(int, int, int);
int nlMvSetShadowIndexPol(int a4);

int nlMvSetShadowIndexPol(int a4)
{
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t10;
    int t11;
    int t12;
    int t17;
    int t18;
    int t0;
    int t1;
    int t7;
    int t9;
    int t15;

    t2 = a4;
    t3 = a4;
    for (;;) {
        t4 = *(int *)((t3 + 0x4));
        if (t4 != 0) {
            t5 = *(int *)((t3 + 0x4));
            t2 = t5;
            t6 = nlMvChgIndexPolAttr(t2, 0xC0, 0x80);
            t0 = t6;
            if (t0 != 0) {
                break;
            }
        } else {
            t7 = t1;
            t9 = t2;
        }
        t10 = *(int *)((t3 + 0x2C));
        t1 = t7;
        t2 = t9;
        if (t10 != 0) {
            t11 = *(int *)((t3 + 0x2C));
            t2 = t11;
            t12 = nlMvSetShadowIndexPol(t2);
            t0 = t12;
        } else {
            t15 = t2;
        }
        t17 = *(int *)((t3 + 0x30));
        t1 = t17;
        t2 = t15;
        if (t1 != 0) {
            t18 = *(int *)((t3 + 0x30));
            t3 = t18;
            continue;
        }
        return t0;
    }
    for (;;) {
    }
}
