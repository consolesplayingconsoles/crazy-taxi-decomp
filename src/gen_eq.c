/* Straight-line functions with calls and guards (batch gen_eq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void Put_TotalDrum_Roll(void);

void Put_TotalDrum_Roll(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    if (((*(int *)0xC2A8DD8) != 0) && ((t1 = *(int *)0xC2A8DD4, t1 != 0) && ((t2 = *(int *)0xC2A8DD0, t2 != 0) && ((t3 = *(int *)0xC2A8DCC, t3 != 0) && ((t4 = *(int *)0xC2A8DC8, t4 != 0) && ((t5 = *(int *)0xC2A8DC4, t5 != 0) && ((t6 = *(int *)0xC2A8DC0, t6 != 0) && (t7 = *(int *)0xC2A8DBC, t7 != 0)))))))) {
    } else {
        *(unsigned int *)0xC2A8DE0 = ((int)((int)((*(int *)0xC2A8DE0) + 0x1) % (int)0x4));
    }
}
