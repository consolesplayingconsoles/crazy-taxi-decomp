/* Straight-line functions with calls and guards (batch gen_qn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03101a(float);
int FUN_0c039434(int);
int FUN_0c076f70(void);
int FUN_0c041cb4(void);

int FUN_0c041cb4(void)
{
    int t0;

    t0 = *(int *)0xC2A11B0;
    if (t0 == 1) {
        FUN_0c076f70();
        FUN_0c03101a(1.0f);
        return FUN_0c039434(0x3);
    }
    return t0;
}
