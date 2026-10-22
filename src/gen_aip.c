/* Straight-line functions with calls and guards (batch gen_aip): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c074b20(int a4);

int FUN_0c074b20(int a4)
{
    int t0;

    t0 = (a4 & 0x3);
    if ((a4 & 0x3) == 1) {
        t0 = 0x0;
    }
    *(unsigned int *)0xC14A650 = t0;
    return (a4 & 0x3);
}
