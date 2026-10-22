/* Straight-line functions with calls and guards (batch gen_aby): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXPD_ExecHndl(int);
int FUN_0c17457a(void);

int FUN_0c17457a(void)
{
    int t0;
    int t1;
    int t3;

    t0 = 0xC2FD29C;
    for (;;) {
        t1 = *(int *)((t0 + 0x0));
        t3 = t1;
        if (t1 == 1) {
            t3 = (ADXPD_ExecHndl(t0));
        }
        t0 = (t0 + 0x34);
        if ((unsigned int)t0 >= (unsigned int)0xC2FD43C) {
            break;
        }
    }
    return t3;
}
