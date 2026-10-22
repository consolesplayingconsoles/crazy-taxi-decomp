/* Straight-line functions with calls and guards (batch gen_rc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void FUN_0c07387c(int a4, int a5, float f4);

void FUN_0c07387c(int a4, int a5, float f4)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)((a5 + 0x0));
    if ((int)((short)a4 - (short)t0) >= (int)(-((short)a4 - (short)t0))) {
        t1 = *(int *)((a5 + 0x0));
        t3 = (t1 - (int)((float)(-((short)a4 - (short)t0)) * f4));
    } else {
        t2 = *(int *)((a5 + 0x0));
        t3 = (t2 + (int)((float)((short)a4 - (short)t0) * f4));
    }
    *(unsigned int *)((a5 + 0x0)) = t3;
}
