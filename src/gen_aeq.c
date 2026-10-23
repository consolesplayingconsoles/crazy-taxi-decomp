/* Straight-line functions with calls and guards (batch gen_aeq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int breathExecOne(int, int);
int AreYouBreathing(void);

int AreYouBreathing(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    for (;;) {
        t1 = breathExecOne(((signed char)((((t0 << 2) + t0) << 2) << 1) + 0xC2AE710), ((signed char)(((t0 << 1) + t0) << 2) + 0xC0D6134));
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x3) {
            break;
        }
    }
    return t1;
}
