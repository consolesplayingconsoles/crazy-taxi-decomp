/* Straight-line functions with calls and guards (batch gen_p): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c15f4c8(int);

int FUN_0c15f4e2(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = *(signed char *)((a4 + 0x0));
    t1 = FUN_0c15f4c8(t0);
    t2 = *(signed char *)(((a4 + 0x1) + 0x0));
    t3 = FUN_0c15f4c8(t2);
    t4 = *(signed char *)((((a4 + 0x1) + 0x1) + 0x0));
    t5 = FUN_0c15f4c8(t4);
    return ((((t1 * 0x3C) + t3) * 0x4B) + t5);
}
