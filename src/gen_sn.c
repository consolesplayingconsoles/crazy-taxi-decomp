/* Straight-line functions with calls and guards (batch gen_sn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c1676d0(void);
int FUN_0c14d2d2(int a4);

int FUN_0c14d2d2(int a4)
{
    int t0;
    int t1;

    t0 = *(int *)((a4 + 0x1C));
    if ((t0 != 0) && (t1 = *(int *)((t0 + 0x2C)), t1 != 0)) {
        *(volatile int *)((t0 + 0x30));
        *(volatile int *)((t0 + 0x2C));
    }
    return FUN_0c1676d0();
}
