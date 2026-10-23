/* Straight-line functions with calls and guards (batch gen_aev): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int lcdFillData(int, int);
int lcdSync(int);
int lcdResetData(int a4, int a5);

int lcdResetData(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t9;
    int t10;
    int stk[10];

    if (a5 == 1) {
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        t0 = 0x0;
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            t3 = 0x1;
            t4 = (t1 + 0x1);
            t5 = (t2 + 0x1);
            t6 = (t0 + 0x1);
            for (;;) {
                lcdFillData(0x80, t4);
                lcdSync(t6);
                t9 = lcdSync(t5);
                t3 = (t3 + 0x1);
                t5 = (t5 + 0x1);
                t6 = (t6 + 0x1);
                t4 = (t4 + 0x1);
                if ((int)t3 >= (int)0x3) {
                    break;
                }
            }
            t10 = *(int *)(((int)stk + 4));
            t0 = (t0 + 0x6);
            *(unsigned int *)(((int)stk + 4)) = (t10 + 0x1);
            t1 = (t1 + 0x6);
            t2 = (t2 + 0x6);
            if ((int)(t10 + 0x1) >= (int)0x4) {
                break;
            }
        }
        return t9;
    }
    lcdFillData(0x80, ((int)((unsigned int)a4 / (unsigned int)0x6)));
    lcdSync(a4);
    return lcdSync(a4);
}
